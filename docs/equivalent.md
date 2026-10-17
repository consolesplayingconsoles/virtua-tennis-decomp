# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### ADXAMP_GetStat (`8C1EFB72`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXAMP_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXAMP_Stop (`8C1EFBB8`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/ADXAMP_Stop.json`
- fill ff
- fill 00
- fill a5

### ADXB_CheckAu (`8C207C2C`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_CheckAu.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_CheckSpsd (`8C208412`, 20 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/ADXB_CheckSpsd.json`
- equal
- one
- minus
- big
- small

### ADXB_CheckWav (`8C208A08`, 52 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_CheckWav.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_CopyExtraBufMono (`8C1FFEFC`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_CopyExtraBufMono.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_Destroy (`8C1FF9DC`, 36 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/ADXB_Destroy.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_EntryAddWrFunc (`8C1FFC32`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_EntryAddWrFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_EntryGetWrFunc (`8C1FFC28`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_EntryGetWrFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ADXB_GetAdxpd (`8C1FFD7A`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetAdxpd.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetBlkLen (`8C1FFC8E`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetBlkLen.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetBlkSmpl (`8C1FFC8A`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetBlkSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetCof (`8C1FFC96`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetCof.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetDecDtLen (`8C1FFD52`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetDecDtLen.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetDecNumSmpl (`8C1FFD74`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetDecNumSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetFormat (`8C1FFC40`, 6 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetFormat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpEndOfst (`8C1FFCB0`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetLpEndOfst.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpEndPos (`8C1FFCAC`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetLpEndPos.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpInsNsmpl (`8C1FFC9A`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetLpInsNsmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetLpStartOfst (`8C1FFCA8`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetLpStartOfst.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetLpStartPos (`8C1FFCA4`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetLpStartPos.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetNumChan (`8C1FFC4A`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetNumChan.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetNumLoop (`8C1FFC9E`, 6 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetNumLoop.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetOutBps (`8C1FFC4E`, 60 bytes, `src/ct_sdk_q.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/ct_sdk_q/ADXB_GetOutBps.json`
- mode 0
- 2,2: 4
- 2,1: 8
- 2,3: 16
- 1,2: 4
- 1,1: 16
- 3,2: 16
- -1,2: 16
- 2,0: 16

### ADXB_GetPcmBuf (`8C1FFC3C`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetPcmBuf.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetSfreq (`8C1FFC46`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetSfreq.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetStat (`8C1FFCB4`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXB_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_GetTotalNumSmpl (`8C1FFC92`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXB_GetTotalNumSmpl.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_Reset (`8C1FFD32`, 32 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/ADXB_Reset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ADXF_GetFsizeByte (`8C1E25EC`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXF_GetFsizeByte.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_GetFsizeSct (`8C1E25D0`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXF_GetFsizeSct.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_GetNumReadSct (`8C1E2638`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXF_GetNumReadSct.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_GetNumReqSct (`8C1E2608`, 48 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/ADXF_GetNumReqSct.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_GetStat (`8C1E2654`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXF_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_ReadSj32 (`8C1E2296`, 46 bytes, `src/ct_sdk_l.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_l/ADXF_ReadSj32.json`
- read
- other

### ADXF_Tell (`8C1E2594`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXF_Tell.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_Destroy (`8C208B0E`, 20 bytes, `src/vtsdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_b/ADXPD_Destroy.json`
- null
- object
- object offset
- another

### ADXPD_EntryMono (`8C208B2A`, 30 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXPD_EntryMono.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_GetNumBlk (`8C208B9C`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXPD_GetNumBlk.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_GetStat (`8C208B26`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/ADXPD_GetStat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXPD_Reset (`8C208B8E`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXPD_Reset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_SetMode (`8C208B22`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXPD_SetMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_Start (`8C208B66`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXPD_Start.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_DiscardData (`8C1F027A`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_DiscardData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_ExecServer (`8C1F0238`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_ExecServer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetBitPerSmpl (`8C1F0274`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetBitPerSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetNumData (`8C1F0226`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetNumData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetOutPan (`8C1F026E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetOutPan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetOutVol (`8C1F0268`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetOutVol.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetSfreq (`8C1F0262`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetSfreq.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetStat (`8C1F0232`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_GetTime (`8C1F0220`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_GetTime.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetBitPerSmpl (`8C1F025C`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetBitPerSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetNumChan (`8C1F0244`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetNumChan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetOutPan (`8C1F0256`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetOutPan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetOutVol (`8C1F0250`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetOutVol.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetPlaySw (`8C1F021A`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetPlaySw.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetSfreq (`8C1F024A`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetSfreq.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetStartSmpl (`8C1F023E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetStartSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_SetTransSw (`8C1F0214`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_SetTransSw.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_Start (`8C1F0208`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_Start.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXRNA_Stop (`8C1F020E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXRNA_Stop.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_Destroy (`8C1F0444`, 52 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/ADXSJD_Destroy.json`
- null
- no buffer
- with buffer
- other buffer
- other r0

### ADXSJD_Finish (`8C1F031C`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSJD_Finish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_GetStat (`8C1F0478`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSJD_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_Init (`8C1F0308`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSJD_Init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_SetInSj (`8C1F047C`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSJD_SetInSj.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_SetMaxDecSmpl (`8C1F048C`, 4 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/ADXSJD_SetMaxDecSmpl.json`
- fill ff
- fill 00
- fill a5

### ADXSJD_Start (`8C1F0490`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSJD_Start.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_Stop (`8C1F04A6`, 26 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/ADXSJD_Stop.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_EntryEosFunc (`8C1F0D90`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/ADXSTM_EntryEosFunc.json`
- fill ff
- fill 00
- fill a5

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

### ADXSTM_GetCurOfst (`8C1F0F6C`, 32 bytes, `src/ct_sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_k/ADXSTM_GetCurOfst.json`
- offset
- closed

### ADXSTM_GetFad (`8C1F0FCE`, 30 bytes, `src/ct_sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_k/ADXSTM_GetFad.json`
- info
- another

### ADXSTM_GetFileLen (`8C1F0FAE`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSTM_GetFileLen.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_GetFsizeByte (`8C1F101A`, 30 bytes, `src/ct_sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_k/ADXSTM_GetFsizeByte.json`
- info
- another

