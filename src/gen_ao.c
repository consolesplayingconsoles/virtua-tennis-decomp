typedef struct { int w[3]; } Stk3;
/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int copySmallVQToTextureRom(int, int, int, int);
extern void _builtin_ld_ext(float (*)[4]);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int cacheOcbiRange(int, int);
int commonSprInitAll(void);
int fileLoadSync(int, int, int);
int kmFreeTexture(int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTextureRom(int, int, int, int);
int kmyReleaseRenderPacket(int);
int kmyiCheckNativeHandle(int);
int kmyiCheckTAHandle(int);
int logoSmallPut(int, int, int, int, int, int, int, int, int, int, int, int);
int modeMarkPut(int, int, int, int, int, int, int, int, float);
int motionBackup(int);
int motionSwitch(int, int, int, int, float);
int mwRnaErrCallFunc(int, ...);
int nlArcTan(float);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
float nlCos(int);
int nlDispStrip(int, int);
int nlDispStripTrnsl(int, int);
int nlLdexpf(int, float);
int nlLineClipPoint(int, int, int);
int nlLineSetDiv(float);
int nlRotateAX(int);
extern int nlRotateAY();
extern int nlRotateAZ();
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
float nlSinfReduce(int, float);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndPackFree(int);
int nlsndPackFreeInit(int, int, int);
int nlsndPackLoad(int, int);
int prefetch(int);
int resCautionRead(int);
int sndStopAll(void);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprListPut(int, int, int, float, float, float);
int strmControl(int, int);
extern int thunk_nlSprPut();
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_read_retry(int, int, int);
int winPartsPut(int, int, int, int, Stk3, int, float, float);
int vmsfs_read_disk_image(int a4, int a5);
int evFadeValueTask(int a4);
int kmLoadTextureRom(int a4, int a5);
int kmytex_FBAllocEntry(void);
int stripQuadDrawA(float f4, float f5, float f6, float f7);
int stripQuadDrawB(float f4, float f5, float f6, float f7);
void unlockApplyW1(void);
void nlChgModelPolyAttrOn(int a4);
void colliObjInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmtex_TextureSize_Twiddled(int a4);
int kmtex_ConfirmSmallVQ(int a4);
int kmtex_TextureSize_VQ(int a4);
int hudCallSprInit3(void);
int decoSprInit(void);
int nlCommonTextureGetNextTextureIndex(void);
int resCautionShow(int a4);
int nlsndStreamChgFx(int a4, int a5, int a6);
int motionRotateRaw(int a4, float f4, float f5);
int nlFreeTextureAll(void);
int nlsndCheckPackReloadError(int a4, int a5);
int nlLineSendVertex(int a4, int a5, int a6);
int bgScreenDraw(int, int, int, int);
int winDrawFilled(int a4, int a5, int a6, int a7, float f4, float f5);
int nlExp(float f4);
float shadowLightMatrixAng(int a4, int a5, float f4, float f5);
int btnGuideInitB(void);
void nlSetPaletteMap(int a4, int a5);
int nlsndSeqRequest(int a4);
int search_dir_by_startfat(int a4, int a5);
int menuIconInitA(void);
int menuIconInitB(void);
int hudCallSprInit(void);
int kmSetColorClampValue(Stk4 s);
int phraseWordsInitB(void);
int hudCallSprInit2(void);
int modeMarkSprInit(void);
int logoSmallInit(void);
int panelMenuSprInitC(void);
void nlLoadMatrix(int a4);
int nlsndCheckPackFreeError(int a4);
int logoWaveInit(void);
int nlSysSetDirectListTypeLatency2V(int a4);
int nlsndPackFreeBG(int a4);
int btnGuideInitA(void);
float nlSinf(float f4);
int mwRnaSetOutVol(int a4, int a5);
int kmyDeleteNativeBuffer(int a4, int a5);
int nlArcSin(float f4);
int VQDeQueueEntry(int a4, int a5);
int sndPack2LoadSync(void);
void titleSprTexLoad(void);
int screenQuadPut(int a4, float f4);
int nlsndStreamSetHdChs(int a4, int a5);
void perfMark(void);
int titleSprBlinkPut(int a4, int a5, int a6, int a7, float f4);
void sys_init(void);
int mtxGetPos(int a4, int a5, int a6, int a7);
int netJudgeReact(void);
int nlLineClipNear(int a4, int a5);


int evFadeValueTask(int a4)
{
    int t5;
    int t6;
    float u11;

    if ((int)(*(int *)((a4 + 0x14))) > (int)0x28) {
        t6 = 0x8C0DA780;
        u11 = ((-((float)((*(int *)((a4 + 0x14))) - (*(int *)((a4 + 0x18)))) / 3.0f)) + 1.0f);
    } else {
        t5 = (int)((int)(*(int *)((a4 + 0x14))) / (int)(*(int *)((a4 + 0x18))));
        t6 = t5;
        u11 = (float)t5;
    }
    *(float *)0x8C40C2EC = u11;
    if ((int)(*(int *)((a4 + 0x14))) < 0) {
        *(float *)0x8C40C2EC = (-1.0f);
        return nlCloseEvent(a4);
    }
    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    return t6;
}


int stripQuadDrawA(float f4, float f5, float f6, float f7)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    float u13;
    int t14;
    int t3;
    int t7;
    int stk[52];

    t0 = 0x8C10D1D8;
    t2 = (((int)stk + 4) + 0x60);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10D1D8 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C10D238;
    t6 = ((int)stk + 4);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C10D238 + 96)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x0;
    for (;;) {
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0))) * f6);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4))) * f7);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0))) + f4);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4))) + f5);
        u13 = *(float *)(((t8 + ((int)stk + 4)) + 0x0));
        t14 = (t8 + ((int)stk + 4));
        t8 = (t8 + 0x10);
        *(float *)((t14 + 0x0)) = (u13 * f6);
        *(float *)((t14 + 0x4)) = ((*(float *)((t14 + 0x4))) * f7);
        *(float *)((t14 + 0x0)) = ((*(float *)((t14 + 0x0))) + f4);
        *(float *)((t14 + 0x4)) = ((*(float *)((t14 + 0x4))) + f5);
        if ((unsigned int)t8 >= (unsigned int)0x60) {
            break;
        }
    }
    nlDispStripTrnsl(0x6, (((int)stk + 4) + 0x60));
    return (nlDispStripTrnsl(0x6, ((int)stk + 4)));
}

