/* Straight-line functions with calls and guards (batch gen_xt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimAngleRate(int, int, int, int, int);
int cpuDblAimRateA(int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int cpuShotTargetSet(int, float, float);
int nlRand(void);
float nlRandom(void);
int FUN_8c0754ba(int a4, int a5);

int FUN_8c0754ba(int a4, int a5)
{
    int stk[31];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register float u9;
    register float u12;
    register int t15;
    register float u16;
    register float u17;
    register float u18;
    register int t33;
    register int t46;
    register int t76;
    register int t66;
    register int t67;
    register int t68;
    register float u69;
    register float u88;
    register float u89;
    register float u91;
    register float u93;
    register float u102;
    register int t97;
    register int t98;
    register float u106;
    register float u107;
    register float u108;
    register float u115;
    register float u118;
    register float u119;
    register float u121;
    register float u123;
    register int t159;
    register int t145;
    register int t14;
    register int t56;
    register float u58;
    register float u59;
    register float u30;
    register float u31;
    register float u32;
    register int t38;
    register float u40;
    register float u41;
    register float u43;
    register float u44;
    register float u45;
    register int t51;
    register float u53;
    register float u54;
    register int t112;

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 12)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    *(float *)(((int)stk + 4)) = u2;
    u5 = 1.0f;
    u5 = u5 + 0.100000001f * (nlRandom());
    if (!((u5 * 55.3499985f) > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t159 = 0x4;
    } else {
        u7 = *(float *)0x8C291F84;
        u9 = (-u7);
        if (!(0.0f > u7)) {
            u9 = (*(float *)0x8C291F84);
        }
        *(float *)(((int)stk + 4)) = u9;
        u12 = 1.10000002f;
        u12 = u12 + 0.200000003f * (nlRandom());
        if (!((u12 * 119.349998f) > u9)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t145 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
            cpuShotRange(a4, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t15 = 0x8C2FCC6C;
                for (;;) {
                    u16 = *(float *)((t15 + 0x8));
                    u17 = *(float *)((t15 + 0x0));
                    u18 = u16;
                    if (0.0f > u16) {
                        u18 = (-u16);
                    }
                    if ((unsigned char)(*(signed char *)((t15 + 0xC))) == 1) {
                        if ((u17 > (*(float *)(((int)stk + 64)))) && ((u30 = *(float *)(((int)stk + 52)), u30 > u17) && ((u31 = *(float *)(((int)stk + 72)), u18 > u31) && (u32 = *(float *)(((int)stk + 60)), u32 > u18)))) {
                            t38 = t14;
                            u40 = u17;
                            u41 = u18;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x8);
                            t33 = t14;
                            *(int *)((int)stk + 4) = t33;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), t33);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t56 = t38;
                        u58 = u40;
                        u59 = u41;
                    } else {
                        if ((u17 > (*(float *)(((int)stk + 40)))) && ((u43 = *(float *)(((int)stk + 28)), u43 > u17) && ((u44 = *(float *)(((int)stk + 48)), u18 > u44) && (u45 = *(float *)(((int)stk + 36)), u45 > u18)))) {
                            t51 = t14;
                            u53 = u17;
                            u54 = u18;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x8);
                            t46 = t14;
                            *(int *)((int)stk + 4) = t46;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18), t46);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t56 = t51;
                        u58 = u53;
                        u59 = u54;
                    }
                    t14 = t56;
                    cpuDblAimRateA(a4, t15, u58, u59);
                    t14 = (*(int *)(((int)stk + 8)));
                    t15 = (t15 + 0x20);
                    t14 = (t14 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t14;
                    if ((int)t14 >= (int)a5) {
                        break;
                    }
                }
            }
            t76 = 0x0;
            if ((int)a5 > 0) {
                t66 = 0x0;
                t67 = 0x8C2FCC6C;
                t68 = 0x0;
                u69 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t67 + 0x1C))) > u69) {
                        u69 = (*(float *)((t67 + 0x1C)));
                        t68 = t66;
                    }
                    t66 = (t66 + 0x1);
                    t67 = (t67 + 0x20);
                    if ((int)t66 >= (int)a5) {
                        break;
                    }
                }
                t76 = t68;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((*(int *)(((*(int *)(((int)stk + 12))) + 0xA24))) == 0) {
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xA24)) = 0x4;
            }
            u88 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u89 = (-u88);
            if (!(0.0f > u88)) {
                u89 = u88;
            }
            u91 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u93 = (-1.0f);
            u93 = u93 + (1.0f + 1.0f) * (u89 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u91) / 54.8499985f), u93);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u102 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                t97 = nlRand();
                t98 = ((~(((~t97) + 0x1) & 0x3)) + 0x1);
                if ((int)t97 >= 0) {
                    t98 = (t97 & 0x3);
                }
                u102 = (0.0f + (float)(t98 + 0x5));
            }
            u106 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u107 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u108 = u102;
            u108 = u108 + ((-(u106 / 100.0f)) + 1.0f) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u107 - 35.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u108 > (*(float *)0x8C291F54)) && (t112 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t112 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u108 - (*(float *)0x8C291F54));
                u115 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u115 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + 0xA)) {
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = ((*(float *)((a4 + 0xB00))) * 0.100000001f);
                    u118 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                    u119 = (-u118);
                    if (!(0.0f > u118)) {
                        u119 = u118;
                    }
                    u121 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                    u123 = (-1.0f);
                    u123 = u123 + (1.0f + 1.0f) * (u119 / 118.849998f);
                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u121) / 54.8499985f), u123);
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t145 = 0xA24;
        }
        t159 = t145;
    }
    return t159;
}
