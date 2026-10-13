# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### ADXB_CheckSpsd (`8C208412`, 20 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/ADXB_CheckSpsd.json`
- equal
- one
- minus
- big
- small

### ADXB_ExecOneAu (`8C20813C`, 28 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_f/ADXB_ExecOneAu.json`
- type 2
- type 1
- type 0
- type 3
- minus
- 0x102
- 0x8001

### ADXB_ExecOneWav (`8C208A3C`, 40 bytes, `src/vtsdk_b.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_b/ADXB_ExecOneWav.json`
- mode 2
- mode 1
- mode 0
- mode 3
- mode -1
- mode 0x102
- mode 0x8000
- mode 0x100

### ADXB_Start (`8C1FFD0A`, 14 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/ADXB_Start.json`
- zero
- one
- two
- minus
- high

### ADXB_Stop (`8C1FFD18`, 26 bytes, `src/vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_a/ADXB_Stop.json`
- normal
- f8 zero
- other
- f4 already zero
- again

### ADXERR_Finish (`8C1F0150`, 26 bytes, `src/vtsdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_c/ADXERR_Finish.json`
- dirty
- clean
- other r0

### ADXF_Finish (`8C1F1B9A`, 56 bytes, `src/vtsdk_f.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_f/ADXF_Finish.json`
- dirty globals
- clean globals
- minus globals

### ADXPD_Destroy (`8C208B0E`, 20 bytes, `src/vtsdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_b/ADXPD_Destroy.json`
- null
- object
- object offset
- another

### ADXSJD_Destroy (`8C1F0444`, 52 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/ADXSJD_Destroy.json`
- null
- no buffer
- with buffer
- other buffer
- other r0

### ADXSTM_ExecServer (`8C1F0F2C`, 40 bytes, `src/vtsdk_f.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_f/ADXSTM_ExecServer.json`
- none
- first only
- mixed
- last only
- all
- twos
- alternate
- high byte value

### ADXSTM_GetBufSize (`8C1F0F8C`, 12 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/ADXSTM_GetBufSize.json`
- basic
- zero
- minus
- big
- swapped

### ADXSTM_GetGdfsStat (`8C1F0FB2`, 28 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/ADXSTM_GetGdfsStat.json`
- basic
- zero
- minus
- big
- other

### ADXSTM_SetBufSize (`8C1F0F9C`, 8 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_f/ADXSTM_SetBufSize.json`
- basic
- zero
- negative
- big

### ADXT_DiscardSmpl (`8C1E1846`, 46 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/ADXT_DiscardSmpl.json`
- flag 0
- flag 1
- flag ff
- ret neg
- flag 2 ret big

### ADXT_SetOutPan (`8C1E15C4`, 50 bytes, `src/vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_d/ADXT_SetOutPan.json`
- in range
- equal -> error
- above -> error
- ch 0 count 0
- signed count
- rna handle

### BCDtoDEC (`8C1EE738`, 24 bytes, `src/vtsdk_b.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_b/BCDtoDEC.json`
- 59
- zero
- 99
- 0xff
- 0x12345678
- top bit
- 0x0a
- 0x7f
- all ones

### DECtoBCD (`8C1EE714`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_a/DECtoBCD.json`
- 0
- 9
- 10
- 59
- 99
- 100
- 12
- 255
- big

### SJRBF_Destroy (`8C1F34A6`, 30 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_f/SJRBF_Destroy.json`
- null
- object
- object 2
- object 3

### SJRBF_Init (`8C1F341A`, 28 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_f/SJRBF_Init.json`
- zero
- one
- minus
- five
- minus big
- max
- min

### SJUNI_GetNumChainPool (`8C1F3CAE`, 26 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/SJUNI_GetNumChainPool.json`
- empty
- one
- three
- five
- nine

### adxf_ChkPrmGfr (`8C1E2670`, 62 bytes, `src/vtsdk_b.c`)
- equivalent on 7 development and 6 holdout cases, in `tests/vtsdk_b/adxf_ChkPrmGfr.json`
- ok
- b = last valid
- b = limit
- b negative
- a negative
- a = 256
- b = 0
- a=255 ok
- a huge
- b huge
- limit 1 b 0
- limit 0 b 0
- a=0 ok

### adxpd_error (`8C208BA0`, 8 bytes, `src/vtsdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_a/adxpd_error.json`
- call
- already set
- negative

