/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CheckAu(int);
int ADXB_CheckSpsd(int, int, int);
int ADXB_CheckWav(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_ExecHndl(int);
int ADXB_ExecOneAiff16(int);
int ADXB_ExecOneAiff8(int);
int ADXB_ExecOneAu16(int);
int ADXB_ExecOneAu8(int);
int ADXB_ExecOneAuUlaw(int);
int ADXB_GetStat(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int, int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_Create(void);
int ADXRNA_SetOutPan(int, int, int);
int ADXSTM_Tell(int);
int ADXT_SetOutVol(int, int);
int nlSetPaletteData(int, int, int);
int memcmp(int, int, int);
int prefetch(int, int, int, int, float);
int ADXSJD_GetNumChan(int);
int syBtFlWrite(int, int, int);
int syBtFlDeleteSct(int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmMngChkEmptyData(int, int);
int fmMngSctRefresh(int);
int fmMngAddData(int);
int GetMenuMode(int);
int GetRotVec4Ang(float);
int KillColliObj(int);
int LightEffect(int, float);
int Psg_Init(int, int, int);
int Put_Max_Combo(void);
int ResetFadeColor(void);
int ResetSpark(void);
int Sound_Request(int, int);
int StopingCarInit(int, int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxStartAfs1(int, int);
int adxsjd_decexec_end(int);
int adxsjd_decexec_start(int);
int buExitForce(void);
int callGoBackAdvertise(void);
int courseCarType(int, int);
int fmcalccrc(int, int);
int gdFsInit(int, int, int, int);
int gdFsSeek(int, int, int);
int gdc_StopStreamSongAll(void);
int kmChangeLatencyModel(int, int);
int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int);
int kmfSetVertexBufferBaseAddress(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitializeHardware(void);
int kmiRegisterPhIntHandler(int);
int kmiWriteRegister(int, int, int);
int kmtex_GetTextureLevel(int, int);
int kmyConvertAddress64to32(int);
int longjmp(int, int);
int memset(int, int, int, int);
int nlCloseEvent(int);
int nlGetMatrix(int, int);
int nlLoadMatrix(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetScaleFactor(float);
int nlSetTextureParameter(int);
int nlSprPut(int);
int nlTranslateV(int);
int nlsndStreamSetHdChs(int, int);
int ovLibDeleteTbl(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(int, int, int, float, float, float);
int pfSize(float, float);
int psgSetState(int, int, int, int);
int replay(int);
int set_event(int, int, int, int);
int setjmp(int);
int syBtCfgSet(int, int);
int syCfgSetSoundMode(int);
int vmsfs_c_getstate(int);


void p2_cache_set(void)
{
    int t0;

    *(unsigned int *)0xFF00001C = 0x0;
    t0 = 0xF4000000;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x20);
    } while ((int)t0 < (int)0xF4004000);
    *(unsigned int *)0xFF00001C = 0x800;
    *(unsigned int *)0xFF00001C = 0x0;
}


int gdFsGetTokenSize(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = a4;
    t1 = a6;
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        if (t3 == 0) break;
        t1 = a5;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            if (t4 == 0) break;
            t5 = *(signed char *)((t1 + 0x0));
            t6 = *(signed char *)((t0 + 0x0));
            if (t6 != t5) {
                t1 = (t1 + 0x1);
                continue;
            }
            return t2;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x1);
    }
    return t2;
}


int pdVmsLcdBltAsmFlipV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xBA);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x80;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = ((unsigned int)t4 >> 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 + 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 - 12);
    } while (t0 != 0);
    return t7;
}


int pdVmsLcdBltAsmFlipH(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0x5);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = (t4 << 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 - 1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 + 0xC);
    } while (t0 != 0);
    return t7;
}


int pdVmsLcdBltAsmFlipHV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xC0);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t6 = (t6 - 0x1);
                t4 = (t4 << 1);
            } while (t6 != 0);
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = t5;
            t1 = (t1 - 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
    } while (t0 != 0);
    return t7;
}


