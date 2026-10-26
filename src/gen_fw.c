/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int cursorBoxPut();
extern float nlCos();
int nlDispStripTrnsl(int, int);
int primFrameCorners(int, int, int, Stk3, Stk3, Stk3, Stk3);
int primLineH(int, int, int, int, Stk3, Stk3);
int menuResultDraw(int a4, int a5, int a6, int a7, float f4);

int menuResultDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t2;
    int t4;
    int t8;
    float u7;
    int t15;
    int t16;
    float u17;
    int t45;
    int t57;
    int t59;
    float u60;
    int t63;
    float t69;
    float t71;
    float t73;
    int t77;
    int t3;
    float u12;
    int t26;
    int stk[78];

    t0 = 0x8C1259BC;
    t2 = (((int)stk + 52) + 0x4C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C1259BC + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = a5;
    if ((int)a5 > (int)0x5) {
        t4 = 0x5;
    }
    t8 = 0x2;
    if ((int)t4 > (int)0x2) {
        *(float *)(((((int)stk + 52) + 0x4C) + 0x1C)) = ((*(float *)(((((int)stk + 52) + 0x4C) + 0x1C))) + (float)(((((t4 - 2) << 2) << 1) + (t4 - 2)) << 2));
        u7 = *(float *)(((((int)stk + 52) + 0x4C) + 0x28));
        *(float *)(((((int)stk + 52) + 0x4C) + 0x28)) = (u7 + (float)(((((t4 - 2) << 2) << 1) + (t4 - 2)) << 2));
        t8 = t4;
        u12 = (u7 + (float)(((((t4 - 2) << 2) << 1) + (t4 - 2)) << 2));
    }
    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x4C);
    t15 = 0x8C0D0548;
    t16 = (((int)stk + 52) + 0x4C);
    u17 = u12;
    for (;;) {
        if ((unsigned int)t16 >= (unsigned int)((((int)stk + 52) + 0x4C) + 0x48)) {
            break;
        }
        t15 = 0x8;
        *(float *)((t16 + t15)) = 0.00079999998f;
        t15 = 0x4;
        u17 = (*(float *)((t16 + t15)));
        u17 = (u17 + f4);
        *(float *)((t16 + t15)) = u17;
        t16 = (t16 + 0xC);
    }
    if (a6 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x3C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x30)); }
        primLineH(0x2, 0xFF787878, a6, a7, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    } else {
        t26 = a6;
    }
    if (a6 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x3C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x30)); }
    }
    primFrameCorners(0x2, 0xFF787878, t26, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    if (a6 == 0) {
        *(float *)(((0x94 + ((int)stk + 52)) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0xC) + 0x0))) + (1.0f + 1.0f));
        *(float *)(((0x94 + ((int)stk + 52)) + 0x4)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0xC) + 0x4))) + (1.0f + 1.0f));
        *(float *)(((0x94 + ((int)stk + 52)) + 0x8)) = 0.000899999985f;
        *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x3C) + 0x0))) + (1.0f + 1.0f));
        *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x4)) = (*(float *)((((((int)stk + 52) + 0x4C) + 0x3C) + 0x4)));
        *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x8)) = 0.000899999985f;
        *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 52))) + 0x0))) + -2.0f);
        *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 52))) + 0x4))) + (1.0f + 1.0f));
        *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x8)) = 0.000899999985f;
        *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x30) + 0x0))) + -2.0f);
        *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x4)) = (*(float *)((((((int)stk + 52) + 0x4C) + 0x30) + 0x4)));
        *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x8)) = 0.000899999985f;
        t45 = (0x94 + ((int)stk + 52));
        for (;;) {
            if ((unsigned int)t45 >= (unsigned int)((0x94 + ((int)stk + 52)) + 0x40)) {
                break;
            }
            *(unsigned int *)((t45 + 0xC)) = 0xC8000000;
            t45 = (t45 + 0x10);
        }
        nlDispStripTrnsl(0x4, (0x94 + ((int)stk + 52)));
    }
    *(float *)(((0x94 + ((int)stk + 52)) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x3C) + 0x0))) + (1.0f + 1.0f));
    *(float *)(((0x94 + ((int)stk + 52)) + 0x4)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x3C) + 0x4))) + (1.0f + 1.0f));
    *(float *)(((0x94 + ((int)stk + 52)) + 0x8)) = 0.000899999985f;
    *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x0))) + (1.0f + 1.0f));
    *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x4)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x4))) + -2.0f);
    *(float *)((((0x94 + ((int)stk + 52)) + 0x10) + 0x8)) = 0.000899999985f;
    *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x30) + 0x0))) + -2.0f);
    *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x4)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x30) + 0x4))) + (1.0f + 1.0f));
    *(float *)((((0x94 + ((int)stk + 52)) + 0x20) + 0x8)) = 0.000899999985f;
    *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x0)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x18) + 0x0))) + -2.0f);
    *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x4)) = ((*(float *)((((((int)stk + 52) + 0x4C) + 0x18) + 0x4))) + -2.0f);
    *(float *)((((0x94 + ((int)stk + 52)) + 0x30) + 0x8)) = 0.000899999985f;
    t57 = (0x94 + ((int)stk + 52));
    for (;;) {
        if ((unsigned int)t57 >= (unsigned int)((0x94 + ((int)stk + 52)) + 0x40)) {
            break;
        }
        *(unsigned int *)((t57 + 0xC)) = 0xC8000078;
        t57 = (t57 + 0x10);
    }
    nlDispStripTrnsl(0x4, (0x94 + ((int)stk + 52)));
    if ((int)t8 > 0) {
        t59 = 0x0;
        for (;;) {
            *(float *)((((((t59 << 1) + t59) << 2) + (((int)stk + 52) + 0x10)) + 0x0)) = 252.0f;
            u60 = f4;
            u60 = u60 + 36.0f * (float)t59;
            *(float *)((((((t59 << 1) + t59) << 2) + (((int)stk + 52) + 0x10)) + 0x4)) = (u60 + 222.0f);
            *(float *)((((((t59 << 1) + t59) << 2) + (((int)stk + 52) + 0x10)) + 0x8)) = 0.000300000014f;
            if (t59 == a4) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((t59 << 1) + t59) << 2) + (((int)stk + 52) + 0x10))); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((t59 << 1) + t59) << 2) + (((int)stk + 52) + 0x10))); }
            }
            t63 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 40)));
            t59 = (t59 + 0x1);
            if ((int)t59 >= (int)t8) {
                break;
            }
        }
    }
    *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = 252.0f;
    *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = (((float)((((a4 << 2) << 1) + a4) << 2) + f4) + 222.0f);
    *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = 0.000199999995f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
    t69 = ((float (*)(int, Stk3))(nlCos))((*(int *)0x8C1D1358), *(Stk3 *)(((int)stk + 40)));
    if (!(0.0f > t69)) {
        t71 = ((float (*)(int))(nlCos))((*(int *)0x8C1D1358));
    } else {
        t73 = ((float (*)(int))(nlCos))((*(int *)0x8C1D1358));
    }
    t77 = ((int (*)(int))(cursorBoxPut))(0x1);
    *(unsigned int *)0x8C1D1358 = ((*(int *)0x8C1D1358) + 0x200);
    return t77;
}