### ADXSTM_GetGdfsStat (`8C1F0FB2`, 28 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/ADXSTM_GetGdfsStat.json`
- basic
- zero
- minus
- big
- other

### ADXSTM_GetSj (`8C1F0F98`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSTM_GetSj.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_GetStat (`8C1F0F54`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXSTM_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_Init (`8C1F0A64`, 18 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/ADXSTM_Init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_SetBufSize (`8C1F0F9C`, 8 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_f/ADXSTM_SetBufSize.json`
- basic
- zero
- negative
- big

### ADXSTM_SetReqRdSize (`8C1F0FA4`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/ADXSTM_SetReqRdSize.json`
- fill ff
- fill 00
- fill a5

### ADXSTM_Start (`8C1F0C8A`, 42 bytes, `src/ct_sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_u/ADXSTM_Start.json`
- h[5] 0
- h[5] set: tells
- h[5] -1

### ADXSTM_Tell (`8C1F0CF8`, 36 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/ADXSTM_Tell.json`
- open
- closed
- negative

### ADXT_DiscardSmpl (`8C1E1846`, 46 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/ADXT_DiscardSmpl.json`
- flag 0
- flag 1
- flag ff
- ret neg
- flag 2 ret big

### ADXT_GetStat (`8C1E1492`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXT_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXT_Init (`8C1E0D9A`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/ADXT_Init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### FUN_0c075400 (`8C0EBEE0`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c075400.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c075430 (`8C0EBF10`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c075430.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c076670 (`8C0ED960`, 34 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_0c076670.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0789c0 (`8C0F0490`, 26 bytes, `src/ct_sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_j/FUN_0c0789c0.json`
- vector
- zero

### FUN_0c078a70 (`8C0F0540`, 32 bytes, `src/ct_game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_game_m/FUN_0c078a70.json`
- add
- negatives

### FUN_0c079f10 (`8C0F1B50`, 52 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c079f10.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0813d0 (`8C0F7EA8`, 14 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_0c0813d0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c089738 (`8C1008B8`, 76 bytes, `src/ct_sdk_r.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/ct_sdk_r/FUN_0c089738.json`
- 80 01
- ff ff ff
- 00 00
- 01
- 7f 80 00 01
- n 0
- negative n

### FUN_0c0897f8 (`8C100978`, 32 bytes, `src/ct_sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_m/FUN_0c0897f8.json`
- word
- negative

### FUN_0c089c80 (`8C100E00`, 70 bytes, `src/ct_sdk_r.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/ct_sdk_r/FUN_0c089c80.json`
- 80 01
- ff ff ff
- 00 00
- 01
- 7f 80 00 01
- n 0
- negative n

### FUN_0c089cc8 (`8C100E48`, 34 bytes, `src/ct_sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_m/FUN_0c089cc8.json`
- halfword
- high

### FUN_0c14d2fa (`8C1DD6BA`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c14d2fa.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1519be (`8C1E0D4A`, 76 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c1519be.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c152292 (`8C1E161E`, 6 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_0c152292.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c152330 (`8C1E16BC`, 6 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_0c152330.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c157d46 (`8C1F3F4C`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c157d46.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c158f00 (`8C1F78BC`, 92 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_0c158f00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f4c8 (`8C1E65C8`, 26 bytes, `src/ct_sdk_s.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/ct_sdk_s/FUN_0c15f4c8.json`
- 0x45
- 0x99
- 0x00
- 0xFF as signed
- 0x80
- 0x7F
- 0xA3

### FUN_0c15f818 (`8C1E6918`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c15f818.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f8ba (`8C1E69BA`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c15f8ba.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f926 (`8C1E6A26`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c15f926.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f998 (`8C1E6A98`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c15f998.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15fa92 (`8C1E6B92`, 38 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/FUN_0c15fa92.json`
- "ab"
- empty
- three chars

### FUN_0c1614de (`8C1E8F96`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c1614de.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c162db6 (`8C1EA86E`, 34 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/FUN_0c162db6.json`
- bits
- all 1s
- alternating

### FUN_0c167c24 (`8C1EFD68`, 4 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/FUN_0c167c24.json`
- fill ff
- fill 00
- fill a5

### FUN_0c1687f6 (`8C1F093A`, 4 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/FUN_0c1687f6.json`
- fill ff
- fill 00
- fill a5

### FUN_0c168808 (`8C1F094C`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_0c168808.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c168812 (`8C1F0956`, 4 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/FUN_0c168812.json`
- fill ff
- fill 00
- fill a5

### FUN_0c16881a (`8C1F095E`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/FUN_0c16881a.json`
- fill ff
- fill 00
- fill a5

### FUN_0c168826 (`8C1F096A`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/FUN_0c168826.json`
- fill ff
- fill 00
- fill a5

