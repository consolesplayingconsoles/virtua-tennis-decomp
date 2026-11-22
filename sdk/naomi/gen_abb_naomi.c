/* Straight-line functions with calls and guards (batch gen_abb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int cpuSglPointInit(void);
int cpuDblPointInit(int, int, int, int);
int btnGuideDrawB(int, Stk3, float);
int gdFsClose(int);
int gdFsGetFileSize(int, int);
int gdFsInitOvl(void);
int gdFsOpen(int, int);
int getID_Color(int, float);
int hudFontNumPut(int, Stk3, float);
int hudSignFirstPut(int, Stk3, float);
int infoPlayerDraw(int, int, int, int, Stk3, float, float, float);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, Stk1, float);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3);
int resultBoxDraw(int, int, Stk3);
int resultSideDraw(int, Stk3, float);
int sprPutAtAlpha(int, Stk3, float);
int strncpy(int, int, int);
Stk3 vecMake(float, float, float);
int resultDraw(int a4, int a5, int a6, float f4);
int ADXSTM_OpenFname(int a4, int a5);
int infoPlayerDrawWrap(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);
int nlObjPut_vtxcolbridge(void);
void sceneVecStub(void);
int gdFsReqDrvStat(void);
int gdFsLoadDir(void);
int gdFsGetDirInfo(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int cpuInitPoint(int a4, int a5, int a6, int a7);
void ADXERR_EntryErrFunc(int a4, int a5);
int gdFsInit(void);


int nlObjPut_vtxcolbridge(void)
{
    int stk[5];
    register int t0;

    t0 = *(int *)0x8C1DCA98;
    if (t0 != 0) {
        return ((int (*)(void))(t0))();
    }
    return ((int (*)(void))(0x8C0FDAEA))();
}


