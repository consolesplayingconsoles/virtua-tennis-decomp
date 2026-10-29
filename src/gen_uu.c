/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int menuStatusDraw(int, int, int, int, int, int, int, int, int);
float nlSin(int);
int primSprDrawScaleAlpha(int, int, int, Stk3, float, float, float);
Stk3 vecMake(float, float, float);
int selGridDraw(void);

int selGridDraw(void)
{
    int stk[23];

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    *(unsigned short *)0x8C1854A4 = ((*(short *)0x8C1854A4) + 0x500);
    w0_0 = 400.0f;
    w0_0 = w0_0 + 112.0f * (nlSin((unsigned short)(*(short *)0x8C1854A4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(float *)(((int)stk + 24)) = (w0_0 / 512.0f);
    v0_0 = (0x8C0BB21C);
    v0_0 = (0x80);
    v0_1 = (0x200);
    v0_2 = ((((int)stk + 16) + 0x10));
    v0_3 = (0x8C1853C0);
    w0_0 = (1.0f);
    w0_1 = (0.29296875f);
    L_8C0A7458:;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    v0_4 = *(int *)(((int)stk + 20));
    *(float *)(((int)stk + 28)) = (float)((v0_4 * 0x4B) + 0x10);
    v0_4 = ((v0_4 << 2));
    L_8C0A7472:;
    v0_5 = *(int *)(((int)stk + 16));
    w0_2 = *(float *)(((int)stk + 28));
    v0_6 = v0_2;
    *(int *)((int)stk + 12) = v0_6;
    *(Stk3 *)(v0_6) = vecMake(w0_2, (float)(((((v0_5 << 2) << 2) << 1) + v0_5) + 0x17B), 0.100000001f);
    w0_2 = (w0_0);
    w0_3 = (w0_0);
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A74B2;
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + 20.0f);
    v0_5 = (0x41A00000);
    L_8C0A74B2:;
    if (((*(int *)(((int)stk + 16))) != 1)) goto L_8C0A74C4;
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A74C4;
    L_8C0A75E6:;
    v0_5 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) >= (int)0x2)) goto L_8C0A75F6;
    goto L_8C0A7472;
    L_8C0A75F6:;
    v0_4 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 20)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) >= (int)0x8)) goto L_8C0A7606;
    goto L_8C0A7458;
    L_8C0A7606:;
    return (menuStatusDraw(R4, R5, R6, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16)));
    L_8C0A74C4:;
    v0_6 = *(int *)(((int)stk + 16));
    v0_5 = (((((v0_6 << 2) << 1) + v0_6) << 2));
    if (((*(int *)((v0_4 + (((((v0_6 << 2) << 1) + v0_6) << 2) + v0_3)))) != 0)) goto L_8C0A7558;
    if (((*(int *)((v0_4 + (0x8C185330 + v0_5)))) != 1)) goto L_8C0A753C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    w0_4 = (0.5859375f);
    L_8C0A754A:;
    primSprDrawScaleAlpha(0x8C33D7E0, v0_1, v0_0, *(Stk3 *)(((int)stk + 4)), w0_2, w0_3, w0_4);
    L_8C0A7558:;
    if (((*(int *)((v0_4 + (v0_5 + v0_3)))) != 1)) goto L_8C0A757E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    primSprDrawScaleAlpha(0x8C33D7E0, v0_1, v0_0, *(Stk3 *)(((int)stk + 4)), w0_2, w0_3, w0_1);
    L_8C0A757E:;
    if (((*(int *)((v0_4 + (v0_5 + v0_3)))) != 2)) goto L_8C0A75C0;
    if (((*(int *)((v0_4 + (0x8C185330 + v0_5)))) != 1)) goto L_8C0A75A4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    w0_4 = ((*(float *)(((int)stk + 24))));
    L_8C0A75B2:;
    primSprDrawScaleAlpha(0x8C33D7E0, v0_1, v0_0, *(Stk3 *)(((int)stk + 4)), w0_2, w0_3, w0_4);
    L_8C0A75C0:;
    if (((*(int *)((v0_4 + (v0_5 + v0_3)))) != 3)) goto L_8C0A75E6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    primSprDrawScaleAlpha(0x8C33D7E0, v0_1, v0_0, *(Stk3 *)(((int)stk + 4)), w0_2, w0_3, w0_0);
    goto L_8C0A75E6;
    L_8C0A75A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    w0_4 = (w0_1);
    goto L_8C0A75B2;
    L_8C0A753C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    w0_4 = (w0_1);
    goto L_8C0A754A;
}
