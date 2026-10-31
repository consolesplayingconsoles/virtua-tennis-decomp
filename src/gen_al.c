/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int ADXT_SetOutVol(int, int);
int ADXT_Stop(int);
int advReset(void);
int afsPartition1Load(int);
int ambDimStart(int);
int camWorldToView(int, ...);
int charaNodeIdInit(void);
int charaTexFreeAll(void);
int colliObjInit(int, float);
int cpuAimPointSet(int, int, float, float);
int entryFirstPortMask(void);
int fadeReset(void);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlotOfs(int, int, int, int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsSetGlobalErrG(int);
int kdSetBlockReadEx(int);
int kmSetBorderColor(int, int, int, int, int);
int kmSetFogTableColor(int, int, int, int, int);
int kmyRegisterBGPlane(int);
int kmyiCheckNativeHandle(int);
int matchCheckTiebreak(void);
extern int menuTextNumPut();
int motionBackup(int);
int mwRnaGetTransSw(int);
int nlCalcPoint(int, int);
int nlFogDensityF(float);
int nlFogTableColor(int);
int nlFogTableSet(int);
int nlGetMatrix(int);
int nlLineSendVertex(int, int, int);
int nlLocate(int, int);
float nlLog10(float);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionF(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRandomSeed(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSetTextureParameter(int, int);
int nlSprPut(int, int, int, int);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nlsndSeqRequest(int);
int pdTmrIsReady(int);
int resultFlagsClear(void);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int set_event(int, int);
int set_event2(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAt(int, int, int, int, int, int, int, int);
int sprSet163Load(int, Stk4);
int stageLoadInit(int);
int stageTexFree(int, int, int, int, int);
int stageWtcMainTexFree(void);
int standSort(void);
int thunk_fadeScreenDraw(int, int, int, int, float, float);
int umpBusyStart(void);
int umpCallServeNo(int);
int vecAdd(int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int winDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
void umpCallFault(void);
int netJudgeInit(void);
void umpCallGameName(int a4);
void umpCallAdvName(int a4);
int nlSetFogColor(int a4, int a5, int a6, int a7);
int kmiProcessVertex_04(int a4, int a5, int a6, int a7);
int kmiProcessVertex_12(int a4, int a5, int a6, int a7);
int motionSet(int a4, int a5, int a6, int a7, int a8, int a9, float f4);
int cpuDblAimAddMiddle(int a4, int a5);
int entryFinalCheck(void);
int muneTexLoad(int a4, int a5, int a6);
int pdTmrGetTime(int a4, int a5, int a6, int a7);
int camSceneReset(void);
int shopPutItemModel(int a4, int a5, int a6, int a7);
int mwlRnaAddRdPos(int a4);
void vecOrbit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
void umpCallOut(void);
int screenSegVisible(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int umpCallDoubleFault(void);
void umpCallGame(int a4);
int kmySetDitherMode(int a4, int a5);
int nlLineSendQuadB(int a4, int a5, int a6, int a7, float f4, float f5);
int arcadePickRival(int a4, int a5);
int charaModelCount(int a4);
void umpCallLet(void);
int umpCallGamePoint(void);
int uiBarStretchPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int getID_Color(int a4, float f4);
int nlSpriteSetGarbagedTextureOnce_Sub(int a4, int a5, int a6);
int motionRootAtFrame(int a4, int a5, int a6, int a7, int a8);
int ambEventStart(void);
int lightPlayerApply(int a4);
int gdFsOpenRangeG(int a4, int a5);
int sprPutScaledAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int menuTextTimePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int stageLoadBegin(int a4);
void umpCallMatchPoint(void);
void umpCallSpareA(void);
void umpCallSpareB(void);
void umpCallAdvantage(void);
void umpCallSecondServe(void);
void umpCallFirstServe(void);
int texPicInit(int a4, int a5, int a6, int a7);
int strmBgmSetVol(int a4);
float cpuSegCrossXZ(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, float f4, float f5, float f6, float f7, float f8);
int fogSetPreset(int a4, int a5);
int lightRestore(int a4);
int ADXT_StartSj(int a4, int a5);
int fadeDraw(int a4, int a5, int a6, int a7, float f4, float f5);
int sunMatrixSet(int a4, int a5);


void umpCallFault(void)
{
    int t1;
    float u2;
    float u3;

    if ((*(int *)0x8C421F60) == 0) {
        *(unsigned int *)0x8C181704 = 0x1;
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C083C18;
        u3 = *(float *)0x8C083C1C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C083C20), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), (*(float *)0x8C083C28), u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        if (0x1 != 0) {
            *(float *)((t1 + 0x80)) = 0.0f;
        }
        umpBusyStart();
        *(unsigned int *)0x8C334408 = 0x1;
        nlsndSeqRequest(0x20A9);
    return;
    }
}


void umpCallGameName(int a4)
{
    int t3;
    float u4;
    float u5;

    if ((*(int *)0x8C421F60) == 0) {
        *(volatile short *)0x8C343262;
        
        t3 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t3 + 0x8C)) = 0x78;
        u4 = *(float *)0x8C084168;
        u5 = *(float *)0x8C08416C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t3), (*(float *)0x8C084170), u5, u4);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t3), (*(float *)0x8C084178), u5, u4);
        *(float *)((t3 + 0x80)) = 1.0f;
        *(unsigned int *)((t3 + 0x88)) = 0x0;
        *(float *)((t3 + 0x80)) = 0.0f;
    }
}

