/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXF_GetStat(int);
int ADXRNA_GetTime(int, int, int);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetStat(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_Stop(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Close(int);
int ADXSTM_Stop(int);
float FUN_8c0f0860(int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int abs(int);
int fileLoadCloseSlot(int);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsOpen(int, int, int, int);
int getID_Color(int, float);
int hudBarDraw(Stk3, float, float);
int hudBarDrawAlt(Stk3, float, float);
int kdGetDeviceInfo(int);
int kdSetGetMediaInfoEx(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetPlaySw(int, int);
int mwRnaSetTransSw(int, int);
int mwRnaStop(int);
int nlArcSin(float);
int nlArcTan2(float, float);
int nlFree2(int);
int nlGetMatrix(int);
float nlInnerProduct(int, int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlPrintColor(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAxeSC(int, float, float);
int nlUnitMatrix(void);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int padDirRepeat(int, int);
int padLcdLine(int, int, int, int);
int padLcdProject(int, int, Stk3);
int pdVibGetInfo(int, int);
int pdVibMxStop(int);
int prefetch(int);
int sndSeCursor(void);
int sprInitRectF(int, int, int, int, int, int);
int sprPutCropV(int, int, Stk3, float, float, float);
int strncpy(int, int, int);
void unlockApplyW2(void);
int nlSpriteGetNextSpriteIndex(int a4, int a5, int a6);
int ADXT_GetTime(int a4, int a5, int a6);
int vmsfs_mount2(int a4, int a5);
int mwRnaStart(int a4);
int SJMEM_GetChunk(int a4, int a5, int a6, int a7);
int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7);
float angBlend(int a4, int a5, float f4);
int padVibStopAll(void);
int mtxGetAngles(int a4);
void nlRotateV(int a4, int a5);
int _setsbit(int a4, int a5, int a6);
int ADXT_Stop(int a4);
int ADXSTM_OpenFname(int a4, int a5, int a6, int a7);
int mwRnaDestroy(int a4);
int angLerp(int a4, int a5, float f4);
int nlLineSendVertex(int a4, int a5, int a6);
int mwRnaContinue(int a4);
void kmiRegisterPhIntHandler(int a4);
int kmtex_GetTextureLevel(int a4, int a5);
int ndbBuildIndex(void);
int hudCallMsgDrawA9f0(float f4, float f5);
int nlMakeProjConvMat(int a4);
int pdLcdGetDirection(int a4);
int vmsfs_read_disk_image(int a4, int a5);
int pdVibEnumerateUnit(int a4, int a5, int a6);
int nlCloseEvent2(int a4);
int miniPlacePlayers(void);
int hudCallMsgDrawDa60(float f4, float f5);
int hudCallMsgDrawDb50(float f4, float f5);
int hudCallMsgDrawDb00(float f4, float f5);
int fileLoadPollSlot(int a4);
int nlExp(float f4);
void kmiUnregisterInterruptHandler(void);
void padLcdLine3D(int a4, int a5, int a6, int a7);
int logoAInit(void);
void dbgMenuSetItem(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int stageSelSprInit(void);
int adxt_stat_playing(int a4);
int kmyUseAnotherList(int a4, int a5);
int angStepToward(int a4, int a5, int a6);
int circuitMenuCursor(int a4, int a5);
int miniWallTargetsInit(void);

void unlockApplyW2(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t1 = 0x0;
    for (;;) {
        t2 = t1;
        t3 = ((((t1 << 2) + t1) << 2) + 0x8C1AC160);
        t4 = ((((t1 << 2) + t1) << 2) + 0x8C1AC160);
        t5 = ((t1 << 2) + t1);
        t6 = 0x0;
        for (;;) {
            if ((*(int *)((t4 + 0x0))) == 0) {
                t2 = 0x8C40C310;
                if ((((((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))) & ((*(int *)((t2 + 0x0))))) != 0) || ((((t1 == 0)) ? 1 : 0) != 0)) {
                    *(unsigned int *)((t3 + 0x0)) = 0x1;
                }
            }
            t6 = (t6 + 0x1);
            t4 = (t4 + 0x4);
            t3 = (t3 + 0x4);
            t5 = (t5 + 0x1);
            if ((int)t6 >= (int)0x5) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
}

int nlSpriteGetNextSpriteIndex(int a4, int a5, int a6)
{
    return ((int (*)(int, int, int, int))(0x8C0F4A72))(a4, 0x0, a6, 0x8C454C8C);
}

int ADXT_GetTime(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((t0 != 3) && (t0 != 4)) {
        if ((*(signed char *)((a4 + 0x1))) == 5) {
            *(unsigned int *)((a5 + 0x0)) = (ADXSJD_GetTotalNumSmpl((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a6 + 0x0)) = (ADXSJD_GetSfreq((*(int *)((a4 + 0x4)))));
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) * ((int)((int)0x10 / (int)(ADXSJD_GetOutBps((*(int *)((a4 + 0x4))))))));
            return ((int (*)(void))(0x8C1E152C))();
        }
        return ((int (*)(int, int, int))(0x8C1E1524))(t0, a5, a6);
    }
    ADXRNA_GetTime((*(int *)((a4 + 0xC))), a5, a6);
    return ((int (*)(void))(0x8C1E152C))();
}

int vmsfs_mount2(int a4, int a5)
{
    int t1;
    int t3;

    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) == 0) {
        return ((int (*)(int))(0x8C1EB884))(a4);
    }
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0x8C20C750)));
    t3 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x30));
    return ((int (*)(int, int, int))(0x8C1EB866))(a4, a5, t3);
}

