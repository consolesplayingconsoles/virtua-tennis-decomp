/* Straight-line functions with calls and guards (batch gen_nh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudBarDrawAlt(Stk3, Stk1, float, float);
extern int hudCallNumPut();
extern int sprPutCropV();
int hudCallAdvDraw(int a4, float f4, float f5);

int hudCallAdvDraw(int a4, float f4, float f5)
{
    int t1;
    int t11;
    int t14;
    int t26;
    int t28;
    int t38;
    int t50;
    int t55;
    int t57;
    int t61;
    int t67;
    int stk[29];

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
    R4 = a4;
    F4 = f4;
    F5 = f5;
    *(unsigned int *)(((int)stk + 28)) = R4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12), (F4 * 0.5f), F5);
    *(float *)(((((int)stk + 28) + 0x1C) + 0x8)) = 0.00499999989f;
    t1 = *(int *)(((int)stk + 28));
    R1 = (0x8C343264);
    R14 = ((((int)stk + 28) + 0x1C));
    R4 = (((t1 * 0x38) + 0x8C343264));
    R6 = (0xC);
    F14 = (F4);
    F15 = (F5);
    if (((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x8))) == 0)) goto L_8C099EA8;
    R12 = (R6);
    L_8C099EAA:;
    t11 = *(int *)0x8C287ADC;
    R5 = (t11);
    if ((t11 != 4)) goto L_8C099EF4;
    t14 = *(int *)((R4 + 0x78));
    R1 = (t14);
    if ((t14 == 0)) goto L_8C099EF0;
    R11 = (R6);
    L_8C099EF4:;
    R10 = ((R12 + 0x1));
    R13 = (0x8C33A6D0);
    R9 = (((((R12 << 2) + R12) << 2) << 2));
    F12 = (25.0f);
    F13 = (1.0f);
    if ((R5 != 2)) goto L_8C099FD4;
    if ((R12 == 12)) goto L_8C099F60;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 56.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t26 = ((int (*)(int, int, int, int, Stk3, float, float, float))(sprPutCropV))((0x370 + R13), 0x1, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 69.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t28 = ((int (*)(int, Stk3, float, float))(hudCallNumPut))(R10, *(Stk3 *)(((int)stk + 4)), F14, F15);
    L_8C09A0DC:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    R4 = (0x410);
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    L_8C09A146:;
    R0 = ((((int (*)(int, int, int, int, Stk3, float, float, float))(sprPutCropV))((R4 + R13), R5, R6, R7, *(Stk3 *)(((int)stk + 16)), F4, F5, F6)));
    L_8C09A14E:;
    return R0;
    L_8C099F60:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 44.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t38 = ((int (*)(int, int, int, int, Stk3, float, float, float))(sprPutCropV))((0x370 + R13), 0x1, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 65.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R0 = ((((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((R9 + R13), 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15)));
    goto L_8C09A14E;
    L_8C099FD4:;
    *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)((R14 + 0x0))) + 83.0f);
    *(float *)(((int)stk + 32)) = ((*(float *)((R14 + 0x0))) + 151.0f);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 14.0f);
    R8 = ((((int)stk + 28) + 0x10));
    if ((R12 != 12)) goto L_8C09A004;
    if ((R11 == 12)) goto L_8C09A018;
    L_8C09A004:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 9.0f);
    *(float *)((R8 + 0x0)) = ((*(float *)((R8 + 0x0))) + 4.0f);
    L_8C09A018:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t50 = ((int (*)(int, int, int, int, Stk3, float, float, float))(sprPutCropV))((0x370 + R13), 0x1, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - 10.0f);
    F4 = ((*(float *)((R8 + 0x0))));
    if ((R12 == 12)) goto L_8C09A08E;
    *(float *)((R14 + 0x0)) = F4;
    *(float *)((R14 + 0x0)) = (F4 + 7.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t55 = ((int (*)(int, int, int, int, Stk3, float, float))(hudCallNumPut))(R10, R5, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F15);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t57 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((0x410 + R13), 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15);
    L_8C09A0AE:;
    F4 = ((*(float *)(((int)stk + 32))));
    if ((R11 == 12)) goto L_8C09A124;
    *(float *)((R14 + 0x0)) = F4;
    *(float *)((R14 + 0x0)) = (F4 + 7.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t61 = ((int (*)(int, int, int, int, Stk3, float, float))(hudCallNumPut))((R11 + 0x1), R5, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F15);
    goto L_8C09A0DC;
    L_8C09A124:;
    *(float *)((R14 + 0x0)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    R4 = (((((R11 << 2) + R11) << 2) << 2));
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    goto L_8C09A146;
    L_8C09A08E:;
    *(float *)((R14 + 0x0)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t67 = ((int (*)(int, int, int, int, Stk3, float, float, float))(sprPutCropV))((R9 + R13), 0x1, R6, R7, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    goto L_8C09A0AE;
    L_8C099EF0:;
    R11 = ((*(int *)((R4 + 0x74))));
    goto L_8C099EF4;
    L_8C099EA8:;
    R12 = ((*(int *)((R4 + 0x4))));
    goto L_8C099EAA;
}
