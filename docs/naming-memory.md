# Memory-state, record and audio naming

This batch names 32 address-based global identifiers (24 used in C and eight
aliases of the same storage), seven record types, and a newly identified
Maple lock byte. Two unused generic function-pointer declarations are removed.
It also records 227 scoped identifier substitutions across 66 functions and
23 record-member declaration substitutions. The ledgers are
[naming-memory.tsv](naming-memory.tsv) and
[naming-memory-locals.tsv](naming-memory-locals.tsv).

## Global evidence

| Established names | Readers and writers that establish the role |
|---|---|
| `gNlPaletteAllocationBitmap` | `nlSetPaletteMap` sets allocation bits in four 16-bit words; `nlSearchPalette` searches those words; initialization clears them. These are a bitmap, not four scalar counters. |
| `gNlTextureLoadAttempts` | Incremented at the start of `nlLoadTextureMem`, before `kmCreateTextureSurface` can fail. Reset by initialization and `nlFreeTextureAll`; deliberately named attempts rather than successful loads. |
| `gNlCommonTextureOffset` | Written directly by `nlSetCommonTextureOffset`, consumed by the common texture/sprite accessors, and reset by texture initialization/freeing. |
| `gNlObjectMatrix` | Supplied to `nlMultiMatrixRevOrder8` by `nlObjPut`; the model/project/view matrix helpers also access the same storage. |
| `gNlObjectModifierModeBits` | `nlObjPutMvSetMode` packs mode 1 or 2 into bits 29–30; `nlObjPutMvSub` places those bits in the modifier parameters passed to its renderer. |
| `gNlSoundPackUsedBytes` | Pack loading adds a pack's byte count, freeing subtracts released bytes, and `nlsndRemainMem` subtracts this total from the AICA memory-space result. |
| `gFrameBufferReadControl` | The cached register word written to PVR register offset `0x44` by `kmiWriteDispModeRegisters` and `kmBlankScreen`, constructed by `kmiWriteFBRegister`. |
| `gStripBufferEnabled`, `gStripBufferSizeBytes` | `kmySetStripBuffer` records the enable flag and byte size and packs the corresponding fields into the framebuffer control word. The byte size is divided by 32 for its register field. |
| `gDisplayFilterUsesSharedFrameBuffer` | `kmSetDisplayMode` sets this for its selected filter-mode subset. `kmiFLWCTRLStartDisplayEntry` then passes the same surface as both framebuffer arguments. The name describes that observed sharing, without asserting the original filter enum's spelling or overall buffering policy. |
| `gRenderPacketQueueNextLinks` | The word at offset `0x10` of each 452-byte packet entry. `kmiFLWCTRLGetRenderPacket` links the old tail to the new entry there; rotation traverses it; `kmiFLWCTRLFindTailQueue` looks for zero. |
| `gAdxStreamFileHandles` | Thirty-two 100-byte slots allocated by `ADXSTMF_Create`, cleared by initialization and visited by `ADXSTM_ExecServer`. |
| `gAdxfFileHandles` | Sixteen 48-byte slots searched by `adxf_AllocAdxFs`; initialization and finish clear the same pool. |
| `gAdxfInvalidateReadCache` | When set to 1, the read and close paths invoke `ADXF_Ocbi` for the read buffer and length. |
| `gAdxfCommandHistory`, `gAdxfCommandSequences`, `gAdxfCommandHistoryWriteIndex` | `adxf_SetCmdHstry` writes 256 sixteen-byte records containing slot, command, sequence and three arguments; maintains per-slot 16-bit sequences; wraps and advances the history index. |
| `gSjRbfHandles`, `gSjRbfInitCount` | Sixty-four 48-byte ring-buffer handles allocated by `SJRBF_Create`; initialization clears the pool on the first initialization, and finish decrements the count. |
| `gAdxStreamInternalErrorCount`, `gAdxPcmDecodeErrorFlag` | The internal stream-joint error hook increments the former; the PCM-decode error hook sets the latter to 1. |
| `strAdxtPanChannelRangeError`, `gAdxSpsdMagic` | The former is passed to the error hook for an out-of-range output-pan channel; the latter supplies the four-byte signature checked by `ADXB_CheckSpsd`. String contents are not reproduced here. |
| `gMapleTransferLockAddress`, `gMapleTransferLockByte` | Receive-pre and send use TAS through the pointer stored at `8c1feb48`; receive-post/send release its target byte. The pointer's actual value is `8c1feb4c`, now separately named. Nearby Maple/gun state is not assumed to be that byte. |

