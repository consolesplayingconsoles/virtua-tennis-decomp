/* Straight-line functions with calls and guards (batch gen_yh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupRequestSave(int, int, int, int);
int FUN_8c0eaf00(int, int, int);
int afsLoadPartitions(void);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camInit(void);
int camSetupView(void);
int circuitTaskSetA(int, int);
int circuitTaskSetB(int, int);
int circuitTaskTrim(int);
int commonLoadStep(void);
int cpuAimPointSet(int, int, float, float);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuSglAimAddLv23(int, int);
int cpuSglAimLv17(int, int, int, float);
int cpuSglAimLv21(int, int);
int cpuShotTargetSet(int, float, float);
int cursorBoxPut(int, Stk3, float, float, float);
int dbgMenuExec(void);
int decoPairPut(int, float);
int eepromBootLoad(void);
int endingCamera2Set(int, int, int, int, int, int, int, int, int);
int endingNop(void);
int endingSceneDraw(void);
int endingWinnerRootSync(int, int, int, int);
int entryIsVersus(int, int, int, int);
int evPackFade(int, int, int);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeScreenStart(int, int, int, int, int, int);
int fadeStart(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int hudCallMsgDrawA9f0(int, int, int, int, float, float);
int hudCallMsgDrawD830(float, float);
int hudCallMsgDrawDa10(float, float);
int hudPanelShow9a3dc(void);
int hudPanelShow9a470(void);
int initSprFree(void);
int initSprPut0(int, int, float);
int initSprPut1(int, int, float);
int lightSet(int, int, int, int);
int lightUpdate(int);
int matchSceneExec(void);
int menuTextMsgPutB(int, int, int, int, Stk3, float);
int ndbGetTargets(int, int, int);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlCloseEvent2(int);
float nlCos(int);
int nlExecuteEvent(void);
int nlInitEvent(void);
int nlLineSetThickness(float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetTranslate(int);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSystemControl(int, int, int);
extern int numPutDigits();
extern int numPutSprite();
int padLcdSetMode(int, int, int, int, int, int);
int rankSprTexFree(void);
int resSprTitleRead(void);
int sndSeDecide(void);
int sprPutAtAlpha(int, Stk3, float);
int sprSet109Load(int, int, int, int, int, int, int, int);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageExtraTexLoad(void);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int strmBgmPlay(int);
int strmCrowdLoop(int);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int thunk_FUN_8c1e0150(int, int);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int unlockApplyW1(void);
int vecAdd(int, int, int, int, int);
int vecCross(int, int, int, int, int);
float vecDot(Stk3, Stk3);
Stk3 vecMake(float, float, float);
int vecScale(int, int, int, int, int, float);
int vecSub(Stk4, Stk3);
int FUN_8c08d268(int a4, int a5, int a6, int a7);
int FUN_8c039788(int a4);
int FUN_8c017ca6(int a4);
int FUN_8c055060(int a4, int a5, float f4);
int FUN_8c0dd9f8(void);
int FUN_8c097e0e(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c06c34c(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_8c0d9f74(int a4);
void FUN_8c08688c(int a4);
int FUN_8c0a5960(Stk2 s);
int FUN_8c0c1684(void);
int FUN_8c0d5b74(int a4, int a5, int a6, int a7);
float FUN_8c05fdb2(int a4);
int FUN_8c05674c(int a4, int a5);
void FUN_8c086fa0(int a4);
int FUN_8c0899ba(int a4, int a5, Stk3 s);
int FUN_8c0902c8(int a4, int a5, int a6, int a7);
int FUN_8c03349c(int a4);
int FUN_8c0d9562(int a4);
int FUN_8c05dc94(int a4, float f4, float f5, float f6);
int FUN_8c0e1c0c(void);
int FUN_8c08ab3c(Stk4 s);
int FUN_8c036308(int a4);
int FUN_8c08af1a(int a4, float f4);

int FUN_8c08d268(int a4, int a5, int a6, int a7)
{
    int stk[49];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t18;
    register int t19;
    register int t22;
    register int t24;
    register float u32;
    register int t33;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u10;
    register float u11;
    register int t49;
    register int t50;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = (0x84 + ((int)stk + 20));
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 20) + 0x24);
    t0 = 0xFFFFFF70;
    t1 = (((int)stk + 20) + 0x24);
    t2 = a4;
    t3 = a5;
    t4 = a6;
    t9 = (a4 + 0x18);
    for (;;) {
        t12 = *(int *)((t9 + 0x0));
        if ((int)t12 < 0) {
            t9 = (t9 + 0x50);
        }
        if ((int)(*(int *)((t9 + 0x0))) > 0) {
            t0 = (*(int *)((t9 + 0x0)));
            t9 = (t9 + 0x4);
            if ((t0 & 8) != 0) {
                t1 = 0x3;
                *(unsigned int *)(((int)stk + 44)) = t1;
            } else {
                *(unsigned int *)(((int)stk + 44)) = 0x1;
            }
            t18 = *(int *)((t9 + 0x0));
            t9 = (t9 + 0x4);
            t1 = t18;
            *(unsigned int *)(((int)stk + 52)) = t1;
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            t19 = t12;
            for (;;) {
                t1 = (*(int *)(((int)stk + 52)));
                if ((int)(*(int *)(((int)stk + 28))) >= (int)t1) {
                    break;
                }
                t22 = *(int *)(((int)stk + 24));
                t1 = 0x2C;
                t19 = (*(int *)(((int)stk + 48)));
                t5 = 0x0;
                t6 = (t22 * t1);
                t6 = (t6 + t19);
                t24 = t22;
                for (;;) {
                    t1 = (*(int *)(((int)stk + 44)));
                    if ((int)t5 >= (int)t1) {
                        break;
                    }
                    t1 = (*(int *)((t9 + 0x0)));
                    if ((t1 & 0x1) != 0) {
                        t1 = 0x8C0F7DAC;
                        t19 = (0x84 + ((int)stk + 20));
                        t24 = 0x8C1016D4;
                        t0 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t24); }
                        t7 = t6;
                        t8 = 0x0;
                        t7 = (t7 + 0xC);
                        for (;;) {
                            t19 = ((int)stk + 20);
                            t19 = (t19 + 0x24);
                            t19 = (t19 + t8);
                            t0 = 0xC;
                            *(unsigned int *)(((int)stk + 20)) = t19;
                            t1 = (*(int *)(((int)stk + 32)));
                            t1 = (t1 + t8);
                            t24 = t1;
                            t19 = ((int)stk + 8);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t19) = *(struct mv3 *)(t24); }
                            t1 = (*(int *)(((int)stk + 20)));
                            u32 = *(float *)((t7 + 0x0));
                            t7 = (t7 + 0x4);
                            t33 = t1;
                            *(int *)((int)stk + 4) = t33;
                            t1 = 0x8C015F4C;
                            t0 = (vecScale(t2, t3, t4, a7, t33, u32));
                            t24 = 0x60;
                            t8 = (t8 + 0xC);
                            t19 = (*(int *)(((int)stk + 20)));
                            if ((unsigned int)t8 >= (unsigned int)t24) {
                                break;
                            }
                        }
                        t2 = (*(int *)(((int)stk + 40)));
                        for (;;) {
                            u10 = (*(float *)(((0x84 + ((int)stk + 20)) + 0x0)));
                            t0 = 0x4;
                            u11 = (*(float *)((t2 + 0x0)));
                            t19 = t0;
                            t19 = (t19 + t2);
                            u10 = (u10 + u11);
                            *(float *)(((0x84 + ((int)stk + 20)) + 0x0)) = u10;
                            u10 = (*(float *)(((0x84 + ((int)stk + 20)) + t0)));
                            u11 = (*(float *)((t19 + 0x0)));
                            u10 = (u10 + u11);
                            *(float *)(((0x84 + ((int)stk + 20)) + t0)) = u10;
                            t0 = 0x8;
                            t19 = t0;
                            t19 = (t19 + t2);
                            u10 = (*(float *)(((0x84 + ((int)stk + 20)) + t0)));
                            t2 = (t2 + 0xC);
                            u11 = (*(float *)((t19 + 0x0)));
                            u10 = (u10 + u11);
                            *(float *)(((0x84 + ((int)stk + 20)) + t0)) = u10;
                            t1 = (*(int *)(((int)stk + 36)));
                            if ((unsigned int)t2 >= (unsigned int)t1) {
                                break;
                            }
                        }
                        u11 = (*(float *)(((0x84 + ((int)stk + 20)) + 0x0)));
                        t0 = 0x4;
                        *(float *)((t9 + 0x0)) = u11;
                        t1 = (*(int *)((t9 + 0x0)));
                        t1 = (t1 | 0x1);
                        *(unsigned int *)((t9 + 0x0)) = t1;
                        t9 = (t9 + 0x4);
                        u11 = (*(float *)(((0x84 + ((int)stk + 20)) + t0)));
                        t0 = 0x8;
                        *(float *)((t9 + 0x0)) = u11;
                        t9 = (t9 + 0x4);
                        u11 = (*(float *)(((0x84 + ((int)stk + 20)) + t0)));
                        *(float *)((t9 + 0x0)) = u11;
                        t9 = (t9 + 0x18);
                        t1 = (*(int *)(((int)stk + 24)));
                        t1 = (t1 + 0x1);
                        *(unsigned int *)(((int)stk + 24)) = t1;
                        t6 = (t6 + 0x2C);
                    } else {
                        t9 = (t9 + 0x8);
                        t49 = t3;
                        t50 = t4;
                    }
                    t3 = t49;
                    t4 = t50;
                    t5 = (t5 + 0x1);
                }
                t19 = (*(int *)(((int)stk + 28)));
                t19 = (t19 + 0x1);
                *(unsigned int *)(((int)stk + 28)) = t19;
            }
        }
        t1 = (*(int *)((t9 + 0x0)));
        if (t1 != 0) continue;
        break;
    }
    return t0;
}

int FUN_8c039788(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(int *)((a4 + 0x44));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x104))), (*(float *)((a4 + 0x108))), (*(float *)((a4 + 0x10C))));
    nlTranslate(0.0f, 0.0500000007f, 0.0f);
    if ((*(int *)0x8C287C60) == 0) {
        u0 = *(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0));
        u1 = *(float *)(((0x8C2FBF34 + ((t1 - 2) << 2)) + 0x0));
        *(float *)(((0x8C2FBF34 + ((t1 - 2) << 2)) + 0x0)) = (u1 - ((u0 * 10.0f) / 100.0f));
        u2 = *(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0));
        *(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0)) = (u2 + (u1 - ((u0 * 10.0f) / 100.0f)));
        u3 = (u2 + (u1 - ((u0 * 10.0f) / 100.0f)));
        *(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0)) = (u3 * 0.99000001f);
    }
    nlRotateAX((int)(*(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0))));
    nlScale(1.0f, 1.0f, (1.0f + 1.0f));
    nlObjPut((*(int *)(((((((t1 - 2) << 1) + (t1 - 2)) << 2) + 0x8C159D8C) + 0x0))));
    nlObjPut((*(int *)(((((((t1 - 2) << 1) + (t1 - 2)) << 2) + 0x8C159D8C) + 0x4))));
    nlPushMatrix(0x0);
    nlScale(1.0f, 1.0f, 0.5f);
    nlRotateAX((int)(-(*(float *)(((0x8C2FBF14 + ((t1 - 2) << 2)) + 0x0)))));
    nlScale(1.0f, 1.0f, (1.0f + 1.0f));
    nlObjPut((*(int *)(((((((t1 - 2) << 1) + (t1 - 2)) << 2) + 0x8C159D8C) + 0x8))));
    nlPopMatrix(0x1);
    nlTranslate(0.0f, 9.5f, -5.0f);
    if (((*(int *)0x8C287C60) == 0) && (t0 = *(int *)((((t1 - 2) << 2) + 0x8C2FBEF4)), t0 != 0)) {
        u0 = (*(float *)((a4 + 0x114)));
        u0 = u0 + 0.100000001f * ((-(*(float *)(((0x114 + a4) + 0x0)))) + 16384.0f);
        *(float *)((a4 + 0x114)) = u0;
    }
    nlRotateAX((int)(*(float *)((a4 + 0x114))));
    nlObjPut((*(int *)((((t1 - 2) << 2) + 0x8C159DEC))));
    return nlPopMatrix(0x1);
}

int FUN_8c017ca6(int a4)
{
    int stk[21];
    register int t2;
    register int t8;
    register int t15;
    register float u21;
    register float u22;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t30;
    register int t31;

    nlPushMatrix(0x0);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
    *(Stk3 *)((((int)stk + 8) + 0x8)) = vecMake(0.0f, 0.0f, 0.0f);
    nlSetTranslate((((int)stk + 8) + 0x8));
    t2 = 0x8C017D4C;
    t8 = (a4 + 0x18);
    for (;;) {
        if ((int)(*(int *)((t8 + 0x0))) < 0) {
            t8 = (t8 + 0x50);
        }
        if ((int)(*(int *)((t8 + 0x0))) > 0) {
            t2 = (*(int *)((t8 + 0x0)));
            t8 = (t8 + 0x4);
            if ((t2 & 8) != 0) {
                t5 = 0x3;
            } else {
                t5 = 0x1;
            }
            t15 = *(int *)((t8 + 0x0));
            t8 = (t8 + 0x4);
            *(unsigned int *)(((int)stk + 12)) = t15;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            for (;;) {
                t3 = (*(int *)(((int)stk + 8)));
                if ((int)t3 >= (int)(*(int *)(((int)stk + 12)))) {
                    break;
                }
                t6 = 0x0;
                if ((int)t5 > 0) {
                    for (;;) {
                        if (((*(int *)((t8 + 0x0))) & 0x1) != 0) {
                            t8 = (t8 + 0xC);
                            t7 = t8;
                            t2 = (nlPushMatrix(0x0));
                            t2 = (nlCalcPoint(t7, (((int)stk + 8) + 0x14)));
                            t2 = 0x1C;
                            u21 = *(float *)((((int)stk + 8) + t2));
                            u22 = (-u21);
                            if (!(0.0f > u21)) {
                                u22 = u21;
                            }
                            if (0.200000003f > u22) {
                                t4 = 0x8C0EFDE0;
                                t2 = (nlQuickInvertMatrix());
                                t4 = 0x8C015EEA;
                                *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
                                *(Stk3 *)((((int)stk + 8) + 0x8)) = vecMake(0.0f, 0.0f, 1.0f);
                                t2 = (nlCalcPoint((((int)stk + 8) + 0x8), t7));
                            }
                            t2 = (nlPopMatrix(0x1));
                            t8 = (t8 + 0x14);
                        } else {
                            t8 = (t8 + 0x8);
                            t30 = t3;
                            t31 = t4;
                        }
                        t3 = t30;
                        t6 = (t6 + 0x1);
                        t4 = t31;
                        if ((int)t6 >= (int)t5) {
                            break;
                        }
                    }
                }
                t4 = (*(int *)(((int)stk + 8)));
                t4 = (t4 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t4;
            }
        }
        if ((*(int *)((t8 + 0x0))) == 0) {
            break;
        }
    }
    return (nlPopMatrix(0x1));
}

int FUN_8c055060(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)0x8C287B00;
    t2 = *(int *)0x8C287B04;
    t3 = a5;
    u0 = f4;
    if ((int)(t1 + t2) > (int)0xA) {
        t4 = ndbGetTargets(a4, a5, 0x9);
        u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u2 = (-u1);
        if (!(0.0f > u1)) {
            u2 = u1;
        }
        t5 = t4;
        if (59.4249992f > u2) {
            t5 = (t4 + (cpuSglAimLv21(a4, t4)));
        } else {
            u2 = u1;
        }
        t3 = t5;
        u0 = u2;
    } else {
        t4 = (t1 + t2);
    }
    if ((int)(t1 - t2) >= 0) {
        t5 = ndbGetTargets(a4, t3, 0x9);
        if ((int)(t1 - t2) < (int)0x2) {
            t6 = ndbGetTargets(a4, t5, 0x4);
            t7 = ((t5 + t6) + (ndbGetTargets(a4, (t5 + t6), 0x7)));
        } else {
            u1 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2 = (-u1);
            if (!(0.0f > u1)) {
                u2 = u1;
            }
            t0 = t5;
            if (59.4249992f > u2) {
                t0 = (t5 + (cpuSglAimLv21(a4, t5)));
            }
            t7 = t0;
        }
        t0 = t7;
    } else {
        if ((int)(-(t1 - t2)) <= (int)0x2) {
            t5 = ndbGetTargets(a4, t3, 0x9);
            t6 = (t5 + (ndbGetTargets(a4, t5, 0x0)));
        } else {
            if ((int)(-(t1 - t2)) <= (int)0x4) {
                t1 = cpuSglAimAddLv23(a4, t3);
                t2 = (t1 + (ndbGetTargets(a4, t1, 0x0)));
            } else {
                t1 = cpuSglAimLv17(a4, t3, t4, u0);
                t2 = (cpuSglAimAddLv23(a4, t1));
            }
            t6 = t2;
        }
        t0 = t6;
    }
    t1 = t0;
    if (t0 == 0) {
        t2 = ndbGetTargets(a4, t0, 0x0);
        t3 = (t0 + t2);
        if ((t0 + t2) == 0) {
            cpuAimPointSet((t0 + t2), 0x1, 0.0f, 0.0f);
            t3 = ((t0 + t2) + 0x1);
        }
        t1 = t3;
    }
    return t1;
}

int FUN_8c0dd9f8(void)
{
    int stk[8];
    register int t5;
    register int t9;
    register int t53;
    register int t60;
    register int t6;
    register int t12;
    register int t13;
    register int t20;
    register int t21;
    register int t33;
    register int t34;
    register int t48;
    register int t62;
    register int t54;

    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C1D710C = 0x0;
        nlInitEvent();
    }
    t5 = commonLoadStep();
    if ((t5 == 99) && (t6 = *(int *)0x8C20D15C, (int)t6 >= (int)0x10D)) {
        fadeCaptureBegin();
    }
    t9 = *(int *)0x8C20D15C;
    if ((int)t9 < (int)0x87) {
        if (t9 == 0) {
            FUN_8c0eaf00(0x0, 0x0, 0x0);
        } else {
            t12 = t9;
            t13 = 0x87;
        }
        if ((*(int *)0x8C20D15C) == 0x86) {
            fadeCaptureBegin();
        } else {
            t20 = t12;
            t21 = t13;
        }
        initSprPut0(t20, t21, 1.0f);
        if ((*(int *)0x8C20D15C) == 0x86) {
            fadeCaptureEnd(0xF);
        }
    } else {
        if (1 && ((t5 != 99) || ((int)t9 < (int)0x10E))) {
            if (t9 == 0x87) {
                FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
            } else {
                t33 = t9;
                t34 = 0x87;
            }
            initSprPut1(t33, t34, 1.0f);
        }
    }
    if ((t5 == 99) && (t48 = *(int *)0x8C20D15C, (int)t48 >= (int)0x10D)) {
        fadeCaptureEnd(0xF);
        initSprFree();
        if ((*(int *)0x8C1D710C) == 0) {
            *(unsigned int *)0x8C1D710C = 0x1;
            t53 = thunk_FUN_8c1e0150((*(int *)0x8C40C628), 0x8C126660);
            if ((t53 == 0) && (t54 = *(int *)0x8C1D7538, t54 == 0)) {
                padLcdSetMode(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            }
        }
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        afsLoadPartitions();
        t60 = eepromBootLoad();
        *(unsigned int *)0x8C20D15C = 0x0;
        t62 = t60;
    } else {
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t62 = t5;
    }
    return t62;
}

int FUN_8c097e0e(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[18];
    register int t4;
    register int t67;
    register int t58;
    register int t49;
    register int t40;
    register int t31;
    register int t22;
    register int t13;

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                                t4 = a4;
                                if (a4 != 7) {
                                } else {
                                    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C18512C));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                                    t4 = (menuTextMsgPutB((*(int *)0x8C1850EC), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
                                }
                                t13 = t4;
                            } else {
                                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) - (float)(*(int *)0x8C185128));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                                t13 = (menuTextMsgPutB((*(int *)0x8C1850E8), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
                            }
                            t22 = t13;
                        } else {
                            *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C185124));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                            t22 = (menuTextMsgPutB((*(int *)0x8C1850E4), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
                        }
                        t31 = t22;
                    } else {
                        *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C185120));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                        t31 = (menuTextMsgPutB((*(int *)0x8C1850E0), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
                    }
                    t40 = t31;
                } else {
                    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C18511C));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                    t40 = (menuTextMsgPutB((*(int *)0x8C1850DC), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
                }
                t49 = t40;
            } else {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C185118));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
                t49 = (menuTextMsgPutB((*(int *)0x8C1850D8), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
            }
            t58 = t49;
        } else {
            *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C185114));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t58 = (menuTextMsgPutB((*(int *)0x8C1850D4), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
        }
        t67 = t58;
    } else {
        *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (float)(*(int *)0x8C185110));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t67 = (menuTextMsgPutB((*(int *)0x8C1850D0), 0x8C185110, a6, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f));
    }
    return t67;
}

int FUN_8c06c34c(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t2 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        u0 = ((float)(signed char)t2 * ((-u1) + 54.8499985f));
        u1 = (u0 * 0.600000024f);
        if ((((u0 * 0.600000024f) > 0.0f) - (0.0f > (u0 * 0.600000024f))) != (signed char)t2) {
            u1 = 0.0f;
        }
        if ((*(int *)((a4 + 0xC58))) == 16) {
            u0 = (*(float *)0x8C06C4F4);
        } else {
            u0 = (*(float *)0x8C06C4F8);
        }
        u2 = *(float *)((a4 + 0xB00));
        u3 = (-(u2 * u0));
        if ((*(int *)0x8C2FCC60) == 1) {
            u4 = *(float *)0x8C06C500;
            u5 = (-(-(u2 * u0)));
            if (!(0.0f > (-(u2 * u0)))) {
                u5 = (-(u2 * u0));
            }
            u6 = (-(u2 * u0));
            if (u4 > u5) {
                u6 = (-((*(float *)((a4 + 0xB00))) * u4));
            }
            u3 = u6;
        }
        u0 = *(float *)0x8C06C504;
        u2 = (-u1);
        if (!(0.0f > u1)) {
            u2 = u1;
        }
        u4 = u1;
        if (u2 > u0) {
            u4 = ((float)((u1 > 0.0f) - (0.0f > u1)) * u0);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u4;
        *(float *)((a4 + 0xA3C)) = u3;
        t1 = 0xA3C;
    }
    return t1;
}

int FUN_8c0d9f74(int a4)
{
    int stk[15];
    register float u0;
    register float u10;
    register float u21;
    register int t30;
    register int t36;
    register int t40;
    register int t42;
    register int t27;
    register int t28;
    register int t29;
    register int t45;

    u0 = *(float *)0x8C23D204;
    u10 = 1.0f;
    if (!((float)((*(int *)((a4 + 0x1C))) - (*(int *)((a4 + 0x18)))) > ((30.0f / u0) / (float)(*(int *)((a4 + 0x20)))))) {
        u10 = ((float)((*(int *)((a4 + 0x1C))) - (*(int *)((a4 + 0x18)))) / ((30.0f / u0) / (float)(*(int *)((a4 + 0x20)))));
    }
    u21 = u10;
    if (!((float)(*(int *)((a4 + 0x18))) > ((30.0f / u0) / (float)(*(int *)((a4 + 0x20)))))) {
        u21 = ((float)(*(int *)((a4 + 0x18))) / ((30.0f / u0) / (float)(*(int *)((a4 + 0x20)))));
    }
    t30 = 0x0;
    for (;;) {
        if ((int)t30 >= (int)(*(int *)((((*(int *)((a4 + 0x14))) << 2) + 0x8C1D4DBC)))) {
            break;
        }
        t27 = (*(int *)((a4 + 0x14)));
        t29 = t30;
        t29 = (t29 << 2);
        t36 = t27;
        t27 = (t27 << 2);
        t27 = (t27 << 2);
        t27 = (t27 + t36);
        t27 = (t27 << 2);
        t27 = (t27 << 2);
        t29 = (t29 << 2);
        t27 = (t27 + 0x8C1D4DDC);
        t27 = (t27 + t29);
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)((t27 + 0x8))), (*(float *)((t27 + 0xC))), 0.0500000007f);
        t28 = (*(int *)((a4 + 0x14)));
        t40 = t28;
        t28 = (t28 << 2);
        t28 = (t28 << 2);
        t28 = (t28 + t40);
        t28 = (t28 << 2);
        t28 = (t28 << 2);
        t28 = (t28 + 0x8C1D4DDC);
        t28 = (t28 + t29);
        t42 = *(int *)((t28 + 0x4));
        sprPutAtAlpha(((((*(int *)((t28 + 0x0))) * 0x960) + 0x8C407FDC) + ((((t42 << 2) + t42) << 2) << 2)), *(Stk3 *)((int)stk + 8), u21);
        t30 = (t30 + 0x1);
    }
    if (((int)(*(int *)((a4 + 0x18))) > 0) && (t45 = *(int *)0x8C407FCC, t45 != 1)) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
        return t45;
    }
    return nlCloseEvent2(a4);
}

void FUN_8c08688c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if (((*(int *)0x8C287B3C) & 0x1) != 0) {
        return;
    }
    t5 = 0x8C287D84;
    for (;;) {
        if ((((*(int *)((t5 + 0xB60))) & 0x40000) != 0) && (t0 = *(int *)((t5 + 0xB68)), t0 == 5)) {
            *(unsigned int *)((a4 + 0x3C)) = 0x1;
        }
        t6 = t5;
        t5 = (t5 + 0xD78);
        if ((unsigned int)t5 >= (unsigned int)0x8C289874) {
            break;
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
    }
    if (((*(int *)0x8C301BF0) == 2) && (t1 = *(int *)0x8C287C60, t1 == 0)) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
    }
    if ((*(float *)((a4 + 0x20))) > 1.0f) {
        *(float *)((a4 + 0x20)) = 1.0f;
    }
    hudCallMsgDrawA9f0(t5, t6, 0xD78, 0x40000, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
    t0 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t0 - 1);
    if (((int)(t0 - 1) < 0) && (t2 = *(int *)((a4 + 0x1C)), t2 == 0)) {
        *(unsigned int *)((a4 + 0x1C)) = 0x1;
        if ((*(int *)((a4 + 0x28))) == 1) {
            hudPanelShow9a3dc();
        } else {
            hudPanelShow9a470();
        }
    }
    if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
        *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / (*(float *)0x8C086A10));
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if (((int)(*(int *)((a4 + 0x14))) >= 0) && ((t3 = *(int *)((a4 + 0x3C)), t3 == 0) && (t4 = *(int *)0x8C30196C, t4 == 0))) {
        return;
    }
    nlCloseEvent2(a4);
}

int FUN_8c0a5960(Stk2 s)
{
    int stk[21];
    register float t3;
    register float t17;
    register float t31;
    register float u9;
    register float u23;
    register float u37;

    stk[11] = s.w[0];
    stk[12] = s.w[1];
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x18) + 0x0))), (*(float *)(((((int)stk + 20) + 0x18) + 0x4))), 0.300000012f);
    t3 = nlSin((((*(int *)0x8C20D198) << 8) << 2));
    if (!(0.0f > t3)) {
        u9 = (nlSin((((*(int *)0x8C20D198) << 8) << 2)));
    } else {
        u9 = (-(nlSin((((*(int *)0x8C20D198) << 8) << 2))));
    }
    decoPairPut(0x0, u9);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x18) + 0x0))) + (*(float *)0x8C0A5B08)), (*(float *)(((((int)stk + 20) + 0x18) + 0x4))), (*(float *)0x8C0A5B04));
    t17 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400));
    if (!(0.0f > t17)) {
        u23 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400)));
    } else {
        u23 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400))));
    }
    decoPairPut(0x0, u23);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x18) + 0x0))) + (*(float *)0x8C0A5B10)), (*(float *)(((((int)stk + 20) + 0x18) + 0x4))), (*(float *)0x8C0A5B0C));
    t31 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800));
    if (!(0.0f > t31)) {
        u37 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800)));
    } else {
        u37 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800))));
    }
    return (decoPairPut(0x0, u37));
}

int FUN_8c0c1684(void)
{
    int stk[7];
    register int t0;
    register int t27;

    t0 = 0x8C343888;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x8C343898) {
            break;
        }
    }
    nlInitEvent();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C37B778) = *(struct mv3 *)(0x8C1AC1B8); }
    *(unsigned int *)0x8C37B764 = 0x0;
    *(unsigned int *)0x8C37B768 = 0x0;
    *(unsigned int *)0x8C1AC1B4 = 0x0;
    *(unsigned int *)0x8C1AC1B0 = 0x0;
    *(unsigned int *)0x8C37B784 = 0x0;
    *(unsigned int *)0x8C37B788 = 0x0;
    *(unsigned int *)0x8C37B78C = 0x0;
    *(unsigned int *)0x8C37B790 = 0x0;
    *(float *)0x8C37B794 = 1.0f;
    *(unsigned int *)0x8C37B798 = 0x0;
    *(unsigned short *)0x8C37B76C = (-(unsigned short)(*(short *)0x8C123366));
    *(unsigned short *)0x8C37B76E = (-(unsigned short)(*(short *)0x8C123364));
    *(float *)0x8C37B770 = (*(float *)0x8C12338C);
    *(float *)0x8C37B774 = (*(float *)0x8C123390);
    FUN_8c0eaf00(0x0, 0x0, 0x0);
    *(unsigned int *)0x8C37B75C = 0x0;
    camInit();
    lightSet(0x8500, 0x9200, 0x64, 0x45);
    strmBgmPlay(0x2);
    fileLoadStart(0x8C9B0000, 0x8C123444, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    fileLoadStart(0x8CA80000, 0x8C123464, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    stageExtraTexLoad();
    fileLoadStart(0x8CA80000, 0x8C123484, 0x0);
    for (;;) {
        if ((*(int *)0x8C34A1F0) == 1) {
            break;
        }
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
    }
    sprSet109Load(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    t27 = fadeScreenStart(0x2, 0x1, 0xA, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return t27;
}

int FUN_8c0d5b74(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register float u25;
    register float u26;
    register int t63;
    register int t47;
    register int t28;
    register int t55;
    register int t48;

    if ((*(int *)0x8C402CA0) == 0) {
        endingWinnerRootSync(a4, a5, a6, a7);
    }
    endingCamera2Set(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    dbgMenuExec();
    camSetupView();
    *(unsigned int *)0x8C38B824 = 0x0;
    if ((*(int *)0x8C1891E8) == 7) {
        *(unsigned int *)0x8C38B828 = 0x7200;
    } else {
        *(unsigned int *)0x8C38B828 = 0x3200;
    }
    lightUpdate(0x0);
    strmCrowdLoop(0x1);
    endingNop();
    nlPushMatrix(0x0);
    if ((*(int *)0x8C1891E8) == 7) {
        nlRotateAY(0x4000);
    }
    endingSceneDraw();
    nlPopMatrix(0x1);
    matchSceneExec();
    u25 = *(float *)0x8C402CA4;
    u26 = *(float *)0x8C23D204;
    *(float *)0x8C402CA4 = (u25 + u26);
    *(unsigned int *)0x8C402CA0 = (int)(u25 + u26);
    if (((*(int *)0x8C402CAC) == 2) && (t28 = *(int *)0x8C402CA0, t28 == 0x168)) {
        fadeScreenStart(0x3, 0x1, 0x3D, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        evPackFade(0x1, 0x3C, 0x0);
        evPackFade(0x6, 0x3C, 0x0);
    }
    nlExecuteEvent();
    t63 = 0x8C1D3718;
    if ((int)(*(int *)0x8C402CA0) > (int)((*(int *)((((*(int *)0x8C402CAC) << 2) + 0x8C1D3718))) * 0x3C)) {
        if ((*(int *)0x8C402CAC) == 2) {
            if (((*(int *)0x8C40C30C) & 0x20000) == 0) {
                *(unsigned int *)0x8C40C30C = (0x20000 | (*(int *)0x8C40C30C));
                t47 = unlockApplyW1();
                *(unsigned int *)0x8C20D150 = 0x9;
                t48 = t47;
            } else {
                *(unsigned int *)0x8C20D150 = 0x7;
                t48 = 0x8C20D150;
            }
            *(unsigned int *)0x8C20D15C = 0x0;
            t55 = t48;
        } else {
            *(unsigned int *)0x8C402CAC = ((*(int *)0x8C402CAC) + 0x1);
            *(unsigned int *)0x8C402CA0 = 0x0;
            *(float *)0x8C402CA4 = 0.0f;
            t55 = 0x4;
        }
        t63 = t55;
    }
    return t63;
}

float FUN_8c05fdb2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u0 = (*(float *)((a4 + 0xAE8)));
        u1 = (*(float *)((a4 + 0xAF0)));
    } else {
        t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
        t2 = (u2 > 0.0f) - (0.0f > u2);
        u3 = (-u2);
        if (!(0.0f > u2)) {
            u3 = u2;
        }
        u2 = ((float)t2 * u3);
        u3 = (u2 * 0.600000024f);
        u3 = u3 + 32.9099998f * (float)(signed char)t1;
        u2 = u3;
        if (((u3 > 0.0f) - (0.0f > u3)) != (signed char)t1) {
            u2 = 0.0f;
        }
        u3 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C05FF68))) + 1.0f);
        u4 = *(float *)0x8C05FF6C;
        u5 = ((*(float *)((a4 + 0xB00))) * u3);
        u3 = (u5 * u4);
        u0 = u2;
        u1 = (-(u5 * u4));
    }
    u2 = *(float *)0x8C05FF70;
    u4 = (-u0);
    if (!(0.0f > u0)) {
        u4 = u0;
    }
    u5 = u0;
    if (u4 > u2) {
        u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u2);
    }
    *(unsigned int *)((a4 + 0xA24)) = 0x0;
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
    *(float *)((a4 + 0xA34)) = u5;
    *(float *)((a4 + 0xA3C)) = u1;
    return u3;
}

int FUN_8c05674c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (42.8995018f > u1) {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (125.31749f > u1) {
            t1 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            if ((unsigned char)(*(signed char *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t1 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t1 = 0xA24;
        } else {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t1 = 0x4;
        }
        t2 = t1;
    } else {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t2 = 0x4;
    }
    return t2;
}

void FUN_8c086fa0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if (((*(int *)0x8C287B3C) & 0x1) != 0) {
        return;
    }
    t4 = 0x8C287D84;
    for (;;) {
        if ((((*(int *)((t4 + 0xB60))) & 0x40000) != 0) && (t0 = *(int *)((t4 + 0xB68)), t0 == 5)) {
            *(unsigned int *)((a4 + 0x3C)) = 0x1;
        }
        t5 = t4;
        t4 = (t4 + 0xD78);
        if ((unsigned int)t4 >= (unsigned int)0x8C289874) {
            break;
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
    }
    if (((*(int *)0x8C301BF0) == 2) && (t1 = *(int *)0x8C287C60, t1 == 0)) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if ((*(float *)((a4 + 0x20))) > 1.0f) {
        *(float *)((a4 + 0x20)) = 1.0f;
    }
    t0 = entryIsVersus(t4, 0x1, t5, 0xD78);
    if (t0 == 0) {
        hudCallMsgDrawD830((*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
    } else {
        hudCallMsgDrawDa10((*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
    }
    if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
        *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / (*(float *)0x8C087104));
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if (((int)(*(int *)((a4 + 0x14))) >= 0) && ((t2 = *(int *)((a4 + 0x3C)), t2 == 0) && (t3 = *(int *)0x8C30196C, t3 == 0))) {
        return;
    }
    nlCloseEvent2(a4);
}

int FUN_8c0899ba(int a4, int a5, Stk3 s)
{
    int stk[41];
    register int t1;
    register int t13;
    register int t5;
    register int t6;
    register float t10;

    stk[30] = s.w[0];
    stk[31] = s.w[1];
    stk[32] = s.w[2];
    *(unsigned int *)(((int)stk + 60)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 56) + 0x40)); }
    *(int *)((int)stk + 16) = (0x18 + ((int)stk + 20));
    *(int *)((int)stk + 16) = (0x18 + ((int)stk + 20));
    vecSub(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)));
    t1 = *(int *)(((int)stk + 60));
    *(unsigned int *)(((int)stk + 56)) = (t1 - 1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((((t1 - 1) << 1) + (t1 - 1)) << 2) + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 56) + 0x40)); }
    *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
    *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
    vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
    *(int *)((int)stk + 28) = (((int)stk + 56) + 0x14);
    vecCross(0x0, 0x0, 0x0, 0x0, (((int)stk + 56) + 0x14));
    t13 = 0x1;
    if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 56)))) {
        t5 = 0x0;
        t6 = a4;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((t6 + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 56) + 0x40)); }
            *(int *)((int)stk + 16) = (0x18 + ((int)stk + 20));
            *(int *)((int)stk + 16) = (0x18 + ((int)stk + 20));
            vecSub(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t6); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 56) + 0x40)); }
            *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
            *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
            vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
            *(int *)((int)stk + 28) = (((int)stk + 56) + 0x8);
            vecCross(0x0, 0x0, 0x0, 0x0, (((int)stk + 56) + 0x8));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 56) + 0x8)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 56) + 0x14)); }
            t10 = vecDot(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (0.0f > t10) {
                break;
            }
            t5 = (t5 + 0x1);
            t6 = (t6 + 0xC);
            if ((unsigned int)t5 >= (unsigned int)(*(int *)(((int)stk + 56)))) {
                return 0x1;
            }
        }
        t13 = 0x0;
    }
    return t13;
}

int FUN_8c0902c8(int a4, int a5, int a6, int a7)
{
    int stk[27];
    register int t4;
    register int t10;
    register int t11;
    register int t20;
    register int t18;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(0x8C10E658); }
    if ((*(int *)0x8C287B20) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(0x8C1846BC); }
        t4 = ((int (*)(int, Stk3, Stk3, float))(numPutDigits))((*(int *)((((*(int *)0x8C287B10) << 2) + 0x8C10E648))), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C1846C8); }
        t20 = (((int (*)(int, Stk3, float))(numPutDigits))((*(int *)((((*(int *)0x8C287B14) << 2) + 0x8C10E648))), *(Stk3 *)(((int)stk + 20)), 1.0f));
    } else {
        if ((*(int *)0x8C287B10) == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((int)stk + 44)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C1846BC); }
            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x30);
            vecAdd(a4, a5, a6, a7, *(int *)((int)stk + 16));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x34)); }
            t10 = ((int (*)(int, Stk3, float))(numPutSprite))(0x18, *(Stk3 *)(((int)stk + 4)), 1.0f);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(0x8C1846BC); }
            t11 = ((int (*)(int, int, int, int, Stk3, float))(numPutSprite))(0x14, a5, a6, a7, *(Stk3 *)(((int)stk + 32)), 1.0f);
        }
        if ((*(int *)0x8C287B14) == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((int)stk + 44)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C1846C8); }
            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x24);
            vecAdd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
            t18 = (((int (*)(int, Stk3, float))(numPutSprite))(0x18, *(Stk3 *)(((int)stk + 4)), 1.0f));
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(0x8C1846C8); }
            t18 = (((int (*)(int, Stk3, float))(numPutSprite))(0x14, *(Stk3 *)(((int)stk + 32)), 1.0f));
        }
        t20 = t18;
    }
    return t20;
}

int FUN_8c03349c(int a4)
{
    register int t23;
    register float u66;
    register float u75;
    register float u76;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t40;
    register int t60;

    if ((*(int *)0x8C2FBE0C) == a4) {
        if ((int)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x14))) > 0) {
            t23 = *(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x14));
            *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x14)) = (t23 - 1);
            if ((t23 - 1) == 0) {
                circuitTaskTrim(a4);
            }
        } else {
            if (((*(int *)0x8C2FBE10) == 0) && ((t32 = *(int *)0x8C421F70, t33 = *(int *)((0x8C29B898 + (t32 << 2))), t34 = *(int *)((t33 + 0x10)), (t34 & 5) != 0) || ((t35 = *(int *)0x8C421F70, t36 = *(int *)((0x8C29B898 + (t35 << 2))), t37 = *(int *)((t36 + 0x10)), (t37 & 2) != 0) || (t38 = *(int *)0x8C421F70, t39 = *(int *)((0x8C29B898 + (t38 << 2))), t40 = *(int *)((t39 + 0x10)), (t40 & 8) != 0)))) {
                circuitTaskSetA(a4, 0xFFFFFFFF);
                circuitTaskSetB(a4, 0x1E);
                sndSeDecide();
            }
        }
    }
    u66 = 1.0f;
    if ((((((*(int *)0x8C2FBE0C) == 0)) ? 1 : 0) != a4) && (t60 = *(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x14)), t60 == 0)) {
    } else {
        u66 = ((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x14))) / (*(float *)0x8C033604));
    }
    sprSheetSet(0x8C1095B0);
    sprSheetPut(0x0, (*(float *)0x8C03361C), (*(float *)0x8C033618), (*(float *)0x8C033614), u66);
    sprSheetSet(0x8C1095D4);
    u75 = *(float *)0x8C033624;
    u76 = *(float *)0x8C033628;
    sprSheetPut(0x0, (*(float *)0x8C03362C), u76, u75, u66);
    sprSheetSet(0x8C10961C);
    sprSheetPut(0x0, (*(float *)0x8C033634), u76, u75, u66);
    sprSheetSet(0x8C1095F8);
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * 360.0f);
    return (sprSheetPut(0x0, (*(float *)0x8C033644), u76, u75, u66));
}

int FUN_8c0d9562(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(int *)((0x8C40C288 + ((*(int *)((a4 + 0x14))) << 2)))) != 2) {
        t0 = *(int *)((a4 + 0x18));
        if ((int)t0 >= 0) {
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            if (t1 != 0) {
                t0 = *(int *)((a4 + 0x20));
                u0 = nlCos((int)(((float)(t0 - (*(int *)((a4 + 0x18)))) / (float)t0) * 16384.0f));
                t0 = *(int *)((a4 + 0x1C));
                u1 = (float)t0;
                u1 = u1 + u0 * (float)((*(int *)((a4 + 0x24))) - t0);
                nlsndSystemControl((*(int *)((a4 + 0x14))), 0x10A0, (int)u1);
            }
        }
        if ((*(int *)((a4 + 0x18))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = 0x1300A0;
            t2 = 0x0;
            if ((*(int *)((a4 + 0x1C))) == 0) {
            } else {
                t1 = 0x10A0;
                t2 = (*(int *)((a4 + 0x1C)));
            }
            nlsndSystemControl(t0, t1, t2);
        }
    }
    t0 = *(int *)((0x8C40C288 + ((*(int *)((a4 + 0x14))) << 2)));
    if (t0 == 2) {
        *(unsigned int *)((0x8C40C288 + ((*(int *)((a4 + 0x14))) << 2))) = 0x0;
        return nlCloseEvent(a4);
    }
    t1 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t1 - 1);
    if ((int)(t1 - 1) < (int)0xFFFFFFFF) {
        *(unsigned int *)((0x8C40C288 + ((*(int *)((a4 + 0x14))) << 2))) = 0x0;
        if ((*(int *)((a4 + 0x1C))) == 0) {
            nlsndSystemControl((*(int *)((a4 + 0x14))), 0x10A0, (*(int *)0x8C38BA64));
        }
        return nlCloseEvent(a4);
    }
    return t0;
}

int FUN_8c05dc94(int a4, float f4, float f5, float f6)
{
    int stk[16];
    register int t0;
    register int t39;
    register float u5;
    register float u6;
    register float u7;
    register float u13;
    register int t15;
    register float u16;
    register int t19;
    register float u21;
    register float u23;
    register float u24;
    register float u2;
    register float u36;

    t0 = *(int *)((a4 + 0xB5C));
    t39 = 0xA24;
    if (((*(int *)((a4 + 0xA24))) != 0) && (u2 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)), !(u2 > 0.0f))) {
        u5 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.400000006f)) + 1.10000002f);
        u6 = ((*(float *)((a4 + 0xB00))) * u5);
        u7 = (-(-(u6 * 118.849998f)));
        if (!(0.0f > (-(u6 * 118.849998f)))) {
            u7 = (-(u6 * 118.849998f));
        }
        if (59.4249992f > u7) {
            *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)0x8C291F7C) - ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f));
            u13 = (*(float *)0x8C291F84);
            u13 = u13 + 118.849998f * (*(float *)((a4 + 0xB00)));
            *(float *)((((int)stk + 28) + 0x8)) = u13;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F7C); }
            u36 = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (-(u6 * 118.849998f))));
        } else {
            t15 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
            u16 = *(float *)0x8C291F7C;
            t19 = (u16 > 0.0f) - (0.0f > u16);
            u21 = (-u16);
            if (!(0.0f > u16)) {
                u21 = u16;
            }
            u23 = ((float)t19 * u21);
            u24 = (u23 * 0.400000006f);
            u24 = u24 + 21.9400005f * (float)t15;
            u36 = u24;
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u36;
        *(float *)((a4 + 0xA3C)) = (-(u6 * 118.849998f));
        t39 = 0xA3C;
    }
    return t39;
}

int FUN_8c0e1c0c(void)
{
    int stk[5];
    register int t5;
    register int t8;
    register int t21;

    if ((*(int *)0x8C20D15C) == 0) {
        rankSprTexFree();
        stageFreeAll();
        stageTexSetGarbagedAll();
        if ((*(int *)0x8C287ADC) == 2) {
            t5 = 0x0;
            for (;;) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)((0x8C40C314 + t5)) = *(struct mv2 *)((t5 + 0x8C421E78)); }
                t5 = (t5 + 0x8);
                if ((unsigned int)t5 >= (unsigned int)0x50) {
                    break;
                }
            }
        } else {
            t8 = 0x0;
            for (;;) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C40C364 + t8)) = *(struct mv3 *)((t8 + 0x8C421EC8)); }
                t8 = (t8 + 0xC);
                if ((unsigned int)t8 >= (unsigned int)0x78) {
                    break;
                }
            }
        }
        FUN_8c0eaf00(0x4D4D4D, 0x4D4D4D, 0x4D4D4D);
    }
    t21 = resSprTitleRead();
    if (t21 == 1) {
        titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
        BupRequestSave((*(int *)0x8C40C628), 0x8C126C24, 0x8C40C2F4, 0x128);
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        strmVoiceQueueReset();
        *(unsigned int *)0x8C407FD0 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        strmScoreReset();
        fadeStart(0x3C);
        *(unsigned int *)0x8C1D793C = 0x0;
        *(unsigned int *)0x8C1D7940 = 0x0;
        *(unsigned int *)0x8C38B95C = 0x0;
        *(unsigned int *)0x8C38B958 = 0x0;
        *(unsigned int *)0x8C1D1274 = 0x0;
        return nlInitEvent();
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return t21;
}

int FUN_8c08ab3c(Stk4 s)
{
    int stk[48];
    register int t0;
    register int t2;
    register int t5;
    register int t6;
    register int t3;
    register int t4;
    register float u7;
    register float u8;

    stk[36] = s.w[0];
    stk[37] = s.w[1];
    stk[38] = s.w[2];
    stk[39] = s.w[3];
    t0 = 0x8C10DBC0;
    t2 = (((int)stk + 4) + 0xC);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10DBC0 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
    t5 = (((int)stk + 4) + 0xC);
    t6 = (((int)stk + 4) + 0xC);
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)((((int)stk + 4) + 0xC) + 0x60)) {
            break;
        }
        u7 = (*(float *)((t6 + 0x0)));
        t4 = 0x4;
        u8 = (*(float *)(((0x98 + ((int)stk + 4)) + 0x0)));
        t5 = t4;
        t5 = (t5 + (0x98 + ((int)stk + 4)));
        u7 = (u7 * u8);
        *(float *)((t6 + 0x0)) = u7;
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t4 = 0x8;
        t5 = t4;
        t5 = (t5 + (0x98 + ((int)stk + 4)));
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t6 = (t6 + 0xC);
    }
    nlLineSetThickness(1.0f);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((0x8C + ((int)stk + 4)) + 0x0))), (*(float *)(((0x8C + ((int)stk + 4)) + 0x4))), (*(float *)(((0x8C + ((int)stk + 4)) + 0x8))));
    nlSingleLine((*(int *)(((int)stk + 4))), ((((int)stk + 4) + 0xC) + 0xC), 0x0);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0xC) + 0x24);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0x18), ((((int)stk + 4) + 0xC) + 0x24), 0x0);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0xC), (*(int *)(((int)stk + 8))), 0x0);
    nlSingleLine((*(int *)(((int)stk + 4))), ((((int)stk + 4) + 0xC) + 0x18), 0x0);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0xC) + 0x3C);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0x30), ((((int)stk + 4) + 0xC) + 0x3C), 0x0);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0x48), ((((int)stk + 4) + 0xC) + 0x54), 0x0);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0x30), ((((int)stk + 4) + 0xC) + 0x48), 0x0);
    nlSingleLine((*(int *)(((int)stk + 12))), ((((int)stk + 4) + 0xC) + 0x54), 0x0);
    nlSingleLine((*(int *)(((int)stk + 4))), ((((int)stk + 4) + 0xC) + 0x30), 0x0);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0xC), (*(int *)(((int)stk + 12))), 0x0);
    nlSingleLine(((((int)stk + 4) + 0xC) + 0x18), ((((int)stk + 4) + 0xC) + 0x48), 0x0);
    nlSingleLine((*(int *)(((int)stk + 8))), ((((int)stk + 4) + 0xC) + 0x54), 0x0);
    return (nlPopMatrix(0x1));
}

int FUN_8c036308(int a4)
{
    int stk[11];
    register float t24;
    register float u25;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((*(int *)0x8C2FBE0C) == a4) && ((t1 = *(int *)0x8C2FBE10, t1 == 0) && ((t2 = *(int *)0x8C421F70, t3 = *(int *)((0x8C29B898 + (t2 << 2))), t4 = *(int *)((t3 + 0x10)), (t4 & 5) != 0) || (t5 = *(int *)0x8C421F70, t6 = *(int *)((0x8C29B898 + (t5 << 2))), t7 = *(int *)((t6 + 0x10)), (t7 & 8) != 0)))) {
        circuitTaskSetA(a4, 0x1);
        circuitTaskTrim(a4);
        sndSeDecide();
    }
    sprSheetSet(0x8C10AAEC);
    sprSheetPut(0x0, (float)((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) + 0x32), (float)((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))) + 0x4), 0.00899999961f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))), (float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))), 0.0109999999f);
    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 8), 1.0f, 100.0f, 1.0f);
    t24 = nlSin(((*(int *)0x8C20D198) * 0x444));
    u25 = 0.5f;
    u25 = u25 + 0.5f * t24;
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))), (float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))), 0.00999999978f);
    return (cursorBoxPut(0x1, *(Stk3 *)((int)stk + 8), u25, 100.0f, 1.0f));
}

int FUN_8c08af1a(int a4, float f4)
{
    register float u4;

    nlLineSetThickness(1.0f);
    nlPushMatrix(0x0);
    u4 = f4;
    if (f4 > 2.14748365e+09f) {
        u4 = (f4 - 4.2949673e+09f);
    }
    nlSingleLine(a4, (a4 + 0xC), (int)u4);
    nlSingleLine((a4 + 0x18), (a4 + 0x24), (int)u4);
    nlSingleLine((a4 + 0xC), (a4 + 0x24), (int)u4);
    nlSingleLine(a4, (a4 + 0x18), (int)u4);
    nlSingleLine((a4 + 0x30), (a4 + 0x3C), (int)u4);
    nlSingleLine((a4 + 0x48), (a4 + 0x54), (int)u4);
    nlSingleLine((a4 + 0x30), (a4 + 0x48), (int)u4);
    nlSingleLine((a4 + 0x3C), (a4 + 0x54), (int)u4);
    nlSingleLine(a4, (a4 + 0x30), (int)u4);
    nlSingleLine((a4 + 0xC), (a4 + 0x3C), (int)u4);
    nlSingleLine((a4 + 0x18), (a4 + 0x48), (int)u4);
    nlSingleLine((a4 + 0x24), (a4 + 0x54), (int)u4);
    return nlPopMatrix(0x1);
}