int stripQuadDrawB(float f4, float f5, float f6, float f7)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    float u13;
    int t14;
    int t3;
    int t7;
    int stk[52];

    t0 = 0x8C10D298;
    t2 = (((int)stk + 4) + 0x60);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10D298 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C10D2F8;
    t6 = ((int)stk + 4);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C10D2F8 + 96)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x0;
    for (;;) {
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0))) * f6);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4))) * f7);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x0))) + f4);
        *(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4)) = ((*(float *)(((t8 + (((int)stk + 4) + 0x60)) + 0x4))) + f5);
        u13 = *(float *)(((t8 + ((int)stk + 4)) + 0x0));
        t14 = (t8 + ((int)stk + 4));
        t8 = (t8 + 0x10);
        *(float *)((t14 + 0x0)) = (u13 * f6);
        *(float *)((t14 + 0x4)) = ((*(float *)((t14 + 0x4))) * f7);
        *(float *)((t14 + 0x0)) = ((*(float *)((t14 + 0x0))) + f4);
        *(float *)((t14 + 0x4)) = ((*(float *)((t14 + 0x4))) + f5);
        if ((unsigned int)t8 >= (unsigned int)0x60) {
            break;
        }
    }
    nlDispStripTrnsl(0x6, (((int)stk + 4) + 0x60));
    return (nlDispStripTrnsl(0x6, ((int)stk + 4)));
}

void unlockApplyW1(void)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t3;
    int stk[28];

    t0 = 0x8C12729C;
    t2 = (((int)stk + 4) + 0x4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C12729C + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)(((int)stk + 4)) = 0x8C185378;
    t4 = (((int)stk + 4) + 0x4);
    t5 = 0x8C12729C;
    t6 = 0x8C185330;
    t7 = 0x0;
    t8 = 0x8C185330;
    for (;;) {
        t9 = t6;
        t10 = t8;
        t11 = t7;
        t12 = 0x0;
        for (;;) {
            if ((*(int *)((t9 + 0x0))) == 0) {
                t5 = (*(int *)(((((int)stk + 4) + 0x4) + (t11 << 2))));
                t4 = 0x1;
                t4 = (((int)t5 >= 0) ? (t4 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)t4 >> (-(int)t5 & 31)) : ((int)t4 >> 31)));
                t5 = (*(int *)0x8C40C30C);
                if ((t4 & t5) != 0) {
                    *(unsigned int *)((t10 + 0x0)) = 0x1;
                }
            }
            t12 = (t12 + 0x1);
            t10 = (t10 + 0x4);
            t9 = (t9 + 0x4);
            t11 = (t11 + 0x1);
            if ((int)t12 >= (int)0x9) {
                break;
            }
        }
        t8 = (t8 + 0x24);
        t7 = (t7 + 0x9);
        t6 = (t6 + 0x24);
        if ((unsigned int)t8 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
            break;
        }
    }
}


