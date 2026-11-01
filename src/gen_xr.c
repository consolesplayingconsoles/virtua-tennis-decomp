/* Straight-line functions with calls and guards (batch gen_xr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuInRange(Stk3, Stk3, Stk3);
extern int cpuSegCrossXZ();
Stk3 vecMake(float, float, float);
int FUN_8c080a4c(int a4, int a5, int a6, Stk3 s, float f4, float f5, float f6);

int FUN_8c080a4c(int a4, int a5, int a6, Stk3 s, float f4, float f5, float f6)
{
    int stk[41];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_6 = a4;
    v0_0 = a5;
    v0_1 = a6;
    w0_1 = f4;
    w0_2 = f5;
    w0_3 = f6;
    *(float *)(((((int)stk + 88) + 0xC) + 0x0)) = ((*(float *)((v0_6 + 0xAE8))) - *(float *)&s.w[0]);
    *(float *)(((((int)stk + 88) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 88) + 0xC) + 0x8)) = ((*(float *)((v0_6 + 0xAF0))) - *(float *)&s.w[2]);
    v0_2 = (v0_6);
    v0_3 = ((((int)stk + 88) + 0xC));
    v0_4 = (0x1);
    v0_5 = (v0_0);
    v0_6 = (0x1);
    v0_7 = (v0_0);
    w0_0 = (0.0f);
    if ((0x1 == 0)) goto L_8C080B3C;
    L_8C080A94:;
    v0_6 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C080A9E;
    v0_6 = ((v0_6 & 0x7));
    L_8C080AA8:;
    *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((v0_5 + 0x0))) - (*(float *)((((((v0_6 << 1) + v0_6) << 2) + v0_7) + 0x0)))), w0_0, ((*(float *)((v0_5 + 0x8))) - (*(float *)((((((v0_6 << 1) + v0_6) << 2) + v0_7) + 0x8)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(v0_3); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAE8 + v0_2)); }
    v0_8 = ((int (*)(int, Stk3, Stk3, Stk3, Stk3))(cpuSegCrossXZ))((((int)stk + 40) + 0x48), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x48)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((v0_6 << 1) + v0_6) << 2) + v0_7)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_5); }
    v0_6 = (cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)))) == 0;
    if (v0_6) goto L_8C080B32;
    v0_6 = (0x0);
    L_8C080BFA:;
    return v0_6;
    L_8C080B32:;
    v0_6 = (int)(v0_4 + 0x1) < (int)0x9;
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0xC));
    if (v0_6) goto L_8C080A94;
    L_8C080B3C:;
    *(float *)((((int)stk + 88) + 0x0)) = 1.0f;
    *(float *)((((int)stk + 88) + 0x8)) = w0_0;
    *(float *)((((int)stk + 88) + 0x4)) = w0_0;
    v0_6 = ((v0_7 + 0x60));
    v0_4 = (((int)stk + 88));
    v0_5 = (v0_7);
    w0_0 = (9999.90039f);
    L_8C080B54:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(v0_4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(v0_5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(v0_3); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAE8 + v0_2)); }
    v0_7 = ((int (*)(int, int, int, Stk3, Stk3, Stk3, Stk3, float, float, float))(cpuSegCrossXZ))((((int)stk + 40) + 0x48), v0_0, v0_1, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)), w0_1, w0_2, w0_3);
    w0_4 = *(float *)((v0_5 + 0x0));
    w0_5 = *(float *)(((int)stk + 112));
    w0_1 = (w0_5);
    w0_2 = ((w0_5 - w0_4));
    w0_3 = (w0_4);
    if ((0.0f > (w0_5 - w0_4))) goto L_8C080BB8;
    w0_1 = (w0_2);
    L_8C080BC0:;
    v0_5 = ((v0_5 + 0xC));
    if ((!(w0_0 > w0_1))) goto L_8C080BC8;
    w0_0 = (w0_1);
    L_8C080BC8:;
    if (((unsigned int)v0_5 < (unsigned int)v0_6)) goto L_8C080B54;
    w0_1 = (*(float *)&s.w[2]);
    if ((0.0f > *(float *)&s.w[2])) goto L_8C080BDA;
    w0_1 = (w0_1);
    L_8C080BDE:;
    w0_2 = *(float *)0x8C080CBC;
    w0_3 = *(float *)0x8C080CC0;
    w0_4 = *(float *)0x8C080CC4;
    v0_6 = ((int)(w0_0 * ((((-w0_1) + w0_2) / w0_3) + w0_4)));
    w0_5 = (w0_4);
    w0_5 = (w0_3);
    FPUL_ = ((int)(w0_0 * ((((-w0_1) + w0_2) / w0_3) + w0_4)));
    goto L_8C080BFA;
    L_8C080BDA:;
    w0_1 = ((-w0_1));
    goto L_8C080BDE;
    L_8C080BB8:;
    w0_1 = (((-w0_1) + w0_3));
    goto L_8C080BC0;
    L_8C080A9E:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x7)) + 0x1));
    goto L_8C080AA8;
}
