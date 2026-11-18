"""native_build.py [--jobs N] [--only PATTERN] [--keep-going]: builds the native (x86-64 Linux) game from the C in src/.

Steps:
  compile  every src/game/**/*.c with the host compiler into build/native/obj/ (errors listed per file in build/native/errors.txt)
  census   what the objects define and need (nm)
  stubs    a stub for each function the game needs and no object defines (it reports itself once and returns 0);
           symbols.txt's data names become absolute symbols at their console addresses
  table    the dispatch table: console address -> host function, for calls through pointers and addresses
  link     build/native/vtennis, with port/runtime and the play math

The game's C runs unchanged. It is compiled for x32 (x86-64 instructions and register calling convention, 32-bit int, long
and pointers: the SH-4's sizes, so every record keeps its console layout), then converted to ELF64 and linked with the
x86-64 runtime. Its memory sits at the console's addresses (port/runtime/runner.c maps it) and a call to a console address
faults into the dispatch table. See port/README.md.
"""
import argparse, concurrent.futures as cf, os, re, subprocess, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))


def fixed_src():
    """build/native/src_fixed: src/ as the port compiles it, with port/src_fixes.patch applied (the port's fixes to the
    decomp's C for the host: src/ itself stays as the decomp has it). Files are rewritten only when their text changes"""
    import shutil, tempfile
    root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
    src, out = os.path.join(root, 'src'), os.path.join(root, 'build', 'native', 'src_fixed')
    patch = os.path.join(root, 'port', 'src_fixes.patch')
    os.makedirs(out, exist_ok=True)
    texts = {}
    if os.path.exists(patch) and os.path.getsize(patch):
        names = sorted(set(re.findall(r'(?m)^\+\+\+ b/src/(\S+)', open(patch).read())))
        work = tempfile.mkdtemp(prefix='vtpatch')
        os.makedirs(os.path.join(work, 'src'))
        for n in names:
            shutil.copy(os.path.join(src, n), os.path.join(work, 'src', n))
        r = subprocess.run(['patch', '-p1', '-s', '--no-backup-if-mismatch', '-d', work, '-i', patch],
                           capture_output=True, text=True)
        if r.returncode:
            sys.exit('port/src_fixes.patch does not apply:\n' + r.stdout + r.stderr)
        for n in names:
            texts[n] = open(os.path.join(work, 'src', n), 'rb').read()
        shutil.rmtree(work)
    keep = set()
    for f in os.listdir(src):
        if not os.path.isfile(os.path.join(src, f)):
            continue
        keep.add(f)
        data = texts.get(f) or open(os.path.join(src, f), 'rb').read()
        dst = os.path.join(out, f)
        if not os.path.exists(dst) or open(dst, 'rb').read() != data:
            open(dst, 'wb').write(data)
    for f in os.listdir(out):
        if f not in keep:
            os.remove(os.path.join(out, f))
    return out


os.environ['PORT_SRC'] = fixed_src()
import sh4abi  # noqa: E402

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
OUT = os.path.join(ROOT, 'build', 'native')
OBJ = os.path.join(OUT, 'obj')
CC = os.environ.get('CC', 'clang')
GAME_CC = [CC, '--target=x86_64-linux-gnux32']

GAME_FLAGS = ['-std=gnu89', '-O1', '-g', '-w', '-fno-pie', '-fno-pic', '-fwrapv', '-fno-strict-aliasing', '-fsigned-char',
              '-ffp-contract=off', '-fno-builtin', '-fcommon', '-fno-stack-protector', '-fno-omit-frame-pointer',
              '-ftrivial-auto-var-init=zero',
              '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion', '-Wno-error=implicit-function-declaration',
              '-Wno-error=implicit-int', '-Wno-error=return-type', '-Wno-error=incompatible-function-pointer-types',
              '-I' + os.environ['PORT_SRC'], '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-include', os.path.join(ROOT, 'port', 'runtime', 'prelude.h')]
HOST_FLAGS = ['-std=gnu11', '-O2', '-g', '-Wall', '-fno-pie', '-fno-pic', '-I' + os.path.join(ROOT, 'port', 'runtime'),
              '-I' + os.path.join(ROOT, 'port', 'third_party', 'sa_numeric')]
