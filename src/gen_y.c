/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXERR_CallErrFunc(int, ...);
int ADXF_Close(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Seek(int, int);
int VQalloc(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int charaModelCount(int);
int charaTexFreeAll(void);
int colliObjInit(int, float);
int convert_support(int);
int fadeCaptureBegin(float);
int fadeCaptureEnd(int);
int gdFsOpen(int, int, int, int);
int kdDevGetControllerInfo(int, int);
extern int kdGetDriverMode();
int kmSetFogVertexColor(int, int, int, int, int);
int kmyiCheckNativeHandle(int);
int kmytex_GetSmallVQprofile(int, int);
int mathLineY(float, float, float, float, float);
int mtxGetPos(int, int, int);
int mwRnaErrCallFunc(int, ...);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
float nlExp(float);
int nlGetMatrix(int);
int nlLineClipPoint(int, int, int);
int nlLoadMatrix(int);
int nlObjPutFreeTextureOnce(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetCommonTextureOffset(int);
float nlSinfReduce(int, float);
int nlSingleLine(int, int, int, Stk3);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int panelBodyPut(Stk3, float);
int panelPartAPut(Stk3, float);
int panelPartBPut(Stk3, float);
int panelPartCPut(Stk3, float);
int panelTopPut(Stk3, float);
int panelWordPut(int, Stk3);
int primSprDraw(int, int, int, int, Stk3);
int resSpRead(int);
int set_event(int, int);
int sprMatchFree(void);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropH(int, int, int, Stk3, float, float);
int sprPutScaledAlpha(int, int, int, int, Stk3, float, float);
int sprSet266Free(int, ...);
int sprWtcFree(void);
int stageLoadInit(int);
int stageTexFree(void);
int stageTexSetGarbagedAll(void);
int stageWtcMainTexFree(void);
int strncpy(int, int, int);
int syCachePurgeAll(int, int, int, int);
float vecDist(Stk3);
int vecMake(float, float, float, ...);
int logoSmallPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int evPackRamp(int a4, int a5, int a6, int a7);
int nlCommonTextureGetNextTextureIndex(int a4, int a5, int a6);
int nlsndSeqRequest(int a4);
int kmyAllocateSmallVQArea(int a4, int a5, int a6);
int shadowBallScale(float f4);
int panelDrawA(Stk4 s, float f4);
int panelDrawB(Stk4 s, float f4);
int panelDrawC(Stk4 s, float f4);
int rankEntryMain(float f4);
int resSpTexLoad(int a4);
float nlSinh(int a4);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int countryStagePut(Stk4 s, float f4);
int charaTexFree(int a4);
int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
float nlTanfReduce(int a4, float f4);
void syCacheInit_P2_(int a4, int a5, int a6, int a7);
float cpuLineCrossXZ(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, float f4, float f5);
void effHitFlashSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float courtDistScale(Stk4 s);
void _rsfts(int a4, int a5, int a6);
int fileLoadCloseSlot(int a4);
void nlSinf(float f4);
int _pd_peripheral_set_id(int a4, int a5, int a6, int a7);
int miniBallObjSpawn(void);
void hudNearAlpha(int a4);
int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int stageMinigameLoadBegin(int a4);
void syChainMasterHandlerPVR_V(void);
int mwRnaSetOutVol(int a4, int a5);
int kmySetFlickerFilterMode(int a4, int a5);
void worldToScreen(Stk4 s);
int hudCounterStep(int a4, int a5, int a6, int a7, int a8);
void nlTanf(float f4);
void camWorldToView(Stk4 s);
int decoGaugeDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int sklBindMatrices(int a4);
int nlLineClipNear(int a4, int a5);
float evDist2d(Stk4 s);
int cpuDebugBallLine(void);
int hudWordFlagDraw(void);
int nlFogVertexColor(int a4);
int panelMenuSprPutA(Stk4 s, float f4);

int logoSmallPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t3;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    t0 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C3398C0, a5, a6, a7, *(Stk3 *)((((int)stk + 40) + 0xC)));
    *(float *)(((((int)stk + 40) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x0))) + (*(float *)0x8C091CA0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    t3 = ((int (*)(int, Stk3))(sprPutAt))(0x8C339960, *(Stk3 *)((((int)stk + 40) + 0xC)));
    *(float *)(((((int)stk + 40) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x0))) + (*(float *)0x8C091CA4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (((int (*)(int, Stk3))(sprPutAt))(0x8C339910, *(Stk3 *)((((int)stk + 40) + 0xC))));
}

int evPackRamp(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t4;

    *(unsigned int *)(((a4 << 2) + 0x8C40C2A8)) = 0x1;
    t0 = set_event(0x28, 0x8C0D96F6);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x20)) = (int)((float)a5 / (*(float *)0x8C23D204));
    *(unsigned int *)((t0 + 0x24)) = (int)((float)a5 / (*(float *)0x8C23D204));
    *(unsigned int *)((t0 + 0x18)) = a6;
    *(unsigned int *)((t0 + 0x1C)) = a7;
    t3 = *(int *)((0x8C40C288 + (a4 << 2)));
    t4 = t3;
    if (t3 == 1) {
        *(unsigned int *)((0x8C40C288 + (a4 << 2))) = 0x2;
        t4 = (a4 << 2);
    }
    return t4;
}



int kmyAllocateSmallVQArea(int a4, int a5, int a6)
{
    int t3;
    int t5;
    int t9;
    int t11;
    int t17;
    int t18;
    int stk[14];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a6;
    kmytex_GetSmallVQprofile((((int)stk + 24) + 0x8), a5);
    if (((*(int *)(((int)stk + 28))) & 1) != 0) {
        t3 = *(int *)(((((int)stk + 24) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = t3;
        t5 = *(int *)(((((int)stk + 24) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 16)) = t5;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x10)));
        t17 = 0x1;
        t18 = (*(int *)(((int)stk + 24)));
    } else {
        t9 = *(int *)(((((int)stk + 24) + 0x8) + 0x4));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x0)));
        *(unsigned int *)(((int)stk + 8)) = t9;
        t11 = *(int *)(((((int)stk + 24) + 0x8) + 0xC));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x8)));
        *(unsigned int *)(((int)stk + 16)) = t11;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x10)));
        t17 = 0x0;
        t18 = (*(int *)(((int)stk + 24)));
    }
    return (VQalloc(t17, t18));
}

