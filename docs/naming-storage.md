# GD filesystem, flash manager and DMA naming

This pass names variables in 34 functions and refines three record layouts.
The substitutions are recorded in [naming-storage.tsv](naming-storage.tsv).
Names describe the observed code; they are not recovered SDK declarations.

## Flash memory

`FlashMemoryManagerPrefix` covers the first 52 bytes of the manager. Its old
20-byte opaque prefix is now two shorts followed by four integers. `fmMngInit`
stores the partition ID, format mode, flash base, partition byte count, cache
buffer and used physical-record count at offsets 0, 2, 4, 8, 12 and 16.
The 64-byte scratch record beginning at offset 52 remains outside this prefix.
The storage selected by initialization is named `gFlashMemoryManagerStorage`.

`recordCapacity` is the partition's number of 64-byte blocks less the header
block and allocation-bitmap blocks. Initialization computes the bitmap block
count by rounding the partition byte count up to a multiple of 32768.
Each bitmap block is 64 bytes, with one bit per physical record.

The old `busy` member is `pendingOperation`: 0 means idle, 1 selects reading,
and 2 selects writing. The old `mode` member is the manager's `status`, set to
2 when a request is queued, 1 on success and 3 on failure. It is distinct from
the partition's `formatMode` at offset 2. The write handler uses `writePhase`
to append (0), erase (1), then refresh (2). `lastResult` records the handler's
result; `recordIndex` and `dataBufferAddress` identify the requested record and
payload buffer.

The read, write, format and refresh paths establish the corresponding local
names. The bitmap routines count leading cleared bits and write a cleared-bit
prefix for used records. The refresh loop skips invalid or empty cached
records, compacts retained records into flash, then updates the bitmap.
CRC names distinguish computed and stored values. Unresolved forwarded BIOS
arguments retain their existing identifiers.

## GD filesystem

`GdFsFileHandle` retains the complete 84-byte layout and constructor writes.
The following users establish its members:

| Members | Evidence |
|---|---|
| `globalStateAddress`, `allocated` | Initialization installs the global-state pointer in every handle; allocation scans and close read/write the short at offset 76. |
| `directoryEntryId`, `startFad`, `fileByteCount`, `sectorCount` | Open passes the search result, directory LBA plus 150, and byte length to the constructor. The three size/address getters read the same fields; sector count is the byte length rounded up to 2048-byte sectors. |
| `sectorPosition`, `requestedSectorCount` | Seek/tell operate in sectors. Read requests clamp their sector count to the file range; completion advances position by the requested count. |
| `completedTransferAmount`, `transferByteCount` | `gdFsGetNumRd` returns the former. The status dispatcher fills it from driver information or the raw transfer's byte count. Its units depend on the request path, so it is deliberately not named a sector count. |
| `readCompletionCallbackAddress`, `readCompletionCallbackArgument` | Successful completion of request kind 1 calls offset 36 with the argument at offset 40. |
| `errorCallbackAddress`, `errorCallbackArgument` | Error handling calls offset 52 with the argument at offset 56 and the handle's error code. |
| `commandRequestId`, `requestKind` | Submission stores the driver's request ID; status/transfer queries consume it. Request kind selects the completion path and is cleared when the command finishes. |
| `transferStatus`, `transferMode`, `driveStatus` | The corresponding getters/setter and submission/completion paths read and write these shorts. The constructor's default is now `gGdFsDefaultTransferMode`. |
| `driverStatusWord2`, `driverErrorDetail`, `errorCode` | The dispatcher copies driver information word 2 into offset 64, error detail word 1 into offset 68, and the error code into offset 82. `driverStatusWord2` preserves the known provenance without guessing the driver's enum meaning. |

The system work handle also handles non-file commands: offsets 4 and 8 can
carry command arguments/output pointers in those paths. Their member names
describe ordinary file handles and do not establish a universal interpretation
for every request kind. Members `f44` and `f48` remain unresolved.