### FUN_0c1688ce (`8C1F0A12`, 16 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/FUN_0c1688ce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1697c4 (`8C1F1908`, 42 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/FUN_0c1697c4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c17190c (`8C200248`, 40 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/FUN_0c17190c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1720ac (`8C2009E8`, 72 bytes, `src/ct_gen_l.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_l/FUN_0c1720ac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1720f4 (`8C200A30`, 62 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/FUN_0c1720f4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c17217a (`8C200AB6`, 6 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/FUN_0c17217a.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c1721da (`8C200B16`, 6 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/FUN_0c1721da.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_8c012028 (`8C012028`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c012028.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c012b36 (`8C012B36`, 60 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c012b36.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c013454 (`8C013454`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c013454.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c014c34 (`8C014C34`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c014c34.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c015b6c (`8C015B6C`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c015b6c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c015b72 (`8C015B72`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c015b72.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c015b78 (`8C015B78`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c015b78.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c015b7e (`8C015B7E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c015b7e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c015ed0 (`8C015ED0`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c015ed0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0163b2 (`8C0163B2`, 60 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c0163b2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c016b36 (`8C016B36`, 32 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c016b36.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c017aac (`8C017AAC`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c017aac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c017dee (`8C017DEE`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c017dee.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c01a528 (`8C01A528`, 40 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c01a528.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c01b178 (`8C01B178`, 72 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c01b178.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c01b1e6 (`8C01B1E6`, 70 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c01b1e6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c01b22c (`8C01B22C`, 36 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c01b22c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c02de00 (`8C02DE00`, 36 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c02de00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c02ef5a (`8C02EF5A`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c02ef5a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c02f62e (`8C02F62E`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c02f62e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c032fd2 (`8C032FD2`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c032fd2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c033a74 (`8C033A74`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c033a74.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c03992c (`8C03992C`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c03992c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c03a04a (`8C03A04A`, 30 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c03a04a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c03bd48 (`8C03BD48`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c03bd48.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c03ce22 (`8C03CE22`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c03ce22.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c041c6e (`8C041C6E`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c041c6e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0502c8 (`8C0502C8`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0502c8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0825ce (`8C0825CE`, 58 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0825ce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c082b80 (`8C082B80`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c082b80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0855b0 (`8C0855B0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0855b0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0855b6 (`8C0855B6`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0855b6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c087ce6 (`8C087CE6`, 28 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c087ce6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c087d02 (`8C087D02`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c087d02.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c089636 (`8C089636`, 34 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c089636.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c089672 (`8C089672`, 42 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c089672.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c089e92 (`8C089E92`, 90 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c089e92.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c089fa2 (`8C089FA2`, 96 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c089fa2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c08cc4a (`8C08CC4A`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c08cc4a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c08e93c (`8C08E93C`, 8 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c08e93c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0a7e98 (`8C0A7E98`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0a7e98.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0aafa4 (`8C0AAFA4`, 112 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0aafa4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b00d4 (`8C0B00D4`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b00d4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b0b90 (`8C0B0B90`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b0b90.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b1868 (`8C0B1868`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b1868.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b2dc8 (`8C0B2DC8`, 88 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b2dc8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b30ce (`8C0B30CE`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b30ce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b3230 (`8C0B3230`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b3230.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5614 (`8C0B5614`, 68 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5614.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5658 (`8C0B5658`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5658.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5b26 (`8C0B5B26`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5b26.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5b40 (`8C0B5B40`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5b40.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5b66 (`8C0B5B66`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5b66.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5b8c (`8C0B5B8C`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5b8c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5c14 (`8C0B5C14`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5c14.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5d74 (`8C0B5D74`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5d74.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5d8e (`8C0B5D8E`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5d8e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b5f38 (`8C0B5F38`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b5f38.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b6fcc (`8C0B6FCC`, 126 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b6fcc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0b873a (`8C0B873A`, 126 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0b873a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0babee (`8C0BABEE`, 34 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0babee.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0bca02 (`8C0BCA02`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0bca02.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0bcea8 (`8C0BCEA8`, 40 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0bcea8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c2628 (`8C0C2628`, 110 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c2628.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c3a0c (`8C0C3A0C`, 110 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c3a0c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c4b18 (`8C0C4B18`, 74 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c4b18.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c4b62 (`8C0C4B62`, 92 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c4b62.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c4bbe (`8C0C4BBE`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c4bbe.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c4cf4 (`8C0C4CF4`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c4cf4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c4d08 (`8C0C4D08`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c4d08.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c5896 (`8C0C5896`, 30 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c5896.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c58b4 (`8C0C58B4`, 30 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c58b4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c64dc (`8C0C64DC`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c64dc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c71d8 (`8C0C71D8`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c71d8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c71e0 (`8C0C71E0`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c71e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c71e8 (`8C0C71E8`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c71e8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0c71f0 (`8C0C71F0`, 48 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0c71f0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0cbb46 (`8C0CBB46`, 38 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0cbb46.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0cbf88 (`8C0CBF88`, 78 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c0cbf88.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ce002 (`8C0CE002`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ce002.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d0a98 (`8C0D0A98`, 66 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d0a98.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d0bac (`8C0D0BAC`, 44 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d0bac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d0c6c (`8C0D0C6C`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d0c6c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2864 (`8C0D2864`, 80 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2864.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d28b4 (`8C0D28B4`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d28b4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2992 (`8C0D2992`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2992.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2a7e (`8C0D2A7E`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2a7e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2a86 (`8C0D2A86`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2a86.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2a96 (`8C0D2A96`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2a96.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2a9e (`8C0D2A9E`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2a9e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d2e8a (`8C0D2E8A`, 62 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d2e8a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d324a (`8C0D324A`, 114 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d324a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d3308 (`8C0D3308`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d3308.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d339a (`8C0D339A`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d339a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d33ba (`8C0D33BA`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d33ba.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d33d0 (`8C0D33D0`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d33d0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d3634 (`8C0D3634`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d3634.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d36b0 (`8C0D36B0`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d36b0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d594e (`8C0D594E`, 28 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d594e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d6a64 (`8C0D6A64`, 76 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d6a64.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d7590 (`8C0D7590`, 74 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d7590.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d7724 (`8C0D7724`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d7724.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d7e98 (`8C0D7E98`, 16 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c0d7e98.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0d7ee0 (`8C0D7EE0`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0d7ee0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0dd922 (`8C0DD922`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0dd922.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df300 (`8C0DF300`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df300.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df626 (`8C0DF626`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df626.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df8bc (`8C0DF8BC`, 34 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df8bc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df8de (`8C0DF8DE`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df8de.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df8f8 (`8C0DF8F8`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df8f8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df912 (`8C0DF912`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df912.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df918 (`8C0DF918`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df918.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df91e (`8C0DF91E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df91e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0df924 (`8C0DF924`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0df924.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0dfbd4 (`8C0DFBD4`, 34 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0dfbd4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0e0780 (`8C0E0780`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0e0780.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0e8918 (`8C0E8918`, 48 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0e8918.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0e8d46 (`8C0E8D46`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0e8d46.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0e8e80 (`8C0E8E80`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0e8e80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0e8f3c (`8C0E8F3C`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0e8f3c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ea2a0 (`8C0EA2A0`, 6 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c0ea2a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0eab30 (`8C0EAB30`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0eab30.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0eb4e0 (`8C0EB4E0`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0eb4e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0eb670 (`8C0EB670`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0eb670.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ebcd0 (`8C0EBCD0`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ebcd0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ebcf0 (`8C0EBCF0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ebcf0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ebed0 (`8C0EBED0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ebed0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ebf00 (`8C0EBF00`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ebf00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ec850 (`8C0EC850`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ec850.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ec870 (`8C0EC870`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ec870.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ec880 (`8C0EC880`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ec880.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0ec8a0 (`8C0EC8A0`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0ec8a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f0a70 (`8C0F0A70`, 32 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f0a70.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f15e0 (`8C0F15E0`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f15e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f1650 (`8C0F1650`, 58 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f1650.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f1690 (`8C0F1690`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f1690.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f2270 (`8C0F2270`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f2270.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f2690 (`8C0F2690`, 40 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f2690.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f26f0 (`8C0F26F0`, 50 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f26f0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f27a0 (`8C0F27A0`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f27a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f27b0 (`8C0F27B0`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f27b0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f2d00 (`8C0F2D00`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f2d00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f2d10 (`8C0F2D10`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f2d10.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f6e80 (`8C0F6E80`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f6e80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f70a0 (`8C0F70A0`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f70a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c0f7130 (`8C0F7130`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c0f7130.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1dcc90 (`8C1DCC90`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1dcc90.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e1614 (`8C1E1614`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e1614.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e2fc0 (`8C1E2FC0`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e2fc0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e3040 (`8C1E3040`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e3040.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e3080 (`8C1E3080`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e3080.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e30c0 (`8C1E30C0`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e30c0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e3140 (`8C1E3140`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e3140.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e3180 (`8C1E3180`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e3180.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e31c0 (`8C1E31C0`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e31c0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e4a80 (`8C1E4A80`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e4a80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e4ac0 (`8C1E4AC0`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e4ac0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e6480 (`8C1E6480`, 22 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c1e6480.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e64c0 (`8C1E64C0`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e64c0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1e6968 (`8C1E6968`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1e6968.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1efd90 (`8C1EFD90`, 8 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_8c1efd90.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f016a (`8C1F016A`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f016a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f0936 (`8C1F0936`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f0936.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f0976 (`8C1F0976`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f0976.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f0982 (`8C1F0982`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f0982.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f098e (`8C1F098E`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f098e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f099a (`8C1F099A`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f099a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f09a6 (`8C1F09A6`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f09a6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f09be (`8C1F09BE`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f09be.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f09d6 (`8C1F09D6`, 12 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f09d6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f09ee (`8C1F09EE`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f09ee.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f09fa (`8C1F09FA`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f09fa.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f0a06 (`8C1F0A06`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f0a06.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f56c0 (`8C1F56C0`, 6 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/FUN_8c1f56c0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f5700 (`8C1F5700`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f5700.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f6aa0 (`8C1F6AA0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f6aa0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1f7480 (`8C1F7480`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1f7480.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c1ff90c (`8C1FF90C`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c1ff90c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c205420 (`8C205420`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c205420.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c205460 (`8C205460`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c205460.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c2054a0 (`8C2054A0`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c2054a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c2054e0 (`8C2054E0`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c2054e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c2075fe (`8C2075FE`, 52 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c2075fe.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_8c208a74 (`8C208A74`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/FUN_8c208a74.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJMEM_Destroy (`8C1F31D2`, 30 bytes, `src/ct_sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_u/SJMEM_Destroy.json`
- handle
- null
- another

