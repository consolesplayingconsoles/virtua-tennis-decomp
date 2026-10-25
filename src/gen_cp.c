/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern float _builtin_sqrtf(float);
int camGetPos(int, ...);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
float mathLineY(float, float, float, float, float);
int ndbGetTargets(int, int, int);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
float nlTan(int);
int nlTranslate(float, float, float);
int shadowLightMatrix(float);
int shadowLightMatrixAng(int, int);
int shadowPartPut(int);
int shadowPartPutStage(int);
int shadowPlayerScale(float);
float vecLength(Stk4);
int vecSub(int, int, int, int, int);
int cpuSglAimAddLv21(int a4, int a5);
void shadowPlayerDraw(int a4);

int cpuSglAimAddLv21(int a4, int a5)
{
    int t0;
    int t1;
    float t5;
    float u6;
    float u7;
    int t10;
    int t8;
    float u13;
    float u14;
    int t17;
    int t15;
    float u20;
    float u21;
    float u25;
    float u28;
    float u38;
    float u39;
    int t42;
    int t40;
    float u45;
    float u46;
    int t49;
    int t47;
    float u55;
    float u56;
    int t59;
    int t57;
    float u62;
    float u63;
    int t66;
    int t64;
    float u69;
    float u70;
    float u73;
    float u74;
    float u77;
    float u78;
    int t81;
    int t79;
    float u84;
    int t87;
    int t85;
    float u89;
    int t92;
    int t90;
    float u95;
    float u96;
    int t99;
    int t97;
    float u102;
    float u103;
    float u105;
    float u106;
    int t109;
    int t107;
    float u112;
    float u113;
    int t116;
    int t114;
    float u119;
    float u120;
    int t123;
    int t121;
    float u126;
    float u127;
    int t130;
    int t128;
    float u132;
    float u133;
    int t136;
    int t134;
    float u139;
    float u140;
    int t143;
    int t141;
    float u146;
    float u147;
    int t150;
    int t148;
    float u153;
    float u154;
    int t157;
    int t155;
    float u160;
    float u161;
    int t164;
    int t162;
    float u189;
    float u190;
    float u192;
    float u193;
    int t196;
    int t194;
    float u199;
    float u200;
    int t203;
    int t201;
    float u206;
    float u207;
    int t210;
    int t208;
    float u213;
    float u214;
    int t217;
    int t215;
    float u220;
    float u221;
    int t224;
    int t222;
    float u227;
    float u228;
    int t231;
    int t229;
    float u233;
    int t236;
    int t234;
    float u238;
    float u239;
    float u240;
    int t243;
    int t241;
    float u245;
    float u246;
    int t249;
    int t247;
    float u252;
    float u253;
    int t256;
    int t254;
    float u259;
    float u260;
    int t263;
    int t261;
    float u266;
    float u267;
    float u268;
    int t271;
    int t269;
    float u304;
    float u305;
    int t308;
    int t306;
    float u311;
    float u312;
    int t315;
    int t313;
    float u321;
    float u322;
    int t325;
    int t323;
    float u328;
    float u329;
    int t332;
    int t330;
    float u347;
    float u348;
    float u352;
    float u355;
    float u365;
    float u366;
    int t369;
    int t367;
    float u372;
    float u373;
    int t376;
    int t374;
    float u382;
    float u383;
    int t386;
    int t384;
    float u389;
    float u390;
    int t393;
    int t391;
    float u396;
    float u397;
    float u400;
    float u401;
    float u404;
    float u405;
    int t408;
    int t406;
    float u411;
    int t414;
    int t412;
    float u416;
    int t419;
    int t417;
    float u422;
    float u423;
    int t426;
    int t424;
    float u429;
    float u430;
    float u432;
    float u433;
    int t436;
    int t434;
    float u439;
    float u440;
    int t443;
    int t441;
    float u446;
    float u447;
    int t450;
    int t448;
    float u453;
    float u454;
    int t457;
    int t455;
    float u459;
    float u460;
    int t463;
    int t461;
    float u466;
    float u467;
    int t470;
    int t468;
    float u473;
    float u474;
    int t477;
    int t475;
    float u480;
    float u481;
    int t484;
    int t482;
    float u487;
    float u488;
    int t491;
    int t489;
    float u516;
    float u517;
    float u519;
    float u520;
    int t523;
    int t521;
    float u526;
    float u527;
    int t530;
    int t528;
    float u533;
    float u534;
    int t537;
    int t535;
    float u540;
    float u541;
    int t544;
    int t542;
    float u547;
    float u548;
    int t551;
    int t549;
    float u554;
    float u555;
    int t558;
    int t556;
    float u560;
    int t563;
    int t561;
    float u565;
    float u566;
    float u567;
    int t570;
    int t568;
    float u572;
    float u573;
    int t576;
    int t574;
    float u579;
    float u580;
    int t583;
    int t581;
    float u586;
    float u587;
    int t590;
    int t588;
    float u593;
    float u594;
    float u595;
    int t598;
    int t596;
    float u634;
    float u635;
    int t638;
    int t636;
    float u641;
    float u642;
    int t645;
    int t643;
    float u651;
    float u652;
    int t655;
    int t653;
    float u658;
    float u659;
    int t662;
    int t660;
    float u677;
    float u678;
    float u680;
    float u681;
    int t684;
    int t682;
    float u687;
    float u688;
    int t691;
    int t689;
    float u693;
    float u694;
    int t697;
    int t695;
    float u700;
    float u701;
    int t704;
    int t702;
    int t716;
    int t672;
    int t342;
    int t336;
    float u34;
    int t299;
    int t293;
    int t184;
    int t178;
    int t166;
    float u173;
    int t174;
    int t287;
    int t273;
    float u282;
    int t283;
    int t666;
    float u361;
    int t629;
    int t623;
    int t511;
    int t505;
    int t493;
    float u500;
    int t501;
    int t617;
    int t600;
    float u612;
    int t613;
    float u711;
    int t712;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            t5 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
            if (10.0f > t5) {
                u6 = *(float *)((a4 + 0xB00));
                u7 = *(float *)((a4 + 0xB9C));
                t10 = 0x1;
                if (u7 > 0.0f) {
                } else {
                    t8 = 0x0;
                    if (0.0f > u7) {
                        t8 = 0xFFFFFFFF;
                    }
                    t10 = t8;
                }
                cpuAimPointSet(a5, 0x1, ((float)t10 * 41.1500015f), (u6 * 118.849998f));
                u13 = *(float *)((a4 + 0xB00));
                u14 = *(float *)((a4 + 0xB9C));
                t17 = 0x1;
                if (u14 > 0.0f) {
                } else {
                    t15 = 0x0;
                    if (0.0f > u14) {
                        t15 = 0xFFFFFFFF;
                    }
                    t17 = t15;
                }
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t17) * 41.1500015f), (u13 * 118.849998f));
                t342 = ((a5 + 0x1) + 0x1);
            } else {
                u20 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u21 = (-u20);
                if (!(0.0f > u20)) {
                    u21 = u20;
                }
                if (!(35.6550026f > u21)) {
                    u25 = u20;
                    u25 = u25 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
                    if (!(0.0f > u25)) {
                        u28 = u20;
                        u28 = u28 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
                        u34 = u28;
                    } else {
                        u34 = ((-u20) - ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
                    }
                    if (41.5974998f > u34) {
                        u38 = *(float *)((a4 + 0xB00));
                        u39 = *(float *)((a4 + 0xB9C));
                        t42 = 0x1;
                        if (u39 > 0.0f) {
                        } else {
                            t40 = 0x0;
                            if (0.0f > u39) {
                                t40 = 0xFFFFFFFF;
                            }
                            t42 = t40;
                        }
                        cpuAimPointSet(a5, 0x3, ((float)(-t42) * 41.1500015f), (u38 * 118.849998f));
                        u45 = *(float *)((a4 + 0xB00));
                        u46 = *(float *)((a4 + 0xB9C));
                        t49 = 0x1;
                        if (u46 > 0.0f) {
                        } else {
                            t47 = 0x0;
                            if (0.0f > u46) {
                                t47 = 0xFFFFFFFF;
                            }
                            t49 = t47;
                        }
                        cpuAimPointSet((a5 + 0x1), 0x3, ((float)t49 * 41.1500015f), (u45 * 118.849998f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u55 = *(float *)((a4 + 0xB00));
                        u56 = *(float *)((a4 + 0xB9C));
                        t59 = 0x1;
                        if (u56 > 0.0f) {
                        } else {
                            t57 = 0x0;
                            if (0.0f > u56) {
                                t57 = 0xFFFFFFFF;
                            }
                            t59 = t57;
                        }
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t59 * 41.1500015f), (u55 * 118.849998f));
                        u62 = *(float *)((a4 + 0xB00));
                        u63 = *(float *)((a4 + 0xB9C));
                        t66 = 0x1;
                        if (u63 > 0.0f) {
                        } else {
                            t64 = 0x0;
                            if (0.0f > u63) {
                                t64 = 0xFFFFFFFF;
                            }
                            t66 = t64;
                        }
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t66 * 41.1500015f), (u62 * 11.8850002f));
                        t299 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u69 = *(float *)((a4 + 0xB9C));
                        u70 = (-u69);
                        if (!(0.0f > u69)) {
                            u70 = u69;
                        }
                        if (!(16.460001f > u70)) {
                            u73 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u74 = (-u73);
                            if (!(0.0f > u73)) {
                                u74 = u73;
                            }
                            if (16.460001f > u74) {
                                u77 = *(float *)((a4 + 0xB00));
                                u78 = *(float *)((a4 + 0xB9C));
                                t81 = 0x1;
                                if (u78 > 0.0f) {
                                } else {
                                    t79 = 0x0;
                                    if (0.0f > u78) {
                                        t79 = 0xFFFFFFFF;
                                    }
                                    t81 = t79;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t81 * 41.1500015f), (u77 * 118.849998f));
                                t184 = (a5 + 0x1);
                            } else {
                                u84 = *(float *)((a4 + 0xB9C));
                                t87 = 0x1;
                                if (u84 > 0.0f) {
                                } else {
                                    t85 = 0x0;
                                    if (0.0f > u84) {
                                        t85 = 0xFFFFFFFF;
                                    }
                                    t87 = t85;
                                }
                                u89 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                t92 = 0x1;
                                if (u89 > 0.0f) {
                                } else {
                                    t90 = 0x0;
                                    if (0.0f > u89) {
                                        t90 = 0xFFFFFFFF;
                                    }
                                    t92 = t90;
                                }
                                if (t87 != t92) {
                                    u95 = *(float *)((a4 + 0xB00));
                                    u96 = *(float *)((a4 + 0xB9C));
                                    t99 = 0x1;
                                    if (u96 > 0.0f) {
                                    } else {
                                        t97 = 0x0;
                                        if (0.0f > u96) {
                                            t97 = 0xFFFFFFFF;
                                        }
                                        t99 = t97;
                                    }
                                    cpuAimPointSet(a5, 0x1, ((float)t99 * 41.1500015f), (u95 * 118.849998f));
                                    t178 = (a5 + 0x1);
                                } else {
                                    u102 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u103 = (-u102);
                                    if (!(0.0f > u102)) {
                                        u103 = u102;
                                    }
                                    if (47.5400009f > u103) {
                                        u105 = *(float *)((a4 + 0xB00));
                                        u106 = *(float *)((a4 + 0xB9C));
                                        t109 = 0x1;
                                        if (u106 > 0.0f) {
                                        } else {
                                            t107 = 0x0;
                                            if (0.0f > u106) {
                                                t107 = 0xFFFFFFFF;
                                            }
                                            t109 = t107;
                                        }
                                        cpuAimPointSet(a5, 0x1, ((float)t109 * 41.1500015f), (u105 * 118.849998f));
                                        u112 = *(float *)((a4 + 0xB00));
                                        u113 = *(float *)((a4 + 0xB9C));
                                        t116 = 0x1;
                                        if (u113 > 0.0f) {
                                        } else {
                                            t114 = 0x0;
                                            if (0.0f > u113) {
                                                t114 = 0xFFFFFFFF;
                                            }
                                            t116 = t114;
                                        }
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t116 * 41.1500015f), (u112 * 118.849998f));
                                        u119 = *(float *)((a4 + 0xB00));
                                        u120 = *(float *)((a4 + 0xB9C));
                                        t123 = 0x1;
                                        if (u120 > 0.0f) {
                                        } else {
                                            t121 = 0x0;
                                            if (0.0f > u120) {
                                                t121 = 0xFFFFFFFF;
                                            }
                                            t123 = t121;
                                        }
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t123 * 41.1500015f), (u119 * 118.849998f));
                                        u126 = *(float *)((a4 + 0xB00));
                                        u127 = *(float *)((a4 + 0xB9C));
                                        t130 = 0x1;
                                        if (u127 > 0.0f) {
                                        } else {
                                            t128 = 0x0;
                                            if (0.0f > u127) {
                                                t128 = 0xFFFFFFFF;
                                            }
                                            t130 = t128;
                                        }
                                        t166 = (((a5 + 0x1) + 0x1) + 0x1);
                                        u173 = (u126 * 65.3675003f);
                                        t174 = (-t130);
                                    } else {
                                        u132 = *(float *)((a4 + 0xB00));
                                        u133 = *(float *)((a4 + 0xB9C));
                                        t136 = 0x1;
                                        if (u133 > 0.0f) {
                                        } else {
                                            t134 = 0x0;
                                            if (0.0f > u133) {
                                                t134 = 0xFFFFFFFF;
                                            }
                                            t136 = t134;
                                        }
                                        cpuAimPointSet(a5, 0x1, ((float)(-t136) * 41.1500015f), (u132 * 117.661499f));
                                        u139 = *(float *)((a4 + 0xB00));
                                        u140 = *(float *)((a4 + 0xB9C));
                                        t143 = 0x1;
                                        if (u140 > 0.0f) {
                                        } else {
                                            t141 = 0x0;
                                            if (0.0f > u140) {
                                                t141 = 0xFFFFFFFF;
                                            }
                                            t143 = t141;
                                        }
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t143) * 41.1500015f), (u139 * 118.849998f));
                                        u146 = *(float *)((a4 + 0xB00));
                                        u147 = *(float *)((a4 + 0xB9C));
                                        t150 = 0x1;
                                        if (u147 > 0.0f) {
                                        } else {
                                            t148 = 0x0;
                                            if (0.0f > u147) {
                                                t148 = 0xFFFFFFFF;
                                            }
                                            t150 = t148;
                                        }
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t150) * 41.1500015f), (u146 * 117.661499f));
                                        u153 = *(float *)((a4 + 0xB00));
                                        u154 = *(float *)((a4 + 0xB9C));
                                        t157 = 0x1;
                                        if (u154 > 0.0f) {
                                        } else {
                                            t155 = 0x0;
                                            if (0.0f > u154) {
                                                t155 = 0xFFFFFFFF;
                                            }
                                            t157 = t155;
                                        }
                                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t157) * 41.1500015f), (u153 * 118.849998f));
                                        u160 = *(float *)((a4 + 0xB00));
                                        u161 = *(float *)((a4 + 0xB9C));
                                        t164 = 0x1;
                                        if (u161 > 0.0f) {
                                        } else {
                                            t162 = 0x0;
                                            if (0.0f > u161) {
                                                t162 = 0xFFFFFFFF;
                                            }
                                            t164 = t162;
                                        }
                                        t166 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                        u173 = (u160 * 118.849998f);
                                        t174 = t164;
                                    }
                                    cpuAimPointSet(t166, 0x1, ((float)t174 * 41.1500015f), u173);
                                    t178 = (t166 + 0x1);
                                }
                                t184 = t178;
                            }
                            t293 = t184;
                        } else {
                            u189 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u190 = (-u189);
                            if (!(0.0f > u189)) {
                                u190 = u189;
                            }
                            if (!(16.460001f > u190)) {
                                u192 = *(float *)((a4 + 0xB00));
                                u193 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                t196 = 0x1;
                                if (u193 > 0.0f) {
                                } else {
                                    t194 = 0x0;
                                    if (0.0f > u193) {
                                        t194 = 0xFFFFFFFF;
                                    }
                                    t196 = t194;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)(-t196) * 41.1500015f), (u192 * 118.849998f));
                                u199 = *(float *)((a4 + 0xB00));
                                u200 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                t203 = 0x1;
                                if (u200 > 0.0f) {
                                } else {
                                    t201 = 0x0;
                                    if (0.0f > u200) {
                                        t201 = 0xFFFFFFFF;
                                    }
                                    t203 = t201;
                                }
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t203) * 41.1500015f), (u199 * 117.661499f));
                                u206 = *(float *)((a4 + 0xB00));
                                u207 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                t210 = 0x1;
                                if (u207 > 0.0f) {
                                } else {
                                    t208 = 0x0;
                                    if (0.0f > u207) {
                                        t208 = 0xFFFFFFFF;
                                    }
                                    t210 = t208;
                                }
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t210) * 41.1500015f), (u206 * 118.849998f));
                                u213 = *(float *)((a4 + 0xB00));
                                u214 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                t217 = 0x1;
                                if (u214 > 0.0f) {
                                } else {
                                    t215 = 0x0;
                                    if (0.0f > u214) {
                                        t215 = 0xFFFFFFFF;
                                    }
                                    t217 = t215;
                                }
                                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t217) * 41.1500015f), (u213 * 117.661499f));
                                u220 = *(float *)((a4 + 0xB00));
                                u221 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                t224 = 0x1;
                                if (u221 > 0.0f) {
                                } else {
                                    t222 = 0x0;
                                    if (0.0f > u221) {
                                        t222 = 0xFFFFFFFF;
                                    }
                                    t224 = t222;
                                }
                                cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t224 * 41.1500015f), (u220 * 118.849998f));
                                t287 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                            } else {
                                u227 = *(float *)((a4 + 0xAE8));
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
                                u233 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                t236 = 0x1;
                                if (u233 > 0.0f) {
                                } else {
                                    t234 = 0x0;
                                    if (0.0f > u233) {
                                        t234 = 0xFFFFFFFF;
                                    }
                                    t236 = t234;
                                }
                                if (t231 != t236) {
                                    u238 = *(float *)((a4 + 0xB00));
                                    u239 = *(float *)((a4 + 0xAE8));
                                    u240 = *(float *)((a4 + 0xB9C));
                                    t243 = 0x1;
                                    if ((u240 - u239) > 0.0f) {
                                    } else {
                                        t241 = 0x0;
                                        if (0.0f > (u240 - u239)) {
                                            t241 = 0xFFFFFFFF;
                                        }
                                        t243 = t241;
                                    }
                                    t273 = a5;
                                    u282 = (u238 * 118.849998f);
                                    t283 = t243;
                                } else {
                                    u245 = *(float *)((a4 + 0xB00));
                                    u246 = *(float *)((a4 + 0xB9C));
                                    t249 = 0x1;
                                    if (u246 > 0.0f) {
                                    } else {
                                        t247 = 0x0;
                                        if (0.0f > u246) {
                                            t247 = 0xFFFFFFFF;
                                        }
                                        t249 = t247;
                                    }
                                    cpuAimPointSet(a5, 0x1, ((float)t249 * 41.1500015f), (u245 * 118.849998f));
                                    u252 = *(float *)((a4 + 0xB00));
                                    u253 = *(float *)((a4 + 0xB9C));
                                    t256 = 0x1;
                                    if (u253 > 0.0f) {
                                    } else {
                                        t254 = 0x0;
                                        if (0.0f > u253) {
                                            t254 = 0xFFFFFFFF;
                                        }
                                        t256 = t254;
                                    }
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t256 * 41.1500015f), (u252 * 118.849998f));
                                    u259 = *(float *)((a4 + 0xB00));
                                    u260 = *(float *)((a4 + 0xB9C));
                                    t263 = 0x1;
                                    if (u260 > 0.0f) {
                                    } else {
                                        t261 = 0x0;
                                        if (0.0f > u260) {
                                            t261 = 0xFFFFFFFF;
                                        }
                                        t263 = t261;
                                    }
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t263 * 41.1500015f), (u259 * 118.849998f));
                                    u266 = *(float *)((a4 + 0xB00));
                                    u267 = *(float *)((a4 + 0xAE8));
                                    u268 = *(float *)((a4 + 0xB9C));
                                    t271 = 0x1;
                                    if ((u268 - u267) > 0.0f) {
                                    } else {
                                        t269 = 0x0;
                                        if (0.0f > (u268 - u267)) {
                                            t269 = 0xFFFFFFFF;
                                        }
                                        t271 = t269;
                                    }
                                    t273 = (((a5 + 0x1) + 0x1) + 0x1);
                                    u282 = (u266 * 117.661499f);
                                    t283 = (-t271);
                                }
                                cpuAimPointSet(t273, 0x1, ((float)t283 * 41.1500015f), u282);
                                t287 = (t273 + 0x1);
                            }
                            t293 = t287;
                        }
                        t299 = t293;
                    }
                    t336 = t299;
                } else {
                    u304 = *(float *)((a4 + 0xB00));
                    u305 = *(float *)((a4 + 0xB9C));
                    t308 = 0x1;
                    if (u305 > 0.0f) {
                    } else {
                        t306 = 0x0;
                        if (0.0f > u305) {
                            t306 = 0xFFFFFFFF;
                        }
                        t308 = t306;
                    }
                    cpuAimPointSet(a5, 0x3, ((float)(-t308) * 41.1500015f), (u304 * 118.849998f));
                    u311 = *(float *)((a4 + 0xB00));
                    u312 = *(float *)((a4 + 0xB9C));
                    t315 = 0x1;
                    if (u312 > 0.0f) {
                    } else {
                        t313 = 0x0;
                        if (0.0f > u312) {
                            t313 = 0xFFFFFFFF;
                        }
                        t315 = t313;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x3, ((float)t315 * 41.1500015f), (u311 * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u321 = *(float *)((a4 + 0xB00));
                    u322 = *(float *)((a4 + 0xB9C));
                    t325 = 0x1;
                    if (u322 > 0.0f) {
                    } else {
                        t323 = 0x0;
                        if (0.0f > u322) {
                            t323 = 0xFFFFFFFF;
                        }
                        t325 = t323;
                    }
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t325 * 41.1500015f), (u321 * 118.849998f));
                    u328 = *(float *)((a4 + 0xB00));
                    u329 = *(float *)((a4 + 0xB9C));
                    t332 = 0x1;
                    if (u329 > 0.0f) {
                    } else {
                        t330 = 0x0;
                        if (0.0f > u329) {
                            t330 = 0xFFFFFFFF;
                        }
                        t332 = t330;
                    }
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t332 * 41.1500015f), (u328 * 11.8850002f));
                    t336 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t342 = t336;
            }
            t672 = t342;
        } else {
            u347 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u348 = (-u347);
            if (!(0.0f > u347)) {
                u348 = u347;
            }
            if (!(35.6550026f > u348)) {
                u352 = u347;
                u352 = u352 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
                if (!(0.0f > u352)) {
                    u355 = u347;
                    u355 = u355 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
                    u361 = u355;
                } else {
                    u361 = ((-u347) - ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
                }
                if (41.5974998f > u361) {
                    u365 = *(float *)((a4 + 0xB00));
                    u366 = *(float *)((a4 + 0xB9C));
                    t369 = 0x1;
                    if (u366 > 0.0f) {
                    } else {
                        t367 = 0x0;
                        if (0.0f > u366) {
                            t367 = 0xFFFFFFFF;
                        }
                        t369 = t367;
                    }
                    cpuAimPointSet(a5, 0x3, ((float)(-t369) * 41.1500015f), (u365 * 118.849998f));
                    u372 = *(float *)((a4 + 0xB00));
                    u373 = *(float *)((a4 + 0xB9C));
                    t376 = 0x1;
                    if (u373 > 0.0f) {
                    } else {
                        t374 = 0x0;
                        if (0.0f > u373) {
                            t374 = 0xFFFFFFFF;
                        }
                        t376 = t374;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x3, ((float)t376 * 41.1500015f), (u372 * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u382 = *(float *)((a4 + 0xB00));
                    u383 = *(float *)((a4 + 0xB9C));
                    t386 = 0x1;
                    if (u383 > 0.0f) {
                    } else {
                        t384 = 0x0;
                        if (0.0f > u383) {
                            t384 = 0xFFFFFFFF;
                        }
                        t386 = t384;
                    }
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t386 * 41.1500015f), (u382 * 118.849998f));
                    u389 = *(float *)((a4 + 0xB00));
                    u390 = *(float *)((a4 + 0xB9C));
                    t393 = 0x1;
                    if (u390 > 0.0f) {
                    } else {
                        t391 = 0x0;
                        if (0.0f > u390) {
                            t391 = 0xFFFFFFFF;
                        }
                        t393 = t391;
                    }
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t393 * 41.1500015f), (u389 * 11.8850002f));
                    t629 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                } else {
                    u396 = *(float *)((a4 + 0xB9C));
                    u397 = (-u396);
                    if (!(0.0f > u396)) {
                        u397 = u396;
                    }
                    if (!(16.460001f > u397)) {
                        u400 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u401 = (-u400);
                        if (!(0.0f > u400)) {
                            u401 = u400;
                        }
                        if (16.460001f > u401) {
                            u404 = *(float *)((a4 + 0xB00));
                            u405 = *(float *)((a4 + 0xB9C));
                            t408 = 0x1;
                            if (u405 > 0.0f) {
                            } else {
                                t406 = 0x0;
                                if (0.0f > u405) {
                                    t406 = 0xFFFFFFFF;
                                }
                                t408 = t406;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)t408 * 41.1500015f), (u404 * 118.849998f));
                            t511 = (a5 + 0x1);
                        } else {
                            u411 = *(float *)((a4 + 0xB9C));
                            t414 = 0x1;
                            if (u411 > 0.0f) {
                            } else {
                                t412 = 0x0;
                                if (0.0f > u411) {
                                    t412 = 0xFFFFFFFF;
                                }
                                t414 = t412;
                            }
                            u416 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            t419 = 0x1;
                            if (u416 > 0.0f) {
                            } else {
                                t417 = 0x0;
                                if (0.0f > u416) {
                                    t417 = 0xFFFFFFFF;
                                }
                                t419 = t417;
                            }
                            if (t414 != t419) {
                                u422 = *(float *)((a4 + 0xB00));
                                u423 = *(float *)((a4 + 0xB9C));
                                t426 = 0x1;
                                if (u423 > 0.0f) {
                                } else {
                                    t424 = 0x0;
                                    if (0.0f > u423) {
                                        t424 = 0xFFFFFFFF;
                                    }
                                    t426 = t424;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t426 * 41.1500015f), (u422 * 118.849998f));
                                t505 = (a5 + 0x1);
                            } else {
                                u429 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u430 = (-u429);
                                if (!(0.0f > u429)) {
                                    u430 = u429;
                                }
                                if (47.5400009f > u430) {
                                    u432 = *(float *)((a4 + 0xB00));
                                    u433 = *(float *)((a4 + 0xB9C));
                                    t436 = 0x1;
                                    if (u433 > 0.0f) {
                                    } else {
                                        t434 = 0x0;
                                        if (0.0f > u433) {
                                            t434 = 0xFFFFFFFF;
                                        }
                                        t436 = t434;
                                    }
                                    cpuAimPointSet(a5, 0x1, ((float)t436 * 41.1500015f), (u432 * 118.849998f));
                                    u439 = *(float *)((a4 + 0xB00));
                                    u440 = *(float *)((a4 + 0xB9C));
                                    t443 = 0x1;
                                    if (u440 > 0.0f) {
                                    } else {
                                        t441 = 0x0;
                                        if (0.0f > u440) {
                                            t441 = 0xFFFFFFFF;
                                        }
                                        t443 = t441;
                                    }
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t443 * 41.1500015f), (u439 * 118.849998f));
                                    u446 = *(float *)((a4 + 0xB00));
                                    u447 = *(float *)((a4 + 0xB9C));
                                    t450 = 0x1;
                                    if (u447 > 0.0f) {
                                    } else {
                                        t448 = 0x0;
                                        if (0.0f > u447) {
                                            t448 = 0xFFFFFFFF;
                                        }
                                        t450 = t448;
                                    }
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t450 * 41.1500015f), (u446 * 118.849998f));
                                    u453 = *(float *)((a4 + 0xB00));
                                    u454 = *(float *)((a4 + 0xB9C));
                                    t457 = 0x1;
                                    if (u454 > 0.0f) {
                                    } else {
                                        t455 = 0x0;
                                        if (0.0f > u454) {
                                            t455 = 0xFFFFFFFF;
                                        }
                                        t457 = t455;
                                    }
                                    t493 = (((a5 + 0x1) + 0x1) + 0x1);
                                    u500 = (u453 * 65.3675003f);
                                    t501 = (-t457);
                                } else {
                                    u459 = *(float *)((a4 + 0xB00));
                                    u460 = *(float *)((a4 + 0xB9C));
                                    t463 = 0x1;
                                    if (u460 > 0.0f) {
                                    } else {
                                        t461 = 0x0;
                                        if (0.0f > u460) {
                                            t461 = 0xFFFFFFFF;
                                        }
                                        t463 = t461;
                                    }
                                    cpuAimPointSet(a5, 0x1, ((float)(-t463) * 41.1500015f), (u459 * 117.661499f));
                                    u466 = *(float *)((a4 + 0xB00));
                                    u467 = *(float *)((a4 + 0xB9C));
                                    t470 = 0x1;
                                    if (u467 > 0.0f) {
                                    } else {
                                        t468 = 0x0;
                                        if (0.0f > u467) {
                                            t468 = 0xFFFFFFFF;
                                        }
                                        t470 = t468;
                                    }
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t470) * 41.1500015f), (u466 * 118.849998f));
                                    u473 = *(float *)((a4 + 0xB00));
                                    u474 = *(float *)((a4 + 0xB9C));
                                    t477 = 0x1;
                                    if (u474 > 0.0f) {
                                    } else {
                                        t475 = 0x0;
                                        if (0.0f > u474) {
                                            t475 = 0xFFFFFFFF;
                                        }
                                        t477 = t475;
                                    }
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t477) * 41.1500015f), (u473 * 117.661499f));
                                    u480 = *(float *)((a4 + 0xB00));
                                    u481 = *(float *)((a4 + 0xB9C));
                                    t484 = 0x1;
                                    if (u481 > 0.0f) {
                                    } else {
                                        t482 = 0x0;
                                        if (0.0f > u481) {
                                            t482 = 0xFFFFFFFF;
                                        }
                                        t484 = t482;
                                    }
                                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t484) * 41.1500015f), (u480 * 118.849998f));
                                    u487 = *(float *)((a4 + 0xB00));
                                    u488 = *(float *)((a4 + 0xB9C));
                                    t491 = 0x1;
                                    if (u488 > 0.0f) {
                                    } else {
                                        t489 = 0x0;
                                        if (0.0f > u488) {
                                            t489 = 0xFFFFFFFF;
                                        }
                                        t491 = t489;
                                    }
                                    t493 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                    u500 = (u487 * 118.849998f);
                                    t501 = t491;
                                }
                                cpuAimPointSet(t493, 0x1, ((float)t501 * 41.1500015f), u500);
                                t505 = (t493 + 0x1);
                            }
                            t511 = t505;
                        }
                        t623 = t511;
                    } else {
                        u516 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u517 = (-u516);
                        if (!(0.0f > u516)) {
                            u517 = u516;
                        }
                        if (!(16.460001f > u517)) {
                            u519 = *(float *)((a4 + 0xB00));
                            u520 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            t523 = 0x1;
                            if (u520 > 0.0f) {
                            } else {
                                t521 = 0x0;
                                if (0.0f > u520) {
                                    t521 = 0xFFFFFFFF;
                                }
                                t523 = t521;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)(-t523) * 41.1500015f), (u519 * 118.849998f));
                            u526 = *(float *)((a4 + 0xB00));
                            u527 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            t530 = 0x1;
                            if (u527 > 0.0f) {
                            } else {
                                t528 = 0x0;
                                if (0.0f > u527) {
                                    t528 = 0xFFFFFFFF;
                                }
                                t530 = t528;
                            }
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t530) * 41.1500015f), (u526 * 117.661499f));
                            u533 = *(float *)((a4 + 0xB00));
                            u534 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            t537 = 0x1;
                            if (u534 > 0.0f) {
                            } else {
                                t535 = 0x0;
                                if (0.0f > u534) {
                                    t535 = 0xFFFFFFFF;
                                }
                                t537 = t535;
                            }
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t537) * 41.1500015f), (u533 * 118.849998f));
                            u540 = *(float *)((a4 + 0xB00));
                            u541 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            t544 = 0x1;
                            if (u541 > 0.0f) {
                            } else {
                                t542 = 0x0;
                                if (0.0f > u541) {
                                    t542 = 0xFFFFFFFF;
                                }
                                t544 = t542;
                            }
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t544) * 41.1500015f), (u540 * 117.661499f));
                            u547 = *(float *)((a4 + 0xB00));
                            u548 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            t551 = 0x1;
                            if (u548 > 0.0f) {
                            } else {
                                t549 = 0x0;
                                if (0.0f > u548) {
                                    t549 = 0xFFFFFFFF;
                                }
                                t551 = t549;
                            }
                            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t551 * 41.1500015f), (u547 * 118.849998f));
                            t617 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                        } else {
                            u554 = *(float *)((a4 + 0xAE8));
                            u555 = *(float *)((a4 + 0xB9C));
                            t558 = 0x1;
                            if ((u555 - u554) > 0.0f) {
                            } else {
                                t556 = 0x0;
                                if (0.0f > (u555 - u554)) {
                                    t556 = 0xFFFFFFFF;
                                }
                                t558 = t556;
                            }
                            u560 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            t563 = 0x1;
                            if (u560 > 0.0f) {
                            } else {
                                t561 = 0x0;
                                if (0.0f > u560) {
                                    t561 = 0xFFFFFFFF;
                                }
                                t563 = t561;
                            }
                            if (t558 != t563) {
                                u565 = *(float *)((a4 + 0xB00));
                                u566 = *(float *)((a4 + 0xAE8));
                                u567 = *(float *)((a4 + 0xB9C));
                                t570 = 0x1;
                                if ((u567 - u566) > 0.0f) {
                                } else {
                                    t568 = 0x0;
                                    if (0.0f > (u567 - u566)) {
                                        t568 = 0xFFFFFFFF;
                                    }
                                    t570 = t568;
                                }
                                t600 = a5;
                                u612 = (u565 * 118.849998f);
                                t613 = t570;
                            } else {
                                u572 = *(float *)((a4 + 0xB00));
                                u573 = *(float *)((a4 + 0xB9C));
                                t576 = 0x1;
                                if (u573 > 0.0f) {
                                } else {
                                    t574 = 0x0;
                                    if (0.0f > u573) {
                                        t574 = 0xFFFFFFFF;
                                    }
                                    t576 = t574;
                                }
                                cpuAimPointSet(a5, 0x1, ((float)t576 * 41.1500015f), (u572 * 118.849998f));
                                u579 = *(float *)((a4 + 0xB00));
                                u580 = *(float *)((a4 + 0xB9C));
                                t583 = 0x1;
                                if (u580 > 0.0f) {
                                } else {
                                    t581 = 0x0;
                                    if (0.0f > u580) {
                                        t581 = 0xFFFFFFFF;
                                    }
                                    t583 = t581;
                                }
                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t583 * 41.1500015f), (u579 * 118.849998f));
                                u586 = *(float *)((a4 + 0xB00));
                                u587 = *(float *)((a4 + 0xB9C));
                                t590 = 0x1;
                                if (u587 > 0.0f) {
                                } else {
                                    t588 = 0x0;
                                    if (0.0f > u587) {
                                        t588 = 0xFFFFFFFF;
                                    }
                                    t590 = t588;
                                }
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t590 * 41.1500015f), (u586 * 118.849998f));
                                u593 = *(float *)((a4 + 0xB00));
                                u594 = *(float *)((a4 + 0xAE8));
                                u595 = *(float *)((a4 + 0xB9C));
                                t598 = 0x1;
                                if ((u595 - u594) > 0.0f) {
                                } else {
                                    t596 = 0x0;
                                    if (0.0f > (u595 - u594)) {
                                        t596 = 0xFFFFFFFF;
                                    }
                                    t598 = t596;
                                }
                                t600 = (((a5 + 0x1) + 0x1) + 0x1);
                                u612 = (u593 * 117.661499f);
                                t613 = (-t598);
                            }
                            cpuAimPointSet(t600, 0x1, ((float)t613 * 41.1500015f), u612);
                            t617 = (t600 + 0x1);
                        }
                        t623 = t617;
                    }
                    t629 = t623;
                }
                t666 = t629;
            } else {
                u634 = *(float *)((a4 + 0xB00));
                u635 = *(float *)((a4 + 0xB9C));
                t638 = 0x1;
                if (u635 > 0.0f) {
                } else {
                    t636 = 0x0;
                    if (0.0f > u635) {
                        t636 = 0xFFFFFFFF;
                    }
                    t638 = t636;
                }
                cpuAimPointSet(a5, 0x3, ((float)(-t638) * 41.1500015f), (u634 * 118.849998f));
                u641 = *(float *)((a4 + 0xB00));
                u642 = *(float *)((a4 + 0xB9C));
                t645 = 0x1;
                if (u642 > 0.0f) {
                } else {
                    t643 = 0x0;
                    if (0.0f > u642) {
                        t643 = 0xFFFFFFFF;
                    }
                    t645 = t643;
                }
                cpuAimPointSet((a5 + 0x1), 0x3, ((float)t645 * 41.1500015f), (u641 * 118.849998f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((*(float *)((a4 + 0xB9C))) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u651 = *(float *)((a4 + 0xB00));
                u652 = *(float *)((a4 + 0xB9C));
                t655 = 0x1;
                if (u652 > 0.0f) {
                } else {
                    t653 = 0x0;
                    if (0.0f > u652) {
                        t653 = 0xFFFFFFFF;
                    }
                    t655 = t653;
                }
                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t655 * 41.1500015f), (u651 * 118.849998f));
                u658 = *(float *)((a4 + 0xB00));
                u659 = *(float *)((a4 + 0xB9C));
                t662 = 0x1;
                if (u659 > 0.0f) {
                } else {
                    t660 = 0x0;
                    if (0.0f > u659) {
                        t660 = 0xFFFFFFFF;
                    }
                    t662 = t660;
                }
                cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)t662 * 41.1500015f), (u658 * 11.8850002f));
                t666 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t672 = t666;
        }
        t716 = t672;
    } else {
        u677 = *(float *)0x8C291F7C;
        u678 = (-u677);
        if (!(0.0f > u677)) {
            u678 = u677;
        }
        if (u678 > 20.5750008f) {
            u680 = *(float *)((a4 + 0xB00));
            u681 = *(float *)((a4 + 0xB9C));
            t684 = 0x1;
            if (u681 > 0.0f) {
            } else {
                t682 = 0x0;
                if (0.0f > u681) {
                    t682 = 0xFFFFFFFF;
                }
                t684 = t682;
            }
            cpuAimPointSet(a5, 0x1, ((float)t684 * 41.1500015f), (u680 * 118.849998f));
            u687 = *(float *)((a4 + 0xB00));
            u688 = *(float *)((a4 + 0xB9C));
            t691 = 0x1;
            if (u688 > 0.0f) {
            } else {
                t689 = 0x0;
                if (0.0f > u688) {
                    t689 = 0xFFFFFFFF;
                }
                t691 = t689;
            }
            u711 = (u687 * 71.3100052f);
            t712 = (-t691);
        } else {
            u693 = *(float *)((a4 + 0xB00));
            u694 = *(float *)((a4 + 0xB9C));
            t697 = 0x1;
            if (u694 > 0.0f) {
            } else {
                t695 = 0x0;
                if (0.0f > u694) {
                    t695 = 0xFFFFFFFF;
                }
                t697 = t695;
            }
            cpuAimPointSet(a5, 0x1, ((float)t697 * 41.1500015f), (u693 * 118.849998f));
            u700 = *(float *)((a4 + 0xB00));
            u701 = *(float *)((a4 + 0xB9C));
            t704 = 0x1;
            if (u701 > 0.0f) {
            } else {
                t702 = 0x0;
                if (0.0f > u701) {
                    t702 = 0xFFFFFFFF;
                }
                t704 = t702;
            }
            u711 = (u700 * 118.849998f);
            t712 = (-t704);
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t712 * 41.1500015f), u711);
        t716 = ((a5 + 0x1) + 0x1);
    }
    return (ndbGetTargets(a4, t716, 0x0));
}

