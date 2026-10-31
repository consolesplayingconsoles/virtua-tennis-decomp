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

int syChainClx1Handler(int a4, int a5, int a6, int a7)
{
    int t50;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t39;
    int t30;
    int t9;
    int t11;
    int t12;
    int t24;
    int t25;
    int t26;
    int t27;

    t50 = ((int)(short)a4 >> 4);
    if (((int)(short)a4 >> 4) != 50) {
        if (((int)(short)a4 >> 4) != 54) {
            t39 = ((int)(short)a4 >> 4);
        } else {
            _builtin_set_imask(0x4);
            t1 = *(int *)0xA05F6900;
            t2 = *(int *)0xA05F6920;
            if (((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2) != 0) {
                t3 = 0xA05F6900;
                t4 = 0xFFFFFF0F;
                t5 = t2;
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    if ((((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))) == 0x80) {
                        break;
                    }
                    t5 = 0x1;
                    t5 = (((int)t7 >= 0) ? (t5 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)t5 >> (-(int)t7 & 31)) : ((int)t5 >> 31)));
                    if ((t5 & ((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2)) != 0) {
                        t6 = t7;
                        t6 = (t6 << 2);
                        t6 = (t6 << 2);
                        t6 = (t6 << 1);
                        t6 = (t6 + 0xA00);
                        t3 = (syChainMasterHandler(t6, a5, a6, a7));
                    } else {
                        t9 = t4;
                        t11 = t5;
                        t12 = t6;
                    }
                    t4 = t9;
                    t7 = (t7 + 0x1);
                    t5 = t11;
                    t6 = t12;
                }
                t30 = t3;
            } else {
                t15 = *(int *)0xA05F6904;
                t16 = *(int *)0xA05F6924;
                t17 = 0xA05F6924;
                t18 = 0xA05F6904;
                t19 = t16;
                t20 = 0x0;
                t21 = 0x0;
                for (;;) {
                    if ((((int)t21 >= 0) ? (0x1 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)0x1 >> (-(int)t21 & 31)) : ((int)0x1 >> 31))) == 16) {
                        break;
                    }
                    t18 = 0x1;
                    t18 = (((int)t21 >= 0) ? (t18 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)t18 >> (-(int)t21 & 31)) : ((int)t18 >> 31)));
                    if ((t18 & (t15 & t16)) != 0) {
                        t20 = t21;
                        t20 = (t20 << 2);
                        t20 = (t20 << 2);
                        t20 = (t20 << 1);
                        t20 = (t20 + 0xB00);
                        syChainMasterHandler(t20, a5, a6, a7);
                    } else {
                        t24 = t17;
                        t25 = t18;
                        t26 = t19;
                        t27 = t20;
                    }
                    t17 = t24;
                    t21 = (t21 + 0x1);
                    t18 = t25;
                    t19 = t26;
                    t20 = t27;
                }
                t30 = (((int)t21 >= 0) ? (0x1 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)0x1 >> (-(int)t21 & 31)) : ((int)0x1 >> 31)));
            }
            t39 = t30;
        }
        t50 = t39;
    }
    return t50;
}




float effBallTrailSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6)
{
    int t46;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    int t11;
    float u14;
    float u54;
    float u39;
    float u25;
    int stk[19];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    stk[8] = a11;
    stk[9] = a12;
    stk[10] = a13;
    if ((*(int *)0x8C287C60) == 0) {
        t46 = 0;
        if ((*(int *)0x8C37EA7C) != 1) {
            u3 = *(float *)(((((int)stk + 4) + 0x1C) + 0x4));
            u4 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
            u5 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
            u6 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
            u7 = *(float *)(((((int)stk + 4) + 0x1C) + 0x8));
            u8 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
            u9 = ((u4 - u3) * (u4 - u3));
            u9 = u9 + (u6 - u5) * (u6 - u5);
            u10 = u9;
            u10 = u10 + (u8 - u7) * (u8 - u7);
            if (_builtin_sqrtf(u10) > (1.0f + 1.0f)) {
                t11 = set_event(0x84, 0x8C082974);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x20)) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x2C)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
                u14 = *(float *)0x8C082BB0;
                *(float *)((t11 + 0x14)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))) * u14);
                *(float *)((t11 + 0x18)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x4))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)))) * u14);
                *(float *)((t11 + 0x1C)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x8))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)))) * u14);
                *(float *)((t11 + 0x78)) = _builtin_sqrtf(u10);
                *(float *)((t11 + 0x7C)) = 1.0f;
                *(unsigned int *)((t11 + 0x80)) = 0x3;
                *(unsigned int *)0x8C181600 = ((*(int *)0x8C181600) + 0x1);
            } else {
                u25 = (u8 - u7);
            }
            u39 = u25;
            _builtin_sqrtf(u10);
            t46 = ((_builtin_sqrtf(u10) > (1.0f + 1.0f)));
        } else {
            t46 = (1);
        }
        u54 = u39;
    }
    return u54;
}

