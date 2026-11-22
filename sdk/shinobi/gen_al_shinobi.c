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


int gdFsOpenRangeG(int startFad, int sectorCount)
{
    int globalStateAddress;
    int handleIndexOrError;
    int candidateHandleAddress;
    int openedHandleAddress;

    if ((int)startFad < (int)0xB05E) {
        gdFsSetGlobalErrG(0xFFFFFFE0);
        openedHandleAddress = 0x0;
    } else {
        globalStateAddress = *(int *)0x8C20C204;
        handleIndexOrError = 0x0;
        candidateHandleAddress = (*(int *)((globalStateAddress + 0x18)));
        for (;;) {
            if ((int)handleIndexOrError >= (int)(*(int *)((globalStateAddress + 0x0)))) {
                handleIndexOrError = 0xFFFFFFF7;
                gdFsSetGlobalErrG(handleIndexOrError);
                return 0x0;
            }
            if ((*(short *)((candidateHandleAddress + 0x4C))) == 0) {
                break;
            }
            candidateHandleAddress = (candidateHandleAddress + 0x54);
            handleIndexOrError = (handleIndexOrError + 0x1);
        }
        gdFsCreateHnG(candidateHandleAddress, 0x0, startFad, (((sectorCount << 8) << 2) << 1));
        gdFsSetGlobalErrG(0x0);
        openedHandleAddress = candidateHandleAddress;
    }
    return openedHandleAddress;
}


