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