void umpCallAdvName(int a4)
{
    int t3;
    float u4;
    float u5;

    if ((*(int *)0x8C421F60) == 0) {
        *(volatile short *)0x8C343262;
        
        t3 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t3 + 0x8C)) = 0x78;
        u4 = *(float *)0x8C084278;
        u5 = *(float *)0x8C08427C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t3), (*(float *)0x8C084280), u5, u4);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t3), (*(float *)0x8C084288), u5, u4);
        *(float *)((t3 + 0x80)) = 1.0f;
        *(unsigned int *)((t3 + 0x88)) = 0x0;
        *(float *)((t3 + 0x80)) = 0.0f;
    }
}

int nlSetFogColor(int a4, int a5, int a6, int a7)
{
    return (kmSetFogTableColor(a4, a5, a6, a7, a4));
}

int kmiProcessVertex_04(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t17;
    int t19;
    int stk[31];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t17 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t19 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t19 + 0x18)) = (*(int *)((t17 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int kmiProcessVertex_12(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t17;
    int t19;
    int stk[31];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t17 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t19 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t19 + 0x18)) = (*(int *)((t17 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int motionSet(int a4, int a5, int a6, int a7, int a8, int a9, float f4)
{
    int t0;
    int t1;
    float u2;

    *(unsigned int *)((a4 + 0x58)) = a9;
    *(unsigned int *)((a4 + 0x50)) = a9;
    *(unsigned int *)((a4 + 0x54)) = a9;
    *(unsigned int *)((a4 + 0x20)) = (a5 + a9);
    *(unsigned int *)((a4 + 0x1C)) = (a5 + a9);
    *(float *)((a4 + 0x14)) = f4;
    *(float *)((a4 + 0x10)) = f4;
    *(unsigned int *)((a4 + 0x28)) = a6;
    *(unsigned int *)((a4 + 0x24)) = a6;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0x4)) = 0.0f;
    *(unsigned int *)((a4 + 0x18)) = (int)0.0f;
    *(float *)((a4 + 0x0)) = (float)(int)0.0f;
    t0 = *(int *)((a4 + 0x20));
    t1 = *(int *)((t0 + 0x0));
    u2 = *(float *)(((t0 + 0xC) + 0x0));
    *(unsigned int *)((a4 + 0x30)) = (int)((float)t1 / u2);
    *(unsigned int *)((a4 + 0x2C)) = (int)((float)t1 / u2);
    *(unsigned int *)((a4 + 0x34)) = (a7 + (*(int *)((a4 + 0x58))));
    *(unsigned int *)((a4 + 0x38)) = a8;
    *(unsigned int *)((a4 + 0x3C)) = (*(int *)((((*(int *)((a4 + 0x58))) + (*(int *)(((*(int *)((a4 + 0x34))) + 0x14)))) + 0x0)));
    *(unsigned int *)((a4 + 0x40)) = (*(int *)((((*(int *)((a4 + 0x58))) + (*(int *)(((*(int *)((a4 + 0x34))) + 0x18)))) + 0x0)));
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x0;
    *(float *)((a4 + 0x4C)) = 1.0f;
    *(unsigned int *)0x8C2873BC = 0x1;
    return motionBackup(a4);
}

int cpuDblAimAddMiddle(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u2 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u3 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u4 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u5 = *(float *)((a4 + 0xB9C));
    u6 = *(float *)((a4 + 0xAF0));
    u7 = *(float *)((a4 + 0xB00));
    u8 = (u5 - (u6 * ((u5 - ((u1 + u2) / (1.0f + 1.0f))) / (u6 - ((u4 + u3) / (1.0f + 1.0f))))));
    u8 = u8 + 118.849998f * (((u5 - ((u1 + u2) / (1.0f + 1.0f))) / (u6 - ((u4 + u3) / (1.0f + 1.0f)))) * u7);
    cpuAimPointSet(((a5 + 0x1) - 1), 0x1, u8, (u7 * 118.849998f));
    return (a5 + 0x1);
}

int entryFinalCheck(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t16;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = entryFirstPortMask();
        if ((t4 & (unsigned short)(*(short *)((((t3 << 1) + 0x8C185298) + 0x0)))) != 0) {
            if ((*(int *)((t0 + 0x8C343724))) == 5) {
                break;
            }
            if ((*(int *)((t1 + 0x8C343724))) == 6) {
                return 0x2;
            }
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
            t0 = (t0 + 0x4);
            if ((int)t3 >= (int)0x4) {
                return 0x0;
            }
            continue;
        }
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
        if ((int)t3 >= (int)0x4) {
            return 0x0;
        }
    }
    t16 = 0x0;
    if ((*(int *)((t2 + 0x8C343804))) == 1) {
        t16 = 0x1;
    }
    return t16;
}

int muneTexLoad(int a4, int a5, int a6)
{
    int t25;

    if ((*(int *)((0x8C1891D4 + (a6 << 2)))) != (a4 + 0x64)) {
        if ((*(int *)(((0x8C34A238 + (a6 * 0x4C)) + 0x0))) != 0) {
            fileLoadCloseSlot(a6);
            *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
        }
    }
    if ((*(int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0))) == 0) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = (a4 + 0x64);
        *(unsigned int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0)) = 0x1;
        fileLoadStartSlotOfs(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C18918C))), 0x0, a5, a6);
    }
    t25 = fileLoadPollSlot(a6);
    if (t25 == 1) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
    }
    return t25;
}


