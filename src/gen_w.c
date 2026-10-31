/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char fileLoadState[];
extern char gMapleDriver[];
extern char gMapleTransferLockAddress[];
extern char motionCur[];
extern char strMwRnaNullHandleError[];

typedef struct { int w[3]; } Stk3;
int ADXB_EndDecode(int);
int ADXB_EvokeDecode(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int nlResetBackColorZ(int, int, int, float);
int kmyCopySmallVQToTextureRom(int, int, int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int courtPropPickPose(int);
int fileLoadClose(void);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmiReadRegister(int);
int kmtex_GetTextureLevel(int, int);
int logoSmallPut(void);
int memset(int, int, int);
int modeMarkPut(float);
int mpdrv_dpf(int, ...);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mwRnaAdjustBuf(int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(int, int);
int mwlRnaAddRdPos(int);
int mwlRnaWaitTransEnd(int);
int nlCalcVector(int, int);
int nlChangeDisplayMode(int, int);
float nlCos(int);
int nlLineSendVertex(int, int, int);
int nlMatrixMode(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSetCommonTextureOffset(int);
int nlSetPalExtMode(int);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlTransposeMatrix(void);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int resCautionRead(int);
int set_event(int, int);
int shadowVolBuildDir(int);
int sprInitPos(int, int);
int sprPutAt(int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
extern int thunk_nlSprPut();
int vecMake(float, float, float);
int shadowLightMatrix(float f4);
int kmyUnloadDevice(void);
int SJMEM_UngetChunk(int a4, int a5, int a6);
int kmyWaitVBlank(int a4);
int kmyiWaitScanline0(int a4);
int shadowVolPutDir(int a4, float f4, float f5, float f6, float f7);
int resCautionShow(int a4);
int nlLocate(int a4, int a5);
int nlsndStreamOpen(int a4);
int kdSetDeviceResetEx(int a4, int a5);
int mwRnaPause(int a4);
int kmiFLWCTRLVsyncCallBackFunc(void);
int rankDrawString(int a4, int a5);
int nlArcTan(float f4);
float nlTan(int a4);
int kdSetARControlEx(int a4, int a5, int a6);
int mwRnaSetFx(int a4, int a5, int a6);
int nl_system_config_init(int a4);
int nlInvLightVectorUseViewMatrix(void);
int kdSetGetConditionEx(int a4, int a5, int a6);
int menuTextIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int selCursorPlace(int a4);
int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8);
int ADXB_ExecOneAdx(int a4);
int kmiCallbackError(int a4);
int ballBoyPropPut(int a4);
int msgWinPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlLineSendQuadE(int a4, int a5, int a6, float f4);
int nlsndFxControl(int a4, int a5, int a6);
int nlsndStreamChgFx(int a4, int a5, int a6);
int motionRootRaw(int a4);
int padDirOn(int a4, int a5);
int fileLoadStartAfs(int a4, int a5, int a6);
void courtPropsInit(void);
int evPackFade(int a4, int a5, int a6);
int nlPow(float f4, float f5);
float nlSin(int a4);
int kmLoadTextureRom(int a4, int a5, int a6);
int syCacheOCBI(int a4, int a5);
int syCacheOCBP(int a4, int a5);
int ADXF_Ocbi(int a4, int a5);
int sysSetVideoMode(int a4);
float iconSlotPutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int bgScreenDraw(int a4, int a5, int a6, int a7);

int shadowLightMatrix(float f4)
{
    float t4;

    nlTranslate(0.0f, (-f4), 0.0f);
    nlRotateAY(((unsigned short)(*(short *)0x8C287A3E) + 0x8000));
    t4 = nlCos(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    nlTranslate(0.0f, 0.0f, (f4 * (1.0f / t4)));
    nlScale(1.0f, 0.00100000005f, (1.0f / t4));
    nlRotateAX(((unsigned short)(*(short *)0x8C287A3C) - 16384));
    return nlRotateAY(((-(unsigned short)(*(short *)0x8C287A3E)) - 32768));
}

int kmyUnloadDevice(void)
{
    int t2;

    if ((*(int *)0x8C4743E8) != 0) {
        t2 = ((int (*)(int))((*(int *)0x8C4743E8)))(0x8C4743D8);
    }
    memset(0x8C4743D8, 0x0, 0x18);
    return 0x0;
}

int SJMEM_UngetChunk(int a4, int a5, int a6)
{
    int t0;
    int t7;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t27;
    int t37;
    int t24;

    t0 = SJMEM_Lock();
    if (a5 == 0) {
        if ((*(int *)((a4 + 0x1C))) == 0) {
        } else {
            t7 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
        }
    } else {
        if (a5 == 1) {
            t13 = *(int *)((a4 + 0x10));
            t14 = *(int *)((a6 + 0x4));
            t15 = (t13 - t14);
            if ((int)(t13 - t14) <= 0) {
                t15 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t15;
            t17 = *(int *)((a6 + 0x4));
            t18 = *(int *)((a4 + 0xC));
            t19 = *(int *)((a4 + 0x18));
            t20 = (t18 + t17);
            if ((int)t19 < (int)(t18 + t17)) {
                t20 = t19;
            }
            *(unsigned int *)((a4 + 0xC)) = t20;
            if ((t15 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t24 = *(int *)((a4 + 0x1C)), t24 != 0)) {
                t27 = ((int (*)(int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, (t18 + t17));
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x1C))) != 0) {
                t37 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

int kmyWaitVBlank(int a4)
{
    int t0;
    int t2;
    int t7;
    int t15;
    int t6;
    int t8;
    int t14;
    int t16;
    int stk[10];

    t0 = *(int *)0xFFD8000C;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) < (unsigned int)0x3D09) {
        for (;;) {
            t2 = kmiReadRegister(0x10C);
            if ((t2 & 0x2000) == 0) {
                break;
            }
            if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) >= (unsigned int)0x3D09) {
                if (((*(int *)(((int)stk + 4))) == 0) && (t6 = *(int *)0xFFD8000C, (unsigned int)(t0 - t6) < (unsigned int)0x3D09)) {
                    for (;;) {
                        t7 = kmiReadRegister(0x10C);
                        if (((t7 & 0x2000) == 0) && (t8 = *(int *)0xFFD8000C, (unsigned int)(t0 - t8) < (unsigned int)0x3D09)) continue;
                        break;
                    }
                    return 0x0;
                }
                return 0x0;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
    }
    if (((*(int *)(((int)stk + 4))) == 0) && (t14 = *(int *)0xFFD8000C, (unsigned int)(t0 - t14) < (unsigned int)0x3D09)) {
        for (;;) {
            t15 = kmiReadRegister(0x10C);
            if (((t15 & 0x2000) == 0) && (t16 = *(int *)0xFFD8000C, (unsigned int)(t0 - t16) < (unsigned int)0x3D09)) continue;
            break;
        }
    }
    return 0x0;
}

int kmyiWaitScanline0(int a4)
{
    int t0;
    int t2;
    int t7;
    int t15;
    int t6;
    int t8;
    int t14;
    int t16;
    int stk[10];

    t0 = *(int *)0xFFD8000C;
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) < (unsigned int)0x3D09) {
        for (;;) {
            t2 = kmiReadRegister(0x10C);
            if ((t2 & 0x3FF) != 0) {
                break;
            }
            if ((unsigned int)(t0 - (*(int *)0xFFD8000C)) >= (unsigned int)0x3D09) {
                if (((*(int *)(((int)stk + 4))) == 0) && (t6 = *(int *)0xFFD8000C, (unsigned int)(t0 - t6) < (unsigned int)0x3D09)) {
                    for (;;) {
                        t7 = kmiReadRegister(0x10C);
                        if (((t7 & 0x3FF) != 0) && (t8 = *(int *)0xFFD8000C, (unsigned int)(t0 - t8) < (unsigned int)0x3D09)) continue;
                        break;
                    }
                    return 0x0;
                }
                return 0x0;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
    }
    if (((*(int *)(((int)stk + 4))) == 0) && (t14 = *(int *)0xFFD8000C, (unsigned int)(t0 - t14) < (unsigned int)0x3D09)) {
        for (;;) {
            t15 = kmiReadRegister(0x10C);
            if (((t15 & 0x3FF) != 0) && (t16 = *(int *)0xFFD8000C, (unsigned int)(t0 - t16) < (unsigned int)0x3D09)) continue;
            break;
        }
    }
    return 0x0;
}

int shadowVolPutDir(int a4, float f4, float f5, float f6, float f7)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 16)) = f7;
    nlPushMatrix(0x0);
    *(float *)0x8C2859D8 = (*(float *)(((int)stk + 4)));
    *(float *)0x8C2859E8 = (*(float *)(((int)stk + 8)));
    *(float *)0x8C2859EC = (*(float *)(((int)stk + 12)));
    *(float *)0x8C2859F0 = (*(float *)(((int)stk + 16)));
    nlTransposeMatrix();
    nlCalcVector(0x8C2859E8, 0x8C2859E8);
    nlTransposeMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)(0x8C2859E8); }
    nlScaleUnitVector(0x8C2859F4, (((int)stk + 4) + 0x14), (*(float *)0x8C2859D8));
    shadowVolBuildDir((*(int *)(((int)stk + 20))));
    return (nlPopMatrix(0x1));
}




int kdSetDeviceResetEx(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int mwRnaPause(int a4)
{
    int t3;
    int t20;
    int stk[6];

    if (a4 == 0) {
        t20 = (mwRnaErrCallFunc((int)strMwRnaNullHandleError));
    } else {
        ovLockCs_8c200114(((int)stk + 8));
        if ((*(signed char *)((a4 + 0x7))) == 0) {
            t3 = mwRnaGetPlaySw(a4);
            *(unsigned int *)((a4 + 0x88)) = ((t3 << 1) | (mwRnaGetTransSw(a4)));
            mwlRnaAddRdPos(a4);
            mwRnaSetPlaySw(a4, 0x0);
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                *(unsigned int *)((a4 + 0x8C)) = 0x1;
                ovUnlockCs_8c20012c(((int)stk + 8));
                mwlRnaWaitTransEnd(a4);
                ovLockCs_8c200114(((int)stk + 8));
                *(unsigned int *)((a4 + 0x8C)) = 0x0;
            }
            mwRnaAdjustBuf(a4);
        }
        t20 = (ovUnlockCs_8c20012c(((int)stk + 8)));
    }
    return t20;
}




float nlTan(int a4)
{
    float c0;
    float c1;
    float c2;
    float c3;
    float x;
    float r;
    float u;
    int q;
    int k;
    int t10;

    if ((0x7FFF & (unsigned short)a4) == 0x4000) {
        return *(float *)0x8C0ED788;
    }
    c0 = *(float *)0x8C0ED778;
    c1 = *(float *)0x8C0ED77C;
    c2 = *(float *)0x8C0ED780;
    c3 = *(float *)0x8C0ED784;
    x = (((float)(unsigned short)a4 * c0) / c1);
    q = (int)((x / c2) + c3);
    x = (x - ((float)q * c2));
    r = (x * x);
    u = 0.0f;
    k = 0xD;
    while ((int)k >= (int)0x3) {
        t10 = k;
        k = (k - 2);
        u = (r / ((float)t10 - u));
    }
    x = (x / (1.0f - u));
    if ((q & 0x1) == 0) {
        return x;
    }
    if (x == 0.0f) {
        return *(float *)0x8C0ED788;
    }
    return (-1.0f / x);
}

int kdSetARControlEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}


int nl_system_config_init(int a4)
{
    *(unsigned int *)0x8C42420C = 0x1F8;
    *(unsigned int *)0x8C424210 = 0x0;
    *(unsigned int *)0x8C424404 = 0x8C42441C;
    *(unsigned int *)0x8C424408 = 0x8C42443C;
    *(unsigned int *)0x8C424214 = 0x8C424404;
    *(unsigned int *)0x8C424218 = 0x2;
    *(unsigned int *)0x8C424210 = ((*(int *)0x8C424210) | 0x100);
    *(unsigned int *)0x8C424220 = (a4 << 2);
    *(unsigned int *)0x8C424224 = 0x1000;
    *(unsigned int *)0x8C424228 = 0x400;
    *(unsigned int *)0x8C42422C = 0x8C4244AC;
    *(unsigned int *)0x8C424230 = 0x8C454FC0;
    *(unsigned int *)0x8C424234 = 0x2;
    *(unsigned int *)0x8C424238 = 0xACC00000;
    *(unsigned int *)0x8C42423C = 0x400000;
    *(unsigned int *)0x8C424240 = 0x1;
    *(unsigned int *)0x8C424244 = 0x0;
    *(float *)0x8C424254 = (*(float *)0x8C0EB58C);
    *(float *)0x8C424258 = (*(float *)0x8C0EB590);
    *(float *)0x8C42425C = (*(float *)0x8C0EB594);
    *(float *)0x8C424260 = 0.0f;
    *(float *)0x8C424264 = 0.0f;
    *(unsigned int *)0x8C424250 = 0x0;
    *(unsigned int *)0x8C42440C = 0x3;
    *(unsigned int *)0x8C424410 = 0x0;
    return 0x44;
}

int nlInvLightVectorUseViewMatrix(void)
{
    nlMatrixMode(0x2);
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA60, 0x8C458D98);
    nlTransposeMatrix();
    nlMatrixMode(0x1);
    nlTransposeMatrix();
    nlCalcVector(0x8C1DCA40, 0x8C458DA8);
    *(float *)0x8C458D98 = ((*(float *)0x8C458D98) + (*(float *)0x8C1DCA40));
    *(float *)0x8C458D9C = ((*(float *)0x8C458D9C) + (*(float *)0x8C1DCA44));
    *(float *)0x8C458DA0 = ((*(float *)0x8C458DA0) + (*(float *)0x8C1DCA48));
    nlCalcVector(0x8C458D98, 0x8C458D98);
    nlScaleUnitVector(0x8C458D98, 0x8C458D98, 436.5f);
    return (nlTransposeMatrix());
}

int kdSetGetConditionEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int menuTextIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t2;
    int t9;
    int t4;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    if ((int)a4 <= (int)0x7) {
        if ((int)a4 < (int)0x6) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t0 = *(int *)(((a4 << 2) + 0x8C10EF0C));
            t4 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C);
        } else {
            *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + -34.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t2 = *(int *)(((a4 << 2) + 0x8C10EF0C));
            t4 = (((((t2 << 2) + t2) << 2) << 2) + 0x8C338600);
        }
        t9 = (sprPutAtAlpha(t4, *(Stk3 *)((((int)stk + 16) + 0xC)), f4));
    }
    return t9;
}

int selCursorPlace(int a4)
{
    int t0;
    int t1;
    int t2;
    int t5;

    *(unsigned int *)(((a4 << 2) + 0x8C343ACC)) = 0xFFFFFFFF;
    t0 = *(int *)((0x8C110A94 + (a4 << 2)));
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t0;
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)) = 0x0;
    t1 = t0;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)((0x8C1853C0 + ((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2)))) == 0) {
            break;
        }
        t2 = (t2 + 0x1);
        if ((int)(a4 + t2) >= 0) {
            t5 = ((a4 + t2) & 0x3);
        } else {
            t5 = ((~(((~(a4 + t2)) + 0x1) & 0x3)) + 0x1);
        }
        t1 = (*(int *)((0x8C110A94 + (t5 << 2))));
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t1;
        if ((int)t2 <= (int)0x4) continue;
        break;
    }
    *(unsigned int *)((((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2) + 0x8C1853C0)) = 0x2;
    *(unsigned int *)(((a4 << 2) + 0x8C343ACC)) = (*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)));
    return 0x8C343ACC;
}

