# Interrupt and cache-purge boundary corrections

The last two `FUN_` entries were not independent callable functions. This
correction removes the false entries and identifies seven real setters that
were hidden in the same assembly region. No port implementation is included.

## Interrupt initialization

`nlInitInterruptDC` at `8c0f81d0` is a four-byte tail branch to `8c0f8100`,
with argument zero in its delay slot. Its previous 80-byte size also covered
three independent setters and the beginning of a literal pool.

The old entry at `8c0f8220` starts with the pointer value `8c0f7ff0` read by
the initialization code at `8c0f815c`. It is data, not an executable entry.
`nlInterruptInitLiteralPool` now marks the pool at `8c0f8208`, which contains
event-code halfwords, flags and pointers through `8c0f824b`, followed by padding.

| Address | Size | Identified function | Destination |
|---|---|---|---|
| `8c0f81e0` | 8 | `nlIntrSetRenderEndCallback` | callback at `8c454f40`, used by the handler registered with `kmSetEORCallback` |
| `8c0f81f0` | 8 | `nlIntrSetVSyncCallback` | callback at `8c454f44`, used by the handler installed for event `0x900` |
| `8c0f8200` | 8 | `nlIntrSetHSyncCallback` | callback at `8c454f48`, used by the handler installed for event `0x920` |
| `8c0f8250` | 8 | `nlIntrSetGdDmaCallback` | callback at `8c454f4c`, handler acknowledges normal interrupt bit 14 |
| `8c0f8260` | 8 | `nlIntrSetGdCommandCallback` | callback at `8c454f50`, handler installed for the external GD command event |
| `8c0f8270` | 26 | `nlIntrSetCpuVectorCallback` | VBR-relative vector slot selected by `nlCpuInterruptEventCodes` at `8c127fc8` |
| `8c0f8290` | 8 | `nlIntrSetTextureOverflowCallback` | callback at `8c454f70`, used by the handler registered with `kmSetTexOverflowCallback` |

The GD event names are supported by both the game's handler installation and
acknowledgement code and the register/bit definitions in the
[KallistiOS ASIC header](https://github.com/KallistiOS/KallistiOS/blob/master/kernel/arch/dreamcast/include/dc/asic.h).
Only names and interpretation are used here; no SDK headers or libraries are
added to the project.

The six fixed-slot setters store the callback word from `r5` and return 1.
Their `r4` interrupt-ID argument is intentionally ignored, matching the
dispatcher's common signature. The CPU-vector setter subtracts five from the
ID, reads a signed event halfword, extends it before a logical three-bit shift,
and writes at `VBR + 0x1c0 + offset`. Its C retains that extension order.

## Cache-purge return

The old `FUN_8c1f1906` label was on `add #4,r15`, the delay-slot instruction of
the `rts` at `8c1f1904`. It belongs to `adxf_purge_all`, whose extent is now
corrected from 38 to 180 bytes (`8c1f1854`–`8c1f1908`). The next independent
entry is still `ADXF_InitCache_P2_` at `8c1f1908`.

The false generated C definition and its declaration are removed from
`src/gen_aw.c`. Its test file and recorded pass are also removed: they tested
execution beginning at a return delay slot and falling into the next routine,
not a valid independent game function. Naming it as a cache initializer would
have preserved the classification error.

## Validation

- All seven setters pass `tools/equiv.py` through the local Wibo launcher, on
  separate development and holdout cases. The six fixed-slot setters cover
  all four original instructions; the CPU-vector setter covers all thirteen.
- Setter cases include clearing a callback, high-bit callback words, ignored
  IDs, every CPU-table entry, cached and uncached VBR aliases, and aligned
  synthetic signed event offsets.
- `nlInitInterruptDC` and `adxf_purge_all` pass their existing 36 cases each
  with the corrected spans. All seventeen remaining definitions in
  `src/gen_aw.c` pass their existing cases after removal of the false entry.
- The cache-purge result is limited to what its existing cases measure:
  its cached entry tail-jumps into an uncached continuation, which the
  current checker models as an external call. The larger function extent
  does not establish new coverage of that hardware cache-maintenance loop.
- The return-register and proof-record audits report no mismatches or
  missing source/cases. The three pre-existing consistency findings remain.
- `bash build.sh` through Wibo prints `MATCH` after the corrected assembly
  split: the rebuilt executable is byte-identical to the supplied original.

The companion wrapper and unused-declaration cleanup is documented in
[naming-aliases.md](naming-aliases.md).

The function catalog now has no `FUN_` entries. This is a naming and boundary
milestone, not completion of relabeling: `tools/naming_audit.py` still reports
generic globals, legacy aliases, generated locals and incompletely understood
record fields that need further analysis.
