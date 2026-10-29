/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int btnGuideDraw(int, int, int, Stk3, Stk1, float);
int camWorldToView(Stk4);
int entryGetColorId(int);
int screenProject(int, int, Stk3);
Stk3 vecMake(float, float, float);
int hudPlayerMarkers(void);

int hudPlayerMarkers(void)
{
    int t21;
    int t27;
    int t28;
    int t34;
    int t35;
    int t40;
    int t49;
    int t54;
    int t55;
    int t61;
    int t62;
    int stk[38];

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
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    R4 = (0x8C287ACC);
    if (((*(int *)0x8C185410) == 0)) goto L_8C0960C8;
    L_8C0962A6:;
    return R0;
    L_8C0960C8:;
    R0 = (0x78);
    if (((*(int *)((R4 + 0x78))) == 0)) goto L_8C0960D4;
    goto L_8C0962A6;
    L_8C0960D4:;
    R0 = (0x8C09610C);
    R10 = ((((int)stk + 32) + 0x44));
    R11 = (0x0);
    R12 = (0x8C1850A8);
    R13 = ((((int)stk + 32) + 0x38));
    R9 = (0x0);
    F14 = (17.0f);
    F15 = (0.00200000009f);
    L_8C09629A:;
    if (((int)R11 >= (int)(*(int *)0x8C287ADC))) goto L_8C0962A6;
    R14 = (((R11 * 0xD78) + 0x8C287D84));
    if ((((*(int *)((((R11 * 0xD78) + 0x8C287D84) + 0xB60))) & 0x40000) == 0)) goto L_8C096134;
    if (((*(int *)((R14 + 0xB68))) != 5)) goto L_8C096134;
    *(unsigned int *)0x8C1850A0 = R9;
    L_8C096134:;
    t21 = entryGetColorId(R11);
    *(unsigned int *)(((int)stk + 40)) = (t21 << 2);
    R0 = (t21);
    R8 = (t21);
    if (((*(int *)0x8C287C60) != 0)) goto L_8C096188;
    t27 = *(int *)((((*(int *)((R14 + 0xB64))) << 2) + 0x8C29B898));
    *(unsigned int *)(((int)stk + 48)) = t27;
    t28 = *(int *)((t27 + 0x10));
    R4 = (t28);
    if (((0x20 & t28) != 0)) goto L_8C096164;
    if (((0x80 & R4) == 0)) goto L_8C09616A;
    L_8C096164:;
    *(unsigned int *)((R12 + (*(int *)(((int)stk + 40))))) = 0x1;
    L_8C09616A:;
    t34 = *(int *)((((*(int *)((R14 + 0xB64))) << 2) + 0x8C29B898));
    *(unsigned int *)(((int)stk + 44)) = t34;
    t35 = *(int *)((t34 + 0x10));
    R0 = (0x8C29B898);
    R4 = (t35);
    if (((0x10 & t35) != 0)) goto L_8C096184;
    if (((0x40 & R4) == 0)) goto L_8C096188;
    L_8C096184:;
    t40 = *(int *)(((int)stk + 40));
    *(unsigned int *)((R12 + t40)) = R9;
    R0 = (t40);
    L_8C096188:;
    if (!(((*(int *)0x8C1850A0) != 0))) goto L_8C096298;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R10) = *(struct mv3 *)((0xAE8 + R14)); }
    *(float *)((R10 + 0x4)) = ((*(float *)((R10 + 0x4))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(R10); }
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x38);
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x38);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
    screenProject((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x1C), *(Stk3 *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x140);
    t49 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 32)) = ((t49 + 0xD2) + 0x10);
    R2 = (((t49 + 0xD2) + 0x10));
    if (((*(int *)((R12 + (*(int *)(((int)stk + 40)))))) != 1)) goto L_8C096264;
    t54 = *(int *)(((int)stk + 36));
    t55 = R13;
    *(int *)((int)stk + 28) = t55;
    *(Stk3 *)(t55) = vecMake((float)(t54 + 0x31), (float)(0x1D1 - R2), F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    R5 = (0x1);
    F4 = ((*(float *)0x8C1850A4));
    goto L_8C096292;
    L_8C096298:;
    R11 = ((R11 + 0x1));
    goto L_8C09629A;
    L_8C096292:;
    R0 = ((btnGuideDraw(R8, R5, R6, *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12), F4)));
    goto L_8C096298;
    L_8C096264:;
    t61 = *(int *)(((int)stk + 36));
    t62 = R13;
    *(int *)((int)stk + 28) = t62;
    *(Stk3 *)(t62) = vecMake((float)(t61 - 36), (float)(0x1D2 - R2), F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    R5 = (0x0);
    F4 = ((*(float *)0x8C1850A4));
    goto L_8C096292;
}
