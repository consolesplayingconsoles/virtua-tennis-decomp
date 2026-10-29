/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudFont2DigitPut(int, Stk3, Stk1, float);
int hudSignLastPut(float);
int hudSignPut(int, int, int, int, Stk3, Stk1, float);
int markerShowStart(int, int, int, int, Stk3, Stk3, Stk3);
int primRectIncGradX(int, int, int, int, Stk3, Stk1);
int sprPutAtAlpha(int, Stk3, float);
int standBarDraw(int, int, int);
int standBoxesDraw(int, int, int, int, int, int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
int standPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int standPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u8;
    float u9;
    float u10;
    int t11;
    float u13;
    float u14;
    float u15;
    int t16;
    float u20;
    float u21;
    float u22;
    int t23;
    float u25;
    float u26;
    float u27;
    int t28;
    float u38;
    float u39;
    float u40;
    int t41;
    float u49;
    float u50;
    float u51;
    int t52;
    float u53;
    float u54;
    float u55;
    int t63;
    int t73;
    int t77;
    int t78;
    int t79;
    int t85;
    float u92;
    float u93;
    float u94;
    int t95;
    int t103;
    float u117;
    float u118;
    float u119;
    int t120;
    int t128;
    float u135;
    float u136;
    int t137;
    int t145;
    float u155;
    float u156;
    int t157;
    int t165;
    float u171;
    float u172;
    float u173;
    int t174;
    float u177;
    int t191;
    int stk[63];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
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
    stk[54] = a8;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 84)) = R4;
    *(unsigned int *)(((int)stk + 96)) = R5;
    *(unsigned int *)(((int)stk + 92)) = R6;
    R10 = ((((int)stk + 80) + 0x34));
    R12 = (0x8C015EEA);
    R13 = ((((int)stk + 80) + 0x4C));
    R14 = ((0x88 + ((int)stk + 80)));
    R9 = (R7);
    F12 = (1.0f);
    if ((R7 == 0)) goto L_8C0A34FC;
    F15 = (0.5f);
    L_8C0A34FE:;
    u8 = *(float *)((R14 + 0x0));
    u9 = *(float *)((R14 + 0x8));
    u10 = *(float *)((R14 + 0x4));
    t11 = R13;
    *(int *)((int)stk + 76) = t11;
    *(Stk3 *)(t11) = vecMake((u8 + -15.0f), (u10 + 7.0f), u9);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(R13); }
    sprPutAtAlpha(0x8C33EE10, *(Stk3 *)(((int)stk + 64)), F15);
    u13 = *(float *)((R14 + 0x0));
    u14 = *(float *)((R14 + 0x8));
    u15 = *(float *)((R14 + 0x4));
    t16 = R13;
    *(int *)((int)stk + 60) = t16;
    *(Stk3 *)(t16) = vecMake((u13 + 103.0f), (u15 + 7.0f), u14);
    *(float *)0x8C33EE70 = (((*(float *)0x8C33EE80) - (*(float *)0x8C33EE78)) * 231.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)(R13); }
    sprPutAtAlpha(0x8C33EE60, *(Stk3 *)(((int)stk + 48)), F15);
    u20 = *(float *)((R14 + 0x0));
    u21 = *(float *)((R14 + 0x8));
    u22 = *(float *)((R14 + 0x4));
    t23 = R13;
    *(int *)((int)stk + 44) = t23;
    *(Stk3 *)(t23) = vecMake((u20 + 221.0f), (u22 + 7.0f), u21);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(R13); }
    sprPutAtAlpha(0x8C33EEB0, *(Stk3 *)(((int)stk + 32)), F15);
    *(unsigned int *)(((int)stk + 80)) = 0x96FFFFFF;
    u25 = *(float *)((R14 + 0x8));
    u26 = *(float *)((R14 + 0x4));
    u27 = *(float *)((R14 + 0x0));
    t28 = R13;
    *(int *)((int)stk + 28) = t28;
    *(Stk3 *)(t28) = vecMake((u27 + 103.0f), (u26 + -19.0f), (u25 + 0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    primRectIncGradX(0x76, 0x27, 0x1EFFFFFF, (*(int *)(((int)stk + 80))), *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 117.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    primRectIncGradX(0x76, 0x27, (*(int *)(((int)stk + 80))), 0x1EFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12));
    R8 = (0x8C33ECD0);
    F13 = (-13.0f);
    F15 = (0.100000001f);
    if ((R9 == 0)) goto L_8C0A36E8;
    u38 = *(float *)((R14 + 0x0));
    u39 = *(float *)((R14 + 0x8));
    u40 = *(float *)((R14 + 0x4));
    t41 = R13;
    *(int *)((int)stk + 76) = t41;
    *(Stk3 *)(t41) = vecMake((u38 + 223.0f), (u40 + -23.0f), (u39 + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(R13); }
    primRectIncGradX(0xF1, 0x2F, 0xAA000000, 0xAA000000, *(Stk3 *)(((int)stk + 64)), *(Stk1 *)((int)stk + 64 + 12));
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((R14 + 0x0))) + 41.0f), ((*(float *)((R14 + 0x4))) + F13), 0.00499999989f);
    hudSignLastPut(F12);
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((R14 + 0x0))) + 97.0f), ((*(float *)((R14 + 0x4))) + -42.0f), F15);
    standBarDraw(0x1F, 0x16, 0x1);
    L_8C0A36E8:;
    u49 = *(float *)((R14 + 0x0));
    u50 = *(float *)((R14 + 0x8));
    u51 = *(float *)((R14 + 0x4));
    t52 = R13;
    *(int *)((int)stk + 76) = t52;
    *(Stk3 *)(t52) = vecMake((u49 + 8.0f), (u51 + -21.0f), (u50 + F15));
    u53 = *(float *)((R14 + 0x0));
    u54 = *(float *)((R14 + 0x8));
    u55 = *(float *)((R14 + 0x4));
    *(int *)((int)stk + 72) = (((int)stk + 76) + 0x2C);
    *(Stk3 *)((((int)stk + 76) + 0x2C)) = vecMake((u53 + -26.0f), (u55 + F13), (u54 + -0.0500000007f));
    F14 = (-26.0f);
    F15 = (-0.0500000007f);
    if (((*(int *)(((int)stk + 92))) != 0)) goto L_8C0A3730;
    t63 = *(int *)(((int)stk + 84));
    R0 = (t63);
    F4 = (((*(float *)((R14 + 0x0))) + F14));
    F5 = (((*(float *)((R14 + 0x4))) + F13));
    F6 = (((*(float *)((R14 + 0x8))) + F15));
    if ((t63 == 0)) goto L_8C0A3CB4;
    if ((R0 == 1)) goto L_8C0A3CB4;
    if ((R0 == 2)) goto L_8C0A3CBC;
    if ((R0 == 3)) goto L_8C0A3CC4;
    if (!((R0 == 4))) goto L_8C0A3CE8;
    t73 = R13;
    *(int *)((int)stk + 76) = t73;
    *(Stk3 *)(t73) = vecMake(F4, F5, F6);
    goto L_8C0A3CD2;
    L_8C0A3CE8:;
    return R0;
    L_8C0A3CD2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R13); }
    R0 = ((hudSignPut((*(int *)(((int)stk + 84))), R5, R6, R7, *(Stk3 *)(((int)stk + 68)), *(Stk1 *)((int)stk + 68 + 12), F12)));
    goto L_8C0A3CE8;
    L_8C0A3CC4:;
    t77 = R13;
    *(int *)((int)stk + 76) = t77;
    *(Stk3 *)(t77) = vecMake(F4, F5, F6);
    goto L_8C0A3CD2;
    L_8C0A3CBC:;
    t78 = R13;
    *(int *)((int)stk + 76) = t78;
    *(Stk3 *)(t78) = vecMake(F4, F5, F6);
    goto L_8C0A3CD2;
    L_8C0A3CB4:;
    t79 = R13;
    *(int *)((int)stk + 76) = t79;
    *(Stk3 *)(t79) = vecMake(F4, F5, F6);
    goto L_8C0A3CD2;
    L_8C0A3730:;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 80) + 0x14)) = *(struct mv5 *)(0x8C110710); }
    if ((R9 == 0)) goto L_8C0A3746;
    F14 = (0.5f);
    L_8C0A3748:;
    *(float *)(((int)stk + 88)) = ((*(float *)((R14 + 0x4))) + -15.0f);
    *(unsigned int *)(((int)stk + 80)) = ((*(int *)(((int)stk + 84))) << 2);
    t85 = *(int *)(((int)stk + 84));
    R0 = (t85);
    R11 = ((((int)stk + 80) + 0x40));
    F12 = (0.509803951f);
    F5 = (((*(float *)((R14 + 0x4))) + -14.0f));
    if ((t85 == 0)) goto L_8C0A37C8;
    if ((R0 != 1)) goto L_8C0A377C;
    u92 = *(float *)((R14 + 0x0));
    u93 = *(float *)((R14 + 0x8));
    u94 = *(float *)(((int)stk + 88));
    t95 = R10;
    *(int *)((int)stk + 76) = t95;
    *(Stk3 *)(t95) = vecMake((u92 + 38.0f), u94, (u93 + F15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R11) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)(R10); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 67.0f);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - 17.0f);
    *(float *)((R11 + 0x0)) = ((*(float *)((R11 + 0x0))) - 37.0f);
    *(float *)((R11 + 0x4)) = ((*(float *)((R11 + 0x4))) - F13);
    R1 = (0x41880000);
    if ((R9 == 0)) goto L_8C0A39D2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R11); }
    t103 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((t103 << 2) + t103) << 2) << 2) + R8), *(Stk3 *)(((int)stk + 68)), F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    R0 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12), F14)));
    goto L_8C0A3CE8;
    L_8C0A39D2:;
    if (!((a11 == 1))) goto L_8C0A3BE4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(R13); }
    markerShowStart((*(int *)(((int)stk + 84))), R5, R6, R7, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)));
    goto L_8C0A3BE4;
    L_8C0A3BE4:;
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((R14 + 0x0))) + 220.0f), ((*(float *)((R14 + 0x4))) + -19.0f), 0.0799999982f);
    R0 = ((standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28))));
    goto L_8C0A3CE8;
    L_8C0A377C:;
    if ((R0 != 2)) goto L_8C0A3784;
    u117 = *(float *)((R14 + 0x0));
    u118 = *(float *)((R14 + 0x8));
    u119 = *(float *)((R14 + 0x4));
    t120 = R10;
    *(int *)((int)stk + 76) = t120;
    *(Stk3 *)(t120) = vecMake((u117 + 40.0f), (u119 + -12.0f), (u118 + F15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R11) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)(R10); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 81.0f);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - 24.0f);
    *(float *)((R11 + 0x0)) = ((*(float *)((R11 + 0x0))) - 38.0f);
    *(float *)((R11 + 0x4)) = ((*(float *)((R11 + 0x4))) - -6.0f);
    R1 = (0xC0C00000);
    if ((R9 != 0)) goto L_8C0A3A48;
    goto L_8C0A39D2;
    L_8C0A3A48:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R11); }
    t128 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((t128 << 2) + t128) << 2) << 2) + R8), *(Stk3 *)(((int)stk + 68)), F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    R0 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12), F14)));
    goto L_8C0A3CE8;
    L_8C0A3784:;
    if ((R0 != 3)) goto L_8C0A378C;
    u135 = *(float *)((R14 + 0x0));
    u136 = *(float *)((R14 + 0x8));
    t137 = R10;
    *(int *)((int)stk + 76) = t137;
    *(Stk3 *)(t137) = vecMake((u135 + 28.0f), F5, (u136 + F15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R11) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)(R10); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 63.0f);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - 18.0f);
    *(float *)((R11 + 0x0)) = ((*(float *)((R11 + 0x0))) - 33.0f);
    *(float *)((R11 + 0x4)) = ((*(float *)((R11 + 0x4))) - -12.0f);
    R1 = (0xC1400000);
    if ((R9 == 0)) goto L_8C0A3BAE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R11); }
    t145 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((t145 << 2) + t145) << 2) << 2) + R8), *(Stk3 *)(((int)stk + 68)), F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    R0 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12), F14)));
    goto L_8C0A3CE8;
    L_8C0A3BAE:;
    if ((a11 != 1)) goto L_8C0A3BE4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(R13); }
    markerShowStart((*(int *)(((int)stk + 84))), R5, R6, R7, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)));
    goto L_8C0A3BE4;
    L_8C0A378C:;
    if ((R0 != 4)) goto L_8C0A3794;
    u155 = *(float *)((R14 + 0x0));
    u156 = *(float *)((R14 + 0x8));
    t157 = R10;
    *(int *)((int)stk + 76) = t157;
    *(Stk3 *)(t157) = vecMake((u155 + 29.0f), F5, (u156 + F15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R11) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)(R10); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 61.0f);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - 20.0f);
    *(float *)((R11 + 0x0)) = ((*(float *)((R11 + 0x0))) - 31.0f);
    *(float *)((R11 + 0x4)) = ((*(float *)((R11 + 0x4))) - -10.0f);
    R1 = (0xC1200000);
    if ((R9 != 0)) goto L_8C0A3C0C;
    goto L_8C0A3BAE;
    L_8C0A3C0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R11); }
    t165 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((t165 << 2) + t165) << 2) << 2) + R8), *(Stk3 *)(((int)stk + 68)), F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    R0 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12), F14)));
    goto L_8C0A3CE8;
    L_8C0A3794:;
    goto L_8C0A3CE8;
    L_8C0A37C8:;
    u171 = *(float *)((R14 + 0x0));
    u172 = *(float *)((R14 + 0x8));
    u173 = *(float *)(((int)stk + 88));
    t174 = R10;
    *(int *)((int)stk + 76) = t174;
    *(Stk3 *)(t174) = vecMake((u171 + 49.0f), u173, (u172 + F15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R11) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)(R10); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 71.0f);
    *(float *)((R13 + 0x4)) = ((*(float *)((R13 + 0x4))) - 17.0f);
    u177 = *(float *)((R11 + 0x0));
    *(float *)((R11 + 0x0)) = (u177 - 41.0f);
    *(float *)((R11 + 0x4)) = ((*(float *)((R11 + 0x4))) - F13);
    R1 = (0x41880000);
    F0 = ((u177 - 41.0f));
    F1 = (41.0f);
    if ((R9 != 0)) goto L_8C0A3864;
    R0 = (a11);
    if ((a11 != 1)) goto L_8C0A3856;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(R13); }
    R0 = ((markerShowStart((*(int *)(((int)stk + 84))), R5, R6, R7, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)))));
    L_8C0A3856:;
    if (((*(int *)(((int)stk + 96))) == 0)) goto L_8C0A3860;
    goto L_8C0A3BE4;
    L_8C0A3860:;
    goto L_8C0A3CE8;
    L_8C0A3864:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R11); }
    t191 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((t191 << 2) + t191) << 2) << 2) + R8), *(Stk3 *)(((int)stk + 68)), F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(R10); }
    R0 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12), F14)));
    goto L_8C0A3CE8;
    L_8C0A3746:;
    F14 = (F12);
    goto L_8C0A3748;
    L_8C0A34FC:;
    F15 = (F12);
    goto L_8C0A34FE;
}

