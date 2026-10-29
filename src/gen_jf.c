/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int evSkidMarkSpawn(int, int, int);
int mtxGetYaw(int);
int netVecSubXZ(Stk4, Stk3);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateV(int, int);
float nlScalor(int);
int primRectInc(int, int, int, Stk3, Stk1);
int primSprDraw(int, int, int, int, Stk3);
int primSprDrawOfs(int, int, int, int, Stk3);
int seFootstepPlay(int, int);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
float seFootstepCheck(int a4, int a5);
int stageSelNameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int hudScoreIconPut(int a4, Stk3 s, float f4);


int stageSelNameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t23;
    int t33;
    int t35;
    int t39;
    int t41;
    int t45;
    int t47;
    int t50;
    int t52;
    int t56;
    int t58;
    int t59;
    int t60;
    int t62;
    int t64;
    int t66;
    int stk[37];

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
    int T_;
    stk[26] = a8;
    stk[27] = a9;
    stk[28] = a10;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 32)) = R5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x20)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x14)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x8)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 68))) - 0.00999999978f);
    *(float *)(((((int)stk + 28) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x8) + 0x0))) + 62.0f);
    *(float *)(((((int)stk + 28) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x8) + 0x4))) + 48.0f);
    *(float *)(((((int)stk + 28) + 0x8) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x8) + 0x8))) - 0.00499999989f);
    *(unsigned int *)(((int)stk + 28)) = 0x8C340F84;
    R0 = (R4);
    R1 = (0x3BA3D70A);
    R10 = (0x8C341254);
    R11 = (0x8C341074);
    R12 = (0x8C340DA4);
    R13 = ((((int)stk + 28) + 0x4C));
    R14 = ((((int)stk + 28) + 0x8));
    R8 = (0x190);
    R9 = ((((int)stk + 28) + 0x14));
    if ((R4 == 0)) goto L_8C09EBD6;
    if ((R0 == 1)) goto L_8C09EC2C;
    if ((R0 == 2)) goto L_8C09EC52;
    if ((R0 == 3)) goto L_8C09EC74;
    if ((R0 == 4)) goto L_8C09EC9A;
    if ((R0 != 5)) goto L_8C09EBB2;
    if ((R6 != 0)) goto L_8C09ECCE;
    L_8C09EDC8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    primSprDraw((R11 + R8), 0x100, 0x100, 0xFF000000, *(Stk3 *)(((int)stk + 16)));
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((0x140 + R10));
    L_8C09EDFC:;
    t23 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)));
    L_8C09EE04:;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C09EE10;
    R6 = (0x808000);
    L_8C09EE12:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
    primSprDrawOfs((R10 + R8), 0x100, 0x100, R6, *(Stk3 *)(((int)stk + 16)));
    *(float *)((R9 + 0x0)) = ((*(float *)((R9 + 0x0))) - -103.0f);
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 6.0f);
    *(float *)((R9 + 0x8)) = ((*(float *)((R9 + 0x8))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R9); }
    return (primRectInc(0x61, 0x48, 0x80000000, *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12)));
    L_8C09EE10:;
    R6 = (0x800000);
    goto L_8C09EE12;
    L_8C09ECCE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t33 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x140 + R12), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((R11 + R8));
    L_8C09ECF2:;
    t35 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)));
    goto L_8C09EE04;
    L_8C09EBB2:;
    if ((R0 != 6)) goto L_8C09EBBA;
    if ((R6 == 0)) goto L_8C09EDC8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t39 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 28))) + 0x50), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((0xA0 + R10));
    L_8C09ED24:;
    t41 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)));
    goto L_8C09EE04;
    L_8C09EBBA:;
    if ((R0 != 7)) goto L_8C09EBC2;
    if ((R6 == 0)) goto L_8C09EDC8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t45 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 28))) + 0xA0), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((0xF0 + R10));
    L_8C09ED58:;
    t47 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)));
    goto L_8C09EE04;
    L_8C09EBC2:;
    if ((R0 != 8)) goto L_8C09EBCA;
    if ((R6 == 0)) goto L_8C09EDC8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t50 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((R12 + R8), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = (R10);
    L_8C09ED96:;
    t52 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)));
    goto L_8C09EE04;
    L_8C09EBCA:;
    if ((R0 != 9)) goto L_8C09EBD2;
    if ((R6 == 0)) goto L_8C09EDC8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t56 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((*(int *)(((int)stk + 28))), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((R10 + 0x50));
    goto L_8C09EDFC;
    L_8C09EBD2:;
    goto L_8C09EE04;
    L_8C09EC9A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t58 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0xF0 + R12), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    t59 = ((int (*)(int, Stk3))(sprPutAt))((0x140 + R11), *(Stk3 *)(((int)stk + 4)));
    goto L_8C09EE04;
    L_8C09EC74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t60 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((R12 + 0x50), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((R11 + 0x50));
    goto L_8C09ED96;
    L_8C09EC52:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t62 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R12, R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = (R11);
    goto L_8C09ED58;
    L_8C09EC2C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t64 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0xF0 + R12), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((0xF0 + R11));
    goto L_8C09ED24;
    L_8C09EBD6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t66 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0xA0 + R12), R5, R6, R7, *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R4 = ((0xA0 + R11));
    goto L_8C09ECF2;
}

