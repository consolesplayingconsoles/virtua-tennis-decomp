/* Straight-line functions with calls and guards (batch gen_nj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudBarDrawAlt(Stk3, Stk1, float, float);
int hudCallTieBreakDraw(int, int, float, float);
extern int sprPutCropV();
int hudCallPointsDraw(int a4, int a5, float f4, float f5);

int hudCallPointsDraw(int a4, int a5, float f4, float f5)
{
    int t21;
    int t23;
    int t32;
    int t42;
    int t56;
    int t58;
    int t65;
    int t67;
    int stk[34];

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
    R5 = a5;
    F4 = f4;
    F5 = f5;
    R0 = (0x8C0996E4);
    R10 = (R5);
    R12 = ((((int)stk + 28) + 0xC));
    R13 = ((((int)stk + 28) + 0x18));
    R14 = (0x8C33A6D0);
    R8 = (((int)stk + 28));
    R9 = (R4);
    F12 = (22.0f);
    F13 = (1.0f);
    F14 = (F4);
    F15 = (F5);
    if ((((*(int *)0x8C287B3C) & 0x4000) == 0)) goto L_8C099656;
    R0 = ((hudCallTieBreakDraw(R9, R10, F14, F15)));
    L_8C099902:;
    return R0;
    L_8C099656:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x30)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12), (F14 * 0.5f), F15);
    *(float *)(((((int)stk + 28) + 0x30) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R13) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R12) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R8) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 50.0f);
    R1 = (R8);
    if ((R9 != 0)) goto L_8C099714;
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    t21 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(R14, 0x1, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    L_8C0997CA:;
    *(float *)((R8 + 0x0)) = ((*(float *)((R8 + 0x0))) + 98.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R8); }
    t23 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((0x1E0 + R14), 0x1, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 121.0f);
    if ((R10 != 0)) goto L_8C09984C;
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 11.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    R0 = ((((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(R14, 0x1, *(Stk3 *)(((int)stk + 16)), F14, F13, F15)));
    goto L_8C099902;
    L_8C09984C:;
    R0 = (R10);
    if ((R10 != 1)) goto L_8C0998A2;
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t32 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((0x140 + R14), 0x1, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 12.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    R0 = ((((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((R14 + 0x50), 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15)));
    goto L_8C099902;
    L_8C0998A2:;
    if ((R0 != 2)) goto L_8C0998BE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    R4 = (0xF0);
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    L_8C0998DA:;
    t42 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((R4 + R14), R5, *(Stk3 *)(((int)stk + 16)), F4, F5, F6);
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    R0 = ((((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(R14, 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15)));
    goto L_8C099902;
    L_8C0998BE:;
    R0 = (R10);
    if ((R10 != 3)) goto L_8C099902;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    R4 = (0xA0);
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    goto L_8C0998DA;
    L_8C099714:;
    R0 = (R9);
    if ((R9 != 1)) goto L_8C09976A;
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    t56 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((0x140 + R14), 0x1, *(Stk3 *)(((int)stk + 16)), F14, F13, F15);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 12.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    t58 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((R14 + 0x50), 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15);
    goto L_8C0997CA;
    L_8C09976A:;
    if ((R0 != 2)) goto L_8C099786;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    R4 = (0xF0);
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    L_8C0997A2:;
    t65 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((R4 + R14), R5, *(Stk3 *)(((int)stk + 16)), F4, F5, F6);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + F12);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    t67 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(R14, 0x1, *(Stk3 *)(((int)stk + 4)), F14, F13, F15);
    goto L_8C0997CA;
    L_8C099786:;
    if ((R9 != 3)) goto L_8C0997CA;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R13); }
    R4 = (0xA0);
    R5 = (0x1);
    F4 = (F14);
    F5 = (F13);
    F6 = (F15);
    goto L_8C0997A2;
}
