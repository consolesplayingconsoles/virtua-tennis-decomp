/* Straight-line functions with calls and guards (batch gen_uv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int btnGuideDraw(int, int, Stk3, float);
int camWorldToView(Stk4);
int entryGetColorId(int);
int screenProject(int, int, Stk3);
Stk3 vecMake(float, float, float);
int hudPlayerMarkers(void);

int hudPlayerMarkers(void)
{
    int stk[38];
    int t28;
    int t35;

    register int R0;
    register int R1;
    register int R3;
    int R4;
    register int R6;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
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
    v0_0 = ((((int)stk + 32) + 0x44));
    v0_1 = (0x0);
    v0_2 = (0x8C1850A8);
    v0_3 = ((((int)stk + 32) + 0x38));
    v0_4 = (0x0);
    w0_0 = (17.0f);
    w0_1 = (0.00200000009f);
    L_8C09629A:;
    if (((int)v0_1 >= (int)(*(int *)0x8C287ADC))) goto L_8C0962A6;
    v0_6 = (((v0_1 * 0xD78) + (int)Player));
    if ((((*(int *)((((v0_1 * 0xD78) + (int)Player) + 0xB60))) & 0x40000) == 0)) goto L_8C096134;
    if (((*(int *)((v0_6 + 0xB68))) != 5)) goto L_8C096134;
    *(unsigned int *)0x8C1850A0 = v0_4;
    L_8C096134:;
    v0_5 = entryGetColorId(v0_1);
    *(unsigned int *)(((int)stk + 40)) = (v0_5 << 2);
    R0 = (v0_5);
    v0_5 = (v0_5);
    if (((*(int *)0x8C287C60) != 0)) goto L_8C096188;
    v0_7 = *(int *)((((*(int *)((v0_6 + 0xB64))) << 2) + (int)padPeri));
    *(unsigned int *)(((int)stk + 48)) = v0_7;
    t28 = *(int *)((v0_7 + 0x10));
    R4 = (t28);
    if (((0x20 & t28) != 0)) goto L_8C096164;
    if (((0x80 & R4) == 0)) goto L_8C09616A;
    L_8C096164:;
    *(unsigned int *)((v0_2 + (*(int *)(((int)stk + 40))))) = 0x1;
    L_8C09616A:;
    v0_7 = *(int *)((((*(int *)((v0_6 + 0xB64))) << 2) + (int)padPeri));
    *(unsigned int *)(((int)stk + 44)) = v0_7;
    t35 = *(int *)((v0_7 + 0x10));
    R0 = ((int)padPeri);
    R4 = (t35);
    if (((0x10 & t35) != 0)) goto L_8C096184;
    if (((0x40 & R4) == 0)) goto L_8C096188;
    L_8C096184:;
    v0_7 = *(int *)(((int)stk + 40));
    *(unsigned int *)((v0_2 + v0_7)) = v0_4;
    R0 = (v0_7);
    L_8C096188:;
    if (!(((*(int *)0x8C1850A0) != 0))) goto L_8C096298;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)((0xAE8 + v0_6)); }
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) + w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(v0_0); }
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x38);
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x38);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
    screenProject((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x1C), *(Stk3 *)(((int)stk + 4)));
    *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x140);
    v0_6 = *(int *)(((int)stk + 32));
    *(unsigned int *)(((int)stk + 32)) = ((v0_6 + 0xD2) + 0x10);
    v0_6 = (((v0_6 + 0xD2) + 0x10));
    if (((*(int *)((v0_2 + (*(int *)(((int)stk + 40)))))) != 1)) goto L_8C096264;
    v0_7 = *(int *)(((int)stk + 36));
    v0_8 = v0_3;
    *(int *)((int)stk + 28) = v0_8;
    *(Stk3 *)(v0_8) = vecMake((float)(v0_7 + 0x31), (float)(0x1D1 - v0_6), w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(v0_3); }
    v0_6 = (0x1);
    w0_2 = ((*(float *)0x8C1850A4));
    goto L_8C096292;
    L_8C096298:;
    v0_1 = ((v0_1 + 0x1));
    goto L_8C09629A;
    L_8C096292:;
    R0 = ((btnGuideDraw(v0_5, v0_6, *(Stk3 *)(((int)stk + 16)), w0_2)));
    goto L_8C096298;
    L_8C096264:;
    v0_7 = *(int *)(((int)stk + 36));
    v0_8 = v0_3;
    *(int *)((int)stk + 28) = v0_8;
    *(Stk3 *)(v0_8) = vecMake((float)(v0_7 - 36), (float)(0x1D2 - v0_6), w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(v0_3); }
    v0_6 = (0x0);
    w0_2 = ((*(float *)0x8C1850A4));
    goto L_8C096292;
}
