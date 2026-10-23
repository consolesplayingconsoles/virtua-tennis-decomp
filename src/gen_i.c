/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuDblServe(int a4);

int cpuDblServe(int a4)
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
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u43;
    int t44;
    int t50;
    int t45;
    float u46;
    int t47;
    float u53;
    int t61;
    float u62;
    int t63;
    int t69;
    int t64;
    float u65;
    int t66;
    float u72;
    float u80;
    float u81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t91;
    int t92;
    int t93;
    int t94;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t117;
    int t118;
    int t119;
    int t120;
    int t122;
    int t123;
    int t124;
    int t125;
    int t127;
    int t128;
    int t129;
    int t130;
    int t132;
    int t133;
    int t135;
    float u136;
    int t142;
    int t137;
    float u138;
    int t139;
    int t145;
    int t186;
    int t187;
    int t188;
    int t190;
    int t191;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t205;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t220;
    int t221;
    int t222;
    int t223;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t244;
    int t252;
    int t253;
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
    int t265;
    int t266;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t280;
    float u281;
    int t287;
    int t282;
    float u283;
    int t284;
    int t290;
    int t291;
    int t292;
    int t324;
    int t325;
    int t326;
    int t327;
    int t329;
    float u330;
    int t336;
    int t331;
    float u332;
    int t333;
    int t339;
    int t340;
    int t341;
    int t391;
    int t392;
    int t393;
    int t394;
    int t395;
    int t397;
    int t398;
    int t399;
    int t400;
    int t402;
    int t403;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t427;
    int t428;
    int t429;
    float u430;
    int t431;
    int t432;
    int t433;
    float u434;
    int t435;
    int t438;
    int t475;
    int t476;
    int t477;
    int t478;
    int t479;
    int t480;
    int t482;
    int t483;
    int t484;
    int t485;
    int t505;
    int t506;
    int t507;
    int t508;
    int t510;
    int t511;
    int t513;
    int t514;
    int t515;
    int t516;
    int t517;
    int t518;
    int t519;
    int t520;
    int t522;
    int t523;
    int t524;
    int t525;
    int t527;
    int t528;
    int t529;
    int t530;
    int t531;
    int t532;
    int t534;
    int t535;
    int t536;
    int t537;
    int t539;
    int t540;
    int t541;
    int t542;
    int t545;
    int t546;
    int t548;
    int t549;
    int t590;
    int t591;
    int t592;
    int t593;
    int t594;
    int t595;
    int t597;
    int t598;
    int t600;
    int t601;
    int t602;
    int t603;
    int t604;
    int t605;
    int t606;
    int t607;
    int t609;
    int t610;
    int t611;
    int t612;
    int t614;
    int t615;
    int t616;
    int t617;
    int t618;
    int t619;
    int t621;
    int t622;
    int t623;
    int t624;
    int t626;
    int t627;
    int t628;
    int t629;
    int t632;
    int t633;
    int t635;
    int t636;
    int t668;
    int t669;
    int t670;
    int t671;
    int t673;
    int t674;
    int t676;
    int t677;
    int t678;
    int t679;
    int t680;
    int t681;
    int t682;
    int t683;
    int t685;
    int t686;
    int t687;
    int t688;
    int t690;
    int t691;
    int t692;
    int t693;
    int t694;
    int t695;
    int t697;
    int t698;
    int t699;
    int t700;
    int t702;
    int t703;
    int t704;
    int t705;
    int t708;
    int t709;
    int t711;
    int t712;
    int t762;
    int t763;
    int t764;
    int t765;
    int t767;
    int t768;
    int t769;
    int t770;
    int t772;
    int t773;
    int t774;
    int t775;
    int t776;
    int t777;
    int t778;
    int t779;
    int t781;
    int t782;
    int t784;
    int t785;
    int t787;
    int t788;
    int t789;
    int t790;
    int t793;
    int t794;
    int t796;
    int t797;
    int t878;
    int t879;
    int t880;
    int t881;
    int t882;
    int t883;
    float u884;
    int t885;
    int t886;
    int t887;
    int t888;
    float u889;
    int t890;
    int t891;
    int t896;
    int t897;
    int t898;
    int t899;
    int t900;
    int t901;
    float u902;
    int t903;
    int t904;
    int t905;
    int t906;
    float u907;
    int t908;
    int t909;
    float u932;
    int t933;
    int t934;
    int t939;
    int t940;
    int t949;
    int t950;
    int t951;
    int t952;
    int t953;
    float u954;
    int t957;
    int t958;
    int t959;
    int t960;
    int t961;
    int t962;
    int t963;
    int t964;
    int t965;
    int t966;
    int t967;
    int t997;
    int t998;
    int t999;
    int t1000;
    int t872;
    int t862;
    int t852;
    int t202;
    int t207;
    int t842;
    int t228;
    int t469;
    int t459;
    int t385;
    int t410;
    int t436;
    int t833;
    int t757;
    int t585;
    int t500;
    int t491;
    int t576;
    int t567;
    int t558;
    int t543;
    int t748;
    int t663;
    int t654;
    int t645;
    int t630;
    int t739;
    int t730;
    int t721;
    int t706;
    int t824;
    int t815;
    int t806;
    int t791;
    int t927;
    int t918;
    int t937;
    int t995;
    int t989;
    int t983;
    int t977;
    int stk[9] = {0};

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
            return ((int (*)(int))(0x8C05C590))(a4);
        }
        if (t37 != 2) {
            if (t37 == 5) {
                return ((int (*)(int))(0x8C05C4C4))(a4);
            }
            if (t37 == 6) {
                return ((int (*)(int))(0x8C05C4C4))(a4);
            }
            if (t37 == 7) {
                return ((int (*)(int))(0x8C05C4C4))(a4);
            }
            return ((int (*)(int))(0x8C05C590))(a4);
        }
        t38 = *(int *)(((int)stk + 20));
        t39 = *(signed char *)((0x13F + t38));
        if ((unsigned char)t39 != 1) {
            t40 = *(int *)(((int)stk + 20));
            t41 = *(signed char *)((0x13F + t40));
            if ((unsigned char)t41 == 2) {
                t42 = *(int *)(((int)stk + 28));
                u43 = *(float *)((t42 + 0xAE8));
                t44 = *(int *)(((int)stk + 20));
                t50 = 0x1;
                if ((-u43) > 0.0f) {
                } else {
                    t45 = *(int *)(((int)stk + 28));
                    u46 = *(float *)((0xAE8 + t45));
                    t47 = 0x0;
                    if (0.0f > (-u46)) {
                        t47 = 0xFFFFFFFF;
                    }
                    t50 = t47;
                }
                u53 = *(float *)((t42 + 0xB00));
                *(unsigned short *)((t44 + 0x20)) = (int)((-((u53 * (float)t50) * 32.0f)) + 96.0f);
            }
        } else {
            t61 = *(int *)(((int)stk + 28));
            u62 = *(float *)((t61 + 0xAE8));
            t63 = *(int *)(((int)stk + 20));
            t69 = 0x1;
            if ((-u62) > 0.0f) {
            } else {
                t64 = *(int *)(((int)stk + 28));
                u65 = *(float *)((0xAE8 + t64));
                t66 = 0x0;
                if (0.0f > (-u65)) {
                    t66 = 0xFFFFFFFF;
                }
                t69 = t66;
            }
            u72 = *(float *)((t61 + 0xB00));
            *(unsigned short *)((t63 + 0x20)) = (int)((-((u72 * (float)t69) * 32.0f)) + 96.0f);
        }
        u80 = *(float *)0x8C23D204;
        u81 = *(float *)0x8C2FD91C;
        *(float *)0x8C2FD91C = (u81 - u80);
        if (!(0.0f > (u81 - u80))) {
            return ((int (*)(int))(0x8C05C590))(a4);
        }
        t82 = *(int *)(((int)stk + 20));
        *(unsigned short *)((t82 + 0x1E)) = 0x1;
        t83 = *(int *)(((int)stk + 28));
        t84 = *(int *)((0xB5C + t83));
        t85 = *(int *)((0x8C287AE0 + (t84 << 2)));
        if (t85 != 1) {
            t86 = *(int *)(((int)stk + 20));
            t87 = *(signed char *)((0x141 + t86));
            if (t87 == 0) {
                t88 = nlRand();
                t89 = ((~(((~t88) + 0x1) & 0x1)) + 0x1);
                if ((int)t88 >= 0) {
                    t89 = (t88 & 0x1);
                }
                *(unsigned int *)0x8C2FD908 = ((t89 << 1) - 1);
                t91 = nlRand();
                t92 = (int)((int)t91 % (int)0x1E);
                *(float *)0x8C2FD910 = (float)(t92 + 0x28);
                t93 = nlRand();
                t94 = ((~(((~t93) + 0x1) & 0x1)) + 0x1);
                if ((int)t93 >= 0) {
                    t94 = (t93 & 0x1);
                }
                *(unsigned int *)0x8C2FD90C = ((t94 << 1) - 1);
                t96 = nlRand();
                t97 = (int)((int)t96 % (int)0x1E);
                *(float *)0x8C2FD914 = (float)t97;
                t98 = nlRand();
                t99 = (int)((int)t98 % (int)0x1E);
                *(unsigned int *)(((int)stk + 16)) = (t99 + 0x5);
                *(unsigned int *)0x8C2FD918 = 0x1;
            } else {
                t100 = *(int *)(((int)stk + 20));
                t101 = *(signed char *)((0x141 + t100));
                if ((unsigned char)t101 == 1) {
                    t102 = nlRand();
                    t103 = ((~(((~t102) + 0x1) & 0x1)) + 0x1);
                    if ((int)t102 >= 0) {
                        t103 = (t102 & 0x1);
                    }
                    *(unsigned int *)0x8C2FD908 = ((t103 << 1) - 1);
                    t105 = nlRand();
                    t106 = (int)((int)t105 % (int)0x14);
                    *(float *)0x8C2FD910 = (float)(t106 + 0x37);
                    *(unsigned int *)0x8C2FD90C = 0x0;
                    *(float *)0x8C2FD914 = 0.0f;
                    t107 = nlRand();
                    t108 = (int)((int)t107 % (int)0x7);
                    *(unsigned int *)(((int)stk + 16)) = t108;
                    t109 = nlRand();
                    t110 = ((~(((~t109) + 0x1) & 0x3)) + 0x1);
                    if ((int)t109 >= 0) {
                        t110 = (t109 & 0x3);
                    }
                    if (t110 != 0) {
                        *(unsigned int *)0x8C2FD918 = 0x1;
                    } else {
                        *(unsigned int *)0x8C2FD918 = 0x2;
                    }
                } else {
                    t117 = *(int *)(((int)stk + 20));
                    t118 = *(signed char *)((0x141 + t117));
                    if ((unsigned char)t118 == 2) {
                        t119 = nlRand();
                        t120 = ((~(((~t119) + 0x1) & 0x1)) + 0x1);
                        if ((int)t119 >= 0) {
                            t120 = (t119 & 0x1);
                        }
                        *(unsigned int *)0x8C2FD908 = ((t120 << 1) - 1);
                        t122 = nlRand();
                        t123 = (int)((int)t122 % (int)0x5);
                        *(float *)0x8C2FD910 = (float)(t123 + 0x44);
                        *(unsigned int *)0x8C2FD90C = 0x0;
                        *(float *)0x8C2FD914 = 0.0f;
                        t124 = nlRand();
                        t125 = ((~(((~t124) + 0x1) & 0x1)) + 0x1);
                        if ((int)t124 >= 0) {
                            t125 = (t124 & 0x1);
                        }
                        *(unsigned int *)(((int)stk + 16)) = t125;
                        *(unsigned int *)0x8C2FD918 = 0x1;
                    } else {
                        t127 = nlRand();
                        t128 = (int)((int)t127 % (int)0x3);
                        if (t128 != 0) {
                            t129 = nlRand();
                            t130 = ((~(((~t129) + 0x1) & 0x1)) + 0x1);
                            if ((int)t129 >= 0) {
                                t130 = (t129 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t130 << 1) - 1);
                            *(float *)0x8C2FD910 = 100.0f;
                            *(unsigned int *)0x8C2FD90C = 0x0;
                            *(float *)0x8C2FD914 = 0.0f;
                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            t132 = nlRand();
                            t133 = ((~(((~t132) + 0x1) & 0x1)) + 0x1);
                            if ((int)t132 >= 0) {
                                t133 = (t132 & 0x1);
                            }
                            if (t133 != 0) {
                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                t135 = *(int *)(((int)stk + 28));
                                u136 = *(float *)((t135 + 0xB00));
                                t142 = 0x1;
                                if (u136 > 0.0f) {
                                } else {
                                    t137 = *(int *)(((int)stk + 28));
                                    u138 = *(float *)((t137 + 0xB00));
                                    t139 = 0x0;
                                    if (0.0f > u138) {
                                        t139 = 0xFFFFFFFF;
                                    }
                                    t142 = t139;
                                }
                                t145 = *(int *)(((int)stk + 12));
                                *(unsigned int *)0x8C2FD908 = (-(t142 * t145));
                                *(float *)0x8C2FD910 = 100.0f;
                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                *(float *)0x8C2FD914 = (1.0f + 1.0f);
                                *(unsigned int *)0x8C2FD918 = 0x1;
                            } else {
                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                *(unsigned int *)0x8C2FD908 = 0x1;
                                *(float *)0x8C2FD910 = 100.0f;
                                *(unsigned int *)0x8C2FD90C = 0x0;
                                *(float *)0x8C2FD914 = 0.0f;
                                *(unsigned int *)0x8C2FD918 = 0x2;
                            }
                        }
                    }
                }
            }
        } else {
            t186 = *(int *)0x8C421F60;
            if (t186 != 0) {
                t187 = nlRand();
                t188 = ((~(((~t187) + 0x1) & 0x1)) + 0x1);
                if ((int)t187 >= 0) {
                    t188 = (t187 & 0x1);
                }
                *(unsigned int *)(((int)stk + 16)) = (t188 + 0x1);
                t190 = nlRand();
                t191 = ((~(((~t190) + 0x1) & 0x1)) + 0x1);
                if ((int)t190 >= 0) {
                    t191 = (t190 & 0x1);
                }
                *(unsigned int *)0x8C2FD908 = ((t191 << 1) - 1);
                t193 = nlRand();
                t194 = (int)((int)t193 % (int)0x32);
                *(float *)0x8C2FD910 = (float)(t194 + 0x32);
                *(unsigned int *)0x8C2FD90C = 0x0;
                *(float *)0x8C2FD914 = 0.0f;
                *(unsigned int *)0x8C2FD918 = 0x1;
            } else {
                t195 = *(int *)0x8C15A0CC;
                if (t195 != 0) {
                    *(unsigned int *)0x8C2FD918 = 0x0;
                    *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                    t196 = *(int *)(((int)stk + 20));
                    *(unsigned short *)((t196 + 0x1E)) = 0x3;
                    t197 = *(int *)(((int)stk + 20));
                    *(unsigned short *)(((0x20 + t197) + 0x0)) = 0x20;
                    t198 = nlRand();
                    t199 = (int)((int)t198 % (int)0x3);
                    if (t199 != 0) {
                        t200 = *(int *)(((int)stk + 12));
                        if ((int)t200 > 0) {
                            *(float *)0x8C2FD910 = 200.0f;
                            *(float *)0x8C2FD914 = 48.0f;
                            t202 = 0xFFFFFFFF;
                        } else {
                            *(float *)0x8C2FD910 = 200.0f;
                            *(float *)0x8C2FD914 = 43.0f;
                            t202 = 0x1;
                        }
                        *(unsigned int *)0x8C2FD908 = t202;
                    } else {
                        t205 = *(int *)(((int)stk + 12));
                        if ((int)t205 > 0) {
                            *(float *)0x8C2FD910 = 200.0f;
                            *(float *)0x8C2FD914 = 37.0f;
                            t207 = 0x1;
                        } else {
                            *(float *)0x8C2FD910 = 200.0f;
                            *(float *)0x8C2FD914 = 39.0f;
                            t207 = 0xFFFFFFFF;
                        }
                        *(unsigned int *)0x8C2FD908 = t207;
                    }
                    *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                } else {
                    t213 = *(int *)0x8C20D14C;
                    if (t213 != 6) {
                        t214 = *(int *)0x8C2FCC1C;
                        if ((int)t214 <= (int)0x2) {
                            t215 = nlRand();
                            t216 = (int)((int)t215 % (int)0xA);
                            *(unsigned int *)(((int)stk + 16)) = (t216 + 0xF);
                            t217 = nlRand();
                            t218 = ((~(((~t217) + 0x1) & 0x1)) + 0x1);
                            if ((int)t217 >= 0) {
                                t218 = (t217 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t218 << 1) - 1);
                            t220 = nlRand();
                            t221 = (int)((int)t220 % (int)0x14);
                            *(float *)0x8C2FD910 = (float)t221;
                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                            t222 = nlRand();
                            t223 = (int)((int)t222 % (int)0xA);
                            *(float *)0x8C2FD914 = (float)t223;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            t228 = a4;
                        }
                        t233 = *(int *)0x8C2FCC1C;
                        if ((int)t233 <= (int)0x5) {
                            t234 = nlRand();
                            t235 = (int)((int)t234 % (int)0x5);
                            *(unsigned int *)(((int)stk + 16)) = (t235 + 0xA);
                            t236 = nlRand();
                            t237 = ((~(((~t236) + 0x1) & 0x1)) + 0x1);
                            if ((int)t236 >= 0) {
                                t237 = (t236 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t237 << 1) - 1);
                            t239 = nlRand();
                            t240 = (int)((int)t239 % (int)0x14);
                            *(float *)0x8C2FD910 = (float)t240;
                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                            t241 = *(int *)0x8C2FD908;
                            t242 = *(int *)(((int)stk + 12));
                            if (t242 != t241) {
                                *(float *)0x8C2FD914 = 3.0f;
                            } else {
                                t243 = nlRand();
                                t244 = (int)((int)t243 % (int)0xA);
                                *(float *)0x8C2FD914 = (float)t244;
                            }
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            t252 = *(int *)0x8C2FCC1C;
                            if ((int)t252 > (int)0x8) {
                                t253 = *(int *)0x8C2FCC1C;
                                if ((int)t253 > (int)0xD) {
                                    t385 = t228;
                                } else {
                                    t254 = *(int *)0x8C287D5C;
                                    if (t254 != 0) {
                                        t255 = nlRand();
                                        t256 = *(int *)0x8C2FCC1C;
                                        t257 = (int)((int)t255 % (int)(0xD - t256));
                                        *(unsigned int *)(((int)stk + 16)) = t257;
                                        t258 = nlRand();
                                        t259 = ((~(((~t258) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t258 >= 0) {
                                            t259 = (t258 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t259 << 1) - 1);
                                        t261 = nlRand();
                                        t262 = (int)((int)t261 % (int)0x5);
                                        *(float *)0x8C2FD910 = (float)(t262 + 0x44);
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t263 = *(int *)(((int)stk + 28));
                                        t264 = *(int *)((0xC58 + t263));
                                        if (t264 != 16) {
                                            t265 = *(int *)(((int)stk + 28));
                                            t266 = *(int *)((0xC58 + t265));
                                            if (t266 != 17) {
                                                t267 = nlRand();
                                                t268 = *(int *)0x8C2FCC1C;
                                                t269 = (int)((int)t267 % (int)(0xD - t268));
                                                *(unsigned int *)(((int)stk + 16)) = t269;
                                                t270 = nlRand();
                                                t271 = ((~(((~t270) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t270 >= 0) {
                                                    t271 = (t270 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t271 << 1) - 1);
                                                t273 = nlRand();
                                                t274 = (int)((int)t273 % (int)0x5);
                                                *(float *)0x8C2FD910 = (float)(t274 + 0x44);
                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                *(float *)0x8C2FD914 = 0.0f;
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            } else {
                                                t275 = nlRand();
                                                t276 = (int)((int)t275 % (int)0xA);
                                                *(unsigned int *)(((int)stk + 8)) = t276;
                                                if ((int)t276 < (int)0x5) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t277 = nlRand();
                                                    t278 = ((~(((~t277) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t277 >= 0) {
                                                        t278 = (t277 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t278 << 1) - 1);
                                                    *(float *)0x8C2FD910 = 100.0f;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if ((int)t276 < (int)0x7) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        t280 = *(int *)(((int)stk + 28));
                                                        u281 = *(float *)((t280 + 0xB00));
                                                        t287 = 0x1;
                                                        if (u281 > 0.0f) {
                                                        } else {
                                                            t282 = *(int *)(((int)stk + 28));
                                                            u283 = *(float *)((t282 + 0xB00));
                                                            t284 = 0x0;
                                                            if (0.0f > u283) {
                                                                t284 = 0xFFFFFFFF;
                                                            }
                                                            t287 = t284;
                                                        }
                                                        t290 = *(int *)(((int)stk + 12));
                                                        *(unsigned int *)0x8C2FD908 = (-(t287 * t290));
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = 3.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    } else {
                                                        if ((int)t276 < (int)0x9) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            *(unsigned int *)0x8C2FD908 = 0x1;
                                                            *(float *)0x8C2FD910 = 100.0f;
                                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x2;
                                                        } else {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                            t291 = nlRand();
                                                            t292 = ((~(((~t291) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t291 >= 0) {
                                                                t292 = (t291 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD908 = ((t292 << 1) - 1);
                                                            *(float *)0x8C2FD910 = 100.0f;
                                                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                            *(float *)0x8C2FD914 = 10.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            t324 = nlRand();
                                            t325 = (int)((int)t324 % (int)0xA);
                                            *(unsigned int *)(((int)stk + 8)) = t325;
                                            if ((int)t325 < (int)0x5) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                t326 = nlRand();
                                                t327 = ((~(((~t326) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t326 >= 0) {
                                                    t327 = (t326 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t327 << 1) - 1);
                                                *(float *)0x8C2FD910 = 100.0f;
                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                *(float *)0x8C2FD914 = 0.0f;
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            } else {
                                                if ((int)t325 < (int)0x7) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t329 = *(int *)(((int)stk + 28));
                                                    u330 = *(float *)((t329 + 0xB00));
                                                    t336 = 0x1;
                                                    if (u330 > 0.0f) {
                                                    } else {
                                                        t331 = *(int *)(((int)stk + 28));
                                                        u332 = *(float *)((t331 + 0xB00));
                                                        t333 = 0x0;
                                                        if (0.0f > u332) {
                                                            t333 = 0xFFFFFFFF;
                                                        }
                                                        t336 = t333;
                                                    }
                                                    t339 = *(int *)(((int)stk + 12));
                                                    *(unsigned int *)0x8C2FD908 = (-(t336 * t339));
                                                    *(float *)0x8C2FD910 = 100.0f;
                                                    *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD914 = 3.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if ((int)t325 < (int)0x9) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        *(unsigned int *)0x8C2FD908 = 0x1;
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                        *(float *)0x8C2FD914 = 0.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x2;
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                        t340 = nlRand();
                                                        t341 = ((~(((~t340) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t340 >= 0) {
                                                            t341 = (t340 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t341 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = 10.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                t459 = t385;
                            } else {
                                t391 = nlRand();
                                t392 = *(int *)0x8C2FCC1C;
                                t393 = (int)((int)t391 % (int)(0xA - t392));
                                *(unsigned int *)(((int)stk + 16)) = (t393 + 0x3);
                                if ((int)(t393 + 0x3) <= (int)0x3) {
                                    t394 = nlRand();
                                    t395 = ((~(((~t394) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t394 >= 0) {
                                        t395 = (t394 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD908 = ((t395 << 1) - 1);
                                    t397 = nlRand();
                                    t398 = (int)((int)t397 % (int)0x1E);
                                    *(float *)0x8C2FD910 = (float)(t398 + 0xF);
                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                    *(float *)0x8C2FD914 = 0.0f;
                                } else {
                                    t399 = nlRand();
                                    t400 = ((~(((~t399) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t399 >= 0) {
                                        t400 = (t399 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD908 = ((t400 << 1) - 1);
                                    t402 = nlRand();
                                    t403 = (int)((int)t402 % (int)0xE);
                                    *(float *)0x8C2FD910 = (float)(t403 + 0x36);
                                    *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                    t404 = *(int *)0x8C2FD908;
                                    t405 = *(int *)(((int)stk + 12));
                                    if (t405 != t404) {
                                        t406 = nlRand();
                                        t407 = (int)((int)t406 % (int)0x5);
                                        t410 = (t407 + 0x5);
                                    } else {
                                        t408 = nlRand();
                                        t409 = (int)((int)t408 % (int)0x5);
                                        t410 = (t409 + 0xA);
                                    }
                                    *(float *)0x8C2FD914 = (float)t410;
                                }
                                t422 = *(int *)0x8C2FCC1C;
                                if (t422 != 7) {
                                } else {
                                    t423 = *(int *)(((int)stk + 20));
                                    t424 = *(signed char *)((t423 + 0x13F));
                                    if (t424 != 0) {
                                    } else {
                                        t425 = *(int *)(((int)stk + 16));
                                        *(unsigned int *)(((int)stk + 16)) = (t425 + t425);
                                        t426 = *(int *)(((int)stk + 20));
                                        t427 = *(signed char *)((t426 + 0x140));
                                        if ((int)(unsigned char)t427 <= (int)0x1) {
                                            t428 = *(int *)(((int)stk + 12));
                                            t429 = *(int *)(((int)stk + 28));
                                            u430 = *(float *)((t429 + 0xB00));
                                            *(unsigned int *)0x8C2FD908 = (int)(u430 * (float)t428);
                                            t431 = nlRand();
                                            t436 = t431;
                                        } else {
                                            t432 = *(int *)(((int)stk + 12));
                                            t433 = *(int *)(((int)stk + 28));
                                            u434 = *(float *)((t433 + 0xB00));
                                            *(unsigned int *)0x8C2FD908 = (int)(-(u434 * (float)t432));
                                            t435 = nlRand();
                                            t436 = t435;
                                        }
                                        t438 = (int)((int)t436 % (int)0x14);
                                        *(float *)0x8C2FD910 = (float)(t438 + 0x32);
                                    }
                                }
                                *(unsigned int *)0x8C2FD918 = 0x1;
                            }
                            t469 = t459;
                        }
                        t842 = t469;
                    } else {
                        t475 = *(int *)0x8C2FCC20;
                        if (t475 != 0) {
                            t476 = *(int *)0x8C2FCC20;
                            if (t476 != 1) {
                                if (t476 != 2) {
                                    t477 = *(int *)(((int)stk + 28));
                                    t478 = *(int *)((0xC58 + t477));
                                    if (t478 == 16) {
                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                        t479 = nlRand();
                                        t480 = ((~(((~t479) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t479 >= 0) {
                                            t480 = (t479 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t480 << 1) - 1);
                                        *(float *)0x8C2FD910 = 100.0f;
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t482 = *(int *)(((int)stk + 28));
                                        t483 = *(int *)((0xC58 + t482));
                                        if (t483 != 17) {
                                            t491 = a4;
                                        } else {
                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                            t484 = nlRand();
                                            t485 = ((~(((~t484) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t484 >= 0) {
                                                t485 = (t484 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t485 << 1) - 1);
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                            *(float *)0x8C2FD914 = 0.0f;
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        }
                                        t500 = t491;
                                    }
                                    t585 = t500;
                                } else {
                                    t505 = *(int *)(((int)stk + 28));
                                    t506 = *(int *)((0xC58 + t505));
                                    if (((((int)t506 >= 0) ? (0x1 << (t506 & 31)) : ((-(int)t506 & 31) ? ((int)0x1 >> (-(int)t506 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                        t507 = nlRand();
                                        t508 = ((~(((~t507) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t507 >= 0) {
                                            t508 = (t507 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = t508;
                                        t510 = nlRand();
                                        t511 = ((~(((~t510) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t510 >= 0) {
                                            t511 = (t510 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t511 << 1) - 1);
                                        t513 = nlRand();
                                        t514 = (int)((int)t513 % (int)0x1E);
                                        *(float *)0x8C2FD910 = (float)(t514 + 0x14);
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t515 = *(int *)(((int)stk + 28));
                                        t516 = *(int *)((0xC58 + t515));
                                        if (((((int)t516 >= 0) ? (0x1 << (t516 & 31)) : ((-(int)t516 & 31) ? ((int)0x1 >> (-(int)t516 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                            t517 = nlRand();
                                            t518 = (int)((int)t517 % (int)0xA);
                                            *(unsigned int *)(((int)stk + 16)) = (t518 + 0xA);
                                            t519 = nlRand();
                                            t520 = ((~(((~t519) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t519 >= 0) {
                                                t520 = (t519 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t520 << 1) - 1);
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                            t522 = nlRand();
                                            t523 = (int)((int)t522 % (int)0x14);
                                            *(float *)0x8C2FD914 = (float)(t523 + 0xF);
                                            t524 = nlRand();
                                            t525 = ((~(((~t524) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t524 >= 0) {
                                                t525 = (t524 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD918 = (t525 + 0x1);
                                        } else {
                                            t527 = *(int *)(((int)stk + 28));
                                            t528 = *(int *)((t527 + 0xC58));
                                            if (((((int)t528 >= 0) ? (0x1 << (t528 & 31)) : ((-(int)t528 & 31) ? ((int)0x1 >> (-(int)t528 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                t558 = a4;
                                            } else {
                                                t529 = nlRand();
                                                t530 = (int)((int)t529 % (int)0x5);
                                                if (t530 == 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t531 = nlRand();
                                                    t532 = ((~(((~t531) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t531 >= 0) {
                                                        t532 = (t531 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t532 << 1) - 1);
                                                    t534 = nlRand();
                                                    t535 = (int)((int)t534 % (int)0x32);
                                                    *(float *)0x8C2FD910 = (float)(t535 + 0x32);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                } else {
                                                    t536 = nlRand();
                                                    t537 = ((~(((~t536) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t536 >= 0) {
                                                        t537 = (t536 & 0x1);
                                                    }
                                                    if (t537 != 0) {
                                                        t539 = nlRand();
                                                        t540 = (int)((int)t539 % (int)0x3);
                                                        t543 = ((-t540) - 1);
                                                    } else {
                                                        t541 = nlRand();
                                                        t542 = (int)((int)t541 % (int)0x3);
                                                        t543 = (t542 + 0x3);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t543;
                                                    t545 = nlRand();
                                                    t546 = ((~(((~t545) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t545 >= 0) {
                                                        t546 = (t545 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t546 << 1) - 1);
                                                    t548 = nlRand();
                                                    t549 = (int)((int)t548 % (int)0x64);
                                                    *(float *)0x8C2FD910 = (float)t549;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                }
                                                *(float *)0x8C2FD914 = 0.0f;
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            }
                                            t567 = t558;
                                        }
                                        t576 = t567;
                                    }
                                    t585 = t576;
                                }
                                t757 = t585;
                            } else {
                                t590 = *(int *)(((int)stk + 28));
                                t591 = *(int *)((0xC58 + t590));
                                if ((int)t591 > (int)0x7) {
                                    t592 = *(int *)(((int)stk + 28));
                                    t593 = *(int *)((0xC58 + t592));
                                    if (((((int)t593 >= 0) ? (0x1 << (t593 & 31)) : ((-(int)t593 & 31) ? ((int)0x1 >> (-(int)t593 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                        t594 = nlRand();
                                        t595 = ((~(((~t594) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t594 >= 0) {
                                            t595 = (t594 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = (t595 + 0x1);
                                        t597 = nlRand();
                                        t598 = ((~(((~t597) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t597 >= 0) {
                                            t598 = (t597 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t598 << 1) - 1);
                                        t600 = nlRand();
                                        t601 = (int)((int)t600 % (int)0x1E);
                                        *(float *)0x8C2FD910 = (float)(t601 + 0x14);
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t602 = *(int *)(((int)stk + 28));
                                        t603 = *(int *)((t602 + 0xC58));
                                        if (((((int)t603 >= 0) ? (0x1 << (t603 & 31)) : ((-(int)t603 & 31) ? ((int)0x1 >> (-(int)t603 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                            t604 = nlRand();
                                            t605 = (int)((int)t604 % (int)0xD);
                                            *(unsigned int *)(((int)stk + 16)) = (t605 + 0x5);
                                            t606 = nlRand();
                                            t607 = ((~(((~t606) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t606 >= 0) {
                                                t607 = (t606 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t607 << 1) - 1);
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                            t609 = nlRand();
                                            t610 = (int)((int)t609 % (int)0xA);
                                            *(float *)0x8C2FD914 = (float)t610;
                                            t611 = nlRand();
                                            t612 = ((~(((~t611) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t611 >= 0) {
                                                t612 = (t611 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD918 = (t612 + 0x1);
                                        } else {
                                            t614 = *(int *)(((int)stk + 28));
                                            t615 = *(int *)((t614 + 0xC58));
                                            if (((((int)t615 >= 0) ? (0x1 << (t615 & 31)) : ((-(int)t615 & 31) ? ((int)0x1 >> (-(int)t615 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                t645 = a4;
                                            } else {
                                                t616 = nlRand();
                                                t617 = (int)((int)t616 % (int)0x5);
                                                if (t617 == 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                    t618 = nlRand();
                                                    t619 = ((~(((~t618) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t618 >= 0) {
                                                        t619 = (t618 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t619 << 1) - 1);
                                                    t621 = nlRand();
                                                    t622 = (int)((int)t621 % (int)0x32);
                                                    *(float *)0x8C2FD910 = (float)(t622 + 0x32);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                } else {
                                                    t623 = nlRand();
                                                    t624 = ((~(((~t623) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t623 >= 0) {
                                                        t624 = (t623 & 0x1);
                                                    }
                                                    if (t624 != 0) {
                                                        t626 = nlRand();
                                                        t627 = (int)((int)t626 % (int)0x3);
                                                        t630 = ((-t627) - 1);
                                                    } else {
                                                        t628 = nlRand();
                                                        t629 = (int)((int)t628 % (int)0x3);
                                                        t630 = (t629 + 0x3);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t630;
                                                    t632 = nlRand();
                                                    t633 = ((~(((~t632) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t632 >= 0) {
                                                        t633 = (t632 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t633 << 1) - 1);
                                                    t635 = nlRand();
                                                    t636 = (int)((int)t635 % (int)0x28);
                                                    *(float *)0x8C2FD910 = (float)t636;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                }
                                                *(float *)0x8C2FD914 = 0.0f;
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            }
                                            t654 = t645;
                                        }
                                        t663 = t654;
                                    }
                                    t748 = t663;
                                } else {
                                    t668 = *(int *)(((int)stk + 28));
                                    t669 = *(int *)((t668 + 0xC58));
                                    if (((((int)t669 >= 0) ? (0x1 << (t669 & 31)) : ((-(int)t669 & 31) ? ((int)0x1 >> (-(int)t669 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                        t670 = nlRand();
                                        t671 = ((~(((~t670) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t670 >= 0) {
                                            t671 = (t670 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = t671;
                                        t673 = nlRand();
                                        t674 = ((~(((~t673) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t673 >= 0) {
                                            t674 = (t673 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t674 << 1) - 1);
                                        t676 = nlRand();
                                        t677 = (int)((int)t676 % (int)0x1E);
                                        *(float *)0x8C2FD910 = (float)(t677 + 0x14);
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t678 = *(int *)(((int)stk + 28));
                                        t679 = *(int *)((t678 + 0xC58));
                                        if (((((int)t679 >= 0) ? (0x1 << (t679 & 31)) : ((-(int)t679 & 31) ? ((int)0x1 >> (-(int)t679 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                            t680 = nlRand();
                                            t681 = (int)((int)t680 % (int)0xD);
                                            *(unsigned int *)(((int)stk + 16)) = (t681 + 0x5);
                                            t682 = nlRand();
                                            t683 = ((~(((~t682) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t682 >= 0) {
                                                t683 = (t682 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t683 << 1) - 1);
                                            *(float *)0x8C2FD910 = 100.0f;
                                            *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                            t685 = nlRand();
                                            t686 = (int)((int)t685 % (int)0x1E);
                                            *(float *)0x8C2FD914 = (float)t686;
                                            t687 = nlRand();
                                            t688 = ((~(((~t687) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t687 >= 0) {
                                                t688 = (t687 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD918 = (t688 + 0x1);
                                        } else {
                                            t690 = *(int *)(((int)stk + 28));
                                            t691 = *(int *)((t690 + 0xC58));
                                            if (((((int)t691 >= 0) ? (0x1 << (t691 & 31)) : ((-(int)t691 & 31) ? ((int)0x1 >> (-(int)t691 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                t721 = a4;
                                            } else {
                                                t692 = nlRand();
                                                t693 = (int)((int)t692 % (int)0x5);
                                                if (t693 == 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t694 = nlRand();
                                                    t695 = ((~(((~t694) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t694 >= 0) {
                                                        t695 = (t694 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t695 << 1) - 1);
                                                    t697 = nlRand();
                                                    t698 = (int)((int)t697 % (int)0x32);
                                                    *(float *)0x8C2FD910 = (float)(t698 + 0x32);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                } else {
                                                    t699 = nlRand();
                                                    t700 = ((~(((~t699) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t699 >= 0) {
                                                        t700 = (t699 & 0x1);
                                                    }
                                                    if (t700 != 0) {
                                                        t702 = nlRand();
                                                        t703 = (int)((int)t702 % (int)0x3);
                                                        t706 = ((-t703) - 1);
                                                    } else {
                                                        t704 = nlRand();
                                                        t705 = (int)((int)t704 % (int)0x3);
                                                        t706 = (t705 + 0x3);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t706;
                                                    t708 = nlRand();
                                                    t709 = ((~(((~t708) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t708 >= 0) {
                                                        t709 = (t708 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t709 << 1) - 1);
                                                    t711 = nlRand();
                                                    t712 = (int)((int)t711 % (int)0x64);
                                                    *(float *)0x8C2FD910 = (float)t712;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                }
                                                *(float *)0x8C2FD914 = 0.0f;
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            }
                                            t730 = t721;
                                        }
                                        t739 = t730;
                                    }
                                    t748 = t739;
                                }
                                t757 = t748;
                            }
                            t833 = t757;
                        } else {
                            t762 = *(int *)(((int)stk + 28));
                            t763 = *(int *)((t762 + 0xC58));
                            if (((((int)t763 >= 0) ? (0x1 << (t763 & 31)) : ((-(int)t763 & 31) ? ((int)0x1 >> (-(int)t763 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                t764 = nlRand();
                                t765 = ((~(((~t764) + 0x1) & 0x1)) + 0x1);
                                if ((int)t764 >= 0) {
                                    t765 = (t764 & 0x1);
                                }
                                *(unsigned int *)(((int)stk + 16)) = (t765 + 0x1);
                                *(unsigned int *)0x8C2FD908 = 0x0;
                                *(float *)0x8C2FD910 = 0.0f;
                                *(unsigned int *)0x8C2FD90C = 0x0;
                                *(float *)0x8C2FD914 = 0.0f;
                                *(unsigned int *)0x8C2FD918 = 0x1;
                            } else {
                                t767 = *(int *)(((int)stk + 28));
                                t768 = *(int *)((t767 + 0xC58));
                                if (((((int)t768 >= 0) ? (0x1 << (t768 & 31)) : ((-(int)t768 & 31) ? ((int)0x1 >> (-(int)t768 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                    *(unsigned int *)(((int)stk + 16)) = 0x14;
                                    t769 = nlRand();
                                    t770 = ((~(((~t769) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t769 >= 0) {
                                        t770 = (t769 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD908 = ((t770 << 1) - 1);
                                    *(float *)0x8C2FD910 = 30.0f;
                                    *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                    t772 = nlRand();
                                    t773 = (int)((int)t772 % (int)0x3);
                                    *(float *)0x8C2FD914 = (float)(t773 + 0x5);
                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                } else {
                                    t774 = *(int *)(((int)stk + 28));
                                    t775 = *(int *)((t774 + 0xC58));
                                    if (((((int)t775 >= 0) ? (0x1 << (t775 & 31)) : ((-(int)t775 & 31) ? ((int)0x1 >> (-(int)t775 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                        t806 = a4;
                                    } else {
                                        t776 = nlRand();
                                        t777 = (int)((int)t776 % (int)0xA);
                                        if (t777 == 0) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x1;
                                            t778 = nlRand();
                                            t779 = ((~(((~t778) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t778 >= 0) {
                                                t779 = (t778 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t779 << 1) - 1);
                                            t781 = nlRand();
                                            t782 = ((~(((~t781) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t781 >= 0) {
                                                t782 = (t781 & 0x1);
                                            }
                                            *(float *)0x8C2FD910 = (float)t782;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                        } else {
                                            t784 = nlRand();
                                            t785 = ((~(((~t784) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t784 >= 0) {
                                                t785 = (t784 & 0x1);
                                            }
                                            if (t785 != 0) {
                                                t787 = nlRand();
                                                t788 = (int)((int)t787 % (int)0x5);
                                                t791 = ((-t788) - 1);
                                            } else {
                                                t789 = nlRand();
                                                t790 = (int)((int)t789 % (int)0xF);
                                                t791 = (t790 + 0x5);
                                            }
                                            *(unsigned int *)(((int)stk + 16)) = t791;
                                            t793 = nlRand();
                                            t794 = ((~(((~t793) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t793 >= 0) {
                                                t794 = (t793 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD908 = ((t794 << 1) - 1);
                                            t796 = nlRand();
                                            t797 = (int)((int)t796 % (int)0x1E);
                                            *(float *)0x8C2FD910 = (float)t797;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                        }
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    }
                                    t815 = t806;
                                }
                                t824 = t815;
                            }
                            t833 = t824;
                        }
                        t842 = t833;
                    }
                    t852 = t842;
                }
                t862 = t852;
            }
            t872 = t862;
        }
        t878 = *(int *)(((int)stk + 20));
        t879 = *(signed char *)((0x13F + t878));
        if ((unsigned char)t879 == 1) {
            t880 = *(int *)(((int)stk + 20));
            t881 = *(signed char *)((t880 + 0x140));
            if ((int)(unsigned char)t881 <= (int)0x1) {
                t882 = *(int *)(((int)stk + 12));
                t883 = *(int *)(((int)stk + 28));
                u884 = *(float *)((t883 + 0xB00));
                *(unsigned int *)0x8C2FD908 = (int)(u884 * (float)t882);
                t885 = nlRand();
                t886 = (int)((int)t885 % (int)0x5);
                *(float *)0x8C2FD910 = (float)(t886 + 0x44);
            } else {
                t887 = *(int *)(((int)stk + 12));
                t888 = *(int *)(((int)stk + 28));
                u889 = *(float *)((t888 + 0xB00));
                *(unsigned int *)0x8C2FD908 = (int)(-(u889 * (float)t887));
                t890 = nlRand();
                t891 = (int)((int)t890 % (int)0x5);
                *(float *)0x8C2FD910 = (float)(t891 + 0x44);
            }
            *(unsigned int *)0x8C2FD90C = 0x0;
            *(float *)0x8C2FD914 = 0.0f;
            *(unsigned int *)0x8C2FD918 = 0x1;
        } else {
            t896 = *(int *)(((int)stk + 20));
            t897 = *(signed char *)((0x13F + t896));
            if ((unsigned char)t897 == 2) {
                t898 = *(int *)(((int)stk + 20));
                t899 = *(signed char *)((0x140 + t898));
                if ((int)(unsigned char)t899 <= (int)0x1) {
                    t900 = *(int *)(((int)stk + 12));
                    t901 = *(int *)(((int)stk + 28));
                    u902 = *(float *)((0xB00 + t901));
                    *(unsigned int *)0x8C2FD908 = (int)(u902 * (float)t900);
                    t903 = nlRand();
                    t904 = (int)((int)t903 % (int)0x5);
                    *(float *)0x8C2FD910 = (float)(t904 + 0x44);
                } else {
                    t905 = *(int *)(((int)stk + 12));
                    t906 = *(int *)(((int)stk + 28));
                    u907 = *(float *)((t906 + 0xB00));
                    *(unsigned int *)0x8C2FD908 = (int)(-(u907 * (float)t905));
                    t908 = nlRand();
                    t909 = (int)((int)t908 % (int)0x5);
                    *(float *)0x8C2FD910 = (float)(t909 + 0x44);
                }
                *(unsigned int *)0x8C2FD90C = 0x0;
                *(float *)0x8C2FD914 = 0.0f;
                *(unsigned int *)0x8C2FD918 = 0x1;
            } else {
                t918 = t872;
            }
            t927 = t918;
        }
        u932 = *(float *)0x8C23D204;
        if (u932 > 1.0f) {
            t933 = *(int *)(((int)stk + 16));
            t937 = (0x5E - t933);
        } else {
            t934 = *(int *)(((int)stk + 16));
            t937 = (0x5D - t934);
        }
        *(float *)0x8C2FD91C = (float)t937;
        t939 = *(int *)(((int)stk + 16));
        if (t939 == 0) {
            t940 = *(int *)0x8C2FD90C;
            if (t940 == -1) {
                *(float *)0x8C2FD914 = 0.0f;
            }
        }
        t949 = *(int *)0x8C2FCC1C;
        if ((int)t949 < (int)0x14) {
            t950 = *(int *)0x8C2FCC1C;
            if ((int)t950 >= (int)0x4) {
                t951 = *(int *)(((int)stk + 16));
                if (t951 != 0) {
                    t952 = nlRand();
                    t953 = (int)((int)t952 % (int)0x3);
                    if (t953 == 0) {
                        u954 = *(float *)0x8C23D204;
                        if (u954 > 1.0f) {
                            nlRand();
                            return ((int (*)(void))(0x8C05C202))();
                        }
                        return ((int (*)(void))(0x8C05C230))();
                    }
                    return ((int (*)(void))(0x8C05C248))();
                }
                return ((int (*)(int))(0x8C05C248))(t927);
            }
            return ((int (*)(int))(0x8C05C248))(t927);
        }
        return ((int (*)(int))(0x8C05C248))(t927);
    }
    t957 = *(int *)0x8C287D5C;
    if (t957 == 0) {
        t958 = *(int *)0x8C2FCC1C;
        if (t958 != 13) {
            t959 = *(int *)(((int)stk + 28));
            t960 = *(int *)((0xC58 + t959));
            if (t960 == 16) {
                t961 = *(int *)(((int)stk + 24));
                t962 = *(int *)(((int)stk + 24));
                t963 = *(int *)(((t961 + 0x44) + 0x0));
                t964 = *(int *)((0x48 + t962));
                if ((int)(t963 + t964) >= (int)0x2) {
                    t965 = nlRand();
                    t966 = *(int *)0x8C15A0CC;
                    t967 = (int)((int)t965 % (int)(((t966 << 2) + t966) + 0x5));
                    if (t967 == 0) {
                        *(unsigned int *)0x8C15A0CC = 0x1;
                    } else {
                        *(unsigned int *)0x8C15A0CC = 0x0;
                    }
                } else {
                    *(unsigned int *)0x8C15A0CC = 0x0;
                    t977 = a4;
                }
                t983 = t977;
            } else {
                *(unsigned int *)0x8C15A0CC = 0x0;
                t983 = a4;
            }
            t989 = t983;
        } else {
            *(unsigned int *)0x8C15A0CC = 0x0;
            t989 = a4;
        }
        t995 = t989;
    } else {
        *(unsigned int *)0x8C15A0CC = 0x0;
        t995 = a4;
    }
    t997 = *(int *)(((int)stk + 28));
    *(unsigned int *)((t997 + 0xA24)) = 0x3;
    t998 = *(int *)0x8C15A0CC;
    if (t998 != 0) {
        t999 = nlRand();
        t1000 = (int)((int)t999 % (int)0x1E);
        *(float *)0x8C2FD91C = (float)(t1000 + 0x1);
        return ((int (*)(void))(0x8C05C590))();
    }
    *(float *)0x8C2FD91C = 70.0f;
    return ((int (*)(int))(0x8C05C590))(t995);
}