### adxstm_sj_internal_error (`8C1F0DB6`, 10 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/adxstm_sj_internal_error.json`
- zero
- five
- wrap
- big

### buCreateExecFile (`8C1DFEDA`, 46 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/buCreateExecFile.json`
- state ok
- state 1
- state -1
- state 5
- state ok again

### buCreateFile (`8C1DFEA4`, 46 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_d/buCreateFile.json`
- state nonzero
- state zero
- state zero ret neg
- other
- state 0x100

### buFbrSleepFiber (`8C20716E`, 62 bytes, `src/vtsdk_e.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_e/buFbrSleepFiber.json`
- positive, setjmp 0
- negative
- zero, setjmp 1
- positive, setjmp 2
- big tick
- min
- tick minus

### buFbrWakeupFiber (`8C207152`, 28 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_c/buFbrWakeupFiber.json`
- idx0 set
- idx0 clear
- idx2 set
- idx3 clear
- idx1 set other
- idx4 set

### buFindFirstFile (`8C1DFD84`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_d/buFindFirstFile.json`
- state nonzero
- state zero
- state zero ret neg
- other
- state 0x100

### buFindNextFile (`8C1DFDB2`, 38 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/buFindNextFile.json`
- state 0 -> callee
- state 1 -> -1
- state -1 -> -1
- state 0 callee -1
- state 2
- state 0 callee big

### buGetDiskFree (`8C1DFD56`, 38 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_e/buGetDiskFree.json`
- state ok
- state fail
- state minus
- ok other
- ok zero
- fail big

### buGetDiskInfo (`8C1DFD28`, 38 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_e/buGetDiskInfo.json`
- state ok
- state fail
- state minus
- ok other
- ok zero
- fail big

### buGetFileSize (`8C1E0240`, 38 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/buGetFileSize.json`
- state 0 -> callee
- state 1 -> -1
- state -1 -> -1
- state 0 callee -1
- state 2
- state 0 callee big

### direntry (`8C1EE5F8`, 24 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/direntry.json`
- unit 1 entry 3
- entry 0
- unit 0
- entry negative
- unit 7 big entry
- unit 3 entry 1

### gdFsCheckEof (`8C1E71D4`, 40 bytes, `src/vtsdk_e.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_e/gdFsCheckEof.json`
- null
- flag zero
- pos past
- pos before
- equal
- negative pos
- negative size
- flag high byte
- big

### gdFsClose (`8C1E70EC`, 56 bytes, `src/vtsdk_d.c`)
- equivalent on 7 development and 3 holdout cases, in `tests/vtsdk_d/gdFsClose.json`
- null
- flag zero
- state 2
- state 3
- state 4
- state 1
- state 5
- state 0
- state 0x10002
- state 2 again

### gdFsGetDrvStat (`8C1DE868`, 24 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/gdFsGetDrvStat.json`
- table set
- null table
- other args
- other target

### gdFsGetLE4 (`8C1DD37C`, 38 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_c/gdFsGetLE4.json`
- 1234
- high bytes
- zero
- top bit
- ff
- low

### gdFsGetTransStat (`8C1E75F0`, 26 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_b/gdFsGetTransStat.json`
- null
- zero state
- ok
- negative short
- zero value
- ffff
- 7fff

### gdFsLoadDirFast (`8C1DE770`, 22 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/gdFsLoadDirFast.json`
- null
- object
- other object
- arg zero
- arg minus

### gdFsOpen (`8C1DE7B2`, 22 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/gdFsOpen.json`
- table set
- null table
- other args
- other target

### gdFsOpenRange (`8C1DE7E0`, 24 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/gdFsOpenRange.json`
- table set
- null table
- other args
- other target

### gdFsReadWG (`8C1DD654`, 62 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_f/gdFsReadWG.json`
- reopen fails
- reopen ok
- ok read neg
- shift 21 bits
- handle zero field
- big sector

### gdFsSetGlobalErrG (`8C1DD3C4`, 10 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/gdFsSetGlobalErrG.json`
- one
- zero
- neg
- big
- other

### gdFsSetTmode (`8C1E71FC`, 26 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_b/gdFsSetTmode.json`
- null
- zero state
- ok
- ok negative
- ok wide value
- state negative short
- null again

### hwInit (`8C1DF6B0`, 40 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/hwInit.json`
- empty table
- one entry
- three entries
- same addr twice
- four
- one other

