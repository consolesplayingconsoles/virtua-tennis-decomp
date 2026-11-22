/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXF_GetFileRange(int, int, int, int);
float _in_coss(float);
int circuitStatsCalc(void);
int crowdCheerStopAfter(int);
int fileLoadCloseSlot(int);
int fmMngAddData(int);
int fmMngSctRefresh(int);
int gameMatchSetup(void);
int kmiSetFogDMA(int, int, int, int);
int kmyiCheckNativeHandle(int);
float mathLineY(float, float, float, float, float);
int memmove(int, int, int);
int motionBackup(int);
int motionSetSpeed(int, float);
int mwRnaErrCallFunc(int, ...);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlObjPutMvOpenedVolume(int);
int nlRand(void);
float nlRandom(void);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlSprPut(int, int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndG2Read(int);
int nlsndSeqRequest(int);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovSearchLibByUuid(int);
int ovUnlockCs(int);
int p2_cache_set(void);
int pdTmrAlarm(int);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int strmVoicePlay(int, int);
int syBtFlDeleteSct(int, int, int);
int thunk_nlSprPut(int);
int uniformPreviewPut(int, int);
float vecDist(Stk3, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int crowdCheerStart(void);
int _fmtout_putstr(int a4, int a5, int a6);
int fmMngWriteData(int a4, int a5, int a6);
int courtPropPickPose(int a4);
int cpuQuadPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int kmyGetBGPlaneBase(int a4, int a5);
int padVmsBeep(int a4, int a5);
int seFootSurface(float f4, float f5);
int texPicPut(int a4, int a5, int a6, int a7, float f4);
void strmCallNameScore(int a4);
int motionRootFirst(int a4, int a5, int a6, int a7, int a8);
int ovLibOpen(int a4);
int kmyWriteFogDMA(int a4);
int circuitStageStart(void);
int FUN_8c032e32(void);
float effServeSpeedCalc(int a4);
int exprPlay(int a4, int a5, int a6);
float easeSin(int a4, float f4, float f5, float f6);
int sprPutScaleXArgs(int a4, int a5, int a6, int a7, Stk4 p, float f4, float f5);
int nlMatrixMode(int a4);
int nlsndStreamChgFilter(int a4, int a5, int a6);
void umpireStart(void);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int shadowPlayerScale(float f4);
int shadowBallTrailLen(float f4);
int nlsndStreamChgVolBias(int a4, int a5);
float cos(float f4);
int nlsndStreamChgVol(int a4, int a5, int a6);
int nlsndStreamChgPan(int a4, int a5, int a6);
int nlsndStreamTranspose(int a4, int a5);
int nlsndStreamDetune(int a4, int a5);
int circuitStatsStart(void);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitBlockMove(void);
int mwRnaGetOutPan(int a4, int a5);
int cpuInRange(Stk3, Stk3, Stk3);
int endingWinnerRootSync(int a4, int a5, int a6, int a7);
int cpuDebugLine2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int mwRnaGetOutVol(int a4);
int mwRnaGetDrctLvl(int a4);
int mwRnaGetNumData(int a4);
int umpCheerTimed(int a4);
int uniformPreviewReset(int a4, int a5);
int muneSlotReset(int a4, int a5);
int syHwCacheFinish(void);
int shadowPartPutProj(int a4);


int kmyGetBGPlaneBase(int a4, int a5)
{
    int t0;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)(((a4 + 0x18) + 0x24)));
    return 0x0;
}


int kmyWriteFogDMA(int a4)
{
    if ((0x8C4707EC & 31) == 0) {
        kmiSetFogDMA(a4, 0x0, 0x8C4707EC, 0x200);
        return 0x0;
    }
    return kmiSetFogDMA(a4, 0x0, 0x8C4707EC, 0x200);
}

/* port: the function at 0x8C032E32 (functions.txt counts it in circuitStageStart, which falls into it): a state of its own in
   the game's table (0x8C108260..), reached without the set-up before it */


