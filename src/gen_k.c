/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int matchSetSlowMotion(int, float);
int fadeStart(int);
int playerStartReactions(int, int);
int circuitApplyResult(void);
int miniPlacePlayers(void);
int miniStart(void);
int miniWallTargetsHit(void);
int miniResultStart(int, int);
int miniHudDraw(void);
int strmVoiceQueueReset(void);
int strmBgmFadeOut(int, int);
int eepromGetDiff(void);
int BupRequestSave(int, int, int, int);
int memmove(int, int, int);
int nlRand(void);
int nlsndSeqRequest(int);
int cpuDblInit(int a4, int a5, int a6, float f4, float f5, float f6);
int miniExec(void);

int cpuDblInit(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    float u65;
    float u66;
    float u67;
    int t68;
    int t69;
    int t70;
    int t71;
    float u72;
    float u73;
    int t74;
    int t75;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t107;
    int t108;
    int t109;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t161;
    int t163;
    int t164;
    int t165;
    int t167;
    int t168;
    int t169;
    int t170;
    int t172;
    int t48;
    int t50;
    int t51;
    int t41;
    int t43;
    int t44;
    int t15;
    int t17;
    int t18;
    int t11;
    int t13;
    int t9;
    int t35;
    int t37;
    int t38;
    int t29;
    int t31;
    int t32;
    float u63;
    float u64;
    int t145;
    int t146;
    int t147;
    float u150;
    float u151;
    float u152;
    int t130;
    int t131;
    int t132;
    float u135;
    float u136;
    float u137;
    int t116;
    int t117;
    int t118;
    float u121;
    float u122;
    float u123;
    int t177;
    int stk[12] = {0};

    *(unsigned int *)0x8C2FCC68 = 0x0;
    *(unsigned int *)0x8C2FCC64 = 0x0;
    t0 = *(int *)0x8C421F60;
    if (t0 != 0) {
        *(unsigned int *)0x8C2FCC1C = 0x7;
        t48 = 0x8C421F60;
        t50 = 0x8C2FCC64;
        t51 = 0x7;
    } else {
        t1 = *(int *)0x8C20D14C;
        if (t1 == 6) {
            t2 = *(int *)0x8C2FBE20;
            t3 = *(int *)((((((t2 << 2) << 2) + t2) << 2) + 0x8C108E7C));
            *(unsigned int *)0x8C2FCC20 = t3;
            t4 = *(int *)0x8C1891E8;
            t5 = *(signed char *)((t3 + ((t4 << 2) + 0x8C10D358)));
            *(unsigned int *)0x8C2FCC1C = (unsigned char)t5;
            t6 = *(int *)0x8C40C308;
            if (t6 == 0xFFFFFFF) {
                t7 = *(int *)0x8C40C30C;
                if (t7 == 0x3FFFF) {
                    t8 = *(int *)0x8C40C310;
                    if (t8 == 0x3FF) {
                        *(unsigned int *)0x8C2FCC28 = 0x5;
                        t9 = 0x5;
                    } else {
                        *(unsigned int *)0x8C2FCC28 = 0x4;
                        t9 = 0xFFFFFFF;
                    }
                    t11 = t9;
                    t13 = 0x3FF;
                } else {
                    *(unsigned int *)0x8C2FCC28 = 0x4;
                    t11 = 0xFFFFFFF;
                    t13 = t7;
                }
                t15 = t11;
                t17 = t13;
                t18 = 0x3FFFF;
            } else {
                *(unsigned int *)0x8C2FCC28 = 0x4;
                t15 = 0xFFFFFFF;
                t17 = 0x8C10D358;
                t18 = t6;
            }
            *(unsigned int *)0x8C2FCC28 = 0x4;
            t41 = t15;
            t43 = t17;
            t44 = t18;
        } else {
            t20 = *(int *)0x8C287D5C;
            if (t20 == 0) {
                t21 = eepromGetDiff();
                t22 = *(signed char *)((0x8C10D6F4 + ((t21 << 1) + (t21 << 2))));
                *(unsigned int *)0x8C2FCC1C = (unsigned char)t22;
                t35 = ((t21 << 1) + (t21 << 2));
                t37 = (t21 << 2);
                t38 = (unsigned char)t22;
            } else {
                t23 = *(int *)0x8C1D136C;
                if (t23 == 0) {
                    t24 = eepromGetDiff();
                    t25 = *(signed char *)((0x8C10D718 + t24));
                    t26 = nlRand();
                    t27 = (int)((int)t26 % (int)0x3);
                    *(unsigned int *)0x8C2FCC24 = (t27 + (unsigned char)t25);
                    *(unsigned int *)0x8C2FCC1C = (t27 + (unsigned char)t25);
                    t29 = (t27 + (unsigned char)t25);
                    t32 = 0x8C2FCC24;
                } else {
                    t28 = *(int *)0x8C2FCC24;
                    *(unsigned int *)0x8C2FCC1C = t28;
                    *(unsigned int *)0x8C1D136C = 0x0;
                    t29 = t1;
                    t31 = 0x8C2FCC64;
                    t32 = t28;
                }
                t35 = t29;
                t37 = t31;
                t38 = t32;
            }
            t41 = t35;
            t43 = t37;
            t44 = t38;
        }
        t48 = t41;
        t50 = t43;
        t51 = t44;
    }
    t55 = t48;
    t56 = t50;
    t57 = t51;
    t58 = 0x8C2FC69C;
    t59 = 0x8C287D84;
    t60 = a6;
    t61 = 0x3;
    t62 = 0x8C2FCC1C;
    u65 = f4;
    u66 = f5;
    u67 = f6;
    for (;;) {
        if ((int)t61 < 0) {
            break;
        }
        t68 = *(int *)0x8C20D14C;
        t55 = t68;
        if (t55 == 6) {
            t62 = 0x8C2FBC58;
            t55 = 0x25;
            t60 = 0x8C15A010;
            t69 = *(signed char *)((t62 + t55));
            t55 = t69;
            u65 = 1.0f;
            t55 = (unsigned char)t55;
            u63 = u65;
            t55 = (t55 << 2);
            t70 = *(int *)((t60 + t55));
            t57 = t70;
            t55 = 0x141;
            *(unsigned char *)((t58 + t55)) = t57;
            t55 = 0x8C056AEC;
            t71 = *(int *)0x8C2FCC20;
            t57 = t71;
            u72 = *(float *)((t55 + 0x0));
            u67 = u72;
            t55 = 0x8C056AF0;
            u73 = *(float *)((t55 + 0x0));
            u66 = u73;
            t55 = 0x10;
            u64 = (float)t57;
            u64 = (u64 / u66);
            u63 = (u63 - u64);
            u63 = (u63 * u67);
            *(float *)((t58 + t55)) = u63;
        } else {
            t74 = *(int *)0x8C287D5C;
            t57 = t74;
            if (t57 == 0) {
                t55 = 0x141;
                t60 = 0x2;
                *(unsigned char *)((t58 + t55)) = t60;
                t55 = 0xC58;
                t75 = *(int *)((t59 + t55));
                t55 = t75;
                t60 = t55;
                if (t55 != 16) {
                    t55 = t60;
                    if (t55 == 17) {
                        t55 = 0x141;
                        *(unsigned char *)((t58 + t55)) = 0x3;
                    }
                } else {
                    t55 = 0x141;
                    *(unsigned char *)((t58 + t55)) = 0x3;
                }
            } else {
                t55 = 0xB5C;
                t60 = 0x8C3438E8;
                t78 = *(int *)((t59 + t55));
                t55 = t78;
                t55 = (t55 << 2);
                t79 = *(int *)((t60 + t55));
                t57 = t79;
                t55 = 0x141;
                *(unsigned char *)((t58 + t55)) = t57;
                t80 = *(signed char *)((t58 + t55));
                t55 = t80;
                t55 = (unsigned char)t55;
                if (t55 == 2) {
                    t55 = 0xC58;
                    t81 = *(int *)((t59 + t55));
                    t55 = t81;
                    if (t55 != 16) {
                        t55 = 0xC58;
                        t82 = *(int *)((t59 + t55));
                        t55 = t82;
                        if (t55 == 17) {
                            t55 = 0x141;
                            *(unsigned char *)((t58 + t55)) = 0x3;
                        }
                    } else {
                        t55 = 0x141;
                        *(unsigned char *)((t58 + t55)) = 0x3;
                    }
                }
            }
            t55 = 0x10;
            *(float *)((t58 + t55)) = 0.0f;
        }
        t55 = 0x14;
        *(float *)((t58 + t55)) = 0.0f;
        t60 = 0x1;
        t55 = 0x12B;
        *(unsigned char *)((t58 + t55)) = t60;
        t60 = 0x147;
        t55 = 0xA24;
        t60 = (t60 + t58);
        *(unsigned int *)((t59 + t55)) = 0x4;
        t60 = (t60 + 0x11);
        for (;;) {
            t57 = 0x147;
            t57 = (t57 + t58);
            t57 = (t57 + 0x1);
            if ((unsigned int)t60 < (unsigned int)t57) {
                break;
            }
            *(unsigned char *)(((t60 - 0x1) + 0x0)) = 0x0;
            t60 = (t60 - 0x1);
        }
        t56 = 0x160;
        t61 = (t61 - 1);
        t57 = 0xD78;
        t58 = (t58 + t56);
        t59 = (t59 + t57);
    }
    t88 = *(int *)0x8C421F60;
    if (t88 != 0) {
        *(unsigned int *)0x8C2FCC1C = 0x7;
        t145 = t59;
        t146 = t60;
        t147 = t61;
        u150 = u65;
        u151 = u66;
        u152 = u67;
    } else {
        t89 = *(int *)0x8C20D14C;
        if (t89 == 6) {
            t90 = *(int *)0x8C2FBE20;
            t91 = *(int *)((0x8C108E7C + ((((t90 << 2) << 2) + t90) << 2)));
            *(unsigned int *)0x8C2FCC20 = t91;
            t92 = *(int *)0x8C1891E8;
            t93 = *(signed char *)((t91 + ((t92 << 2) + 0x8C10D358)));
            *(unsigned int *)0x8C2FCC1C = (unsigned char)t93;
            t130 = t59;
            t131 = t60;
            t132 = t61;
            u135 = u65;
            u136 = u66;
            u137 = u67;
        } else {
            t94 = *(int *)0x8C287D5C;
            if (t94 == 0) {
                t95 = 0x8C287D5C;
                t96 = 0x8C421F60;
                t97 = 0x8C20D14C;
                t98 = 0x4;
                t99 = t59;
                t100 = 0x0;
                for (;;) {
                    t101 = ((int)t98 > 0);
                    t98 = (t98 - 1);
                    if (!t101) {
                        break;
                    }
                    t97 = t98;
                    t102 = *(short *)0x8C343262;
                    t95 = t102;
                    t96 = 0x1;
                    t97 = (t97 << 2);
                    t96 = (((int)t97 >= 0) ? (t96 << (t97 & 31)) : ((-(int)t97 & 31) ? ((int)t96 >> (-(int)t97 & 31)) : ((int)t96 >> 31)));
                    t95 = (unsigned short)t95;
                    if ((t95 & t96) != 0) {
                        t97 = 0x4CC;
                        t99 = t98;
                        t99 = (t99 << 2);
                        t97 = (t97 + 0x8C343258);
                        t99 = (t99 + t97);
                        t103 = *(int *)((t99 + 0x0));
                        t96 = t103;
                        if ((int)t100 < (int)t96) {
                            t104 = *(int *)((t99 + 0x0));
                            t100 = t104;
                        }
                    }
                }
                t107 = eepromGetDiff();
                t108 = *(signed char *)(((t100 + (0x8C10D6F4 + ((t107 << 1) + (t107 << 2)))) + 0x0));
                *(unsigned int *)0x8C2FCC1C = (unsigned char)t108;
            } else {
                t109 = *(int *)0x8C2FCC24;
                *(unsigned int *)0x8C2FCC1C = t109;
                t116 = t59;
                t117 = t60;
                t118 = t61;
                u121 = u65;
                u122 = u66;
                u123 = u67;
            }
            t130 = t116;
            t131 = t117;
            t132 = t118;
            u135 = u121;
            u136 = u122;
            u137 = u123;
        }
        t145 = t130;
        t146 = t131;
        t147 = t132;
        u150 = u135;
        u151 = u136;
        u152 = u137;
    }
    t154 = *(int *)0x8C287B3C;
    if ((t154 & 0x4000) != 0) {
        t155 = *(int *)0x8C287B10;
        t156 = *(int *)0x8C287B14;
        t157 = (int)((int)((t155 + t156) + 0x6) % (int)0x6);
        t158 = (int)((unsigned int)t157 + (unsigned int)0x0);
        t159 = (int)((unsigned int)t158 + ((((int)0x0 > (int)t157)) ? 1u : 0u));
        t161 = ((~(((~((t159 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t159 >> 1) + 0x2) >= 0) {
            t161 = (((t159 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((((-t161) + 0x1) << 1) - 1);
        t177 = 0x8C287B10;
    } else {
        t163 = *(int *)0x8C287B10;
        t164 = *(int *)0x8C287B14;
        t165 = ((~(((~((t163 + t164) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t163 + t164) + 0x2) >= 0) {
            t165 = (((t163 + t164) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((-(t165 << 1)) + 0x1);
        t167 = *(int *)0x8C287B00;
        t168 = *(int *)0x8C287B04;
        t169 = (int)((unsigned int)(t167 + t168) + (unsigned int)0x0);
        t170 = (int)((unsigned int)t169 + ((((int)0x0 > (int)(t167 + t168))) ? 1u : 0u));
        t172 = ((~(((~((t170 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t170 >> 1) + 0x2) >= 0) {
            t172 = (((t170 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = (0x8C20D14C * ((-(t172 << 1)) + 0x1));
        t177 = 0x8C287B00;
    }
    *(unsigned int *)(((int)stk + 12)) = 0x3;
    *(unsigned char *)(((int)stk + 4)) = 0x73DF2EB4;
    return ((int (*)(int, int, int, int, float, float, float))(0x8C056E76))(t177, t145, t146, t147, u150, u151, u152);
}

int miniExec(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t18;
    int t19;
    int t20;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t35;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t84;
    int t85;
    int t86;
    int t87;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t105;
    int t102;
    int t103;
    int t107;
    int t108;
    int t109;
    int t115;
    int t116;
    int t117;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t185;
    int t186;
    int t187;
    int t193;
    int t188;
    int t189;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t221;
    int t218;
    int t219;
    int t223;
    int t224;
    int t225;
    int t231;
    int t232;
    int t233;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t268;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    int t292;
    int t301;
    int t302;
    int t303;
    int t309;
    int t304;
    int t305;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t331;
    int t332;
    int t333;
    int t339;
    int t334;
    int t335;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t364;
    int t365;
    int t366;
    int t367;
    int t370;
    int t371;
    int t372;
    int t373;
    int t378;
    int t379;
    int t380;
    int t381;
    int t382;
    int t383;
    int t384;
    int t385;
    int t386;
    int t387;
    int t391;
    int t388;
    int t389;
    int t393;
    int t394;
    int t395;
    int t401;
    int t402;
    int t403;
    int t409;
    int t410;
    int t411;
    int t412;
    int t413;
    int t414;
    int t421;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t433;
    int t434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t445;
    int t446;
    int t447;
    int t448;
    int t449;
    int t450;
    int t457;
    int t458;
    int t459;
    int t460;
    int t461;
    int t462;
    int t471;
    int t472;
    int t473;
    int t479;
    int t474;
    int t475;
    int t482;
    int t483;
    int t484;
    int t485;
    int t486;
    int t487;
    int t498;
    int t499;
    int t500;
    int t501;
    int t502;
    int t503;
    int t507;
    int t504;
    int t505;
    int t509;
    int t510;
    int t511;
    int t517;
    int t518;
    int t519;
    int t525;
    int t526;
    int t527;
    int t528;
    int t529;
    int t530;
    int t537;
    int t538;
    int t539;
    int t540;
    int t541;
    int t542;
    int t549;
    int t550;
    int t551;
    int t552;
    int t553;
    int t554;
    int t561;
    int t562;
    int t563;
    int t564;
    int t565;
    int t566;
    int t573;
    int t574;
    int t575;
    int t576;
    int t577;
    int t578;
    int t587;
    int t588;
    int t589;
    int t595;
    int t590;
    int t591;
    int t598;
    int t599;
    int t600;
    int t601;
    int t602;
    int t603;
    int t617;
    int t618;
    int t619;
    int t625;
    int t620;
    int t621;
    int t628;
    int t629;
    int t630;
    int t631;
    int t632;
    int t633;
    int t657;
    int t658;
    int t659;
    int t660;
    int t661;
    int t662;
    int t663;
    int t664;
    float u665;
    int t666;
    int t667;
    int t668;
    int t669;
    int t670;
    int t671;
    int t681;
    int t682;
    int t683;
    int t702;
    int t703;
    int t717;
    int t718;
    int t719;
    int t720;
    int t721;
    int t722;
    int t723;
    int t724;
    int t725;
    int t726;
    int t727;
    int t728;
    int t729;
    int t732;
    int t733;
    int t734;
    int t735;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    int t742;
    int t743;
    int t744;
    int t745;
    int t746;
    int t709;
    int t694;
    int t651;
    int t55;
    int t22;
    int t50;
    int t45;
    int t41;
    int t71;
    int t645;
    int t359;
    int t181;
    int t169;
    int t157;
    int t145;
    int t133;
    int t121;
    int t113;
    int t204;
    int t297;
    int t285;
    int t273;
    int t261;
    int t249;
    int t237;
    int t229;
    int t320;
    int t350;
    int t467;
    int t455;
    int t443;
    int t431;
    int t419;
    int t407;
    int t399;
    int t490;
    int t583;
    int t571;
    int t559;
    int t547;
    int t535;
    int t523;
    int t515;
    int t606;
    int t636;
    int t687;
    int t677;

    t0 = *(int *)0x8C287D5C;
    if (t0 != 3) {
        return ((int (*)(void))(0x8C036F9E))();
    }
    miniHudDraw();
    t2 = *(int *)0x8C2FBEF0;
    t3 = *(int *)((t2 + 0x20));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t4 = *(int *)0x8C287C60;
                    t5 = *(int *)0x8C2FBEF0;
                    t6 = *(int *)((t5 + 0x1C));
                    *(unsigned int *)((t5 + 0x1C)) = (t6 - (((t4 == 0)) ? 1 : 0));
                    t7 = *(int *)0x8C2FBEF0;
                    t8 = *(int *)((t7 + 0x1C));
                    if (t8 != 0) {
                    } else {
                        t9 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t9 + 0x20)) = 0x4;
                        t10 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t10 + 0x1C)) = 0x78;
                        *(unsigned int *)0x8C287AF0 = 0x0;
                        *(unsigned int *)0x8C287AF4 = 0x1;
                        t11 = *(int *)0x8C2FBEF0;
                        t12 = *(int *)((t11 + 0x8));
                        t13 = 0x3;
                        t14 = 0x4;
                        if ((0x20 & t12) != 0) {
                            t13 = 0x0;
                            t14 = 0x1;
                        }
                        playerStartReactions(t13, t14);
                        matchSetSlowMotion(0x9, 0.0399999991f);
                        *(unsigned int *)0x8C287B4C = 0x78;
                        t18 = *(int *)0x8C287B3C;
                        *(unsigned int *)0x8C287B3C = (t18 | 0x800);
                        *(unsigned int *)0x8C287AF0 = 0x0;
                        *(unsigned int *)0x8C287AF4 = 0x1;
                        t19 = *(int *)0x8C287B3C;
                        *(unsigned int *)0x8C287B3C = (t19 & 0xFFFFEFFF);
                        t20 = *(int *)0x8C2888E4;
                        *(unsigned int *)0x8C2888E4 = (t20 | 0x8000);
                        t22 = 0x8C2888E4;
                    }
                    t55 = t22;
                } else {
                    if (t3 == 4) {
                        t27 = *(int *)0x8C287C60;
                        t28 = *(int *)0x8C2FBEF0;
                        t29 = *(int *)((t28 + 0x1C));
                        *(unsigned int *)((t28 + 0x1C)) = (t29 - (((t27 == 0)) ? 1 : 0));
                        t30 = *(int *)0x8C287B4C;
                        if (t30 == 0) {
                            *(unsigned int *)0x8C2FBE24 = 0x1;
                            t31 = *(int *)0x8C20D154;
                            *(unsigned int *)0x8C20D14C = t31;
                            t32 = *(int *)0x8C20D158;
                            *(unsigned int *)0x8C20D150 = t32;
                            *(unsigned int *)0x8C38BA60 = 0x7F;
                            strmVoiceQueueReset();
                            t34 = *(int *)0x8C2FBC98;
                            if ((t34 & 4) != 0) {
                                t35 = *(signed char *)0x8C2FBE1C;
                                *(unsigned char *)0x8C2FBC7E = t35;
                                memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
                                BupRequestSave(0x0, 0x8C10C468, 0x8C40C2F4, 0x128);
                                *(unsigned int *)0x8C2FBE24 = 0x0;
                                fadeStart(0x1E);
                                miniStart();
                                *(unsigned int *)0x8C20D150 = 0x1;
                            } else {
                                t41 = 0x8C2FBC98;
                            }
                            t45 = t41;
                        }
                        t50 = t45;
                    }
                    t55 = t50;
                }
                t651 = t55;
            } else {
                t60 = *(int *)0x8C2FBEF0;
                t61 = *(int *)((t60 + 0x3C));
                if ((int)t61 > 0) {
                    t62 = *(int *)0x8C287C60;
                    t63 = *(int *)0x8C2FBEF0;
                    t64 = *(int *)((t63 + 0x3C));
                    *(unsigned int *)((t63 + 0x3C)) = (t64 - (((t62 == 0)) ? 1 : 0));
                    t71 = t63;
                } else {
                    t65 = *(int *)0x8C2FBEF0;
                    t66 = *(int *)((t65 + 0x3C));
                    if (t66 == 0) {
                        t67 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t67 + 0x20)) = 0x2;
                    }
                    t71 = t65;
                }
                t74 = *(int *)0x8C2FBEF0;
                t75 = *(int *)((t74 + 0x10));
                if (t75 != 0) {
                    t76 = *(int *)0x8C2FBEF0;
                    t77 = *(int *)((t76 + 0x3C));
                    if (t77 != 0) {
                        t359 = t71;
                    } else {
                        t78 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t78 + 0x20)) = 0x3;
                        t79 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t79 + 0x1C)) = 0x3C;
                        t80 = *(int *)0x8C2FBEF0;
                        t81 = *(int *)((t80 + 0x8));
                        *(unsigned int *)((t80 + 0x8)) = (t81 | 0x80);
                        *(unsigned int *)0x8C287B2C = 0x3E8;
                        strmBgmFadeOut(0x2, 0x0);
                        nlsndSeqRequest(0x1D02A9);
                        t84 = *(int *)0x8C2FBEF0;
                        t85 = *(int *)((t84 + 0x0));
                        if (t85 == 2) {
                            t86 = *(int *)0x8C2FBEF0;
                            t87 = *(int *)((t86 + 0xC));
                            *(unsigned int *)((t86 + 0xC)) = (((t87 << 2) + t87) << 2);
                        }
                        t92 = *(int *)0x8C2FBEF0;
                        t93 = *(int *)((t92 + 0xC));
                        t94 = *(int *)((t92 + 0x14));
                        if ((int)t93 >= (int)t94) {
                            t95 = *(int *)0x8C2FBE1C;
                            if ((int)t95 < (int)0x20) {
                                t96 = *(int *)0x8C2FBE1C;
                                t97 = *(int *)0x8C2FBC64;
                                if (((((int)t96 >= 0) ? (0x1 << (t96 & 31)) : ((-(int)t96 & 31) ? ((int)0x1 >> (-(int)t96 & 31)) : ((int)0x1 >> 31))) & t97) == 0) {
                                    t98 = *(int *)0x8C2FBEF0;
                                    t99 = *(int *)((t98 + 0x8));
                                    *(unsigned int *)((t98 + 0x8)) = (0x20 | t99);
                                    t100 = *(int *)0x8C2FBEF0;
                                    t101 = *(int *)((t100 + 0x0));
                                    if (t101 != 0) {
                                        if (t101 != 6) {
                                            if (t101 != 7) {
                                                if (t101 != 4) {
                                                    if (t101 != 1) {
                                                        if (t101 != 5) {
                                                            if (t101 != 3) {
                                                                t105 = 0x0;
                                                                if (t101 != 2) {
                                                                } else {
                                                                    t102 = *(int *)0x8C2FBEF0;
                                                                    t103 = *(int *)((t102 + 0x38));
                                                                    t105 = (((t103 << 2) + t103) << 1);
                                                                }
                                                                t113 = t105;
                                                            } else {
                                                                t107 = *(int *)0x8C2FBEF0;
                                                                t108 = *(int *)((t107 + 0x40));
                                                                t109 = *(int *)((t107 + 0x38));
                                                                t113 = ((t109 * (t108 + 0x1)) << 1);
                                                            }
                                                            t121 = t113;
                                                        } else {
                                                            t115 = *(int *)0x8C2FBEF0;
                                                            t116 = *(int *)0x8C2FBFD4;
                                                            t117 = *(int *)((t115 + 0x38));
                                                            t121 = (((t117 * (t116 + 0x1)) << 2) + (t117 * (t116 + 0x1)));
                                                        }
                                                        t133 = t121;
                                                    } else {
                                                        t123 = *(int *)0x8C2FBEF0;
                                                        t124 = *(int *)0x8C2FBEF0;
                                                        t125 = *(int *)((t123 + 0x40));
                                                        t126 = *(int *)((t123 + 0x38));
                                                        t127 = *(int *)((t124 + 0x3C));
                                                        t128 = (int)((int)t127 / (int)0x3C);
                                                        t133 = ((t126 * (t125 + 0x1)) * (t128 + 0x1));
                                                    }
                                                    t145 = t133;
                                                } else {
                                                    t135 = *(int *)0x8C2FBEF0;
                                                    t136 = *(int *)0x8C2FBEF0;
                                                    t137 = *(int *)((t135 + 0x40));
                                                    t138 = *(int *)((t135 + 0x38));
                                                    t139 = *(int *)((t136 + 0x3C));
                                                    t140 = (int)((int)t139 / (int)0x3C);
                                                    t145 = ((t138 * (t137 + 0x1)) * (t140 + 0x1));
                                                }
                                                t157 = t145;
                                            } else {
                                                t147 = *(int *)0x8C2FBEF0;
                                                t148 = *(int *)0x8C2FBEF0;
                                                t149 = *(int *)((t147 + 0x40));
                                                t150 = *(int *)((t147 + 0x38));
                                                t151 = *(int *)((t148 + 0x3C));
                                                t152 = (int)((int)t151 / (int)0x3C);
                                                t157 = ((t150 * (t149 + 0x1)) * (t152 + 0x1));
                                            }
                                            t169 = t157;
                                        } else {
                                            t159 = *(int *)0x8C2FBEF0;
                                            t160 = *(int *)0x8C2FBEF0;
                                            t161 = *(int *)((t159 + 0x40));
                                            t162 = *(int *)((t159 + 0x38));
                                            t163 = *(int *)((t160 + 0x3C));
                                            t164 = (int)((int)t163 / (int)0x3C);
                                            t169 = ((t162 * (t161 + 0x1)) * (t164 + 0x1));
                                        }
                                        t181 = t169;
                                    } else {
                                        t171 = *(int *)0x8C2FBEF0;
                                        t172 = *(int *)0x8C2FBEF0;
                                        t173 = *(int *)((t171 + 0x40));
                                        t174 = *(int *)((t171 + 0x38));
                                        t175 = *(int *)((t172 + 0x3C));
                                        t176 = (int)((int)t175 / (int)0x3C);
                                        t181 = ((t174 * (t173 + 0x1)) * (t176 + 0x1));
                                    }
                                    miniResultStart(t181, 0x1);
                                    circuitApplyResult();
                                } else {
                                    t185 = *(int *)0x8C2FBEF0;
                                    t186 = *(int *)((t185 + 0xC));
                                    t187 = *(int *)((t185 + 0x14));
                                    t193 = 0x0;
                                    if ((int)t186 >= (int)t187) {
                                        t188 = *(int *)0x8C2FBEF0;
                                        t189 = *(int *)((t188 + 0x8));
                                        *(unsigned int *)((t188 + 0x8)) = (0x20 | t189);
                                        t193 = 0x1;
                                    }
                                    t196 = *(int *)0x8C2FBEF0;
                                    t197 = *(int *)((t196 + 0x0));
                                    if (t197 == 3) {
                                        t198 = *(int *)0x8C2FBEF0;
                                        t199 = *(int *)((t198 + 0x38));
                                        t204 = (int)((float)t199 * 0.5f);
                                    } else {
                                        t200 = *(int *)0x8C2FBEF0;
                                        t201 = *(int *)((t200 + 0x38));
                                        t204 = t201;
                                    }
                                    miniResultStart(t204, t193);
                                }
                            } else {
                                t212 = *(int *)0x8C2FBE1C;
                                t213 = *(int *)0x8C2FBC68;
                                if (((((int)(t212 - 32) >= 0) ? (0x1 << ((t212 - 32) & 31)) : ((-(int)(t212 - 32) & 31) ? ((int)0x1 >> (-(int)(t212 - 32) & 31)) : ((int)0x1 >> 31))) & t213) == 0) {
                                    t214 = *(int *)0x8C2FBEF0;
                                    t215 = *(int *)((t214 + 0x8));
                                    *(unsigned int *)((t214 + 0x8)) = (0x20 | t215);
                                    t216 = *(int *)0x8C2FBEF0;
                                    t217 = *(int *)((t216 + 0x0));
                                    if (t217 != 0) {
                                        if (t217 != 6) {
                                            if (t217 != 7) {
                                                if (t217 != 4) {
                                                    if (t217 != 1) {
                                                        if (t217 != 5) {
                                                            if (t217 != 3) {
                                                                t221 = 0x0;
                                                                if (t217 != 2) {
                                                                } else {
                                                                    t218 = *(int *)0x8C2FBEF0;
                                                                    t219 = *(int *)((t218 + 0x38));
                                                                    t221 = (((t219 << 2) + t219) << 1);
                                                                }
                                                                t229 = t221;
                                                            } else {
                                                                t223 = *(int *)0x8C2FBEF0;
                                                                t224 = *(int *)((t223 + 0x40));
                                                                t225 = *(int *)((t223 + 0x38));
                                                                t229 = ((t225 * (t224 + 0x1)) << 1);
                                                            }
                                                            t237 = t229;
                                                        } else {
                                                            t231 = *(int *)0x8C2FBEF0;
                                                            t232 = *(int *)0x8C2FBFD4;
                                                            t233 = *(int *)((t231 + 0x38));
                                                            t237 = (((t233 * (t232 + 0x1)) << 2) + (t233 * (t232 + 0x1)));
                                                        }
                                                        t249 = t237;
                                                    } else {
                                                        t239 = *(int *)0x8C2FBEF0;
                                                        t240 = *(int *)0x8C2FBEF0;
                                                        t241 = *(int *)((t239 + 0x40));
                                                        t242 = *(int *)((t239 + 0x38));
                                                        t243 = *(int *)((t240 + 0x3C));
                                                        t244 = (int)((int)t243 / (int)0x3C);
                                                        t249 = ((t242 * (t241 + 0x1)) * (t244 + 0x1));
                                                    }
                                                    t261 = t249;
                                                } else {
                                                    t251 = *(int *)0x8C2FBEF0;
                                                    t252 = *(int *)0x8C2FBEF0;
                                                    t253 = *(int *)((t251 + 0x40));
                                                    t254 = *(int *)((t251 + 0x38));
                                                    t255 = *(int *)((t252 + 0x3C));
                                                    t256 = (int)((int)t255 / (int)0x3C);
                                                    t261 = ((t254 * (t253 + 0x1)) * (t256 + 0x1));
                                                }
                                                t273 = t261;
                                            } else {
                                                t263 = *(int *)0x8C2FBEF0;
                                                t264 = *(int *)0x8C2FBEF0;
                                                t265 = *(int *)((t263 + 0x40));
                                                t266 = *(int *)((t263 + 0x38));
                                                t267 = *(int *)((t264 + 0x3C));
                                                t268 = (int)((int)t267 / (int)0x3C);
                                                t273 = ((t266 * (t265 + 0x1)) * (t268 + 0x1));
                                            }
                                            t285 = t273;
                                        } else {
                                            t275 = *(int *)0x8C2FBEF0;
                                            t276 = *(int *)0x8C2FBEF0;
                                            t277 = *(int *)((t275 + 0x40));
                                            t278 = *(int *)((t275 + 0x38));
                                            t279 = *(int *)((t276 + 0x3C));
                                            t280 = (int)((int)t279 / (int)0x3C);
                                            t285 = ((t278 * (t277 + 0x1)) * (t280 + 0x1));
                                        }
                                        t297 = t285;
                                    } else {
                                        t287 = *(int *)0x8C2FBEF0;
                                        t288 = *(int *)0x8C2FBEF0;
                                        t289 = *(int *)((t287 + 0x40));
                                        t290 = *(int *)((t287 + 0x38));
                                        t291 = *(int *)((t288 + 0x3C));
                                        t292 = (int)((int)t291 / (int)0x3C);
                                        t297 = ((t290 * (t289 + 0x1)) * (t292 + 0x1));
                                    }
                                    miniResultStart(t297, 0x1);
                                    circuitApplyResult();
                                } else {
                                    t301 = *(int *)0x8C2FBEF0;
                                    t302 = *(int *)((t301 + 0xC));
                                    t303 = *(int *)((t301 + 0x14));
                                    t309 = 0x0;
                                    if ((int)t302 >= (int)t303) {
                                        t304 = *(int *)0x8C2FBEF0;
                                        t305 = *(int *)((t304 + 0x8));
                                        *(unsigned int *)((t304 + 0x8)) = (0x20 | t305);
                                        t309 = 0x1;
                                    }
                                    t312 = *(int *)0x8C2FBEF0;
                                    t313 = *(int *)((t312 + 0x0));
                                    if (t313 == 3) {
                                        t314 = *(int *)0x8C2FBEF0;
                                        t315 = *(int *)((t314 + 0x38));
                                        t320 = (int)((float)t315 * 0.5f);
                                    } else {
                                        t316 = *(int *)0x8C2FBEF0;
                                        t317 = *(int *)((t316 + 0x38));
                                        t320 = t317;
                                    }
                                    miniResultStart(t320, t309);
                                }
                            }
                        } else {
                            t331 = *(int *)0x8C2FBEF0;
                            t332 = *(int *)((t331 + 0xC));
                            t333 = *(int *)((t331 + 0x14));
                            t339 = 0x0;
                            if ((int)t332 >= (int)t333) {
                                t334 = *(int *)0x8C2FBEF0;
                                t335 = *(int *)((t334 + 0x8));
                                *(unsigned int *)((t334 + 0x8)) = (0x20 | t335);
                                t339 = 0x1;
                            }
                            t342 = *(int *)0x8C2FBEF0;
                            t343 = *(int *)((t342 + 0x0));
                            if (t343 == 3) {
                                t344 = *(int *)0x8C2FBEF0;
                                t345 = *(int *)((t344 + 0x38));
                                t350 = (int)((float)t345 * 0.5f);
                            } else {
                                t346 = *(int *)0x8C2FBEF0;
                                t347 = *(int *)((t346 + 0x38));
                                t350 = t347;
                            }
                            miniResultStart(t350, t339);
                        }
                    }
                    t645 = t359;
                } else {
                    t364 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t364 + 0x20)) = 0x3;
                    t365 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t365 + 0x1C)) = 0x3C;
                    t366 = *(int *)0x8C2FBEF0;
                    t367 = *(int *)((t366 + 0x8));
                    *(unsigned int *)((t366 + 0x8)) = (t367 | 0x80);
                    *(unsigned int *)0x8C287B2C = 0x3E8;
                    strmBgmFadeOut(0x2, 0x0);
                    nlsndSeqRequest(0x1D02A9);
                    t370 = *(int *)0x8C2FBEF0;
                    t371 = *(int *)((t370 + 0x0));
                    if (t371 == 2) {
                        t372 = *(int *)0x8C2FBEF0;
                        t373 = *(int *)((t372 + 0xC));
                        *(unsigned int *)((t372 + 0xC)) = (((t373 << 2) + t373) << 2);
                    }
                    t378 = *(int *)0x8C2FBEF0;
                    t379 = *(int *)((t378 + 0xC));
                    t380 = *(int *)((t378 + 0x14));
                    if ((int)t379 >= (int)t380) {
                        t381 = *(int *)0x8C2FBE1C;
                        if ((int)t381 < (int)0x20) {
                            t382 = *(int *)0x8C2FBE1C;
                            t383 = *(int *)0x8C2FBC64;
                            if (((((int)t382 >= 0) ? (0x1 << (t382 & 31)) : ((-(int)t382 & 31) ? ((int)0x1 >> (-(int)t382 & 31)) : ((int)0x1 >> 31))) & t383) == 0) {
                                t384 = *(int *)0x8C2FBEF0;
                                t385 = *(int *)((t384 + 0x8));
                                *(unsigned int *)((t384 + 0x8)) = (0x20 | t385);
                                t386 = *(int *)0x8C2FBEF0;
                                t387 = *(int *)((t386 + 0x0));
                                if (t387 != 0) {
                                    if (t387 != 6) {
                                        if (t387 != 7) {
                                            if (t387 != 4) {
                                                if (t387 != 1) {
                                                    if (t387 != 5) {
                                                        if (t387 != 3) {
                                                            t391 = 0x0;
                                                            if (t387 != 2) {
                                                            } else {
                                                                t388 = *(int *)0x8C2FBEF0;
                                                                t389 = *(int *)((t388 + 0x38));
                                                                t391 = (((t389 << 2) + t389) << 1);
                                                            }
                                                            t399 = t391;
                                                        } else {
                                                            t393 = *(int *)0x8C2FBEF0;
                                                            t394 = *(int *)((t393 + 0x40));
                                                            t395 = *(int *)((t393 + 0x38));
                                                            t399 = ((t395 * (t394 + 0x1)) << 1);
                                                        }
                                                        t407 = t399;
                                                    } else {
                                                        t401 = *(int *)0x8C2FBEF0;
                                                        t402 = *(int *)0x8C2FBFD4;
                                                        t403 = *(int *)((t401 + 0x38));
                                                        t407 = (((t403 * (t402 + 0x1)) << 2) + (t403 * (t402 + 0x1)));
                                                    }
                                                    t419 = t407;
                                                } else {
                                                    t409 = *(int *)0x8C2FBEF0;
                                                    t410 = *(int *)0x8C2FBEF0;
                                                    t411 = *(int *)((t409 + 0x40));
                                                    t412 = *(int *)((t409 + 0x38));
                                                    t413 = *(int *)((t410 + 0x3C));
                                                    t414 = (int)((int)t413 / (int)0x3C);
                                                    t419 = ((t412 * (t411 + 0x1)) * (t414 + 0x1));
                                                }
                                                t431 = t419;
                                            } else {
                                                t421 = *(int *)0x8C2FBEF0;
                                                t422 = *(int *)0x8C2FBEF0;
                                                t423 = *(int *)((t421 + 0x40));
                                                t424 = *(int *)((t421 + 0x38));
                                                t425 = *(int *)((t422 + 0x3C));
                                                t426 = (int)((int)t425 / (int)0x3C);
                                                t431 = ((t424 * (t423 + 0x1)) * (t426 + 0x1));
                                            }
                                            t443 = t431;
                                        } else {
                                            t433 = *(int *)0x8C2FBEF0;
                                            t434 = *(int *)0x8C2FBEF0;
                                            t435 = *(int *)((t433 + 0x40));
                                            t436 = *(int *)((t433 + 0x38));
                                            t437 = *(int *)((t434 + 0x3C));
                                            t438 = (int)((int)t437 / (int)0x3C);
                                            t443 = ((t436 * (t435 + 0x1)) * (t438 + 0x1));
                                        }
                                        t455 = t443;
                                    } else {
                                        t445 = *(int *)0x8C2FBEF0;
                                        t446 = *(int *)0x8C2FBEF0;
                                        t447 = *(int *)((t445 + 0x40));
                                        t448 = *(int *)((t445 + 0x38));
                                        t449 = *(int *)((t446 + 0x3C));
                                        t450 = (int)((int)t449 / (int)0x3C);
                                        t455 = ((t448 * (t447 + 0x1)) * (t450 + 0x1));
                                    }
                                    t467 = t455;
                                } else {
                                    t457 = *(int *)0x8C2FBEF0;
                                    t458 = *(int *)0x8C2FBEF0;
                                    t459 = *(int *)((t457 + 0x40));
                                    t460 = *(int *)((t457 + 0x38));
                                    t461 = *(int *)((t458 + 0x3C));
                                    t462 = (int)((int)t461 / (int)0x3C);
                                    t467 = ((t460 * (t459 + 0x1)) * (t462 + 0x1));
                                }
                                miniResultStart(t467, 0x1);
                                circuitApplyResult();
                            } else {
                                t471 = *(int *)0x8C2FBEF0;
                                t472 = *(int *)((t471 + 0xC));
                                t473 = *(int *)((t471 + 0x14));
                                t479 = 0x0;
                                if ((int)t472 >= (int)t473) {
                                    t474 = *(int *)0x8C2FBEF0;
                                    t475 = *(int *)((t474 + 0x8));
                                    *(unsigned int *)((t474 + 0x8)) = (0x20 | t475);
                                    t479 = 0x1;
                                }
                                t482 = *(int *)0x8C2FBEF0;
                                t483 = *(int *)((t482 + 0x0));
                                if (t483 == 3) {
                                    t484 = *(int *)0x8C2FBEF0;
                                    t485 = *(int *)((t484 + 0x38));
                                    t490 = (int)((float)t485 * 0.5f);
                                } else {
                                    t486 = *(int *)0x8C2FBEF0;
                                    t487 = *(int *)((t486 + 0x38));
                                    t490 = t487;
                                }
                                miniResultStart(t490, t479);
                            }
                        } else {
                            t498 = *(int *)0x8C2FBE1C;
                            t499 = *(int *)0x8C2FBC68;
                            if (((((int)(t498 - 32) >= 0) ? (0x1 << ((t498 - 32) & 31)) : ((-(int)(t498 - 32) & 31) ? ((int)0x1 >> (-(int)(t498 - 32) & 31)) : ((int)0x1 >> 31))) & t499) == 0) {
                                t500 = *(int *)0x8C2FBEF0;
                                t501 = *(int *)((t500 + 0x8));
                                *(unsigned int *)((t500 + 0x8)) = (0x20 | t501);
                                t502 = *(int *)0x8C2FBEF0;
                                t503 = *(int *)((t502 + 0x0));
                                if (t503 != 0) {
                                    if (t503 != 6) {
                                        if (t503 != 7) {
                                            if (t503 != 4) {
                                                if (t503 != 1) {
                                                    if (t503 != 5) {
                                                        if (t503 != 3) {
                                                            t507 = 0x0;
                                                            if (t503 != 2) {
                                                            } else {
                                                                t504 = *(int *)0x8C2FBEF0;
                                                                t505 = *(int *)((t504 + 0x38));
                                                                t507 = (((t505 << 2) + t505) << 1);
                                                            }
                                                            t515 = t507;
                                                        } else {
                                                            t509 = *(int *)0x8C2FBEF0;
                                                            t510 = *(int *)((t509 + 0x40));
                                                            t511 = *(int *)((t509 + 0x38));
                                                            t515 = ((t511 * (t510 + 0x1)) << 1);
                                                        }
                                                        t523 = t515;
                                                    } else {
                                                        t517 = *(int *)0x8C2FBEF0;
                                                        t518 = *(int *)0x8C2FBFD4;
                                                        t519 = *(int *)((t517 + 0x38));
                                                        t523 = (((t519 * (t518 + 0x1)) << 2) + (t519 * (t518 + 0x1)));
                                                    }
                                                    t535 = t523;
                                                } else {
                                                    t525 = *(int *)0x8C2FBEF0;
                                                    t526 = *(int *)0x8C2FBEF0;
                                                    t527 = *(int *)((t525 + 0x40));
                                                    t528 = *(int *)((t525 + 0x38));
                                                    t529 = *(int *)((t526 + 0x3C));
                                                    t530 = (int)((int)t529 / (int)0x3C);
                                                    t535 = ((t528 * (t527 + 0x1)) * (t530 + 0x1));
                                                }
                                                t547 = t535;
                                            } else {
                                                t537 = *(int *)0x8C2FBEF0;
                                                t538 = *(int *)0x8C2FBEF0;
                                                t539 = *(int *)((t537 + 0x40));
                                                t540 = *(int *)((t537 + 0x38));
                                                t541 = *(int *)((t538 + 0x3C));
                                                t542 = (int)((int)t541 / (int)0x3C);
                                                t547 = ((t540 * (t539 + 0x1)) * (t542 + 0x1));
                                            }
                                            t559 = t547;
                                        } else {
                                            t549 = *(int *)0x8C2FBEF0;
                                            t550 = *(int *)0x8C2FBEF0;
                                            t551 = *(int *)((t549 + 0x40));
                                            t552 = *(int *)((t549 + 0x38));
                                            t553 = *(int *)((t550 + 0x3C));
                                            t554 = (int)((int)t553 / (int)0x3C);
                                            t559 = ((t552 * (t551 + 0x1)) * (t554 + 0x1));
                                        }
                                        t571 = t559;
                                    } else {
                                        t561 = *(int *)0x8C2FBEF0;
                                        t562 = *(int *)0x8C2FBEF0;
                                        t563 = *(int *)((t561 + 0x40));
                                        t564 = *(int *)((t561 + 0x38));
                                        t565 = *(int *)((t562 + 0x3C));
                                        t566 = (int)((int)t565 / (int)0x3C);
                                        t571 = ((t564 * (t563 + 0x1)) * (t566 + 0x1));
                                    }
                                    t583 = t571;
                                } else {
                                    t573 = *(int *)0x8C2FBEF0;
                                    t574 = *(int *)0x8C2FBEF0;
                                    t575 = *(int *)((t573 + 0x40));
                                    t576 = *(int *)((t573 + 0x38));
                                    t577 = *(int *)((t574 + 0x3C));
                                    t578 = (int)((int)t577 / (int)0x3C);
                                    t583 = ((t576 * (t575 + 0x1)) * (t578 + 0x1));
                                }
                                miniResultStart(t583, 0x1);
                                circuitApplyResult();
                            } else {
                                t587 = *(int *)0x8C2FBEF0;
                                t588 = *(int *)((t587 + 0xC));
                                t589 = *(int *)((t587 + 0x14));
                                t595 = 0x0;
                                if ((int)t588 >= (int)t589) {
                                    t590 = *(int *)0x8C2FBEF0;
                                    t591 = *(int *)((t590 + 0x8));
                                    *(unsigned int *)((t590 + 0x8)) = (0x20 | t591);
                                    t595 = 0x1;
                                }
                                t598 = *(int *)0x8C2FBEF0;
                                t599 = *(int *)((t598 + 0x0));
                                if (t599 == 3) {
                                    t600 = *(int *)0x8C2FBEF0;
                                    t601 = *(int *)((t600 + 0x38));
                                    t606 = (int)((float)t601 * 0.5f);
                                } else {
                                    t602 = *(int *)0x8C2FBEF0;
                                    t603 = *(int *)((t602 + 0x38));
                                    t606 = t603;
                                }
                                miniResultStart(t606, t595);
                            }
                        }
                    } else {
                        t617 = *(int *)0x8C2FBEF0;
                        t618 = *(int *)((t617 + 0xC));
                        t619 = *(int *)((t617 + 0x14));
                        t625 = 0x0;
                        if ((int)t618 >= (int)t619) {
                            t620 = *(int *)0x8C2FBEF0;
                            t621 = *(int *)((t620 + 0x8));
                            *(unsigned int *)((t620 + 0x8)) = (0x20 | t621);
                            t625 = 0x1;
                        }
                        t628 = *(int *)0x8C2FBEF0;
                        t629 = *(int *)((t628 + 0x0));
                        if (t629 == 3) {
                            t630 = *(int *)0x8C2FBEF0;
                            t631 = *(int *)((t630 + 0x38));
                            t636 = (int)((float)t631 * 0.5f);
                        } else {
                            t632 = *(int *)0x8C2FBEF0;
                            t633 = *(int *)((t632 + 0x38));
                            t636 = t633;
                        }
                        miniResultStart(t636, t625);
                    }
                }
                t651 = t645;
            }
            t694 = t651;
        } else {
            t657 = *(int *)0x8C287C60;
            t658 = *(int *)0x8C2FBEF0;
            t659 = *(int *)((t658 + 0x18));
            *(unsigned int *)((t658 + 0x18)) = (t659 + (((t657 == 0)) ? 1 : 0));
            t660 = *(int *)0x8C2FBEF0;
            t661 = *(int *)((t660 + 0x3C));
            if ((int)t661 > 0) {
                t662 = *(int *)0x8C287C60;
                t663 = *(int *)0x8C2FBEF0;
                t664 = *(int *)((t663 + 0x3C));
                *(unsigned int *)((t663 + 0x3C)) = (t664 - (((t662 == 0)) ? 1 : 0));
                u665 = *(float *)0x8C23D204;
                if (!(u665 > 1.0f)) {
                    t677 = t663;
                } else {
                    t666 = *(int *)0x8C2FBEF0;
                    t667 = *(int *)((t666 + 0x3C));
                    t668 = (int)((int)t667 % (int)0x6);
                    if (t668 != 5) {
                    } else {
                        t669 = *(int *)0x8C287C60;
                        t670 = *(int *)0x8C2FBEF0;
                        t671 = *(int *)((t670 + 0x3C));
                        *(unsigned int *)((t670 + 0x3C)) = (t671 - (((t669 == 0)) ? 1 : 0));
                    }
                }
                t687 = t677;
            } else {
                t681 = *(int *)0x8C2FBEF0;
                t682 = *(int *)((t681 + 0x3C));
                if (t682 != 0) {
                } else {
                    t683 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t683 + 0x20)) = 0x2;
                }
                t687 = t681;
            }
            t694 = t687;
        }
        t709 = t694;
    } else {
        t702 = *(int *)0x8C287B44;
        if (t702 == 7) {
        } else {
            t703 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t703 + 0x20)) = 0x1;
            miniPlacePlayers();
        }
    }
    t717 = *(int *)0x8C2FBEF0;
    t718 = *(int *)((t717 + 0x0));
    if (t718 != 1) {
        if (t718 != 0) {
            if (t718 != 5) {
                if (t718 != 3) {
                    if (t718 == 6) {
                        return ((int (*)(int))(0x8C036EDE))(0x8C2FBF54);
                    }
                    if (t718 == 2) {
                        return ((int (*)(int))(0x8C036F20))(0x8C2FBF54);
                    }
                    if (t718 == 7) {
                        return ((int (*)(int))(0x8C036F34))(0x8C2FBF54);
                    }
                    return ((int (*)(int))(0x8C036F9E))(0x8C2FBF54);
                }
                return ((int (*)(int))(0x8C036ECA))(0x8C2FBF54);
            }
            t719 = *(int *)0x8C2FBEF0;
            t720 = *(int *)((t719 + 0x20));
            if (t720 != 1) {
                return ((int (*)(int))(0x8C036F9E))(0x8C2FBF54);
            }
            t721 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t721 + 0xC)) = 0x0;
            t722 = t720;
            t723 = t709;
            t724 = 0x0;
            for (;;) {
                t725 = *(int *)0x8C2FBEF0;
                t726 = *(int *)((t725 + 0x14));
                if ((int)t724 >= (int)t726) {
                    break;
                }
                t722 = t724;
                t722 = (t722 << 2);
                t727 = *(int *)((0x8C2FBF54 + t722));
                t724 = (t724 + 0x1);
                if (t727 != 0) {
                    t728 = *(int *)0x8C2FBEF0;
                    t723 = t728;
                    t729 = *(int *)((t723 + 0xC));
                    *(unsigned int *)((t723 + 0xC)) = (t729 + 0x1);
                }
            }
            t732 = *(int *)0x8C2FBEF0;
            t733 = *(int *)((t732 + 0xC));
            t734 = *(int *)((t732 + 0x14));
            if (t733 == t734) {
                t735 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t735 + 0x3C)) = 0x0;
                return ((int (*)(int, int))(0x8C036F1A))(0x8C2FBF54, t724);
            }
            return ((int (*)(int, int))(0x8C036F9E))(0x8C2FBF54, t724);
        }
        t736 = *(int *)0x8C2FBEF0;
        t737 = *(int *)((t736 + 0x20));
        if (t737 != 1) {
            return ((int (*)(int))(0x8C036F9E))(0x8C2FBF54);
        }
        t738 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t738 + 0xC)) = 0x0;
        t739 = t737;
        t740 = t709;
        t741 = 0x0;
        for (;;) {
            t742 = *(int *)0x8C2FBEF0;
            t743 = *(int *)((t742 + 0x14));
            if ((int)t741 >= (int)t743) {
                break;
            }
            t739 = t741;
            t739 = (t739 << 2);
            t744 = *(int *)((0x8C2FBF54 + t739));
            t741 = (t741 + 0x1);
            if (t744 != 0) {
                t745 = *(int *)0x8C2FBEF0;
                t740 = t745;
                t746 = *(int *)((t740 + 0xC));
                *(unsigned int *)((t740 + 0xC)) = (t746 + 0x1);
            }
        }
        return ((int (*)(int, int))(0x8C036F0A))(0x8C2FBF54, t741);
    }
    return miniWallTargetsHit();
}
