/* Straight-line functions with calls and guards (batch gen_xk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int FUN_8c06476a(int);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
float cpuLineXAtZ(Stk3, Stk3, float);
float cpuVecCos(Stk4);
int nlRand(void);
float nlRandom(void);
int serveGetReceiver(void);
Stk3 vecMake(float, float, float);
int FUN_8c0633c6(int a4);
int FUN_8c07b7aa(int a4, int a5);
int FUN_8c06c482(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);

int FUN_8c0633c6(int a4)
{
    int stk[10];
    register int t19;
    register int t20;
    register int t58;
    register int t67;
    register int t61;
    register int t64;
    register int t83;
    register int t80;
    register int t87;
    register int t96;
    register int t90;
    register int t93;
    register int t112;
    register int t109;
    register int t148;
    register int t145;
    register int t160;
    register int t157;
    register float u238;
    register float u239;
    register int t240;
    register int t243;
    register int t246;
    register int t284;
    register int t281;
    register int t287;
    register int t297;
    register int t294;
    register float u318;
    register int t328;
    register int t325;
    register int t331;
    register int t341;
    register int t338;
    register int t392;
    register int t389;
    register int t394;
    register int t404;
    register int t401;
    register int t423;
    register int t420;
    register int t426;
    register int t435;
    register int t429;
    register int t432;
    register int t475;
    register int t472;
    register int t478;
    register int t488;
    register int t485;
    register int t506;
    register int t503;
    register int t509;
    register int t519;
    register int t516;
    register int t553;
    register int t556;
    register int t559;
    register int t569;
    register int t572;
    register int t575;
    register int t585;
    register int t588;
    register int t591;
    register float u604;
    register float u605;
    register int t629;
    register int t626;
    register int t632;
    register int t642;
    register int t639;
    register float u663;
    register int t673;
    register int t670;
    register int t676;
    register int t686;
    register int t683;
    register int t735;
    register int t732;
    register int t737;
    register int t747;
    register int t744;
    register int t766;
    register int t763;
    register int t769;
    register int t778;
    register int t772;
    register int t775;
    register int t806;
    register int t803;
    register int t810;
    register int t819;
    register int t813;
    register int t816;
    register int t847;
    register int t850;
    register int t853;
    register int t863;
    register int t866;
    register int t869;
    register int t879;
    register int t882;
    register int t885;
    register int t927;
    register int t924;
    register int t939;
    register int t936;
    register int t943;
    register int t946;
    register int t949;
    register int t978;
    register int t981;
    register int t984;
    register float u1034;
    register float u1035;
    register int t1047;
    register int t1044;
    register float u1056;
    register float u1057;
    register int t1081;
    register int t1078;
    register int t1084;
    register int t1094;
    register int t1091;
    register float u1115;
    register int t1125;
    register int t1122;
    register int t1128;
    register int t1138;
    register int t1135;
    register int t1187;
    register int t1184;
    register int t1189;
    register int t1199;
    register int t1196;
    register int t1218;
    register int t1215;
    register int t1221;
    register int t1230;
    register int t1224;
    register int t1227;
    register int t1270;
    register int t1267;
    register int t1273;
    register int t1283;
    register int t1280;
    register float u1304;
    register int t1314;
    register int t1311;
    register int t1317;
    register int t1327;
    register int t1324;
    register int t1380;
    register int t1377;
    register int t1384;
    register int t1393;
    register int t1387;
    register int t1390;
    register int t1421;
    register int t1424;
    register int t1427;
    register int t1437;
    register int t1440;
    register int t1443;
    register int t1453;
    register int t1456;
    register int t1459;
    register int t24;
    register int t25;
    register int t37;
    register int t38;
    register float u56;
    register float u179;
    register float u191;
    register float u203;
    register float u213;
    register float u224;
    register float u234;
    register float u254;
    register float u269;
    register float u315;
    register float u355;
    register float u460;
    register int t545;
    register int t546;
    register float u567;
    register float u583;
    register float u598;
    register float u614;
    register float u660;
    register float u700;
    register int t829;
    register int t830;
    register int t839;
    register int t840;
    register float u861;
    register float u877;
    register float u892;
    register float u912;
    register float u957;
    register float u976;
    register float u1002;
    register float u1066;
    register float u1112;
    register float u1152;
    register float u1255;
    register float u1301;
    register float u1341;
    register int t1403;
    register int t1404;
    register int t1413;
    register int t1414;
    register float u1435;
    register float u1451;
    register float u1466;
    float R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;

    R1004 = *(float *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    R1024 = a4;
    R1020 = (((((*(int *)((0xB5C + a4))) + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    R1016 = (((*(int *)(((R1024) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    R1012 = (0x8C2FC69C + ((*(int *)(((R1020) + 0xB5C))) * 0x160));
    R1008 = 0x8C291F24;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t19 = *(int *)(((R1024) + 0xB5C));
        t20 = serveGetReceiver();
        if (t19 != t20) {
            return ((int (*)(void))(0x8C065E30))();
        }
        *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
        return ((int (*)(void))(0x8C065E30))();
    }
    if ((((*(int *)(((R1020) + 0xB60))) & 0x4000) != 0) && (t24 = R1012, t25 = *(short *)((t24 + 0x118)), (int)t25 < (int)0x1E)) {
        *(unsigned char *)(((R1016) + 0x12E)) = 0x2;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (((*(int *)((0xC5C + (R1020)))) == 12) && (t37 = R1020, t38 = *(int *)((t37 + 0xB60)), (t38 & 0x100) != 0)) {
        *(unsigned char *)(((R1016) + 0x12E)) = 0x2;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((R1024) + 0xAF0))) - (*(float *)(((R1020) + 0xAF0)))))) {
        u56 = ((*(float *)(((R1024) + 0xAF0))) - (*(float *)(((R1020) + 0xAF0))));
    } else {
        u56 = ((-(*(float *)(((R1024) + 0xAF0)))) + (*(float *)(((R1020) + 0xAF0))));
    }
    if (!(20.0f > u56)) {
        return FUN_8c06476a(a4);
    }
    t58 = R1020;
    t67 = 0x1;
    if (((*(float *)((t58 + 0xB9C))) - (*(float *)((t58 + 0xAE8)))) > 0.0f) {
    } else {
        t61 = R1020;
        t64 = 0x0;
        if (0.0f > ((*(float *)((t61 + 0xB9C))) - (*(float *)((t61 + 0xAE8))))) {
            t64 = 0xFFFFFFFF;
        }
        t67 = t64;
    }
    t83 = 0x1;
    if (((*(float *)(((R1020) + 0xAE8))) - (*(float *)(((R1024) + 0xAE8)))) > 0.0f) {
    } else {
        t80 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xAE8 + (R1024)) + 0x0))))) {
            t80 = 0xFFFFFFFF;
        }
        t83 = t80;
    }
    if (t67 == t83) {
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    t87 = R1024;
    t96 = 0x1;
    if (((*(float *)((t87 + 0xB9C))) - (*(float *)((t87 + 0xAE8)))) > 0.0f) {
    } else {
        t90 = R1024;
        t93 = 0x0;
        if (0.0f > ((*(float *)((t90 + 0xB9C))) - (*(float *)((t90 + 0xAE8))))) {
            t93 = 0xFFFFFFFF;
        }
        t96 = t93;
    }
    t112 = 0x1;
    if (((*(float *)(((R1024) + 0xAE8))) - (*(float *)(((R1020) + 0xAE8)))) > 0.0f) {
    } else {
        t109 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (R1024)))) - (*(float *)(((0xAE8 + (R1020)) + 0x0))))) {
            t109 = 0xFFFFFFFF;
        }
        t112 = t109;
    }
    if (t96 == t112) {
        *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(27.5f > (*(float *)(((R1024) + 0xBA0))))) {
        return ((int (*)(int))(0x8C0646EC))(a4);
    }
    if (!(27.5f > (*(float *)(((R1020) + 0xBA0))))) {
        return ((int (*)(int))(0x8C0646EC))(a4);
    }
    t148 = 0x1;
    if ((*(float *)(((R1024) + 0xAE8))) > 0.0f) {
    } else {
        t145 = 0x0;
        if (0.0f > (*(float *)(((R1024) + 0xAE8)))) {
            t145 = 0xFFFFFFFF;
        }
        t148 = t145;
    }
    t160 = 0x1;
    if ((*(float *)(((R1020) + 0xAE8))) > 0.0f) {
    } else {
        t157 = 0x0;
        if (0.0f > (*(float *)((0xAE8 + (R1020))))) {
            t157 = 0xFFFFFFFF;
        }
        t160 = t157;
    }
    if (t148 == t160) {
        if (!(0.0f > ((*(float *)(((R1024) + 0xAE8))) - (*(float *)(((R1020) + 0xAE8)))))) {
            u179 = ((*(float *)(((R1024) + 0xAE8))) - (*(float *)(((R1020) + 0xAE8))));
        } else {
            u179 = ((-(*(float *)(((R1024) + 0xAE8)))) + (*(float *)(((R1020) + 0xAE8))));
        }
        if (!(u179 > 20.0f)) {
            if (!(0.0f > (*(float *)(((R1024) + 0xB9C))))) {
                u191 = (*(float *)(((R1024) + 0xB9C)));
            } else {
                u191 = (-(*(float *)(((R1024) + 0xB9C))));
            }
            if (!(u191 > 10.0f)) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            if (!(0.0f > (*(float *)(((R1024) + 0xAE8))))) {
                u203 = (*(float *)(((R1024) + 0xAE8)));
            } else {
                u203 = (-(*(float *)(((R1024) + 0xAE8))));
            }
            if (!(0.0f > (*(float *)(((R1020) + 0xAE8))))) {
                u213 = (*(float *)(((R1020) + 0xAE8)));
            } else {
                u213 = (-(*(float *)(((R1020) + 0xAE8))));
            }
            if (u213 > u203) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        if (!(0.0f > (*(float *)(((R1024) + 0xAE8))))) {
            u224 = (*(float *)(((R1024) + 0xAE8)));
        } else {
            u224 = (-(*(float *)(((R1024) + 0xAE8))));
        }
        if (!(0.0f > (*(float *)(((R1020) + 0xAE8))))) {
            u234 = (*(float *)(((R1020) + 0xAE8)));
        } else {
            u234 = (-(*(float *)(((R1020) + 0xAE8))));
        }
        if (!(u224 > u234)) {
            u238 = *(float *)((((*(int *)(((R1024) + 0xC58))) * 0x6C) + 0x8C102450));
            u239 = 0.200000003f;
            u239 = u239 + 0.0500000007f * (((u238 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
            R1004 = u239;
            t240 = R1024;
            if (!(0.0f > ((*(float *)((t240 + 0xAE8))) - (*(float *)((t240 + 0xB9C)))))) {
                t243 = R1024;
                u254 = ((*(float *)((t243 + 0xAE8))) - (*(float *)((t243 + 0xB9C))));
            } else {
                t246 = R1024;
                u254 = ((-(*(float *)((t246 + 0xAE8)))) + (*(float *)((t246 + 0xB9C))));
            }
            if (12.5f > u254) {
                R1004 = ((R1004) + 0.25f);
            }
            if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                u269 = (*(float *)(((R1012) + 0x28)));
            } else {
                u269 = (-(*(float *)(((R1012) + 0x28))));
            }
            if (!(u269 > 0.25f)) {
            } else {
                t284 = 0x1;
                if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
                } else {
                    t281 = 0x0;
                    if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                        t281 = 0xFFFFFFFF;
                    }
                    t284 = t281;
                }
                t287 = R1020;
                t297 = 0x1;
                if (((*(float *)((t287 + 0xAE8))) - (*(float *)((t287 + 0xB9C)))) > 0.0f) {
                } else {
                    t294 = 0x0;
                    if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
                        t294 = 0xFFFFFFFF;
                    }
                    t297 = t294;
                }
                if (t284 == t297) {
                    if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                        u315 = (*(float *)(((R1012) + 0x28)));
                    } else {
                        u315 = (-(*(float *)(((R1012) + 0x28))));
                    }
                    u318 = (R1004);
                    u318 = u318 + 0.0250000004f * u315;
                    R1004 = u318;
                } else {
                    t328 = 0x1;
                    if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
                    } else {
                        t325 = 0x0;
                        if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                            t325 = 0xFFFFFFFF;
                        }
                        t328 = t325;
                    }
                    t331 = R1020;
                    t341 = 0x1;
                    if (((*(float *)((t331 + 0xB9C))) - (*(float *)((t331 + 0xAE8)))) > 0.0f) {
                    } else {
                        t338 = 0x0;
                        if (0.0f > ((*(float *)((0xB9C + (R1020)))) - (*(float *)(((0xAE8 + (R1020)) + 0x0))))) {
                            t338 = 0xFFFFFFFF;
                        }
                        t341 = t338;
                    }
                    if (t328 == t341) {
                        if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                            u355 = (*(float *)(((R1012) + 0x28)));
                        } else {
                            u355 = (-(*(float *)(((R1012) + 0x28))));
                        }
                        R1004 = ((R1004) - (u355 * 0.0250000004f));
                    }
                }
            }
            t392 = 0x1;
            if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
            } else {
                t389 = 0x0;
                if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
                    t389 = 0xFFFFFFFF;
                }
                t392 = t389;
            }
            t394 = R1020;
            t404 = 0x1;
            if (((*(float *)((t394 + 0xAE8))) - (*(float *)((t394 + 0xB9C)))) > 0.0f) {
            } else {
                t401 = 0x0;
                if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
                    t401 = 0xFFFFFFFF;
                }
                t404 = t401;
            }
            if (t392 == t404) {
                R1004 = ((R1004) + 0.100000001f);
            } else {
                t423 = 0x1;
                if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
                } else {
                    t420 = 0x0;
                    if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
                        t420 = 0xFFFFFFFF;
                    }
                    t423 = t420;
                }
                t426 = R1020;
                t435 = 0x1;
                if (((*(float *)((t426 + 0xB9C))) - (*(float *)((t426 + 0xAE8)))) > 0.0f) {
                } else {
                    t429 = R1020;
                    t432 = 0x0;
                    if (0.0f > ((*(float *)((t429 + 0xB9C))) - (*(float *)((t429 + 0xAE8))))) {
                        t432 = 0xFFFFFFFF;
                    }
                    t435 = t432;
                }
                if (t423 == t435) {
                    R1004 = ((R1004) - 0.100000001f);
                }
            }
            if (!(0.0f > (*(float *)(((R1016) + 0x28))))) {
                u460 = (*(float *)(((R1016) + 0x28)));
            } else {
                u460 = (-(*(float *)(((R1016) + 0x28))));
            }
            if (u460 > 0.25f) {
                t475 = 0x1;
                if ((*(float *)(((R1016) + 0x28))) > 0.0f) {
                } else {
                    t472 = 0x0;
                    if (0.0f > (*(float *)(((R1016) + 0x28)))) {
                        t472 = 0xFFFFFFFF;
                    }
                    t475 = t472;
                }
                t478 = R1024;
                t488 = 0x1;
                if (((*(float *)((t478 + 0xAE8))) - (*(float *)((t478 + 0xB9C)))) > 0.0f) {
                } else {
                    t485 = 0x0;
                    if (0.0f > ((*(float *)((0xAE8 + (R1024)))) - (*(float *)(((0xB9C + (R1024)) + 0x0))))) {
                        t485 = 0xFFFFFFFF;
                    }
                    t488 = t485;
                }
                if (t475 == t488) {
                    R1004 = ((R1004) - 0.0500000007f);
                } else {
                    t506 = 0x1;
                    if ((*(float *)(((R1016) + 0x28))) > 0.0f) {
                    } else {
                        t503 = 0x0;
                        if (0.0f > (*(float *)(((R1016) + 0x28)))) {
                            t503 = 0xFFFFFFFF;
                        }
                        t506 = t503;
                    }
                    t509 = R1024;
                    t519 = 0x1;
                    if (((*(float *)((t509 + 0xB9C))) - (*(float *)((t509 + 0xAE8)))) > 0.0f) {
                    } else {
                        t516 = 0x0;
                        if (0.0f > ((*(float *)((0xB9C + (R1024)))) - (*(float *)(((0xAE8 + (R1024)) + 0x0))))) {
                            t516 = 0xFFFFFFFF;
                        }
                        t519 = t516;
                    }
                    if (t506 == t519) {
                        R1004 = ((R1004) + 0.0500000007f);
                    }
                }
            }
            if ((((*(int *)(((R1020) + 0xB60))) & 0x100) == 0) && (t545 = R1020, t546 = *(int *)((t545 + 0xB60)), (t546 & 0x4000) == 0)) {
            } else {
                R1004 = ((R1004) + 0.150000006f);
            }
            t553 = R1024;
            if (!(0.0f > ((*(float *)((t553 + 0xAE8))) - (*(float *)((t553 + 0xB9C)))))) {
                t556 = R1024;
                u567 = ((*(float *)((t556 + 0xAE8))) - (*(float *)((t556 + 0xB9C))));
            } else {
                t559 = R1024;
                u567 = ((-(*(float *)((t559 + 0xAE8)))) + (*(float *)((t559 + 0xB9C))));
            }
            t569 = R1024;
            if (!(0.0f > ((*(float *)((t569 + 0xAE8))) - (*(float *)((t569 + 0xB9C)))))) {
                t572 = R1024;
                u583 = ((*(float *)((t572 + 0xAE8))) - (*(float *)((t572 + 0xB9C))));
            } else {
                t575 = R1024;
                u583 = ((-(*(float *)((t575 + 0xAE8)))) + (*(float *)((t575 + 0xB9C))));
            }
            t585 = R1020;
            if (!(0.0f > ((*(float *)((t585 + 0xAE8))) - (*(float *)((t585 + 0xB9C)))))) {
                t588 = R1020;
                u598 = ((*(float *)((t588 + 0xAE8))) - (*(float *)((t588 + 0xB9C))));
            } else {
                t591 = R1020;
                u598 = ((-(*(float *)((t591 + 0xAE8)))) + (*(float *)((t591 + 0xB9C))));
            }
            if (!((R1004) > (u567 / (u583 + u598)))) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        u604 = *(float *)((((*(int *)(((R1024) + 0xC58))) * 0x6C) + 0x8C102450));
        u605 = 0.699999988f;
        u605 = u605 + 0.0500000007f * (((u604 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
        R1004 = u605;
        if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
            u614 = (*(float *)(((R1012) + 0x28)));
        } else {
            u614 = (-(*(float *)(((R1012) + 0x28))));
        }
        if (!(u614 > 0.25f)) {
        } else {
            t629 = 0x1;
            if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
            } else {
                t626 = 0x0;
                if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                    t626 = 0xFFFFFFFF;
                }
                t629 = t626;
            }
            t632 = R1020;
            t642 = 0x1;
            if (((*(float *)((t632 + 0xAE8))) - (*(float *)((t632 + 0xB9C)))) > 0.0f) {
            } else {
                t639 = 0x0;
                if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
                    t639 = 0xFFFFFFFF;
                }
                t642 = t639;
            }
            if (t629 == t642) {
                if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                    u660 = (*(float *)(((R1012) + 0x28)));
                } else {
                    u660 = (-(*(float *)(((R1012) + 0x28))));
                }
                u663 = (R1004);
                u663 = u663 + 0.0500000007f * u660;
                R1004 = u663;
            } else {
                t673 = 0x1;
                if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
                } else {
                    t670 = 0x0;
                    if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                        t670 = 0xFFFFFFFF;
                    }
                    t673 = t670;
                }
                t676 = R1020;
                t686 = 0x1;
                if (((*(float *)((t676 + 0xB9C))) - (*(float *)((t676 + 0xAE8)))) > 0.0f) {
                } else {
                    t683 = 0x0;
                    if (0.0f > ((*(float *)((0xB9C + (R1020)))) - (*(float *)(((0xAE8 + (R1020)) + 0x0))))) {
                        t683 = 0xFFFFFFFF;
                    }
                    t686 = t683;
                }
                if (t673 == t686) {
                    if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                        u700 = (*(float *)(((R1012) + 0x28)));
                    } else {
                        u700 = (-(*(float *)(((R1012) + 0x28))));
                    }
                    R1004 = ((R1004) - (u700 * 0.0250000004f));
                }
            }
        }
        t735 = 0x1;
        if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
        } else {
            t732 = 0x0;
            if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
                t732 = 0xFFFFFFFF;
            }
            t735 = t732;
        }
        t737 = R1020;
        t747 = 0x1;
        if (((*(float *)((t737 + 0xAE8))) - (*(float *)((t737 + 0xB9C)))) > 0.0f) {
        } else {
            t744 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
                t744 = 0xFFFFFFFF;
            }
            t747 = t744;
        }
        if (t735 == t747) {
            R1004 = ((R1004) + 0.200000003f);
        } else {
            t766 = 0x1;
            if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
            } else {
                t763 = 0x0;
                if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
                    t763 = 0xFFFFFFFF;
                }
                t766 = t763;
            }
            t769 = R1020;
            t778 = 0x1;
            if (((*(float *)((t769 + 0xB9C))) - (*(float *)((t769 + 0xAE8)))) > 0.0f) {
            } else {
                t772 = R1020;
                t775 = 0x0;
                if (0.0f > ((*(float *)((t772 + 0xB9C))) - (*(float *)((t772 + 0xAE8))))) {
                    t775 = 0xFFFFFFFF;
                }
                t778 = t775;
            }
            if (t766 == t778) {
                R1004 = ((R1004) - 0.100000001f);
            }
        }
        t806 = 0x1;
        if (((*(float *)(((R1008) + 0x18))) - (*(float *)(((R1024) + 0xAE8)))) > 0.0f) {
        } else {
            t803 = 0x0;
            if (0.0f > ((*(float *)(((R1008) + 0x18))) - (*(float *)(((R1024) + 0xAE8))))) {
                t803 = 0xFFFFFFFF;
            }
            t806 = t803;
        }
        t810 = R1024;
        t819 = 0x1;
        if (((*(float *)((t810 + 0xAE8))) - (*(float *)((t810 + 0xB9C)))) > 0.0f) {
        } else {
            t813 = R1024;
            t816 = 0x0;
            if (0.0f > ((*(float *)((t813 + 0xAE8))) - (*(float *)((t813 + 0xB9C))))) {
                t816 = 0xFFFFFFFF;
            }
            t819 = t816;
        }
        if (t806 == t819) {
            R1004 = ((R1004) + 0.0250000004f);
        }
        if ((((*(int *)(((R1020) + 0xB60))) & 0x100) == 0) && (t829 = R1020, t830 = *(int *)((t829 + 0xB60)), (t830 & 0x4000) == 0)) {
        } else {
            R1004 = ((R1004) + 0.0500000007f);
        }
        if ((((*(int *)(((R1024) + 0xB60))) & 0x100) == 0) && (t839 = R1024, t840 = *(int *)((t839 + 0xB60)), (t840 & 0x4000) == 0)) {
        } else {
            R1004 = ((R1004) - 0.0250000004f);
        }
        t847 = R1024;
        if (!(0.0f > ((*(float *)((t847 + 0xAE8))) - (*(float *)((t847 + 0xB9C)))))) {
            t850 = R1024;
            u861 = ((*(float *)((t850 + 0xAE8))) - (*(float *)((t850 + 0xB9C))));
        } else {
            t853 = R1024;
            u861 = ((-(*(float *)((t853 + 0xAE8)))) + (*(float *)((t853 + 0xB9C))));
        }
        t863 = R1024;
        if (!(0.0f > ((*(float *)((t863 + 0xAE8))) - (*(float *)((t863 + 0xB9C)))))) {
            t866 = R1024;
            u877 = ((*(float *)((t866 + 0xAE8))) - (*(float *)((t866 + 0xB9C))));
        } else {
            t869 = R1024;
            u877 = ((-(*(float *)((t869 + 0xAE8)))) + (*(float *)((t869 + 0xB9C))));
        }
        t879 = R1020;
        if (!(0.0f > ((*(float *)((t879 + 0xAE8))) - (*(float *)((t879 + 0xB9C)))))) {
            t882 = R1020;
            u892 = ((*(float *)((t882 + 0xAE8))) - (*(float *)((t882 + 0xB9C))));
        } else {
            t885 = R1020;
            u892 = ((-(*(float *)((t885 + 0xAE8)))) + (*(float *)((t885 + 0xB9C))));
        }
        if (!((R1004) > (u861 / (u877 + u892)))) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((R1024) + 0xB9C))) + (*(float *)(((R1020) + 0xB9C)))))) {
        u912 = ((*(float *)(((R1024) + 0xB9C))) + (*(float *)(((R1020) + 0xB9C))));
    } else {
        u912 = ((-(*(float *)(((R1024) + 0xB9C)))) - (*(float *)(((R1020) + 0xB9C))));
    }
    if ((u912 / (1.0f + 1.0f)) > 16.4549999f) {
        t927 = 0x1;
        if ((*(float *)(((R1024) + 0xAE8))) > 0.0f) {
        } else {
            t924 = 0x0;
            if (0.0f > (*(float *)(((R1024) + 0xAE8)))) {
                t924 = 0xFFFFFFFF;
            }
            t927 = t924;
        }
        t939 = 0x1;
        if ((*(float *)(((R1024) + 0xB9C))) > 0.0f) {
        } else {
            t936 = 0x0;
            if (0.0f > (*(float *)((0xB9C + (R1024))))) {
                t936 = 0xFFFFFFFF;
            }
            t939 = t936;
        }
        if (t927 != t939) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    t943 = R1024;
    if (!(0.0f > ((*(float *)((t943 + 0xAE8))) - (*(float *)((t943 + 0xB9C)))))) {
        t946 = R1024;
        u957 = ((*(float *)((t946 + 0xAE8))) - (*(float *)((t946 + 0xB9C))));
    } else {
        t949 = R1024;
        u957 = ((-(*(float *)((t949 + 0xAE8)))) + (*(float *)((t949 + 0xB9C))));
    }
    if (25.0f > u957) {
        *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((R1024) + 0xAE8))) - (*(float *)(((R1020) + 0xAE8)))))) {
        u976 = ((*(float *)(((R1024) + 0xAE8))) - (*(float *)(((R1020) + 0xAE8))));
    } else {
        u976 = ((-(*(float *)(((R1024) + 0xAE8)))) + (*(float *)(((R1020) + 0xAE8))));
    }
    if (!(u976 > 20.0f)) {
        t978 = R1020;
        if (!(0.0f > ((*(float *)((t978 + 0xAE8))) - (*(float *)((t978 + 0xB9C)))))) {
            t981 = R1020;
            *(volatile float *)((t981 + 0xB9C));
            *(volatile float *)((t981 + 0xAE8));
        } else {
            t984 = R1020;
            *(volatile float *)((t984 + 0xAE8));
            *(volatile float *)((t984 + 0xB9C));
        }
        if (!(0.0f > (*(float *)(((R1024) + 0xB9C))))) {
            u1002 = (*(float *)(((R1024) + 0xB9C)));
        } else {
            u1002 = (-(*(float *)(((R1024) + 0xB9C))));
        }
        if (!(u1002 > 5.0f)) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        if ((*(float *)(((R1024) + 0xAE8))) > 0.0f) {
        } else {
            *(volatile float *)(((R1024) + 0xAE8));
        }
        if ((*(float *)(((R1024) + 0xB9C))) > 0.0f) {
        } else {
            *(volatile float *)((0xB9C + (R1024)));
        }
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    u1034 = *(float *)((((*(int *)(((R1024) + 0xC58))) * 0x6C) + 0x8C102450));
    u1035 = 0.5f;
    u1035 = u1035 + 0.100000001f * (((u1034 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
    R1004 = u1035;
    t1047 = 0x1;
    if (((*(float *)(((R1024) + 0xB9C))) + (*(float *)(((R1020) + 0xB9C)))) > 0.0f) {
    } else {
        t1044 = 0x0;
        if (0.0f > ((*(float *)(((R1024) + 0xB9C))) + (*(float *)(((R1020) + 0xB9C))))) {
            t1044 = 0xFFFFFFFF;
        }
        t1047 = t1044;
    }
    u1056 = ((float)t1047 * ((*(float *)(((R1024) + 0xB9C))) + (*(float *)(((R1020) + 0xB9C)))));
    u1057 = (R1004);
    u1057 = u1057 + 0.0299999993f * ((u1056 * 0.5f) / 16.4549999f);
    R1004 = u1057;
    if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
        u1066 = (*(float *)(((R1012) + 0x28)));
    } else {
        u1066 = (-(*(float *)(((R1012) + 0x28))));
    }
    if (!(u1066 > 0.25f)) {
    } else {
        t1081 = 0x1;
        if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
        } else {
            t1078 = 0x0;
            if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                t1078 = 0xFFFFFFFF;
            }
            t1081 = t1078;
        }
        t1084 = R1020;
        t1094 = 0x1;
        if (((*(float *)((t1084 + 0xAE8))) - (*(float *)((t1084 + 0xB9C)))) > 0.0f) {
        } else {
            t1091 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
                t1091 = 0xFFFFFFFF;
            }
            t1094 = t1091;
        }
        if (t1081 == t1094) {
            if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                u1112 = (*(float *)(((R1012) + 0x28)));
            } else {
                u1112 = (-(*(float *)(((R1012) + 0x28))));
            }
            u1115 = (R1004);
            u1115 = u1115 + 0.0299999993f * u1112;
            R1004 = u1115;
        } else {
            t1125 = 0x1;
            if ((*(float *)(((R1012) + 0x28))) > 0.0f) {
            } else {
                t1122 = 0x0;
                if (0.0f > (*(float *)(((R1012) + 0x28)))) {
                    t1122 = 0xFFFFFFFF;
                }
                t1125 = t1122;
            }
            t1128 = R1020;
            t1138 = 0x1;
            if (((*(float *)((t1128 + 0xB9C))) - (*(float *)((t1128 + 0xAE8)))) > 0.0f) {
            } else {
                t1135 = 0x0;
                if (0.0f > ((*(float *)((0xB9C + (R1020)))) - (*(float *)(((0xAE8 + (R1020)) + 0x0))))) {
                    t1135 = 0xFFFFFFFF;
                }
                t1138 = t1135;
            }
            if (t1125 == t1138) {
                if (!(0.0f > (*(float *)(((R1012) + 0x28))))) {
                    u1152 = (*(float *)(((R1012) + 0x28)));
                } else {
                    u1152 = (-(*(float *)(((R1012) + 0x28))));
                }
                R1004 = ((R1004) - (u1152 * 0.0299999993f));
            }
        }
    }
    t1187 = 0x1;
    if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
    } else {
        t1184 = 0x0;
        if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
            t1184 = 0xFFFFFFFF;
        }
        t1187 = t1184;
    }
    t1189 = R1020;
    t1199 = 0x1;
    if (((*(float *)((t1189 + 0xAE8))) - (*(float *)((t1189 + 0xB9C)))) > 0.0f) {
    } else {
        t1196 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (R1020)))) - (*(float *)(((0xB9C + (R1020)) + 0x0))))) {
            t1196 = 0xFFFFFFFF;
        }
        t1199 = t1196;
    }
    if (t1187 == t1199) {
        R1004 = ((R1004) + 0.0900000036f);
    } else {
        t1218 = 0x1;
        if ((int)(*(int *)(((R1012) + 0x158))) > 0) {
        } else {
            t1215 = 0x0;
            if ((int)(*(int *)(((R1012) + 0x158))) < 0) {
                t1215 = 0xFFFFFFFF;
            }
            t1218 = t1215;
        }
        t1221 = R1020;
        t1230 = 0x1;
        if (((*(float *)((t1221 + 0xB9C))) - (*(float *)((t1221 + 0xAE8)))) > 0.0f) {
        } else {
            t1224 = R1020;
            t1227 = 0x0;
            if (0.0f > ((*(float *)((t1224 + 0xB9C))) - (*(float *)((t1224 + 0xAE8))))) {
                t1227 = 0xFFFFFFFF;
            }
            t1230 = t1227;
        }
        if (t1218 == t1230) {
            R1004 = ((R1004) - 0.0900000036f);
        }
    }
    if (!(0.0f > (*(float *)(((R1016) + 0x28))))) {
        u1255 = (*(float *)(((R1016) + 0x28)));
    } else {
        u1255 = (-(*(float *)(((R1016) + 0x28))));
    }
    if (!(u1255 > 0.25f)) {
    } else {
        t1270 = 0x1;
        if ((*(float *)(((R1016) + 0x28))) > 0.0f) {
        } else {
            t1267 = 0x0;
            if (0.0f > (*(float *)(((R1016) + 0x28)))) {
                t1267 = 0xFFFFFFFF;
            }
            t1270 = t1267;
        }
        t1273 = R1024;
        t1283 = 0x1;
        if (((*(float *)((t1273 + 0xAE8))) - (*(float *)((t1273 + 0xB9C)))) > 0.0f) {
        } else {
            t1280 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (R1024)))) - (*(float *)(((0xB9C + (R1024)) + 0x0))))) {
                t1280 = 0xFFFFFFFF;
            }
            t1283 = t1280;
        }
        if (t1270 == t1283) {
            if (!(0.0f > (*(float *)(((R1016) + 0x28))))) {
                u1301 = (*(float *)(((R1016) + 0x28)));
            } else {
                u1301 = (-(*(float *)(((R1016) + 0x28))));
            }
            u1304 = (R1004);
            u1304 = u1304 + 0.0250000004f * u1301;
            R1004 = u1304;
        } else {
            t1314 = 0x1;
            if ((*(float *)(((R1016) + 0x28))) > 0.0f) {
            } else {
                t1311 = 0x0;
                if (0.0f > (*(float *)(((R1016) + 0x28)))) {
                    t1311 = 0xFFFFFFFF;
                }
                t1314 = t1311;
            }
            t1317 = R1024;
            t1327 = 0x1;
            if (((*(float *)((t1317 + 0xB9C))) - (*(float *)((t1317 + 0xAE8)))) > 0.0f) {
            } else {
                t1324 = 0x0;
                if (0.0f > ((*(float *)((0xB9C + (R1024)))) - (*(float *)(((0xAE8 + (R1024)) + 0x0))))) {
                    t1324 = 0xFFFFFFFF;
                }
                t1327 = t1324;
            }
            if (t1314 == t1327) {
                if (!(0.0f > (*(float *)(((R1016) + 0x28))))) {
                    u1341 = (*(float *)(((R1016) + 0x28)));
                } else {
                    u1341 = (-(*(float *)(((R1016) + 0x28))));
                }
                R1004 = ((R1004) - (u1341 * 0.0250000004f));
            }
        }
    }
    t1380 = 0x1;
    if (((*(float *)(((R1008) + 0x18))) - (*(float *)(((R1024) + 0xAE8)))) > 0.0f) {
    } else {
        t1377 = 0x0;
        if (0.0f > ((*(float *)(((R1008) + 0x18))) - (*(float *)(((R1024) + 0xAE8))))) {
            t1377 = 0xFFFFFFFF;
        }
        t1380 = t1377;
    }
    t1384 = R1024;
    t1393 = 0x1;
    if (((*(float *)((t1384 + 0xAE8))) - (*(float *)((t1384 + 0xB9C)))) > 0.0f) {
    } else {
        t1387 = R1024;
        t1390 = 0x0;
        if (0.0f > ((*(float *)((t1387 + 0xAE8))) - (*(float *)((t1387 + 0xB9C))))) {
            t1390 = 0xFFFFFFFF;
        }
        t1393 = t1390;
    }
    if (t1380 == t1393) {
        R1004 = ((R1004) + 0.0250000004f);
    }
    if ((((*(int *)(((R1020) + 0xB60))) & 0x100) == 0) && (t1403 = R1020, t1404 = *(int *)((t1403 + 0xB60)), (t1404 & 0x4000) == 0)) {
    } else {
        R1004 = ((R1004) + 0.5f);
    }
    if ((((*(int *)(((R1024) + 0xB60))) & 0x100) == 0) && (t1413 = R1024, t1414 = *(int *)((t1413 + 0xB60)), (t1414 & 0x4000) == 0)) {
    } else {
        R1004 = ((R1004) - 0.0250000004f);
    }
    t1421 = R1024;
    if (!(0.0f > ((*(float *)((t1421 + 0xAE8))) - (*(float *)((t1421 + 0xB9C)))))) {
        t1424 = R1024;
        u1435 = ((*(float *)((t1424 + 0xAE8))) - (*(float *)((t1424 + 0xB9C))));
    } else {
        t1427 = R1024;
        u1435 = ((-(*(float *)((t1427 + 0xAE8)))) + (*(float *)((t1427 + 0xB9C))));
    }
    t1437 = R1024;
    if (!(0.0f > ((*(float *)((t1437 + 0xAE8))) - (*(float *)((t1437 + 0xB9C)))))) {
        t1440 = R1024;
        u1451 = ((*(float *)((t1440 + 0xAE8))) - (*(float *)((t1440 + 0xB9C))));
    } else {
        t1443 = R1024;
        u1451 = ((-(*(float *)((t1443 + 0xAE8)))) + (*(float *)((t1443 + 0xB9C))));
    }
    t1453 = R1020;
    if (!(0.0f > ((*(float *)((t1453 + 0xAE8))) - (*(float *)((t1453 + 0xB9C)))))) {
        t1456 = R1020;
        u1466 = ((*(float *)((t1456 + 0xAE8))) - (*(float *)((t1456 + 0xB9C))));
    } else {
        t1459 = R1020;
        u1466 = ((-(*(float *)((t1459 + 0xAE8)))) + (*(float *)((t1459 + 0xB9C))));
    }
    if (!((R1004) > (u1435 / (u1451 + u1466)))) {
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    *(unsigned char *)(((R1016) + 0x12E)) = 0x1;
    return ((int (*)(int))(0x8C065E30))(a4);
}


