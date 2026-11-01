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

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = (((((*(int *)((0xB5C + a4))) + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    *(unsigned int *)(((int)stk + 16)) = (((*(int *)(((*(int *)(((int)stk + 24))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 12)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 20))) + 0xB5C))) * 0x160));
    *(unsigned int *)(((int)stk + 8)) = 0x8C291F24;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t19 = *(int *)(((*(int *)(((int)stk + 24))) + 0xB5C));
        t20 = serveGetReceiver();
        if (t19 != t20) {
            return ((int (*)(void))(0x8C065E30))();
        }
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
        return ((int (*)(void))(0x8C065E30))();
    }
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x4000) != 0) && (t24 = *(int *)(((int)stk + 12)), t25 = *(short *)((t24 + 0x118)), (int)t25 < (int)0x1E)) {
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x2;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (((*(int *)((0xC5C + (*(int *)(((int)stk + 20)))))) == 12) && (t37 = *(int *)(((int)stk + 20)), t38 = *(int *)((t37 + 0xB60)), (t38 & 0x100) != 0)) {
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x2;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAF0)))))) {
        u56 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAF0))));
    } else {
        u56 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xAF0))));
    }
    if (!(20.0f > u56)) {
        return FUN_8c06476a(a4);
    }
    t58 = *(int *)(((int)stk + 20));
    t67 = 0x1;
    if (((*(float *)((t58 + 0xB9C))) - (*(float *)((t58 + 0xAE8)))) > 0.0f) {
    } else {
        t61 = *(int *)(((int)stk + 20));
        t64 = 0x0;
        if (0.0f > ((*(float *)((t61 + 0xB9C))) - (*(float *)((t61 + 0xAE8))))) {
            t64 = 0xFFFFFFFF;
        }
        t67 = t64;
    }
    t83 = 0x1;
    if (((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f) {
    } else {
        t80 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 24)))) + 0x0))))) {
            t80 = 0xFFFFFFFF;
        }
        t83 = t80;
    }
    if (t67 == t83) {
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    t87 = *(int *)(((int)stk + 24));
    t96 = 0x1;
    if (((*(float *)((t87 + 0xB9C))) - (*(float *)((t87 + 0xAE8)))) > 0.0f) {
    } else {
        t90 = *(int *)(((int)stk + 24));
        t93 = 0x0;
        if (0.0f > ((*(float *)((t90 + 0xB9C))) - (*(float *)((t90 + 0xAE8))))) {
            t93 = 0xFFFFFFFF;
        }
        t96 = t93;
    }
    t112 = 0x1;
    if (((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))) > 0.0f) {
    } else {
        t109 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))) {
            t109 = 0xFFFFFFFF;
        }
        t112 = t109;
    }
    if (t96 == t112) {
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(27.5f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xBA0))))) {
        return ((int (*)(int))(0x8C0646EC))(a4);
    }
    if (!(27.5f > (*(float *)(((*(int *)(((int)stk + 20))) + 0xBA0))))) {
        return ((int (*)(int))(0x8C0646EC))(a4);
    }
    t148 = 0x1;
    if ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f) {
    } else {
        t145 = 0x0;
        if (0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) {
            t145 = 0xFFFFFFFF;
        }
        t148 = t145;
    }
    t160 = 0x1;
    if ((*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))) > 0.0f) {
    } else {
        t157 = 0x0;
        if (0.0f > (*(float *)((0xAE8 + (*(int *)(((int)stk + 20))))))) {
            t157 = 0xFFFFFFFF;
        }
        t160 = t157;
    }
    if (t148 == t160) {
        if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))))) {
            u179 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
        } else {
            u179 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
        }
        if (!(u179 > 20.0f)) {
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))))) {
                u191 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C)));
            } else {
                u191 = (-(*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))));
            }
            if (!(u191 > 10.0f)) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))) {
                u203 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
            } else {
                u203 = (-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))));
            }
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))))) {
                u213 = (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)));
            } else {
                u213 = (-(*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
            }
            if (u213 > u203) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))) {
            u224 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
        } else {
            u224 = (-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))));
        }
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))))) {
            u234 = (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)));
        } else {
            u234 = (-(*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
        }
        if (!(u224 > u234)) {
            u238 = *(float *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0xC58))) * 0x6C) + 0x8C102450));
            u239 = 0.200000003f;
            u239 = u239 + 0.0500000007f * (((u238 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
            *(float *)(((int)stk + 4)) = u239;
            t240 = *(int *)(((int)stk + 24));
            if (!(0.0f > ((*(float *)((t240 + 0xAE8))) - (*(float *)((t240 + 0xB9C)))))) {
                t243 = *(int *)(((int)stk + 24));
                u254 = ((*(float *)((t243 + 0xAE8))) - (*(float *)((t243 + 0xB9C))));
            } else {
                t246 = *(int *)(((int)stk + 24));
                u254 = ((-(*(float *)((t246 + 0xAE8)))) + (*(float *)((t246 + 0xB9C))));
            }
            if (12.5f > u254) {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.25f);
            }
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                u269 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
            } else {
                u269 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
            }
            if (!(u269 > 0.25f)) {
            } else {
                t284 = 0x1;
                if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
                } else {
                    t281 = 0x0;
                    if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                        t281 = 0xFFFFFFFF;
                    }
                    t284 = t281;
                }
                t287 = *(int *)(((int)stk + 20));
                t297 = 0x1;
                if (((*(float *)((t287 + 0xAE8))) - (*(float *)((t287 + 0xB9C)))) > 0.0f) {
                } else {
                    t294 = 0x0;
                    if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                        t294 = 0xFFFFFFFF;
                    }
                    t297 = t294;
                }
                if (t284 == t297) {
                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                        u315 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
                    } else {
                        u315 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
                    }
                    u318 = (*(float *)(((int)stk + 4)));
                    u318 = u318 + 0.0250000004f * u315;
                    *(float *)(((int)stk + 4)) = u318;
                } else {
                    t328 = 0x1;
                    if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
                    } else {
                        t325 = 0x0;
                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                            t325 = 0xFFFFFFFF;
                        }
                        t328 = t325;
                    }
                    t331 = *(int *)(((int)stk + 20));
                    t341 = 0x1;
                    if (((*(float *)((t331 + 0xB9C))) - (*(float *)((t331 + 0xAE8)))) > 0.0f) {
                    } else {
                        t338 = 0x0;
                        if (0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                            t338 = 0xFFFFFFFF;
                        }
                        t341 = t338;
                    }
                    if (t328 == t341) {
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                            u355 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
                        } else {
                            u355 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
                        }
                        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (u355 * 0.0250000004f));
                    }
                }
            }
            t392 = 0x1;
            if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
            } else {
                t389 = 0x0;
                if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
                    t389 = 0xFFFFFFFF;
                }
                t392 = t389;
            }
            t394 = *(int *)(((int)stk + 20));
            t404 = 0x1;
            if (((*(float *)((t394 + 0xAE8))) - (*(float *)((t394 + 0xB9C)))) > 0.0f) {
            } else {
                t401 = 0x0;
                if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                    t401 = 0xFFFFFFFF;
                }
                t404 = t401;
            }
            if (t392 == t404) {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.100000001f);
            } else {
                t423 = 0x1;
                if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
                } else {
                    t420 = 0x0;
                    if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
                        t420 = 0xFFFFFFFF;
                    }
                    t423 = t420;
                }
                t426 = *(int *)(((int)stk + 20));
                t435 = 0x1;
                if (((*(float *)((t426 + 0xB9C))) - (*(float *)((t426 + 0xAE8)))) > 0.0f) {
                } else {
                    t429 = *(int *)(((int)stk + 20));
                    t432 = 0x0;
                    if (0.0f > ((*(float *)((t429 + 0xB9C))) - (*(float *)((t429 + 0xAE8))))) {
                        t432 = 0xFFFFFFFF;
                    }
                    t435 = t432;
                }
                if (t423 == t435) {
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.100000001f);
                }
            }
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) {
                u460 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)));
            } else {
                u460 = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
            }
            if (u460 > 0.25f) {
                t475 = 0x1;
                if ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f) {
                } else {
                    t472 = 0x0;
                    if (0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) {
                        t472 = 0xFFFFFFFF;
                    }
                    t475 = t472;
                }
                t478 = *(int *)(((int)stk + 24));
                t488 = 0x1;
                if (((*(float *)((t478 + 0xAE8))) - (*(float *)((t478 + 0xB9C)))) > 0.0f) {
                } else {
                    t485 = 0x0;
                    if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 24)))) + 0x0))))) {
                        t485 = 0xFFFFFFFF;
                    }
                    t488 = t485;
                }
                if (t475 == t488) {
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.0500000007f);
                } else {
                    t506 = 0x1;
                    if ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f) {
                    } else {
                        t503 = 0x0;
                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) {
                            t503 = 0xFFFFFFFF;
                        }
                        t506 = t503;
                    }
                    t509 = *(int *)(((int)stk + 24));
                    t519 = 0x1;
                    if (((*(float *)((t509 + 0xB9C))) - (*(float *)((t509 + 0xAE8)))) > 0.0f) {
                    } else {
                        t516 = 0x0;
                        if (0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 24)))) + 0x0))))) {
                            t516 = 0xFFFFFFFF;
                        }
                        t519 = t516;
                    }
                    if (t506 == t519) {
                        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.0500000007f);
                    }
                }
            }
            if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x100) == 0) && (t545 = *(int *)(((int)stk + 20)), t546 = *(int *)((t545 + 0xB60)), (t546 & 0x4000) == 0)) {
            } else {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.150000006f);
            }
            t553 = *(int *)(((int)stk + 24));
            if (!(0.0f > ((*(float *)((t553 + 0xAE8))) - (*(float *)((t553 + 0xB9C)))))) {
                t556 = *(int *)(((int)stk + 24));
                u567 = ((*(float *)((t556 + 0xAE8))) - (*(float *)((t556 + 0xB9C))));
            } else {
                t559 = *(int *)(((int)stk + 24));
                u567 = ((-(*(float *)((t559 + 0xAE8)))) + (*(float *)((t559 + 0xB9C))));
            }
            t569 = *(int *)(((int)stk + 24));
            if (!(0.0f > ((*(float *)((t569 + 0xAE8))) - (*(float *)((t569 + 0xB9C)))))) {
                t572 = *(int *)(((int)stk + 24));
                u583 = ((*(float *)((t572 + 0xAE8))) - (*(float *)((t572 + 0xB9C))));
            } else {
                t575 = *(int *)(((int)stk + 24));
                u583 = ((-(*(float *)((t575 + 0xAE8)))) + (*(float *)((t575 + 0xB9C))));
            }
            t585 = *(int *)(((int)stk + 20));
            if (!(0.0f > ((*(float *)((t585 + 0xAE8))) - (*(float *)((t585 + 0xB9C)))))) {
                t588 = *(int *)(((int)stk + 20));
                u598 = ((*(float *)((t588 + 0xAE8))) - (*(float *)((t588 + 0xB9C))));
            } else {
                t591 = *(int *)(((int)stk + 20));
                u598 = ((-(*(float *)((t591 + 0xAE8)))) + (*(float *)((t591 + 0xB9C))));
            }
            if (!((*(float *)(((int)stk + 4))) > (u567 / (u583 + u598)))) {
                return ((int (*)(int))(0x8C065E30))(a4);
            }
            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        u604 = *(float *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0xC58))) * 0x6C) + 0x8C102450));
        u605 = 0.699999988f;
        u605 = u605 + 0.0500000007f * (((u604 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
        *(float *)(((int)stk + 4)) = u605;
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
            u614 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
        } else {
            u614 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
        }
        if (!(u614 > 0.25f)) {
        } else {
            t629 = 0x1;
            if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
            } else {
                t626 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                    t626 = 0xFFFFFFFF;
                }
                t629 = t626;
            }
            t632 = *(int *)(((int)stk + 20));
            t642 = 0x1;
            if (((*(float *)((t632 + 0xAE8))) - (*(float *)((t632 + 0xB9C)))) > 0.0f) {
            } else {
                t639 = 0x0;
                if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                    t639 = 0xFFFFFFFF;
                }
                t642 = t639;
            }
            if (t629 == t642) {
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                    u660 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
                } else {
                    u660 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
                }
                u663 = (*(float *)(((int)stk + 4)));
                u663 = u663 + 0.0500000007f * u660;
                *(float *)(((int)stk + 4)) = u663;
            } else {
                t673 = 0x1;
                if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
                } else {
                    t670 = 0x0;
                    if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                        t670 = 0xFFFFFFFF;
                    }
                    t673 = t670;
                }
                t676 = *(int *)(((int)stk + 20));
                t686 = 0x1;
                if (((*(float *)((t676 + 0xB9C))) - (*(float *)((t676 + 0xAE8)))) > 0.0f) {
                } else {
                    t683 = 0x0;
                    if (0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                        t683 = 0xFFFFFFFF;
                    }
                    t686 = t683;
                }
                if (t673 == t686) {
                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                        u700 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
                    } else {
                        u700 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
                    }
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (u700 * 0.0250000004f));
                }
            }
        }
        t735 = 0x1;
        if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
        } else {
            t732 = 0x0;
            if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
                t732 = 0xFFFFFFFF;
            }
            t735 = t732;
        }
        t737 = *(int *)(((int)stk + 20));
        t747 = 0x1;
        if (((*(float *)((t737 + 0xAE8))) - (*(float *)((t737 + 0xB9C)))) > 0.0f) {
        } else {
            t744 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                t744 = 0xFFFFFFFF;
            }
            t747 = t744;
        }
        if (t735 == t747) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.200000003f);
        } else {
            t766 = 0x1;
            if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
            } else {
                t763 = 0x0;
                if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
                    t763 = 0xFFFFFFFF;
                }
                t766 = t763;
            }
            t769 = *(int *)(((int)stk + 20));
            t778 = 0x1;
            if (((*(float *)((t769 + 0xB9C))) - (*(float *)((t769 + 0xAE8)))) > 0.0f) {
            } else {
                t772 = *(int *)(((int)stk + 20));
                t775 = 0x0;
                if (0.0f > ((*(float *)((t772 + 0xB9C))) - (*(float *)((t772 + 0xAE8))))) {
                    t775 = 0xFFFFFFFF;
                }
                t778 = t775;
            }
            if (t766 == t778) {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.100000001f);
            }
        }
        t806 = 0x1;
        if (((*(float *)(((*(int *)(((int)stk + 8))) + 0x18))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f) {
        } else {
            t803 = 0x0;
            if (0.0f > ((*(float *)(((*(int *)(((int)stk + 8))) + 0x18))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))) {
                t803 = 0xFFFFFFFF;
            }
            t806 = t803;
        }
        t810 = *(int *)(((int)stk + 24));
        t819 = 0x1;
        if (((*(float *)((t810 + 0xAE8))) - (*(float *)((t810 + 0xB9C)))) > 0.0f) {
        } else {
            t813 = *(int *)(((int)stk + 24));
            t816 = 0x0;
            if (0.0f > ((*(float *)((t813 + 0xAE8))) - (*(float *)((t813 + 0xB9C))))) {
                t816 = 0xFFFFFFFF;
            }
            t819 = t816;
        }
        if (t806 == t819) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.0250000004f);
        }
        if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x100) == 0) && (t829 = *(int *)(((int)stk + 20)), t830 = *(int *)((t829 + 0xB60)), (t830 & 0x4000) == 0)) {
        } else {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.0500000007f);
        }
        if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) == 0) && (t839 = *(int *)(((int)stk + 24)), t840 = *(int *)((t839 + 0xB60)), (t840 & 0x4000) == 0)) {
        } else {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.0250000004f);
        }
        t847 = *(int *)(((int)stk + 24));
        if (!(0.0f > ((*(float *)((t847 + 0xAE8))) - (*(float *)((t847 + 0xB9C)))))) {
            t850 = *(int *)(((int)stk + 24));
            u861 = ((*(float *)((t850 + 0xAE8))) - (*(float *)((t850 + 0xB9C))));
        } else {
            t853 = *(int *)(((int)stk + 24));
            u861 = ((-(*(float *)((t853 + 0xAE8)))) + (*(float *)((t853 + 0xB9C))));
        }
        t863 = *(int *)(((int)stk + 24));
        if (!(0.0f > ((*(float *)((t863 + 0xAE8))) - (*(float *)((t863 + 0xB9C)))))) {
            t866 = *(int *)(((int)stk + 24));
            u877 = ((*(float *)((t866 + 0xAE8))) - (*(float *)((t866 + 0xB9C))));
        } else {
            t869 = *(int *)(((int)stk + 24));
            u877 = ((-(*(float *)((t869 + 0xAE8)))) + (*(float *)((t869 + 0xB9C))));
        }
        t879 = *(int *)(((int)stk + 20));
        if (!(0.0f > ((*(float *)((t879 + 0xAE8))) - (*(float *)((t879 + 0xB9C)))))) {
            t882 = *(int *)(((int)stk + 20));
            u892 = ((*(float *)((t882 + 0xAE8))) - (*(float *)((t882 + 0xB9C))));
        } else {
            t885 = *(int *)(((int)stk + 20));
            u892 = ((-(*(float *)((t885 + 0xAE8)))) + (*(float *)((t885 + 0xB9C))));
        }
        if (!((*(float *)(((int)stk + 4))) > (u861 / (u877 + u892)))) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C)))))) {
        u912 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C))));
    } else {
        u912 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C)))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C))));
    }
    if ((u912 / (1.0f + 1.0f)) > 16.4549999f) {
        t927 = 0x1;
        if ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f) {
        } else {
            t924 = 0x0;
            if (0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) {
                t924 = 0xFFFFFFFF;
            }
            t927 = t924;
        }
        t939 = 0x1;
        if ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) > 0.0f) {
        } else {
            t936 = 0x0;
            if (0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 24))))))) {
                t936 = 0xFFFFFFFF;
            }
            t939 = t936;
        }
        if (t927 != t939) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    t943 = *(int *)(((int)stk + 24));
    if (!(0.0f > ((*(float *)((t943 + 0xAE8))) - (*(float *)((t943 + 0xB9C)))))) {
        t946 = *(int *)(((int)stk + 24));
        u957 = ((*(float *)((t946 + 0xAE8))) - (*(float *)((t946 + 0xB9C))));
    } else {
        t949 = *(int *)(((int)stk + 24));
        u957 = ((-(*(float *)((t949 + 0xAE8)))) + (*(float *)((t949 + 0xB9C))));
    }
    if (25.0f > u957) {
        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8)))))) {
        u976 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
    } else {
        u976 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xAE8))));
    }
    if (!(u976 > 20.0f)) {
        t978 = *(int *)(((int)stk + 20));
        if (!(0.0f > ((*(float *)((t978 + 0xAE8))) - (*(float *)((t978 + 0xB9C)))))) {
            t981 = *(int *)(((int)stk + 20));
            *(volatile float *)((t981 + 0xB9C));
            *(volatile float *)((t981 + 0xAE8));
        } else {
            t984 = *(int *)(((int)stk + 20));
            *(volatile float *)((t984 + 0xAE8));
            *(volatile float *)((t984 + 0xB9C));
        }
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))))) {
            u1002 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C)));
        } else {
            u1002 = (-(*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))));
        }
        if (!(u1002 > 5.0f)) {
            return ((int (*)(int))(0x8C065E30))(a4);
        }
        if ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f) {
        } else {
            *(volatile float *)(((*(int *)(((int)stk + 24))) + 0xAE8));
        }
        if ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) > 0.0f) {
        } else {
            *(volatile float *)((0xB9C + (*(int *)(((int)stk + 24)))));
        }
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    u1034 = *(float *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0xC58))) * 0x6C) + 0x8C102450));
    u1035 = 0.5f;
    u1035 = u1035 + 0.100000001f * (((u1034 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
    *(float *)(((int)stk + 4)) = u1035;
    t1047 = 0x1;
    if (((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C)))) > 0.0f) {
    } else {
        t1044 = 0x0;
        if (0.0f > ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C))))) {
            t1044 = 0xFFFFFFFF;
        }
        t1047 = t1044;
    }
    u1056 = ((float)t1047 * ((*(float *)(((*(int *)(((int)stk + 24))) + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 20))) + 0xB9C)))));
    u1057 = (*(float *)(((int)stk + 4)));
    u1057 = u1057 + 0.0299999993f * ((u1056 * 0.5f) / 16.4549999f);
    *(float *)(((int)stk + 4)) = u1057;
    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
        u1066 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
    } else {
        u1066 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
    }
    if (!(u1066 > 0.25f)) {
    } else {
        t1081 = 0x1;
        if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
        } else {
            t1078 = 0x0;
            if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                t1078 = 0xFFFFFFFF;
            }
            t1081 = t1078;
        }
        t1084 = *(int *)(((int)stk + 20));
        t1094 = 0x1;
        if (((*(float *)((t1084 + 0xAE8))) - (*(float *)((t1084 + 0xB9C)))) > 0.0f) {
        } else {
            t1091 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                t1091 = 0xFFFFFFFF;
            }
            t1094 = t1091;
        }
        if (t1081 == t1094) {
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                u1112 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
            } else {
                u1112 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
            }
            u1115 = (*(float *)(((int)stk + 4)));
            u1115 = u1115 + 0.0299999993f * u1112;
            *(float *)(((int)stk + 4)) = u1115;
        } else {
            t1125 = 0x1;
            if ((*(float *)(((*(int *)(((int)stk + 12))) + 0x28))) > 0.0f) {
            } else {
                t1122 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)))) {
                    t1122 = 0xFFFFFFFF;
                }
                t1125 = t1122;
            }
            t1128 = *(int *)(((int)stk + 20));
            t1138 = 0x1;
            if (((*(float *)((t1128 + 0xB9C))) - (*(float *)((t1128 + 0xAE8)))) > 0.0f) {
            } else {
                t1135 = 0x0;
                if (0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 20)))) + 0x0))))) {
                    t1135 = 0xFFFFFFFF;
                }
                t1138 = t1135;
            }
            if (t1125 == t1138) {
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 12))) + 0x28))))) {
                    u1152 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x28)));
                } else {
                    u1152 = (-(*(float *)(((*(int *)(((int)stk + 12))) + 0x28))));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (u1152 * 0.0299999993f));
            }
        }
    }
    t1187 = 0x1;
    if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
    } else {
        t1184 = 0x0;
        if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
            t1184 = 0xFFFFFFFF;
        }
        t1187 = t1184;
    }
    t1189 = *(int *)(((int)stk + 20));
    t1199 = 0x1;
    if (((*(float *)((t1189 + 0xAE8))) - (*(float *)((t1189 + 0xB9C)))) > 0.0f) {
    } else {
        t1196 = 0x0;
        if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 20)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 20)))) + 0x0))))) {
            t1196 = 0xFFFFFFFF;
        }
        t1199 = t1196;
    }
    if (t1187 == t1199) {
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.0900000036f);
    } else {
        t1218 = 0x1;
        if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) > 0) {
        } else {
            t1215 = 0x0;
            if ((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x158))) < 0) {
                t1215 = 0xFFFFFFFF;
            }
            t1218 = t1215;
        }
        t1221 = *(int *)(((int)stk + 20));
        t1230 = 0x1;
        if (((*(float *)((t1221 + 0xB9C))) - (*(float *)((t1221 + 0xAE8)))) > 0.0f) {
        } else {
            t1224 = *(int *)(((int)stk + 20));
            t1227 = 0x0;
            if (0.0f > ((*(float *)((t1224 + 0xB9C))) - (*(float *)((t1224 + 0xAE8))))) {
                t1227 = 0xFFFFFFFF;
            }
            t1230 = t1227;
        }
        if (t1218 == t1230) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.0900000036f);
        }
    }
    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) {
        u1255 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)));
    } else {
        u1255 = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    }
    if (!(u1255 > 0.25f)) {
    } else {
        t1270 = 0x1;
        if ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f) {
        } else {
            t1267 = 0x0;
            if (0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) {
                t1267 = 0xFFFFFFFF;
            }
            t1270 = t1267;
        }
        t1273 = *(int *)(((int)stk + 24));
        t1283 = 0x1;
        if (((*(float *)((t1273 + 0xAE8))) - (*(float *)((t1273 + 0xB9C)))) > 0.0f) {
        } else {
            t1280 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xB9C + (*(int *)(((int)stk + 24)))) + 0x0))))) {
                t1280 = 0xFFFFFFFF;
            }
            t1283 = t1280;
        }
        if (t1270 == t1283) {
            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) {
                u1301 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)));
            } else {
                u1301 = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
            }
            u1304 = (*(float *)(((int)stk + 4)));
            u1304 = u1304 + 0.0250000004f * u1301;
            *(float *)(((int)stk + 4)) = u1304;
        } else {
            t1314 = 0x1;
            if ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f) {
            } else {
                t1311 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) {
                    t1311 = 0xFFFFFFFF;
                }
                t1314 = t1311;
            }
            t1317 = *(int *)(((int)stk + 24));
            t1327 = 0x1;
            if (((*(float *)((t1317 + 0xB9C))) - (*(float *)((t1317 + 0xAE8)))) > 0.0f) {
            } else {
                t1324 = 0x0;
                if (0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 24)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 24)))) + 0x0))))) {
                    t1324 = 0xFFFFFFFF;
                }
                t1327 = t1324;
            }
            if (t1314 == t1327) {
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) {
                    u1341 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)));
                } else {
                    u1341 = (-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - (u1341 * 0.0250000004f));
            }
        }
    }
    t1380 = 0x1;
    if (((*(float *)(((*(int *)(((int)stk + 8))) + 0x18))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f) {
    } else {
        t1377 = 0x0;
        if (0.0f > ((*(float *)(((*(int *)(((int)stk + 8))) + 0x18))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))) {
            t1377 = 0xFFFFFFFF;
        }
        t1380 = t1377;
    }
    t1384 = *(int *)(((int)stk + 24));
    t1393 = 0x1;
    if (((*(float *)((t1384 + 0xAE8))) - (*(float *)((t1384 + 0xB9C)))) > 0.0f) {
    } else {
        t1387 = *(int *)(((int)stk + 24));
        t1390 = 0x0;
        if (0.0f > ((*(float *)((t1387 + 0xAE8))) - (*(float *)((t1387 + 0xB9C))))) {
            t1390 = 0xFFFFFFFF;
        }
        t1393 = t1390;
    }
    if (t1380 == t1393) {
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.0250000004f);
    }
    if ((((*(int *)(((*(int *)(((int)stk + 20))) + 0xB60))) & 0x100) == 0) && (t1403 = *(int *)(((int)stk + 20)), t1404 = *(int *)((t1403 + 0xB60)), (t1404 & 0x4000) == 0)) {
    } else {
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 0.5f);
    }
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) == 0) && (t1413 = *(int *)(((int)stk + 24)), t1414 = *(int *)((t1413 + 0xB60)), (t1414 & 0x4000) == 0)) {
    } else {
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 0.0250000004f);
    }
    t1421 = *(int *)(((int)stk + 24));
    if (!(0.0f > ((*(float *)((t1421 + 0xAE8))) - (*(float *)((t1421 + 0xB9C)))))) {
        t1424 = *(int *)(((int)stk + 24));
        u1435 = ((*(float *)((t1424 + 0xAE8))) - (*(float *)((t1424 + 0xB9C))));
    } else {
        t1427 = *(int *)(((int)stk + 24));
        u1435 = ((-(*(float *)((t1427 + 0xAE8)))) + (*(float *)((t1427 + 0xB9C))));
    }
    t1437 = *(int *)(((int)stk + 24));
    if (!(0.0f > ((*(float *)((t1437 + 0xAE8))) - (*(float *)((t1437 + 0xB9C)))))) {
        t1440 = *(int *)(((int)stk + 24));
        u1451 = ((*(float *)((t1440 + 0xAE8))) - (*(float *)((t1440 + 0xB9C))));
    } else {
        t1443 = *(int *)(((int)stk + 24));
        u1451 = ((-(*(float *)((t1443 + 0xAE8)))) + (*(float *)((t1443 + 0xB9C))));
    }
    t1453 = *(int *)(((int)stk + 20));
    if (!(0.0f > ((*(float *)((t1453 + 0xAE8))) - (*(float *)((t1453 + 0xB9C)))))) {
        t1456 = *(int *)(((int)stk + 20));
        u1466 = ((*(float *)((t1456 + 0xAE8))) - (*(float *)((t1456 + 0xB9C))));
    } else {
        t1459 = *(int *)(((int)stk + 20));
        u1466 = ((-(*(float *)((t1459 + 0xAE8)))) + (*(float *)((t1459 + 0xB9C))));
    }
    if (!((*(float *)(((int)stk + 4))) > (u1435 / (u1451 + u1466)))) {
        return ((int (*)(int))(0x8C065E30))(a4);
    }
    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x12E)) = 0x1;
    return ((int (*)(int))(0x8C065E30))(a4);
}