void check_caps(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x0));
    if ((int)t1 >= (int)0x1) {
        if ((int)t1 <= (int)0x7FF) {
            t2 = *(int *)((t0 + 0x0));
            t3 = *(int *)((t0 + 0x8));
            if (t2 == t3) {
                t4 = *(int *)((t0 + 0xC));
                if ((int)t4 >= 0) {
                    t5 = *(int *)((t0 + 0x0));
                    if ((int)t4 < (int)t5) {
                        t6 = *(int *)((t0 + 0x14));
                        if ((int)t6 >= 0) {
                            t7 = *(int *)((t0 + 0x0));
                            if ((int)t6 < (int)t7) {
                                t8 = *(int *)((t0 + 0x34));
                                if ((int)t8 >= 0) {
                                    t9 = *(int *)((t0 + 0x0));
                                    if ((int)t8 <= (int)t9) {
                                        t10 = *(int *)((t0 + 0x38));
                                        if ((int)t10 >= 0) {
                                            t11 = *(int *)((t0 + 0x0));
                                            if ((int)t10 <= (int)t11) {
                                                t12 = *(int *)0xC2EE98C;
                                                t13 = *(int *)((t12 + 0x8));
                                                if (t13 == 0) {
                                                    t14 = *(int *)((t0 + 0x10));
                                                    t15 = *(short *)((a4 + 0x10));
                                                    if ((int)t15 >= (int)t14) {
                                                        t16 = *(int *)((t0 + 0x18));
                                                        t17 = *(short *)((a4 + 0x12));
                                                        if ((int)t17 >= (int)t16) {
                                                            t18 = *(int *)((t0 + 0x0));
                                                            if (t18 != 0xFF) {
                                                                if (t18 != 0x1FF) {
                                                                    if (t18 != 0x3FF) {
                                                                        if (t18 != 0x7FF) {
                                                                            return;
                                                                        }
                                                                        *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                                        return;
                                                                    }
                                                                    *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                                    return;
                                                                }
                                                                *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                                return;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x0;
                                                            return;
                                                        }
                                                        return;
                                                    }
                                                    return;
                                                }
                                                t19 = *(int *)((t0 + 0x0));
                                                if (t19 != 0xFF) {
                                                    if (t19 != 0x1FF) {
                                                        if (t19 != 0x3FF) {
                                                            if (t19 != 0x7FF) {
                                                                return;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                            return;
                                                        }
                                                        *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                        return;
                                                    }
                                                    *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                    return;
                                                }
                                                *(unsigned int *)((a4 + 0x4)) = 0x0;
                                                return;
                                            }
                                            return;
                                        }
                                        return;
                                    }
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
}


void ADX_DecodeInfoExADPCM2(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    if ((int)a5 >= (int)0x12) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
            return;
        }
        t1 = *(short *)((a4 + 0x2));
        if ((int)((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFF00)) < (int)0xE) {
            return;
        }
        t2 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a6 + 0x0)) = ((unsigned char)((int)(unsigned short)t2 >> 8) | (((unsigned short)t2 << 8) & 0xFFFFFF00));
        return;
    }
}


int adxsjd_decode_exec(int a4)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXB_GetStat(t0);
    if (t1 == 0) {
        adxsjd_decexec_start(a4);
    }
    ADXB_ExecHndl(t0);
    t5 = ADXB_GetStat(t0);
    if (t5 == 3) {
        return adxsjd_decexec_end(a4);
    }
    return t5;
}


int ADXSTM_Seek(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x14));
    t1 = (t0 + 0x7FF);
    if ((int)(t0 + 0x7FF) < 0) {
        t1 = ((t0 + 0x7FF) + 0x7FF);
    }
    t2 = ((int)t1 >> 11);
    if ((int)a5 <= (int)((int)t1 >> 11)) {
        t2 = a5;
    }
    t3 = *(int *)((a4 + 0x10));
    t4 = *(int *)((a4 + 0x8));
    gdFsSeek(t4, (t3 + t2), 0x0);
    return ADXSTM_Tell(a4);
}


void ADXSTM_SetEos(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
    } else {
        t0 = *(int *)((a4 + 0x14));
        t1 = (t0 + 0x7FF);
        if ((int)(t0 + 0x7FF) < 0) {
            t1 = ((t0 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((a4 + 0x30)) = ((int)t1 >> 11);
    }
}


int fmMngBit2Num(int bitmapAddress, int bitmapBlockCount, int a6)
{
    int bitmapCursor;
    int bitsRemaining;
    int shiftedBitmapByte;
    int usedRecordCount;
    int bytesRemaining;
    int bitmapByte;

    bitmapCursor = bitmapAddress;
    bitsRemaining = bitmapBlockCount;
    shiftedBitmapByte = a6;
    usedRecordCount = 0x0;
    bytesRemaining = (((bitmapBlockCount << 2) << 2) << 2);
    while ((int)bytesRemaining > 0) {
        bitmapByte = *(signed char *)((bitmapCursor + 0x0));
        bitmapCursor = (bitmapCursor + 0x1);
        shiftedBitmapByte = bitmapByte;
        bitsRemaining = 0x8;
        for (;;) {
            if (((signed char)shiftedBitmapByte & 0x80) == 0) {
                bitsRemaining = (bitsRemaining - 1);
                shiftedBitmapByte = (shiftedBitmapByte << 1);
                usedRecordCount = (usedRecordCount + 0x1);
                if ((int)bitsRemaining <= 0) break;
                continue;
            }
            return usedRecordCount;
        }
        bytesRemaining = (bytesRemaining - 1);
    }
    return usedRecordCount;
}


int fmMngChkEmptyData(int a4, int recordAddress)
{
    int payloadBytesRemaining;
    int payloadCursor;
    int payloadByte;
    int computedCrc;
    int storedCrc;
    int recordWasCleared;
    int recordBytesRemaining;
    int recordCursor;

    payloadBytesRemaining = 0x3C;
    payloadCursor = (recordAddress + 0x2);
    for (;;) {
        payloadByte = *(signed char *)((payloadCursor + 0x0));
        payloadCursor = (payloadCursor + 0x1);
        if ((unsigned char)payloadByte == 0xFF) {
            payloadBytesRemaining = (payloadBytesRemaining - 1);
            if ((int)payloadBytesRemaining <= 0) break;
            continue;
        }
        return 0x0;
    }
    computedCrc = fmcalccrc(0x3E, recordAddress);
    storedCrc = *(short *)((recordAddress + 0x3E));
    recordWasCleared = 0x0;
    if ((unsigned short)storedCrc == (unsigned short)computedCrc) {
        recordBytesRemaining = 0x40;
        recordCursor = recordAddress;
        while (recordBytesRemaining != 0) {
            *(unsigned char *)((recordCursor + 0x0)) = 0xFF;
            recordBytesRemaining = (recordBytesRemaining - 1);
            recordCursor = (recordCursor + 0x1);
        }
        recordWasCleared = 0x1;
    }
    return recordWasCleared;
}


int fmMngSctRefresh(int managerAddress)
{
    int formatMode;
    int flashBaseAddress;
    int refreshResult;
    int cacheBufferAddress;
    int headerWriteByteCount;
    int headerAndRecordsResult;
    int recordCapacity;
    int recordScanResult;
    int recordsRemaining;
    int compactedRecordCount;
    int physicalWriteAddress;
    int cacheScanCursor;
    int logicalRecordIndex;
    int recordWasCleared;
    int recordWriteByteCount;
    int bitmapRecordCapacity;
    int bitmapBlockCount;
    int bitmapWriteBlockCount;
    int bitmapWriteByteCount;
    int bitmapCheckBlockCount;
    int bitmapWriteResult;
    int emptyCacheRecordCapacity;
    int emptyBitmapBlockCount;
    int emptyBitmapWriteBlockCount;
    int emptyBitmapWriteByteCount;
    int emptyBitmapCheckBlockCount;
    int emptyBitmapWriteResult;
    int recordsAndBitmapResult;

    formatMode = *(short *)((managerAddress + 0x2));
    flashBaseAddress = *(int *)((managerAddress + 0x4));
    refreshResult = 0xFFFFFFFA;
    if (formatMode == 0) {
        cacheBufferAddress = *(int *)((managerAddress + 0xC));
        headerWriteByteCount = syBtFlWrite(flashBaseAddress, cacheBufferAddress, 0x40);
        headerAndRecordsResult = 0xFFFFFFFE;
        if (headerWriteByteCount == 64) {
            recordCapacity = *(int *)((managerAddress + 0x14));
            if ((int)recordCapacity > 0) {
                recordScanResult = headerWriteByteCount;
                recordsRemaining = recordCapacity;
                compactedRecordCount = 0x0;
                physicalWriteAddress = (flashBaseAddress + 0x40);
                cacheScanCursor = (cacheBufferAddress + 0x40);
                for (;;) {
                    logicalRecordIndex = *(short *)((cacheScanCursor + 0x0));
                    if ((unsigned short)logicalRecordIndex != 0xFFFF) {
                        recordWasCleared = fmMngChkEmptyData(managerAddress, cacheScanCursor);
                        recordScanResult = recordWasCleared;
                        if (recordScanResult == 0) {
                            recordWriteByteCount = syBtFlWrite(physicalWriteAddress, cacheScanCursor, 0x40);
                            recordScanResult = recordWriteByteCount;
                            if (recordScanResult == 64) {
                                compactedRecordCount = (compactedRecordCount + 0x1);
                                physicalWriteAddress = (physicalWriteAddress + 0x40);
                                recordsRemaining = (recordsRemaining - 1);
                                cacheScanCursor = (cacheScanCursor + 0x40);
                                if ((int)recordsRemaining <= 0) break;
                                continue;
                            }
                            recordScanResult = 0xFFFFFFFE;
                            return recordScanResult;
                        }
                        recordsRemaining = (recordsRemaining - 1);
                        cacheScanCursor = (cacheScanCursor + 0x40);
                        if ((int)recordsRemaining <= 0) break;
                        continue;
                    }
                    recordsRemaining = (recordsRemaining - 1);
                    cacheScanCursor = (cacheScanCursor + 0x40);
                    if ((int)recordsRemaining <= 0) break;
                }
                bitmapRecordCapacity = *(int *)((managerAddress + 0x14));
                bitmapBlockCount = *(int *)((managerAddress + 0x18));
                fmMngNum2Bit(compactedRecordCount, cacheScanCursor, bitmapBlockCount);
                bitmapWriteBlockCount = *(int *)((managerAddress + 0x18));
                bitmapWriteByteCount = syBtFlWrite((((((bitmapRecordCapacity + 0x1) << 2) << 2) << 2) + flashBaseAddress), cacheScanCursor, (((bitmapWriteBlockCount << 2) << 2) << 2));
                bitmapCheckBlockCount = *(int *)((managerAddress + 0x18));
                bitmapWriteResult = 0xFFFFFFFE;
                if (bitmapWriteByteCount == (((bitmapCheckBlockCount << 2) << 2) << 2)) {
                    *(unsigned int *)((managerAddress + 0x10)) = compactedRecordCount;
                    bitmapWriteResult = 0x0;
                }
                recordsAndBitmapResult = bitmapWriteResult;
            } else {
                emptyCacheRecordCapacity = *(int *)((managerAddress + 0x14));
                emptyBitmapBlockCount = *(int *)((managerAddress + 0x18));
                fmMngNum2Bit(0x0, (cacheBufferAddress + 0x40), emptyBitmapBlockCount);
                emptyBitmapWriteBlockCount = *(int *)((managerAddress + 0x18));
                emptyBitmapWriteByteCount = syBtFlWrite((((((emptyCacheRecordCapacity + 0x1) << 2) << 2) << 2) + flashBaseAddress), (cacheBufferAddress + 0x40), (((emptyBitmapWriteBlockCount << 2) << 2) << 2));
                emptyBitmapCheckBlockCount = *(int *)((managerAddress + 0x18));
                emptyBitmapWriteResult = 0xFFFFFFFE;
                if (emptyBitmapWriteByteCount == (((emptyBitmapCheckBlockCount << 2) << 2) << 2)) {
                    *(unsigned int *)((managerAddress + 0x10)) = 0x0;
                    emptyBitmapWriteResult = 0x0;
                }
                recordsAndBitmapResult = emptyBitmapWriteResult;
            }
            headerAndRecordsResult = recordsAndBitmapResult;
        }
        refreshResult = headerAndRecordsResult;
    }
    return refreshResult;
}


int mwSbSetNumChan(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)((a4 + 0xC)) = a5;
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    return nlsndStreamSetHdChs(t1, a5);
}


int ADXB_ExecOneAiff(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0xAA));
    if (t0 == 1) {
        return ADXB_ExecOneAiff8(a4);
    }
    return ADXB_ExecOneAiff16(a4);
}
