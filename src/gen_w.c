/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_EndDecode(int);
int ADXB_EvokeDecode(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int resetBackColorZ(int, int, int, float);
int copySmallVQToTextureRom(int, int, int, int);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int courtPropPickPose(int);
int fileLoadClose(void);
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
float iconSlotPutC(int a4, int a5, int a6, int a7, Stk3 p, float f4);
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


int motionRootRaw(int a4)
{
    int t0;
    int t3;
    int t4;
    float u7;
    int t8;
    int t14;

    t0 = *(int *)0x8C2871D4;
    t3 = *(int *)((t0 + 0x54));
    t4 = *(int *)(((*(int *)((t0 + 0x20))) + 0x4));
    u7 = *(float *)(((*(int *)0x8C2871D4) + 0xC));
    t8 = *(int *)(((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x10));
    t14 = *(int *)0x8C2871D4;
    return nlTranslate(((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x0))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x14) + 0x0)))), ((float)(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x2))) / (*(float *)((((*(int *)((t14 + 0x20))) + 0x18) + 0x0)))), ((float)(-(*(short *)((((t3 + t4) + (((((int)u7 * t8) + a4) << 1) + ((((int)u7 * t8) + a4) << 2))) + 0x4)))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x1C) + 0x0)))));
}


int fileLoadStartAfs(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t11;

    if ((*(int *)0x8C34A1F8) != 0) {
        fileLoadClose();
    }
    *(unsigned int *)0x8C34A1EC = 0x1;
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
    *(unsigned int *)0x8C34A1EC = 0x0;
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


float iconSlotPutC(int a4, int a5, int a6, int a7, Stk3 p, float f4)
{
    float u2;
    float u10;
    int stk[19];

    stk[7] = p.w[0];
    stk[8] = p.w[1];
    stk[9] = p.w[2];
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