int camSceneReset(void)
{
    nlUnitMatrix();
    nlGetMatrix(0x8C2879B8);
    nlGetMatrix(0x8C2878F8);
    nlGetMatrix(0x8C287938);
    nlGetMatrix(0x8C287978);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2879F8) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned short *)0x8C287A48 = 0x0;
    *(unsigned short *)0x8C287A46 = 0x0;
    *(unsigned short *)0x8C287A44 = 0x0;
    vecMake(0x8C287A44, 0x0, 0x0, 0x0, 0x8C287A1C, 1.0f, 0.0f, 0.0f);
    *(unsigned int *)0x8C294650 = 0x3E8;
    *(float *)0x8C294654 = 0.0f;
    nlRandomSeed(0x1);
    *(unsigned int *)0x8C287C58 = 0xFFFFFFFF;
    advReset();
    *(unsigned int *)0x8C287C5C = 0xFFFFFFFF;
    *(unsigned int *)0x8C287C60 = 0x0;
    *(unsigned int *)0x8C20D19C = 0x0;
    *(unsigned int *)0x8C287D60 = 0x0;
    fadeReset();
    charaNodeIdInit();
    return matchCheckTiebreak();
}

int shopPutItemModel(int a4, int a5, int a6, int a7)
{
    int t1;
    int t7;
    int t17;
    int stk[11];

    if ((*(int *)0x8C4220B0) == 0) {
        t1 = afsPartition1Load(a4);
        t7 = t1;
        if (t1 == 1) {
            { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 20)) = *(struct mv4 *)(0x8C12728C); }
            sprSet163Load(a4, *(Stk4 *)(0x8C12728C));
            sprInitRectF(0x8C422054, (*(int *)(((a4 << 2) + 0x8C127264))), (((int)stk + 12) + 0x8), 0x100, 0x100, 0x0);
            *(float *)0x8C422064 = ((*(float *)0x8C422064) * 0.850000024f);
            *(float *)0x8C422068 = ((*(float *)0x8C422068) * 0.850000024f);
            *(unsigned int *)0x8C4220B0 = 0x1;
            t7 = 0x14;
        }
        t17 = t7;
    } else {
        vecMake(a4, a5, a6, a7, ((int)stk + 8), 504.0f, 260.0f, 5.0f);
        t17 = (sprPutAt(0x8C422054, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
    }
    return t17;
}

int mwlRnaAddRdPos(int a4)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t9;
    int t12;
    int t15;
    int t16;
    int t13;
    int t19;

    t0 = *(int *)((a4 + 0x38));
    t1 = *(int *)((a4 + 0x30));
    t6 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t7 = (int)((int)(((int (*)(int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0)) / (int)((t6 << 2) << 1));
    *(unsigned int *)((a4 + 0x30)) = (t7 * ((t6 << 2) << 1));
    t9 = ((t7 * ((t6 << 2) << 1)) - t1);
    if ((int)((t7 * ((t6 << 2) << 1)) - t1) < 0) {
        t9 = (((t7 * ((t6 << 2) << 1)) - t1) + (*(int *)((a4 + 0x28))));
    }
    t12 = *(int *)((a4 + 0x34));
    t15 = (t12 - t9);
    t16 = t9;
    if ((int)(t12 - t9) < 0) {
        t13 = *(int *)((a4 + 0x2C));
        *(unsigned char *)((a4 + 0x4)) = 0x1;
        t15 = 0x0;
        t16 = (t13 - t1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x4))) == 1) {
        t19 = mwRnaGetTransSw(a4);
        if (t19 == 1) {
            *(unsigned int *)((a4 + 0x2C)) = (*(int *)((a4 + 0x30)));
            *(unsigned char *)((a4 + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((a4 + 0x34)) = t15;
    *(unsigned int *)((a4 + 0x48)) = ((*(int *)((a4 + 0x48))) + t16);
    return 0x48;
}

void vecOrbit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[29];

    stk[17] = a8;
    stk[18] = a9;
    stk[19] = a10;
    stk[20] = a11;
    *(unsigned short *)(((int)stk + 36)) = a4;
    *(unsigned short *)(((int)stk + 44)) = a5;
    *(float *)(((int)stk + 40)) = f4;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((int)stk + 44))));
    nlRotateAX((unsigned short)(*(short *)(((int)stk + 36))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0xC), 0.0f, 0.0f, (-(*(float *)(((int)stk + 40)))));
    nlCalcPoint((((int)stk + 32) + 0x10), (((int)stk + 32) + 0x10));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x10)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x34)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x40) + 0x0)))) = *(struct mv3 *)((((int)stk + 4) + 0x2C)); }
}

