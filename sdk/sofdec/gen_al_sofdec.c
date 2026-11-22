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
int vecAdd(int, int, int, int, int, Stk3, Stk3);
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
int uiBarStretchPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int getID_Color(int a4, float f4);
int nlSpriteSetGarbagedTextureOnce_Sub(int a4, int a5, int a6);
int motionRootAtFrame(int a4, int a5, int a6, int a7, int a8);
int ambEventStart(void);
int lightPlayerApply(int a4);
int gdFsOpenRangeG(int a4, int a5);
int sprPutScaledAlpha(int a4, int a5, int a6, int a7, Stk4 p, float f4, float f5);
int menuTextTimePut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
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


