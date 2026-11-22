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


int ADXSTM_OpenFname(int a4, int a5)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t7;
    register int t14;
    register int t11;

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = gdFsOpen(a4, 0x0);
    if (t0 == 0) {
        *(int *)((int)stk + 8) = a4;
        *(int *)((int)stk + 4) = 0x8C20AA04;
        ADXERR_CallErrFunc(0x8C20AA04, a4);
        t14 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0, ((int)stk + 12));
        if (t2 == 0) {
            *(int *)((int)stk + 8) = 0x8C20AA34;
            ADXERR_CallErrFunc(0x8C20AA34);
            gdFsClose(t0);
            t11 = 0x0;
        } else {
            t7 = ADXSTMF_Create(t0, 0x0, (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
            if (t7 != 0) {
                strncpy((t7 + 0x40), a4, 0x20);
            }
            t11 = t7;
        }
        t14 = t11;
    }
    return t14;
}


void ADXERR_EntryErrFunc(int a4, int a5)
{
    *(unsigned int *)0x8C20C89C = a4;
    *(unsigned int *)0x8C20C8A0 = a5;
}