int mwRnaStart(int a4)
{
    int stk[5];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x1)) = 0x4;
    *(unsigned int *)((a4 + 0x40)) = (*(int *)((a4 + 0x44)));
    mwRnaSetTransSw(a4, 0x1);
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}

int SJMEM_GetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t4;
    int t15;

    t0 = SJMEM_Lock();
    if (a5 == 0) {
        *(unsigned int *)((a7 + 0x4)) = 0x0;
        *(unsigned int *)((a7 + 0x0)) = 0x0;
    } else {
        if (a5 == 1) {
            t3 = *(int *)((a4 + 0xC));
            t4 = a6;
            if ((int)t3 < (int)a6) {
                t4 = t3;
            }
            *(unsigned int *)((a7 + 0x4)) = t4;
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x14))) + (*(int *)((a4 + 0x10))));
            *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + (*(int *)((a7 + 0x4))));
            *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) - (*(int *)((a7 + 0x4))));
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t15 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t4;
    int t7;
    int t11;
    int stk[5];

    *(unsigned int *)((a7 + 0x0)) = 0x0;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        t4 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
        if (t4 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 4)) = *(struct mv2 *)((t4 + 0x8)); }
            *(unsigned int *)((a7 + 0x0)) = (*(int *)((((int)stk + 4) + 0x4)));
            t7 = *(int *)((((int)stk + 4) + 0x4));
            if ((*(signed char *)((a4 + 0x5))) == 1) {
                if ((int)t7 < (int)a6) {
                    return 0x0;
                }
                return 0x1;
            }
            if (t7 == a6) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t11 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

float angBlend(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u15;
    int t13;
    int t8;
    int stk[8];

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(short *)(((int)stk + 8));
    t1 = *(short *)(((int)stk + 4));
    t2 = *(short *)(((int)stk + 8));
    t3 = abs(((unsigned short)t0 - (unsigned short)t1));
    if ((int)t3 < (int)0x8000) {
        t13 = (unsigned short)(*(short *)(((int)stk + 4)));
    } else {
        if ((int)(unsigned short)t0 > (int)(unsigned short)t1) {
            t8 = ((unsigned short)t1 + 0x10000);
        } else {
            t8 = ((unsigned short)t1 - 65536);
        }
        t13 = t8;
    }
    u15 = ((1.0f - f4) * (float)(unsigned short)t2);
    u15 = u15 + f4 * (float)t13;
    return f4;
}

int padVibStopAll(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int stk[10];

    t0 = 0x8C2FBBC8;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((0x8C2FBBE8 + t1)) = 0x0;
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0x0;
        t2 = *(int *)((t1 + 0x8C158BE0));
        t3 = *(int *)((t1 + 0x8C29B898));
        *(unsigned int *)(((int)stk + 4)) = t3;
        t4 = *(int *)((t3 + 0x4));
        t5 = 0x0;
        if (((t4 & 0x100000) != 0) && ((0x200000 & t4) != 0)) {
            t5 = 0x1;
        }
        t6 = pdVibMxStop((t2 + ((t5 << 1) + t5)));
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x8);
        if ((unsigned int)t1 >= (unsigned int)0x10) {
            break;
        }
    }
    return t6;
}