int hudCallSprInit3(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t3;
    int stk[55];

    t0 = 0x8C10FAF0;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10FAF0 + 176)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33DAB0), 0x68, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C33DAB0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0xD;
        if ((int)t4 >= (int)0xB) {
            break;
        }
    }
    *(unsigned int *)0x8C33DCC4 = 0x5;
    *(unsigned int *)0x8C33DD14 = 0x5;
    *(unsigned int *)0x8C33DD64 = 0x5;
    *(unsigned int *)0x8C33DDB4 = 0x5;
    *(unsigned int *)0x8C33DE04 = 0x5;
    return 0x354;
}

int decoSprInit(void)
{
    int t0;
    int t2;
    int t4;
    int t7;
    int t8;
    int t3;
    int stk[119];

    t0 = 0x8C1107A4;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C1107A4 + 432)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C341A38), 0x25, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = *(int *)(((((((t4 << 2) + t4) << 2) << 2) + 0x8C341A38) + 0x34));
        t8 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C341A38);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t8 + 0x34)) = (t7 | 0x5);
        if ((int)t4 >= (int)0x1B) {
            break;
        }
    }
    *(unsigned int *)0x8C34223C = ((*(int *)0x8C34223C) | 0x1005);
    *(unsigned int *)0x8C34228C = ((*(int *)0x8C34228C) | 0x1005);
    return 0x854;
}


int resCautionShow(int a4)
{
    int t0;
    int t10;
    int t11;
    int stk[8];

    t0 = resCautionRead(a4);
    if (t0 == 1) {
        if ((*(int *)(((a4 << 2) + 0x8C1DC590))) == 0) {
            nlSetCommonTextureOffset(0x0);
            nlSpriteLoadTextureOnce(0x8C18281C, 0x0, (*(int *)(((a4 << 2) + 0x8C1DC608))));
            *(unsigned int *)(((a4 << 2) + 0x8C1DC590)) = 0x1;
        }
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 320.0f, 240.0f, 0.00999999978f);
        t10 = sprInitPos((((((a4 << 2) + a4) << 2) << 2) + 0x8C423BD8), (*(int *)(((a4 << 2) + 0x8C1DC608))), *(Stk3 *)(((int)stk + 8)));
        *(unsigned int *)0x8C1DC648 = 0x0;
        t11 = t10;
    } else {
        *(unsigned int *)0x8C1DC648 = 0x1;
        t11 = 0x1;
    }
    return t11;
}


