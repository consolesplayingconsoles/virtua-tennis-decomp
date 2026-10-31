/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int);
int btnGuideDrawB(int, Stk3, float);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camSetupView(void);
int dbgMenuGetValue(int, int);
int entryAllReady(void);
int entryCountJoined(void);
int entryIsVersus(void);
int entryPickRandomCourt(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int fadeBlinkStart(int);
int getID_Color(int, float);
int hudFontNumPut(int, Stk3, float);
int hudSignFirstPut(Stk3);
int lightUpdate(int, int);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, float);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlLineSetThickness(float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSingleLine(int, int, int);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3, float);
int primRectInc(int, int, int, int, int, int, int, int);
int resultBoxDraw(int, int, Stk3);
int resultSideDraw(int, Stk3, float);
int scoreInit(void);
int selCellClearCur(void);
int selCellSetChosen(int);
int selCursorInput(int, int);
int selCursorPlace(int);
int selFirstJoinedPort(void);
int selModelSpawn(int, int);
int selPortsExec(void);
int selSideCheck(void);
int selSlot0FlagClear(void);
int selSlot0FlagSet(void);
int sndSeCursor(void);
int sprPutAtAlpha(int, Stk3, float);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int vecSegCrossXZ(Stk3);
int selExec(int a4, int a5);
int resultDraw(int a4, int a5, int a6, float f4);
int racketHitCheck(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);