void shadowPlayerDraw(int a4)
{
    int t3;
    int t9;
    int t51;
    int t52;
    float u53;
    float u54;
    int t55;
    float u56;
    int t58;
    float u62;
    int t76;
    int t90;
    float u96;
    int t114;
    float u122;
    int t130;
    float t133;
    float u152;
    int t169;
    int stk[77];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_8C08BA24:;
    *(unsigned int *)(((int)stk + 68)) = 0x1;
    R13 = (R4);
    if (((*(int *)0x8C287ADC) != 4)) goto L_8C08BA52;
    goto L_8C08BA4E;
    L_8C08BA4E:;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    goto L_8C08BA52;
    L_8C08BA52:;
    t3 = *(int *)0x8C1891E8;
    R11 = (0x8C0EFD20);
    R12 = (0x8C0EFCD0);
    R14 = (0x8C0EF910);
    R4 = (t3);
    if ((t3 != 4)) goto L_8C08BA66;
    goto L_8C08BA62;
    L_8C08BA62:;
    goto L_8C08BC6A;
    L_8C08BC6A:;
    t9 = *(int *)0x8C1891E8;
    R0 = (t9);
    R4 = (t9);
    if ((t9 == 1)) goto L_8C08BC96;
    goto L_8C08BC74;
    L_8C08BC74:;
    R0 = (R4);
    if ((R4 == 4)) goto L_8C08BC96;
    goto L_8C08BC7A;
    L_8C08BC7A:;
    R0 = (R4);
    if ((R4 == 7)) goto L_8C08BC96;
    goto L_8C08BC80;
    L_8C08BC80:;
    R0 = (R4);
    if ((R4 == 8)) goto L_8C08BC96;
    goto L_8C08BC86;
    L_8C08BC86:;
    R0 = (R4);
    if ((R4 == 14)) goto L_8C08BC96;
    goto L_8C08BC8C;
    L_8C08BC8C:;
    R0 = (R4);
    if ((R4 == 10)) goto L_8C08BC96;
    goto L_8C08BC92;
    L_8C08BC92:;
    goto L_8C08C21A;
    L_8C08C21A:;
    return;
    L_8C08BC96:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x9C + ((int)stk + 44))) = *(struct mv3 *)(0x8C10DD6C); }
    *(unsigned int *)(((int)stk + 44)) = 0x8C10DD0C;
    *(unsigned short *)(((((int)stk + 44) + 0x74) + 0x0)) = (nlArcTan2(((*(float *)((R13 + 0xAE8))) - (*(float *)0x8C10DD0C)), ((*(float *)0x8C10DD14) - (*(float *)((R13 + 0xAF0))))));
    *(unsigned int *)(((int)stk + 44)) = 0x8C10DD18;
    *(unsigned short *)(((((int)stk + 44) + 0x74) + 0x2)) = (-(nlArcTan2(((*(float *)0x8C10DD18) - (*(float *)((R13 + 0xAE8)))), ((*(float *)0x8C10DD20) - (*(float *)((R13 + 0xAF0)))))));
    *(unsigned int *)(((int)stk + 44)) = 0x8C10DD24;
    *(unsigned short *)(((((int)stk + 44) + 0x74) + 0x4)) = ((-(nlArcTan2(((*(float *)((R13 + 0xAE8))) - (*(float *)0x8C10DD24)), ((*(float *)((R13 + 0xAF0))) - (*(float *)0x8C10DD2C))))) + 0x8000);
    *(unsigned int *)(((int)stk + 44)) = 0x8C10DD30;
    R0 = (0xAF0);
    R10 = (0x8C10DD0C);
    R3 = (0x8C10DD30);
    R8 = ((((int)stk + 44) + 0x74));
    F3 = ((*(float *)0x8C10DD38));
    F5 = ((*(float *)((R13 + 0xAF0))));
    goto L_8C08BD50;
    L_8C08BD50:;
    *(unsigned short *)((R8 + 0x6)) = ((nlArcTan2(((*(float *)((R3 + 0x0))) - (*(float *)((R13 + (R0 - 8))))), (F5 - F3))) + 0x8000);
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = (0x0 + R10);
    *(unsigned int *)(((int)stk + 48)) = (((int)stk + 44) + 0x6C);
    *(unsigned int *)(((int)stk + 52)) = (0x0 + R10);
    R9 = ((0x8C + ((int)stk + 44)));
    F15 = (1.79999995f);
    goto L_8C08BD7E;
    L_8C08BD7E:;
    t51 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 64)) = (t51 << 2);
    *(unsigned int *)(((int)stk + 60)) = ((t51 << 2) + (((int)stk + 44) + 0x5C));
    t52 = *(int *)(((int)stk + 44));
    u53 = *(float *)((R13 + 0xAE8));
    u54 = *(float *)((((((t52 << 1) + t52) << 2) + R10) + 0x0));
    *(float *)(((int)stk + 40)) = (u53 - u54);
    t55 = *(int *)(((int)stk + 44));
    u56 = *(float *)((R13 + 0xAF0));
    t58 = *(int *)(((int)stk + 44));
    u62 = ((u56 - (*(float *)((((((t58 << 1) + t58) << 2) + R10) + 0x8)))) * (u56 - (*(float *)(((*(int *)(((int)stk + 52))) + 0x8)))));
    u62 = u62 + (u53 - (*(float *)((((((t55 << 1) + t55) << 2) + R10) + 0x0)))) * (u53 - u54);
    *(float *)((((t51 << 2) + (((int)stk + 44) + 0x5C)) + 0x0)) = _builtin_sqrtf(u62);
    *(unsigned short *)((((*(int *)(((int)stk + 48)))) + 0x0)) = (nlArcTan2((*(float *)(((*(int *)(((int)stk + 56))) + 0x4))), (*(float *)(((*(int *)(((int)stk + 60))) + 0x0)))));
    *(float *)((((*(int *)(((int)stk + 64))) + R9) + 0x0)) = (F15 / (nlTan((unsigned short)(*(short *)(((*(int *)(((int)stk + 48))) + 0x0))))));
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    *(unsigned int *)(((int)stk + 56)) = ((*(int *)(((int)stk + 56))) + 0xC);
    t76 = *(int *)(((int)stk + 48));
    *(unsigned int *)(((int)stk + 48)) = (t76 + 0x2);
    *(unsigned int *)(((int)stk + 52)) = ((*(int *)(((int)stk + 52))) + 0xC);
    R1 = ((t76 + 0x2));
    if (((int)(*(int *)(((int)stk + 44))) < (int)0x4)) goto L_8C08BD7E;
    goto L_8C08BE30;
    L_8C08BE30:;
    R10 = (0x0);
    F13 = (0.5f);
    F14 = (0.100000001f);
    F15 = (1.0f);
    goto L_8C08BE3C;
    L_8C08BE3C:;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    if ((!(1.60000002f > (*(float *)((R9 + (R10 << 2))))))) goto L_8C08BE86;
    goto L_8C08BE4E;
    L_8C08BE4E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xAE8 + R13)); }
    camGetPos(((int)stk + 8));
    vecSub(0x0, 0x0, 0x0, 0x0, (0x18 + ((int)stk + 8)));
    t90 = !(465.0f > (vecLength(*(Stk4 *)((int)stk + 32))));
    if (t90) goto L_8C08BE86;
    goto L_8C08BE82;
    L_8C08BE82:;
    *(unsigned int *)(((int)stk + 44)) = 0x1;
    goto L_8C08BE86;
    L_8C08BE86:;
    nlPushUnitMatrix();
    nlLoadMatrix(0x8C287938);
    u96 = (((float)R10 * 0.0500000007f) + (*(float *)((R13 + 0xAEC))));
    u96 = u96 + F14 * (float)(*(int *)((R13 + 0xB5C)));
    F12 = (((float)R10 * 0.0500000007f));
    F3 = (u96);
    F6 = ((*(float *)((R13 + 0xAF0))));
    goto L_8C08BF04;
    L_8C08BF04:;
    nlTranslate((*(float *)((R13 + 0xAE8))), (F3 + 0.0199999996f), F6);
    *(unsigned int *)(((int)stk + 48)) = (R10 << 1);
    nlRotateAY((-(unsigned short)(*(short *)((R8 + (R10 << 1))))));
    *(unsigned int *)(((int)stk + 52)) = ((R10 << 2) + R9);
    R2 = (((R10 << 2) + R9));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C08BF50;
    goto L_8C08BF32;
    L_8C08BF32:;
    F4 = (0.800000012f);
    F5 = (F15);
    F6 = ((*(float *)((R2 + 0x0))));
    goto L_8C08BF56;
    L_8C08BF56:;
    nlScale(F4, F5, F6);
    *(unsigned int *)(((int)stk + 52)) = ((R10 << 2) + R9);
    t114 = *(int *)((0x8C1825FC + ((shadowPlayerScale((*(float *)((((R10 << 2) + R9) + 0x0))))) << 2)));
    nlObjPut(t114);
    nlPopMatrix(0x1);
    nlPushUnitMatrix();
    nlLoadMatrix(0x8C287938);
    u122 = (F12 + (*(float *)((R13 + 0xAEC))));
    u122 = u122 + F14 * (float)(*(int *)((R13 + 0xB5C)));
    nlTranslate((*(float *)((R13 + 0xAE8))), (u122 + 0.0299999993f), (*(float *)((R13 + 0xAF0))));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlGetMatrix((((int)stk + 44) + 0x1C));
    nlPopMatrix(0x1);
    t130 = *(short *)((R8 + (*(int *)(((int)stk + 48)))));
    t133 = mathLineY(0.680000007f, 6400.0f, (1.0f + 1.0f), 12544.0f, (*(float *)(((*(int *)(((int)stk + 52))) + 0x0))));
    shadowLightMatrixAng((0x4000 + (int)t133), (-t130));
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x300));
    shadowPartPutStage(0xC);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x340));
    shadowPartPutStage(0xD);
    nlPopMatrix(0x1);
    if (((*(int *)(((int)stk + 68))) != 0)) goto L_8C08C030;
    goto L_8C08C02C;
    L_8C08C02C:;
    goto L_8C08C19C;
    L_8C08C19C:;
    nlPushUnitMatrix();
    nlLoadMatrix(0x8C287938);
    u152 = (F12 + (*(float *)((R13 + 0xAEC))));
    u152 = u152 + F14 * (float)(*(int *)((R13 + 0xB5C)));
    nlTranslate((*(float *)((R13 + 0xAE8))), (u152 + 0.0399999991f), (*(float *)((R13 + 0xAF0))));
    nlRotateAY((-(unsigned short)(*(short *)((R8 + (*(int *)(((int)stk + 48))))))));
    *(unsigned int *)(((int)stk + 48)) = ((R10 << 2) + R9);
    R2 = (((R10 << 2) + R9));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C08C1F2;
    goto L_8C08C1EA;
    L_8C08C1EA:;
    F4 = (F15);
    F5 = (F15);
    F6 = ((*(float *)((R2 + 0x0))));
    goto L_8C08C1F8;
    L_8C08C1F8:;
    nlScale(F4, F5, F6);
    nlObjPut(0xC5B1BD8);
    nlPopMatrix(0x1);
    t169 = (int)(R10 + 0x1) >= (int)0x4;
    R0 = ((nlPopMatrix(0x1)));
    R10 = ((R10 + 0x1));
    if (t169) goto L_8C08C21A;
    goto L_8C08C216;
    L_8C08C216:;
    goto L_8C08BE3C;
    L_8C08C1F2:;
    F4 = (F13);
    F5 = (F15);
    F6 = ((*(float *)((R2 + 0x0))));
    goto L_8C08C1F8;
    L_8C08C030:;
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x200));
    shadowPartPutStage(0x8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x240));
    shadowPartPutStage(0x9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x280));
    shadowPartPutStage(0xA);
    nlPopMatrix(0x1);
    if (((*(int *)(((int)stk + 44))) != 0)) goto L_8C08C092;
    goto L_8C08C08E;
    L_8C08C08E:;
    goto L_8C08C19C;
    L_8C08C092:;
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x2C0));
    R4 = (0xB);
    goto L_8C08C0FC;
    L_8C08C0FC:;
    shadowPartPut(R4);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x400));
    shadowPartPut(0x10);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x440));
    shadowPartPut(0x11);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x480));
    shadowPartPut(0x12);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((0x1E0 + R13) + 0x4C0));
    shadowPartPut(0x13);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((((int)stk + 44) + 0x1C));
    nlMultiMatrix(((((((*(int *)0x8C294668) << 2) << 2) << 2) + (0x1E0 + R13)) + 0x1C0));
    shadowPartPut(0x7);
    nlPopMatrix(0x1);
    goto L_8C08C19C;
    L_8C08BF50:;
    F4 = (F13);
    F5 = (F15);
    F6 = ((*(float *)((R2 + 0x0))));
    goto L_8C08BF56;
    L_8C08BA66:;
    if ((R4 != 1)) goto L_8C08BA70;
    goto L_8C08BA6C;
    L_8C08BA6C:;
    goto L_8C08BC6A;
    L_8C08BA70:;
    if ((R4 != 7)) goto L_8C08BA7A;
    goto L_8C08BA76;
    L_8C08BA76:;
    goto L_8C08BC6A;
    L_8C08BA7A:;
    if ((R4 != 8)) goto L_8C08BA84;
    goto L_8C08BA80;
    L_8C08BA80:;
    goto L_8C08BC6A;
    L_8C08BA84:;
    if ((R4 != 14)) goto L_8C08BA8E;
    goto L_8C08BA8A;
    L_8C08BA8A:;
    goto L_8C08BC6A;
    L_8C08BA8E:;
    if ((R4 != 10)) goto L_8C08BA98;
    goto L_8C08BA94;
    L_8C08BA94:;
    goto L_8C08BC6A;
    L_8C08BA98:;
    nlPushUnitMatrix();
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)((R13 + 0xAE8))), ((*(float *)((R13 + 0xAEC))) + 0.200000003f), (*(float *)((R13 + 0xAF0))));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlGetMatrix((0x98 + ((int)stk + 44)));
    nlPopMatrix(0x1);
    shadowLightMatrix(0.0f);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x300));
    shadowPartPut(0xC);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x340));
    shadowPartPut(0xD);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x200));
    shadowPartPut(0x8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x240));
    shadowPartPut(0x9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x280));
    shadowPartPut(0xA);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    R3 = (0x2C0);
    R4 = (0x1E0);
    goto L_8C08BBC0;
    L_8C08BBC0:;
    nlMultiMatrix(((R4 + R13) + R3));
    shadowPartPut(0xB);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x400));
    shadowPartPut(0x10);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x440));
    shadowPartPut(0x11);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x480));
    shadowPartPut(0x12);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((0x1E0 + R13) + 0x4C0));
    shadowPartPut(0x13);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix((0x98 + ((int)stk + 44)));
    nlMultiMatrix(((((((*(int *)0x8C294668) << 2) << 2) << 2) + (0x1E0 + R13)) + 0x1C0));
    shadowPartPut(0x7);
    nlPopMatrix(0x1);
    nlPopMatrix(0x1);
    goto L_8C08BC6A;
}
