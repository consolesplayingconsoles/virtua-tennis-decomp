# Bisecting the hang at "Presented by SEGA"

The build with every function from C stops at the "Presented by SEGA" screen. The original executable, on a disc patched the same way, boots. So the fault is in the C functions.
This file says exactly which functions are on the original assembly and which are C in each test build, so a result can always be traced back.

## Terms (used everywhere below)

- **The 1,964 functions**: every function that has C in the build, sorted by address (`cbuild.game_set()`).
- **First half** = the first 982 of them, `main` (8C010080) .. `panelWideInit` (8C090BB8). Full list: `docs/bisect/first-half.txt`.
- **Second half** = the other 982, `panelWidePut` (8C090C60) .. `nlLoadTextureMem` (8C0EA0E0). Full list: `docs/bisect/second-half.txt`.
- **First quarter** = the first 491 functions of the first half, `main` .. `cpuDblServe` (8C05AC24). Full list: `docs/bisect/first-half-quarter-1.txt`.
- **Second quarter** = the last 491 of the first half, `cpuDblPickTactic` (8C05C598) .. `panelWideInit`. Full list: `docs/bisect/first-half-quarter-2.txt`.
- **"On the original asm"** = the function is listed in `asm-functions.txt` (a test aid), so the build takes it from the original assembly instead of its C. **"C"** = the function is built from its C.
- Build names are by BUILD (what the build contains), not by half.

## The builds

| Build | On the ORIGINAL asm | Built from C | Result (user, regular Flycast) |
|---|---|---|---|
| all C (earlier) | none | all 1,964 | stops at the SEGA screen |
| **A** | **first half** (982: `main` .. `panelWideInit`) | second half (982: `panelWidePut` .. `nlLoadTextureMem`) | no hang; menu reached; broken menu textures; crash when a game starts (top-left square of the blue menu pattern) |
| **B** | **second half** (982: `panelWidePut` .. `nlLoadTextureMem`) | first half (982: `main` .. `panelWideInit`) | stops at the SEGA screen |
| **C** (was "step 1") | first quarter (491: `main` .. `cpuDblServe`) | second quarter of the first half (491: `cpuDblPickTactic` .. `panelWideInit`) AND the whole second half (982) | crashes at the SEGA screen. Saved in `build/keep-C/` |
| **D** | second quarter of the first half (491: `cpuDblPickTactic` .. `panelWideInit`) | first quarter (491: `main` .. `cpuDblServe`) AND the whole second half (982) | **gets past the SEGA screen**; many broken textures, missing models and glitches (like A) but goes further than A. Saved in `build/keep-D/` |

Saved build outputs (gitignored, executable + map + list file + log): `build/keep-A/`, `build/keep-B/`.

## What the results mean

- Build A has no hang and shows other bugs: **the hang is not in the second-half C** and **the second-half C has other bugs** (menu textures, crash on starting a game).
- Build B hangs: **the hang is in the first-half C functions** (the C that build B contains).
- So there are at least two separate bugs: one in the first half (the hang), one or more in the second half (textures, game start).

## Next steps of the hang search

Step 1 (above): first quarter on the original asm, everything else C. If it no longer hangs, the hang is in the first quarter; if it hangs, it is in the second quarter (or in both). Then halve again, always keeping one build's list in `asm-functions.txt` and recording the build here before testing.
The second half's problems (textures, game start) are searched afterwards the same way, on a build where the first-half hang is fixed or those functions are on the original asm.

## Proof coverage of the first half (analysis done while step 1 builds)

