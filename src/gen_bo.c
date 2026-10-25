/* Straight-line functions with calls and guards (batch gen_bo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int cpuAimPointSet(int, int, float, float);
float cpuDblPathCross(int, int, int, Stk3);
float cpuDistXZ(int, int);
int evNop(Stk3);
int netJudgeReact(void);
int nlRand(void);
float nlScalor(int);
int seNetHit(void);
int seNetHit2(void);
int sndSeStage(void);
int cpuSglAimAddLv12(int a4, int a5);
int cpuDblAimAddDeep2(int a4, int a5);
void cpuDblMoodUpdate(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
void netHitBall(int a4, int a5, float f4, float f5, float f6, float f7);
void cpuDblPoachCheck(int a4, float f4, float f5, float f6);

int cpuSglAimAddLv12(int a4, int a5)
{
    int t0;
    int t1;
    float u4;
    float u5;
    float u9;
    float u12;
    float u22;
    float u23;
    int t26;
    int t24;
    float u29;
    float u30;
    int t33;
    int t31;
    float u36;
    float u37;
    int t40;
    int t38;
    float u43;
    float u44;
    float u47;
    float u48;
    float u51;
    float u52;
    int t55;
    int t53;
    float u58;
    int t61;
    int t59;
    float u63;
    int t66;
    int t64;
    float u68;
    float u69;
    int t72;
    int t70;
    float u74;
    float u75;
    int t78;
    int t76;
    float u81;
    float u82;
    int t85;
    int t83;
    float u108;
    float u109;
    float u111;
    float u112;
    int t115;
    int t113;
    float u117;
    int t120;
    int t118;
    float u122;
    float u123;
    float u124;
    int t127;
    int t125;
    float u129;
    float u130;
    float u131;
    int t134;
    int t132;
    float u143;
    float u144;
    int t147;
    int t145;
    float u150;
    float u151;
    int t154;
    int t152;
    float u175;
    float u176;
    int t179;
    int t177;
    float u182;
    float u183;
    int t186;
    int t184;
    float u189;
    float u190;
    int t193;
    int t191;
    float u202;
    float u203;
    float u205;
    float u206;
    int t209;
    int t207;
    float u212;
    float u213;
    int t216;
    int t214;
    float u219;
    float u220;
    int t223;
    int t221;
    float u226;
    float u227;
    int t230;
    int t228;
    float u232;
    float u233;
    int t236;
    int t234;
    float u239;
    float u240;
    int t243;
    int t241;
    float u246;
    float u247;
    int t250;
    int t248;
    float u253;
    float u254;
    int t257;
    int t255;
    int t267;
    int t197;
    float u18;
    int t170;
    int t164;
    int t104;
    int t88;
    float u99;
    int t100;
    int t158;
    float u139;
    int t140;
    float u262;
    int t263;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        u4 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u5 = (-u4);
        if (!(0.0f > u4)) {
            u5 = u4;
        }
        if (!(35.6550026f > u5)) {
            u9 = u4;
            u9 = u9 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
            if (!(0.0f > u9)) {
                u12 = u4;
                u12 = u12 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30)));
                u18 = u12;
            } else {
                u18 = ((-u4) - ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)))));
            }
            if (41.5974998f > u18) {
                u22 = *(float *)((a4 + 0xB00));
                u23 = *(float *)((a4 + 0xB9C));
                t26 = 0x1;
                if (u23 > 0.0f) {
                } else {
                    t24 = 0x0;
                    if (0.0f > u23) {
                        t24 = 0xFFFFFFFF;
                    }
                    t26 = t24;
                }
                cpuAimPointSet(a5, 0x3, ((float)(-t26) * 41.1500015f), (u22 * 118.849998f));
                u29 = *(float *)((a4 + 0xB00));
                u30 = *(float *)((a4 + 0xB9C));
                t33 = 0x1;
                if (u30 > 0.0f) {
                } else {
                    t31 = 0x0;
                    if (0.0f > u30) {
                        t31 = 0xFFFFFFFF;
                    }
                    t33 = t31;
                }
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t33 * 41.1500015f), (u29 * 118.849998f));
                u36 = *(float *)((a4 + 0xB00));
                u37 = *(float *)((a4 + 0xB9C));
                t40 = 0x1;
                if (u37 > 0.0f) {
                } else {
                    t38 = 0x0;
                    if (0.0f > u37) {
                        t38 = 0xFFFFFFFF;
                    }
                    t40 = t38;
                }
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t40 * 41.1500015f), (u36 * 11.8850002f));
                t170 = (((a5 + 0x1) + 0x1) + 0x1);
            } else {
                u43 = *(float *)((a4 + 0xB9C));
                u44 = (-u43);
                if (!(0.0f > u43)) {
                    u44 = u43;
                }
                if (!(16.460001f > u44)) {
                    u47 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u48 = (-u47);
                    if (!(0.0f > u47)) {
                        u48 = u47;
                    }
                    if (16.460001f > u48) {
                        u51 = *(float *)((a4 + 0xB00));
                        u52 = *(float *)((a4 + 0xB9C));
                        t55 = 0x1;
                        if (u52 > 0.0f) {
                        } else {
                            t53 = 0x0;
                            if (0.0f > u52) {
                                t53 = 0xFFFFFFFF;
                            }
                            t55 = t53;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t55 * 41.1500015f), (u51 * 118.849998f));
                        t104 = (a5 + 0x1);
                    } else {
                        u58 = *(float *)((a4 + 0xB9C));
                        t61 = 0x1;
                        if (u58 > 0.0f) {
                        } else {
                            t59 = 0x0;
                            if (0.0f > u58) {
                                t59 = 0xFFFFFFFF;
                            }
                            t61 = t59;
                        }
                        u63 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        t66 = 0x1;
                        if (u63 > 0.0f) {
                        } else {
                            t64 = 0x0;
                            if (0.0f > u63) {
                                t64 = 0xFFFFFFFF;
                            }
                            t66 = t64;
                        }
                        if (t61 != t66) {
                            u68 = *(float *)((a4 + 0xB00));
                            u69 = *(float *)((a4 + 0xB9C));
                            t72 = 0x1;
                            if (u69 > 0.0f) {
                            } else {
                                t70 = 0x0;
                                if (0.0f > u69) {
                                    t70 = 0xFFFFFFFF;
                                }
                                t72 = t70;
                            }
                            t88 = a5;
                            u99 = (u68 * 118.849998f);
                            t100 = t72;
                        } else {
                            u74 = *(float *)((a4 + 0xB00));
                            u75 = *(float *)((a4 + 0xB9C));
                            t78 = 0x1;
                            if (u75 > 0.0f) {
                            } else {
                                t76 = 0x0;
                                if (0.0f > u75) {
                                    t76 = 0xFFFFFFFF;
                                }
                                t78 = t76;
                            }
                            cpuAimPointSet(a5, 0x1, ((float)(-t78) * 41.1500015f), (u74 * 11.8850002f));
                            u81 = *(float *)((a4 + 0xB00));
                            u82 = *(float *)((a4 + 0xB9C));
                            t85 = 0x1;
                            if (u82 > 0.0f) {
                            } else {
                                t83 = 0x0;
                                if (0.0f > u82) {
                                    t83 = 0xFFFFFFFF;
                                }
                                t85 = t83;
                            }
                            t88 = (a5 + 0x1);
                            u99 = (u81 * 118.849998f);
                            t100 = (-t85);
                        }
                        cpuAimPointSet(t88, 0x1, ((float)t100 * 41.1500015f), u99);
                        t104 = (t88 + 0x1);
                    }
                    t164 = t104;
                } else {
                    u108 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u109 = (-u108);
                    if (!(0.0f > u108)) {
                        u109 = u108;
                    }
                    if (16.460001f > u109) {
                        u111 = *(float *)((a4 + 0xAE8));
                        u112 = *(float *)((a4 + 0xB9C));
                        t115 = 0x1;
                        if ((u112 - u111) > 0.0f) {
                        } else {
                            t113 = 0x0;
                            if (0.0f > (u112 - u111)) {
                                t113 = 0xFFFFFFFF;
                            }
                            t115 = t113;
                        }
                        u117 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        t120 = 0x1;
                        if (u117 > 0.0f) {
                        } else {
                            t118 = 0x0;
                            if (0.0f > u117) {
                                t118 = 0xFFFFFFFF;
                            }
                            t120 = t118;
                        }
                        if (t115 != t120) {
                            u122 = *(float *)((a4 + 0xB00));
                            u123 = *(float *)((a4 + 0xAE8));
                            u124 = *(float *)((a4 + 0xB9C));
                            t127 = 0x1;
                            if ((u124 - u123) > 0.0f) {
                            } else {
                                t125 = 0x0;
                                if (0.0f > (u124 - u123)) {
                                    t125 = 0xFFFFFFFF;
                                }
                                t127 = t125;
                            }
                            u139 = (u122 * 118.849998f);
                            t140 = t127;
                        } else {
                            u129 = *(float *)((a4 + 0xB00));
                            u130 = *(float *)((a4 + 0xAE8));
                            u131 = *(float *)((a4 + 0xB9C));
                            t134 = 0x1;
                            if ((u131 - u130) > 0.0f) {
                            } else {
                                t132 = 0x0;
                                if (0.0f > (u131 - u130)) {
                                    t132 = 0xFFFFFFFF;
                                }
                                t134 = t132;
                            }
                            u139 = (u129 * 23.7700005f);
                            t140 = (-t134);
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t140 * 41.1500015f), u139);
                        t158 = (a5 + 0x1);
                    } else {
                        u143 = *(float *)((a4 + 0xB00));
                        u144 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        t147 = 0x1;
                        if (u144 > 0.0f) {
                        } else {
                            t145 = 0x0;
                            if (0.0f > u144) {
                                t145 = 0xFFFFFFFF;
                            }
                            t147 = t145;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)(-t147) * 41.1500015f), (u143 * 118.849998f));
                        u150 = *(float *)((a4 + 0xB00));
                        u151 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        t154 = 0x1;
                        if (u151 > 0.0f) {
                        } else {
                            t152 = 0x0;
                            if (0.0f > u151) {
                                t152 = 0xFFFFFFFF;
                            }
                            t154 = t152;
                        }
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t154) * 41.1500015f), (u150 * 23.7700005f));
                        t158 = ((a5 + 0x1) + 0x1);
                    }
                    t164 = t158;
                }
                t170 = t164;
            }
            t197 = t170;
        } else {
            u175 = *(float *)((a4 + 0xB00));
            u176 = *(float *)((a4 + 0xB9C));
            t179 = 0x1;
            if (u176 > 0.0f) {
            } else {
                t177 = 0x0;
                if (0.0f > u176) {
                    t177 = 0xFFFFFFFF;
                }
                t179 = t177;
            }
            cpuAimPointSet(a5, 0x3, ((float)(-t179) * 41.1500015f), (u175 * 118.849998f));
            u182 = *(float *)((a4 + 0xB00));
            u183 = *(float *)((a4 + 0xB9C));
            t186 = 0x1;
            if (u183 > 0.0f) {
            } else {
                t184 = 0x0;
                if (0.0f > u183) {
                    t184 = 0xFFFFFFFF;
                }
                t186 = t184;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t186 * 41.1500015f), (u182 * 118.849998f));
            u189 = *(float *)((a4 + 0xB00));
            u190 = *(float *)((a4 + 0xB9C));
            t193 = 0x1;
            if (u190 > 0.0f) {
            } else {
                t191 = 0x0;
                if (0.0f > u190) {
                    t191 = 0xFFFFFFFF;
                }
                t193 = t191;
            }
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t193 * 41.1500015f), (u189 * 11.8850002f));
            t197 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t267 = t197;
    } else {
        u202 = *(float *)0x8C291F7C;
        u203 = (-u202);
        if (!(0.0f > u202)) {
            u203 = u202;
        }
        if (u203 > 20.5750008f) {
            u205 = *(float *)((a4 + 0xB00));
            u206 = *(float *)((a4 + 0xB9C));
            t209 = 0x1;
            if (u206 > 0.0f) {
            } else {
                t207 = 0x0;
                if (0.0f > u206) {
                    t207 = 0xFFFFFFFF;
                }
                t209 = t207;
            }
            cpuAimPointSet(a5, 0x1, ((float)t209 * 41.1500015f), (u205 * 118.849998f));
            u212 = *(float *)((a4 + 0xB00));
            u213 = *(float *)((a4 + 0xB9C));
            t216 = 0x1;
            if (u213 > 0.0f) {
            } else {
                t214 = 0x0;
                if (0.0f > u213) {
                    t214 = 0xFFFFFFFF;
                }
                t216 = t214;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t216 * 41.1500015f), (u212 * 11.8850002f));
            u219 = *(float *)((a4 + 0xB00));
            u220 = *(float *)((a4 + 0xB9C));
            t223 = 0x1;
            if (u220 > 0.0f) {
            } else {
                t221 = 0x0;
                if (0.0f > u220) {
                    t221 = 0xFFFFFFFF;
                }
                t223 = t221;
            }
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t223) * 41.1500015f), (u219 * 71.3100052f));
            u226 = *(float *)((a4 + 0xB00));
            u227 = *(float *)((a4 + 0xB9C));
            t230 = 0x1;
            if (u227 > 0.0f) {
            } else {
                t228 = 0x0;
                if (0.0f > u227) {
                    t228 = 0xFFFFFFFF;
                }
                t230 = t228;
            }
            u262 = (u226 * 11.8850002f);
            t263 = (-t230);
        } else {
            u232 = *(float *)((a4 + 0xB00));
            u233 = *(float *)((a4 + 0xB9C));
            t236 = 0x1;
            if (u233 > 0.0f) {
            } else {
                t234 = 0x0;
                if (0.0f > u233) {
                    t234 = 0xFFFFFFFF;
                }
                t236 = t234;
            }
            cpuAimPointSet(a5, 0x1, ((float)t236 * 41.1500015f), (u232 * 118.849998f));
            u239 = *(float *)((a4 + 0xB00));
            u240 = *(float *)((a4 + 0xB9C));
            t243 = 0x1;
            if (u240 > 0.0f) {
            } else {
                t241 = 0x0;
                if (0.0f > u240) {
                    t241 = 0xFFFFFFFF;
                }
                t243 = t241;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t243 * 41.1500015f), (u239 * 11.8850002f));
            u246 = *(float *)((a4 + 0xB00));
            u247 = *(float *)((a4 + 0xB9C));
            t250 = 0x1;
            if (u247 > 0.0f) {
            } else {
                t248 = 0x0;
                if (0.0f > u247) {
                    t248 = 0xFFFFFFFF;
                }
                t250 = t248;
            }
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t250) * 41.1500015f), (u246 * 118.849998f));
            u253 = *(float *)((a4 + 0xB00));
            u254 = *(float *)((a4 + 0xB9C));
            t257 = 0x1;
            if (u254 > 0.0f) {
            } else {
                t255 = 0x0;
                if (0.0f > u254) {
                    t255 = 0xFFFFFFFF;
                }
                t257 = t255;
            }
            u262 = (u253 * 11.8850002f);
            t263 = (-t257);
        }
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t263 * 41.1500015f), u262);
        t267 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    return t267;
}

int cpuDblAimAddDeep2(int a4, int a5)
{
    float u0;
    float u1;
    float u5;
    float u6;
    float u8;
    int t11;
    int t9;
    float u13;
    int t16;
    int t14;
    float u20;
    int t23;
    int t21;
    float u25;
    int t28;
    int t26;
    float u30;
    float u31;
    int t34;
    int t32;
    float u36;
    float u37;
    int t40;
    int t38;
    float u43;
    float u44;
    int t47;
    int t45;
    float u50;
    float u51;
    int t54;
    int t52;
    float u70;
    int t73;
    int t71;
    float u75;
    int t78;
    int t76;
    float u80;
    float u81;
    int t84;
    int t82;
    float u86;
    float u87;
    int t90;
    int t88;
    int t105;
    int t103;
    float u107;
    int t110;
    int t108;
    float u113;
    int t116;
    int t114;
    float u118;
    int t121;
    int t119;
    float u125;
    int t128;
    int t126;
    float u130;
    int t133;
    int t131;
    float u135;
    float u136;
    int t139;
    int t137;
    float u141;
    float u142;
    int t145;
    int t143;
    float u148;
    float u149;
    int t152;
    int t150;
    float u155;
    float u156;
    int t159;
    int t157;
    float u175;
    int t178;
    int t176;
    float u180;
    int t183;
    int t181;
    float u185;
    float u186;
    int t189;
    int t187;
    float u191;
    float u192;
    int t195;
    int t193;
    float u208;
    float u209;
    float u211;
    float u212;
    float u218;
    float u219;
    int t222;
    int t220;
    float u225;
    float u226;
    int t229;
    int t227;
    float u231;
    float u232;
    int t235;
    int t233;
    float u238;
    float u239;
    int t242;
    int t240;
    float u267;
    int t270;
    int t268;
    float u272;
    int t275;
    int t273;
    float u279;
    int t282;
    int t280;
    float u284;
    int t287;
    int t285;
    float u289;
    float u290;
    int t293;
    int t291;
    float u295;
    float u296;
    int t299;
    int t297;
    float u302;
    float u303;
    int t306;
    int t304;
    float u309;
    float u310;
    int t313;
    int t311;
    float u328;
    int t331;
    int t329;
    float u333;
    int t336;
    int t334;
    float u338;
    float u339;
    int t342;
    int t340;
    float u344;
    float u345;
    int t348;
    int t346;
    int t362;
    int t262;
    int t99;
    int t57;
    float u66;
    int t67;
    float u94;
    int t95;
    int t256;
    int t204;
    int t162;
    float u171;
    int t172;
    float u199;
    int t200;
    float u250;
    float u251;
    int t357;
    int t315;
    float u324;
    int t325;
    float u352;
    int t353;

    u0 = *(float *)0x8C288874;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(23.7700005f > u1)) {
        u5 = *(float *)(((((*(int *)0x8C2888E0) * 0x160) + 0x8C2FC69C) + 0x30));
        u6 = (-u5);
        if (!(0.0f > u5)) {
            u6 = u5;
        }
        if (!(u6 > 0.25f)) {
            u8 = *(float *)0x8C28886C;
            t11 = 0x1;
            if (u8 > 0.0f) {
            } else {
                t9 = 0x0;
                if (0.0f > u8) {
                    t9 = 0xFFFFFFFF;
                }
                t11 = t9;
            }
            u13 = *(float *)0x8C28A35C;
            t16 = 0x1;
            if (u13 > 0.0f) {
            } else {
                t14 = 0x0;
                if (0.0f > u13) {
                    t14 = 0xFFFFFFFF;
                }
                t16 = t14;
            }
            if (t11 == t16) {
                u20 = *(float *)((a4 + 0xB9C));
                t23 = 0x1;
                if (u20 > 0.0f) {
                } else {
                    t21 = 0x0;
                    if (0.0f > u20) {
                        t21 = 0xFFFFFFFF;
                    }
                    t23 = t21;
                }
                u25 = *(float *)0x8C28886C;
                t28 = 0x1;
                if (u25 > 0.0f) {
                } else {
                    t26 = 0x0;
                    if (0.0f > u25) {
                        t26 = 0xFFFFFFFF;
                    }
                    t28 = t26;
                }
                if (t23 == t28) {
                    u30 = *(float *)((a4 + 0xB00));
                    u31 = *(float *)((a4 + 0xB9C));
                    t34 = 0x1;
                    if (u31 > 0.0f) {
                    } else {
                        t32 = 0x0;
                        if (0.0f > u31) {
                            t32 = 0xFFFFFFFF;
                        }
                        t34 = t32;
                    }
                    t57 = a5;
                    u66 = (u30 * 83.1949997f);
                    t67 = (-t34);
                } else {
                    u36 = *(float *)((a4 + 0xB00));
                    u37 = *(float *)((a4 + 0xB9C));
                    t40 = 0x1;
                    if (u37 > 0.0f) {
                    } else {
                        t38 = 0x0;
                        if (0.0f > u37) {
                            t38 = 0xFFFFFFFF;
                        }
                        t40 = t38;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t40 * 54.8499985f), (u36 * 118.849998f));
                    u43 = *(float *)((a4 + 0xB00));
                    u44 = *(float *)((a4 + 0xB9C));
                    t47 = 0x1;
                    if (u44 > 0.0f) {
                    } else {
                        t45 = 0x0;
                        if (0.0f > u44) {
                            t45 = 0xFFFFFFFF;
                        }
                        t47 = t45;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t47 * 54.8499985f), (u43 * 59.4249992f));
                    u50 = *(float *)((a4 + 0xB00));
                    u51 = *(float *)((a4 + 0xB9C));
                    t54 = 0x1;
                    if (u51 > 0.0f) {
                    } else {
                        t52 = 0x0;
                        if (0.0f > u51) {
                            t52 = 0xFFFFFFFF;
                        }
                        t54 = t52;
                    }
                    t57 = ((a5 + 0x1) + 0x1);
                    u66 = (u50 * 118.849998f);
                    t67 = t54;
                }
                cpuAimPointSet(t57, 0x2, ((float)t67 * 54.8499985f), u66);
                t99 = (t57 + 0x1);
            } else {
                u70 = *(float *)((a4 + 0xB9C));
                t73 = 0x1;
                if (u70 > 0.0f) {
                } else {
                    t71 = 0x0;
                    if (0.0f > u70) {
                        t71 = 0xFFFFFFFF;
                    }
                    t73 = t71;
                }
                u75 = *(float *)0x8C28886C;
                t78 = 0x1;
                if (u75 > 0.0f) {
                } else {
                    t76 = 0x0;
                    if (0.0f > u75) {
                        t76 = 0xFFFFFFFF;
                    }
                    t78 = t76;
                }
                if (t73 == t78) {
                    u80 = *(float *)((a4 + 0xB00));
                    u81 = *(float *)((a4 + 0xB9C));
                    t84 = 0x1;
                    if (u81 > 0.0f) {
                    } else {
                        t82 = 0x0;
                        if (0.0f > u81) {
                            t82 = 0xFFFFFFFF;
                        }
                        t84 = t82;
                    }
                    u94 = (u80 * 118.849998f);
                    t95 = t84;
                } else {
                    u86 = *(float *)((a4 + 0xB00));
                    u87 = *(float *)((a4 + 0xB9C));
                    t90 = 0x1;
                    if (u87 > 0.0f) {
                    } else {
                        t88 = 0x0;
                        if (0.0f > u87) {
                            t88 = 0xFFFFFFFF;
                        }
                        t90 = t88;
                    }
                    u94 = (u86 * 118.849998f);
                    t95 = (-t90);
                }
                cpuAimPointSet(a5, 0x2, ((float)t95 * 54.8499985f), u94);
                t99 = (a5 + 0x1);
            }
            t262 = t99;
        } else {
            t105 = 0x1;
            if (u5 > 0.0f) {
            } else {
                t103 = 0x0;
                if (0.0f > u5) {
                    t103 = 0xFFFFFFFF;
                }
                t105 = t103;
            }
            u107 = *(float *)((a4 + 0xB00));
            t110 = 0x1;
            if (u107 > 0.0f) {
            } else {
                t108 = 0x0;
                if (0.0f > u107) {
                    t108 = 0xFFFFFFFF;
                }
                t110 = t108;
            }
            if (t105 != t110) {
                u113 = *(float *)0x8C28886C;
                t116 = 0x1;
                if (u113 > 0.0f) {
                } else {
                    t114 = 0x0;
                    if (0.0f > u113) {
                        t114 = 0xFFFFFFFF;
                    }
                    t116 = t114;
                }
                u118 = *(float *)0x8C28A35C;
                t121 = 0x1;
                if (u118 > 0.0f) {
                } else {
                    t119 = 0x0;
                    if (0.0f > u118) {
                        t119 = 0xFFFFFFFF;
                    }
                    t121 = t119;
                }
                if (t116 == t121) {
                    u125 = *(float *)((a4 + 0xB9C));
                    t128 = 0x1;
                    if (u125 > 0.0f) {
                    } else {
                        t126 = 0x0;
                        if (0.0f > u125) {
                            t126 = 0xFFFFFFFF;
                        }
                        t128 = t126;
                    }
                    u130 = *(float *)0x8C28886C;
                    t133 = 0x1;
                    if (u130 > 0.0f) {
                    } else {
                        t131 = 0x0;
                        if (0.0f > u130) {
                            t131 = 0xFFFFFFFF;
                        }
                        t133 = t131;
                    }
                    if (t128 == t133) {
                        u135 = *(float *)((a4 + 0xB00));
                        u136 = *(float *)((a4 + 0xB9C));
                        t139 = 0x1;
                        if (u136 > 0.0f) {
                        } else {
                            t137 = 0x0;
                            if (0.0f > u136) {
                                t137 = 0xFFFFFFFF;
                            }
                            t139 = t137;
                        }
                        t162 = a5;
                        u171 = (u135 * 83.1949997f);
                        t172 = (-t139);
                    } else {
                        u141 = *(float *)((a4 + 0xB00));
                        u142 = *(float *)((a4 + 0xB9C));
                        t145 = 0x1;
                        if (u142 > 0.0f) {
                        } else {
                            t143 = 0x0;
                            if (0.0f > u142) {
                                t143 = 0xFFFFFFFF;
                            }
                            t145 = t143;
                        }
                        cpuAimPointSet(a5, 0x1, ((float)t145 * 54.8499985f), (u141 * 118.849998f));
                        u148 = *(float *)((a4 + 0xB00));
                        u149 = *(float *)((a4 + 0xB9C));
                        t152 = 0x1;
                        if (u149 > 0.0f) {
                        } else {
                            t150 = 0x0;
                            if (0.0f > u149) {
                                t150 = 0xFFFFFFFF;
                            }
                            t152 = t150;
                        }
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t152 * 54.8499985f), (u148 * 59.4249992f));
                        u155 = *(float *)((a4 + 0xB00));
                        u156 = *(float *)((a4 + 0xB9C));
                        t159 = 0x1;
                        if (u156 > 0.0f) {
                        } else {
                            t157 = 0x0;
                            if (0.0f > u156) {
                                t157 = 0xFFFFFFFF;
                            }
                            t159 = t157;
                        }
                        t162 = ((a5 + 0x1) + 0x1);
                        u171 = (u155 * 118.849998f);
                        t172 = t159;
                    }
                    cpuAimPointSet(t162, 0x2, ((float)t172 * 54.8499985f), u171);
                    t204 = (t162 + 0x1);
                } else {
                    u175 = *(float *)((a4 + 0xB9C));
                    t178 = 0x1;
                    if (u175 > 0.0f) {
                    } else {
                        t176 = 0x0;
                        if (0.0f > u175) {
                            t176 = 0xFFFFFFFF;
                        }
                        t178 = t176;
                    }
                    u180 = *(float *)0x8C28886C;
                    t183 = 0x1;
                    if (u180 > 0.0f) {
                    } else {
                        t181 = 0x0;
                        if (0.0f > u180) {
                            t181 = 0xFFFFFFFF;
                        }
                        t183 = t181;
                    }
                    if (t178 == t183) {
                        u185 = *(float *)((a4 + 0xB00));
                        u186 = *(float *)((a4 + 0xB9C));
                        t189 = 0x1;
                        if (u186 > 0.0f) {
                        } else {
                            t187 = 0x0;
                            if (0.0f > u186) {
                                t187 = 0xFFFFFFFF;
                            }
                            t189 = t187;
                        }
                        u199 = (u185 * 118.849998f);
                        t200 = t189;
                    } else {
                        u191 = *(float *)((a4 + 0xB00));
                        u192 = *(float *)((a4 + 0xB9C));
                        t195 = 0x1;
                        if (u192 > 0.0f) {
                        } else {
                            t193 = 0x0;
                            if (0.0f > u192) {
                                t193 = 0xFFFFFFFF;
                            }
                            t195 = t193;
                        }
                        u199 = (u191 * 118.849998f);
                        t200 = (-t195);
                    }
                    cpuAimPointSet(a5, 0x2, ((float)t200 * 54.8499985f), u199);
                    t204 = (a5 + 0x1);
                }
                t256 = t204;
            } else {
                u208 = *(float *)((a4 + 0xB9C));
                u209 = (-u208);
                if (!(0.0f > u208)) {
                    u209 = u208;
                }
                u211 = *(float *)0x8C28886C;
                u212 = (-u211);
                if (!(0.0f > u211)) {
                    u212 = u211;
                }
                if (u209 > u212) {
                    u218 = *(float *)0x8C288874;
                    u219 = *(float *)((a4 + 0xB9C));
                    t222 = 0x1;
                    if (u219 > 0.0f) {
                    } else {
                        t220 = 0x0;
                        if (0.0f > u219) {
                            t220 = 0xFFFFFFFF;
                        }
                        t222 = t220;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t222 * 54.8499985f), u218);
                    u225 = *(float *)((a4 + 0xB00));
                    u226 = *(float *)((a4 + 0xB9C));
                    t229 = 0x1;
                    if (u226 > 0.0f) {
                    } else {
                        t227 = 0x0;
                        if (0.0f > u226) {
                            t227 = 0xFFFFFFFF;
                        }
                        t229 = t227;
                    }
                    u250 = ((float)t229 * 54.8499985f);
                    u251 = (u225 * 118.849998f);
                } else {
                    u231 = *(float *)0x8C288874;
                    u232 = *(float *)0x8C28886C;
                    t235 = 0x1;
                    if (u232 > 0.0f) {
                    } else {
                        t233 = 0x0;
                        if (0.0f > u232) {
                            t233 = 0xFFFFFFFF;
                        }
                        t235 = t233;
                    }
                    cpuAimPointSet(a5, 0x1, (u232 - ((float)t235 * 25.0f)), u231);
                    u238 = *(float *)((a4 + 0xB00));
                    u239 = *(float *)0x8C28886C;
                    t242 = 0x1;
                    if (u239 > 0.0f) {
                    } else {
                        t240 = 0x0;
                        if (0.0f > u239) {
                            t240 = 0xFFFFFFFF;
                        }
                        t242 = t240;
                    }
                    u250 = (u239 - ((float)t242 * 30.0f));
                    u251 = (u238 * 118.849998f);
                }
                cpuAimPointSet((a5 + 0x1), 0x1, u250, u251);
                t256 = ((a5 + 0x1) + 0x1);
            }
            t262 = t256;
        }
        t362 = t262;
    } else {
        u267 = *(float *)0x8C28886C;
        t270 = 0x1;
        if (u267 > 0.0f) {
        } else {
            t268 = 0x0;
            if (0.0f > u267) {
                t268 = 0xFFFFFFFF;
            }
            t270 = t268;
        }
        u272 = *(float *)0x8C28A35C;
        t275 = 0x1;
        if (u272 > 0.0f) {
        } else {
            t273 = 0x0;
            if (0.0f > u272) {
                t273 = 0xFFFFFFFF;
            }
            t275 = t273;
        }
        if (t270 == t275) {
            u279 = *(float *)((a4 + 0xB9C));
            t282 = 0x1;
            if (u279 > 0.0f) {
            } else {
                t280 = 0x0;
                if (0.0f > u279) {
                    t280 = 0xFFFFFFFF;
                }
                t282 = t280;
            }
            u284 = *(float *)0x8C28886C;
            t287 = 0x1;
            if (u284 > 0.0f) {
            } else {
                t285 = 0x0;
                if (0.0f > u284) {
                    t285 = 0xFFFFFFFF;
                }
                t287 = t285;
            }
            if (t282 == t287) {
                u289 = *(float *)((a4 + 0xB00));
                u290 = *(float *)((a4 + 0xB9C));
                t293 = 0x1;
                if (u290 > 0.0f) {
                } else {
                    t291 = 0x0;
                    if (0.0f > u290) {
                        t291 = 0xFFFFFFFF;
                    }
                    t293 = t291;
                }
                t315 = a5;
                u324 = (u289 * 83.1949997f);
                t325 = (-t293);
            } else {
                u295 = *(float *)((a4 + 0xB00));
                u296 = *(float *)((a4 + 0xB9C));
                t299 = 0x1;
                if (u296 > 0.0f) {
                } else {
                    t297 = 0x0;
                    if (0.0f > u296) {
                        t297 = 0xFFFFFFFF;
                    }
                    t299 = t297;
                }
                cpuAimPointSet(a5, 0x1, ((float)t299 * 54.8499985f), (u295 * 118.849998f));
                u302 = *(float *)((a4 + 0xB00));
                u303 = *(float *)((a4 + 0xB9C));
                t306 = 0x1;
                if (u303 > 0.0f) {
                } else {
                    t304 = 0x0;
                    if (0.0f > u303) {
                        t304 = 0xFFFFFFFF;
                    }
                    t306 = t304;
                }
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t306 * 54.8499985f), (u302 * 59.4249992f));
                u309 = *(float *)((a4 + 0xB00));
                u310 = *(float *)((a4 + 0xB9C));
                t313 = 0x1;
                if (u310 > 0.0f) {
                } else {
                    t311 = 0x0;
                    if (0.0f > u310) {
                        t311 = 0xFFFFFFFF;
                    }
                    t313 = t311;
                }
                t315 = ((a5 + 0x1) + 0x1);
                u324 = (u309 * 118.849998f);
                t325 = t313;
            }
            cpuAimPointSet(t315, 0x2, ((float)t325 * 54.8499985f), u324);
            t357 = (t315 + 0x1);
        } else {
            u328 = *(float *)((a4 + 0xB9C));
            t331 = 0x1;
            if (u328 > 0.0f) {
            } else {
                t329 = 0x0;
                if (0.0f > u328) {
                    t329 = 0xFFFFFFFF;
                }
                t331 = t329;
            }
            u333 = *(float *)0x8C28886C;
            t336 = 0x1;
            if (u333 > 0.0f) {
            } else {
                t334 = 0x0;
                if (0.0f > u333) {
                    t334 = 0xFFFFFFFF;
                }
                t336 = t334;
            }
            if (t331 == t336) {
                u338 = *(float *)((a4 + 0xB00));
                u339 = *(float *)((a4 + 0xB9C));
                t342 = 0x1;
                if (u339 > 0.0f) {
                } else {
                    t340 = 0x0;
                    if (0.0f > u339) {
                        t340 = 0xFFFFFFFF;
                    }
                    t342 = t340;
                }
                u352 = (u338 * 118.849998f);
                t353 = t342;
            } else {
                u344 = *(float *)((a4 + 0xB00));
                u345 = *(float *)((a4 + 0xB9C));
                t348 = 0x1;
                if (u345 > 0.0f) {
                } else {
                    t346 = 0x0;
                    if (0.0f > u345) {
                        t346 = 0xFFFFFFFF;
                    }
                    t348 = t346;
                }
                u352 = (u344 * 118.849998f);
                t353 = (-t348);
            }
            cpuAimPointSet(a5, 0x2, ((float)t353 * 54.8499985f), u352);
            t357 = (a5 + 0x1);
        }
        t362 = t357;
    }
    return t362;
}

void cpuDblMoodUpdate(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t15;
    int t23;
    int t30;
    int t61;
    int t92;
    int t97;
    float u108;
    float u119;
    float u132;
    float u141;
    int t148;
    int t156;
    float u162;
    int stk[12];

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
    float F9;
    float F10;
    float F14;
    int T_;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    F7 = f7;
    F8 = f8;
    F9 = f9;
    F10 = f10;
    L_8C056EA8:;
    *(unsigned int *)(((int)stk + 8)) = 0x8C287ACC;
    *(unsigned int *)0x8C2FCC60 = ((*(int *)0x8C2FCC60) + 0x1);
    *(unsigned int *)0x8C38B934 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    R10 = (0x3);
    R11 = (0x8C291F24);
    R12 = (0x4);
    R13 = (0x0);
    R14 = (0x8C2FC69C);
    R9 = (0x8C287D84);
    goto L_8C05731A;
    L_8C05731A:;
    R8 = (0x8C2FCC1C);
    if (((int)(*(int *)(((int)stk + 4))) < 0)) goto L_8C057326;
    goto L_8C057322;
    L_8C057322:;
    goto L_8C056EDA;
    L_8C056EDA:;
    R5 = (0x8C10D380);
    F5 = (32767.0f);
    F9 = (5.0f);
    if ((((*(int *)((R9 + 0xB60))) & 0x100) == 0)) goto L_8C056F2A;
    goto L_8C056EEE;
    L_8C056EEE:;
    t15 = *(int *)(((0xC58 + R9) + 0x0));
    *(float *)(((0x10 + R14) + 0x0)) = ((*(float *)(((0x10 + R14) + 0x0))) + (float)(int)((((float)(unsigned char)(*(signed char *)(((((t15 << 2) + t15) + R5) + 0x1))) * (*(float *)((R9 + 0xC90))))) * F9));
    R0 = (0x10);
    if ((!(0.0f > (*(float *)((R14 + 0x10)))))) goto L_8C056F2A;
    goto L_8C056F28;
    L_8C056F28:;
    *(float *)((R14 + R0)) = F5;
    goto L_8C056F2A;
    L_8C056F2A:;
    t23 = *(int *)((R9 + 0xA24));
    R4 = (R5);
    R6 = (t23);
    F4 = (0.0f);
    if ((t23 == 0)) goto L_8C056F3C;
    goto L_8C056F36;
    L_8C056F36:;
    if ((R6 != 4)) goto L_8C056FA8;
    goto L_8C056F3C;
    L_8C056F3C:;
    t30 = *(int *)(((0xC58 + R9) + 0x0));
    *(float *)(((0x14 + R14) + 0x0)) = ((*(float *)(((0x14 + R14) + 0x0))) + (float)(unsigned char)(*(signed char *)(((R4 + ((t30 << 2) + t30)) + 0x3))));
    R0 = (0x14);
    if ((!(0.0f > (*(float *)((R14 + 0x14)))))) goto L_8C056FD4;
    goto L_8C056F66;
    L_8C056F66:;
    *(float *)((R14 + R0)) = F5;
    goto L_8C056FD4;
    L_8C056FD4:;
    *(float *)((R14 + 0x8)) = F4;
    *(float *)((R14 + 0x0)) = F4;
    *(unsigned char *)((R14 + 0x1C)) = R13;
    *(float *)((R14 + 0x4)) = F4;
    *(unsigned char *)((R14 + 0x24)) = R13;
    *(unsigned char *)((R14 + 0xAC)) = R13;
    *(unsigned char *)((R14 + 0xAD)) = R13;
    *(unsigned char *)((R14 + 0xAE)) = R13;
    *(unsigned char *)((R14 + 0xAF)) = R13;
    *(unsigned char *)((R14 + 0xB0)) = R13;
    *(unsigned char *)((R14 + 0xB1)) = R13;
    *(unsigned short *)((R14 + 0xB4)) = R13;
    *(unsigned char *)((R14 + 0xB6)) = R13;
    *(unsigned char *)((R14 + 0xB7)) = R13;
    *(unsigned char *)((R14 + 0x12E)) = R13;
    *(unsigned char *)((R14 + 0x12F)) = R13;
    *(float *)((R14 + 0x130)) = F4;
    *(float *)((R14 + 0x138)) = F4;
    *(unsigned char *)((R14 + 0x13C)) = R13;
    *(unsigned char *)((R14 + 0x12A)) = R13;
    *(float *)((R14 + 0x9C)) = F4;
    *(float *)((R14 + 0x98)) = F4;
    *(float *)((R14 + 0x94)) = F4;
    *(float *)((R14 + 0x18)) = 1.0f;
    F10 = (10.0f);
    F6 = (1.0f);
    F7 = (20.0f);
    if (((*(int *)((((*(int *)(((0xB5C + R9) + 0x0))) << 2) + ((*(int *)(((int)stk + 8))) + 0x14)))) != 2)) goto L_8C057086;
    goto L_8C05704E;
    L_8C05704E:;
    R0 = (0x141);
    if (((*(signed char *)((R14 + 0x141))) != 0)) goto L_8C057066;
    goto L_8C057056;
    L_8C057056:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C057062;
    goto L_8C05705E;
    L_8C05705E:;
    *(float *)((R14 + 0x0)) = F9;
    goto L_8C0572FA;
    L_8C0572FA:;
    *(unsigned int *)((R9 + 0xA24)) = R12;
    R0 = (0xB60);
    if ((((*(int *)((R9 + 0xB60))) & 0x100) == 0)) goto L_8C05730C;
    goto L_8C057308;
    L_8C057308:;
    *(unsigned short *)((R14 + 0x22)) = R13;
    R0 = (0x22);
    goto L_8C05730C;
    L_8C05730C:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
    R14 = ((R14 + 0x160));
    R9 = ((R9 + 0xD78));
    goto L_8C05731A;
    L_8C057062:;
    *(float *)((R14 + 0x0)) = F7;
    goto L_8C0572FA;
    L_8C057066:;
    if (((unsigned char)(*(signed char *)((R14 + R0))) == 1)) goto L_8C057072;
    goto L_8C05706E;
    L_8C05706E:;
    goto L_8C0572F8;
    L_8C0572F8:;
    *(float *)((R14 + 0x0)) = F4;
    goto L_8C0572FA;
    L_8C057072:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C057082;
    goto L_8C05707A;
    L_8C05707A:;
    *(float *)((R14 + 0x0)) = (1.0f + 1.0f);
    F4 = ((1.0f + 1.0f));
    goto L_8C0572FA;
    L_8C057082:;
    *(float *)((R14 + 0x0)) = F10;
    goto L_8C0572FA;
    L_8C057086:;
    if (((int)(*(int *)((R8 + 0x0))) >= (int)0x14)) goto L_8C057092;
    goto L_8C05708E;
    L_8C05708E:;
    goto L_8C0571E6;
    L_8C0571E6:;
    t61 = *(int *)((R8 + 0x0));
    R2 = (t61);
    if (((int)t61 >= (int)0x2)) goto L_8C05720E;
    goto L_8C0571EE;
    L_8C0571EE:;
    if ((((*(int *)((R11 + 0x54))) & R12) != 0)) goto L_8C05721A;
    goto L_8C0571F6;
    L_8C0571F6:;
    *(float *)((R14 + 0x0)) = (float)(((int)((int)(nlRand()) % (int)R10)) + 0x14);
    goto L_8C0572FA;
    L_8C05721A:;
    R0 = ((((int)((int)(nlRand()) % (int)0x5)) + 0x12));
    goto L_8C05723C;
    L_8C05723C:;
    *(float *)((R14 + 0x0)) = (float)R0;
    goto L_8C0572FA;
    L_8C05720E:;
    if (((int)R2 >= (int)R12)) goto L_8C057244;
    goto L_8C057212;
    L_8C057212:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C05722C;
    goto L_8C05721A;
    L_8C05722C:;
    R0 = ((((int)((int)(nlRand()) % (int)R10)) + 0xF));
    goto L_8C05723C;
    L_8C057244:;
    if (((*(int *)((R8 + 0x0))) != 5)) goto L_8C05726A;
    goto L_8C05724A;
    L_8C05724A:;
    if ((((*(int *)((R11 + 0x54))) & R12) != 0)) goto L_8C057278;
    goto L_8C057252;
    L_8C057252:;
    *(float *)((R14 + 0x0)) = (float)(((int)((int)(nlRand()) % (int)R10)) + 0x5);
    goto L_8C0572FA;
    L_8C057278:;
    *(float *)((R14 + 0x0)) = (float)(((int)((int)(nlRand()) % (int)R10)) + 0x3);
    goto L_8C0572FA;
    L_8C05726A:;
    if (((int)(*(int *)((R8 + 0x0))) >= (int)0x7)) goto L_8C057290;
    goto L_8C057272;
    L_8C057272:;
    *(volatile int *)((R11 + 0x54));
    goto L_8C057278;
    L_8C057290:;
    if (((int)(*(int *)((R8 + 0x0))) >= (int)0xA)) goto L_8C0572F8;
    goto L_8C057298;
    L_8C057298:;
    if ((((*(int *)((R11 + 0x54))) & R12) != 0)) goto L_8C0572F8;
    goto L_8C0572A0;
    L_8C0572A0:;
    t92 = nlRand();
    R0 = (t92);
    if (((int)t92 < 0)) goto L_8C0572AE;
    goto L_8C0572AA;
    L_8C0572AA:;
    R0 = ((R0 & 0x1));
    goto L_8C0572B8;
    L_8C0572B8:;
    *(float *)((R14 + 0x0)) = (float)(R0 + 0x2);
    goto L_8C0572FA;
    L_8C0572AE:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0572B8;
    L_8C057092:;
    t97 = *(int *)0x8C2FCC20;
    R4 = (t97);
    R5 = (0x8C2FCC20);
    F4 = (32768.0f);
    F5 = (0.949999988f);
    F8 = (0.850000024f);
    if ((t97 != 0)) goto L_8C05710C;
    goto L_8C0570A6;
    L_8C0570A6:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C0570DC;
    goto L_8C0570AE;
    L_8C0570AE:;
    F3 = (((((*(float *)((R14 + 0x10))) * F7) / F4) + F9));
    goto L_8C0570EE;
    L_8C0570EE:;
    *(float *)((R14 + 0x0)) = F3;
    u108 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u108 * 0.200000003f) / F4)) + F5);
    F6 = (0.200000003f);
    if ((F8 > ((-((u108 * 0.200000003f) / F4)) + F5))) goto L_8C057154;
    goto L_8C057108;
    L_8C057108:;
    goto L_8C0572FA;
    L_8C057154:;
    *(float *)((R14 + 0x18)) = F8;
    goto L_8C0572FA;
    L_8C0570DC:;
    F3 = (((((*(float *)((R14 + 0x10))) * 60.0f) / F4) + 6.0f));
    F7 = (60.0f);
    goto L_8C0570EE;
    L_8C05710C:;
    if ((R4 != 1)) goto L_8C05715A;
    goto L_8C057112;
    L_8C057112:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C057124;
    goto L_8C05711A;
    L_8C05711A:;
    F3 = ((((*(float *)((R14 + 0x10))) * F7) / F4));
    goto L_8C057136;
    L_8C057136:;
    *(float *)((R14 + 0x0)) = F3;
    u119 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u119 * 0.170000002f) / F4)) + F6);
    F5 = (0.170000002f);
    if ((F8 > ((-((u119 * 0.170000002f) / F4)) + F6))) goto L_8C057154;
    goto L_8C057150;
    L_8C057150:;
    goto L_8C0572FA;
    L_8C057124:;
    F3 = (((((*(float *)((R14 + 0x10))) * 40.0f) / F4) + 8.0f));
    F7 = (40.0f);
    goto L_8C057136;
    L_8C05715A:;
    F8 = (0.100000001f);
    if ((R4 != 2)) goto L_8C0571A2;
    goto L_8C057164;
    L_8C057164:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C05717A;
    goto L_8C05716C;
    L_8C05716C:;
    F3 = ((((*(float *)((R14 + 0x10))) * 15.0f) / F4));
    F7 = (15.0f);
    goto L_8C057188;
    L_8C057188:;
    *(float *)((R14 + 0x0)) = F3;
    u132 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u132 * F8) / F4)) + F6);
    if ((F5 > ((-((u132 * F8) / F4)) + F6))) goto L_8C0571E0;
    goto L_8C05719E;
    L_8C05719E:;
    goto L_8C0572FA;
    L_8C0571E0:;
    *(float *)((R14 + 0x18)) = F5;
    goto L_8C0572FA;
    L_8C05717A:;
    F3 = (((((*(float *)((R14 + 0x10))) * F7) / F4) + 4.0f));
    F9 = (4.0f);
    goto L_8C057188;
    L_8C0571A2:;
    if ((((*(int *)((R11 + 0x54))) & R12) == 0)) goto L_8C0571B4;
    goto L_8C0571AA;
    L_8C0571AA:;
    F3 = ((((*(float *)((R14 + 0x10))) * F10) / F4));
    goto L_8C0571C2;
    L_8C0571C2:;
    *(float *)((R14 + 0x0)) = F3;
    u141 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u141 * F8) / F4)) + 0.99000001f);
    F6 = (0.99000001f);
    if ((F5 > ((-((u141 * F8) / F4)) + 0.99000001f))) goto L_8C0571E0;
    goto L_8C0571DC;
    L_8C0571DC:;
    goto L_8C0572FA;
    L_8C0571B4:;
    F3 = (((((*(float *)((R14 + 0x10))) * 25.0f) / F4) + F6));
    F7 = (25.0f);
    goto L_8C0571C2;
    L_8C056FA8:;
    t148 = *(int *)(((0xC58 + R9) + 0x0));
    *(float *)(((0x14 + R14) + 0x0)) = ((*(float *)(((0x14 + R14) + 0x0))) - (float)(unsigned char)(*(signed char *)(((R4 + ((t148 << 2) + t148)) + 0x4))));
    R0 = (0x14);
    if ((!(0.0f > (*(float *)((R14 + 0x14)))))) goto L_8C056FD4;
    goto L_8C056FD2;
    L_8C056FD2:;
    *(float *)((R14 + R0)) = F4;
    goto L_8C056FD4;
    L_8C057326:;
    *(unsigned int *)(((int)stk + 12)) = 0x8C2FC69C;
    *(unsigned int *)(((int)stk + 4)) = R10;
    R14 = (0x8C287D84);
    goto L_8C0573B6;
    L_8C0573B6:;
    if (((int)(*(int *)(((int)stk + 4))) >= 0)) goto L_8C057330;
    goto L_8C0573BC;
    L_8C0573BC:;
    return;
    L_8C057330:;
    t156 = *(int *)(((int)stk + 8));
    R0 = (t156);
    if (((*(int *)(((((*(int *)(((0xB5C + R14) + 0x0))) << 2) + (t156 + 0x14)) + 0x0))) == 0)) goto L_8C0573A4;
    goto L_8C057346;
    L_8C057346:;
    u162 = *(float *)((R11 + 0x2C));
    R0 = (0x2C);
    F1 = (u162);
    F2 = (0.0f);
    F3 = ((-(*(float *)((R14 + 0xB00)))));
    if ((!(u162 > 0.0f))) goto L_8C05735A;
    goto L_8C057356;
    L_8C057356:;
    R3 = (0x1);
    goto L_8C057364;
    L_8C057364:;
    if ((F3 != (float)R3)) goto L_8C0573A4;
    goto L_8C05736C;
    L_8C05736C:;
    R4 = (R14);
    R9 = (0x8C10D814);
    if (((*(int *)(((((((*(int *)(((0xB5C + R14) + 0x0))) + 0x2) & R10) << 2) + ((*(int *)(((int)stk + 8))) + 0x14)) + 0x0))) == 0)) goto L_8C057392;
    goto L_8C05738A;
    L_8C05738A:;
    R3 = ((*(int *)((R9 + ((*(int *)((R8 + 0x0))) << 2)))));
    goto L_8C0573A0;
    L_8C0573A0:;
    R0 = ((((int (*)(int, int, int, int, float, float, float, float, float, float, float))(R3))(R4, R5, R6, R7, F4, F5, F6, F7, F8, F9, F10)));
    goto L_8C0573A4;
    L_8C0573A4:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x160);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
    R14 = ((R14 + 0xD78));
    goto L_8C0573B6;
    L_8C057392:;
    R3 = ((*(int *)(((R9 + ((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x141))) << 2)) + 0x38))));
    goto L_8C0573A0;
    L_8C05735A:;
    if ((!(F2 > F1))) goto L_8C057362;
    goto L_8C05735E;
    L_8C05735E:;
    R3 = (0xFFFFFFFF);
    goto L_8C057364;
    L_8C057362:;
    R3 = (0x0);
    goto L_8C057364;
}

void netHitBall(int a4, int a5, float f4, float f5, float f6, float f7)
{
    float u4;
    int t7;
    int t5;
    float u9;
    int t12;
    int t10;
    float u16;
    int t17;
    float u18;
    float u20;
    float u23;
    float u24;
    float u26;
    float u27;
    float u66;
    float u95;
    float u101;
    float u140;
    float u144;
    float u145;
    float u146;
    float u147;
    float u148;
    float u153;
    float u154;
    float u155;
    float u156;
    float u172;
    float u173;
    float u158;
    int t161;
    int t159;
    float u163;
    float u164;
    float u165;
    float u166;
    float u168;
    float u228;
    float u219;
    float u200;
    float u201;
    int t204;
    int t202;
    int t208;
    int t206;
    float u212;
    float u325;
    float u338;
    float u377;
    float u406;
    float u412;
    float u451;
    float u455;
    float u456;
    float u457;
    float u458;
    float u459;
    float u464;
    float u465;
    float u466;
    float u467;
    float u483;
    float u484;
    float u469;
    int t472;
    int t470;
    float u474;
    float u475;
    float u476;
    float u477;
    float u479;
    float u539;
    float u530;
    float u511;
    float u512;
    int t515;
    int t513;
    int t519;
    int t517;
    float u523;
    float u198;
    float u509;
    int stk[16];

    if ((*(int *)0x8C287ADC) == 2) {
        *(unsigned int *)0x8C38B938 = 0x18;
    } else {
        *(unsigned int *)0x8C38B938 = 0x1F;
    }
    u4 = *(float *)((a4 + 0x8));
    t7 = 0x1;
    if (u4 > 0.0f) {
    } else {
        t5 = 0x0;
        if (0.0f > u4) {
            t5 = 0xFFFFFFFF;
        }
        t7 = t5;
    }
    u9 = *(float *)((a4 + 0x14));
    t12 = 0x1;
    if (u9 > 0.0f) {
    } else {
        t10 = 0x0;
        if (0.0f > u9) {
            t10 = 0xFFFFFFFF;
        }
        t12 = t10;
    }
    if (t7 == t12) {
    } else {
        u16 = *(float *)((a4 + 0xC));
        t17 = *(int *)0x8C38B938;
        u18 = (-u16);
        if (!(0.0f > u16)) {
            u18 = u16;
        }
        u20 = (-u16);
        if (!(0.0f > u16)) {
            u20 = u16;
        }
        if (!((float)(t17 << 1) > u20)) {
        } else {
            if (!((((u18 / (float)t17) + 10.0f) - 0.0f) > (*(float *)((a4 + 0x10))))) {
            } else {
                u23 = *(float *)((a4 + 0xC));
                u24 = (-u23);
                if (!(0.0f > u23)) {
                    u24 = u23;
                }
                u26 = *(float *)((a4 + 0x10));
                if (!((((u24 / (float)t17) + 8.0f) + 0.0f) > u26)) {
                    if (!((((u24 / (float)t17) + 8.0f) + 1.0f) > u26)) {
                        u27 = (-u23);
                        if (!(0.0f > u23)) {
                            u27 = u23;
                        }
                        if (!(u27 > 0.5f)) {
                            if ((*(int *)0x8C38B934) == 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                                *(volatile float *)((a4 + 0x3C));
                                evNop(*(Stk3 *)((a4 + 0xC)));
                            }
                            if ((0x4 & (*(int *)((a4 + 0x54)))) != 0) {
                                sndSeStage();
                                *(unsigned int *)0x8C1D126C = 0x1;
                            }
                            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                            u66 = (*(float *)((a4 + 0x3C)));
                            u66 *= -0.300000012f;
                            *(float *)((a4 + 0x3C)) = u66;
                            *(unsigned int *)0x8C38B934 = 0x32;
                            *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a4 + 0x3C))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                            *(float *)((a4 + 0x30)) = 0.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                            seNetHit2();
                            seNetHit();
                            *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                            *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                        } else {
                            if ((((u24 / (float)t17) + 8.0f) + 1.0f) > (*(float *)((a4 + 0x10)))) {
                                if ((*(int *)0x8C38B934) == 0) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                                    *(volatile float *)0x8C0CE5C4;
                                    *(volatile float *)((a4 + 0x3C));
                                    evNop(*(Stk3 *)((a4 + 0xC)));
                                }
                                *(unsigned int *)0x8C38B934 = 0x32;
                                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.100000001f);
                                *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) * 0.100000001f);
                                u95 = (*(float *)((a4 + 0x3C)));
                                u95 *= -0.100000001f;
                                *(float *)((a4 + 0x3C)) = u95;
                                *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + u95);
                                seNetHit();
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                                *(float *)((a4 + 0x30)) = 0.0f;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                                *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                                *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                            } else {
                                u101 = 0.100000001f;
                                u101 = u101 + 0.899999976f * (((*(float *)((a4 + 0x10))) - ((u18 / (float)t17) + 10.0f)) + 1.0f);
                                if (0.0f > (u101 * 0.899999976f)) {
                                    *(unsigned int *)0x8C38B934 = 0x32;
                                }
                                if ((*(int *)0x8C38B934) == 0) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                                    *(volatile float *)((a4 + 0x3C));
                                    evNop(*(Stk3 *)((a4 + 0xC)));
                                }
                                if (((*(int *)((a4 + 0x54))) & 0x4) != 0) {
                                    sndSeStage();
                                    *(unsigned int *)0x8C1D126C = 0x1;
                                }
                                if (0.0f > (u101 * 0.899999976f)) {
                                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                                    u140 = (*(float *)((a4 + 0x38)));
                                    u140 *= -0.5f;
                                    *(float *)((a4 + 0x38)) = u140;
                                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * ((u101 * 0.899999976f)));
                                } else {
                                    *(float *)0x8C38B950 = (nlScalor((a4 + 0x34)));
                                    u144 = *(float *)((a4 + 0x34));
                                    u145 = *(float *)((a4 + 0x38));
                                    u146 = *(float *)((a4 + 0x3C));
                                    u147 = (u145 * u145);
                                    u147 = u147 + u144 * u144;
                                    u148 = u147;
                                    u148 = u148 + u146 * u146;
                                    *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                                    *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * ((((u101 * 0.899999976f)) * 0.300000012f)));
                                    u153 = *(float *)((a4 + 0x34));
                                    u154 = *(float *)((a4 + 0x3C));
                                    u155 = (u154 * u154);
                                    u155 = u155 + u153 * u153;
                                    u156 = (u155 - u148);
                                    if (!(0.0f > (u148 - u155))) {
                                        u156 = (u148 - u155);
                                    }
                                    *(float *)((a4 + 0x38)) = (_builtin_sqrtf(u156) * 0.300000012f);
                                    u172 = (_builtin_sqrtf(u156) * 0.300000012f);
                                    u173 = (_builtin_sqrtf(u156) * 0.300000012f);
                                    if ((_builtin_sqrtf(u156) * 0.300000012f) > 1.0f) {
                                        *(float *)((a4 + 0x38)) = 1.0f;
                                        u158 = *(float *)((a4 + 0x3C));
                                        t161 = 0x1;
                                        if (u158 > 0.0f) {
                                        } else {
                                            t159 = 0x0;
                                            if (0.0f > u158) {
                                                t159 = 0xFFFFFFFF;
                                            }
                                            t161 = t159;
                                        }
                                        u163 = *(float *)((a4 + 0x34));
                                        u164 = *(float *)((a4 + 0x38));
                                        u165 = (u164 * u164);
                                        u165 = u165 + u163 * u163;
                                        u166 = (u165 - u148);
                                        if (!(0.0f > (u148 - u165))) {
                                            u166 = (u148 - u165);
                                        }
                                        u168 = (_builtin_sqrtf(u166) * (float)t161);
                                        *(float *)((a4 + 0x3C)) = (u168 * 0.300000012f);
                                        u172 = (u168 * 0.300000012f);
                                        u173 = 0.0f;
                                    }
                                    *(float *)0x8C38B93C = (*(float *)((a4 + 0x38)));
                                }
                                *(unsigned int *)0x8C38B934 = 0x32;
                                u228 = (u101 * 0.899999976f);
                                if ((u101 * 0.899999976f) > 0.0f) {
                                    if (!(0.0f > (*(float *)((a4 + 0x3C))))) {
                                        u198 = (*(float *)((a4 + 0x3C)));
                                    } else {
                                        u198 = (-(*(float *)((a4 + 0x3C))));
                                    }
                                    u219 = (u101 * 0.899999976f);
                                    if (0.100000001f > u198) {
                                        u200 = *(float *)((a4 + 0x8));
                                        u201 = *(float *)((a4 + 0x3C));
                                        t204 = 0x1;
                                        if (u200 > 0.0f) {
                                        } else {
                                            t202 = 0x0;
                                            if (0.0f > u200) {
                                                t202 = 0xFFFFFFFF;
                                            }
                                            t204 = t202;
                                        }
                                        t208 = 0x1;
                                        if ((u200 + u201) > 0.0f) {
                                        } else {
                                            t206 = 0x0;
                                            if (0.0f > (u200 + u201)) {
                                                t206 = 0xFFFFFFFF;
                                            }
                                            t208 = t206;
                                        }
                                        u212 = (u101 * 0.899999976f);
                                        if (t204 == t208) {
                                            *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * (-1.0f));
                                            u212 = (((u101 * 0.899999976f)) * (-1.0f));
                                        }
                                        u219 = u212;
                                    }
                                    u228 = u219;
                                }
                                if (!(u228 > 0.0f)) {
                                    *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a4 + 0x3C))));
                                    *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                                    *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                                } else {
                                    if ((0x4 & (*(int *)((a4 + 0x54)))) != 0) {
                                        netJudgeReact();
                                        *(unsigned int *)0x8C1D1270 = ((*(int *)0x8C1D1270) + 0x1);
                                    }
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80);
                                }
                                *(float *)0x8C38B948 = (*(float *)((a4 + 0x8)));
                                *(float *)0x8C38B94C = (*(float *)((a4 + 0x14)));
                                *(float *)0x8C38B940 = (*(float *)((a4 + 0x3C)));
                                *(float *)0x8C38B954 = (nlScalor((a4 + 0x34)));
                                seNetHit();
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                                *(float *)((a4 + 0x30)) = 0.0f;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                            }
                        }
                    } else {
                        if ((*(int *)0x8C38B934) == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                            *(volatile float *)((a4 + 0x3C));
                            evNop(*(Stk3 *)((a4 + 0xC)));
                        }
                        if ((0x4 & (*(int *)((a4 + 0x54)))) != 0) {
                            sndSeStage();
                            *(unsigned int *)0x8C1D126C = 0x1;
                        }
                        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                        u325 = (*(float *)((a4 + 0x3C)));
                        u325 *= -0.300000012f;
                        *(float *)((a4 + 0x3C)) = u325;
                        *(unsigned int *)0x8C38B934 = 0x32;
                        *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a4 + 0x3C))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                        *(float *)((a4 + 0x30)) = 0.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                        seNetHit2();
                        seNetHit();
                        *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                        *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                    }
                } else {
                    u338 = (-u23);
                    if (!(0.0f > u23)) {
                        u338 = u23;
                    }
                    if (!(u338 > 0.5f)) {
                        if ((*(int *)0x8C38B934) == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                            *(volatile float *)((a4 + 0x3C));
                            evNop(*(Stk3 *)((a4 + 0xC)));
                        }
                        if ((0x4 & (*(int *)((a4 + 0x54)))) != 0) {
                            sndSeStage();
                            *(unsigned int *)0x8C1D126C = 0x1;
                        }
                        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                        u377 = (*(float *)((a4 + 0x3C)));
                        u377 *= -0.300000012f;
                        *(float *)((a4 + 0x3C)) = u377;
                        *(unsigned int *)0x8C38B934 = 0x32;
                        *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a4 + 0x3C))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                        *(float *)((a4 + 0x30)) = 0.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                        seNetHit2();
                        seNetHit();
                        *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                        *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                    } else {
                        if ((((u24 / (float)t17) + 8.0f) + 1.0f) > (*(float *)((a4 + 0x10)))) {
                            if ((*(int *)0x8C38B934) == 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                                *(volatile float *)0x8C0CE5C4;
                                *(volatile float *)((a4 + 0x3C));
                                evNop(*(Stk3 *)((a4 + 0xC)));
                            }
                            *(unsigned int *)0x8C38B934 = 0x32;
                            *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.100000001f);
                            *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) * 0.100000001f);
                            u406 = (*(float *)((a4 + 0x3C)));
                            u406 *= -0.100000001f;
                            *(float *)((a4 + 0x3C)) = u406;
                            *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + u406);
                            seNetHit();
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                            *(float *)((a4 + 0x30)) = 0.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                            *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                            *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                        } else {
                            u412 = 0.100000001f;
                            u412 = u412 + 0.899999976f * (((*(float *)((a4 + 0x10))) - ((u18 / (float)t17) + 10.0f)) + 1.0f);
                            if (0.0f > (u412 * 0.899999976f)) {
                                *(unsigned int *)0x8C38B934 = 0x32;
                            }
                            if ((*(int *)0x8C38B934) == 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0xC)); }
                                *(volatile float *)((a4 + 0x3C));
                                evNop(*(Stk3 *)((a4 + 0xC)));
                            }
                            if (((*(int *)((a4 + 0x54))) & 0x4) != 0) {
                                sndSeStage();
                                *(unsigned int *)0x8C1D126C = 0x1;
                            }
                            if (0.0f > (u412 * 0.899999976f)) {
                                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                                u451 = (*(float *)((a4 + 0x38)));
                                u451 *= -0.5f;
                                *(float *)((a4 + 0x38)) = u451;
                                *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * ((u412 * 0.899999976f)));
                            } else {
                                *(float *)0x8C38B950 = (nlScalor((a4 + 0x34)));
                                u455 = *(float *)((a4 + 0x34));
                                u456 = *(float *)((a4 + 0x38));
                                u457 = *(float *)((a4 + 0x3C));
                                u458 = (u456 * u456);
                                u458 = u458 + u455 * u455;
                                u459 = u458;
                                u459 = u459 + u457 * u457;
                                *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.5f);
                                *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * ((((u412 * 0.899999976f)) * 0.300000012f)));
                                u464 = *(float *)((a4 + 0x34));
                                u465 = *(float *)((a4 + 0x3C));
                                u466 = (u465 * u465);
                                u466 = u466 + u464 * u464;
                                u467 = (u466 - u459);
                                if (!(0.0f > (u459 - u466))) {
                                    u467 = (u459 - u466);
                                }
                                *(float *)((a4 + 0x38)) = (_builtin_sqrtf(u467) * 0.300000012f);
                                u483 = (_builtin_sqrtf(u467) * 0.300000012f);
                                u484 = (_builtin_sqrtf(u467) * 0.300000012f);
                                if ((_builtin_sqrtf(u467) * 0.300000012f) > 1.0f) {
                                    *(float *)((a4 + 0x38)) = 1.0f;
                                    u469 = *(float *)((a4 + 0x3C));
                                    t472 = 0x1;
                                    if (u469 > 0.0f) {
                                    } else {
                                        t470 = 0x0;
                                        if (0.0f > u469) {
                                            t470 = 0xFFFFFFFF;
                                        }
                                        t472 = t470;
                                    }
                                    u474 = *(float *)((a4 + 0x34));
                                    u475 = *(float *)((a4 + 0x38));
                                    u476 = (u475 * u475);
                                    u476 = u476 + u474 * u474;
                                    u477 = (u476 - u459);
                                    if (!(0.0f > (u459 - u476))) {
                                        u477 = (u459 - u476);
                                    }
                                    u479 = (_builtin_sqrtf(u477) * (float)t472);
                                    *(float *)((a4 + 0x3C)) = (u479 * 0.300000012f);
                                    u483 = (u479 * 0.300000012f);
                                    u484 = 0.0f;
                                }
                                *(float *)0x8C38B93C = (*(float *)((a4 + 0x38)));
                            }
                            *(unsigned int *)0x8C38B934 = 0x32;
                            u539 = (u412 * 0.899999976f);
                            if ((u412 * 0.899999976f) > 0.0f) {
                                if (!(0.0f > (*(float *)((a4 + 0x3C))))) {
                                    u509 = (*(float *)((a4 + 0x3C)));
                                } else {
                                    u509 = (-(*(float *)((a4 + 0x3C))));
                                }
                                u530 = (u412 * 0.899999976f);
                                if (0.100000001f > u509) {
                                    u511 = *(float *)((a4 + 0x8));
                                    u512 = *(float *)((a4 + 0x3C));
                                    t515 = 0x1;
                                    if (u511 > 0.0f) {
                                    } else {
                                        t513 = 0x0;
                                        if (0.0f > u511) {
                                            t513 = 0xFFFFFFFF;
                                        }
                                        t515 = t513;
                                    }
                                    t519 = 0x1;
                                    if ((u511 + u512) > 0.0f) {
                                    } else {
                                        t517 = 0x0;
                                        if (0.0f > (u511 + u512)) {
                                            t517 = 0xFFFFFFFF;
                                        }
                                        t519 = t517;
                                    }
                                    u523 = (u412 * 0.899999976f);
                                    if (t515 == t519) {
                                        *(float *)((a4 + 0x3C)) = ((*(float *)((a4 + 0x3C))) * (-1.0f));
                                        u523 = (((u412 * 0.899999976f)) * (-1.0f));
                                    }
                                    u530 = u523;
                                }
                                u539 = u530;
                            }
                            if (!(u539 > 0.0f)) {
                                *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x8))) + (*(float *)((a4 + 0x3C))));
                                *(unsigned int *)((a4 + 0x4C)) = ((*(int *)((a4 + 0x4C))) + 0x1);
                                *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x1);
                            } else {
                                if ((0x4 & (*(int *)((a4 + 0x54)))) != 0) {
                                    netJudgeReact();
                                    *(unsigned int *)0x8C1D1270 = ((*(int *)0x8C1D1270) + 0x1);
                                }
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80);
                            }
                            *(float *)0x8C38B948 = (*(float *)((a4 + 0x8)));
                            *(float *)0x8C38B94C = (*(float *)((a4 + 0x14)));
                            *(float *)0x8C38B940 = (*(float *)((a4 + 0x3C)));
                            *(float *)0x8C38B954 = (nlScalor((a4 + 0x34)));
                            seNetHit();
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)((a4 + 0x34)); }
                            *(float *)((a4 + 0x30)) = 0.0f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)((a4 + 0xC)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                        }
                    }
                }
            }
        }
    }
}

void cpuDblPoachCheck(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t66;
    int t67;
    float t18;
    float t19;
    float t21;
    float u24;
    float u25;
    float u26;
    float u28;
    float t78;
    float t79;
    float t81;
    float u84;
    float u85;
    float u86;
    float u88;
    float u167;
    float u168;
    int t171;
    int t169;
    float u173;
    int t176;
    int t174;
    float u181;
    float u182;
    int t185;
    int t183;
    float u187;
    int t190;
    int t188;
    int t320;
    int t321;
    float t252;
    float t253;
    int t375;
    int t376;
    float t332;
    float t333;
    int t334;
    int t335;
    int t337;
    int t338;
    int t340;
    int t341;
    float t382;
    float u388;
    float u389;
    int t392;
    int t390;
    float u394;
    int t397;
    int t395;
    float u402;
    int t405;
    int t403;
    float u420;
    float u422;
    float u424;
    float u426;
    float u430;
    float u432;
    float u434;
    float u436;
    float u456;
    float u458;
    float u460;
    float u462;
    int t124;
    int t125;
    int t52;
    int t53;
    int t20;
    int t76;
    int t77;
    int t111;
    int t112;
    int t80;
    int t214;
    int t307;
    int t308;
    int t266;
    int t267;
    float u275;
    int t328;
    int t361;
    int t362;
    int t384;
    int t385;
    int stk[17];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 0x4) != 0) {
    } else {
        if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) {
            t66 = 0x160;
            t67 = 0x8C2FC69C;
            if (((*(int *)((a4 + 0xB60))) & 0x4) == 0) {
            } else {
                if (((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x4) == 0) {
                    t52 = 0x160;
                    t53 = 0x8C2FC69C;
                } else {
                    t18 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    t19 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                    if ((t18 > t19) && (t20 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t20 < (int)0xF)) {
                        t21 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                        if (!(10.0f > t21)) {
                            u24 = *(float *)((a4 + 0xAF0));
                            u25 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u26 = (-u24);
                            if (!(0.0f > u24)) {
                                u26 = u24;
                            }
                            u28 = (-u25);
                            if (!(0.0f > u25)) {
                                u28 = u25;
                            }
                            if (u28 > u26) {
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                            }
                        } else {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                        }
                    }
                }
                t66 = t52;
                t67 = t53;
            }
            t124 = t66;
            t125 = t67;
        } else {
            if (((unsigned char)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 1) && ((t76 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)), (t76 & 0x4) != 0) && (t77 = *(int *)((a4 + 0xB60)), (t77 & 0x4) != 0))) {
                t78 = cpuDistXZ((0xAE8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)), (0xBA8 + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)));
                t79 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                if ((t78 > t79) && (t80 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t80 < (int)0xF)) {
                    t81 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                    if (!(10.0f > t81)) {
                        u84 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u85 = *(float *)((a4 + 0xAF0));
                        u86 = (-u84);
                        if (!(0.0f > u84)) {
                            u86 = u84;
                        }
                        u88 = (-u85);
                        if (!(0.0f > u85)) {
                            u88 = u85;
                        }
                        if (u88 > u86) {
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                        }
                    } else {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x2;
                    }
                }
            } else {
                t111 = 0x160;
                t112 = 0x8C2FC69C;
            }
            t124 = t111;
            t125 = t112;
        }
        if ((int)(*(int *)0x8C2FCC1C) >= (int)0x14) {
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) == (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)))) {
            } else {
                if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                    u167 = *(float *)((a4 + 0xAF0));
                    u168 = *(float *)0x8C291F44;
                    t171 = 0x1;
                    if ((u168 - u167) > 0.0f) {
                    } else {
                        t169 = 0x0;
                        if (0.0f > (u168 - u167)) {
                            t169 = 0xFFFFFFFF;
                        }
                        t171 = t169;
                    }
                    u173 = *(float *)0x8C291F38;
                    t176 = 0x1;
                    if ((u167 - u173) > 0.0f) {
                    } else {
                        t174 = 0x0;
                        if (0.0f > (u167 - u173)) {
                            t174 = 0xFFFFFFFF;
                        }
                        t176 = t174;
                    }
                    if (t171 == t176) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                } else {
                    u181 = *(float *)((a4 + 0xAF0));
                    u182 = *(float *)0x8C291F44;
                    t185 = 0x1;
                    if ((u182 - (u181 * 0.75f)) > 0.0f) {
                    } else {
                        t183 = 0x0;
                        if (0.0f > (u182 - (u181 * 0.75f))) {
                            t183 = 0xFFFFFFFF;
                        }
                        t185 = t183;
                    }
                    u187 = *(float *)0x8C291F38;
                    t190 = 0x1;
                    if (((u181 * 0.75f) - u187) > 0.0f) {
                    } else {
                        t188 = 0x0;
                        if (0.0f > ((u181 * 0.75f) - u187)) {
                            t188 = 0xFFFFFFFF;
                        }
                        t190 = t188;
                    }
                    if (t185 == t190) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    }
                }
            }
        } else {
            t320 = t124;
            t321 = t125;
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && (t214 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)), t214 == 0)) {
                if ((int)(*(int *)0x8C2FCC1C) <= (int)0x4) {
                    if ((*(float *)0x8C291F54) > 25.0f) {
                        t252 = nlScalor((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                        if (0.200000003f > t252) {
                            t253 = nlScalor((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                            if (!(0.200000003f > t253)) {
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        }
                    } else {
                        t266 = t124;
                        t267 = t125;
                    }
                    t307 = t266;
                    t308 = t267;
                } else {
                    if (((int)(*(int *)0x8C2FCC1C) <= (int)0x7) && (u275 = *(float *)0x8C291F54, u275 > 15.0f)) {
                        if ((int)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) > (int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)))) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        } else {
                            if ((int)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) < (int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)))) {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        }
                    }
                    t307 = t124;
                    t308 = t125;
                }
                t320 = t307;
                t321 = t308;
            }
            t375 = t320;
            t376 = t321;
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) && (t328 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)), t328 != 0)) {
                if ((int)(*(int *)0x8C2FCC1C) < (int)0x4) {
                    t332 = nlScalor((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    if (t332 > 0.449999988f) {
                        t333 = nlScalor((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        if (t333 > 0.449999988f) {
                            t334 = nlRand();
                            t335 = ((~(((~t334) + 0x1) & 0x1)) + 0x1);
                            if ((int)t334 >= 0) {
                                t335 = (t334 & 0x1);
                            }
                            if (t335 != 0) {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                            } else {
                                t337 = nlRand();
                                t338 = ((~(((~t337) + 0x1) & 0x1)) + 0x1);
                                if ((int)t337 >= 0) {
                                    t338 = (t337 & 0x1);
                                }
                                if (t338 != 0) {
                                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                } else {
                                    t340 = nlRand();
                                    t341 = ((~(((~t340) + 0x1) & 0x1)) + 0x1);
                                    if ((int)t340 >= 0) {
                                        t341 = (t340 & 0x1);
                                    }
                                    if (t341 != 0) {
                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t361 = t320;
                    t362 = t321;
                }
                t375 = t361;
                t376 = t362;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
            t382 = cpuDblPathCross((0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), t375, t376, *(Stk3 *)(0x8C291F3C));
            if (((int)(*(int *)0x8C2FCC1C) >= (int)0x5) && (t384 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)), t385 != t384)) {
                u388 = *(float *)((a4 + 0xAF0));
                u389 = *(float *)0x8C291F44;
                t392 = 0x1;
                if ((u389 - u388) > 0.0f) {
                } else {
                    t390 = 0x0;
                    if (0.0f > (u389 - u388)) {
                        t390 = 0xFFFFFFFF;
                    }
                    t392 = t390;
                }
                u394 = *(float *)0x8C291F38;
                t397 = 0x1;
                if ((u388 - u394) > 0.0f) {
                } else {
                    t395 = 0x0;
                    if (0.0f > (u388 - u394)) {
                        t395 = 0xFFFFFFFF;
                    }
                    t397 = t395;
                }
                if (t392 == t397) {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x0;
                }
            } else {
                u402 = *(float *)0x8C291F38;
                t405 = 0x1;
                if (u402 > 0.0f) {
                } else {
                    t403 = 0x0;
                    if (0.0f > u402) {
                        t403 = 0xFFFFFFFF;
                    }
                    t405 = t403;
                }
                if ((float)t405 == (-(*(float *)((a4 + 0xB00))))) {
                    if (((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && (t382 == 0.0f)) {
                        if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                            u420 = *(float *)0x8C291F38;
                            u422 = (-u420);
                            if (!(0.0f > u420)) {
                                u422 = (*(float *)0x8C291F38);
                            }
                            u424 = *(float *)((a4 + 0xAF0));
                            u426 = (-u424);
                            if (!(0.0f > u424)) {
                                u426 = (*(float *)((a4 + 0xAF0)));
                            }
                            if (!((u422 + 10.0f) > u426)) {
                                if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
                                    u430 = *(float *)0x8C291F38;
                                    u432 = (-u430);
                                    if (!(0.0f > u430)) {
                                        u432 = (*(float *)0x8C291F38);
                                    }
                                    u434 = *(float *)((a4 + 0xAF0));
                                    u436 = (-u434);
                                    if (!(0.0f > u434)) {
                                        u436 = (*(float *)((a4 + 0xAF0)));
                                    }
                                    if (u432 > u436) {
                                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                    }
                                }
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            }
                        } else {
                            if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
                                u456 = *(float *)0x8C291F38;
                                u458 = (-u456);
                                if (!(0.0f > u456)) {
                                    u458 = (*(float *)0x8C291F38);
                                }
                                u460 = *(float *)((a4 + 0xAF0));
                                u462 = (-u460);
                                if (!(0.0f > u460)) {
                                    u462 = (*(float *)((a4 + 0xAF0)));
                                }
                                if (u458 > u462) {
                                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