### SJMEM_EntryErrFunc (`8C1F31F4`, 6 bytes, `src/ct_gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_gen_a/SJMEM_EntryErrFunc.json`
- fill ff
- fill 00
- fill a5

### SJMEM_GetBufPtr (`8C1F33DE`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJMEM_GetBufPtr.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJMEM_GetBufSize (`8C1F33E2`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJMEM_GetBufSize.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJMEM_GetUuid (`8C1F31F0`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJMEM_GetUuid.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJMEM_Reset (`8C1F31FA`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJMEM_Reset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJRBF_Destroy (`8C1F34A6`, 30 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_f/SJRBF_Destroy.json`
- null
- object
- object 2
- object 3

### SJRBF_EntryErrFunc (`8C1F34C8`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJRBF_EntryErrFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJRBF_GetBufPtr (`8C1F37FE`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/SJRBF_GetBufPtr.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_GetBufSize (`8C1F3802`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJRBF_GetBufSize.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJRBF_GetUuid (`8C1F34C4`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJRBF_GetUuid.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJRBF_GetXtrSize (`8C1F3806`, 4 bytes, `src/ct_gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/ct_gen_b/SJRBF_GetXtrSize.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_Init (`8C1F341A`, 28 bytes, `src/vtsdk_f.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_f/SJRBF_Init.json`
- zero
- one
- minus
- five
- minus big
- max
- min

### SJRBF_Reset (`8C1F34CE`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJRBF_Reset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJUNI_Destroy (`8C1F38D2`, 30 bytes, `src/ct_sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_u/SJUNI_Destroy.json`
- handle
- null
- another

### SJUNI_EntryErrFunc (`8C1F38F4`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJUNI_EntryErrFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJUNI_GetNumChainPool (`8C1F3CAE`, 26 bytes, `src/vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_c/SJUNI_GetNumChainPool.json`
- empty
- one
- three
- five
- nine

### SJUNI_GetUuid (`8C1F38F0`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/SJUNI_GetUuid.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJUNI_Reset (`8C1F38FA`, 80 bytes, `src/ct_sdk_q.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_q/SJUNI_Reset.json`
- 4 cells
- 1 cell
- 2 cells
- 0 count

### _allzero (`8C0FFFE4`, 30 bytes, `src/ct_sdk_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_j/_allzero.json`
- zeros
- a byte set
- n 0
- last byte set

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

### adxf_CreateAdxFs (`8C1E1F48`, 50 bytes, `src/ct_sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_l/adxf_CreateAdxFs.json`
- alloc ok
- none
- another entry

### adxf_wait_1ms (`8C1E1ABC`, 10 bytes, `src/ct_sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_s/adxf_wait_1ms.json`
- spins
- again

### adxpd_error (`8C208BA0`, 8 bytes, `src/vtsdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_a/adxpd_error.json`
- call
- already set
- negative

### adxsjd_clear (`8C1F0326`, 30 bytes, `src/ct_sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_k/adxsjd_clear.json`
- clears
- another

