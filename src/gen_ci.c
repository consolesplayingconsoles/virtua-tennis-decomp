/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuSglServe(int a4);

int cpuSglServe(int a4)
{
    int t11;
    int t13;
    int t15;
    int t19;
    int t20;
    int t21;
    int t25;
    int t26;
    int t28;
    int t30;
    int t41;
    int t933;
    int t50;
    int t56;
    int t53;
    int t65;
    int t73;
    int t68;
    float u86;
    float u87;
    int t90;
    int t89;
    int t94;
    int t100;
    int t97;
    int t109;
    int t117;
    int t112;
    float u130;
    float u131;
    int t134;
    int t133;
    int t182;
    int t138;
    int t144;
    int t141;
    int t153;
    int t161;
    int t156;
    float u174;
    float u175;
    int t178;
    int t177;
    float u206;
    float u207;
    int t911;
    int t212;
    int t213;
    int t215;
    int t216;
    int t225;
    int t251;
    int t252;
    int t255;
    int t258;
    int t268;
    int t269;
    int t272;
    int t276;
    int t277;
    int t285;
    int t286;
    int t289;
    int t301;
    int t302;
    int t307;
    int t308;
    int t310;
    int t311;
    int t317;
    int t318;
    int t320;
    int t321;
    int t326;
    int t327;
    int t328;
    int t339;
    int t336;
    int t343;
    int t344;
    int t415;
    int t420;
    int t421;
    int t424;
    int t425;
    int t426;
    int t428;
    int t429;
    int t434;
    int t437;
    int t438;
    int t442;
    int t443;
    int t446;
    int t448;
    int t449;
    int t450;
    int t454;
    int t455;
    int t463;
    int t464;
    int t511;
    int t512;
    int t513;
    int t515;
    int t516;
    int t521;
    int t524;
    int t525;
    int t529;
    int t530;
    int t533;
    int t535;
    int t536;
    int t537;
    int t541;
    int t542;
    int t550;
    int t551;
    int t587;
    int t588;
    int t589;
    int t591;
    int t592;
    int t597;
    int t600;
    int t601;
    int t605;
    int t606;
    int t609;
    int t611;
    int t612;
    int t613;
    int t617;
    int t618;
    int t626;
    int t627;
    int t681;
    int t682;
    int t683;
    int t686;
    int t687;
    int t688;
    int t693;
    int t695;
    int t696;
    int t697;
    int t699;
    int t700;
    int t702;
    int t703;
    int t711;
    int t712;
    int t805;
    int t823;
    float u829;
    int t953;
    int t954;
    int t968;
    int t976;
    int t922;
    int t198;
    int t79;
    int t190;
    int t123;
    int t167;
    int t230;
    int t235;
    int t461;
    int t548;
    int t624;
    int t709;
    int t794;
    int t797;
    int t803;
    int t842;
    int t843;
    int t857;
    int t858;
    int t895;
    int t945;
    int t946;
    int t947;
    int t948;
    int t949;
    int t950;
    int t951;
    int t969;
    int stk[10];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((*(int *)(((int)stk + 28))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t11 = (int)((int)(((*(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0))) + (*(int *)(((*(int *)(((int)stk + 24))) + 0x48)))) + 0x6) % (int)0x6);
        t13 = (int)((unsigned int)((int)((unsigned int)t11 + (unsigned int)0x0)) + ((((int)0x0 > (int)t11)) ? 1u : 0u));
        t15 = ((~(((~((t13 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t13 >> 1) + 0x2) >= 0) {
            t15 = (((t13 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((((-t15) + 0x1) << 1) - 1);
    } else {
        t19 = *(int *)(((0x48 + (*(int *)(((int)stk + 24)))) + 0x0));
        t20 = *(int *)((((*(int *)(((int)stk + 24))) + 0x44) + 0x0));
        t21 = ((~(((~((t20 + t19) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t20 + t19) + 0x2) >= 0) {
            t21 = (((t20 + t19) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((-(t21 << 1)) + 0x1);
        t25 = *(int *)(((*(int *)(((int)stk + 24))) + 0x38));
        t26 = *(int *)(((*(int *)(((int)stk + 24))) + 0x34));
        t28 = (int)((unsigned int)((int)((unsigned int)(t26 + t25) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t26 + t25))) ? 1u : 0u));
        t30 = ((~(((~((t28 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t28 >> 1) + 0x2) >= 0) {
            t30 = (((t28 >> 1) + 0x2) & 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) * ((-(t30 << 1)) + 0x1));
    }
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x0;
    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x20)) = 0x0;
    t41 = *(int *)((0xB68 + (*(int *)(((int)stk + 28)))));
    if (t41 != 0) {
        t933 = t41;
        if (t41 == 1) {
        } else {
            if (t41 != 2) {
                if (t41 == 5) {
                    t50 = *(int *)(((int)stk + 20));
                    *(unsigned short *)(((0x20 + t50) + 0x0)) = 0x0;
                    t56 = t50;
                    if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                        t53 = *(short *)0x8C2FD8EC;
                        *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t53 << 2) << 2) << 1));
                        *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                        t56 = (0x60 - (((t53 << 2) << 2) << 1));
                    }
                    if ((*(int *)0x8C159F9C) != 0) {
                        t65 = *(int *)(((int)stk + 20));
                        *(unsigned short *)((t65 + 0x20)) = ((*(short *)((t65 + 0x20))) + 0x10);
                        *(unsigned int *)0x8C159F9C = 0x0;
                        t79 = 0x8C159F9C;
                    } else {
                        t73 = t56;
                        if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                            t68 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((0x20 + t68)) = ((*(short *)((0x20 + t68))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                            *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                            t73 = t68;
                        }
                        t79 = t73;
                    }
                    u86 = *(float *)0x8C23D204;
                    u87 = *(float *)0x8C2FD900;
                    *(float *)0x8C2FD900 = (u87 - u86);
                    t90 = t79;
                    if (0.0f > (u87 - u86)) {
                        t89 = *(signed char *)0x8C2FD8FC;
                        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t89;
                        t90 = (unsigned char)t89;
                    }
                    t198 = t90;
                } else {
                    if (t41 == 6) {
                        t94 = *(int *)(((int)stk + 20));
                        *(unsigned short *)(((0x20 + t94) + 0x0)) = 0x0;
                        t100 = t94;
                        if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                            t97 = *(short *)0x8C2FD8EC;
                            *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t97 << 2) << 2) << 1));
                            *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                            t100 = (0x60 - (((t97 << 2) << 2) << 1));
                        }
                        if ((*(int *)0x8C159F9C) != 0) {
                            t109 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((t109 + 0x20)) = ((*(short *)((t109 + 0x20))) + 0x10);
                            *(unsigned int *)0x8C159F9C = 0x0;
                            t123 = 0x8C159F9C;
                        } else {
                            t117 = t100;
                            if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                                t112 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((0x20 + t112)) = ((*(short *)((0x20 + t112))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                                *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                                t117 = t112;
                            }
                            t123 = t117;
                        }
                        u130 = *(float *)0x8C23D204;
                        u131 = *(float *)0x8C2FD900;
                        *(float *)0x8C2FD900 = (u131 - u130);
                        t134 = t123;
                        if (0.0f > (u131 - u130)) {
                            t133 = *(signed char *)0x8C2FD8FC;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t133;
                            t134 = (unsigned char)t133;
                        }
                        t190 = t134;
                    } else {
                        t182 = t41;
                        if (t41 == 7) {
                            t138 = *(int *)(((int)stk + 20));
                            *(unsigned short *)(((0x20 + t138) + 0x0)) = 0x0;
                            t144 = t138;
                            if (!(0.0f > (*(float *)0x8C2FD8F4))) {
                                t141 = *(short *)0x8C2FD8EC;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t141 << 2) << 2) << 1));
                                *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) - (*(float *)0x8C23D204));
                                t144 = (0x60 - (((t141 << 2) << 2) << 1));
                            }
                            if ((*(int *)0x8C159F9C) != 0) {
                                t153 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((t153 + 0x20)) = ((*(short *)((t153 + 0x20))) + 0x10);
                                *(unsigned int *)0x8C159F9C = 0x0;
                                t167 = 0x8C159F9C;
                            } else {
                                t161 = t144;
                                if (!(0.0f > (*(float *)0x8C2FD8F8))) {
                                    t156 = *(int *)(((int)stk + 20));
                                    *(unsigned short *)((0x20 + t156)) = ((*(short *)((0x20 + t156))) + (0x18 - (((*(short *)0x8C2FD8F0) << 2) << 1)));
                                    *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) - (*(float *)0x8C23D204));
                                    t161 = t156;
                                }
                                t167 = t161;
                            }
                            u174 = *(float *)0x8C23D204;
                            u175 = *(float *)0x8C2FD900;
                            *(float *)0x8C2FD900 = (u175 - u174);
                            t178 = t167;
                            if (0.0f > (u175 - u174)) {
                                t177 = *(signed char *)0x8C2FD8FC;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t177;
                                t178 = (unsigned char)t177;
                            }
                            t182 = t178;
                        }
                        t190 = t182;
                    }
                    t198 = t190;
                }
                t922 = t198;
            } else {
                u206 = *(float *)0x8C23D204;
                u207 = *(float *)0x8C2FD900;
                *(float *)0x8C2FD900 = (u207 - u206);
                t911 = t41;
                if (!(0.0f > (u207 - u206))) {
                } else {
                    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x1;
                    if ((*(int *)0x8C421F60) != 0) {
                        t212 = nlRand();
                        t213 = ((~(((~t212) + 0x1) & 0x1)) + 0x1);
                        if ((int)t212 >= 0) {
                            t213 = (t212 & 0x1);
                        }
                        *(unsigned int *)(((int)stk + 16)) = (t213 + 0x1);
                        t215 = nlRand();
                        t216 = ((~(((~t215) + 0x1) & 0x1)) + 0x1);
                        if ((int)t215 >= 0) {
                            t216 = (t215 & 0x1);
                        }
                        *(unsigned int *)0x8C2FD8EC = ((t216 << 1) - 1);
                        *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                        *(float *)0x8C2FD8F8 = 0.0f;
                        *(unsigned char *)0x8C2FD8FC = 0x1;
                    } else {
                        if ((*(int *)0x8C159FA0) != 0) {
                            *(unsigned char *)0x8C2FD8FC = 0x0;
                            *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x3;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x20)) = 0x20;
                            t225 = (int)((int)(nlRand()) % (int)0x3);
                            if (t225 != 0) {
                                if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 48.0f;
                                    t230 = 0xFFFFFFFF;
                                } else {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 43.0f;
                                    t230 = 0x1;
                                }
                                *(unsigned int *)0x8C2FD8EC = t230;
                            } else {
                                if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 39.0f;
                                    t235 = 0x1;
                                } else {
                                    *(float *)0x8C2FD8F4 = 200.0f;
                                    *(float *)0x8C2FD8F8 = 41.0f;
                                    t235 = 0xFFFFFFFF;
                                }
                                *(unsigned int *)0x8C2FD8EC = t235;
                            }
                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                        } else {
                            if ((*(int *)0x8C20D14C) != 6) {
                                if ((int)(*(int *)0x8C2FCC1C) < (int)0x4) {
                                    *(unsigned int *)(((int)stk + 16)) = (((-(*(int *)0x8C2FCC1C)) + ((int)((int)(nlRand()) % (int)0xA))) + 0xF);
                                    t251 = nlRand();
                                    t252 = ((~(((~t251) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t251 >= 0) {
                                        t252 = (t251 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD8EC = ((t252 << 1) - 1);
                                    t255 = *(int *)0x8C2FCC1C;
                                    *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)((((t255 << 2) + t255) << 1) + 0x14)));
                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                    t258 = *(int *)0x8C2FCC1C;
                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)(((t258 << 2) + t258) + 0xA)));
                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                } else {
                                    if ((int)(*(int *)0x8C2FCC1C) < (int)0x6) {
                                        *(unsigned int *)(((int)stk + 16)) = (((-(*(int *)0x8C2FCC1C)) + ((int)((int)(nlRand()) % (int)0x3))) + 0xA);
                                        t268 = nlRand();
                                        t269 = ((~(((~t268) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t268 >= 0) {
                                            t269 = (t268 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD8EC = ((t269 << 1) - 1);
                                        t272 = *(int *)0x8C2FCC1C;
                                        *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)((((t272 << 2) + t272) << 1) + 0x14))) + 0x32);
                                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                        *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x5));
                                        t276 = nlRand();
                                        t277 = ((~(((~t276) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t276 >= 0) {
                                            t277 = (t276 & 0x1);
                                        }
                                        *(unsigned char *)0x8C2FD8FC = (t277 + 0x1);
                                    } else {
                                        if ((int)(*(int *)0x8C2FCC1C) < (int)0x6) {
                                            *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x3));
                                            t285 = nlRand();
                                            t286 = ((~(((~t285) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t285 >= 0) {
                                                t286 = (t285 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t286 << 1) - 1);
                                            t289 = *(int *)0x8C2FCC1C;
                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)((((t289 << 2) + t289) << 1) + 0x14))) + 0x46);
                                            if ((*(int *)(((int)stk + 16))) == 0) {
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                            } else {
                                                *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x5));
                                            }
                                            t301 = nlRand();
                                            t302 = ((~(((~t301) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t301 >= 0) {
                                                t302 = (t301 & 0x1);
                                            }
                                            *(unsigned char *)0x8C2FD8FC = (t302 + 0x1);
                                        } else {
                                            if ((*(int *)0x8C287D5C) != 0) {
                                                t307 = nlRand();
                                                t308 = ((~(((~t307) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t307 >= 0) {
                                                    t308 = (t307 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t308;
                                                t310 = nlRand();
                                                t311 = ((~(((~t310) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t310 >= 0) {
                                                    t311 = (t310 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t311 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x50);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 16) {
                                                    t317 = nlRand();
                                                    t318 = ((~(((~t317) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t317 >= 0) {
                                                        t318 = (t317 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t318;
                                                    t320 = nlRand();
                                                    t321 = ((~(((~t320) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t320 >= 0) {
                                                        t321 = (t320 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t321 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x50);
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                    *(float *)0x8C2FD8F8 = 0.0f;
                                                    *(unsigned char *)0x8C2FD8FC = 0x1;
                                                } else {
                                                    t326 = (int)((int)(nlRand()) % (int)0xA);
                                                    *(unsigned int *)(((int)stk + 8)) = t326;
                                                    if ((int)t326 < (int)0x5) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        t327 = nlRand();
                                                        t328 = ((~(((~t327) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t327 >= 0) {
                                                            t328 = (t327 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD8EC = ((t328 << 1) - 1);
                                                        *(float *)0x8C2FD8F4 = 100.0f;
                                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    } else {
                                                        if ((int)t326 < (int)0x7) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t339 = 0x1;
                                                            if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                                            } else {
                                                                t336 = 0x0;
                                                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                                    t336 = 0xFFFFFFFF;
                                                                }
                                                                t339 = t336;
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = (-(t339 * (*(int *)(((int)stk + 12)))));
                                                            *(float *)0x8C2FD8F4 = 100.0f;
                                                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                            *(float *)0x8C2FD8F8 = 3.0f;
                                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                                        } else {
                                                            if ((int)t326 < (int)0x9) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                *(unsigned int *)0x8C2FD8EC = 0x1;
                                                                *(float *)0x8C2FD8F4 = 100.0f;
                                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                                *(unsigned char *)0x8C2FD8FC = 0x2;
                                                            } else {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                t343 = nlRand();
                                                                t344 = ((~(((~t343) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t343 >= 0) {
                                                                    t344 = (t343 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD8EC = ((t344 << 1) - 1);
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
                                *(unsigned char *)(((0x12B + (*(int *)(((int)stk + 20)))) + 0x0)) = (*(int *)((((*(int *)(((0xC58 + (*(int *)(((int)stk + 28)))) + 0x0))) << 2) + 0x8C159F50)));
                                if ((*(int *)0x8C2FCC20) != 0) {
                                    t415 = *(int *)0x8C2FCC20;
                                    if (t415 != 1) {
                                        if (t415 != 2) {
                                            *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x3));
                                            t420 = nlRand();
                                            t421 = ((~(((~t420) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t420 >= 0) {
                                                t421 = (t420 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t421 << 1) - 1);
                                            *(float *)0x8C2FD8F4 = 100.0f;
                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                            *(float *)0x8C2FD8F8 = 0.0f;
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        } else {
                                            t424 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t424 >= 0) ? (0x1 << (t424 & 31)) : ((-(int)t424 & 31) ? ((int)0x1 >> (-(int)t424 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t425 = nlRand();
                                                t426 = ((~(((~t425) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t425 >= 0) {
                                                    t426 = (t425 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t426;
                                                t428 = nlRand();
                                                t429 = ((~(((~t428) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t428 >= 0) {
                                                    t429 = (t428 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t429 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t434 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t434 >= 0) ? (0x1 << (t434 & 31)) : ((-(int)t434 & 31) ? ((int)0x1 >> (-(int)t434 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xA);
                                                    t437 = nlRand();
                                                    t438 = ((~(((~t437) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t437 >= 0) {
                                                        t438 = (t437 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t438 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)(((int)((int)(nlRand()) % (int)0xF)) + 0xA);
                                                    t442 = nlRand();
                                                    t443 = ((~(((~t442) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t442 >= 0) {
                                                        t443 = (t442 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t443 + 0x1);
                                                } else {
                                                    t446 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t446 >= 0) ? (0x1 << (t446 & 31)) : ((-(int)t446 & 31) ? ((int)0x1 >> (-(int)t446 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t448 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t448 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t449 = nlRand();
                                                            t450 = ((~(((~t449) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t449 >= 0) {
                                                                t450 = (t449 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t450 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t454 = nlRand();
                                                            t455 = ((~(((~t454) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t454 >= 0) {
                                                                t455 = (t454 & 0x1);
                                                            }
                                                            if (t455 != 0) {
                                                                t461 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t461 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t461;
                                                            t463 = nlRand();
                                                            t464 = ((~(((~t463) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t463 >= 0) {
                                                                t464 = (t463 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t464 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0xC58))) > (int)0x7) {
                                            t511 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                            if (((((int)t511 >= 0) ? (0x1 << (t511 & 31)) : ((-(int)t511 & 31) ? ((int)0x1 >> (-(int)t511 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t512 = nlRand();
                                                t513 = ((~(((~t512) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t512 >= 0) {
                                                    t513 = (t512 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = (t513 + 0x1);
                                                t515 = nlRand();
                                                t516 = ((~(((~t515) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t515 >= 0) {
                                                    t516 = (t515 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t516 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t521 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t521 >= 0) ? (0x1 << (t521 & 31)) : ((-(int)t521 & 31) ? ((int)0x1 >> (-(int)t521 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                    t524 = nlRand();
                                                    t525 = ((~(((~t524) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t524 >= 0) {
                                                        t525 = (t524 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t525 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0xA));
                                                    t529 = nlRand();
                                                    t530 = ((~(((~t529) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t529 >= 0) {
                                                        t530 = (t529 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t530 + 0x1);
                                                } else {
                                                    t533 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t533 >= 0) ? (0x1 << (t533 & 31)) : ((-(int)t533 & 31) ? ((int)0x1 >> (-(int)t533 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t535 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t535 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                            t536 = nlRand();
                                                            t537 = ((~(((~t536) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t536 >= 0) {
                                                                t537 = (t536 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t537 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t541 = nlRand();
                                                            t542 = ((~(((~t541) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t541 >= 0) {
                                                                t542 = (t541 & 0x1);
                                                            }
                                                            if (t542 != 0) {
                                                                t548 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t548 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t548;
                                                            t550 = nlRand();
                                                            t551 = ((~(((~t550) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t550 >= 0) {
                                                                t551 = (t550 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t551 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x28));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        } else {
                                            t587 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t587 >= 0) ? (0x1 << (t587 & 31)) : ((-(int)t587 & 31) ? ((int)0x1 >> (-(int)t587 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                t588 = nlRand();
                                                t589 = ((~(((~t588) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t588 >= 0) {
                                                    t589 = (t588 & 0x1);
                                                }
                                                *(unsigned int *)(((int)stk + 16)) = t589;
                                                t591 = nlRand();
                                                t592 = ((~(((~t591) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t591 >= 0) {
                                                    t592 = (t591 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD8EC = ((t592 << 1) - 1);
                                                *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            } else {
                                                t597 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t597 >= 0) ? (0x1 << (t597 & 31)) : ((-(int)t597 & 31) ? ((int)0x1 >> (-(int)t597 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                    t600 = nlRand();
                                                    t601 = ((~(((~t600) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t600 >= 0) {
                                                        t601 = (t600 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t601 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = 100.0f;
                                                    *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                                    *(float *)0x8C2FD8F8 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                    t605 = nlRand();
                                                    t606 = ((~(((~t605) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t605 >= 0) {
                                                        t606 = (t605 & 0x1);
                                                    }
                                                    *(unsigned char *)0x8C2FD8FC = (t606 + 0x1);
                                                } else {
                                                    t609 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t609 >= 0) ? (0x1 << (t609 & 31)) : ((-(int)t609 & 31) ? ((int)0x1 >> (-(int)t609 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                    } else {
                                                        t611 = (int)((int)(nlRand()) % (int)0x5);
                                                        if (t611 == 0) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t612 = nlRand();
                                                            t613 = ((~(((~t612) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t612 >= 0) {
                                                                t613 = (t612 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t613 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        } else {
                                                            t617 = nlRand();
                                                            t618 = ((~(((~t617) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t617 >= 0) {
                                                                t618 = (t617 & 0x1);
                                                            }
                                                            if (t618 != 0) {
                                                                t624 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                            } else {
                                                                t624 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                            }
                                                            *(unsigned int *)(((int)stk + 16)) = t624;
                                                            t626 = nlRand();
                                                            t627 = ((~(((~t626) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t626 >= 0) {
                                                                t627 = (t626 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD8EC = ((t627 << 1) - 1);
                                                            *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                            *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                        }
                                                        *(float *)0x8C2FD8F8 = 0.0f;
                                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t681 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                    if (((((int)t681 >= 0) ? (0x1 << (t681 & 31)) : ((-(int)t681 & 31) ? ((int)0x1 >> (-(int)t681 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                        t682 = nlRand();
                                        t683 = ((~(((~t682) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t682 >= 0) {
                                            t683 = (t682 & 0x1);
                                        }
                                        *(unsigned int *)(((int)stk + 16)) = (t683 + 0x1);
                                        *(unsigned int *)0x8C2FD8EC = 0x0;
                                        *(float *)0x8C2FD8F4 = 0.0f;
                                        *(unsigned int *)0x8C2FD8F0 = 0x0;
                                        *(float *)0x8C2FD8F8 = 0.0f;
                                        *(unsigned char *)0x8C2FD8FC = 0x1;
                                    } else {
                                        t686 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                        if (((((int)t686 >= 0) ? (0x1 << (t686 & 31)) : ((-(int)t686 & 31) ? ((int)0x1 >> (-(int)t686 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x14;
                                            t687 = nlRand();
                                            t688 = ((~(((~t687) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t687 >= 0) {
                                                t688 = (t687 & 0x1);
                                            }
                                            *(unsigned int *)0x8C2FD8EC = ((t688 << 1) - 1);
                                            *(float *)0x8C2FD8F4 = 30.0f;
                                            *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                                            *(float *)0x8C2FD8F8 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0xF);
                                            *(unsigned char *)0x8C2FD8FC = 0x1;
                                        } else {
                                            t693 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t693 >= 0) ? (0x1 << (t693 & 31)) : ((-(int)t693 & 31) ? ((int)0x1 >> (-(int)t693 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                            } else {
                                                t695 = (int)((int)(nlRand()) % (int)0xA);
                                                if (t695 == 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                    t696 = nlRand();
                                                    t697 = ((~(((~t696) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t696 >= 0) {
                                                        t697 = (t696 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t697 << 1) - 1);
                                                    t699 = nlRand();
                                                    t700 = ((~(((~t699) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t699 >= 0) {
                                                        t700 = (t699 & 0x1);
                                                    }
                                                    *(float *)0x8C2FD8F4 = (float)t700;
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                } else {
                                                    t702 = nlRand();
                                                    t703 = ((~(((~t702) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t702 >= 0) {
                                                        t703 = (t702 & 0x1);
                                                    }
                                                    if (t703 != 0) {
                                                        t709 = ((-((int)((int)(nlRand()) % (int)0x5))) - 1);
                                                    } else {
                                                        t709 = (((int)((int)(nlRand()) % (int)0xF)) + 0x5);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t709;
                                                    t711 = nlRand();
                                                    t712 = ((~(((~t711) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t711 >= 0) {
                                                        t712 = (t711 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD8EC = ((t712 << 1) - 1);
                                                    *(float *)0x8C2FD8F4 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                    *(unsigned int *)0x8C2FD8F0 = 0x0;
                                                }
                                                *(float *)0x8C2FD8F8 = 0.0f;
                                                *(unsigned char *)0x8C2FD8FC = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((*(float *)0x8C23D204) > 1.0f) {
                        t794 = (0x5E - (*(int *)(((int)stk + 16))));
                    } else {
                        t794 = (0x5D - (*(int *)(((int)stk + 16))));
                    }
                    *(float *)0x8C2FD900 = (float)t794;
                    if (((*(int *)(((int)stk + 16))) == 0) && (t797 = *(int *)0x8C2FD8F0, t797 == -1)) {
                        *(float *)0x8C2FD8F8 = 0.0f;
                    }
                    if (((int)(*(int *)0x8C2FCC1C) >= (int)0x4) && (t803 = *(int *)(((int)stk + 16)), t803 != 0)) {
                        t805 = (int)((int)(nlRand()) % (int)0x3);
                        if (t805 == 0) {
                            *(float *)0x8C2FD900 = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0x5E);
                        }
                    }
                    if ((*(int *)0x8C159FA0) != 0) {
                    } else {
                        t823 = *(int *)0x8C2FD8EC;
                        u829 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t823) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t823))) ? 1u : 0u))) >> 1);
                        u829 = u829 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                        *(unsigned int *)(((int)stk + 8)) = (int)(u829 + 1.0f);
                        if ((unsigned char)(*(signed char *)0x8C2FD8FC) == 1) {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t842 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                t843 = (*(int *)(((int)stk + 8)));
                            } else {
                                t842 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                t843 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t842 + t843) + 0x0)));
                        } else {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t857 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                t858 = (*(int *)(((int)stk + 8)));
                            } else {
                                t857 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                t858 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t857 + t858) + 0x0)));
                        }
                        if ((*(float *)0x8C2FD8F4) > (float)(*(int *)(((int)stk + 4)))) {
                            *(float *)0x8C2FD8F4 = (float)(*(int *)(((int)stk + 4)));
                        }
                    }
                    if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x5C))) != 0) {
                        *(float *)0x8C2FD8F4 = ((*(float *)0x8C2FD8F4) * 0.699999988f);
                        *(float *)0x8C2FD8F8 = ((*(float *)0x8C2FD8F8) * 0.899999976f);
                    }
                    if (((unsigned char)(*(signed char *)0x8C2FD8FC) == 2) && (t895 = *(int *)0x8C2FD8EC, t895 == -1)) {
                        *(float *)0x8C2FD8F8 = 10.0f;
                        *(unsigned int *)0x8C2FD8F0 = 0xFFFFFFFF;
                    }
                    if ((*(int *)0x8C2FD8EC) == 0) {
                        *(float *)0x8C2FD8F4 = 0.0f;
                    }
                    if ((*(int *)0x8C2FD8F0) == 0) {
                        *(float *)0x8C2FD8F8 = 0.0f;
                    }
                    *(unsigned int *)0x8C159F9C = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x12B)));
                    t911 = 0x12B;
                }
                t922 = t911;
            }
            t933 = t922;
        }
        t976 = t933;
    } else {
        if (((*(int *)0x8C287D5C) == 0) && ((t945 = *(int *)0x8C2FCC1C, t945 != 12) && ((t946 = *(int *)(((int)stk + 28)), t947 = *(int *)((0xC58 + t946)), t947 == 16) && (t948 = *(int *)(((int)stk + 24)), t949 = *(int *)(((int)stk + 24)), t950 = *(int *)(((t948 + 0x44) + 0x0)), t951 = *(int *)((0x48 + t949)), (int)(t950 + t951) >= (int)0x2)))) {
            t953 = *(int *)0x8C159FA0;
            t954 = (int)((int)(nlRand()) % (int)(((t953 << 2) + t953) + 0x5));
            if (t954 == 0) {
                *(unsigned int *)0x8C159FA0 = 0x1;
            } else {
                *(unsigned int *)0x8C159FA0 = 0x0;
            }
        } else {
            *(unsigned int *)0x8C159FA0 = 0x0;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0xA24)) = 0x3;
        if ((*(int *)0x8C159FA0) != 0) {
            t968 = (int)((int)(nlRand()) % (int)0x1E);
            *(float *)0x8C2FD900 = (float)(t968 + 0x1);
            t969 = (t968 + 0x1);
        } else {
            *(float *)0x8C2FD900 = 70.0f;
            t969 = 0x8C04680C;
        }
        t976 = t969;
    }
    return t976;
}