void umpCallOut(void)
{
    int t3;

    if ((*(int *)0x8C421F60) == 0) {
        if (((*(int *)0x8C287B3C) & 1) == 0) {
            t3 = set_event2(0x90, 0x8C0837CC);
            *(unsigned int *)((t3 + 0x8C)) = 0x78;
            vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t3), 315.0f, 380.0f, 0.100000001f);
            vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t3), 670.0f, 380.0f, 0.100000001f);
            *(float *)((t3 + 0x80)) = 1.0f;
            *(unsigned int *)((t3 + 0x88)) = 0x0;
            *(float *)((t3 + 0x80)) = 0.0f;
            umpBusyStart();
            nlsndSeqRequest(0x220A9);
    return;
        }
        return;
    }
}


int umpCallDoubleFault(void)
{
    int t2;
    int t7;
    int t3;
    int t6;
    int t14;

    if ((*(int *)0x8C421F60) == 0) {
        t2 = *(int *)0x8C287B3C;
        t7 = t2;
        if ((t2 & 1) == 0) {
            *(unsigned int *)0x8C181704 = 0x1;
            t3 = set_event2(0x90, 0x8C0837CC);
            *(unsigned int *)((t3 + 0x8C)) = 0x78;
            vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t3), 320.0f, 380.0f, 0.100000001f);
            vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t3), 700.0f, 380.0f, 0.100000001f);
            *(float *)((t3 + 0x80)) = 1.0f;
            *(unsigned int *)((t3 + 0x88)) = 0x0;
            *(float *)((t3 + 0x80)) = 0.0f;
            t6 = umpBusyStart();
            *(unsigned int *)0x8C334408 = 0x2;
            t7 = t6;
        }
        t14 = t7;
    }
    return t14;
}

void umpCallGame(int a4)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 269.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        umpCallGameName(a4);
    return;
    }
}

int kmySetDitherMode(int a4, int a5)
{
    int t0;
    int t2;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t2 = *(int *)((a4 + 0x88));
    if (a5 != 0) {
        *(unsigned int *)((t2 + 0x4)) = ((*(int *)((t2 + 0x4))) | 0x8);
    } else {
        *(unsigned int *)((t2 + 0x4)) = ((*(int *)((t2 + 0x4))) & 0xFFFFFFF7);
    }
    return 0x0;
}