RUNTIME = sorted('port/runtime/' + f for f in os.listdir(os.path.join(ROOT, 'port', 'runtime')) if f.endswith('.c'))
NUMERIC = ['port/third_party/sa_numeric/math.c']


def game_sources(only):
    """the C in src/ (one folder): the game's and the libraries'. A definition at an address sdk.txt gives to a library goes
    weak, so the port's host code for that function overrides it"""
    d = os.environ['PORT_SRC']
    return sorted(os.path.join(d, f) for f in os.listdir(d) if f.endswith('.c') and (not only or re.search(only, f)))


def lib_ranges():
    """sdk.txt's library ranges and single functions: [(start, end)]"""
    out = []
    for line in open(os.path.join(ROOT, 'sdk.txt')):
        p = line.split()
        if len(p) >= 3 and p[0] == 'range':
            out.append((int(p[1], 16), int(p[2], 16)))
        elif len(p) >= 2 and p[0] == 'func':
            out.append((int(p[1], 16), int(p[1], 16) + 1))
    return out


# host bodies for the game's SHC inline assembly (#pragma inline_asm), by function name. The rest of the source compiles as is.
ASM_BODIES = {
    'ia_getsr': 'return port_sr;', 'get_sr': 'return port_sr;',
    'ia_setsr': 'port_sr = v;', 'set_sr': 'port_sr = v;',
    'getfr15': 'return port_fr15;',             # the caller's leftover fr15, truncated: see port/README.md
    'mvn208': '__builtin_memcpy(d, s, 208);',
    'masksr': 'port_sr = (port_sr | 0xF0) ^ 0x10;', 'unmasksr': 'port_sr &= ~0xF0;',
    'setgbr': '(void)v;', 'iaOcbp': '(void)p;', 'iaOcbi': '(void)p;', 'iaOcbwb': '(void)p;', 'trapa48': '', 'trapa65': '',
}
ASM_PROLOGUE = 'extern int port_sr, port_fr15;\nvoid port_asm_unimplemented(const char *);\n'


def native_text(src):
    """the source as the native build compiles it: calls rewritten to their callees' SH-4 argument locations
    (sh4abi.py), inline assembly bodies replaced by ASM_BODIES; None if unchanged"""
    t0 = open(src, errors='replace').read()
    t = sh4abi.forward_text(t0, os.path.basename(src)) or t0
    t = sh4abi.abi_text(t, os.path.basename(src)) or t
    t = sh4abi.frame_text(t, os.path.basename(src)) or t
    t = sh4abi.cast_text(t) or t
    t = sh4abi.float_ret_text(t) or t
    # the structures of words: prelude.h's, one type for every file
    t = re.sub(r'(?m)^typedef struct \{ int w\[(\d+)\]; \} Stk\1;$', '', t)
    if re.search(r'(?m)^typedef struct \{ int w; \} Stk1;$', t):   # a hand-written one-word form
        t = re.sub(r'(?m)^typedef struct \{ int w; \} Stk1;$', '', t)
        t = re.sub(r'\b(s\d+)\.w = ', r'\1.w[0] = ', t)
    if '#pragma inline_asm' not in t:
        return t if t is not t0 else None
    def body(m):
        name = m.group(1)
        # inline assembly with no host body (the library's renderer kernels and hardware access, which the port
        # replaces at the API): it reports itself when reached
        body = ASM_BODIES.get(name, 'port_asm_unimplemented("%s");' % name)
        return '%s\n{ %s }' % (m.group(2).strip(), body)
    t = re.sub(r'#pragma inline_asm\((\w+)\)\s*\n((?:static\s+)?[^\n{;]*\b\1\s*\([^)]*\))\s*\{.*?\n\}', body, t, flags=re.S)
    return ASM_PROLOGUE + t


def is_mmio(a):
    """a console address whose register needs the port's model of the hardware (port/runtime/hw.c): the system bus block
    (interrupt status, DMA, Maple, G2) and the PowerVR's registers in any mirror, the SH-4's timers and DMA controller,
    the AICA's clock"""
    a &= 0xFFFFFFFF
    if a >> 24 == 0xFF:
        return a >> 16 in (0xFFD8, 0xFFA0)
    if a >> 29 == 7:                                  # the store queues (0xE0000000..) and other P4 areas
        return False
    p = a & 0x1FFFFFFF
    return 0x005F6800 <= p < 0x005F9000 or 0x00710000 <= p < 0x00710010