### adxstm_sj_internal_error (`8C1F0DB6`, 10 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/adxstm_sj_internal_error.json`
- zero
- five
- wrap
- big

### adxt_eos_entry (`8C1F1110`, 40 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/adxt_eos_entry.json`
- positive
- negative
- small positive

### adxt_start_stm (`8C1E1358`, 62 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/adxt_start_stm.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxt_stat_decend (`8C1F1522`, 34 bytes, `src/ct_gen_g.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_g/adxt_stat_decend.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buCalcBackupFileSize (`8C1E0764`, 64 bytes, `src/port_sg_bup.c`)
- equivalent on 9 development and 9 holdout cases, in `tests/port_sg_bup/buCalcBackupFileSize.json`
- a=0 b=0 c=0
- a=4 b=0 c=0
- a=1 b=4 c=0
- a=1 b=1 c=0
- a=2 b=2 c=0
- a=3 b=3 c=0
- a=1 b=0 c=180
- a=ffffffff b=0 c=0
- a=1 b=ffffffff c=0
- a=3 b=3 c=-64
- a=2 b=1 c=-3e8
- a=1 b=2 c=7fff0000
- a=1 b=1 c=80000000
- a=1 b=1 c=0
- a=1 b=1 c=0
- a=1 b=1 c=0
- a=0 b=3 c=0
- a=3 b=5 c=0

### buCalcCRC (`8C1E0904`, 68 bytes, `src/port_sg_bup.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/port_sg_bup/buCalcCRC.json`
- crc  n=None
- crc 41 n=None
- crc 313233343536 n=None
- crc 8000ff n=None
- crc 616263 n=0
- crc 7f01 n=1
- crc ffffffffff n=None
- crc 00000000 n=None
- crc 707172737475 n=None
- crc 818001fe55 n=None
- crc 7a7a n=1

### buCloseFile (`8C1DFF4C`, 70 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buCloseFile.json`
- ready
- busy
- another handle

### buConnect (`8C1DFBFA`, 60 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_n/buConnect.json`
- ready
- busy
- drive 0
- busy -1

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

### buDeleteFile (`8C1E005E`, 76 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buDeleteFile.json`
- ready
- busy
- another

### buDeleteFileEx (`8C1E00AA`, 70 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buDeleteFileEx.json`
- ready
- busy
- another

### buExitForce (`8C1DF9E0`, 30 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buExitForce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buFbrExit (`8C20703C`, 44 bytes, `src/port_sg_bup.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sg_bup/buFbrExit.json`
- created=0,0
- created=1,0
- created=0,1
- created=1,1
- created=0xffffffff,0x0
- created=0x0,0x80000000
- created=0x7,0x9
- created=0x100,0x0

### buFbrInit (`8C206E88`, 32 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/buFbrInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### buFindExecFile (`8C1DFE44`, 38 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/buFindExecFile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buFindFirstFile (`8C1DFD84`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_d/buFindFirstFile.json`
- state nonzero
- state zero
- state zero ret neg
- other
- state 0x100

### buFindFirstFileEx (`8C1DFDE0`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buFindFirstFileEx.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buFindNextFile (`8C1DFDB2`, 38 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/buFindNextFile.json`
- state 0 -> callee
- state 1 -> -1
- state -1 -> -1
- state 0 callee -1
- state 2
- state 0 callee big

### buFindNextFileEx (`8C1DFE12`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buFindNextFileEx.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### buGetFileInfo (`8C1E017E`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buGetFileInfo.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buGetFileSize (`8C1E0240`, 38 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/buGetFileSize.json`
- state 0 -> callee
- state 1 -> -1
- state -1 -> -1
- state 0 callee -1
- state 2
- state 0 callee big

### buGetVersion (`8C1DFBB2`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buGetVersion.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buInterruptHandler (`8C1DF914`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buInterruptHandler.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buIsExistFile (`8C1E0150`, 38 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/buIsExistFile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buIsFormat (`8C1DFC62`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buIsFormat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buIsReady (`8C1DFBB8`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buIsReady.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buMount (`8C1DFBBE`, 60 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_n/buMount.json`
- ready
- busy
- drive 0
- busy -1

### buMountDisk (`8C1E0528`, 32 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_k/buMountDisk.json`
- work set: mount
- failed
- another
- failed -1

### buOpenFile (`8C1DFE72`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buOpenFile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buReadDiskImage (`8C1E0494`, 68 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buReadDiskImage.json`
- ready
- busy
- another

### buRemount (`8C1DFC36`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buRemount.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buRenameFile (`8C1E01F0`, 80 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buRenameFile.json`
- ready
- busy
- another

### buSetCallbackParam (`8C1DFBAC`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buSetCallbackParam.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSetCompleteCallback (`8C1DFBA0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buSetCompleteCallback.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSetPrintFunc (`8C1E051C`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buSetPrintFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSetProgressCallback (`8C1DFBA6`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buSetProgressCallback.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSetRetryCount (`8C1E0522`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buSetRetryCount.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buStat (`8C1E01B0`, 26 bytes, `src/ct_sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_j/buStat.json`
- ready
- busy
- -1

### buUnmount (`8C1DFC3A`, 40 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/buUnmount.json`
- ready
- busy
- drive 0

### buUnmountDisk (`8C1E0548`, 36 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/buUnmountDisk.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buWriteDiskImage (`8C1E04D8`, 68 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buWriteDiskImage.json`
- ready
- busy
- another

### buWriteFile (`8C1E0014`, 74 bytes, `src/ct_sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_n/buWriteFile.json`
- ready
- busy
- other

### commonLoadStart (`8C0DD7AC`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/commonLoadStart.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### convert_support (`8C1DECA0`, 34 bytes, `src/ct_sdk_k.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/ct_sdk_k/convert_support.json`
- plain
- bit 17
- bits 16 and 17
- all ones
- bit 16
- zero

### direntry (`8C1EE5F8`, 24 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_b/direntry.json`
- unit 1 entry 3
- entry 0
- unit 0
- entry negative
- unit 7 big entry
- unit 3 entry 1