int nlLineSendQuadB(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (((*(float *)((a5 + 0x0))) + f5) + f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (((*(float *)((a5 + 0x4))) - f4) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = (((*(float *)((a5 + 0x0))) - f5) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = (((*(float *)((a5 + 0x4))) + f4) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = ((*(float *)((a6 + 0x0))) + f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = ((*(float *)((a6 + 0x4))) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = ((*(float *)((a6 + 0x0))) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = ((*(float *)((a6 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}

int arcadePickRival(int a4, int a5)
{
    float t4;
    int t8;
    int t1;
    int t6;
    int t7;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if (((*(int *)0x8C181628) == 0) && (t1 = *(int *)0x8C18162C, t1 == 0)) {
        for (;;) {
            t4 = nlRandom();
            if (((*(int *)((0x8C287D04 + ((int)(t4 * 16.0f) << 2)))) == 0) && ((t6 = *(int *)((0x8C287CBC + ((int)(t4 * 16.0f) << 2))), t6 == 0) && (t7 = *(int *)((0x8C287C74 + ((int)(t4 * 16.0f) << 2))), t7 != 0))) {
                break;
            }
            t8 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t8 + 0x1);
            if ((int)(t8 + 0x1) >= (int)0x64) {
                break;
            }
        }
        *(unsigned int *)((0x8C287D04 + ((int)(t4 * 16.0f) << 2))) = 0x1;
        return (int)(t4 * 16.0f);
    }
    if ((*(int *)0x8C1389F8) == 0) {
        *(unsigned int *)0x8C1389F8 = 0x1;
        return 16;
    }
    return 17;
}

int charaModelCount(int a4)
{
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                return 0x25;
            }
            case 2:
            {
                return 0x25;
            }
            case 4:
            {
                return 0x25;
            }
            case 6:
            {
                return 0x29;
            }
            case 8:
            {
                return 0x25;
            }
            case 10:
            {
                return 0x29;
            }
            case 12:
            {
                return 0x25;
            }
            case 14:
            {
                return 0x25;
            }
            case 16:
            {
                return 0x25;
            }
            case 18:
            {
                return 0x25;
            }
            case 20:
            {
                return 0x25;
            }
            case 22:
            {
                return 0x25;
            }
            case 24:
            {
                return 0x25;
            }
            case 26:
            {
                return 0x2B;
            }
            default:
            {
                return 0x25;
            }
        }
    }
    return 0x0;
}

void umpCallLet(void)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 315.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        umpCallServeNo(0x82);
    return;
    }
}

int umpCallGamePoint(void)
{
    int t1;
    float u2;
    float u3;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C083D7C;
        u3 = *(float *)0x8C083D80;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C083D84), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), (*(float *)0x8C083D8C), u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        return umpBusyStart();
    }
    return 0x8C421F60;
}

int uiBarStretchPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[19];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    stk[10] = a11;
    *(float *)((((a4 + 0x6C) + 0xC) + 0x18)) = 3.0f;
    *(float *)((((a4 + 0x6C) + 0xC) + 0x0)) = 3.0f;
    *(float *)((((a4 + 0x6C) + 0xC) + 0x48)) = ((float)a5 + 3.0f);
    *(float *)((((a4 + 0x6C) + 0xC) + 0x30)) = ((float)a5 + 3.0f);
    *(float *)(((((a4 + 0x6C) + 0x6C) + 0xC) + 0x18)) = ((float)a5 + 3.0f);
    *(float *)(((((a4 + 0x6C) + 0x6C) + 0xC) + 0x0)) = ((float)a5 + 3.0f);
    *(float *)(((((a4 + 0x6C) + 0x6C) + 0xC) + 0x48)) = ((float)a5 + 6.0f);
    *(float *)(((((a4 + 0x6C) + 0x6C) + 0xC) + 0x30)) = ((float)a5 + 6.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    return (sprListPut((((a4 + 0x6C) + 0x6C) - 0xD8), 0x3, 0x0, *(Stk3 *)((((int)stk + 16) + 0xC)), f4, 1.0f, 1.0f));
}

int getID_Color(int a4, float f4)
{
    float u0;
    int t33;
    int t26;
    int t19;
    int t12;
    int t4;

    u0 = *(float *)0x8C0B01C8;
    t33 = (0xFF0000 | (((unsigned char)(int)(f4 * u0) << 16) << 8));
    if ((a4 != 0) && (a4 != 5)) {
        t26 = (0xE6E6 | (((unsigned char)(int)(f4 * u0) << 16) << 8));
        if ((a4 != 1) && (a4 != 6)) {
            t19 = (0xE6E600 | (((unsigned char)(int)(f4 * u0) << 16) << 8));
            if ((a4 != 2) && (a4 != 7)) {
                t12 = (0xB464F0 | (((unsigned char)(int)(f4 * u0) << 16) << 8));
                if ((a4 != 3) && (a4 != 8)) {
                    if (a4 != 4) {
                        nlLocate(0xF, 0x14);
                        nlPrintf(0x8C110F90);
                    } else {
                        t4 = (0xC800 | (((unsigned char)(int)(f4 * u0) << 16) << 8));
                    }
                    t12 = t4;
                }
                t19 = t12;
            }
            t26 = t19;
        }
        t33 = t26;
    }
    return t33;
}

int nlSpriteSetGarbagedTextureOnce_Sub(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;
    int t19;
    int t6;
    int t8;
    int t9;
    int t13;
    int t14;
    int stk[6];

    t1 = a5;
    if (a6 == 1) {
        t1 = (*(int *)(((int)stk + 16)));
    }
    t3 = *(int *)0x8C458DCC;
    t4 = *(int *)0x8C4241C0;
    t19 = 0xFFFFFFFF;
    if ((*(int *)((((((t1 + t3) << 2) << 1) + t4) + 0x0))) == 0) {
    } else {
        t6 = *(int *)((((((t1 + t3) << 2) << 1) + t4) + 0x4));
        t8 = *(short *)((((t1 + t3) << 1) + (*(int *)0x8C454C80)));
        *(unsigned int *)(((int)stk + 8)) = (((t8 << 2) << 2) << 1);
        t9 = *(int *)0x8C454C90;
        *(unsigned int *)(((int)stk + 12)) = ((((t8 << 2) << 2) << 1) + t9);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)((((((t8 << 2) << 2) << 1) + t9) + 0xC))) & 0x7E00000);
        nlSetTextureParameter((*(int *)(((int)stk + 12))), t6);
        t13 = *(int *)(((int)stk + 8));
        t14 = *(int *)0x8C454C90;
        *(unsigned int *)(((t13 + t14) + 0xC)) = ((*(int *)(((t13 + t14) + 0xC))) | (*(int *)(((int)stk + 4))));
        t19 = 0x0;
    }
    return t19;
}