int resultDraw(int a4, int a5, int a6, float f4)
{
    int t116;
    int t147;
    int t118;
    int t140;
    int stk[65];
    int R1128;
    int R1132;
    float R1136;
    int R1140;
    int R1144;
    int R1148;

    R1128 = *(int *)((int)stk + 128);
    R1132 = *(int *)((int)stk + 132);
    R1136 = *(float *)((int)stk + 136);
    R1140 = *(int *)((int)stk + 140);
    R1144 = *(int *)((int)stk + 144);
    R1148 = *(int *)((int)stk + 148);

    R1148 = a4;
    R1144 = a5;
    R1140 = a6;
    *(volatile int *)0x8C301B90;
    *(volatile int *)0x8C3417C4;
    R1136 = ((f4 * 178.0f) / 256.0f);
    *(Stk3 *)((((int)stk + 128) + 0x3C)) = vecMake(41.0f, 71.0f, 0.5f);
    R1132 = (getID_Color((*(int *)0x8C301B9C), f4));
    R1128 = (getID_Color((*(int *)0x8C301BA0), f4));
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 107.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 108)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 108)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 308.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 92)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 188.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 69.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 76)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 385.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 69.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 60)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 249.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 44)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    hudSignFirstPut(*(Stk3 *)(((int)stk + 28)));
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 405.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    panelLogoPut(*(Stk3 *)(((int)stk + 12)), f4);
    *(Stk3 *)((0x98 + ((int)stk + 12))) = vecMake((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))), (*(float *)(((((int)stk + 128) + 0x3C) + 0x4))), (*(float *)(((((int)stk + 128) + 0x3C) + 0x8))));
    if ((*(int *)0x8C301B90) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawC(*(Stk3 *)(((int)stk + 116)), (R1136));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawB(*(Stk3 *)(((int)stk + 116)), (R1136));
    }
    *(float *)(((0x98 + ((int)stk + 12)) + 0x0)) = ((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 26.0f);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 140.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 194.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F810, *(Stk3 *)(((int)stk + 112)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 159.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C110708, *(Stk3 *)(((int)stk + 100)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C11070C, *(Stk3 *)(((int)stk + 88)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 281.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 218.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextTimePut((R1140), *(Stk3 *)(((int)stk + 72)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 196.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 217.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F770, *(Stk3 *)(((int)stk + 56)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((R1132), (R1128), *(Stk3 *)(((int)stk + 44)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 110.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B98), *(Stk3 *)(((int)stk + 32)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BBC), *(Stk3 *)(((int)stk + 20)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 192.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 241.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F8B0, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 79.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) - 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((R1132), (R1128), *(Stk3 *)(((int)stk + 116)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 107.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B94), *(Stk3 *)(((int)stk + 104)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 358.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BB8), *(Stk3 *)(((int)stk + 92)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 180.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 264.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F860, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 77.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((R1132), (R1128), *(Stk3 *)(((int)stk + 64)));
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
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 75.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 287.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 112)), f4);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 91.0f);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + (1.0f + 1.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 100)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 462.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 287.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            hudFontNumPut((R1144), *(Stk3 *)(((int)stk + 84)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 119.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 317.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E460, *(Stk3 *)(((int)stk + 68)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 462.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 316.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            t140 = (hudFontNumPut((R1148), *(Stk3 *)(((int)stk + 52)), f4));
        }
        t147 = t140;
    }
    return t147;
}

int racketHitCheck(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t252;
    int t229;
    int t7;
    int t8;
    int t9;
    float u10;
    float u11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    float u23;
    float u24;
    float u25;
    int t28;
    float u33;
    int t210;
    int t191;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    float u43;
    float u47;
    float u48;
    float u51;
    float u49;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    float u59;
    float u60;
    float u70;
    int t74;
    float u89;
    float u90;
    int t92;
    int t95;
    int t96;
    int t98;
    int t112;
    int t123;
    int t114;
    int t121;
    int t115;
    int t119;
    int t117;
    int t125;
    int t128;
    int t129;
    int t130;
    float u134;
    float u135;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    float u161;
    float u162;
    float u163;
    float u164;
    float u165;
    int t187;
    int t21;
    float u34;
    float u35;
    int t126;
    int t127;
    float u131;
    float u132;
    float u133;
    int stk[73];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB8 + ((int)stk + 52))) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAC + ((int)stk + 52))) = *(struct mv3 *)((a5 + 0xC)); }
    u0 = *(float *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0xC5C));
    t2 = *(int *)((a4 + 0xC6C));
    t3 = *(int *)((a4 + 0xC74));
    *(unsigned int *)(((int)stk + 64)) = ((((t1 * 0xD8) + 0x8C104194) + (t2 * 0x6C)) + ((((t3 << 2) << 1) + t3) << 2));
    t4 = *(int *)((((((t1 * 0xD8) + 0x8C104194) + (t2 * 0x6C)) + ((((t3 << 2) << 1) + t3) << 2)) + 0x8));
    t252 = 0x0;
    if (!((float)(t4 - 5) > u0)) {
        t229 = 0x0;
        if (!(u0 > (float)(t4 + 0x5))) {
            t7 = *(int *)((a4 + 0xC5C));
            t8 = *(int *)((((((t7 << 1) + t7) << 2) << 1) + 0x8C105FE0));
            t9 = 0x8C01B408;
            u10 = 0.0f;
            u11 = 22.0f;
            if ((t8 & 0x20000) != 0) {
                t9 = 0x8C01B404;
                u10 = 100.0f;
                u11 = 0.0f;
            }
            t13 = t9;
            t14 = t8;
            t15 = ((((t7 << 1) + t7) << 2) << 1);
            t16 = 0x20000;
            t17 = t4;
            t18 = a5;
            t19 = a6;
            t20 = a7;
            t22 = 0x0;
            u23 = (float)(t4 + 0x5);
            u24 = u10;
            u25 = u11;
            for (;;) {
                if ((int)t22 >= (int)0x2) {
                    break;
                }
                t21 = t22;
                t21 = (t21 << 1);
                t16 = t22;
                t21 = (t21 + t16);
                t20 = 0xBE0;
                t21 = (t21 << 2);
                t21 = (t21 << 2);
                t18 = 0x0;
                t20 = (t20 + a4);
                t20 = (t20 + t21);
                t17 = t20;
                t19 = t20;
                for (;;) {
                    if ((int)t18 >= (int)0x4) {
                        break;
                    }
                    t16 = t18;
                    t15 = 0xBE0;
                    t14 = t18;
                    t16 = (t16 << 1);
                    t16 = (t16 + t14);
                    t15 = (t15 + a4);
                    t16 = (t16 << 2);
                    t15 = (t15 + t21);
                    t13 = 0x4;
                    t15 = (t15 + t16);
                    u23 = (*(float *)((t15 + t13)));
                    t28 = (u23 > u25);
                    u23 = (*(float *)((t19 + t13)));
                    if (t28) {
                        u25 = (*(float *)((t20 + t13)));
                    }
                    t18 = (t18 + 0x1);
                    if (u24 > u23) {
                        u24 = (*(float *)((t17 + t13)));
                    }
                    t20 = (t20 + 0xC);
                    t19 = (t19 + 0xC);
                    t17 = (t17 + 0xC);
                }
                t22 = (t22 + 0x1);
            }
            u33 = *(float *)(((int)stk + 240));
            t210 = 0x0;
            if ((u33 > (u25 + 1.0f)) && (u34 = *(float *)(((int)stk + 228)), u34 > (u25 + 1.0f))) {
            } else {
                t191 = 0x0;
                if (((u24 + (-1.0f)) > u33) && (u35 = *(float *)(((int)stk + 228)), (u24 + (-1.0f)) > u35)) {
                } else {
                    t36 = t14;
                    t37 = t15;
                    t38 = t16;
                    t39 = 0x1;
                    t40 = 0x0;
                    t41 = t19;
                    u43 = (-1.0f);
                    for (;;) {
                        if ((int)t39 >= (int)0x4) {
                            break;
                        }
                        t37 = t39;
                        t38 = t39;
                        t37 = (t37 << 1);
                        t36 = t40;
                        t37 = (t37 + t38);
                        t41 = 0xBE0;
                        t36 = (t36 << 1);
                        t38 = t40;
                        t36 = (t36 + t38);
                        t41 = (t41 + a4);
                        t36 = (t36 << 2);
                        t37 = (t37 << 2);
                        t41 = (t41 + 0x30);
                        t36 = (t36 + t41);
                        t37 = (t37 + t41);
                        u43 = (*(float *)((t36 + 0x0)));
                        if (u43 > ((*(float *)((t37 + 0x0))))) {
                            t40 = t39;
                        }
                        t39 = (t39 + 0x1);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)) = *(struct mv3 *)((((((t40 << 1) + t40) << 2) + (0xBE0 + a4)) + 0x30)); }
                    u47 = *(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x0));
                    u48 = *(float *)((a4 + 0xAE8));
                    u51 = (u48 + -10.0f);
                    if (u47 > (u48 + -10.0f)) {
                        u49 = *(float *)((a4 + 0xAE8));
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x24)) = (u49 + -10.0f);
                        u51 = (u49 + -10.0f);
                    }
                    t53 = ((((int)stk + 52) + 0x4C) + 0x24);
                    t54 = (((((t40 << 1) + t40) << 2) + (0xBE0 + a4)) + 0x30);
                    t55 = 0x8C0F7DAC;
                    t56 = 0x1;
                    t57 = 0x0;
                    t58 = t41;
                    u59 = u47;
                    u60 = u51;
                    for (;;) {
                        if ((int)t56 >= (int)0x4) {
                            break;
                        }
                        t54 = t56;
                        t55 = t56;
                        t54 = (t54 << 1);
                        t53 = t57;
                        t54 = (t54 + t55);
                        t58 = 0xBE0;
                        t53 = (t53 << 1);
                        t55 = t57;
                        t53 = (t53 + t55);
                        t58 = (t58 + a4);
                        t53 = (t53 << 2);
                        t54 = (t54 << 2);
                        t58 = (t58 + 0x30);
                        t53 = (t53 + t58);
                        t54 = (t54 + t58);
                        u60 = (*(float *)((t53 + 0x0)));
                        u59 = (*(float *)((t54 + 0x0)));
                        if (u59 > u60) {
                            t57 = t56;
                        }
                        t56 = (t56 + 0x1);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)) = *(struct mv3 *)((((((t57 << 1) + t57) << 2) + (0xBE0 + a4)) + 0x30)); }
                    if (((*(float *)((a4 + 0xAE8))) + 10.0f) > (*(float *)((((((int)stk + 52) + 0x4C) + 0x18) + 0x0)))) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x18)) = ((*(float *)((a4 + 0xAE8))) + 10.0f);
                    }
                    u70 = *(float *)((a4 + 0xD0C));
                    *(float *)(((((int)stk + 52) + 0x4C) + 0x20)) = u70;
                    *(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x8)) = u70;
                    nlPushUnitMatrix();
                    t74 = nlArcTan2((*(float *)((a5 + 0x34))), (*(float *)((a5 + 0x3C))));
                    nlRotateAY((0x4000 + t74));
                    *(Stk3 *)((0x88 + ((int)stk + 52))) = vecMake(-10.0f, 0.0f, 0.0f);
                    nlCalcPoint((0x88 + ((int)stk + 52)), (0x88 + ((int)stk + 52)));
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((int)stk + 56)) = (((int)stk + 52) + 0x4C);
                    nlAddVector3op((((int)stk + 52) + 0x4C), ((((int)stk + 52) + 0x4C) + 0x24), (0x88 + ((int)stk + 52)));
                    if ((*(float *)(((*(int *)(((int)stk + 56))) + 0x0))) > (*(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x0)))) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x0)) = (*(float *)(((((int)stk + 52) + 0x4C) + 0x24)));
                    }
                    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x4C) + 0x18);
                    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 52) + 0x4C) + 0xC);
                    u89 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
                    u90 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
                    t92 = (nlAddVector3op(((((int)stk + 52) + 0x4C) + 0xC), ((((int)stk + 52) + 0x4C) + 0x18), (0x88 + ((int)stk + 52))));
                    if (u89 > u90) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0xC)) = (*(float *)(((((int)stk + 52) + 0x4C) + 0x18)));
                        t92 = 0xC;
                    }
                    t95 = t92;
                    t96 = (((int)stk + 52) + 0x4C);
                    for (;;) {
                        if ((unsigned int)t96 >= (unsigned int)((((int)stk + 52) + 0x4C) + 0x30)) {
                            break;
                        }
                        t95 = 0x4;
                        *(float *)((t96 + t95)) = 1.0f;
                        t96 = (t96 + 0xC);
                    }
                    t98 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x3);
                    if (t98 != 0) {
                        nlLineSetThickness((1.0f + 1.0f));
                        nlSingleLine((0xB8 + ((int)stk + 52)), (0xAC + ((int)stk + 52)), 0x0);
                        *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0xC);
                        *(unsigned int *)(((int)stk + 56)) = (((int)stk + 52) + 0x4C);
                        nlSingleLine((((int)stk + 52) + 0x4C), ((((int)stk + 52) + 0x4C) + 0xC), 0x0);
                        *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x4C) + 0x18);
                        nlSingleLine((*(int *)(((int)stk + 60))), ((((int)stk + 52) + 0x4C) + 0x18), 0x0);
                        *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0x24);
                        nlSingleLine((*(int *)(((int)stk + 52))), ((((int)stk + 52) + 0x4C) + 0x24), 0x0);
                        nlSingleLine((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))), 0x0);
                    }
                    *(unsigned int *)(((int)stk + 56)) = 0x1;
                    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0xC)); }
                    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x4C);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                    t112 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                    t123 = t112;
                    if (t112 == 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 60)))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                        t114 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                        t121 = t114;
                        if (t114 == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                            t115 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                            t119 = t115;
                            if (t115 == 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                                t117 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                                if (t117 == 0) {
                                    *(unsigned int *)(((int)stk + 56)) = 0x0;
                                }
                                t119 = t117;
                            }
                            t121 = t119;
                        }
                        t123 = t121;
                    }
                    t125 = t123;
                    t128 = 0x0;
                    t129 = a7;
                    t130 = 0x1;
                    u134 = 0.0f;
                    u135 = f5;
                    for (;;) {
                        if ((int)t128 >= (int)0x4) {
                            break;
                        }
                        t129 = t128;
                        t129 = (t129 << 1);
                        t127 = t128;
                        t129 = (t129 + t127);
                        t125 = 0xB8;
                        t129 = (t129 << 2);
                        t129 = (t129 + (((int)stk + 52) + 0x4C));
                        t127 = t128;
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t127 = (t127 + 0x1);
                        u133 = (*(float *)((t129 + 0x0)));
                        t127 = (t127 & 0x3);
                        t125 = 0x88;
                        t126 = t127;
                        u132 = (u132 - u133);
                        t127 = (t127 << 1);
                        t127 = (t127 + t126);
                        t127 = (t127 << 2);
                        t127 = (t127 + (((int)stk + 52) + 0x4C));
                        *(float *)((((int)stk + 52) + t125)) = u132;
                        t125 = 0x8;
                        u133 = (*(float *)((t129 + t125)));
                        t125 = 0xC0;
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t125 = 0x90;
                        u132 = (u132 - u133);
                        *(float *)((((int)stk + 52) + t125)) = u132;
                        *(unsigned int *)(((int)stk + 52)) = t127;
                        u132 = (*(float *)((t127 + 0x0)));
                        u133 = (*(float *)((t129 + 0x0)));
                        u132 = (u132 - u133);
                        *(float *)(((((int)stk + 52) + 0x7C) + 0x0)) = u132;
                        t127 = (*(int *)(((int)stk + 52)));
                        t125 = 0x8;
                        u133 = (*(float *)((t129 + t125)));
                        u132 = (*(float *)((t127 + t125)));
                        u132 = (u132 - u133);
                        *(float *)(((((int)stk + 52) + 0x7C) + t125)) = u132;
                        t125 = 0x90;
                        u133 = (*(float *)(((((int)stk + 52) + 0x7C) + 0x0)));
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t125 = 0x8;
                        u132 = (u132 * u133);
                        u133 = (*(float *)(((((int)stk + 52) + 0x7C) + t125)));
                        t125 = 0x88;
                        u131 = (*(float *)((((int)stk + 52) + t125)));
                        u135 = u132;
                        u131 = (u131 * u133);
                        u135 = (u135 - u131);
                        if (t128 != 0) {
                            u133 = 0.0f;
                            if (u135 > u133) {
                                t126 = 0x1;
                            } else {
                                if (u133 > u135) {
                                    t126 = 0xFFFFFFFF;
                                } else {
                                    t126 = 0x0;
                                }
                            }
                            u133 = 0.0f;
                            if (u134 > u133) {
                                t127 = 0x1;
                            } else {
                                if (u133 > u134) {
                                    t127 = 0xFFFFFFFF;
                                } else {
                                    t127 = 0x0;
                                }
                            }
                            if (t126 != t127) {
                                t130 = 0x0;
                            }
                        }
                        t128 = (t128 + 0x1);
                        u134 = u135;
                    }
                    t155 = t125;
                    t156 = t126;
                    t157 = t127;
                    t158 = 0x0;
                    t159 = t129;
                    t160 = 0x1;
                    u161 = u131;
                    u162 = u132;
                    u163 = u133;
                    u164 = u134;
                    u165 = 0.0f;
                    for (;;) {
                        if ((int)t158 >= (int)0x4) {
                            break;
                        }
                        t159 = t158;
                        t159 = (t159 << 1);
                        t157 = t158;
                        t159 = (t159 + t157);
                        t155 = 0xAC;
                        t159 = (t159 << 2);
                        t159 = (t159 + (((int)stk + 52) + 0x4C));
                        t157 = t158;
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t157 = (t157 + 0x1);
                        u163 = (*(float *)((t159 + 0x0)));
                        t157 = (t157 & 0x3);
                        t155 = 0x88;
                        t156 = t157;
                        u162 = (u162 - u163);
                        t157 = (t157 << 1);
                        t157 = (t157 + t156);
                        t157 = (t157 << 2);
                        t157 = (t157 + (((int)stk + 52) + 0x4C));
                        *(float *)((((int)stk + 52) + t155)) = u162;
                        t155 = 0x8;
                        u163 = (*(float *)((t159 + t155)));
                        t155 = 0xB4;
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t155 = 0x90;
                        u162 = (u162 - u163);
                        *(float *)((((int)stk + 52) + t155)) = u162;
                        *(unsigned int *)(((int)stk + 52)) = t157;
                        u162 = (*(float *)((t157 + 0x0)));
                        u163 = (*(float *)((t159 + 0x0)));
                        u162 = (u162 - u163);
                        *(float *)(((((int)stk + 52) + 0x7C) + 0x0)) = u162;
                        t157 = (*(int *)(((int)stk + 52)));
                        t155 = 0x8;
                        u163 = (*(float *)((t159 + t155)));
                        u162 = (*(float *)((t157 + t155)));
                        u162 = (u162 - u163);
                        *(float *)(((((int)stk + 52) + 0x7C) + t155)) = u162;
                        t155 = 0x90;
                        u163 = (*(float *)(((((int)stk + 52) + 0x7C) + 0x0)));
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t155 = 0x8;
                        u162 = (u162 * u163);
                        u163 = (*(float *)(((((int)stk + 52) + 0x7C) + t155)));
                        t155 = 0x88;
                        u161 = (*(float *)((((int)stk + 52) + t155)));
                        u164 = u162;
                        u161 = (u161 * u163);
                        u164 = (u164 - u161);
                        if (t158 != 0) {
                            u163 = 0.0f;
                            if (u164 > u163) {
                                t156 = 0x1;
                            } else {
                                if (u163 > u164) {
                                    t156 = 0xFFFFFFFF;
                                } else {
                                    t156 = 0x0;
                                }
                            }
                            u163 = 0.0f;
                            if (u165 > u163) {
                                t157 = 0x1;
                            } else {
                                if (u163 > u165) {
                                    t157 = 0xFFFFFFFF;
                                } else {
                                    t157 = 0x0;
                                }
                            }
                            if (t156 != t157) {
                                t160 = 0x0;
                            }
                        }
                        t158 = (t158 + 0x1);
                        u165 = u164;
                    }
                    t187 = 0x0;
                    if (((*(int *)(((int)stk + 56))) != 0) || ((t130 != 0) || (t160 != 0))) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC44 + a4)) = *(struct mv3 *)(a5); }
                        t187 = 0x1;
                    }
                    t191 = t187;
                }
                t210 = t191;
            }
            t229 = t210;
        }
        t252 = t229;
    }
    return t252;
}
