/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int cpuDblServe(int a4);

int cpuDblServe(int a4)
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
    int t1365;
    int t62;
    int t68;
    int t65;
    int t77;
    int t85;
    int t80;
    float u98;
    float u99;
    int t102;
    int t101;
    int t106;
    int t112;
    int t109;
    int t121;
    int t129;
    int t124;
    float u142;
    float u143;
    int t146;
    int t145;
    int t194;
    int t150;
    int t156;
    int t153;
    int t165;
    int t173;
    int t168;
    float u186;
    float u187;
    int t190;
    int t189;
    int t222;
    int t224;
    int t230;
    int t227;
    float u241;
    float u242;
    int t1343;
    int t257;
    int t258;
    int t262;
    int t263;
    int t273;
    int t274;
    int t280;
    int t281;
    int t290;
    int t291;
    int t295;
    int t296;
    int t299;
    int t300;
    int t301;
    int t303;
    int t304;
    int t315;
    int t312;
    int t363;
    int t364;
    int t366;
    int t367;
    int t377;
    int t398;
    int t399;
    int t418;
    int t419;
    int t449;
    int t450;
    int t461;
    int t462;
    int t467;
    int t468;
    int t469;
    int t480;
    int t477;
    int t484;
    int t485;
    int t537;
    int t538;
    int t539;
    int t543;
    int t544;
    int t571;
    int t622;
    int t629;
    int t630;
    int t634;
    int t635;
    int t656;
    int t657;
    int t658;
    int t660;
    int t661;
    int t666;
    int t669;
    int t670;
    int t674;
    int t675;
    int t678;
    int t680;
    int t681;
    int t682;
    int t686;
    int t687;
    int t695;
    int t696;
    int t743;
    int t744;
    int t745;
    int t747;
    int t748;
    int t753;
    int t756;
    int t757;
    int t761;
    int t762;
    int t765;
    int t767;
    int t768;
    int t769;
    int t773;
    int t774;
    int t782;
    int t783;
    int t819;
    int t820;
    int t821;
    int t823;
    int t824;
    int t829;
    int t832;
    int t833;
    int t837;
    int t838;
    int t841;
    int t843;
    int t844;
    int t845;
    int t849;
    int t850;
    int t858;
    int t859;
    int t913;
    int t914;
    int t915;
    int t918;
    int t919;
    int t920;
    int t925;
    int t927;
    int t928;
    int t929;
    int t931;
    int t932;
    int t934;
    int t935;
    int t943;
    int t944;
    int t1107;
    int t1135;
    float u1141;
    int t1190;
    float u1196;
    int t1244;
    float u1250;
    int t1385;
    int t1386;
    int t1400;
    int t1408;
    int t1354;
    int t210;
    int t91;
    int t202;
    int t135;
    int t179;
    int t220;
    int t221;
    int t235;
    int t382;
    int t387;
    int t456;
    int t457;
    int t554;
    int t582;
    int t693;
    int t780;
    int t856;
    int t941;
    int t1095;
    int t1098;
    int t1104;
    int t1105;
    int t1114;
    int t1154;
    int t1155;
    int t1169;
    int t1170;
    int t1209;
    int t1210;
    int t1224;
    int t1225;
    int t1263;
    int t1264;
    int t1278;
    int t1279;
    int t1327;
    int t1377;
    int t1378;
    int t1379;
    int t1380;
    int t1381;
    int t1382;
    int t1383;
    int t1401;
    int stk[9];

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
        t1365 = t41;
        if (t41 == 1) {
        } else {
            if (t41 != 2) {
                if (t41 == 5) {
                    t62 = *(int *)(((int)stk + 20));
                    *(unsigned short *)(((0x20 + t62) + 0x0)) = 0x0;
                    t68 = t62;
                    if (!(0.0f > (*(float *)0x8C2FD910))) {
                        t65 = *(short *)0x8C2FD908;
                        *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t65 << 2) << 2) << 1));
                        *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                        t68 = (0x60 - (((t65 << 2) << 2) << 1));
                    }
                    if ((*(int *)0x8C2FD920) != 0) {
                        t77 = *(int *)(((int)stk + 20));
                        *(unsigned short *)((t77 + 0x20)) = ((*(short *)((t77 + 0x20))) + 0x10);
                        *(unsigned int *)0x8C2FD920 = 0x0;
                        t91 = 0x8C2FD920;
                    } else {
                        t85 = t68;
                        if (!(0.0f > (*(float *)0x8C2FD914))) {
                            t80 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((0x20 + t80)) = ((*(short *)((0x20 + t80))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                            *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                            t85 = t80;
                        }
                        t91 = t85;
                    }
                    u98 = *(float *)0x8C23D204;
                    u99 = *(float *)0x8C2FD91C;
                    *(float *)0x8C2FD91C = (u99 - u98);
                    t102 = t91;
                    if (0.0f > (u99 - u98)) {
                        t101 = *(signed char *)0x8C2FD918;
                        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t101;
                        t102 = (unsigned char)t101;
                    }
                    t210 = t102;
                } else {
                    if (t41 == 6) {
                        t106 = *(int *)(((int)stk + 20));
                        *(unsigned short *)(((0x20 + t106) + 0x0)) = 0x0;
                        t112 = t106;
                        if (!(0.0f > (*(float *)0x8C2FD910))) {
                            t109 = *(short *)0x8C2FD908;
                            *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t109 << 2) << 2) << 1));
                            *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                            t112 = (0x60 - (((t109 << 2) << 2) << 1));
                        }
                        if ((*(int *)0x8C2FD920) != 0) {
                            t121 = *(int *)(((int)stk + 20));
                            *(unsigned short *)((t121 + 0x20)) = ((*(short *)((t121 + 0x20))) + 0x10);
                            *(unsigned int *)0x8C2FD920 = 0x0;
                            t135 = 0x8C2FD920;
                        } else {
                            t129 = t112;
                            if (!(0.0f > (*(float *)0x8C2FD914))) {
                                t124 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((0x20 + t124)) = ((*(short *)((0x20 + t124))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                                *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                                t129 = t124;
                            }
                            t135 = t129;
                        }
                        u142 = *(float *)0x8C23D204;
                        u143 = *(float *)0x8C2FD91C;
                        *(float *)0x8C2FD91C = (u143 - u142);
                        t146 = t135;
                        if (0.0f > (u143 - u142)) {
                            t145 = *(signed char *)0x8C2FD918;
                            *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t145;
                            t146 = (unsigned char)t145;
                        }
                        t202 = t146;
                    } else {
                        t194 = t41;
                        if (t41 == 7) {
                            t150 = *(int *)(((int)stk + 20));
                            *(unsigned short *)(((0x20 + t150) + 0x0)) = 0x0;
                            t156 = t150;
                            if (!(0.0f > (*(float *)0x8C2FD910))) {
                                t153 = *(short *)0x8C2FD908;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = (0x60 - (((t153 << 2) << 2) << 1));
                                *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) - (*(float *)0x8C23D204));
                                t156 = (0x60 - (((t153 << 2) << 2) << 1));
                            }
                            if ((*(int *)0x8C2FD920) != 0) {
                                t165 = *(int *)(((int)stk + 20));
                                *(unsigned short *)((t165 + 0x20)) = ((*(short *)((t165 + 0x20))) + 0x10);
                                *(unsigned int *)0x8C2FD920 = 0x0;
                                t179 = 0x8C2FD920;
                            } else {
                                t173 = t156;
                                if (!(0.0f > (*(float *)0x8C2FD914))) {
                                    t168 = *(int *)(((int)stk + 20));
                                    *(unsigned short *)((0x20 + t168)) = ((*(short *)((0x20 + t168))) + (0x18 - (((*(short *)0x8C2FD90C) << 2) << 1)));
                                    *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) - (*(float *)0x8C23D204));
                                    t173 = t168;
                                }
                                t179 = t173;
                            }
                            u186 = *(float *)0x8C23D204;
                            u187 = *(float *)0x8C2FD91C;
                            *(float *)0x8C2FD91C = (u187 - u186);
                            t190 = t179;
                            if (0.0f > (u187 - u186)) {
                                t189 = *(signed char *)0x8C2FD918;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = (unsigned char)t189;
                                t190 = (unsigned char)t189;
                            }
                            t194 = t190;
                        }
                        t202 = t194;
                    }
                    t210 = t202;
                }
                t1354 = t210;
            } else {
                if (((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) != 1) && (t220 = *(int *)(((int)stk + 20)), t221 = *(signed char *)((0x13F + t220)), (unsigned char)t221 != 2)) {
                    t235 = (unsigned char)t221;
                } else {
                    t222 = *(int *)(((int)stk + 28));
                    t224 = *(int *)(((int)stk + 20));
                    t230 = 0x1;
                    if ((-(*(float *)((t222 + 0xAE8)))) > 0.0f) {
                    } else {
                        t227 = 0x0;
                        if (0.0f > (-(*(float *)((0xAE8 + (*(int *)(((int)stk + 28)))))))) {
                            t227 = 0xFFFFFFFF;
                        }
                        t230 = t227;
                    }
                    *(unsigned short *)((t224 + 0x20)) = (int)((-((((*(float *)((t222 + 0xB00))) * (float)t230)) * 32.0f)) + 96.0f);
                    t235 = 0x20;
                }
                u241 = *(float *)0x8C23D204;
                u242 = *(float *)0x8C2FD91C;
                *(float *)0x8C2FD91C = (u242 - u241);
                t1343 = t235;
                if (!(0.0f > (u242 - u241))) {
                } else {
                    *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x1;
                    if ((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) << 2)))) != 1) {
                        if ((*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 0) {
                            t257 = nlRand();
                            t258 = ((~(((~t257) + 0x1) & 0x1)) + 0x1);
                            if ((int)t257 >= 0) {
                                t258 = (t257 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t258 << 1) - 1);
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x28);
                            t262 = nlRand();
                            t263 = ((~(((~t262) + 0x1) & 0x1)) + 0x1);
                            if ((int)t262 >= 0) {
                                t263 = (t262 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD90C = ((t263 << 1) - 1);
                            *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0x1E));
                            *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0x1E)) + 0x5);
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            if ((unsigned char)(*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 1) {
                                t273 = nlRand();
                                t274 = ((~(((~t273) + 0x1) & 0x1)) + 0x1);
                                if ((int)t273 >= 0) {
                                    t274 = (t273 & 0x1);
                                }
                                *(unsigned int *)0x8C2FD908 = ((t274 << 1) - 1);
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x14)) + 0x37);
                                *(unsigned int *)0x8C2FD90C = 0x0;
                                *(float *)0x8C2FD914 = 0.0f;
                                *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)0x7));
                                t280 = nlRand();
                                t281 = ((~(((~t280) + 0x1) & 0x3)) + 0x1);
                                if ((int)t280 >= 0) {
                                    t281 = (t280 & 0x3);
                                }
                                if (t281 != 0) {
                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                } else {
                                    *(unsigned int *)0x8C2FD918 = 0x2;
                                }
                            } else {
                                if ((unsigned char)(*(signed char *)((0x141 + (*(int *)(((int)stk + 20)))))) == 2) {
                                    t290 = nlRand();
                                    t291 = ((~(((~t290) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t290 >= 0) {
                                        t291 = (t290 & 0x1);
                                    }
                                    *(unsigned int *)0x8C2FD908 = ((t291 << 1) - 1);
                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                    *(float *)0x8C2FD914 = 0.0f;
                                    t295 = nlRand();
                                    t296 = ((~(((~t295) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t295 >= 0) {
                                        t296 = (t295 & 0x1);
                                    }
                                    *(unsigned int *)(((int)stk + 16)) = t296;
                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                } else {
                                    t299 = (int)((int)(nlRand()) % (int)0x3);
                                    if (t299 != 0) {
                                        t300 = nlRand();
                                        t301 = ((~(((~t300) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t300 >= 0) {
                                            t301 = (t300 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t301 << 1) - 1);
                                        *(float *)0x8C2FD910 = 100.0f;
                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                        *(float *)0x8C2FD914 = 0.0f;
                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        t303 = nlRand();
                                        t304 = ((~(((~t303) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t303 >= 0) {
                                            t304 = (t303 & 0x1);
                                        }
                                        if (t304 != 0) {
                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                            t315 = 0x1;
                                            if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                            } else {
                                                t312 = 0x0;
                                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                    t312 = 0xFFFFFFFF;
                                                }
                                                t315 = t312;
                                            }
                                            *(unsigned int *)0x8C2FD908 = (-(t315 * (*(int *)(((int)stk + 12)))));
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
                        if ((*(int *)0x8C421F60) != 0) {
                            t363 = nlRand();
                            t364 = ((~(((~t363) + 0x1) & 0x1)) + 0x1);
                            if ((int)t363 >= 0) {
                                t364 = (t363 & 0x1);
                            }
                            *(unsigned int *)(((int)stk + 16)) = (t364 + 0x1);
                            t366 = nlRand();
                            t367 = ((~(((~t366) + 0x1) & 0x1)) + 0x1);
                            if ((int)t366 >= 0) {
                                t367 = (t366 & 0x1);
                            }
                            *(unsigned int *)0x8C2FD908 = ((t367 << 1) - 1);
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                            *(unsigned int *)0x8C2FD90C = 0x0;
                            *(float *)0x8C2FD914 = 0.0f;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        } else {
                            if ((*(int *)0x8C15A0CC) != 0) {
                                *(unsigned int *)0x8C2FD918 = 0x0;
                                *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF9C;
                                *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x1E)) = 0x3;
                                *(unsigned short *)(((0x20 + (*(int *)(((int)stk + 20)))) + 0x0)) = 0x20;
                                t377 = (int)((int)(nlRand()) % (int)0x3);
                                if (t377 != 0) {
                                    if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 48.0f;
                                        t382 = 0xFFFFFFFF;
                                    } else {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 43.0f;
                                        t382 = 0x1;
                                    }
                                    *(unsigned int *)0x8C2FD908 = t382;
                                } else {
                                    if ((int)(*(int *)(((int)stk + 12))) > 0) {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 37.0f;
                                        t387 = 0x1;
                                    } else {
                                        *(float *)0x8C2FD910 = 200.0f;
                                        *(float *)0x8C2FD914 = 39.0f;
                                        t387 = 0xFFFFFFFF;
                                    }
                                    *(unsigned int *)0x8C2FD908 = t387;
                                }
                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                            } else {
                                if ((*(int *)0x8C20D14C) != 6) {
                                    if ((int)(*(int *)0x8C2FCC1C) <= (int)0x2) {
                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xF);
                                        t398 = nlRand();
                                        t399 = ((~(((~t398) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t398 >= 0) {
                                            t399 = (t398 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t399 << 1) - 1);
                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x14));
                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    }
                                    if ((int)(*(int *)0x8C2FCC1C) <= (int)0x5) {
                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0x5)) + 0xA);
                                        t418 = nlRand();
                                        t419 = ((~(((~t418) + 0x1) & 0x1)) + 0x1);
                                        if ((int)t418 >= 0) {
                                            t419 = (t418 & 0x1);
                                        }
                                        *(unsigned int *)0x8C2FD908 = ((t419 << 1) - 1);
                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x14));
                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                        if ((*(int *)(((int)stk + 12))) != (*(int *)0x8C2FD908)) {
                                            *(float *)0x8C2FD914 = 3.0f;
                                        } else {
                                            *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                        }
                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                    } else {
                                        if ((int)(*(int *)0x8C2FCC1C) > (int)0x8) {
                                            if ((int)(*(int *)0x8C2FCC1C) > (int)0xD) {
                                            } else {
                                                if ((*(int *)0x8C287D5C) != 0) {
                                                    *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)(0xD - (*(int *)0x8C2FCC1C))));
                                                    t449 = nlRand();
                                                    t450 = ((~(((~t449) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t449 >= 0) {
                                                        t450 = (t449 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t450 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if (((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 16) && (t456 = *(int *)(((int)stk + 28)), t457 = *(int *)((0xC58 + t456)), t457 != 17)) {
                                                        *(unsigned int *)(((int)stk + 16)) = ((int)((int)(nlRand()) % (int)(0xD - (*(int *)0x8C2FCC1C))));
                                                        t461 = nlRand();
                                                        t462 = ((~(((~t461) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t461 >= 0) {
                                                            t462 = (t461 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t462 << 1) - 1);
                                                        *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                        *(float *)0x8C2FD914 = 0.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    } else {
                                                        t467 = (int)((int)(nlRand()) % (int)0xA);
                                                        *(unsigned int *)(((int)stk + 8)) = t467;
                                                        if ((int)t467 < (int)0x5) {
                                                            *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                            t468 = nlRand();
                                                            t469 = ((~(((~t468) + 0x1) & 0x1)) + 0x1);
                                                            if ((int)t468 >= 0) {
                                                                t469 = (t468 & 0x1);
                                                            }
                                                            *(unsigned int *)0x8C2FD908 = ((t469 << 1) - 1);
                                                            *(float *)0x8C2FD910 = 100.0f;
                                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        } else {
                                                            if ((int)t467 < (int)0x7) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t480 = 0x1;
                                                                if ((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) > 0.0f) {
                                                                } else {
                                                                    t477 = 0x0;
                                                                    if (0.0f > (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)))) {
                                                                        t477 = 0xFFFFFFFF;
                                                                    }
                                                                    t480 = t477;
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = (-(t480 * (*(int *)(((int)stk + 12)))));
                                                                *(float *)0x8C2FD910 = 100.0f;
                                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                                *(float *)0x8C2FD914 = 3.0f;
                                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                                            } else {
                                                                if ((int)t467 < (int)0x9) {
                                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                    *(unsigned int *)0x8C2FD908 = 0x1;
                                                                    *(float *)0x8C2FD910 = 100.0f;
                                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                                    *(float *)0x8C2FD914 = 0.0f;
                                                                    *(unsigned int *)0x8C2FD918 = 0x2;
                                                                } else {
                                                                    *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                    t484 = nlRand();
                                                                    t485 = ((~(((~t484) + 0x1) & 0x1)) + 0x1);
                                                                    if ((int)t484 >= 0) {
                                                                        t485 = (t484 & 0x1);
                                                                    }
                                                                    *(unsigned int *)0x8C2FD908 = ((t485 << 1) - 1);
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
                                        } else {
                                            t537 = (int)((int)(nlRand()) % (int)(0xA - (*(int *)0x8C2FCC1C)));
                                            *(unsigned int *)(((int)stk + 16)) = (t537 + 0x3);
                                            if ((int)(t537 + 0x3) <= (int)0x3) {
                                                t538 = nlRand();
                                                t539 = ((~(((~t538) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t538 >= 0) {
                                                    t539 = (t538 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t539 << 1) - 1);
                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0xF);
                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                *(float *)0x8C2FD914 = 0.0f;
                                            } else {
                                                t543 = nlRand();
                                                t544 = ((~(((~t543) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t543 >= 0) {
                                                    t544 = (t543 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t544 << 1) - 1);
                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0xE)) + 0x36);
                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                if ((*(int *)(((int)stk + 12))) != (*(int *)0x8C2FD908)) {
                                                    t554 = (((int)((int)(nlRand()) % (int)0x5)) + 0x5);
                                                } else {
                                                    t554 = (((int)((int)(nlRand()) % (int)0x5)) + 0xA);
                                                }
                                                *(float *)0x8C2FD914 = (float)t554;
                                            }
                                            if ((*(int *)0x8C2FCC1C) != 7) {
                                            } else {
                                                if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x13F))) != 0) {
                                                } else {
                                                    t571 = *(int *)(((int)stk + 16));
                                                    *(unsigned int *)(((int)stk + 16)) = (t571 + t571);
                                                    if ((int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x140))) <= (int)0x1) {
                                                        *(unsigned int *)0x8C2FD908 = (int)((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12))));
                                                        t582 = (nlRand());
                                                    } else {
                                                        *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                                                        t582 = (nlRand());
                                                    }
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)t582 % (int)0x14)) + 0x32);
                                                }
                                            }
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        }
                                    }
                                } else {
                                    if ((*(int *)0x8C2FCC20) != 0) {
                                        t622 = *(int *)0x8C2FCC20;
                                        if (t622 != 1) {
                                            if (t622 != 2) {
                                                if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) == 16) {
                                                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                    t629 = nlRand();
                                                    t630 = ((~(((~t629) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t629 >= 0) {
                                                        t630 = (t629 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t630 << 1) - 1);
                                                    *(float *)0x8C2FD910 = 100.0f;
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    if ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) != 17) {
                                                    } else {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                        t634 = nlRand();
                                                        t635 = ((~(((~t634) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t634 >= 0) {
                                                            t635 = (t634 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t635 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                        *(float *)0x8C2FD914 = 0.0f;
                                                        *(unsigned int *)0x8C2FD918 = 0x1;
                                                    }
                                                }
                                            } else {
                                                t656 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                if (((((int)t656 >= 0) ? (0x1 << (t656 & 31)) : ((-(int)t656 & 31) ? ((int)0x1 >> (-(int)t656 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t657 = nlRand();
                                                    t658 = ((~(((~t657) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t657 >= 0) {
                                                        t658 = (t657 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t658;
                                                    t660 = nlRand();
                                                    t661 = ((~(((~t660) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t660 >= 0) {
                                                        t661 = (t660 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t661 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t666 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                    if (((((int)t666 >= 0) ? (0x1 << (t666 & 31)) : ((-(int)t666 & 31) ? ((int)0x1 >> (-(int)t666 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xA)) + 0xA);
                                                        t669 = nlRand();
                                                        t670 = ((~(((~t669) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t669 >= 0) {
                                                            t670 = (t669 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t670 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)(((int)((int)(nlRand()) % (int)0x14)) + 0xF);
                                                        t674 = nlRand();
                                                        t675 = ((~(((~t674) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t674 >= 0) {
                                                            t675 = (t674 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t675 + 0x1);
                                                    } else {
                                                        t678 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t678 >= 0) ? (0x1 << (t678 & 31)) : ((-(int)t678 & 31) ? ((int)0x1 >> (-(int)t678 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t680 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t680 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t681 = nlRand();
                                                                t682 = ((~(((~t681) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t681 >= 0) {
                                                                    t682 = (t681 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t682 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t686 = nlRand();
                                                                t687 = ((~(((~t686) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t686 >= 0) {
                                                                    t687 = (t686 & 0x1);
                                                                }
                                                                if (t687 != 0) {
                                                                    t693 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t693 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t693;
                                                                t695 = nlRand();
                                                                t696 = ((~(((~t695) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t695 >= 0) {
                                                                    t696 = (t695 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t696 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((int)(*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) > (int)0x7) {
                                                t743 = *(int *)((0xC58 + (*(int *)(((int)stk + 28)))));
                                                if (((((int)t743 >= 0) ? (0x1 << (t743 & 31)) : ((-(int)t743 & 31) ? ((int)0x1 >> (-(int)t743 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t744 = nlRand();
                                                    t745 = ((~(((~t744) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t744 >= 0) {
                                                        t745 = (t744 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = (t745 + 0x1);
                                                    t747 = nlRand();
                                                    t748 = ((~(((~t747) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t747 >= 0) {
                                                        t748 = (t747 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t748 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t753 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t753 >= 0) ? (0x1 << (t753 & 31)) : ((-(int)t753 & 31) ? ((int)0x1 >> (-(int)t753 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                        t756 = nlRand();
                                                        t757 = ((~(((~t756) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t756 >= 0) {
                                                            t757 = (t756 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t757 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0xA));
                                                        t761 = nlRand();
                                                        t762 = ((~(((~t761) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t761 >= 0) {
                                                            t762 = (t761 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t762 + 0x1);
                                                    } else {
                                                        t765 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t765 >= 0) ? (0x1 << (t765 & 31)) : ((-(int)t765 & 31) ? ((int)0x1 >> (-(int)t765 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t767 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t767 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                                t768 = nlRand();
                                                                t769 = ((~(((~t768) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t768 >= 0) {
                                                                    t769 = (t768 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t769 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t773 = nlRand();
                                                                t774 = ((~(((~t773) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t773 >= 0) {
                                                                    t774 = (t773 & 0x1);
                                                                }
                                                                if (t774 != 0) {
                                                                    t780 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t780 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t780;
                                                                t782 = nlRand();
                                                                t783 = ((~(((~t782) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t782 >= 0) {
                                                                    t783 = (t782 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t783 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x28));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t819 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t819 >= 0) ? (0x1 << (t819 & 31)) : ((-(int)t819 & 31) ? ((int)0x1 >> (-(int)t819 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                                    t820 = nlRand();
                                                    t821 = ((~(((~t820) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t820 >= 0) {
                                                        t821 = (t820 & 0x1);
                                                    }
                                                    *(unsigned int *)(((int)stk + 16)) = t821;
                                                    t823 = nlRand();
                                                    t824 = ((~(((~t823) + 0x1) & 0x1)) + 0x1);
                                                    if ((int)t823 >= 0) {
                                                        t824 = (t823 & 0x1);
                                                    }
                                                    *(unsigned int *)0x8C2FD908 = ((t824 << 1) - 1);
                                                    *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x1E)) + 0x14);
                                                    *(unsigned int *)0x8C2FD90C = 0x0;
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                } else {
                                                    t829 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                    if (((((int)t829 >= 0) ? (0x1 << (t829 & 31)) : ((-(int)t829 & 31) ? ((int)0x1 >> (-(int)t829 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = (((int)((int)(nlRand()) % (int)0xD)) + 0x5);
                                                        t832 = nlRand();
                                                        t833 = ((~(((~t832) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t832 >= 0) {
                                                            t833 = (t832 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t833 << 1) - 1);
                                                        *(float *)0x8C2FD910 = 100.0f;
                                                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                        *(float *)0x8C2FD914 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                        t837 = nlRand();
                                                        t838 = ((~(((~t837) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t837 >= 0) {
                                                            t838 = (t837 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD918 = (t838 + 0x1);
                                                    } else {
                                                        t841 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                        if (((((int)t841 >= 0) ? (0x1 << (t841 & 31)) : ((-(int)t841 & 31) ? ((int)0x1 >> (-(int)t841 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                        } else {
                                                            t843 = (int)((int)(nlRand()) % (int)0x5);
                                                            if (t843 == 0) {
                                                                *(unsigned int *)(((int)stk + 16)) = 0x0;
                                                                t844 = nlRand();
                                                                t845 = ((~(((~t844) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t844 >= 0) {
                                                                    t845 = (t844 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t845 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x32)) + 0x32);
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            } else {
                                                                t849 = nlRand();
                                                                t850 = ((~(((~t849) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t849 >= 0) {
                                                                    t850 = (t849 & 0x1);
                                                                }
                                                                if (t850 != 0) {
                                                                    t856 = ((-((int)((int)(nlRand()) % (int)0x3))) - 1);
                                                                } else {
                                                                    t856 = (((int)((int)(nlRand()) % (int)0x3)) + 0x3);
                                                                }
                                                                *(unsigned int *)(((int)stk + 16)) = t856;
                                                                t858 = nlRand();
                                                                t859 = ((~(((~t858) + 0x1) & 0x1)) + 0x1);
                                                                if ((int)t858 >= 0) {
                                                                    t859 = (t858 & 0x1);
                                                                }
                                                                *(unsigned int *)0x8C2FD908 = ((t859 << 1) - 1);
                                                                *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x64));
                                                                *(unsigned int *)0x8C2FD90C = 0x0;
                                                            }
                                                            *(float *)0x8C2FD914 = 0.0f;
                                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        t913 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                        if (((((int)t913 >= 0) ? (0x1 << (t913 & 31)) : ((-(int)t913 & 31) ? ((int)0x1 >> (-(int)t913 & 31)) : ((int)0x1 >> 31))) & 0x49B0) != 0) {
                                            t914 = nlRand();
                                            t915 = ((~(((~t914) + 0x1) & 0x1)) + 0x1);
                                            if ((int)t914 >= 0) {
                                                t915 = (t914 & 0x1);
                                            }
                                            *(unsigned int *)(((int)stk + 16)) = (t915 + 0x1);
                                            *(unsigned int *)0x8C2FD908 = 0x0;
                                            *(float *)0x8C2FD910 = 0.0f;
                                            *(unsigned int *)0x8C2FD90C = 0x0;
                                            *(float *)0x8C2FD914 = 0.0f;
                                            *(unsigned int *)0x8C2FD918 = 0x1;
                                        } else {
                                            t918 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                            if (((((int)t918 >= 0) ? (0x1 << (t918 & 31)) : ((-(int)t918 & 31) ? ((int)0x1 >> (-(int)t918 & 31)) : ((int)0x1 >> 31))) & 0x920E) != 0) {
                                                *(unsigned int *)(((int)stk + 16)) = 0x14;
                                                t919 = nlRand();
                                                t920 = ((~(((~t919) + 0x1) & 0x1)) + 0x1);
                                                if ((int)t919 >= 0) {
                                                    t920 = (t919 & 0x1);
                                                }
                                                *(unsigned int *)0x8C2FD908 = ((t920 << 1) - 1);
                                                *(float *)0x8C2FD910 = 30.0f;
                                                *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                                                *(float *)0x8C2FD914 = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0x5);
                                                *(unsigned int *)0x8C2FD918 = 0x1;
                                            } else {
                                                t925 = *(int *)(((*(int *)(((int)stk + 28))) + 0xC58));
                                                if (((((int)t925 >= 0) ? (0x1 << (t925 & 31)) : ((-(int)t925 & 31) ? ((int)0x1 >> (-(int)t925 & 31)) : ((int)0x1 >> 31))) & 0x2441) == 0) {
                                                } else {
                                                    t927 = (int)((int)(nlRand()) % (int)0xA);
                                                    if (t927 == 0) {
                                                        *(unsigned int *)(((int)stk + 16)) = 0x1;
                                                        t928 = nlRand();
                                                        t929 = ((~(((~t928) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t928 >= 0) {
                                                            t929 = (t928 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t929 << 1) - 1);
                                                        t931 = nlRand();
                                                        t932 = ((~(((~t931) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t931 >= 0) {
                                                            t932 = (t931 & 0x1);
                                                        }
                                                        *(float *)0x8C2FD910 = (float)t932;
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                    } else {
                                                        t934 = nlRand();
                                                        t935 = ((~(((~t934) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t934 >= 0) {
                                                            t935 = (t934 & 0x1);
                                                        }
                                                        if (t935 != 0) {
                                                            t941 = ((-((int)((int)(nlRand()) % (int)0x5))) - 1);
                                                        } else {
                                                            t941 = (((int)((int)(nlRand()) % (int)0xF)) + 0x5);
                                                        }
                                                        *(unsigned int *)(((int)stk + 16)) = t941;
                                                        t943 = nlRand();
                                                        t944 = ((~(((~t943) + 0x1) & 0x1)) + 0x1);
                                                        if ((int)t943 >= 0) {
                                                            t944 = (t943 & 0x1);
                                                        }
                                                        *(unsigned int *)0x8C2FD908 = ((t944 << 1) - 1);
                                                        *(float *)0x8C2FD910 = (float)((int)((int)(nlRand()) % (int)0x1E));
                                                        *(unsigned int *)0x8C2FD90C = 0x0;
                                                    }
                                                    *(float *)0x8C2FD914 = 0.0f;
                                                    *(unsigned int *)0x8C2FD918 = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) == 1) {
                        if ((int)(unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x140))) <= (int)0x1) {
                            *(unsigned int *)0x8C2FD908 = (int)((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12))));
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                        } else {
                            *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                            *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                        }
                        *(unsigned int *)0x8C2FD90C = 0x0;
                        *(float *)0x8C2FD914 = 0.0f;
                        *(unsigned int *)0x8C2FD918 = 0x1;
                    } else {
                        if ((unsigned char)(*(signed char *)((0x13F + (*(int *)(((int)stk + 20)))))) == 2) {
                            if ((int)(unsigned char)(*(signed char *)((0x140 + (*(int *)(((int)stk + 20)))))) <= (int)0x1) {
                                *(unsigned int *)0x8C2FD908 = (int)((*(float *)((0xB00 + (*(int *)(((int)stk + 28)))))) * (float)(*(int *)(((int)stk + 12))));
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                            } else {
                                *(unsigned int *)0x8C2FD908 = (int)(-((*(float *)(((*(int *)(((int)stk + 28))) + 0xB00))) * (float)(*(int *)(((int)stk + 12)))));
                                *(float *)0x8C2FD910 = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x44);
                            }
                            *(unsigned int *)0x8C2FD90C = 0x0;
                            *(float *)0x8C2FD914 = 0.0f;
                            *(unsigned int *)0x8C2FD918 = 0x1;
                        }
                    }
                    if ((*(float *)0x8C23D204) > 1.0f) {
                        t1095 = (0x5E - (*(int *)(((int)stk + 16))));
                    } else {
                        t1095 = (0x5D - (*(int *)(((int)stk + 16))));
                    }
                    *(float *)0x8C2FD91C = (float)t1095;
                    if (((*(int *)(((int)stk + 16))) == 0) && (t1098 = *(int *)0x8C2FD90C, t1098 == -1)) {
                        *(float *)0x8C2FD914 = 0.0f;
                    }
                    if (((int)(*(int *)0x8C2FCC1C) < (int)0x14) && ((t1104 = *(int *)0x8C2FCC1C, (int)t1104 >= (int)0x4) && (t1105 = *(int *)(((int)stk + 16)), t1105 != 0))) {
                        t1107 = (int)((int)(nlRand()) % (int)0x3);
                        if (t1107 == 0) {
                            if ((*(float *)0x8C23D204) > 1.0f) {
                                t1114 = (((int)((int)(nlRand()) % (int)0x3)) + 0x5F);
                            } else {
                                t1114 = (((int)((int)(nlRand()) % (int)0x3)) + 0x5E);
                            }
                            *(float *)0x8C2FD91C = (float)t1114;
                        }
                    }
                    if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x13F))) != 0) {
                        t1135 = *(int *)0x8C2FD908;
                        u1141 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t1135) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t1135))) ? 1u : 0u))) >> 1);
                        u1141 = u1141 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                        *(unsigned int *)(((int)stk + 8)) = (int)(u1141 + 1.0f);
                        if ((*(int *)0x8C2FD918) == 1) {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t1154 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                t1155 = (*(int *)(((int)stk + 8)));
                            } else {
                                t1154 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                t1155 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1154 + t1155) + 0x0)));
                        } else {
                            if ((*(int *)(((int)stk + 16))) == 0) {
                                t1169 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                t1170 = (*(int *)(((int)stk + 8)));
                            } else {
                                t1169 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                t1170 = (*(int *)(((int)stk + 8)));
                            }
                            *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1169 + t1170) + 0x0)));
                        }
                        if ((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4)))) {
                            *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                        }
                    } else {
                        if ((*(int *)0x8C15A0CC) != 0) {
                            t1190 = *(int *)0x8C2FD908;
                            u1196 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t1190) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t1190))) ? 1u : 0u))) >> 1);
                            u1196 = u1196 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                            *(unsigned int *)(((int)stk + 8)) = (int)(u1196 + 1.0f);
                            if ((*(int *)0x8C2FD918) == 1) {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t1209 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3DA);
                                    t1210 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t1209 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3E2);
                                    t1210 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1209 + t1210) + 0x0)));
                            } else {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t1224 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3EA);
                                    t1225 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t1224 = (((*(int *)((0x8C102460 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3F2);
                                    t1225 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1224 + t1225) + 0x0)));
                            }
                            if ((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4)))) {
                                *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                            }
                        } else {
                            t1244 = *(int *)0x8C2FD908;
                            u1250 = (float)(((int)((unsigned int)((int)((unsigned int)(0x1 - t1244) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x1 - t1244))) ? 1u : 0u))) >> 1);
                            u1250 = u1250 + (float)(*(int *)(((int)stk + 12))) * (*(float *)(((*(int *)(((int)stk + 28))) + 0xB00)));
                            *(unsigned int *)(((int)stk + 8)) = (int)(u1250 + 1.0f);
                            if ((*(int *)0x8C2FD918) == 1) {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t1263 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D3FA);
                                    t1264 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t1263 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D402);
                                    t1264 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1263 + t1264) + 0x0)));
                            } else {
                                if ((*(int *)(((int)stk + 16))) == 0) {
                                    t1278 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D40A);
                                    t1279 = (*(int *)(((int)stk + 8)));
                                } else {
                                    t1278 = (((*(int *)((0x8C102460 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 28)))))) * 0x6C)))) << 2) + 0x8C10D412);
                                    t1279 = (*(int *)(((int)stk + 8)));
                                }
                                *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)(((t1278 + t1279) + 0x0)));
                            }
                            if (!((*(float *)0x8C2FD910) > (float)(*(int *)(((int)stk + 4))))) {
                            } else {
                                *(float *)0x8C2FD910 = (float)(*(int *)(((int)stk + 4)));
                            }
                        }
                    }
                    if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x5C))) != 0) {
                        *(float *)0x8C2FD910 = ((*(float *)0x8C2FD910) * 0.699999988f);
                        *(float *)0x8C2FD914 = ((*(float *)0x8C2FD914) * 0.899999976f);
                    }
                    if (((*(int *)0x8C2FD918) == 2) && (t1327 = *(int *)0x8C2FD908, t1327 == -1)) {
                        *(float *)0x8C2FD914 = 10.0f;
                        *(unsigned int *)0x8C2FD90C = 0xFFFFFFFF;
                    }
                    if ((*(int *)0x8C2FD908) == 0) {
                        *(float *)0x8C2FD910 = 0.0f;
                    }
                    if ((*(int *)0x8C2FD90C) == 0) {
                        *(float *)0x8C2FD914 = 0.0f;
                    }
                    *(unsigned int *)0x8C2FD920 = (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x12B)));
                    t1343 = 0x12B;
                }
                t1354 = t1343;
            }
            t1365 = t1354;
        }
        t1408 = t1365;
    } else {
        if (((*(int *)0x8C287D5C) == 0) && ((t1377 = *(int *)0x8C2FCC1C, t1377 != 13) && ((t1378 = *(int *)(((int)stk + 28)), t1379 = *(int *)((0xC58 + t1378)), t1379 == 16) && (t1380 = *(int *)(((int)stk + 24)), t1381 = *(int *)(((int)stk + 24)), t1382 = *(int *)(((t1380 + 0x44) + 0x0)), t1383 = *(int *)((0x48 + t1381)), (int)(t1382 + t1383) >= (int)0x2)))) {
            t1385 = *(int *)0x8C15A0CC;
            t1386 = (int)((int)(nlRand()) % (int)(((t1385 << 2) + t1385) + 0x5));
            if (t1386 == 0) {
                *(unsigned int *)0x8C15A0CC = 0x1;
            } else {
                *(unsigned int *)0x8C15A0CC = 0x0;
            }
        } else {
            *(unsigned int *)0x8C15A0CC = 0x0;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0xA24)) = 0x3;
        if ((*(int *)0x8C15A0CC) != 0) {
            t1400 = (int)((int)(nlRand()) % (int)0x1E);
            *(float *)0x8C2FD91C = (float)(t1400 + 0x1);
            t1401 = (t1400 + 0x1);
        } else {
            *(float *)0x8C2FD91C = 70.0f;
            t1401 = 0x8C05AE54;
        }
        t1408 = t1401;
    }
    return t1408;
}
