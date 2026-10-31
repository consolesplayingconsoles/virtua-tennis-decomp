/* Straight-line functions with calls and guards (batch gen_xx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimAngleRate(int, int, int, int, int);
int cpuDblAimRateB(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuShotRange(int, int, int, int, int, float);
int cpuShotTargetSet(int, float, float);
int FUN_8c075890(int a4, int a5, float f4, float f5);

int FUN_8c075890(int a4, int a5, float f4, float f5)
{
    int stk[31];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t29;
    register int t42;
    register int t71;
    register int t61;
    register int t62;
    register int t63;
    register float u64;
    register float u83;
    register float u84;
    register float u86;
    register float u88;
    register float u93;
    register float u96;
    register float u97;
    register float u98;
    register float u105;
    register float u108;
    register float u109;
    register float u111;
    register float u113;
    register int t154;
    register int t137;
    register int t10;
    register int t52;
    register float u26;
    register float u27;
    register float u28;
    register int t34;
    register float u39;
    register float u40;
    register float u41;
    register int t47;
    register int t102;

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 12)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(55.3499985f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t154 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(119.349998f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t137 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
            cpuShotRange(a4, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14), u1);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((unsigned char)(*(signed char *)((t11 + 0xC))) == 1) {
                        if ((u13 > (*(float *)(((int)stk + 64)))) && ((u26 = *(float *)(((int)stk + 52)), u26 > u13) && ((u27 = *(float *)(((int)stk + 72)), u14 > u27) && (u28 = *(float *)(((int)stk + 60)), u28 > u14)))) {
                            t34 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x8);
                            t29 = t10;
                            *(int *)((int)stk + 4) = t29;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), t29);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t52 = t34;
                    } else {
                        if ((u13 > (*(float *)(((int)stk + 40)))) && ((u39 = *(float *)(((int)stk + 28)), u39 > u13) && ((u40 = *(float *)(((int)stk + 48)), u14 > u40) && (u41 = *(float *)(((int)stk + 36)), u41 > u14)))) {
                            t47 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x8);
                            t42 = t10;
                            *(int *)((int)stk + 4) = t42;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18), t42);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t52 = t47;
                    }
                    t10 = t52;
                    cpuDblAimRateB(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t10 = (*(int *)(((int)stk + 8)));
                    t11 = (t11 + 0x20);
                    t10 = (t10 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t10;
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            t71 = 0x0;
            if ((int)a5 > 0) {
                t61 = 0x0;
                t62 = 0x8C2FCC6C;
                t63 = 0x0;
                u64 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t62 + 0x1C))) > u64) {
                        u64 = (*(float *)((t62 + 0x1C)));
                        t63 = t61;
                    }
                    t61 = (t61 + 0x1);
                    t62 = (t62 + 0x20);
                    if ((int)t61 >= (int)a5) {
                        break;
                    }
                }
                t71 = t63;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((*(int *)(((*(int *)(((int)stk + 12))) + 0xA24))) == 0) {
                *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xA24)) = 0x4;
            }
            u83 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u84 = (-u83);
            if (!(0.0f > u83)) {
                u84 = u83;
            }
            u86 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u88 = (-1.0f);
            u88 = u88 + (1.0f + 1.0f) * (u84 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u86) / 54.8499985f), u88);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u93 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u93 = 4.0f;
            }
            u96 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u97 = u93;
            u97 = u97 + ((-(u96 / 100.0f)) + 1.0f) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)));
            u98 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u98 - 30.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u97 > (*(float *)0x8C291F54)) && (t102 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t102 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u97 - (*(float *)0x8C291F54));
                u105 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u105 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + 0xA)) {
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = ((*(float *)((a4 + 0xB00))) * 0.100000001f);
                    u108 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                    u109 = (-u108);
                    if (!(0.0f > u108)) {
                        u109 = u108;
                    }
                    u111 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                    u113 = (-1.0f);
                    u113 = u113 + (1.0f + 1.0f) * (u109 / 118.849998f);
                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u111) / 54.8499985f), u113);
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t137 = 0xA24;
        }
        t154 = t137;
    }
    return t154;
}
