/* Straight-line functions with calls and guards (batch gen_rc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlAddVector(int, int);
int nlScaleVector(int, int, float);
float vecDistXZ(Stk3, Stk3);
float zoneListSample(int a4, int a5, int a6, int a7, int a8);

float zoneListSample(int a4, int a5, int a6, int a7, int a8)
{
    int t6;
    int t19;
    int t26;
    int t28;
    int t30;
    float u34;
    int stk[31];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F4;
    float F14;
    float F15;
    int T_;
    stk[22] = a8;
    R4 = a4;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R4) = *(struct mv3 *)(0x8C1016D4); }
    t6 = R4;
    R1 = (R4);
    R10 = (0x0);
    R11 = (0x8C2FC31C);
    R12 = (0x8C2FC318);
    R14 = (0x1C0);
    R4 = (0x0);
    R8 = t6;
    R9 = ((((int)stk + 28) + 0x3C));
    F14 = ((-1.0f));
    F15 = (0.0f);
    L_8C03CFC2:;
    R0 = (0x8C2FC310);
    if (((int)R10 < (int)(*(int *)((((*(int *)((R12 + 0x0))) << 2) + 0x8C2FC310))))) goto L_8C03CF40;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C03CFE6;
    R0 = ((nlScaleVector(R8, R8, (1.0f / (float)(*(int *)(((int)stk + 32)))))));
    L_8C03CFE6:;
    return F15;
    L_8C03CF40:;
    t19 = *(int *)((R12 + 0x0));
    *(unsigned int *)(((int)stk + 28)) = (((t19 * R14) + R11) + (R10 * 0x1C));
    R13 = ((R10 * 0x1C));
    if ((!((*(float *)((R9 + 0x4))) > (*(float *)(((((t19 * R14) + R11) + (R10 * 0x1C)) + 0x4)))))) goto L_8C03CFC0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 28)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R9); }
    t26 = *(int *)0x8C2FC318;
    t28 = !((*(float *)(((((t26 * R14) + R11) + R13) + 0x18))) > (vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))));
    R1 = ((((t26 * R14) + R11) + R13));
    if (t28) goto L_8C03CFC0;
    t30 = *(int *)((R12 + 0x0));
    R4 = (((t30 * R14) + R11));
    if ((!((*(float *)(((((t30 * R14) + R11) + R13) + 0x4))) > (F15 + F14)))) goto L_8C03CFC0;
    *(unsigned int *)(((int)stk + 28)) = (R4 + R13);
    u34 = *(float *)(((R4 + R13) + 0x4));
    nlAddVector(R8, ((R4 + R13) + 0xC));
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x1);
    F15 = (u34);
    L_8C03CFC0:;
    R10 = ((R10 + 0x1));
    goto L_8C03CFC2;
}
