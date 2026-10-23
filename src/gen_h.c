/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuSglServe(int a4);

int cpuSglServe(int a4)
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
    int t9;
    int t11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t28;
    int t34;
    int t35;
    int t36;
    int t37;
    float u38;
    float u39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t45;
    int t46;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t60;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t116;
    int t117;
    int t119;
    int t120;
    int t121;
    int t123;
    int t124;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t133;
    int t134;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t143;
    float u144;
    int t150;
    int t145;
    float u146;
    int t147;
    int t153;
    int t154;
    int t155;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t226;
    int t227;
    int t228;
    int t229;
    int t230;
    int t232;
    int t233;
    int t234;
    int t235;
    int t237;
    int t238;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t245;
    int t246;
    int t247;
    int t249;
    int t250;
    int t251;
    int t252;
    int t254;
    int t255;
    int t256;
    int t257;
    int t258;
    int t259;
    int t261;
    int t262;
    int t263;
    int t264;
    int t266;
    int t267;
    int t268;
    int t269;
    int t272;
    int t273;
    int t275;
    int t276;
    int t317;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t324;
    int t325;
    int t327;
    int t328;
    int t329;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    int t336;
    int t337;
    int t338;
    int t339;
    int t341;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t348;
    int t349;
    int t350;
    int t351;
    int t353;
    int t354;
    int t355;
    int t356;
    int t359;
    int t360;
    int t362;
    int t363;
    int t395;
    int t396;
    int t397;
    int t398;
    int t400;
    int t401;
    int t403;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t410;
    int t412;
    int t413;
    int t414;
    int t415;
    int t417;
    int t418;
    int t419;
    int t420;
    int t421;
    int t422;
    int t424;
    int t425;
    int t426;
    int t427;
    int t429;
    int t430;
    int t431;
    int t432;
    int t435;
    int t436;
    int t438;
    int t439;
    int t489;
    int t490;
    int t491;
    int t492;
    int t494;
    int t495;
    int t496;
    int t497;
    int t499;
    int t500;
    int t501;
    int t502;
    int t503;
    int t504;
    int t505;
    int t506;
    int t508;
    int t509;
    int t511;
    int t512;
    int t514;
    int t515;
    int t516;
    int t517;
    int t520;
    int t521;
    int t523;
    int t524;
    float u598;
    int t599;
    int t600;
    int t605;
    int t606;
    int t607;
    int t608;
    int t609;
    int t610;
    int t611;
    int t612;
    int t613;
    int t614;
    int t615;
    int t616;
    int t617;
    int t647;
    int t648;
    int t649;
    int t650;
    int t591;
    int t580;
    int t57;
    int t62;
    int t569;
    int t560;
    int t484;
    int t312;
    int t303;
    int t294;
    int t285;
    int t270;
    int t475;
    int t390;
    int t381;
    int t372;
    int t357;
    int t466;
    int t457;
    int t448;
    int t433;
    int t551;
    int t542;
    int t533;
    int t518;
    int t603;
    int t645;
    int t639;
    int t633;
    int t627;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = 0x8C287ACC;
    t0 = *(int *)(((int)stk + 28));
    t1 = *(int *)((t0 + 0xB5C));
    *(unsigned int *)(((int)stk + 20)) = ((t1 * 0x160) + 0x8C2FC69C);
    t2 = *(int *)0x8C287B3C;
    if ((t2 & 0x4000) != 0) {
        t3 = *(int *)(((int)stk + 24));
        t4 = *(int *)(((int)stk + 24));
        t5 = *(int *)(((t3 + 0x44) + 0x0));
        t6 = *(int *)((t4 + 0x48));
        t7 = (int)((int)((t5 + t6) + 0x6) % (int)0x6);
        t8 = (int)((unsigned int)t7 + (unsigned int)0x0);
        t9 = (int)((unsigned int)t8 + ((((int)0x0 > (int)t7)) ? 1u : 0u));
        t11 = ((~(((~((t9 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t9 >> 1) + 0x2) >= 0) {
            t11 = (((t9 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((((-t11) + 0x1) << 1) - 1);
    } else {
        t13 = *(int *)(((int)stk + 24));
        t14 = *(int *)(((int)stk + 24));
        t15 = *(int *)(((0x48 + t13) + 0x0));
        t16 = *(int *)(((t14 + 0x44) + 0x0));
        t17 = ((~(((~((t16 + t15) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t16 + t15) + 0x2) >= 0) {
            t17 = (((t16 + t15) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((-(t17 << 1)) + 0x1);
        t19 = *(int *)(((int)stk + 24));
        t20 = *(int *)(((int)stk + 24));
        t21 = *(int *)((t19 + 0x38));
        t22 = *(int *)((t20 + 0x34));
        t23 = (int)((unsigned int)(t22 + t21) + (unsigned int)0x0);
        t24 = (int)((unsigned int)t23 + ((((int)0x0 > (int)(t22 + t21))) ? 1u : 0u));
        t26 = ((~(((~((t24 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t24 >> 1) + 0x2) >= 0) {
            t26 = (((t24 >> 1) + 0x2) & 0x1);
        }
        t28 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t28 * ((-(t26 << 1)) + 0x1));
    }
    t34 = *(int *)(((int)stk + 20));
    *(unsigned short *)((t34 + 0x1E)) = 0x0;
    t35 = *(int *)(((int)stk + 20));
    *(unsigned short *)((t35 + 0x20)) = 0x0;
    t36 = *(int *)(((int)stk + 28));
    t37 = *(int *)((0xB68 + t36));
    if (t37 != 0) {
        if (t37 == 1) {
            return ((int (*)(int))(0x8C047890))(a4);
        }
        if (t37 != 2) {
            if (t37 == 5) {
                return ((int (*)(int))(0x8C0477C2))(a4);
            }
            if (t37 == 6) {
                return ((int (*)(int))(0x8C0477C2))(a4);
            }
            if (t37 == 7) {
                return ((int (*)(int))(0x8C0477C2))(a4);
            }
            return ((int (*)(int))(0x8C047890))(a4);
        }
        u38 = *(float *)0x8C23D204;
        u39 = *(float *)0x8C2FD900;
        *(float *)0x8C2FD900 = (u39 - u38);
        if (!(0.0f > (u39 - u38))) {
            return ((int (*)(int))(0x8C047890))(a4);
        }
        t40 = *(int *)(((int)stk + 20));
        *(unsigned short *)((t40 + 0x1E)) = 0x1;
        t41 = *(int *)0x8C421F60;
        if (t41 != 0) {
            t42 = nlRand();
            t43 = ((~(((~t42) + 0x1) & 0x1)) + 0x1);
            if ((int)t42 >= 0) {
                t43 = (t42 & 0x1);
            }
            *(unsigned int *)(((int)stk + 16)) = (t43 + 0x1);
            t45 = nlRand();
            t46 = ((~(((~t45) + 0x1) & 0x1)) + 0x1);
            if ((int)t45 >= 0) {
                t46 = (t45 & 0x1);
            }
            *(unsigned int *)0x8C2FD8EC = ((t46 << 1) - 1);
            t48 = nlRand();
            t49 = (int)((int)t48 % (int)0x32);
            *(float *)0x8C2FD8F4 = (float)(t49 + 0x32);
            *(unsigned int *)0x8C2FD8F0 = 0x0;
            *(float *)0x8C2FD8F8 = 0.0f;
            *(unsigned char *)0x8C2FD8FC = 0x1;
        } else {
            t50 = *(int *)0x8C159FA0;
            if (t50 != 0) {
                *(unsigned char *)0x8C2FD8FC = 0x0;
                *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                t51 = *(int *)(((int)stk + 20));
                *(unsigned short *)((t51 + 0x1E)) = 0x3;
                t52 = *(int *)(((int)stk + 20));
                *(unsigned short *)((t52 + 0x20)) = 0x20;
                t53 = nlRand();
                t54 = (int)((int)t53 % (int)0x3);
                if (t54 != 0) {
                    t55 = *(int *)(((int)stk + 12));
                    if ((int)t55 > 0) {
                        *(float *)0x8C2FD8F4 = 200.0f;
                        *(float *)0x8C2FD8F8 = 48.0f;
                        t57 = 0xFFFFFFFF;
                    } else {
                        *(float *)0x8C2FD8F4 = 200.0f;
                        *(float *)0x8C2FD8F8 = 43.0f;
                        t57 = 0x1;
                    }
                    *(unsigned int *)0x8C2FD8EC = t57;
                } else {
                    t60 = *(int *)(((int)stk + 12));
                    if ((int)t60 > 0) {
                        *(float *)0x8C2FD8F4 = 200.0f;
                        *(float *)0x8C2FD8F8 = 39.0f;
                        t62 = 0x1;
                    } else {
                        *(float *)0x8C2FD8F4 = 200.0f;
                        *(float *)0x8C2FD8F8 = 41.0f;
                        t62 = 0xFFFFFFFF;
                    }
                    *(unsigned int *)0x8C2FD8EC = t62;
                }
                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
            } else {
                t68 = *(int *)0x8C20D14C;
                if (t68 != 6) {
                    t69 = *(int *)0x8C2FCC1C;
                    if ((int)t69 < (int)0x4) {
                        t70 = *(int *)0x8C2FCC1C;
                        t71 = nlRand();
                        t72 = (int)((int)t71 % (int)0xA);
                        *(unsigned int *)(((int)stk + 16)) = (((-t70) + t72) + 0xF);
                        t73 = nlRand();
                        t74 = ((~(((~t73) + 0x1) & 0x1)) + 0x1);
                        if ((int)t73 >= 0) {
                            t74 = (t73 & 0x1);
                        }
                        *(unsigned int *)0x8C2FD8EC = ((t74 << 1) - 1);
                        t76 = nlRand();
                        t77 = *(int *)0x8C2FCC1C;
                        t78 = (int)((int)t76 % (int)((((t77 << 2) + t77) << 1) + 0x14));
                        *(float *)0x8C2FD8F4 = (float)t78;
                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                        t79 = nlRand();
                        t80 = *(int *)0x8C2FCC1C;
                        t81 = (int)((int)t79 % (int)(((t80 << 2) + t80) + 0xA));
                        *(float *)0x8C2FD8F8 = (float)t81;
                        *(unsigned char *)0x8C2FD8FC = 0x1;
                    } else {
                        t82 = *(int *)0x8C2FCC1C;
                        if ((int)t82 < (int)0x6) {
                            t83 = *(int *)0x8C2FCC1C;
                            t84 = nlRand();
                            t85 = (int)((int)t84 % (int)0x3);
                            *(unsigned int *)(((int)stk + 16)) = (((-t83) + t85) + 0xA);
                            t86 = nlRand();
                            t87 = ((~(((~t86) + 0x1) & 0x1)) + 0x1);
                            if ((int)t86 >= 0) {
                                t87 = (t86 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD8EC = ((t87 << 1) - 1);
                            t89 = nlRand();
                            t90 = *(int *)0x8C2FCC1C;
                            t91 = (int)((int)t89 % (int)((((t90 << 2) + t90) << 1) + 0x14));
                            *(float *)0x8C2FD8F4 = (float)(t91 + 0x32);
                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                            t92 = nlRand();
                            t93 = (int)((int)t92 % (int)0x5);
                            *(float *)0x8C2FD8F8 = (float)t93;
                            t94 = nlRand();
                            t95 = ((~(((~t94) + 0x1) & 0x1)) + 0x1);
                            if ((int)t94 >= 0) {
                                t95 = (t94 & 0x1);
                            }
                            *(unsigned char *)0x8C2FD8FC = (t95 + 0x1);
                        } else {
                            t97 = *(int *)0x8C2FCC1C;
                            if ((int)t97 < (int)0x6) {
                                t98 = nlRand();
                                t99 = (int)((int)t98 % (int)0x3);
                                *(unsigned int *)(((int)stk + 16)) = t99;
                                t100 = nlRand();
                                t101 = ((~(((~t100) + 0x1) & 0x1)) + 0x1);
                                if ((int)t100 >= 0) {
                                    t101 = (t100 & 0x1);
                                }
                                *(unsigned int *)0x8C2FD8EC = ((t101 << 1) - 1);
                                t103 = nlRand();
                                t104 = *(int *)0x8C2FCC1C;
                                t105 = (int)((int)t103 % (int)((((t104 << 2) + t104) << 1) + 0x14));
                                *(float *)0x8C2FD8F4 = (float)(t105 + 0x46);
                                t106 = *(int *)(((int)stk + 16));
                                if (t106 == 0) {
                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                } else {
                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                    t107 = nlRand();
                                    t108 = (int)((int)t107 % (int)0x5);
                                    *(float *)0x8C2FD8F8 = (float)t108;
                                }
                                t116 = nlRand();
                                t117 = ((~(((~t116) + 0x1) & 0x1)) + 0x1);
                                if ((int)t116 >= 0) {
                                    t117 = (t116 & 0x1);
                                }
                                *(unsigned char *)0x8C2FD8FC = (t117 + 0x1);
                            } else {
                                t119 = *(int *)0x8C287D5C;
                                if (t119 != 0) {
                                    t120 = nlRand();
                                    t121 = ((~(((~t120) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t120 >= 0) {
                                        t121 = (t120 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = t121;
                                    t123 = nlRand();
                                    t124 = ((~(((~t123) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t123 >= 0) {
                                        t124 = (t123 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t124 << 1) - 1);
                                    t126 = nlRand();
                                    t127 = (int)((int)t126 % (int)0x1E);
                                    *(float *)0x8C2FD8F4 = (float)(t127 + 0x50);
                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    t128 = *(int *)(((int)stk + 28));
                                    t129 = *(int *)((0xC58 + t128));
                                    if (t129 != 16) {
                                        t130 = nlRand();
                                        t131 = ((~(((~t130) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t130 >= 0) {
                                            t131 = (t130 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = t131;
                                        t133 = nlRand();
                                        t134 = ((~(((~t133) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t133 >= 0) {
                                            t134 = (t133 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t134 << 1) - 1);
                                        t136 = nlRand();
                                        t137 = (int)((int)t136 % (int)0x1E);
                                        *(float *)0x8C2FD8F4 = (float)(t137 + 0x50);
                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                        *(float *)0x8C2FD8F8 = 0.0f;
                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                    } else {
                                        t138 = nlRand();
                                        t139 = (int)((int)t138 % (int)0xA);
                                        *(unsigned int *)(((int)stk + 8)) = t139;
                                        if ((int)t139 < (int)0x5) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                            t140 = nlRand();
                                            t141 = ((~(((~t140) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t140 >= 0) {
                                                t141 = (t140 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t141 << 1) - 1);
                                            *(float *)0x8C2FD8F4 = 100.0f;
                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        } else {
                                            if ((int)t139 < (int)0x7) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                t143 = *(int *)(((int)stk + 28));
                                                u144 = *(float *)((t143 + 0xB00));
                                                t150 = 0x1;
                                                if (u144 > 0.0f) {
                                                } else {
                                                    t145 = *(int *)(((int)stk + 28));
                                                    u146 = *(float *)((t145 + 0xB00));
                                                    t147 = 0x0;
                                                    if (0.0f > u146) {
                                                        t147 = 0xFFFFFFFF;
                                                    }
                                                    t150 = t147;
                                                }
                                                t153 = *(int *)(((int)stk + 12));
                                                *(unsigned int *)0x8C2FD8EC = (-(t150 * t153));
                                                *(float *)0x8C2FD8F4 = 100.0f;
                                                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                *(float *)0x8C2FD8F8 = 3.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                if ((int)t139 < (int)0x9) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    *(unsigned int *)0x8C2FD8EC = 0x1;
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                    *(float *)0x8C2FD8F8 = 0.0f;
                                                    *(unsigned char *)0x8C2FD8FC = 0x2;
                                                } else {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                    t154 = nlRand();
                                                    t155 = ((~(((~t154) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t154 >= 0) {
                                                        t155 = (t154 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t155 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = 10.0f;
                                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t221 = *(int *)(((int)stk + 28));
                    t222 = *(int *)(((int)stk + 20));
                    t223 = *(int *)(((0xC58 + t221) + 0x0));
                    t224 = *(int *)(((t223 << 2) + 0x8C159F50));
                    *(unsigned char *)(((0x12B + t222) + 0x0)) = t224;
                    t225 = *(int *)0x8C2FCC20;
                    if (t225 != 0) {
                        t226 = *(int *)0x8C2FCC20;
                        if (t226 != 1) {
                            if (t226 != 2) {
                                t227 = nlRand();
                                t228 = (int)((int)t227 % (int)0x3);
                                *(unsigned int *)(((int)stk + 16)) = t228;
                                t229 = nlRand();
                                t230 = ((~(((~t229) + 0x1) & 0x1)) + 0x1);
                                if ((int)t229 >= 0) {
                                    t230 = (t229 & 0x1);
                                }
                                *(unsigned int *)0x8C2FD8EC = ((t230 << 1) - 1);
                                *(float *)0x8C2FD8F4 = 100.0f;
                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                *(float *)0x8C2FD8F8 = 0.0f;
                                *(unsigned char *)0x8C2FD8FC = 0x1;
                            } else {
                                t232 = *(int *)(((int)stk + 28));
                                t233 = *(int *)((t232 + 0xC58));
                                if (((((int)t233 >= 0) ? (0x1 << (t233 & 31)) : ((-(int)t233 & 31) ? ((int)0x1 >> (-(int)t233 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                    t234 = nlRand();
                                    t235 = ((~(((~t234) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t234 >= 0) {
                                        t235 = (t234 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = t235;
                                    t237 = nlRand();
                                    t238 = ((~(((~t237) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t237 >= 0) {
                                        t238 = (t237 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t238 << 1) - 1);
                                    t240 = nlRand();
                                    t241 = (int)((int)t240 % (int)0x1E);
                                    *(float *)0x8C2FD8F4 = (float)(t241 + 0x14);
                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    t242 = *(int *)(((int)stk + 28));
                                    t243 = *(int *)((t242 + 0xC58));
                                    if (((((int)t243 >= 0) ? (0x1 << (t243 & 31)) : ((-(int)t243 & 31) ? ((int)0x1 >> (-(int)t243 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                        t244 = nlRand();
                                        t245 = (int)((int)t244 % (int)0xA);
                                        *(unsigned int *)(((int)stk + 16)) = (t245 + 0xA);
                                        t246 = nlRand();
                                        t247 = ((~(((~t246) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t246 >= 0) {
                                            t247 = (t246 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t247 << 1) - 1);
                                        *(float *)0x8C2FD8F4 = 100.0f;
                                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                        t249 = nlRand();
                                        t250 = (int)((int)t249 % (int)0xF);
                                        *(float *)0x8C2FD8F8 = (float)(t250 + 0xA);
                                        t251 = nlRand();
                                        t252 = ((~(((~t251) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t251 >= 0) {
                                            t252 = (t251 & 0x1);
                                        }
                                        *(unsigned char *)0x8C2FD8FC = (t252 + 0x1);
                                    } else {
                                        t254 = *(int *)(((int)stk + 28));
                                        t255 = *(int *)((t254 + 0xC58));
                                        if (((((int)t255 >= 0) ? (0x1 << (t255 & 31)) : ((-(int)t255 & 31) ? ((int)0x1 >> (-(int)t255 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                            t285 = a4;
                                        } else {
                                            t256 = nlRand();
                                            t257 = (int)((int)t256 % (int)0x5);
                                            if (t257 == 0) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                t258 = nlRand();
                                                t259 = ((~(((~t258) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t258 >= 0) {
                                                    t259 = (t258 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t259 << 1) - 1);
                                                t261 = nlRand();
                                                t262 = (int)((int)t261 % (int)0x32);
                                                *(float *)0x8C2FD8F4 = (float)(t262 + 0x32);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            } else {
                                                t263 = nlRand();
                                                t264 = ((~(((~t263) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t263 >= 0) {
                                                    t264 = (t263 & 0x1);
                                                }
                                                if (t264 != 0) {
                                                    t266 = nlRand();
                                                    t267 = (int)((int)t266 % (int)0x3);
                                                    t270 = ((-t267) - 1);
                                                } else {
                                                    t268 = nlRand();
                                                    t269 = (int)((int)t268 % (int)0x3);
                                                    t270 = (t269 + 0x3);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t270;
                                                t272 = nlRand();
                                                t273 = ((~(((~t272) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t272 >= 0) {
                                                    t273 = (t272 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t273 << 1) - 1);
                                                t275 = nlRand();
                                                t276 = (int)((int)t275 % (int)0x64);
                                                *(float *)0x8C2FD8F4 = (float)t276;
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            }
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        }
                                        t294 = t285;
                                    }
                                    t303 = t294;
                                }
                                t312 = t303;
                            }
                            t484 = t312;
                        } else {
                            t317 = *(int *)(((int)stk + 28));
                            t318 = *(int *)((t317 + 0xC58));
                            if ((int)t318 > (int)0x7) {
                                t319 = *(int *)(((int)stk + 28));
                                t320 = *(int *)((0xC58 + t319));
                                if (((((int)t320 >= 0) ? (0x1 << (t320 & 31)) : ((-(int)t320 & 31) ? ((int)0x1 >> (-(int)t320 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                    t321 = nlRand();
                                    t322 = ((~(((~t321) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t321 >= 0) {
                                        t322 = (t321 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = (t322 + 0x1);
                                    t324 = nlRand();
                                    t325 = ((~(((~t324) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t324 >= 0) {
                                        t325 = (t324 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t325 << 1) - 1);
                                    t327 = nlRand();
                                    t328 = (int)((int)t327 % (int)0x1E);
                                    *(float *)0x8C2FD8F4 = (float)(t328 + 0x14);
                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    t329 = *(int *)(((int)stk + 28));
                                    t330 = *(int *)((t329 + 0xC58));
                                    if (((((int)t330 >= 0) ? (0x1 << (t330 & 31)) : ((-(int)t330 & 31) ? ((int)0x1 >> (-(int)t330 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                        t331 = nlRand();
                                        t332 = (int)((int)t331 % (int)0xD);
                                        *(unsigned int *)(((int)stk + 16)) = (t332 + 0x5);
                                        t333 = nlRand();
                                        t334 = ((~(((~t333) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t333 >= 0) {
                                            t334 = (t333 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t334 << 1) - 1);
                                        *(float *)0x8C2FD8F4 = 100.0f;
                                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                        t336 = nlRand();
                                        t337 = (int)((int)t336 % (int)0xA);
                                        *(float *)0x8C2FD8F8 = (float)t337;
                                        t338 = nlRand();
                                        t339 = ((~(((~t338) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t338 >= 0) {
                                            t339 = (t338 & 0x1);
                                        }
                                        *(unsigned char *)0x8C2FD8FC = (t339 + 0x1);
                                    } else {
                                        t341 = *(int *)(((int)stk + 28));
                                        t342 = *(int *)((t341 + 0xC58));
                                        if (((((int)t342 >= 0) ? (0x1 << (t342 & 31)) : ((-(int)t342 & 31) ? ((int)0x1 >> (-(int)t342 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                            t372 = a4;
                                        } else {
                                            t343 = nlRand();
                                            t344 = (int)((int)t343 % (int)0x5);
                                            if (t344 == 0) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                t345 = nlRand();
                                                t346 = ((~(((~t345) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t345 >= 0) {
                                                    t346 = (t345 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t346 << 1) - 1);
                                                t348 = nlRand();
                                                t349 = (int)((int)t348 % (int)0x32);
                                                *(float *)0x8C2FD8F4 = (float)(t349 + 0x32);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            } else {
                                                t350 = nlRand();
                                                t351 = ((~(((~t350) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t350 >= 0) {
                                                    t351 = (t350 & 0x1);
                                                }
                                                if (t351 != 0) {
                                                    t353 = nlRand();
                                                    t354 = (int)((int)t353 % (int)0x3);
                                                    t357 = ((-t354) - 1);
                                                } else {
                                                    t355 = nlRand();
                                                    t356 = (int)((int)t355 % (int)0x3);
                                                    t357 = (t356 + 0x3);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t357;
                                                t359 = nlRand();
                                                t360 = ((~(((~t359) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t359 >= 0) {
                                                    t360 = (t359 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t360 << 1) - 1);
                                                t362 = nlRand();
                                                t363 = (int)((int)t362 % (int)0x28);
                                                *(float *)0x8C2FD8F4 = (float)t363;
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            }
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        }
                                        t381 = t372;
                                    }
                                    t390 = t381;
                                }
                                t475 = t390;
                            } else {
                                t395 = *(int *)(((int)stk + 28));
                                t396 = *(int *)((t395 + 0xC58));
                                if (((((int)t396 >= 0) ? (0x1 << (t396 & 31)) : ((-(int)t396 & 31) ? ((int)0x1 >> (-(int)t396 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                    t397 = nlRand();
                                    t398 = ((~(((~t397) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t397 >= 0) {
                                        t398 = (t397 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = t398;
                                    t400 = nlRand();
                                    t401 = ((~(((~t400) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t400 >= 0) {
                                        t401 = (t400 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t401 << 1) - 1);
                                    t403 = nlRand();
                                    t404 = (int)((int)t403 % (int)0x1E);
                                    *(float *)0x8C2FD8F4 = (float)(t404 + 0x14);
                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    t405 = *(int *)(((int)stk + 28));
                                    t406 = *(int *)((t405 + 0xC58));
                                    if (((((int)t406 >= 0) ? (0x1 << (t406 & 31)) : ((-(int)t406 & 31) ? ((int)0x1 >> (-(int)t406 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                        t407 = nlRand();
                                        t408 = (int)((int)t407 % (int)0xD);
                                        *(unsigned int *)(((int)stk + 16)) = (t408 + 0x5);
                                        t409 = nlRand();
                                        t410 = ((~(((~t409) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t409 >= 0) {
                                            t410 = (t409 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t410 << 1) - 1);
                                        *(float *)0x8C2FD8F4 = 100.0f;
                                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                        t412 = nlRand();
                                        t413 = (int)((int)t412 % (int)0x1E);
                                        *(float *)0x8C2FD8F8 = (float)t413;
                                        t414 = nlRand();
                                        t415 = ((~(((~t414) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t414 >= 0) {
                                            t415 = (t414 & 0x1);
                                        }
                                        *(unsigned char *)0x8C2FD8FC = (t415 + 0x1);
                                    } else {
                                        t417 = *(int *)(((int)stk + 28));
                                        t418 = *(int *)((t417 + 0xC58));
                                        if (((((int)t418 >= 0) ? (0x1 << (t418 & 31)) : ((-(int)t418 & 31) ? ((int)0x1 >> (-(int)t418 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                            t448 = a4;
                                        } else {
                                            t419 = nlRand();
                                            t420 = (int)((int)t419 % (int)0x5);
                                            if (t420 == 0) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                t421 = nlRand();
                                                t422 = ((~(((~t421) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t421 >= 0) {
                                                    t422 = (t421 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t422 << 1) - 1);
                                                t424 = nlRand();
                                                t425 = (int)((int)t424 % (int)0x32);
                                                *(float *)0x8C2FD8F4 = (float)(t425 + 0x32);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            } else {
                                                t426 = nlRand();
                                                t427 = ((~(((~t426) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t426 >= 0) {
                                                    t427 = (t426 & 0x1);
                                                }
                                                if (t427 != 0) {
                                                    t429 = nlRand();
                                                    t430 = (int)((int)t429 % (int)0x3);
                                                    t433 = ((-t430) - 1);
                                                } else {
                                                    t431 = nlRand();
                                                    t432 = (int)((int)t431 % (int)0x3);
                                                    t433 = (t432 + 0x3);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t433;
                                                t435 = nlRand();
                                                t436 = ((~(((~t435) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t435 >= 0) {
                                                    t436 = (t435 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t436 << 1) - 1);
                                                t438 = nlRand();
                                                t439 = (int)((int)t438 % (int)0x64);
                                                *(float *)0x8C2FD8F4 = (float)t439;
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            }
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        }
                                        t457 = t448;
                                    }
                                    t466 = t457;
                                }
                                t475 = t466;
                            }
                            t484 = t475;
                        }
                        t560 = t484;
                    } else {
                        t489 = *(int *)(((int)stk + 28));
                        t490 = *(int *)((t489 + 0xC58));
                        if (((((int)t490 >= 0) ? (0x1 << (t490 & 31)) : ((-(int)t490 & 31) ? ((int)0x1 >> (-(int)t490 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                            t491 = nlRand();
                            t492 = ((~(((~t491) + 0x1) & 0x1)) + 0x1);
                            if ((int)t491 >= 0) {
                                t492 = (t491 & 0x1);
                            }
                            *(unsigned int *)(((int)stk + 16)) = (t492 + 0x1);
                            *(unsigned int *)0x8C2FD8EC = 0x0;
                            *(float *)0x8C2FD8F4 = 0.0f;
                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                            *(float *)0x8C2FD8F8 = 0.0f;
                            *(unsigned char *)0x8C2FD8FC = 0x1;
                        } else {
                            t494 = *(int *)(((int)stk + 28));
                            t495 = *(int *)((t494 + 0xC58));
                            if (((((int)t495 >= 0) ? (0x1 << (t495 & 31)) : ((-(int)t495 & 31) ? ((int)0x1 >> (-(int)t495 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                *(unsigned int *)(((int)stk + 16)) = 0x14;
                                t496 = nlRand();
                                t497 = ((~(((~t496) + 0x1) & 0x1)) + 0x1);
                                if ((int)t496 >= 0) {
                                    t497 = (t496 & 0x1);
                                }
                                *(unsigned int *)0x8C2FD8EC = ((t497 << 1) - 1);
                                *(float *)0x8C2FD8F4 = 30.0f;
                                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                t499 = nlRand();
                                t500 = (int)((int)t499 % (int)0x5);
                                *(float *)0x8C2FD8F8 = (float)(t500 + 0xF);
                                *(unsigned char *)0x8C2FD8FC = 0x1;
                            } else {
                                t501 = *(int *)(((int)stk + 28));
                                t502 = *(int *)((t501 + 0xC58));
                                if (((((int)t502 >= 0) ? (0x1 << (t502 & 31)) : ((-(int)t502 & 31) ? ((int)0x1 >> (-(int)t502 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                    t533 = a4;
                                } else {
                                    t503 = nlRand();
                                    t504 = (int)((int)t503 % (int)0xA);
                                    if (t504 == 0) {
                                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                                        t505 = nlRand();
                                        t506 = ((~(((~t505) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t505 >= 0) {
                                            t506 = (t505 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t506 << 1) - 1);
                                        t508 = nlRand();
                                        t509 = ((~(((~t508) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t508 >= 0) {
                                            t509 = (t508 & 0x1);
                                        }
                                        *(float *)0x8C2FD8F4 = (float)t509;
                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    } else {
                                        t511 = nlRand();
                                        t512 = ((~(((~t511) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t511 >= 0) {
                                            t512 = (t511 & 0x1);
                                        }
                                        if (t512 != 0) {
                                            t514 = nlRand();
                                            t515 = (int)((int)t514 % (int)0x5);
                                            t518 = ((-t515) - 1);
                                        } else {
                                            t516 = nlRand();
                                            t517 = (int)((int)t516 % (int)0xF);
                                            t518 = (t517 + 0x5);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = t518;
                                        t520 = nlRand();
                                        t521 = ((~(((~t520) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t520 >= 0) {
                                            t521 = (t520 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t521 << 1) - 1);
                                        t523 = nlRand();
                                        t524 = (int)((int)t523 % (int)0x1E);
                                        *(float *)0x8C2FD8F4 = (float)t524;
                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                    }
                                    *(float *)0x8C2FD8F8 = 0.0f;
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                }
                                t542 = t533;
                            }
                            t551 = t542;
                        }
                        t560 = t551;
                    }
                    t569 = t560;
                }
                t580 = t569;
            }
            t591 = t580;
        }
        u598 = *(float *)0x8C23D204;
        if (u598 > 1.0f) {
            t599 = *(int *)(((int)stk + 16));
            t603 = (0x5E - t599);
        } else {
            t600 = *(int *)(((int)stk + 16));
            t603 = (0x5D - t600);
        }
        *(float *)0x8C2FD900 = (float)t603;
        t605 = *(int *)(((int)stk + 16));
        if (t605 == 0) {
            t606 = *(int *)0x8C2FD8F0;
            return ((int (*)(int))(0x8C0475FC))(t591);
        }
        return ((int (*)(int))(0x8C047606))(t591);
    }
    t607 = *(int *)0x8C287D5C;
    if (t607 == 0) {
        t608 = *(int *)0x8C2FCC1C;
        if (t608 != 12) {
            t609 = *(int *)(((int)stk + 28));
            t610 = *(int *)((0xC58 + t609));
            if (t610 == 16) {
                t611 = *(int *)(((int)stk + 24));
                t612 = *(int *)(((int)stk + 24));
                t613 = *(int *)(((t611 + 0x44) + 0x0));
                t614 = *(int *)((0x48 + t612));
                if ((int)(t613 + t614) >= (int)0x2) {
                    t615 = nlRand();
                    t616 = *(int *)0x8C159FA0;
                    t617 = (int)((int)t615 % (int)(((t616 << 2) + t616) + 0x5));
                    if (t617 == 0) {
                        *(unsigned int *)0x8C159FA0 = 0x1;
                    } else {
                        *(unsigned int *)0x8C159FA0 = 0x0;
                    }
                } else {
                    *(unsigned int *)0x8C159FA0 = 0x0;
                    t627 = a4;
                }
                t633 = t627;
            } else {
                *(unsigned int *)0x8C159FA0 = 0x0;
                t633 = a4;
            }
            t639 = t633;
        } else {
            *(unsigned int *)0x8C159FA0 = 0x0;
            t639 = a4;
        }
        t645 = t639;
    } else {
        *(unsigned int *)0x8C159FA0 = 0x0;
        t645 = a4;
    }
    t647 = *(int *)(((int)stk + 28));
    *(unsigned int *)((t647 + 0xA24)) = 0x3;
    t648 = *(int *)0x8C159FA0;
    if (t648 != 0) {
        t649 = nlRand();
        t650 = (int)((int)t649 % (int)0x1E);
        *(float *)0x8C2FD900 = (float)(t650 + 0x1);
        return ((int (*)(void))(0x8C047890))();
    }
    *(float *)0x8C2FD900 = 70.0f;
    return ((int (*)(int))(0x8C047890))(t645);
}
