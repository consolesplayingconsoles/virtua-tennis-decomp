/* Straight-line functions with calls and guards (batch gen_pe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
extern int primRectFrame();
extern int primRectInc();
int sprPutAtAlpha(int, Stk3, float);
Stk3 vecMake(float, float, float);
int infoWinDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);

int infoWinDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    int t1;
    int t17;
    int t19;
    int t24;
    float u27;
    int t48;
    int t62;
    int t67;
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
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    stk[26] = a8;
    stk[27] = a9;
    stk[28] = a10;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    *(unsigned int *)(((int)stk + 32)) = R5;
    t1 = *(int *)0x8C287C64;
    *(float *)(((((int)stk + 28) + 0x4C) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x4C) + 0x8))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x10)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    *(float *)(((((int)stk + 28) + 0x10) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x8))) + 0.100000001f);
    *(unsigned int *)(((int)stk + 40)) = (((((int)(F4 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF);
    *(unsigned int *)(((int)stk + 36)) = ((((int)(F4 * 180.0f) & 0xFF) << 16) << 8);
    R1 = (0x3DCCCCCD);
    R10 = (R4);
    R11 = (0x8C08E944);
    R12 = (0x8C015EEA);
    R13 = ((((int)stk + 28) + 0x10));
    R14 = ((((int)stk + 28) + 0x4C));
    R4 = (0xFF);
    R8 = (0x8C0BB97C);
    R9 = (t1);
    F13 = (F4);
    F15 = (0.150000006f);
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_8C09F060;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t17 = ((int (*)(int, int, int, int, Stk3))(primRectFrame))(0x34, 0xF, 0x1, (*(int *)(((int)stk + 40))), *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    t19 = ((int (*)(int, int, int, Stk3, Stk1))(primRectInc))(0x34, 0xF, (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12));
    L_8C09F0A0:;
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((R14 + 0x0))) + -26.0f), ((*(float *)((R14 + 0x4))) + 8.0f), F15);
    t24 = (*(int *)(((int)stk + 32))) == 0;
    R0 = ((sprPutAtAlpha(0x8C33A680, *(Stk3 *)((int)stk + 16), F13)));
    if (t24) goto L_8C09F0DE;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + -36.0f);
    u27 = *(float *)((R13 + 0x0));
    *(float *)((R13 + 0x0)) = (u27 + -35.0f);
    R0 = (0x8C09F124);
    F1 = ((u27 + -35.0f));
    L_8C09F0DE:;
    *(unsigned int *)(((int)stk + 28)) = 0x8C33A630;
    L_8C09F1B2:;
    if ((R9 != 0)) goto L_8C09F12C;
    return R0;
    L_8C09F12C:;
    F14 = ((*(float *)0x8C09F244));
    F4 = ((*(float *)0x8C09F248));
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_8C09F150;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F4);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + F4);
    if ((R10 == 0)) goto L_8C09F182;
    F12 = ((*(float *)0x8C09F24C));
    L_8C09F164:;
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((R14 + 0x0))) + F12), ((*(float *)((R14 + 0x4))) + F14), F15);
    sprPutAtAlpha((*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), F13);
    R10 = ((R10 - 1));
    L_8C09F182:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    t48 = ((int (*)(int, int, int, int, Stk3))(primRectFrame))(0x11, 0xF, 0x1, (*(int *)(((int)stk + 40))), *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    R0 = ((((int (*)(int, int, int, Stk3, Stk1))(primRectInc))(0x11, 0xF, (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12))));
    R9 = ((R9 - 1));
    goto L_8C09F1B2;
    L_8C09F150:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) - F4);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - F4);
    if ((R10 == 0)) goto L_8C09F182;
    F12 = ((*(float *)0x8C09F250));
    goto L_8C09F164;
    L_8C09F060:;
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((R14 + 0x0))) + (-1.0f)), (*(float *)((R14 + 0x4))), (*(float *)((R14 + 0x8))));
    t62 = ((int (*)(int, int, int, int))(primRectFrame))(0x34, 0xF, 0x1, (*(int *)(((int)stk + 40))));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((R13 + 0x0))) + (-1.0f)), (*(float *)((R13 + 0x4))), (*(float *)((R13 + 0x8))));
    t67 = ((int (*)(int, int, int, int, int, int, int, int))(primRectInc))(0x34, 0xF, (*(int *)(((int)stk + 36))), 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12));
    goto L_8C09F0A0;
}
