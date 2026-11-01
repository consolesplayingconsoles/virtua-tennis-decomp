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

int resultDraw(int a4, int a5, int a6, float f4)
{
    int stk[65];
    register int t1;
    register int t5;
    register float u10;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register float u17;
    register float u20;
    register float u21;
    register float u22;
    register float u25;
    register float u26;
    register float u27;
    register float u30;
    register float u31;
    register float u32;
    register float u34;
    register float u35;
    register float u36;
    register float u38;
    register float u39;
    register float u40;
    register float u42;
    register float u43;
    register float u44;
    register float u53;
    register float u54;
    register float u55;
    register float u62;
    register float u63;
    register float u64;
    register float u67;
    register float u68;
    register float u69;
    register float u83;
    register float u84;
    register float u85;
    register float u100;
    register float u101;
    register float u102;
    register int t116;
    register int t147;
    register int t118;
    register int t140;
    register float u119;
    register float u120;
    register float u121;
    register float u126;
    register float u127;
    register float u128;
    register float u131;
    register float u132;
    register float u133;
    register float u135;
    register float u136;
    register float u137;
    int t2;

    *(unsigned int *)(((int)stk + 148)) = a4;
    *(unsigned int *)(((int)stk + 144)) = a5;
    *(unsigned int *)(((int)stk + 140)) = a6;
    t1 = *(int *)0x8C3417C4;
    t5 = 0xFFFFFFFF;
    if (((*(int *)0x8C301B90) == 0) && (t2 = *(int *)0x8C287D5C, t2 != 1)) {
        t5 = t1;
    }
    *(float *)(((int)stk + 136)) = ((f4 * 178.0f) / 256.0f);
    *(int *)((int)stk + 124) = (((int)stk + 128) + 0x3C);
    *(Stk3 *)((((int)stk + 128) + 0x3C)) = vecMake(41.0f, 71.0f, 0.5f);
    *(unsigned int *)(((int)stk + 132)) = (getID_Color((*(int *)0x8C301B9C), f4));
    *(unsigned int *)(((int)stk + 128)) = (getID_Color((*(int *)0x8C301BA0), f4));
    u10 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u11 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    u12 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    *(int *)((int)stk + 120) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u12 + 107.0f), (u11 + 53.0f), (u10 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 108)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 108)), f4);
    u15 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u16 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u17 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 104) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u15 + 308.0f), (u17 + 53.0f), (u16 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 92)), f4);
    u20 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u21 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u22 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 88) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u20 + 188.0f), (u22 + 69.0f), (u21 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 76)), f4);
    u25 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u26 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u27 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 72) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u25 + 385.0f), (u27 + 69.0f), (u26 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 60)), f4);
    u30 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u31 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u32 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 56) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u30 + 249.0f), (u32 + 53.0f), (u31 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 44)), f4);
    u34 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u35 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u36 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 40) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u34 + 10.0f), (u36 + 4.0f), (u35 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    hudSignFirstPut(t5, *(Stk3 *)(((int)stk + 28)), f4);
    u38 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u39 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u40 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 24) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u38 + 405.0f), (u40 + 4.0f), (u39 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    panelLogoPut(*(Stk3 *)(((int)stk + 12)));
    u42 = *(float *)(((((int)stk + 128) + 0x3C) + 0x8));
    u43 = *(float *)(((((int)stk + 128) + 0x3C) + 0x0));
    u44 = *(float *)(((((int)stk + 128) + 0x3C) + 0x4));
    *(int *)((int)stk + 8) = (0x98 + ((int)stk + 12));
    *(Stk3 *)((0x98 + ((int)stk + 12))) = vecMake(u43, u44, u42);
    if ((*(int *)0x8C301B90) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawC(*(Stk3 *)(((int)stk + 116)), (*(float *)(((int)stk + 136))));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawB(*(Stk3 *)(((int)stk + 116)), (*(float *)(((int)stk + 136))));
    }
    *(float *)(((0x98 + ((int)stk + 12)) + 0x0)) = ((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 26.0f);
    u53 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
    u54 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
    u55 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
    *(int *)((int)stk + 124) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u55 + 140.0f), (u54 + 194.0f), (u53 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F810, *(Stk3 *)(((int)stk + 112)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 159.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C110708, *(Stk3 *)(((int)stk + 100)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C11070C, *(Stk3 *)(((int)stk + 88)), f4);
    u62 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
    u63 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
    u64 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
    *(int *)((int)stk + 84) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u62 + 281.0f), (u64 + 218.0f), (u63 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextTimePut((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 72)), *(Stk1 *)((int)stk + 72 + 12), f4);
    u67 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
    u68 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
    u69 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
    *(int *)((int)stk + 68) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u67 + 196.0f), (u69 + 217.0f), (u68 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F770, *(Stk3 *)(((int)stk + 56)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 44)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 110.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B98), *(Stk3 *)(((int)stk + 32)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BBC), *(Stk3 *)(((int)stk + 20)), f4);
    u83 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
    u84 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
    u85 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
    *(int *)((int)stk + 16) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u83 + 192.0f), (u85 + 241.0f), (u84 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F8B0, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 79.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) - 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 116)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 107.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B94), *(Stk3 *)(((int)stk + 104)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 358.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BB8), *(Stk3 *)(((int)stk + 92)), f4);
    u100 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
    u101 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
    u102 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
    *(int *)((int)stk + 88) = (((int)stk + 124) + 0x4C);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u100 + 180.0f), (u102 + 264.0f), (u101 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F860, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 77.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 64)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 95.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BA8), *(Stk3 *)(((int)stk + 52)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    t116 = *(int *)0x8C301B90;
    t147 = (menuTextNumPut((*(int *)0x8C287BCC), *(Stk3 *)(((int)stk + 40)), f4));
    if (t116 != 0) {
    } else {
        t118 = *(int *)0x8C287D5C;
        t140 = t118;
        if (t118 == 1) {
        } else {
            u119 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
            u120 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
            u121 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
            *(int *)((int)stk + 124) = (((int)stk + 124) + 0x4C);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u119 + 75.0f), (u121 + 287.0f), (u120 + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 112)), f4);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 91.0f);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + (1.0f + 1.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 100)), f4);
            u126 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
            u127 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
            u128 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
            *(int *)((int)stk + 96) = (((int)stk + 124) + 0x4C);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u126 + 462.0f), (u128 + 287.0f), (u127 + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            hudFontNumPut((*(int *)(((int)stk + 144))), *(Stk3 *)(((int)stk + 84)), f4);
            u131 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
            u132 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
            u133 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
            *(int *)((int)stk + 80) = (((int)stk + 124) + 0x4C);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u131 + 119.0f), (u133 + 317.0f), (u132 + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E460, *(Stk3 *)(((int)stk + 68)), f4);
            u135 = *(float *)(((0x98 + ((int)stk + 12)) + 0x0));
            u136 = *(float *)(((0x98 + ((int)stk + 12)) + 0x8));
            u137 = *(float *)(((0x98 + ((int)stk + 12)) + 0x4));
            *(int *)((int)stk + 64) = (((int)stk + 124) + 0x4C);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake((u135 + 462.0f), (u137 + 316.0f), (u136 + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            t140 = (hudFontNumPut((*(int *)(((int)stk + 148))), *(Stk3 *)(((int)stk + 52)), f4));
        }
        t147 = t140;
    }
    return t147;
}

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

int infoPlayerDrawWrap(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    int stk[16];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (infoPlayerDraw(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4, f5, f6));
}

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

void sceneVecStub(void)
{
    int stk[30];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x64)) = *(struct mv3 *)(0x8C10DFA8); }
}

int gdFsReqDrvStat(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x58));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDir(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetDirInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsExecServer(void)
{
    register int t0;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x48)))))();
    return;
    }
}

void gdFsEntryErrFuncAll(void)
{
    register int t0;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x74)))))();
    return;
    }
}

int cpuInitPoint(int a4, int a5, int a6, int a7)
{
    if ((*(int *)0x8C287ADC) == 2) {
        return cpuSglPointInit();
    }
    return cpuDblPointInit(a4, a5, a6, a7);
}

void ADXERR_EntryErrFunc(int a4, int a5)
{
    *(unsigned int *)0x8C20C89C = a4;
    *(unsigned int *)0x8C20C8A0 = a5;
}

int gdFsInit(void)
{
    return gdFsInitOvl();
}