int mtxGetAngles(int a4)
{
    float u1;
    float u3;
    int t15;
    int stk[22];

    nlGetMatrix(((int)stk + 4));
    u1 = *(float *)(((int)stk + 36));
    u3 = *(float *)(((int)stk + 44));
    *(unsigned short *)((a4 + 0x0)) = (nlArcSin((-(*(float *)(((int)stk + 40))))));
    *(unsigned short *)((a4 + 0x2)) = (nlArcTan2(u1, u3));
    nlUnitMatrix();
    nlRotateAX((-(unsigned short)(*(short *)((a4 + 0x0)))));
    nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x2)))));
    nlMultiMatrix(((int)stk + 4));
    nlGetMatrix(((int)stk + 4));
    t15 = nlArcTan2((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    *(unsigned short *)((a4 + 0x4)) = t15;
    return t15;
}

void nlRotateV(int a4, int a5)
{
    float t1;
    float t3;
    int stk[8];

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlOuterProduct(a4, a5, (((int)stk + 4) + 0x4));
    t1 = FUN_8c0f0860((((int)stk + 4) + 0x4));
    t3 = nlInnerProduct(a4, (*(int *)(((int)stk + 4))));
    if (t1 != 0.0f) {
        nlRotateAxeSC((((int)stk + 4) + 0x4), t1, t3);
    } else {
        if (0.0f > t3) {
            *(float *)(((int)stk + 8)) = (*(float *)((a4 + 0x4)));
            *(float *)(((int)stk + 12)) = (*(float *)((a4 + 0x8)));
            *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0x0)));
            nlRotateAxeSC((((int)stk + 4) + 0x4), 0.0f, (-1.0f));
        }
    }
}

int _setsbit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t9;
    int t18;

    t0 = (int)((int)a6 / (int)0x8);
    t1 = (int)((int)a6 % (int)0x8);
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31)))) == 0) {
        t3 = 0x0;
        t4 = (((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31)));
        for (;;) {
            if ((unsigned char)t4 == 0) {
                break;
            }
            t3 = (t3 | t4);
            t4 = (unsigned char)t4;
            t4 = ((unsigned int)t4 >> 1);
        }
        if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)t3) != 0) {
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | (((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))));
        } else {
            t9 = (t0 + a4);
            for (;;) {
                t9 = (t9 + 0x1);
                if ((unsigned int)t9 >= (unsigned int)(a4 + a5)) {
                    return (unsigned char)t3;
                }
                if ((*(signed char *)((t9 + 0x0))) != 0) {
                    break;
                }
            }
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | (((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))));
        }
        t18 = (unsigned char)t3;
    } else {
        t18 = (-t1);
    }
    return t18;
}

int ADXT_Stop(int a4)
{
    int t12;
    int t15;
    int t21;
    int t24;
    int t20;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        ADXSTM_Close((*(int *)((a4 + 0x8))));
        t12 = *(int *)((a4 + 0x14));
        t15 = ((int (*)(int))((*(int *)(((*(int *)((t12 + 0x0))) + 0x14)))))(t12);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x2))) == 2) && (t20 = *(int *)((a4 + 0x14)), t20 != 0)) {
        t21 = *(int *)((a4 + 0x14));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t21 + 0x0))) + 0xC)))))(t21);
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return ADXCRS_Unlock();
}

int ADXSTM_OpenFname(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t7;
    int t14;
    int t11;
    int stk[8];

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0x8C20AA04, a4);
        t14 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0, ((int)stk + 12));
        if (t2 == 0) {
            ADXERR_CallErrFunc(0x8C20AA34);
            gdFsClose(t0);
            t11 = 0x0;
        } else {
            t7 = ADXSTMF_Create(t0, 0x0, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
            if (t7 != 0) {
                strncpy((t7 + 0x40), a4, 0x20);
            }
            t11 = t7;
        }
        t14 = t11;
    }
    return t14;
}

int mwRnaDestroy(int a4)
{
    int t8;
    int t10;
    int t13;
    int t6;
    int t7;
    int stk[6];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((*(signed char *)((a4 + 0x1))) != 0) {
        mwRnaStop(a4);
    }
    *(unsigned char *)((a4 + 0x0)) = 0x0;
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(unsigned char)(*(signed char *)((a4 + 0x2)))) {
            break;
        }
        t7 = a4;
        t6 = t8;
        t7 = (t7 + 0x10);
        t6 = (t6 << 2);
        t6 = (t6 + t7);
        t8 = (t8 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
    }
    t10 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 12)) = t10;
    t13 = ((int (*)(int, int))((*(int *)(((*(int *)((t10 + 0x0))) + 0xC)))))(t10, 0x0);
    memset(a4, 0x0, 0x90);
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}

