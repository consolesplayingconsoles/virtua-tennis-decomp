/* Straight-line functions with calls and guards (batch gen_on): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Seek(int, int);
int BupRequestSave(int, int, int, int);
int ambLevelGet(void);
int arcadeNextMatch(void);
int arcadeNextStage(int, int, int, int, int, int);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int ballColliSync(void);
int ballInit(int);
int ballMove(int, int, int, int, int, int, int, int, int, int, int, int);
int btnGuideDrawB(int, Stk3, float);
int countryStagePut(Stk3, Stk1, float);
int cpuInitPoint(void);
int effBallTrailSpawn(Stk3, Stk3);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int effServeSpeedCalc(int);
int entryAnyAtRound5(void);
int entryFirstPortFlag(void);
int entryGetColorId(int);
int entryIsVersus(int, int, int, int);
int evCrowdPointStart(int);
int evPackFade(int, int, int);
int fadeStart(int);
int gameMatchSetup(void);
int gdFsGetDrvStat(void);
int gdFsOpen(int, int, int, int);
int gdFsReqDrvStat(int);
int getID_Color(int, float);
int hudDoubleFaultPanel(int);
int hudFaultPanel(int);
int hudFont2DigitPut(int, Stk3, float);
int hudFontNumPut(int, Stk3, float);
int hudLabelPut(int, Stk3, float);
int hudLetPanel(void);
int hudPointPanelShow(int);
int hudScoreShow(int, int, int);
int hudSignFirstPut(int, Stk3, float);
int hudSignPut(int, Stk3, float);
int infoPlayerDrawWrap(int, int, int, int, Stk3, float, float, float);
int mainExitToBios(int);
int markerShowStart(int, int, int, int, Stk3, Stk3, Stk3);
int matchCheckTiebreak(void);
int matchGetCpuRank(void);
int matchPointWon(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, Stk1, float);
extern int miniOnEvent();
int miniRoundStart(void);
int netHitReset(void);
int netTouchFlag(int);
int nlArcTan2(int, float, float);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int panelDrawA(Stk3, float);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3);
int pauseExec(int, int);
int playerInit(int, int);
int playerStartReactions(int, int);
int primRectIncGradX(int, int, int, int, Stk3, Stk1);
int resultBoxDraw(int, int, Stk3);
int resultFlagSet(int);
int resultTeamsDraw(float);
int resultTeamsDrawAlt(Stk3, float);
int sceneVecStub(Stk3, Stk3);
int scorePressure(void);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int shadowBallDraw(Stk3);
int sndSeStage(void);
int sprPutAtAlpha(int, Stk3, float);
int stageSoftReset(void);
int standBarDraw(int, int, int, int, Stk3);
int standBoxesDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int strncpy(int, int, int);
int umpCallDoubleFault(void);
int umpCallFault(int, int, int, int, int, int, int, int);
int umpCallLet(int, int, int, int, int, int, int);
int umpCallOut(int, int, int, int, int, int, int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int matchExec(int a4, int a5, int a6, int a7, float f4, float f5);
int standPanelDraw(int a4, int a5, int a6, int a7, Stk3 p, int a11, int a12);
int resultDoublesDraw(int a4, int a5, int a6, float f4);
int FUN_8c0a048c(int a4, int a5, int a6, int a7, float f4);
void ballExec(int a4);
int FUN_8c0a082a(int a4, int a5, int a6, int a7, float f4);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int mainCheckDrive(void);
int hudSignLastPut(Stk3 s, float f4);


int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t7;

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


