/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int countryNamePutB(int, Stk3, float);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int cpuSglAimAddRange(int, int, int, int, int, int, int, int, int, int, int, int);
extern int cpuSglAimAddReach();
int hudProfileDraw(int, Stk3);
int iconSlotPutB(int, Stk3);
int ndbGetTargets(int, int, int);
int nlRand(void);
int primRectDirX(int, int, int, int, Stk3);
int primRectDirY(int, int, int, int, Stk3);
int sprPutAt(int, int, int, int, Stk3);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int selCharInfoDraw(int a4, int a5);
int cpuSglAimLv09(int a4, int a5);

int selCharInfoDraw(int a4, int a5)
{
    int t0;
    int t3;
    int t5;
    int t9;
    int t13;
    int t14;
    int t18;
    int t26;
    int t29;
    int t31;
    int t32;
    int t40;
    int t48;
    int t59;
    int t63;
    int t132;
    int t144;
    int t6;
    int t11;
    int t15;
    int t43;
    int t44;
    int t126;
    int t118;
    int t110;
    int t102;
    int t94;
    int t86;
    int t78;
    int t70;
    int stk[50];

    *(unsigned int *)(((int)stk + 48)) = a5;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    t0 = *(int *)(((a4 * 0x38) + 0x8C343268));
    t3 = 0x0;
    if (t0 != -1) {
        t3 = (*(int *)(((t0 << 2) + 0x8C343878)));
    }
    t5 = unlockCountW0();
    t9 = t3;
    if ((t5 == 0) && (t6 = *(int *)(((a4 * 0x38) + 0x8C34326C)), t6 == 0)) {
        t9 = 0x0;
    }
    t13 = t9;
    if (((*(int *)0x8C287D5C) == 0) && (t11 = *(int *)(((a4 * 0x38) + 0x8C34326C)), t11 == 1)) {
        t13 = 0x0;
    }
    *(unsigned int *)(((int)stk + 44)) = (0x8C343264 + (a4 * 0x38));
    t14 = *(int *)(((0x8C343264 + (a4 * 0x38)) + 0x0));
    t18 = 0x0;
    if (((t14 != 16) && (t14 != 17)) || (t15 = *(int *)(((a4 * 0x38) + 0x8C34326C)), t15 != 0)) {
        t18 = t13;
    }
    *(float *)(((0xA4 + ((int)stk + 36)) + 0x4)) = ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x4))) + 9.0f);
    *(Stk3 *)((((int)stk + 36) + 0x2C)) = vecMake(((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))) + 99.0f), ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x4))) + 42.0f), (*(float *)(((0xA4 + ((int)stk + 36)) + 0x8))));
    *(Stk3 *)((((int)stk + 32) + 0x24)) = vecMake(((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))) + -4.0f), ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x4))) + 159.0f), 0.00999999978f);
    t26 = *(int *)(((a4 * 0x38) + 0x8C343264));
    *(Stk3 *)((((int)stk + 28) + 0x1C)) = vecMake((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))), ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x4))) + 3.0f), (*(float *)(((0xA4 + ((int)stk + 36)) + 0x8))));
    *(unsigned int *)(((int)stk + 36)) = 0x8C1853C0;
    *(unsigned int *)(((int)stk + 40)) = 0x8C185378;
    t29 = 0x0;
    for (;;) {
        t31 = (*(int *)(((int)stk + 40)));
        for (;;) {
            t32 = *(int *)((t31 + (t29 << 2)));
            t31 = (t31 + 0x24);
            if (t26 == t32) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            }
            if ((unsigned int)t31 >= (unsigned int)(*(int *)(((int)stk + 36)))) {
                break;
            }
        }
        t29 = (t29 + 0x1);
        if ((int)t29 >= (int)0x9) {
            break;
        }
    }
    t40 = t26;
    if ((*(int *)(((int)stk + 52))) == 0) {
        t40 = 0xFFFFFFFF;
    }
    t48 = t40;
    if (((*(int *)0x8C287D5C) == 0) && ((t43 = *(int *)0x8C287ADC, t43 == 4) && (t44 = *(int *)0x8C343AB4, (int)t44 > (int)0x3))) {
        t48 = (*(int *)(((a4 * 0x38) + 0x8C343264)));
    }
    *(Stk3 *)((((int)stk + 36) + 0x38)) = vecMake(((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))) + 4.0f), ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x4))) + 216.0f), ((*(float *)(((0xA4 + ((int)stk + 36)) + 0x8))) + -9.99999975e-06f));
    if (t18 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x38)); }
        countryNamePutB(t48, *(Stk3 *)(((int)stk + 24)), 1.0f);
    }
    if ((int)t48 >= 0) {
        if (t18 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x20)); }
            hudProfileDraw(t48, *(Stk3 *)(((int)stk + 24)));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x14)); }
        iconSlotPutB(t48, *(Stk3 *)(((int)stk + 24)));
    }
    t59 = *(int *)(((int)stk + 48));
    if (t59 != 0) {
        if (t59 != 1) {
            if (t59 != 2) {
                if (t59 != 3) {
                    if (t59 != 4) {
                        if (t59 != 5) {
                            if (t59 != 6) {
                                if (t59 == 7) {
                                    *(float *)0x8C33B37C = 1.0f;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                                    sprPutAt(0x8C33B350, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                                    t70 = 0xFFE6E600;
                                } else {
                                    t63 = t48;
                                    if (t59 == 8) {
                                        *(float *)0x8C33B46C = 1.0f;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                                        sprPutAt(0x8C33B440, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                                        t63 = 0xFFB464F0;
                                    }
                                    t70 = t63;
                                }
                                t78 = t70;
                            } else {
                                *(float *)0x8C33B28C = 1.0f;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                                sprPutAt(0x8C33B260, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                                t78 = 0xFF00E6E6;
                            }
                            t86 = t78;
                        } else {
                            *(float *)0x8C33B19C = 1.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                            sprPutAt(0x8C33B170, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                            t86 = 0xFFFF0000;
                        }
                        t94 = t86;
                    } else {
                        *(float *)0x8C33B5FC = 1.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                        sprPutAt(0x8C33B5D0, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                        t94 = 0xFF00C800;
                    }
                    t102 = t94;
                } else {
                    *(float *)0x8C33B82C = 1.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                    sprPutAt(0x8C33B800, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                    t102 = 0xFFB464F0;
                }
                t110 = t102;
            } else {
                *(float *)0x8C33B78C = 1.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
                sprPutAt(0x8C33B760, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
                t110 = 0xFFE6E600;
            }
            t118 = t110;
        } else {
            *(float *)0x8C33B55C = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
            sprPutAt(0x8C33B530, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
            t118 = 0xFF00E6E6;
        }
        t126 = t118;
    } else {
        *(float *)0x8C33B4BC = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x2C)); }
        sprPutAt(0x8C33B490, 0x8C33B490, 0x8C33B0D0, 0x370, *(Stk3 *)(((int)stk + 24)));
        t126 = 0xFFFF0000;
    }
    *(unsigned int *)(((int)stk + 160)) = 0x116;
    *(unsigned int *)(((int)stk + 152)) = 0x116;
    *(unsigned int *)(((int)stk + 156)) = 0x50;
    *(unsigned int *)(((((int)stk + 36) + 0x68) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 36) + 0x68) + 0x4)) = 0x3E;
    *(unsigned int *)(((((int)stk + 36) + 0x68) + 0x8)) = 0x8E;
    *(unsigned int *)(((int)stk + 136)) = 0x8E;
    *(unsigned int *)(((int)stk + 132)) = 0x8E;
    *(unsigned int *)(((int)stk + 128)) = 0x8E;
    *(unsigned int *)(((int)stk + 116)) = 0x0;
    *(unsigned int *)(((int)stk + 120)) = 0x50;
    *(unsigned int *)(((int)stk + 124)) = 0x114;
    t132 = 0x0;
    for (;;) {
        *(Stk3 *)((((int)stk + 36) + 0x44)) = vecMake(((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))) + (float)(*(int *)(((((int)stk + 36) + 0x68) + t132)))), (*(float *)(((0x4 + (0xA4 + ((int)stk + 36))) + 0x0))), (*(float *)(((0x8 + (0xA4 + ((int)stk + 36))) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x44)); }
        primRectDirY(t126, (*(int *)((((0x84 + ((int)stk + 20)) + t132) + 0x0))), 0x2, 0x1, *(Stk3 *)(((int)stk + 20)));
        *(Stk3 *)((((int)stk + 36) + 0x44)) = vecMake((*(float *)(((0xA4 + ((int)stk + 36)) + 0x0))), ((*(float *)(((0x4 + (0xA4 + ((int)stk + 36))) + 0x0))) + (float)(*(int *)((((((int)stk + 20) + 0x60) + t132) + 0x0)))), (*(float *)(((0x8 + (0xA4 + ((int)stk + 36))) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 36) + 0x44)); }
        t144 = primRectDirX(t126, 0x2, (*(int *)((((((int)stk + 4) + 0x7C) + t132) + 0x0))), 0x0, *(Stk3 *)(((int)stk + 4)));
        t132 = (t132 + 0x4);
        if ((unsigned int)t132 >= (unsigned int)0xC) {
            break;
        }
    }
    return t144;
}

int cpuSglAimLv09(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    float t4;
    int t6;
    int t184;
    float u8;
    float u9;
    float u12;
    float u13;
    int t62;
    float u16;
    int t19;
    int t17;
    float u21;
    int t24;
    int t22;
    int t52;
    float u26;
    float u27;
    float u28;
    int t31;
    int t29;
    float u34;
    float u35;
    float u36;
    int t39;
    int t37;
    float u42;
    float u43;
    float u44;
    int t47;
    int t45;
    float u70;
    int t73;
    int t71;
    float u75;
    int t78;
    int t76;
    float u80;
    float u81;
    float u82;
    int t85;
    int t83;
    float u88;
    float u89;
    float u90;
    int t93;
    int t91;
    float u96;
    float u97;
    float u98;
    int t101;
    int t99;
    float u104;
    float u105;
    int t154;
    float u108;
    int t111;
    int t109;
    float u113;
    int t116;
    int t114;
    int t144;
    float u118;
    float u119;
    float u120;
    int t123;
    int t121;
    float u126;
    float u127;
    float u128;
    int t131;
    int t129;
    float u134;
    float u135;
    float u136;
    int t139;
    int t137;
    int t206;
    int t384;
    float u208;
    float u209;
    float u212;
    float u213;
    int t262;
    float u216;
    int t219;
    int t217;
    float u221;
    int t224;
    int t222;
    int t252;
    float u226;
    float u227;
    float u228;
    int t231;
    int t229;
    float u234;
    float u235;
    float u236;
    int t239;
    int t237;
    float u242;
    float u243;
    float u244;
    int t247;
    int t245;
    float u270;
    int t273;
    int t271;
    float u275;
    int t278;
    int t276;
    float u280;
    float u281;
    float u282;
    int t285;
    int t283;
    float u288;
    float u289;
    float u290;
    int t293;
    int t291;
    float u296;
    float u297;
    float u298;
    int t301;
    int t299;
    float u304;
    float u305;
    int t354;
    float u308;
    int t311;
    int t309;
    float u313;
    int t316;
    int t314;
    int t344;
    float u318;
    float u319;
    float u320;
    int t323;
    int t321;
    float u326;
    float u327;
    float u328;
    int t331;
    int t329;
    float u334;
    float u335;
    float u336;
    int t339;
    int t337;
    int t497;
    int t406;
    float u409;
    int t411;
    int t450;
    int t416;
    int t421;
    int t427;
    int t432;
    int t438;
    int t443;
    int t460;
    int t464;
    int t469;
    int t473;
    int t477;
    int t481;
    int t484;
    int t492;
    int t485;
    int t488;
    int t396;
    int t196;
    int t174;
    int t164;
    int t374;
    int t364;
    int t413;
    int t414;
    int stk[12];

    t0 = *(int *)((a4 + 0xC58));
    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
        t4 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
        if (10.0f > t4) {
            t196 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
        } else {
            t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(cpuSglAimAddReach))(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t184 = t6;
            if (t6 != 0) {
            } else {
                u8 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u9 = (-u8);
                if (!(0.0f > u8)) {
                    u9 = u8;
                }
                if (!(35.6550026f > u9)) {
                    u12 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u13 = (-u12);
                    if (!(0.0f > u12)) {
                        u13 = u12;
                    }
                    t62 = t6;
                    if (52.2939987f > u13) {
                        u16 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                        t19 = 0x1;
                        if (u16 > 0.0f) {
                        } else {
                            t17 = 0x0;
                            if (0.0f > u16) {
                                t17 = 0xFFFFFFFF;
                            }
                            t19 = t17;
                        }
                        u21 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                        t24 = 0x1;
                        if (u21 > 0.0f) {
                        } else {
                            t22 = 0x0;
                            if (0.0f > u21) {
                                t22 = 0xFFFFFFFF;
                            }
                            t24 = t22;
                        }
                        t52 = t6;
                        if (t19 == t24) {
                            u26 = *(float *)((a4 + 0xB00));
                            u27 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u28 = *(float *)((a4 + 0xB9C));
                            t31 = 0x1;
                            if ((u28 - u27) > 0.0f) {
                            } else {
                                t29 = 0x0;
                                if (0.0f > (u28 - u27)) {
                                    t29 = 0xFFFFFFFF;
                                }
                                t31 = t29;
                            }
                            cpuAimPointSet(t6, 0x2, ((float)t31 * 41.1500015f), (u26 * 118.849998f));
                            u34 = *(float *)((a4 + 0xB00));
                            u35 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u36 = *(float *)((a4 + 0xB9C));
                            t39 = 0x1;
                            if ((u36 - u35) > 0.0f) {
                            } else {
                                t37 = 0x0;
                                if (0.0f > (u36 - u35)) {
                                    t37 = 0xFFFFFFFF;
                                }
                                t39 = t37;
                            }
                            cpuAimPointSet((t6 + 0x1), 0x2, ((float)t39 * 41.1500015f), (u34 * 118.849998f));
                            u42 = *(float *)((a4 + 0xB00));
                            u43 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u44 = *(float *)((a4 + 0xB9C));
                            t47 = 0x1;
                            if ((u44 - u43) > 0.0f) {
                            } else {
                                t45 = 0x0;
                                if (0.0f > (u44 - u43)) {
                                    t45 = 0xFFFFFFFF;
                                }
                                t47 = t45;
                            }
                            cpuAimPointSet(((t6 + 0x1) + 0x1), 0x2, ((float)(-t47) * 41.1500015f), (u42 * 118.849998f));
                            t52 = (((t6 + 0x1) + 0x1) + 0x1);
                        }
                        t62 = t52;
                    }
                    t174 = t62;
                } else {
                    u70 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                    t73 = 0x1;
                    if (u70 > 0.0f) {
                    } else {
                        t71 = 0x0;
                        if (0.0f > u70) {
                            t71 = 0xFFFFFFFF;
                        }
                        t73 = t71;
                    }
                    u75 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                    t78 = 0x1;
                    if ((-u75) > 0.0f) {
                    } else {
                        t76 = 0x0;
                        if (0.0f > (-u75)) {
                            t76 = 0xFFFFFFFF;
                        }
                        t78 = t76;
                    }
                    if (t73 != t78) {
                        u80 = *(float *)((a4 + 0xB00));
                        u81 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u82 = *(float *)((a4 + 0xB9C));
                        t85 = 0x1;
                        if ((u82 - u81) > 0.0f) {
                        } else {
                            t83 = 0x0;
                            if (0.0f > (u82 - u81)) {
                                t83 = 0xFFFFFFFF;
                            }
                            t85 = t83;
                        }
                        cpuAimPointSet(t6, 0x2, ((float)t85 * 41.1500015f), (u80 * 118.849998f));
                        u88 = *(float *)((a4 + 0xB00));
                        u89 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u90 = *(float *)((a4 + 0xB9C));
                        t93 = 0x1;
                        if ((u90 - u89) > 0.0f) {
                        } else {
                            t91 = 0x0;
                            if (0.0f > (u90 - u89)) {
                                t91 = 0xFFFFFFFF;
                            }
                            t93 = t91;
                        }
                        cpuAimPointSet((t6 + 0x1), 0x2, ((float)t93 * 41.1500015f), (u88 * 118.849998f));
                        u96 = *(float *)((a4 + 0xB00));
                        u97 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u98 = *(float *)((a4 + 0xB9C));
                        t101 = 0x1;
                        if ((u98 - u97) > 0.0f) {
                        } else {
                            t99 = 0x0;
                            if (0.0f > (u98 - u97)) {
                                t99 = 0xFFFFFFFF;
                            }
                            t101 = t99;
                        }
                        cpuAimPointSet(((t6 + 0x1) + 0x1), 0x2, ((float)(-t101) * 41.1500015f), (u96 * 118.849998f));
                        t164 = (((t6 + 0x1) + 0x1) + 0x1);
                    } else {
                        u104 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u105 = (-u104);
                        if (!(0.0f > u104)) {
                            u105 = u104;
                        }
                        t154 = t6;
                        if (52.2939987f > u105) {
                            u108 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                            t111 = 0x1;
                            if (u108 > 0.0f) {
                            } else {
                                t109 = 0x0;
                                if (0.0f > u108) {
                                    t109 = 0xFFFFFFFF;
                                }
                                t111 = t109;
                            }
                            u113 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                            t116 = 0x1;
                            if (u113 > 0.0f) {
                            } else {
                                t114 = 0x0;
                                if (0.0f > u113) {
                                    t114 = 0xFFFFFFFF;
                                }
                                t116 = t114;
                            }
                            t144 = t6;
                            if (t111 == t116) {
                                u118 = *(float *)((a4 + 0xB00));
                                u119 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u120 = *(float *)((a4 + 0xB9C));
                                t123 = 0x1;
                                if ((u120 - u119) > 0.0f) {
                                } else {
                                    t121 = 0x0;
                                    if (0.0f > (u120 - u119)) {
                                        t121 = 0xFFFFFFFF;
                                    }
                                    t123 = t121;
                                }
                                cpuAimPointSet(t6, 0x2, ((float)t123 * 41.1500015f), (u118 * 118.849998f));
                                u126 = *(float *)((a4 + 0xB00));
                                u127 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u128 = *(float *)((a4 + 0xB9C));
                                t131 = 0x1;
                                if ((u128 - u127) > 0.0f) {
                                } else {
                                    t129 = 0x0;
                                    if (0.0f > (u128 - u127)) {
                                        t129 = 0xFFFFFFFF;
                                    }
                                    t131 = t129;
                                }
                                cpuAimPointSet((t6 + 0x1), 0x2, ((float)t131 * 41.1500015f), (u126 * 118.849998f));
                                u134 = *(float *)((a4 + 0xB00));
                                u135 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u136 = *(float *)((a4 + 0xB9C));
                                t139 = 0x1;
                                if ((u136 - u135) > 0.0f) {
                                } else {
                                    t137 = 0x0;
                                    if (0.0f > (u136 - u135)) {
                                        t137 = 0xFFFFFFFF;
                                    }
                                    t139 = t137;
                                }
                                cpuAimPointSet(((t6 + 0x1) + 0x1), 0x2, ((float)(-t139) * 41.1500015f), (u134 * 118.849998f));
                                t144 = (((t6 + 0x1) + 0x1) + 0x1);
                            }
                            t154 = t144;
                        }
                        t164 = t154;
                    }
                    t174 = t164;
                }
                t184 = t174;
            }
            t196 = t184;
        }
        t396 = t196;
    } else {
        t206 = ((int (*)(int, int))(cpuSglAimAddReach))(a4, a5);
        t384 = t206;
        if (t206 != 0) {
        } else {
            u208 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u209 = (-u208);
            if (!(0.0f > u208)) {
                u209 = u208;
            }
            if (!(35.6550026f > u209)) {
                u212 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u213 = (-u212);
                if (!(0.0f > u212)) {
                    u213 = u212;
                }
                t262 = t206;
                if (52.2939987f > u213) {
                    u216 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                    t219 = 0x1;
                    if (u216 > 0.0f) {
                    } else {
                        t217 = 0x0;
                        if (0.0f > u216) {
                            t217 = 0xFFFFFFFF;
                        }
                        t219 = t217;
                    }
                    u221 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                    t224 = 0x1;
                    if (u221 > 0.0f) {
                    } else {
                        t222 = 0x0;
                        if (0.0f > u221) {
                            t222 = 0xFFFFFFFF;
                        }
                        t224 = t222;
                    }
                    t252 = t206;
                    if (t219 == t224) {
                        u226 = *(float *)((a4 + 0xB00));
                        u227 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u228 = *(float *)((a4 + 0xB9C));
                        t231 = 0x1;
                        if ((u228 - u227) > 0.0f) {
                        } else {
                            t229 = 0x0;
                            if (0.0f > (u228 - u227)) {
                                t229 = 0xFFFFFFFF;
                            }
                            t231 = t229;
                        }
                        cpuAimPointSet(t206, 0x2, ((float)t231 * 41.1500015f), (u226 * 118.849998f));
                        u234 = *(float *)((a4 + 0xB00));
                        u235 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u236 = *(float *)((a4 + 0xB9C));
                        t239 = 0x1;
                        if ((u236 - u235) > 0.0f) {
                        } else {
                            t237 = 0x0;
                            if (0.0f > (u236 - u235)) {
                                t237 = 0xFFFFFFFF;
                            }
                            t239 = t237;
                        }
                        cpuAimPointSet((t206 + 0x1), 0x2, ((float)t239 * 41.1500015f), (u234 * 118.849998f));
                        u242 = *(float *)((a4 + 0xB00));
                        u243 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u244 = *(float *)((a4 + 0xB9C));
                        t247 = 0x1;
                        if ((u244 - u243) > 0.0f) {
                        } else {
                            t245 = 0x0;
                            if (0.0f > (u244 - u243)) {
                                t245 = 0xFFFFFFFF;
                            }
                            t247 = t245;
                        }
                        cpuAimPointSet(((t206 + 0x1) + 0x1), 0x2, ((float)(-t247) * 41.1500015f), (u242 * 118.849998f));
                        t252 = (((t206 + 0x1) + 0x1) + 0x1);
                    }
                    t262 = t252;
                }
                t374 = t262;
            } else {
                u270 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                t273 = 0x1;
                if (u270 > 0.0f) {
                } else {
                    t271 = 0x0;
                    if (0.0f > u270) {
                        t271 = 0xFFFFFFFF;
                    }
                    t273 = t271;
                }
                u275 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                t278 = 0x1;
                if ((-u275) > 0.0f) {
                } else {
                    t276 = 0x0;
                    if (0.0f > (-u275)) {
                        t276 = 0xFFFFFFFF;
                    }
                    t278 = t276;
                }
                if (t273 != t278) {
                    u280 = *(float *)((a4 + 0xB00));
                    u281 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u282 = *(float *)((a4 + 0xB9C));
                    t285 = 0x1;
                    if ((u282 - u281) > 0.0f) {
                    } else {
                        t283 = 0x0;
                        if (0.0f > (u282 - u281)) {
                            t283 = 0xFFFFFFFF;
                        }
                        t285 = t283;
                    }
                    cpuAimPointSet(t206, 0x2, ((float)t285 * 41.1500015f), (u280 * 118.849998f));
                    u288 = *(float *)((a4 + 0xB00));
                    u289 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u290 = *(float *)((a4 + 0xB9C));
                    t293 = 0x1;
                    if ((u290 - u289) > 0.0f) {
                    } else {
                        t291 = 0x0;
                        if (0.0f > (u290 - u289)) {
                            t291 = 0xFFFFFFFF;
                        }
                        t293 = t291;
                    }
                    cpuAimPointSet((t206 + 0x1), 0x2, ((float)t293 * 41.1500015f), (u288 * 118.849998f));
                    u296 = *(float *)((a4 + 0xB00));
                    u297 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u298 = *(float *)((a4 + 0xB9C));
                    t301 = 0x1;
                    if ((u298 - u297) > 0.0f) {
                    } else {
                        t299 = 0x0;
                        if (0.0f > (u298 - u297)) {
                            t299 = 0xFFFFFFFF;
                        }
                        t301 = t299;
                    }
                    cpuAimPointSet(((t206 + 0x1) + 0x1), 0x2, ((float)(-t301) * 41.1500015f), (u296 * 118.849998f));
                    t364 = (((t206 + 0x1) + 0x1) + 0x1);
                } else {
                    u304 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u305 = (-u304);
                    if (!(0.0f > u304)) {
                        u305 = u304;
                    }
                    t354 = t206;
                    if (52.2939987f > u305) {
                        u308 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
                        t311 = 0x1;
                        if (u308 > 0.0f) {
                        } else {
                            t309 = 0x0;
                            if (0.0f > u308) {
                                t309 = 0xFFFFFFFF;
                            }
                            t311 = t309;
                        }
                        u313 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                        t316 = 0x1;
                        if (u313 > 0.0f) {
                        } else {
                            t314 = 0x0;
                            if (0.0f > u313) {
                                t314 = 0xFFFFFFFF;
                            }
                            t316 = t314;
                        }
                        t344 = t206;
                        if (t311 == t316) {
                            u318 = *(float *)((a4 + 0xB00));
                            u319 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u320 = *(float *)((a4 + 0xB9C));
                            t323 = 0x1;
                            if ((u320 - u319) > 0.0f) {
                            } else {
                                t321 = 0x0;
                                if (0.0f > (u320 - u319)) {
                                    t321 = 0xFFFFFFFF;
                                }
                                t323 = t321;
                            }
                            cpuAimPointSet(t206, 0x2, ((float)t323 * 41.1500015f), (u318 * 118.849998f));
                            u326 = *(float *)((a4 + 0xB00));
                            u327 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u328 = *(float *)((a4 + 0xB9C));
                            t331 = 0x1;
                            if ((u328 - u327) > 0.0f) {
                            } else {
                                t329 = 0x0;
                                if (0.0f > (u328 - u327)) {
                                    t329 = 0xFFFFFFFF;
                                }
                                t331 = t329;
                            }
                            cpuAimPointSet((t206 + 0x1), 0x2, ((float)t331 * 41.1500015f), (u326 * 118.849998f));
                            u334 = *(float *)((a4 + 0xB00));
                            u335 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u336 = *(float *)((a4 + 0xB9C));
                            t339 = 0x1;
                            if ((u336 - u335) > 0.0f) {
                            } else {
                                t337 = 0x0;
                                if (0.0f > (u336 - u335)) {
                                    t337 = 0xFFFFFFFF;
                                }
                                t339 = t337;
                            }
                            cpuAimPointSet(((t206 + 0x1) + 0x1), 0x2, ((float)(-t339) * 41.1500015f), (u334 * 118.849998f));
                            t344 = (((t206 + 0x1) + 0x1) + 0x1);
                        }
                        t354 = t344;
                    }
                    t364 = t354;
                }
                t374 = t364;
            }
            t384 = t374;
        }
        t396 = t384;
    }
    t497 = t396;
    if (t396 != 0) {
    } else {
        t406 = *(int *)((a4 + 0xB5C));
        u409 = 1.0f;
        if (((*(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
            u409 = 0.5f;
        }
        t411 = *(short *)((((t406 * 0x160) + 0x8C2FC69C) + 0x118));
        t450 = t396;
        if (((0x100 & (*(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60)))) != 0) && ((t413 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t413 >= (int)0x9) && (t414 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t414 <= (int)0xC))) {
        } else {
            t416 = (int)((int)(nlRand()) % (int)0x64);
            t421 = t396;
            if (((float)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x1))) * ((u409 * ((float)t411 / 20.0f)))) > (float)t416) {
                t421 = (t396 + (ndbGetTargets(a4, t396, 0x4)));
            }
            t427 = (int)((int)(nlRand()) % (int)0x64);
            t432 = t421;
            if (((float)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x3))) * ((u409 * ((float)t411 / 20.0f)))) > (float)t427) {
                t432 = (t421 + (ndbGetTargets(a4, t421, 0x6)));
            }
            t438 = (int)((int)(nlRand()) % (int)0x64);
            t443 = t432;
            if (((float)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x5))) * ((u409 * ((float)t411 / 20.0f)))) > (float)t438) {
                t443 = (t432 + (ndbGetTargets(a4, t432, 0x8)));
            }
            t450 = t443;
        }
        t460 = (int)((int)(nlRand()) % (int)0x64);
        t464 = t450;
        if ((int)t460 < (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x0)))) {
            t464 = (t450 + (ndbGetTargets(a4, t450, 0x3)));
        }
        t469 = (int)((int)(nlRand()) % (int)0x64);
        t473 = t464;
        if ((int)t469 < (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x2)))) {
            t473 = (t464 + (ndbGetTargets(a4, t464, 0x5)));
        }
        t477 = (int)((int)(nlRand()) % (int)0x64);
        t481 = t473;
        if ((int)t477 < (int)(unsigned char)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C159FA4) + 0x4)))) {
            t481 = (t473 + (ndbGetTargets(a4, t473, 0x7)));
        }
        t484 = ndbGetTargets(a4, t481, 0x0);
        t492 = (t481 + t484);
        if ((t481 + t484) == 0) {
            t485 = ndbGetTargets(a4, (t481 + t484), 0x0);
            t488 = ((t481 + t484) + t485);
            if (((t481 + t484) + t485) == 0) {
                cpuAimPointSet(((t481 + t484) + t485), 0x1, 0.0f, 0.0f);
                t488 = (((t481 + t484) + t485) + 0x1);
            }
            t492 = t488;
        }
        t497 = t492;
    }
    return t497;
}