int angLerp(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t4;
    int t2;
    int stk[7];

    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(short *)(((int)stk + 4));
    t1 = abs(((unsigned short)t0 - (unsigned short)a4));
    t4 = (int)((float)(unsigned short)a4 + ((float)((unsigned short)t0 - (unsigned short)a4) * f4));
    if ((int)t1 < (int)0x8000) {
    } else {
        t2 = 0x10000;
        if ((int)(unsigned short)t0 > (int)(unsigned short)a4) {
            t2 = 0xFFFF0000;
        }
        t4 = (int)((float)(unsigned short)a4 + ((float)(((unsigned short)t0 - (unsigned short)a4) + t2) * f4));
    }
    return t4;
}

int nlLineSendVertex(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    t2 = a5;
    t3 = a4;
    for (;;) {
        if (t1 == 3) {
            *(unsigned int *)((t3 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t3 + 0x0)) = 0xE0000000;
        }
        t6 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t6;
        t3 = (t3 + 0x4);
        t7 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t7;
        t3 = (t3 + 0x4);
        t8 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t8;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t0;
        t3 = (t3 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        prefetch(t3);
        t1 = (t1 + 0x1);
        t3 = (t3 + 0x4);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return ((int (*)(void))(0x8C0F358E))();
}

int mwRnaContinue(int a4)
{
    int t4;
    int stk[5];

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    ovLockCs_8c200114(((int)stk + 8));
    if ((unsigned char)(*(signed char *)((a4 + 0x7))) == 1) {
        t4 = *(int *)((a4 + 0x88));
        if ((t4 != 0) && (t4 != 1)) {
            mwRnaSetPlaySw(a4, 0x1);
        }
        *(unsigned char *)((a4 + 0x7)) = 0x0;
    }
    return (ovUnlockCs_8c20012c(((int)stk + 8)));
}

void kmiRegisterPhIntHandler(int a4)
{
    int t4;
    int t5;

    *(unsigned int *)0x8C470AA8 = (_builtin_get_imask());
    *(unsigned int *)0x8C470AAC = (*(int *)0xA05F6930);
    *(unsigned int *)0x8C470AB0 = (*(int *)0xA05F6938);
    _builtin_set_imask(0xF);
    t4 = *(int *)((((int)_builtin_get_vbr()) + 0x224));
    if (a4 != t4) {
        t5 = (int)_builtin_get_vbr();
        *(unsigned int *)0x8C470AC8 = t4;
        *(unsigned int *)0x8C470ACC = a4;
        *(unsigned int *)(((t5 + 0x224) + 0x0)) = a4;
    }
    *(unsigned int *)0xA05F6930 = 0x0;
    *(unsigned int *)0xA05F6938 = 0x0;
    *(unsigned int *)0xA05F6900 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6908 = 0xFFFFFFFF;
    *(unsigned int *)0x8C470AB8 = 0x280FEC;
    *(unsigned int *)0x8C470ABC = 0xE;
    *(unsigned int *)0xA05F6930 = (*(int *)0x8C470AB8);
    *(unsigned int *)0xA05F6938 = (*(int *)0x8C470ABC);
    _builtin_set_imask(((unsigned int)((((*(int *)0x8C470AA8) & 0xF) << 2) << 2) >> 4));
}

int kmtex_GetTextureLevel(int a4, int a5)
{
    int t0;

    t0 = a4;
    if ((int)a4 >= (int)a5) {
        t0 = a5;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 8) {
                    if (t0 != 16) {
                        if (t0 != 32) {
                            if (t0 != 64) {
                                if (t0 != 0x80) {
                                    if (t0 != 0x100) {
                                        if (t0 != 0x200) {
                                            if (t0 != 0x400) {
                                                return ((int (*)(int, int))(0x8C1FC224))(t0, a5);
                                            }
                                            return ((int (*)(int, int))(0x8C1FC220))(t0, a5);
                                        }
                                        return ((int (*)(int, int))(0x8C1FC21C))(t0, a5);
                                    }
                                    return ((int (*)(int, int))(0x8C1FC218))(t0, a5);
                                }
                                return ((int (*)(int, int))(0x8C1FC214))(t0, a5);
                            }
                            return ((int (*)(int, int))(0x8C1FC210))(t0, a5);
                        }
                        return ((int (*)(int, int))(0x8C1FC20C))(t0, a5);
                    }
                    return ((int (*)(int, int))(0x8C1FC208))(t0, a5);
                }
                return ((int (*)(int, int))(0x8C1FC224))(t0, a5);
            }
            return ((int (*)(int, int))(0x8C1FC204))(t0, a5);
        }
        return ((int (*)(int, int))(0x8C1FC200))(t0, a5);
    }
    return 0x0;
}

