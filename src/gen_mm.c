/* Straight-line functions with calls and guards (batch gen_mm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudNumberDraw(int, Stk3, Stk1, float);
int resGetModelLoad(int);
int resGetTexLoad(int);
int resSpGetFree(int, int);
int resSpTexLoad(int);
int shopItemTblInit(int, Stk3, float, float, float);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprSet173Put(int, Stk3, float);
Stk3 vecMake(float, float, float);
int hudPanelDraw(int a4, int a5, float f4);

int hudPanelDraw(int a4, int a5, float f4)
{
    int t0;
    int t2;
    int t35;
    int t52;
    int t54;
    float u56;
    int t57;
    int t84;
    int t86;
    int t88;
    int t92;
    float u94;
    int t95;
    int t3;
    int stk[69];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x88 + ((int)stk + 84))) = *(struct mv2 *)(0x8C125A60); }
    t0 = 0x8C125A68;
    t2 = (((int)stk + 84) + 0x1C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125A68 + 108)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    R0 = (R4);
    R10 = (R5);
    R12 = (R4);
    R8 = (0x8C1D173C);
    F13 = (F4);
    if ((R4 != 2)) goto L_8C0D12F4;
    R12 = (0x8C0E9206);
    R13 = (0x2);
    R14 = (0x0);
    L_8C0D12EC:;
    if (!(((int)R14 < (int)R13))) goto L_8C0D1306;
    R0 = ((resSpGetFree(R14, R5)));
    R14 = ((R14 + 0x1));
    goto L_8C0D12EC;
    L_8C0D1306:;
    *(unsigned int *)((R8 + 0x0)) = 0x0;
    L_8C0D1628:;
    return R0;
    L_8C0D12F4:;
    if (((*(int *)(((R12 << 2) + 0x8C1DC64C))) != 0)) goto L_8C0D130C;
    R0 = ((resSpTexLoad(R12)));
    goto L_8C0D1306;
    L_8C0D130C:;
    *(unsigned int *)(((int)stk + 84)) = (R10 - 21);
    if ((R12 != 0)) goto L_8C0D132E;
    if (((*(int *)((((R10 - 21) << 2) + 0x8C1DC654))) != 0)) goto L_8C0D132E;
    R0 = ((resGetTexLoad((*(int *)(((int)stk + 84))))));
    goto L_8C0D1628;
    L_8C0D132E:;
    *(unsigned int *)(((int)stk + 88)) = (R10 << 2);
    if ((R12 != 1)) goto L_8C0D1362;
    if (((*(int *)((0x8C1AED70 + ((*(int *)((((R10 << 2) + (0x88 + ((int)stk + 84))) + 0x0))) << 2)))) != 0)) goto L_8C0D1362;
    R0 = ((resGetModelLoad((*(int *)((((*(int *)(((int)stk + 88))) + (0x88 + ((int)stk + 84))) + 0x0))))));
    goto L_8C0D1628;
    L_8C0D1362:;
    t35 = *(int *)((R8 + 0x0));
    F14 = (((float)t35 * 0.100000001f));
    F15 = (1.0f);
    if ((!(((float)t35 * 0.100000001f) > 1.0f))) goto L_8C0D1378;
    F14 = (F15);
    L_8C0D1378:;
    R11 = (0x8C0DE088);
    R13 = (0x8C015EEA);
    R14 = ((((int)stk + 84) + 0x10));
    R9 = (0x8C1D1370);
    if (!((R12 == 0))) goto L_8C0D14D8;
    R4 = (R9);
    R5 = (0xEE);
    R6 = ((0x3CC + R9));
    F4 = (325.0f);
    goto L_8C0D13E8;
    L_8C0D14D8:;
    R0 = (R12);
    if (!((R12 == 1))) goto L_8C0D1622;
    R4 = (R9);
    R5 = ((0x3CC + R9));
    R6 = (0xEC);
    goto L_8C0D1540;
    L_8C0D1622:;
    *(unsigned int *)((R8 + 0x0)) = ((*(int *)((R8 + 0x0))) + 0x1);
    goto L_8C0D1628;
    L_8C0D1540:;
    if (((unsigned int)R4 < (unsigned int)R5)) goto L_8C0D153C;
    t52 = R14;
    *(int *)((int)stk + 80) = t52;
    *(Stk3 *)(t52) = vecMake(320.0f, F13, 0.0500000007f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R14); }
    shopItemTblInit(R9, *(Stk3 *)(((int)stk + 68)), 594.0f, 126.0f, F14);
    *(float *)(((int)stk + 92)) = (F13 + -30.0f);
    t54 = R14;
    *(int *)((int)stk + 64) = t54;
    *(Stk3 *)(t54) = vecMake(35.0f, (F13 + -30.0f), 0.00999999978f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(R14); }
    sprListPut(0x8C1D225C, 0x2, 0x0, *(Stk3 *)(((int)stk + 52)), F14, F15, F15);
    u56 = *(float *)(((int)stk + 92));
    t57 = R14;
    *(int *)((int)stk + 48) = t57;
    *(Stk3 *)(t57) = vecMake(400.0f, u56, 0.00999999978f);
    if ((R10 != 0)) goto L_8C0D15D0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)(R14); }
    R4 = (0x8C1D2334);
    R5 = (0x2);
    R6 = (0x0);
    F4 = (F14);
    F5 = (F15);
    F6 = (F15);
    L_8C0D15E8:;
    sprListPut(R4, R5, R6, *(Stk3 *)(((int)stk + 72)), F4, F5, F6);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 200.0f);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 89.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)(R14); }
    R0 = ((sprSet173Put((*(int *)((((*(int *)(((int)stk + 88))) + (0xA0 + ((int)stk + 60))) + 0x0))), *(Stk3 *)(((int)stk + 60)), F14)));
    goto L_8C0D1622;
    L_8C0D15D0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)(R14); }
    R4 = (0x8C1D240C);
    R5 = (0x2);
    R6 = (0x0);
    F4 = (F14);
    F5 = (F15);
    F6 = (F15);
    goto L_8C0D15E8;
    L_8C0D153C:;
    *(unsigned int *)((R4 + 0x0)) = R6;
    R4 = ((R4 + 0x6C));
    goto L_8C0D1540;
    L_8C0D13E8:;
    if (((unsigned int)R4 < (unsigned int)R6)) goto L_8C0D13E4;
    t84 = R14;
    *(int *)((int)stk + 80) = t84;
    *(Stk3 *)(t84) = vecMake(F4, F13, 0.550000012f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R14); }
    shopItemTblInit(R9, *(Stk3 *)(((int)stk + 68)), 514.0f, 96.0f, F14);
    *(float *)(((int)stk + 96)) = (F13 + -20.0f);
    t86 = R14;
    *(int *)((int)stk + 64) = t86;
    *(Stk3 *)(t86) = vecMake(80.0f, (F13 + -20.0f), 0.50999999f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(R14); }
    sprListPut(0x8C1D1980, 0x1, 0x0, *(Stk3 *)(((int)stk + 52)), F14, F15, F15);
    t88 = R14;
    *(int *)((int)stk + 48) = t88;
    *(Stk3 *)(t88) = vecMake(490.0f, (F13 + -40.0f), 0.529999971f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(R14); }
    sprListPut(0x8C1D19EC, 0x9, 0x0, *(Stk3 *)(((int)stk + 36)), (F14 * 0.699999988f), F15, F15);
    *(unsigned int *)(((int)stk + 112)) = (*(int *)((((*(int *)(((int)stk + 84))) << 2) + 0x8C1DC68C)));
    t92 = R14;
    *(int *)((int)stk + 32) = t92;
    *(Stk3 *)(t92) = vecMake(498.0f, (F13 + -32.0f), 0.50999999f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(R14); }
    sprListPut((((int)stk + 20) + 0x5C), 0x1, 0x0, *(Stk3 *)(((int)stk + 20)), F14, F15, F15);
    u94 = *(float *)(((int)stk + 96));
    t95 = R14;
    *(int *)((int)stk + 16) = t95;
    *(Stk3 *)(t95) = vecMake(425.0f, u94, 0.50999999f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    hudNumberDraw(R10, *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12), F14);
    goto L_8C0D14D8;
    L_8C0D13E4:;
    *(unsigned int *)((R4 + 0x0)) = R5;
    R4 = ((R4 + 0x6C));
    goto L_8C0D13E8;
}
