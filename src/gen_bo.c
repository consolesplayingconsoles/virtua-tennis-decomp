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
void netHitBall(int a4);
void cpuDblPoachCheck(int a4, float f4, float f5, float f6);




/* manual: one argument, the ball: the generated form also took r5 and fr4-fr7, which the code never reads (its entry sets r4, fr4 and fr6 first) */
void netHitBall(int a4)
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