### kdGetDevice (`8C1E9B4C`, 18 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/kdGetDevice.json`
- 0
- 1
- 3
- 7
- negative
- 100

### kdGetGunPosition (`8C1EA1BE`, 12 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/kdGetGunPosition.json`
- small
- negative
- zero
- big
- mix

### kdSetDeviceRequest (`8C1E9BB4`, 38 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/kdSetDeviceRequest.json`
- flag zero
- flag set
- flag big
- ret minus
- flag 256

### kdSetHandler (`8C1EA1DE`, 16 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_a/kdSetHandler.json`
- 0
- 31
- 32 ignored
- 5
- negative
- 100
- 30

### kdSetResetPattern (`8C1E9DFA`, 38 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/kdSetResetPattern.json`
- flag zero
- flag set
- flag big
- flag byte
- flag 2
- zero ret

### kmSetCullingRegister (`8C205D40`, 28 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_c/kmSetCullingRegister.json`
- one
- negative
- zero
- neg zero
- big
- small
- neg big

### kmiCheckSysConfigSetting (`8C1FBE4C`, 38 bytes, `src/vtsdk_f.c`)
- equivalent on 6 development and 3 holdout cases, in `tests/vtsdk_f/kmiCheckSysConfigSetting.json`
- bit1 clear, g zero
- bit1 clear, g set, f3 other
- bit1 set
- f3=2 bit5 clear
- f3=2 bit5 set
- f3=2 g set bit5 clear
- f3=2 bit5 set g set
- all bits
- bit1 clear f3=3

### kmiFLWCTRLFindTailQueue (`8C1F99E0`, 44 bytes, `src/vtsdk_f.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_f/kmiFLWCTRLFindTailQueue.json`
- first
- third
- state 1 busy then free
- none
- last
- empty
- all busy
- state 3

### kmiFLWCTRLGetVBufLockStatus (`8C1F9A0C`, 46 bytes, `src/vtsdk_a.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_a/kmiFLWCTRLGetVBufLockStatus.json`
- no lock, bit 0
- no lock, bit 5 clear
- lock mask clears bits
- lock clears bit, ask other
- bit 31
- lock then bit 8 cleared
- lock mask all
- no lock bit 3

### kmiGetITPCurrent (`8C208CA0`, 40 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/kmiGetITPCurrent.json`
- basic
- zero
- negative
- big
- swap

### kmiInitFBControl (`8C1F48C0`, 22 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/kmiInitFBControl.json`
- junk
- already zero
- pattern
- seq

### kmiQueryFinishAllPacket (`8C1F9704`, 58 bytes, `src/vtsdk_b.c`)
- equivalent on 6 development and 3 holdout cases, in `tests/vtsdk_b/kmiQueryFinishAllPacket.json`
- flag, table empty
- no flag, table empty
- slot 0 used
- flag and slot 7 used
- slot 8 is out of range
- slot 3
- flag, slot 4
- slot 1 last byte of entry only
- slot 7 no flag

### kmiSetFogDMA (`8C205E80`, 42 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/kmiSetFogDMA.json`
- mask
- low bits
- old data
- other

### kmyConnectRenderPacket (`8C205BF8`, 40 bytes, `src/vtsdk_e.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_e/kmyConnectRenderPacket.json`
- plain
- r0 dirty
- other

### kmyConvertAddress64to32 (`8C208D40`, 34 bytes, `src/vtsdk_c.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_c/kmyConvertAddress64to32.json`
- zero
- bit 2
- low bits
- upper half
- both
- mid
- below
- max
- big

### kmyCopyFromTexture (`8C203360`, 40 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/kmyCopyFromTexture.json`
- zero len
- copy
- neg len
- wrap
- one

### kmyFreeArea (`8C1E2DC0`, 36 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_b/kmyFreeArea.json`
- lookup fails -> 7
- found
- negative short
- slot 0
- big a
- short 0x8000
- result negative

### kmyRegisterCallback (`8C1F6EC0`, 30 bytes, `src/vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_d/kmyRegisterCallback.json`
- null fn
- idx 0
- idx 3
- null fn arg ignored
- idx 15
- idx 1 with old

### kmyResetFatalError (`8C205C68`, 56 bytes, `src/vtsdk_e.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_e/kmyResetFatalError.json`
- plain
- zeros
- minus