int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a8, t2);
    }
    *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int ADXB_ExecOneAdx(int a4)
{
    int t2;
    int t5;
    int t14;
    int t30;
    int t18;
    int t27;
    int t26;

    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t5 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            ADXB_EvokeDecode(a4);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
        }
    }
    t14 = *(int *)((a4 + 0x4));
    t30 = t14;
    if (t14 == 2) {
        ADXPD_ExecHndl((*(int *)((a4 + 0x8))));
        t18 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        t27 = t18;
        if (t18 == 3) {
            ADXB_EndDecode(a4);
            ADXPD_Reset((*(int *)((a4 + 0x8))));
            t26 = ((int (*)(int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))));
            *(unsigned int *)((a4 + 0x4)) = 0x3;
            t27 = t26;
        }
        t30 = t27;
    }
    return t30;
}

int kmiCallbackError(int a4)
{
    int t0;
    int t1;
    int t5;
    int t6;
    int t16;
    int t17;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0x8C20343C;
    if (t0 != 27) {
        if (t0 != 28) {
        } else {
            t5 = *(int *)0x8C203434;
            if (t5 != 0) {
                t6 = ((int (*)(int, int))(t5))(t1, 0x8C203420);
            }
        }
    } else {
        t16 = *(int *)0x8C203430;
        if (t16 != 0) {
            t17 = ((int (*)(int, int))(t16))(t1, 0x8C203420);
        }
    }
    return 0x1;
}