The PVR offset interpretation is consistent with the
[KallistiOS register definitions](https://github.com/KallistiOS/KallistiOS/blob/master/kernel/arch/dreamcast/include/dc/pvr/pvr_regs.h).
No external header or SDK content is added to the source tree.

## Records and scoped variables

The `Prefix` suffix explicitly identifies partial layouts. Their sizes, field
types, offsets and padding are retained; they are not new native-port types.

- `MapleDriverStatePrefix` names the command write cursor, the previous
  command's word count, accumulated command bytes and light-gun state pointer.
  The old member named `limit` is incremented by `nopCount * 4`; it is an
  accumulated byte count, not a limit.
- `MapleLightGunStatePrefix` identifies the DMA address and transfer flags.
- `TextureBlockQueuePrefix` identifies next/previous links from insertion and
  removal. Bit 0 of the allocation-flags word is set/cleared by the allocator;
  no meaning is assigned to its other bits.
- `TextureDmaRequestPrefix` identifies the operation, byte count, source and
  destination fields set by `kmySetTextureDMA`.
- `AdxBitstreamDecoderPrefix` identifies status (also read by `ADXB_GetStat`)
  and the PCM decoder passed to `ADXPD_Stop`.
- `NlSoundStreamState` identifies the position address read over G2.
- `GdFsDirectoryOperationsPrefix` names the callback actually dispatched by
  `gdFsLoadDirFast` at table offset 36.

Existing hardware-register, interrupt-handler and VMU-command records receive
descriptive member names. Unknown fields that have not been established from
their users remain visible for later analysis.

Ring-buffer names follow the code's free/filled queues: reset initializes free
bytes to buffer size and filled bytes to zero; get advances the corresponding
write/read position; put returns bytes to the opposite queue. The wrap-margin
length is the extra contiguous area mirrored by `SJRBF_PutChunk`.

Thirty-seven short audio getters now name their receiver, status, decoder
pointer and returned field. The names preserve the identified API's meaning
without guessing units for positions and offsets. Getters whose abbreviated
field meaning remains uncertain are left for further analysis.

The two retired declarations are `g_0c14a9a8` in `src/sdk_b_2.c` and
`g_0c14a640` in `src/nltex_2.c`. Each occurred only in its declaration, had no
known address mapping and was not referenced by executable code.

## Verification and remaining work

All 22 changed C files match the recorded identifier/member substitutions and
the two unused declaration removals. Compiling each file before and after
through Wibo emits identical assembly after normalizing exported names and
internal label numbers and discarding comments. Instructions, operand values,
pool contents, layouts and control flow are preserved. Every test artifact is
unchanged; no new simulator pass is claimed for this naming-only batch.
The required `bash build.sh` rebuild through Wibo prints `MATCH` against the
original executable. Return-register and proof-record audits pass; the three
pre-existing consistency findings remain unchanged.

The audit now also counts temporary names per function. A temporary spelling
used elsewhere in the same generated file no longer hides completed naming
work: this batch reduces the function/name lower bound from 29,143 to 28,957.
The old file/name measurement is retained for comparison with earlier reports.
Offset-style record members are now reported as a separate lower bound.

There are no generic function aliases or global identifiers left in C. The
address tables still contain 102 generic global names, and the audit reports
28,957 generated-style function/name pairs and 31 offset-style record
identifiers. Raw-address access patterns, uncertain record fields and generic
hand-written locals also need further analysis. The full relabeling goal is
not complete.