int FUN_8c07b7aa(int a4, int a5)
{
    int stk[21];
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u12;
    register float u17;
    register float u19;
    register float u21;
    register int t24;
    register float u26;
    register float u32;
    register float u45;
    register float u46;
    register float u48;
    register float u54;
    register float u55;
    register float u56;
    register float t57;
    register float u62;
    register float u63;
    register float u64;
    register float u70;
    register float u71;
    register float u72;
    register int t86;
    register float t82;
    register int t91;
    register float u93;
    register float u94;
    register int t100;
    register int t101;
    register float u104;
    register float u105;
    register float u111;
    register float u112;
    register float u119;
    register float u120;
    register float u138;
    register float u139;
    register float u141;
    register float u148;
    register float u149;
    register float u150;
    register float t151;
    register float u156;
    register float u157;
    register float u158;
    register float u164;
    register float u165;
    register float u166;
    register int t180;
    register float t176;
    register float u188;
    register float u189;
    register float u192;
    register float u194;
    register float u196;
    register float u199;
    register float u197;
    register float u210;
    register float u219;
    register float u221;
    register float u224;
    register float u231;
    register float u237;
    register float u244;
    register float u258;
    register float u259;
    register float u266;
    register float u267;
    register float u280;
    register float u283;
    register float u281;
    register float u290;
    register int t297;
    register int t302;
    register float u305;
    register float u314;
    register float u316;
    register float u319;
    register float u325;
    register float u339;
    register float u340;
    register float u347;
    register float u348;
    register float u366;
    register float u369;
    register float u367;
    register float u376;
    register int t383;
    register int t388;
    register float u391;
    register float u400;
    register float u402;
    register float u405;
    register float u411;
    register float u425;
    register float u426;
    register float u433;
    register float u434;
    register float u467;
    register float u468;
    register float u470;
    register float u476;
    register float u477;
    register float u478;
    register float t479;
    register float u484;
    register float u485;
    register float u486;
    register float u492;
    register float u493;
    register float u494;
    register int t508;
    register float t504;
    register int t513;
    register float u515;
    register float u516;
    register int t522;
    register int t523;
    register float u526;
    register float u527;
    register float u533;
    register float u534;
    register float u541;
    register float u542;
    register float u560;
    register float u561;
    register float u563;
    register float u570;
    register float u571;
    register float u572;
    register float t573;
    register float u578;
    register float u579;
    register float u580;
    register float u586;
    register float u587;
    register float u588;
    register int t602;
    register float t598;
    register float u610;
    register float u611;
    register float u614;
    register float u616;
    register float u618;
    register float u621;
    register float u619;
    register float u632;
    register float u641;
    register float u643;
    register float u646;
    register float u653;
    register float u659;
    register float u666;
    register float u680;
    register float u681;
    register float u688;
    register float u689;
    register float u702;
    register float u705;
    register float u703;
    register float u712;
    register int t719;
    register int t724;
    register float u727;
    register float u736;
    register float u738;
    register float u741;
    register float u747;
    register float u761;
    register float u762;
    register float u769;
    register float u770;
    register float u788;
    register float u791;
    register float u789;
    register float u798;
    register int t805;
    register int t810;
    register float u813;
    register float u822;
    register float u824;
    register float u827;
    register float u833;
    register float u847;
    register float u848;
    register float u855;
    register float u856;
    register int t890;
    register float u892;
    register float u898;
    register float u916;
    register float u917;
    register float u919;
    register float u925;
    register float u926;
    register float u927;
    register float t928;
    register float u933;
    register float u934;
    register float u935;
    register float u941;
    register float u942;
    register float u943;
    register int t957;
    register float t953;
    register int t962;
    register float u964;
    register float u965;
    register int t971;
    register int t972;
    register float u975;
    register float u976;
    register float u982;
    register float u983;
    register float u990;
    register float u991;
    register float u1009;
    register float u1010;
    register float u1012;
    register float u1019;
    register float u1020;
    register float u1021;
    register float t1022;
    register float u1027;
    register float u1028;
    register float u1029;
    register float u1035;
    register float u1036;
    register float u1037;
    register int t1051;
    register float t1047;
    register float u1059;
    register float u1060;
    register float u1063;
    register float u1065;
    register float u1067;
    register float u1070;
    register float u1068;
    register float u1081;
    register float u1090;
    register float u1092;
    register float u1095;
    register float u1102;
    register float u1108;
    register float u1115;
    register float u1129;
    register float u1130;
    register float u1137;
    register float u1138;
    register float u1151;
    register float u1154;
    register float u1152;
    register float u1161;
    register int t1168;
    register int t1173;
    register float u1176;
    register float u1185;
    register float u1187;
    register float u1190;
    register float u1196;
    register float u1210;
    register float u1211;
    register float u1218;
    register float u1219;
    register float u1237;
    register float u1240;
    register float u1238;
    register float u1247;
    register int t1254;
    register int t1259;
    register float u1262;
    register float u1271;
    register float u1273;
    register float u1276;
    register float u1282;
    register float u1296;
    register float u1297;
    register float u1304;
    register float u1305;
    register float t1338;
    register float u1339;
    register float u1340;
    register float u1345;
    register float u1350;
    register float u1352;
    register float u1354;
    register int t1357;
    register float u1359;
    register float u1365;
    register float u1378;
    register float u1379;
    register float u1381;
    register float u1387;
    register float u1388;
    register float u1389;
    register float t1390;
    register float u1395;
    register float u1396;
    register float u1397;
    register float u1403;
    register float u1404;
    register float u1405;
    register int t1419;
    register float t1415;
    register int t1424;
    register float u1426;
    register float u1427;
    register int t1433;
    register int t1434;
    register float u1437;
    register float u1438;
    register float u1444;
    register float u1445;
    register float u1452;
    register float u1453;
    register float u1471;
    register float u1472;
    register float u1474;
    register float u1481;
    register float u1482;
    register float u1483;
    register float t1484;
    register float u1489;
    register float u1490;
    register float u1491;
    register float u1497;
    register float u1498;
    register float u1499;
    register int t1513;
    register float t1509;
    register float u1521;
    register float u1522;
    register float u1525;
    register float u1527;
    register float u1529;
    register float u1532;
    register float u1530;
    register float u1543;
    register float u1552;
    register float u1554;
    register float u1557;
    register float u1564;
    register float u1570;
    register float u1577;
    register float u1591;
    register float u1592;
    register float u1599;
    register float u1600;
    register float u1613;
    register float u1616;
    register float u1614;
    register float u1623;
    register int t1630;
    register int t1635;
    register float u1638;
    register float u1647;
    register float u1649;
    register float u1652;
    register float u1658;
    register float u1672;
    register float u1673;
    register float u1680;
    register float u1681;
    register float u1699;
    register float u1702;
    register float u1700;
    register float u1709;
    register int t1716;
    register int t1721;
    register float u1724;
    register float u1733;
    register float u1735;
    register float u1738;
    register float u1744;
    register float u1758;
    register float u1759;
    register float u1766;
    register float u1767;
    register float u1800;
    register float u1801;
    register float u1803;
    register float u1809;
    register float u1810;
    register float u1811;
    register float t1812;
    register float u1817;
    register float u1818;
    register float u1819;
    register float u1825;
    register float u1826;
    register float u1827;
    register int t1841;
    register float t1837;
    register int t1846;
    register float u1848;
    register float u1849;
    register int t1855;
    register int t1856;
    register float u1859;
    register float u1860;
    register float u1866;
    register float u1867;
    register float u1874;
    register float u1875;
    register float u1893;
    register float u1894;
    register float u1896;
    register float u1903;
    register float u1904;
    register float u1905;
    register float t1906;
    register float u1911;
    register float u1912;
    register float u1913;
    register float u1919;
    register float u1920;
    register float u1921;
    register int t1935;
    register float t1931;
    register float u1943;
    register float u1944;
    register float u1947;
    register float u1949;
    register float u1951;
    register float u1954;
    register float u1952;
    register float u1965;
    register float u1974;
    register float u1976;
    register float u1979;
    register float u1986;
    register float u1992;
    register float u1999;
    register float u2013;
    register float u2014;
    register float u2021;
    register float u2022;
    register float u2035;
    register float u2038;
    register float u2036;
    register float u2045;
    register int t2052;
    register int t2057;
    register float u2060;
    register float u2069;
    register float u2071;
    register float u2074;
    register float u2080;
    register float u2094;
    register float u2095;
    register float u2102;
    register float u2103;
    register float u2121;
    register float u2124;
    register float u2122;
    register float u2131;
    register int t2138;
    register int t2143;
    register float u2146;
    register float u2155;
    register float u2157;
    register float u2160;
    register float u2166;
    register float u2180;
    register float u2181;
    register float u2188;
    register float u2189;
    register int t2223;
    register float u2225;
    register float u2231;
    register float u2249;
    register float u2250;
    register float u2252;
    register float u2258;
    register float u2259;
    register float u2260;
    register float t2261;
    register float u2266;
    register float u2267;
    register float u2268;
    register float u2274;
    register float u2275;
    register float u2276;
    register int t2290;
    register float t2286;
    register int t2295;
    register float u2297;
    register float u2298;
    register int t2304;
    register int t2305;
    register float u2308;
    register float u2309;
    register float u2315;
    register float u2316;
    register float u2323;
    register float u2324;
    register float u2342;
    register float u2343;
    register float u2345;
    register float u2352;
    register float u2353;
    register float u2354;
    register float t2355;
    register float u2360;
    register float u2361;
    register float u2362;
    register float u2368;
    register float u2369;
    register float u2370;
    register int t2384;
    register float t2380;
    register float u2392;
    register float u2393;
    register float u2396;
    register float u2398;
    register float u2400;
    register float u2403;
    register float u2401;
    register float u2414;
    register float u2423;
    register float u2425;
    register float u2428;
    register float u2435;
    register float u2441;
    register float u2448;
    register float u2462;
    register float u2463;
    register float u2470;
    register float u2471;
    register float u2484;
    register float u2487;
    register float u2485;
    register float u2494;
    register int t2501;
    register int t2506;
    register float u2509;
    register float u2518;
    register float u2520;
    register float u2523;
    register float u2529;
    register float u2543;
    register float u2544;
    register float u2551;
    register float u2552;
    register float u2570;
    register float u2573;
    register float u2571;
    register float u2580;
    register int t2587;
    register int t2592;
    register float u2595;
    register float u2604;
    register float u2606;
    register float u2609;
    register float u2615;
    register float u2629;
    register float u2630;
    register float u2637;
    register float u2638;
    register float u2671;
    register float u2672;
    register float u2674;
    register int t2696;
    register int t2687;
    register float u2708;
    register float u2709;
    register float u2710;
    register float t2711;
    register float u2716;
    register float u2717;
    register float u2718;
    register float u2724;
    register float u2725;
    register float u2726;
    register int t2740;
    register float t2736;
    register float u2744;
    register float u2746;
    register int t2754;
    register int t1334;
    register int t912;
    register int t885;
    register int t463;
    register float u41;
    register int t42;
    register int t458;
    register float u75;
    register int t135;
    register int t125;
    register float u130;
    register int t131;
    register int t453;
    register float u169;
    register int t449;
    register int t363;
    register int t277;
    register float u253;
    register int t254;
    register int t359;
    register int t355;
    register float u334;
    register int t335;
    register int t445;
    register int t441;
    register float u420;
    register int t421;
    register int t880;
    register float u497;
    register int t557;
    register int t547;
    register float u552;
    register int t553;
    register int t875;
    register float u591;
    register int t871;
    register int t785;
    register int t699;
    register float u675;
    register int t676;
    register int t781;
    register int t777;
    register float u756;
    register int t757;
    register int t867;
    register int t863;
    register float u842;
    register int t843;
    register float u907;
    register int t908;
    register int t1329;
    register float u946;
    register int t1006;
    register int t996;
    register float u1001;
    register int t1002;
    register int t1324;
    register float u1040;
    register int t1320;
    register int t1234;
    register int t1148;
    register float u1124;
    register int t1125;
    register int t1230;
    register int t1226;
    register float u1205;
    register int t1206;
    register int t1316;
    register int t1312;
    register float u1291;
    register int t1292;
    register int t2749;
    register int t2667;
    register int t2245;
    register int t2218;
    register int t1796;
    register float u1374;
    register int t1375;
    register int t1791;
    register float u1408;
    register int t1468;
    register int t1458;
    register float u1463;
    register int t1464;
    register int t1786;
    register float u1502;
    register int t1782;
    register int t1696;
    register int t1610;
    register float u1586;
    register int t1587;
    register int t1692;
    register int t1688;
    register float u1667;
    register int t1668;
    register int t1778;
    register int t1774;
    register float u1753;
    register int t1754;
    register int t2213;
    register float u1830;
    register int t1890;
    register int t1880;
    register float u1885;
    register int t1886;
    register int t2208;
    register float u1924;
    register int t2204;
    register int t2118;
    register int t2032;
    register float u2008;
    register int t2009;
    register int t2114;
    register int t2110;
    register float u2089;
    register int t2090;
    register int t2200;
    register int t2196;
    register float u2175;
    register int t2176;
    register float u2240;
    register int t2241;
    register int t2662;
    register float u2279;
    register int t2339;
    register int t2329;
    register float u2334;
    register int t2335;
    register int t2657;
    register float u2373;
    register int t2653;
    register int t2567;
    register int t2481;
    register float u2457;
    register int t2458;
    register int t2563;
    register int t2559;
    register float u2538;
    register int t2539;
    register int t2649;
    register int t2645;
    register float u2624;
    register int t2625;
    register float u2681;
    register float u2729;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u2 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u3 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u4 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    *(float *)(((int)stk + 32)) = ((u4 + u3) * 0.5f);
    if (((*(int *)((a4 + 0xB60))) & 4) == 0) {
        u6 = *(float *)((a4 + 0xB9C));
        u7 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u12 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
        if ((((u6 - u7) > 0.0f) - (0.0f > (u6 - u7))) == (((u6 - u12) > 0.0f) - (0.0f > (u6 - u12)))) {
            u17 = (-u6);
            if (!(0.0f > u6)) {
                u17 = u6;
            }
            if (!(u17 > 27.4249992f)) {
                u19 = ((-u6) + u7);
                if (!(0.0f > (u6 - u7))) {
                    u19 = (u6 - u7);
                }
                if (u19 > 15.0f) {
                    u21 = ((-u6) + u12);
                    if (!(0.0f > (u6 - u12))) {
                        u21 = (u6 - u12);
                    }
                    if (u21 > 15.0f) {
                        t24 = (int)((int)(nlRand()) % (int)0x3);
                        if (t24 != 0) {
                            u26 = *(float *)((a4 + 0xB9C));
                            u41 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t42 = ((u26 > 0.0f) - (0.0f > u26));
                        } else {
                            u32 = *(float *)((a4 + 0xB9C));
                            u41 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                            t42 = (-((u32 > 0.0f) - (0.0f > u32)));
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t42 * 54.8499985f), u41);
                        t463 = (a5 + 0x1);
                    } else {
                        u45 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u46 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u48 = ((-u45) + u46);
                        if (!(0.0f > (u45 - u46))) {
                            u48 = (u45 - u46);
                        }
                        if (!(20.0f > u48)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u54 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u55 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u56 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u55 - u56), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u54));
                            t57 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t57)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u62 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u63 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u64 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u63 - u64), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u62));
                                u75 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u70 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u71 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u72 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u71 - u72), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u70));
                                u75 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t86 = a5;
                            if (0.707099974f > u75) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t82 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t82, (*(float *)(((int)stk + 28))));
                                t86 = (a5 + 0x1);
                            }
                            t91 = (int)((int)(nlRand()) % (int)0x3);
                            if (t91 == 0) {
                                u93 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u94 = *(float *)((a4 + 0xAE8));
                                cpuAimPointSet(t86, 0x1, ((float)(((u93 - u94) > 0.0f) - (0.0f > (u93 - u94))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t135 = (t86 + 0x1);
                            } else {
                                t100 = nlRand();
                                t101 = ((~(((~t100) + 0x1) & 0x1)) + 0x1);
                                if ((int)t100 >= 0) {
                                    t101 = (t100 & 0x1);
                                }
                                if (t101 == 0) {
                                    u104 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u105 = *(float *)((a4 + 0xAE8));
                                    t125 = t86;
                                    u130 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                                    t131 = (((u104 - u105) > 0.0f) - (0.0f > (u104 - u105)));
                                } else {
                                    u111 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u112 = *(float *)((a4 + 0xAE8));
                                    cpuAimPointSet(t86, 0x1, ((float)(((u111 - u112) > 0.0f) - (0.0f > (u111 - u112))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                                    u119 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u120 = *(float *)((a4 + 0xAE8));
                                    t125 = (t86 + 0x1);
                                    u130 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t131 = (-(((u119 - u120) > 0.0f) - (0.0f > (u119 - u120))));
                                }
                                cpuAimPointSet(t125, 0x1, ((float)t131 * 54.8499985f), u130);
                                t135 = (t125 + 0x1);
                            }
                            t458 = t135;
                        } else {
                            u138 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u139 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u141 = ((-u138) + u139);
                            if (!(0.0f > (u138 - u139))) {
                                u141 = (u138 - u139);
                            }
                            if (!(20.0f > u141)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u148 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u149 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u150 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u149 - u150), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u148));
                                t151 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                                if (!(0.0f > t151)) {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u156 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u157 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u158 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u157 - u158), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u156));
                                    u169 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                                } else {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u164 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u165 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u166 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u165 - u166), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u164));
                                    u169 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                                }
                                t180 = a5;
                                if (0.707099974f > u169) {
                                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                    t176 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet(a5, 0x1, t176, (*(float *)(((int)stk + 28))));
                                    t180 = (a5 + 0x1);
                                }
                                cpuAimPointSet(t180, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet((t180 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t453 = ((t180 + 0x1) + 0x1);
                            } else {
                                u188 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u189 = (-u188);
                                if (!(0.0f > u188)) {
                                    u189 = u188;
                                }
                                if (!(47.5400009f > u189)) {
                                    u192 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u194 = (-u192);
                                    if (!(0.0f > u192)) {
                                        u194 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                    }
                                    if (!(47.5400009f > u194)) {
                                        u196 = *(float *)((a4 + 0xB9C));
                                        u199 = (((u1 + u2) * 0.5f) - u196);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u196))) {
                                        } else {
                                            u197 = ((u1 + u2) * 0.5f);
                                            u197 = -u197;
                                            u199 = (u197 + u196);
                                        }
                                        if (15.0f > u199) {
                                            cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t277 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                        } else {
                                            u210 = *(float *)((a4 + 0xB9C));
                                            if (((u210 > 0.0f) - (0.0f > u210)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u219 = *(float *)((a4 + 0xB9C));
                                                u221 = ((-u219) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u219 - ((u1 + u2) * 0.5f)))) {
                                                    u221 = (u219 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u221 > 30.0f) {
                                                    u224 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u224 > 0.0f) - (0.0f > u224)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    u231 = *(float *)((a4 + 0xB9C));
                                                    u253 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t254 = ((u231 > 0.0f) - (0.0f > u231));
                                                } else {
                                                    u237 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u237 > 0.0f) - (0.0f > u237)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                    u244 = *(float *)((a4 + 0xB9C));
                                                    u253 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t254 = (-((u244 > 0.0f) - (0.0f > u244)));
                                                }
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t254 * 54.8499985f), u253);
                                            } else {
                                                u258 = *(float *)((a4 + 0xB9C));
                                                u259 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(a5, 0x1, ((float)(((u259 - u258) > 0.0f) - (0.0f > (u259 - u258))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u266 = *(float *)((a4 + 0xB9C));
                                                u267 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u267 - u266) > 0.0f) - (0.0f > (u267 - u266))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            }
                                            t277 = ((a5 + 0x1) + 0x1);
                                        }
                                        t363 = t277;
                                    } else {
                                        u280 = *(float *)((a4 + 0xB9C));
                                        u283 = (((u1 + u2) * 0.5f) - u280);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u280))) {
                                        } else {
                                            u281 = ((u1 + u2) * 0.5f);
                                            u281 = -u281;
                                            u283 = (u281 + u280);
                                        }
                                        if (15.0f > u283) {
                                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u290 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u290 > 0.0f) - (0.0f > u290)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t359 = (((a5 + 0x1) + 0x1) + 0x1);
                                        } else {
                                            t297 = (int)((int)(nlRand()) % (int)0x5);
                                            t302 = a5;
                                            if (t297 == 0) {
                                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t302 = (a5 + 0x1);
                                            }
                                            u305 = *(float *)((a4 + 0xB9C));
                                            if (((u305 > 0.0f) - (0.0f > u305)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u314 = *(float *)((a4 + 0xB9C));
                                                u316 = ((-u314) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u314 - ((u1 + u2) * 0.5f)))) {
                                                    u316 = (u314 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u316 > 30.0f) {
                                                    u319 = *(float *)((a4 + 0xB9C));
                                                    u334 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t335 = ((u319 > 0.0f) - (0.0f > u319));
                                                } else {
                                                    u325 = *(float *)((a4 + 0xB9C));
                                                    u334 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t335 = ((u325 > 0.0f) - (0.0f > u325));
                                                }
                                                cpuAimPointSet(t302, 0x1, ((float)t335 * 54.8499985f), u334);
                                                t355 = (t302 + 0x1);
                                            } else {
                                                u339 = *(float *)((a4 + 0xB9C));
                                                u340 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(t302, 0x1, ((float)(((u340 - u339) > 0.0f) - (0.0f > (u340 - u339))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u347 = *(float *)((a4 + 0xB9C));
                                                u348 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((t302 + 0x1), 0x1, ((float)(((u348 - u347) > 0.0f) - (0.0f > (u348 - u347))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                t355 = ((t302 + 0x1) + 0x1);
                                            }
                                            t359 = t355;
                                        }
                                        t363 = t359;
                                    }
                                    t449 = t363;
                                } else {
                                    u366 = *(float *)((a4 + 0xB9C));
                                    u369 = (((u1 + u2) * 0.5f) - u366);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u366))) {
                                    } else {
                                        u367 = ((u1 + u2) * 0.5f);
                                        u367 = -u367;
                                        u369 = (u367 + u366);
                                    }
                                    if (15.0f > u369) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u376 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u376 > 0.0f) - (0.0f > u376)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t445 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t383 = (int)((int)(nlRand()) % (int)0x5);
                                        t388 = a5;
                                        if (t383 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t388 = (a5 + 0x1);
                                        }
                                        u391 = *(float *)((a4 + 0xB9C));
                                        if (((u391 > 0.0f) - (0.0f > u391)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u400 = *(float *)((a4 + 0xB9C));
                                            u402 = ((-u400) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u400 - ((u1 + u2) * 0.5f)))) {
                                                u402 = (u400 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u402 > 30.0f) {
                                                u405 = *(float *)((a4 + 0xB9C));
                                                u420 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t421 = ((u405 > 0.0f) - (0.0f > u405));
                                            } else {
                                                u411 = *(float *)((a4 + 0xB9C));
                                                u420 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t421 = ((u411 > 0.0f) - (0.0f > u411));
                                            }
                                            cpuAimPointSet(t388, 0x1, ((float)t421 * 54.8499985f), u420);
                                            t441 = (t388 + 0x1);
                                        } else {
                                            u425 = *(float *)((a4 + 0xB9C));
                                            u426 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t388, 0x1, ((float)(((u426 - u425) > 0.0f) - (0.0f > (u426 - u425))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u433 = *(float *)((a4 + 0xB9C));
                                            u434 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t388 + 0x1), 0x1, ((float)(((u434 - u433) > 0.0f) - (0.0f > (u434 - u433))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t441 = ((t388 + 0x1) + 0x1);
                                        }
                                        t445 = t441;
                                    }
                                    t449 = t445;
                                }
                                t453 = t449;
                            }
                            t458 = t453;
                        }
                        t463 = t458;
                    }
                    t885 = t463;
                } else {
                    u467 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u468 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u470 = ((-u467) + u468);
                    if (!(0.0f > (u467 - u468))) {
                        u470 = (u467 - u468);
                    }
                    if (!(20.0f > u470)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u476 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u477 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u478 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u477 - u478), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u476));
                        t479 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t479)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u484 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u485 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u486 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u485 - u486), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u484));
                            u497 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u492 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u493 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u494 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u493 - u494), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u492));
                            u497 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t508 = a5;
                        if (0.707099974f > u497) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t504 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t504, (*(float *)(((int)stk + 28))));
                            t508 = (a5 + 0x1);
                        }
                        t513 = (int)((int)(nlRand()) % (int)0x3);
                        if (t513 == 0) {
                            u515 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u516 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet(t508, 0x1, ((float)(((u515 - u516) > 0.0f) - (0.0f > (u515 - u516))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t557 = (t508 + 0x1);
                        } else {
                            t522 = nlRand();
                            t523 = ((~(((~t522) + 0x1) & 0x1)) + 0x1);
                            if ((int)t522 >= 0) {
                                t523 = (t522 & 0x1);
                            }
                            if (t523 == 0) {
                                u526 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u527 = *(float *)((a4 + 0xAE8));
                                t547 = t508;
                                u552 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                                t553 = (((u526 - u527) > 0.0f) - (0.0f > (u526 - u527)));
                            } else {
                                u533 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u534 = *(float *)((a4 + 0xAE8));
                                cpuAimPointSet(t508, 0x1, ((float)(((u533 - u534) > 0.0f) - (0.0f > (u533 - u534))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                                u541 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u542 = *(float *)((a4 + 0xAE8));
                                t547 = (t508 + 0x1);
                                u552 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t553 = (-(((u541 - u542) > 0.0f) - (0.0f > (u541 - u542))));
                            }
                            cpuAimPointSet(t547, 0x1, ((float)t553 * 54.8499985f), u552);
                            t557 = (t547 + 0x1);
                        }
                        t880 = t557;
                    } else {
                        u560 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u561 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u563 = ((-u560) + u561);
                        if (!(0.0f > (u560 - u561))) {
                            u563 = (u560 - u561);
                        }
                        if (!(20.0f > u563)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u570 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u571 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u572 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u571 - u572), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u570));
                            t573 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t573)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u578 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u579 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u580 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u579 - u580), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u578));
                                u591 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u586 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u587 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u588 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u587 - u588), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u586));
                                u591 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t602 = a5;
                            if (0.707099974f > u591) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t598 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t598, (*(float *)(((int)stk + 28))));
                                t602 = (a5 + 0x1);
                            }
                            cpuAimPointSet(t602, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((t602 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t875 = ((t602 + 0x1) + 0x1);
                        } else {
                            u610 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u611 = (-u610);
                            if (!(0.0f > u610)) {
                                u611 = u610;
                            }
                            if (!(47.5400009f > u611)) {
                                u614 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u616 = (-u614);
                                if (!(0.0f > u614)) {
                                    u616 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                }
                                if (!(47.5400009f > u616)) {
                                    u618 = *(float *)((a4 + 0xB9C));
                                    u621 = (((u1 + u2) * 0.5f) - u618);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u618))) {
                                    } else {
                                        u619 = ((u1 + u2) * 0.5f);
                                        u619 = -u619;
                                        u621 = (u619 + u618);
                                    }
                                    if (15.0f > u621) {
                                        cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t699 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                    } else {
                                        u632 = *(float *)((a4 + 0xB9C));
                                        if (((u632 > 0.0f) - (0.0f > u632)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u641 = *(float *)((a4 + 0xB9C));
                                            u643 = ((-u641) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u641 - ((u1 + u2) * 0.5f)))) {
                                                u643 = (u641 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u643 > 30.0f) {
                                                u646 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u646 > 0.0f) - (0.0f > u646)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u653 = *(float *)((a4 + 0xB9C));
                                                u675 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t676 = ((u653 > 0.0f) - (0.0f > u653));
                                            } else {
                                                u659 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u659 > 0.0f) - (0.0f > u659)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                u666 = *(float *)((a4 + 0xB9C));
                                                u675 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t676 = (-((u666 > 0.0f) - (0.0f > u666)));
                                            }
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t676 * 54.8499985f), u675);
                                        } else {
                                            u680 = *(float *)((a4 + 0xB9C));
                                            u681 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(a5, 0x1, ((float)(((u681 - u680) > 0.0f) - (0.0f > (u681 - u680))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u688 = *(float *)((a4 + 0xB9C));
                                            u689 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u689 - u688) > 0.0f) - (0.0f > (u689 - u688))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        }
                                        t699 = ((a5 + 0x1) + 0x1);
                                    }
                                    t785 = t699;
                                } else {
                                    u702 = *(float *)((a4 + 0xB9C));
                                    u705 = (((u1 + u2) * 0.5f) - u702);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u702))) {
                                    } else {
                                        u703 = ((u1 + u2) * 0.5f);
                                        u703 = -u703;
                                        u705 = (u703 + u702);
                                    }
                                    if (15.0f > u705) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u712 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u712 > 0.0f) - (0.0f > u712)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t781 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t719 = (int)((int)(nlRand()) % (int)0x5);
                                        t724 = a5;
                                        if (t719 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t724 = (a5 + 0x1);
                                        }
                                        u727 = *(float *)((a4 + 0xB9C));
                                        if (((u727 > 0.0f) - (0.0f > u727)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u736 = *(float *)((a4 + 0xB9C));
                                            u738 = ((-u736) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u736 - ((u1 + u2) * 0.5f)))) {
                                                u738 = (u736 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u738 > 30.0f) {
                                                u741 = *(float *)((a4 + 0xB9C));
                                                u756 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t757 = ((u741 > 0.0f) - (0.0f > u741));
                                            } else {
                                                u747 = *(float *)((a4 + 0xB9C));
                                                u756 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t757 = ((u747 > 0.0f) - (0.0f > u747));
                                            }
                                            cpuAimPointSet(t724, 0x1, ((float)t757 * 54.8499985f), u756);
                                            t777 = (t724 + 0x1);
                                        } else {
                                            u761 = *(float *)((a4 + 0xB9C));
                                            u762 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t724, 0x1, ((float)(((u762 - u761) > 0.0f) - (0.0f > (u762 - u761))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u769 = *(float *)((a4 + 0xB9C));
                                            u770 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t724 + 0x1), 0x1, ((float)(((u770 - u769) > 0.0f) - (0.0f > (u770 - u769))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t777 = ((t724 + 0x1) + 0x1);
                                        }
                                        t781 = t777;
                                    }
                                    t785 = t781;
                                }
                                t871 = t785;
                            } else {
                                u788 = *(float *)((a4 + 0xB9C));
                                u791 = (((u1 + u2) * 0.5f) - u788);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u788))) {
                                } else {
                                    u789 = ((u1 + u2) * 0.5f);
                                    u789 = -u789;
                                    u791 = (u789 + u788);
                                }
                                if (15.0f > u791) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u798 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u798 > 0.0f) - (0.0f > u798)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t867 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t805 = (int)((int)(nlRand()) % (int)0x5);
                                    t810 = a5;
                                    if (t805 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t810 = (a5 + 0x1);
                                    }
                                    u813 = *(float *)((a4 + 0xB9C));
                                    if (((u813 > 0.0f) - (0.0f > u813)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u822 = *(float *)((a4 + 0xB9C));
                                        u824 = ((-u822) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u822 - ((u1 + u2) * 0.5f)))) {
                                            u824 = (u822 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u824 > 30.0f) {
                                            u827 = *(float *)((a4 + 0xB9C));
                                            u842 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t843 = ((u827 > 0.0f) - (0.0f > u827));
                                        } else {
                                            u833 = *(float *)((a4 + 0xB9C));
                                            u842 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t843 = ((u833 > 0.0f) - (0.0f > u833));
                                        }
                                        cpuAimPointSet(t810, 0x1, ((float)t843 * 54.8499985f), u842);
                                        t863 = (t810 + 0x1);
                                    } else {
                                        u847 = *(float *)((a4 + 0xB9C));
                                        u848 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t810, 0x1, ((float)(((u848 - u847) > 0.0f) - (0.0f > (u848 - u847))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u855 = *(float *)((a4 + 0xB9C));
                                        u856 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t810 + 0x1), 0x1, ((float)(((u856 - u855) > 0.0f) - (0.0f > (u856 - u855))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t863 = ((t810 + 0x1) + 0x1);
                                    }
                                    t867 = t863;
                                }
                                t871 = t867;
                            }
                            t875 = t871;
                        }
                        t880 = t875;
                    }
                    t885 = t880;
                }
                t912 = t885;
            } else {
                t890 = (int)((int)(nlRand()) % (int)0x3);
                if (t890 != 0) {
                    u892 = *(float *)((a4 + 0xB9C));
                    u907 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    t908 = ((u892 > 0.0f) - (0.0f > u892));
                } else {
                    u898 = *(float *)((a4 + 0xB9C));
                    u907 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                    t908 = (-((u898 > 0.0f) - (0.0f > u898)));
                }
                cpuAimPointSet(a5, 0x1, ((float)t908 * 54.8499985f), u907);
                t912 = (a5 + 0x1);
            }
            t1334 = t912;
        } else {
            u916 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u917 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u919 = ((-u916) + u917);
            if (!(0.0f > (u916 - u917))) {
                u919 = (u916 - u917);
            }
            if (!(20.0f > u919)) {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u925 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u926 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u927 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u926 - u927), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u925));
                t928 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                if (!(0.0f > t928)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u933 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u934 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u935 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u934 - u935), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u933));
                    u946 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                } else {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u941 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u942 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u943 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u942 - u943), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u941));
                    u946 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                }
                t957 = a5;
                if (0.707099974f > u946) {
                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                    t953 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(a5, 0x1, t953, (*(float *)(((int)stk + 28))));
                    t957 = (a5 + 0x1);
                }
                t962 = (int)((int)(nlRand()) % (int)0x3);
                if (t962 == 0) {
                    u964 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u965 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(t957, 0x1, ((float)(((u964 - u965) > 0.0f) - (0.0f > (u964 - u965))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t1006 = (t957 + 0x1);
                } else {
                    t971 = nlRand();
                    t972 = ((~(((~t971) + 0x1) & 0x1)) + 0x1);
                    if ((int)t971 >= 0) {
                        t972 = (t971 & 0x1);
                    }
                    if (t972 == 0) {
                        u975 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u976 = *(float *)((a4 + 0xAE8));
                        t996 = t957;
                        u1001 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                        t1002 = (((u975 - u976) > 0.0f) - (0.0f > (u975 - u976)));
                    } else {
                        u982 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u983 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(t957, 0x1, ((float)(((u982 - u983) > 0.0f) - (0.0f > (u982 - u983))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                        u990 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u991 = *(float *)((a4 + 0xAE8));
                        t996 = (t957 + 0x1);
                        u1001 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t1002 = (-(((u990 - u991) > 0.0f) - (0.0f > (u990 - u991))));
                    }
                    cpuAimPointSet(t996, 0x1, ((float)t1002 * 54.8499985f), u1001);
                    t1006 = (t996 + 0x1);
                }
                t1329 = t1006;
            } else {
                u1009 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u1010 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u1012 = ((-u1009) + u1010);
                if (!(0.0f > (u1009 - u1010))) {
                    u1012 = (u1009 - u1010);
                }
                if (!(20.0f > u1012)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u1019 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1020 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1021 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1020 - u1021), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1019));
                    t1022 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                    if (!(0.0f > t1022)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u1027 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1028 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1029 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1028 - u1029), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1027));
                        u1040 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                    } else {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u1035 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1036 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1037 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1036 - u1037), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1035));
                        u1040 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                    }
                    t1051 = a5;
                    if (0.707099974f > u1040) {
                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                        t1047 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(a5, 0x1, t1047, (*(float *)(((int)stk + 28))));
                        t1051 = (a5 + 0x1);
                    }
                    cpuAimPointSet(t1051, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((t1051 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t1324 = ((t1051 + 0x1) + 0x1);
                } else {
                    u1059 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1060 = (-u1059);
                    if (!(0.0f > u1059)) {
                        u1060 = u1059;
                    }
                    if (!(47.5400009f > u1060)) {
                        u1063 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1065 = (-u1063);
                        if (!(0.0f > u1063)) {
                            u1065 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                        }
                        if (!(47.5400009f > u1065)) {
                            u1067 = *(float *)((a4 + 0xB9C));
                            u1070 = (((u1 + u2) * 0.5f) - u1067);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1067))) {
                            } else {
                                u1068 = ((u1 + u2) * 0.5f);
                                u1068 = -u1068;
                                u1070 = (u1068 + u1067);
                            }
                            if (15.0f > u1070) {
                                cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t1148 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                            } else {
                                u1081 = *(float *)((a4 + 0xB9C));
                                if (((u1081 > 0.0f) - (0.0f > u1081)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u1090 = *(float *)((a4 + 0xB9C));
                                    u1092 = ((-u1090) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u1090 - ((u1 + u2) * 0.5f)))) {
                                        u1092 = (u1090 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u1092 > 30.0f) {
                                        u1095 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)((u1095 > 0.0f) - (0.0f > u1095)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u1102 = *(float *)((a4 + 0xB9C));
                                        u1124 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t1125 = ((u1102 > 0.0f) - (0.0f > u1102));
                                    } else {
                                        u1108 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)((u1108 > 0.0f) - (0.0f > u1108)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        u1115 = *(float *)((a4 + 0xB9C));
                                        u1124 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t1125 = (-((u1115 > 0.0f) - (0.0f > u1115)));
                                    }
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t1125 * 54.8499985f), u1124);
                                } else {
                                    u1129 = *(float *)((a4 + 0xB9C));
                                    u1130 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(a5, 0x1, ((float)(((u1130 - u1129) > 0.0f) - (0.0f > (u1130 - u1129))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1137 = *(float *)((a4 + 0xB9C));
                                    u1138 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u1138 - u1137) > 0.0f) - (0.0f > (u1138 - u1137))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                }
                                t1148 = ((a5 + 0x1) + 0x1);
                            }
                            t1234 = t1148;
                        } else {
                            u1151 = *(float *)((a4 + 0xB9C));
                            u1154 = (((u1 + u2) * 0.5f) - u1151);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1151))) {
                            } else {
                                u1152 = ((u1 + u2) * 0.5f);
                                u1152 = -u1152;
                                u1154 = (u1152 + u1151);
                            }
                            if (15.0f > u1154) {
                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u1161 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1161 > 0.0f) - (0.0f > u1161)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t1230 = (((a5 + 0x1) + 0x1) + 0x1);
                            } else {
                                t1168 = (int)((int)(nlRand()) % (int)0x5);
                                t1173 = a5;
                                if (t1168 == 0) {
                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1173 = (a5 + 0x1);
                                }
                                u1176 = *(float *)((a4 + 0xB9C));
                                if (((u1176 > 0.0f) - (0.0f > u1176)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u1185 = *(float *)((a4 + 0xB9C));
                                    u1187 = ((-u1185) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u1185 - ((u1 + u2) * 0.5f)))) {
                                        u1187 = (u1185 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u1187 > 30.0f) {
                                        u1190 = *(float *)((a4 + 0xB9C));
                                        u1205 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t1206 = ((u1190 > 0.0f) - (0.0f > u1190));
                                    } else {
                                        u1196 = *(float *)((a4 + 0xB9C));
                                        u1205 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t1206 = ((u1196 > 0.0f) - (0.0f > u1196));
                                    }
                                    cpuAimPointSet(t1173, 0x1, ((float)t1206 * 54.8499985f), u1205);
                                    t1226 = (t1173 + 0x1);
                                } else {
                                    u1210 = *(float *)((a4 + 0xB9C));
                                    u1211 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(t1173, 0x1, ((float)(((u1211 - u1210) > 0.0f) - (0.0f > (u1211 - u1210))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1218 = *(float *)((a4 + 0xB9C));
                                    u1219 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((t1173 + 0x1), 0x1, ((float)(((u1219 - u1218) > 0.0f) - (0.0f > (u1219 - u1218))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t1226 = ((t1173 + 0x1) + 0x1);
                                }
                                t1230 = t1226;
                            }
                            t1234 = t1230;
                        }
                        t1320 = t1234;
                    } else {
                        u1237 = *(float *)((a4 + 0xB9C));
                        u1240 = (((u1 + u2) * 0.5f) - u1237);
                        if (!(0.0f > (((u1 + u2) * 0.5f) - u1237))) {
                        } else {
                            u1238 = ((u1 + u2) * 0.5f);
                            u1238 = -u1238;
                            u1240 = (u1238 + u1237);
                        }
                        if (15.0f > u1240) {
                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u1247 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1247 > 0.0f) - (0.0f > u1247)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t1316 = (((a5 + 0x1) + 0x1) + 0x1);
                        } else {
                            t1254 = (int)((int)(nlRand()) % (int)0x5);
                            t1259 = a5;
                            if (t1254 == 0) {
                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t1259 = (a5 + 0x1);
                            }
                            u1262 = *(float *)((a4 + 0xB9C));
                            if (((u1262 > 0.0f) - (0.0f > u1262)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                u1271 = *(float *)((a4 + 0xB9C));
                                u1273 = ((-u1271) + ((u1 + u2) * 0.5f));
                                if (!(0.0f > (u1271 - ((u1 + u2) * 0.5f)))) {
                                    u1273 = (u1271 - ((u1 + u2) * 0.5f));
                                }
                                if (u1273 > 30.0f) {
                                    u1276 = *(float *)((a4 + 0xB9C));
                                    u1291 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t1292 = ((u1276 > 0.0f) - (0.0f > u1276));
                                } else {
                                    u1282 = *(float *)((a4 + 0xB9C));
                                    u1291 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                    t1292 = ((u1282 > 0.0f) - (0.0f > u1282));
                                }
                                cpuAimPointSet(t1259, 0x1, ((float)t1292 * 54.8499985f), u1291);
                                t1312 = (t1259 + 0x1);
                            } else {
                                u1296 = *(float *)((a4 + 0xB9C));
                                u1297 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                cpuAimPointSet(t1259, 0x1, ((float)(((u1297 - u1296) > 0.0f) - (0.0f > (u1297 - u1296))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u1304 = *(float *)((a4 + 0xB9C));
                                u1305 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                cpuAimPointSet((t1259 + 0x1), 0x1, ((float)(((u1305 - u1304) > 0.0f) - (0.0f > (u1305 - u1304))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t1312 = ((t1259 + 0x1) + 0x1);
                            }
                            t1316 = t1312;
                        }
                        t1320 = t1316;
                    }
                    t1324 = t1320;
                }
                t1329 = t1324;
            }
            t1334 = t1329;
        }
        t2754 = t1334;
    } else {
        t1338 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
        if (!(10.0f > t1338)) {
            u1339 = *(float *)((a4 + 0xB9C));
            u1340 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u1345 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u1339 - u1340) > 0.0f) - (0.0f > (u1339 - u1340))) == (((u1339 - u1345) > 0.0f) - (0.0f > (u1339 - u1345)))) {
                u1350 = (-u1339);
                if (!(0.0f > u1339)) {
                    u1350 = u1339;
                }
                if (!(u1350 > 27.4249992f)) {
                    u1352 = ((-u1339) + u1340);
                    if (!(0.0f > (u1339 - u1340))) {
                        u1352 = (u1339 - u1340);
                    }
                    if (u1352 > 15.0f) {
                        u1354 = ((-u1339) + u1345);
                        if (!(0.0f > (u1339 - u1345))) {
                            u1354 = (u1339 - u1345);
                        }
                        if (u1354 > 15.0f) {
                            t1357 = (int)((int)(nlRand()) % (int)0x3);
                            if (t1357 != 0) {
                                u1359 = *(float *)((a4 + 0xB9C));
                                u1374 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                t1375 = ((u1359 > 0.0f) - (0.0f > u1359));
                            } else {
                                u1365 = *(float *)((a4 + 0xB9C));
                                u1374 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                t1375 = (-((u1365 > 0.0f) - (0.0f > u1365)));
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t1375 * 54.8499985f), u1374);
                            t1796 = (a5 + 0x1);
                        } else {
                            u1378 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1379 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1381 = ((-u1378) + u1379);
                            if (!(0.0f > (u1378 - u1379))) {
                                u1381 = (u1378 - u1379);
                            }
                            if (!(20.0f > u1381)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1387 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1388 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1389 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1388 - u1389), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1387));
                                t1390 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                                if (!(0.0f > t1390)) {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1395 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1396 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1397 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1396 - u1397), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1395));
                                    u1408 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                                } else {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1403 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1404 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1405 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1404 - u1405), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1403));
                                    u1408 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                                }
                                t1419 = a5;
                                if (0.707099974f > u1408) {
                                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                    t1415 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet(a5, 0x1, t1415, (*(float *)(((int)stk + 28))));
                                    t1419 = (a5 + 0x1);
                                }
                                t1424 = (int)((int)(nlRand()) % (int)0x3);
                                if (t1424 == 0) {
                                    u1426 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1427 = *(float *)((a4 + 0xAE8));
                                    cpuAimPointSet(t1419, 0x1, ((float)(((u1426 - u1427) > 0.0f) - (0.0f > (u1426 - u1427))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t1468 = (t1419 + 0x1);
                                } else {
                                    t1433 = nlRand();
                                    t1434 = ((~(((~t1433) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t1433 >= 0) {
                                        t1434 = (t1433 & 0x1);
                                    }
                                    if (t1434 == 0) {
                                        u1437 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1438 = *(float *)((a4 + 0xAE8));
                                        t1458 = t1419;
                                        u1463 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                                        t1464 = (((u1437 - u1438) > 0.0f) - (0.0f > (u1437 - u1438)));
                                    } else {
                                        u1444 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1445 = *(float *)((a4 + 0xAE8));
                                        cpuAimPointSet(t1419, 0x1, ((float)(((u1444 - u1445) > 0.0f) - (0.0f > (u1444 - u1445))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                                        u1452 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1453 = *(float *)((a4 + 0xAE8));
                                        t1458 = (t1419 + 0x1);
                                        u1463 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t1464 = (-(((u1452 - u1453) > 0.0f) - (0.0f > (u1452 - u1453))));
                                    }
                                    cpuAimPointSet(t1458, 0x1, ((float)t1464 * 54.8499985f), u1463);
                                    t1468 = (t1458 + 0x1);
                                }
                                t1791 = t1468;
                            } else {
                                u1471 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1472 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1474 = ((-u1471) + u1472);
                                if (!(0.0f > (u1471 - u1472))) {
                                    u1474 = (u1471 - u1472);
                                }
                                if (!(20.0f > u1474)) {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1481 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1482 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1483 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1482 - u1483), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1481));
                                    t1484 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                                    if (!(0.0f > t1484)) {
                                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                        u1489 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u1490 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1491 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1490 - u1491), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1489));
                                        u1502 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                                    } else {
                                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                        u1497 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u1498 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1499 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1498 - u1499), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1497));
                                        u1502 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                                    }
                                    t1513 = a5;
                                    if (0.707099974f > u1502) {
                                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                        t1509 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet(a5, 0x1, t1509, (*(float *)(((int)stk + 28))));
                                        t1513 = (a5 + 0x1);
                                    }
                                    cpuAimPointSet(t1513, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet((t1513 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t1786 = ((t1513 + 0x1) + 0x1);
                                } else {
                                    u1521 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1522 = (-u1521);
                                    if (!(0.0f > u1521)) {
                                        u1522 = u1521;
                                    }
                                    if (!(47.5400009f > u1522)) {
                                        u1525 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u1527 = (-u1525);
                                        if (!(0.0f > u1525)) {
                                            u1527 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                        }
                                        if (!(47.5400009f > u1527)) {
                                            u1529 = *(float *)((a4 + 0xB9C));
                                            u1532 = (((u1 + u2) * 0.5f) - u1529);
                                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1529))) {
                                            } else {
                                                u1530 = ((u1 + u2) * 0.5f);
                                                u1530 = -u1530;
                                                u1532 = (u1530 + u1529);
                                            }
                                            if (15.0f > u1532) {
                                                cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t1610 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                            } else {
                                                u1543 = *(float *)((a4 + 0xB9C));
                                                if (((u1543 > 0.0f) - (0.0f > u1543)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                    u1552 = *(float *)((a4 + 0xB9C));
                                                    u1554 = ((-u1552) + ((u1 + u2) * 0.5f));
                                                    if (!(0.0f > (u1552 - ((u1 + u2) * 0.5f)))) {
                                                        u1554 = (u1552 - ((u1 + u2) * 0.5f));
                                                    }
                                                    if (u1554 > 30.0f) {
                                                        u1557 = *(float *)((a4 + 0xB9C));
                                                        cpuAimPointSet(a5, 0x1, ((float)((u1557 > 0.0f) - (0.0f > u1557)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                        u1564 = *(float *)((a4 + 0xB9C));
                                                        u1586 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                        t1587 = ((u1564 > 0.0f) - (0.0f > u1564));
                                                    } else {
                                                        u1570 = *(float *)((a4 + 0xB9C));
                                                        cpuAimPointSet(a5, 0x1, ((float)((u1570 > 0.0f) - (0.0f > u1570)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                        u1577 = *(float *)((a4 + 0xB9C));
                                                        u1586 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                        t1587 = (-((u1577 > 0.0f) - (0.0f > u1577)));
                                                    }
                                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t1587 * 54.8499985f), u1586);
                                                } else {
                                                    u1591 = *(float *)((a4 + 0xB9C));
                                                    u1592 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    cpuAimPointSet(a5, 0x1, ((float)(((u1592 - u1591) > 0.0f) - (0.0f > (u1592 - u1591))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    u1599 = *(float *)((a4 + 0xB9C));
                                                    u1600 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u1600 - u1599) > 0.0f) - (0.0f > (u1600 - u1599))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                }
                                                t1610 = ((a5 + 0x1) + 0x1);
                                            }
                                            t1696 = t1610;
                                        } else {
                                            u1613 = *(float *)((a4 + 0xB9C));
                                            u1616 = (((u1 + u2) * 0.5f) - u1613);
                                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1613))) {
                                            } else {
                                                u1614 = ((u1 + u2) * 0.5f);
                                                u1614 = -u1614;
                                                u1616 = (u1614 + u1613);
                                            }
                                            if (15.0f > u1616) {
                                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u1623 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1623 > 0.0f) - (0.0f > u1623)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t1692 = (((a5 + 0x1) + 0x1) + 0x1);
                                            } else {
                                                t1630 = (int)((int)(nlRand()) % (int)0x5);
                                                t1635 = a5;
                                                if (t1630 == 0) {
                                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    t1635 = (a5 + 0x1);
                                                }
                                                u1638 = *(float *)((a4 + 0xB9C));
                                                if (((u1638 > 0.0f) - (0.0f > u1638)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                    u1647 = *(float *)((a4 + 0xB9C));
                                                    u1649 = ((-u1647) + ((u1 + u2) * 0.5f));
                                                    if (!(0.0f > (u1647 - ((u1 + u2) * 0.5f)))) {
                                                        u1649 = (u1647 - ((u1 + u2) * 0.5f));
                                                    }
                                                    if (u1649 > 30.0f) {
                                                        u1652 = *(float *)((a4 + 0xB9C));
                                                        u1667 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                        t1668 = ((u1652 > 0.0f) - (0.0f > u1652));
                                                    } else {
                                                        u1658 = *(float *)((a4 + 0xB9C));
                                                        u1667 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                        t1668 = ((u1658 > 0.0f) - (0.0f > u1658));
                                                    }
                                                    cpuAimPointSet(t1635, 0x1, ((float)t1668 * 54.8499985f), u1667);
                                                    t1688 = (t1635 + 0x1);
                                                } else {
                                                    u1672 = *(float *)((a4 + 0xB9C));
                                                    u1673 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    cpuAimPointSet(t1635, 0x1, ((float)(((u1673 - u1672) > 0.0f) - (0.0f > (u1673 - u1672))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    u1680 = *(float *)((a4 + 0xB9C));
                                                    u1681 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                    cpuAimPointSet((t1635 + 0x1), 0x1, ((float)(((u1681 - u1680) > 0.0f) - (0.0f > (u1681 - u1680))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                    t1688 = ((t1635 + 0x1) + 0x1);
                                                }
                                                t1692 = t1688;
                                            }
                                            t1696 = t1692;
                                        }
                                        t1782 = t1696;
                                    } else {
                                        u1699 = *(float *)((a4 + 0xB9C));
                                        u1702 = (((u1 + u2) * 0.5f) - u1699);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u1699))) {
                                        } else {
                                            u1700 = ((u1 + u2) * 0.5f);
                                            u1700 = -u1700;
                                            u1702 = (u1700 + u1699);
                                        }
                                        if (15.0f > u1702) {
                                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u1709 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1709 > 0.0f) - (0.0f > u1709)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t1778 = (((a5 + 0x1) + 0x1) + 0x1);
                                        } else {
                                            t1716 = (int)((int)(nlRand()) % (int)0x5);
                                            t1721 = a5;
                                            if (t1716 == 0) {
                                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t1721 = (a5 + 0x1);
                                            }
                                            u1724 = *(float *)((a4 + 0xB9C));
                                            if (((u1724 > 0.0f) - (0.0f > u1724)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u1733 = *(float *)((a4 + 0xB9C));
                                                u1735 = ((-u1733) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u1733 - ((u1 + u2) * 0.5f)))) {
                                                    u1735 = (u1733 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u1735 > 30.0f) {
                                                    u1738 = *(float *)((a4 + 0xB9C));
                                                    u1753 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t1754 = ((u1738 > 0.0f) - (0.0f > u1738));
                                                } else {
                                                    u1744 = *(float *)((a4 + 0xB9C));
                                                    u1753 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t1754 = ((u1744 > 0.0f) - (0.0f > u1744));
                                                }
                                                cpuAimPointSet(t1721, 0x1, ((float)t1754 * 54.8499985f), u1753);
                                                t1774 = (t1721 + 0x1);
                                            } else {
                                                u1758 = *(float *)((a4 + 0xB9C));
                                                u1759 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(t1721, 0x1, ((float)(((u1759 - u1758) > 0.0f) - (0.0f > (u1759 - u1758))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u1766 = *(float *)((a4 + 0xB9C));
                                                u1767 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((t1721 + 0x1), 0x1, ((float)(((u1767 - u1766) > 0.0f) - (0.0f > (u1767 - u1766))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                t1774 = ((t1721 + 0x1) + 0x1);
                                            }
                                            t1778 = t1774;
                                        }
                                        t1782 = t1778;
                                    }
                                    t1786 = t1782;
                                }
                                t1791 = t1786;
                            }
                            t1796 = t1791;
                        }
                        t2218 = t1796;
                    } else {
                        u1800 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1801 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1803 = ((-u1800) + u1801);
                        if (!(0.0f > (u1800 - u1801))) {
                            u1803 = (u1800 - u1801);
                        }
                        if (!(20.0f > u1803)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1809 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1810 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1811 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1810 - u1811), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1809));
                            t1812 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t1812)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1817 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1818 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1819 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1818 - u1819), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1817));
                                u1830 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1825 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1826 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1827 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1826 - u1827), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1825));
                                u1830 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t1841 = a5;
                            if (0.707099974f > u1830) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t1837 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t1837, (*(float *)(((int)stk + 28))));
                                t1841 = (a5 + 0x1);
                            }
                            t1846 = (int)((int)(nlRand()) % (int)0x3);
                            if (t1846 == 0) {
                                u1848 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1849 = *(float *)((a4 + 0xAE8));
                                cpuAimPointSet(t1841, 0x1, ((float)(((u1848 - u1849) > 0.0f) - (0.0f > (u1848 - u1849))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t1890 = (t1841 + 0x1);
                            } else {
                                t1855 = nlRand();
                                t1856 = ((~(((~t1855) + 0x1) & 0x1)) + 0x1);
                                if ((int)t1855 >= 0) {
                                    t1856 = (t1855 & 0x1);
                                }
                                if (t1856 == 0) {
                                    u1859 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1860 = *(float *)((a4 + 0xAE8));
                                    t1880 = t1841;
                                    u1885 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                                    t1886 = (((u1859 - u1860) > 0.0f) - (0.0f > (u1859 - u1860)));
                                } else {
                                    u1866 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1867 = *(float *)((a4 + 0xAE8));
                                    cpuAimPointSet(t1841, 0x1, ((float)(((u1866 - u1867) > 0.0f) - (0.0f > (u1866 - u1867))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                                    u1874 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1875 = *(float *)((a4 + 0xAE8));
                                    t1880 = (t1841 + 0x1);
                                    u1885 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t1886 = (-(((u1874 - u1875) > 0.0f) - (0.0f > (u1874 - u1875))));
                                }
                                cpuAimPointSet(t1880, 0x1, ((float)t1886 * 54.8499985f), u1885);
                                t1890 = (t1880 + 0x1);
                            }
                            t2213 = t1890;
                        } else {
                            u1893 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1894 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1896 = ((-u1893) + u1894);
                            if (!(0.0f > (u1893 - u1894))) {
                                u1896 = (u1893 - u1894);
                            }
                            if (!(20.0f > u1896)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1903 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1904 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1905 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1904 - u1905), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1903));
                                t1906 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                                if (!(0.0f > t1906)) {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1911 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1912 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1913 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1912 - u1913), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1911));
                                    u1924 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                                } else {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1919 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1920 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1921 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1920 - u1921), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1919));
                                    u1924 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                                }
                                t1935 = a5;
                                if (0.707099974f > u1924) {
                                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                    t1931 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet(a5, 0x1, t1931, (*(float *)(((int)stk + 28))));
                                    t1935 = (a5 + 0x1);
                                }
                                cpuAimPointSet(t1935, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet((t1935 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t2208 = ((t1935 + 0x1) + 0x1);
                            } else {
                                u1943 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1944 = (-u1943);
                                if (!(0.0f > u1943)) {
                                    u1944 = u1943;
                                }
                                if (!(47.5400009f > u1944)) {
                                    u1947 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1949 = (-u1947);
                                    if (!(0.0f > u1947)) {
                                        u1949 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                    }
                                    if (!(47.5400009f > u1949)) {
                                        u1951 = *(float *)((a4 + 0xB9C));
                                        u1954 = (((u1 + u2) * 0.5f) - u1951);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u1951))) {
                                        } else {
                                            u1952 = ((u1 + u2) * 0.5f);
                                            u1952 = -u1952;
                                            u1954 = (u1952 + u1951);
                                        }
                                        if (15.0f > u1954) {
                                            cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2032 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                        } else {
                                            u1965 = *(float *)((a4 + 0xB9C));
                                            if (((u1965 > 0.0f) - (0.0f > u1965)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u1974 = *(float *)((a4 + 0xB9C));
                                                u1976 = ((-u1974) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u1974 - ((u1 + u2) * 0.5f)))) {
                                                    u1976 = (u1974 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u1976 > 30.0f) {
                                                    u1979 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u1979 > 0.0f) - (0.0f > u1979)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    u1986 = *(float *)((a4 + 0xB9C));
                                                    u2008 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t2009 = ((u1986 > 0.0f) - (0.0f > u1986));
                                                } else {
                                                    u1992 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u1992 > 0.0f) - (0.0f > u1992)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                    u1999 = *(float *)((a4 + 0xB9C));
                                                    u2008 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t2009 = (-((u1999 > 0.0f) - (0.0f > u1999)));
                                                }
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2009 * 54.8499985f), u2008);
                                            } else {
                                                u2013 = *(float *)((a4 + 0xB9C));
                                                u2014 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(a5, 0x1, ((float)(((u2014 - u2013) > 0.0f) - (0.0f > (u2014 - u2013))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u2021 = *(float *)((a4 + 0xB9C));
                                                u2022 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u2022 - u2021) > 0.0f) - (0.0f > (u2022 - u2021))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            }
                                            t2032 = ((a5 + 0x1) + 0x1);
                                        }
                                        t2118 = t2032;
                                    } else {
                                        u2035 = *(float *)((a4 + 0xB9C));
                                        u2038 = (((u1 + u2) * 0.5f) - u2035);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u2035))) {
                                        } else {
                                            u2036 = ((u1 + u2) * 0.5f);
                                            u2036 = -u2036;
                                            u2038 = (u2036 + u2035);
                                        }
                                        if (15.0f > u2038) {
                                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2045 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2045 > 0.0f) - (0.0f > u2045)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2114 = (((a5 + 0x1) + 0x1) + 0x1);
                                        } else {
                                            t2052 = (int)((int)(nlRand()) % (int)0x5);
                                            t2057 = a5;
                                            if (t2052 == 0) {
                                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t2057 = (a5 + 0x1);
                                            }
                                            u2060 = *(float *)((a4 + 0xB9C));
                                            if (((u2060 > 0.0f) - (0.0f > u2060)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u2069 = *(float *)((a4 + 0xB9C));
                                                u2071 = ((-u2069) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u2069 - ((u1 + u2) * 0.5f)))) {
                                                    u2071 = (u2069 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u2071 > 30.0f) {
                                                    u2074 = *(float *)((a4 + 0xB9C));
                                                    u2089 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t2090 = ((u2074 > 0.0f) - (0.0f > u2074));
                                                } else {
                                                    u2080 = *(float *)((a4 + 0xB9C));
                                                    u2089 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t2090 = ((u2080 > 0.0f) - (0.0f > u2080));
                                                }
                                                cpuAimPointSet(t2057, 0x1, ((float)t2090 * 54.8499985f), u2089);
                                                t2110 = (t2057 + 0x1);
                                            } else {
                                                u2094 = *(float *)((a4 + 0xB9C));
                                                u2095 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(t2057, 0x1, ((float)(((u2095 - u2094) > 0.0f) - (0.0f > (u2095 - u2094))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u2102 = *(float *)((a4 + 0xB9C));
                                                u2103 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((t2057 + 0x1), 0x1, ((float)(((u2103 - u2102) > 0.0f) - (0.0f > (u2103 - u2102))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                t2110 = ((t2057 + 0x1) + 0x1);
                                            }
                                            t2114 = t2110;
                                        }
                                        t2118 = t2114;
                                    }
                                    t2204 = t2118;
                                } else {
                                    u2121 = *(float *)((a4 + 0xB9C));
                                    u2124 = (((u1 + u2) * 0.5f) - u2121);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u2121))) {
                                    } else {
                                        u2122 = ((u1 + u2) * 0.5f);
                                        u2122 = -u2122;
                                        u2124 = (u2122 + u2121);
                                    }
                                    if (15.0f > u2124) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2131 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2131 > 0.0f) - (0.0f > u2131)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2200 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t2138 = (int)((int)(nlRand()) % (int)0x5);
                                        t2143 = a5;
                                        if (t2138 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2143 = (a5 + 0x1);
                                        }
                                        u2146 = *(float *)((a4 + 0xB9C));
                                        if (((u2146 > 0.0f) - (0.0f > u2146)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u2155 = *(float *)((a4 + 0xB9C));
                                            u2157 = ((-u2155) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u2155 - ((u1 + u2) * 0.5f)))) {
                                                u2157 = (u2155 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u2157 > 30.0f) {
                                                u2160 = *(float *)((a4 + 0xB9C));
                                                u2175 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t2176 = ((u2160 > 0.0f) - (0.0f > u2160));
                                            } else {
                                                u2166 = *(float *)((a4 + 0xB9C));
                                                u2175 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t2176 = ((u2166 > 0.0f) - (0.0f > u2166));
                                            }
                                            cpuAimPointSet(t2143, 0x1, ((float)t2176 * 54.8499985f), u2175);
                                            t2196 = (t2143 + 0x1);
                                        } else {
                                            u2180 = *(float *)((a4 + 0xB9C));
                                            u2181 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t2143, 0x1, ((float)(((u2181 - u2180) > 0.0f) - (0.0f > (u2181 - u2180))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2188 = *(float *)((a4 + 0xB9C));
                                            u2189 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t2143 + 0x1), 0x1, ((float)(((u2189 - u2188) > 0.0f) - (0.0f > (u2189 - u2188))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t2196 = ((t2143 + 0x1) + 0x1);
                                        }
                                        t2200 = t2196;
                                    }
                                    t2204 = t2200;
                                }
                                t2208 = t2204;
                            }
                            t2213 = t2208;
                        }
                        t2218 = t2213;
                    }
                    t2245 = t2218;
                } else {
                    t2223 = (int)((int)(nlRand()) % (int)0x3);
                    if (t2223 != 0) {
                        u2225 = *(float *)((a4 + 0xB9C));
                        u2240 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t2241 = ((u2225 > 0.0f) - (0.0f > u2225));
                    } else {
                        u2231 = *(float *)((a4 + 0xB9C));
                        u2240 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        t2241 = (-((u2231 > 0.0f) - (0.0f > u2231)));
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t2241 * 54.8499985f), u2240);
                    t2245 = (a5 + 0x1);
                }
                t2667 = t2245;
            } else {
                u2249 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2250 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2252 = ((-u2249) + u2250);
                if (!(0.0f > (u2249 - u2250))) {
                    u2252 = (u2249 - u2250);
                }
                if (!(20.0f > u2252)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u2258 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u2259 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u2260 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u2259 - u2260), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2258));
                    t2261 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                    if (!(0.0f > t2261)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u2266 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2267 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2268 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u2267 - u2268), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2266));
                        u2279 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                    } else {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u2274 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2275 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2276 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u2275 - u2276), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2274));
                        u2279 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                    }
                    t2290 = a5;
                    if (0.707099974f > u2279) {
                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                        t2286 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(a5, 0x1, t2286, (*(float *)(((int)stk + 28))));
                        t2290 = (a5 + 0x1);
                    }
                    t2295 = (int)((int)(nlRand()) % (int)0x3);
                    if (t2295 == 0) {
                        u2297 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2298 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(t2290, 0x1, ((float)(((u2297 - u2298) > 0.0f) - (0.0f > (u2297 - u2298))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t2339 = (t2290 + 0x1);
                    } else {
                        t2304 = nlRand();
                        t2305 = ((~(((~t2304) + 0x1) & 0x1)) + 0x1);
                        if ((int)t2304 >= 0) {
                            t2305 = (t2304 & 0x1);
                        }
                        if (t2305 == 0) {
                            u2308 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2309 = *(float *)((a4 + 0xAE8));
                            t2329 = t2290;
                            u2334 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
                            t2335 = (((u2308 - u2309) > 0.0f) - (0.0f > (u2308 - u2309)));
                        } else {
                            u2315 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2316 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet(t2290, 0x1, ((float)(((u2315 - u2316) > 0.0f) - (0.0f > (u2315 - u2316))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 106.964996f));
                            u2323 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2324 = *(float *)((a4 + 0xAE8));
                            t2329 = (t2290 + 0x1);
                            u2334 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t2335 = (-(((u2323 - u2324) > 0.0f) - (0.0f > (u2323 - u2324))));
                        }
                        cpuAimPointSet(t2329, 0x1, ((float)t2335 * 54.8499985f), u2334);
                        t2339 = (t2329 + 0x1);
                    }
                    t2662 = t2339;
                } else {
                    u2342 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u2343 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u2345 = ((-u2342) + u2343);
                    if (!(0.0f > (u2342 - u2343))) {
                        u2345 = (u2342 - u2343);
                    }
                    if (!(20.0f > u2345)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u2352 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2353 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2354 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u2353 - u2354), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2352));
                        t2355 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t2355)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u2360 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2361 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2362 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u2361 - u2362), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2360));
                            u2373 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u2368 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2369 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2370 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u2369 - u2370), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2368));
                            u2373 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t2384 = a5;
                        if (0.707099974f > u2373) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t2380 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t2380, (*(float *)(((int)stk + 28))));
                            t2384 = (a5 + 0x1);
                        }
                        cpuAimPointSet(t2384, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((t2384 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t2657 = ((t2384 + 0x1) + 0x1);
                    } else {
                        u2392 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2393 = (-u2392);
                        if (!(0.0f > u2392)) {
                            u2393 = u2392;
                        }
                        if (!(47.5400009f > u2393)) {
                            u2396 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2398 = (-u2396);
                            if (!(0.0f > u2396)) {
                                u2398 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)));
                            }
                            if (!(47.5400009f > u2398)) {
                                u2400 = *(float *)((a4 + 0xB9C));
                                u2403 = (((u1 + u2) * 0.5f) - u2400);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u2400))) {
                                } else {
                                    u2401 = ((u1 + u2) * 0.5f);
                                    u2401 = -u2401;
                                    u2403 = (u2401 + u2400);
                                }
                                if (15.0f > u2403) {
                                    cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t2481 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                } else {
                                    u2414 = *(float *)((a4 + 0xB9C));
                                    if (((u2414 > 0.0f) - (0.0f > u2414)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u2423 = *(float *)((a4 + 0xB9C));
                                        u2425 = ((-u2423) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u2423 - ((u1 + u2) * 0.5f)))) {
                                            u2425 = (u2423 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u2425 > 30.0f) {
                                            u2428 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u2428 > 0.0f) - (0.0f > u2428)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2435 = *(float *)((a4 + 0xB9C));
                                            u2457 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t2458 = ((u2435 > 0.0f) - (0.0f > u2435));
                                        } else {
                                            u2441 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u2441 > 0.0f) - (0.0f > u2441)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            u2448 = *(float *)((a4 + 0xB9C));
                                            u2457 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t2458 = (-((u2448 > 0.0f) - (0.0f > u2448)));
                                        }
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2458 * 54.8499985f), u2457);
                                    } else {
                                        u2462 = *(float *)((a4 + 0xB9C));
                                        u2463 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(a5, 0x1, ((float)(((u2463 - u2462) > 0.0f) - (0.0f > (u2463 - u2462))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2470 = *(float *)((a4 + 0xB9C));
                                        u2471 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u2471 - u2470) > 0.0f) - (0.0f > (u2471 - u2470))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    }
                                    t2481 = ((a5 + 0x1) + 0x1);
                                }
                                t2567 = t2481;
                            } else {
                                u2484 = *(float *)((a4 + 0xB9C));
                                u2487 = (((u1 + u2) * 0.5f) - u2484);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u2484))) {
                                } else {
                                    u2485 = ((u1 + u2) * 0.5f);
                                    u2485 = -u2485;
                                    u2487 = (u2485 + u2484);
                                }
                                if (15.0f > u2487) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u2494 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2494 > 0.0f) - (0.0f > u2494)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t2563 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t2501 = (int)((int)(nlRand()) % (int)0x5);
                                    t2506 = a5;
                                    if (t2501 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2506 = (a5 + 0x1);
                                    }
                                    u2509 = *(float *)((a4 + 0xB9C));
                                    if (((u2509 > 0.0f) - (0.0f > u2509)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u2518 = *(float *)((a4 + 0xB9C));
                                        u2520 = ((-u2518) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u2518 - ((u1 + u2) * 0.5f)))) {
                                            u2520 = (u2518 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u2520 > 30.0f) {
                                            u2523 = *(float *)((a4 + 0xB9C));
                                            u2538 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t2539 = ((u2523 > 0.0f) - (0.0f > u2523));
                                        } else {
                                            u2529 = *(float *)((a4 + 0xB9C));
                                            u2538 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t2539 = ((u2529 > 0.0f) - (0.0f > u2529));
                                        }
                                        cpuAimPointSet(t2506, 0x1, ((float)t2539 * 54.8499985f), u2538);
                                        t2559 = (t2506 + 0x1);
                                    } else {
                                        u2543 = *(float *)((a4 + 0xB9C));
                                        u2544 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t2506, 0x1, ((float)(((u2544 - u2543) > 0.0f) - (0.0f > (u2544 - u2543))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2551 = *(float *)((a4 + 0xB9C));
                                        u2552 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t2506 + 0x1), 0x1, ((float)(((u2552 - u2551) > 0.0f) - (0.0f > (u2552 - u2551))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t2559 = ((t2506 + 0x1) + 0x1);
                                    }
                                    t2563 = t2559;
                                }
                                t2567 = t2563;
                            }
                            t2653 = t2567;
                        } else {
                            u2570 = *(float *)((a4 + 0xB9C));
                            u2573 = (((u1 + u2) * 0.5f) - u2570);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u2570))) {
                            } else {
                                u2571 = ((u1 + u2) * 0.5f);
                                u2571 = -u2571;
                                u2573 = (u2571 + u2570);
                            }
                            if (15.0f > u2573) {
                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u2580 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2580 > 0.0f) - (0.0f > u2580)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t2649 = (((a5 + 0x1) + 0x1) + 0x1);
                            } else {
                                t2587 = (int)((int)(nlRand()) % (int)0x5);
                                t2592 = a5;
                                if (t2587 == 0) {
                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t2592 = (a5 + 0x1);
                                }
                                u2595 = *(float *)((a4 + 0xB9C));
                                if (((u2595 > 0.0f) - (0.0f > u2595)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u2604 = *(float *)((a4 + 0xB9C));
                                    u2606 = ((-u2604) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u2604 - ((u1 + u2) * 0.5f)))) {
                                        u2606 = (u2604 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u2606 > 30.0f) {
                                        u2609 = *(float *)((a4 + 0xB9C));
                                        u2624 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t2625 = ((u2609 > 0.0f) - (0.0f > u2609));
                                    } else {
                                        u2615 = *(float *)((a4 + 0xB9C));
                                        u2624 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t2625 = ((u2615 > 0.0f) - (0.0f > u2615));
                                    }
                                    cpuAimPointSet(t2592, 0x1, ((float)t2625 * 54.8499985f), u2624);
                                    t2645 = (t2592 + 0x1);
                                } else {
                                    u2629 = *(float *)((a4 + 0xB9C));
                                    u2630 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(t2592, 0x1, ((float)(((u2630 - u2629) > 0.0f) - (0.0f > (u2630 - u2629))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u2637 = *(float *)((a4 + 0xB9C));
                                    u2638 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((t2592 + 0x1), 0x1, ((float)(((u2638 - u2637) > 0.0f) - (0.0f > (u2638 - u2637))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t2645 = ((t2592 + 0x1) + 0x1);
                                }
                                t2649 = t2645;
                            }
                            t2653 = t2649;
                        }
                        t2657 = t2653;
                    }
                    t2662 = t2657;
                }
                t2667 = t2662;
            }
            t2749 = t2667;
        } else {
            u2671 = *(float *)((a4 + 0xB9C));
            u2672 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2674 = ((-u2671) + u2672);
            if (!(0.0f > (u2671 - u2672))) {
                u2674 = (u2671 - u2672);
            }
            t2696 = a5;
            if (u2674 > 15.0f) {
                if (!(0.0f > (u2671 - (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8)))))) {
                    u2681 = (u2671 - (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))));
                } else {
                    u2681 = ((-u2671) + (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))));
                }
                t2687 = a5;
                if (u2681 > 15.0f) {
                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t2687 = (a5 + 0x1);
                }
                t2696 = t2687;
            }
            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
            u2708 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2709 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2710 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            *(Stk3 *)(((int)stk + 8)) = vecMake((u2709 - u2710), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2708));
            t2711 = cpuVecCos(*(Stk4 *)((int)stk + 8));
            if (!(0.0f > t2711)) {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u2716 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u2717 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2718 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u2717 - u2718), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2716));
                u2729 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
            } else {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u2724 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u2725 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2726 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u2725 - u2726), 0.0f, ((*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2724));
                u2729 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
            }
            t2740 = t2696;
            if (0.707099974f > u2729) {
                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                t2736 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet(t2696, 0x1, t2736, (*(float *)(((int)stk + 28))));
                t2740 = (t2696 + 0x1);
            }
            u2744 = *(float *)((a4 + 0xB00));
            *(float *)(((int)stk + 28)) = (u2744 * 118.849998f);
            u2746 = (-1.0f);
            u2746 = u2746 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t2740, 0x1, (u2746 * 54.8499985f), (u2744 * 118.849998f));
            t2749 = (t2740 + 0x1);
        }
        t2754 = t2749;
    }
    return t2754;
}