### kmyResetTA (`8C205C40`, 20 bytes, `src/vtsdk_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_b/kmyResetTA.json`
- plain
- r4 junk
- r4 other

### kmySetBackGroundDepth (`8C205CA0`, 54 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_f/kmySetBackGroundDepth.json`
- ok
- invalid
- ok negative
- ok zero
- ok big
- invalid zero

### kmySetBorderColor (`8C1F7440`, 26 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/kmySetBorderColor.json`
- white
- rgb
- high byte only
- mix
- zero

### kmySetCheapShadowMode (`8C205D00`, 32 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/kmySetCheapShadowMode.json`
- 1,2
- zero
- b over byte
- a large
- negative
- a high

### kmySetColorClampMIN (`8C206478`, 24 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/kmySetColorClampMIN.json`
- white
- rgb
- zero
- mix
- alpha

### kmySetStripBuffer (`8C1F75A0`, 54 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vtsdk_c/kmySetStripBuffer.json`
- zeros
- a1 b64
- negative b
- b wraps 5 bits
- reg zero
- b -1
- b big
- b 31

### kmySetTADMA (`8C206040`, 34 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_d/kmySetTADMA.json`
- basic
- flag bit already
- old data
- other
- upper half junk

### kmySetTextureDMA (`8C1F7600`, 30 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/kmySetTextureDMA.json`
- zeros
- values
- a high bits
- negative b
- a with 11 bits
- a 0xEE000000

### kmyiGetPALExtRatio (`8C1F6920`, 40 bytes, `src/vtsdk_e.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_e/kmyiGetPALExtRatio.json`
- zero
- three
- four
- five
- minus
- two
- one
- huge
- very neg

### kmytex_FBEnQueueEntry (`8C1F9334`, 28 bytes, `src/vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_a/kmytex_FBEnQueueEntry.json`
- empty queue
- nonempty queue
- empty, other layout
- nonempty, other layout
- empty, third layout

### memset (`8C0F7F30`, 24 bytes, `src/port_sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/port_sdk_b/memset.json`
- n=0
- n=1
- n=13
- value over a byte
- n=32
- negative val
- n=3 odd start

### mpdrv_dreqcount (`8C1FD812`, 10 bytes, `src/vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_a/mpdrv_dreqcount.json`
- 5
- zero
- negative
- big
- one

### mpdrv_frame_recv_post (`8C1FD548`, 22 bytes, `src/vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_d/mpdrv_frame_recv_post.json`
- basic
- flag was set
- other

### mpdrv_get_debugmode (`8C1FD808`, 10 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/mpdrv_get_debugmode.json`
- one
- zero
- addr
- other base
- big

### mpdrv_get_device (`8C1FD6EC`, 16 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/mpdrv_get_device.json`
- zero
- three
- minus
- big
- other base

### mpdrv_get_gunmode (`8C1FD868`, 10 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/mpdrv_get_gunmode.json`
- one
- zero
- neg
- big
- other base

### mpdrv_get_lastsendaddr (`8C1FD840`, 10 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/mpdrv_get_lastsendaddr.json`
- one
- zero
- addr
- other base
- big

### mpdrv_get_portstatus (`8C1FD70E`, 14 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/mpdrv_get_portstatus.json`
- 0
- 3
- negative
- other base
- big

### mpdrv_get_version (`8C1FD7E6`, 24 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/vtsdk_b/mpdrv_get_version.json`
- both
- first null
- second null
- both null
- adjacent

### mpdrv_gunmode (`8C1FD85E`, 10 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/mpdrv_gunmode.json`
- one
- zero
- neg
- big
- other

### mpdrv_hreset (`8C1FDFE6`, 58 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/mpdrv_hreset.json`
- x=1 cnt 0
- cnt 3
- x high bits
- cnt negative
- cnt 8
- x=0x300

### mpdrv_nopcount (`8C1FD7BE`, 10 bytes, `src/vtsdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_b/mpdrv_nopcount.json`
- value
- zero
- negative
- other base
- big

### mpdrv_set_ft4ctrl_ns (`8C1FEA30`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/mpdrv_set_ft4ctrl_ns.json`
- 1,2
- zero
- negative
- big
- other
- port 2

### mpdrv_set_getcond_ns (`8C1FE6A2`, 30 bytes, `src/vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_d/mpdrv_set_getcond_ns.json`
- a b
- ret 7
- ret neg