int motionRotateRaw(int a4, float f4, float f5)
{
    int t0;
    int t1;
    float u3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t12;
    int t14;
    int t16;
    int t18;

    t0 = *(int *)0x8C2871D4;
    t1 = *(int *)((t0 + 0x54));
    u3 = *(float *)((t0 + 0xC));
    t4 = *(int *)(((*(int *)((t0 + 0x20))) + 0x8));
    t5 = *(int *)((t0 + 0x34));
    t6 = *(int *)((t0 + 0x58));
    t8 = *(int *)((((*(int *)((t5 + 0x4))) + t6) + 0x0));
    if ((*(int *)(((a4 << 2) + ((*(int *)((t5 + 0x0))) + t6)))) != 0) {
        t12 = ((int (*)(int, float, float))(nlRotateAZ))((-(*(short *)(((((t1 + t4) + ((((int)u3 * t8) << 1) + (((int)u3 * t8) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4)))), f4, f5);
        t14 = ((int (*)(int))(nlRotateAY))((*(short *)(((((t1 + t4) + ((((int)u3 * t8) << 1) + (((int)u3 * t8) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))));
    } else {
        t16 = ((int (*)(int, float, float))(nlRotateAY))((*(short *)(((((t1 + t4) + ((((int)u3 * t8) << 1) + (((int)u3 * t8) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))), f4, f5);
        t18 = ((int (*)(int))(nlRotateAZ))((-(*(short *)(((((t1 + t4) + ((((int)u3 * t8) << 1) + (((int)u3 * t8) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4)))));
    }
    return nlRotateAX((*(short *)(((((t1 + t4) + ((((int)u3 * t8) << 1) + (((int)u3 * t8) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x0))));
}


int bgScreenDraw(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[10];

    t0 = ((int (*)(int, int, int, int))(thunk_nlSprPut))(0x8C33CF40, a5, a6, a7);
    t1 = ((int (*)(int))(thunk_nlSprPut))(0x8C33CF90);
    t2 = ((int (*)(int))(thunk_nlSprPut))(0x8C33CFE0);
    t3 = ((int (*)(int))(thunk_nlSprPut))(0x8C33D030);
    t4 = ((int (*)(int))(thunk_nlSprPut))(0x8C33D080);
    t5 = ((int (*)(int))(thunk_nlSprPut))(0x8C33D0D0);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)0x8C098354), (*(float *)0x8C098350), (*(float *)0x8C09834C));
    modeMarkPut(0x0, 0x0, 0x0, 0x0, *(volatile int *)((int)stk + 8), *(volatile int *)((int)stk + 8 + 4), *(volatile int *)((int)stk + 8 + 8), *(volatile int *)((int)stk + 8 + 12), 1.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)0x8C098368), (*(float *)0x8C098364), (*(float *)0x8C098360));
    return (logoSmallPut(0x0, 0x0, 0x0, 0x0, *(volatile int *)((int)stk + 8), *(volatile int *)((int)stk + 8 + 4), *(volatile int *)((int)stk + 8 + 8), *(volatile int *)((int)stk + 8 + 12), *(volatile int *)((int)stk + 8 + 16), *(volatile int *)((int)stk + 8 + 20), *(volatile int *)((int)stk + 8 + 24), *(volatile int *)((int)stk + 8 + 28)));
}

int winDrawFilled(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t2;
    int t3;
    int stk[11];

    *(unsigned int *)(((int)stk + 24)) = (int)(f4 * 255.0f);
    vecMake(a4, a5, a6, a7, ((int)stk + 8), 0.0f, 0.0f, f5);
    winPartsPut(0x8C1D7110, 0x8C1D736C, 0x4, 0x78, *(Stk3 *)((int)stk + 8), 0x0, f4, 1.0f);
    t2 = *(int *)(((int)stk + 24));
    t3 = 0x8C1D72C0;
    for (;;) {
        *(unsigned int *)((t3 + 0xC)) = (0x78 | (((unsigned char)t2 << 16) << 8));
        *(float *)((t3 + 0x8)) = f5;
        t3 = (t3 + 0x10);
        if ((unsigned int)t3 >= (unsigned int)0x8C1D7300) {
            break;
        }
    }
    return nlDispStripTrnsl(0x4, 0x8C1D72C0);
}


float shadowLightMatrixAng(int a4, int a5, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    float t3;
    int t11;
    int stk[8];
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned short *)(((int)stk + 4)) = a5;
    t0 = *(short *)(((int)stk + 4));
    R1012 = (unsigned short)t0;
    t1 = ((int (*)(int, float, float))(nlRotateAY))(((unsigned short)t0 + 0x8000), f4, f5);
    t2 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = (0xFFFFC000 + (unsigned short)t2);
    t3 = nlCos((0xFFFFC000 + (unsigned short)t2));
    nlTranslate(0.0f, 0.0f, 0.0f);
    nlScale(1.0f, 0.0f, (1.0f / t3));
    nlLineSetDiv((*(float *)0x8C08B4B4));
    nlRotateAX((*(int *)(((int)stk + 4))));
    t11 = ((int (*)(int))(nlRotateAY))((0xFFFF8000 - (R1012)));
    return (1.0f / t3);
}

int btnGuideInitB(void)
{
    int t0;
    int t2;
    int t4;
    int t3;
    int stk[69];

    t0 = 0x8C10F1C0;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10F1C0 + 240)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33B490), 0x4, ((int)stk + 12), 0x80, 0x80, (t4));
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0xF) {
            break;
        }
    }
    *(unsigned int *)0x8C33B918 = 0xFFFFC000;
    *(unsigned int *)0x8C33B828 = 0xFFFFC000;
    *(unsigned int *)0x8C33B878 = 0x4000;
    return 0x3E8;
}


int menuIconInitA(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[83];

    t0 = 0x8C10E1E0;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10E1E0 + 288)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C334434), 0x85, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C334434);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0x12) {
            break;
        }
    }
    return t6;
}

int menuIconInitB(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[59];

    t0 = 0x8C10E300;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10E300 + 192)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C3349D4), 0x84, ((int)stk + 12), 0x40, 0x40, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C3349D4);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0xC) {
            break;
        }
    }
    return t6;
}

int hudCallSprInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[67];

    t0 = 0x8C10F990;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10F990 + 224)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0), 0x66, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0xE) {
            break;
        }
    }
    return t6;
}


int phraseWordsInitB(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[103];

    t0 = 0x8C10E87C;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10E87C + 368)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C338600), 0x1D, ((int)stk + 12), 0x100, 0x100, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C338600);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0x17) {
            break;
        }
    }
    return t6;
}

