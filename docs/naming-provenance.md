# Inferred labels and existing SDK names

Seven function names introduced by this PR originally used SDK-style prefixes
despite being inferred from disassembly rather than verified SDK declarations
or library-signature matches. Those prefixes were misleading. The labels now
describe behavior without claiming the SDK's original spelling:

| Address | Previous inferred label | Current label |
|---|---|---|
| `8c0eaf00` | `nlResetBackColorZ` | `resetBackColorZ` |
| `8c0f8590` | `kmyCopySmallVQToTextureRom` | `copySmallVQToTextureRom` |
| `8c1e4a80` | `kmCollectTextureGarbage` | `collectTextureGarbage` |
| `8c1e6420` | `kmSetCullingThreshold` | `setCullingThreshold` |
| `8c1e6b1c` | `gdFsStringEquals` | `stringEquals` |
| `8c1ff1bc` | `fmMngBufferEquals` | `bufferEquals` |
| `8c1ff1ee` | `fmMngCopyBytes` | `copyBytes` |

The three related wrappers become `thunk_stringEquals`, `thunk_bufferEquals`
and `thunk_copyBytes`. The complete follow-up mapping is in
[naming-prefixes.tsv](naming-prefixes.tsv). Earlier TSV files are historical
ledgers; this mapping supersedes their intermediate labels.

The evidence for each operation remains in [naming.md](naming.md) and
[naming-sdk.md](naming-sdk.md). The evidence establishes the observed behavior,
not the original name or SDK provenance. Prefix removal does not classify the
underlying machine code as game code instead of library code.

Two other names were already present at the same addresses in upstream's
`symbols.txt`: `nlUnitVector` at `8c0f0860` and `kbCfgIni` at `8c1ef4a0`.
This PR uses those existing canonical labels for the corresponding function
entries; it does not claim to have newly identified either name from SDK
source. Other generic function aliases likewise reuse existing upstream names
at equal addresses. The known callee names in wrappers such as
`thunk_nlGetMatrix` remain intact.

Upstream `ce72edc` already names `kmSetHSyncCallback` and `kmSetVSyncCallback`.
Those existing names are retained. This follow-up does not introduce SDK
signature records or modify `sdk.txt` or `sdk-identical.txt`.

All references, declarations and proof records follow the neutral labels.
Ten test filenames change without any payload edits. Addresses, boundaries,
prototypes, expressions and control flow remain unchanged.

All 56 affected C files compile to identical assembly before and after this
correction, after normalizing the renamed symbols and internal labels and
discarding comments. Instructions, operands and pools agree. The Wibo baseline
rebuild prints `MATCH`; consistency, proof-record and return-register audits
pass. No new simulator coverage or SDK identification is claimed.