int shadowBallScale(float f4)
{
    float u5;
    float u9;
    float u10;
    float u14;
    float u15;
    float u16;
    float u17;

    if (((*(int *)0x8C291F78) & 2) != 0) {
        *(volatile float *)0x8C08B5B8;
        return 0x8C08B5B8;
    }
    u5 = *(float *)0x8C08B5BC;
    if (f4 > u5) {
        *(volatile float *)0x8C08B5C0;
        return 0x8C08B5C0;
    }
    u9 = *(float *)0x8C08B5C4;
    u10 = *(float *)0x8C08B5C8;
    if (f4 > u10) {
        u14 = u10;
        u15 = u9;
        u16 = u5;
        u17 = (*(float *)0x8C08B5C0);
    } else {
        u14 = 0.0f;
        u15 = (*(float *)0x8C08B5CC);
        u16 = u10;
        u17 = u9;
    }
    return mathLineY(u14, u15, u16, u17, f4);
}

int panelDrawA(Stk4 s, float f4)
{
    int stk[25];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    stk[16] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartAPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4));
}

int panelDrawB(Stk4 s, float f4)
{
    int stk[25];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    stk[16] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartBPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4));
}

int panelDrawC(Stk4 s, float f4)
{
    int stk[25];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    stk[16] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartCPut(*(Stk3 *)((((int)stk + 40) + 0xC)), f4));
}

