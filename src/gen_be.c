/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int BupRequestSave(int, int, int, int);
int FUN_8c0f0860(int);
int arcadePickRival(int);
int cameraCalcPoint(int, int, int, int, int);
int cameraCalcPointInv(int, int, int, int, int, float, float);
float cameraFovForSize(float);
int circuitApplyResult(void);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
extern int crowdDrawBlock();
int entryRecordCharas(void);
int entrySetResult(int);
int fadeStart(int);
int gameMatchSetup(void);
int hudBarDrawAlt(Stk3, float, float);
int hudCallTieBreakDraw(int, int, float, float);
int matchSetupPlayers(void);
int memmove(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInitEvent(void);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlTanf(float);
int nlTranslate(float, float, float);
int scoreReset(void);
int sndFadeFlagsClear(void);
extern int sprPutAtAlpha();
int sprPutCropV(int, int, Stk3, float, float, float);
int stageSoftReset(void);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int unlockTestW1(int);
int vecAnglesTo(int, int, Stk3);
float cpuAimAngleRate(int a4, int a5, int a6, int a7, int a8);
int hudCallPointsDraw(int a4, int a5, float f4, float f5);
int crowdDrawUsa(int a4);
int cpuSglAimAddGrid(int a4, int a5);
float cameraFovFit(float f4, float f5);
int btnGuideDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int arcadeNextMatch(void);
void scoreAddPoint(int a4, int a5, float f4, float f5, float f6);
int cpuDblPositionCalc(int a4, int a5);




int cpuSglAimAddGrid(int a4, int a5)
{
    int t0;
    int t1;
    int t7;
    int t9;
    int t11;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t20;
    int t22;
    float u30;
    float u31;
    float u47;
    float u48;
    float u51;
    float u52;
    float u60;
    int t63;
    int t61;
    int t80;
    float u66;
    int t72;
    int t26;
    int t120;
    int t112;
    int t97;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t7 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t9 = (int)((unsigned int)((int)((unsigned int)t7 + (unsigned int)0x0)) + ((((int)0x0 > (int)t7)) ? 1u : 0u));
        t11 = ((~(((~((t9 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t9 >> 1) + 0x2) >= 0) {
            t11 = (((t9 >> 1) + 0x2) & 0x1);
        }
        t26 = ((((-t11) + 0x1) << 1) - 1);
    } else {
        t13 = *(int *)0x8C287B10;
        t14 = *(int *)0x8C287B14;
        t15 = ((~(((~((t13 + t14) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t13 + t14) + 0x2) >= 0) {
            t15 = (((t13 + t14) + 0x2) & 0x1);
        }
        t17 = *(int *)0x8C287B00;
        t18 = *(int *)0x8C287B04;
        t20 = (int)((unsigned int)((int)((unsigned int)(t17 + t18) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t17 + t18))) ? 1u : 0u));
        t22 = ((~(((~((t20 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t20 >> 1) + 0x2) >= 0) {
            t22 = (((t20 >> 1) + 0x2) & 0x1);
        }
        t26 = (((-(t15 << 1)) + 0x1) * ((-(t22 << 1)) + 0x1));
    }
    u30 = *(float *)((a4 + 0xB9C));
    u31 = (-u30);
    if (!(0.0f > u30)) {
        u31 = u30;
    }
    if (16.460001f > u31) {
        cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 65.3675003f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t120 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u47 = *(float *)((a4 + 0xB9C));
        u48 = (-u47);
        if (!(0.0f > u47)) {
            u48 = u47;
        }
        if (u48 > 37.0349998f) {
            u51 = *(float *)0x8C291F84;
            u52 = (-u51);
            if (!(0.0f > u51)) {
                u52 = u51;
            }
            if (32.0f > u52) {
                cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 47.5400009f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u60 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                t63 = 0x1;
                if (u60 > 0.0f) {
                } else {
                    t61 = 0x0;
                    if (0.0f > u60) {
                        t61 = 0xFFFFFFFF;
                    }
                    t63 = t61;
                }
                t80 = (((a5 + 0x1) + 0x1) + 0x1);
                if ((float)t63 == (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00)))) {
                    u66 = (-u60);
                    if (!(0.0f > u60)) {
                        u66 = u60;
                    }
                    t72 = (((a5 + 0x1) + 0x1) + 0x1);
                    if (!(u66 > (*(float *)0x8C04BBA8))) {
                    } else {
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t72 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t80 = t72;
                }
                t97 = t80;
            } else {
                cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBAC)));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t97 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t112 = t97;
        } else {
            cpuAimPointSet(a5, 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C04BBB0)));
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t26 * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-t26) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t112 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t120 = t112;
    }
    return t120;
}



int arcadeNextMatch(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t32;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t52;
    int t72;
    int t87;
    int t116;
    int t104;
    int t111;
    int t110;
    int t9;
    int t10;
    int t11;
    int t57;
    int t74;

    t0 = *(int *)0x8C287AF0;
    t1 = *(int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0));
    if (t1 == 0) {
        t2 = t1;
        t3 = 0x8C287AD0;
        t4 = (((t0 & 0x1) << 2) + 0x8C287AD0);
        t5 = 0x0;
        for (;;) {
            if ((*(int *)0x8C287ADC) != 4) {
                t3 = 0x8C0E87C8;
                t7 = unlockTestW1(t5);
                if (t7 != 0) {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                } else {
                    *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x0;
                }
            } else {
                *(unsigned int *)((0x8C287C74 + (t5 << 2))) = 0x1;
                t9 = t2;
                t10 = t3;
                t11 = t4;
            }
            t2 = t9;
            t5 = (t5 + 0x1);
            t3 = t10;
            t4 = t11;
            if ((int)t5 >= (int)0x12) {
                break;
            }
        }
        *(unsigned int *)0x8C287CB8 = 0x0;
        *(unsigned int *)0x8C287CB4 = 0x0;
        if ((*(int *)(((((*(int *)0x8C287AF0) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            *(unsigned int *)0x8C421F70 = (*(int *)((((*(int *)0x8C287AF0) * 0xD78) + 0x8C2888E8)));
        }
    }
    t32 = *(int *)((((((*(int *)0x8C287AF0) & 0x1) << 2) + 0x8C287AD0) + 0x0));
    *(unsigned int *)0x8C287ACC = t32;
    *(unsigned int *)0x8C1891F0 = (*(int *)(((t32 << 2) + 0x8C1022B8)));
    *(unsigned int *)0x8C287C50 = 0x96;
    sndFadeFlagsClear();
    t35 = matchSetupPlayers();
    *(unsigned int *)0x8C287AFC = 0xFFFFFFFF;
    t36 = *(int *)0x8C287D5C;
    if (t36 == 0) {
        t37 = t35;
        t38 = t36;
        t39 = 0x0;
        for (;;) {
            if ((int)t39 >= (int)(*(int *)0x8C287ADC)) {
                break;
            }
            t38 = 0x8C287ACC;
            t37 = t39;
            t38 = (t38 + 0x14);
            t37 = (t37 << 2);
            t37 = (*(int *)((t38 + t37)));
            if (t37 == 1) {
                t37 = (*(int *)0x8C343248);
                if (t37 == -1) {
                    t37 = (arcadePickRival(t37));
                } else {
                    *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
                }
                t38 = 0xD78;
                t52 = t37;
                t37 = 0x8C2889DC;
                t38 = (t39 * t38);
                *(unsigned int *)((t38 + t37)) = t52;
                t38 = 0x8C0AB0A4;
                t37 = (entrySetResult(t52));
            } else {
                t57 = t38;
            }
            t39 = (t39 + 0x1);
            t38 = t57;
        }
        if ((*(int *)0x8C287ADC) == 4) {
            entryRecordCharas();
        }
    }
    scoreReset();
    t72 = *(int *)0x8C287AF4;
    *(unsigned int *)(((((((t72 & 0x1) << 2) << 1) + (t72 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
    if (((*(int *)0x8C287D5C) != 2) && (t74 = *(int *)0x8C287D5C, t74 != 3)) {
        nlInitEvent();
    }
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        stageSoftReset();
        *(unsigned int *)0x8C3343C0 = 0x0;
        *(unsigned int *)0x8C3343C4 = 0x0;
        strmScoreReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
    }
    t87 = *(int *)0x8C287D5C;
    t116 = t87;
    if (t87 != 2) {
    } else {
        *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) + (*(int *)0x8C2FBD18));
        *(unsigned int *)0x8C2FBE24 = 0x1;
        circuitApplyResult();
        *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
        *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C38BA60 = 0x7F;
        strmVoiceQueueReset();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20);
        if ((*(int *)0x8C2FBE2C) != 0) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x4;
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
        }
        t104 = *(int *)0x8C2FBC98;
        t111 = t104;
        if ((t104 & 4) != 0) {
            fadeStart(0x1E);
            gameMatchSetup();
            *(unsigned int *)0x8C20D150 = 0x1;
            *(unsigned int *)0x8C287C50 = 0x0;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFDF);
            *(unsigned char *)0x8C2FBC7E = (*(signed char *)0x8C2FBE1C);
            memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
            t110 = BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
            *(unsigned int *)0x8C2FBE24 = 0x0;
            t111 = t110;
        }
        t116 = t111;
    }
    return t116;
}


int btnGuideDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t21;
    int t22;
    int t23;
    int t27;
    int t28;
    int t29;
    int t33;
    int t45;
    int t47;
    int t49;
    int t55;
    int t56;
    int t66;
    int t67;
    int t71;
    int t72;
    int t88;
    int t89;
    int t93;
    int t94;
    int t116;
    int t110;
    int t111;
    int t98;
    int t83;
    int t43;
    int t40;
    int t37;
    int t35;
    float u59;
    int t76;
    float u106;
    int t113;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    *(float *)(((((int)stk + 16) + 0x24) + 0x8)) = 0.100000001f;
    if ((a4 != 0) && ((a4 != 1) && (a4 != 2))) {
        if (a4 != 4) {
            if (a4 != 3) {
                if (a4 == 5) {
                    if (a5 == 1) {
                        t4 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t4 << 2) + t4) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                    } else {
                        t5 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        *(unsigned int *)(((((((t5 << 2) + t5) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                    t9 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    t43 = (((((t9 << 2) + t9) << 2) << 2) + 0x8C33B0D0);
                } else {
                    if (a4 == 6) {
                        if (a5 == 1) {
                            t10 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t10 << 2) + t10) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                        } else {
                            t11 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            *(unsigned int *)(((((((t11 << 2) + t11) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                        t15 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                        t40 = (((((t15 << 2) + t15) << 2) << 2) + 0x8C33B0D0);
                    } else {
                        if (a4 == 7) {
                            if (a5 == 1) {
                                t16 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t16 << 2) + t16) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                            } else {
                                t17 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                *(unsigned int *)(((((((t17 << 2) + t17) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                            }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                            t21 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                            t37 = (((((t21 << 2) + t21) << 2) << 2) + 0x8C33B0D0);
                        } else {
                            if (a4 == 8) {
                                if (a5 == 1) {
                                    t22 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t22 << 2) + t22) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t23 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t23 << 2) + t23) << 2) << 2) + 0x8C33B0D0) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t27 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t35 = (((((t27 << 2) + t27) << 2) << 2) + 0x8C33B0D0);
                            } else {
                                if (a5 == 1) {
                                    t28 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t28 << 2) + t28) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                                } else {
                                    t29 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                    *(unsigned int *)(((((((t29 << 2) + t29) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                                t33 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                                t35 = (((((t33 << 2) + t33) << 2) << 2) + 0x8C33B490);
                            }
                            t37 = t35;
                        }
                        t40 = t37;
                    }
                    t43 = t40;
                }
                t45 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(t43, 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
            } else {
                if (a5 == 1) {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                    t47 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t47 << 2) + t47) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x8000;
                } else {
                    *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                    t49 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t49 << 2) + t49) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x0;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t55 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                t56 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t55 << 2) + t55) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
                if (a5 == 1) {
                    u59 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) - 3.0f);
                } else {
                    u59 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x4))) + 3.0f);
                }
                *(float *)(((((int)stk + 16) + 0x24) + 0x4)) = u59;
            }
        } else {
            if ((*(int *)0x8C287D5C) == 2) {
                t76 = 0x4000;
            } else {
                if (a5 == 1) {
                    t66 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t66 << 2) + t66) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
                } else {
                    t67 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                    *(unsigned int *)(((((((t67 << 2) + t67) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
                t71 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
                t72 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t71 << 2) + t71) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
            }
            t83 = t76;
        }
        t98 = t83;
    } else {
        if (a5 == 1) {
            t88 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t88 << 2) + t88) << 2) << 2) + 0x8C33B490) + 0x28)) = 0xFFFFC000;
        } else {
            t89 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
            *(unsigned int *)(((((((t89 << 2) + t89) << 2) << 2) + 0x8C33B490) + 0x28)) = 0x4000;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
        t93 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x0));
        t94 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t93 << 2) + t93) << 2) << 2) + 0x8C33B490), 0x4000, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), f4);
    }
    if (a5 == 1) {
        u106 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 45.0f);
    } else {
        u106 = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) - 47.0f);
    }
    *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = u106;
    t116 = a4;
    if (((*(int *)0x8C287D5C) == 2) && (a4 == 4)) {
    } else {
        if ((int)a4 < (int)0x5) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t110 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t113 = (((((t110 << 2) + t110) << 2) << 2) + 0x8C33B490);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t111 = *(int *)(((((a4 << 2) << 1) + 0x8C10F2B0) + 0x4));
            t113 = (((((t111 << 2) + t111) << 2) << 2) + 0x8C33B0D0);
        }
        t116 = (((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(t113, t98, *(Stk3 *)((((int)stk + 16) + 0x24)), f4));
    }
    return t116;
}