Source: `docs/equivalent.md` (cases and "the cases run X of Y instructions" of each function).
- The 982 first-half functions: 453 have 100% of their instructions run by the cases, 103 have 90-99%, 140 have 70-89%, 108 have 50-69%, **178 have less than 50%**. 19 had no instruction run at all (mostly debug and performance code: `dbgMenuExec`, `dbgMenuDrawTitles`, `dbgMenuDrawPage`, `dbgMenuSetItem`, `perfMark`, `perfPrint`, `dbgVdEdit`, plus `FUN_8c033e2e`, `miniOnEvent`, `FUN_8c083888`, `FUN_8c083a3e`, `FUN_8c084102`, `FUN_8c085c24`, `hudPointPanelShow`, `crowdAnimModel`, `sceneVecStub`, `FUN_8c08e358`, `FUN_8c08e3a6`, `FUN_8c08e3f4`).
- **249** have fewer than 12 cases; **197** of at least 40 instructions have only 1 development + 1 holdout case. Largest: `FUN_8c07c338` (1,953 instructions, 9% run), `FUN_8c03504c` (1,588, 48%), `FUN_8c0314e0` (1,515, 21%), `FUN_8c070872` (1,448, 14%), `FUN_8c07b7aa` (1,318, 16%), `FUN_8c037f98` (1,165, 34%), `playerStartSwing`, `motionRoot`, `FUN_8c01219e`, `bodyStep`, `cpuBallPredict`.
- Largest uncovered amounts overall: `playerControl` (6,141 of 9,066 instructions not run), `cpuSglAimTable`, `FUN_8c065e70`, `cpuDblServe` (6% run), `cpuSglHitCheck`, `cpuDblHitCheck`, `FUN_8c02414c`, `cpuSglServe`: match and AI code, probably not on the path of the start-up screens.
- Start-up path: `main` calls `dbgVdEdit`, `fadeDraw`, `mainCheckReset`, `mainDebugPause`, `padExec`, `perfReset`, `sysInit` and dispatches the scene through the table at `8C10132C` (index `*(8C20D150)`, 0 at start-up). The table entries: [0] `8C01233E` and [1] `8C0123E8` are in the MIDDLE of `FUN_8c01219e` (852 instructions, 34% run, 1+1 cases), [2] `8C01219E` is its start. In the build the two middle entries run the running copy `FUN_8c01219e__2` (original code, `8C01C11E`; table words `8C01C2BE`, `8C01C368`) and entry [2] runs the C (`8C01CA90`). Checked: the copy equals the original except 115 relocated pointers, all right by the build's mapper; the built table holds the expected three words.
- Weak spots reachable from `main` by direct calls (42 functions): `dbgVdEdit` 0%, `padLcdDraw` 25% (558 instructions), `mainDebugPause` 55%, `nlInitEvent` 67% (1+1 cases), `padVibExec` 70%, `mainCheckDrive` 73%, `sysVideoSelect` 81%, `padDirOn` 88%.
- What no earlier check could see: calls through tables and function pointers (the scenes), code that runs from interrupts (the harness has none), and state that interrupts change over time. A loop that polls such a variable and compiled to a spin (hoisted load) was checked in the built image: none (no self-branch in any C function, no tiny loop on an unchanged register without a memory read).

## Result of build C and why build D

Build C (first quarter on the original asm) still crashes at the SEGA screen: the hang is NOT only in the first quarter; at least one hang cause is in the second quarter of the first half (`cpuDblPickTactic` .. `panelWideInit`), which is still C in build C.
Build D is the mirror (second quarter on the original asm, first quarter C): if D gets past the SEGA screen, the first quarter has no hang cause and the whole cause is in the second quarter; if D also stops there, both quarters hold a cause (the bug is wider). Both are tested because one result alone cannot show a second cause.

## Result of build D: the hang cause is in the second quarter

Build D passes the SEGA screen with the first quarter as C, so the first quarter holds no hang cause; build C hangs with the second quarter as C, so **the hang cause (at least one function) is in `cpuDblPickTactic` .. `panelWideInit`** (491 functions, `docs/bisect/first-half-quarter-2.txt`).
Builds A and D both show broken textures, missing models and glitches, and both have the whole second half as C: the texture and model problems are probably in the second half (`panelWidePut` .. `nlLoadTextureMem`, `docs/bisect/second-half.txt`). They are a second search, to run after the hang is found, on a build where the hang cause is on the original asm.
Open question noted, not explained: D goes further than A although D has MORE C (the first quarter) than A. A crashed when a game was started; D did not. Do not read too much into it until both are retested.

## The method (A/B testing with the original asm) and why it works

1. List the functions that have C, sorted by address (`cbuild.game_set()`); split them in halves.
2. Put one half in `asm-functions.txt` (a test aid): the build takes those functions from the original assembly, the rest stays C. Build, boot, and record ONE observable (here: does it get past the SEGA screen).
3. **Always build the mirror too** (the other half on the original asm). One result cannot show a second cause: build A passing only said the hang was not in the second half's C; build B/C/D together say where it is and that the textures are a different bug.
4. Keep every failing or informative build (`game.bin`, map, list file, log) in `build/keep-<name>/` before the next build replaces its output.
5. Name builds by what they CONTAIN (build A, B, C, D), not by half; write the exact function lists down before testing (`docs/bisect/`).
6. Halve the half that holds the cause; repeat. 982 functions need about 10 builds, each a few minutes plus one observation; the proof tools (equivalence cases, audits, simulator) only said "no difference found", the builds said where.
## Result of build E: the hang cause is in 5 functions