int rankEntryMain(float f4)
{
    int t1;
    int t9;
    int t12;
    int t21;
    int t14;
    int t16;
    int t15;
    int t3;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C126BCC));
    if (((*(int *)0x8C1D793C) == 1) && (t3 = *(int *)0x8C1D7940, t3 == 0)) {
        fadeCaptureBegin(f4);
        *(unsigned int *)0x8C1D7940 = 0x1;
    }
    t9 = ((int (*)(void))(t1))();
    nlExecuteEvent();
    nlExecuteEvent2();
    t12 = *(int *)0x8C1D793C;
    t21 = t12;
    if (t12 == 1) {
        t14 = *(int *)0x8C1D7940;
        t16 = t14;
        if (t14 == 1) {
            t15 = fadeCaptureEnd(0x0);
            *(unsigned int *)0x8C1D7940 = 0x2;
            t16 = t15;
        }
        t21 = t16;
    }
    return t21;
}

int resSpTexLoad(int a4)
{
    int t0;
    int t16;
    int t4;
    int t5;
    int t6;

    t0 = resSpRead(a4);
    t16 = t0;
    if (t0 == 1) {
        if ((*(int *)(((a4 << 2) + 0x8C1DC64C))) == 0) {
            nlSetCommonTextureOffset(0x0);
            t4 = 0x0;
            t5 = (((a4 << 2) << 1) + 0x8C1DC67C);
            for (;;) {
                t6 = *(int *)((t5 + 0x0));
                t5 = (t5 + 0x4);
                nlSpriteLoadTextureOnce(0x8C18281C, 0x0, t6);
                t4 = (t4 + 0x1);
                if ((unsigned int)t4 >= (unsigned int)0x2) {
                    break;
                }
            }
        }
        *(unsigned int *)(((a4 << 2) + 0x8C1DC64C)) = 0x1;
        t16 = 0x8C1DC64C;
    }
    return t16;
}

float nlSinh(int a4)
{
    float u0;
    float u1;
    float t3;

    u0 = *(float *)0x8C0ED64C;
    u1 = *(float *)0x8C0ED650;
    if (_builtin_fabsf((((float)(unsigned short)a4 * u0) / u1)) > (*(float *)0x8C0ED654)) {
        t3 = nlExp((((float)(unsigned short)a4 * u0) / u1));
        return ((t3 - (1.0f / t3)) / (1.0f + 1.0f));
    }
    return (((((((((float)(unsigned short)a4 * u0) / u1)) * ((((float)(unsigned short)a4 * u0) / u1))) / (*(float *)0x8C0ED658)) + 1.0f)) * ((((float)(unsigned short)a4 * u0) / u1)));
}

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t7;

    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0x8C20AAA8, a4);
        t7 = 0x0;
    } else {
        t2 = ADXSTMF_Create(t0, a5, (((a6 << 8) << 2) << 1), a7);
        if (t2 != 0) {
            strncpy((t2 + 0x40), a4, 0x20);
            ADXSTM_Seek(t2, 0x0);
        }
        t7 = t2;
    }
    return t7;
}

int countryStagePut(Stk4 s, float f4)
{
    int t3;
    int stk[22];

    stk[10] = s.w[0];
    stk[11] = s.w[1];
    stk[12] = s.w[2];
    stk[13] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    sprPutAtAlpha(0x8C33A1D0, *(Stk3 *)((((int)stk + 28) + 0xC)), f4);
    *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 121.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    t3 = *(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C10EE5C));
    return (sprPutAtAlpha((((((t3 << 2) + t3) << 2) << 2) + 0x8C339CD0), *(Stk3 *)((((int)stk + 28) + 0xC)), f4));
}

int charaTexFree(int a4)
{
    int t3;
    int t4;

    if (((*(int *)(((a4 << 2) + 0x8C1AFA64))) != 0) && ((int)a4 >= 0)) {
        *(unsigned int *)0x8C37DAA8 = a4;
        nlSetCommonTextureOffset((*(int *)(((a4 << 2) + 0x8C1B05DC))));
        t3 = 0x0;
        for (;;) {
            t4 = charaModelCount(a4);
            if ((int)t3 >= (int)t4) {
                break;
            }
            nlObjPutFreeTextureOnce((*(int *)(((*(int *)(((0x8C1B054C + (a4 << 2)) + 0x0))) + (t3 << 2)))));
            t3 = (t3 + 0x1);
        }
        *(unsigned int *)(((a4 << 2) + 0x8C1AFA64)) = 0x0;
    }
    return 0x8C1AFA64;
}


