/* Straight-line functions with calls and guards (batch gen_aag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuInFan(int, int, Stk3);
extern int cpuReachRange();
float FUN_8c04a81a(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);

float FUN_8c04a81a(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[19];
    int t0;
    register int t1;
    register float u2;
    register float u3;
    register int t6;
    register float u8;
    register float u9;
    register int t12;
    register int t21;
    register int t16;
    register int t18;
    register float u42;
    register float u43;
    register float u44;
    register float u45;
    register float u70;
    register float u48;
    register float u49;
    register float u52;
    register float u74;
    register float u75;
    register float u77;
    register float u79;
    register float u80;
    register float u82;
    register int t94;
    register int t95;
    register int t96;
    register int t97;
    register int t98;
    register float u100;
    register float u102;
    register float u105;
    register float u110;
    register int t145;
    register int t146;
    register float u148;
    register float u150;
    register float u153;
    register float u158;
    register int t211;
    register float u212;
    register float u213;
    register float u219;
    register float u220;
    register float u221;
    register float u222;
    register float u228;
    register float u243;
    register float u244;
    register float u265;
    register float u273;
    register float u300;
    register float u305;
    register float u314;
    register float u315;
    register float u331;
    register float u333;
    register float u336;
    register float u341;
    register float u362;
    register float u363;
    register int t366;
    register float u368;
    register float u369;
    register int t372;
    register int t381;
    register int t376;
    register int t378;
    register float u431;
    register float u410;
    register float u288;
    register float u255;
    register float u258;
    register float u259;
    register float u62;
    register float u88;
    register float u89;
    register float u90;
    register float u232;
    register float u235;
    int t320;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u3 = *(float *)0x8C291F44;
    t6 = ((u3 - u2) > 0.0f) - (0.0f > (u3 - u2));
    u8 = *(float *)0x8C291F38;
    u9 = *(float *)0x8C291F50;
    t12 = (u9 > 0.0f) - (0.0f > u9);
    t21 = 0x1;
    if (((u2 - u8) + (float)((t12 << 2) + t12)) > 0.0f) {
    } else {
        t16 = (u9 > 0.0f) - (0.0f > u9);
        t18 = 0x0;
        if (0.0f > ((u2 - u8) + (float)((t16 << 2) + t16))) {
            t18 = 0xFFFFFFFF;
        }
        t21 = t18;
    }
    if (t6 == t21) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
    } else {
        if ((int)(*(int *)0x8C287B00) <= (int)0x2) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12C)) = 0x0;
        } else {
            if ((int)(*(int *)0x8C287B00) <= (int)0x4) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12C)) = 0x1;
            } else {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12C)) = 0x2;
            }
        }
        if ((*(int *)((a4 + 0xA24))) != 0) {
            if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
            } else {
                if (((*(int *)0x8C291F78) & 4) != 0) {
                    u42 = *(float *)0x8C291F7C;
                    u43 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                    u44 = ((*(float *)((a4 + 0xB00))) * u43);
                    u45 = (-u42);
                    if (!(0.0f > u42)) {
                        u45 = u42;
                    }
                    u70 = 0.0f;
                    if (12.3450012f > u45) {
                    } else {
                        u48 = *(float *)0x8C291F7C;
                        u49 = (-u48);
                        if (!(0.0f > u48)) {
                            u49 = u48;
                        }
                        if (28.8050003f > u49) {
                            u52 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            u62 = ((float)((u52 > 0.0f) - (0.0f > u52)) * 26.7474995f);
                        } else {
                            u62 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                        }
                        u70 = u62;
                    }
                    u258 = u70;
                    u259 = (-(u44 * 118.849998f));
                } else {
                    u74 = *(float *)((a4 + 0xAF0));
                    u75 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                    u77 = ((-u74) - (u75 * 10.0f));
                    if (!(0.0f > (u74 + (u75 * 10.0f)))) {
                        u77 = (u74 + (u75 * 10.0f));
                    }
                    if (59.4249992f > u77) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x2;
                        u88 = (u74 + (u75 * 10.0f));
                        u89 = u74;
                        u90 = (u75 * 10.0f);
                    } else {
                        u79 = *(float *)((a4 + 0xAF0));
                        u80 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                        u82 = ((-u79) - (u80 * 10.0f));
                        if (!(0.0f > (u79 + (u80 * 10.0f)))) {
                            u82 = (u79 + (u80 * 10.0f));
                        }
                        if (95.0800018f > u82) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x1;
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x0;
                        }
                        u88 = (u79 + (u80 * 10.0f));
                        u89 = u79;
                        u90 = (u80 * 10.0f);
                    }
                    if ((int)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12C))) > (int)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)))) {
                        t94 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
                        t95 = *(short *)((((t94 * 0x160) + 0x8C2FC69C) + 0x118));
                        *(unsigned int *)(((int)stk + 16)) = t95;
                        if ((int)t95 > (int)0x1E) {
                            t96 = ((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (((int)stk + 16) + 0x4), 0x2, 0x160, 10.0f, u88, u89, u90, f8);
                            if ((int)(t95 - t96) >= (int)0x14) {
                                t97 = *(short *)((((t94 * 0x160) + 0x8C2FC69C) + 0x118));
                                t98 = ((int (*)(int, int))(cpuReachRange))((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (((int)stk + 16) + 0x4));
                                if ((int)(t97 - t98) < (int)0x1E) {
                                    u100 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    u102 = (-u100);
                                    if (!(0.0f > u100)) {
                                        u102 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                                    }
                                    if (u102 > 32.920002f) {
                                        u105 = *(float *)((a4 + 0xAE8));
                                        u110 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        if (((u105 > 0.0f) - (0.0f > u105)) == ((u110 > 0.0f) - (0.0f > u110))) {
                                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) + 0x1);
                                        }
                                    }
                                }
                            } else {
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) + 0x1);
                            }
                        } else {
                            t145 = *(short *)((((t94 * 0x160) + 0x8C2FC69C) + 0x118));
                            t146 = ((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (((int)stk + 16) + 0x4), 0x2, 0x160, 10.0f, u88, u89, u90, f8);
                            if ((int)(t145 - t146) < (int)0x1E) {
                                u148 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                u150 = (-u148);
                                if (!(0.0f > u148)) {
                                    u150 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                                }
                                if (u150 > 32.920002f) {
                                    u153 = *(float *)((a4 + 0xAE8));
                                    u158 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    if (((u153 > 0.0f) - (0.0f > u153)) == ((u158 > 0.0f) - (0.0f > u158))) {
                                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) + 0x1);
                                    }
                                }
                            }
                        }
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + (((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84))); }
                    t211 = cpuInFan((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), *(Stk3 *)(((int)stk + 4)));
                    if (t211 != 0) {
                        u212 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u213 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u219 = (float)((((u212 - u213) > 0.0f) - (0.0f > (u212 - u213))) * (*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                        u220 = (u219 * 0.5f);
                        u220 = u220 + 0.899999976f * u212;
                        u232 = 0.899999976f;
                        u235 = u220;
                    } else {
                        u221 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u222 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u228 = u221;
                        u228 = u228 + 1.10000002f * ((float)(((u221 - u222) > 0.0f) - (0.0f > (u221 - u222))) * (float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                        u232 = 1.10000002f;
                        u235 = u228;
                    }
                    u243 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                    u244 = ((*(float *)((a4 + 0xB00))) * u243);
                    u255 = u232;
                    u258 = u235;
                    u259 = (-(u244 * 118.849998f));
                }
                u265 = (-u258);
                if (!(0.0f > u258)) {
                    u265 = u258;
                }
                u273 = u258;
                if (u265 > 18.5174999f) {
                    u273 = ((float)((u258 > 0.0f) - (0.0f > u258)) * 18.5174999f);
                }
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                *(unsigned int *)((a4 + 0xA24)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                *(float *)((a4 + 0xA34)) = u273;
                *(float *)((a4 + 0xA3C)) = u259;
                u288 = u255;
            }
            u410 = u288;
        } else {
            if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) != 1) {
            } else {
                u300 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u305 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                if (((u300 > 0.0f) - (0.0f > u300)) == ((u305 > 0.0f) - (0.0f > u305))) {
                    u314 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u315 = *(float *)((a4 + 0xAE8));
                    if ((((u305 > 0.0f) - (0.0f > u305)) == (((u314 - u315) > 0.0f) - (0.0f > (u314 - u315)))) && (t320 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t320 < (int)0x19)) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x2;
                    }
                }
                if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) == 2) {
                    u331 = *(float *)((a4 + 0xAE8));
                    u333 = (-u331);
                    if (!(0.0f > u331)) {
                        u333 = (*(float *)((a4 + 0xAE8)));
                    }
                    if (u333 > 29.1500015f) {
                        u336 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                        u341 = *(float *)((a4 + 0xAE8));
                        if (((u336 > 0.0f) - (0.0f > u336)) == ((u341 > 0.0f) - (0.0f > u341))) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                        }
                    }
                }
                u362 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u363 = *(float *)0x8C291F44;
                t366 = ((u363 - u362) > 0.0f) - (0.0f > (u363 - u362));
                u368 = *(float *)0x8C291F38;
                u369 = *(float *)0x8C291F50;
                t372 = (u369 > 0.0f) - (0.0f > u369);
                t381 = 0x1;
                if (((u362 - u368) + (float)((t372 << 2) + t372)) > 0.0f) {
                } else {
                    t376 = (u369 > 0.0f) - (0.0f > u369);
                    t378 = 0x0;
                    if (0.0f > ((u362 - u368) + (float)((t376 << 2) + t376))) {
                        t378 = 0xFFFFFFFF;
                    }
                    t381 = t378;
                }
                if (t366 != t381) {
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                }
            }
        }
        u431 = u410;
    }
    return u431;
}
