/* Straight-line functions with calls and guards (batch gen_pc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int menuStatusDraw(int, int, int, int, int, int, int, int, int);
float nlSin(int);
int primSprDrawScaleAlpha(int, int, int, Stk3, float, float, float);
Stk3 vecMake(float, float, float);
int selGridDraw(void);

int selGridDraw(void)
{
    float u3;
    int t11;
    int t13;
    float u14;
    int t15;
    int t26;
    int t28;
    int t31;
    int stk[23];

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
    float F0;
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
    *(unsigned short *)0x8C1854A4 = ((*(short *)0x8C1854A4) + 0x500);
    u3 = 400.0f;
    u3 = u3 + 112.0f * (nlSin((unsigned short)(*(short *)0x8C1854A4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(float *)(((int)stk + 24)) = (u3 / 512.0f);
    R10 = (0x8C0BB21C);
    R11 = (0x80);
    R13 = (0x200);
    R14 = ((((int)stk + 16) + 0x10));
    R8 = (0x8C1853C0);
    F12 = (1.0f);
    F13 = (0.29296875f);
    L_8C0A7458:;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t11 = *(int *)(((int)stk + 20));
    *(float *)(((int)stk + 28)) = (float)((t11 * 0x4B) + 0x10);
    R12 = ((t11 << 2));
    L_8C0A7472:;
    t13 = *(int *)(((int)stk + 16));
    u14 = *(float *)(((int)stk + 28));
    t15 = R14;
    *(int *)((int)stk + 12) = t15;
    *(Stk3 *)(t15) = vecMake(u14, (float)(((((t13 << 2) << 2) << 1) + t13) + 0x17B), 0.100000001f);
    F14 = (F12);
    F15 = (F12);
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A74B2;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 20.0f);
    R1 = (0x41A00000);
    L_8C0A74B2:;
    if (((*(int *)(((int)stk + 16))) != 1)) goto L_8C0A74C4;
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A74C4;
    L_8C0A75E6:;
    t26 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (t26 + 0x1);
    if (((int)(t26 + 0x1) >= (int)0x2)) goto L_8C0A75F6;
    goto L_8C0A7472;
    L_8C0A75F6:;
    t28 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (t28 + 0x1);
    if (((int)(t28 + 0x1) >= (int)0x8)) goto L_8C0A7606;
    goto L_8C0A7458;
    L_8C0A7606:;
    return (menuStatusDraw(R4, R5, R6, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16)));
    L_8C0A74C4:;
    t31 = *(int *)(((int)stk + 16));
    R9 = (((((t31 << 2) << 1) + t31) << 2));
    if (((*(int *)((R12 + (((((t31 << 2) << 1) + t31) << 2) + R8)))) != 0)) goto L_8C0A7558;
    if (((*(int *)((R12 + (0x8C185330 + R9)))) != 1)) goto L_8C0A753C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F6 = (0.5859375f);
    L_8C0A754A:;
    primSprDrawScaleAlpha(0x8C33D7E0, R13, R11, *(Stk3 *)(((int)stk + 4)), F14, F15, F6);
    L_8C0A7558:;
    if (((*(int *)((R12 + (R9 + R8)))) != 1)) goto L_8C0A757E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    primSprDrawScaleAlpha(0x8C33D7E0, R13, R11, *(Stk3 *)(((int)stk + 4)), F14, F15, F13);
    L_8C0A757E:;
    if (((*(int *)((R12 + (R9 + R8)))) != 2)) goto L_8C0A75C0;
    if (((*(int *)((R12 + (0x8C185330 + R9)))) != 1)) goto L_8C0A75A4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F6 = ((*(float *)(((int)stk + 24))));
    L_8C0A75B2:;
    primSprDrawScaleAlpha(0x8C33D7E0, R13, R11, *(Stk3 *)(((int)stk + 4)), F14, F15, F6);
    L_8C0A75C0:;
    if (((*(int *)((R12 + (R9 + R8)))) != 3)) goto L_8C0A75E6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    primSprDrawScaleAlpha(0x8C33D7E0, R13, R11, *(Stk3 *)(((int)stk + 4)), F14, F15, F12);
    goto L_8C0A75E6;
    L_8C0A75A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F6 = (F13);
    goto L_8C0A75B2;
    L_8C0A753C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    F6 = (F13);
    goto L_8C0A754A;
}
