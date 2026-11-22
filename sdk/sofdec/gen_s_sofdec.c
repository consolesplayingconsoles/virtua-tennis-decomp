/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[13]; } Stk13;
int ADXAMP_ExecHndl(int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int evBallMarkSpawn(int, Stk3);
int kmytex_GetfreememEx(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int memmove(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int nlMatrixMode(int);
float nlRandom(void);
int nlSetWindowSize(float, float, float, float);
int nl_cancel_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int set_event(int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int syChainMasterHandler(int, int, int, int);
float vecLength(void);
int vecSub(int, int, ...);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);
int vmsfs_c_setvolume(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_sys(int);
float lineJudgeWakeAll(void);
void SJUNI_PutChunk(int a4, int a5, int a6);
int syChainClx1Handler(int a4, int a5, int a6, int a7);
void vecLineCrossXZ(Stk13 s, float f4, float f5, float f6, float f7, float f8, float f9);
int nlRenderTextureBegin(int a4);
void footMarkCheck(int a4, int a5);
float effBallTrailSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6);
int buFormatDisk(int a4, int a5, int a6, int a7, int a8);
int vmsfs_setvolume(int a4, int a5);
int kmytex_GetSmallVQprofile(int a4, int a5);
int SJRBF_UngetChunk(int a4, int a5, int a6);
int SJRBF_PutChunk(int a4, int a5, int a6);
int hudNumberDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmyAllocateArea(int a4, int a5, int a6);
int mwRnaAdjustBuf(int a4);
float advFovKey(float f4, float f5);
int numPutDigits(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int ADXAMP_ExecServer(void);


void SJUNI_PutChunk(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t10;
    int t11;
    int t32;
    int t37;
    int t7;
    int t23;
    int t24;
    int t25;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t7 = *(int *)((a6 + 0x0)), t7 != 0)) {
            t8 = SJUNI_Lock();
            t9 = ((a5 << 2) + (a4 + 0x18));
            t10 = 0x0;
            t11 = a6;
            for (;;) {
                if ((*(int *)((t9 + 0x0))) == 0) {
                    break;
                }
                t11 = (*(int *)((t9 + 0x0)));
                t9 = t11;
                t10 = t11;
            }
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t10 != 0) && (t23 = *(int *)((t10 + 0x8)), t24 = *(int *)((t10 + 0xC)), t25 = *(int *)((a6 + 0x0)), (t23 + t24) == t25))) {
                *(unsigned int *)((t10 + 0xC)) = ((*(int *)((t10 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t32 = *(int *)((a4 + 0x14));
                if (t32 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t37 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, t11, 0x0);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t32 + 0x0)));
                    *(unsigned int *)((t32 + 0x0)) = 0x0;
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t32 + 0x8)) = *(struct mv2 *)(a6); }
                    *(unsigned int *)((t9 + 0x0)) = t32;
                }
            }
            SJUNI_Unlock(a4, t8);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6);
    return;
    }
}


