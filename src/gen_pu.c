/* Straight-line functions with calls and guards (batch gen_pu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuDblCoverPos(int);
float cpuDistXZ(int, int);
int cpuInFan(int, int, Stk3);
int serveGetReceiver(void);
void FUN_8c065e70(int a4);
float FUN_8c068fa4(int a4);

void FUN_8c065e70(int a4)
{
    int stk[18];
    register int t14;
    register int t11;
    register int t26;
    register int t23;
    register int t47;
    register int t56;
    register int t50;
    register int t53;
    register int t60;
    register int t69;
    register int t63;
    register int t66;
    register int t72;
    register int t81;
    register int t75;
    register int t78;
    register int t97;
    register int t94;
    register int t104;
    register int t113;
    register int t107;
    register int t110;
    register int t129;
    register int t126;
    register int t143;
    register int t146;
    register int t149;
    register int t159;
    register int t162;
    register int t165;
    register int t192;
    register int t193;
    register float u308;
    register int t321;
    register int t324;
    register int t327;
    register int t337;
    register int t340;
    register int t343;
    register int t353;
    register int t356;
    register int t359;
    register float t369;
    register float u400;
    register float u410;
    register int t445;
    register int t448;
    register int t451;
    register int t461;
    register int t464;
    register int t467;
    register int t477;
    register int t480;
    register int t483;
    register float t493;
    register int t510;
    register int t513;
    register int t516;
    register int t526;
    register int t529;
    register int t532;
    register int t542;
    register int t545;
    register int t548;
    register float t558;
    register int t581;
    register int t584;
    register int t587;
    register int t597;
    register int t600;
    register int t603;
    register int t613;
    register int t616;
    register int t619;
    register float t629;
    register float u706;
    register int t719;
    register int t722;
    register int t725;
    register int t735;
    register int t738;
    register int t741;
    register int t751;
    register int t754;
    register int t757;
    register float t767;
    register float u798;
    register float u808;
    register int t843;
    register int t846;
    register int t849;
    register int t859;
    register int t862;
    register int t865;
    register int t875;
    register int t878;
    register int t881;
    register float t891;
    register int t908;
    register int t911;
    register int t914;
    register int t924;
    register int t927;
    register int t930;
    register int t940;
    register int t943;
    register int t946;
    register float t956;
    register int t979;
    register int t982;
    register int t985;
    register int t995;
    register int t998;
    register int t1001;
    register int t1011;
    register int t1014;
    register int t1017;
    register float t1027;
    register float u1082;
    register int t1085;
    register int t1094;
    register int t1091;
    register int t1127;
    register int t1130;
    register int t1176;
    register int t1179;
    register int t1182;
    register int t1191;
    register int t1194;
    register int t1197;
    register int t1206;
    register int t1209;
    register int t1212;
    register float t1222;
    register int t1308;
    register int t1311;
    register int t1314;
    register int t1323;
    register int t1326;
    register int t1329;
    register int t1338;
    register int t1341;
    register int t1344;
    register float t1354;
    register int t1397;
    register int t1443;
    register int t1446;
    register int t1449;
    register int t1458;
    register int t1461;
    register int t1464;
    register int t1473;
    register int t1476;
    register int t1479;
    register float t1489;
    register int t1539;
    register int t1585;
    register int t1588;
    register int t1591;
    register int t1600;
    register int t1603;
    register int t1606;
    register int t1615;
    register int t1618;
    register int t1621;
    register float t1631;
    register float u1716;
    register int t1730;
    register int t1733;
    register int t1736;
    register int t1746;
    register int t1749;
    register int t1752;
    register int t1762;
    register int t1765;
    register int t1768;
    register float t1778;
    register float u1848;
    register int t1877;
    register int t1880;
    register int t1883;
    register int t1893;
    register int t1896;
    register int t1899;
    register int t1909;
    register int t1912;
    register int t1915;
    register float t1925;
    register float u1969;
    register int t1998;
    register int t2001;
    register int t2004;
    register int t2014;
    register int t2017;
    register int t2020;
    register int t2030;
    register int t2033;
    register int t2036;
    register float t2046;
    register float u2117;
    register int t2131;
    register int t2134;
    register int t2137;
    register int t2147;
    register int t2150;
    register int t2153;
    register int t2163;
    register int t2166;
    register int t2169;
    register float t2179;
    register float u2224;
    register int t2253;
    register int t2256;
    register int t2259;
    register int t2269;
    register int t2272;
    register int t2275;
    register int t2285;
    register int t2288;
    register int t2291;
    register float t2301;
    register float u2401;
    register int t2415;
    register int t2418;
    register int t2421;
    register int t2431;
    register int t2434;
    register int t2437;
    register int t2447;
    register int t2450;
    register int t2453;
    register float t2463;
    register float u2533;
    register int t2562;
    register int t2565;
    register int t2568;
    register int t2578;
    register int t2581;
    register int t2584;
    register int t2594;
    register int t2597;
    register int t2600;
    register float t2610;
    register float u2654;
    register int t2683;
    register int t2686;
    register int t2689;
    register int t2699;
    register int t2702;
    register int t2705;
    register int t2715;
    register int t2718;
    register int t2721;
    register float t2731;
    register float u2802;
    register int t2816;
    register int t2819;
    register int t2822;
    register int t2832;
    register int t2835;
    register int t2838;
    register int t2848;
    register int t2851;
    register int t2854;
    register float t2864;
    register float u2909;
    register int t2938;
    register int t2941;
    register int t2944;
    register int t2954;
    register int t2957;
    register int t2960;
    register int t2970;
    register int t2973;
    register int t2976;
    register float t2986;
    register float u3062;
    register int t3068;
    register int t3100;
    register float u3139;
    register int t3148;
    register float u3244;
    register int t3261;
    register int t3264;
    register int t3267;
    register int t3277;
    register int t3280;
    register int t3283;
    register int t3293;
    register int t3296;
    register int t3299;
    register float t3309;
    register int t3366;
    register int t3369;
    register int t3372;
    register int t3382;
    register int t3385;
    register int t3388;
    register int t3398;
    register int t3401;
    register int t3404;
    register float t3414;
    register int t3471;
    register int t3474;
    register int t3477;
    register int t3487;
    register int t3490;
    register int t3493;
    register int t3503;
    register int t3506;
    register int t3509;
    register float t3519;
    register float u3587;
    register int t3604;
    register int t3607;
    register int t3610;
    register int t3620;
    register int t3623;
    register int t3626;
    register int t3636;
    register int t3639;
    register int t3642;
    register float t3652;
    register int t3686;
    register int t3689;
    register int t3692;
    register int t3702;
    register int t3705;
    register int t3708;
    register int t3718;
    register int t3721;
    register int t3724;
    register float t3734;
    register float u45;
    register float u157;
    register float u172;
    register int t202;
    register int t203;
    register int t219;
    register int t220;
    register float u242;
    register float u257;
    register float u267;
    register float u280;
    register float u286;
    register int t297;
    register float u335;
    register float u351;
    register float u366;
    register float u401;
    register float u422;
    register float u432;
    register float u459;
    register float u475;
    register float u490;
    register float u524;
    register float u540;
    register float u555;
    register float u595;
    register float u611;
    register float u626;
    register float u692;
    register float u697;
    register float u733;
    register float u749;
    register float u764;
    register float u799;
    register float u820;
    register float u830;
    register float u857;
    register float u873;
    register float u888;
    register float u922;
    register float u938;
    register float u953;
    register float u993;
    register float u1009;
    register float u1024;
    register float u1109;
    register float u1123;
    register float u1189;
    register float u1204;
    register float u1219;
    register float u1321;
    register float u1336;
    register float u1351;
    register float u1456;
    register float u1471;
    register float u1486;
    register float u1598;
    register float u1613;
    register float u1628;
    register float u1744;
    register float u1760;
    register float u1775;
    register float u1826;
    register float u1836;
    register float u1891;
    register float u1907;
    register float u1922;
    register float u2012;
    register float u2028;
    register float u2043;
    register float u2145;
    register float u2161;
    register float u2176;
    register float u2267;
    register float u2283;
    register float u2298;
    register float u2370;
    register float u2375;
    register float u2429;
    register float u2445;
    register float u2460;
    register float u2511;
    register float u2521;
    register float u2576;
    register float u2592;
    register float u2607;
    register float u2697;
    register float u2713;
    register float u2728;
    register float u2830;
    register float u2846;
    register float u2861;
    register float u2952;
    register float u2968;
    register float u2983;
    register float u3245;
    register float u3275;
    register float u3291;
    register float u3306;
    register float u3333;
    register float u3343;
    register float u3380;
    register float u3396;
    register float u3411;
    register float u3485;
    register float u3501;
    register float u3516;
    register float u3588;
    register float u3618;
    register float u3634;
    register float u3649;
    register float u3700;
    register float u3716;
    register float u3731;

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = (((((*(int *)((0xB5C + a4))) + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    *(unsigned int *)(((int)stk + 48)) = (((*(int *)(((*(int *)(((int)stk + 56))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 44)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 52))) + 0xB5C))) * 0x160));
    t14 = 0x1;
    if ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))) > 0.0f) {
    } else {
        t11 = 0x0;
        if (0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)))) {
            t11 = 0xFFFFFFFF;
        }
        t14 = t11;
    }
    t26 = 0x1;
    if ((*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))) > 0.0f) {
    } else {
        t23 = 0x0;
        if (0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)))) {
            t23 = 0xFFFFFFFF;
        }
        t26 = t23;
    }
    *(unsigned int *)(((int)stk + 40)) = ((((t14 == t26)) ? 1 : 0) ^ 0x1);
    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)))))) {
        u45 = ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
    } else {
        u45 = ((-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)))) + (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
    }
    *(unsigned int *)(((int)stk + 36)) = (((u45 > 20.0f)) ? 1 : 0);
    t47 = *(int *)(((int)stk + 56));
    t56 = 0x1;
    if (((*(float *)((t47 + 0xB9C))) - (*(float *)((t47 + 0xAE8)))) > 0.0f) {
    } else {
        t50 = *(int *)(((int)stk + 56));
        t53 = 0x0;
        if (0.0f > ((*(float *)((t50 + 0xB9C))) - (*(float *)((t50 + 0xAE8))))) {
            t53 = 0xFFFFFFFF;
        }
        t56 = t53;
    }
    t60 = *(int *)(((int)stk + 52));
    t69 = 0x1;
    if (((*(float *)((t60 + 0xB9C))) - (*(float *)((t60 + 0xAE8)))) > 0.0f) {
    } else {
        t63 = *(int *)(((int)stk + 52));
        t66 = 0x0;
        if (0.0f > ((*(float *)((t63 + 0xB9C))) - (*(float *)((t63 + 0xAE8))))) {
            t66 = 0xFFFFFFFF;
        }
        t69 = t66;
    }
    if (t56 == t69) {
        t72 = *(int *)(((int)stk + 52));
        t81 = 0x1;
        if (((*(float *)((t72 + 0xB9C))) - (*(float *)((t72 + 0xAE8)))) > 0.0f) {
        } else {
            t75 = *(int *)(((int)stk + 52));
            t78 = 0x0;
            if (0.0f > ((*(float *)((t75 + 0xB9C))) - (*(float *)((t75 + 0xAE8))))) {
                t78 = 0xFFFFFFFF;
            }
            t81 = t78;
        }
        t97 = 0x1;
        if (((*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)))) > 0.0f) {
        } else {
            t94 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 52)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 56)))) + 0x0))))) {
                t94 = 0xFFFFFFFF;
            }
            t97 = t94;
        }
        if (t81 == t97) {
            *(unsigned int *)(((int)stk + 32)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 32)) = 0x2;
        }
    } else {
        t104 = *(int *)(((int)stk + 56));
        t113 = 0x1;
        if (((*(float *)((t104 + 0xB9C))) - (*(float *)((t104 + 0xAE8)))) > 0.0f) {
        } else {
            t107 = *(int *)(((int)stk + 56));
            t110 = 0x0;
            if (0.0f > ((*(float *)((t107 + 0xB9C))) - (*(float *)((t107 + 0xAE8))))) {
                t110 = 0xFFFFFFFF;
            }
            t113 = t110;
        }
        t129 = 0x1;
        if (((*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)))) > 0.0f) {
        } else {
            t126 = 0x0;
            if (0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 52)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 56)))) + 0x0))))) {
                t126 = 0xFFFFFFFF;
            }
            t129 = t126;
        }
        if (t113 == t129) {
            *(unsigned int *)(((int)stk + 32)) = 0x4;
        } else {
            *(unsigned int *)(((int)stk + 32)) = 0x8;
        }
    }
    t143 = *(int *)(((int)stk + 56));
    if (!(0.0f > ((*(float *)((t143 + 0xAE8))) - (*(float *)((t143 + 0xB9C)))))) {
        t146 = *(int *)(((int)stk + 56));
        u157 = ((*(float *)((t146 + 0xAE8))) - (*(float *)((t146 + 0xB9C))));
    } else {
        t149 = *(int *)(((int)stk + 56));
        u157 = ((-(*(float *)((t149 + 0xAE8)))) + (*(float *)((t149 + 0xB9C))));
    }
    *(float *)(((int)stk + 28)) = u157;
    t159 = *(int *)(((int)stk + 52));
    if (!(0.0f > ((*(float *)((t159 + 0xAE8))) - (*(float *)((t159 + 0xB9C)))))) {
        t162 = *(int *)(((int)stk + 52));
        u172 = ((*(float *)((t162 + 0xAE8))) - (*(float *)((t162 + 0xB9C))));
    } else {
        t165 = *(int *)(((int)stk + 52));
        u172 = ((-(*(float *)((t165 + 0xAE8)))) + (*(float *)((t165 + 0xB9C))));
    }
    *(float *)(((int)stk + 24)) = u172;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t192 = *(int *)(((*(int *)(((int)stk + 56))) + 0xB5C));
        t193 = serveGetReceiver();
        if (t192 != t193) {
        } else {
            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x2;
        }
    } else {
        if ((((*(int *)(((*(int *)(((int)stk + 52))) + 0xB60))) & 0x4000) != 0) && (t202 = *(int *)(((int)stk + 44)), t203 = *(short *)((t202 + 0x118)), (int)t203 < (int)0x1E)) {
            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x2;
        } else {
            if (((*(int *)((0xC5C + (*(int *)(((int)stk + 52)))))) == 12) && (t219 = *(int *)(((int)stk + 52)), t220 = *(int *)((t219 + 0xB60)), (t220 & 0x100) != 0)) {
                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x2;
            } else {
                if (((*(int *)(((int)stk + 32))) & 8) != 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                } else {
                    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0)))))) {
                        u242 = ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))));
                    } else {
                        u242 = ((-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0)))) + (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))));
                    }
                    if (!(20.0f > u242)) {
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))))) {
                            u257 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0)));
                        } else {
                            u257 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))));
                        }
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))))) {
                            u267 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0)));
                        } else {
                            u267 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))));
                        }
                        if (!(u257 > u267)) {
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))))) {
                                u280 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0)));
                            } else {
                                u280 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))));
                            }
                            if (!(0.0f > (*(float *)0x8C291F84))) {
                                u286 = (*(float *)0x8C291F84);
                            } else {
                                u286 = (-(*(float *)0x8C291F84));
                            }
                            if (u286 > u280) {
                                t297 = (*(signed char *)((((*(int *)(((*(int *)(((int)stk + 56))) + 0xC58))) << 1) + 0x8C15A0D0)));
                            } else {
                                t297 = (*(signed char *)((((*(int *)(((*(int *)(((int)stk + 56))) + 0xC58))) << 1) + 0x8C15A0D1)));
                            }
                            *(float *)(((int)stk + 20)) = ((float)t297 * 0.100000001f);
                            if ((int)(*(int *)0x8C2FCC5C) < (int)0x2) {
                                if ((*(int *)(((int)stk + 36))) == 0) {
                                    if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    } else {
                                        u308 = 0.75f;
                                        u308 = u308 + 0.5f * (*(float *)(((int)stk + 20)));
                                        if ((u308 * 25.0f) > (*(float *)(((int)stk + 28)))) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                        } else {
                                            *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                            *(unsigned char *)0x8C2FD924 = 0x28;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x8;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x8;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0xA;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x8;
                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0xA;
                                            t321 = *(int *)(((int)stk + 56));
                                            if (!(0.0f > ((*(float *)((t321 + 0xAE8))) - (*(float *)((t321 + 0xB9C)))))) {
                                                t324 = *(int *)(((int)stk + 56));
                                                u335 = ((*(float *)((t324 + 0xAE8))) - (*(float *)((t324 + 0xB9C))));
                                            } else {
                                                t327 = *(int *)(((int)stk + 56));
                                                u335 = ((-(*(float *)((t327 + 0xAE8)))) + (*(float *)((t327 + 0xB9C))));
                                            }
                                            t337 = *(int *)(((int)stk + 56));
                                            if (!(0.0f > ((*(float *)((t337 + 0xAE8))) - (*(float *)((t337 + 0xB9C)))))) {
                                                t340 = *(int *)(((int)stk + 56));
                                                u351 = ((*(float *)((t340 + 0xAE8))) - (*(float *)((t340 + 0xB9C))));
                                            } else {
                                                t343 = *(int *)(((int)stk + 56));
                                                u351 = ((-(*(float *)((t343 + 0xAE8)))) + (*(float *)((t343 + 0xB9C))));
                                            }
                                            t353 = *(int *)(((int)stk + 52));
                                            if (!(0.0f > ((*(float *)((t353 + 0xAE8))) - (*(float *)((t353 + 0xB9C)))))) {
                                                t356 = *(int *)(((int)stk + 52));
                                                u366 = ((*(float *)((t356 + 0xAE8))) - (*(float *)((t356 + 0xB9C))));
                                            } else {
                                                t359 = *(int *)(((int)stk + 52));
                                                u366 = ((-(*(float *)((t359 + 0xAE8)))) + (*(float *)((t359 + 0xB9C))));
                                            }
                                            t369 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                            if (t369 > (u335 / (u351 + u366))) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            }
                                        }
                                    }
                                } else {
                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                        u400 = *(float *)(((int)stk + 28));
                                        if (!((((*(float *)(((int)stk + 20))) + 1.0f) * 25.0f) > u400) && (u401 = *(float *)(((int)stk + 24)), !(u401 > u400))) {
                                        } else {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                        }
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            u410 = 0.75f;
                                            u410 = u410 + 0.5f * (*(float *)(((int)stk + 20)));
                                            if ((u410 * 25.0f) > (*(float *)(((int)stk + 28)))) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                if ((*(int *)(((int)stk + 40))) == 0) {
                                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))))) {
                                                        u422 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)));
                                                    } else {
                                                        u422 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
                                                    }
                                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))))) {
                                                        u432 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)));
                                                    } else {
                                                        u432 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))));
                                                    }
                                                    if (!(u432 > u422)) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x28;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                        t445 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t445 + 0xAE8))) - (*(float *)((t445 + 0xB9C)))))) {
                                                            t448 = *(int *)(((int)stk + 56));
                                                            u459 = ((*(float *)((t448 + 0xAE8))) - (*(float *)((t448 + 0xB9C))));
                                                        } else {
                                                            t451 = *(int *)(((int)stk + 56));
                                                            u459 = ((-(*(float *)((t451 + 0xAE8)))) + (*(float *)((t451 + 0xB9C))));
                                                        }
                                                        t461 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t461 + 0xAE8))) - (*(float *)((t461 + 0xB9C)))))) {
                                                            t464 = *(int *)(((int)stk + 56));
                                                            u475 = ((*(float *)((t464 + 0xAE8))) - (*(float *)((t464 + 0xB9C))));
                                                        } else {
                                                            t467 = *(int *)(((int)stk + 56));
                                                            u475 = ((-(*(float *)((t467 + 0xAE8)))) + (*(float *)((t467 + 0xB9C))));
                                                        }
                                                        t477 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t477 + 0xAE8))) - (*(float *)((t477 + 0xB9C)))))) {
                                                            t480 = *(int *)(((int)stk + 52));
                                                            u490 = ((*(float *)((t480 + 0xAE8))) - (*(float *)((t480 + 0xB9C))));
                                                        } else {
                                                            t483 = *(int *)(((int)stk + 52));
                                                            u490 = ((-(*(float *)((t483 + 0xAE8)))) + (*(float *)((t483 + 0xB9C))));
                                                        }
                                                        t493 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t493 > (u459 / (u475 + u490)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x3C;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xF;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                        t510 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t510 + 0xAE8))) - (*(float *)((t510 + 0xB9C)))))) {
                                                            t513 = *(int *)(((int)stk + 56));
                                                            u524 = ((*(float *)((t513 + 0xAE8))) - (*(float *)((t513 + 0xB9C))));
                                                        } else {
                                                            t516 = *(int *)(((int)stk + 56));
                                                            u524 = ((-(*(float *)((t516 + 0xAE8)))) + (*(float *)((t516 + 0xB9C))));
                                                        }
                                                        t526 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t526 + 0xAE8))) - (*(float *)((t526 + 0xB9C)))))) {
                                                            t529 = *(int *)(((int)stk + 56));
                                                            u540 = ((*(float *)((t529 + 0xAE8))) - (*(float *)((t529 + 0xB9C))));
                                                        } else {
                                                            t532 = *(int *)(((int)stk + 56));
                                                            u540 = ((-(*(float *)((t532 + 0xAE8)))) + (*(float *)((t532 + 0xB9C))));
                                                        }
                                                        t542 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t542 + 0xAE8))) - (*(float *)((t542 + 0xB9C)))))) {
                                                            t545 = *(int *)(((int)stk + 52));
                                                            u555 = ((*(float *)((t545 + 0xAE8))) - (*(float *)((t545 + 0xB9C))));
                                                        } else {
                                                            t548 = *(int *)(((int)stk + 52));
                                                            u555 = ((-(*(float *)((t548 + 0xAE8)))) + (*(float *)((t548 + 0xB9C))));
                                                        }
                                                        t558 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t558 > (u524 / (u540 + u555)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x34;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                    t581 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t581 + 0xAE8))) - (*(float *)((t581 + 0xB9C)))))) {
                                                        t584 = *(int *)(((int)stk + 56));
                                                        u595 = ((*(float *)((t584 + 0xAE8))) - (*(float *)((t584 + 0xB9C))));
                                                    } else {
                                                        t587 = *(int *)(((int)stk + 56));
                                                        u595 = ((-(*(float *)((t587 + 0xAE8)))) + (*(float *)((t587 + 0xB9C))));
                                                    }
                                                    t597 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t597 + 0xAE8))) - (*(float *)((t597 + 0xB9C)))))) {
                                                        t600 = *(int *)(((int)stk + 56));
                                                        u611 = ((*(float *)((t600 + 0xAE8))) - (*(float *)((t600 + 0xB9C))));
                                                    } else {
                                                        t603 = *(int *)(((int)stk + 56));
                                                        u611 = ((-(*(float *)((t603 + 0xAE8)))) + (*(float *)((t603 + 0xB9C))));
                                                    }
                                                    t613 = *(int *)(((int)stk + 52));
                                                    if (!(0.0f > ((*(float *)((t613 + 0xAE8))) - (*(float *)((t613 + 0xB9C)))))) {
                                                        t616 = *(int *)(((int)stk + 52));
                                                        u626 = ((*(float *)((t616 + 0xAE8))) - (*(float *)((t616 + 0xB9C))));
                                                    } else {
                                                        t619 = *(int *)(((int)stk + 52));
                                                        u626 = ((-(*(float *)((t619 + 0xAE8)))) + (*(float *)((t619 + 0xB9C))));
                                                    }
                                                    t629 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                    if (!(t629 > (u595 / (u611 + u626)))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)((0xAF0 + (*(int *)(((int)stk + 56)))))))) {
                                    u692 = (*(float *)((0xAF0 + (*(int *)(((int)stk + 56))))));
                                } else {
                                    u692 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))));
                                }
                                if (!(0.0f > (*(float *)0x8C2FCC40))) {
                                    u697 = (*(float *)0x8C2FCC40);
                                } else {
                                    u697 = (-(*(float *)0x8C2FCC40));
                                }
                                if (!(u697 > u692)) {
                                    if ((*(int *)(((int)stk + 36))) == 0) {
                                        if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            u706 = 0.75f;
                                            u706 = u706 + 0.5f * (*(float *)(((int)stk + 20)));
                                            if ((u706 * 25.0f) > (*(float *)(((int)stk + 28)))) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                *(unsigned char *)0x8C2FD924 = 0x28;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x8;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x8;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x8;
                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0xA;
                                                t719 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t719 + 0xAE8))) - (*(float *)((t719 + 0xB9C)))))) {
                                                    t722 = *(int *)(((int)stk + 56));
                                                    u733 = ((*(float *)((t722 + 0xAE8))) - (*(float *)((t722 + 0xB9C))));
                                                } else {
                                                    t725 = *(int *)(((int)stk + 56));
                                                    u733 = ((-(*(float *)((t725 + 0xAE8)))) + (*(float *)((t725 + 0xB9C))));
                                                }
                                                t735 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t735 + 0xAE8))) - (*(float *)((t735 + 0xB9C)))))) {
                                                    t738 = *(int *)(((int)stk + 56));
                                                    u749 = ((*(float *)((t738 + 0xAE8))) - (*(float *)((t738 + 0xB9C))));
                                                } else {
                                                    t741 = *(int *)(((int)stk + 56));
                                                    u749 = ((-(*(float *)((t741 + 0xAE8)))) + (*(float *)((t741 + 0xB9C))));
                                                }
                                                t751 = *(int *)(((int)stk + 52));
                                                if (!(0.0f > ((*(float *)((t751 + 0xAE8))) - (*(float *)((t751 + 0xB9C)))))) {
                                                    t754 = *(int *)(((int)stk + 52));
                                                    u764 = ((*(float *)((t754 + 0xAE8))) - (*(float *)((t754 + 0xB9C))));
                                                } else {
                                                    t757 = *(int *)(((int)stk + 52));
                                                    u764 = ((-(*(float *)((t757 + 0xAE8)))) + (*(float *)((t757 + 0xB9C))));
                                                }
                                                t767 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                if (t767 > (u733 / (u749 + u764))) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                }
                                            }
                                        }
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                            u798 = *(float *)(((int)stk + 28));
                                            if (!((((*(float *)(((int)stk + 20))) + 1.0f) * 25.0f) > u798) && (u799 = *(float *)(((int)stk + 24)), !(u799 > u798))) {
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        } else {
                                            if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                u808 = 0.75f;
                                                u808 = u808 + 0.5f * (*(float *)(((int)stk + 20)));
                                                if ((u808 * 25.0f) > (*(float *)(((int)stk + 28)))) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                    if ((*(int *)(((int)stk + 40))) == 0) {
                                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))))) {
                                                            u820 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)));
                                                        } else {
                                                            u820 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
                                                        }
                                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))))) {
                                                            u830 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)));
                                                        } else {
                                                            u830 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))));
                                                        }
                                                        if (!(u830 > u820)) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x28;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                            t843 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t843 + 0xAE8))) - (*(float *)((t843 + 0xB9C)))))) {
                                                                t846 = *(int *)(((int)stk + 56));
                                                                u857 = ((*(float *)((t846 + 0xAE8))) - (*(float *)((t846 + 0xB9C))));
                                                            } else {
                                                                t849 = *(int *)(((int)stk + 56));
                                                                u857 = ((-(*(float *)((t849 + 0xAE8)))) + (*(float *)((t849 + 0xB9C))));
                                                            }
                                                            t859 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t859 + 0xAE8))) - (*(float *)((t859 + 0xB9C)))))) {
                                                                t862 = *(int *)(((int)stk + 56));
                                                                u873 = ((*(float *)((t862 + 0xAE8))) - (*(float *)((t862 + 0xB9C))));
                                                            } else {
                                                                t865 = *(int *)(((int)stk + 56));
                                                                u873 = ((-(*(float *)((t865 + 0xAE8)))) + (*(float *)((t865 + 0xB9C))));
                                                            }
                                                            t875 = *(int *)(((int)stk + 52));
                                                            if (!(0.0f > ((*(float *)((t875 + 0xAE8))) - (*(float *)((t875 + 0xB9C)))))) {
                                                                t878 = *(int *)(((int)stk + 52));
                                                                u888 = ((*(float *)((t878 + 0xAE8))) - (*(float *)((t878 + 0xB9C))));
                                                            } else {
                                                                t881 = *(int *)(((int)stk + 52));
                                                                u888 = ((-(*(float *)((t881 + 0xAE8)))) + (*(float *)((t881 + 0xB9C))));
                                                            }
                                                            t891 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                            if (!(t891 > (u857 / (u873 + u888)))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x3C;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xF;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                            t908 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t908 + 0xAE8))) - (*(float *)((t908 + 0xB9C)))))) {
                                                                t911 = *(int *)(((int)stk + 56));
                                                                u922 = ((*(float *)((t911 + 0xAE8))) - (*(float *)((t911 + 0xB9C))));
                                                            } else {
                                                                t914 = *(int *)(((int)stk + 56));
                                                                u922 = ((-(*(float *)((t914 + 0xAE8)))) + (*(float *)((t914 + 0xB9C))));
                                                            }
                                                            t924 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t924 + 0xAE8))) - (*(float *)((t924 + 0xB9C)))))) {
                                                                t927 = *(int *)(((int)stk + 56));
                                                                u938 = ((*(float *)((t927 + 0xAE8))) - (*(float *)((t927 + 0xB9C))));
                                                            } else {
                                                                t930 = *(int *)(((int)stk + 56));
                                                                u938 = ((-(*(float *)((t930 + 0xAE8)))) + (*(float *)((t930 + 0xB9C))));
                                                            }
                                                            t940 = *(int *)(((int)stk + 52));
                                                            if (!(0.0f > ((*(float *)((t940 + 0xAE8))) - (*(float *)((t940 + 0xB9C)))))) {
                                                                t943 = *(int *)(((int)stk + 52));
                                                                u953 = ((*(float *)((t943 + 0xAE8))) - (*(float *)((t943 + 0xB9C))));
                                                            } else {
                                                                t946 = *(int *)(((int)stk + 52));
                                                                u953 = ((-(*(float *)((t946 + 0xAE8)))) + (*(float *)((t946 + 0xB9C))));
                                                            }
                                                            t956 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                            if (!(t956 > (u922 / (u938 + u953)))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x0)) = 0x34;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                        t979 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t979 + 0xAE8))) - (*(float *)((t979 + 0xB9C)))))) {
                                                            t982 = *(int *)(((int)stk + 56));
                                                            u993 = ((*(float *)((t982 + 0xAE8))) - (*(float *)((t982 + 0xB9C))));
                                                        } else {
                                                            t985 = *(int *)(((int)stk + 56));
                                                            u993 = ((-(*(float *)((t985 + 0xAE8)))) + (*(float *)((t985 + 0xB9C))));
                                                        }
                                                        t995 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t995 + 0xAE8))) - (*(float *)((t995 + 0xB9C)))))) {
                                                            t998 = *(int *)(((int)stk + 56));
                                                            u1009 = ((*(float *)((t998 + 0xAE8))) - (*(float *)((t998 + 0xB9C))));
                                                        } else {
                                                            t1001 = *(int *)(((int)stk + 56));
                                                            u1009 = ((-(*(float *)((t1001 + 0xAE8)))) + (*(float *)((t1001 + 0xB9C))));
                                                        }
                                                        t1011 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t1011 + 0xAE8))) - (*(float *)((t1011 + 0xB9C)))))) {
                                                            t1014 = *(int *)(((int)stk + 52));
                                                            u1024 = ((*(float *)((t1014 + 0xAE8))) - (*(float *)((t1014 + 0xB9C))));
                                                        } else {
                                                            t1017 = *(int *)(((int)stk + 52));
                                                            u1024 = ((-(*(float *)((t1017 + 0xAE8)))) + (*(float *)((t1017 + 0xB9C))));
                                                        }
                                                        t1027 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t1027 > (u993 / (u1009 + u1024)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    u1082 = *(float *)0x8C2FCC34;
                                    t1085 = (u1082 > 0.0f) - (0.0f > u1082);
                                    t1094 = 0x1;
                                    if ((-(*(float *)(((*(int *)(((int)stk + 56))) + 0xB00)))) > 0.0f) {
                                    } else {
                                        t1091 = 0x0;
                                        if (0.0f > (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xB00))))) {
                                            t1091 = 0xFFFFFFFF;
                                        }
                                        t1094 = t1091;
                                    }
                                    if (t1085 == t1094) {
                                        if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)0x8C2FCC34)))) {
                                            u1109 = ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)0x8C2FCC34));
                                        } else {
                                            u1109 = ((-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0)))) + (*(float *)0x8C2FCC34));
                                        }
                                        if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)0x8C2FCC40)))) {
                                            u1123 = ((*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0))) - (*(float *)0x8C2FCC40));
                                        } else {
                                            u1123 = ((-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAF0)))) + (*(float *)0x8C2FCC40));
                                        }
                                        if (u1123 > u1109) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC2C); }
                                            t1127 = cpuInFan((*(int *)(((int)stk + 56))), ((*(int *)(((int)stk + 48))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                            if (t1127 == 0) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                                t1130 = cpuInFan((*(int *)(((int)stk + 56))), ((*(int *)(((int)stk + 48))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                                if (t1130 == 0) {
                                                } else {
                                                    if ((*(int *)(((int)stk + 36))) == 0) {
                                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                            if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                            if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        } else {
                                                            if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            } else {
                                                                if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                                    *(unsigned char *)0x8C2FD924 = 0x34;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                                    t1176 = *(int *)(((int)stk + 56));
                                                                    if (!(0.0f > ((*(float *)((t1176 + 0xAE8))) - (*(float *)((t1176 + 0xB9C)))))) {
                                                                        t1179 = *(int *)(((int)stk + 56));
                                                                        u1189 = ((*(float *)((t1179 + 0xAE8))) - (*(float *)((t1179 + 0xB9C))));
                                                                    } else {
                                                                        t1182 = *(int *)(((int)stk + 56));
                                                                        u1189 = ((-(*(float *)((t1182 + 0xAE8)))) + (*(float *)((t1182 + 0xB9C))));
                                                                    }
                                                                    t1191 = *(int *)(((int)stk + 56));
                                                                    if (!(0.0f > ((*(float *)((t1191 + 0xAE8))) - (*(float *)((t1191 + 0xB9C)))))) {
                                                                        t1194 = *(int *)(((int)stk + 56));
                                                                        u1204 = ((*(float *)((t1194 + 0xAE8))) - (*(float *)((t1194 + 0xB9C))));
                                                                    } else {
                                                                        t1197 = *(int *)(((int)stk + 56));
                                                                        u1204 = ((-(*(float *)((t1197 + 0xAE8)))) + (*(float *)((t1197 + 0xB9C))));
                                                                    }
                                                                    t1206 = *(int *)(((int)stk + 52));
                                                                    if (!(0.0f > ((*(float *)((t1206 + 0xAE8))) - (*(float *)((t1206 + 0xB9C)))))) {
                                                                        t1209 = *(int *)(((int)stk + 52));
                                                                        u1219 = ((*(float *)((t1209 + 0xAE8))) - (*(float *)((t1209 + 0xB9C))));
                                                                    } else {
                                                                        t1212 = *(int *)(((int)stk + 52));
                                                                        u1219 = ((-(*(float *)((t1212 + 0xAE8)))) + (*(float *)((t1212 + 0xB9C))));
                                                                    }
                                                                    t1222 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                                    if (!(t1222 > (u1189 / (u1204 + u1219)))) {
                                                                    } else {
                                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((*(int *)(((int)stk + 36))) == 0) {
                                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                        if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                } else {
                                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                        if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        } else {
                                                            if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                                *(unsigned char *)0x8C2FD924 = 0x34;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                                t1308 = *(int *)(((int)stk + 56));
                                                                if (!(0.0f > ((*(float *)((t1308 + 0xAE8))) - (*(float *)((t1308 + 0xB9C)))))) {
                                                                    t1311 = *(int *)(((int)stk + 56));
                                                                    u1321 = ((*(float *)((t1311 + 0xAE8))) - (*(float *)((t1311 + 0xB9C))));
                                                                } else {
                                                                    t1314 = *(int *)(((int)stk + 56));
                                                                    u1321 = ((-(*(float *)((t1314 + 0xAE8)))) + (*(float *)((t1314 + 0xB9C))));
                                                                }
                                                                t1323 = *(int *)(((int)stk + 56));
                                                                if (!(0.0f > ((*(float *)((t1323 + 0xAE8))) - (*(float *)((t1323 + 0xB9C)))))) {
                                                                    t1326 = *(int *)(((int)stk + 56));
                                                                    u1336 = ((*(float *)((t1326 + 0xAE8))) - (*(float *)((t1326 + 0xB9C))));
                                                                } else {
                                                                    t1329 = *(int *)(((int)stk + 56));
                                                                    u1336 = ((-(*(float *)((t1329 + 0xAE8)))) + (*(float *)((t1329 + 0xB9C))));
                                                                }
                                                                t1338 = *(int *)(((int)stk + 52));
                                                                if (!(0.0f > ((*(float *)((t1338 + 0xAE8))) - (*(float *)((t1338 + 0xB9C)))))) {
                                                                    t1341 = *(int *)(((int)stk + 52));
                                                                    u1351 = ((*(float *)((t1341 + 0xAE8))) - (*(float *)((t1341 + 0xB9C))));
                                                                } else {
                                                                    t1344 = *(int *)(((int)stk + 52));
                                                                    u1351 = ((-(*(float *)((t1344 + 0xAE8)))) + (*(float *)((t1344 + 0xB9C))));
                                                                }
                                                                t1354 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                                if (!(t1354 > (u1321 / (u1336 + u1351)))) {
                                                                } else {
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                            t1397 = cpuInFan((*(int *)(((int)stk + 56))), ((*(int *)(((int)stk + 48))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                            if (t1397 == 0) {
                                            } else {
                                                if ((*(int *)(((int)stk + 36))) == 0) {
                                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                        if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                } else {
                                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                        if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        } else {
                                                            if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                                *(unsigned char *)0x8C2FD924 = 0x34;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                                *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                                t1443 = *(int *)(((int)stk + 56));
                                                                if (!(0.0f > ((*(float *)((t1443 + 0xAE8))) - (*(float *)((t1443 + 0xB9C)))))) {
                                                                    t1446 = *(int *)(((int)stk + 56));
                                                                    u1456 = ((*(float *)((t1446 + 0xAE8))) - (*(float *)((t1446 + 0xB9C))));
                                                                } else {
                                                                    t1449 = *(int *)(((int)stk + 56));
                                                                    u1456 = ((-(*(float *)((t1449 + 0xAE8)))) + (*(float *)((t1449 + 0xB9C))));
                                                                }
                                                                t1458 = *(int *)(((int)stk + 56));
                                                                if (!(0.0f > ((*(float *)((t1458 + 0xAE8))) - (*(float *)((t1458 + 0xB9C)))))) {
                                                                    t1461 = *(int *)(((int)stk + 56));
                                                                    u1471 = ((*(float *)((t1461 + 0xAE8))) - (*(float *)((t1461 + 0xB9C))));
                                                                } else {
                                                                    t1464 = *(int *)(((int)stk + 56));
                                                                    u1471 = ((-(*(float *)((t1464 + 0xAE8)))) + (*(float *)((t1464 + 0xB9C))));
                                                                }
                                                                t1473 = *(int *)(((int)stk + 52));
                                                                if (!(0.0f > ((*(float *)((t1473 + 0xAE8))) - (*(float *)((t1473 + 0xB9C)))))) {
                                                                    t1476 = *(int *)(((int)stk + 52));
                                                                    u1486 = ((*(float *)((t1476 + 0xAE8))) - (*(float *)((t1476 + 0xB9C))));
                                                                } else {
                                                                    t1479 = *(int *)(((int)stk + 52));
                                                                    u1486 = ((-(*(float *)((t1479 + 0xAE8)))) + (*(float *)((t1479 + 0xB9C))));
                                                                }
                                                                t1489 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                                if (!(t1489 > (u1456 / (u1471 + u1486)))) {
                                                                } else {
                                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                        t1539 = cpuInFan((*(int *)(((int)stk + 56))), ((*(int *)(((int)stk + 48))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                        if (t1539 == 0) {
                                        } else {
                                            if ((*(int *)(((int)stk + 36))) == 0) {
                                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                    if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                }
                                            } else {
                                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                    if (!(25.0f > (*(float *)(((int)stk + 28))))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                } else {
                                                    if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    } else {
                                                        if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x8C2FD924;
                                                            *(unsigned char *)0x8C2FD924 = 0x34;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x5)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xB)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x2)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x6)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x8)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0xA)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x3)) = 0x8;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x4)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x7)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 16))) + 0x9)) = 0x3;
                                                            t1585 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t1585 + 0xAE8))) - (*(float *)((t1585 + 0xB9C)))))) {
                                                                t1588 = *(int *)(((int)stk + 56));
                                                                u1598 = ((*(float *)((t1588 + 0xAE8))) - (*(float *)((t1588 + 0xB9C))));
                                                            } else {
                                                                t1591 = *(int *)(((int)stk + 56));
                                                                u1598 = ((-(*(float *)((t1591 + 0xAE8)))) + (*(float *)((t1591 + 0xB9C))));
                                                            }
                                                            t1600 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t1600 + 0xAE8))) - (*(float *)((t1600 + 0xB9C)))))) {
                                                                t1603 = *(int *)(((int)stk + 56));
                                                                u1613 = ((*(float *)((t1603 + 0xAE8))) - (*(float *)((t1603 + 0xB9C))));
                                                            } else {
                                                                t1606 = *(int *)(((int)stk + 56));
                                                                u1613 = ((-(*(float *)((t1606 + 0xAE8)))) + (*(float *)((t1606 + 0xB9C))));
                                                            }
                                                            t1615 = *(int *)(((int)stk + 52));
                                                            if (!(0.0f > ((*(float *)((t1615 + 0xAE8))) - (*(float *)((t1615 + 0xB9C)))))) {
                                                                t1618 = *(int *)(((int)stk + 52));
                                                                u1628 = ((*(float *)((t1618 + 0xAE8))) - (*(float *)((t1618 + 0xB9C))));
                                                            } else {
                                                                t1621 = *(int *)(((int)stk + 52));
                                                                u1628 = ((-(*(float *)((t1621 + 0xAE8)))) + (*(float *)((t1621 + 0xB9C))));
                                                            }
                                                            t1631 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                            if (!(t1631 > (u1598 / (u1613 + u1628)))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((int)(*(int *)0x8C2FCC5C) < (int)0x2) {
                                if ((*(int *)(((int)stk + 40))) == 0) {
                                    if ((*(int *)(((int)stk + 36))) == 0) {
                                        if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            u1716 = *(float *)(((int)stk + 28));
                                            if (!(25.0f > u1716)) {
                                                if ((*(float *)(((int)stk + 24))) > u1716) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                    *(unsigned char *)0x8C2FD924 = 0x37;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x6;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x8;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0xB;
                                                    t1730 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t1730 + 0xAE8))) - (*(float *)((t1730 + 0xB9C)))))) {
                                                        t1733 = *(int *)(((int)stk + 56));
                                                        u1744 = ((*(float *)((t1733 + 0xAE8))) - (*(float *)((t1733 + 0xB9C))));
                                                    } else {
                                                        t1736 = *(int *)(((int)stk + 56));
                                                        u1744 = ((-(*(float *)((t1736 + 0xAE8)))) + (*(float *)((t1736 + 0xB9C))));
                                                    }
                                                    t1746 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t1746 + 0xAE8))) - (*(float *)((t1746 + 0xB9C)))))) {
                                                        t1749 = *(int *)(((int)stk + 56));
                                                        u1760 = ((*(float *)((t1749 + 0xAE8))) - (*(float *)((t1749 + 0xB9C))));
                                                    } else {
                                                        t1752 = *(int *)(((int)stk + 56));
                                                        u1760 = ((-(*(float *)((t1752 + 0xAE8)))) + (*(float *)((t1752 + 0xB9C))));
                                                    }
                                                    t1762 = *(int *)(((int)stk + 52));
                                                    if (!(0.0f > ((*(float *)((t1762 + 0xAE8))) - (*(float *)((t1762 + 0xB9C)))))) {
                                                        t1765 = *(int *)(((int)stk + 52));
                                                        u1775 = ((*(float *)((t1765 + 0xAE8))) - (*(float *)((t1765 + 0xB9C))));
                                                    } else {
                                                        t1768 = *(int *)(((int)stk + 52));
                                                        u1775 = ((-(*(float *)((t1768 + 0xAE8)))) + (*(float *)((t1768 + 0xB9C))));
                                                    }
                                                    t1778 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                    if (!(t1778 > (u1744 / (u1760 + u1775)))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        }
                                    } else {
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))))) {
                                            u1826 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)));
                                        } else {
                                            u1826 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
                                        }
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))))) {
                                            u1836 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)));
                                        } else {
                                            u1836 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))));
                                        }
                                        if (!(u1836 > u1826)) {
                                            if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                u1848 = *(float *)(((int)stk + 28));
                                                if (!(25.0f > u1848)) {
                                                    if (!((*(float *)(((int)stk + 24))) > u1848)) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            } else {
                                                if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                } else {
                                                    if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                        *(unsigned char *)0x8C2FD924 = 0x28;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                        t1877 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t1877 + 0xAE8))) - (*(float *)((t1877 + 0xB9C)))))) {
                                                            t1880 = *(int *)(((int)stk + 56));
                                                            u1891 = ((*(float *)((t1880 + 0xAE8))) - (*(float *)((t1880 + 0xB9C))));
                                                        } else {
                                                            t1883 = *(int *)(((int)stk + 56));
                                                            u1891 = ((-(*(float *)((t1883 + 0xAE8)))) + (*(float *)((t1883 + 0xB9C))));
                                                        }
                                                        t1893 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t1893 + 0xAE8))) - (*(float *)((t1893 + 0xB9C)))))) {
                                                            t1896 = *(int *)(((int)stk + 56));
                                                            u1907 = ((*(float *)((t1896 + 0xAE8))) - (*(float *)((t1896 + 0xB9C))));
                                                        } else {
                                                            t1899 = *(int *)(((int)stk + 56));
                                                            u1907 = ((-(*(float *)((t1899 + 0xAE8)))) + (*(float *)((t1899 + 0xB9C))));
                                                        }
                                                        t1909 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t1909 + 0xAE8))) - (*(float *)((t1909 + 0xB9C)))))) {
                                                            t1912 = *(int *)(((int)stk + 52));
                                                            u1922 = ((*(float *)((t1912 + 0xAE8))) - (*(float *)((t1912 + 0xB9C))));
                                                        } else {
                                                            t1915 = *(int *)(((int)stk + 52));
                                                            u1922 = ((-(*(float *)((t1915 + 0xAE8)))) + (*(float *)((t1915 + 0xB9C))));
                                                        }
                                                        t1925 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t1925 > (u1891 / (u1907 + u1922)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                u1969 = *(float *)(((int)stk + 28));
                                                if (!(25.0f > u1969)) {
                                                    if (!((*(float *)(((int)stk + 24))) > u1969)) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            } else {
                                                if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                } else {
                                                    if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                        *(unsigned char *)0x8C2FD924 = 0x3C;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                        t1998 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t1998 + 0xAE8))) - (*(float *)((t1998 + 0xB9C)))))) {
                                                            t2001 = *(int *)(((int)stk + 56));
                                                            u2012 = ((*(float *)((t2001 + 0xAE8))) - (*(float *)((t2001 + 0xB9C))));
                                                        } else {
                                                            t2004 = *(int *)(((int)stk + 56));
                                                            u2012 = ((-(*(float *)((t2004 + 0xAE8)))) + (*(float *)((t2004 + 0xB9C))));
                                                        }
                                                        t2014 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2014 + 0xAE8))) - (*(float *)((t2014 + 0xB9C)))))) {
                                                            t2017 = *(int *)(((int)stk + 56));
                                                            u2028 = ((*(float *)((t2017 + 0xAE8))) - (*(float *)((t2017 + 0xB9C))));
                                                        } else {
                                                            t2020 = *(int *)(((int)stk + 56));
                                                            u2028 = ((-(*(float *)((t2020 + 0xAE8)))) + (*(float *)((t2020 + 0xB9C))));
                                                        }
                                                        t2030 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t2030 + 0xAE8))) - (*(float *)((t2030 + 0xB9C)))))) {
                                                            t2033 = *(int *)(((int)stk + 52));
                                                            u2043 = ((*(float *)((t2033 + 0xAE8))) - (*(float *)((t2033 + 0xB9C))));
                                                        } else {
                                                            t2036 = *(int *)(((int)stk + 52));
                                                            u2043 = ((-(*(float *)((t2036 + 0xAE8)))) + (*(float *)((t2036 + 0xB9C))));
                                                        }
                                                        t2046 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t2046 > (u2012 / (u2028 + u2043)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((*(int *)(((int)stk + 36))) == 0) {
                                        if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            u2117 = *(float *)(((int)stk + 28));
                                            if (!(25.0f > u2117)) {
                                                if ((*(float *)(((int)stk + 24))) > u2117) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                    *(unsigned char *)0x8C2FD924 = 0x37;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x6;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x8;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0xB;
                                                    t2131 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t2131 + 0xAE8))) - (*(float *)((t2131 + 0xB9C)))))) {
                                                        t2134 = *(int *)(((int)stk + 56));
                                                        u2145 = ((*(float *)((t2134 + 0xAE8))) - (*(float *)((t2134 + 0xB9C))));
                                                    } else {
                                                        t2137 = *(int *)(((int)stk + 56));
                                                        u2145 = ((-(*(float *)((t2137 + 0xAE8)))) + (*(float *)((t2137 + 0xB9C))));
                                                    }
                                                    t2147 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t2147 + 0xAE8))) - (*(float *)((t2147 + 0xB9C)))))) {
                                                        t2150 = *(int *)(((int)stk + 56));
                                                        u2161 = ((*(float *)((t2150 + 0xAE8))) - (*(float *)((t2150 + 0xB9C))));
                                                    } else {
                                                        t2153 = *(int *)(((int)stk + 56));
                                                        u2161 = ((-(*(float *)((t2153 + 0xAE8)))) + (*(float *)((t2153 + 0xB9C))));
                                                    }
                                                    t2163 = *(int *)(((int)stk + 52));
                                                    if (!(0.0f > ((*(float *)((t2163 + 0xAE8))) - (*(float *)((t2163 + 0xB9C)))))) {
                                                        t2166 = *(int *)(((int)stk + 52));
                                                        u2176 = ((*(float *)((t2166 + 0xAE8))) - (*(float *)((t2166 + 0xB9C))));
                                                    } else {
                                                        t2169 = *(int *)(((int)stk + 52));
                                                        u2176 = ((-(*(float *)((t2169 + 0xAE8)))) + (*(float *)((t2169 + 0xB9C))));
                                                    }
                                                    t2179 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                    if (!(t2179 > (u2145 / (u2161 + u2176)))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        }
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                            u2224 = *(float *)(((int)stk + 28));
                                            if (!(25.0f > u2224)) {
                                                if (!((*(float *)(((int)stk + 24))) > u2224)) {
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        } else {
                                            if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                    *(unsigned char *)0x8C2FD924 = 0x3C;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                    t2253 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t2253 + 0xAE8))) - (*(float *)((t2253 + 0xB9C)))))) {
                                                        t2256 = *(int *)(((int)stk + 56));
                                                        u2267 = ((*(float *)((t2256 + 0xAE8))) - (*(float *)((t2256 + 0xB9C))));
                                                    } else {
                                                        t2259 = *(int *)(((int)stk + 56));
                                                        u2267 = ((-(*(float *)((t2259 + 0xAE8)))) + (*(float *)((t2259 + 0xB9C))));
                                                    }
                                                    t2269 = *(int *)(((int)stk + 56));
                                                    if (!(0.0f > ((*(float *)((t2269 + 0xAE8))) - (*(float *)((t2269 + 0xB9C)))))) {
                                                        t2272 = *(int *)(((int)stk + 56));
                                                        u2283 = ((*(float *)((t2272 + 0xAE8))) - (*(float *)((t2272 + 0xB9C))));
                                                    } else {
                                                        t2275 = *(int *)(((int)stk + 56));
                                                        u2283 = ((-(*(float *)((t2275 + 0xAE8)))) + (*(float *)((t2275 + 0xB9C))));
                                                    }
                                                    t2285 = *(int *)(((int)stk + 52));
                                                    if (!(0.0f > ((*(float *)((t2285 + 0xAE8))) - (*(float *)((t2285 + 0xB9C)))))) {
                                                        t2288 = *(int *)(((int)stk + 52));
                                                        u2298 = ((*(float *)((t2288 + 0xAE8))) - (*(float *)((t2288 + 0xB9C))));
                                                    } else {
                                                        t2291 = *(int *)(((int)stk + 52));
                                                        u2298 = ((-(*(float *)((t2291 + 0xAE8)))) + (*(float *)((t2291 + 0xB9C))));
                                                    }
                                                    t2301 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                    if (!(t2301 > (u2267 / (u2283 + u2298)))) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)((0xAF0 + (*(int *)(((int)stk + 52)))))))) {
                                    u2370 = (*(float *)((0xAF0 + (*(int *)(((int)stk + 52))))));
                                } else {
                                    u2370 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))));
                                }
                                if (!(0.0f > (*(float *)0x8C2FCC40))) {
                                    u2375 = (*(float *)0x8C2FCC40);
                                } else {
                                    u2375 = (-(*(float *)0x8C2FCC40));
                                }
                                if (!(u2375 > u2370)) {
                                    if ((*(int *)(((int)stk + 40))) == 0) {
                                        if ((*(int *)(((int)stk + 36))) == 0) {
                                            if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                u2401 = *(float *)(((int)stk + 28));
                                                if (!(25.0f > u2401)) {
                                                    if ((*(float *)(((int)stk + 24))) > u2401) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                        *(unsigned char *)0x8C2FD924 = 0x37;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x6;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x8;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0xB;
                                                        t2415 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2415 + 0xAE8))) - (*(float *)((t2415 + 0xB9C)))))) {
                                                            t2418 = *(int *)(((int)stk + 56));
                                                            u2429 = ((*(float *)((t2418 + 0xAE8))) - (*(float *)((t2418 + 0xB9C))));
                                                        } else {
                                                            t2421 = *(int *)(((int)stk + 56));
                                                            u2429 = ((-(*(float *)((t2421 + 0xAE8)))) + (*(float *)((t2421 + 0xB9C))));
                                                        }
                                                        t2431 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2431 + 0xAE8))) - (*(float *)((t2431 + 0xB9C)))))) {
                                                            t2434 = *(int *)(((int)stk + 56));
                                                            u2445 = ((*(float *)((t2434 + 0xAE8))) - (*(float *)((t2434 + 0xB9C))));
                                                        } else {
                                                            t2437 = *(int *)(((int)stk + 56));
                                                            u2445 = ((-(*(float *)((t2437 + 0xAE8)))) + (*(float *)((t2437 + 0xB9C))));
                                                        }
                                                        t2447 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t2447 + 0xAE8))) - (*(float *)((t2447 + 0xB9C)))))) {
                                                            t2450 = *(int *)(((int)stk + 52));
                                                            u2460 = ((*(float *)((t2450 + 0xAE8))) - (*(float *)((t2450 + 0xB9C))));
                                                        } else {
                                                            t2453 = *(int *)(((int)stk + 52));
                                                            u2460 = ((-(*(float *)((t2453 + 0xAE8)))) + (*(float *)((t2453 + 0xB9C))));
                                                        }
                                                        t2463 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t2463 > (u2429 / (u2445 + u2460)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            }
                                        } else {
                                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))))) {
                                                u2511 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)));
                                            } else {
                                                u2511 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
                                            }
                                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))))) {
                                                u2521 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)));
                                            } else {
                                                u2521 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))));
                                            }
                                            if (!(u2521 > u2511)) {
                                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                    u2533 = *(float *)(((int)stk + 28));
                                                    if (!(25.0f > u2533)) {
                                                        if (!((*(float *)(((int)stk + 24))) > u2533)) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    }
                                                } else {
                                                    if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    } else {
                                                        if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                            *(unsigned char *)0x8C2FD924 = 0x28;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                            t2562 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t2562 + 0xAE8))) - (*(float *)((t2562 + 0xB9C)))))) {
                                                                t2565 = *(int *)(((int)stk + 56));
                                                                u2576 = ((*(float *)((t2565 + 0xAE8))) - (*(float *)((t2565 + 0xB9C))));
                                                            } else {
                                                                t2568 = *(int *)(((int)stk + 56));
                                                                u2576 = ((-(*(float *)((t2568 + 0xAE8)))) + (*(float *)((t2568 + 0xB9C))));
                                                            }
                                                            t2578 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t2578 + 0xAE8))) - (*(float *)((t2578 + 0xB9C)))))) {
                                                                t2581 = *(int *)(((int)stk + 56));
                                                                u2592 = ((*(float *)((t2581 + 0xAE8))) - (*(float *)((t2581 + 0xB9C))));
                                                            } else {
                                                                t2584 = *(int *)(((int)stk + 56));
                                                                u2592 = ((-(*(float *)((t2584 + 0xAE8)))) + (*(float *)((t2584 + 0xB9C))));
                                                            }
                                                            t2594 = *(int *)(((int)stk + 52));
                                                            if (!(0.0f > ((*(float *)((t2594 + 0xAE8))) - (*(float *)((t2594 + 0xB9C)))))) {
                                                                t2597 = *(int *)(((int)stk + 52));
                                                                u2607 = ((*(float *)((t2597 + 0xAE8))) - (*(float *)((t2597 + 0xB9C))));
                                                            } else {
                                                                t2600 = *(int *)(((int)stk + 52));
                                                                u2607 = ((-(*(float *)((t2600 + 0xAE8)))) + (*(float *)((t2600 + 0xB9C))));
                                                            }
                                                            t2610 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                            if (!(t2610 > (u2576 / (u2592 + u2607)))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                    u2654 = *(float *)(((int)stk + 28));
                                                    if (!(25.0f > u2654)) {
                                                        if (!((*(float *)(((int)stk + 24))) > u2654)) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    }
                                                } else {
                                                    if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    } else {
                                                        if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                            *(unsigned char *)0x8C2FD924 = 0x3C;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                            t2683 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t2683 + 0xAE8))) - (*(float *)((t2683 + 0xB9C)))))) {
                                                                t2686 = *(int *)(((int)stk + 56));
                                                                u2697 = ((*(float *)((t2686 + 0xAE8))) - (*(float *)((t2686 + 0xB9C))));
                                                            } else {
                                                                t2689 = *(int *)(((int)stk + 56));
                                                                u2697 = ((-(*(float *)((t2689 + 0xAE8)))) + (*(float *)((t2689 + 0xB9C))));
                                                            }
                                                            t2699 = *(int *)(((int)stk + 56));
                                                            if (!(0.0f > ((*(float *)((t2699 + 0xAE8))) - (*(float *)((t2699 + 0xB9C)))))) {
                                                                t2702 = *(int *)(((int)stk + 56));
                                                                u2713 = ((*(float *)((t2702 + 0xAE8))) - (*(float *)((t2702 + 0xB9C))));
                                                            } else {
                                                                t2705 = *(int *)(((int)stk + 56));
                                                                u2713 = ((-(*(float *)((t2705 + 0xAE8)))) + (*(float *)((t2705 + 0xB9C))));
                                                            }
                                                            t2715 = *(int *)(((int)stk + 52));
                                                            if (!(0.0f > ((*(float *)((t2715 + 0xAE8))) - (*(float *)((t2715 + 0xB9C)))))) {
                                                                t2718 = *(int *)(((int)stk + 52));
                                                                u2728 = ((*(float *)((t2718 + 0xAE8))) - (*(float *)((t2718 + 0xB9C))));
                                                            } else {
                                                                t2721 = *(int *)(((int)stk + 52));
                                                                u2728 = ((-(*(float *)((t2721 + 0xAE8)))) + (*(float *)((t2721 + 0xB9C))));
                                                            }
                                                            t2731 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                            if (!(t2731 > (u2697 / (u2713 + u2728)))) {
                                                            } else {
                                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((*(int *)(((int)stk + 36))) == 0) {
                                            if (((*(int *)(((int)stk + 32))) & 1) == 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                u2802 = *(float *)(((int)stk + 28));
                                                if (!(25.0f > u2802)) {
                                                    if ((*(float *)(((int)stk + 24))) > u2802) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                        *(unsigned char *)0x8C2FD924 = 0x37;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x6;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x8;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0xB;
                                                        t2816 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2816 + 0xAE8))) - (*(float *)((t2816 + 0xB9C)))))) {
                                                            t2819 = *(int *)(((int)stk + 56));
                                                            u2830 = ((*(float *)((t2819 + 0xAE8))) - (*(float *)((t2819 + 0xB9C))));
                                                        } else {
                                                            t2822 = *(int *)(((int)stk + 56));
                                                            u2830 = ((-(*(float *)((t2822 + 0xAE8)))) + (*(float *)((t2822 + 0xB9C))));
                                                        }
                                                        t2832 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2832 + 0xAE8))) - (*(float *)((t2832 + 0xB9C)))))) {
                                                            t2835 = *(int *)(((int)stk + 56));
                                                            u2846 = ((*(float *)((t2835 + 0xAE8))) - (*(float *)((t2835 + 0xB9C))));
                                                        } else {
                                                            t2838 = *(int *)(((int)stk + 56));
                                                            u2846 = ((-(*(float *)((t2838 + 0xAE8)))) + (*(float *)((t2838 + 0xB9C))));
                                                        }
                                                        t2848 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t2848 + 0xAE8))) - (*(float *)((t2848 + 0xB9C)))))) {
                                                            t2851 = *(int *)(((int)stk + 52));
                                                            u2861 = ((*(float *)((t2851 + 0xAE8))) - (*(float *)((t2851 + 0xB9C))));
                                                        } else {
                                                            t2854 = *(int *)(((int)stk + 52));
                                                            u2861 = ((-(*(float *)((t2854 + 0xAE8)))) + (*(float *)((t2854 + 0xB9C))));
                                                        }
                                                        t2864 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t2864 > (u2830 / (u2846 + u2861)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            }
                                        } else {
                                            if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                                u2909 = *(float *)(((int)stk + 28));
                                                if (!(25.0f > u2909)) {
                                                    if (!((*(float *)(((int)stk + 24))) > u2909)) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                }
                                            } else {
                                                if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                } else {
                                                    if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                        *(unsigned char *)0x8C2FD924 = 0x3C;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x3;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x4;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x2;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                        *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                        t2938 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2938 + 0xAE8))) - (*(float *)((t2938 + 0xB9C)))))) {
                                                            t2941 = *(int *)(((int)stk + 56));
                                                            u2952 = ((*(float *)((t2941 + 0xAE8))) - (*(float *)((t2941 + 0xB9C))));
                                                        } else {
                                                            t2944 = *(int *)(((int)stk + 56));
                                                            u2952 = ((-(*(float *)((t2944 + 0xAE8)))) + (*(float *)((t2944 + 0xB9C))));
                                                        }
                                                        t2954 = *(int *)(((int)stk + 56));
                                                        if (!(0.0f > ((*(float *)((t2954 + 0xAE8))) - (*(float *)((t2954 + 0xB9C)))))) {
                                                            t2957 = *(int *)(((int)stk + 56));
                                                            u2968 = ((*(float *)((t2957 + 0xAE8))) - (*(float *)((t2957 + 0xB9C))));
                                                        } else {
                                                            t2960 = *(int *)(((int)stk + 56));
                                                            u2968 = ((-(*(float *)((t2960 + 0xAE8)))) + (*(float *)((t2960 + 0xB9C))));
                                                        }
                                                        t2970 = *(int *)(((int)stk + 52));
                                                        if (!(0.0f > ((*(float *)((t2970 + 0xAE8))) - (*(float *)((t2970 + 0xB9C)))))) {
                                                            t2973 = *(int *)(((int)stk + 52));
                                                            u2983 = ((*(float *)((t2973 + 0xAE8))) - (*(float *)((t2973 + 0xB9C))));
                                                        } else {
                                                            t2976 = *(int *)(((int)stk + 52));
                                                            u2983 = ((-(*(float *)((t2976 + 0xAE8)))) + (*(float *)((t2976 + 0xB9C))));
                                                        }
                                                        t2986 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                        if (!(t2986 > (u2952 / (u2968 + u2983)))) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((*(int *)(((int)stk + 36))) != 0) {
                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                            u3062 = *(float *)(((int)stk + 28));
                                            if (!(25.0f > u3062)) {
                                                if ((*(float *)(((int)stk + 24))) > u3062) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                                    t3068 = cpuInFan((*(int *)(((int)stk + 52))), ((*(int *)(((int)stk + 44))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                                    if (t3068 != 0) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        } else {
                                            if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                if (50.0f > (*(float *)(((int)stk + 24)))) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                                    t3100 = cpuInFan((*(int *)(((int)stk + 52))), ((*(int *)(((int)stk + 44))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                                    if (t3100 != 0) {
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                }
                                            }
                                        }
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                            u3139 = *(float *)(((int)stk + 28));
                                            if (!(25.0f > u3139)) {
                                                if ((*(float *)(((int)stk + 24))) > u3139) {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                                } else {
                                                    if (50.0f > (*(float *)(((int)stk + 24)))) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2FCC38); }
                                                        t3148 = cpuInFan((*(int *)(((int)stk + 52))), ((*(int *)(((int)stk + 44))) + 0xB8), *(Stk3 *)(((int)stk + 4)));
                                                        if (t3148 != 0) {
                                                        } else {
                                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                        }
                                                    } else {
                                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                    }
                                                }
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12F)) = 0x1;
                                            }
                                        } else {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((*(int *)(((int)stk + 40))) == 0) {
                            if ((*(int *)(((int)stk + 36))) == 0) {
                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                    u3244 = *(float *)(((int)stk + 28));
                                    if (!(25.0f > u3244) && (u3245 = *(float *)(((int)stk + 24)), !(u3245 > u3244))) {
                                    } else {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                    *(unsigned char *)0x8C2FD924 = 0x32;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x7;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x7;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0xA;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0xF;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xF;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x14;
                                    t3261 = *(int *)(((int)stk + 56));
                                    if (!(0.0f > ((*(float *)((t3261 + 0xAE8))) - (*(float *)((t3261 + 0xB9C)))))) {
                                        t3264 = *(int *)(((int)stk + 56));
                                        u3275 = ((*(float *)((t3264 + 0xAE8))) - (*(float *)((t3264 + 0xB9C))));
                                    } else {
                                        t3267 = *(int *)(((int)stk + 56));
                                        u3275 = ((-(*(float *)((t3267 + 0xAE8)))) + (*(float *)((t3267 + 0xB9C))));
                                    }
                                    t3277 = *(int *)(((int)stk + 56));
                                    if (!(0.0f > ((*(float *)((t3277 + 0xAE8))) - (*(float *)((t3277 + 0xB9C)))))) {
                                        t3280 = *(int *)(((int)stk + 56));
                                        u3291 = ((*(float *)((t3280 + 0xAE8))) - (*(float *)((t3280 + 0xB9C))));
                                    } else {
                                        t3283 = *(int *)(((int)stk + 56));
                                        u3291 = ((-(*(float *)((t3283 + 0xAE8)))) + (*(float *)((t3283 + 0xB9C))));
                                    }
                                    t3293 = *(int *)(((int)stk + 52));
                                    if (!(0.0f > ((*(float *)((t3293 + 0xAE8))) - (*(float *)((t3293 + 0xB9C)))))) {
                                        t3296 = *(int *)(((int)stk + 52));
                                        u3306 = ((*(float *)((t3296 + 0xAE8))) - (*(float *)((t3296 + 0xB9C))));
                                    } else {
                                        t3299 = *(int *)(((int)stk + 52));
                                        u3306 = ((-(*(float *)((t3299 + 0xAE8)))) + (*(float *)((t3299 + 0xB9C))));
                                    }
                                    t3309 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                    if (!(t3309 > (u3275 / (u3291 + u3306)))) {
                                    } else {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))))) {
                                    u3333 = (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)));
                                } else {
                                    u3333 = (-(*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8))));
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))))) {
                                    u3343 = (*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8)));
                                } else {
                                    u3343 = (-(*(float *)(((*(int *)(((int)stk + 56))) + 0xAE8))));
                                }
                                if (!(u3343 > u3333)) {
                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                *(unsigned char *)0x8C2FD924 = 0x28;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                t3366 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t3366 + 0xAE8))) - (*(float *)((t3366 + 0xB9C)))))) {
                                                    t3369 = *(int *)(((int)stk + 56));
                                                    u3380 = ((*(float *)((t3369 + 0xAE8))) - (*(float *)((t3369 + 0xB9C))));
                                                } else {
                                                    t3372 = *(int *)(((int)stk + 56));
                                                    u3380 = ((-(*(float *)((t3372 + 0xAE8)))) + (*(float *)((t3372 + 0xB9C))));
                                                }
                                                t3382 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t3382 + 0xAE8))) - (*(float *)((t3382 + 0xB9C)))))) {
                                                    t3385 = *(int *)(((int)stk + 56));
                                                    u3396 = ((*(float *)((t3385 + 0xAE8))) - (*(float *)((t3385 + 0xB9C))));
                                                } else {
                                                    t3388 = *(int *)(((int)stk + 56));
                                                    u3396 = ((-(*(float *)((t3388 + 0xAE8)))) + (*(float *)((t3388 + 0xB9C))));
                                                }
                                                t3398 = *(int *)(((int)stk + 52));
                                                if (!(0.0f > ((*(float *)((t3398 + 0xAE8))) - (*(float *)((t3398 + 0xB9C)))))) {
                                                    t3401 = *(int *)(((int)stk + 52));
                                                    u3411 = ((*(float *)((t3401 + 0xAE8))) - (*(float *)((t3401 + 0xB9C))));
                                                } else {
                                                    t3404 = *(int *)(((int)stk + 52));
                                                    u3411 = ((-(*(float *)((t3404 + 0xAE8)))) + (*(float *)((t3404 + 0xB9C))));
                                                }
                                                t3414 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                if (!(t3414 > (u3380 / (u3396 + u3411)))) {
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                    } else {
                                        if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            if (25.0f > (*(float *)(((int)stk + 28)))) {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            } else {
                                                *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                                *(unsigned char *)0x8C2FD924 = 0x3C;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0xA;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                                *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                                t3471 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t3471 + 0xAE8))) - (*(float *)((t3471 + 0xB9C)))))) {
                                                    t3474 = *(int *)(((int)stk + 56));
                                                    u3485 = ((*(float *)((t3474 + 0xAE8))) - (*(float *)((t3474 + 0xB9C))));
                                                } else {
                                                    t3477 = *(int *)(((int)stk + 56));
                                                    u3485 = ((-(*(float *)((t3477 + 0xAE8)))) + (*(float *)((t3477 + 0xB9C))));
                                                }
                                                t3487 = *(int *)(((int)stk + 56));
                                                if (!(0.0f > ((*(float *)((t3487 + 0xAE8))) - (*(float *)((t3487 + 0xB9C)))))) {
                                                    t3490 = *(int *)(((int)stk + 56));
                                                    u3501 = ((*(float *)((t3490 + 0xAE8))) - (*(float *)((t3490 + 0xB9C))));
                                                } else {
                                                    t3493 = *(int *)(((int)stk + 56));
                                                    u3501 = ((-(*(float *)((t3493 + 0xAE8)))) + (*(float *)((t3493 + 0xB9C))));
                                                }
                                                t3503 = *(int *)(((int)stk + 52));
                                                if (!(0.0f > ((*(float *)((t3503 + 0xAE8))) - (*(float *)((t3503 + 0xB9C)))))) {
                                                    t3506 = *(int *)(((int)stk + 52));
                                                    u3516 = ((*(float *)((t3506 + 0xAE8))) - (*(float *)((t3506 + 0xB9C))));
                                                } else {
                                                    t3509 = *(int *)(((int)stk + 52));
                                                    u3516 = ((-(*(float *)((t3509 + 0xAE8)))) + (*(float *)((t3509 + 0xB9C))));
                                                }
                                                t3519 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                                if (!(t3519 > (u3485 / (u3501 + u3516)))) {
                                                } else {
                                                    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((*(int *)(((int)stk + 36))) == 0) {
                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                    u3587 = *(float *)(((int)stk + 28));
                                    if (!(25.0f > u3587) && (u3588 = *(float *)(((int)stk + 24)), !(u3588 > u3587))) {
                                    } else {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    }
                                } else {
                                    *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                    *(unsigned char *)0x8C2FD924 = 0x32;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0xA;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0xF;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0xF;
                                    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x14;
                                    t3604 = *(int *)(((int)stk + 56));
                                    if (!(0.0f > ((*(float *)((t3604 + 0xAE8))) - (*(float *)((t3604 + 0xB9C)))))) {
                                        t3607 = *(int *)(((int)stk + 56));
                                        u3618 = ((*(float *)((t3607 + 0xAE8))) - (*(float *)((t3607 + 0xB9C))));
                                    } else {
                                        t3610 = *(int *)(((int)stk + 56));
                                        u3618 = ((-(*(float *)((t3610 + 0xAE8)))) + (*(float *)((t3610 + 0xB9C))));
                                    }
                                    t3620 = *(int *)(((int)stk + 56));
                                    if (!(0.0f > ((*(float *)((t3620 + 0xAE8))) - (*(float *)((t3620 + 0xB9C)))))) {
                                        t3623 = *(int *)(((int)stk + 56));
                                        u3634 = ((*(float *)((t3623 + 0xAE8))) - (*(float *)((t3623 + 0xB9C))));
                                    } else {
                                        t3626 = *(int *)(((int)stk + 56));
                                        u3634 = ((-(*(float *)((t3626 + 0xAE8)))) + (*(float *)((t3626 + 0xB9C))));
                                    }
                                    t3636 = *(int *)(((int)stk + 52));
                                    if (!(0.0f > ((*(float *)((t3636 + 0xAE8))) - (*(float *)((t3636 + 0xB9C)))))) {
                                        t3639 = *(int *)(((int)stk + 52));
                                        u3649 = ((*(float *)((t3639 + 0xAE8))) - (*(float *)((t3639 + 0xB9C))));
                                    } else {
                                        t3642 = *(int *)(((int)stk + 52));
                                        u3649 = ((-(*(float *)((t3642 + 0xAE8)))) + (*(float *)((t3642 + 0xB9C))));
                                    }
                                    t3652 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                    if (!(t3652 > (u3618 / (u3634 + u3649)))) {
                                    } else {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    }
                                }
                            } else {
                                if (((*(int *)(((int)stk + 32))) & 1) != 0) {
                                } else {
                                    if (((*(int *)(((int)stk + 32))) & 2) != 0) {
                                        *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                    } else {
                                        if (25.0f > (*(float *)(((int)stk + 28)))) {
                                            *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                        } else {
                                            *(unsigned int *)(((int)stk + 20)) = 0x8C2FD924;
                                            *(unsigned char *)0x8C2FD924 = 0x32;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x5)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xB)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x2)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x6)) = 0x7;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x8)) = 0x8;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0xA)) = 0xA;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x3)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x4)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x7)) = 0x5;
                                            *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x9)) = 0x7;
                                            t3686 = *(int *)(((int)stk + 56));
                                            if (!(0.0f > ((*(float *)((t3686 + 0xAE8))) - (*(float *)((t3686 + 0xB9C)))))) {
                                                t3689 = *(int *)(((int)stk + 56));
                                                u3700 = ((*(float *)((t3689 + 0xAE8))) - (*(float *)((t3689 + 0xB9C))));
                                            } else {
                                                t3692 = *(int *)(((int)stk + 56));
                                                u3700 = ((-(*(float *)((t3692 + 0xAE8)))) + (*(float *)((t3692 + 0xB9C))));
                                            }
                                            t3702 = *(int *)(((int)stk + 56));
                                            if (!(0.0f > ((*(float *)((t3702 + 0xAE8))) - (*(float *)((t3702 + 0xB9C)))))) {
                                                t3705 = *(int *)(((int)stk + 56));
                                                u3716 = ((*(float *)((t3705 + 0xAE8))) - (*(float *)((t3705 + 0xB9C))));
                                            } else {
                                                t3708 = *(int *)(((int)stk + 56));
                                                u3716 = ((-(*(float *)((t3708 + 0xAE8)))) + (*(float *)((t3708 + 0xB9C))));
                                            }
                                            t3718 = *(int *)(((int)stk + 52));
                                            if (!(0.0f > ((*(float *)((t3718 + 0xAE8))) - (*(float *)((t3718 + 0xB9C)))))) {
                                                t3721 = *(int *)(((int)stk + 52));
                                                u3731 = ((*(float *)((t3721 + 0xAE8))) - (*(float *)((t3721 + 0xB9C))));
                                            } else {
                                                t3724 = *(int *)(((int)stk + 52));
                                                u3731 = ((-(*(float *)((t3724 + 0xAE8)))) + (*(float *)((t3724 + 0xB9C))));
                                            }
                                            t3734 = cpuDblCoverPos((*(int *)(((int)stk + 56))));
                                            if (!(t3734 > (u3700 / (u3716 + u3731)))) {
                                            } else {
                                                *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x12E)) = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

float FUN_8c068fa4(int a4)
{
    int stk[22];

    register int R5;
    register int R6;
    register int R7;
    int R8;
    int R9;
    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    v0_1 = a4;
    v0_4 = *(int *)((v0_1 + 0xB5C));
    *(unsigned int *)(((int)stk + 8)) = (0x8C2FC69C + ((*(int *)(((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160));
    v0_5 = (0x54);
    v0_2 = (0x2);
    v0_0 = (((v0_4 * 0x160) + 0x8C2FC69C));
    v0_3 = (0x8C291F24);
    v0_1 = (v0_1);
    v0_4 = ((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84));
    R8 = (0x4);
    R9 = (0x100);
    w0_1 = (0.75f);
    w0_2 = (20.0f);
    if ((((*(int *)0x8C291F78) & 0x4) == 0)) goto L_8C069008;
    L_8C069C5A:;
    return F0;
    L_8C069008:;
    v0_5 = (0x12E);
    if (((int)(unsigned char)(*(signed char *)((v0_0 + 0x12E))) < (int)v0_2)) goto L_8C069016;
    goto L_8C069C5A;
    L_8C069016:;
    if (!(((*(signed char *)((v0_0 + 0x12F))) != 0))) goto L_8C06913C;
    if (((int)(*(short *)((v0_0 + 0x118))) < (int)0x14)) goto L_8C069030;
    goto L_8C06913C;
    L_8C06913C:;
    if (((unsigned char)(*(signed char *)((v0_0 + 0x12E))) == 1)) goto L_8C06914A;
    *(unsigned int *)(((int)stk + 12)) = 0x8C2FCC2C;
    w0_0 = *(float *)((v0_1 + 0xAF0));
    w0_8 = *(float *)((v0_4 + 0xAF0));
    v0_5 = (0xAF0);
    R8 = (0x8C2FCC2C);
    w0_5 = (6.0f);
    w0_3 = (10.0f);
    w0_4 = (w0_8);
    w0_7 = (w0_0);
    w0_6 = ((w0_0 - w0_8));
    if ((0.0f > (w0_0 - w0_8))) goto L_8C0694A0;
    w0_0 = (w0_6);
    L_8C0694A8:;
    if ((w0_2 > w0_0)) goto L_8C0694B0;
    w0_0 = *(float *)((v0_1 + v0_5));
    w0_4 = ((*(float *)((v0_4 + v0_5))));
    w0_7 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C06979C;
    w0_0 = (w0_7);
    L_8C0697A0:;
    if ((0.0f > w0_4)) goto L_8C0697AA;
    w0_7 = (w0_4);
    L_8C0697AE:;
    if ((w0_0 > w0_7)) goto L_8C0697B6;
    if (!(((int)(*(int *)0x8C2FCC5C) >= (int)v0_2))) goto L_8C069C1E;
    w0_1 = *(float *)((v0_1 + v0_5));
    w0_7 = (w0_1);
    w0_0 = (0.0f);
    if ((!(w0_1 > 0.0f))) goto L_8C069B2C;
    v0_5 = (0x1);
    goto L_8C069B36;
    L_8C069C1E:;
    w0_0 = *(float *)((v0_1 + 0xAE8));
    w0_1 = *(float *)((v0_1 + 0xB9C));
    w0_4 = (w0_1);
    w0_7 = ((w0_0 - w0_1));
    w0_6 = (w0_0);
    if ((0.0f > (w0_0 - w0_1))) goto L_8C069C44;
    w0_0 = (w0_7);
    L_8C069C4C:;
    v0_5 = (0x8C069D74);
    if ((!((*(float *)0x8C069D74) > w0_0))) goto L_8C069C5A;
    *(unsigned char *)((v0_0 + 0x12E)) = 0x1;
    v0_5 = (0x12E);
    goto L_8C069C5A;
    L_8C069C44:;
    w0_0 = (((-w0_6) + w0_4));
    goto L_8C069C4C;
    L_8C069B36:;
    w0_1 = *(float *)((((*(int *)(((int)stk + 12))) + 0xC) + 0x8));
    w0_6 = (w0_1);
    w0_0 = ((float)v0_5);
    if ((0.0f > w0_1)) goto L_8C069B68;
    w0_7 = ((*(float *)((((*(int *)(((int)stk + 12))) + 0xC) + 0x8))));
    L_8C069B72:;
    if ((!(w0_7 > w0_0))) goto L_8C069C1E;
    v0_4 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 20)) = v0_4;
    w0_1 = *(float *)((v0_4 + 0x8));
    w0_2 = *(float *)((v0_1 + 0xAF0));
    w0_4 = (w0_2);
    w0_6 = (w0_1);
    w0_0 = ((w0_1 - w0_2));
    if ((0.0f > (w0_1 - w0_2))) goto L_8C069B90;
    w0_0 = (w0_0);
    L_8C069B98:;
    v0_4 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = (v0_4 + 0xC);
    w0_1 = *(float *)(((v0_4 + 0xC) + 0x8));
    w0_7 = ((w0_4 - w0_1));
    w0_6 = (w0_1);
    if ((0.0f > (w0_4 - w0_1))) goto L_8C069BB0;
    w0_7 = (w0_7);
    L_8C069BB8:;
    if ((!(w0_7 > w0_0))) goto L_8C069C08;
    w0_0 = cpuDistXZ((0xAE8 + v0_1), (*(int *)(((int)stk + 12))));
    F0 = (w0_0);
    if ((w0_5 > w0_0)) goto L_8C069C18;
    w0_0 = cpuDistXZ((0xAE8 + v0_1), (R8 + 0xC));
    F0 = (w0_0);
    if ((!(w0_3 > w0_0))) goto L_8C069C5A;
    w0_1 = *(float *)((R8 + 0x8));
    v0_5 = (0x8);
    w0_6 = (0.0f);
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C069BEA;
    w0_0 = ((*(float *)((R8 + v0_5))));
    L_8C069BEC:;
    w0_1 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    w0_7 = (w0_1);
    if ((w0_6 > w0_1)) goto L_8C069BF8;
    w0_7 = ((*(float *)((v0_3 + v0_5))));
    L_8C069BFA:;
    v0_5 = (0x8C069C40);
    w0_6 = (0.949999988f);
    if ((!((w0_7 * 0.949999988f) > w0_0))) goto L_8C069C5A;
    L_8C069C18:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    v0_5 = (0x12E);
    goto L_8C069C5A;
    L_8C069BF8:;
    w0_7 = ((-w0_7));
    goto L_8C069BFA;
    L_8C069BEA:;
    w0_0 = ((-w0_0));
    goto L_8C069BEC;
    L_8C069C08:;
    w0_0 = cpuDistXZ((0xAE8 + v0_1), ((*(int *)(((int)stk + 12))) + 0xC));
    F0 = (w0_0);
    if ((!(w0_3 > w0_0))) goto L_8C069C5A;
    goto L_8C069C18;
    L_8C069BB0:;
    w0_7 = (((-w0_4) + w0_6));
    goto L_8C069BB8;
    L_8C069B90:;
    w0_0 = (((-w0_6) + w0_4));
    goto L_8C069B98;
    L_8C069B68:;
    w0_7 = ((-(*(float *)((((*(int *)(((int)stk + 12))) + 0xC) + 0x8)))));
    goto L_8C069B72;
    L_8C069B2C:;
    if ((!(w0_0 > w0_7))) goto L_8C069B34;
    v0_5 = (0xFFFFFFFF);
    goto L_8C069B36;
    L_8C069B34:;
    v0_5 = (0x0);
    goto L_8C069B36;
    L_8C0697B6:;
    w0_0 = *(float *)((v0_4 + v0_5));
    v0_5 = (0x60);
    w0_7 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C0697C4;
    w0_0 = (w0_7);
    L_8C0697C8:;
    w0_6 = *(float *)((v0_3 + v0_5));
    w0_4 = (w0_6);
    if ((0.0f > w0_6)) goto L_8C0697E4;
    w0_7 = (w0_4);
    L_8C0697E8:;
    if (!((w0_7 > w0_0))) goto L_8C069962;
    if (((*(float *)((v0_4 + 0xBA0))) > 27.5f)) goto L_8C069800;
    goto L_8C069962;
    L_8C069962:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) != 0)) goto L_8C06997A;
    if (((int)(*(short *)(((*(int *)(((int)stk + 8))) + 0x118))) >= (int)0x3)) goto L_8C06997A;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C06997A:;
    if ((((*(int *)((v0_1 + 0xB60))) & R9) == 0)) goto L_8C0699CE;
    w0_3 = *(float *)((v0_1 + 0xAF0));
    v0_5 = (0xAF0);
    w0_0 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C069990;
    w0_0 = ((*(float *)((v0_1 + v0_5))));
    L_8C069992:;
    w0_3 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    F0 = (0.0f);
    w0_6 = (w0_3);
    w0_0 = ((w0_0 + 5.0f));
    if ((0.0f > w0_3)) goto L_8C0699C4;
    w0_6 = ((*(float *)((v0_3 + v0_5))));
    L_8C0699C6:;
    if ((!(w0_6 > w0_0))) goto L_8C0699CE;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C0699CE:;
    w0_0 = *(float *)(((*(int *)(((int)stk + 8))) + 0x28));
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C0699DE;
    w0_0 = (w0_4);
    L_8C0699E2:;
    if ((!(w0_0 > w0_1))) goto L_8C069AB6;
    w0_0 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C0699F0;
    v0_6 = (0x1);
    L_8C0699FA:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x158))) <= 0)) goto L_8C069A08;
    v0_7 = (0x1);
    L_8C069A18:;
    if ((v0_6 != v0_7)) goto L_8C069AB6;
    w0_0 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C069A26;
    v0_6 = (0x1);
    L_8C069A30:;
    if ((!(((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))) > 0.0f))) goto L_8C069A44;
    v0_5 = (0x1);
    L_8C069A5A:;
    if ((v0_6 != v0_5)) goto L_8C069AB6;
    w0_1 = *(float *)((v0_1 + 0xAE8));
    w0_7 = (w0_1);
    w0_0 = (0.0f);
    if ((!(w0_1 > 0.0f))) goto L_8C069A6C;
    v0_7 = (0x1);
    L_8C069A7E:;
    w0_1 = *(float *)((v0_4 + 0xB9C));
    w0_7 = (w0_1);
    w0_0 = (0.0f);
    if ((!(w0_1 > 0.0f))) goto L_8C069A8C;
    v0_6 = (0x1);
    L_8C069A96:;
    if ((v0_7 == v0_6)) goto L_8C069AB2;
    w0_1 = *(float *)((v0_4 + 0xB9C));
    v0_5 = (0xB9C);
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C069AA8;
    w0_0 = ((*(float *)((v0_4 + v0_5))));
    L_8C069AAA:;
    if ((!(7.5f > w0_0))) goto L_8C069AB6;
    L_8C069AB2:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C069AB6:;
    v0_5 = (0x12F);
    if (((*(signed char *)((v0_0 + 0x12F))) != 0)) goto L_8C069AC2;
    goto L_8C069C5A;
    L_8C069AC2:;
    v0_5 = (0x118);
    if (((int)(*(short *)((v0_0 + 0x118))) < (int)0x28)) goto L_8C069AD0;
    goto L_8C069C5A;
    L_8C069AD0:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) == 0)) goto L_8C069AFE;
    w0_0 = *(float *)((v0_4 + 0xAE8));
    w0_1 = *(float *)((v0_4 + 0xB9C));
    v0_5 = (0xB9C);
    w0_4 = ((w0_0 - w0_1));
    w0_7 = (w0_0);
    w0_6 = (w0_1);
    if ((0.0f > (w0_0 - w0_1))) goto L_8C069AEE;
    w0_0 = (w0_4);
    L_8C069AF6:;
    if ((w0_0 > w0_2)) goto L_8C069AFE;
    goto L_8C069C5A;
    L_8C069AFE:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    *(unsigned char *)((v0_0 + 0x12F)) = 0x0;
    *(unsigned char *)((v0_0 + 0xAF)) = 0x0;
    *(unsigned char *)((v0_0 + 0xAE)) = 0x0;
    v0_5 = (0xAE);
    goto L_8C069C5A;
    L_8C069AEE:;
    w0_0 = (((-w0_7) + w0_6));
    goto L_8C069AF6;
    L_8C069AA8:;
    w0_0 = ((-w0_0));
    goto L_8C069AAA;
    L_8C069A8C:;
    if ((!(w0_0 > w0_7))) goto L_8C069A94;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069A96;
    L_8C069A94:;
    v0_6 = (0x0);
    goto L_8C069A96;
    L_8C069A6C:;
    if ((!(w0_0 > w0_7))) goto L_8C069A7C;
    v0_7 = (0xFFFFFFFF);
    goto L_8C069A7E;
    L_8C069A7C:;
    v0_7 = (0x0);
    goto L_8C069A7E;
    L_8C069A44:;
    if ((!(0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C))))))) goto L_8C069A58;
    v0_5 = (0xFFFFFFFF);
    goto L_8C069A5A;
    L_8C069A58:;
    v0_5 = (0x0);
    goto L_8C069A5A;
    L_8C069A26:;
    if ((!(w0_0 > w0_4))) goto L_8C069A2E;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069A30;
    L_8C069A2E:;
    v0_6 = (0x0);
    goto L_8C069A30;
    L_8C069A08:;
    if (((int)(*(int *)((0x158 + (*(int *)(((int)stk + 8)))))) >= 0)) goto L_8C069A16;
    v0_7 = (0xFFFFFFFF);
    goto L_8C069A18;
    L_8C069A16:;
    v0_7 = (0x0);
    goto L_8C069A18;
    L_8C0699F0:;
    if ((!(w0_0 > w0_4))) goto L_8C0699F8;
    v0_6 = (0xFFFFFFFF);
    goto L_8C0699FA;
    L_8C0699F8:;
    v0_6 = (0x0);
    goto L_8C0699FA;
    L_8C0699DE:;
    w0_0 = ((-w0_4));
    goto L_8C0699E2;
    L_8C0699C4:;
    w0_6 = ((-w0_6));
    goto L_8C0699C6;
    L_8C069990:;
    w0_0 = ((-w0_0));
    goto L_8C069992;
    L_8C069800:;
    if (((int)(*(int *)0x8C2FCC5C) >= (int)0x2)) goto L_8C06980E;
    goto L_8C069962;
    L_8C06980E:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) != 0)) goto L_8C069890;
    if ((!((*(float *)((v0_3 + 0x30))) > w0_3))) goto L_8C069890;
    if (((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x158))) <= 0)) goto L_8C06982C;
    v0_6 = (0x1);
    L_8C06983C:;
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))) > 0.0f))) goto L_8C069850;
    v0_7 = (0x1);
    L_8C069864:;
    if ((v0_6 != v0_7)) goto L_8C069890;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 8))) + 0x28))))) goto L_8C06987C;
    w0_0 = ((*(float *)(((*(int *)(((int)stk + 8))) + 0x28))));
    L_8C069884:;
    if ((!(w0_0 > 0.75f))) goto L_8C069890;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C069890:;
    *(unsigned int *)(((int)stk + 28)) = R8;
    w0_7 = *(float *)((R8 + 0x8));
    w0_8 = *(float *)((v0_4 + 0xAF0));
    w0_4 = (w0_8);
    w0_6 = ((w0_7 - w0_8));
    w0_0 = (w0_7);
    if ((0.0f > (w0_7 - w0_8))) goto L_8C0698AA;
    w0_0 = (w0_6);
    L_8C0698B2:;
    *(unsigned int *)(((int)stk + 24)) = (R8 + 0xC);
    w0_8 = *(float *)(((R8 + 0xC) + 0x8));
    w0_7 = (w0_8);
    w0_6 = ((w0_4 - w0_8));
    if ((0.0f > (w0_4 - w0_8))) goto L_8C0698E4;
    w0_7 = (w0_6);
    L_8C0698EC:;
    if ((!(w0_7 > w0_0))) goto L_8C069944;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) == 0)) goto L_8C069962;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), R8);
    F0 = (w0_0);
    if ((w0_0 > w0_5)) goto L_8C06995E;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), (R8 + 0xC));
    F0 = (w0_0);
    if ((!(w0_0 > w0_3))) goto L_8C069962;
    w0_3 = *(float *)((R8 + 0x8));
    v0_5 = (0x8);
    w0_6 = (0.0f);
    w0_0 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C069926;
    w0_0 = ((*(float *)((R8 + v0_5))));
    L_8C069928:;
    w0_3 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    w0_7 = (w0_3);
    if ((w0_6 > w0_3)) goto L_8C069934;
    w0_7 = ((*(float *)((v0_3 + v0_5))));
    L_8C069936:;
    w0_6 = (0.949999988f);
    if ((!((w0_7 * 0.949999988f) > w0_0))) goto L_8C069962;
    L_8C06995E:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    goto L_8C069962;
    L_8C069934:;
    w0_7 = ((-w0_7));
    goto L_8C069936;
    L_8C069926:;
    w0_0 = ((-w0_0));
    goto L_8C069928;
    L_8C069944:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) == 0)) goto L_8C069962;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), 0x8C2FCC38);
    F0 = (w0_0);
    if ((!(w0_0 > 10.0f))) goto L_8C069962;
    goto L_8C06995E;
    L_8C0698E4:;
    w0_6 = ((-w0_4));
    w0_7 = (((-w0_4) + w0_7));
    goto L_8C0698EC;
    L_8C0698AA:;
    w0_0 = (((-w0_0) + w0_4));
    goto L_8C0698B2;
    L_8C06987C:;
    w0_0 = ((-(*(float *)(((*(int *)(((int)stk + 8))) + 0x28)))));
    goto L_8C069884;
    L_8C069850:;
    w0_4 = *(float *)((v0_4 + 0xB9C));
    w0_7 = *(float *)((v0_4 + 0xAE8));
    w0_6 = ((w0_7 - w0_4));
    if ((!(w0_0 > (w0_7 - w0_4)))) goto L_8C069862;
    v0_7 = (0xFFFFFFFF);
    goto L_8C069864;
    L_8C069862:;
    v0_7 = (0x0);
    goto L_8C069864;
    L_8C06982C:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x158))) >= 0)) goto L_8C06983A;
    v0_6 = (0xFFFFFFFF);
    goto L_8C06983C;
    L_8C06983A:;
    v0_6 = (0x0);
    goto L_8C06983C;
    L_8C0697E4:;
    w0_7 = ((-w0_4));
    goto L_8C0697E8;
    L_8C0697C4:;
    w0_0 = ((-w0_7));
    goto L_8C0697C8;
    L_8C0697AA:;
    w0_7 = ((-w0_4));
    goto L_8C0697AE;
    L_8C06979C:;
    w0_0 = ((-w0_7));
    goto L_8C0697A0;
    L_8C0694B0:;
    w0_0 = *(float *)((v0_4 + v0_5));
    v0_5 = (0x60);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C0694BE;
    w0_0 = (w0_4);
    L_8C0694C2:;
    w0_2 = *(float *)((v0_3 + v0_5));
    w0_7 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C0694CE;
    w0_7 = (w0_7);
    L_8C0694D2:;
    if (!((w0_7 > w0_0))) goto L_8C0695F6;
    if (((*(float *)((v0_4 + 0xBA0))) > 27.5f)) goto L_8C0694EA;
    goto L_8C0695F6;
    L_8C0695F6:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) != 0)) goto L_8C06960E;
    if (((int)(*(short *)(((*(int *)(((int)stk + 8))) + 0x118))) >= (int)0x3)) goto L_8C06960E;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C06960E:;
    if ((((*(int *)((v0_1 + 0xB60))) & R9) == 0)) goto L_8C069662;
    w0_2 = *(float *)((v0_1 + 0xAF0));
    v0_5 = (0xAF0);
    w0_0 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C069624;
    w0_0 = ((*(float *)((v0_1 + v0_5))));
    L_8C069626:;
    w0_2 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    F0 = (0.0f);
    w0_6 = (w0_2);
    w0_0 = ((w0_0 + 5.0f));
    if ((0.0f > w0_2)) goto L_8C069658;
    w0_6 = ((*(float *)((v0_3 + v0_5))));
    L_8C06965A:;
    if ((!(w0_6 > w0_0))) goto L_8C069662;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C069662:;
    w0_0 = *(float *)(((*(int *)(((int)stk + 8))) + 0x28));
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C069672;
    w0_0 = (w0_4);
    L_8C069676:;
    if ((!(w0_0 > w0_1))) goto L_8C06974A;
    w0_0 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C069684;
    v0_6 = (0x1);
    L_8C06968E:;
    if (((int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x158))) <= 0)) goto L_8C06969C;
    v0_7 = (0x1);
    L_8C0696AC:;
    if ((v0_6 != v0_7)) goto L_8C06974A;
    w0_0 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C0696BA;
    v0_6 = (0x1);
    L_8C0696C4:;
    if ((!(((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))) > 0.0f))) goto L_8C0696D8;
    v0_5 = (0x1);
    L_8C0696EE:;
    if ((v0_6 != v0_5)) goto L_8C06974A;
    w0_1 = *(float *)((v0_1 + 0xAE8));
    w0_7 = (w0_1);
    w0_0 = (0.0f);
    if ((!(w0_1 > 0.0f))) goto L_8C069700;
    v0_7 = (0x1);
    L_8C069712:;
    w0_1 = *(float *)((v0_4 + 0xB9C));
    w0_7 = (w0_1);
    w0_0 = (0.0f);
    if ((!(w0_1 > 0.0f))) goto L_8C069720;
    v0_6 = (0x1);
    L_8C06972A:;
    if ((v0_7 == v0_6)) goto L_8C069746;
    w0_1 = *(float *)((v0_4 + 0xB9C));
    v0_5 = (0xB9C);
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C06973C;
    w0_0 = ((*(float *)((v0_4 + v0_5))));
    L_8C06973E:;
    if ((!(7.5f > w0_0))) goto L_8C06974A;
    L_8C069746:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C06974A:;
    v0_5 = (0x142);
    if (((*(signed char *)((v0_0 + 0x142))) != 0)) goto L_8C069756;
    goto L_8C069C5A;
    L_8C069756:;
    w0_0 = (0.0f);
    if ((!(((*(float *)((v0_1 + 0xB9C))) - (*(float *)((v0_1 + 0xAE8)))) > 0.0f))) goto L_8C06976A;
    v0_7 = (0x1);
    L_8C06977E:;
    v0_5 = (0x13D);
    if ((v0_7 != (*(signed char *)((v0_0 + 0x13D))))) goto L_8C06978A;
    goto L_8C069C18;
    L_8C06978A:;
    goto L_8C069C5A;
    L_8C06976A:;
    w0_1 = *(float *)((v0_1 + 0xAE8));
    w0_2 = *(float *)((v0_1 + 0xB9C));
    w0_6 = ((w0_2 - w0_1));
    if ((!(w0_0 > (w0_2 - w0_1)))) goto L_8C06977C;
    v0_7 = (0xFFFFFFFF);
    goto L_8C06977E;
    L_8C06977C:;
    v0_7 = (0x0);
    goto L_8C06977E;
    L_8C06973C:;
    w0_0 = ((-w0_0));
    goto L_8C06973E;
    L_8C069720:;
    if ((!(w0_0 > w0_7))) goto L_8C069728;
    v0_6 = (0xFFFFFFFF);
    goto L_8C06972A;
    L_8C069728:;
    v0_6 = (0x0);
    goto L_8C06972A;
    L_8C069700:;
    if ((!(w0_0 > w0_7))) goto L_8C069710;
    v0_7 = (0xFFFFFFFF);
    goto L_8C069712;
    L_8C069710:;
    v0_7 = (0x0);
    goto L_8C069712;
    L_8C0696D8:;
    if ((!(0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C))))))) goto L_8C0696EC;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0696EE;
    L_8C0696EC:;
    v0_5 = (0x0);
    goto L_8C0696EE;
    L_8C0696BA:;
    if ((!(w0_0 > w0_4))) goto L_8C0696C2;
    v0_6 = (0xFFFFFFFF);
    goto L_8C0696C4;
    L_8C0696C2:;
    v0_6 = (0x0);
    goto L_8C0696C4;
    L_8C06969C:;
    if (((int)(*(int *)((0x158 + (*(int *)(((int)stk + 8)))))) >= 0)) goto L_8C0696AA;
    v0_7 = (0xFFFFFFFF);
    goto L_8C0696AC;
    L_8C0696AA:;
    v0_7 = (0x0);
    goto L_8C0696AC;
    L_8C069684:;
    if ((!(w0_0 > w0_4))) goto L_8C06968C;
    v0_6 = (0xFFFFFFFF);
    goto L_8C06968E;
    L_8C06968C:;
    v0_6 = (0x0);
    goto L_8C06968E;
    L_8C069672:;
    w0_0 = ((-w0_4));
    goto L_8C069676;
    L_8C069658:;
    w0_6 = ((-w0_6));
    goto L_8C06965A;
    L_8C069624:;
    w0_0 = ((-w0_0));
    goto L_8C069626;
    L_8C0694EA:;
    if (((int)(*(int *)0x8C2FCC5C) >= (int)0x2)) goto L_8C0694F8;
    goto L_8C0695F6;
    L_8C0694F8:;
    if (((*(signed char *)((v0_0 + 0x12B))) != 2)) goto L_8C069522;
    w0_0 = *(float *)((v0_1 + 0xAF0));
    v0_5 = (0xAF0);
    w0_6 = (0.0f);
    w0_7 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C069510;
    w0_7 = ((*(float *)((v0_1 + v0_5))));
    L_8C069512:;
    if ((w0_6 > w0_4)) goto L_8C06951A;
    w0_0 = (w0_4);
    L_8C06951E:;
    if ((w0_0 > w0_7)) goto L_8C0695F6;
    L_8C069522:;
    v0_5 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 36)) = v0_5;
    w0_2 = *(float *)((v0_5 + 0x8));
    w0_7 = *(float *)((v0_4 + 0xAF0));
    w0_4 = (w0_7);
    w0_6 = (w0_2);
    w0_0 = ((w0_2 - w0_7));
    if ((0.0f > (w0_2 - w0_7))) goto L_8C06953C;
    w0_0 = (w0_0);
    L_8C069544:;
    v0_5 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 32)) = (v0_5 + 0xC);
    w0_2 = *(float *)(((v0_5 + 0xC) + 0x8));
    w0_7 = (w0_2);
    w0_6 = ((w0_4 - w0_2));
    if ((0.0f > (w0_4 - w0_2))) goto L_8C069578;
    w0_7 = (w0_6);
    L_8C069580:;
    if ((!(w0_7 > w0_0))) goto L_8C0695D8;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) == 0)) goto L_8C0695F6;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), (*(int *)(((int)stk + 12))));
    F0 = (w0_0);
    if ((w0_0 > w0_5)) goto L_8C0695F2;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), (R8 + 0xC));
    F0 = (w0_0);
    if ((!(w0_0 > w0_3))) goto L_8C0695F6;
    w0_2 = *(float *)((R8 + 0x8));
    v0_5 = (0x8);
    w0_6 = (0.0f);
    w0_0 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C0695BA;
    w0_0 = ((*(float *)((R8 + v0_5))));
    L_8C0695BC:;
    w0_2 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    w0_7 = (w0_2);
    if ((w0_6 > w0_2)) goto L_8C0695C8;
    w0_7 = ((*(float *)((v0_3 + v0_5))));
    L_8C0695CA:;
    w0_6 = (0.949999988f);
    if ((!((w0_7 * 0.949999988f) > w0_0))) goto L_8C0695F6;
    L_8C0695F2:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    goto L_8C0695F6;
    L_8C0695C8:;
    w0_7 = ((-w0_7));
    goto L_8C0695CA;
    L_8C0695BA:;
    w0_0 = ((-w0_0));
    goto L_8C0695BC;
    L_8C0695D8:;
    if ((((*(int *)((v0_4 + 0xB60))) & R9) == 0)) goto L_8C0695F6;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), 0x8C2FCC38);
    F0 = (w0_0);
    if ((!(w0_0 > 10.0f))) goto L_8C0695F6;
    goto L_8C0695F2;
    L_8C069578:;
    w0_6 = ((-w0_4));
    w0_7 = (((-w0_4) + w0_7));
    goto L_8C069580;
    L_8C06953C:;
    w0_0 = (((-w0_6) + w0_4));
    goto L_8C069544;
    L_8C06951A:;
    w0_0 = ((-w0_4));
    goto L_8C06951E;
    L_8C069510:;
    w0_7 = ((-w0_7));
    goto L_8C069512;
    L_8C0694CE:;
    w0_7 = ((-w0_7));
    goto L_8C0694D2;
    L_8C0694BE:;
    w0_0 = ((-w0_4));
    goto L_8C0694C2;
    L_8C0694A0:;
    w0_0 = (((-w0_7) + w0_4));
    goto L_8C0694A8;
    L_8C06914A:;
    w0_0 = *(float *)((v0_1 + 0xAF0));
    w0_1 = *(float *)((v0_4 + 0xAF0));
    w0_4 = (w0_1);
    w0_7 = (w0_0);
    w0_6 = ((w0_0 - w0_1));
    if ((0.0f > (w0_0 - w0_1))) goto L_8C06916C;
    w0_0 = (w0_6);
    L_8C069174:;
    if ((w0_2 > w0_0)) goto L_8C06917C;
    w0_0 = *(float *)((v0_4 + 0xAE8));
    w0_4 = ((*(float *)((v0_1 + 0xAE8))));
    w0_7 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C0692F8;
    w0_0 = (w0_7);
    L_8C0692FC:;
    if ((0.0f > w0_4)) goto L_8C069306;
    w0_7 = (w0_4);
    L_8C06930A:;
    if ((w0_7 > w0_0)) goto L_8C069312;
    w0_1 = *(float *)((v0_1 + 0xAF0));
    w0_2 = *(float *)((v0_3 + 0x20));
    w0_0 = (0.0f);
    w0_4 = ((w0_2 - w0_1));
    w0_6 = (w0_1);
    if ((!((w0_2 - w0_1) > 0.0f))) goto L_8C069436;
    v0_6 = (0x1);
    L_8C069440:;
    w0_1 = *(float *)((v0_3 + 0x14));
    v0_5 = (0x14);
    w0_0 = (0.0f);
    w0_7 = ((w0_6 - w0_1));
    if ((!((w0_6 - w0_1) > 0.0f))) goto L_8C069452;
    v0_7 = (0x1);
    L_8C06945C:;
    if ((v0_6 == v0_7)) goto L_8C069464;
    goto L_8C069C5A;
    L_8C069464:;
    *(unsigned char *)((v0_0 + 0x12E)) = 0x0;
    *(unsigned char *)((v0_0 + 0x12F)) = 0x0;
    v0_5 = (0x12F);
    goto L_8C069C5A;
    L_8C069452:;
    if ((!(w0_0 > w0_7))) goto L_8C06945A;
    v0_7 = (0xFFFFFFFF);
    goto L_8C06945C;
    L_8C06945A:;
    v0_7 = (0x0);
    goto L_8C06945C;
    L_8C069436:;
    if ((!(w0_0 > w0_4))) goto L_8C06943E;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069440;
    L_8C06943E:;
    v0_6 = (0x0);
    goto L_8C069440;
    L_8C069312:;
    v0_5 = (0xB60);
    if ((((*(int *)((v0_1 + 0xB60))) & R9) == 0)) goto L_8C06931E;
    goto L_8C069C5A;
    L_8C06931E:;
    if ((((*(int *)((v0_4 + v0_5))) & R9) != 0)) goto L_8C069328;
    goto L_8C069C5A;
    L_8C069328:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))))) goto L_8C069344;
    w0_0 = (((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))));
    L_8C069350:;
    v0_5 = (0x8C06938C);
    if ((15.0f > w0_0)) goto L_8C06935C;
    goto L_8C069C5A;
    L_8C06935C:;
    w0_1 = *(float *)((v0_3 + 0x14));
    w0_2 = *(float *)((v0_3 + 0x20));
    w0_6 = ((w0_2 - w0_1));
    w0_0 = (0.0f);
    if ((!((w0_2 - w0_1) > 0.0f))) goto L_8C069370;
    v0_6 = (0x1);
    L_8C069392:;
    v0_5 = (0x14);
    if ((!(((*(float *)((v0_3 + 0x14))) - (*(float *)((v0_4 + 0xAF0)))) > 0.0f))) goto L_8C0693A6;
    v0_5 = (0x1);
    L_8C0693BC:;
    if ((v0_6 == v0_5)) goto L_8C0693C4;
    goto L_8C069C5A;
    L_8C0693C4:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))))) goto L_8C0693E0;
    w0_0 = (((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))));
    L_8C0693EA:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))))) goto L_8C069406;
    w0_7 = (((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))));
    L_8C069410:;
    v0_5 = (0x8C06947C);
    w0_6 = (0.75f);
    if (((w0_7 * 0.75f) > w0_0)) goto L_8C06941E;
    goto L_8C069C5A;
    L_8C06941E:;
    goto L_8C069464;
    L_8C069406:;
    w0_7 = (((-(*(float *)((v0_1 + v0_5)))) + (*(float *)((v0_1 + 0xB9C)))));
    goto L_8C069410;
    L_8C0693E0:;
    w0_0 = (((-(*(float *)((v0_4 + v0_5)))) + (*(float *)((v0_4 + 0xB9C)))));
    goto L_8C0693EA;
    L_8C0693A6:;
    v0_5 = (0x14);
    if ((!(0.0f > ((*(float *)((v0_3 + 0x14))) - (*(float *)((v0_4 + 0xAF0))))))) goto L_8C0693BA;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0693BC;
    L_8C0693BA:;
    v0_5 = (0x0);
    goto L_8C0693BC;
    L_8C069370:;
    w0_1 = *(float *)((v0_3 + 0x14));
    w0_2 = *(float *)((v0_3 + 0x20));
    F0 = ((w0_2 - w0_1));
    w0_6 = (w0_1);
    if ((!(w0_0 > (w0_2 - w0_1)))) goto L_8C069390;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069392;
    L_8C069390:;
    v0_6 = (0x0);
    goto L_8C069392;
    L_8C069344:;
    w0_0 = *(float *)((v0_4 + 0xB9C));
    w0_6 = (w0_0);
    w0_0 = (((-(*(float *)((v0_4 + v0_5)))) + w0_0));
    goto L_8C069350;
    L_8C069306:;
    w0_7 = ((-w0_4));
    goto L_8C06930A;
    L_8C0692F8:;
    w0_0 = ((-w0_7));
    goto L_8C0692FC;
    L_8C06917C:;
    if ((((*(int *)((v0_1 + 0xB60))) & R8) == 0)) goto L_8C0691CE;
    if (((int)(*(short *)((v0_0 + 0x118))) >= (int)0xF)) goto L_8C0691CE;
    w0_0 = cpuDistXZ((0xAE8 + v0_1), (0xBA8 + v0_1));
    F0 = (w0_0);
    if ((!(20.0f > w0_0))) goto L_8C0691CE;
    if (((R8 & (*(int *)((v0_4 + 0xB60)))) == 0)) goto L_8C0691CA;
    w0_0 = cpuDistXZ((0xAE8 + v0_1), (0xBA8 + v0_1));
    *(float *)(((int)stk + 4)) = w0_0;
    w0_1 = cpuDistXZ((0xAE8 + v0_4), (0xBA8 + v0_4));
    F0 = (w0_1);
    if ((!(w0_1 > w0_0))) goto L_8C0691CE;
    L_8C0691CA:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    L_8C0691CE:;
    v0_5 = (0xB60);
    if ((((*(int *)((v0_1 + 0xB60))) & R9) == 0)) goto L_8C0691DA;
    goto L_8C069C5A;
    L_8C0691DA:;
    if ((((*(int *)((v0_4 + v0_5))) & R9) != 0)) goto L_8C0691E4;
    goto L_8C069C5A;
    L_8C0691E4:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))))) goto L_8C069200;
    w0_0 = (((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))));
    L_8C06920C:;
    v0_5 = (0x8C06927C);
    if ((20.0f > w0_0)) goto L_8C069218;
    goto L_8C069C5A;
    L_8C069218:;
    w0_1 = *(float *)((v0_3 + 0x14));
    w0_2 = *(float *)((v0_3 + 0x20));
    w0_6 = ((w0_2 - w0_1));
    w0_0 = (0.0f);
    if ((!((w0_2 - w0_1) > 0.0f))) goto L_8C06922C;
    v0_6 = (0x1);
    L_8C069240:;
    v0_5 = (0x14);
    if ((!(((*(float *)((v0_3 + 0x14))) - (*(float *)((v0_4 + 0xAF0)))) > 0.0f))) goto L_8C069254;
    v0_5 = (0x1);
    L_8C069282:;
    if ((v0_6 == v0_5)) goto L_8C06928A;
    goto L_8C069C5A;
    L_8C06928A:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))))) goto L_8C0692A6;
    w0_0 = (((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))));
    L_8C0692B0:;
    v0_5 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))))) goto L_8C0692CC;
    w0_7 = (((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))));
    L_8C0692D6:;
    v0_5 = (0x8C069388);
    w0_6 = (0.75f);
    if ((!((w0_7 * 0.75f) > w0_0))) goto L_8C0692E4;
    goto L_8C069464;
    L_8C0692E4:;
    goto L_8C069C5A;
    L_8C0692CC:;
    w0_7 = (((-(*(float *)((v0_1 + v0_5)))) + (*(float *)((v0_1 + 0xB9C)))));
    goto L_8C0692D6;
    L_8C0692A6:;
    w0_0 = (((-(*(float *)((v0_4 + v0_5)))) + (*(float *)((v0_4 + 0xB9C)))));
    goto L_8C0692B0;
    L_8C069254:;
    v0_5 = (0x14);
    if ((!(0.0f > ((*(float *)((v0_3 + 0x14))) - (*(float *)((v0_4 + 0xAF0))))))) goto L_8C069280;
    v0_5 = (0xFFFFFFFF);
    goto L_8C069282;
    L_8C069280:;
    v0_5 = (0x0);
    goto L_8C069282;
    L_8C06922C:;
    w0_1 = *(float *)((v0_3 + 0x14));
    w0_2 = *(float *)((v0_3 + 0x20));
    F0 = ((w0_2 - w0_1));
    w0_6 = (w0_1);
    if ((!(w0_0 > (w0_2 - w0_1)))) goto L_8C06923E;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069240;
    L_8C06923E:;
    v0_6 = (0x0);
    goto L_8C069240;
    L_8C069200:;
    w0_0 = *(float *)((v0_4 + 0xB9C));
    w0_6 = (w0_0);
    w0_0 = (((-(*(float *)((v0_4 + v0_5)))) + w0_0));
    goto L_8C06920C;
    L_8C06916C:;
    w0_0 = (((-w0_7) + w0_4));
    goto L_8C069174;
    L_8C069030:;
    v0_5 = (0xB9C);
    if ((0.0f > ((*(float *)((v0_1 + 0xB9C))) - (*(float *)((v0_1 + 0xAE8)))))) goto L_8C06904C;
    w0_0 = (((*(float *)((v0_1 + 0xB9C))) - (*(float *)((v0_1 + 0xAE8)))));
    L_8C069058:;
    if ((!(17.5f > w0_0))) goto L_8C06913C;
    w0_0 = *(float *)((v0_4 + 0xAF0));
    v0_5 = (0x14);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C069070;
    w0_0 = (w0_4);
    L_8C069074:;
    w0_3 = *(float *)((v0_3 + v0_5));
    w0_7 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C069080;
    w0_7 = (w0_7);
    L_8C069084:;
    if ((w0_7 > w0_0)) goto L_8C069132;
    v0_5 = (0xB9C);
    if ((0.0f > ((*(float *)((v0_4 + 0xB9C))) - (*(float *)((v0_4 + 0xAE8)))))) goto L_8C0690D0;
    w0_0 = (((*(float *)((v0_4 + 0xB9C))) - (*(float *)((v0_4 + 0xAE8)))));
    L_8C0690DC:;
    if ((w0_0 > 25.0f)) goto L_8C069132;
    w0_3 = *(float *)(((*(int *)(((int)stk + 8))) + 0x28));
    w0_6 = (w0_3);
    w0_0 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_8C0690F4;
    v0_6 = (0x1);
    L_8C069104:;
    if ((!(((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C)))) > 0.0f))) goto L_8C069118;
    v0_5 = (0x1);
    L_8C06912E:;
    if ((v0_6 != v0_5)) goto L_8C06913C;
    L_8C069132:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_2;
    *(unsigned char *)((v0_0 + 0x12F)) = 0x0;
    goto L_8C06913C;
    L_8C069118:;
    if ((!(0.0f > ((*(float *)((v0_4 + 0xAE8))) - (*(float *)((v0_4 + 0xB9C))))))) goto L_8C06912C;
    v0_5 = (0xFFFFFFFF);
    goto L_8C06912E;
    L_8C06912C:;
    v0_5 = (0x0);
    goto L_8C06912E;
    L_8C0690F4:;
    w0_3 = *(float *)(((*(int *)(((int)stk + 8))) + 0x28));
    w0_6 = (w0_3);
    if ((!(w0_0 > w0_3))) goto L_8C069102;
    v0_6 = (0xFFFFFFFF);
    goto L_8C069104;
    L_8C069102:;
    v0_6 = (0x0);
    goto L_8C069104;
    L_8C0690D0:;
    w0_0 = *(float *)((v0_4 + 0xAE8));
    w0_6 = (w0_0);
    w0_0 = (((-(*(float *)((v0_4 + v0_5)))) + w0_0));
    goto L_8C0690DC;
    L_8C069080:;
    w0_7 = ((-w0_7));
    goto L_8C069084;
    L_8C069070:;
    w0_0 = ((-w0_4));
    goto L_8C069074;
    L_8C06904C:;
    w0_0 = *(float *)((v0_1 + 0xAE8));
    w0_6 = (w0_0);
    w0_0 = (((-(*(float *)((v0_1 + v0_5)))) + w0_0));
    goto L_8C069058;
}
