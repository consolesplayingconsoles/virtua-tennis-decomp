/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int sprPutAtAlpha(int, Stk3, float);
int sklDrawNode(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int hudFlagPut(int a4, Stk3 s, float f4);

int sklDrawNode(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t3;
    int t6;
    int t11;
    int t29;
    int t33;
    int t41;
    int t42;
    int t43;
    int t44;
    int t50;
    int stk[11];

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
    int T_;
    int R1004;
    int R1008;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R14 = (R4);
    L_8C01B964:;
    t3 = (*(int *)0x8C294668) != 0;
    R0 = ((nlLoadMatrix((0xC0 + R14), f4, f5, f6, f7, f8, f9)));
    R4 = (0x8C294668);
    if (t3) goto L_8C01B97A;
    t6 = *(int *)((R14 + 0x0));
    R0 = (t6);
    if ((t6 == 29)) goto L_8C01BA2A;
    L_8C01B97A:;
    if (((*(int *)((R4 + 0x0))) == 0)) goto L_8C01B986;
    t11 = *(int *)((R14 + 0x0));
    R0 = (t11);
    if ((t11 == 7)) goto L_8C01BA2A;
    L_8C01B986:;
    if (((*(int *)0x8C29466C) != 0)) goto L_8C01B996;
    if (((unsigned int)(*(int *)((R14 + 0x0))) > (unsigned int)0x1D)) goto L_8C01BA2A;
    L_8C01B996:;
    R0 = (0x8C29466C);
    if (((*(int *)0x8C29466C) == 0)) goto L_8C01B9AE;
    if (((unsigned int)(*(int *)((R14 + 0x0))) < (unsigned int)0x1A)) goto L_8C01B9AE;
    if (((unsigned int)(*(int *)((R14 + 0x0))) <= (unsigned int)0x1C)) goto L_8C01BA2A;
    L_8C01B9AE:;
    if (((int)(*(int *)((R14 + 0x3C))) <= 0)) goto L_8C01BA24;
    if (((*(int *)((R14 + 0x38))) == 0)) goto L_8C01BA24;
    t29 = *(int *)((R14 + 0x38));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlMultiMatrix((0xC0 + t29));
    t33 = *(int *)((R14 + 0x3C));
    R10 = (t29);
    R11 = (0x0);
    R13 = (0x0);
    R4 = (0x0);
    R8 = (0x1);
    R9 = (t33);
    if (((int)t33 <= 0)) goto L_8C01BA1E;
    L_8C01B9DE:;
    t41 = *(int *)((R10 + 0x4));
    t42 = *(int *)((R14 + 0x4));
    t43 = *(int *)((((0x80 + R14) + R13) + 0x0));
    t44 = *(int *)((((R14 + 0x40) + R13) + 0x0));
    R1008 = ((t44 + t41) + 0xC);
    R1004 = ((t42 + t43) + 0xC);
    nlCalcPoint((t44 + t41), (t42 + t43));
    nlCalcVector((R1008), (R1004));
    *(unsigned int *)(((t42 + t43) + 0x0)) = ((*(int *)(((t42 + t43) + 0x0))) | R8);
    t50 = (int)(R11 + 0x1) < (int)R9;
    R11 = ((R11 + 0x1));
    R13 = ((R13 + 0x4));
    if (t50) goto L_8C01B9DE;
    L_8C01BA1E:;
    nlPopMatrix(0x1);
    L_8C01BA24:;
    R0 = ((nlObjPut((*(int *)((R14 + 0x4))))));
    L_8C01BA2A:;
    if (((*(int *)((R14 + 0x2C))) == 0)) goto L_8C01BA34;
    R0 = ((((int (*)(int))(sklDrawNode))((*(int *)((R14 + 0x2C))))));
    L_8C01BA34:;
    if (((*(int *)((R14 + 0x30))) == 0)) goto L_8C01BA6C;
    R14 = ((*(int *)((R14 + 0x30))));
    goto L_8C01B964;
    L_8C01BA6C:;
    return R0;
}

int hudFlagPut(int a4, Stk3 s, float f4)
{
    int t1;
    int stk[32];

    stk[21] = s.w[0];
    stk[22] = s.w[1];
    stk[23] = s.w[2];
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 16) + 0x4)) = *(struct mv15 *)(0x8C10F0C4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x44)); }
    t1 = *(int *)(((((*(int *)(((int)stk + 16))) << 2) + (((int)stk + 4) + 0x10)) + 0x0));
    return (sprPutAtAlpha((((((t1 << 2) + t1) << 2) << 2) + 0x8C33AB30), *(Stk3 *)(((int)stk + 4)), f4));
}