### fmMngRead (`8C1FF794`, 60 bytes, `src/port_sg_fm.c`)
- equivalent on 7 development and 8 holdout cases, in `tests/port_sg_fm/fmMngRead.json`
- null state
- busy
- ok
- neg index
- index==count
- index 0
- index count-1
- busy neg
- count 0
- count neg
- big index
- min index
- index>count
- busy and bad idx
- arg ffffffff

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

### gdFsCreateHnG (`8C1DDE24`, 112 bytes, `src/port_sg_gd.c`)
- equivalent on 8 development and 9 holdout cases, in `tests/port_sg_gd/gdFsCreateHnG.json`
- active
- free size 0
- size 1
- size 2048
- size 2049
- size 4096
- negative size
- neg tag
- active -1
- active 0x100 (short)
- active 0x7fff
- size max
- size min
- size -2048
- size -2049
- size 2047
- tag min

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

### kdExecGun (`8C1E9390`, 114 bytes, `src/port_kaede.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/port_kaede/kdExecGun.json`
- count0
- count1
- count2
- count5
- count -1
- count 65536
- count 32768
- high buf
- max

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

### kdSetGunCallback (`8C1EA1D8`, 6 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/kdSetGunCallback.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmBlankScreen (`8C1F3F80`, 72 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmBlankScreen.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmFreeTexture (`8C1E4A20`, 44 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmFreeTexture.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmQueryFinishLastTextureDMA (`8C1E2F70`, 32 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmQueryFinishLastTextureDMA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetCullingRegister (`8C205D40`, 28 bytes, `src/vtsdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_c/kmSetCullingRegister.json`
- one
- negative
- zero
- neg zero
- big
- small
- neg big

### kmSetFogDensity (`8C1E27A0`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmSetFogDensity.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetPaletteData (`8C1E2A08`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmSetPaletteData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmiFLWCTRLCheckFreeNBuf (`8C1FA60E`, 32 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmiFLWCTRLCheckFreeNBuf.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmiReadRegister (`8C1E29AA`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmiReadRegister.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiSetDisplayClipSize (`8C1FBB04`, 62 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmiSetDisplayClipSize.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiSetFogDMA (`8C205E80`, 42 bytes, `src/vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vtsdk_d/kmiSetFogDMA.json`
- mask
- low bits
- old data
- other

### kmyAllocateNativeCommandBuffer (`8C202F20`, 96 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyAllocateNativeCommandBuffer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmyEnableASyncCopy (`8C1E2D60`, 48 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyEnableASyncCopy.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyFreeArea (`8C1E2DC0`, 36 bytes, `src/vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_b/kmyFreeArea.json`
- lookup fails -> 7
- found
- negative short
- slot 0
- big a
- short 0x8000
- result negative

### kmyGarbageCollection (`8C1F4D40`, 122 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGarbageCollection.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyGetDMAValue (`8C205DE4`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGetDMAValue.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyGetDeviceType (`8C1F89F4`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGetDeviceType.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyGetNativeBufferStatus (`8C205820`, 68 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGetNativeBufferStatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyGetPVRCoreRevision (`8C1F8A00`, 64 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGetPVRCoreRevision.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyGetPVRCoreType (`8C1F89FA`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyGetPVRCoreType.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyInitializeFog (`8C1F8478`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyInitializeFog.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyIsDisplayOddField (`8C1DCD40`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyIsDisplayOddField.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyRegisterCallback (`8C1F6EC0`, 30 bytes, `src/vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_d/kmyRegisterCallback.json`
- null fn
- idx 0
- idx 3
- null fn arg ignored
- idx 15
- idx 1 with old

### kmyRegisterPALEXTCallback (`8C1F68B8`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyRegisterPALEXTCallback.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyResetFatalError (`8C205C68`, 56 bytes, `src/vtsdk_e.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_e/kmyResetFatalError.json`
- plain
- zeros
- minus

### kmyResetRenderer (`8C205C54`, 20 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/kmyResetRenderer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmySetColorClampMAX (`8C206460`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmySetColorClampMAX.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmySetColorClampMIN (`8C206478`, 24 bytes, `src/vtsdk_f.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_f/kmySetColorClampMIN.json`
- white
- rgb
- zero
- mix
- alpha

### kmySetDMAValue (`8C205DE0`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmySetDMAValue.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmySetDisplayBpp (`8C1F840C`, 20 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmySetDisplayBpp.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmySetPaletteMode (`8C2065C0`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmySetPaletteMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmySetPunchThroughThreshold (`8C205F60`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmySetPunchThroughThreshold.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmySetupTA (`8C2060A0`, 118 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/kmySetupTA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmyiInitializeDriverObject (`8C205ABE`, 30 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyiInitializeDriverObject.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmyiUnloadInterrupt (`8C1F5D3C`, 68 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/kmyiUnloadInterrupt.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmytex_FBEnQueueEntry (`8C1F9334`, 28 bytes, `src/vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_a/kmytex_FBEnQueueEntry.json`
- empty queue
- nonempty queue
- empty, other layout
- nonempty, other layout
- empty, third layout

### memmove (`8C0F7EEC`, 68 bytes, `src/ct_sdk_v.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/ct_sdk_v/memmove.json`
- same
- forward (d below s)
- backward (d above s)
- n 0
- apart
- overlap by 1 backward

### memset (`8C0F7F30`, 24 bytes, `src/port_sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/port_sdk_b/memset.json`
- n=0
- n=1
- n=13
- value over a byte
- n=32
- negative val
- n=3 odd start

### motionAdvanceSimple (`8C0159A2`, 120 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/motionAdvanceSimple.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### motionIsEnd (`8C014C4A`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/motionIsEnd.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### motionSwitch (`8C015A94`, 36 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/motionSwitch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### mpdrv_insertnop (`8C1FDB20`, 68 bytes, `src/port_kaede.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/port_kaede/mpdrv_insertnop.json`
- n=0
- n=1
- n=3 count=2
- n negative
- n=5
- n=32 limit wraps
- n=min
- n=2 count16
- n=32767
- count negative

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

### mwSfdStartFrame (`8C032E7E`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/mwSfdStartFrame.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mwlRnaSetInitMember (`8C1F1D28`, 76 bytes, `src/ct_sdk_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_sdk_p/mwlRnaSetInitMember.json`
- init
- another