The open, reopen, seek, read, pickup, getter and status functions receive names
for their receivers, outputs, request IDs, counts and callbacks. Generated
variables reused for different roles retain both roles in their names. The
status dispatcher's remaining general-purpose simulated registers are not
assigned a single invented meaning.

## DMA requests

`kmyGetDMAHANDLE` assigns a request ID from a wrapping counter at offset 0;
`kmyQueryFinishDMA` searches queued requests by that ID. `kmySetDMACallback`
identifies the callback field at offset 24. The user-value setter/getter access
offset 44, outside the current partial record.

`operation` becomes `operationFlags`: startup tests bit 3 to select a transfer
resource. `transferKind` at offset 8 selects the hardware setup in `kmiLaunchQ`;
texture submission sets it to 0. The two unresolved shorts remain visible.

## Validation

- All source changes match the recorded identifier substitutions and the
  explicit replacement of the flash manager's opaque 20-byte metadata prefix.
- Each of the 19 changed C files emits identical assembly before and after
  through Wibo/SHC, after normalizing renamed exported symbols, internal label
  numbers and comments. Instructions, operands and constant pools agree.
- SHC confirms the flash prefix's 52-byte size. Separate field-address getters
  emit the expected constant offsets for all 14 fields. The compiler archive
  lacks standard headers, so this local check uses a field-address expression.
- All existing test artifacts are unchanged. This pass does not claim new
  simulator coverage. Return-register and proof-record audits pass. The three
  pre-existing missing recorded passes remain `ADXT_SetOutPan`, `mwRnaStop`
  and `setBorderColor`.
- `bash build.sh` prints `MATCH` against the original executable. No disc or
  SDK data is included in this change.

The function/name temporary lower bound falls from 28,957 to 28,728 across
2,532 functions; offset-style record identifiers fall from 31 to 9. There are
still 101 address-based global identifiers in the name tables. These are
inventory measurements, not a claim that relabeling is complete.

## GD handle offsets 44 and 48, and three unlisted entries

`gdFsChainHandleDmaCallback` (`8c1dd692`) reads the current handle from the
filesystem state at +28 and, when handle +44 is nonzero, passes handle +44 and
+48 to GDC BIOS command 5 (callback and argument); otherwise it passes zero
for both. The constructor clears +44. The members are therefore
`dmaCallbackAddress` (+44) and `dmaCallbackArgument` (+48).

Three code entries were missing from `functions.txt` (found as pool-referenced
code after `gdFsReadWG`, and before `gdGdcReqDmaTrans`):

- `gdFsChainHandleDmaCallback` (`8c1dd692`): sync chain handler, registered
  through `syChainAddHandler` with id `0xa40` in the filesystem init code.
- `gdFsChainExecServer` (`8c1dd6ac`): chain handler registered with id
  `0x900`; returns when state +32 is 1, otherwise tail-calls `gdFsExecServerG`.
- `gdGdcSetDmaCallback` (`8c1ef400`): GDC BIOS command 5 with callback and
  argument, same stub shape as its neighbours.

The state +44 reads in the init code (packed version digits) belong to the
global state, not to the handle.

## DMA request shorts and ADX decoder slot flag

- Texture DMA request +28/+30 (`kmySetTextureDMA` writes `0x8000` and `0`):
  no function reads them (`kmiLaunchQ` switches on +8 and reads +12/+16 only),
  so they are named `textureSetupControlWord` / `textureSetupReservedWord`,
  not given a semantic role. `kmyRequestDMA` writes 2 at +40 (request status).
- ADX bitstream decoder slot offset 0 is a halfword, not an int: `ADXB_Create`
  scans eight 172-byte slots for a zero halfword, stores 1 there with `mov.w`;
  `ADXB_Destroy` clears the slot. It is `slotInUse`; +2 is padding.
- Maple driver +0xfd0/+0xfd4 (`pad0`/`pad1`): no access in the driver code was
  found; left unnamed. +0xfc4/+0xfc8 are 32-byte-aligned buffer pointers set in
  `mpdrv_init`, not yet named.
