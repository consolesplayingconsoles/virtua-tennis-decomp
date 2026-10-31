# SDK naming follow-up

This batch identifies three previously unnamed functions, fifty global symbols
(including three additional aliases of the same storage), five record types,
109 parameters or locals across 58 functions, and two callback-record members.
The address ledger is [naming-sdk.tsv](naming-sdk.tsv); scoped names are in
[naming-sdk-locals.tsv](naming-sdk-locals.tsv). Names describe observed behavior
and do not claim to recover the SDK author's spelling.

## Newly identified functions

| Address | Name | Evidence |
|---|---|---|
| `8c1e3080` | `kmSetHSyncCallback` | Registers callback slot 2. `syChainAddHandler` installs `syChainMasterHandlerPVR_H` through this entry for event `0x920`. |
| `8c1e3180` | `kmSetVSyncCallback` | Registers callback slot 1. `syChainAddHandler` installs `syChainMasterHandlerPVR_V` through this entry for event `0x900`. |
| `8c1e6420` | `kmSetCullingThreshold` | Stores the float at `8c471e38` and marks update bit 1. `kmiSetupRender` consumes that bit and passes the float to `kmSetCullingRegister`, which writes its absolute-value bits to hardware register offset 120. |

## Global evidence

| Reader or writer | Established names and behavior |
|---|---|
| `nlInitTextureSurface`, `nlSetTextureParameter` | `gNlTextureSurfaces`, `gNlTextureSurfaceCount`: 15-word surface records and their count. |
| `nlObjPutSetGlobalAmbience` | `gNlGlobalAmbience`, `gNlObjectGlobalAmbience`: the two copies of the ambient light scalar. |
| `nlSpriteSetImaginaryScreenSize`, `nlSpriteGetImaginaryScreenSize` | `gNlSpriteScreenSize` holds width/height; `gNlSpriteInverseScreenSize` holds their reciprocals. |
| `nlsndStreamGenerateHdInfo` | `gNlSoundStreamHeaderTemplate`: source of the 64-byte header copy. |
| `nlsndG2DmaHandleOpen`, `nlsndG2DmaHandleClose` | `gNlG2DmaHandles`: sixteen four-word handle records, with an allocation flag in the first word. |
| `nlSetDummyTextureParameter` | `gNlDummyTextureSurface`: supplies texture parameter words 12 and 13. |
| `nlSetFontSize`, `nlInitFont`, `nlInitPrint` | `gNlFontWidth`, `gNlFontHeight`, `gNlFontTextureAddress`: font dimensions and the texture source passed to `kmLoadTexture`. |
| `nlSpriteClearSpriteIndex` | `gNlSpriteIndexBitmap`: bit indexed by the sprite ID. |
| `nlFreePaletteAll` | `gNlPaletteCount`: count passed alongside the palette table to `nlInitPalette`. |
| `nlPrintTileClipMode` | `gNlPrintTileClipFlags`: the packed print state whose bits 16–17 select tile clipping. |
| `nlRenderTextureInit` | `gNlRenderTextureTableState`: aligned table address, entry count, and current index initialized to -1. |
| `hwInit` | `gHwInitRegisterTable`, `HardwareRegisterInit`: address/value records, terminated by a null address. |
| `syChainMasterHandler` | `gInterruptHandlerChains`, `InterruptHandlerNode`: heads indexed by event code shifted four bits, linked callbacks and their arguments. |
| `kdGetDevice`, `kdSetHandler`, `mpdrv_*` | `gMapleDeviceTable` has 24-byte device entries; `gMapleHandlers` has 32 handler slots; `gMapleDriver` is the shared driver-state pointer. |
| `mpdrv_get_version` | `gMapleDriverVersionWord0`, `gMapleDriverVersionWord1`: two separately returned version words. Their further encoding is deliberately not assumed. |
| `vmsfs_c_setparam` | `gVmsFileCommandStates`, `VmsFileCommandState`: per-slot command parameter records. Individual parameter meanings remain unresolved. |
| `set_fat`, `direntry`, `vmsfs_exit` | `gVmsVolumeStates`: eight 328-byte records with FAT and directory pointers. `gVmsIoInterface` supplies the storage operations used by `set_fat`. |
| `kmiFLWCTRLGetVBufLockStatus` | `gVertexBufferLockState`: packed vertex-buffer locks, released-lock bits, and associated reset state. |
| `kmiQueryFinishAllPacket` | `gRenderPacketVBlankWaitPending` requests a one-time VBlank wait; `gRenderPacketQueues` contains eight records of 452 bytes. |
| `gdFsSetGlobalErrG`, `gdFsReadWG` | `gGdFsGlobalState`: filesystem state with the saved handle at byte 20 and error code at byte 48. |
| `gdFsOpen`, `gdFsOpenRange`, `gdFsGetDrvStat` | `gGdFsOperations`, `GdFsOperations`: installed filesystem operation table. |
| `kmyRegisterCallback` | `gRenderCallbacks`, `RenderCallbackSlot`: callback and callback-argument pairs. Both member declarations and their uses were renamed. |
| `kmiInitFBControl` | `gFrameBufferControlRecords`: four 52-byte framebuffer control records. |
| `kdGetGunPosition` | `gLightGunPosition`: the two output coordinates. |
| `buFbrSleepFiber`, `setjmp`, `longjmp` | `gBuFiberScheduler`: scheduler clock, current fiber and scheduler context. |
| `nlsndStreamGetPlayPos` | `gNlSoundStreams`: stream records whose active/busy flags gate reading the AICA position handle. |
| `kmyiGetPALExtRatio` | `gPalExtensionRatioCallback`: callback fills the ratio field of a mode/ratio request. |
| `ADXERR_Init`, `ADXERR_CallErrFunc` | `gAdxErrorCallback`, `gAdxErrorCallbackArgument`, `gAdxErrorMessageBuffer`: formatting destination and callback invoked with the saved argument. |
| `mwRnaErrEntryFunc` | `gMwRnaErrorCallback`, `gMwRnaErrorCallbackArgument`, `gMwRnaErrorMessageBuffer`: installed callback, argument and cleared 256-byte error buffer. |
| `adxf_ChkPrmGfr` and RNA null checks | `gAdxfPartitionInfoTable` and three error-message symbols identify partition/file ID range failures and null RNA handles. Message contents are not reproduced in the naming ledgers. |

## Validation and remaining work

All 23 changed C files contain only the recorded identifier substitutions.
Compiling each file before and after the changes through Wibo emits identical
assembly after normalizing global symbols and discarding comments. The three
renamed case files retain their test payloads. The return-register and
proof-record audits remain clean; the three previously documented consistency
findings are unchanged. No fresh simulator equivalence run is claimed. The required `bash build.sh`
rebuild through Wibo prints `MATCH` against the original executable.

`python3 tools/naming_audit.py` provides a read-only, lower-bound inventory of
the remaining generic identifiers. It separates unnamed function entries,
address-based globals, legacy function aliases and generated temporaries.
Declarations are included, so an old alias may be an unused declaration rather
than an actual call. Counts are work indicators, not evidence of naming quality.

The two remaining `FUN_` entries still require the boundary corrections
described in [naming.md](naming.md). Many generated locals and partially known
record fields also remain; this batch does not finish the relabeling goal.

Inventory after this batch: 134 generic global names in the name tables, 48
generic global names declared or referenced in C, 293 generic function aliases
declared or referenced in C, and 18,509 generated temporary file/name pairs.
These counts intentionally keep the full remaining labeling work visible.