### mwlSbGetPitch (`8C2009DA`, 14 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/mwlSbGetPitch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlArcCosec (`8C0ECBB0`, 48 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlArcCosec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlArcCot (`8C0ECBE0`, 48 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vtsdk_e/nlArcCot.json`
- zero
- two
- negative
- neg zero
- tiny
- big

### nlArcSec (`8C0ECC10`, 48 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlArcSec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlCosf (`8C0ECE90`, 22 bytes, `src/vtsdk_g.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vtsdk_g/nlCosf.json`
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

### nlCreateTextureParamA (`8C0EA670`, 72 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlCreateTextureParamA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlFogTableOff (`8C0EDDB0`, 48 bytes, `src/port_sdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/port_sdk_a/nlFogTableOff.json`
- call
- call with r4
- another

### nlFogTableSet (`8C0EDE70`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlFogTableSet.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlLineSetDiv (`8C0F1AE0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlLineSetDiv.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlLineSetThickness (`8C0F2DD0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlLineSetThickness.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlLoadDummyTexture (`8C0EA790`, 36 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlLoadDummyTexture.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlLog (`8C0ED140`, 106 bytes, `src/ct_gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_m/nlLog.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlMultiPushedMatrix (`8C0EFA30`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlMultiPushedMatrix.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlObjPut (`8C0F25B0`, 44 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlObjPut.json`
- flag 2 clear
- flag 2 set
- flags 0xFD
- flags all
- flag 1
- flag 3

### nlObjPutMvInit (`8C0F2210`, 18 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlObjPutMvInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlObjPutSetReplaceTextureDirName (`8C0F3DE0`, 64 bytes, `src/port_sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/port_sdk_e/nlObjPutSetReplaceTextureDirName.json`
- no entries
- one entry
- three entries
- results or together
- all zero
- four

### nlOuterProduct (`8C0F05D0`, 52 bytes, `src/port_sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/port_sdk_a/nlOuterProduct.json`
- x cross y
- y cross z
- general ints
- parallel
- fractions
- negatives

### nlPrintColor (`8C0EDD20`, 6 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/nlPrintColor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlPrintMonitorMode (`8C0ED880`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlPrintMonitorMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlPrintSetGarbagedTexture (`8C0ED940`, 26 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/nlPrintSetGarbagedTexture.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlPrintSetZ (`8C0ED7C0`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlPrintSetZ.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlRandomSeed (`8C0ED2D0`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlRandomSeed.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlRenderTextureInit (`8C0EDEE0`, 46 bytes, `src/vtsdk_g.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vtsdk_g/nlRenderTextureInit.json`
- 3 entries
- unaligned size
- zero count
- negative count
- aligned-1
- one
- eight

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

### nlSetTextureParameter (`8C0EA610`, 38 bytes, `src/ct_nltex.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/ct_nltex/nlSetTextureParameter.json`
- surface 2: TSP keeps its top bits, takes the size; TCW replaced
- surface 0, other bits

### nlSetTrnslMode (`8C0F27C0`, 26 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlSetTrnslMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlsndDriverMidiReqNum (`8C0F6110`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlsndDriverMidiReqNum.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlsndDriverSeqStatus (`8C0F6040`, 42 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlsndDriverSeqStatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlsndDriverStatus (`8C0F6120`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlsndDriverStatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlsndSetG2TransMode (`8C0F6D20`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlsndSetG2TransMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlsndStreamSetHdOctFns (`8C0F6820`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/nlsndStreamSetHdOctFns.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ovLibClose (`8C1DD18C`, 56 bytes, `src/port_sg_ov.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/port_sg_ov/ovLibClose.json`
- idx0
- idx1
- idx2
- not found -3
- refs zero goes negative
- -1
- idx1 big refs
- idx2 min refs
- idx0 refs 1

### ovSearchLib (`8C1DD096`, 64 bytes, `src/port_sg_ov.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/port_sg_ov/ovSearchLib.json`
- empty
- first
- last
- middle
- absent
- count beyond match not searched
- neg count
- big key
- neg key last
- zero key
- dup

### padInit (`8C02F260`, 64 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/padInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdExecPeripheralServer (`8C1DED46`, 12 bytes, `src/port_sg_pad.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/port_sg_pad/pdExecPeripheralServer.json`
- zero
- one
- -1
- min
- 256

### pdExitPeripheral (`8C1DEE70`, 72 bytes, `src/port_sg_pad.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/port_sg_pad/pdExitPeripheral.json`
- active=0
- active=1
- active=0
- active=ffffffff
- active=100
- active=80000000
- active=2

### pdGetPeripheralInfo (`8C1DEEC2`, 10 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/pdGetPeripheralInfo.json`
- zero
- two
- minus
- big
- ret minus

### pdGunSetCallback (`8C1DF004`, 16 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/pdGunSetCallback.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### pdVibIsReady (`8C1EF5D8`, 38 bytes, `src/ct_sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_k/pdVibIsReady.json`
- bit set
- bit clear
- only that bit

### pdVmsLcdWrite (`8C1DF728`, 102 bytes, `src/port_sg_lcd.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sg_lcd/pdVmsLcdWrite.json`
- not ready
- ready ok
- ready idx1 neg kd
- kd positive
- idx 255
- kd min
- kd max
- not ready ret neg

### pdVmsLcdWrite1 (`8C1DF78E`, 74 bytes, `src/port_sg_lcd.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/port_sg_lcd/pdVmsLcdWrite1.json`
- ready=0 ret=0
- ready=1 ret=0
- ready=1 ret=-1
- ready=1 ret=5
- ready=1 ret=2147483648
- ready=1 ret=2147483647
- ready=5 ret=-100
- ready=0 ret=2147483647
- ready=1 ret=1

### playerInputSide (`8C029CEC`, 76 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/playerInputSide.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### syBtExit (`8C1E0BFC`, 48 bytes, `src/port_sg_sybt.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/port_sg_sybt/syBtExit.json`
- a1 b1
- a1 b0
- a0
- a0 b1
- a1 b2
- a2 b1
- a255 b255
- a1 b255
- a0x101? 

### syCblCheck (`8C1DF8C2`, 70 bytes, `src/port_sg_sycbl.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/port_sg_sycbl/syCblCheck.json`
- cable0
- c1 b0
- c1 b1
- c1 b2
- c1 b3
- cable0 b1
- c-1 b3
- c64k b2
- c5 b4
- b-1
- b big
- b 2^32+1

