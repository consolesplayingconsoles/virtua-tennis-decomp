/* Straight-line functions with calls and guards (batch gen_zj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuAimAngleRate(int, int, int, int, int);
int cpuDblAimRateA(int, int, float, float);
int cpuDblAimRateC(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimRateOpp3(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuShotRange(int, int, int, int, int, float);
int cpuShotTargetSet(int, float, float);
int nlLocate(int, int);
int nlRand(void);
int FUN_8c079c64(int a4, int a5);
int FUN_8c075bc0(int a4, int a5, float f4, float f5);
float FUN_8c055586(int a4, int a5, float f4, float f5, float f6);
int FUN_8c079fe8(int a4, int a5);



float FUN_8c055586(int a4, int a5, float f4, float f5, float f6)
{
    int stk[28];
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
    register float u77;
    register float u78;
    register float u80;
    register float u83;
    register float u88;
    register float u92;
    register float u93;
    register float u94;
    register float u125;
    register float u110;
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
    register int t98;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(43.7324982f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(131.285004f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
            cpuShotRange(a4, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), u1);
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
                        if ((u13 > (*(float *)(((int)stk + 60)))) && ((u26 = *(float *)(((int)stk + 48)), u26 > u13) && ((u27 = *(float *)(((int)stk + 68)), u14 > u27) && (u28 = *(float *)(((int)stk + 56)), u28 > u14)))) {
                            t34 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x4);
                            t29 = t10;
                            *(int *)((int)stk + 4) = t29;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), t29);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t52 = t34;
                    } else {
                        if ((u13 > (*(float *)(((int)stk + 36)))) && ((u39 = *(float *)(((int)stk + 24)), u39 > u13) && ((u40 = *(float *)(((int)stk + 44)), u14 > u40) && (u41 = *(float *)(((int)stk + 32)), u41 > u14)))) {
                            t47 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x4);
                            t42 = t10;
                            *(int *)((int)stk + 4) = t42;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), t42);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t52 = t47;
                    }
                    t10 = t52;
                    cpuSglAimRateOpp3(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
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
                t61 = 0x8C2FCC6C;
                t62 = 0x0;
                t63 = 0x0;
                u64 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t61 + 0x1C))) > u64) {
                        u64 = (*(float *)((t61 + 0x1C)));
                        t63 = t62;
                    }
                    t62 = (t62 + 0x1);
                    t61 = (t61 + 0x20);
                    if ((int)t62 >= (int)a5) {
                        break;
                    }
                }
                t71 = t63;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u77 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u78 = (-u77);
            if (!(0.0f > u77)) {
                u78 = u77;
            }
            u80 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u83 = (-1.0f);
            u83 = u83 + (1.0f + 1.0f) * (u78 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u80) / (*(float *)0x8C287B40)), u83);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t71 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u88 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u88 = 7.0f;
            }
            u92 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u93 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u94 = u88;
            u94 = u94 + 0.5f * (((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u92 / 100.0f)) + 1.0f));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u93 - 30.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u94 > (*(float *)0x8C291F54)) && (t98 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t98 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u94 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u110 = 0.5f;
        }
        u125 = u110;
    }
    return u125;
}

int FUN_8c079fe8(int a4, int a5)
{
    int stk[26];
    register int t0;
    register float u1;
    register float u2;
    register float u6;
    register float u8;
    register int t11;
    register int t12;
    register float u13;
    register float u14;
    register float u15;
    register int t54;
    register int t89;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t66;
    register int t67;
    register float u93;
    register float u94;
    register float u99;
    register int t101;
    register int t116;
    register int t102;
    register float u50;
    register float u51;
    register float u27;
    register float u28;
    register float u29;
    register float u35;
    register float u36;
    register float u38;
    register float u39;
    register float u40;
    register float u46;
    register float u47;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!((*(float *)0x8C287B40) > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t116 = 0x4;
    } else {
        u6 = *(float *)0x8C291F84;
        u8 = (-u6);
        if (!(0.0f > u6)) {
            u8 = (*(float *)0x8C291F84);
        }
        if (!(118.849998f > u8)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t102 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
            cpuShotRange(a4, (((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C), (((int)stk + 8) + 0xC), u1);
            if ((int)(a5 - 1) >= 0) {
                t11 = (a5 - 1);
                t12 = 0x8C2FCC6C;
                for (;;) {
                    u13 = *(float *)((t12 + 0x8));
                    u14 = *(float *)((t12 + 0x0));
                    u15 = u13;
                    if (0.0f > u13) {
                        u15 = (-u13);
                    }
                    if ((unsigned char)(*(signed char *)((t12 + 0xC))) == 1) {
                        if ((u14 > (*(float *)(((int)stk + 56)))) && ((u27 = *(float *)(((int)stk + 44)), u27 > u14) && ((u28 = *(float *)(((int)stk + 64)), u15 > u28) && (u29 = *(float *)(((int)stk + 52)), u29 > u15)))) {
                            u35 = u15;
                            u36 = u14;
                        } else {
                            *(int *)((int)stk + 4) = ((int)stk + 8);
                            cpuAimAngleRate((0xB9C + a4), t12, (((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), ((int)stk + 8));
                            *(float *)((t12 + 0x0)) = (*(float *)(((int)stk + 8)));
                            *(float *)((t12 + 0x8)) = (*(float *)(((int)stk + 16)));
                        }
                        u50 = u35;
                        u51 = u36;
                    } else {
                        if ((u14 > (*(float *)(((int)stk + 32)))) && ((u38 = *(float *)(((int)stk + 20)), u38 > u14) && ((u39 = *(float *)(((int)stk + 40)), u15 > u39) && (u40 = *(float *)(((int)stk + 28)), u40 > u15)))) {
                            u46 = u15;
                            u47 = u14;
                        } else {
                            *(int *)((int)stk + 4) = ((int)stk + 8);
                            cpuAimAngleRate((0xB9C + a4), t12, (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), ((int)stk + 8));
                            *(float *)((t12 + 0x0)) = (*(float *)(((int)stk + 8)));
                            *(float *)((t12 + 0x8)) = (*(float *)(((int)stk + 16)));
                        }
                        u50 = u46;
                        u51 = u47;
                    }
                    t54 = ((int (*)(int, int, float, float))((*(int *)((0x8C10D9BC + ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129))) << 2))))))(a4, t12, u50, u51);
                    t11 = (t11 - 1);
                    t12 = (t12 + 0x20);
                    if ((int)t11 < 0) {
                        break;
                    }
                }
            }
            t89 = 0x0;
            if ((int)a5 > 0) {
                t59 = 0x0;
                t60 = 0xFFFFD8F0;
                t61 = 0x0;
                t62 = 0x8C2FCC6C;
                for (;;) {
                    if (!((float)t60 > (*(float *)((t62 + 0x1C))))) {
                        if ((*(float *)((t62 + 0x1C))) == (float)t60) {
                            t66 = nlRand();
                            t67 = ((~(((~t66) + 0x1) & 0x1)) + 0x1);
                            if ((int)t66 >= 0) {
                                t67 = (t66 & 0x1);
                            }
                            if (t67 != 0) {
                                t59 = t61;
                                t60 = (int)(*(float *)((t62 + 0x1C)));
                            }
                        } else {
                            t59 = t61;
                            t60 = (int)(*(float *)((t62 + 0x1C)));
                        }
                    }
                    t61 = (t61 + 0x1);
                    t62 = (t62 + 0x20);
                    if ((int)t61 >= (int)a5) {
                        break;
                    }
                }
                t89 = t59;
            }
            u93 = *(float *)((((((t89 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8));
            u94 = (-u93);
            if (!(0.0f > u93)) {
                u94 = u93;
            }
            u99 = (-1.0f);
            u99 = u99 + (1.0f + 1.0f) * (u94 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * (*(float *)((((((t89 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)))) / (*(float *)0x8C287B40)), u99);
            t101 = *(signed char *)((((((t89 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC));
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = t101;
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)t101;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t102 = 0xA24;
        }
        t116 = t102;
    }
    return t116;
}