float nlTanfReduce(int a4, float f4)
{
    float u3;
    float x;
    float r;
    float u;
    int q;
    int k;
    int t10;

    if (!(0.0f > f4)) {
        u3 = *(float *)0x8C0ED65C;
    } else {
        u3 = *(float *)0x8C0ED660;
    }
    q = (int)(u3 + (f4 / *(float *)0x8C0ED664));
    *(unsigned int *)((a4 + 0x0)) = q;
    x = (f4 - ((float)q * *(float *)0x8C0ED668));
    x = x + *(float *)0x8C0ED66C * (float)q;
    r = (x * x);
    u = 0.0f;
    k = 0xB;
    for (;;) {
        t10 = k;
        k = (k - 2);
        u = (r / ((float)t10 - u));
        if ((int)k < (int)0x3) {
            break;
        }
    }
    return (x / (1.0f - u));
}

void syCacheInit_P2_(int a4, int a5, int a6, int a7)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    syCachePurgeAll(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = (*(int *)(((int)stk + 4)));
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFF7FF) | 0x800);
    *(unsigned int *)0xFF00001C = (((*(int *)0xFF00001C) & 0xFFFFFFF7) | 0x8);
    _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
}

float cpuLineCrossXZ(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u6;
    float u7;
    float u8;
    int stk[18];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    stk[5] = a12;
    stk[6] = a13;
    stk[7] = a14;
    stk[8] = a15;
    stk[9] = a16;
    *(float *)((a4 + 0x4)) = 0.0f;
    u0 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
    u2 = *(float *)((((int)stk + 4) + 0x0));
    u3 = *(float *)((((int)stk + 4) + 0x8));
    u4 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
    if ((u0 / u1) == 0.0f) {
        *(float *)((a4 + 0x0)) = u4;
        *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x8)));
    } else {
        u6 = *(float *)(((((int)stk + 4) + 0x18) + 0x8));
        u7 = (u4 - (((-1.0f) / (u0 / u1)) * u6));
        u7 = u7 + (((u4 - (((-1.0f) / (u0 / u1)) * u6)) - (u2 - ((u0 / u1) * u3))) / ((u0 / u1) - ((-1.0f) / (u0 / u1)))) * ((-1.0f) / (u0 / u1));
        *(float *)((a4 + 0x8)) = (((u4 - (((-1.0f) / (u0 / u1)) * u6)) - (u2 - ((u0 / u1) * u3))) / ((u0 / u1) - ((-1.0f) / (u0 / u1))));
        *(float *)((a4 + 0x0)) = u7;
        u8 = (((u4 - (((-1.0f) / (u0 / u1)) * u6)) - (u2 - ((u0 / u1) * u3))) / ((u0 / u1) - ((-1.0f) / (u0 / u1))));
    }
    return u8;
}

void effHitFlashSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t2;
    int t1;
    int stk[15];

    stk[3] = a8;
    stk[4] = a9;
    stk[5] = a10;
    stk[6] = a11;
    *(float *)(((int)stk + 4)) = f4;
    if (((*(int *)0x8C287C60) == 0) && (t1 = *(int *)0x8C421F60, t1 == 0)) {
        t2 = set_event(0x2C, 0x8C082DCA);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
        *(float *)((t2 + 0x20)) = 1.0f;
        *(unsigned int *)((t2 + 0x24)) = 0x0;
        *(float *)((t2 + 0x28)) = ((*(float *)(((int)stk + 4))) / 1.5f);
        *(unsigned int *)0x8C18160C = ((*(int *)0x8C18160C) + 0x1);
    }
}