int ambEventStart(void)
{
    int t0;
    int t8;

    t0 = set_event(0x38, 0x8C087986);
    *(unsigned short *)((t0 + 0x18)) = 0x0;
    vecMake(0x0, 0x0, 0x0, 0x0, (0x1C + t0), 0.0f, (*(float *)0x8C087D70), (*(float *)0x8C087D6C));
    vecMake(0x0, 0x0, 0x0, 0x0, (0x28 + t0), 0.0f, 0.0f, (*(float *)0x8C087D78));
    *(unsigned int *)((t0 + 0x14)) = (((int)((int)(nlRand()) % (int)0x1C20)) + 0x1F4);
    *(unsigned short *)((t0 + 0x34)) = 0x0;
    t8 = *(int *)0x8C1891E8;
    if (t8 == 2) {
        return ambDimStart((*(int *)((t0 + 0x14))));
    }
    return t8;
}

int lightPlayerApply(int a4)
{
    int t15;
    int t19;
    int stk[7];

    if ((*(int *)(((a4 << 2) + 0x8C1D11A8))) == 0) {
        nlObjPutSetLightDirectionF(0.0f, 0.0f, 0.0f);
        t19 = (nlObjPutSetGlobalAmbience(0.0f));
    } else {
        if ((*(int *)(((a4 << 2) + 0x8C1D1168))) != 0) {
            nlObjPutSetGlobalAmbience(((*(float *)(((a4 << 2) + 0x8C1D1188))) / 255.0f));
        }
        t15 = 0x8C1D1178;
        if ((*(int *)(((a4 << 2) + 0x8C1D1178))) != 0) {
            nlScaleVector(((int)stk + 4), 0x8C38B834, ((*(float *)(((a4 << 2) + 0x8C1D1198))) / 100.0f));
            t15 = (nlObjPutSetLightDirectionV(((int)stk + 4)));
        }
        t19 = t15;
    }
    return t19;
}

int gdFsOpenRangeG(int a4, int a5)
{
    int t1;
    int t3;
    int t4;
    int t11;

    if ((int)a4 < (int)0xB05E) {
        gdFsSetGlobalErrG(0xFFFFFFE0);
        t11 = 0x0;
    } else {
        t1 = *(int *)0x8C20C204;
        t3 = 0x0;
        t4 = (*(int *)((t1 + 0x18)));
        for (;;) {
            if ((int)t3 >= (int)(*(int *)((t1 + 0x0)))) {
                t3 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t3);
                return 0x0;
            }
            if ((*(short *)((t4 + 0x4C))) == 0) {
                break;
            }
            t4 = (t4 + 0x54);
            t3 = (t3 + 0x1);
        }
        gdFsCreateHnG(t4, 0x0, a4, (((a5 << 8) << 2) << 1));
        gdFsSetGlobalErrG(0x0);
        t11 = t4;
    }
    return t11;
}

int sprPutScaledAlpha(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    int stk[18];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    stk[9] = a11;
    u0 = *(float *)((a4 + 0x10));
    u1 = *(float *)((a4 + 0x14));
    u2 = *(float *)((a4 + 0x2C));
    *(float *)((a4 + 0x2C)) = f5;
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x14) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x14) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x14) + 0x8)));
    *(float *)((a4 + 0x10)) = (f4 * ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))));
    *(float *)((a4 + 0x14)) = (f4 * ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))));
    nlSprPut(a4, a5, a6, a7);
    *(float *)((a4 + 0x10)) = u0;
    *(float *)((a4 + 0x14)) = u1;
    *(float *)((a4 + 0x2C)) = u2;
    return 0x2C;
}

int menuTextTimePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int stk[23];

    stk[11] = a8;
    stk[12] = a9;
    stk[13] = a10;
    stk[14] = a11;
    t0 = (int)((int)a4 / (int)0x3C);
    t1 = (int)((int)t0 / (int)0x3C);
    t3 = ((int)((int)t0 % (int)0x3C));
    t4 = t1;
    if ((int)t1 > (int)0x63) {
        t3 = 0x3B;
        t4 = 0x63;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
    t6 = ((int (*)(int, int, int, int, Stk3, float))(menuTextNumPut))(t4, 0x63, t0, a7, *(Stk3 *)((((int)stk + 28) + 0x10)), f4);
    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
    return (((int (*)(int, Stk3, float))(menuTextNumPut))(t3, *(Stk3 *)((((int)stk + 28) + 0x10)), f4));
}


void umpCallMatchPoint(void)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 320.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

void umpCallSpareA(void)
{
    int t1;
    float u2;
    float u3;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C0843C8;
        u3 = *(float *)0x8C0843CC;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C0843D0), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), (*(float *)0x8C0843D8), u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

void umpCallSpareB(void)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 399.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

void umpCallAdvantage(void)
{
    int t1;
    float u2;
    float u3;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C084500;
        u3 = *(float *)0x8C084504;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C084508), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), (*(float *)0x8C084510), u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

void umpCallSecondServe(void)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 315.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 800.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

void umpCallFirstServe(void)
{
    int t1;
    float u2;
    float u3;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C084918;
        u3 = *(float *)0x8C08491C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C084920), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), (*(float *)0x8C084928), u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
    }
}

int texPicInit(int a4, int a5, int a6, int a7)
{
    float u5;
    float u6;
    int stk[15];

    vecMake(a4, a5, a6, a7, ((int)stk + 32), (*(float *)0x8C09C7B4), (*(float *)0x8C09C7B0), (*(float *)0x8C09C7AC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 32)); }
    sprInitPos(0x8C340764, 0x22, *(Stk3 *)(((int)stk + 32)));
    u5 = *(float *)0x8C09C7C8;
    *(float *)0x8C340774 = u5;
    u6 = *(float *)0x8C09C7CC;
    *(float *)0x8C340778 = u6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 32)); }
    sprInitPos(0x8C340714, 0x21, *(Stk3 *)(((int)stk + 32)));
    *(float *)0x8C340724 = u5;
    *(float *)0x8C340728 = u6;
    return 0x14;
}


int strmBgmSetVol(int a4)
{
    int t0;
    float t2;

    if ((int)(a4 + 0x2F) >= (int)0x30) {
        t0 = *(int *)0x8C38BA60;
        *(unsigned int *)0x8C40C270 = (int)(((float)t0 / 127.0f) * (float)(a4 + 0x2F));
        t2 = nlLog10((((float)(int)(((float)t0 / 127.0f) * (float)(a4 + 0x2F))) * 0.00787401572f));
        *(unsigned int *)0x8C38BA68 = (int)(t2 * 300.0f);
        return ADXT_SetOutVol((*(int *)0x8C38BA94), (int)(t2 * 300.0f));
    }
    *(unsigned int *)0x8C38BA68 = 0xFFFFFC19;
    return ADXT_SetOutVol((*(int *)0x8C38BA94), 0xFFFFFC19);
}

float cpuSegCrossXZ(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, float f4, float f5, float f6, float f7, float f8)
{
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u10;
    float u18;
    float u11;
    int stk[21];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    stk[5] = a12;
    stk[6] = a13;
    stk[7] = a14;
    stk[8] = a15;
    stk[9] = a16;
    stk[10] = a17;
    stk[11] = a18;
    stk[12] = a19;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x4)));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    u2 = *(float *)((((int)stk + 4) + 0x0));
    if ((u1 != 0.0f) && (*(float *)&a17 != 0.0f)) {
        u3 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
        u4 = *(float *)((((int)stk + 4) + 0x8));
        u5 = *(float *)(((((int)stk + 4) + 0x24) + 0x8));
        u6 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
        u7 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
        u8 = *(float *)(((((int)stk + 4) + 0x18) + 0x8));
        if ((u3 / u1) == (u5 / u6)) {
            *(float *)((a4 + 0x0)) = u2;
            *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x8)));
        } else {
            u10 = (u4 - ((u3 / u1) * u2));
            u10 = u10 + (((u8 - ((u5 / u6) * u7)) - (u4 - ((u3 / u1) * u2))) / ((u3 / u1) - (u5 / u6))) * (u3 / u1);
            *(float *)((a4 + 0x0)) = (((u8 - ((u5 / u6) * u7)) - (u4 - ((u3 / u1) * u2))) / ((u3 / u1) - (u5 / u6)));
            *(float *)((a4 + 0x8)) = u10;
            u11 = (((u8 - ((u5 / u6) * u7)) - (u4 - ((u3 / u1) * u2))) / ((u3 / u1) - (u5 / u6)));
        }
        u18 = u11;
    } else {
        *(float *)((a4 + 0x0)) = u2;
        *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x8)));
    }
    return u18;
}

