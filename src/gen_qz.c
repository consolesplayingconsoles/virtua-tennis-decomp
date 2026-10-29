/* Straight-line functions with calls and guards (batch gen_qz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
int nlSubVector3op(int, int, int);
int vecLineCrossXZ(Stk4, Stk3, Stk3, Stk3);
int vecSegCrossXZ(Stk10 s);

int vecSegCrossXZ(Stk10 s)
{
    float u9;
    float u14;
    int t18;
    float u21;
    int t27;
    float u31;
    int t35;
    int stk[43];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    int T_;
    stk[25] = s.w[0];
    stk[26] = s.w[1];
    stk[27] = s.w[2];
    stk[28] = s.w[3];
    stk[29] = s.w[4];
    stk[30] = s.w[5];
    stk[31] = s.w[6];
    stk[32] = s.w[7];
    stk[33] = s.w[8];
    stk[34] = s.w[9];
    nlSubVector3op((((int)stk + 56) + 0x18), (((int)stk + 56) + 0x38), (((int)stk + 56) + 0x2C));
    nlSubVector3op((((int)stk + 56) + 0xC), (((int)stk + 56) + 0x50), (((int)stk + 56) + 0x44));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 56) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    *(int *)((int)stk + 4) = ((int)stk + 56);
    *(int *)((int)stk + 4) = ((int)stk + 56);
    vecLineCrossXZ(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
    R14 = (((int)stk + 56));
    F3 = (0.0f);
    F4 = ((*(float *)((((int)stk + 56) + 0x0))));
    if (((*(float *)(((int)stk + 80))) == 0.0f)) goto L_8C017522;
    u9 = *(float *)(((int)stk + 80));
    F1 = ((F4 - *(float *)&s.w[0]));
    F5 = (((F4 - *(float *)&s.w[0]) / u9));
    if ((F3 > ((F4 - *(float *)&s.w[0]) / u9))) goto L_8C017584;
    if ((F5 > 1.0f)) goto L_8C017584;
    L_8C017522:;
    u14 = *(float *)(((int)stk + 68));
    F3 = (0.0f);
    F5 = (u14);
    if ((u14 == 0.0f)) goto L_8C01753E;
    t18 = F3 > ((F4 - *(float *)&s.w[6]) / F5);
    F4 = (((F4 - *(float *)&s.w[6]) / F5));
    if (t18) goto L_8C017584;
    if ((F4 > 1.0f)) goto L_8C017584;
    L_8C01753E:;
    u21 = *(float *)(((int)stk + 88));
    F3 = (0.0f);
    F4 = (u21);
    F5 = ((*(float *)((R14 + 0x8))));
    if ((u21 == 0.0f)) goto L_8C017564;
    t27 = F3 > ((F5 - *(float *)&s.w[2]) / F4);
    F1 = ((F5 - *(float *)&s.w[2]));
    F4 = (((F5 - *(float *)&s.w[2]) / F4));
    if (t27) goto L_8C017584;
    if ((F4 > 1.0f)) goto L_8C017584;
    L_8C017564:;
    u31 = *(float *)(((int)stk + 76));
    F3 = (0.0f);
    F4 = (u31);
    if ((u31 == 0.0f)) goto L_8C01758E;
    t35 = F3 > ((F5 - *(float *)&s.w[8]) / F4);
    F4 = (((F5 - *(float *)&s.w[8]) / F4));
    if (t35) goto L_8C017584;
    if ((!(F4 > 1.0f))) goto L_8C01758E;
    L_8C017584:;
    return 0x0;
    L_8C01758E:;
    return 0x1;
}