### syCblCheckBroadcast (`8C1DF888`, 58 bytes, `src/port_sg_sycbl.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/port_sg_sycbl/syCblCheckBroadcast.json`
- '1'
- '2'
- '3'
- '0'
- 0
- '4'
- 0xff
- 0xb1
- 47

### syCfgExit (`8C1E09C6`, 10 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/syCfgExit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgGetBroadcastType (`8C1E0B0C`, 42 bytes, `src/ct_sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_l/syCfgGetBroadcastType.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetCountryCode (`8C1E0A54`, 42 bytes, `src/ct_sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_l/syCfgGetCountryCode.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetDefaultLanguage (`8C1E0AE2`, 42 bytes, `src/ct_sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/ct_sdk_l/syCfgGetDefaultLanguage.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetIDAddress (`8C1E0B7C`, 26 bytes, `src/ct_sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/ct_sdk_j/syCfgGetIDAddress.json`
- ok
- failed
- failed -1

### syCfgGetIndividualID (`8C1E0B36`, 70 bytes, `src/ct_gen_o.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_o/syCfgGetIndividualID.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgGetLanguage (`8C1E0A84`, 94 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/syCfgGetLanguage.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgIIDCheckSum (`8C1E0BB8`, 68 bytes, `src/ct_sdk_q.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/ct_sdk_q/syCfgIIDCheckSum.json`
- valid
- bad sum
- bad complement
- all zero: sum 0 compl ff
- zeros wrong
- wrapping sum
- wrapping, wrong

### syCfgInit (`8C1E09B4`, 18 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/syCfgInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syChainMasterHandler (`8C1E8452`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/syChainMasterHandler.json`
- empty chain
- one node
- three nodes
- index zero
- high index
- low bits ignored

### syHwFinish (`8C1DF64A`, 60 bytes, `src/port_sg_syhw.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/port_sg_syhw/syHwFinish.json`
- mask 0
- mask 15
- mask 7, T and S set
- mask 3, M and Q set
- mask 12

### syMmuCacheCtrl (`8C1FCBD4`, 80 bytes, `src/port_sg_mmu.c`)
- equivalent on 5 development and 6 holdout cases, in `tests/port_sg_mmu/syMmuCacheCtrl.json`
- idx=0 val=0 cur=ffffffff
- idx=1 val=f cur=0
- idx=3f val=7f cur=12345678
- idx=40 val=ff cur=ffffffff
- idx=64 val=1 cur=0
- idx=5 val=80 cur=ffffffff
- idx=5 val=1ff cur=0
- idx=3f val=fffffff6 cur=a5a5a5a5
- idx=ffffffff val=3 cur=55
- idx=40 val=0 cur=7
- idx=2 val=9 cur=9

### syRtcAicaSetDateLo (`8C1DF4C8`, 38 bytes, `src/vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vtsdk_e/syRtcAicaSetDateLo.json`
- zero
- value
- minus
- small
- high bit

### syRtcGetAndCheckCount (`8C1DF362`, 118 bytes, `src/port_sg_syrtc.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/port_sg_syrtc/syRtcGetAndCheckCount.json`
- equal ok
- differ
- first fail
- first fail diff
- second fail
- both fail
- neg equal
- max differ
- fail ret neg
- zero all
- one bit differ

### syRtcGetDate (`8C1DF076`, 76 bytes, `src/port_sg_syrtc.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/port_sg_syrtc/syRtcGetDate.json`
- flag1
- flag0
- flag3 (bit0 set)
- flag2 (bit0 clear)
- neg year
- max year
- flag high bits only
- flag 0xffffffff

### syTmrInit (`8C1E8F70`, 38 bytes, `src/vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_d/syTmrInit.json`
- regs zero
- regs ones
- mixed

### thunk_FUN_8c032f6c (`8C032ABE`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c032f6c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c09e55a (`8C0C4BF4`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c09e55a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c0bcda0 (`8C031464`, 6 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/thunk_FUN_8c0bcda0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c0eee50 (`8C017C58`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c0eee50.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c0f41f0 (`8C08E83A`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c0f41f0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c1e0150 (`8C0E00BA`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c1e0150.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c1e6b1c (`8C1E6B10`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c1e6b1c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c1ff1bc (`8C1FF1AC`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c1ff1bc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### thunk_FUN_8c1ff1ee (`8C1FF1E4`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/thunk_FUN_8c1ff1ee.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_create (`8C1FEB96`, 24 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfb_create.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_end (`8C1FEBC4`, 40 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfb_end.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_exec (`8C1FEBAE`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfb_exec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_exit (`8C1DCC88`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfb_exit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_init (`8C1FEB80`, 22 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfb_init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfb_sleep (`8C1FEBBE`, 6 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/vmsfb_sleep.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_exit (`8C1EAC7C`, 18 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/vmsfs_c_exit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber0 (`8C1EAC94`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfs_c_fiber0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber1 (`8C1EAC98`, 4 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfs_c_fiber1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber2 (`8C1EAC9C`, 4 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/vmsfs_c_fiber2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber3 (`8C1EACA0`, 4 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/vmsfs_c_fiber3.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber4 (`8C1EACA4`, 4 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/vmsfs_c_fiber4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber5 (`8C1EACA8`, 4 bytes, `src/ct_gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/ct_gen_e/vmsfs_c_fiber5.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_fiber6 (`8C1EACAC`, 88 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfs_c_fiber6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_setparam (`8C1EB048`, 36 bytes, `src/vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vtsdk_a/vmsfs_c_setparam.json`
- slot 0
- slot 1
- slot 3
- negatives
- slot 7
- slot 2 again

### vmsfs_c_synch (`8C1EAC8E`, 6 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsfs_c_synch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_exit (`8C1EB578`, 24 bytes, `src/vtsdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vtsdk_c/vmsfs_exit.json`
- run
- r4 set
- dirty

### vmsfs_setretry (`8C1EA8B8`, 8 bytes, `src/gen_b.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_b/vmsfs_setretry.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsio_init (`8C1FEBEC`, 8 bytes, `src/gen_a.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_a/vmsio_init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