float courtDistScale(Stk4 s)
{
    float t0;
    float u5;
    float u11;
    float u8;
    int stk[20];

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    stk[11] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
    t0 = vecDist(*(Stk3 *)((((int)stk + 16) + 0x10)));
    if (t0 > (*(float *)0x8C0B6938)) {
        return (*(float *)0x8C0B693C);
    }
    u5 = *(float *)0x8C0B6940;
    u11 = u5;
    if (!((*(float *)0x8C0B6944) > t0)) {
        u8 = u5;
        u8 = u8 + (*(float *)0x8C0B6948) * t0;
        u11 = u8;
    }
    return u11;
}

void _rsfts(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;

    if ((short)(0x8 - a6) != 0) {
        if ((int)a5 > 0) {
            t0 = a4;
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t3 = *(signed char *)((t0 + 0x0));
                t4 = *(signed char *)((t0 + 0x0));
                t2 = (t2 + 0x1);
                *(unsigned char *)((t0 + 0x0)) = (((int)(-(short)a6) >= 0) ? ((unsigned char)t3 << ((-(short)a6) & 31)) : ((-(int)(-(short)a6) & 31) ? ((unsigned int)(unsigned char)t3 >> (-(int)(-(short)a6) & 31)) : 0));
                t6 = ((*(signed char *)((t0 + 0x0))) | t1);
                t1 = (unsigned char)(t4 & (((int)(-(short)(0x8 - a6)) >= 0) ? (0xFF << ((-(short)(0x8 - a6)) & 31)) : ((-(int)(-(short)(0x8 - a6)) & 31) ? ((int)0xFF >> (-(int)(-(short)(0x8 - a6)) & 31)) : ((int)0xFF >> 31))));
                *(unsigned char *)((t0 + 0x0)) = t6;
                t1 = (((int)(short)(0x8 - a6) >= 0) ? (t1 << ((short)(0x8 - a6) & 31)) : ((-(int)(short)(0x8 - a6) & 31) ? ((unsigned int)t1 >> (-(int)(short)(0x8 - a6) & 31)) : 0));
                t0 = (t0 + 0x1);
                if ((int)t2 >= (int)a5) {
                    break;
                }
            }
        }
    }
}

int fileLoadCloseSlot(int a4)
{
    int t1;
    int t2;
    int t4;
    int t5;

    *(unsigned int *)((((a4 * 0x4C) + 0x8C34A238) + 0x0)) = 0x0;
    if ((*(int *)((((a4 * 0x4C) + 0x8C34A238) + 0xC))) != 0) {
        t1 = (((a4 * 0x4C) + 0x8C34A238) + 0x18);
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned char *)((t1 + 0x0)) = 0x0;
            t1 = (t1 + 0x1);
            if ((int)t2 >= (int)0x32) {
                break;
            }
        }
        t4 = ADXF_Close((*(int *)((((a4 * 0x4C) + 0x8C34A238) + 0xC))));
        *(unsigned int *)((((a4 * 0x4C) + 0x8C34A238) + 0x4)) = 0x1;
        *(unsigned int *)((((a4 * 0x4C) + 0x8C34A238) + 0x8)) = 0x0;
        *(unsigned int *)((((a4 * 0x4C) + 0x8C34A238) + 0xC)) = 0x0;
        t5 = t4;
    }
    return t5;
}


int _pd_peripheral_set_id(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t4;
    int t15;
    int t17;
    int t23;
    int t10;
    int t6;
    int t19;
    int stk[5];

    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        t1 = kdDevGetControllerInfo(((int)stk + 4), a5);
        if ((int)t1 < 0) {
            *(unsigned int *)((a4 + 0x4)) = 0x0;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            t10 = t1;
        } else {
            t2 = ((int (*)(int))(kdGetDriverMode))(0x5);
            if (t2 == 1) {
                t4 = convert_support((*(int *)(((int)stk + 4))));
                *(unsigned int *)((a4 + 0x4)) = t4;
                t6 = t4;
            } else {
                *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 4)));
                t6 = t2;
            }
            *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
            *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
            t10 = t6;
        }
        t23 = t10;
    } else {
        t15 = ((int (*)(int, int, int, int))(kdGetDriverMode))(0x5, a5, a6, a7);
        if (t15 == 1) {
            t17 = convert_support((*(int *)(((int)stk + 4))));
            *(unsigned int *)((a4 + 0x4)) = t17;
            t19 = t17;
        } else {
            *(unsigned int *)((a4 + 0x4)) = (*(int *)(((int)stk + 4)));
            t19 = t15;
        }
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a4 + 0x24)) = (a5 + 0x14);
        t23 = t19;
    }
    return t23;
}

