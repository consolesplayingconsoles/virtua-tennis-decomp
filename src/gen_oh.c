/* Straight-line functions with calls and guards (batch gen_oh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawMember(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
extern int screenSegVisibleRaised();
int screenSphereVisibleRaised(Stk3, float);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
int crowdDrawBlock(int a4, int a5, int a6, int a7, int a8, int a9);

int crowdDrawBlock(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t4;
    int t9;
    int t10;
    int t21;
    int t25;
    int t36;
    int t58;
    int t63;
    int stk[28];

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
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned short *)(((int)stk + 60)) = R6;
    *(unsigned int *)(((int)stk + 44)) = (R4 + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((R4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R4); }
    *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
    vecAdd(R4, R5, R6, R7, *(int *)((int)stk + 4));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x20);
    vecDiv(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x20), (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 44)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R4); }
    t4 = (((int (*)(int, Stk3, Stk3))(screenSegVisibleRaised))(0xA, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) != 0;
    R11 = (R7);
    R14 = (R4);
    R9 = (R5);
    if (t4) goto L_8C0B3A8C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((R14 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((R14 + 0x18)); }
    t9 = (((int (*)(int, int, int, int, Stk3, Stk3))(screenSegVisibleRaised))(0xA, R5, R6, R7, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)))) != 0;
    if (t9) goto L_8C0B3A8C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x14)); }
    t10 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 40.0f);
    R0 = (t10);
    if ((t10 != 0)) goto L_8C0B3A8C;
    L_8C0B3C46:;
    return R0;
    L_8C0B3A8C:;
    *(unsigned int *)(((int)stk + 56)) = (R11 - 1);
    R0 = (0x8C0B3B0C);
    R10 = (0x1F4);
    R12 = (0x1D);
    R13 = (0x1E);
    R14 = (0x0);
    R8 = (0x8C0EFCD0);
    F15 = (6.0f);
    if (((int)(R11 - 1) > 0)) goto L_8C0B3AA8;
    goto L_8C0B3C46;
    L_8C0B3AA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((((R14 << 1) + R14) << 2) + R9)); }
    t21 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), F15);
    R0 = (t21);
    if (!((t21 != 0))) goto L_8C0B3C3A;
    *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
    R0 = (0x44);
    if ((a8 == 0)) goto L_8C0B3B1C;
    *(unsigned int *)(((int)stk + 52)) = (R12 - ((int)((int)(R11 + R14) % (int)R13)));
    goto L_8C0B3B28;
    L_8C0B3C3A:;
    t25 = (int)(R14 + 0x1) >= (int)(*(int *)(((int)stk + 56)));
    R14 = ((R14 + 0x1));
    if (t25) goto L_8C0B3C46;
    goto L_8C0B3AA8;
    L_8C0B3B28:;
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 44)) = ((((R14 << 1) + R14) << 2) + R9);
    nlTranslate((*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x0))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x4))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x8))));
    t36 = *(short *)(((int)stk + 60));
    *(unsigned int *)(((int)stk + 44)) = (unsigned short)t36;
    nlRotateAY((unsigned short)t36);
    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * R10) + 0x8C344BE8))), a9);
    nlPopMatrix(0x1);
    R0 = (0x44);
    R14 = ((R14 + 0x1));
    if ((a8 == 0)) goto L_8C0B3B88;
    *(unsigned int *)(((int)stk + 52)) = (R12 - ((int)((int)(R11 + R14) % (int)R13)));
    L_8C0B3B94:;
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 48)) = ((((R14 << 1) + R14) << 2) + R9);
    nlTranslate((*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x0))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x4))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x8))));
    nlRotateAY((*(int *)(((int)stk + 44))));
    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * R10) + 0x8C344BE8))), a9);
    t58 = (R14 + 0x1) != (*(int *)(((int)stk + 56)));
    R0 = ((nlPopMatrix(0x1)));
    if (t58) goto L_8C0B3C3A;
    t63 = ((int)((int)(R11 + (R14 + 0x1)) % (int)R13));
    R14 = ((R14 + 0x1));
    R4 = t63;
    if ((a8 == 0)) goto L_8C0B3BFA;
    *(unsigned int *)(((int)stk + 52)) = (R12 - R4);
    L_8C0B3BFC:;
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 48)) = ((((R14 << 1) + R14) << 2) + R9);
    nlTranslate((*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x0))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x4))), (*(float *)((((((R14 << 1) + R14) << 2) + R9) + 0x8))));
    nlRotateAY((*(int *)(((int)stk + 44))));
    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * R10) + 0x8C344BE8))), a9);
    R0 = ((nlPopMatrix(0x1)));
    goto L_8C0B3C3A;
    L_8C0B3BFA:;
    *(unsigned int *)(((int)stk + 52)) = R4;
    goto L_8C0B3BFC;
    L_8C0B3B88:;
    *(unsigned int *)(((int)stk + 52)) = ((int)((int)(R11 + R14) % (int)R13));
    goto L_8C0B3B94;
    L_8C0B3B1C:;
    *(unsigned int *)(((int)stk + 52)) = ((int)((int)(R11 + R14) % (int)R13));
    goto L_8C0B3B28;
}