### mpdrv_set_getminfo_ns (`8C1FE814`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/mpdrv_set_getminfo_ns.json`
- shift
- big c
- zero c
- c ff

### mpdrv_set_setcond_ns (`8C1FEA90`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/mpdrv_set_setcond_ns.json`
- 1..4
- zero
- negative
- big
- other
- port 2

### mpdrv_speed (`8C1FD7D2`, 10 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/mpdrv_speed.json`
- one
- zero
- neg
- big
- other

### mwRnaErrEntryFunc (`8C200144`, 30 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/mwRnaErrEntryFunc.json`
- clear
- clear, b ignored
- set
- set small
- set big
- set b zero

### mwRnaGetAutoSw (`8C1F2AB6`, 42 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_c/mwRnaGetAutoSw.json`
- null
- bit set
- bit clear
- all
- zero
- bit 3 only
- bits 2,0

### mwRnaGetSfreq (`8C1F2E52`, 30 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/mwRnaGetSfreq.json`
- null
- 44100
- zero
- negative
- 48000
- big

### mwRnaGetTime (`8C1F2A08`, 64 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/mwRnaGetTime.json`
- null
- normal
- negative diff
- equal
- big
- zero start

### mwRnaGetTransSw (`8C1F2A68`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_d/mwRnaGetTransSw.json`
- null
- bit set
- bit clear
- all ones
- zero byte
- only bit 7

### mwRnaSetSfreq (`8C1F2C1E`, 58 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/mwRnaSetSfreq.json`
- null object
- ok
- zero freq
- negative
- other freq
- null other freq

### nlAbsSqrt (`8C0ECCA0`, 32 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vtsdk_f/nlAbsSqrt.json`
- positive
- negative
- zero
- two
- neg zero
- small
- neg 2.5
- hundred

### nlAddVector (`8C0F0520`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlAddVector.json`
- small integers
- zeros
- signs and fractions
- large values
- vd and vs the same vector
- 3-4-5
- rounding
- opposite signs
- infinity
- vd and vs the same vector

### nlArcCot (`8C0ECBE0`, 48 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_e/nlArcCot.json`
- zero
- two
- negative
- neg zero
- tiny
- big

### nlCloseEvent (`8C010A90`, 106 bytes, `src/nlevent.c`)
- equivalent on 6 development and 4 holdout cases, in `tests/nlevent/nlCloseEvent.json`
- null
- only event
- the head
- the tail
- a middle event
- the event to run next
- head with one extra block
- tail with three extra blocks
- middle with two extra blocks, runs next
- only event, extra block

### nlCos (`8C0ECE40`, 24 bytes, `src/port_trig.c`)
- equivalent on 6 development and 6 holdout cases, in `tests/port_trig/nlCos.json`
- 0
- a quarter turn
- a half turn
- just past a half turn
- three quarters
- 0xFFFF
- 0x10000
- negative angle
- 0x7FFF
- 0x1234
- 0xE000
- 0x00018000

### nlCosec (`8C0ECE60`, 48 bytes, `src/port_sdk_c.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sdk_c/nlCosec.json`
- zero
- half turn
- quarter
- generic
- wraps to zero
- wraps to half
- upper bits ignored
- three quarters

### nlCosf (`8C0ECE90`, 22 bytes, `src/port_sdk_d.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sdk_d/nlCosf.json`
- zero
- positive
- negative
- pi
- large
- negative large
- tiny
- neg zero

### nlCosh (`8C0ECEB0`, 48 bytes, `src/vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_d/nlCosh.json`
- x=0
- x=0x4000
- x=0xFFFF
- high bits ignored
- x=1 exp 1e-3
- x=0x8000

### nlExecuteEvent (`8C010B64`, 38 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlExecuteEvent.json`
- empty list
- one event
- three events
- stale next-to-run
- two events
- five events

### nlFogDensity (`8C0EDE60`, 16 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/nlFogDensity.json`
- zero
- value
- negative
- big
- small

### nlFraction (`8C0ED010`, 64 bytes, `src/vtsdk_b.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/vtsdk_b/nlFraction.json`
- 1.5
- -1.5
- 0.25
- zero
- 2^23 and above give 0
- -3.75
- 123456.789
- -0.999
- 8388607.5
- -9e6
- 1e10