int miniBallObjSpawn(void)
{
    int t0;
    int t1;
    int t3;
    int t6;
    int t4;

    t0 = set_event(0x11C, 0x8C038B24);
    t1 = 0x8C291F24;
    t3 = (t0 + 0x14);
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)((0x8C291F24 + 140)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
    *(unsigned int *)((t0 + 0x118)) = 0x0;
    colliObjInit((t0 + 0x20), (1.0f + 1.0f));
    *(unsigned int *)((t0 + 0xD0)) = 0x1;
    t6 = *(int *)((t0 + 0xD8));
    *(unsigned int *)(((0xD8 + t0) + 0x0)) = (t6 | 0x4);
    return (t6 | 0x4);
}

void hudNearAlpha(int a4)
{
    if ((int)a4 > (int)0xDC) {
    } else {
        if ((int)a4 < (int)0xB4) {
            *(volatile float *)0x8C08E4FC;
        } else {
            *(volatile float *)0x8C08E500;
            *(volatile float *)0x8C08E504;
            *(volatile float *)0x8C08E508;
        }
    }
    if ((*(int *)0x8C287B44) == 0) {
        if ((*(int *)0x8C295DAC) == 1) {
            *(volatile float *)0x8C08E514;
            return;
        }
        return;
    }
}


int stageMinigameLoadBegin(int a4)
{
    stageLoadInit(0x0);
    *(unsigned int *)0x8C287C50 = 0x3E8;
    *(unsigned int *)0x8C344014 = a4;
    stageWtcMainTexFree();
    stageTexFree();
    charaTexFreeAll();
    sprWtcFree();
    if ((*(int *)0x8C344014) == 3) {
        sprMatchFree();
    } else {
        sprSet266Free(a4);
    }
    return stageTexSetGarbagedAll();
}

void syChainMasterHandlerPVR_V(void)
{
    int t2;
    int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0x8C461A58);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))));
        t2 = (*(int *)((t2 + 0x4)));
    }
}


int kmySetFlickerFilterMode(int a4, int a5)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x24)) = ((*(int *)((t1 + 0x24))) & 0xFFF9FFFF);
    *(unsigned int *)((t1 + 0x24)) = ((*(int *)((t1 + 0x24))) | 0x20000);
    if (a5 != 0) {
        *(unsigned int *)((t1 + 0x24)) = ((*(int *)((t1 + 0x24))) | 0x40000);
    }
    return 0x0;
}

void worldToScreen(Stk4 s)
{
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((((int)stk + 4) + 0xC) + 0x0))), (*(float *)(((((int)stk + 4) + 0xC) + 0x4))), (*(float *)(((((int)stk + 4) + 0xC) + 0x8))));
    mtxGetPos((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
}

int hudCounterStep(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t10;
    int t0;
    int t7;

    if (a4 == 0) {
        *(unsigned int *)(((a5 << 2) + 0x8C38BA28)) = 0x0;
        *(unsigned int *)((a8 + 0x0)) = 0x0;
        t0 = 0x8C38BA28;
    }
    t4 = *(int *)0x8C20D198;
    t10 = t0;
    if ((int)t4 > (int)(*(int *)((((a5 << 2) + 0x8C38BA28) + 0x0)))) {
        if ((*(int *)((a8 + 0x0))) != 0) {
            *(unsigned int *)((((a5 << 2) + 0x8C38BA28) + 0x0)) = (t4 + a7);
            *(unsigned int *)((a8 + 0x0)) = 0x0;
            t7 = t0;
        } else {
            *(unsigned int *)((((a5 << 2) + 0x8C38BA28) + 0x0)) = (t4 + a6);
            *(unsigned int *)((a8 + 0x0)) = 0x1;
            t7 = 0x1;
        }
        t10 = t7;
    }
    return t10;
}


void camWorldToView(Stk4 s)
{
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((((int)stk + 4) + 0xC) + 0x0))), (*(float *)(((((int)stk + 4) + 0xC) + 0x4))), (*(float *)(((((int)stk + 4) + 0xC) + 0x8))));
    mtxGetPos((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
}

int decoGaugeDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t2;
    int stk[18];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    stk[9] = a11;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t2 = *(int *)(((int)stk + 16));
    return (sprPutCropH((((((t2 << 2) + t2) << 2) << 2) + 0x8C3422A8), (*(int *)0x8C301BFC), 0x40, *(Stk3 *)((((int)stk + 16) + 0x8)), f4, ((float)(*(int *)0x8C301C00) / (*(float *)0x8C0A6668))));
}

