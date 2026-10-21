/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int FUN_8c03d06c(int a4);

int FUN_8c03d06c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    float u6;
    float u8;
    int t10;
    float u11;
    float u13;
    float u12;
    int t15;
    int t16;
    float u17;
    int t20;
    int t18;
    float u22;
    float u23;
    float u25;
    float u37;
    float u38;
    float u40;
    float u52;
    float u53;
    float u55;
    float u68;
    float u69;
    float u71;
    float u84;
    float u85;
    float u87;
    float u100;
    float u101;
    int t104;
    int t102;
    float u106;
    int t109;
    int t107;
    float u111;
    int t119;
    int t114;
    int t112;
    int t116;
    float u125;
    float u126;
    float u128;
    float u129;
    float u131;
    float u132;
    float u134;
    float u136;
    float u137;
    int t140;
    int t138;
    float u142;
    int t145;
    int t143;
    float u147;
    int t148;
    float u183;
    float u184;
    int t234;
    float u186;
    float u187;
    float u188;
    float u189;
    float u190;
    float u191;
    int t215;
    float u197;
    float u198;
    float u200;
    float u202;
    float u203;
    float u216;
    float u217;
    float u219;
    float u221;
    float u222;
    int t235;
    float u236;
    float u237;
    int t242;
    float u238;
    float u239;
    int t240;
    float u246;
    float u247;
    int t250;
    int t248;
    int t252;
    float u253;
    float u273;
    float u274;
    float u276;
    float u277;
    int t279;
    float u280;
    float u281;
    float u283;
    float u284;
    float u285;
    float u286;
    float u287;
    float u288;
    float u294;
    float u295;
    float u296;
    float u297;
    int t298;
    float u299;
    float u300;
    float u302;
    float u303;
    float u304;
    float u305;
    float u306;
    float u307;
    float u313;
    float u314;
    float u315;
    float u316;
    float u317;
    float u318;
    int t370;
    float u320;
    float u321;
    float u322;
    float u323;
    float u324;
    float u325;
    int t350;
    float u331;
    float u332;
    float u334;
    float u336;
    float u337;
    float u351;
    float u352;
    float u354;
    float u356;
    float u357;
    int t371;
    float u372;
    float u373;
    int t378;
    float u374;
    float u375;
    int t376;
    float u382;
    float u383;
    int t386;
    int t384;
    int t388;
    float u389;
    float u390;
    float u391;
    int t442;
    float u393;
    float u394;
    float u395;
    float u396;
    float u397;
    float u398;
    int t422;
    float u403;
    float u404;
    float u406;
    float u408;
    float u409;
    float u423;
    float u424;
    float u426;
    float u428;
    float u429;
    int t443;
    float u444;
    float u445;
    int t450;
    float u446;
    float u447;
    int t448;
    float u454;
    float u455;
    int t458;
    int t456;
    int t460;
    float u461;
    int t462;
    float u463;
    float u464;
    int t469;
    float u471;
    float u465;
    float u466;
    int t467;
    float u485;
    float u473;
    float u474;
    int t477;
    int t475;
    int t479;
    float u480;
    int t497;
    float u528;
    float u529;
    float u498;
    float u499;
    int t504;
    float u506;
    float u500;
    float u501;
    int t502;
    float u519;
    float u520;
    float u508;
    float u509;
    int t512;
    int t510;
    int t514;
    float u515;
    int t532;
    float u533;
    float u534;
    float u536;
    float u538;
    float u539;
    float u540;
    float u541;
    float u542;
    float u543;
    float u549;
    int t552;
    int t550;
    float u554;
    float u555;
    int t558;
    int t556;
    float u570;
    float u571;
    int t572;
    float u560;
    float u562;
    float u586;
    int t589;
    int t587;
    float u591;
    float u592;
    int t595;
    int t593;
    float u607;
    float u608;
    int t609;
    float u597;
    float u599;
    float u623;
    int t626;
    int t624;
    float u628;
    float u629;
    int t632;
    int t630;
    float u644;
    float u645;
    int t646;
    float u634;
    float u636;
    float u660;
    float u661;
    float u663;
    float u664;
    float u665;
    float u666;
    float u667;
    float u668;
    float u674;
    int t677;
    int t675;
    float u679;
    float u680;
    int t683;
    int t681;
    float u685;
    float u687;
    float u689;
    int t692;
    int t690;
    float u694;
    float u695;
    int t698;
    int t696;
    float u700;
    float u702;
    float u232;
    float u233;
    float u195;
    float u213;
    float u214;
    float u292;
    float u311;
    float u364;
    float u368;
    float u369;
    float u329;
    float u344;
    float u348;
    float u349;
    float u436;
    float u440;
    float u441;
    float u401;
    float u416;
    float u420;
    float u421;
    float u493;
    float u494;
    float u484;
    float u547;
    float u672;
    int stk[11] = {0};

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xA24));
    if (t1 != 0) {
        if (t1 == 2) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
            t2 = *(int *)(((0x94 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t2;
            t3 = *(int *)(((0x94 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t3;
            t4 = *(int *)(((0x94 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t4;
            u5 = *(float *)((((int)stk + 4) + 0x0));
            u6 = *(float *)((a4 + 0xAE8));
            u8 = ((-u5) + u6);
            if (!(0.0f > (u5 - u6))) {
                u8 = (u5 - u6);
            }
            if (5.0f > u8) {
                t10 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF));
                if (t10 != 0) {
                    u11 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                    u13 = (-u11);
                    if (!(0.0f > u11)) {
                        u12 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                        u13 = u12;
                    }
                    if (0.100000001f > u13) {
                        t15 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118));
                        if ((int)t15 > (int)0x14) {
                            t16 = *(int *)((a4 + 0xB60));
                            if ((t16 & 4) == 0) {
                                u17 = *(float *)((a4 + 0xB9C));
                                t20 = 0x1;
                                if (u17 > 0.0f) {
                                } else {
                                    t18 = 0x0;
                                    if (0.0f > u17) {
                                        t18 = 0xFFFFFFFF;
                                    }
                                    t20 = t18;
                                }
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x94)) = (u17 - ((float)t20 * 5.0f));
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                            } else {
                                u22 = *(float *)((((int)stk + 4) + 0x0));
                                u23 = *(float *)((a4 + 0xAE8));
                                u25 = ((-u22) + u23);
                                if (!(0.0f > (u22 - u23))) {
                                    u25 = (u22 - u23);
                                }
                                if (u25 > 15.0f) {
                                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                                }
                            }
                        } else {
                            u37 = *(float *)((((int)stk + 4) + 0x0));
                            u38 = *(float *)((a4 + 0xAE8));
                            u40 = ((-u37) + u38);
                            if (!(0.0f > (u37 - u38))) {
                                u40 = (u37 - u38);
                            }
                            if (u40 > 15.0f) {
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                            }
                        }
                    } else {
                        u52 = *(float *)((((int)stk + 4) + 0x0));
                        u53 = *(float *)((a4 + 0xAE8));
                        u55 = ((-u52) + u53);
                        if (!(0.0f > (u52 - u53))) {
                            u55 = (u52 - u53);
                        }
                        if (u55 > 15.0f) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                        }
                    }
                } else {
                    u68 = *(float *)((((int)stk + 4) + 0x0));
                    u69 = *(float *)((a4 + 0xAE8));
                    u71 = ((-u68) + u69);
                    if (!(0.0f > (u68 - u69))) {
                        u71 = (u68 - u69);
                    }
                    if (u71 > 15.0f) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                    }
                }
            } else {
                u84 = *(float *)((((int)stk + 4) + 0x0));
                u85 = *(float *)((a4 + 0xAE8));
                u87 = ((-u84) + u85);
                if (!(0.0f > (u84 - u85))) {
                    u87 = (u84 - u85);
                }
                if (u87 > 15.0f) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                }
            }
            u100 = *(float *)((a4 + 0xAF0));
            u101 = *(float *)0x8C291F44;
            t104 = 0x1;
            if ((u101 - u100) > 0.0f) {
            } else {
                t102 = 0x0;
                if (0.0f > (u101 - u100)) {
                    t102 = 0xFFFFFFFF;
                }
                t104 = t102;
            }
            u106 = *(float *)((a4 + 0xB00));
            t109 = 0x1;
            if ((-u106) > 0.0f) {
            } else {
                t107 = 0x0;
                if (0.0f > (-u106)) {
                    t107 = 0xFFFFFFFF;
                }
                t109 = t107;
            }
            u111 = *(float *)0x8C291F38;
            t119 = 0x1;
            if (((u100 + 5.0f * (float)t109) - u111) > 0.0f) {
            } else {
                t114 = 0x1;
                if ((-u106) > 0.0f) {
                } else {
                    t112 = 0x0;
                    if (0.0f > (-u106)) {
                        t112 = 0xFFFFFFFF;
                    }
                    t114 = t112;
                }
                t116 = 0x0;
                if (0.0f > ((u100 + 5.0f * (float)t114) - u111)) {
                    t116 = 0xFFFFFFFF;
                }
                t119 = t116;
            }
            if (t104 == t119) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
            }
            u125 = *(float *)((a4 + 0xAF0));
            u126 = (-u125);
            if (!(0.0f > u125)) {
                u126 = u125;
            }
            u128 = *(float *)0x8C291F90;
            u129 = (-u128);
            if (!(0.0f > u128)) {
                u129 = u128;
            }
            if (!(u126 > u129)) {
                u131 = *(float *)((((int)stk + 4) + 0x8));
                u132 = *(float *)((a4 + 0xAF0));
                u134 = ((-u131) + u132);
                if (!(0.0f > (u131 - u132))) {
                    u134 = (u131 - u132);
                }
                if (u134 > 15.0f) {
                    u136 = *(float *)((a4 + 0xAF0));
                    u137 = *(float *)((((int)stk + 4) + 0x8));
                    t140 = 0x1;
                    if ((u137 - u136) > 0.0f) {
                    } else {
                        t138 = 0x0;
                        if (0.0f > (u137 - u136)) {
                            t138 = 0xFFFFFFFF;
                        }
                        t140 = t138;
                    }
                    u142 = *(float *)((a4 + 0xB00));
                    t145 = 0x1;
                    if (u142 > 0.0f) {
                    } else {
                        t143 = 0x0;
                        if (0.0f > u142) {
                            t143 = 0xFFFFFFFF;
                        }
                        t145 = t143;
                    }
                    if (t140 == (-t145)) {
                        u147 = *(float *)((a4 + 0xBA0));
                        if (!(u147 > 22.0f)) {
                            t148 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE));
                            if (t148 != 0) {
                                if (u147 > 27.5f) {
                                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
                                }
                            }
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
                        }
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
                    }
                }
            } else {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
            }
            u183 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            u184 = (-u183);
            if (!(0.0f > u183)) {
                u184 = u183;
            }
            t234 = 0;
            if (0.100000001f > u184) {
                u186 = *(float *)((a4 + 0xAF0));
                u187 = *(float *)(((int)stk + 12));
                if (!(0.0f > (u187 - u186))) {
                    u188 = *(float *)((a4 + 0xAF0));
                    u189 = *(float *)(((int)stk + 12));
                    u195 = (u189 - u188);
                } else {
                    u190 = *(float *)(((int)stk + 12));
                    u191 = *(float *)((a4 + 0xAF0));
                    u195 = ((-u190) + u191);
                }
                t215 = 0;
                if (!(5.0f > u195)) {
                    u197 = *(float *)((((int)stk + 4) + 0x8));
                    u198 = *(float *)((a4 + 0xAF0));
                    u200 = ((-u197) + u198);
                    if (!(0.0f > (u197 - u198))) {
                        u200 = (u197 - u198);
                    }
                    u202 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                    u203 = (-u202);
                    if (!(0.0f > u202)) {
                        u203 = u202;
                    }
                    if ((0.0f + 5.0f * _builtin_sqrtf(u203)) > u200) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x1;
                    }
                    u213 = _builtin_sqrtf(u203);
                    u214 = (0.0f + 5.0f * _builtin_sqrtf(u203));
                    t215 = (((0.0f + 5.0f * _builtin_sqrtf(u203)) > u200));
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x1;
                    u213 = 5.0f;
                    u214 = u195;
                    t215 = (1);
                }
                u232 = u213;
                u233 = u214;
                t234 = (t215);
            } else {
                u216 = *(float *)((((int)stk + 4) + 0x8));
                u217 = *(float *)((a4 + 0xAF0));
                u219 = ((-u216) + u217);
                if (!(0.0f > (u216 - u217))) {
                    u219 = (u216 - u217);
                }
                u221 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
                u222 = (-u221);
                if (!(0.0f > u221)) {
                    u222 = u221;
                }
                if ((0.0f + 5.0f * _builtin_sqrtf(u222)) > u219) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x1;
                }
                u232 = _builtin_sqrtf(u222);
                u233 = (0.0f + 5.0f * _builtin_sqrtf(u222));
                t234 = (((0.0f + 5.0f * _builtin_sqrtf(u222)) > u219));
            }
            t235 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF));
            if (t235 == 0) {
                u236 = *(float *)((a4 + 0xAF0));
                u237 = *(float *)(((int)stk + 12));
                t242 = 0x1;
                if ((u237 - u236) > 0.0f) {
                } else {
                    u238 = *(float *)((a4 + 0xAF0));
                    u239 = *(float *)(((int)stk + 12));
                    t240 = 0x0;
                    if (0.0f > (u239 - u238)) {
                        t240 = 0xFFFFFFFF;
                    }
                    t242 = t240;
                }
                if (t242 != 0) {
                    u246 = *(float *)(((0xAF0 + a4) + 0x0));
                    u247 = *(float *)(((0x8 + ((int)stk + 4)) + 0x0));
                    t250 = 0x1;
                    if ((u247 - u246) > 0.0f) {
                    } else {
                        t248 = 0x0;
                        if (0.0f > (u247 - u246)) {
                            t248 = 0xFFFFFFFF;
                        }
                        t250 = t248;
                    }
                    t252 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20));
                    u253 = *(float *)(((0xB00 + a4) + 0x0));
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)t252 + ((-((u253 * (float)t250) * 8.0f)) + 24.0f));
                }
            }
            u273 = *(float *)((a4 + 0xAF0));
            u274 = (-u273);
            if (!(0.0f > u273)) {
                u274 = u273;
            }
            u276 = *(float *)0x8C291F38;
            u277 = (-u276);
            if (!(0.0f > u276)) {
                u277 = u276;
            }
            if (!((u277 + 5.0f) > u274)) {
                t279 = *(int *)((a4 + 0xB60));
                if ((t279 & 4) == 0) {
                    u280 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u281 = (-u280);
                    if (!(0.0f > u280)) {
                        u281 = u280;
                    }
                    if (0.100000001f > u281) {
                        u283 = *(float *)((a4 + 0xAE8));
                        u284 = *(float *)((a4 + 0xB9C));
                        if (!(0.0f > (u284 - u283))) {
                            u285 = *(float *)((a4 + 0xAE8));
                            u286 = *(float *)((a4 + 0xB9C));
                            u292 = (u286 - u285);
                        } else {
                            u287 = *(float *)((a4 + 0xB9C));
                            u288 = *(float *)((a4 + 0xAE8));
                            u292 = ((-u287) + u288);
                        }
                        if (!(5.0f > u292)) {
                            u294 = *(float *)((a4 + 0xB9C));
                            u295 = *(float *)((a4 + 0xAE8));
                            if (!(0.0f > (u294 - u295))) {
                                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9D2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u280);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9CA))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u280);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9F2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u280);
                    }
                    u296 = *(float *)((a4 + 0xB9C));
                    u297 = *(float *)((a4 + 0xAE8));
                    if (!(0.0f > (u296 - u297))) {
                        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9D2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u280);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9CA))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u280);
                }
                t298 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1C));
                if ((unsigned char)t298 != 4) {
                    u299 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u300 = (-u299);
                    if (!(0.0f > u299)) {
                        u300 = u299;
                    }
                    if (0.100000001f > u300) {
                        u302 = *(float *)((a4 + 0xAE8));
                        u303 = *(float *)((a4 + 0xB9C));
                        if (!(0.0f > (u303 - u302))) {
                            u304 = *(float *)((a4 + 0xAE8));
                            u305 = *(float *)((a4 + 0xB9C));
                            u311 = (u305 - u304);
                        } else {
                            u306 = *(float *)((a4 + 0xB9C));
                            u307 = *(float *)((a4 + 0xAE8));
                            u311 = ((-u306) + u307);
                        }
                        if (!(5.0f > u311)) {
                            u313 = *(float *)((a4 + 0xB9C));
                            u314 = *(float *)((a4 + 0xAE8));
                            if (!(0.0f > (u313 - u314))) {
                                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9D2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u299);
                            }
                            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9CA))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u299);
                        }
                        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9F2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u299);
                    }
                    u315 = *(float *)((a4 + 0xB9C));
                    u316 = *(float *)((a4 + 0xAE8));
                    if (!(0.0f > (u315 - u316))) {
                        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9D2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u299);
                    }
                    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03D9CA))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u299);
                }
                u317 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u318 = (-u317);
                if (!(0.0f > u317)) {
                    u318 = u317;
                }
                t370 = 0;
                if (0.100000001f > u318) {
                    u320 = *(float *)((a4 + 0xAE8));
                    u321 = *(float *)((a4 + 0xBA8));
                    if (!(0.0f > (u321 - u320))) {
                        u322 = *(float *)((a4 + 0xAE8));
                        u323 = *(float *)((a4 + 0xBA8));
                        u329 = (u323 - u322);
                    } else {
                        u324 = *(float *)((a4 + 0xBA8));
                        u325 = *(float *)((a4 + 0xAE8));
                        u329 = ((-u324) + u325);
                    }
                    t350 = 0;
                    if (!(5.0f > u329)) {
                        u331 = *(float *)((a4 + 0xBA8));
                        u332 = *(float *)((a4 + 0xAE8));
                        u334 = ((-u331) + u332);
                        if (!(0.0f > (u331 - u332))) {
                            u334 = (u331 - u332);
                        }
                        u336 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                        u337 = (-u336);
                        if (!(0.0f > u336)) {
                            u337 = u336;
                        }
                        if ((0.0f + 8.0f * _builtin_sqrtf(u337)) > u334) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                        }
                        u344 = u336;
                        u348 = _builtin_sqrtf(u337);
                        u349 = (0.0f + 8.0f * _builtin_sqrtf(u337));
                        t350 = (((0.0f + 8.0f * _builtin_sqrtf(u337)) > u334));
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                        u344 = u317;
                        u348 = 5.0f;
                        u349 = u329;
                        t350 = (1);
                    }
                    u364 = u344;
                    u368 = u348;
                    u369 = u349;
                    t370 = (t350);
                } else {
                    u351 = *(float *)((a4 + 0xBA8));
                    u352 = *(float *)((a4 + 0xAE8));
                    u354 = ((-u351) + u352);
                    if (!(0.0f > (u351 - u352))) {
                        u354 = (u351 - u352);
                    }
                    u356 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u357 = (-u356);
                    if (!(0.0f > u356)) {
                        u357 = u356;
                    }
                    if ((0.0f + 8.0f * _builtin_sqrtf(u357)) > u354) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                    }
                    u364 = u356;
                    u368 = _builtin_sqrtf(u357);
                    u369 = (0.0f + 8.0f * _builtin_sqrtf(u357));
                    t370 = (((0.0f + 8.0f * _builtin_sqrtf(u357)) > u354));
                }
                t371 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE));
                if (t371 != 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u364);
                }
                u372 = *(float *)((a4 + 0xAE8));
                u373 = *(float *)((a4 + 0xBA8));
                t378 = 0x1;
                if ((u373 - u372) > 0.0f) {
                } else {
                    u374 = *(float *)((a4 + 0xAE8));
                    u375 = *(float *)((a4 + 0xBA8));
                    t376 = 0x0;
                    if (0.0f > (u375 - u374)) {
                        t376 = 0xFFFFFFFF;
                    }
                    t378 = t376;
                }
                if (t378 == 0) {
                    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u364);
                }
                u382 = *(float *)(((0xAE8 + a4) + 0x0));
                u383 = *(float *)(((0xBA8 + a4) + 0x0));
                t386 = 0x1;
                if ((u383 - u382) > 0.0f) {
                } else {
                    t384 = 0x0;
                    if (0.0f > (u383 - u382)) {
                        t384 = 0xFFFFFFFF;
                    }
                    t386 = t384;
                }
                t388 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20));
                u389 = *(float *)(((0xB00 + a4) + 0x0));
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)t388 + ((-((u389 * (float)t386) * 32.0f)) + 96.0f));
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, (u383 - u382));
            }
            u390 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            u391 = (-u390);
            if (!(0.0f > u390)) {
                u391 = u390;
            }
            t442 = 0;
            if (0.100000001f > u391) {
                u393 = *(float *)(((int)stk + 4));
                u394 = *(float *)((a4 + 0xAE8));
                if (!(0.0f > (u393 - u394))) {
                    u395 = *(float *)(((int)stk + 4));
                    u396 = *(float *)((a4 + 0xAE8));
                    u401 = (u395 - u396);
                } else {
                    u397 = *(float *)(((int)stk + 4));
                    u398 = *(float *)((a4 + 0xAE8));
                    u401 = ((-u397) + u398);
                }
                t422 = 0;
                if (!(5.0f > u401)) {
                    u403 = *(float *)((((int)stk + 4) + 0x0));
                    u404 = *(float *)((a4 + 0xAE8));
                    u406 = ((-u403) + u404);
                    if (!(0.0f > (u403 - u404))) {
                        u406 = (u403 - u404);
                    }
                    u408 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u409 = (-u408);
                    if (!(0.0f > u408)) {
                        u409 = u408;
                    }
                    if ((0.0f + 8.0f * _builtin_sqrtf(u409)) > u406) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                    }
                    u416 = u408;
                    u420 = _builtin_sqrtf(u409);
                    u421 = (0.0f + 8.0f * _builtin_sqrtf(u409));
                    t422 = (((0.0f + 8.0f * _builtin_sqrtf(u409)) > u406));
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                    u416 = u390;
                    u420 = 5.0f;
                    u421 = u401;
                    t422 = (1);
                }
                u436 = u416;
                u440 = u420;
                u441 = u421;
                t442 = (t422);
            } else {
                u423 = *(float *)((((int)stk + 4) + 0x0));
                u424 = *(float *)((a4 + 0xAE8));
                u426 = ((-u423) + u424);
                if (!(0.0f > (u423 - u424))) {
                    u426 = (u423 - u424);
                }
                u428 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u429 = (-u428);
                if (!(0.0f > u428)) {
                    u429 = u428;
                }
                if ((0.0f + 8.0f * _builtin_sqrtf(u429)) > u426) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x1;
                }
                u436 = u428;
                u440 = _builtin_sqrtf(u429);
                u441 = (0.0f + 8.0f * _builtin_sqrtf(u429));
                t442 = (((0.0f + 8.0f * _builtin_sqrtf(u429)) > u426));
            }
            t443 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE));
            if (t443 != 0) {
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u436);
            }
            u444 = *(float *)(((int)stk + 4));
            u445 = *(float *)((a4 + 0xAE8));
            t450 = 0x1;
            if ((u444 - u445) > 0.0f) {
            } else {
                u446 = *(float *)(((int)stk + 4));
                u447 = *(float *)((a4 + 0xAE8));
                t448 = 0x0;
                if (0.0f > (u446 - u447)) {
                    t448 = 0xFFFFFFFF;
                }
                t450 = t448;
            }
            if (t450 == 0) {
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u436);
            }
            u454 = *(float *)((((int)stk + 4) + 0x0));
            u455 = *(float *)(((0xAE8 + a4) + 0x0));
            t458 = 0x1;
            if ((u454 - u455) > 0.0f) {
            } else {
                t456 = 0x0;
                if (0.0f > (u454 - u455)) {
                    t456 = 0xFFFFFFFF;
                }
                t458 = t456;
            }
            t460 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20));
            u461 = *(float *)(((0xB00 + a4) + 0x0));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)t460 + ((-((u461 * (float)t458) * 32.0f)) + 96.0f));
            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DA7A))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, (u454 - u455));
        }
        if (t1 == 1) {
            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f);
        }
        if (t1 == 3) {
            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f);
        }
        if (t1 == 4) {
            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(0x8C03DA98))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f);
        }
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f);
    }
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
    t462 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0));
    if ((unsigned char)t462 != 1) {
        u463 = *(float *)((a4 + 0xAE8));
        u464 = *(float *)((a4 + 0xA34));
        t469 = 0x1;
        u471 = (u464 - u463);
        if ((u464 - u463) > 0.0f) {
        } else {
            u465 = *(float *)((a4 + 0xAE8));
            u466 = *(float *)((a4 + 0xA34));
            t467 = 0x0;
            if (0.0f > (u466 - u465)) {
                t467 = 0xFFFFFFFF;
            }
            t469 = t467;
            u471 = u465;
        }
        u485 = u471;
        if (t469 != 0) {
            u473 = *(float *)(((0xAE8 + a4) + 0x0));
            u474 = *(float *)(((0xA34 + a4) + 0x0));
            t477 = 0x1;
            if ((u474 - u473) > 0.0f) {
            } else {
                t475 = 0x0;
                if (0.0f > (u474 - u473)) {
                    t475 = 0xFFFFFFFF;
                }
                t477 = t475;
            }
            t479 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20));
            u480 = *(float *)(((0xB00 + a4) + 0x0));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)t479 + ((-((u480 * (float)t477) * 32.0f)) + 96.0f));
            u484 = (u474 - u473);
            u485 = ((-((u480 * (float)t477) * 32.0f)) + 96.0f);
        }
        u493 = u484;
        u494 = u485;
    }
    t497 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1));
    u528 = u493;
    u529 = u494;
    if ((unsigned char)t497 != 1) {
        u498 = *(float *)((a4 + 0xAF0));
        u499 = *(float *)((a4 + 0xA3C));
        t504 = 0x1;
        u506 = (u499 - u498);
        if ((u499 - u498) > 0.0f) {
        } else {
            u500 = *(float *)((a4 + 0xAF0));
            u501 = *(float *)((a4 + 0xA3C));
            t502 = 0x0;
            if (0.0f > (u501 - u500)) {
                t502 = 0xFFFFFFFF;
            }
            t504 = t502;
            u506 = u500;
        }
        u519 = u493;
        u520 = u506;
        if (t504 != 0) {
            u508 = *(float *)(((0xAF0 + a4) + 0x0));
            u509 = *(float *)(((0xA3C + a4) + 0x0));
            t512 = 0x1;
            if ((u509 - u508) > 0.0f) {
            } else {
                t510 = 0x0;
                if (0.0f > (u509 - u508)) {
                    t510 = 0xFFFFFFFF;
                }
                t512 = t510;
            }
            t514 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20));
            u515 = *(float *)(((0xB00 + a4) + 0x0));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)t514 + ((-((u515 * (float)t512) * 8.0f)) + 24.0f));
            u519 = (u509 - u508);
            u520 = ((-((u515 * (float)t512) * 8.0f)) + 24.0f);
        }
        u528 = u519;
        u529 = u520;
    }
    t532 = *(int *)((a4 + 0xB60));
    if ((t532 & 0x100) != 0) {
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u528);
    }
    u533 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
    u534 = (-u533);
    if (!(0.0f > u533)) {
        u534 = u533;
    }
    if (u534 > 0.100000001f) {
        u536 = (-u533);
        if (!(0.0f > u533)) {
            u536 = u533;
        }
        if (0.200000003f > u536) {
            u538 = *(float *)((a4 + 0xAE8));
            u539 = *(float *)((a4 + 0xA34));
            if (!(0.0f > (u539 - u538))) {
                u540 = *(float *)((a4 + 0xAE8));
                u541 = *(float *)((a4 + 0xA34));
                u547 = (u541 - u540);
            } else {
                u542 = *(float *)((a4 + 0xA34));
                u543 = *(float *)((a4 + 0xAE8));
                u547 = ((-u542) + u543);
            }
            if (!(10.0f > u547)) {
                u549 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                t552 = 0x1;
                if (u549 > 0.0f) {
                } else {
                    t550 = 0x0;
                    if (0.0f > u549) {
                        t550 = 0xFFFFFFFF;
                    }
                    t552 = t550;
                }
                u554 = *(float *)((a4 + 0xA34));
                u555 = *(float *)((a4 + 0xAE8));
                t558 = 0x1;
                if ((u554 - u555) > 0.0f) {
                } else {
                    t556 = 0x0;
                    if (0.0f > (u554 - u555)) {
                        t556 = 0xFFFFFFFF;
                    }
                    t558 = t556;
                }
                u570 = 10.0f;
                u571 = 0.0f;
                t572 = 0;
                if (t552 == t558) {
                    u560 = ((-u554) + u555);
                    if (!(0.0f > (u554 - u555))) {
                        u560 = (u554 - u555);
                    }
                    u562 = (-u549);
                    if (!(0.0f > u549)) {
                        u562 = u549;
                    }
                    if ((0.0f + 25.0f * _builtin_sqrtf(u562)) > u560) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                    }
                    u570 = _builtin_sqrtf(u562);
                    u571 = (0.0f + 25.0f * _builtin_sqrtf(u562));
                    t572 = (((0.0f + 25.0f * _builtin_sqrtf(u562)) > u560));
                } else {
                    t572 = (0);
                }
            } else {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
            }
        } else {
            u586 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            t589 = 0x1;
            if (u586 > 0.0f) {
            } else {
                t587 = 0x0;
                if (0.0f > u586) {
                    t587 = 0xFFFFFFFF;
                }
                t589 = t587;
            }
            u591 = *(float *)((a4 + 0xA34));
            u592 = *(float *)((a4 + 0xAE8));
            t595 = 0x1;
            if ((u591 - u592) > 0.0f) {
            } else {
                t593 = 0x0;
                if (0.0f > (u591 - u592)) {
                    t593 = 0xFFFFFFFF;
                }
                t595 = t593;
            }
            u607 = 0.200000003f;
            u608 = 0.0f;
            t609 = 0;
            if (t589 == t595) {
                u597 = ((-u591) + u592);
                if (!(0.0f > (u591 - u592))) {
                    u597 = (u591 - u592);
                }
                u599 = (-u586);
                if (!(0.0f > u586)) {
                    u599 = u586;
                }
                if ((0.0f + 25.0f * _builtin_sqrtf(u599)) > u597) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                }
                u607 = _builtin_sqrtf(u599);
                u608 = (0.0f + 25.0f * _builtin_sqrtf(u599));
                t609 = (((0.0f + 25.0f * _builtin_sqrtf(u599)) > u597));
            } else {
                t609 = (0);
            }
        }
    } else {
        u623 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        t626 = 0x1;
        if (u623 > 0.0f) {
        } else {
            t624 = 0x0;
            if (0.0f > u623) {
                t624 = 0xFFFFFFFF;
            }
            t626 = t624;
        }
        u628 = *(float *)((a4 + 0xA34));
        u629 = *(float *)((a4 + 0xAE8));
        t632 = 0x1;
        if ((u628 - u629) > 0.0f) {
        } else {
            t630 = 0x0;
            if (0.0f > (u628 - u629)) {
                t630 = 0xFFFFFFFF;
            }
            t632 = t630;
        }
        u644 = u529;
        u645 = 0.0f;
        t646 = 0;
        if (t626 == t632) {
            u634 = ((-u628) + u629);
            if (!(0.0f > (u628 - u629))) {
                u634 = (u628 - u629);
            }
            u636 = (-u623);
            if (!(0.0f > u623)) {
                u636 = u623;
            }
            if ((0.0f + 25.0f * _builtin_sqrtf(u636)) > u634) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
            }
            u644 = _builtin_sqrtf(u636);
            u645 = (0.0f + 25.0f * _builtin_sqrtf(u636));
            t646 = (((0.0f + 25.0f * _builtin_sqrtf(u636)) > u634));
        } else {
            t646 = (0);
        }
    }
    u660 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
    u661 = (-u660);
    if (!(0.0f > u660)) {
        u661 = u660;
    }
    if (0.100000001f > u661) {
        u663 = *(float *)((a4 + 0xAF0));
        u664 = *(float *)((a4 + 0xA3C));
        if (!(0.0f > (u664 - u663))) {
            u665 = *(float *)((a4 + 0xAF0));
            u666 = *(float *)((a4 + 0xA3C));
            u672 = (u666 - u665);
        } else {
            u667 = *(float *)((a4 + 0xA3C));
            u668 = *(float *)((a4 + 0xAF0));
            u672 = ((-u667) + u668);
        }
        if (!(10.0f > u672)) {
            u674 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
            t677 = 0x1;
            if (u674 > 0.0f) {
            } else {
                t675 = 0x0;
                if (0.0f > u674) {
                    t675 = 0xFFFFFFFF;
                }
                t677 = t675;
            }
            u679 = *(float *)((a4 + 0xA3C));
            u680 = *(float *)((a4 + 0xAF0));
            t683 = 0x1;
            if ((u679 - u680) > 0.0f) {
            } else {
                t681 = 0x0;
                if (0.0f > (u679 - u680)) {
                    t681 = 0xFFFFFFFF;
                }
                t683 = t681;
            }
            if (t677 != t683) {
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u674);
            }
            u685 = ((-u679) + u680);
            if (!(0.0f > (u679 - u680))) {
                u685 = (u679 - u680);
            }
            u687 = (-u674);
            if (!(0.0f > u674)) {
                u687 = u674;
            }
            if (!((0.0f + 20.0f * _builtin_sqrtf(u687)) > u685)) {
                return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u674);
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x1;
            return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u674);
        }
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x1;
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u660);
    }
    u689 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
    t692 = 0x1;
    if (u689 > 0.0f) {
    } else {
        t690 = 0x0;
        if (0.0f > u689) {
            t690 = 0xFFFFFFFF;
        }
        t692 = t690;
    }
    u694 = *(float *)((a4 + 0xA3C));
    u695 = *(float *)((a4 + 0xAF0));
    t698 = 0x1;
    if ((u694 - u695) > 0.0f) {
    } else {
        t696 = 0x0;
        if (0.0f > (u694 - u695)) {
            t696 = 0xFFFFFFFF;
        }
        t698 = t696;
    }
    if (t692 != t698) {
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u689);
    }
    u700 = ((-u694) + u695);
    if (!(0.0f > (u694 - u695))) {
        u700 = (u694 - u695);
    }
    u702 = (-u689);
    if (!(0.0f > u689)) {
        u702 = u689;
    }
    if (!((0.0f + 20.0f * _builtin_sqrtf(u702)) > u700)) {
        return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u689);
    }
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x1;
    return ((int (*)(int, int, int, int, float, float, float, float, float, float, float, float))(0x8C03DAA2))(a4, ((t0 * 0x160) + 0x8C2FC69C), ((int)stk + 4), 0x1, 0.100000001f, 5.0f, 8.0f, 32.0f, 96.0f, 15.0f, 24.0f, u689);
}
