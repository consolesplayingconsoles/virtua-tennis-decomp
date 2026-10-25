/* Straight-line functions with calls and guards (batch gen_ct): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camInit(void);
int fadeScreenStart(int, int, int, int, int, int);
int lightOverrideAmbient(int, int);
int lightSet(int, int, int, int);
int lineJudgeWakeAll(void);
int matchSetupPlayers(void);
int motionBackup(int);
float motionGetFrame(int);
int motionIsEnd(int);
int motionSet(int, int, int, int, int, int, float);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int nlAddVector(int, int);
int nlInitEvent(void);
float nlLength(int, int);
float nlRandom(void);
int nlScaleVector(int, int, float);
int playerInit(int, int);
int selCellSetChosen(int);
int selCursorPlace(int);
int selCursorReset(int, int);
int selModelSpawn(int, int);
int sprStartFree(void);
int stageLoadSelectSprites(void);
int vecMake(int, int, int, int, int, float, float, float);
int lineJudgeUpdate(int a4);
int selInit(int a4, int a5);

int lineJudgeUpdate(int a4)
{
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
    int t360;
    int t351;
    int t342;
    int t226;
    float u228;
    float u229;
    float u230;
    float u231;
    int t334;
    int t326;
    int t248;
    int t246;
    int t259;
    int t260;
    int t255;
    int t257;
    int t318;
    int t310;
    float t268;
    int t305;
    float u269;
    float u272;
    int t275;
    int t273;
    float u288;
    int t291;
    int t289;
    int t1;
    int t79;
    int t281;
    int t282;
    int t297;
    int t298;
    int stk[28];

    *(unsigned int *)(((int)stk + 12)) = a4;
    if (((int)(*(int *)0x8C287B2C) > 0) && (t1 = *(int *)0x8C287B3C, (t1 & 4) == 0)) {
        lineJudgeWakeAll();
    }
    *(unsigned int *)(((int)stk + 28)) = 0x8C124E20;
    *(unsigned int *)(((int)stk + 40)) = 0x8C124E1C;
    *(unsigned int *)(((int)stk + 44)) = 0x8C124E28;
    *(unsigned int *)(((int)stk + 36)) = 0x8C124E38;
    *(unsigned int *)(((int)stk + 32)) = 0x8C124E18;
    *(unsigned int *)(((int)stk + 24)) = 0x8C124E34;
    *(unsigned int *)(((int)stk + 48)) = 0x8C124E24;
    *(unsigned int *)(((int)stk + 20)) = 0x8C124E30;
    *(unsigned int *)(((int)stk + 16)) = 0x8C124E2C;
    t6 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
        motionBackup((((t6 * 0x654) + 0x8C37F77C) + 0x4));
        *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5B4)) = 0x1;
        t10 = *(int *)((0x5BC + (*(int *)(((int)stk + 8)))));
        if (t10 != 0) {
            if (t10 != 1) {
                if (t10 != 2) {
                    if (t10 == 3) {
                        *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                        *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B4)) = 0x0;
                        t12 = motionIsEnd(((*(int *)(((int)stk + 8))) + 0x4));
                        if (t12 == 0) {
                        } else {
                            if ((t6 != 1) && (t6 != 4)) {
                                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 3) {
                                    t15 = *(int *)0x8C2873D4;
                                    t16 = *(int *)(((*(int *)(((int)stk + 32))) + 0x0));
                                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t16, 0x0, t15, 0.0f);
                                    motionSetFrame(((*(int *)(((int)stk + 8))) + 0x4), 120.0f);
                                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x1;
                                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5C0)) = 0x0;
                                } else {
                                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                    *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x5;
                                    t22 = *(int *)(((int)stk + 8));
                                    u24 = 3.0f;
                                    u24 = u24 + 5.0f * (nlRandom());
                                    *(unsigned int *)(((0x5C4 + t22) + 0x0)) = (int)u24;
                                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5C0)) = 0x0;
                                }
                            } else {
                                *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x5;
                                t32 = *(int *)(((int)stk + 8));
                                u34 = 3.0f;
                                u34 = u34 + 5.0f * (nlRandom());
                                *(unsigned int *)(((0x5C4 + t32) + 0x0)) = (int)u34;
                                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5C0)) = 0x0;
                            }
                        }
                    } else {
                        if (t10 == 4) {
                            *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                            *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B4)) = 0x0;
                            t49 = motionIsEnd(((*(int *)(((int)stk + 8))) + 0x4));
                            if (t49 == 0) {
                            } else {
                                t51 = *(int *)0x8C2873D4;
                                t52 = *(int *)(((*(int *)(((int)stk + 24))) + 0x0));
                                *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t52, 0x0, t51, 0.0f);
                                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x1;
                                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5C0)) = 0x0;
                            }
                        } else {
                            if (t10 == 5) {
                                t60 = *(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4));
                                *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5C4)) = (t60 - 1);
                                if ((t60 - 1) == 0) {
                                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), (*(int *)(((*(int *)(((int)stk + 48))) + 0x0))), 0x0, (*(int *)0x8C2873D4), 1.0f);
                                }
                                t70 = motionIsEnd((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                if (t70 != 0) {
                                    motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                }
                            } else {
                                if (t10 == 6) {
                                    t74 = motionGetFrame((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                    if (t74 == 40.0f) {
                                        *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                        motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                        t78 = nlLength(((*(int *)(((int)stk + 12))) + 0xC), ((*(int *)(((int)stk + 8))) + 0x5A4));
                                        if (!(t78 > 20.0f) && (t79 = *(int *)0x8C287B2C, (int)t79 <= 0)) {
                                        } else {
                                            *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                            *(unsigned int *)(((0x5BC + ((t6 * 0x654) + 0x8C37F77C)) + 0x0)) = 0x7;
                                            motionSetSpeed(((*(int *)(((int)stk + 8))) + 0x4), 1.0f);
                                        }
                                    }
                                } else {
                                    if (t10 == 7) {
                                        t90 = motionIsEnd((((t6 * 0x654) + 0x8C37F77C) + 0x4));
                                        if (t90 != 0) {
                                            if ((t6 != 1) && (t6 != 4)) {
                                                *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                                motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                                                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x1;
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
                    t141 = *(int *)(((*(int *)(((int)stk + 28))) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t141, 0x0, t140, 1.0f);
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5C0)) = 0x0;
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 2) {
                    t152 = *(int *)0x8C2873D4;
                    t153 = *(int *)(((*(int *)(((int)stk + 40))) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t153, 0x0, t152, 1.0f);
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) == 3) {
                    t163 = *(int *)0x8C2873D4;
                    t164 = *(int *)(((*(int *)(((int)stk + 44))) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t164, 0x0, t163, 1.0f);
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x3;
                }
                if ((*(int *)((0x5C0 + ((t6 * 0x654) + 0x8C37F77C)))) != 11) {
                } else {
                    t174 = *(int *)0x8C2873D4;
                    t175 = *(int *)(((*(int *)(((int)stk + 36))) + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                    motionSwitch((((t6 * 0x654) + 0x8C37F77C) + 0x4), t175, 0x0, t174, 1.0f);
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x4;
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
                    *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                    motionSetSpeed((((t6 * 0x654) + 0x8C37F77C) + 0x4), 0.0f);
                    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x5BC)) = 0x1;
                }
            } else {
                *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                motionSetFrame((((t6 * 0x654) + 0x8C37F77C) + 0x4), 95.0f);
                motionSetSpeed(((*(int *)(((int)stk + 8))) + 0x4), 0.0f);
            }
        }
        *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
        t218 = *(int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC));
        t360 = t218;
        if (t218 == 6) {
        } else {
            t351 = 0x5CC;
            if ((*(int *)(((*(int *)(((int)stk + 8))) + 0x5CC))) != 0) {
            } else {
                t342 = 0x5CC;
                if ((int)(*(int *)0x8C287B2C) >= 0) {
                } else {
                    t226 = *(int *)(((int)stk + 12));
                    u228 = *(float *)(((0x14 + t226) + 0x0));
                    u229 = *(float *)((0x5AC + (*(int *)(((int)stk + 8)))));
                    u230 = *(float *)((t226 + 0x3C));
                    u231 = ((u229 - u228) / u230);
                    if (0.0f > ((u229 - u228) / u230)) {
                        u231 = (-((u229 - u228) / u230));
                    }
                    nlScaleVector((((int)stk + 8) + 0x2C), ((*(int *)(((int)stk + 12))) + 0x34), u231);
                    nlAddVector((((int)stk + 8) + 0x2C), ((*(int *)(((int)stk + 12))) + 0xC));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t6 << 1) + t6) << 2) + 0x8C38B790)) = *(struct mv3 *)((((int)stk + 8) + 0x2C)); }
                    t334 = 0x30;
                    if (!((*(float *)(((int)stk + 56))) > 8.0f)) {
                    } else {
                        t326 = 0x2C;
                        if (!(((*(float *)(((*(int *)(((int)stk + 8))) + 0x5A4))) + 3.0f) > (*(float *)(((int)stk + 52))))) {
                        } else {
                            t248 = 0x1;
                            if ((*(float *)(((int)stk + 60))) > 0.0f) {
                            } else {
                                t246 = 0x0;
                                if (0.0f > (*(float *)(((int)stk + 60)))) {
                                    t246 = 0xFFFFFFFF;
                                }
                                t248 = t246;
                            }
                            t259 = 0x3C;
                            t260 = 0x1;
                            if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x3C))) > 0.0f) {
                            } else {
                                t255 = *(int *)(((int)stk + 12));
                                t257 = 0x0;
                                if (0.0f > (*(float *)((0x3C + t255)))) {
                                    t257 = 0xFFFFFFFF;
                                }
                                t259 = t255;
                                t260 = t257;
                            }
                            t318 = t259;
                            if (t248 == t260) {
                                t310 = 0x2C;
                                if ((*(float *)(((int)stk + 52))) > ((*(float *)(((*(int *)(((int)stk + 8))) + 0x5A4))) + -3.0f)) {
                                    t268 = nlLength(((*(int *)(((int)stk + 12))) + 0xC), ((*(int *)(((int)stk + 8))) + 0x5A4));
                                    t305 = 0x8C0C9D20;
                                    if (50.0f > t268) {
                                        *(unsigned int *)(((int)stk + 8)) = ((t6 * 0x654) + 0x8C37F77C);
                                        u269 = *(float *)(((int)stk + 52));
                                        if ((*(short *)((((t6 * 0x654) + 0x8C37F77C) + 0x5B0))) == 0) {
                                            u272 = *(float *)(((*(int *)(((int)stk + 8))) + 0x5A4));
                                            t275 = 0x1;
                                            if ((u269 - u272) > 0.0f) {
                                            } else {
                                                t273 = 0x0;
                                                if (0.0f > (u269 - u272)) {
                                                    t273 = 0xFFFFFFFF;
                                                }
                                                t275 = t273;
                                            }
                                            if ((int)t275 >= 0) {
                                                t281 = (*(int *)(((int)stk + 20)));
                                                t282 = (*(int *)0x8C2873D4);
                                            } else {
                                                t281 = (*(int *)(((int)stk + 16)));
                                                t282 = (*(int *)0x8C2873D4);
                                            }
                                            motionSwitch(((*(int *)(((int)stk + 8))) + 0x4), (*(int *)((t281 + 0x0))), 0x0, t282, 1.0f);
                                        } else {
                                            u288 = *(float *)(((*(int *)(((int)stk + 8))) + 0x5A4));
                                            t291 = 0x1;
                                            if ((u269 - u288) > 0.0f) {
                                            } else {
                                                t289 = 0x0;
                                                if (0.0f > (u269 - u288)) {
                                                    t289 = 0xFFFFFFFF;
                                                }
                                                t291 = t289;
                                            }
                                            if ((int)t291 >= 0) {
                                                t297 = (*(int *)(((int)stk + 16)));
                                                t298 = (*(int *)0x8C2873D4);
                                            } else {
                                                t297 = (*(int *)(((int)stk + 20)));
                                                t298 = (*(int *)0x8C2873D4);
                                            }
                                            motionSwitch(((*(int *)(((int)stk + 8))) + 0x4), (*(int *)((t297 + 0x0))), 0x0, t298, 1.0f);
                                        }
                                        *(unsigned int *)((((t6 * 0x654) + 0x8C37F77C) + 0x5BC)) = 0x6;
                                        t305 = 0x5BC;
                                    }
                                    t310 = t305;
                                }
                                t318 = t310;
                            }
                            t326 = t318;
                        }
                        t334 = t326;
                    }
                    t342 = t334;
                }
                t351 = t342;
            }
            t360 = t351;
        }
        t6 = (t6 + 0x1);
        if ((int)t6 < (int)0x9) continue;
        break;
    }
    return t360;
}

int selInit(int a4, int a5)
{
    int t3;
    int t5;
    int t6;
    int t7;
    int t11;
    int t24;
    int t26;
    int t27;
    int t28;
    int t38;
    int t46;
    int t53;
    int t54;
    int t56;
    int t118;
    int t121;
    int t122;
    int t123;
    int t124;
    int t127;
    int t237;
    int t238;
    int t240;
    int t130;
    int t134;
    int t135;
    int t138;
    int t145;
    int t154;
    int t155;
    int t157;
    int t158;
    int t161;
    int t168;
    int t178;
    int t226;
    int t180;
    int t220;
    int t221;
    int t184;
    int t185;
    int t193;
    int t196;
    int t213;
    int t243;
    int t45;
    int t113;
    int t107;
    int t58;
    int t59;
    int t66;
    int t101;
    int t95;
    int t89;
    int t232;
    int t233;
    int t235;
    int t140;
    int t147;
    int t163;
    int t170;
    int t227;
    int t229;
    int t223;
    int t215;
    int t216;
    int stk[24];

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x1C)) = *(struct mv4 *)(0x8C110AA4); }
    if ((*(int *)0x8C287ADC) == 4) {
        *(unsigned int *)0x8C185408 = 0x1;
    }
    t3 = 0x8C3438D8;
    for (;;) {
        *(unsigned int *)((t3 + 0x0)) = 0x0;
        t3 = (t3 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0x8C3438E8) {
            break;
        }
    }
    nlInitEvent();
    t5 = 0x0;
    for (;;) {
        *(unsigned int *)((0x8C343898 + t5)) = 0x0;
        *(unsigned int *)((t5 + 0x8C3438E8)) = 0x0;
        t6 = t5;
        t5 = (t5 + 0x4);
        *(unsigned int *)((0x8C343878 + t6)) = 0x0;
        *(float *)((0x8C3438C8 + t6)) = 0.0f;
        if ((unsigned int)t5 >= (unsigned int)0x10) {
            break;
        }
    }
    *(unsigned int *)0x8C343BDC = 0x0;
    *(unsigned int *)0x8C343874 = 0x0;
    *(unsigned int *)0x8C343AC8 = 0x0;
    *(unsigned int *)0x8C343AB0 = 0x0;
    *(unsigned int *)0x8C343AB4 = 0x0;
    *(unsigned int *)0x8C343A54 = 0x0;
    *(unsigned int *)0x8C185488 = 0x0;
    *(unsigned int *)0x8C343908 = 0x0;
    t7 = 0x8C343BE0;
    for (;;) {
        *(unsigned int *)((t7 + 0x0)) = 0x0;
        t7 = (t7 + 0x4);
        if ((unsigned int)t7 >= (unsigned int)0x8C343BF0) {
            break;
        }
    }
    sprStartFree();
    stageLoadSelectSprites();
    matchSetupPlayers();
    *(unsigned int *)(((int)stk + 16)) = 0x8C2873D0;
    t11 = 0x0;
    for (;;) {
        playerInit(((t11 * 0xD78) + 0x8C287D84), t11);
        *(unsigned int *)0x8C29466C = 0x0;
        *(unsigned int *)0x8C294668 = 0x0;
        *(unsigned int *)((((t11 * 0xD78) + 0x8C287D84) + 0xC58)) = 0x0;
        motionSet(((t11 * 0xD78) + 0x8C287D84), 0x29DE0, 0x1, 0x12755C, ((*(int *)((0x8C102424 + ((*(int *)((((t11 * 0xD78) + 0x8C287D84) + 0xC58))) * 0x6C))))), ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))), (*(float *)0x8C23D204));
        vecMake(0x0, 0x0, 0x0, 0x0, (0xAF4 + ((t11 * 0xD78) + 0x8C287D84)), 0.0f, 0.0f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + ((t11 * 0xD78) + 0x8C287D84))) = *(struct mv3 *)((0xAF4 + ((t11 * 0xD78) + 0x8C287D84))); }
        *(float *)((((t11 * 0xD78) + 0x8C287D84) + 0xC90)) = 0.0f;
        *(float *)((((t11 * 0xD78) + 0x8C287D84) + 0xB18)) = 0.0f;
        lightOverrideAmbient(t11, 0x64);
        t11 = (t11 + 0x1);
        if ((int)t11 < (int)0x4) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x8C1852A0;
    t24 = 0x0;
    for (;;) {
        t26 = (*(int *)(((int)stk + 16)));
        t27 = 0x8C1853C0;
        t28 = 0x8C1853C0;
        for (;;) {
            if ((*(int *)((t26 + (t24 << 2)))) == 0) {
                *(unsigned int *)((t28 + (t24 << 2))) = 0x1;
            } else {
                *(unsigned int *)((t27 + (t24 << 2))) = 0x0;
            }
            t26 = (t26 + 0x24);
            t27 = (t27 + 0x24);
            t28 = (t28 + 0x24);
            if ((unsigned int)t26 >= (unsigned int)0x8C1852E8) {
                break;
            }
        }
        t24 = (t24 + 0x1);
        if ((int)t24 >= (int)0x9) {
            break;
        }
    }
    if ((*(int *)0x8C287D5C) == 2) {
        t38 = 0x8C1853E4;
        for (;;) {
            *(unsigned int *)((t38 + 0x0)) = 0x1;
            t38 = (t38 + 0x4);
            if ((unsigned int)t38 >= (unsigned int)0x8C185408) {
                break;
            }
        }
        *(unsigned int *)0x8C1853E0 = 0x1;
    }
    fadeScreenStart(0x2, 0x1, 0xA, t24, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
    camInit();
    lightSet(0x8500, 0x9200, 0x64, 0x45);
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t46 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)(((t46 << 1) + 0x8C185298)))) == 0) {
            t113 = t45;
        } else {
            t45 = (*(int *)((((t46 << 2) + 0x8C3437C4) + 0x0)));
            t45 = (t45 * 0x38);
            t45 = (t45 + 0x8C343264);
            if ((*(short *)((t45 + 0x14))) == 0) {
                t107 = t45;
            } else {
                t45 = (*(int *)((((t46 << 2) + 0x8C3437C4) + 0x0)));
                t45 = (t45 << 2);
                t45 = (t45 + (((int)stk + 16) + 0x1C));
                t53 = *(int *)((t45 + 0x0));
                t45 = t46;
                t45 = (t45 << 2);
                *(unsigned int *)(((int)stk + 28)) = t53;
                t45 = (t45 + 0x8C3437C4);
                t54 = *(int *)((t45 + 0x0));
                t45 = (*(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x0)));
                t56 = *(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x4));
                *(unsigned int *)((((t54 * 0x38) + 0x8C343264) + 0x0)) = (((t56 << 2) << 1) + t45);
                if (((*(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x0))) == 8) && (t58 = *(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x4)), t59 = (((t56 << 2) << 1) + t45), t45 = t58, t45 == 0)) {
                    t45 = (*(int *)((((t46 << 2) + 0x8C3437C4) + 0x0)));
                    t45 = (t45 * 0x38);
                    t45 = (t45 + 0x8C343264);
                    *(unsigned int *)((t45 + 0x0)) = 0x10;
                }
                if (((*(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x0))) == 8) && (t66 = *(int *)(((((t46 << 2) << 1) + 0x8C343B4C) + 0x4)), t66 == 1)) {
                    t45 = (*(int *)(((0x8C3437C4 + (*(int *)(((int)stk + 24)))) + 0x0)));
                    t45 = (t45 * 0x38);
                    t45 = (t45 + 0x8C343264);
                    *(unsigned int *)((t45 + 0x0)) = 0x11;
                }
                selCellSetChosen((*(int *)(((((*(int *)(((0x8C3437C4 + (*(int *)(((int)stk + 16)))) + 0x0))) * 0x38) + 0x8C343264) + 0x0))));
                if ((int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x8C343B0C))) >= 0) {
                    t45 = (*(int *)((((*(int *)(((int)stk + 28))) * 0x38) + 0x8C34326C)));
                    if (t45 != 0) {
                        if ((*(short *)(((((*(int *)(((int)stk + 28))) * 0x38) + 0x8C343264) + 0x14))) != 0) {
                            selCellSetChosen((*(int *)(((((*(int *)(((0x8C3437C4 + (*(int *)(((int)stk + 20)))) + 0x0))) * 0x38) + 0x8C343264) + 0x24))));
                        } else {
                            t89 = t45;
                        }
                        t95 = t89;
                    } else {
                        t95 = t45;
                    }
                    t101 = t95;
                }
                t107 = t101;
            }
            t113 = t107;
        }
        t118 = *(int *)(((int)stk + 20));
        t45 = t113;
        t46 = (t46 + 0x1);
        *(unsigned int *)(((int)stk + 20)) = (t118 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x4);
        t45 = (*(int *)(((int)stk + 24)));
        t45 = (t45 + 0x4);
        *(unsigned int *)(((int)stk + 24)) = t45;
        if ((int)t46 < (int)0x4) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t121 = t45;
    t122 = (t118 + 0x4);
    t123 = a5;
    t124 = t46;
    for (;;) {
        t127 = *(short *)0x8C343262;
        t237 = (unsigned short)t127;
        t238 = t121;
        t240 = t123;
        if (((unsigned short)t127 & (unsigned short)(*(short *)((((*(int *)(((int)stk + 16))) << 1) + 0x8C185298)))) == 0) {
        } else {
            t122 = 0x56C;
            t124 = (*(int *)(((int)stk + 16)));
            t122 = (t122 + 0x8C343258);
            t124 = (t124 << 2);
            t122 = (t122 + t124);
            *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((int)stk + 16))) << 2) << 1);
            t130 = *(int *)((t122 + 0x0));
            t122 = 0x8C343258;
            t122 = (t122 + 0xC);
            if ((*(short *)((((t130 * 0x38) + t122) + 0x14))) == 0) {
                selCursorReset((*(int *)(((int)stk + 16))), t123);
                t122 = 0x56C;
                t134 = *(int *)(((int)stk + 20));
                t122 = (t122 + 0x8C343258);
                t122 = (t122 + t124);
                t135 = *(int *)((t122 + 0x0));
                t122 = 0x8C343258;
                t122 = (t122 + 0xC);
                t121 = (*(int *)(((t134 + 0x8C343B4C) + 0x0)));
                t138 = ((t135 * 0x38) + t122);
                t122 = (*(int *)(((t134 + 0x8C343B4C) + 0x4)));
                t122 = (t122 << 2);
                t122 = (t122 << 1);
                t122 = (t122 + t121);
                *(unsigned int *)((t138 + 0x0)) = t122;
                if (((*(int *)(((t134 + 0x8C343B4C) + 0x0))) == 8) && (t140 = *(int *)(((t134 + 0x8C343B4C) + 0x4)), t122 = t140, t122 == 0)) {
                    t122 = (*(int *)(((0x8C3437C4 + t124) + 0x0)));
                    t122 = (t122 * 0x38);
                    t122 = (t122 + 0x8C343264);
                    *(unsigned int *)((t122 + 0x0)) = 0x10;
                }
                t145 = *(int *)(((int)stk + 20));
                if (((*(int *)(((t145 + 0x8C343B4C) + 0x0))) == 8) && (t147 = *(int *)(((t145 + 0x8C343B4C) + 0x4)), t147 == 1)) {
                    t121 = 0x11;
                    t122 = (*(int *)(((0x8C3437C4 + t124) + 0x0)));
                    t122 = (t122 * 0x38);
                    t122 = (t122 + 0x8C343264);
                    *(unsigned int *)((t122 + 0x0)) = t121;
                }
                t123 = 0x0;
                t154 = selModelSpawn((*(int *)(((0x8C3437C4 + t124) + 0x0))), t123);
                t122 = 0x56C;
                t121 = 0x0;
                t122 = (t122 + 0x8C343258);
                t122 = (t122 + t124);
                t155 = *(int *)((t122 + 0x0));
                t122 = 0x8C343258;
                t122 = (t122 + 0xC);
                *(unsigned int *)((((t155 * 0x38) + t122) + 0x18)) = t121;
                t232 = t154;
                t233 = t121;
            } else {
                t121 = 0x56C;
                t122 = 0x8C343258;
                t157 = *(int *)(((int)stk + 20));
                t122 = (t122 + 0xC);
                t121 = (t121 + 0x8C343258);
                t121 = (t121 + t124);
                t158 = *(int *)((t121 + 0x0));
                t121 = (*(int *)(((t157 + 0x8C343B4C) + 0x0)));
                t161 = ((t158 * 0x38) + t122);
                t122 = (*(int *)(((t157 + 0x8C343B4C) + 0x4)));
                t122 = (t122 << 2);
                t122 = (t122 << 1);
                t122 = (t122 + t121);
                *(unsigned int *)((t161 + 0x0)) = t122;
                if (((*(int *)(((t157 + 0x8C343B4C) + 0x0))) == 8) && (t163 = *(int *)(((t157 + 0x8C343B4C) + 0x4)), t122 = t163, t122 == 0)) {
                    t122 = (*(int *)(((0x8C3437C4 + t124) + 0x0)));
                    t122 = (t122 * 0x38);
                    t122 = (t122 + 0x8C343264);
                    *(unsigned int *)((t122 + 0x0)) = 0x10;
                }
                t168 = *(int *)(((int)stk + 20));
                if (((*(int *)(((t168 + 0x8C343B4C) + 0x0))) == 8) && (t170 = *(int *)(((t168 + 0x8C343B4C) + 0x4)), t170 == 1)) {
                    t121 = 0x11;
                    t122 = (*(int *)(((0x8C3437C4 + t124) + 0x0)));
                    t122 = (t122 * 0x38);
                    t122 = (t122 + 0x8C343264);
                    *(unsigned int *)((t122 + 0x0)) = t121;
                }
                t123 = 0x1;
                selModelSpawn((*(int *)(((0x8C3437C4 + t124) + 0x0))), t123);
                t122 = 0x56C;
                t122 = (t122 + 0x8C343258);
                t122 = (t122 + t124);
                t178 = *(int *)((t122 + 0x0));
                t122 = 0x8C343258;
                t122 = (t122 + 0xC);
                *(unsigned int *)((((t178 * 0x38) + t122) + 0x18)) = 0x0;
                t226 = 0x8C343B0C;
                if ((int)(*(int *)((t124 + 0x8C343B0C))) < 0) {
                } else {
                    t122 = 0x56C;
                    t122 = (t122 + 0x8C343258);
                    t122 = (t122 + t124);
                    t180 = *(int *)((t122 + 0x0));
                    t122 = ((int)stk + 16);
                    t122 = (t122 + 0x1C);
                    t121 = (*(int *)((((t180 << 2) + t122) + 0x0)));
                    t123 = t121;
                    *(unsigned int *)(((int)stk + 36)) = t121;
                    t123 = (t123 * 0x38);
                    t121 = (*(int *)(((0x8C343264 + t123) + 0x8)));
                    t220 = 0x8C343B0C;
                    t221 = t121;
                    if (t121 == 0) {
                        t223 = t123;
                    } else {
                        t184 = *(int *)((t124 + 0x8C3437C4));
                        t185 = *(int *)((((t184 * 0x38) + 0x8C343264) + 0x1C));
                        *(unsigned int *)(((int)stk + 20)) = t185;
                        *(unsigned int *)(((int)stk + 28)) = (*(int *)((((t185 << 2) + 0x8C3437C4) + 0x0)));
                        *(unsigned int *)(((int)stk + 40)) = (*(int *)((((t184 * 0x38) + 0x8C343264) + 0x20)));
                        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 20))) << 2);
                        t121 = (*(int *)(((int)stk + 28)));
                        t121 = (t121 * 0x38);
                        *(unsigned int *)(((int)stk + 24)) = t121;
                        if ((*(short *)(((0x8C343264 + t123) + 0x14))) != 0) {
                            t193 = *(int *)(((((*(int *)(((0x8C3437C4 + t124) + 0x0))) * 0x38) + 0x8C343264) + 0x24));
                            *(unsigned short *)(((0x8C343264 + t123) + 0x14)) = 0x1;
                            t123 = (*(int *)(((int)stk + 20)));
                            t123 = (t123 << 2);
                            t123 = (t123 << 1);
                            t123 = (t123 + 0x8C343B4C);
                            t196 = ((~(((~t193) + 0x1) & 0x7)) + 0x1);
                            if ((int)t193 >= 0) {
                                t196 = (t193 & 0x7);
                            }
                            t122 = t193;
                            *(unsigned int *)((t123 + 0x0)) = t196;
                            if ((int)t122 < 0) {
                                t122 = (t122 + 0x7);
                            }
                            t122 = (t122 >> 1);
                            t122 = (t122 >> 1);
                            t122 = (t122 >> 1);
                            *(unsigned int *)((t123 + 0x4)) = t122;
                            t122 = 0x8C343258;
                            t122 = (t122 + 0xC);
                            t121 = (*(int *)(((int)stk + 32)));
                            t123 = 0x1;
                            t122 = (t122 + (*(int *)(((int)stk + 24))));
                            *(unsigned int *)((t122 + 0x0)) = t193;
                            *(unsigned int *)((t121 + 0x8C343ACC)) = t193;
                            selModelSpawn((*(int *)(((int)stk + 28))), t123);
                            t122 = (*(int *)(((int)stk + 36)));
                            t122 = (t122 << 2);
                            *(unsigned int *)((t122 + 0x8C3438E8)) = (*(int *)(((int)stk + 40)));
                            t122 = 0x8C343258;
                            t122 = (t122 + 0xC);
                            t122 = (t122 + (*(int *)(((int)stk + 24))));
                            *(unsigned int *)((t122 + 0x18)) = 0x0;
                            t215 = 0x8C3438E8;
                        } else {
                            selCursorPlace((*(int *)(((int)stk + 20))));
                            t122 = 0x8C343258;
                            t121 = (*(int *)(((int)stk + 32)));
                            t122 = (t122 + 0xC);
                            t122 = (t122 + (*(int *)(((int)stk + 24))));
                            t123 = 0x0;
                            *(unsigned int *)((t122 + 0x0)) = (*(int *)((t121 + 0x8C343ACC)));
                            t213 = selModelSpawn((*(int *)(((int)stk + 28))), t123);
                            t122 = 0x8C343258;
                            t122 = (t122 + 0xC);
                            t121 = 0x0;
                            t122 = (t122 + (*(int *)(((int)stk + 24))));
                            *(unsigned int *)((t122 + 0x18)) = t121;
                            t215 = t213;
                            t216 = t121;
                        }
                        t220 = t215;
                        t221 = t216;
                    }
                    t226 = t220;
                    t227 = t221;
                    t229 = t223;
                }
                t232 = t226;
                t233 = t227;
                t235 = t229;
            }
            t237 = t232;
            t238 = t233;
            t240 = t235;
        }
        t243 = *(int *)(((int)stk + 16));
        t121 = t238;
        t123 = t240;
        t122 = 0x4;
        *(unsigned int *)(((int)stk + 16)) = (t243 + 0x1);
        if ((int)(t243 + 0x1) < (int)t122) continue;
        break;
    }
    return t237;
}