int fogSetPreset(int a4, int a5)
{
    int t1;
    int t2;

    *(unsigned int *)((a4 + 0x0)) = 0xFF;
    *(unsigned int *)((a4 + 0x4)) = 0xFF;
    *(unsigned int *)((a4 + 0x8)) = 0xFF;
    *(float *)((a4 + 0xC)) = (*(float *)0x8C0896C4);
    t1 = (a4 + 0x10);
    t2 = ((((a5 << 8) << 1) + 0x8C18179C) + 0x1FC);
    for (;;) {
        *(float *)((t1 + 0x0)) = (*(float *)((t2 + 0x0)));
        t1 = (t1 + 0x4);
        t2 = (t2 - 4);
        if ((unsigned int)t1 >= (unsigned int)((a4 + 0x10) + 0x200)) {
            break;
        }
    }
    nlFogTableSet((a4 + 0x10));
    nlFogTableColor(((((unsigned char)(*(int *)((a4 + 0x0))) << 16) | ((unsigned char)(*(int *)((a4 + 0x4))) << 8)) | (unsigned char)(*(int *)((a4 + 0x8)))));
    return nlFogDensityF((*(float *)((a4 + 0xC))));
}

int lightRestore(int a4)
{
    if ((*(int *)(((a4 << 2) + 0x8C1D11A8))) == 0) {
        nlObjPutSetLightDirectionV(0x8C38B834);
        return nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
    }
    if ((*(int *)(((a4 << 2) + 0x8C1D1168))) != 0) {
        nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
    }
    if ((*(int *)(((a4 << 2) + 0x8C1D1178))) != 0) {
        return nlObjPutSetLightDirectionV(0x8C38B834);
    }
    return 0x8C1D1178;
}

int ADXT_StartSj(int a4, int a5)
{
    int t3;
    int t8;
    int t2;

    ADXT_Stop(a4);
    ADXCRS_Lock();
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = t3;
        t2 = (t2 << 2);
        t2 = (t2 + (a4 + 0x18));
        t2 = (*(int *)((t2 + 0x0)));
        t8 = ((int (*)(int))((*(int *)(((*(int *)((t2 + 0x0))) + 0x14)))))(t2);
        t3 = (t3 + 0x1);
    }
    ADXSJD_SetInSj((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    return ADXCRS_Unlock();
}

int fadeDraw(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    float u3;
    int t5;
    float u6;
    int t7;
    int t12;
    int t24;
    int t34;
    int t25;
    int t13;

    t0 = *(int *)0x8C1389FC;
    if (t0 != 0) {
        u3 = *(float *)0x8C287D64;
        if (t0 == 2) {
            t5 = *(int *)0x8C287D7C;
            if (t5 == 0) {
                *(unsigned int *)0x8C1389FC = 0x0;
                t13 = t0;
            } else {
                u6 = *(float *)0x8C287D80;
                t7 = t5;
                if ((float)t5 > u6) {
                    t7 = (int)u6;
                }
                thunk_fadeScreenDraw(t5, 0x8C1389FC, a6, a7, ((float)t7 / u6), u3);
                t12 = *(int *)0x8C287C60;
                *(unsigned int *)0x8C287D7C = ((*(int *)0x8C287D7C) - (((t12 == 0)) ? 1 : 0));
                t13 = (((t12 == 0)) ? 1 : 0);
            }
            t25 = t13;
        } else {
            thunk_fadeScreenDraw(t0, 0x8C1389FC, a6, a7, 1.0f, u3);
            t24 = *(int *)0x8C287C60;
            *(unsigned int *)0x8C287D7C = ((*(int *)0x8C287D7C) - (((t24 == 0)) ? 1 : 0));
            t25 = (((t24 == 0)) ? 1 : 0);
        }
        t34 = t25;
    }
    return t34;
}

int sunMatrixSet(int a4, int a5)
{
    int t2;

    t2 = *(int *)((((((int)((int)a5 % (int)(*(int *)((a4 + 0x0))))) << 2) + a4) + 0x4));
    nlPushUnitMatrix();
    nlRotateAY(0x4000);
    nlRotateAX((-(*(short *)(((t2 + a4) + 0x2)))));
    nlRotateAY((-(*(short *)(((t2 + a4) + 0x4)))));
    nlRotateAZ((*(short *)(((t2 + a4) + 0x6))));
    nlTranslate((-(*(float *)(((t2 + a4) + 0x8)))), (-(*(float *)(((t2 + a4) + 0xC)))), (*(float *)(((t2 + a4) + 0x10))));
    nlGetMatrix(0x8C2878F8);
    return nlPopMatrix(0x1);
}


