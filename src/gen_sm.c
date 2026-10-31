/* Straight-line functions with calls and guards (batch gen_sm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
int cpuAimPointSet(int, int, float, float);
int cpuInFan(int, int, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuReachPoint(int, int, int, Stk3);
int cpuShotRange(int, int, int, int, int, float, float, float);
int cpuSglAimAddReach(int a4, int a5, float f4, float f5, float f6);

int cpuSglAimAddReach(int a4, int a5, float f4, float f5, float f6)
{
    int stk[59];

    int R0;
    int R2;
    int R3;
    int R6;
    int R7;
    int R9;
    float F0;
    float F1;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    float w0_0;
    float w0_1;
    float w0_2;
    float w0_3;
    float w0_4;
    float w0_5;
    float w0_6;
    float w0_7;
    float w0_8;
    v0_3 = a4;
    v0_0 = a5;
    w0_4 = f4;
    w0_5 = f5;
    w0_6 = f6;
    v0_2 = *(int *)((v0_3 + 0xB5C));
    *(unsigned int *)(((int)stk + 40)) = ((v0_2 * 0x160) + 0x8C2FC69C);
    *(int *)((int)stk + 36) = (((int)stk + 40) + 0x4);
    cpuShotRange(v0_3, (((int)stk + 36) + 0x2C), (((int)stk + 36) + 0x20), (((int)stk + 36) + 0x14), (((int)stk + 40) + 0x4), w0_4, w0_5, w0_6);
    w0_1 = *(float *)(((int)stk + 80));
    w0_6 = *(float *)(((int)stk + 68));
    w0_3 = *(float *)(((((0x1 & (v0_2 + 0x1)) * 0xD78) + (int)Player) + 0xAE8));
    v0_0 = (v0_0);
    v0_1 = (v0_3);
    v0_2 = ((((0x1 & (v0_2 + 0x1)) * 0xD78) + (int)Player));
    w0_2 = (w0_6);
    w0_0 = (w0_1);
    w0_4 = (w0_3);
    w0_5 = ((w0_1 - w0_3));
    w0_6 = (w0_6);
    if ((0.0f > (w0_1 - w0_3))) goto L_8C04D04C;
    w0_7 = (w0_5);
    L_8C04D054:;
    v0_3 = 0.0f > (w0_6 - w0_4);
    w0_6 = ((w0_6 - w0_4));
    if (v0_3) goto L_8C04D060;
    w0_4 = (w0_6);
    L_8C04D066:;
    if ((!(w0_7 > w0_4))) goto L_8C04D06E;
    w0_1 = (w0_0);
    L_8C04D070:;
    w0_2 = *(float *)((v0_1 + 0xAF0));
    w0_8 = *(float *)((v0_2 + 0xAF0));
    w0_3 = ((*(float *)(((int)stk + 88))));
    w0_0 = ((*(float *)(((int)stk + 76))));
    w0_7 = ((float)(*(short *)(((*(int *)(((int)stk + 40))) + 0x118))));
    w0_4 = ((w0_2 - w0_8));
    w0_5 = (w0_2);
    w0_6 = (w0_8);
    if ((0.0f > (w0_2 - w0_8))) goto L_8C04D0B0;
    w0_4 = (w0_4);
    L_8C04D0B8:;
    v0_3 = *(int *)((v0_2 + 0xB60));
    v0_4 = (v0_3);
    w0_2 = ((w0_7 + (((w0_4 / 6.0f) + 10.0f) / (*(float *)0x8C23D204))));
    if (((v0_3 & 0x100) == 0)) goto L_8C04D104;
    if (((*(int *)((v0_2 + 0xC5C))) != 12)) goto L_8C04D0E8;
    w0_2 = ((w0_2 * 0.0500000007f));
    L_8C04D104:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + v0_2)); }
    cpuReachPoint(v0_2, (((int)stk + 40) + 0x34), (int)w0_2, *(Stk3 *)(((int)stk + 28)));
    w0_5 = *(float *)((v0_2 + 0xAF0));
    v0_3 = ((((int)stk + 40) + 0x34));
    v0_4 = (0x8C041C58);
    w0_2 = (0.0f);
    w0_4 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C04D164;
    w0_7 = (w0_4);
    L_8C04D168:;
    if ((!(w0_7 > 88.8499985f))) goto L_8C04D218;
    *(float *)(((((int)stk + 40) + 0x28) + 0x0)) = ((*(float *)((v0_1 + 0xB9C))) - w0_1);
    *(float *)(((((int)stk + 40) + 0x28) + 0x4)) = w0_2;
    *(float *)(((((int)stk + 40) + 0x28) + 0x8)) = ((*(float *)((v0_1 + 0xBA4))) - w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + v0_1)); }
    *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (*(float *)((v0_2 + 0xAF0)))));
    *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = w0_2;
    *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = (*(float *)((v0_2 + 0xAF0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
    v0_2 = (cpuInFan(v0_1, v0_3, *(Stk3 *)(((int)stk + 4)))) != 0;
    v0_4 = ((((int)stk + 40) + 0x1C));
    if (v0_2) goto L_8C04D1E4;
    cpuAimPointSet(v0_0, 0x1, w0_1, w0_0);
    v0_0 = ((v0_0 + 0x1));
    L_8C04D1E4:;
    *(float *)((v0_4 + 0x0)) = w0_1;
    *(float *)((v0_4 + 0x4)) = w0_2;
    *(float *)((v0_4 + 0x8)) = w0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(v0_4); }
    v0_1 = (cpuInFan(v0_1, v0_3, *(Stk3 *)(((int)stk + 28)))) != 0;
    if (v0_1) goto L_8C04D28C;
    cpuAimPointSet(v0_0, 0x1, w0_1, w0_3);
    v0_0 = ((v0_0 + 0x1));
    L_8C04D28C:;
    return v0_0;
    L_8C04D218:;
    *(float *)(((((int)stk + 40) + 0x28) + 0x0)) = ((*(float *)((v0_1 + 0xB9C))) - w0_1);
    *(float *)(((((int)stk + 40) + 0x28) + 0x4)) = w0_2;
    *(float *)(((((int)stk + 40) + 0x28) + 0x8)) = ((*(float *)((v0_1 + 0xBA4))) - w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + v0_1)); }
    *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (*(float *)((v0_2 + 0xAF0)))));
    *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = w0_2;
    *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = (*(float *)((v0_2 + 0xAF0)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
    v0_1 = (cpuInFan(v0_1, v0_3, *(Stk3 *)(((int)stk + 4)))) != 0;
    if (v0_1) goto L_8C04D28C;
    cpuAimPointSet(v0_0, 0x1, w0_1, w0_0);
    v0_0 = ((v0_0 + 0x1));
    goto L_8C04D28C;
    L_8C04D164:;
    w0_7 = ((-w0_4));
    goto L_8C04D168;
    L_8C04D0E8:;
    v0_4 = *(int *)((v0_2 + 0xC5C));
    v0_3 = (v0_4);
    if (((int)v0_4 < (int)0x9)) goto L_8C04D0FE;
    v0_4 = (0xC);
    if (((int)v0_3 > (int)0xC)) goto L_8C04D0FE;
    w0_7 = (0.25f);
    L_8C04D102:;
    w0_2 = ((w0_2 * w0_7));
    goto L_8C04D104;
    L_8C04D0FE:;
    w0_7 = (0.699999988f);
    goto L_8C04D102;
    L_8C04D0B0:;
    w0_4 = (((-w0_5) + w0_6));
    goto L_8C04D0B8;
    L_8C04D06E:;
    w0_1 = (w0_2);
    goto L_8C04D070;
    L_8C04D060:;
    w0_4 = (((-w0_2) + w0_4));
    goto L_8C04D066;
    L_8C04D04C:;
    w0_7 = (((-w0_0) + w0_4));
    goto L_8C04D054;
}