Build E (changed course from halving to the static scene-path analysis): only `fadeScreenStart`, `hudFadeNearPlayers`, `FUN_8c08535e`, `modelSwapMaterial` and `sprPutAt` come from the original asm, everything else is C (list in `build/keep-E/asm-functions.txt`). Of the 491 functions of the second quarter, these are the 5 the start-up scene entries (modes 0/1) call directly. Built 2026-11-01 19:37. Result: it gets past "Presented by SEGA". So the hang is in the C of one or more of these 5 (the other 486 are not needed for it). Not yet separated which of the 5; `fadeScreenStart` (src/gen_en.c) is the prime suspect.

## Result of build F: not fadeScreenStart

Build F (`fadeScreenStart` alone on the original asm, everything else C; `build/keep-F`, built 2026-11-01 19:44) still hangs at "Presented by SEGA". So `fadeScreenStart` is not the cause; it is in `hudFadeNearPlayers`, `FUN_8c08535e`, `modelSwapMaterial` or `sprPutAt` (assuming one cause). Reading the C: `FUN_8c08535e` (src/gen_gf.c) passes `R1004`/`R1008` to `ambEventStart` as arguments 5 and 6, read from `stk+4`/`stk+8` before anything is written; their value depends on the compiler's frame layout. Not yet compared with the original asm.

## Maximum coverage on the 5 suspects (2026-11-01, no build)

Hand-made cases were added to `tests/gen_*/` for each (poked memory plus answers for the calls, so every branch runs). Coverage before and after, and what the equivalence check says:

| function | instructions run before | after | check |
|---|---|---|---|
| `fadeScreenStart` | 66 of 75 | 75 of 75 | Equivalent |
| `FUN_8c08535e` | 205 of 227 | 228 of 228 | Equivalent |
| `modelSwapMaterial` | 25 of 55 | 55 of 55 | Equivalent |
| `sprPutAt` | 17 of 17 | 17 of 17 | Equivalent (already full) |
| `hudFadeNearPlayers` | 91 of 110 | 101 of 110 | Equivalent; the 9 left are the negative x / y branches |

Why 9 stay out: reaching them needs a call's `poke_arg` (the callee `screenProject` fills x and y). On the compiled C side `tools/sh4sim.py` skips that fill: after a deep callee returns (`go()`, `self.r.written = 0`), r4-r7 count as "leftover, not arguments", but the C sets r4/r5, calls the struct-copy helper (`_quick_odd_mvn`, which keeps r4-r7), then calls `screenProject`. The cases with `poke_arg` therefore showed a false DIFFERS (`0x13C` vs `0x196`: the original got x/y, the C did not). Not a C bug; a gap of the simulator, not fixed yet (a shared tool: CT/ZR/VT).

So the simulator finds no difference in any of the 5 at full coverage. What it does not compare: the original calls `ambEventStart` (`8C085452`, in `FUN_8c08535e`) with no argument registers set, and the C passes `(0,0,0,0,R1004,R1008)` where `R1004`/`R1008` are read from the function's own unwritten stack words.

## Result of build G: not FUN_8c08535e alone

Build G (`FUN_8c08535e` alone on the original asm, everything else C; `build/keep-G`, built 2026-11-01 20:22) still hangs. With build F (`fadeScreenStart` alone, hangs) the cause is in `hudFadeNearPlayers`, `modelSwapMaterial` or `sprPutAt`, or it needs more than one of the 5 (E, all 5 on asm, boots).

## Result of build H: more than one cause

Build H (`hudFadeNearPlayers`, `modelSwapMaterial`, `sprPutAt` on the original asm; `build/keep-H`, built 2026-11-01 20:34) hangs. Builds E (all 5 on asm) boots; F (`fadeScreenStart` only), G (`FUN_8c08535e` only) and H (the other three) hang. A single cause cannot fit: F says it is in {FUN_8c08535e, hud, modelSwap, sprPutAt}, G in {fadeScreenStart, hud, modelSwap, sprPutAt}, H in {fadeScreenStart, FUN_8c08535e}, and those sets share nothing. So at least two functions have a bug. Simplest fit: one in `fadeScreenStart` and one in `FUN_8c08535e` (caller and callee, the pair whose call arguments the check cannot see); or one of hud/modelSwap/sprPutAt plus one of those two.

Next: build I = `fadeScreenStart` and `FUN_8c08535e` on the original asm. Boots: both bugs are in that pair.


## Generator fix: a register read after a call (2026-11-01)

`FUN_8c08535e`'s C (`src/gen_gf.c`) seeds a loop with `t38 = a5`; in the original the loop variable is r5 as `set_event` leaves it. Fixed in the generator (`gen_core.py gi()`: r4-r7 read after a call on the path are an uninitialised local, no incoming argument); test `tests/gen_equiv` `leftoverfn` in the skill. The generator now writes `FUN_8c08535e(void)` (matches the arity scan). Not applied to `src/` yet: regenerating the functions this changes is a separate run.


