/* Straight-line functions with calls and guards (batch gen_tt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlSin(int);
int sprPutAtAlpha(int, Stk3, float);
int decoSwingDraw(int a4, int a5, Stk3 s, float f4, float f5);

int decoSwingDraw(int a4, int a5, Stk3 s, float f4, float f5)
{
    int stk[31];

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    stk[20] = s.w[0];
    stk[21] = s.w[1];
    stk[22] = s.w[2];
    v0_0 = a4;
    v0_1 = a5;
    w0_2 = f4;
    w0_3 = f5;
    *(unsigned int *)(((int)stk + 16)) = v0_1;
    v0_0 = (v0_0);
    w0_1 = (1.0f);
    w0_0 = (w0_2);
    if ((v0_1 != 0)) goto L_8C0A5EB8;
    v0_1 = *(int *)0x8C20D198;
    w0_3 = nlSin((((v0_1 << 1) + v0_1) << 8));
    w0_2 = (w0_3);
    if ((!(0.0f > w0_3))) goto L_8C0A5E76;
    w0_2 = ((w0_2 * (-1.0f)));
    L_8C0A5E76:;
    w0_4 = 0.5f;
    w0_4 = w0_4 + 0.5f * w0_2;
    v0_4 = (0x8C0A5EB4);
    w0_3 = (0.5f);
    w0_3 = (w0_4);
    L_8C0A5EBA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x10)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) + -53.0f);
    *(float *)(((((int)stk + 16) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x4))) + -14.0f);
    w0_2 = *(float *)(((((int)stk + 16) + 0x4) + 0x0));
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = (w0_2 - 44.0f);
    v0_1 = (0xC1600000);
    v0_2 = ((((int)stk + 16) + 0x10));
    v0_1 = (0x8C341A38);
    v0_4 = ((((int)stk + 16) + 0x4));
    v0_3 = (0x8C08E944);
    v0_3 = ((((int)stk + 16) + 0x40));
    w0_2 = ((w0_2 - 44.0f));
    w0_2 = (44.0f);
    w0_2 = ((w0_0 * w0_1));
    if (((*(int *)(((int)stk + 16))) != 0)) goto L_8C0A5F4C;
    w0_1 = ((w0_2 * w0_3));
    if (((int)v0_0 <= 0)) goto L_8C0A5F26;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_4); }
    sprPutAtAlpha((0x550 + v0_1), *(Stk3 *)(((int)stk + 4)), w0_1);
    L_8C0A5F26:;
    *(float *)((v0_4 + 0x0)) = ((*(float *)((v0_4 + 0x0))) + 93.0f);
    if (((int)v0_0 >= (int)0x2)) goto L_8C0A5F4C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_4); }
    sprPutAtAlpha((0x5A0 + v0_1), *(Stk3 *)(((int)stk + 4)), w0_1);
    L_8C0A5F4C:;
    v0_4 = (v0_0);
    w0_1 = (-26.0f);
    w0_2 = (-22.0f);
    w0_3 = (-13.0f);
    if ((v0_0 == 0)) goto L_8C0A5F6A;
    if ((v0_4 == 1)) goto L_8C0A5F8A;
    if (!((v0_4 == 2))) goto L_8C0A6034;
    *(float *)((v0_3 + 0x4)) = ((*(float *)((v0_3 + 0x4))) + w0_2);
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + w0_2);
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) + (*(float *)0x8C0A60BC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_3); }
    sprPutAtAlpha((0x4B0 + v0_1), *(Stk3 *)(((int)stk + 4)), w0_0);
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) + w0_1);
    *(float *)((v0_2 + 0x4)) = ((*(float *)((v0_2 + 0x4))) + 17.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_2); }
    v0_0 = (0x410);
    w0_2 = (w0_0);
    goto L_8C0A602E;
    L_8C0A6034:;
    return v0_4;
    L_8C0A602E:;
    v0_4 = ((sprPutAtAlpha((v0_0 + v0_1), *(Stk3 *)(((int)stk + 4)), w0_2)));
    goto L_8C0A6034;
    L_8C0A5F8A:;
    *(float *)((v0_3 + 0x4)) = ((*(float *)((v0_3 + 0x4))) + w0_3);
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) + w0_1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_3); }
    v0_0 = (0x410);
    w0_2 = (w0_0);
    goto L_8C0A602E;
    L_8C0A5F6A:;
    *(float *)((v0_3 + 0x4)) = ((*(float *)((v0_3 + 0x4))) + w0_3);
    *(float *)((v0_3 + 0x0)) = ((*(float *)((v0_3 + 0x0))) + w0_2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_3); }
    v0_0 = (0x3C0);
    w0_2 = (w0_0);
    goto L_8C0A602E;
    L_8C0A5EB8:;
    w0_3 = (w0_1);
    goto L_8C0A5EBA;
}