MMIO_T = {'i8': '8', 'i16': '16', 'i32': '32', 'float': 'f'}


def mmio_calls(ir):
    """the IR with each load and store at a constant hardware register address turned into a call to port_mmio_r* /
    port_mmio_w* (hw.c): those registers act (write 1 to clear, counters that run, DMA that starts on a write), plain
    memory would not"""
    used = set()

    def load(m):
        ty, addr = m.group(2), int(m.group(3))
        if ty not in MMIO_T or not is_mmio(addr):
            return m.group(0)
        used.add(('r', ty))
        return '%s = call %s @port_mmio_r%s(i32 %d)' % (m.group(1), ty, MMIO_T[ty], addr)

    def store(m):
        ty, val, addr = m.group(2), m.group(3), int(m.group(4))
        if ty not in MMIO_T or not is_mmio(addr):
            return m.group(0)
        used.add(('w', ty))
        return '%scall void @port_mmio_w%s(i32 %d, %s %s)' % (m.group(1), MMIO_T[ty], addr, ty, val)

    ir = re.sub(r'(%[\w.]+) = load (?:volatile )?(\w+), ptr inttoptr \(i32 (-?\d+) to ptr\)(?:, align \d+)?', load, ir)
    ir = re.sub(r'(?m)^(\s+)store (?:volatile )?(\w+) ([^,]+), ptr inttoptr \(i32 (-?\d+) to ptr\)(?:, align \d+)?', store, ir)
    for kind, ty in sorted(used):
        if kind == 'r':
            ir += '\ndeclare %s @port_mmio_r%s(i32)\n' % (ty, MMIO_T[ty])
        else:
            ir += '\ndeclare void @port_mmio_w%s(i32, %s)\n' % (MMIO_T[ty], ty)
    return ir


