# Wrapper names and unused declaration cleanup

Seven wrapper functions still had `thunk_FUN_...` names even though their
targets were already identified. Each wrapper's literal pointer or branch
target and C body establish the corresponding target-specific name:

| Wrapper | Target |
|---|---|
| `thunk_nlGetMatrix` | `nlGetMatrix` |
| `thunk_fadeScreenDraw` | `fadeScreenDraw` |
| `thunk_circuitTaskRun` | `circuitTaskRun` |
| `thunk_nlObjPutMvInit` | `nlObjPutMvInit` |
| `thunk_nlSprPut` | `nlSprPut` |
| `thunk_buIsExistFile` | `buIsExistFile` |
| `thunk_selCopyLocalConstants` | `selCopyLocalConstants` |

`selCopyLocalConstants`, formerly `selConstStub`, copies three 16-byte
constant blocks at `8c1103b8`, `8c1103c8` and `8c1103d8` into its own stack
frame and returns. It does not return a scalar constant. The new name states
the observed operation without guessing what those local records represent.
Addresses and old/new names are recorded in [naming-aliases.tsv](naming-aliases.tsv).

The remaining old generic function imports were unused declarations, rather
than unidentified callees. A source scan removed a declaration only when its
identifier had no C use elsewhere in that file after excluding declarations,
comments and literals. This includes checking file-scope initializers and
macro bodies, not only function bodies.

Three unused macros (`FOG_TABLE`, `SET_LIGHT`, `PLACE_VIEW`) contained the last
four generic function references. They have no invocation in their file and
are not exported through a header. Those obsolete macros and their now-unused
prototypes are removed. No executable use was replaced or dropped.

In total, 379 declaration occurrences across 26 files are removed, covering
285 distinct generic function aliases and 24 distinct generic global names.
Some globals still have uses in another file; declarations needed by those
files remain. The source/name inventory is [naming-unused.tsv](naming-unused.tsv).
The address mappings in `symbols.txt` are retained for further investigation.

## Validation

All 41 affected C files were compiled before and after these changes through
Wibo using the project's SHC flags. Their assembly is identical after:

- normalizing the eight renamed exported symbols;
- normalizing internal `L<number>` labels by their definition order, preserving
  every branch and pool reference (declaration removal shifts SHC's numbering);
- discarding comments.

No instructions, operand values or pool contents were excluded from this
comparison. Existing case payloads follow the eight renamed functions
unchanged. The final `bash build.sh` through Wibo prints `MATCH` against the original
executable after both changes.