int ndbBuildIndex(void)
{
    *(unsigned short *)0x8CB80000 = 0x0;
    return ((int (*)(int, int, int))(0x8C08268A))(0x8CB80000, 0x8CB80000, 0x8CB90000);
}

int hudCallMsgDrawA9f0(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C09A3A4)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A3AC);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A3B0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33A9F0, 0x1, *(Stk3 *)(((int)stk + 28)), f4, 1.0f, f5));
}

int nlMakeProjConvMat(int a4)
{
    float u4;
    float u7;

    *(float *)((a4 + 0x0)) = ((*(float *)0x8C1DCA24) * 0.5f);
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(float *)((a4 + 0x10)) = 0.0f;
    *(float *)((a4 + 0x14)) = (-((*(float *)0x8C1DCA28) * 0.5f));
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 0.0f;
    *(float *)((a4 + 0x24)) = 0.0f;
    *(float *)((a4 + 0x28)) = -0.5f;
    *(float *)((a4 + 0x2C)) = 0.0f;
    u4 = (*(float *)0x8C1DCA2C);
    u4 = u4 + 0.5f * (*(float *)0x8C1DCA24);
    *(float *)((a4 + 0x30)) = u4;
    u7 = (*(float *)0x8C1DCA30);
    u7 = u7 + 0.5f * (*(float *)0x8C1DCA28);
    *(float *)((a4 + 0x34)) = u7;
    *(float *)((a4 + 0x38)) = 0.5f;
    *(float *)((a4 + 0x3C)) = 1.0f;
    return 0x3C;
}

int pdLcdGetDirection(int a4)
{
    int t1;
    int t2;
    int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0x8C20A8C8))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0x8C20A8A0 + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int vmsfs_read_disk_image(int a4, int a5)
{
    int t0;

    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)((((((t0 << 2) + t0) << 2) << 2) + 0x8C20C788)));
    return ((int (*)(int, int))(0x8C1EE976))(a4, a5);
}

int pdVibEnumerateUnit(int a4, int a5, int a6)
{
    int t12;
    int t1;
    int t6;
    int t2;
    int t3;

    t12 = 0xFFFFFFFF;
    if ((*(int *)((((a4 * 0x1C) + 0x8C46A904) + 0x0))) == 0) {
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x0)) = 0x1;
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x4)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x8)) = a6;
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0xC)) = 0x0;
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x10)) = a5;
        *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x14)) = 0x1;
        t1 = pdVibGetInfo(a4, (((a4 * 0x1C) + 0x8C46A904) + 0x18));
        t6 = t1;
        if ((int)t1 >= 0) {
            t2 = kdSetGetMediaInfoEx(a4, 0x100, 0x1, 0x8C1EF912);
            t3 = 0x0;
            if ((int)t2 < 0) {
                *(unsigned int *)((((a4 * 0x1C) + 0x8C46A904) + 0x0)) = 0x0;
                t3 = 0xFFFFFFFF;
            }
            t6 = t3;
        }
        t12 = t6;
    }
    return t12;
}