int hudCallSprInit2(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[43];

    t0 = 0x8C10FA70;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10FA70 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33D830), 0x67, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C33D830);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0xD;
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    return t6;
}

int modeMarkSprInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[39];

    t0 = 0x8C110734;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C110734 + 112)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C341808), 0x26, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C341808);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x1005;
        *(unsigned int *)((t7 + 0x28)) = 0x300;
        if ((int)t4 >= (int)0x7) {
            break;
        }
    }
    return t6;
}

int logoSmallInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[39];

    t0 = 0x8C10EC3C;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10EC3C + 112)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C3398C0), 0x23, ((int)stk + 12), 0x80, 0x80, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C3398C0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        if ((int)t4 >= (int)0x7) {
            break;
        }
    }
    return t6;
}

int panelMenuSprInitC(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[43];

    t0 = 0x8C110318;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C110318 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C340494), 0x7E, ((int)stk + 12), 0x100, 0x100, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C340494);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x1005;
        if ((int)t4 >= (int)0x8) {
            break;
        }
    }
    return t6;
}


int logoWaveInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t7;
    int t3;
    int stk[35];

    t0 = 0x8C10ECAC;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10ECAC + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C339AF0), 0x7A, ((int)stk + 12), 0x100, 0x100, (t4));
        t7 = (((((t4 << 2) + t4) << 2) << 2) + 0x8C339AF0);
        t4 = (t4 + 0x1);
        *(unsigned int *)((t7 + 0x34)) = 0x1005;
        if ((int)t4 >= (int)0x6) {
            break;
        }
    }
    return t6;
}


int btnGuideInitA(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t3;
    int stk[57];

    t0 = 0x8C10F100;
    t2 = ((int)stk + 12);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10F100 + 192)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        t6 = sprInitRectF((((((t4 << 2) + t4) << 2) << 2) + 0x8C33B0D0), 0x5, ((int)stk + 12), 0x80, 0x80, (t4));
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0xC) {
            break;
        }
    }
    return t6;
}


int sndPack2LoadSync(void)
{
    int t2;
    int t11;
    int t10;

    sndStopAll();
    strmControl(0x2, 0x3);
    t2 = *(int *)0x8C1D2BDC;
    t11 = t2;
    if (t2 != 99) {
        if (t2 == 0) {
            nlsndPackFree(0x5);
        }
        cacheOcbiRange(0x8C880000, 0x100000);
        fileLoadSync(0x8C880000, 0x8C125C9C, 0x0);
        t10 = nlsndPackLoad(0x8C880000, 0x5);
        *(unsigned int *)0x8C38BAB0 = t10;
        *(unsigned int *)0x8C1D2BDC = 0x63;
        t11 = t10;
    }
    return t11;
}

void titleSprTexLoad(void)
{
    int t2;
    int t3;
    int t4;

    if ((*(int *)0x8C422044) == 0) {
        *(unsigned int *)0x8C422044 = 0x1;
        nlSetCommonTextureOffset(0x0);
        t2 = 0x0;
        t3 = 0x8C1D8250;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlSpriteLoadTextureOnce(0x8C18281C, 0x0, t4);
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)0xA) {
                break;
            }
        }
        commonSprInitAll();
    return;
    }
}

int screenQuadPut(int a4, float f4)
{
    int t0;
    int t2;
    int t4;
    int t3;
    int stk[27];

    t0 = 0x8C12688C;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C12688C + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t4 << 2) << 2) + ((int)stk + 4)) + 0xC)) = (*(int *)((a4 + (t4 << 2))));
        if ((t4 == 2) || (t4 == 3)) {
            *(float *)(((((t4 << 2) << 2) + ((int)stk + 4)) + 0x0)) = f4;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x6) {
            break;
        }
    }
    return (nlDispStrip(0x6, ((int)stk + 4)));
}


void perfMark(void)
{
    
}


int netJudgeReact(void)
{
    int t0;
    int t7;
    int t13;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t7 = 0x8C1D0DF0;
        if ((*(int *)(((t0 << 2) + 0x8C1D0DF0))) != 0) {
            motionBackup(0x8C38A25C);
            motionSwitch(0x8C38A25C, (*(int *)0x8C124E54), 0x0, (*(int *)0x8C2873D4), 1.0f);
            *(unsigned int *)0x8C38A814 = 0x4;
            *(unsigned int *)0x8C38A80C = 0x0;
            t7 = 0x5B4;
        }
        t13 = t7;
    }
    return t13;
}


