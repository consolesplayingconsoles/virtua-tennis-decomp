/* Straight-line functions with calls and guards (batch gen_hl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int FUN_8c0f0860(int);
int camGetPos(int, ...);
int camProject(int, int);
int camWorldToView(Stk4);
int lightVec3EqualArgs(Stk3, Stk3);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcCos(float);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
extern int serveGetPos();
int serveGetServer(void);
int set_event(int, int);
float vecLength(Stk4);
Stk3 vecMake(float, float, float);
int vecSub(Stk4, Stk3);
int lightCamCalc(int a4, int a5, int a6, int a7, int a8, int a9);
void effFootDust(int a4);

int lightCamCalc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register float u1;
    register int t4;
    register int t2;
    register float u6;
    register int t9;
    register int t7;
    register int t20;
    register int t21;
    register int t13;
    register int t14;
    register int t15;
    register float u38;
    register int t41;
    register int t39;
    register float u43;
    register int t46;
    register int t44;
    register int t178;
    register int t184;
    register int t185;
    register int t51;
    register int t52;
    register int t53;
    register int t61;
    register int t62;
    register int t63;
    register float u71;
    register float u72;
    register float u77;
    register int t80;
    register int t78;
    register float u89;
    register float u90;
    register float u95;
    register int t98;
    register int t96;
    register float u136;
    register float u139;
    register float u142;
    register float u145;
    register int t174;
    register int t837;
    register int t843;
    register int t844;
    register int t822;
    register int t828;
    register int t829;
    register int t492;
    register int t498;
    register int t499;
    register int t478;
    register int t484;
    register int t485;
    register int t464;
    register int t470;
    register int t471;
    register float u223;
    register int t334;
    register int t231;
    register int t241;
    register int t239;
    register float u247;
    register int t250;
    register int t248;
    register float u266;
    register int t269;
    register int t267;
    register int t278;
    register int t288;
    register int t286;
    register float u294;
    register int t297;
    register int t295;
    register float u312;
    register int t315;
    register int t313;
    register float u341;
    register int t349;
    register int t359;
    register int t357;
    register float u365;
    register int t368;
    register int t366;
    register float u383;
    register int t386;
    register int t384;
    register int t394;
    register int t404;
    register int t402;
    register float u410;
    register int t413;
    register int t411;
    register float u428;
    register int t431;
    register int t429;
    register float u455;
    register int t456;
    register float u459;
    register int t460;
    register int t505;
    register int t506;
    register int t585;
    register int t588;
    register int t589;
    register float u590;
    register int t515;
    register int t513;
    register float u518;
    register int t521;
    register int t519;
    register int t574;
    register int t577;
    register int t578;
    register float u579;
    register float u580;
    register int t563;
    register int t566;
    register int t567;
    register float u568;
    register float u569;
    register float u525;
    register int t528;
    register int t526;
    register float u534;
    register int t539;
    register int t537;
    register float u544;
    register int t545;
    register float u548;
    register int t549;
    register float u552;
    register int t553;
    register float u557;
    register float u594;
    register int t597;
    register int t595;
    register float u599;
    register int t602;
    register int t600;
    register int t608;
    register int t609;
    register int t610;
    register int t611;
    register int t612;
    register int t613;
    register int t614;
    register float u615;
    register float u616;
    register float u617;
    register float u618;
    register float u619;
    register float u721;
    register float u722;
    register int t727;
    register float t857;
    register float t859;
    register int t860;
    register int t861;
    register int t863;
    register int t866;
    register int t870;
    register float u871;
    register int t872;
    register int t875;
    register int t873;
    register int t882;
    register float u883;
    register int t886;
    register int t884;
    register int t890;
    register float u891;
    register int t892;
    register int t895;
    register int t893;
    register int t911;
    register float u932;
    register float u933;
    register float u946;
    register float u947;
    register int t986;
    register float u997;
    register float u998;
    register float u999;
    register float t1005;
    register int t1046;
    register int t1063;
    register int t1065;
    register int t1067;
    register float u1072;
    register float u1076;
    register float u1078;
    register float u1090;
    register float u1092;
    register float u1095;
    register float u1118;
    register float u1119;
    register float u1121;
    register float u1130;
    register float u1131;
    register float u1133;
    register float u1135;
    register float u1136;
    register int t1163;
    register int t1183;
    register int t1181;
    register int t1192;
    register int t1190;
    register float u1196;
    register float u1197;
    register float u1199;
    register float u1200;
    register float u1271;
    register int t1274;
    register int t1272;
    register int t32;
    register int t33;
    register float u186;
    register float u54;
    register float u55;
    register float u111;
    register float u66;
    register int t130;
    register float u131;
    register int t208;
    register float u591;
    register int t531;
    register int t799;
    register float u800;
    register float u801;
    register int t720;
    register int t713;
    register float u714;
    register float u715;
    register int t706;
    register float u707;
    register float u708;
    register int t792;
    register float u793;
    register float u794;
    register int t785;
    register float u786;
    register float u787;
    register float u902;
    register float u903;
    register float u912;
    register float u913;
    register float u914;
    register float u939;
    register float u953;
    register int t992;
    register int t1011;
    register int t1017;
    register int t1051;
    register int t1061;
    register int t1057;
    register int t1070;
    register float u1079;
    register float u1080;
    register float u1081;
    register float u1102;
    register float u1110;
    register float u1111;
    register float u1112;
    register float u1172;
    register float u1173;
    register float u1206;
    register float u1212;
    register float u1215;
    register float u1216;
    register float u1226;
    register float u1227;
    register int t1278;
    int stk[95];

    *(unsigned int *)(((int)stk + 40)) = a4;
    *(unsigned int *)(((int)stk + 80)) = a5;
    *(unsigned int *)(((int)stk + 68)) = a6;
    *(float *)(((int)stk + 100)) = (*(float *)((a8 + 0x10)));
    u1 = *(float *)0x8C287960;
    t4 = 0x1;
    if (u1 > 0.0f) {
    } else {
        t2 = 0x0;
        if (0.0f > u1) {
            t2 = 0xFFFFFFFF;
        }
        t4 = t2;
    }
    u6 = *(float *)((a8 + 0x3C));
    t9 = 0x1;
    if (u6 > 0.0f) {
    } else {
        t7 = 0x0;
        if (0.0f > u6) {
            t7 = 0xFFFFFFFF;
        }
        t9 = t7;
    }
    if (t4 == t9) {
        *(float *)((a8 + 0x10)) = 0.0f;
    }
    t20 = a5;
    t21 = a6;
    if (a9 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1254) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1260) = *(struct mv3 *)(0x8C1016D4); }
        *(unsigned int *)0x8C1D124C = 0x0;
        *(float *)0x8C1D1248 = 0.0f;
        *(float *)0x8C38B8C0 = 0.0f;
        *(float *)0x8C38B8BC = 0.0f;
        *(unsigned int *)0x8C38B8C4 = 0x0;
        *(unsigned int *)0x8C1D1250 = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B8C8) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1260) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1254) = *(struct mv3 *)(0x8C1016D4); }
        t13 = 0x8C1D1254;
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            if ((unsigned int)t14 >= (unsigned int)0x8) {
                break;
            }
            *(unsigned int *)((0x8C38B850 + t14)) = 0x0;
            t13 = 0x8C38B880;
            *(unsigned int *)((t14 + 0x8C38B860)) = 0x0;
            *(unsigned int *)(((0x8C38B858 + t14) + 0x0)) = 0x0;
            t13 = (t13 + t15);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t13) = *(struct mv3 *)(0x8C1016D4); }
            t13 = 0x8C38B868;
            t13 = (t13 + t15);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t13) = *(struct mv3 *)(0x8C1016D4); }
            t14 = (t14 + 0x4);
            t15 = (t15 + 0xC);
        }
        t20 = t15;
        t21 = 0x8;
    }
    *(float *)(((int)stk + 304)) = 10000.0f;
    *(float *)(((int)stk + 296)) = 10000.0f;
    *(float *)(((int)stk + 292)) = -10000.0f;
    *(float *)(((int)stk + 284)) = -10000.0f;
    *(float *)(((int)stk + 300)) = 0.0f;
    *(float *)(((int)stk + 288)) = 0.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x64;
    if ((*(int *)0x8C287ADC) == 2) {
        *(unsigned int *)(((int)stk + 64)) = 0x2;
    } else {
        *(unsigned int *)(((int)stk + 64)) = 0x4;
    }
    if (a9 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + ((int)stk + 32))) = *(struct mv3 *)((*(int *)(((int)stk + 80)))); }
        t32 = t20;
        t33 = t21;
    } else {
        camGetPos((0x9C + ((int)stk + 32)));
    }
    u38 = *(float *)(((int)stk + 196));
    t41 = 0x1;
    if (u38 > 0.0f) {
    } else {
        t39 = 0x0;
        if (0.0f > u38) {
            t39 = 0xFFFFFFFF;
        }
        t41 = t39;
    }
    u43 = *(float *)(((0x14 + a8) + 0x0));
    t46 = 0x1;
    if (u43 > 0.0f) {
    } else {
        t44 = 0x0;
        if (0.0f > u43) {
            t44 = 0xFFFFFFFF;
        }
        t46 = t44;
    }
    if (t41 == t46) {
        *(float *)((a8 + 0x10)) = 0.0f;
    }
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    t178 = 0x64;
    t184 = 0xFFFFFF9C;
    t185 = 0xFFFFFF9C;
    if ((int)(*(int *)(((int)stk + 64))) <= 0) {
    } else {
        t51 = 0xFFFFFF9C;
        t52 = 0xFFFFFF9C;
        t53 = 0x64;
        for (;;) {
            if (a9 == 0) {
                if ((*(int *)0x8C421F60) == 0) {
                    t61 = ((int (*)(int, int, int, int, int, float, float))(serveGetPos))((*(int *)(((int)stk + 48))), t32, t33, 0x0, (0x114 + ((int)stk + 32)), u43, u38);
                } else {
                    t62 = *(int *)(((int)stk + 48));
                    t63 = ((~(((~t62) + 0x1) & 0x1)) + 0x1);
                    if ((int)t62 >= 0) {
                        t63 = (t62 & 0x1);
                    }
                    if (t63 != 0) {
                        u55 = -31.6000004f;
                        u66 = -108.599998f;
                    } else {
                        u55 = 10.1000004f;
                        u66 = 124.800003f;
                    }
                    *(Stk3 *)((0x114 + ((int)stk + 32))) = vecMake(u55, 0.0f, u66);
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x114 + ((int)stk + 32))) = *(struct mv3 *)(((*(int *)(((int)stk + 40))) + 0xAE8)); }
                u71 = *(float *)(((*(int *)(((int)stk + 40))) + 0xAF0));
                u72 = (-u71);
                if (!(0.0f > u71)) {
                    u72 = u71;
                }
                if (u72 > 180.0f) {
                    u77 = *(float *)(((*(int *)(((int)stk + 40))) + 0xAF0));
                    t80 = 0x1;
                    if (u77 > 0.0f) {
                    } else {
                        t78 = 0x0;
                        if (0.0f > u77) {
                            t78 = 0xFFFFFFFF;
                        }
                        t80 = t78;
                    }
                    *(float *)(((0x114 + ((int)stk + 32)) + 0x8)) = ((float)t80 * 180.0f);
                }
                u89 = *(float *)(((*(int *)(((int)stk + 40))) + 0xAE8));
                u90 = (-u89);
                if (!(0.0f > u89)) {
                    u90 = u89;
                }
                if (u90 > 70.0f) {
                    u95 = *(float *)(((*(int *)(((int)stk + 40))) + 0xAE8));
                    t98 = 0x1;
                    if (u95 > 0.0f) {
                    } else {
                        t96 = 0x0;
                        if (0.0f > u95) {
                            t96 = 0xFFFFFFFF;
                        }
                        t98 = t96;
                    }
                    *(float *)(((0x114 + ((int)stk + 32)) + 0x0)) = ((float)t98 * 70.0f);
                }
                u111 = u54;
            }
            u54 = u111;
            u54 = (*(float *)(((int)stk + 196)));
            if (u54 > 0.0f) {
                u54 = (*(float *)(((0x114 + ((int)stk + 32)) + 0x8)));
                if (!(0.0f > u54)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC + ((int)stk + 32))) = *(struct mv3 *)((0x114 + ((int)stk + 32))); }
                    *(float *)(((0xCC + ((int)stk + 32)) + 0x8)) = ((*(float *)(((0xCC + ((int)stk + 32)) + 0x8))) + 7.0f);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC + ((int)stk + 32))) = *(struct mv3 *)((0x114 + ((int)stk + 32))); }
                    *(float *)(((0xCC + ((int)stk + 32)) + 0x4)) = ((*(float *)(((0xCC + ((int)stk + 32)) + 0x4))) + 20.0f);
                }
            } else {
                u54 = (*(float *)(((0x114 + ((int)stk + 32)) + 0x8)));
                if (u54 > 0.0f) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC + ((int)stk + 32))) = *(struct mv3 *)((0x114 + ((int)stk + 32))); }
                    t130 = 0x4;
                    u131 = ((*(float *)(((0xCC + ((int)stk + 32)) + 0x4))) + 20.0f);
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC + ((int)stk + 32))) = *(struct mv3 *)((0x114 + ((int)stk + 32))); }
                    t130 = 0x8;
                    u131 = ((*(float *)(((0xCC + ((int)stk + 32)) + 0x8))) - 7.0f);
                }
                *(float *)(((0xCC + ((int)stk + 32)) + t130)) = u131;
            }
            u136 = *(float *)(((0xCC + ((int)stk + 32)) + 0x0));
            u54 = (*(float *)(((int)stk + 284)));
            if (u136 > u54) {
                *(float *)(((int)stk + 284)) = u136;
            }
            u139 = *(float *)(((0xCC + ((int)stk + 32)) + 0x0));
            if ((*(float *)(((int)stk + 296))) > u139) {
                *(float *)(((int)stk + 296)) = u139;
            }
            u142 = *(float *)(((0xCC + ((int)stk + 32)) + 0x8));
            if (u142 > (*(float *)(((int)stk + 292)))) {
                *(float *)(((int)stk + 292)) = u142;
            }
            u145 = *(float *)(((0xCC + ((int)stk + 32)) + 0x8));
            if ((*(float *)(((int)stk + 304))) > u145) {
                *(float *)(((int)stk + 304)) = u145;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xCC + ((int)stk + 32))); }
            *(int *)((int)stk + 4) = (0xC + ((int)stk + 8));
            camWorldToView(*(Stk4 *)(((int)stk + 4)));
            camProject((((int)stk + 20) + 0xC), (((int)stk + 20) + 0x10));
            u54 = (*(float *)(((int)stk + 32)));
            if (u54 > (float)t52) {
                t52 = (int)u54;
            }
            u54 = (*(float *)(((int)stk + 32)));
            if ((float)t53 > u54) {
                t53 = (int)u54;
            }
            u54 = (*(float *)(((int)stk + 36)));
            if (u54 > (float)t51) {
                t51 = (int)u54;
            }
            u54 = (*(float *)(((int)stk + 36)));
            if ((float)(*(int *)(((int)stk + 44))) > u54) {
                *(unsigned int *)(((int)stk + 44)) = (int)u54;
            }
            *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0xD78);
            t174 = *(int *)(((int)stk + 48));
            *(unsigned int *)(((int)stk + 48)) = (t174 + 0x1);
            if ((int)(t174 + 0x1) < (int)(*(int *)(((int)stk + 64)))) continue;
            break;
        }
        t178 = t53;
        t184 = t51;
        t185 = t52;
        u186 = u55;
    }
    if ((*(float *)(((int)stk + 196))) > 0.0f) {
        *(float *)(((int)stk + 300)) = 20.0f;
    } else {
        *(float *)(((int)stk + 288)) = 20.0f;
    }
    if (a9 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B8A4) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B898) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
    }
    t837 = t178;
    t843 = t184;
    t844 = t185;
    if (a9 == 0) {
    } else {
        t822 = t178;
        t828 = t184;
        t829 = t185;
        if (((*(int *)0x8C287D5C) == 3) && (t208 = *(int *)0x8C2FBEA8, t208 != 0)) {
        } else {
            t492 = t178;
            t498 = t184;
            t499 = t185;
            if ((int)(*(int *)((a8 + 0x4C))) >= (int)0x2) {
            } else {
                t478 = t178;
                t484 = t184;
                t485 = t185;
                if ((0x2 & (*(int *)((a8 + 0x54)))) != 0) {
                } else {
                    t464 = t178;
                    t470 = t184;
                    t471 = t185;
                    if (((*(int *)((a8 + 0x54))) & 4) != 0) {
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((a8 + 0xC)); }
                        *(int *)((int)stk + 4) = (0xC + ((int)stk + 8));
                        camWorldToView(*(Stk4 *)(((int)stk + 4)));
                        camProject((((int)stk + 20) + 0xC), (((int)stk + 20) + 0x10));
                        u223 = *(float *)(((int)stk + 36));
                        t334 = t184;
                        if (!(u223 > (float)t184)) {
                        } else {
                            if (0.0f > (*(float *)(((int)stk + 196)))) {
                                t231 = *(int *)0x8C38B858;
                                if (t231 != 0) {
                                    if ((int)t231 < (int)0x1) {
                                    } else {
                                        t241 = 0x1;
                                        if ((*(float *)((a8 + 0x3C))) > 0.0f) {
                                        } else {
                                            t239 = 0x0;
                                            if (0.0f > (*(float *)((a8 + 0x3C)))) {
                                                t239 = 0xFFFFFFFF;
                                            }
                                            t241 = t239;
                                        }
                                        if ((*(int *)0x8C38B860) != t241) {
                                        } else {
                                            *(float *)(((int)stk + 288)) = (*(float *)((a8 + 0x10)));
                                            *(float *)(((int)stk + 292)) = (*(float *)((a8 + 0x14)));
                                            *(unsigned int *)0x8C38B858 = 0x1;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B868) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B880) = *(struct mv3 *)((a8 + 0x34)); }
                                            u247 = *(float *)((a8 + 0x3C));
                                            t250 = 0x1;
                                            if (u247 > 0.0f) {
                                            } else {
                                                t248 = 0x0;
                                                if (0.0f > u247) {
                                                    t248 = 0xFFFFFFFF;
                                                }
                                                t250 = t248;
                                            }
                                            *(unsigned int *)0x8C38B860 = t250;
                                            *(unsigned int *)0x8C38B850 = 0x3C;
                                        }
                                    }
                                } else {
                                    *(float *)(((int)stk + 288)) = (*(float *)((a8 + 0x10)));
                                    *(float *)(((int)stk + 292)) = (*(float *)((a8 + 0x14)));
                                    *(unsigned int *)0x8C38B858 = 0x1;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B868) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B880) = *(struct mv3 *)((a8 + 0x34)); }
                                    u266 = *(float *)((a8 + 0x3C));
                                    t269 = 0x1;
                                    if (u266 > 0.0f) {
                                    } else {
                                        t267 = 0x0;
                                        if (0.0f > u266) {
                                            t267 = 0xFFFFFFFF;
                                        }
                                        t269 = t267;
                                    }
                                    *(unsigned int *)0x8C38B860 = t269;
                                    *(unsigned int *)0x8C38B850 = 0x3C;
                                }
                            } else {
                                t278 = *(int *)0x8C38B85C;
                                if (t278 != 0) {
                                    if ((int)t278 >= (int)0x1) {
                                        t288 = 0x1;
                                        if ((*(float *)((a8 + 0x3C))) > 0.0f) {
                                        } else {
                                            t286 = 0x0;
                                            if (0.0f > (*(float *)((a8 + 0x3C)))) {
                                                t286 = 0xFFFFFFFF;
                                            }
                                            t288 = t286;
                                        }
                                        if ((*(int *)0x8C38B864) == t288) {
                                            *(float *)(((int)stk + 300)) = (*(float *)((a8 + 0x10)));
                                            *(float *)(((int)stk + 304)) = (*(float *)((a8 + 0x14)));
                                            *(unsigned int *)0x8C38B85C = 0x1;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B874) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
                                            u294 = *(float *)((a8 + 0x3C));
                                            t297 = 0x1;
                                            if (u294 > 0.0f) {
                                            } else {
                                                t295 = 0x0;
                                                if (0.0f > u294) {
                                                    t295 = 0xFFFFFFFF;
                                                }
                                                t297 = t295;
                                            }
                                            *(unsigned int *)0x8C38B864 = t297;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B88C) = *(struct mv3 *)((a8 + 0x34)); }
                                            *(unsigned int *)0x8C38B854 = 0x3C;
                                        }
                                    }
                                } else {
                                    *(float *)(((int)stk + 300)) = (*(float *)((a8 + 0x10)));
                                    *(float *)(((int)stk + 304)) = (*(float *)((a8 + 0x14)));
                                    *(unsigned int *)0x8C38B85C = 0x1;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B874) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
                                    u312 = *(float *)((a8 + 0x3C));
                                    t315 = 0x1;
                                    if (u312 > 0.0f) {
                                    } else {
                                        t313 = 0x0;
                                        if (0.0f > u312) {
                                            t313 = 0xFFFFFFFF;
                                        }
                                        t315 = t313;
                                    }
                                    *(unsigned int *)0x8C38B864 = t315;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B88C) = *(struct mv3 *)((a8 + 0x34)); }
                                    *(unsigned int *)0x8C38B854 = 0x3C;
                                }
                            }
                            t334 = (int)u223;
                        }
                        u341 = *(float *)(((int)stk + 36));
                        if (!((float)(*(int *)(((int)stk + 44))) > u341)) {
                        } else {
                            *(unsigned int *)(((int)stk + 44)) = (int)u341;
                            if (0.0f > (*(float *)(((int)stk + 196)))) {
                                t349 = *(int *)0x8C38B85C;
                                if (t349 != 0) {
                                    if ((int)t349 < (int)0x1) {
                                    } else {
                                        t359 = 0x1;
                                        if ((*(float *)((a8 + 0x3C))) > 0.0f) {
                                        } else {
                                            t357 = 0x0;
                                            if (0.0f > (*(float *)((a8 + 0x3C)))) {
                                                t357 = 0xFFFFFFFF;
                                            }
                                            t359 = t357;
                                        }
                                        if ((*(int *)0x8C38B864) == t359) {
                                            *(float *)(((int)stk + 300)) = (*(float *)((a8 + 0x10)));
                                            *(float *)(((int)stk + 304)) = (*(float *)((a8 + 0x14)));
                                            *(unsigned int *)0x8C38B85C = 0x1;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B874) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
                                            u365 = *(float *)((a8 + 0x3C));
                                            t368 = 0x1;
                                            if (u365 > 0.0f) {
                                            } else {
                                                t366 = 0x0;
                                                if (0.0f > u365) {
                                                    t366 = 0xFFFFFFFF;
                                                }
                                                t368 = t366;
                                            }
                                            *(unsigned int *)0x8C38B864 = t368;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B88C) = *(struct mv3 *)((a8 + 0x34)); }
                                            *(unsigned int *)0x8C38B854 = 0x3C;
                                        }
                                    }
                                } else {
                                    *(float *)(((int)stk + 300)) = (*(float *)((a8 + 0x10)));
                                    *(float *)(((int)stk + 304)) = (*(float *)((a8 + 0x14)));
                                    *(unsigned int *)0x8C38B85C = 0x1;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B874) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
                                    u383 = *(float *)((a8 + 0x3C));
                                    t386 = 0x1;
                                    if (u383 > 0.0f) {
                                    } else {
                                        t384 = 0x0;
                                        if (0.0f > u383) {
                                            t384 = 0xFFFFFFFF;
                                        }
                                        t386 = t384;
                                    }
                                    *(unsigned int *)0x8C38B864 = t386;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B88C) = *(struct mv3 *)((a8 + 0x34)); }
                                    *(unsigned int *)0x8C38B854 = 0x3C;
                                }
                            } else {
                                t394 = *(int *)0x8C38B858;
                                if (t394 != 0) {
                                    if ((int)t394 >= (int)0x1) {
                                        t404 = 0x1;
                                        if ((*(float *)((a8 + 0x3C))) > 0.0f) {
                                        } else {
                                            t402 = 0x0;
                                            if (0.0f > (*(float *)((a8 + 0x3C)))) {
                                                t402 = 0xFFFFFFFF;
                                            }
                                            t404 = t402;
                                        }
                                        if ((*(int *)0x8C38B860) == t404) {
                                            *(float *)(((int)stk + 288)) = (*(float *)((a8 + 0x10)));
                                            *(float *)(((int)stk + 292)) = (*(float *)((a8 + 0x14)));
                                            *(unsigned int *)0x8C38B858 = 0x1;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B868) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
                                            u410 = *(float *)((a8 + 0x3C));
                                            t413 = 0x1;
                                            if (u410 > 0.0f) {
                                            } else {
                                                t411 = 0x0;
                                                if (0.0f > u410) {
                                                    t411 = 0xFFFFFFFF;
                                                }
                                                t413 = t411;
                                            }
                                            *(unsigned int *)0x8C38B860 = t413;
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B880) = *(struct mv3 *)((a8 + 0x34)); }
                                            *(unsigned int *)0x8C38B850 = 0x3C;
                                        }
                                    }
                                } else {
                                    *(float *)(((int)stk + 288)) = (*(float *)((a8 + 0x10)));
                                    *(float *)(((int)stk + 292)) = (*(float *)((a8 + 0x14)));
                                    *(unsigned int *)0x8C38B858 = 0x1;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B868) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
                                    u428 = *(float *)((a8 + 0x3C));
                                    t431 = 0x1;
                                    if (u428 > 0.0f) {
                                    } else {
                                        t429 = 0x0;
                                        if (0.0f > u428) {
                                            t429 = 0xFFFFFFFF;
                                        }
                                        t431 = t429;
                                    }
                                    *(unsigned int *)0x8C38B860 = t431;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B880) = *(struct mv3 *)((a8 + 0x34)); }
                                    *(unsigned int *)0x8C38B850 = 0x3C;
                                }
                            }
                        }
                        u455 = *(float *)(((int)stk + 32));
                        t456 = t185;
                        if (u455 > (float)t185) {
                            t456 = (int)u455;
                        }
                        u459 = *(float *)(((int)stk + 32));
                        t460 = t178;
                        if ((float)t178 > u459) {
                            t460 = (int)u459;
                        }
                        t464 = t460;
                        t470 = t334;
                        t471 = t456;
                    }
                    t478 = t464;
                    t484 = t470;
                    t485 = t471;
                }
                t492 = t478;
                t498 = t484;
                t499 = t485;
            }
            t505 = serveGetServer();
            t506 = ((int (*)(int, int, int, int, int))(serveGetPos))(t505, 0x0, 0x0, 0x0, (0x114 + ((int)stk + 32)));
            t585 = t492;
            t588 = t498;
            t589 = t499;
            u590 = u186;
            if (((*(int *)((a8 + 0x54))) & 2) == 0) {
            } else {
                t515 = 0x1;
                if ((*(float *)(((int)stk + 196))) > 0.0f) {
                } else {
                    t513 = 0x0;
                    if (0.0f > (*(float *)(((int)stk + 196)))) {
                        t513 = 0xFFFFFFFF;
                    }
                    t515 = t513;
                }
                u518 = *(float *)(((0x114 + ((int)stk + 32)) + 0x8));
                t521 = 0x1;
                if (u518 > 0.0f) {
                } else {
                    t519 = 0x0;
                    if (0.0f > u518) {
                        t519 = 0xFFFFFFFF;
                    }
                    t521 = t519;
                }
                t574 = t492;
                t577 = t498;
                t578 = t499;
                u579 = u186;
                u580 = u518;
                if (t515 == t521) {
                } else {
                    t563 = t492;
                    t566 = t498;
                    t567 = t499;
                    u568 = u186;
                    u569 = u518;
                    if (a9 == 0) {
                    } else {
                        u525 = *(float *)(((0x114 + ((int)stk + 32)) + 0x8));
                        t528 = 0x1;
                        if (u525 > 0.0f) {
                        } else {
                            t526 = 0x0;
                            if (0.0f > u525) {
                                t526 = 0xFFFFFFFF;
                            }
                            t528 = t526;
                        }
                        if ((int)t528 < 0) {
                            *(float *)(((int)stk + 304)) = -123.0f;
                            *(float *)(((int)stk + 300)) = 40.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B874) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
                            *(unsigned int *)0x8C38B854 = 0x3C;
                            t531 = 0x8C38B864;
                        } else {
                            *(float *)(((int)stk + 292)) = 123.0f;
                            *(float *)(((int)stk + 288)) = 40.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B868) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
                            *(unsigned int *)0x8C38B850 = 0x3C;
                            t531 = 0x8C38B860;
                        }
                        *(unsigned int *)((t531 + 0x0)) = 0x63;
                        u534 = *(float *)(((0x114 + ((int)stk + 32)) + 0x8));
                        *(float *)(((int)stk + 96)) = u534;
                        t539 = 0x1;
                        if (u534 > 0.0f) {
                        } else {
                            t537 = 0x0;
                            if (0.0f > (*(float *)(((int)stk + 96)))) {
                                t537 = 0xFFFFFFFF;
                            }
                            t539 = t537;
                        }
                        *(Stk3 *)(((int)stk + 8)) = vecMake(10.0f, 40.0f, ((float)t539 * 40.0f));
                        camWorldToView(*(Stk4 *)((int)stk + 4));
                        camProject((((int)stk + 20) + 0xC), (((int)stk + 20) + 0x10));
                        u544 = *(float *)(((int)stk + 32));
                        t545 = t499;
                        if (u544 > (float)t499) {
                            t545 = (int)u544;
                        }
                        u548 = *(float *)(((int)stk + 32));
                        t549 = t492;
                        if ((float)t492 > u548) {
                            t549 = (int)u548;
                        }
                        u552 = *(float *)(((int)stk + 36));
                        t553 = t498;
                        if (u552 > (float)t498) {
                            t553 = (int)u552;
                        }
                        u557 = *(float *)(((int)stk + 36));
                        if ((float)(*(int *)(((int)stk + 44))) > u557) {
                            *(unsigned int *)(((int)stk + 44)) = (int)u557;
                        }
                        t563 = t549;
                        t566 = t553;
                        t567 = t545;
                        u568 = 40.0f;
                        u569 = u557;
                    }
                    t574 = t563;
                    t577 = t566;
                    t578 = t567;
                    u579 = u568;
                    u580 = u569;
                }
                t585 = t574;
                t588 = t577;
                t589 = t578;
                u590 = u579;
                u591 = u580;
            }
            u594 = *(float *)((a8 + 0x14));
            t597 = 0x1;
            if (u594 > 0.0f) {
            } else {
                t595 = 0x0;
                if (0.0f > u594) {
                    t595 = 0xFFFFFFFF;
                }
                t597 = t595;
            }
            u599 = *(float *)((a8 + 0x8));
            t602 = 0x1;
            if (u599 > 0.0f) {
            } else {
                t600 = 0x0;
                if (0.0f > u599) {
                    t600 = 0xFFFFFFFF;
                }
                t602 = t600;
            }
            if (t597 != t602) {
                *(unsigned int *)0x8C38B85C = 0x0;
                *(unsigned int *)0x8C38B858 = 0x0;
            }
            *(unsigned int *)(((int)stk + 40)) = 0x0;
            *(unsigned int *)(((int)stk + 72)) = 0x8C38B88C;
            *(unsigned int *)(((int)stk + 64)) = 0x8C38B874;
            *(unsigned int *)(((int)stk + 48)) = 0x8C38B880;
            *(unsigned int *)(((int)stk + 76)) = 0x8C38B868;
            t608 = 0x8;
            t609 = 0x8C38B880;
            t610 = a4;
            t611 = a5;
            t612 = t588;
            t613 = t589;
            t614 = t585;
            u615 = u591;
            u616 = 0.0f;
            u617 = u599;
            u618 = u594;
            u619 = u590;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 40))) < (int)0x2) {
                    t608 = (*(int *)(((int)stk + 40)));
                    t608 = (t608 << 2);
                    if ((*(int *)((0x8C38B850 + t608))) == 0) {
                    } else {
                        t608 = (*(int *)(((int)stk + 40)));
                        t609 = 0x3C;
                        t608 = (t608 << 2);
                        if ((int)(*(int *)((0x8C38B850 + t608))) > (int)t609) {
                            t608 = (*(int *)(((int)stk + 40)));
                            t608 = (t608 << 2);
                            t608 = (*(int *)((0x8C38B850 + t608)));
                            u721 = u617;
                            u722 = u618;
                            if (t608 == 70) {
                                t720 = t611;
                            } else {
                                t608 = (*(int *)(((int)stk + 40)));
                                if (t608 == 1) {
                                    t608 = 0x4;
                                    t610 = ((int)stk + 32);
                                    *(float *)(((*(int *)(((int)stk + 72))) + t608)) = 0.0f;
                                    t608 = (*(int *)(((int)stk + 40)));
                                    t611 = (*(int *)(((int)stk + 72)));
                                    t608 = (t608 << 2);
                                    u616 = (float)((*(int *)((0x8C38B850 + t608))) - 60);
                                    u617 = u616;
                                    u617 = (u617 / 10.0f);
                                    t610 = (t610 + 0x48);
                                    t608 = (nlScaleVector(t610, t611, u617));
                                    t611 = ((int)stk + 32);
                                    t611 = (t611 + 0x48);
                                    t610 = (*(int *)(((int)stk + 64)));
                                    t608 = (nlAddVector(t610, t611));
                                    t609 = (*(int *)(((int)stk + 64)));
                                    t608 = 0xC;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x108 + ((int)stk + 32))) = *(struct mv3 *)(t609); }
                                    t609 = 0x114;
                                    t608 = 0xC;
                                    t609 = (t609 + ((int)stk + 20));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(t609); }
                                    t609 = 0xC;
                                    t609 = (t609 + ((int)stk + 8));
                                    *(int *)((int)stk + 4) = (t609);
                                    t608 = (camWorldToView(*(Stk4 *)(((int)stk + 4))));
                                    t611 = ((int)stk + 20);
                                    t610 = ((int)stk + 20);
                                    t611 = (t611 + 0x10);
                                    t610 = (t610 + 0xC);
                                    t608 = (camProject(t610, t611));
                                    u615 = (*(float *)(((int)stk + 32)));
                                    u616 = (float)t613;
                                    if (u615 > u616) {
                                        t613 = (int)u615;
                                    }
                                    u615 = (*(float *)(((int)stk + 32)));
                                    u616 = (float)t614;
                                    if (u616 > u615) {
                                        t614 = (int)u615;
                                    }
                                    t608 = 0x4;
                                    u615 = (*(float *)((((int)stk + 32) + t608)));
                                    u616 = (float)t612;
                                    if (u615 > u616) {
                                        t612 = (int)u615;
                                    }
                                    t609 = (*(int *)(((int)stk + 44)));
                                    t608 = 0x4;
                                    u615 = (*(float *)((((int)stk + 32) + t608)));
                                    u616 = (float)t609;
                                    if (!(u616 > u615)) {
                                    } else {
                                        t608 = 0x4;
                                        u616 = (*(float *)((((int)stk + 32) + t608)));
                                        *(unsigned int *)(((int)stk + 44)) = (int)u616;
                                    }
                                } else {
                                    if ((*(int *)(((int)stk + 40))) == 0) {
                                        t608 = 0x4;
                                        t610 = ((int)stk + 32);
                                        *(float *)(((*(int *)(((int)stk + 48))) + t608)) = 0.0f;
                                        t608 = (*(int *)(((int)stk + 40)));
                                        t611 = (*(int *)(((int)stk + 48)));
                                        t608 = (t608 << 2);
                                        u616 = (float)((*(int *)((0x8C38B850 + t608))) - 60);
                                        u617 = u616;
                                        u617 = (u617 / 10.0f);
                                        t610 = (t610 + 0x48);
                                        t608 = (nlScaleVector(t610, t611, u617));
                                        t611 = ((int)stk + 32);
                                        t611 = (t611 + 0x48);
                                        t610 = (*(int *)(((int)stk + 76)));
                                        t608 = (nlAddVector(t610, t611));
                                        t609 = (*(int *)(((int)stk + 76)));
                                        t608 = 0xC;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xFC + ((int)stk + 32))) = *(struct mv3 *)(t609); }
                                        t609 = 0x108;
                                        t608 = 0xC;
                                        t609 = (t609 + ((int)stk + 20));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(t609); }
                                        t609 = 0xC;
                                        t609 = (t609 + ((int)stk + 8));
                                        *(int *)((int)stk + 4) = (t609);
                                        t608 = (camWorldToView(*(Stk4 *)(((int)stk + 4))));
                                        t611 = ((int)stk + 20);
                                        t610 = ((int)stk + 20);
                                        t611 = (t611 + 0x10);
                                        t610 = (t610 + 0xC);
                                        t608 = (camProject(t610, t611));
                                        u615 = (*(float *)(((int)stk + 32)));
                                        u616 = (float)t613;
                                        if (u615 > u616) {
                                            t613 = (int)u615;
                                        }
                                        u615 = (*(float *)(((int)stk + 32)));
                                        u616 = (float)t614;
                                        if (u616 > u615) {
                                            t614 = (int)u615;
                                        }
                                        t608 = 0x4;
                                        u615 = (*(float *)((((int)stk + 32) + t608)));
                                        u616 = (float)t612;
                                        if (u615 > u616) {
                                            t612 = (int)u615;
                                        }
                                        t609 = (*(int *)(((int)stk + 44)));
                                        t608 = 0x4;
                                        u615 = (*(float *)((((int)stk + 32) + t608)));
                                        u616 = (float)t609;
                                        if (u616 > u615) {
                                            t608 = 0x4;
                                            u616 = (*(float *)((((int)stk + 32) + t608)));
                                            *(unsigned int *)(((int)stk + 44)) = (int)u616;
                                        }
                                    } else {
                                        t706 = t611;
                                        u707 = u617;
                                        u708 = u618;
                                    }
                                    t713 = t706;
                                    u714 = u707;
                                    u715 = u708;
                                }
                                t720 = t713;
                                u721 = u714;
                                u722 = u715;
                            }
                            t799 = t720;
                            u800 = u721;
                            u801 = u722;
                        } else {
                            t611 = (*(int *)(((int)stk + 40)));
                            t608 = 0x8C0CD094;
                            u619 = (*(float *)((t608 + 0x0)));
                            t608 = (*(int *)(((int)stk + 40)));
                            t727 = t611;
                            t611 = (t611 << 1);
                            t611 = (t611 + t727);
                            t611 = (t611 << 2);
                            t611 = (t611 + 0x8C38B868);
                            if (t608 == 1) {
                                t610 = ((int)stk + 32);
                                t610 = (t610 + 0x54);
                                t608 = (nlSubVector3op(t610, t611, (0x108 + ((int)stk + 32))));
                                t608 = (*(int *)(((int)stk + 40)));
                                t611 = ((int)stk + 32);
                                t610 = ((int)stk + 32);
                                t611 = (t611 + 0x54);
                                t608 = (t608 << 2);
                                u616 = (float)(*(int *)((0x8C38B850 + t608)));
                                u617 = u616;
                                u617 = (u617 / u619);
                                t610 = (t610 + 0x60);
                                t608 = (nlScaleVector(t610, t611, u617));
                                t610 = 0x108;
                                t611 = ((int)stk + 32);
                                t609 = 0x8C0F0520;
                                t611 = (t611 + 0x60);
                                t610 = (t610 + ((int)stk + 32));
                                t608 = (nlAddVector(t610, t611));
                                t609 = 0x114;
                                t608 = 0xC;
                                t609 = (t609 + ((int)stk + 20));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(t609); }
                                t609 = 0xC;
                                t609 = (t609 + ((int)stk + 8));
                                *(int *)((int)stk + 4) = (t609);
                                t608 = (camWorldToView(*(Stk4 *)(((int)stk + 4))));
                                t611 = ((int)stk + 20);
                                t610 = ((int)stk + 20);
                                t611 = (t611 + 0x10);
                                t610 = (t610 + 0xC);
                                t608 = (camProject(t610, t611));
                                u615 = (*(float *)(((int)stk + 32)));
                                u616 = (float)t613;
                                if (u615 > u616) {
                                    t613 = (int)u615;
                                }
                                u615 = (*(float *)(((int)stk + 32)));
                                u616 = (float)t614;
                                if (u616 > u615) {
                                    t614 = (int)u615;
                                }
                                t608 = 0x4;
                                u615 = (*(float *)((((int)stk + 32) + t608)));
                                u616 = (float)t612;
                                if (u615 > u616) {
                                    t612 = (int)u615;
                                }
                                t609 = (*(int *)(((int)stk + 44)));
                                t608 = 0x4;
                                u615 = (*(float *)((((int)stk + 32) + t608)));
                                u616 = (float)t609;
                                if (u616 > u615) {
                                    t608 = 0x4;
                                    u616 = (*(float *)((((int)stk + 32) + t608)));
                                    *(unsigned int *)(((int)stk + 44)) = (int)u616;
                                }
                            } else {
                                if ((*(int *)(((int)stk + 40))) != 0) {
                                    t785 = t611;
                                    u786 = u617;
                                    u787 = u618;
                                } else {
                                    t610 = ((int)stk + 32);
                                    t610 = (t610 + 0x54);
                                    t608 = (nlSubVector3op(t610, t611, (0xFC + ((int)stk + 32))));
                                    t608 = (*(int *)(((int)stk + 40)));
                                    t611 = ((int)stk + 32);
                                    t610 = ((int)stk + 32);
                                    t611 = (t611 + 0x54);
                                    t608 = (t608 << 2);
                                    u616 = (float)(*(int *)((0x8C38B850 + t608)));
                                    u617 = u616;
                                    u617 = (u617 / u619);
                                    t610 = (t610 + 0x60);
                                    t608 = (nlScaleVector(t610, t611, u617));
                                    t610 = 0xFC;
                                    t611 = ((int)stk + 32);
                                    t611 = (t611 + 0x60);
                                    t610 = (t610 + ((int)stk + 32));
                                    t608 = (nlAddVector(t610, t611));
                                    t609 = 0x108;
                                    t608 = 0xC;
                                    t609 = (t609 + ((int)stk + 20));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(t609); }
                                    t609 = 0xC;
                                    t609 = (t609 + ((int)stk + 8));
                                    *(int *)((int)stk + 4) = (t609);
                                    t608 = (camWorldToView(*(Stk4 *)(((int)stk + 4))));
                                    t611 = ((int)stk + 20);
                                    t610 = ((int)stk + 20);
                                    t611 = (t611 + 0x10);
                                    t610 = (t610 + 0xC);
                                    t608 = (camProject(t610, t611));
                                    u615 = (*(float *)(((int)stk + 32)));
                                    u616 = (float)t613;
                                    if (u615 > u616) {
                                        t613 = (int)u615;
                                    }
                                    u615 = (*(float *)(((int)stk + 32)));
                                    u616 = (float)t614;
                                    if (u616 > u615) {
                                        t614 = (int)u615;
                                    }
                                    t608 = 0x4;
                                    u615 = (*(float *)((((int)stk + 32) + t608)));
                                    u616 = (float)t612;
                                    if (u615 > u616) {
                                        t612 = (int)u615;
                                    }
                                    t609 = (*(int *)(((int)stk + 44)));
                                    t608 = 0x4;
                                    u615 = (*(float *)((((int)stk + 32) + t608)));
                                    u616 = (float)t609;
                                    if (!(u616 > u615)) {
                                    } else {
                                        t608 = 0x4;
                                        u616 = (*(float *)((((int)stk + 32) + t608)));
                                        *(unsigned int *)(((int)stk + 44)) = (int)u616;
                                    }
                                }
                                t792 = t785;
                                u793 = u786;
                                u794 = u787;
                            }
                            t799 = t792;
                            u800 = u793;
                            u801 = u794;
                        }
                        u617 = u800;
                        u618 = u801;
                        t610 = (*(int *)(((int)stk + 40)));
                        t611 = t799;
                        t608 = 0x8C38B860;
                        t610 = (t610 << 2);
                        t610 = (*(int *)((t610 + t608)));
                        if (t610 != 0) {
                            t608 = t610;
                            if (t608 != 99) {
                                t608 = 0x3C;
                                u615 = (*(float *)((a8 + t608)));
                                u616 = (float)t610;
                                if (u616 != u615) {
                                    t608 = (*(int *)(((int)stk + 40)));
                                    t608 = (t608 << 2);
                                    *(unsigned int *)((0x8C38B850 + t608)) = ((*(int *)((0x8C38B850 + t608))) - 1);
                                }
                            } else {
                                t608 = (*(int *)(((int)stk + 40)));
                                t608 = (t608 << 2);
                                *(unsigned int *)((0x8C38B850 + t608)) = ((*(int *)((0x8C38B850 + t608))) - 1);
                            }
                        }
                    }
                    t609 = (*(int *)(((int)stk + 40)));
                    t609 = (t609 + 0x1);
                    *(unsigned int *)(((int)stk + 40)) = t609;
                    continue;
                }
                break;
            }
            t822 = t614;
            t828 = t612;
            t829 = t613;
        }
        t837 = t822;
        t843 = t828;
        t844 = t829;
    }
    if ((*(float *)(((int)stk + 196))) > 0.0f) {
        *(Stk3 *)((0x120 + ((int)stk + 32))) = vecMake(0.0f, 0.0f, (-1.0f));
    } else {
        *(Stk3 *)((0x120 + ((int)stk + 32))) = vecMake(0.0f, 0.0f, 1.0f);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x78)) = *(struct mv3 *)((0xFC + ((int)stk + 32))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x6C)) = *(struct mv3 *)((0x108 + ((int)stk + 32))); }
    nlSubVector3op((0xC0 + ((int)stk + 32)), (((int)stk + 32) + 0x6C), (0x9C + ((int)stk + 32)));
    nlSubVector3op((0xB4 + ((int)stk + 32)), (((int)stk + 32) + 0x78), (0x9C + ((int)stk + 32)));
    FUN_8c0f0860((0xC0 + ((int)stk + 32)));
    FUN_8c0f0860((0xB4 + ((int)stk + 32)));
    t857 = nlInnerProduct((0x120 + ((int)stk + 32)), (0xC0 + ((int)stk + 32)));
    *(unsigned int *)(((int)stk + 40)) = (nlArcCos(t857));
    t859 = nlInnerProduct((0x120 + ((int)stk + 32)), (0xB4 + ((int)stk + 32)));
    t860 = nlArcCos(t859);
    t861 = *(int *)(((int)stk + 40));
    t863 = (int)((unsigned int)((int)((unsigned int)t861 + (unsigned int)0x0)) + ((((int)0x0 > (int)t861)) ? 1u : 0u));
    t866 = (int)((unsigned int)((int)((unsigned int)t860 + (unsigned int)0x0)) + ((((int)0x0 > (int)t860)) ? 1u : 0u));
    *(unsigned int *)(((int)stk + 48)) = ((t863 >> 1) + (t866 >> 1));
    *(unsigned int *)(((int)stk + 40)) = ((t863 >> 1) + (t866 >> 1));
    if ((int)((t863 >> 1) + (t866 >> 1)) > (int)0x1000) {
        *(unsigned int *)(((int)stk + 40)) = 0x1000;
    }
    t870 = *(int *)0x8C1891E8;
    *(unsigned int *)(((int)stk + 64)) = (0x8C1D11B8 + ((t870 << 2) << 1));
    u871 = *(float *)(((int)stk + 196));
    t872 = *(int *)(((0x8C1D11B8 + ((t870 << 2) << 1)) + 0x4));
    t875 = 0x1;
    if (u871 > 0.0f) {
    } else {
        t873 = 0x0;
        if (0.0f > u871) {
            t873 = 0xFFFFFFFF;
        }
        t875 = t873;
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(*(int *)(((*(int *)(((int)stk + 64))) + 0x0))), 0.0f, (float)((t872 + 0xA) * t875));
    camWorldToView(*(Stk4 *)((int)stk + 4));
    camProject((((int)stk + 20) + 0x48), (((int)stk + 20) + 0x28));
    t882 = *(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11BC));
    u883 = *(float *)(((int)stk + 196));
    t886 = 0x1;
    if (u883 > 0.0f) {
    } else {
        t884 = 0x0;
        if (0.0f > u883) {
            t884 = 0xFFFFFFFF;
        }
        t886 = t884;
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, (float)((t882 + 0xA) * t886));
    camWorldToView(*(Stk4 *)((int)stk + 4));
    camProject((((int)stk + 20) + 0x44), (((int)stk + 20) + 0x24));
    t890 = *(int *)0x8C1891E8;
    *(unsigned int *)(((int)stk + 64)) = (0x8C1D11B8 + ((t890 << 2) << 1));
    u891 = *(float *)(((int)stk + 196));
    t892 = *(int *)(((0x8C1D11B8 + ((t890 << 2) << 1)) + 0x4));
    t895 = 0x1;
    if (u891 > 0.0f) {
    } else {
        t893 = 0x0;
        if (0.0f > u891) {
            t893 = 0xFFFFFFFF;
        }
        t895 = t893;
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(-(*(int *)(((*(int *)(((int)stk + 64))) + 0x0)))), 0.0f, (float)((t892 + 0xA) * t895));
    camWorldToView(*(Stk4 *)((int)stk + 4));
    camProject((((int)stk + 20) + 0x40), (((int)stk + 20) + 0x20));
    if (((-375.0f > (*(float *)(((int)stk + 60)))) && ((u902 = *(float *)(((int)stk + 56)), -375.0f > u902) && (u903 = *(float *)(((int)stk + 52)), -375.0f > u903))) || (a9 == 0)) {
        *(unsigned int *)0x8C1D1250 = 0x0;
        *(float *)0x8C38B8C0 = 9999.0f;
        *(unsigned int *)0x8C38B8C4 = 0x1000;
    }
    t911 = *(int *)0x8C1D124C;
    if ((t911 != 0) && ((u912 = *(float *)(((int)stk + 60)), !(-300.0f > u912)) || ((u913 = *(float *)(((int)stk + 56)), !(-300.0f > u913)) || (u914 = *(float *)(((int)stk + 52)), !(-300.0f > u914))))) {
        if ((int)(*(int *)(((int)stk + 40))) > (int)t911) {
            *(unsigned int *)(((int)stk + 40)) = t911;
        }
    } else {
        if (t911 == 0x1000) {
            if (0.0f > (*(float *)(((int)stk + 196)))) {
                u932 = *(float *)(((int)stk + 304));
                u933 = (-u932);
                if (!(0.0f > u932)) {
                    u933 = u932;
                }
                if (!(0.0f > (*(float *)0x8C38B8BC))) {
                    u939 = (*(float *)0x8C38B8BC);
                } else {
                    u939 = (-(*(float *)0x8C38B8BC));
                }
                if (!(u933 > u939)) {
                    *(unsigned int *)0x8C1D124C = (*(int *)(((int)stk + 40)));
                } else {
                    *(unsigned int *)0x8C1D124C = 0x1000;
                }
            } else {
                u946 = *(float *)(((int)stk + 292));
                u947 = (-u946);
                if (!(0.0f > u946)) {
                    u947 = u946;
                }
                if (!(0.0f > (*(float *)0x8C38B8BC))) {
                    u953 = (*(float *)0x8C38B8BC);
                } else {
                    u953 = (-(*(float *)0x8C38B8BC));
                }
                if (u947 > u953) {
                    *(unsigned int *)0x8C1D124C = 0x1000;
                } else {
                    *(unsigned int *)0x8C1D124C = (*(int *)(((int)stk + 40)));
                }
            }
        } else {
            *(unsigned int *)0x8C1D124C = (*(int *)(((int)stk + 40)));
        }
    }
    t986 = *(int *)0x8C38B8C4;
    if ((int)(*(int *)(((int)stk + 40))) > (int)t986) {
        *(unsigned int *)(((int)stk + 40)) = t986;
    }
    nlPushUnitMatrix();
    if ((*(float *)(((int)stk + 196))) > 0.0f) {
        t992 = (-(*(int *)(((int)stk + 40))));
    } else {
        t992 = (*(int *)(((int)stk + 40)));
    }
    nlRotateAX(t992);
    nlCalcPoint((0x120 + ((int)stk + 32)), (0xC0 + ((int)stk + 32)));
    nlPopMatrix(0x1);
    u997 = *(float *)(((int)stk + 228));
    u998 = *(float *)(((int)stk + 192));
    u999 = (-(u998 / u997));
    if (!(0.0f > (u998 / u997))) {
        u999 = (u998 / u997);
    }
    nlScaleVector((0x84 + ((int)stk + 32)), (0xC0 + ((int)stk + 32)), u999);
    nlAddVector3op((0xF0 + ((int)stk + 32)), (0x84 + ((int)stk + 32)), (0x9C + ((int)stk + 32)));
    *(float *)(((int)stk + 272)) = (((*(float *)(((int)stk + 284))) + (*(float *)(((int)stk + 296)))) / (1.0f + 1.0f));
    t1005 = nlLength((0xF0 + ((int)stk + 32)), 0x8C38B8C8);
    if (t1005 > 0.699999988f) {
        if ((a9 != 0) && (t1011 = *(int *)0x8C287B2C, t1011 != 0)) {
            if (((*(float *)0x8C287C3C) > 0.0f) && (t1017 = *(int *)0x8C287B48, t1017 == -1)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 68)))) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
            } else {
                nlSubVector3op((0xD8 + ((int)stk + 32)), (0xF0 + ((int)stk + 32)), 0x8C38B8C8);
                FUN_8c0f0860((0xD8 + ((int)stk + 32)));
                nlScaleVector((0xD8 + ((int)stk + 32)), (0xD8 + ((int)stk + 32)), 0.699999988f);
                nlAddVector3op((0xE4 + ((int)stk + 32)), 0x8C38B8C8, (0xD8 + ((int)stk + 32)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 68)))) = *(struct mv3 *)((0xE4 + ((int)stk + 32))); }
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 68)))) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 68)))) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
    }
    if (a9 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B8B0) = *(struct mv3 *)((*(int *)(((int)stk + 68)))); }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C38B8C8) = *(struct mv3 *)((*(int *)(((int)stk + 68)))); }
    t1046 = (-t843);
    if ((int)t843 >= 0) {
        t1046 = t843;
    }
    if ((int)(*(int *)(((int)stk + 44))) >= 0) {
        t1051 = (*(int *)(((int)stk + 44)));
    } else {
        t1051 = (-(*(int *)(((int)stk + 44))));
    }
    if ((int)t1046 > (int)t1051) {
        t1061 = t843;
    } else {
        if ((int)(*(int *)(((int)stk + 44))) >= 0) {
            t1057 = (*(int *)(((int)stk + 44)));
        } else {
            t1057 = (-(*(int *)(((int)stk + 44))));
        }
        t1061 = t1057;
    }
    t1063 = (-t844);
    if ((int)t844 >= 0) {
        t1063 = t844;
    }
    t1065 = (-t837);
    if ((int)t837 >= 0) {
        t1065 = t837;
    }
    if ((int)t1063 > (int)t1065) {
        t1070 = t844;
    } else {
        t1067 = (-t837);
        if ((int)t837 >= 0) {
            t1067 = t837;
        }
        t1070 = t1067;
    }
    u1072 = (((float)t1061 * u999) / 240.0f);
    if ((((float)t1070 * u999) / 240.0f) > (((float)t1061 * u999) / 240.0f)) {
        u1072 = (((float)t1070 * u999) / 240.0f);
    }
    u1076 = ((u999 - u1072) / 100.0f);
    if (u1072 > u999) {
        u1076 = ((u999 - u1072) / 10.0f);
    }
    u1078 = *(float *)0x8C1D1248;
    if ((u1078 != 0.0f) && ((u1079 = *(float *)(((int)stk + 60)), !(-300.0f > u1079)) || ((u1080 = *(float *)(((int)stk + 56)), !(-300.0f > u1080)) || (u1081 = *(float *)(((int)stk + 52)), !(-300.0f > u1081))))) {
        if (a9 != 0) {
            *(unsigned int *)0x8C1D1250 = 0x1;
            *(float *)0x8C38B8C0 = (*(float *)(((int)stk + 196)));
            *(unsigned int *)0x8C38B8C4 = (*(int *)(((int)stk + 40)));
        }
        u1102 = u1078;
    } else {
        u1090 = (u999 - u1076);
        if ((u999 - u1076) > 400.0f) {
            u1090 = 400.0f;
        }
        u1092 = u1090;
        if (250.0f > u1090) {
            u1092 = 250.0f;
        }
        u1095 = u1092;
        if ((*(int *)0x8C1D1250) != 0) {
            u1095 = u1078;
        }
        *(float *)0x8C1D1248 = u1095;
        u1102 = u1095;
    }
    nlScaleVector((0x90 + ((int)stk + 32)), (0xC0 + ((int)stk + 32)), (-u1102));
    if (a9 != 0) {
        nlAddVector3op((0x9C + ((int)stk + 32)), (0xF0 + ((int)stk + 32)), (0x90 + ((int)stk + 32)));
        *(float *)(((int)stk + 188)) = 0.0f;
        if (((int)(*(int *)(((int)stk + 48))) > (int)0x1000) && ((u1110 = *(float *)(((int)stk + 60)), -300.0f > u1110) && ((u1111 = *(float *)(((int)stk + 56)), -300.0f > u1111) && (u1112 = *(float *)(((int)stk + 52)), -300.0f > u1112)))) {
            if ((*(float *)(((int)stk + 196))) > 0.0f) {
                u1118 = *(float *)(((int)stk + 292));
                u1119 = *(float *)0x8C38B8BC;
                u1121 = (u1118 - u1119);
                if (0.0f > (u1118 - u1119)) {
                    u1121 = 2.5f;
                }
                *(float *)(((int)stk + 196)) = ((*(float *)(((int)stk + 196))) + u1121);
                if (!((*(float *)(((int)stk + 196))) > (*(float *)0x8C38B8C0))) {
                } else {
                    *(float *)(((int)stk + 196)) = (*(float *)0x8C38B8C0);
                }
            } else {
                u1130 = *(float *)(((int)stk + 304));
                u1131 = *(float *)0x8C38B8BC;
                u1133 = (u1130 - u1131);
                if ((u1130 - u1131) > 0.0f) {
                    u1133 = -2.5f;
                }
                u1135 = *(float *)(((int)stk + 196));
                *(float *)(((int)stk + 196)) = (u1135 + u1133);
                u1136 = (-(u1135 + u1133));
                if (!(0.0f > (u1135 + u1133))) {
                    u1136 = (u1135 + u1133);
                }
                if (u1136 > (*(float *)0x8C38B8C0)) {
                    *(float *)(((int)stk + 196)) = (*(float *)0x8C38B8C0);
                }
            }
        }
    }
    if (a9 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xFC + ((int)stk + 20))); }
        t1163 = lightVec3EqualArgs(*(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20)));
        if (t1163 == 0) {
            if ((-300.0f > (*(float *)(((int)stk + 60)))) && ((u1172 = *(float *)(((int)stk + 56)), -300.0f > u1172) && (u1173 = *(float *)(((int)stk + 52)), -300.0f > u1173))) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1254) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1260) = *(struct mv3 *)((0x9C + ((int)stk + 32))); }
            } else {
                t1183 = 0x1;
                if ((*(float *)(((int)stk + 196))) > 0.0f) {
                } else {
                    t1181 = 0x0;
                    if (0.0f > (*(float *)(((int)stk + 196)))) {
                        t1181 = 0xFFFFFFFF;
                    }
                    t1183 = t1181;
                }
                t1192 = 0x1;
                if (((*(float *)(((int)stk + 280))) - (*(float *)0x8C1D125C)) > 0.0f) {
                } else {
                    t1190 = 0x0;
                    if (0.0f > ((*(float *)(((int)stk + 280))) - (*(float *)0x8C1D125C))) {
                        t1190 = 0xFFFFFFFF;
                    }
                    t1192 = t1190;
                }
                if (t1183 != t1192) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1254) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1260) = *(struct mv3 *)((0x9C + ((int)stk + 32))); }
                } else {
                    u1196 = *(float *)(((int)stk + 272));
                    u1197 = (-u1196);
                    if (!(0.0f > u1196)) {
                        u1197 = u1196;
                    }
                    u1199 = *(float *)0x8C1D1254;
                    u1200 = (-u1199);
                    if (!(0.0f > u1199)) {
                        u1200 = u1199;
                    }
                    if (!(u1197 > u1200)) {
                        if (!(0.0f > (*(float *)(((int)stk + 280))))) {
                            u1206 = (*(float *)(((int)stk + 280)));
                        } else {
                            u1206 = (-(*(float *)(((int)stk + 280))));
                        }
                        if (!(0.0f > (*(float *)0x8C1D125C))) {
                            u1212 = (*(float *)0x8C1D125C);
                        } else {
                            u1212 = (-(*(float *)0x8C1D125C));
                        }
                        if (u1206 > u1212) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xF0 + ((int)stk + 32))) = *(struct mv3 *)(0x8C1D1254); }
                            if (((*(float *)0x8C1D1260) != 0.0f) && ((u1215 = *(float *)0x8C1D1264, u1215 != 0.0f) && (u1216 = *(float *)0x8C1D1268, u1216 != 0.0f))) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + ((int)stk + 32))) = *(struct mv3 *)(0x8C1D1260); }
                            }
                        }
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xF0 + ((int)stk + 32))) = *(struct mv3 *)(0x8C1D1254); }
                        if (((*(float *)0x8C1D1260) != 0.0f) && ((u1226 = *(float *)0x8C1D1264, u1226 != 0.0f) && (u1227 = *(float *)0x8C1D1268, u1227 != 0.0f))) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + ((int)stk + 32))) = *(struct mv3 *)(0x8C1D1260); }
                        }
                    }
                }
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1254) = *(struct mv3 *)((0xF0 + ((int)stk + 32))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C1D1260) = *(struct mv3 *)((0x9C + ((int)stk + 32))); }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 80)))) = *(struct mv3 *)((0x9C + ((int)stk + 32))); }
    *(float *)((a8 + 0x10)) = (*(float *)(((int)stk + 100)));
    u1271 = *(float *)(((int)stk + 196));
    t1274 = 0x1;
    if (u1271 > 0.0f) {
    } else {
        t1272 = 0x0;
        if (0.0f > u1271) {
            t1272 = 0xFFFFFFFF;
        }
        t1274 = t1272;
    }
    if ((int)t1274 < 0) {
        *(float *)0x8C38B8BC = (*(float *)(((int)stk + 304)));
        t1278 = 0x110;
    } else {
        *(float *)0x8C38B8BC = (*(float *)(((int)stk + 292)));
        t1278 = 0x104;
    }
    return t1278;
}

void effFootDust(int a4)
{
    int t6;
    int t11;
    int t12;
    int t13;
    int t15;
    float t17;
    int t20;
    int t35;
    int t72;
    int stk[19];
    int R1048;

    R1048 = *(int *)((int)stk + 48);

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        t6 = *(int *)0x8C1891E8;
        if ((t6 == 0) || (t6 == 9)) {
            t11 = *(int *)((a4 + 0xB5C));
            t12 = *(int *)0x8C20D198;
            t13 = ((~(((~(t12 + t11)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t12 + t11) >= 0) {
                t13 = ((t12 + t11) & 0x1);
            }
            if (t13 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xAE8 + a4)); }
                t15 = *(int *)((a4 + 0xB5C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((((t15 << 1) + t15) << 2) + 0x8C301AF4)); }
                *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
                vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
                t17 = vecLength(*(Stk4 *)((int)stk + 32));
                if (t17 > 0.449999988f) {
                    if (0.400000006f > (*(float *)((a4 + 0xABC)))) {
                        t20 = set_event(0x30, 0x8C082F60);
                        *(unsigned int *)((((int)stk + 44) + 0x0)) = t20;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t20 + 0x14)) = *(struct mv3 *)((0xAB8 + a4)); }
                        *(float *)(((*(int *)((((int)stk + 44) + 0x0))) + 0x20)) = 1.0f;
                        *(float *)(((*(int *)((((int)stk + 44) + 0x0))) + 0x24)) = 0.0599999987f;
                        *(unsigned int *)(((*(int *)((((int)stk + 44) + 0x0))) + 0x28)) = 0x1E;
                        *(unsigned int *)(((*(int *)((((int)stk + 44) + 0x0))) + 0x2C)) = 0x0;
                        *(unsigned int *)0x8C181610 = ((*(int *)0x8C181610) + 0x1);
                    }
                    if (0.400000006f > (*(float *)((a4 + 0xAC8)))) {
                        t35 = set_event(0x30, 0x8C082F60);
                        R1048 = t35;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t35 + 0x14)) = *(struct mv3 *)((0xAC4 + a4)); }
                        *(float *)(((R1048) + 0x20)) = 1.0f;
                        *(float *)(((R1048) + 0x24)) = 0.0599999987f;
                        *(unsigned int *)(((R1048) + 0x28)) = 0x1E;
                        *(unsigned int *)(((R1048) + 0x2C)) = 0x0;
                        *(unsigned int *)0x8C181610 = ((*(int *)0x8C181610) + 0x1);
                    }
                }
            }
            t72 = *(int *)((a4 + 0xB5C));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t72 << 1) + t72) << 2) + 0x8C301AF4)) = *(struct mv3 *)((0xAE8 + a4)); }
        }
    }
}