int nlLineSendQuadE(int a4, int a5, int a6, float f4)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = ((*(float *)((a5 + 0x0))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = ((*(float *)((a5 + 0x0))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = ((*(float *)((a5 + 0x0))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a5 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}



int motionRootRaw(int a4)
{
    int t0;
    int t3;
    int t4;
    float u7;
    int t8;
    int t14;

    t0 = *(int *)(int)motionCur;
    t3 = *(int *)((t0 + 0x54));
    t4 = *(int *)(((*(int *)((t0 + 0x20))) + 0x4));
    u7 = *(float *)(((*(int *)(int)motionCur) + 0xC));
    t8 = *(int *)(((*(int *)(((*(int *)(int)motionCur) + 0x20))) + 0x10));
    t14 = *(int *)(int)motionCur;
    return nlTranslate(((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x0))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x14) + 0x0)))), ((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x2))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x18) + 0x0)))), ((float)(-(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x4)))) / (*(float *)((((*(int *)(((*(int *)(int)motionCur) + 0x20))) + 0x1C) + 0x0)))));
}


int fileLoadStartAfs(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t11;

    if ((*(int *)0x8C34A1F8) != 0) {
        fileLoadClose();
    }
    *(unsigned int *)(int)fileLoadState = 0x1;
    *(unsigned int *)0x8C34A1F0 = 0x0;
    *(unsigned int *)0x8C34A1FC = a5;
    *(unsigned int *)0x8C34A200 = a6;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    t8 = 0x0;
    for (;;) {
        t9 = ADXF_OpenAfs(a5, a6);
        *(unsigned int *)0x8C34A1F8 = t9;
        if (t9 == 0) {
            if ((int)t8 < (int)0xA) {
                t8 = (t8 + 0x1);
                continue;
            }
            break;
        }
        t11 = ADXF_GetFsizeSct((*(int *)0x8C34A1F8));
        ADXF_ReadNw32((*(int *)0x8C34A1F8), t11, a4);
        return 0x1;
    }
    *(unsigned int *)(int)fileLoadState = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

void courtPropsInit(void)
{
    int t1;
    int t32;
    int t34;
    int t27;
    int t29;
    int t22;
    int t24;
    int t17;
    int t19;
    int t14;
    int t8;
    int t9;
    int t36;
    int t37;
    int t12;

    *(unsigned int *)0x8C34B14C = (*(int *)0x8C1891E8);
    t1 = *(int *)0x8C1891E8;
    t32 = 0xE;
    t34 = 0x8C189644;
    if (t1 != 0) {
        t27 = 0x1D;
        t29 = 0x8C1891F8;
        if (t1 != 1) {
            t22 = 0x1A;
            t24 = 0x8C18943C;
            if (t1 != 2) {
                t17 = 0x14;
                t19 = 0x8C18975C;
                if (t1 != 3) {
                    t14 = 0x8C1891E8;
                    if (t1 != 4) {
                    } else {
                        t8 = 0x16;
                        t9 = 0x8C1898EC;
                        if ((*(int *)0x8C20D14C) == 3) {
                            t8 = 0x15;
                            t9 = 0x8C189AA4;
                        }
                        t12 = t8;
                        t14 = t9;
                    }
                    t17 = t12;
                    t19 = t14;
                }
                t22 = t17;
                t24 = t19;
            }
            t27 = t22;
            t29 = t24;
        }
        t32 = t27;
        t34 = t29;
    }
    if ((int)t32 > 0) {
        t36 = 0x0;
        t37 = (0x0 + t34);
        for (;;) {
            courtPropPickPose(t37);
            t36 = (t36 + 0x1);
            t37 = (t37 + 0x14);
            if ((int)t36 >= (int)t32) {
                break;
            }
        }
    }
}

int evPackFade(int a4, int a5, int a6)
{
    int t0;
    int t10;
    int t1;
    int t6;
    int t7;

    t0 = *(int *)(((a4 << 2) + 0x8C40C288));
    t10 = t0;
    if (t0 != 1) {
        t1 = set_event(0x28, 0x8C0D9562);
        *(unsigned int *)(((a4 << 2) + 0x8C40C288)) = 0x1;
        *(unsigned int *)((t1 + 0x14)) = a4;
        *(unsigned int *)((t1 + 0x18)) = (int)((float)a5 / (*(float *)0x8C23D204));
        *(unsigned int *)((t1 + 0x20)) = (int)((float)a5 / (*(float *)0x8C23D204));
        *(unsigned int *)((t1 + 0x1C)) = a6;
        *(unsigned int *)((t1 + 0x24)) = (nlsndGetPackInfo((*(int *)((t1 + 0x14))), 0x10A0));
        t6 = *(int *)((0x8C40C2A8 + (a4 << 2)));
        t7 = t6;
        if (t6 == 1) {
            *(unsigned int *)((0x8C40C2A8 + (a4 << 2))) = 0x2;
            t7 = (a4 << 2);
        }
        t10 = t7;
    }
    return t10;
}


float nlSin(int a4)
{
    float x;
    float u4;
    float u7;
    float s;
    int q;
    int k;
    int t5;

    x = ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / 2.0f);
    q = (int)((x / 1.57079637f) + 0.5f);
    x = (x - ((float)q * 1.57079637f));
    u4 = 0.0f;
    k = 0xB;
    for (;;) {
        t5 = k;
        k = (k - 2);
        u4 = ((x * x) / ((float)t5 - u4));
        if ((int)k < (int)0x3) {
            break;
        }
    }
    u7 = (x / (1.0f - u4));
    s = ((u7 * 2.0f) / (1.0f + u7 * u7));
    if ((q & 0x1) == 0) {
        return s;
    }
    return -s;
}






float iconSlotPutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u2;
    float u10;
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    *(float *)(((((int)stk + 16) + 0xC) + 0x8)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x8))) + 0.00100000005f);
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 93.0f);
    u2 = *(float *)(((((int)stk + 16) + 0xC) + 0x4));
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = (u2 + 120.0f);
    if (((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) && (((int)a4 >= 0) && ((int)a4 <= (int)0x12))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        sprPutAtAlpha((((((a4 << 2) + a4) << 2) << 2) + 0x8C37C2BC), *(Stk3 *)((((int)stk + 16) + 0xC)), f4);
    } else {
        u10 = (u2 + 120.0f);
    }
    return u10;
}