int hudScoreIconPut(int a4, Stk3 s, float f4)
{
    int t23;
    int t25;
    int t30;
    int t32;
    int t34;
    int t36;
    int t40;
    int t42;
    int stk[25];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F15;
    int T_;
    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    R4 = a4;
    F4 = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
    *(float *)(((((int)stk + 16) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x28) + 0x4))) + -2.0f);
    R0 = (R4);
    R1 = ((((int)stk + 16) + 0x4));
    R11 = ((((int)stk + 16) + 0x28));
    R12 = (0x8C33B940);
    R13 = (0x8C33B940);
    R14 = ((((int)stk + 16) + 0x4));
    R5 = (0x8C10F948);
    F15 = (F4);
    F4 = (1.0f);
    if ((R4 == 0)) goto L_8C0985AC;
    if ((R0 == 1)) goto L_8C0985DC;
    if ((R0 == 2)) goto L_8C098618;
    if ((R0 == 3)) goto L_8C098654;
    if ((R0 != 4)) goto L_8C098588;
    L_8C0986F0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R11); }
    R4 = ((0x3C0 + R13));
    F4 = (F15);
    L_8C098702:;
    R0 = ((sprPutAtAlpha(R4, *(Stk3 *)(((int)stk + 4)), F4)));
    L_8C09870A:;
    return R0;
    L_8C098588:;
    if ((R0 != 5)) goto L_8C098590;
    goto L_8C0986F0;
    L_8C098590:;
    if ((R0 != 6)) goto L_8C098598;
    goto L_8C0986F0;
    L_8C098598:;
    if ((R0 != 7)) goto L_8C0985A0;
    goto L_8C0986F0;
    L_8C0985A0:;
    if ((R0 != 8)) goto L_8C0985A8;
    goto L_8C0986F0;
    L_8C0985A8:;
    goto L_8C09870A;
    L_8C098654:;
    *(unsigned int *)(((int)stk + 16)) = (R5 + 0x10);
    t23 = *(int *)(((R5 + 0x10) + 0x0));
    *(float *)(((((((t23 << 2) + t23) << 2) << 2) + R13) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t25 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    sprPutAtAlpha((((((t25 << 2) + t25) << 2) << 2) + R12), *(Stk3 *)(((int)stk + 4)), F15);
    L_8C09868E:;
    *(float *)((R11 + 0x0)) = ((*(float *)((R11 + 0x0))) + 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R11); }
    R4 = (0x8C33C2A0);
    F4 = (F15);
    goto L_8C098702;
    L_8C098618:;
    *(unsigned int *)(((int)stk + 16)) = (R5 + 0xC);
    t30 = *(int *)(((R5 + 0xC) + 0x0));
    *(float *)(((((((t30 << 2) + t30) << 2) << 2) + R13) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t32 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    sprPutAtAlpha((((((t32 << 2) + t32) << 2) << 2) + R12), *(Stk3 *)(((int)stk + 4)), F15);
    goto L_8C09868E;
    L_8C0985DC:;
    *(unsigned int *)(((int)stk + 16)) = (R5 + 0x8);
    t34 = *(int *)(((R5 + 0x8) + 0x0));
    *(float *)(((((((t34 << 2) + t34) << 2) << 2) + R13) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t36 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    R4 = (((t36 << 2) + t36));
    F4 = (F15);
    L_8C09860A:;
    sprPutAtAlpha((((R4 << 2) << 2) + R12), *(Stk3 *)(((int)stk + 4)), F4);
    goto L_8C09868E;
    L_8C0985AC:;
    *(unsigned int *)(((int)stk + 16)) = (R5 + 0x4);
    t40 = *(int *)(((R5 + 0x4) + 0x0));
    *(float *)(((((((t40 << 2) + t40) << 2) << 2) + R13) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t42 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
    R4 = (((t42 << 2) + t42));
    F4 = (F15);
    goto L_8C09860A;
}