int nlCloseEvent2(int a4)
{
    int t2;
    int t3;
    int t10;
    int t22;
    int t23;
    int t28;
    int t30;
    int t6;
    int t14;
    int t24;

    if (a4 != 0) {
        if ((*(int *)((a4 + 0x8))) == 0) {
            t2 = *(int *)((a4 + 0x4));
            *(unsigned int *)0x8C23D1D0 = t2;
            t6 = t2;
        } else {
            t3 = *(int *)((a4 + 0x4));
            *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = t3;
            t6 = t3;
        }
        if ((*(int *)((a4 + 0x4))) == 0) {
            *(unsigned int *)0x8C23D1CC = (*(int *)((a4 + 0x8)));
            t14 = t6;
        } else {
            t10 = *(int *)((a4 + 0x8));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x8)) = t10;
            t14 = t10;
        }
        if (a4 == (*(int *)0x8C23D1D8)) {
            *(unsigned int *)0x8C23D1D8 = (*(int *)((a4 + 0x8)));
        }
        t22 = t14;
        t23 = (*(int *)((a4 + 0x0)));
        for (;;) {
            if (t23 == 0) {
                break;
            }
            t24 = (*(int *)((t23 + 0x0)));
            nlFree2(t23);
            t22 = (*(int *)0x8C23D1F0);
            t23 = t24;
            t22 = (t22 - 1);
            *(unsigned int *)0x8C23D1F0 = t22;
        }
        t28 = nlFree2(a4);
        *(unsigned int *)0x8C23D1F4 = ((*(int *)0x8C23D1F4) - 1);
        t30 = t28;
    }
    return t30;
}

int miniPlacePlayers(void)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t5;
    float u6;
    float u8;
    int t9;
    int stk[9];

    u0 = *(float *)0x8C036948;
    t1 = 0x0;
    t2 = 0x8C287D84;
    t3 = 0x8C287D84;
    for (;;) {
        t5 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((((t5 << 1) + t5) << 2) << 1) + 0x8C10BA48) + t1)); }
        u6 = *(float *)((((int)stk + 4) + 0x0));
        if (u6 != u0) {
            *(float *)((t3 + 0xAE8)) = u6;
        }
        u8 = *(float *)((((int)stk + 4) + 0x8));
        t9 = 0x8;
        if (u8 != u0) {
            *(float *)((t2 + 0xAF0)) = u8;
            t9 = 0xAF0;
        }
        t1 = (t1 + 0xC);
        t2 = (t2 + 0xD78);
        t3 = (t3 + 0xD78);
        if ((unsigned int)t1 >= (unsigned int)0x18) {
            break;
        }
    }
    return t9;
}

int hudCallMsgDrawDa60(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A674));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DA60, 0x0, *(Stk3 *)(((int)stk + 28)), f4, 1.0f, f5));
}

int hudCallMsgDrawDb50(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 28) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C09A67C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DB50, 0x0, *(Stk3 *)(((int)stk + 28)), f4, 1.0f, f5));
}

int hudCallMsgDrawDb00(float f4, float f5)
{
    int stk[14];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 28)), (f4 * 0.5f), f5);
    *(float *)((((int)stk + 28) + 0x8)) = 0.00499999989f;
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
    return (sprPutCropV(0x8C33DB00, 0x0, *(Stk3 *)(((int)stk + 28)), f4, 1.0f, f5));
}

int fileLoadPollSlot(int a4)
{
    int t0;
    int t4;

    t0 = getID_Color(a4, 1.0f);
    nlPrintColor(t0);
    nlLocate(0x14, (a4 + 0x18));
    t4 = ADXF_GetStat((*(int *)((((a4 * 0x4C) + 0x8C34A238) + 0xC))));
    if ((t4 == -3) || (t4 == 3)) {
        fileLoadCloseSlot(a4);
    }
    nlPrintColor(0xFFFFFFFF);
    *(unsigned int *)((((a4 * 0x4C) + 0x8C34A238) + 0x8)) = ((*(int *)((((a4 * 0x4C) + 0x8C34A238) + 0x8))) + 0x1);
    return (*(int *)((((a4 * 0x4C) + 0x8C34A238) + 0x4)));
}

int nlExp(float f4)
{
    float u0;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    float u12;
    float u4;

    u0 = *(float *)0x8C0ED0D8;
    if (!(0.0f > f4)) {
        u4 = (*(float *)0x8C0ED0DC);
    } else {
        u4 = (*(float *)0x8C0ED0E0);
    }
    u7 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    u8 = (f4 - ((float)(int)(u4 + (f4 / u0)) * u0));
    t9 = 0xA;
    u10 = ((u7 * u8) / (*(float *)0x8C0ED0E4));
    for (;;) {
        t11 = t9;
        t9 = (t9 - 4);
        u12 = ((float)t11 + u10);
        u10 = (u7 * u8);
        u10 = (u10 / u12);
        if ((int)t9 < (int)0x6) {
            break;
        }
    }
    return ((int (*)(int, int, int, float))(0x8C0ECFAA))((int)(u4 + (f4 / u0)), t9, 0x6, (u7 * u8));
}