int sklBindMatrices(int a4)
{
    int t0;
    int t13;

    t0 = a4;
    for (;;) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((t0 + 0x8))), (*(float *)((t0 + 0xC))), (*(float *)((t0 + 0x10))));
        nlGetMatrix((0xC0 + t0));
        if ((*(int *)((t0 + 0x2C))) != 0) {
            sklBindMatrices((*(int *)((t0 + 0x2C))));
        }
        t13 = nlPopMatrix(0x1);
        if ((*(int *)((t0 + 0x30))) != 0) {
            t0 = (*(int *)((t0 + 0x30)));
            continue;
        }
        break;
    }
    return t13;
}


float evDist2d(Stk4 s)
{
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    *(float *)((((int)stk + 4) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x8) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x10) + 0x0))));
    u2 = *(float *)(((((int)stk + 4) + 0x8) + 0x4));
    u3 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = (u2 - u3);
    u4 = *(float *)((((int)stk + 4) + 0x0));
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + u4 * u4;
    if (!(0.0f > _builtin_sqrtf(u5))) {
        return _builtin_sqrtf(u5);
    }
    return (-_builtin_sqrtf(u5));
}


int hudWordFlagDraw(void)
{
    int t0;
    int t6;
    int stk[9];

    t0 = *(int *)0x8C287B3C;
    t6 = t0;
    if ((t0 & 1) != 0) {
        vecMake((*(float *)0x8C0963C4), (*(float *)0x8C0963C0), (*(float *)0x8C0963BC), ((int)stk + 20));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        t6 = (panelWordPut(0x3, *(Stk3 *)((((int)stk + 16) + 0x4))));
    }
    return t6;
}

int nlFogVertexColor(int a4)
{
    int stk[5];

    *(unsigned char *)((((int)stk + 8) + 0x3)) = (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x2)) = (short)((unsigned int)a4 >> 16);
    *(unsigned char *)((((int)stk + 8) + 0x1)) = ((int)a4 >> 8);
    *(unsigned char *)((((int)stk + 8) + 0x0)) = a4;
    return (kmSetFogVertexColor(a4, (short)((unsigned int)a4 >> 16), ((int)a4 >> 8), (signed char)((unsigned int)((unsigned int)a4 >> 16) >> 8), ((*(int *)((((int)stk + 8) + 0x0))))));
}

int panelMenuSprPutA(Stk4 s, float f4)
{
    float u2;
    int stk[18];

    stk[6] = s.w[0];
    stk[7] = s.w[1];
    stk[8] = s.w[2];
    stk[9] = s.w[3];
    u2 = (*(float *)0x8C09C1E8);
    u2 = u2 + (*(float *)0x8C09C1EC) * f4;
    *(unsigned int *)(((int)stk + 16)) = (int)u2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    return (primSprDraw(0x8C3403F0, 0x10, 0x10, (((unsigned char)(*(int *)(((int)stk + 16))) << 8) | 0xFFFF0000), *(Stk3 *)((((int)stk + 16) + 0x8))));
}
