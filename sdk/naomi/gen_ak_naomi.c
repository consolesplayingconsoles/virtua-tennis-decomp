/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int abs(int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int camWorldToView(int, ...);
int charaModelCount(int);
int charaTexFreeAll(void);
int emotFaceReset(int);
int entryCountJoined(void);
int entryIsVersus(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlotOfs(int, int, int, int, int);
int hudFramePutNarrow(Stk3, float);
int hudImpactSpawn(int, Stk16, float);
int hudNumPut(int, Stk3, float);
int kmSetBackGroundPlane(int, int);
int kmyRegisterBGPlane(int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotReset(int, int);
int nlDispStripTrnsl(int, int);
float nlExp(float);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlSetCommonTextureOffset(int);
int nlSingleLine(int, int, int);
int nlSubVector3op(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int padLcdModeClear(void);
int playerSetup(int, int, int, int);
int prefetch(int);
int primVertexSet(int, int, int, int, int, Stk3);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int screenQuadPut(int, float);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uiScanlinesPut(void);
int uniformSlotReset(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int circuitDrawFrame(void);
int screenSphereVisibleRaised(Stk4 s, float f4);
int primRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int camInit(int a4, int a5, int a6, int a7);
int vmsfs_fsetparam(int a4, int a5, int a6);
void bodyLinePerp(Stk10 s);
int nlRotateAxeSC(int a4, float f4, float f5);
int nlChgObjectPolyAttrSub(int a4, int a5, int a6);
int ADXAMP_Create(int a4, int a5, int a6);
int primLineV(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int entryAllReady(void);
int strmCrowdLoop(int a4);
void sndEndingCheer(void);
int circuitMapInit(void);
int charaTexLoad(int a4, int a5);
float nlLdexpf(int a4, float f4);
int sprSet163Setup(int a4);
int kmtex_TextureSize_Palettized(int a4);
int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int fileLoadStart(int a4, int a5, int a6);
int kmiProcessVertex_03(int a4, int a5, int a6, int a7);
int nlLineSendHeader(int a4);
float nlTanh(int a4);
int nlSetBackColorZ(int a4, int a5, int a6, float f4);
int cpuDebugLine(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlsndBlockMove(int a4, int a5, int a6);
int cpuGiveUpCheck(int a4, float f4);
int hudValueDraw(int a4, int a5, int a6, int a7, float f4);
int fadeScreenStart(int a4, int a5, int a6, int a7);
int uniformTexLoad(int a4, int a5, int a6);
int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int swingBlurSpawn(int a4, int a5, int a6, int a7);
int charaTexCount(int a4);


int nlRotateAxeSC(int a4, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    int stk[20];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a4 + 0x4));
    u2 = *(float *)((a4 + 0x8));
    u3 = ((1.0f - f5) * u0);
    u4 = ((1.0f - f5) * u1);
    u5 = ((1.0f - f5) * u0);
    u6 = (u0 * u0);
    u6 = u6 + f5 * (1.0f - (u0 * u0));
    *(float *)(((int)stk + 4)) = u6;
    *(float *)(((int)stk + 8)) = ((f4 * u2) + (u3 * u1));
    *(float *)(((int)stk + 12)) = ((u5 * u2) - (f4 * u1));
    *(float *)(((int)stk + 20)) = ((u3 * u1) - (f4 * u2));
    u7 = (u1 * u1);
    u7 = u7 + f5 * (1.0f - (u1 * u1));
    *(float *)(((int)stk + 24)) = u7;
    *(float *)(((int)stk + 28)) = ((f4 * u0) + (u4 * u2));
    *(float *)(((int)stk + 36)) = ((f4 * u1) + (u5 * u2));
    *(float *)(((int)stk + 40)) = ((u4 * u2) - (f4 * u0));
    u8 = (u2 * u2);
    u8 = u8 + f5 * (1.0f - (u2 * u2));
    *(float *)(((int)stk + 44)) = u8;
    *(float *)((((int)stk + 4) + 0x38)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x34)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x30)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x2C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}


float nlLdexpf(int a4, float f4)
{
    int t0;
    int t1;
    int stk[2];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((((int)stk + 4) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = (((*(int *)((((int)stk + 4) + 0x0))) & 0x80000000) | (((int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) >= 0) ? (((t1 & 0x7FFFFF) | 0x800000) << ((-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31) ? ((int)((t1 & 0x7FFFFF) | 0x800000) >> (-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((int)((t1 & 0x7FFFFF) | 0x800000) >> 31))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (((*(int *)((((int)stk + 4) + 0x0))) & 0x80000000) | 0x7F800000);
        } else {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) & 0x807FFFFF);
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    return (*(float *)(((int)stk + 4)));
}


int nlLineSendHeader(int a4)
{
    float u0;
    int t7;
    int t16;
    int t17;
    int t18;
    int t10;
    int t11;

    u0 = *(float *)0x8C0F3254;
    *(float *)0x8C454C48 = ((*(float *)0x8C1DCA24) * u0);
    *(float *)0x8C454C4C = ((*(float *)0x8C1DCA28) * u0);
    *(float *)0x8C454C50 = ((-1.0f) - (*(float *)0x8C454C48));
    *(float *)0x8C454C54 = ((-1.0f) - (*(float *)0x8C454C4C));
    *(float *)0x8C1DCAB8 = (*(float *)0x8C454C48);
    *(float *)0x8C1DCACC = (-(*(float *)0x8C454C4C));
    t7 = *(int *)0x8C42445C;
    if ((a4 & 0x1) != 0) {
        t10 = (*(int *)((t7 + 0x8)));
        t11 = 0x8C1DCC40;
    } else {
        t10 = (*(int *)((t7 + 0x0)));
        t11 = 0x8C1DCC20;
    }
    *(unsigned int *)((t11 + 0x0)) = ((*(int *)((t11 + 0x0))) & 0xFFFCFFFF);
    *(unsigned int *)((t11 + 0x0)) = ((*(int *)((t11 + 0x0))) | (((*(int *)0x8C1DC890) << 16) | 0x8C0000));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    t16 = ((0x3FFFFFF & t10) | 0xE0000000);
    t17 = t11;
    for (;;) {
        t18 = *(int *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t18;
        t16 = (t16 + 0x4);
        if ((unsigned int)t16 >= (unsigned int)(((0x3FFFFFF & t10) | 0xE0000000) + 0x20)) {
            break;
        }
    }
    prefetch(((0x3FFFFFF & t10) | 0xE0000000));
    return (((0x3FFFFFF & t10) | 0xE0000000) + 0x20);
}

float nlTanh(int a4)
{
    float u0;
    float u20;
    float u9;

    u0 = (((float)(unsigned short)a4 * 6.28318548f) / 65536.0f);
    if ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) > 0.00100000005f) {
        u20 = (((1.0f + 1.0f) / ((nlExp((-(u0 * (1.0f + 1.0f))))) + 1.0f)) + (-1.0f));
    } else {
        if (0.00100000005f > (((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)) {
            u9 = ((-((1.0f + 1.0f) / ((nlExp((u0 * (1.0f + 1.0f)))) + 1.0f))) + 1.0f);
        } else {
            u9 = (((1.0f - ((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)) * ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f))) / 3.0f))) * ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)));
        }
        u20 = u9;
    }
    return u20;
}


int nlsndBlockMove(int a4, int a5, int a6)
{
    int t3;
    int t4;
    int t5;
    int t6;

    nlsndG2Write((a4 + 0x5F800000), 0xA0800090);
    nlsndG2Write((a5 + 0x5F800000), 0xA0800094);
    nlsndG2Write(a6, 0xA0800098);
    t3 = 0x0;
    for (;;) {
        t4 = nlsndG2Read(0xA0800098);
        if (t4 == 0) {
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x400000) {
                break;
            }
            continue;
        }
        t3 = 0x2000A0;
        t5 = 0x0;
        for (;;) {
            t6 = nlsndSeqRequest(t3);
            if (t6 != 0) {
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFF00;
    }
    return 0xFFFFFF00;
}