int FUN_8c06c482(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    t2 = *(int *)((a4 + 0xB5C));
    t3 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u0 = *(float *)((a4 + 0xAE8));
    u1 = *(float *)((a4 + 0xB9C));
    u2 = ((-u0) + u1);
    if (!(0.0f > (u0 - u1))) {
        u2 = (u0 - u1);
    }
    u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
    u3 = ((-u0) + u1);
    if (!(0.0f > (u0 - u1))) {
        u3 = (u0 - u1);
    }
    t4 = 0x12E;
    if ((*(signed char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
    } else {
        t5 = 0x12E;
        if ((*(signed char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                t6 = serveGetReceiver();
                if (t6 == (*(int *)(((0xB5C + a4) + 0x0)))) {
                    *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t6 = 0x12E;
                } else {
                    t7 = serveGetReceiver();
                    t8 = t7;
                    if (t7 == (*(int *)(((0xB5C + (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84)) + 0x0)))) {
                        *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        t8 = 0x12E;
                    }
                    t6 = t8;
                }
                t7 = t6;
            } else {
                if (((*(int *)((a4 + 0xC5C))) == 12) && (t0 = *(int *)((a4 + 0xB60)), (t0 & 0x100) != 0)) {
                    *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t0 = 0x12E;
                } else {
                    if (((*(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xC5C))) == 12) && (t1 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)), (t1 & 0x100) != 0)) {
                        *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        t1 = 0x12E;
                    } else {
                        if ((int)(*(int *)0x8C2FCC5C) < (int)0x2) {
                            u0 = *(float *)((a4 + 0xAF0));
                            u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u4 = ((-u0) + u1);
                            if (!(0.0f > (u0 - u1))) {
                                u4 = (u0 - u1);
                            }
                            if (20.0f > u4) {
                                if (25.0f > u2) {
                                    *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                }
                                if (25.0f > u3) {
                                    *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                }
                                u0 = *(float *)((a4 + 0xAE8));
                                u1 = *(float *)((a4 + 0xB9C));
                                u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u5 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == (((u5 - u4) > 0.0f) - (0.0f > (u5 - u4)))) {
                                    u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    u4 = *(float *)((a4 + 0xAE8));
                                    if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u0 - u4) > 0.0f) - (0.0f > (u0 - u4)))) {
                                        *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                    } else {
                                        *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                    }
                                    t6 = 0x12E;
                                } else {
                                    t8 = 0xB9C;
                                    if ((u2 / (u2 + u3)) > 0.400000006f) {
                                        *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        t8 = 0x12E;
                                    }
                                    t9 = t8;
                                    if (!((u3 / (u2 + u3)) > 0.400000006f)) {
                                    } else {
                                        *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        t9 = 0x12E;
                                    }
                                    t6 = t9;
                                }
                                t8 = t6;
                            } else {
                                u0 = *(float *)((a4 + 0xAF0));
                                u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u4 = (-u0);
                                if (!(0.0f > u0)) {
                                    u4 = u0;
                                }
                                u0 = (-u1);
                                if (!(0.0f > u1)) {
                                    u0 = u1;
                                }
                                t6 = ((t3 * 0x160) + 0x8C2FC69C);
                                t9 = ((t2 * 0x160) + 0x8C2FC69C);
                                t10 = a4;
                                t11 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                u1 = u3;
                                u5 = u2;
                                if (u4 > u0) {
                                    t12 = *(int *)((a4 + 0xB5C));
                                    t13 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
                                    u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    u6 = ((-u0) + u4);
                                    if (!(0.0f > (u0 - u4))) {
                                        u6 = (u0 - u4);
                                    }
                                    u0 = *(float *)((a4 + 0xAE8));
                                    u4 = *(float *)((a4 + 0xB9C));
                                    u7 = ((-u0) + u4);
                                    if (!(0.0f > (u0 - u4))) {
                                        u7 = (u0 - u4);
                                    }
                                    t6 = ((t12 * 0x160) + 0x8C2FC69C);
                                    t9 = ((t13 * 0x160) + 0x8C2FC69C);
                                    t10 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                    t11 = a4;
                                    u1 = u7;
                                    u5 = u6;
                                }
                                if (30.0000019f > u5) {
                                    *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                }
                                if (35.0f > u1) {
                                    *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                }
                                t12 = 0x12E;
                                if ((*(signed char *)((t9 + 0x12E))) != 0) {
                                } else {
                                    t13 = 0x12E;
                                    if ((*(signed char *)((t6 + 0x12E))) != 0) {
                                    } else {
                                        u0 = *(float *)((t10 + 0xAE8));
                                        u4 = *(float *)((t10 + 0xB9C));
                                        u6 = *(float *)((t11 + 0xAE8));
                                        u7 = *(float *)((t11 + 0xB9C));
                                        if ((((u4 - u0) > 0.0f) - (0.0f > (u4 - u0))) == (((u7 - u6) > 0.0f) - (0.0f > (u7 - u6)))) {
                                            u0 = *(float *)((t11 + 0xAE8));
                                            u4 = *(float *)((t11 + 0xB9C));
                                            u6 = *(float *)((t10 + 0xAE8));
                                            if ((((u4 - u0) > 0.0f) - (0.0f > (u4 - u0))) == (((u0 - u6) > 0.0f) - (0.0f > (u0 - u6)))) {
                                                *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                            } else {
                                                *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                            }
                                            t14 = 0x12E;
                                        } else {
                                            u0 = *(float *)((t10 + 0xAE8));
                                            u4 = *(float *)((t11 + 0xAE8));
                                            if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                u0 = *(float *)((t10 + 0xAE8));
                                                u4 = *(float *)((t10 + 0xB9C));
                                                if (((u0 > 0.0f) - (0.0f > u0)) == ((u4 > 0.0f) - (0.0f > u4))) {
                                                    u0 = *(float *)((t11 + 0xAE8));
                                                    u4 = *(float *)((t11 + 0xB9C));
                                                    if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                        *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                        t15 = 0x12E;
                                                    } else {
                                                        if ((u5 / (u5 + u1)) > 0.400000006f) {
                                                            *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                        }
                                                        t16 = 0x8C06CB00;
                                                        if ((u1 / (u5 + u1)) > 0.5f) {
                                                            *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                                            t16 = 0x12E;
                                                        }
                                                        t15 = t16;
                                                    }
                                                    t16 = t15;
                                                } else {
                                                    u0 = *(float *)((t11 + 0xAE8));
                                                    u4 = *(float *)((t11 + 0xB9C));
                                                    if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                        t15 = 0x8C06CB04;
                                                        if ((u5 / (u5 + u1)) > 0.100000001f) {
                                                            *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                            t15 = 0x12E;
                                                        }
                                                        t17 = t15;
                                                        if ((u1 / (u5 + u1)) > 0.100000001f) {
                                                            *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                                            t17 = 0x12E;
                                                        }
                                                        t15 = t17;
                                                    } else {
                                                        t17 = 0x8C06CB08;
                                                        if ((u5 / (u5 + u1)) > 0.699999988f) {
                                                            *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                            t17 = 0x12E;
                                                        }
                                                        t18 = t17;
                                                        if ((u1 / (u5 + u1)) > 0.200000003f) {
                                                            *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                                            t18 = 0x12E;
                                                        }
                                                        t15 = t18;
                                                    }
                                                    t16 = t15;
                                                }
                                                t15 = t16;
                                            } else {
                                                u0 = *(float *)((t10 + 0xAE8));
                                                u4 = *(float *)((t11 + 0xAE8));
                                                u6 = (-u0);
                                                if (!(0.0f > u0)) {
                                                    u6 = u0;
                                                }
                                                u0 = (-u4);
                                                if (!(0.0f > u4)) {
                                                    u0 = u4;
                                                }
                                                if (u0 > u6) {
                                                    t10 = 0x8C06CB08;
                                                    if ((u5 / (u5 + u1)) > 0.699999988f) {
                                                        *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                        t10 = 0x12E;
                                                    }
                                                    t11 = t10;
                                                    if ((u1 / (u5 + u1)) > 0.200000003f) {
                                                        *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                                        t11 = 0x12E;
                                                    }
                                                    t10 = t11;
                                                } else {
                                                    if ((u5 / (u5 + u1)) > 0.200000003f) {
                                                        *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                                    }
                                                    t9 = 0x8C06CC38;
                                                    if ((u1 / (u5 + u1)) > (*(float *)0x8C06CC38)) {
                                                        *(unsigned char *)((t6 + 0x12E)) = 0x1;
                                                        t9 = 0x12E;
                                                    }
                                                    t10 = t9;
                                                }
                                                t15 = t10;
                                            }
                                            t14 = t15;
                                        }
                                        t13 = t14;
                                    }
                                    t12 = t13;
                                }
                                t8 = t12;
                            }
                            t6 = t8;
                        } else {
                            u0 = *(float *)((a4 + 0xAF0));
                            u1 = (-u0);
                            if (!(0.0f > u0)) {
                                u1 = (*(float *)((a4 + 0xAF0)));
                            }
                            if (!(0.0f > (*(float *)0x8C2FCC40))) {
                                u0 = (*(float *)0x8C2FCC40);
                            } else {
                                u0 = (-(*(float *)0x8C2FCC40));
                            }
                            if (!(u0 > u1)) {
                                u0 = *(float *)((a4 + 0xAF0));
                                u1 = (-u0);
                                if (!(0.0f > u0)) {
                                    u1 = (*(float *)((a4 + 0xAF0)));
                                }
                                if (!(0.0f > (*(float *)0x8C2FCC40))) {
                                    u0 = (*(float *)0x8C2FCC40);
                                } else {
                                    u0 = (-(*(float *)0x8C2FCC40));
                                }
                                if (!(u0 > u1)) {
                                    u0 = *(float *)((a4 + 0xAF0));
                                    u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u4 = ((-u0) + u1);
                                    if (!(0.0f > (u0 - u1))) {
                                        u4 = (u0 - u1);
                                    }
                                    if (20.0f > u4) {
                                        if (25.0f > u2) {
                                            *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        }
                                        if (25.0f > u3) {
                                            *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        }
                                        u0 = *(float *)((a4 + 0xAE8));
                                        u1 = *(float *)((a4 + 0xB9C));
                                        u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u5 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == (((u5 - u4) > 0.0f) - (0.0f > (u5 - u4)))) {
                                            u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                            u4 = *(float *)((a4 + 0xAE8));
                                            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u0 - u4) > 0.0f) - (0.0f > (u0 - u4)))) {
                                                *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            } else {
                                                *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            }
                                            t8 = 0x12E;
                                        } else {
                                            t9 = 0xB9C;
                                            if ((u2 / (u2 + u3)) > 0.400000006f) {
                                                *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                                t9 = 0x12E;
                                            }
                                            t10 = t9;
                                            if (!((u3 / (u2 + u3)) > 0.400000006f)) {
                                            } else {
                                                *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                                t10 = 0x12E;
                                            }
                                            t8 = t10;
                                        }
                                        t9 = t8;
                                    } else {
                                        u0 = *(float *)((a4 + 0xAF0));
                                        u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u4 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u4 = u0;
                                        }
                                        u0 = (-u1);
                                        if (!(0.0f > u1)) {
                                            u0 = u1;
                                        }
                                        t8 = ((t3 * 0x160) + 0x8C2FC69C);
                                        t10 = ((t2 * 0x160) + 0x8C2FC69C);
                                        t11 = a4;
                                        t12 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                        u1 = u3;
                                        u5 = u2;
                                        if (u4 > u0) {
                                            t13 = *(int *)((a4 + 0xB5C));
                                            t14 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
                                            u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                            u6 = ((-u0) + u4);
                                            if (!(0.0f > (u0 - u4))) {
                                                u6 = (u0 - u4);
                                            }
                                            u0 = *(float *)((a4 + 0xAE8));
                                            u4 = *(float *)((a4 + 0xB9C));
                                            u7 = ((-u0) + u4);
                                            if (!(0.0f > (u0 - u4))) {
                                                u7 = (u0 - u4);
                                            }
                                            t8 = ((t13 * 0x160) + 0x8C2FC69C);
                                            t10 = ((t14 * 0x160) + 0x8C2FC69C);
                                            t11 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                            t12 = a4;
                                            u1 = u7;
                                            u5 = u6;
                                        }
                                        if (30.0000019f > u5) {
                                            *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                        }
                                        if (35.0f > u1) {
                                            *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                        }
                                        t13 = 0x12E;
                                        if ((*(signed char *)((t10 + 0x12E))) != 0) {
                                        } else {
                                            t14 = 0x12E;
                                            if ((*(signed char *)((t8 + 0x12E))) != 0) {
                                            } else {
                                                u0 = *(float *)((t11 + 0xAE8));
                                                u4 = *(float *)((t11 + 0xB9C));
                                                u6 = *(float *)((t12 + 0xAE8));
                                                u7 = *(float *)((t12 + 0xB9C));
                                                if ((((u4 - u0) > 0.0f) - (0.0f > (u4 - u0))) == (((u7 - u6) > 0.0f) - (0.0f > (u7 - u6)))) {
                                                    u0 = *(float *)((t12 + 0xAE8));
                                                    u4 = *(float *)((t12 + 0xB9C));
                                                    u6 = *(float *)((t11 + 0xAE8));
                                                    if ((((u4 - u0) > 0.0f) - (0.0f > (u4 - u0))) == (((u0 - u6) > 0.0f) - (0.0f > (u0 - u6)))) {
                                                        *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                    } else {
                                                        *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                    }
                                                    t15 = 0x12E;
                                                } else {
                                                    u0 = *(float *)((t11 + 0xAE8));
                                                    u4 = *(float *)((t12 + 0xAE8));
                                                    if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                        u0 = *(float *)((t11 + 0xAE8));
                                                        u4 = *(float *)((t11 + 0xB9C));
                                                        if (((u0 > 0.0f) - (0.0f > u0)) == ((u4 > 0.0f) - (0.0f > u4))) {
                                                            u0 = *(float *)((t12 + 0xAE8));
                                                            u4 = *(float *)((t12 + 0xB9C));
                                                            if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                                *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                                t16 = 0x12E;
                                                            } else {
                                                                if ((u5 / (u5 + u1)) > 0.400000006f) {
                                                                    *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                                }
                                                                t17 = 0x8C06CB00;
                                                                if ((u1 / (u5 + u1)) > 0.5f) {
                                                                    *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                                    t17 = 0x12E;
                                                                }
                                                                t16 = t17;
                                                            }
                                                            t17 = t16;
                                                        } else {
                                                            u0 = *(float *)((t12 + 0xAE8));
                                                            u4 = *(float *)((t12 + 0xB9C));
                                                            if (((u0 > 0.0f) - (0.0f > u0)) != ((u4 > 0.0f) - (0.0f > u4))) {
                                                                t16 = 0x8C06CB04;
                                                                if ((u5 / (u5 + u1)) > 0.100000001f) {
                                                                    *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                                    t16 = 0x12E;
                                                                }
                                                                t18 = t16;
                                                                if ((u1 / (u5 + u1)) > 0.100000001f) {
                                                                    *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                                    t18 = 0x12E;
                                                                }
                                                                t16 = t18;
                                                            } else {
                                                                t18 = 0x8C06CB08;
                                                                if ((u5 / (u5 + u1)) > 0.699999988f) {
                                                                    *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                                    t18 = 0x12E;
                                                                }
                                                                t19 = t18;
                                                                if ((u1 / (u5 + u1)) > 0.200000003f) {
                                                                    *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                                    t19 = 0x12E;
                                                                }
                                                                t16 = t19;
                                                            }
                                                            t17 = t16;
                                                        }
                                                        t16 = t17;
                                                    } else {
                                                        u0 = *(float *)((t11 + 0xAE8));
                                                        u4 = *(float *)((t12 + 0xAE8));
                                                        u6 = (-u0);
                                                        if (!(0.0f > u0)) {
                                                            u6 = u0;
                                                        }
                                                        u0 = (-u4);
                                                        if (!(0.0f > u4)) {
                                                            u0 = u4;
                                                        }
                                                        if (u0 > u6) {
                                                            t11 = 0x8C06CB08;
                                                            if ((u5 / (u5 + u1)) > 0.699999988f) {
                                                                *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                                t11 = 0x12E;
                                                            }
                                                            t12 = t11;
                                                            if ((u1 / (u5 + u1)) > 0.200000003f) {
                                                                *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                                t12 = 0x12E;
                                                            }
                                                            t11 = t12;
                                                        } else {
                                                            if ((u5 / (u5 + u1)) > 0.200000003f) {
                                                                *(unsigned char *)((t10 + 0x12E)) = 0x1;
                                                            }
                                                            t10 = 0x8C06CC38;
                                                            if ((u1 / (u5 + u1)) > (*(float *)0x8C06CC38)) {
                                                                *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                                                t10 = 0x12E;
                                                            }
                                                            t11 = t10;
                                                        }
                                                        t16 = t11;
                                                    }
                                                    t15 = t16;
                                                }
                                                t14 = t15;
                                            }
                                            t13 = t14;
                                        }
                                        t9 = t13;
                                    }
                                    t8 = t9;
                                } else {
                                    u0 = *(float *)((a4 + 0xAF0));
                                    u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u4 = ((-u0) + u1);
                                    if (!(0.0f > (u0 - u1))) {
                                        u4 = (u0 - u1);
                                    }
                                    if (20.0f > u4) {
                                        u0 = *(float *)((a4 + 0xAE8));
                                        u1 = *(float *)((a4 + 0xB9C));
                                        u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u5 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u5 - u4) > 0.0f) - (0.0f > (u5 - u4)))) {
                                            t9 = 0xB9C;
                                            if ((u2 / (u2 + u3)) > 0.400000006f) {
                                                *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                                t9 = 0x12E;
                                            }
                                            t10 = t9;
                                            if (!((u3 / (u2 + u3)) > 0.400000006f)) {
                                            } else {
                                                *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                                t10 = 0x12E;
                                            }
                                            t9 = t10;
                                        } else {
                                            u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                            u4 = *(float *)((a4 + 0xAE8));
                                            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u0 - u4) > 0.0f) - (0.0f > (u0 - u4)))) {
                                                *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            } else {
                                                *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            }
                                            t9 = 0x12E;
                                        }
                                        t10 = t9;
                                    } else {
                                        u0 = *(float *)((a4 + 0xAF0));
                                        u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u4 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u4 = u0;
                                        }
                                        u0 = (-u1);
                                        if (!(0.0f > u1)) {
                                            u0 = u1;
                                        }
                                        t9 = ((t3 * 0x160) + 0x8C2FC69C);
                                        t11 = ((t2 * 0x160) + 0x8C2FC69C);
                                        t12 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                        if (u4 > u0) {
                                            t13 = *(int *)((a4 + 0xB5C));
                                            t14 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
                                            *(volatile float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            *(volatile float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                            *(volatile float *)((a4 + 0xAE8));
                                            *(volatile float *)((a4 + 0xB9C));
                                            t9 = ((t13 * 0x160) + 0x8C2FC69C);
                                            t11 = ((t14 * 0x160) + 0x8C2FC69C);
                                            t12 = a4;
                                        }
                                        u0 = *(float *)((t12 + 0xAF0));
                                        u1 = (-u0);
                                        if (!(0.0f > u0)) {
                                            u1 = u0;
                                        }
                                        if (u1 > 83.1949997f) {
                                        } else {
                                            *(unsigned char *)((t11 + 0x12E)) = 0x1;
                                        }
                                        *(unsigned char *)((t9 + 0x12E)) = 0x1;
                                        t10 = 0x12E;
                                    }
                                    t8 = t10;
                                }
                                t9 = t8;
                            } else {
                                u0 = *(float *)((a4 + 0xAF0));
                                u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u4 = ((-u0) + u1);
                                if (!(0.0f > (u0 - u1))) {
                                    u4 = (u0 - u1);
                                }
                                if (20.0f > u4) {
                                    u0 = *(float *)((a4 + 0xAE8));
                                    u1 = *(float *)((a4 + 0xB9C));
                                    u4 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u5 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                    if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u5 - u4) > 0.0f) - (0.0f > (u5 - u4)))) {
                                        t8 = 0xB9C;
                                        if ((u2 / (u2 + u3)) > 0.400000006f) {
                                            *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            t8 = 0x12E;
                                        }
                                        t10 = t8;
                                        if (!((u3 / (u2 + u3)) > 0.400000006f)) {
                                        } else {
                                            *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                            t10 = 0x12E;
                                        }
                                        t8 = t10;
                                    } else {
                                        u0 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        u2 = *(float *)((a4 + 0xAE8));
                                        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != (((u0 - u2) > 0.0f) - (0.0f > (u0 - u2)))) {
                                            *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        } else {
                                            *(unsigned char *)((((t3 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                        }
                                        t8 = 0x12E;
                                    }
                                    t10 = t8;
                                } else {
                                    u0 = *(float *)((a4 + 0xAF0));
                                    u1 = *(float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u2 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u2 = u0;
                                    }
                                    u0 = (-u1);
                                    if (!(0.0f > u1)) {
                                        u0 = u1;
                                    }
                                    t8 = ((t3 * 0x160) + 0x8C2FC69C);
                                    t3 = ((t2 * 0x160) + 0x8C2FC69C);
                                    t11 = (((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84);
                                    if (u2 > u0) {
                                        t12 = *(int *)((a4 + 0xB5C));
                                        t13 = *(int *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
                                        *(volatile float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        *(volatile float *)(((((0x3 & (t2 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                        *(volatile float *)((a4 + 0xAE8));
                                        *(volatile float *)((a4 + 0xB9C));
                                        t8 = ((t12 * 0x160) + 0x8C2FC69C);
                                        t3 = ((t13 * 0x160) + 0x8C2FC69C);
                                        t11 = a4;
                                    }
                                    u0 = *(float *)((t11 + 0xAF0));
                                    u1 = (-u0);
                                    if (!(0.0f > u0)) {
                                        u1 = u0;
                                    }
                                    if (u1 > 83.1949997f) {
                                    } else {
                                        *(unsigned char *)((t3 + 0x12E)) = 0x1;
                                    }
                                    *(unsigned char *)((t8 + 0x12E)) = 0x1;
                                    t10 = 0x12E;
                                }
                                t9 = t10;
                            }
                            t6 = t9;
                        }
                        t1 = t6;
                    }
                    t0 = t1;
                }
                t7 = t0;
            }
            t5 = t7;
        }
        t4 = t5;
    }
    return t4;
}