## State at the end of 2026-11-01 (read this first)

**The bisect builds E to M were invalid.** A kept asm piece reads literal-pool words that the original compiler put after it, often inside the next function or in a gap (`fadeScreenStart`'s constants sit inside `FUN_8c084cbc`; `hudFadeNearPlayers`' and `sprPutAt`'s in gaps; `FUN_8c08535e`'s in its neighbours). `mbuild` kept replaced pieces only between kept ones, so those words were gone and the asm read garbage (checked in the bytes: `fadeScreenStart` read `F325F32D` where the original has 1e-5). "E boots, F/G/H hang" says nothing about the C. The all-C build is not affected (170 asm-only functions checked, no wrong pool read).

**The fix** (tools/8-build/mbuild.py, also in the skill with tests/mbuild/check.py `holes`, `holepool`): `hole_pieces()` keeps every replaced piece from the first kept piece to the end of the group, `hole_text()` keeps its own words (a hole that is also read is its own `__d` data copy), the C of such a group goes after the group, the hole before it. Build M failed the alignment check ("units not at their original address modulo 32") because the `__d` copy sat between a kept piece and its hole; the `__d` change is the fix for that and has not been built yet.

**After PR #2 (names) the generated asm/ is stale.** `asm/` is gitignored and split from functions.txt by `setup.sh`; it was re-split (old one in build/aside/asm.before-pr2-rename). `make c` then stops with "11 pieces have no build/obj object": `bash build.sh` (the byte-match rebuild) has to run once to assemble the renamed pieces into build/obj (movecheck links unchanged pieces from there).

**Tomorrow, in this order:**
1. `bash build.sh` once (must print MATCH).
2. Pluto build with no asm-functions.txt (move it to build/aside/): the all-C build must pass with the new mbuild (build N2).
3. Put asm-functions.txt back (the five functions, already written) and Pluto-build E2. Run the pool check (scratchpad poolall.py: decode original and built pool loads) on build/mbuild/game.bin BEFORE testing the disc: zero wrong reads, then test. E2 = the earlier E result re-tested with correct asm: boots = the five C functions are involved (then one by one); hangs = they are not.
4. build/disc-cbuild is overwritten by every build: copy the disc you want to keep.


## 2026-11-02: E2 built and checked

The mbuild fix is done (a hole that is also read is its own `__d` data copy). `bash build.sh` printed MATCH (renamed pieces assembled), the all-C build N3 passes (`build/keep-N3`), and build E2 (the five functions on the original asm, everything else C; list in `build/keep-E2/asm-functions.txt`, bytes in `build/keep-E2/`) built. Pool-word check on E2's bytes: 175 asm functions, no wrong pool read (one flag is a relocated address word, `camWorldToView` 8C01612E -> 8C0381C0, correct). So E2 is the first valid test of the earlier "E boots" result.

Disc: `build/disc-E2/Virtua Tennis (USA).gdi` (a copy; `build/disc-cbuild` is overwritten by every build). Boots past "Presented by SEGA": the five C functions are involved, then test them one by one with the same tool. Hangs: they are not the cause.

**Result of E2 (2026-11-02): stuck at "Presented by SEGA".** With correct asm for the five scene-path functions the hang stays, so they are not the cause (the earlier "E boots" came from broken asm). The cause is in the rest of the C. Next: a valid halving of all C functions with the fixed tool (builds H1 and H2, each pool-checked, lists in docs/bisect/).

## 2026-11-02: valid halving, builds H1 and H2

Lists: `docs/bisect/h1-asm-first-half.txt` (the first 982 functions that have C, by address, `main` .. `panelWideInit`, on the original asm) and `docs/bisect/h2-asm-second-half.txt` (the other 982, `panelWidePut` .. `nlLoadTextureMem`, on the original asm); everything else is C in each. Both built with the fixed mbuild, each pool-checked on its bytes (reachable code only: no wrong pool read; `vmsfs_mount` flags the same in the all-C build, it is checker noise). Files in `build/keep-H1`, `build/keep-H2`; discs `build/disc-H1`, `build/disc-H2`.

Results: H1 plays (the first half on asm, the second half's C works); H2 crashes at the SEGA screen (the second half on asm, the first half's C fails). The cause is in the first half's C. A half that boots with the other half's C on cleared the C it holds; the half that hangs holds the cause. Halve that half next (lists from the same sorted function list).

Next: H3 (first 491 of the first half on asm) and H4 (the last 491 of the first half on asm), lists `docs/bisect/h3-asm-first-half-q1.txt` and `h4-asm-first-half-q2.txt`.
