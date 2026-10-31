/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];

typedef struct { int w[3]; } Stk3;
int ballInit(int);
int miniBallObjSpawn(void);
int miniBowlingScore(void);
int miniLaunchBall(void);
int miniMessageSpawn(int);
float nlRandom(void);
int serveNextPoint(void);
Stk3 vecMake(float, float, float);
void miniOnEvent(int a4, int a5, int a6, int a7, float f4);

void miniOnEvent(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t110;
    int t111;
    int t112;
    int t113;
    int t119;
    int t120;
    int t121;
    int t122;
    int t128;
    int t129;
    int t130;
    int t139;
    int t152;
    int t158;
    int t164;
    int t169;
    float t242;
    int t244;
    float u246;
    float u247;
    float u249;
    float u252;
    int t255;
    float u280;
    float u295;
    float u297;
    float u311;
    int t314;
    int t312;
    int t317;
    int t320;
    int t324;
    float u344;
    int t38;
    int t127;
    int t148;
    int t149;
    int t156;
    int t157;
    int t171;
    int t403;
    int t404;
    int t410;
    int t411;

    t0 = *(int *)0x8C2FBEF0;
    if ((*(int *)((t0 + 0x20))) != 1) {
    } else {
        if (a4 == 0) {
        } else {
            if (a4 != 1) {
                if (a4 == 2) {
                } else {
                    if (a4 != 3) {
                        if (a4 == 5) {
                            *(unsigned int *)0x8C2FC0C8 = 0x0;
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) {
                                if ((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) > 0) {
                                    *(unsigned int *)0x8C28965C = ((*(int *)0x8C28965C) | 0x40000);
                                    *(unsigned int *)0x8C28983C = 0x8C02414C;
                                    *(unsigned int *)0x8C289664 = 0x0;
                                    *(Stk3 *)(0x8C2895E4) = vecMake(0.0f, 0.0f, -118.849998f);
                                }
                                miniBallObjSpawn();
                                ballInit((int)Ball);
                                *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
                            }
                            if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 1) && (t38 = *(int *)0x8C291F74, t38 == 1)) {
                                *(float *)0x8C291F4C = ((*(float *)0x8C291F4C) * 0.800000012f);
                            }
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 4) {
                                *(unsigned int *)0x8C28965C = ((*(int *)0x8C28965C) | 0x40000);
                                *(unsigned int *)0x8C28983C = 0x8C02414C;
                                *(unsigned int *)0x8C289664 = 0x0;
                                *(Stk3 *)(0x8C2895E4) = vecMake(0.0f, 0.0f, -50.0f);
                                miniBallObjSpawn();
                                ballInit((int)Ball);
                                *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
                            }
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 0) {
                                *(unsigned int *)0x8C28965C = ((*(int *)0x8C28965C) | 0x40000);
                                *(unsigned int *)0x8C28983C = 0x8C02414C;
                                *(unsigned int *)0x8C289664 = 0x0;
                                *(Stk3 *)(0x8C2895E4) = vecMake(0.0f, 0.0f, -79.2333298f);
                                miniBallObjSpawn();
                                ballInit((int)Ball);
                                *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
                            }
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 6) {
                                *(unsigned int *)0x8C28965C = ((*(int *)0x8C28965C) | 0x40000);
                                *(unsigned int *)0x8C28983C = 0x8C02414C;
                                *(unsigned int *)0x8C289664 = 0x0;
                                *(Stk3 *)(0x8C2895E4) = vecMake(0.0f, 0.0f, -118.849998f);
                                miniBallObjSpawn();
                                ballInit((int)Ball);
                                *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
                            }
                            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) != 7) {
                            } else {
                                miniBallObjSpawn();
                                miniLaunchBall();
                            }
                        } else {
                            if (a4 == 6) {
                                t110 = *(int *)((t0 + 0x0));
                                if (t110 == 2) {
                                    t111 = t110;
                                    t112 = 0x8C2FBF54;
                                    t113 = 0x0;
                                    for (;;) {
                                        if ((unsigned int)t112 >= (unsigned int)0x8C2FBF7C) {
                                            break;
                                        }
                                        t111 = (*(int *)((t112 + 0x0)));
                                        t112 = (t112 + 0x4);
                                        if (t111 == 1) {
                                            t113 = (t113 + 0x1);
                                        }
                                    }
                                    t119 = *(int *)0x8C287B2C;
                                    if ((int)t119 > 0) {
                                        if ((t113 == 10) || ((int)t119 < (int)0xF0)) {
                                            t120 = t113;
                                            t121 = 0x8C2FBF54;
                                            t122 = 0x0;
                                            for (;;) {
                                                if ((unsigned int)t121 >= (unsigned int)0x8C2FBF7C) {
                                                    break;
                                                }
                                                t120 = (*(int *)((t121 + 0x0)));
                                                t121 = (t121 + 0x4);
                                                if (t120 == 2) {
                                                    t122 = (t122 + 0x1);
                                                }
                                            }
                                            if ((t122 != 0) && (t127 = *(int *)0x8C287B2C, t127 != 60)) {
                                            } else {
                                                *(unsigned int *)0x8C287B2C = 0x3C;
                                                t128 = 0x60;
                                                t129 = 0x8C2FBF54;
                                                t130 = 0x0;
                                                for (;;) {
                                                    if ((unsigned int)t129 >= (unsigned int)0x8C2FBFD4) {
                                                        break;
                                                    }
                                                    t128 = (*(int *)((t129 + 0x0)));
                                                    t129 = (t129 + 0x4);
                                                    if (t128 == 1) {
                                                        t130 = (t130 + 0x1);
                                                    }
                                                }
                                                *(unsigned int *)((0x8C2FC134 + (((-(*(int *)(((*(int *)0x8C2FBEF0) + 0x10)))) + 0xB) << 2))) = t130;
                                                if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 0x200) != 0) {
                                                    t139 = *(int *)(((*(int *)0x8C2FBEF0) + 0x10));
                                                    *(unsigned int *)((0x8C2FC134 + (((-t139) + 0xB) << 2))) = ((*(int *)((0x8C2FC134 + (((-t139) + 0xB) << 2)))) - (*(int *)((((((-t139) + 0xA) << 2) + 0x8C2FC134) + 0x0))));
                                                }
                                                miniBowlingScore();
                                                t152 = 0x0;
                                                if ((t130 == 10) && (t148 = *(int *)0x8C2FBEF0, t149 = *(int *)((t148 + 0x8)), (t149 & 0x200) == 0)) {
                                                    t152 = 0x1;
                                                }
                                                miniMessageSpawn((t152 + t130));
                                                if ((((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 0x200) == 0) && ((t130 == 10) && (t156 = *(int *)0x8C2FBEF0, t157 = *(int *)((t156 + 0x10)), (int)t157 > (int)0x3))) {
                                                    t158 = *(int *)0x8C2FBEF0;
                                                    *(unsigned int *)((t158 + 0x10)) = ((*(int *)((t158 + 0x10))) - 1);
                                                    serveNextPoint();
                                                }
                                                t164 = *(int *)0x8C2FBEF0;
                                                if ((int)(*(int *)((t164 + 0x10))) > 0) {
                                                    *(unsigned int *)((t164 + 0x10)) = ((*(int *)((t164 + 0x10))) - 1);
                                                }
                                                t169 = *(int *)0x8C2FBEF0;
                                                if (((0x200 & (*(int *)((t169 + 0x8)))) != 0) && ((t171 = *(int *)((t169 + 0x10)), t171 == 1) && ((int)t130 < (int)0xA))) {
                                                    *(unsigned int *)((t169 + 0x10)) = 0x0;
                                                }
                                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((*(int *)((t0 + 0x0))) == 3) {
                            t242 = nlRandom();
                            t244 = *(int *)(((*(int *)0x8C2FBEF0) + 0x40));
                            u246 = ((nlRandom()) * 0.400000006f);
                            u246 = u246 + 0.100000001f * (float)(t244 + 0x3);
                            u247 = (float)(((int)(t242 * (1.0f + 1.0f)) << 1) - 1);
                            *(float *)((a5 + 0xB90)) = (u247 * u246);
                            u249 = -0.300000012f;
                            u249 = u249 + 1.20000005f * (nlRandom());
                            *(float *)((a5 + 0xB98)) = u249;
                            *(unsigned int *)0x8C291F74 = 0x0;
                            u252 = ((-((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x40))) * 0.100000001f)) + 1.20000005f);
                            *(float *)0x8C291F4C = (u252 * 0.699999988f);
                            if ((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) > 0) {
                                t255 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t255 + 0x10)) = ((*(int *)((t255 + 0x10))) - 1);
                            }
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 1) {
                            *(unsigned int *)0x8C291F74 = 0x0;
                            *(float *)0x8C291F4C = 1.0f;
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 4) {
                            u280 = -0.5f;
                            u280 = u280 + 1.0f * (nlRandom());
                            *(float *)((a5 + 0xB90)) = u280;
                            *(float *)((a5 + 0xB98)) = 0.5f;
                            *(unsigned int *)0x8C291F74 = 0x0;
                            *(float *)0x8C291F4C = 0.699999988f;
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 0) {
                            u295 = -0.5f;
                            u295 = u295 + 1.0f * (nlRandom());
                            *(float *)((a5 + 0xB90)) = u295;
                            u297 = -0.25f;
                            u297 = u297 + 0.5f * (nlRandom());
                            *(float *)((a5 + 0xB98)) = u297;
                            *(unsigned int *)0x8C291F74 = 0x1;
                            *(float *)0x8C291F4C = 1.68000007f;
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 5) {
                            u311 = *(float *)0x8C2895E4;
                            t314 = 0x1;
                            if (u311 > 0.0f) {
                            } else {
                                t312 = 0x0;
                                if (0.0f > u311) {
                                    t312 = 0xFFFFFFFF;
                                }
                                t314 = t312;
                            }
                            t317 = *(int *)(((*(int *)0x8C2FBEF0) + 0x24));
                            *(float *)((a5 + 0xB90)) = ((float)(-t314) * (*(float *)((((((t317 << 2) + t317) << 2) + 0x8C10B980) + 0xC))));
                            t320 = *(int *)(((*(int *)0x8C2FBEF0) + 0x24));
                            *(float *)((a5 + 0xB98)) = (-(*(float *)(((0x8C10B980 + (((t320 << 2) + t320) << 2)) + 0x10))));
                            if ((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) > 0) {
                                t324 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t324 + 0x10)) = ((*(int *)((t324 + 0x10))) - 1);
                            }
                            *(unsigned int *)0x8C2FBFD4 = (*(int *)(((*(int *)0x8C2FBEF0) + 0x10)));
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) != 6) {
                        } else {
                            u344 = -0.5f;
                            u344 = u344 + 1.0f * (nlRandom());
                            *(float *)((a5 + 0xB90)) = u344;
                            *(float *)((a5 + 0xB98)) = 0.5f;
                            *(unsigned int *)0x8C291F74 = 0x0;
                            *(float *)0x8C291F4C = 0.699999988f;
                        }
                    }
                }
            } else {
                if ((*(int *)((t0 + 0x0))) == 2) {
                    *(unsigned int *)0x8C287B2C = 0x12C;
                }
                if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) && (t403 = *(int *)0x8C2FBEF0, t404 = *(int *)((t403 + 0x10)), t404 == 0)) {
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                }
                if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 5) && (t410 = *(int *)0x8C2FBEF0, t411 = *(int *)((t410 + 0x10)), t411 == 0)) {
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                }
                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 7) {
                    miniLaunchBall();
                }
            }
        }
    }
}
