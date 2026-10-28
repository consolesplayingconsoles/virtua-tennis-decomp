/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int abs(int);
int ballInit(int);
int circuitNumDraw(int, int, int, float, float, float);
int cpuBallPredict(int, int);
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, Stk3, Stk3, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuMeterInput(int, int, int, float, float);
int cpuPadHistory(int, int, int, int, int, int);
int cpuSglAimScoreAngle(int, int);
int cpuSglMoodUpdate(void);
int cpuSglThinkAll(void);
int fogSetDensity(int, float);
float mathLineY(float, float, float, float, float);
int miniBowlingScore(void);
int miniEffectSpawn(Stk4);
int mtxGetPos(int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
int nlLineSetDiv(float);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primLineV(int, int, int, int, int, int, int, int, int, int);
int primRectInc(int, int, int, int, int, int, int, int);
int screenProject(int, int, Stk3);
int shotAim(int, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int vecAnglesTo(int, int, Stk3, Stk3);
float vecDistXZf(float, float, float, float);
Stk3 vecMake(float, float, float);
int miniBowlingDraw(void);
float cpuSglAimRateOpp2(int a4, int a5);
int flareSunDraw(void);
void cpuSglInput(int a4, int a5, int a6);
void miniLaunchBall(void);

int miniBowlingDraw(void)
{
    int t12;
    int t15;
    int t20;
    int t25;
    int t26;
    int t27;
    float u141;
    float u143;
    int t138;
    int t132;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t69;
    int t61;
    int t41;
    int t51;
    float u45;
    int t72;
    int t73;
    int t126;
    float u78;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t120;
    int t112;
    int t92;
    int t102;
    float u96;
    int stk[22];

    miniBowlingScore();
    *(Stk3 *)(((int)stk + 20)) = vecMake(592.0f, 48.0f, 1.20000005f);
    primRectInc(0x110, 0x18, 0xFFFFFFFF, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
    *(Stk3 *)(((int)stk + 20)) = vecMake(592.0f, 32.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 32.0f, 1.0f);
    primLineH(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(592.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 72.0f, 1.0f);
    primLineH(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(320.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(592.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(592.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(592.0f, 48.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 48.0f, 1.0f);
    primLineH(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(352.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(352.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(384.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(384.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(416.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(416.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(448.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(448.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(496.0f, 72.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(496.0f, 32.0f, 1.0f);
    primLineV(0x1, 0xFF000000, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    t12 = 0x140;
    for (;;) {
        sprSheetSet(0x8C10C7E0);
        sprSheetPut(0x0, (float)t12, 32.0f, 1.20000005f, 1.0f);
        t12 = (t12 + 0x8);
        if ((int)t12 >= (int)0x250) {
            break;
        }
    }
    t15 = 0x0;
    for (;;) {
        if (((t15 & 0x1) == 0) && (t15 != 10)) {
        } else {
            sprSheetSet(0x8C10C804);
            sprSheetPut(0x0, (float)(((t15 << 2) << 2) + 0x140), 48.0f, 1.0f, 1.0f);
        }
        t15 = (t15 + 0x1);
        if ((int)t15 >= (int)0xB) {
            break;
        }
    }
    t20 = 0x0;
    for (;;) {
        circuitNumDraw(t20, 0x0, 0x8C159E34, (float)((((((((t20 == 4)) ? 1 : 0) << 1) + (((t20 == 4)) ? 1 : 0)) << 2) + (((t20 << 2) << 2) << 1)) + 0x154), 34.0f, 1.0f);
        t20 = (t20 + 0x1);
        if ((int)t20 >= (int)0x5) {
            break;
        }
    }
    sprSheetSet(0x8C10CAF8);
    sprSheetPut(0x0, 504.0f, 34.0f, 1.0f, 1.0f);
    *(unsigned int *)(((int)stk + 32)) = 0x8C2FC154;
    *(unsigned int *)(((int)stk + 36)) = 0x8C2FC158;
    t25 = 0x8C2FC158;
    t26 = 0x0;
    t27 = 0x0;
    for (;;) {
        if ((int)((-(*(int *)(((*(int *)0x8C2FBEF0) + 0x10)))) + 0xB) <= (int)t27) {
            t138 = t25;
        } else {
            t25 = t27;
            t25 = (t25 & 0x1);
            if ((t25 != 0) && (t27 != 9)) {
                if (((t25 == 0) && (t27 != 10)) || ((t30 = *(int *)((0x8C2FC134 + ((t27 - 1) << 2))), t30 == 10) || ((t31 = *(int *)((0x8C2FC134 + ((t27 - 1) << 2))), t32 = *(int *)(((t27 << 2) + 0x8C2FC134)), (t32 + t31) != 10) || ((t27 == 10) && (t33 = *(int *)(((int)stk + 36)), t34 = *(int *)(((int)stk + 32)), t35 = *(int *)((t33 + 0x0)), t36 = *(int *)((t34 + 0x0)), (t36 + t35) == 10))))) {
                    t26 = 0x8C2FC134;
                    if ((*(int *)((t26 + (t27 << 2)))) == 0) {
                        if ((t25 != 0) && (t41 = *(int *)((t26 + ((t27 - 1) << 2))), t41 == 10)) {
                            t51 = t25;
                        } else {
                            if ((t25 == 0) && (t27 != 10)) {
                                t25 = 0x8C10C9B4;
                                sprSheetSet(t25);
                                t25 = 0x7;
                                u45 = 51.0f;
                            } else {
                                t25 = 0x8C10C990;
                                sprSheetSet(t25);
                                t25 = 0x7;
                                u45 = 61.0f;
                            }
                            sprSheetPut(t25, (float)(((t27 << 2) << 2) + 0x14F), u45, 1.0f, 1.0f);
                        }
                        t61 = t51;
                    } else {
                        t25 = (*(int *)((t26 + (t27 << 2))));
                        t25 = (t25 << 2);
                        t25 = (*(int *)((t25 + 0x8C159E0C)));
                        sprSheetSet(t25);
                        t25 = 0x7;
                        sprSheetPut(t25, ((float)(((t27 << 2) << 2) + 0x14F) + (-1.0f)), 51.0f, 1.0f, 1.0f);
                    }
                    t69 = t61;
                } else {
                    t25 = 0x8C10C9D8;
                    sprSheetSet(t25);
                    t25 = 0x7;
                    sprSheetPut(t25, (float)(((t27 << 2) << 2) + 0x14F), 49.0f, 1.0f, 1.0f);
                }
                t132 = t69;
            } else {
                if (((*(int *)((0x8C2FC134 + (t27 << 2)))) == 10) && ((t27 != 9) || (t72 = *(int *)(((int)stk + 32)), t73 = *(int *)((t72 + 0x0)), t73 != 0))) {
                    if ((int)t27 < (int)0x8) {
                        t25 = 0x8C10CA20;
                        sprSheetSet(t25);
                        t25 = 0x7;
                        u78 = ((float)(((t27 << 2) << 2) + 0x14F) + 16.0f);
                    } else {
                        t25 = 0x8C10C9FC;
                        sprSheetSet(t25);
                        t25 = 0x7;
                        u78 = ((float)(((t27 << 2) << 2) + 0x14F) + 1.0f);
                    }
                    sprSheetPut(t25, u78, 49.0f, 1.0f, 1.0f);
                } else {
                    if (((t25 == 0) && (t27 != 10)) || ((t81 = *(int *)((0x8C2FC134 + ((t27 - 1) << 2))), t81 == 10) || ((t82 = *(int *)((0x8C2FC134 + ((t27 - 1) << 2))), t83 = *(int *)(((t27 << 2) + 0x8C2FC134)), (t83 + t82) != 10) || ((t27 == 10) && (t84 = *(int *)(((int)stk + 36)), t85 = *(int *)(((int)stk + 32)), t86 = *(int *)((t84 + 0x0)), t87 = *(int *)((t85 + 0x0)), (t87 + t86) == 10))))) {
                        t26 = 0x8C2FC134;
                        if ((*(int *)((t26 + (t27 << 2)))) == 0) {
                            if ((t25 != 0) && (t92 = *(int *)((t26 + ((t27 - 1) << 2))), t92 == 10)) {
                                t102 = t25;
                            } else {
                                if ((t25 == 0) && (t27 != 10)) {
                                    t25 = 0x8C10C9B4;
                                    sprSheetSet(t25);
                                    t25 = 0x7;
                                    u96 = 51.0f;
                                } else {
                                    t25 = 0x8C10C990;
                                    sprSheetSet(t25);
                                    t25 = 0x7;
                                    u96 = 61.0f;
                                }
                                sprSheetPut(t25, (float)(((t27 << 2) << 2) + 0x14F), u96, 1.0f, 1.0f);
                            }
                            t112 = t102;
                        } else {
                            t25 = (*(int *)((t26 + (t27 << 2))));
                            t25 = (t25 << 2);
                            t25 = (*(int *)((t25 + 0x8C159E0C)));
                            sprSheetSet(t25);
                            t25 = 0x7;
                            sprSheetPut(t25, ((float)(((t27 << 2) << 2) + 0x14F) + (-1.0f)), 51.0f, 1.0f, 1.0f);
                        }
                        t120 = t112;
                    } else {
                        t25 = 0x8C10C9D8;
                        sprSheetSet(t25);
                        t25 = 0x7;
                        sprSheetPut(t25, (float)(((t27 << 2) << 2) + 0x14F), 49.0f, 1.0f, 1.0f);
                    }
                    t126 = t120;
                }
                t132 = t126;
            }
            t138 = t132;
        }
        t27 = (t27 + 0x1);
        t25 = t138;
        if ((int)t27 < (int)0xB) continue;
        break;
    }
    u141 = *(float *)0x8C03A098;
    u143 = *(float *)0x8C03A09C;
    circuitNumDraw((*(int *)(((*(int *)0x8C2FBEF0) + 0xC))), 0x0, 0x8C159E0C, u141, u143, 1.0f);
    nlObjPutSetFadeColor((*(float *)0x8C03A0A4), 0.0f, 0.0f);
    sprSheetSet(0x8C10CB1C);
    sprSheetPut(0x2000, u141, u143, 1.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return (circuitNumDraw(((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x14))) / (int)0x14)), 0x0, 0x8C159E0C, (*(float *)0x8C03A0B4), u143, 1.0f));
}

float cpuSglAimRateOpp2(int a4, int a5)
{
    int t0;
    int t1;
    float u7;
    float u8;
    float u9;
    float u17;
    int t13;
    int t11;
    float u23;
    float u24;
    float u27;
    int t31;
    int t29;
    float u33;
    int t36;
    int t34;
    float u39;
    int t55;
    float u184;
    int t56;
    int t57;
    float t63;
    float u64;
    float t68;
    float t69;
    float t70;
    float u72;
    float u73;
    int t76;
    int t74;
    float u78;
    int t81;
    int t79;
    float u91;
    float u84;
    float u85;
    float u94;
    float u95;
    float t97;
    float t98;
    float t99;
    float u101;
    float u102;
    int t105;
    int t103;
    float u107;
    int t110;
    int t108;
    float u120;
    float u113;
    float u114;
    float t123;
    float t124;
    float t125;
    int t126;
    float u129;
    float u130;
    int t133;
    int t131;
    float u135;
    int t138;
    int t136;
    float u148;
    float u141;
    float u142;
    float u52;
    float u46;
    float u169;
    float u173;
    float u156;
    float u160;
    int stk[38];

    *(unsigned int *)(((int)stk + 64)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    cpuSglAimScoreAngle(a4, (*(int *)(((int)stk + 64))));
    u7 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u7 = u7 + 0.800000012f * ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u8 = *(float *)0x8C287B40;
    u9 = (-u7);
    if (!(0.0f > u7)) {
        u9 = u7;
    }
    u17 = u7;
    if (u9 > u8) {
        t13 = 0x1;
        if (u7 > 0.0f) {
        } else {
            t11 = 0x0;
            if (0.0f > u7) {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        u17 = ((float)t13 * u8);
    }
    u23 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u23 = u23 + 0.800000012f * ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u24 = (-u23);
    if (!(0.0f > u23)) {
        u24 = u23;
    }
    if (u24 > 118.849998f) {
        u52 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u27 = (-u23);
        if (!(0.0f > u23)) {
            u27 = u23;
        }
        if (!(23.7700005f > u27)) {
            t31 = 0x1;
            if (u23 > 0.0f) {
            } else {
                t29 = 0x0;
                if (0.0f > u23) {
                    t29 = 0xFFFFFFFF;
                }
                t31 = t29;
            }
            u33 = *(float *)((a4 + 0xB00));
            t36 = 0x1;
            if (u33 > 0.0f) {
            } else {
                t34 = 0x0;
                if (0.0f > u33) {
                    t34 = 0xFFFFFFFF;
                }
                t36 = t34;
            }
            u39 = u23;
            if (t31 != t36) {
                u39 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
            }
            u46 = u39;
        } else {
            u46 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
        }
        u52 = u46;
    }
    *(float *)(((int)stk + 80)) = u17;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 88)) = u52;
    t55 = *(int *)(((int)stk + 64));
    u184 = 0.800000012f;
    if ((int)(t55 - 1) >= 0) {
        t56 = (t55 - 1);
        t57 = 0x8C2FCC6C;
        for (;;) {
            *(float *)(((((int)stk + 64) + 0x1C) + 0x0)) = ((*(float *)((t57 + 0x0))) - (*(float *)((a4 + 0xB9C))));
            *(float *)(((((int)stk + 64) + 0x1C) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 64) + 0x1C) + 0x8)) = ((*(float *)((t57 + 0x8))) - (*(float *)((a4 + 0xBA4))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
            t63 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), (*(float *)(((int)stk + 88))));
            u64 = *(float *)(((int)stk + 80));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
            cpuLineCrossXZ((((int)stk + 4) + 0x40), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if ((unsigned char)(*(signed char *)((t57 + 0xC))) != 1) {
                t68 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                *(float *)(((int)stk + 60)) = t68;
                t69 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                *(float *)(((int)stk + 60)) = (t68 / t69);
                t70 = cpuDistXZ(t57, (0xB9C + a4));
                u72 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                u73 = (((t68 / t69) * t70) / (*(float *)0x8C287B40));
                t76 = 0x1;
                if (u72 > 0.0f) {
                } else {
                    t74 = 0x0;
                    if (0.0f > u72) {
                        t74 = 0xFFFFFFFF;
                    }
                    t76 = t74;
                }
                u78 = *(float *)(((int)stk + 80));
                t81 = 0x1;
                if ((u78 - (u64 - t63)) > 0.0f) {
                } else {
                    t79 = 0x0;
                    if (0.0f > (u78 - (u64 - t63))) {
                        t79 = 0xFFFFFFFF;
                    }
                    t81 = t79;
                }
                u91 = (u73 * 10.0f);
                if (t76 == t81) {
                    u84 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u85 = (-u84);
                    if (!(0.0f > u84)) {
                        u85 = u84;
                    }
                    u91 = (((u73 * 10.0f)) * ((u85 * 4.0f)));
                }
                u169 = t70;
                u173 = u91;
            } else {
                u94 = *(float *)((t57 + 0x8));
                u95 = (-u94);
                if (!(0.0f > u94)) {
                    u95 = u94;
                }
                if (u95 > 64.0f) {
                    t97 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                    *(float *)(((int)stk + 60)) = t97;
                    t98 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                    *(float *)(((int)stk + 60)) = (t97 / t98);
                    t99 = cpuDistXZ(t57, (0xB9C + a4));
                    u101 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u102 = (((t97 / t98) * t99) / (*(float *)0x8C287B40));
                    t105 = 0x1;
                    if (u101 > 0.0f) {
                    } else {
                        t103 = 0x0;
                        if (0.0f > u101) {
                            t103 = 0xFFFFFFFF;
                        }
                        t105 = t103;
                    }
                    u107 = *(float *)(((int)stk + 80));
                    t110 = 0x1;
                    if ((u107 - (u64 - t63)) > 0.0f) {
                    } else {
                        t108 = 0x0;
                        if (0.0f > (u107 - (u64 - t63))) {
                            t108 = 0xFFFFFFFF;
                        }
                        t110 = t108;
                    }
                    u120 = (u102 * 10.0f);
                    if (t105 != t110) {
                    } else {
                        u113 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        u114 = (-u113);
                        if (!(0.0f > u113)) {
                            u114 = u113;
                        }
                        u120 = (((u102 * 10.0f)) * ((u114 * 4.0f)));
                    }
                    u156 = t99;
                    u160 = u120;
                } else {
                    t123 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                    *(float *)(((int)stk + 60)) = t123;
                    t124 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                    *(float *)(((int)stk + 60)) = (t123 / t124);
                    t125 = cpuDistXZ(t57, (0xB9C + a4));
                    t126 = *(int *)0x8C1891E8;
                    u129 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u130 = ((((t123 / t124) * t125) / 118.849998f) / ((*(float *)(((((t126 << 2) << 1) + 0x8C10D41C) + 0x0))) * (*(float *)(((((t126 << 2) << 1) + 0x8C10D41C) + 0x4)))));
                    t133 = 0x1;
                    if (u129 > 0.0f) {
                    } else {
                        t131 = 0x0;
                        if (0.0f > u129) {
                            t131 = 0xFFFFFFFF;
                        }
                        t133 = t131;
                    }
                    u135 = *(float *)(((int)stk + 80));
                    t138 = 0x1;
                    if ((u135 - (u64 - t63)) > 0.0f) {
                    } else {
                        t136 = 0x0;
                        if (0.0f > (u135 - (u64 - t63))) {
                            t136 = 0xFFFFFFFF;
                        }
                        t138 = t136;
                    }
                    u148 = (u130 * 20.0f);
                    if (t133 == t138) {
                        u141 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        u142 = (-u141);
                        if (!(0.0f > u141)) {
                            u142 = u141;
                        }
                        u148 = (((u130 * 20.0f)) * ((u142 * 4.0f)));
                    }
                    u156 = t125;
                    u160 = u148;
                }
                u169 = u156;
                u173 = u160;
            }
            t56 = (t56 - 1);
            *(float *)((t57 + 0x1C)) = u173;
            t57 = (t57 + 0x20);
            if ((int)t56 >= 0) continue;
            break;
        }
        u184 = u169;
    }
    return u184;
}

int flareSunDraw(void)
{
    float t0;
    int t103;
    int t3;
    int t85;
    float t4;
    float u29;
    float t36;
    float u37;
    float u38;
    float u39;
    int t41;
    int t42;
    int t43;
    int t44;
    float u45;
    float u46;
    float u47;
    float u48;
    int t77;
    int t54;
    float u59;
    float u61;
    int t68;
    int t40;
    int t79;
    float u80;
    float u81;
    float u83;
    int stk[44];

    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x4C);
    *(Stk3 *)((((int)stk + 28) + 0x4C)) = vecMake(0.0f, 0.0f, (-1.0f));
    t0 = nlInnerProduct(0x8C287A1C, (((int)stk + 28) + 0x4C));
    t103 = 0x8C08CA04;
    if (!(0.5f > t0)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C287A1C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
        vecAnglesTo((((int)stk + 4) + 0x28), (((int)stk + 4) + 0x20), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        t3 = abs((unsigned short)(*(short *)(((int)stk + 36))));
        t85 = t3;
        if ((int)t3 < (int)0x4000) {
        } else {
            t4 = mathLineY(0.699999988f, 0.0f, 1.0f, 0.200000003f, t0);
            *(float *)(((int)stk + 40)) = t4;
            nlPushUnitMatrix();
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0x8C10DDD4); }
            nlRotateAY((unsigned short)(*(short *)(((int)stk + 36))));
            nlRotateAX((unsigned short)(*(short *)(((int)stk + 44))));
            nlTranslate(0.0f, 0.0f, 480.0f);
            nlScale(34.0f, 34.0f, 34.0f);
            nlLineSetDiv(150.0f);
            if ((*(int *)0x8C1891E8) == 0) {
                nlObjPut(0xC58F520);
            }
            if ((*(int *)0x8C1891E8) == 2) {
                nlRotateAY(0x8000);
                nlObjPut(0xC96F2E0);
            }
            mtxGetPos((((int)stk + 28) + 0x1C), ((((int)stk + 28) + 0x1C) + 0x4), ((((int)stk + 28) + 0x1C) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            screenProject((((int)stk + 16) + 0xC), (((int)stk + 16) + 0x10), *(Stk3 *)(((int)stk + 16)));
            nlPopMatrix(0x1);
            u29 = *(float *)0x8C08CB98;
            fogSetDensity(0x8C301C34, ((*(float *)0x8C08CBA4) - ((t0 * (*(float *)0x8C08CB9C)) / (*(float *)0x8C08CBA0))));
            t36 = vecDistXZf(0.0f, 0.0f, (float)(*(int *)(((int)stk + 28))), (float)(*(int *)(((int)stk + 32))));
            *(float *)(((int)stk + 52)) = (t36 * 1.0f);
            u37 = *(float *)0x8C08CBB8;
            u38 = *(float *)0x8C08CB98;
            u39 = *(float *)(((int)stk + 40));
            *(float *)(((int)stk + 48)) = (u39 * u38);
            t41 = 0x8C18263C;
            t42 = 0x8C18263C;
            t43 = 0x8C18263C;
            t44 = 0x0;
            u45 = (u39 * u38);
            u46 = u38;
            u47 = (t36 * 1.0f);
            u48 = 0.0f;
            for (;;) {
                t77 = 0x18;
                if (u37 > (*(float *)(((int)stk + 52)))) {
                    nlPushUnitMatrix();
                    t40 = (*(int *)(((int)stk + 32)));
                    u48 = (*(float *)((t44 + 0x8C10DD84)));
                    t54 = t40;
                    t40 = (*(int *)(((int)stk + 28)));
                    u46 = u48;
                    u45 = (*(float *)0x8C302070);
                    u46 = (u46 * (float)t54);
                    u46 = (u46 / (*(float *)0x8C302070));
                    u47 = (((float)t40 * u48) / u45);
                    nlTranslate(u47, u46, (-1.0f));
                    u46 = 0.0f;
                    u48 = (*(float *)((t44 + 0x8C10DDAC)));
                    u59 = (-u48);
                    if (!(u46 > u48)) {
                        u59 = u48;
                    }
                    u45 = 0.0f;
                    u61 = (t4 * u29);
                    if (!(u45 > u48)) {
                        u46 = u48;
                    } else {
                        u46 = u48;
                        u46 = (-u46);
                    }
                    u46 = (u46 * ((t4 * u29)));
                    if (!(0.0f > u48)) {
                        u45 = u48;
                    } else {
                        u45 = u48;
                        u45 = (-u45);
                    }
                    u45 = (u45 * ((t4 * u29)));
                    t40 = 0x8C0F0390;
                    u47 = u45;
                    nlScale(u47, u46, (u59 * u61));
                    t40 = 0x8C0F7BAC;
                    t68 = (int)((int)(nlRand()) % (int)0x5);
                    if (t68 != 0) {
                        u47 = (*(float *)(((int)stk + 40)));
                        t41 = (*(int *)((t42 + 0x0)));
                    } else {
                        t41 = (*(int *)((t43 + 0x0)));
                        u47 = (*(float *)(((int)stk + 48)));
                    }
                    nlObjPutTrnsl(t41, u47);
                    t41 = 0x1;
                    t77 = (nlPopMatrix(t41));
                } else {
                    t79 = t41;
                    u80 = u45;
                    u81 = u46;
                    u83 = u47;
                }
                u45 = u80;
                u46 = u81;
                u47 = u83;
                t40 = 0x28;
                t41 = t79;
                t44 = (t44 + 0x4);
                t43 = (t43 + 0x4);
                t42 = (t42 + 0x4);
                if ((unsigned int)t44 >= (unsigned int)t40) {
                    break;
                }
            }
            t85 = t77;
        }
        t103 = t85;
    }
    return t103;
}

void cpuSglInput(int a4, int a5, int a6)
{
    int t2;
    int t85;
    int t86;
    int t9;
    int t10;
    int t11;
    int t23;
    int t24;
    int t25;
    float u39;
    int t58;
    int t59;
    int t69;
    int t70;
    int t91;
    float u92;
    int t95;
    int t93;
    float u97;
    int t100;
    int t98;
    int t134;
    float u138;
    float u139;
    int t103;
    int t124;
    float u128;
    float u129;
    float u104;
    float u105;
    float u109;
    float u110;
    float u111;
    float u112;
    int t115;
    int t113;
    int t146;
    int t32;
    int t33;
    int t34;
    int t35;
    int t17;
    int t18;
    int t19;
    int t20;
    int t7;
    int t21;
    int t40;
    int t41;
    int t43;
    int t76;
    int t77;
    int t64;
    int t65;
    int t55;
    int t66;
    int t90;
    int t152;
    int t154;
    int t155;
    float u159;
    float u160;
    int stk[16];

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        *(unsigned short *)((a4 + 0xD46)) = 0x0;
        *(unsigned short *)((a4 + 0xD44)) = 0x0;
        t2 = *(int *)0x8C20D19C;
        t85 = 0x8C159F98;
        t86 = a6;
        if ((*(int *)0x8C159F98) != t2) {
            *(unsigned int *)0x8C159F98 = t2;
            cpuBallPredict(t2, 0x8C159F98);
            if (((*(int *)0x8C291F78) & 4) != 0) {
                if ((*(float *)0x8C291F64) == 0.0f) {
                    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0xC);
                    t9 = 0x8C288AFC;
                    t10 = 0x8C2FC7FC;
                    t11 = ((((int)stk + 4) + 0x4) + 0x18);
                    for (;;) {
                        if ((unsigned int)t11 < (unsigned int)(*(int *)(((int)stk + 4)))) {
                            break;
                        }
                        t11 = (t11 - 12);
                        t7 = t11;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)((0xB9C + t9)); }
                        t7 = 0xB9C;
                        t7 = (t7 + t9);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)((0x11C + t10)); }
                        t9 = (t9 - 3448);
                        t10 = (t10 - 352);
                    }
                    t17 = t9;
                    t18 = t10;
                    t19 = t11;
                    t20 = 0xFFFFFEA0;
                }
                t32 = t17;
                t33 = t18;
                t34 = t19;
                t35 = t20;
            } else {
                *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x4) + 0xC);
                t23 = 0x8C288AFC;
                t24 = 0x8C2FC7FC;
                t25 = ((((int)stk + 4) + 0x4) + 0x18);
                for (;;) {
                    if ((unsigned int)t25 < (unsigned int)(*(int *)(((int)stk + 4)))) {
                        break;
                    }
                    t25 = (t25 - 12);
                    t21 = t25;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t21) = *(struct mv3 *)((0xB9C + t23)); }
                    t21 = 0xB9C;
                    t21 = (t21 + t23);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t21) = *(struct mv3 *)((0x11C + t24)); }
                    t23 = (t23 - 3448);
                    t24 = (t24 - 352);
                }
                t32 = t23;
                t33 = t24;
                t34 = t25;
                t35 = 0xFFFFFEA0;
            }
            cpuPadHistory(t32, t33, t34, t35, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            u39 = *(float *)0x8C291F54;
            if ((u39 == 0.0f) && ((t40 = *(int *)0x8C291F78, (t40 & 4) == 0) && (t41 = *(int *)0x8C291F78, (t41 & 2) == 0))) {
                cpuSglMoodUpdate();
            } else {
                if ((u39 == (1.0f + 1.0f)) && (t43 = *(int *)0x8C291F78, (t43 & 4) != 0)) {
                    cpuSglMoodUpdate();
                }
            }
            cpuSglThinkAll();
            if (((*(int *)0x8C291F78) & 4) != 0) {
                if ((*(float *)0x8C291F64) == 0.0f) {
                    t58 = 0x8C288AFC;
                    t59 = ((((int)stk + 4) + 0x4) + 0xC);
                    for (;;) {
                        if ((unsigned int)t58 < (unsigned int)0x8C287D84) {
                            break;
                        }
                        t55 = 0xB9C;
                        t55 = (t55 + t58);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t55) = *(struct mv3 *)((t59)); }
                        t58 = (t58 - 3448);
                        t59 = (t59 - 12);
                    }
                    t64 = t59;
                    t65 = 0x8C287D84;
                }
                t76 = t64;
                t77 = t65;
            } else {
                t69 = 0x8C288AFC;
                t70 = ((((int)stk + 4) + 0x4) + 0xC);
                for (;;) {
                    if ((unsigned int)t69 < (unsigned int)0x8C287D84) {
                        break;
                    }
                    t66 = 0xB9C;
                    t66 = (t66 + t69);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t66) = *(struct mv3 *)((t70)); }
                    t69 = (t69 - 3448);
                    t70 = (t70 - 12);
                }
                t76 = t70;
                t77 = 0x8C287D84;
            }
            t85 = t76;
            t86 = t77;
        }
        if ((0.0f > (*(float *)0x8C291F54)) && (t90 = *(int *)0x8C287B2C, (int)t90 < 0)) {
            t91 = *(int *)((a4 + 0xB5C));
            *(unsigned short *)((a4 + 0xD46)) = 0x0;
            *(unsigned short *)((a4 + 0xD44)) = 0x0;
            u92 = *(float *)0x8C291F50;
            t95 = 0x1;
            if (u92 > 0.0f) {
            } else {
                t93 = 0x0;
                if (0.0f > u92) {
                    t93 = 0xFFFFFFFF;
                }
                t95 = t93;
            }
            u97 = *(float *)((a4 + 0xB00));
            t100 = 0x1;
            if ((-u97) > 0.0f) {
            } else {
                t98 = 0x0;
                if (0.0f > (-u97)) {
                    t98 = 0xFFFFFFFF;
                }
                t100 = t98;
            }
            t134 = t85;
            u138 = u92;
            u139 = (-u97);
            if (t95 == t100) {
                t103 = *(short *)((((t91 * 0x160) + 0x8C2FC69C) + 0x20));
                t124 = (0xC0 & t103);
                u128 = u92;
                u129 = (-u97);
                if ((0xC0 & t103) != 0) {
                    u104 = *(float *)0x8C291F50;
                    u105 = *(float *)0x8C291F48;
                    u109 = *(float *)0x8C04290C;
                    u110 = *(float *)((a4 + 0xB00));
                    u111 = ((*(float *)0x8C291F3C) - ((u105 / u104) * (*(float *)0x8C291F44)));
                    u111 = u111 + (*(float *)((a4 + 0xAF0))) * (u105 / u104);
                    u112 = *(float *)((a4 + 0xAE8));
                    t115 = 0x1;
                    if ((u111 - u112) > 0.0f) {
                    } else {
                        t113 = 0x0;
                        if (0.0f > (u111 - u112)) {
                            t113 = 0xFFFFFFFF;
                        }
                        t115 = t113;
                    }
                    if (((float)((0xC0 & t103) - 96) / (-(u110 * u109))) == (float)t115) {
                        *(unsigned short *)((a4 + 0xD46)) = (*(short *)((((t91 * 0x160) + 0x8C2FC69C) + 0x22)));
                    }
                    t124 = ((0xC0 & t103) - 96);
                    u128 = (u111 - u112);
                    u129 = u111;
                }
                t134 = t124;
                u138 = u128;
                u139 = u129;
            }
            if ((*(signed char *)((((t91 * 0x160) + 0x8C2FC69C) + 0xB7))) != 0) {
                *(unsigned short *)((((t91 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((a4 + 0xD46)) = 0x0;
            }
            t152 = (*(short *)((a4 + 0xD46)));
            t154 = ((t91 * 0x160) + 0x8C2FC69C);
            t155 = t134;
            u159 = u138;
            u160 = u139;
        } else {
            t146 = *(int *)((a4 + 0xB5C));
            *(unsigned short *)(((0xD44 + a4) + 0x0)) = (*(short *)((((t146 * 0x160) + 0x8C2FC69C) + 0x1E)));
            *(unsigned short *)((a4 + 0xD46)) = (*(short *)((((t146 * 0x160) + 0x8C2FC69C) + 0x20)));
            t152 = (*(short *)((((t146 * 0x160) + 0x8C2FC69C) + 0x20)));
            t154 = ((t146 * 0x160) + 0x8C2FC69C);
            t155 = t85;
        }
        *(unsigned short *)((t154 + 0x22)) = t152;
        cpuMeterInput(a4, t155, t86, u159, u160);
    }
}

void miniLaunchBall(void)
{
    int t0;
    float t2;
    float u11;
    float u12;
    float u15;
    float u19;
    int t1;
    int t6;
    int stk[22];

    t0 = 0x0;
    for (;;) {
        t2 = nlRandom();
        t0 = (t0 + 0x1);
        if ((int)t0 > (int)0x64) {
            break;
        }
        t1 = (int)(t2 * 5.0f);
        t1 = (t1 << 2);
        if (((*(int *)((0x8C2FBF54 + t1))) == 0) && (t6 = *(int *)((0x8C2FC0A0 + t1)), (int)t6 <= (int)0x14)) {
            ballInit(0x8C291F24);
            *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFF7);
            *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFD);
            *(unsigned int *)0x8C2888E4 = (0xFFFFFFF7 & (*(int *)0x8C2888E4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0xC)) = *(struct mv3 *)((((((int)(t2 * 5.0f) << 1) + (int)(t2 * 5.0f)) << 2) + 0x8C2FC058)); }
            t0 = 0x8C015EEA;
            u11 = *(float *)(((int)stk + 40));
            u12 = *(float *)(((int)stk + 32));
            *(int *)((int)stk + 16) = 0x8C291F30;
            *(Stk3 *)(0x8C291F30) = vecMake(u12, 8.0f, (u11 + 5.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F3C) = *(struct mv3 *)(0x8C291F30); }
            u15 = ((-((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x40))) * 0.100000001f)) + 1.10000002f);
            *(int *)((int)stk + 12) = 0x8C291F58;
            *(Stk3 *)(0x8C291F58) = vecMake(0.0f, ((u15 * 70.0f) / 100.0f), 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C291F48) = *(struct mv3 *)(0x8C291F58); }
            *(float *)0x8C291F94 = 0.0235200021f;
            *(float *)0x8C291F54 = 0.0f;
            *(unsigned int *)0x8C289758 = 0x0;
            nlPushUnitMatrix();
            nlRotateAY((unsigned short)(*(short *)((((int)(t2 * 5.0f) << 1) + 0x8C2FC094))));
            u19 = *(float *)(((int)stk + 40));
            *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
            *(Stk3 *)((((int)stk + 12) + 0x8)) = vecMake(0.0f, 0.0f, ((-u19) + 118.849998f));
            nlCalcPoint(((int)stk + 20), ((int)stk + 20));
            nlAddVector(((int)stk + 20), (((int)stk + 20) + 0xC));
            *(float *)0x8C28968C = ((*(float *)(((int)stk + 20))) / (*(float *)0x8C03A9A4));
            *(float *)0x8C289694 = (((*(float *)(((int)stk + 28))) + (*(float *)0x8C03A9A8)) / (*(float *)0x8C03A9AC));
            nlPopMatrix(0x1);
            shotAim(0x8C288AFC, (*(float *)0x8C291F94));
            *(unsigned int *)0x8C287AF8 = 0x1;
            nlsndSeqRequest(0x1202A9);
            *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 32))), 8.0f, ((*(float *)(((int)stk + 40))) + 5.0f));
            miniEffectSpawn(*(Stk4 *)((int)stk + 8));
            *(unsigned int *)((t1 + 0x8C2FC0A0)) = 0x1E;
            return;
        }
    }
}
