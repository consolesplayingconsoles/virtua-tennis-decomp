/* Straight-line functions with calls and guards (batch gen_ju): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int decoGaugeBarPut(int, int, int, int, Stk3, float, float);
int decoGaugeFramePut(int, int, int, int, Stk3, float);
int decoNumDraw(int, int, int, int, Stk3, float);
int primSprSetSize(int, float, float);
int sprPutAtAlpha(int, Stk3, float);
Stk3 vecMake(float, float, float);
int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4);

int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4)
{
    float u0;
    float u1;
    float u2;
    float u29;
    float u30;
    float u37;
    int stk[61];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
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
    int R1092;
    int R1096;
    int R1100;
    int R1104;
    R1092 = *(int *)((int)stk + 92);
    R1096 = *(int *)((int)stk + 96);
    R1100 = *(int *)((int)stk + 100);
    R1104 = *(int *)((int)stk + 104);
    stk[50] = a8;
    stk[51] = a9;
    stk[52] = a10;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    R1096 = R5;
    R1100 = R6;
    R1104 = R7;
    u0 = *(float *)(((((int)stk + 92) + 0x6C) + 0x8));
    u1 = *(float *)(((((int)stk + 92) + 0x6C) + 0x4));
    u2 = *(float *)(((((int)stk + 92) + 0x6C) + 0x0));
    *(int *)((int)stk + 88) = (((int)stk + 92) + 0x34);
    *(Stk3 *)((((int)stk + 92) + 0x34)) = vecMake((u2 + -32.0f), (u1 + 22.0f), (u0 + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0x38)); }
    sprPutAtAlpha(0x8C341E98, *(Stk3 *)(((int)stk + 76)), F4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C342028, *(Stk3 *)(((int)stk + 64)), (F4 * 0.349999994f));
    R1092 = 0x8C342078;
    primSprSetSize(0x8C342078, 1.0f, 20.0f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 20.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha((R1092), *(Stk3 *)(((int)stk + 52)), (F4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C3420C8, *(Stk3 *)(((int)stk + 40)), (F4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C342118, *(Stk3 *)(((int)stk + 28)), (F4 * 0.349999994f));
    R1092 = 0x8C342168;
    primSprSetSize(0x8C342168, 1.0f, 89.0f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 89.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha((R1092), *(Stk3 *)(((int)stk + 16)), (F4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C3421B8, *(Stk3 *)(((int)stk + 4)), (F4 * 0.349999994f));
    R11 = (a13);
    R14 = ((((int)stk + 92) + 0x6C));
    R9 = (R4);
    F13 = (F4);
    F15 = (1.0f);
    if (((int)a13 <= 0)) goto L_8C0A6212;
    R4 = (0x20);
    L_8C0A625A:;
    *(float *)((R14 + 0x8)) = ((*(float *)((R14 + 0x8))) - 0.00999999978f);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + -53.0f);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + -3.0f);
    u29 = *(float *)((R14 + 0x8));
    *(float *)(((((int)stk + 92) + 0x10) + 0x8)) = (u29 + -0.00100000005f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x8)) = (u29 + -0.00100000005f);
    *(float *)(((((int)stk + 92) + 0x28) + 0x8)) = (u29 + -0.00100000005f);
    u30 = *(float *)((R14 + 0x4));
    *(float *)(((((int)stk + 92) + 0x10) + 0x4)) = (u30 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x4)) = (u30 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x28) + 0x4)) = (u30 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x0)) = (((*(float *)((R14 + 0x0))) + (float)R4) + -41.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    decoGaugeFramePut(R9, (R1096), R6, R7, *(Stk3 *)(((int)stk + 80)), F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R14); }
    decoNumDraw(((R1096) + 0x1), 0x1, 0x1, a11, *(Stk3 *)(((int)stk + 68)), F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 92) + 0x28)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 92) + 0x10)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    *(float *)(((((int)stk + 92) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 92) + 0x28) + 0x0))) + -68.0f);
    u37 = *(float *)(((((int)stk + 92) + 0x10) + 0x0));
    *(float *)(((((int)stk + 92) + 0x10) + 0x0)) = (u37 + 68.0f);
    R0 = (0x78);
    R1 = ((((int)stk + 92) + 0x10));
    R10 = ((((int)stk + 92) + 0x10));
    R12 = ((((int)stk + 92) + 0x28));
    F1 = ((u37 + 68.0f));
    if ((a11 != 0)) goto L_8C0A6366;
    if ((R11 != 0)) goto L_8C0A6328;
    R0 = (0x8C0A63A8);
    F14 = (0.349999994f);
    L_8C0A632A:;
    if (((int)R11 < 0)) goto L_8C0A6348;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)(R12); }
    R0 = ((decoGaugeBarPut(R9, (R1100), 0x1, R7, *(Stk3 *)(((int)stk + 80)), F13, F14)));
    L_8C0A6348:;
    if (((int)R11 > 0)) goto L_8C0A6366;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)(R10); }
    R0 = ((decoGaugeBarPut(R9, (R1104), 0x0, R7, *(Stk3 *)(((int)stk + 80)), F13, F14)));
    L_8C0A6366:;
    return R0;
    L_8C0A6328:;
    F14 = (F15);
    goto L_8C0A632A;
    L_8C0A6212:;
    if (((int)R11 >= 0)) goto L_8C0A6258;
    R4 = (0xFFFFFFE0);
    goto L_8C0A625A;
    L_8C0A6258:;
    R4 = (0x0);
    goto L_8C0A625A;
}