void kmiUnregisterInterruptHandler(void)
{
    *(unsigned int *)0x8C470AA8 = (_builtin_get_imask());
    *(unsigned int *)0x8C470AAC = (*(int *)0xA05F6930);
    *(unsigned int *)0x8C470AB0 = (*(int *)0xA05F6938);
    _builtin_set_imask(0xF);
    if ((*(int *)0x8C470ACC) != (*(int *)((((int)_builtin_get_vbr()) + 0x224)))) {
        *(unsigned int *)(((((int)_builtin_get_vbr()) + 0x224) + 0x0)) = (*(int *)0x8C470AC8);
    }
    *(unsigned int *)0xA05F6930 = 0x0;
    *(unsigned int *)0xA05F6938 = 0x0;
    *(unsigned int *)0xA05F6900 = 0xFFFFFFFF;
    *(unsigned int *)0xA05F6908 = 0xFFFFFFFF;
    *(unsigned int *)0x8C470AB8 = 0x0;
    *(unsigned int *)0x8C470ABC = 0x0;
    *(unsigned int *)0xA05F6930 = (*(int *)0x8C470AB8);
    *(unsigned int *)0xA05F6938 = (*(int *)0x8C470ABC);
    _builtin_set_imask(((unsigned int)((((*(int *)0x8C470AA8) & 0xF) << 2) << 2) >> 4));
}

void padLcdLine3D(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int stk[18];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    t0 = *(int *)(((int)stk + 36));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t0); }
    padLcdProject(a7, (((int)stk + 16) + 0x24), *(Stk3 *)(t0));
    t2 = *(int *)(((int)stk + 32));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t2); }
    padLcdProject(a7, (((int)stk + 4) + 0x24), *(Stk3 *)(t2));
    padLcdLine((*(int *)(((int)stk + 28))), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2FBBF8) = *(struct mv3 *)((((int)stk + 4) + 0x24)); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)(0x8C2FBC04) = *(struct mv16 *)(a7); }
    *(unsigned int *)0x8C2FBC44 = (*(int *)(((int)stk + 28)));
}

int logoAInit(void)
{
    int t0;
    int t2;
    int t3;
    int stk[27];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 12)) = *(struct mv16 *)(0x8C10E3D8); }
    t0 = 0x0;
    for (;;) {
        t2 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C334D9C), 0x86, ((int)stk + 12), 0x80, 0x80, (t0));
        t3 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C334D9C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

void dbgMenuSetItem(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)a5 < (int)0x14) {
        t0 = a6;
        t1 = ((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x10);
        t2 = 0x0;
        for (;;) {
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t2 = (t2 + 0x1);
            *(unsigned char *)((t1 + 0x0)) = t3;
            t1 = (t1 + 0x1);
            if ((int)t2 >= (int)0x5) {
                break;
            }
        }
        *(unsigned int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x0)) = a7;
        *(unsigned int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x4)) = a8;
        *(unsigned int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0x8)) = a9;
        *(unsigned int *)(((((a4 * 0x1F0) + 0x8C285E4C) + ((((a5 << 1) + a5) << 2) << 1)) + 0xC)) = a10;
    }
}

int stageSelSprInit(void)
{
    int t0;
    int t2;
    int t3;
    int stk[27];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 12)) = *(struct mv16 *)(0x8C1103E8); }
    t0 = 0x0;
    for (;;) {
        t2 = sprInitRectF((((((t0 << 2) + t0) << 2) << 2) + 0x8C340AD4), 0x72, ((int)stk + 12), 0x80, 0x80, (t0));
        t3 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C340AD4);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int adxt_stat_playing(int a4)
{
    int t1;
    int t16;
    int t3;
    int t9;
    int t4;
    int t5;
    int t8;
    int t14;
    int t11;

    t1 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
    t16 = t1;
    if (t1 == 3) {
        t3 = ADXSJD_GetNumChan((*(int *)((a4 + 0x4))));
        t9 = t3;
        if ((int)t3 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (a4 + 0x18)) + 0x0));
                t8 = ((int (*)(int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x24)))))(t5, 0x1);
                if ((int)t8 < (int)0x20) {
                    t4 = (t4 + 0x1);
                    if ((int)t4 >= (int)t3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t9 = t8;
            t11 = t4;
        } else {
            t11 = 0x0;
        }
        t14 = t9;
        if (t11 == t3) {
            ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
            *(unsigned char *)((a4 + 0x1)) = 0x4;
            t14 = 0x4;
        }
        t16 = t14;
    }
    return t16;
}

