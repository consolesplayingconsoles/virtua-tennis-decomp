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