### nlFree (`8C010728`, 182 bytes, `src/heap.c`)
- equivalent on 7 development and 7 holdout cases, in `tests/heap/nlFree.json`
- free a block (previous free, next in use)
- free a block (previous in use, next in use)
- free a block (previous in use, next free)
- free a block (previous free, next free)
- free the first block
- free the last block (previous in use)
- free the last block (previous free)
- previous free, next free, free list reversed
- first block, next free
- only block
- three free neighbours in a row, middle freed
- previous free is the tail of the free list
- next free is in the middle of the free list
- already free block freed again

### nlFreePaletteAll (`8C0EA890`, 16 bytes, `src/port_sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_a/nlFreePaletteAll.json`
- normal
- zero
- negative short
- big
- sign bit

### nlGetAverageVector (`8C0F0560`, 44 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_e/nlGetAverageVector.json`
- halves
- zero w2
- mixed
- negative
- zeros

### nlGetPaletteID (`8C0EA910`, 16 bytes, `src/port_sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_b/nlGetPaletteID.json`
- id 0
- id 1
- id 3 (negative short)
- id 7
- id 5

### nlInitFont (`8C0ED7B0`, 16 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/nlInitFont.json`
- store
- zero
- neg
- other

### nlInitHeapMemory (`8C0105A8`, 50 bytes, `src/heap.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/heap/nlInitHeapMemory.json`
- a 0x1000-byte heap
- a 0x30000-byte heap
- size not a multiple of 4
- a 0x40-byte heap

### nlInitPalette (`8C0EA850`, 58 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_e/nlInitPalette.json`
- zero entries
- one entry
- five entries
- ten entries
- other table
- count 2 high bits

### nlInitTextureSurface (`8C0EA640`, 44 bytes, `src/port_sdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_b/nlInitTextureSurface.json`
- n=0
- n=1
- n=3
- n negative
- n=4 elsewhere
- n=2

### nlInnerProduct (`8C0F0590`, 24 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlInnerProduct.json`
- small integers
- zeros
- signs and fractions
- larger values, exact in float (the simulator takes fipr exact)
- 3-4-5
- binary fractions
- opposite signs, exact in float
- infinity

### nlInvertAbsSqrt (`8C0ED050`, 32 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/port_sdk_e/nlInvertAbsSqrt.json`
- zero
- four
- negative
- one
- callee zero
- neg zero
- quarter

### nlInvertSqrt (`8C0ED070`, 22 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/port_sdk_a/nlInvertSqrt.json`
- zero
- 4
- 0.25
- 64
- 1
- 256
- negative 0

### nlLength (`8C0F05B0`, 32 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlLength.json`
- small integers
- zeros
- signs and fractions
- large values
- 3-4-5
- rounding
- opposite signs
- infinity

### nlMalloc (`8C01060C`, 142 bytes, `src/heap.c`)
- equivalent on 10 development and 8 holdout cases, in `tests/heap/nlMalloc.json`
- 0 bytes (rounds up to 8)
- 1 byte
- exact multiple of 4
- rounds up to a multiple of 4
- takes the whole block (remainder under 16)
- takes the whole block (remainder exactly 16 - splits)
- first fit skips a small block
- first fit skips used blocks
- no block big enough
- takes a block that is not first in the free list
- whole block, middle of the free list
- whole block, tail of the free list
- split the last free block
- empty free list
- huge request
- request 15 over a block
- smallest split, 16 spare
- second free block fits, first does not

### nlObjPut (`8C0F25B0`, 44 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlObjPut.json`
- flag 2 clear
- flag 2 set
- flags 0xFD
- flags all
- flag 1
- flag 3

### nlObjPutMvSetMode (`8C0F2240`, 18 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_e/nlObjPutMvSetMode.json`
- zero
- one
- two
- three
- minus
- big

### nlObjPutSetFadeColor (`8C0F2780`, 30 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/nlObjPutSetFadeColor.json`
- white
- channels
- zero
- negative
- large

### nlObjPutSetGlobalAmbience (`8C0F2680`, 10 bytes, `src/port_sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/port_sdk_b/nlObjPutSetGlobalAmbience.json`
- 1.0
- zero
- 0.25
- negative

### nlOuterProduct (`8C0F05D0`, 52 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlOuterProduct.json`
- x cross y
- y cross z
- general ints
- parallel
- fractions
- negatives

