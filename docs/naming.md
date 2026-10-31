# Source naming evidence

This pass changes identifiers only. Original addresses, function boundaries,
prototypes, storage layouts, expressions and control flow are retained. The
addressed rename ledger is [naming.tsv](naming.tsv); scoped parameter and local
renames are in [naming-locals.tsv](naming-locals.tsv). These are inferred names,
not recovered original source names.

## Functions

| Names | Evidence |
|---|---|
| `cameraBlendVector240`, `cameraBlendFloat240` | Each component is `(first * weight + second * (240 - weight)) / 240`. Weight is the integer at `8c287b4c`; `matchStart` initializes it to 240. The vector entry retains its seven-word stack ABI and incidental float return. |
| `cpuSglPointInit`, `cpuDblPointInit` | Reset two or four CPU records with stride `0x160`, adjust values carried between points, clear player input state, choose difficulty, then update singles/doubles mood. Doubles additionally sets server/receiver roles and chooses tactics. They are separate from `cpuSglInit` and `cpuDblInit`. |
| `matchSceneSetup` | Waits for the database load, snapshots joined players, initializes score and a scene event, configures stage and fades, then calls `matchSceneInit`. |
| `courtFraDraw`, `courtUsaDraw`, `courtWinDraw` | Call the corresponding country's scoreboard and court helpers, cull and render sections, animate crowd models, and draw court details. |
| `stageSweDraw`, `stageGerDraw`, `stageJpnDraw`, `stageRusDraw`, `stageEspDraw` | Call the corresponding stage's court and scoreboard helpers, draw visible sections and crowd models. These are the complete stage passes; existing `stage*CourtDraw` routines are their callees. |
| `stage10Draw` through `stage17Draw` | `matchSceneExec` dispatches these for stage IDs 10 through 17 (`stage14Draw` is at `8c0c486c`, before `stage13Draw` in address order). They render stage-specific model lists and common court geometry. Numeric stage IDs are intentional: the routines alone do not establish the venue or training activity. |
| `nlResetBackColorZ` | Loads the depth constant at `8c0eaf28` and tail-calls `nlSetBackColorZ`. |
| `nlUnitVector` | Scales a three-component vector by reciprocal square root of its squared length and returns its length. This name already existed at the same address in `symbols.txt`. The generated declaration's return type is retained. |
| `kmyCopySmallVQToTextureRom` | Called by `kmLoadTextureRom` for surface type 3. Copies a level-dependent codebook, then index data to texture address + `0x800`; the high flag bit selects alternate tables. |
| `kmCollectTextureGarbage` | Returns `kmyGarbageCollection()`. This is a descriptive name, not a claim about the SDK's original exported spelling. |
| `gdFsStringEquals` | Compares bytes until mismatch or a null terminator; returns 1 for equality and 0 otherwise. Retains its existing interior-address continuation call. |
| `kbCfgIni` | Dispatches through the BIOS configuration vector at `8c0000b0`, operation 0. This name already existed at the same address in `symbols.txt`. BIOS argument meanings remain unresolved. |
| `fmMngBufferEquals` | Compares the requested byte count and returns 1 for equality, 0 on the first mismatch; nonpositive counts compare equal. Retains its interior-address continuation call. |
| `fmMngCopyBytes` | Copies bytes from the first pointer to the second while count is positive. Retains its interior-address continuation call. |

The three wrappers of the string and buffer helpers keep their distinct entries
and receive the corresponding `thunk_` names. Forty-four generic function aliases
in `symbols.txt` now use the named function at exactly the same address. Their
callers and declarations change together; address equality is checked by
`tools/rename.py` before an existing name can be reused.

## Types and variables

The three-float `Vec`, `V3` and `Vec3` records become `Vector3f`; `Short3` becomes
`Vector3s16`. The misleading, three-integer `Mat12` becomes `Sh4StackWords3`,
and `DummyTex` becomes `NlTextureDescriptor`. No members or layout change.
Existing generated `StkN` ABI wrappers retain their names because generator
tools recognize that convention. These records are C structs, not recovered
C++ classes.

`nlReloadPalette` establishes `gNlPaletteTable` and its eight-byte entry stride.
`nlPrnIndentOn` establishes `gNlPrintFlags` (bit 0 enables indentation).
`nlObjPutSetFadeColor` establishes the RGB vectors `gNlObjectFadeColor` and
`gNlObjectFadeColorCopy`; the latter name describes the observed copy without
assuming why the renderer maintains it.

Scoped names cover interpolation operands, vector components and lengths,
texture codebook/index sizes, buffer addresses/counts, court model cursors,
section visibility and bounds, and CPU/player/match record pointers.
Registers with multiple roles retain that fact in their names, for example
`courtModeOrSectionIndex` and `difficultyOrPlayerAddress`.

## Follow-up

The SDK naming follow-up is documented in [naming-sdk.md](naming-sdk.md).

## Unresolved entries

| Entry | Reason to retain the generic label |
|---|---|
| `FUN_8c0f8220` | Starts with the literal word `8c0f7ff0`, inside a pointer pool. Its recorded span also includes interrupt setters at `8c0f8250` and `8c0f8260`. It cannot be accurately named as one callable function. |
| `FUN_8c1f1906` | Begins at an isolated stack adjustment two bytes before `ADXF_InitCache_P2_`, and its 202-byte span overlaps that routine and `ADXF_Ocbi`. Needs a boundary audit, not a guessed independent function name. |

No boundary repairs or port implementation are part of this naming pass.

## Validation

- All 75 changed C files are exactly the original text with the recorded global
  and scoped identifier substitutions. No executable expressions changed.
- All 3,150 JSON case files retain their original contents under those same
  identifier substitutions; 32 case filenames follow their renamed functions.
- `tools/consistency.py` reports the same three pre-existing missing recorded
  passes: `ADXT_SetOutPan`, `mwRnaStop`, `setBorderColor`; no duplicate definitions,
  stray cases, missing cases or stale sizes.
- The supplied executable's SHA-1 matches the supported release; the assembly
  split was regenerated locally without changing boundaries.
- `bash build.sh` prints `MATCH`: the rebuilt executable is byte-identical to
  the supplied original. Tools run exclusively through checksum-verified
  Wibo 1.1.0, using the SHC 5.0 Release 32 tool archive referenced by
  `decompme/compilers`. This establishes a working validation toolchain, not
  the precise compiler revision originally used by the game's developers.
- All 75 edited C files were compiled before and after the changes with the
  same SHC flags as the project. Every file emits identical assembly after
  normalizing renamed symbols and discarding comments. This also checks that
  canonical function names did not introduce different compiler intrinsics.
- The return-register audit reports zero mismatches, and the proof-record
  audit reports no entries lacking C or their test files. A fresh simulator
  equivalence run was not performed; existing proof records were renamed.
