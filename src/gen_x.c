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
float nlUnitVector(int);
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
int angBlend(int a4, int a5, float f4);
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


int angBlend(int a4, int a5, float f4)
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
    return (int)u15;
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
        (*(int *)((int)stk + 4)) = t3;
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
