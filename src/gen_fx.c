/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int cursorBoxPut();
extern float nlCos();
int nlDispStripTrnsl(int, int);
int primFrameCorners(int, int, Stk3, Stk3, Stk3, Stk3);
int primLineH(int, int, int, int, Stk3, Stk3);
int menuListDraw(int a4, int a5, int a6, int a7);

int menuListDraw(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t12;
    int t33;
    int t51;
    int t53;
    float u54;
    int t58;
    int t63;
    float t65;
    float t67;
    float t69;
    int t73;
    int t3;
    int stk[88];

    *(unsigned int *)(((int)stk + 84)) = a4;
    t0 = 0x8C125974;
    t2 = (((int)stk + 76) + 0x5C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125974 + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C0D025C;
    t5 = (((int)stk + 76) + 0x5C);
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)((((int)stk + 76) + 0x5C) + 0x48)) {
            break;
        }
        t4 = 0x8;
        *(float *)((t5 + t4)) = 0.00079999998f;
        t5 = (t5 + 0xC);
    }
    t7 = a5;
    if ((int)a5 > (int)0x5) {
        t7 = 0x5;
    }
    t12 = 0x2;
    if ((int)t7 > (int)0x2) {
        *(float *)(((((int)stk + 76) + 0x5C) + 0x1C)) = ((*(float *)(((((int)stk + 76) + 0x5C) + 0x1C))) + (float)(((((t7 - 2) << 2) << 1) + (t7 - 2)) << 2));
        *(float *)(((((int)stk + 76) + 0x5C) + 0x28)) = ((*(float *)(((((int)stk + 76) + 0x5C) + 0x28))) + (float)(((((t7 - 2) << 2) << 1) + (t7 - 2)) << 2));
        t12 = t7;
    }
    *(unsigned int *)(((int)stk + 80)) = ((((int)stk + 76) + 0x5C) + 0x3C);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((int)stk + 76) + 0x5C) + 0x3C)); }
    *(unsigned int *)(((int)stk + 76)) = ((((int)stk + 76) + 0x5C) + 0x30);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((((int)stk + 76) + 0x5C) + 0x30)); }
    primLineH(0x2, 0xFF787878, ((((int)stk + 76) + 0x5C) + 0x48), a7, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
    *(unsigned int *)(((int)stk + 88)) = ((((int)stk + 76) + 0x5C) + 0x24);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 76) + 0x5C) + 0x24)); }
    *(unsigned int *)(((int)stk + 92)) = ((((int)stk + 76) + 0x5C) + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 76) + 0x5C) + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 76) + 0x5C) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 76) + 0x5C)); }
    primFrameCorners(0x2, 0xFF787878, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x0)) = ((*(float *)((((((int)stk + 76) + 0x5C) + 0xC) + 0x0))) + (1.0f + 1.0f));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x4)) = ((*(float *)((((((int)stk + 76) + 0x5C) + 0xC) + 0x4))) + (1.0f + 1.0f));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 80))) + 0x0))) + (1.0f + 1.0f));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 80))) + 0x4)));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x5C) + 0x0))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 76) + 0x5C) + 0x4))) + (1.0f + 1.0f));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 76))) + 0x0))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 76))) + 0x4)));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x8)) = 0.000899999985f;
    t33 = (0xA4 + ((int)stk + 76));
    for (;;) {
        if ((unsigned int)t33 >= (unsigned int)((0xA4 + ((int)stk + 76)) + 0x40)) {
            break;
        }
        *(unsigned int *)((t33 + 0xC)) = 0xC8000000;
        t33 = (t33 + 0x10);
    }
    nlDispStripTrnsl(0x4, (0xA4 + ((int)stk + 76)));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 80))) + 0x0))) + (1.0f + 1.0f));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 80))) + 0x4))) + (1.0f + 1.0f));
    *(float *)(((0xA4 + ((int)stk + 76)) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 88))) + 0x0))) + (1.0f + 1.0f));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 88))) + 0x4))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x10) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 76))) + 0x0))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 76))) + 0x4))) + (1.0f + 1.0f));
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x20) + 0x8)) = 0.000899999985f;
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x0))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x4))) + -2.0f);
    *(float *)((((0xA4 + ((int)stk + 76)) + 0x30) + 0x8)) = 0.000899999985f;
    t51 = (0xA4 + ((int)stk + 76));
    for (;;) {
        if ((unsigned int)t51 >= (unsigned int)((0xA4 + ((int)stk + 76)) + 0x40)) {
            break;
        }
        *(unsigned int *)((t51 + 0xC)) = 0xC8000078;
        t51 = (t51 + 0x10);
    }
    nlDispStripTrnsl(0x4, (0xA4 + ((int)stk + 76)));
    if ((int)t12 > 0) {
        t53 = 0x0;
        for (;;) {
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 76) + 0x20)) + 0x0)) = 252.0f;
            u54 = 222.0f;
            u54 = u54 + 36.0f * (float)t53;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 76) + 0x20)) + 0x4)) = u54;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 76) + 0x20)) + 0x8)) = 0.000300000014f;
            if (t53 == (*(int *)(((int)stk + 84)))) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 76) + 0x20))); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 76) + 0x20))); }
            }
            t58 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 64)));
            t53 = (t53 + 0x1);
            if ((int)t53 >= (int)t12) {
                break;
            }
        }
    }
    *(float *)(((((int)stk + 76) + 0x14) + 0x0)) = 252.0f;
    t63 = *(int *)(((int)stk + 84));
    *(float *)(((((int)stk + 76) + 0x14) + 0x4)) = ((float)((((t63 << 2) << 1) + t63) << 2) + 222.0f);
    *(float *)(((((int)stk + 76) + 0x14) + 0x8)) = 0.000199999995f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x14)); }
    t65 = ((float (*)(int, Stk3))(nlCos))((*(int *)0x8C1D1354), *(Stk3 *)(((int)stk + 64)));
    if (!(0.0f > t65)) {
        t67 = ((float (*)(int))(nlCos))((*(int *)0x8C1D1354));
    } else {
        t69 = ((float (*)(int))(nlCos))((*(int *)0x8C1D1354));
    }
    t73 = ((int (*)(int))(cursorBoxPut))(0x1);
    *(unsigned int *)0x8C1D1354 = ((*(int *)0x8C1D1354) + 0x200);
    return t73;
}