### nlPrintTileClipMode (`8C0ED7D0`, 32 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlPrintTileClipMode.json`
- all set mode 0
- zero mode 3
- mode 1
- mode 2
- mode 5 overflows field
- mode ffff

### nlPrnIndentOff (`8C0EDB10`, 16 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_f/nlPrnIndentOff.json`
- all ones
- one
- zero
- odd
- top and low
- two

### nlPrnIndentOn (`8C0EDB00`, 10 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/nlPrnIndentOn.json`
- clear
- set
- other bits
- all
- bit 1

### nlPushUnitMatrix (`8C0EFDB0`, 26 bytes, `src/port_sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/port_sdk_b/nlPushUnitMatrix.json`
- matrix ptr
- null
- other
- big

### nlReloadPalette (`8C0EA920`, 64 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_c/nlReloadPalette.json`
- idx 0 active
- idx 1 flag zero (no call)
- idx 2 negative a
- idx 3 big
- idx 0 other table
- idx 0 zero flag only

### nlReloadPalette8888 (`8C0EA960`, 16 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_d/nlReloadPalette8888.json`
- index 0
- index 7
- index 255
- index -1
- index 1000

### nlRotate (`8C0EFEB0`, 54 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/nlRotate.json`
- x axis
- mixed
- negative
- zero vec
- large

### nlScaleUnitVector (`8C0F0650`, 60 bytes, `src/port_sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_b/nlScaleUnitVector.json`
- unit x
- scaled
- negative comps
- zero vec
- negative scale

### nlScaleVector (`8C0F0690`, 28 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlScaleVector.json`
- small integers, scale 2
- zeros, scale 0
- signs and fractions, scale -0.5
- large values, scale 3
- vd and vs the same vector
- 3-4-5, scale 2
- rounding, scale 0
- opposite signs, scale -0.5
- infinity, scale 3
- vd and vs the same vector

### nlScalor (`8C0F06B0`, 20 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_c/nlScalor.json`
- 3 4 12
- zero
- 1 2 2
- negative
- 0.5s
- axis

### nlSetDummyTextureParameter (`8C0EA7C0`, 28 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_d/nlSetDummyTextureParameter.json`
- mixed
- zero dest
- zero src
- low bits overlap
- pattern

### nlSetFontSize (`8C0EDB20`, 10 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_d/nlSetFontSize.json`
- 1,2
- zero
- 640x480
- negative
- big

### nlSpriteClearSpriteIndex (`8C0F4AA0`, 30 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_d/nlSpriteClearSpriteIndex.json`
- index 0
- index 33
- index 31
- index 255 pattern
- already clear
- index 100

### nlSpriteGetImaginaryScreenSize (`8C0F41E0`, 16 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/nlSpriteGetImaginaryScreenSize.json`
- 640x480
- square
- zero
- negative
- wide

### nlSpriteSetImaginaryScreenSize (`8C0F41C0`, 24 bytes, `src/port_sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_b/nlSpriteSetImaginaryScreenSize.json`
- 640x480
- 2x4
- 1x1
- wide
- fractions

### nlSubVector (`8C0F06E0`, 32 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_d/nlSubVector.json`
- simple
- zero
- negative result
- fractions
- large

### nlSubVector3op (`8C0F0700`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlSubVector3op.json`
- small integers
- zeros
- signs and fractions
- large values
- vd is vs1
- 3-4-5
- rounding
- opposite signs
- infinity
- vd is vs1

### nlTranslateV (`8C0F04B0`, 20 bytes, `src/port_sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_d/nlTranslateV.json`
- 1 2 3
- zero
- fractions
- large
- negative

### nlsndG2DmaHandleClose (`8C0F6D80`, 20 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/nlsndG2DmaHandleClose.json`
- open
- closed
- other
- minus one
- big

### nlsndG2DmaHandleOpen (`8C0F6D50`, 34 bytes, `src/port_sdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_b/nlsndG2DmaHandleOpen.json`
- all free
- first two used
- last free
- all used
- gap
- only last used

### nlsndG2Read (`8C0F4B20`, 14 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/nlsndG2Read.json`
- ready at once
- busy twice
- bits outside mask
- busy bit 0x20 then 0x01

### nlsndG2WriteN (`8C0F4B30`, 52 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_c/nlsndG2WriteN.json`
- zero
- one
- three
- negative
- five
- two

