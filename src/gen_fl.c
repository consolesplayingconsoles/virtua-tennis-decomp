/* Straight-line functions with calls and guards (batch gen_fl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int getID_Color(int, float);
int hudFontNumPut(int, Stk3, float);
int hudSignFirstPut(int, Stk3, float);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, float);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3, float);
int resultBoxDraw(int, int, Stk3);
int resultTeamsDraw(float);
int sprPutAtAlpha(int, Stk3, float);
Stk3 vecMake(float, float, float);
int resultDoublesDraw(int a4, int a5, int a6, float f4);

int resultDoublesDraw(int a4, int a5, int a6, float f4)
{
    int t1;
    int t6;
    int t9;
    int t117;
    int stk[63];

    *(unsigned int *)(((int)stk + 136)) = a4;
    *(unsigned int *)(((int)stk + 140)) = a5;
    *(unsigned int *)(((int)stk + 132)) = a6;
    t1 = getID_Color((*(int *)0x8C3417B4), f4);
    *(unsigned int *)(((int)stk + 128)) = (getID_Color((*(int *)0x8C3417B8), f4));
    t6 = (*(int *)0x8C301B90);
    if ((*(int *)0x8C287D5C) == 1) {
        t6 = 0x1;
    }
    t9 = 0xFFFFFFFF;
    if (t6 != 0) {
    } else {
        t9 = (*(int *)0x8C3417C4);
    }
    *(Stk3 *)((((int)stk + 128) + 0x34)) = vecMake(35.0f, 71.0f, 0.5f);
    *(Stk3 *)(((int)stk + 116)) = vecMake((*(float *)(((((int)stk + 128) + 0x34) + 0x0))), (*(float *)(((((int)stk + 128) + 0x34) + 0x4))), (*(float *)(((((int)stk + 128) + 0x34) + 0x8))));
    resultTeamsDraw(f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x34) + 0x0))) + 249.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 100)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x34) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    hudSignFirstPut(t9, *(Stk3 *)(((int)stk + 84)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x34) + 0x0))) + 405.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x34) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    panelLogoPut(*(Stk3 *)(((int)stk + 68)), f4);
    *(Stk3 *)((((int)stk + 68) + 0x58)) = vecMake((*(float *)(((((int)stk + 128) + 0x34) + 0x0))), (*(float *)(((((int)stk + 128) + 0x34) + 0x4))), (*(float *)(((((int)stk + 128) + 0x34) + 0x8))));
    if (t6 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 68) + 0x58)); }
        panelDrawC(*(Stk3 *)(((int)stk + 116)), ((f4 * 178.0f) / 256.0f));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 68) + 0x58)); }
        panelDrawB(*(Stk3 *)(((int)stk + 116)), ((f4 * 178.0f) / 256.0f));
    }
    *(float *)(((((int)stk + 68) + 0x58) + 0x0)) = ((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 26.0f);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 140.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 194.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F810, *(Stk3 *)(((int)stk + 112)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 159.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextMsgPut(0x8C110708, *(Stk3 *)(((int)stk + 100)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextMsgPut(0x8C11070C, *(Stk3 *)(((int)stk + 88)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 281.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 218.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextTimePut((*(int *)(((int)stk + 132))), *(Stk3 *)(((int)stk + 72)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 196.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 217.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F770, *(Stk3 *)(((int)stk + 56)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 44)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 110.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287B98), *(Stk3 *)(((int)stk + 32)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BBC), *(Stk3 *)(((int)stk + 20)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 192.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 241.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F8B0, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 79.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) - 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 116)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 107.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287B94), *(Stk3 *)(((int)stk + 104)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 358.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BB8), *(Stk3 *)(((int)stk + 92)), f4);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 180.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 264.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F860, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 77.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 64)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 95.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BA8), *(Stk3 *)(((int)stk + 52)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    t117 = (menuTextNumPut((*(int *)0x8C287BCC), *(Stk3 *)(((int)stk + 40)), f4));
    if (t6 != 0) {
    } else {
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 75.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 287.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 112)), f4);
        *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 91.0f);
        *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + (1.0f + 1.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 100)), f4);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 462.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 287.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        hudFontNumPut((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 84)), f4);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 119.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 317.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E460, *(Stk3 *)(((int)stk + 68)), f4);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 462.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x4))) + 316.0f), ((*(float *)(((((int)stk + 68) + 0x58) + 0x8))) + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        t117 = (hudFontNumPut((*(int *)(((int)stk + 136))), *(Stk3 *)(((int)stk + 52)), f4));
    }
    return t117;
}
