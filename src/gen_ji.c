/* Straight-line functions with calls and guards (batch gen_ji): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lineJudgeWakeAll(void);
int motionBackup(int);
float motionGetFrame(int);
int motionIsEnd(int);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int nlAddVector(int, int);
float nlLength(int, int);
float nlRandom(void);
int nlScaleVector(int, int, float);
int lineJudgeUpdate(int a4);

int lineJudgeUpdate(int a4)
{
    int stk[28];
    int t6;
    int t10;
    int t12;
    int t15;
    int t16;
    int t22;
    float u24;
    int t32;
    float u34;
    int t49;
    int t51;
    int t52;
    int t60;
    int t70;
    float t74;
    float t78;
    int t90;
    int t140;
    int t141;
    int t152;
    int t153;
    int t163;
    int t164;
    int t174;
    int t175;
    int t191;
    int t198;
    int t218;
    int t361;
    int t352;
    int t343;
    int t226;
    float u228;
    float u229;
    float u230;
    float u232;
    float u231;
    int t335;
    int t327;
    int t249;
    int t247;
    int t260;
    int t261;
    int t256;
    int t258;
    int t319;
    int t311;
    float t269;
    int t306;
    float u270;
    float u273;
    float u289;
    int t1;
    int t79;
    int t282;
    int t283;
    int t298;
    int t299;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;
    int R1044;
    int R1048;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);
    R1048 = *(int *)((int)stk + 48);

    R1012 = a4;
    if (((int)(*(int *)0x8C287B2C) > 0) && (t1 = *(int *)0x8C287B3C, (t1 & 4) == 0)) {
        lineJudgeWakeAll();
    }
    R1028 = 0x8C124E20;
    R1040 = 0x8C124E1C;
    R1044 = 0x8C124E28;
    R1036 = 0x8C124E38;
    R1032 = 0x8C124E18;
    R1024 = 0x8C124E34;
    R1048 = 0x8C124E24;
    R1020 = 0x8C124E30;
    R1016 = 0x8C124E2C;
    t6 = 0x0;
    for (;;) {
        R1008 = ((t6 * 0x654) + 0x8C37F77C);
        motionBackup((((t6 * 0x654) + 0x8C37F77C) + 0x4));
        *(unsigned int *)(((R1008) + 0x5B4)) = 0x1;
        t10 = *(int *)((0x5BC + (R1008)));
        if (t10 != 0) {
            if (t10 != 1) {
                if (t10 != 2) {
                    if (t10 == 3) {
                        R1008 = ((t6 * 0x654) + 0x8C37F77C);
                        *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B4)) = 0x0;
                        t12 = motionIsEnd(((R1008) + 0x4));
                        if (t12 == 0) {
                        } else {
                            if ((t6 != 1) && (t6 != 4)) {
                                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 3) {
                                    t15 = *(int *)0x8C2873D4;
                                    t16 = *(int *)(((R1032) + 0x0));
                                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t16, 0x0, t15, 0.0f);
                                    motionSetFrame(((R1008) + 0x4), 120.0f);
                                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x1;
                                    *(unsigned int *)(((R1008) + 0x5C0)) = 0x0;
                                } else {
                                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                    *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x5;
                                    t22 = R1008;
                                    R1004 = (0x5C4 + t22);
                                    u24 = 3.0f;
                                    u24 = u24 + 5.0f * (nlRandom());
                                    *(unsigned int *)(((0x5C4 + t22) + 0x0)) = (int)u24;
                                    *(unsigned int *)(((R1008) + 0x5C0)) = 0x0;
                                }
                            } else {
                                R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x5;
                                t32 = R1008;
                                R1004 = (0x5C4 + t32);
                                u34 = 3.0f;
                                u34 = u34 + 5.0f * (nlRandom());
                                *(unsigned int *)(((0x5C4 + t32) + 0x0)) = (int)u34;
                                *(unsigned int *)(((R1008) + 0x5C0)) = 0x0;
                            }
                        }
                    } else {
                        if (t10 == 4) {
                            R1008 = ((t6 * 0x654) + 0x8C37F77C);
                            *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B4)) = 0x0;
                            t49 = motionIsEnd(((R1008) + 0x4));
                            if (t49 == 0) {
                            } else {
                                t51 = *(int *)0x8C2873D4;
                                t52 = *(int *)(((R1024) + 0x0));
                                R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t52, 0x0, t51, 0.0f);
                                *(unsigned int *)(((R1008) + 0x5BC)) = 0x1;
                                *(unsigned int *)(((R1008) + 0x5C0)) = 0x0;
                            }
                        } else {
                            if (t10 == 5) {
                                t60 = *(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4));
                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4)) = (t60 - 1);
                                if ((t60 - 1) == 0) {
                                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), (*(int *)(((R1048) + 0x0))), 0x0, (*(int *)0x8C2873D4), 1.0f);
                                }
                                t70 = motionIsEnd((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                if (t70 != 0) {
                                    motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                }
                            } else {
                                if (t10 == 6) {
                                    t74 = motionGetFrame((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                    if (t74 == 40.0f) {
                                        R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                        motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                        t78 = nlLength(((R1012) + 0xC), ((R1008) + 0x5A4));
                                        if (!(t78 > 20.0f) && (t79 = *(int *)0x8C287B2C, (int)t79 <= 0)) {
                                        } else {
                                            R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                            *(unsigned int *)(((0x5BC + ((t6 * 0x654) + 0x8C37F77C)) + 0x0)) = 0x7;
                                            motionSetSpeed(((R1008) + 0x4), 1.0f);
                                        }
                                    }
                                } else {
                                    if (t10 == 7) {
                                        t90 = motionIsEnd((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                        if (t90 != 0) {
                                            if ((t6 != 1) && (t6 != 4)) {
                                                R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                                motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                                *(unsigned int *)(((R1008) + 0x5BC)) = 0x1;
                                            } else {
                                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x5;
                                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4)) = 0x2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 1) {
                    t140 = *(int *)0x8C2873D4;
                    t141 = *(int *)(((R1028) + 0x0));
                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t141, 0x0, t140, 1.0f);
                    *(unsigned int *)(((R1008) + 0x5C0)) = 0x0;
                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 2) {
                    t152 = *(int *)0x8C2873D4;
                    t153 = *(int *)(((R1040) + 0x0));
                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t153, 0x0, t152, 1.0f);
                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 3) {
                    t163 = *(int *)0x8C2873D4;
                    t164 = *(int *)(((R1044) + 0x0));
                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t164, 0x0, t163, 1.0f);
                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) != 11) {
                } else {
                    t174 = *(int *)0x8C2873D4;
                    t175 = *(int *)(((R1036) + 0x0));
                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t175, 0x0, t174, 1.0f);
                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x4;
                }
            }
        } else {
            if ((*(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5CC))) == 0) {
                t191 = *(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4));
                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4)) = (t191 - 1);
                if ((t191 - 1) == 0) {
                    motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 1.0f);
                }
                t198 = motionIsEnd((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                if (t198 == 0) {
                } else {
                    R1008 = ((t6 * 0x654) + 0x8C37F77C);
                    motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                    *(unsigned int *)(((R1008) + 0x5BC)) = 0x1;
                }
            } else {
                R1008 = ((t6 * 0x654) + 0x8C37F77C);
                motionSetFrame((((t6 * 0x654) + 0x8C37F77C) + 0x4), 95.0f);
                motionSetSpeed(((R1008) + 0x4), 0.0f);
            }
        }
        R1008 = ((t6 * 0x654) + 0x8C37F77C);
        t218 = *(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC));
        t361 = t218;
        if (t218 == 6) {
        } else {
            t352 = 0x5CC;
            if ((*(int *)(((R1008) + 0x5CC))) != 0) {
            } else {
                t343 = 0x5CC;
                if ((int)(*(int *)0x8C287B2C) >= 0) {
                } else {
                    t226 = R1012;
                    u228 = *(float *)(((0x14 + t226) + 0x0));
                    u229 = *(float *)((0x5AC + (R1008)));
                    u230 = *(float *)((t226 + 0x3C));
                    u232 = ((u229 - u228) / u230);
                    if (0.0f > ((u229 - u228) / u230)) {
                        u231 = ((u229 - u228) / u230);
                        u231 = -u231;
                        u232 = u231;
                    }
                    nlScaleVector((((int)stk + 8) + 0x2C), ((R1012) + 0x34), u232);
                    nlAddVector((((int)stk + 8) + 0x2C), ((R1012) + 0xC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t6 << 1) + t6) << 2) + 0x8C38B790)) = *(struct mv3 *)((((int)stk + 8) + 0x2C)); }
                    t335 = 0x30;
                    if (!((*(float *)(((int)stk + 56))) > 8.0f)) {
                    } else {
                        t327 = 0x2C;
                        if (!(((*(float *)(((R1008) + 0x5A4))) + 3.0f) > (*(float *)(((int)stk + 52))))) {
                        } else {
                            t249 = 0x1;
                            if ((*(float *)(((int)stk + 60))) > 0.0f) {
                            } else {
                                t247 = 0x0;
                                if (0.0f > (*(float *)(((int)stk + 60)))) {
                                    t247 = 0xFFFFFFFF;
                                }
                                t249 = t247;
                            }
                            t260 = 0x3C;
                            t261 = 0x1;
                            if ((*(float *)(((R1012) + 0x3C))) > 0.0f) {
                            } else {
                                t256 = R1012;
                                t258 = 0x0;
                                if (0.0f > (*(float *)((0x3C + t256)))) {
                                    t258 = 0xFFFFFFFF;
                                }
                                t260 = t256;
                                t261 = t258;
                            }
                            t319 = t260;
                            if (t249 == t261) {
                                t311 = 0x2C;
                                if ((*(float *)(((int)stk + 52))) > ((*(float *)(((R1008) + 0x5A4))) + -3.0f)) {
                                    t269 = nlLength(((R1012) + 0xC), ((R1008) + 0x5A4));
                                    t306 = 0x8C0C9D20;
                                    if (50.0f > t269) {
                                        R1008 = ((t6 * 0x654) + 0x8C37F77C);
                                        u270 = *(float *)(((int)stk + 52));
                                        if ((*(short *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B0))) == 0) {
                                            u273 = *(float *)(((R1008) + 0x5A4));
                                            if ((int)(((u270 - u273) > 0.0f) - (0.0f > (u270 - u273))) >= 0) {
                                                t282 = (R1020);
                                                t283 = (*(int *)0x8C2873D4);
                                            } else {
                                                t282 = (R1016);
                                                t283 = (*(int *)0x8C2873D4);
                                            }
                                            motionSwitch(((R1008) + 0x4), (*(int *)((t282 + 0x0))), 0x0, t283, 1.0f);
                                        } else {
                                            u289 = *(float *)(((R1008) + 0x5A4));
                                            if ((int)(((u270 - u289) > 0.0f) - (0.0f > (u270 - u289))) >= 0) {
                                                t298 = (R1016);
                                                t299 = (*(int *)0x8C2873D4);
                                            } else {
                                                t298 = (R1020);
                                                t299 = (*(int *)0x8C2873D4);
                                            }
                                            motionSwitch(((R1008) + 0x4), (*(int *)((t298 + 0x0))), 0x0, t299, 1.0f);
                                        }
                                        *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x6;
                                        t306 = 0x5BC;
                                    }
                                    t311 = t306;
                                }
                                t319 = t311;
                            }
                            t327 = t319;
                        }
                        t335 = t327;
                    }
                    t343 = t335;
                }
                t352 = t343;
            }
            t361 = t352;
        }
        t6 = (t6 + 0x1);
        if ((int)t6 < (int)0x9) continue;
        break;
    }
    return t361;
}