### nlsndRemainMem (`8C0F6130`, 20 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/nlsndRemainMem.json`
- plain
- zero
- negative
- big
- wrap

### nlsndStreamGenerateHdInfo (`8C0F6800`, 22 bytes, `src/port_sdk_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/port_sdk_b/nlsndStreamGenerateHdInfo.json`
- as loaded
- pattern 1
- pattern 2

### nlsndStreamGetHdInfo (`8C0F63A0`, 14 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlsndStreamGetHdInfo.json`
- 0
- 1
- 0xff
- 0x80
- 0x7f
- 0x10

### nlsndStreamGetPlayPos (`8C0F6510`, 46 bytes, `src/vtsdk_e.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_e/nlsndStreamGetPlayPos.json`
- ready entry 3
- busy entry 1
- unused entry 0
- kind 2 entry 2
- busy entry 4
- index high bits (short)
- index high bits 2
- used=2 busy=1

### nlsndStreamSetHdFx (`8C0F68F0`, 26 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_e/nlsndStreamSetHdFx.json`
- zero
- small
- both
- negative
- high bits

### nlsndStreamSetHdGain (`8C0F6910`, 18 bytes, `src/port_sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_a/nlsndStreamSetHdGain.json`
- 0
- 0x7f
- 0x1ff truncated
- neg
- 0x80

### nlsndStreamSetHdPan (`8C0F6890`, 12 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_b/nlsndStreamSetHdPan.json`
- i=0
- i=3
- i=-1
- v wider than a byte
- i high bits set
- i=15 v negative
- i=-8

### nlsnd_PL_WaitAica2andGo (`8C0F4C30`, 58 bytes, `src/vtsdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_b/nlsnd_PL_WaitAica2andGo.json`
- ready at once
- three busy then ready
- negative busy
- one busy
- 100 busy

### pdGetPeripheralInfo (`8C1DEEC2`, 10 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/pdGetPeripheralInfo.json`
- zero
- two
- minus
- big
- ret minus

### pdGunSetTrigger (`8C1DEFD0`, 52 bytes, `src/vtsdk_a.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_a/pdGunSetTrigger.json`
- 0
- 6
- 12
- 18
- other 5
- 24
- negative
- 7

### pdVibGetInfo (`8C1EF7AE`, 60 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_e/pdVibGetInfo.json`
- ok
- positive
- negative
- zero ret
- ret min
- other dev

### setBorderColor (`8C0EB200`, 26 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sdk_c/setBorderColor.json`
- rgb
- already opaque
- zero
- half alpha
- all ones

### set_event (`8C01092C`, 74 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/set_event.json`
- empty list
- one event
- size below 20
- allocation fails
- three events
- size 19
- size 20, fails, empty list

### set_fat (`8C1EE512`, 50 bytes, `src/vtsdk_b.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vtsdk_b/set_fat.json`
- b below limit
- b = limit
- b above limit
- b negative
- unit 0
- unit 5 limit 100
- unit 5 b over
- limit negative b smaller
- limit negative b larger

### str_len (`8C1EDFE6`, 26 bytes, `src/vtsdk_c.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vtsdk_c/str_len.json`
- empty
- five
- twelve
- long
- negative byte
- eleven
- one
- thirteen

### strlen (`8C0FEFB8`, 16 bytes, `src/port_sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_c/strlen.json`
- empty
- one
- word
- long
- high bytes
- two

### strncpy (`8C0FEFC8`, 46 bytes, `src/port_sdk_e.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sdk_e/strncpy.json`
- short src, pads
- exact fit
- truncated
- zero n
- empty src
- long
- n one
- big pad

### syChainMasterHandler (`8C1E8452`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/syChainMasterHandler.json`
- empty chain
- one node
- three nodes
- index zero
- high index
- low bits ignored

### syRtcAicaSetDateLo (`8C1DF4C8`, 38 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/syRtcAicaSetDateLo.json`
- zero
- value
- minus
- small
- high bit

### syTmrInit (`8C1E8F70`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_d/syTmrInit.json`
- regs zero
- regs ones
- mixed

### vmsfs_c_setparam (`8C1EB048`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/vmsfs_c_setparam.json`
- slot 0
- slot 1
- slot 3
- negatives
- slot 7
- slot 2 again

### vmsfs_exit (`8C1EB578`, 24 bytes, `src/vtsdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_c/vmsfs_exit.json`
- run
- r4 set
- dirty