int SJRBF_UngetChunk(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;
    int t14;
    int t28;
    int t30;
    int t40;
    int t56;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t2 = *(int *)((a4 + 0x20));
        t4 = (int)((int)(((*(int *)((a4 + 0x14))) + t2) - (*(int *)((a6 + 0x4)))) % (int)t2);
        if (t4 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t2))) {
            *(unsigned int *)((a4 + 0x14)) = t4;
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a6 + 0x4))));
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
            } else {
                t14 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    } else {
        if (a5 == 1) {
            t28 = *(int *)((a4 + 0x20));
            t30 = (int)((int)(((*(int *)((a4 + 0x18))) + t28) - (*(int *)((a6 + 0x4)))) % (int)t28);
            if (t30 == ((int)((int)((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x1C)))) % (int)t28))) {
                *(unsigned int *)((a4 + 0x18)) = t30;
                *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                if ((*(int *)((a4 + 0x28))) != 0) {
                    t40 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t56 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

int SJRBF_PutChunk(int ringAddress, int queueId, int chunkAddress)
{
    int interruptMask;
    int chunkDataAddress;
    int bufferBaseAddress;
    int wrapMarginBytes;
    int chunkBytes;
    int prefixMirrorBytes;
    int completedChunkAddress;
    int ringBufferAddress;
    int completedChunkBytes;
    int bufferBytes;
    int completedBytes;
    int wrappedBytes;
    int bufferStartAddress;
    int callbackResult;

    interruptMask = SJRBF_Lock();
    if (queueId == 1) {
        *(unsigned int *)((ringAddress + 0xC)) = ((*(int *)((ringAddress + 0xC))) + (*(int *)((chunkAddress + 0x4))));
        chunkDataAddress = *(int *)((chunkAddress + 0x0));
        bufferBaseAddress = *(int *)((ringAddress + 0x1C));
        if ((int)(chunkDataAddress - bufferBaseAddress) < (int)(*(int *)((ringAddress + 0x24)))) {
            wrapMarginBytes = *(int *)((ringAddress + 0x24));
            chunkBytes = *(int *)((chunkAddress + 0x4));
            prefixMirrorBytes = (wrapMarginBytes - (chunkDataAddress - bufferBaseAddress));
            if ((int)chunkBytes < (int)(wrapMarginBytes - (chunkDataAddress - bufferBaseAddress))) {
                prefixMirrorBytes = chunkBytes;
            }
            memmove((((*(int *)((ringAddress + 0x20))) + (chunkDataAddress - bufferBaseAddress)) + (*(int *)((ringAddress + 0x1C)))), (*(int *)((chunkAddress + 0x0))), prefixMirrorBytes);
        }
        completedChunkAddress = *(int *)((chunkAddress + 0x0));
        ringBufferAddress = *(int *)((ringAddress + 0x1C));
        completedChunkBytes = *(int *)((chunkAddress + 0x4));
        if ((int)((completedChunkAddress - ringBufferAddress) + completedChunkBytes) > (int)(*(int *)((ringAddress + 0x20)))) {
            bufferBytes = *(int *)((ringAddress + 0x20));
            completedBytes = *(int *)((chunkAddress + 0x4));
            wrappedBytes = (((completedChunkAddress - ringBufferAddress) + completedChunkBytes) - bufferBytes);
            if ((int)completedBytes < (int)(((completedChunkAddress - ringBufferAddress) + completedChunkBytes) - bufferBytes)) {
                wrappedBytes = completedBytes;
            }
            bufferStartAddress = *(int *)((ringAddress + 0x1C));
            memmove(bufferStartAddress, (bufferStartAddress + (((completedChunkAddress - ringBufferAddress) + completedChunkBytes) - wrappedBytes)), wrappedBytes);
        }
    } else {
        if (queueId == 0) {
            *(unsigned int *)((ringAddress + 0x10)) = ((*(int *)((ringAddress + 0x10))) + (*(int *)((chunkAddress + 0x4))));
        } else {
            *(unsigned int *)((chunkAddress + 0x4)) = 0x0;
            *(unsigned int *)((chunkAddress + 0x0)) = 0x0;
            if ((*(int *)((ringAddress + 0x28))) != 0) {
                callbackResult = ((int (*)(int, int))((*(int *)((ringAddress + 0x28)))))((*(int *)((ringAddress + 0x2C))), 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(ringAddress, interruptMask);
}


int mwRnaAdjustBuf(int a4)
{
    int t3;
    int t12;
    int t13;
    int t16;
    int t18;
    int t29;
    int t11;
    int stk[7];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114((((int)stk + 8) + 0x4));
    if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
        t3 = mwRnaGetTransSw(a4);
        if (t3 == 1) {
            mwlRnaAddWrPos(a4);
        } else {
            mwlRnaAddFlshPos(a4);
        }
        *(unsigned char *)((a4 + 0x5)) = 0x0;
    }
    if (((*(int *)((a4 + 0x30))) != 0) && (t11 = *(int *)((a4 + 0x34)), (int)t11 > 0)) {
        t12 = *(int *)((a4 + 0x38));
        t13 = *(int *)((a4 + 0x30));
        *(unsigned int *)(((int)stk + 16)) = t12;
        t16 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t12 + 0x0))) + 0x54)))))(t12, t13, ((int)stk + 8));
        if ((*(int *)((a4 + 0x88))) == 2) {
            t18 = *(int *)((a4 + 0x28));
            *(unsigned int *)(((0x50 + a4) + 0x0)) = ((int)((int)(((*(int *)((a4 + 0x50))) + t18) - (*(int *)(((int)stk + 8)))) % (int)t18));
        }
        t29 = *(int *)((a4 + 0x28));
        *(unsigned int *)((a4 + 0x2C)) = ((int)((int)(((*(int *)((a4 + 0x2C))) + t29) - (*(int *)(((int)stk + 8)))) % (int)t29));
        *(unsigned int *)((a4 + 0x30)) = (((*(int *)((a4 + 0x30))) + t16) - (*(int *)(((int)stk + 8))));
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - t16);
    }
    return (ovUnlockCs_8c20012c((((int)stk + 8) + 0x4)));
}


int ADXAMP_ExecServer(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x8C46ABA4;
    for (;;) {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t3 = (ADXAMP_ExecHndl(t0));
        }
        t0 = (t0 + 0x30);
        if ((unsigned int)t0 >= (unsigned int)0x8C46AD24) {
            break;
        }
    }
    return t3;
}