int kmyUseAnotherList(int a4, int a5)
{
    int t0;

    t0 = *(int *)((a4 + 0x0));
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
                if (a5 != 3) {
                    if (a5 != 4) {
                        return ((int (*)(int, int, int, int))(0x8C20641A))(a4, a5, t0, 0xEEEE);
                    }
                    return ((int (*)(int, int, int, int))(0x8C206404))(a4, a5, t0, 0xEEEE);
                }
                if ((0x30 & t0) != 0) {
                    return ((int (*)(int, int, int, int))(0x8C206410))(a4, a5, (t0 & 0xFFFF4FFF), 0xEEEE);
                }
                return ((int (*)(int, int, int, int))(0x8C206400))(a4, a5, t0, 0xEEEE);
            }
            return ((int (*)(int, int, int, int))(0x8C20641A))(a4, a5, t0, 0xEEEE);
        }
        if ((0x3000 & t0) != 0) {
            return ((int (*)(int, int, int, int))(0x8C206410))(a4, a5, (t0 & 0xFFFFFF4F), 0xEEEE);
        }
        return ((int (*)(int, int, int, int))(0x8C20641C))(a4, 0xEEEE, t0, 0xEEEE);
    }
    return ((int (*)(int, int, int, int))(0x8C20641A))(a4, a5, t0, 0xEEEE);
}

int angStepToward(int a4, int a5, int a6)
{
    int t1;
    int t2;
    float u3;
    int t5;
    int stk[6];

    *(unsigned short *)(((int)stk + 4)) = a5;
    if ((int)a6 <= 0) {
        t5 = (*(short *)(((int)stk + 4)));
    } else {
        t1 = *(short *)(((int)stk + 4));
        t2 = abs(((unsigned short)t1 - (unsigned short)a4));
        u3 = ((float)(unsigned short)a4 - ((float)((unsigned short)t1 - (unsigned short)a4) / (float)a6));
        if ((int)t2 < (int)0x8000) {
            u3 = ((float)(unsigned short)a4 + ((float)((unsigned short)t1 - (unsigned short)a4) / (float)a6));
        }
        t5 = (int)u3;
    }
    return t5;
}

int circuitMenuCursor(int a4, int a5)
{
    int t1;
    int t3;
    int t6;
    int t8;

    t1 = padDirRepeat((*(int *)0x8C421F70), 0x10);
    t3 = padDirRepeat((*(int *)0x8C421F70), 0x20);
    if ((t3 != 0) || (t1 != 0)) {
        sndSeCursor();
    }
    t6 = (a4 + (((((t3 == 0)) ? 1 : 0) ^ 0x1) - (-((((t1 == 0)) ? 1 : 0) - 1))));
    if ((int)(a4 + (((((t3 == 0)) ? 1 : 0) ^ 0x1) - (-((((t1 == 0)) ? 1 : 0) - 1)))) < 0) {
        t6 = (a5 - 1);
    }
    t8 = t6;
    if ((int)t6 > (int)(a5 - 1)) {
        t8 = 0x0;
    }
    return t8;
}

int miniWallTargetsInit(void)
{
    float u0;
    int t1;
    int t7;
    int t8;

    u0 = *(float *)0x8C0393C8;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)(((0x8C2FC18C + (t1 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C2FC1B4 + (t1 << 2)) + 0x0)) = 0x0;
        *(float *)(((0x8C2FC1DC + (t1 << 2)) + 0x0)) = 1.0f;
        if (((*(int *)((0x40 + (*(int *)0x8C2FBEF0)))) == 1) && ((int)t1 < (int)0x5)) {
            *(float *)(((0x8C2FC1DC + (t1 << 2)) + 0x0)) = u0;
        }
        t7 = *(int *)((0x40 + (*(int *)0x8C2FBEF0)));
        t8 = (t1 << 2);
        t1 = (t1 + 0x1);
        if (t7 == 2) {
            *(float *)(((0x8C2FC1DC + t8) + 0x0)) = u0;
        }
        if ((int)t1 >= (int)0xA) {
            break;
        }
    }
    return t7;
}