int buFormatDisk(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setfunc(a4, 0x3);
    vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, 0x0);
    vmsfs_c_setvolume(a4, a5);
    vmsfs_c_settime(a4, a7);
    return 0x0;
}

int vmsfs_setvolume(int a4, int a5)
{
    int t1;
    int t3;
    int t6;
    int t8;
    int t9;
    int t13;
    int t14;
    int t4;
    int t5;
    int t11;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = *(int *)(((int)stk + 8)), t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t8 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x10);
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)0x20) {
                    break;
                }
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
            }
            t13 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x10);
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)0x20) {
                    break;
                }
                t11 = (*(int *)(((int)stk + 4)));
                t14 = (t14 + 0x1);
                t11 = (t11 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t11;
                t11 = (t11 - 1);
                *(unsigned char *)((t13 + 0x0)) = ((*(signed char *)((t11 + 0x0))));
                t13 = (t13 + 0x1);
            }
            return write_sys(a4);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
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

int hudNumberDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u6;
    int stk[41];

    stk[29] = a8;
    stk[30] = a9;
    stk[31] = a10;
    stk[32] = a11;
    *(unsigned int *)(((int)stk + 40)) = a4;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 40) + 0x8)) = *(struct mv10 *)(0x8C125AD4); }
    *(unsigned int *)(((int)stk + 44)) = ((int)((int)(*(int *)(((int)stk + 40))) / (int)0xA));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    sprListPut((*(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 44))) << 2)))), 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f);
    u6 = *(float *)0x8C0D1814;
    *(float *)(((((int)stk + 40) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x4C) + 0x0))) + u6);
    *(unsigned int *)(((int)stk + 40)) = ((int)((int)(*(int *)(((int)stk + 40))) % (int)0xA));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    sprListPut((*(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 40))) << 2)))), 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f);
    *(float *)(((((int)stk + 40) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x4C) + 0x0))) + u6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    return (sprListPut(0x8C1D1FD4, 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f));
}

int kmyAllocateArea(int a4, int a5, int a6)
{
    int t0;
    int t21;
    int t5;
    int t19;
    int t12;
    int t16;
    int stk[11];

    t0 = 0x0;
    if ((a4 & 0x2) != 0) {
        t0 = 0x2;
    }
    if ((*(int *)0x8C20C9C8) == 1) {
        if ((a4 & 0x1) != 0) {
            t5 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
        } else {
            t5 = (kmytex_TXalloc(t0, a5, a6, 0x0));
        }
        t21 = t5;
    } else {
        kmytex_GetfreememEx(((int)stk + 4), (((int)stk + 4) + 0x4));
        if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 8)))) {
            if ((a4 & 0x1) != 0) {
                t12 = (kmytex_TXalloc2(t0, a5, a6, 0x1));
            } else {
                t12 = (kmytex_TXalloc(t0, a5, a6, 0x1));
            }
            t19 = t12;
        } else {
            if ((a4 & 0x1) != 0) {
                t16 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
            } else {
                t16 = (kmytex_TXalloc(t0, a5, a6, 0x0));
            }
            t19 = t16;
        }
        t21 = t19;
    }
    return t21;
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

float advFovKey(float f4, float f5)
{
    int t1;
    int t2;
    int t3;
    int t22;
    int t23;
    float u24;
    float u26;
    int t0;
    float u4;
    float u32;

    t1 = 0x0;
    t2 = 0xFFFFFFFF;
    t3 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 1) + t1) << 2) + 0x8C1588D4) + 0x0))) == (*(int *)0x8C295DF4)) {
            t0 = t1;
            t0 = (t0 << 1);
            t0 = (t0 + t1);
            t0 = (t0 << 2);
            t0 = (t0 + 0x8C1588D4);
            u4 = (float)(*(int *)((t0 + 0x4)));
            if (!(u4 > f4)) {
                t3 = t1;
            } else {
                t0 = t2;
                if (t0 == -1) {
                    u4 = (float)(*(int *)((((((t1 << 1) + t1) << 2) + 0x8C1588D4) + 0x4)));
                    if (!(f4 > u4)) {
                        t2 = t1;
                    }
                }
            }
        }
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x1C) {
            break;
        }
    }
    if (t2 != -1) {
        t22 = *(int *)((((((t3 << 1) + t3) << 2) + 0x8C1588D4) + 0x4));
        t23 = *(int *)((((((t2 << 1) + t2) << 2) + 0x8C1588D4) + 0x4));
        u24 = *(float *)((((((t3 << 1) + t3) << 2) + 0x8C1588D4) + 0x8));
        u26 = u24;
        u26 = u26 + ((f4 - (float)t22) / (float)(t23 - t22)) * ((*(float *)((((((t2 << 1) + t2) << 2) + 0x8C1588D4) + 0x8))) - u24);
        *(float *)0x8C287A04 = u26;
        u32 = ((f4 - (float)t22) / (float)(t23 - t22));
    }
    return u32;
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


