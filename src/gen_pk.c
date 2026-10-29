/* Straight-line functions with calls and guards (batch gen_pk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlSin(int);
int sprPutAtAlpha(int, Stk3, float);
int decoSwingDraw(int a4, int a5, Stk3 s, float f4, float f5);

int decoSwingDraw(int a4, int a5, Stk3 s, float f4, float f5)
{
    int t4;
    float t5;
    float u9;
    float u15;
    int stk[31];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
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
    float F14;
    float F15;
    int T_;
    stk[20] = s.w[0];
    stk[21] = s.w[1];
    stk[22] = s.w[2];
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    *(unsigned int *)(((int)stk + 16)) = R5;
    R9 = (R4);
    F14 = (1.0f);
    F15 = (F4);
    if ((R5 != 0)) goto L_8C0A5EB8;
    t4 = *(int *)0x8C20D198;
    t5 = nlSin((((t4 << 1) + t4) << 8));
    F4 = (t5);
    if ((!(0.0f > t5))) goto L_8C0A5E76;
    F4 = ((F4 * (-1.0f)));
    L_8C0A5E76:;
    u9 = 0.5f;
    u9 = u9 + 0.5f * F4;
    R0 = (0x8C0A5EB4);
    F5 = (0.5f);
    F6 = (u9);
    L_8C0A5EBA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x10)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) + -53.0f);
    *(float *)(((((int)stk + 16) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x4))) + -14.0f);
    u15 = *(float *)(((((int)stk + 16) + 0x4) + 0x0));
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = (u15 - 44.0f);
    R1 = (0xC1600000);
    R10 = ((((int)stk + 16) + 0x10));
    R11 = (0x8C341A38);
    R12 = ((((int)stk + 16) + 0x4));
    R13 = (0x8C08E944);
    R14 = ((((int)stk + 16) + 0x40));
    F0 = ((u15 - 44.0f));
    F1 = (44.0f);
    F4 = ((F15 * F14));
    if (((*(int *)(((int)stk + 16))) != 0)) goto L_8C0A5F4C;
    F14 = ((F4 * F6));
    if (((int)R9 <= 0)) goto L_8C0A5F26;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    sprPutAtAlpha((0x550 + R11), *(Stk3 *)(((int)stk + 4)), F14);
    L_8C0A5F26:;
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 93.0f);
    if (((int)R9 >= (int)0x2)) goto L_8C0A5F4C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    sprPutAtAlpha((0x5A0 + R11), *(Stk3 *)(((int)stk + 4)), F14);
    L_8C0A5F4C:;
    R0 = (R9);
    F14 = (-26.0f);
    F4 = (-22.0f);
    F5 = (-13.0f);
    if ((R9 == 0)) goto L_8C0A5F6A;
    if ((R0 == 1)) goto L_8C0A5F8A;
    if (!((R0 == 2))) goto L_8C0A6034;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F4);
    *(float *)((R10 + 0x4)) = ((*(float *)((R10 + 0x4))) + F4);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C0A60BC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    sprPutAtAlpha((0x4B0 + R11), *(Stk3 *)(((int)stk + 4)), F15);
    *(float *)((R10 + 0x0)) = ((*(float *)((R10 + 0x0))) + F14);
    *(float *)((R10 + 0x4)) = ((*(float *)((R10 + 0x4))) + 17.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R10); }
    R4 = (0x410);
    F4 = (F15);
    goto L_8C0A602E;
    L_8C0A6034:;
    return R0;
    L_8C0A602E:;
    R0 = ((sprPutAtAlpha((R4 + R11), *(Stk3 *)(((int)stk + 4)), F4)));
    goto L_8C0A6034;
    L_8C0A5F8A:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F5);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = (0x410);
    F4 = (F15);
    goto L_8C0A602E;
    L_8C0A5F6A:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F5);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = (0x3C0);
    F4 = (F15);
    goto L_8C0A602E;
    L_8C0A5EB8:;
    F6 = (F14);
    goto L_8C0A5EBA;
}