def split_args(s):
    """an IR argument list split at its top-level commas"""
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{<':
            depth += 1
        elif ch in ')]}>':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def kr_float_calls(ir):
    """the IR with floats passed as floats to functions declared without parameters (K&R `extern int f();`). C promotes
    such an argument to double; SHC with -fpu=single has double = float, so on the console the callee gets the float in
    its float register, and the game's C was written for that. A real variadic function (a fixed parameter, then ...)
    keeps C's promotion."""
    kr = set(re.findall(r'(?m)^declare [^@\n]*@([\w.$]+)\(\.\.\.\)', ir))
    if not kr:
        return ir
    widened = dict(re.findall(r'(%[\w.]+) = fpext float (%[\w.]+|[-+0-9.e]+|0x[0-9A-Fa-f]+) to double', ir))
    call = re.compile(r'call (\w+) \(([^()]*)\.\.\.\) @([\w.$]+)\((.*)\)')

    def fix(m):
        ret, name, args = m.group(1), m.group(3), m.group(4)
        if name not in kr:
            return m.group(0)
        out, types = [], split_args(m.group(2))
        for i, a in enumerate(split_args(args)):
            mm = re.match(r'double (noundef )?(\S+)$', a)
            if mm:
                v = mm.group(2)
                if v in widened:
                    v = widened[v]
                elif not re.match(r'^[-+0-9.e]+$|^0x', v):
                    return m.group(0)       # a double that was no float: leave the call as it is
                a = 'float %s%s' % (mm.group(1) or '', v)
                if i < len(types):
                    types[i] = 'float'
            out.append(a)
        return 'call %s (%s...) @%s(%s)' % (ret, ''.join(x + ', ' for x in types), name, ', '.join(out))

    return '\n'.join(call.sub(fix, line) if '...) @' in line else line for line in ir.split('\n'))


def obj_of(src):
    return os.path.join(OBJ, os.path.splitext(os.path.basename(src))[0] + '.o')


def compile_one(src):
    o = obj_of(src)
    if os.path.exists(o) and os.path.getmtime(o) > max(os.path.getmtime(src), os.path.getmtime(PRELUDE), os.path.getmtime(__file__),
                                                       os.path.getmtime(sh4abi.__file__)):
        return src, 0, ''
    text = native_text(src)
    if text is not None:
        src = os.path.join(OUT, 'src', os.path.basename(src))
        os.makedirs(os.path.dirname(src), exist_ok=True)
        open(src, 'w').write(text)
    # through LLVM IR, so that the game's memory behaves as on the console:
    #  - every load and store left after the locals become registers is volatile: the game spins on words its interrupts
    #    change and expects each access it wrote to happen, in order (SHC does no more than that); this also keeps clang
    #    from merging stores into wide moves
    #  - every alignment the code claims above 4 is capped there: the console's data guarantees no more (a global array
    #    sits wherever the image put it), where the x86-64 ABI would give large arrays 16
    base = o[:-2]
    r = subprocess.run(GAME_CC + GAME_FLAGS + ['-O0', '-Xclang', '-disable-O0-optnone', '-S', '-emit-llvm', src, '-o', base + '.0.ll'],
                       capture_output=True, text=True)
    if r.returncode == 0:
        r = subprocess.run(['opt', '-passes=sroa,mem2reg', '-S', base + '.0.ll', '-o', base + '.1.ll'], capture_output=True, text=True)
    if r.returncode == 0:
        ir = kr_float_calls(mmio_calls(open(base + '.1.ll').read()))
        ir = re.sub(r'= load (?!volatile)', '= load volatile ', ir)
        ir = re.sub(r'(?m)^(\s+)store (?!volatile)', r'\1store volatile ', ir)
        ir = re.sub(r'(call void @llvm\.mem(?:cpy|move|set)[^\n]*), i1 false\)', r'\1, i1 true)', ir)
        ir = re.sub(r'\balign (8|16|32|64)\b', 'align 4', ir)
        open(base + '.2.ll', 'w').write(ir)
        r = subprocess.run(GAME_CC + ['-O1', '-g', '-w', '-fno-pic', '-c', base + '.2.ll', '-o', o + '.x32'], capture_output=True, text=True)
    for ext in ('.0.ll', '.1.ll', '.2.ll'):
        if os.path.exists(base + ext):
            os.unlink(base + ext)
    if r.returncode == 0:
        c = subprocess.run(['objcopy', '-O', 'elf64-x86-64', o + '.x32', o], capture_output=True, text=True)
        os.unlink(o + '.x32')
        return src, c.returncode, r.stderr + c.stderr
    return src, r.returncode, r.stderr


def nm(path):
    r = subprocess.run(['nm', path], capture_output=True, text=True)
    defined, undefined = set(), set()
    for line in r.stdout.splitlines():
        parts = line.split()
        if len(parts) == 2 and parts[0] == 'U':
            undefined.add(parts[1])
        elif len(parts) == 3 and parts[1] in 'TDBCRVWtdbr' and parts[1].isupper():
            defined.add(parts[2])
    return defined, undefined


def read_functions():
    fns = {}
    for line in open(os.path.join(ROOT, 'functions.txt')):
        p = line.split()
        if len(p) == 4 and p[0] == 'F':
            fns[p[3]] = int(p[1], 16)
    # functions the game calls by address inside a listed one (port/extra_functions.txt)
    extra = os.path.join(ROOT, 'port', 'extra_functions.txt')
    for line in open(extra) if os.path.exists(extra) else []:
        p = line.split('#')[0].split()
        if len(p) == 2:
            fns[p[1]] = int(p[0], 16)
    return fns


def read_symbols():
    syms = {}
    for line in open(os.path.join(ROOT, 'symbols.txt')):
        p = line.split()
        if len(p) >= 2 and re.match(r'^[0-9a-fA-F]{8}$', p[0]):
            syms[p[1]] = int(p[0], 16)
    return syms


PRELUDE = os.path.join(ROOT, 'port', 'runtime', 'prelude.h')


def host_libc():
    """the names the host's C library and maths library export"""
    names = set()
    for lib in ('libc.so.6', 'libm.so.6'):
        path = subprocess.run([CC, '-print-file-name=' + lib], capture_output=True, text=True).stdout.strip()
        r = subprocess.run(['nm', '-D', '--defined-only', path], capture_output=True, text=True)
        names |= {l.split()[-1].split('@')[0] for l in r.stdout.splitlines() if l.strip()}
    return names


def host_compile(src, quiet=False):
    o = os.path.join(OUT, os.path.splitext(os.path.basename(src))[0] + '.host.o')
    r = subprocess.run([CC] + HOST_FLAGS + (['-w'] if quiet else []) + ['-c', os.path.join(ROOT, src), '-o', o],
                       capture_output=True, text=True)
    if r.returncode:
        sys.exit('host compile failed: %s\n%s' % (src, r.stderr))
    return o


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--jobs', type=int, default=os.cpu_count())
    ap.add_argument('--only')
    ap.add_argument('--compile-only', action='store_true')
    a = ap.parse_args()
    os.makedirs(OBJ, exist_ok=True)

    srcs = game_sources(a.only)
    failed = []
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for src, rc, err in ex.map(compile_one, srcs):
            if rc:
                failed.append((src, err))
    with open(os.path.join(OUT, 'errors.txt'), 'w') as f:
        for src, err in failed:
            f.write('### %s\n%s\n' % (os.path.relpath(src, ROOT), err))
    print('compile: %d of %d game files built, %d failed (build/native/errors.txt)' % (len(srcs) - len(failed), len(srcs), len(failed)))
    if a.compile_only or a.only:
        return 1 if failed else 0

    built = [s for s in srcs if os.path.exists(obj_of(s)) and s not in {f for f, _ in failed}]
    objs = [obj_of(s) for s in built]
    defined, undefined, definers = set(), set(), {}
    for s in built:
        d, u = nm(obj_of(s))
        defined |= d
        undefined |= u
        for n in d:
            definers.setdefault(n, []).append(s)
    # a function with two definitions (a matching unit and an older Equivalent copy): the unit's wins, the others go weak
    weaken = {}
    for n, ss in definers.items():
        if len(ss) > 1:
            win = ss[0]
            for s in ss:
                if s != win:
                    weaken.setdefault(s, []).append(n)
    # the library's C: every definition weak, so that port/runtime's host code for a library function wins over it
    fns, ranges = read_functions(), lib_ranges()
    fns_all = fns
    for s in built:
        lib_defs = [n for n in nm(obj_of(s))[0] if n in fns_all and any(a <= fns_all[n] < b for a, b in ranges)]
        if lib_defs:
            weaken.setdefault(s, []).extend(n for n in lib_defs if n not in weaken.get(s, []))
    # a definition named like a host C library function (memcpy, strlen, sprintf...) stays local to its object: the
    # host's code must reach glibc's, and the game's calls go there too (glibc takes the game's 32-bit pointers)
    libc_names = host_libc()
    localize = {}
    for n, ss in definers.items():
        if n in libc_names and not n.startswith('FUN_'):
            for s in ss:
                localize.setdefault(s, []).append(n)
    for s, names in localize.items():
        subprocess.run(['objcopy'] + ['--localize-symbol=' + n for n in names] + [obj_of(s)], check=True)
        for n in names:
            defined.discard(n)
            if s in weaken and n in weaken[s]:
                weaken[s].remove(n)
    if localize:
        print('host libc: %d definitions kept local (%s)' % (sum(map(len, localize.values())),
                                                         ' '.join(sorted({n for v in localize.values() for n in v}))))
    # the game's own main (0x8C010080) is renamed game_main: the host's main is runner.c's
    for s in built:
        d, u = nm(obj_of(s))
        if 'main' in d or 'main' in u:
            subprocess.run(['objcopy', '--redefine-sym', 'main=game_main', obj_of(s)], check=True)
    defined.discard('main')
    undefined.discard('main')
    defined.add('game_main')
    fns['game_main'] = fns.pop('main')
    for s, names in weaken.items():
        if names:
            subprocess.run(['objcopy'] + ['--weaken-symbol=' + n for n in names] + [obj_of(s)], check=True)
    if weaken:
        print('duplicates: %d names defined twice; the matching unit\'s or the first definition kept' % sum(map(len, weaken.values())))
    hobjs, runtime_defined = [], set()
    for src in RUNTIME + NUMERIC:
        o = host_compile(src)
        hobjs.append(o)
        runtime_defined |= nm(o)[0]
    syms, libc_names = read_symbols(), host_libc()
    need = sorted(undefined - defined - runtime_defined)
    libc = [n for n in need if n in libc_names and not n.startswith('FUN_')]
    stub_fns = [n for n in need if n in fns and n not in libc]
    data = [n for n in need if n in syms and n not in fns and n not in libc]
    other = [n for n in need if n not in fns and n not in syms and n not in libc]

    gen = os.path.join(OUT, 'gen.c')
    with open(gen, 'w') as f:
        f.write('/* generated by port/tools/native_build.py: stubs for the functions no C defines yet, and the dispatch table */\n')
        f.write('#include "port.h"\n\n')
        data_like = [n for n in other if re.match(r'^(g_|REG_)|Error$', n)]
        for n in data_like:
            f.write('char %s[1024] __attribute__((aligned(4)));   /* data the library names that no file defines */\n' % n)
        for n in stub_fns + [n for n in other if n not in data_like]:
            f.write('long port_stub_%s(void) __asm__("%s");\nlong port_stub_%s(void) { port_unimplemented("%s", 0x%08XU); return 0; }\n'
                    % (n, n, n, n, fns.get(n, 0)))
        f.write('\n')
        have = defined | runtime_defined | set(libc)
        table = sorted((addr, n) for n, addr in fns.items() if n in have or n in stub_fns)
        # host code for raw entry points inside library functions (a tail the C jumps into): port_entry_<address>
        listed = {a for a, _ in table}
        table = sorted(table + [(int(m.group(1), 16), n) for n in runtime_defined
                                for m in [re.match(r'port_entry_([0-9a-f]{8})$', n)] if m and int(m.group(1), 16) not in listed])
        for i, (addr, n) in enumerate(table):
            f.write('extern char port_fn_%d[] __asm__("%s");\n' % (i, n))
        f.write('\nconst struct port_entry port_table[] = {\n')
        for i, (addr, n) in enumerate(table):
            f.write('    {0x%08XU, (void *)port_fn_%d, "%s"},\n' % (addr, i, n))
        f.write('};\nconst unsigned port_table_size = %d;\n' % len(table))
    with open(os.path.join(OUT, 'census.txt'), 'w') as f:
        f.write('stubbed console functions (%d):\n' % len(stub_fns))
        f.writelines('  %08x %s\n' % (fns[n], n) for n in stub_fns)
        f.write('\ndata from symbols.txt: %d\nhost libc (%d): %s\n' % (len(data), len(libc), ' '.join(libc)))
        f.write('\nother names, stubbed (%d):\n' % len(other))
        f.writelines('  %s\n' % n for n in other)
    print('census: %d objects; %d console functions stubbed, %d data symbols, %d from host libc, %d other names stubbed '
          '(build/native/census.txt)' % (len(objs), len(stub_fns), len(data), len(libc), len(other)))
    hobjs.append(host_compile(os.path.relpath(gen, ROOT), quiet=True))
    defsyms = ['-Wl,--defsym=%s=0x%08X' % (n, syms[n]) for n in data]
    rsp = os.path.join(OUT, 'link.rsp')
    with open(rsp, 'w') as f:
        f.write('\n'.join('"%s"' % x for x in objs + hobjs + defsyms))
    exe = os.path.join(OUT, 'vtennis')
    # the binary at 0x60000000: the game's code reaches its globals (absolute symbols at 0x8C......) RIP-relative, which
    # needs them within 2 GB, and its records hold host function addresses in 32-bit words, which needs it below 4 GB
    r = subprocess.run([CC, '-no-pie', '-g', '-Wl,-Ttext-segment=0x60000000', '-o', exe, '@' + rsp, '-lSDL3', '-lGL', '-lm'],
                       capture_output=True, text=True)
    if r.returncode:
        open(os.path.join(OUT, 'link_errors.txt'), 'w').write(r.stderr)
        sys.exit('link failed (build/native/link_errors.txt):\n' + '\n'.join(r.stderr.splitlines()[:20]))
    print('link: %s' % os.path.relpath(exe, ROOT))
    return 0


if __name__ == '__main__':
    sys.exit(main())
