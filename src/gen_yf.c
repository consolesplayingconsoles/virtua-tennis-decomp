/* Straight-line functions with calls and guards (batch gen_yf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
int FUN_8c0eaf00(int, int, int);
int FUN_8c0f0860(int);
int charaTexFreeAll(void);
int circuitTaskSetA(int, int);
int circuitTaskTrim(int);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int cpuInRange(Stk3, Stk3, Stk3);
int cpuSegCrossXZ(int, Stk3, Stk3, Stk3, Stk3);
int cpuSglAimAddLv12(int, int);
int cpuSglAimAddRange(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimTable(int, int);
int cpuShotTargetSet(int, float, float);
int cursorBoxPut(int, Stk3, float, float, float);
int dbgMenuSetItem(int, int, int, int, int, int, int);
int dbgMenuSetTitle(int, int, int);
int endSprCharaTexFree(int);
int endSprTexFree(void);
int endingCharaTexFree(int);
int hudValueDraw(int, Stk3, float);
int lightOverrideAmbient(int, int);
float mathLerp(float, float, float);
int motFileLoadBegin(void);
int motFileLoadStep(void);
int motFileRequest(int);
int motionSet(int, int, int, int, int, int, float);
int ndbGetTargets(int, int, int);
int nlCloseEvent(int);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlRotateV(int, int);
int nlScale(float, float, float);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int playerSetup(int, int, int, int);
int resEndObjTexFree(void);
int resSprTitleRead(void);
int set_event(int, int);
int sndPack4Free(int);
int sndSeCancel(void);
int sndSeDecide(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int uniformTexRestore(int);
int vecLength(Stk3);
Stk3 vecMake(float, float, float);
int FUN_8c0d5cf0(void);
int FUN_8c04d2c4(int a4, int a5);
int FUN_8c07fb7e(int a4, int a5, Stk6 s);
float FUN_8c04d75e(int a4, int a5);
int FUN_8c07a396(int a4, int a5);
int FUN_8c04f120(int a4, int a5);
int FUN_8c047dbc(int a4, float f4, float f5);
int FUN_8c079678(int a4, int a5);
int FUN_8c07a220(int a4, int a5);
float FUN_8c05d970(int a4, float f4);
int FUN_8c08ac4c(Stk4 s);
int FUN_8c083310(int a4);
int FUN_8c082f60(int a4);
int FUN_8c08adba(Stk4 s, float f4);
int FUN_8c036164(int a4);
float FUN_8c04d600(int a4);
float FUN_8c05e0d2(int a4, float f4, float f5, float f6);
int FUN_8c084cbc(int a4);
int FUN_8c013978(int a4);
int FUN_8c06008c(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_8c0d5cf0(void)
{
    int stk[9];
    register int t1;
    register int t35;
    register int t37;
    register int t53;
    register int t54;
    register int t62;
    register int t69;
    register int t47;
    register int t42;

    charaTexFreeAll();
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x30))) != -1) {
            uniformTexRestore(t1);
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    if ((*(int *)0x8C20D15C) == 0) {
        nlObjPutFreeTextureOnce(0xCB400F8);
        resEndObjTexFree();
        endingCharaTexFree((*(int *)(((*(int *)0x8C402CB4) + 0xC58))));
        endSprCharaTexFree((*(int *)(((*(int *)0x8C402CB4) + 0xC58))));
        endSprTexFree();
        stageFreeAll();
        stageTexSetGarbagedAll();
        lightOverrideAmbient(0x0, 0x0);
        *(unsigned int *)0x8C40C1C4 = 0x0;
        motFileRequest(0x1);
        motFileRequest(0x2);
        motFileRequest(0x3);
        motFileRequest(0x4);
        motFileRequest(0x9);
        motFileLoadBegin();
        sndPack4Free(0x0);
        *(unsigned int *)0x8C407FD0 = 0x0;
        FUN_8c0eaf00(0x4D4D4D, 0x4D4D4D, 0x4D4D4D);
    }
    t35 = *(int *)0x8C40C1C4;
    if (t35 != 0) {
        if (t35 != 1) {
            *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
            t47 = t35;
        } else {
            t37 = resSprTitleRead();
            if (t37 == 1) {
                titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                strmVoiceQueueReset();
                *(unsigned int *)0x8C407FD0 = 0x0;
                strmScoreReset();
                *(unsigned int *)0x8C38B95C = 0x0;
                *(unsigned int *)0x8C38B958 = 0x0;
                *(unsigned int *)0x8C1D1274 = 0x0;
                *(unsigned int *)0x8C20D14C = 0x0;
                *(unsigned int *)0x8C20D150 = 0x2;
                *(unsigned int *)0x8C20D15C = 0x0;
                t42 = 0x8C20D150;
            } else {
                *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
                t42 = t37;
            }
            t47 = t42;
        }
        t69 = t47;
    } else {
        *(unsigned int *)(((int)stk + 4)) = (motFileLoadStep());
        t53 = sndPack4Free(0x1);
        t54 = *(int *)(((int)stk + 4));
        t62 = t54;
        if (t54 == -1) {
            if (t53 == 99) {
                *(unsigned int *)0x8C295DDC = ((*(int *)0x8C295DDC) & 0xFFFFFFDF);
                *(unsigned int *)0x8C40C1C4 = ((*(int *)0x8C40C1C4) + 0x1);
            }
            t62 = t53;
        }
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t69 = t62;
    }
    return t69;
}

int FUN_8c04d2c4(int a4, int a5)
{
    int stk[7];
    register int t0;
    register float t2;
    register float u10;
    register float u11;
    register float u14;
    register float u15;
    register int t17;
    register int t18;
    register int t20;
    register int t21;
    register int t26;
    register int t23;
    register int t30;
    register int t40;
    register int t41;
    register int t44;
    register int t45;
    register float u72;
    register float u73;
    register float u76;
    register float u77;
    register int t79;
    register int t80;
    register int t82;
    register int t83;
    register int t88;
    register int t85;
    register int t92;
    register int t102;
    register int t103;
    register int t106;
    register int t107;
    register int t126;
    register int t64;
    register int t5;
    register int t6;
    register int t60;
    register int t56;
    register int t38;
    register int t34;
    register int t53;
    register int t50;
    register int t67;
    register int t68;
    register int t122;
    register int t118;
    register int t100;
    register int t96;
    register int t115;
    register int t112;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
        t2 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
        if (10.0f > t2) {
            t64 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
        } else {
            if ((((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) && ((t5 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t5 >= (int)0x9) && (t6 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t6 <= (int)0xC))) {
                t60 = (ndbGetTargets(a4, a5, 0x9));
            } else {
                u10 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u11 = (-u10);
                if (!(0.0f > u10)) {
                    u11 = u10;
                }
                if (64.0f > u11) {
                    u14 = *(float *)((a4 + 0xB9C));
                    u15 = (-u14);
                    if (!(0.0f > u14)) {
                        u15 = u14;
                    }
                    if (!(16.460001f > u15)) {
                        t17 = nlRand();
                        t18 = ((~(((~t17) + 0x1) & 0x3)) + 0x1);
                        if ((int)t17 >= 0) {
                            t18 = (t17 & 0x3);
                        }
                        if (t18 != 0) {
                            t20 = nlRand();
                            t21 = ((~(((~t20) + 0x1) & 0x1)) + 0x1);
                            if ((int)t20 >= 0) {
                                t21 = (t20 & 0x1);
                            }
                            t26 = a5;
                            if (t21 != 0) {
                                t23 = ndbGetTargets(a4, a5, 0x4);
                                t26 = ((a5 + t23) + (ndbGetTargets(a4, (a5 + t23), 0x8)));
                            }
                            t30 = t26;
                            if (t26 != 0) {
                            } else {
                                t30 = (cpuSglAimTable(a4, t26));
                            }
                            t34 = t30;
                        } else {
                            t34 = (ndbGetTargets(a4, a5, 0x9));
                        }
                        t38 = t34;
                    } else {
                        t38 = (ndbGetTargets(a4, a5, 0x9));
                    }
                    t56 = t38;
                } else {
                    t40 = nlRand();
                    t41 = ((~(((~t40) + 0x1) & 0x1)) + 0x1);
                    if ((int)t40 >= 0) {
                        t41 = (t40 & 0x1);
                    }
                    if (t41 != 0) {
                        t53 = (cpuSglAimTable(a4, a5));
                    } else {
                        t44 = nlRand();
                        t45 = ((~(((~t44) + 0x1) & 0x1)) + 0x1);
                        if ((int)t44 >= 0) {
                            t45 = (t44 & 0x1);
                        }
                        if (t45 != 0) {
                            t50 = (ndbGetTargets(a4, a5, 0x9));
                        } else {
                            t50 = (a5 + (cpuSglAimAddLv12(a4, a5)));
                        }
                        t53 = t50;
                    }
                    t56 = t53;
                }
                t60 = t56;
            }
            t64 = t60;
        }
        t126 = t64;
    } else {
        if ((((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) && ((t67 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t67 >= (int)0x9) && (t68 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t68 <= (int)0xC))) {
            t122 = (ndbGetTargets(a4, a5, 0x9));
        } else {
            u72 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u73 = (-u72);
            if (!(0.0f > u72)) {
                u73 = u72;
            }
            if (64.0f > u73) {
                u76 = *(float *)((a4 + 0xB9C));
                u77 = (-u76);
                if (!(0.0f > u76)) {
                    u77 = u76;
                }
                if (!(16.460001f > u77)) {
                    t79 = nlRand();
                    t80 = ((~(((~t79) + 0x1) & 0x3)) + 0x1);
                    if ((int)t79 >= 0) {
                        t80 = (t79 & 0x3);
                    }
                    if (t80 != 0) {
                        t82 = nlRand();
                        t83 = ((~(((~t82) + 0x1) & 0x1)) + 0x1);
                        if ((int)t82 >= 0) {
                            t83 = (t82 & 0x1);
                        }
                        t88 = a5;
                        if (t83 != 0) {
                            t85 = ndbGetTargets(a4, a5, 0x4);
                            t88 = ((a5 + t85) + (ndbGetTargets(a4, (a5 + t85), 0x8)));
                        }
                        t92 = t88;
                        if (t88 != 0) {
                        } else {
                            t92 = (cpuSglAimTable(a4, t88));
                        }
                        t96 = t92;
                    } else {
                        t96 = (ndbGetTargets(a4, a5, 0x9));
                    }
                    t100 = t96;
                } else {
                    t100 = (ndbGetTargets(a4, a5, 0x9));
                }
                t118 = t100;
            } else {
                t102 = nlRand();
                t103 = ((~(((~t102) + 0x1) & 0x1)) + 0x1);
                if ((int)t102 >= 0) {
                    t103 = (t102 & 0x1);
                }
                if (t103 != 0) {
                    t115 = (cpuSglAimTable(a4, a5));
                } else {
                    t106 = nlRand();
                    t107 = ((~(((~t106) + 0x1) & 0x1)) + 0x1);
                    if ((int)t106 >= 0) {
                        t107 = (t106 & 0x1);
                    }
                    if (t107 != 0) {
                        t112 = (ndbGetTargets(a4, a5, 0x9));
                    } else {
                        t112 = (a5 + (cpuSglAimAddLv12(a4, a5)));
                    }
                    t115 = t112;
                }
                t118 = t115;
            }
            t122 = t118;
        }
        t126 = t122;
    }
    return t126;
}

int FUN_8c07fb7e(int a4, int a5, Stk6 s)
{
    int stk[52];
    register int t0;
    register int t23;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t12;
    register int t13;
    register int t14;
    register int t20;

    stk[38] = s.w[0];
    stk[39] = s.w[1];
    stk[40] = s.w[2];
    stk[41] = s.w[3];
    stk[42] = s.w[4];
    stk[43] = s.w[5];
    *(unsigned int *)(((int)stk + 88)) = a4;
    *(unsigned int *)(((int)stk + 92)) = a5;
    t0 = *(int *)(((int)stk + 88));
    t23 = 0x1;
    if (0x1 == 0) {
    } else {
        t1 = 0x1;
        t2 = t0;
        t3 = a5;
        for (;;) {
            t4 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
            if ((int)t1 >= 0) {
                t4 = (t1 & 0x7);
            }
            *(unsigned int *)(((int)stk + 96)) = t4;
            *(unsigned int *)(((int)stk + 100)) = (((t4 << 1) + t4) << 2);
            t6 = *(int *)(((int)stk + 88));
            *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((t2 + 0x0))) - (*(float *)((((((t4 << 1) + t4) << 2) + t6) + 0x0)))), 0.0f, ((*(float *)((t2 + 0x8))) - (*(float *)((((((t4 << 1) + t4) << 2) + t6) + 0x8)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t2); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
            cpuSegCrossXZ((((int)stk + 40) + 0x40), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x40)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t4 << 1) + t4) << 2) + t6)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t2); }
            t12 = cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if (t12 == 0) {
                t13 = *(int *)(((int)stk + 100));
                t14 = *(int *)(((int)stk + 92));
                *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((t3 + 0x0))) - (*(float *)(((t13 + t14) + 0x0)))), 0.0f, ((*(float *)((t3 + 0x8))) - (*(float *)(((t13 + t14) + 0x8)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t3); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
                cpuSegCrossXZ((((int)stk + 40) + 0x40), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x40)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t13 + t14)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t3); }
                t20 = cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
                if (t20 != 0) {
                    break;
                }
                t1 = (t1 + 0x1);
                t3 = (t3 + 0xC);
                t2 = (t2 + 0xC);
                if ((int)t1 < (int)0x9) continue;
                return 0x1;
            }
            break;
        }
        t23 = 0x0;
    }
    return t23;
}

float FUN_8c04d75e(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = (int)((int)(nlRand()) % (int)a5);
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
    *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
    u2 = (-1.0f);
    u2 = u2 + (1.0f + 1.0f) * (u1 / (*(float *)0x8C04D920));
    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C04D924)), u2);
    *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x1);
    }
    u0 = (float)(t3 + 0x8);
    if ((*(int *)0x8C291F74) == 5) {
        u0 = ((float)(t3 + 0x8) + (*(float *)0x8C04D930));
    }
    u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    u2 = *(float *)0x8C04D938;
    u3 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    u4 = u0;
    u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C04D934))) + 1.0f));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u3 - 40.0f);
    u0 = *(float *)0x8C04D940;
    if (u0 > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = u0;
    }
    if ((u4 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u4 - (*(float *)0x8C291F54));
    } else {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
    }
    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
    *(unsigned int *)((a4 + 0xA24)) = 0x1;
    return u2;
}

int FUN_8c07a396(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    *(float *)((a5 + 0x1C)) = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0xA);
    u0 = *(float *)((a4 + 0xB9C));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    t1 = 0x8C07A4B8;
    if (32.9099998f > u1) {
        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u0 > 0.0f) - (0.0f > u0))) {
            u1 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            t2 = 0xAE8;
            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u0 > 0.0f) - (0.0f > u0))) {
                u0 = *(float *)((a5 + 0x0));
                u1 = *(float *)((a4 + 0xB9C));
                t3 = 0xB9C;
                if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    t4 = 0xAE8;
                    if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) != ((u1 > 0.0f) - (0.0f > u1))) {
                        *(float *)((a5 + 0x1C)) = ((*(float *)((a5 + 0x1C))) - 5.0f);
                        t4 = 0x1C;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t3 = t2;
        } else {
            u0 = *(float *)((a5 + 0x0));
            u1 = *(float *)((a4 + 0xB9C));
            t2 = 0xB9C;
            if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t0 = 0xAE8;
                if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) != ((u1 > 0.0f) - (0.0f > u1))) {
                    *(float *)((a5 + 0x1C)) = ((*(float *)((a5 + 0x1C))) - 5.0f);
                    t0 = 0x1C;
                }
                t2 = t0;
            }
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_8c04f120(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = a5;
    if ((int)a5 < (int)0xA) {
        t1 = a5;
        for (;;) {
            u0 = (-1.0f);
            u0 = u0 + (1.0f + 1.0f) * (nlRandom());
            u1 = (*(float *)((a4 + 0xB9C)));
            u1 = u1 + 30.0f * u0;
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            u2 = u1;
            if (u0 > 31.1500015f) {
                u2 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 31.1500015f);
            }
            u0 = *(float *)0x8C291F84;
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((a4 + 0xAF0));
            u3 = (-u0);
            if (!(0.0f > u0)) {
                u3 = u0;
            }
            if (u1 > u3) {
                u0 = 0.5f;
                u1 = 0.300000012f;
                u3 = (nlRandom());
            } else {
                u0 = 0.200000003f;
                u1 = 0.600000024f;
                u3 = (nlRandom());
            }
            u4 = u1;
            u4 = u4 + u0 * u3;
            u0 = (u4 * 118.849998f);
            t2 = t1;
            t1 = (t1 + 0x1);
            cpuAimPointSet(t2, 0x1, u2, ((*(float *)((a4 + 0xB00))) * u0));
            if ((int)t1 >= (int)0xA) {
                break;
            }
        }
        t0 = t1;
    }
    u0 = (-1.0f);
    u0 = u0 + (1.0f + 1.0f) * (nlRandom());
    u1 = (*(float *)((a4 + 0xB9C)));
    u1 = u1 + 40.0f * u0;
    u0 = (-u1);
    if (!(0.0f > u1)) {
        u0 = u1;
    }
    u2 = u1;
    if (u0 > 31.1500015f) {
        u2 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 31.1500015f);
    }
    cpuAimPointSet(t0, 0x2, u2, ((*(float *)((a4 + 0xB00))) * 95.0800018f));
    return (t0 + 0x1);
}

int FUN_8c047dbc(int a4, float f4, float f5)
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
    t1 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t2 = 0xA24;
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = *(float *)((a4 + 0xB00));
                u1 = *(float *)0x8C291F7C;
                u2 = (-u1);
                if (!(0.0f > u1)) {
                    u2 = u1;
                }
                u1 = 0.0f;
                if (12.3450012f > u2) {
                } else {
                    u2 = *(float *)0x8C291F7C;
                    u3 = (-u2);
                    if (!(0.0f > u2)) {
                        u3 = u2;
                    }
                    if (28.8050003f > u3) {
                        u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u3 = ((float)((u2 > 0.0f) - (0.0f > u2)) * 26.7474995f);
                    } else {
                        u3 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                    }
                    u1 = u3;
                }
                u2 = u1;
                u1 = (-(u0 * 23.7700005f));
            } else {
                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u3 = *(float *)((a4 + 0xB00));
                u4 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
                u5 = (u3 * u4);
                u2 = (u0 * 0.400000006f);
                u1 = (-(u5 * 118.849998f));
            }
            u0 = (-u2);
            if (!(0.0f > u2)) {
                u0 = u2;
            }
            u3 = u2;
            if (u0 > 32.920002f) {
                u3 = ((float)((u2 > 0.0f) - (0.0f > u2)) * 32.920002f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u3;
            *(float *)((a4 + 0xA3C)) = u1;
            t2 = 0xA3C;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_8c079678(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u1 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
        u1 = *(float *)((a4 + 0xAE8));
        if (((u1 > 0.0f) - (0.0f > u1)) != ((u0 > 0.0f) - (0.0f > u0))) {
            t0 = a5;
            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        } else {
            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t0 = (a5 + 0x1);
            u1 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet(t0, 0x1, ((float)t1 * 54.8499985f), u1);
        t1 = (t0 + 0x1);
    } else {
        u0 = *(float *)((a4 + 0xAE8));
        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t1 = (a5 + 0x1);
    }
    return t1;
}

int FUN_8c07a220(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    *(float *)((a5 + 0x1C)) = (float)(((int)((int)(nlRand()) % (int)0x3)) + 0xA);
    u0 = *(float *)((a4 + 0xB9C));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    t1 = 0x8C07A308;
    if (!(32.9099998f > u1)) {
    } else {
        u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) != ((u0 > 0.0f) - (0.0f > u0))) {
            u1 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            t2 = 0xAE8;
            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u0 > 0.0f) - (0.0f > u0))) {
                u0 = *(float *)((a5 + 0x0));
                u1 = *(float *)((a4 + 0xB9C));
                t3 = 0xB9C;
                if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == ((u1 > 0.0f) - (0.0f > u1))) {
                    u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    t4 = 0xAE8;
                    if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) != ((u1 > 0.0f) - (0.0f > u1))) {
                        *(float *)((a5 + 0x1C)) = ((*(float *)((a5 + 0x1C))) - 5.0f);
                        t4 = 0x1C;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t3 = t2;
        } else {
            u0 = *(float *)((a5 + 0x0));
            u1 = *(float *)((a4 + 0xB9C));
            t2 = 0xB9C;
            if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == ((u1 > 0.0f) - (0.0f > u1))) {
                u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t0 = 0xAE8;
                if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) != ((u1 > 0.0f) - (0.0f > u1))) {
                    *(float *)((a5 + 0x1C)) = ((*(float *)((a5 + 0x1C))) - 5.0f);
                    t0 = 0x1C;
                }
                t2 = t0;
            }
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

float FUN_8c05d970(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            u0 = *(float *)(((((unsigned short)(unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13E))) * (unsigned short)0xD78) + 0x8C287D84) + 0xB9C));
            u1 = u0;
            u1 = u1 + 20.0f * (float)((u0 > 0.0f) - (0.0f > u0));
            u0 = (-u1);
            if (!(0.0f > u1)) {
                u0 = u1;
            }
            u2 = u1;
            if (u0 > 54.8499985f) {
                u2 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 54.8499985f);
            }
            t1 = (u2 > 0.0f) - (0.0f > u2);
            u0 = *(float *)0x8C05DB80;
            u1 = *(float *)((a4 + 0xAE8));
            u3 = ((-u1) + u2);
            if (!(0.0f > (u1 - u2))) {
                u3 = (u1 - u2);
            }
            u4 = ((-u1) + (u2 - ((float)t1 * u0)));
            if (!(0.0f > (u1 - (u2 - ((float)t1 * u0))))) {
                u4 = (u1 - (u2 - ((float)t1 * u0)));
            }
            u1 = (u2 - ((float)t1 * u0));
            if (u4 > u3) {
                u1 = u2;
            }
            t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
            u0 = *(float *)0x8C05DB84;
            u2 = nlRandom();
            u3 = *(float *)0x8C05DB8C;
            u4 = *(float *)((a4 + 0xB00));
            u5 = *(float *)0x8C05DB90;
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            u6 = (((-((float)t1 * u0)) - (u2 * u3)) + 1.0f);
            *(float *)((a4 + 0xA34)) = u1;
            u0 = (u4 * u6);
            *(float *)((a4 + 0xA3C)) = (-(u0 * u5));
            u0 = u5;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c08ac4c(Stk4 s)
{
    int stk[53];
    register int t0;
    register int t2;
    register int t5;
    register int t6;
    register int t42;
    register float u44;
    register float u45;
    register int t46;
    register int t47;
    register int t3;
    register int t4;
    register float u7;
    register float u8;

    stk[41] = s.w[0];
    stk[42] = s.w[1];
    stk[43] = s.w[2];
    stk[44] = s.w[3];
    t0 = 0x8C10DC20;
    t2 = (((int)stk + 24) + 0xC);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10DC20 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 24) + 0xC);
    t5 = (((int)stk + 24) + 0xC);
    t6 = (((int)stk + 24) + 0xC);
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)((((int)stk + 24) + 0xC) + 0x60)) {
            break;
        }
        u7 = (*(float *)((t6 + 0x0)));
        t4 = 0x4;
        u8 = (*(float *)(((0x98 + ((int)stk + 24)) + 0x0)));
        t5 = t4;
        t5 = (t5 + (0x98 + ((int)stk + 24)));
        u7 = (u7 * u8);
        *(float *)((t6 + 0x0)) = u7;
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t4 = 0x8;
        t5 = t4;
        t5 = (t5 + (0x98 + ((int)stk + 24)));
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t6 = (t6 + 0xC);
    }
    nlLineSetThickness(1.0f);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((0x8C + ((int)stk + 24)) + 0x0))), (*(float *)(((0x8C + ((int)stk + 24)) + 0x4))), (*(float *)(((0x8C + ((int)stk + 24)) + 0x8))));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 24) + 0xC) + 0xC);
    nlSingleLine((*(int *)(((int)stk + 24))), ((((int)stk + 24) + 0xC) + 0xC), 0x0);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 24) + 0xC) + 0x18);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x18), ((((int)stk + 24) + 0xC) + 0x24), 0x0);
    nlSingleLine((*(int *)(((int)stk + 28))), ((((int)stk + 24) + 0xC) + 0x24), 0x0);
    nlSingleLine((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 32))), 0x0);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x30), ((((int)stk + 24) + 0xC) + 0x3C), 0x0);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x48), ((((int)stk + 24) + 0xC) + 0x54), 0x0);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x30), ((((int)stk + 24) + 0xC) + 0x48), 0x0);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x3C), ((((int)stk + 24) + 0xC) + 0x54), 0x0);
    nlSingleLine((*(int *)(((int)stk + 24))), ((((int)stk + 24) + 0xC) + 0x30), 0x0);
    nlSingleLine((*(int *)(((int)stk + 28))), ((((int)stk + 24) + 0xC) + 0x3C), 0x0);
    nlSingleLine((*(int *)(((int)stk + 32))), ((((int)stk + 24) + 0xC) + 0x48), 0x0);
    nlSingleLine(((((int)stk + 24) + 0xC) + 0x24), ((((int)stk + 24) + 0xC) + 0x54), 0x0);
    nlPopMatrix(0x1);
    nlLocate(0xF, 0x1E);
    t42 = 0x0;
    for (;;) {
        *(float *)(((int)stk + 20)) = (*(float *)((((((t42 << 1) + t42) << 2) + (((int)stk + 24) + 0xC)) + 0x8)));
        u44 = *(float *)((((((t42 << 1) + t42) << 2) + (((int)stk + 24) + 0xC)) + 0x4));
        *(float *)(((int)stk + 16)) = u44;
        u45 = *(float *)((((((t42 << 1) + t42) << 2) + (((int)stk + 24) + 0xC)) + 0x0));
        *(float *)(((int)stk + 12)) = u45;
        t46 = t42;
        *(int *)((int)stk + 8) = t46;
        *(int *)((int)stk + 4) = 0x8C10DC80;
        t47 = nlPrintf(0x8C10DC80, t46, u45, u44);
        t42 = (t42 + 0x1);
        if ((int)t42 >= (int)0x8) {
            break;
        }
    }
    return t47;
}

int FUN_8c083310(int a4)
{
    int stk[9];
    register int t15;
    register float u17;
    register float u18;
    register float u57;
    register int t74;
    register int t88;
    register int t89;
    register int t90;

    *(unsigned int *)(((int)stk + 16)) = 0x8C291F24;
    if ((*(int *)0x8C20D14C) == 1) {
        return nlCloseEvent(a4);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C301B78); }
    vecLength(*(Stk3 *)(((int)stk + 4)));
    if (((*(int *)((0x54 + (*(int *)(((int)stk + 16)))))) & 8) == 0) {
        if ((*(int *)0x8C287C60) == 0) {
            *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) - 1);
        }
        if ((int)(*(int *)((a4 + 0x2C))) < (int)0x50) {
            *(unsigned int *)((a4 + 0x14)) = (int)(mathLerp((float)(*(int *)((a4 + 0x14))), (float)(*(int *)((a4 + 0x18))), (*(float *)0x8C083504)));
        } else {
            t15 = (int)((int)(nlRand()) % (int)0xA);
            u17 = *(float *)0x8C301B74;
            u18 = *(float *)0x8C083514;
            if ((int)(*(int *)((a4 + 0x18))) < (int)(int)((u17 - (float)t15) + u18)) {
                *(unsigned int *)((a4 + 0x18)) = (int)((u17 - (float)t15) + u18);
            }
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        if ((int)(*(int *)((a4 + 0x2C))) < (int)0xA) {
            *(float *)((a4 + 0x1C)) = ((*(float *)((a4 + 0x1C))) - 0.100000001f);
        }
        if ((*(int *)0x8C287C60) == 0) {
            if ((int)(*(int *)((a4 + 0x2C))) > (int)0x3C) {
                *(float *)((a4 + 0x1C)) = ((*(float *)((a4 + 0x1C))) + 0.0333333351f);
            }
            if (((*(int *)0x8C287C60) == 0) && (u57 = *(float *)((a4 + 0x1C)), u57 > 1.0f)) {
                *(float *)((a4 + 0x1C)) = 1.0f;
            }
        }
    }
    if (((*(int *)0x8C185410) == 0) && (t74 = *(int *)0x8C287B44, t74 != 7)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1816DC); }
        hudValueDraw((int)((float)(*(int *)((a4 + 0x14))) * (*(float *)0x8C083528)), *(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0x1C))));
    }
    if (((*(int *)((a4 + 0x2C))) != 0) && ((t88 = *(int *)0x8C181704, t88 == 0) && ((t89 = *(int *)0x8C287B44, t89 == 0) || (t90 = *(int *)((a4 + 0x18)), (int)t90 <= (int)0x64)))) {
        return 0x78;
    }
    *(unsigned int *)0x8C181704 = 0x0;
    *(unsigned int *)0x8C181614 = ((*(int *)0x8C181614) - 1);
    return nlCloseEvent(a4);
}

int FUN_8c082f60(int a4)
{
    int stk[27];
    register float u20;
    register float u34;
    register float u35;
    register int t44;
    register int t53;
    register int t46;
    register int t49;
    register int t47;

    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = (-1.0f);
    *(float *)(((int)stk + 80)) = ((-(*(float *)0x8C2879F8)) + (*(float *)((a4 + 0x14))));
    *(float *)(((int)stk + 84)) = ((-(*(float *)0x8C2879FC)) + (*(float *)((a4 + 0x18))));
    *(float *)(((int)stk + 88)) = ((-(*(float *)0x8C287A00)) + (*(float *)((a4 + 0x1C))));
    FUN_8c0f0860((((int)stk + 4) + 0x4C));
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateV((((int)stk + 4) + 0x40), (((int)stk + 4) + 0x4C));
    nlGetMatrix(((int)stk + 4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(((*(float *)((a4 + 0x14))) - ((*(float *)(((int)stk + 80))) * 0.5f)), ((*(float *)((a4 + 0x18))) - ((*(float *)(((int)stk + 84))) * 0.5f)), ((*(float *)((a4 + 0x1C))) - ((*(float *)(((int)stk + 88))) * 0.5f)));
    u20 = *(float *)((a4 + 0x24));
    nlScale(u20, (u20 * 0.699999988f), u20);
    nlMultiMatrix(((int)stk + 4));
    if ((*(int *)0x8C287C60) == 0) {
        *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) - 0.0299999993f);
        *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) + 0.0500000007f);
    }
    u34 = 0.53515625f;
    u35 = 0.359375f;
    if ((*(int *)0x8C1891E8) == 0) {
        u34 = 0.4375f;
        u35 = 0.26171875f;
    }
    nlObjPutSetFadeColorBase(0.765625f, u34, u35);
    nlObjPutTrnsl((*(int *)((((*(int *)((a4 + 0x2C))) << 2) + 0x8C1816CC))), (*(float *)((a4 + 0x20))));
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 1.0f);
    nlObjPutSetFadeColorOffset(1.0f, 1.0f, 1.0f);
    t44 = nlPopMatrix(0x1);
    t53 = t44;
    if ((*(int *)0x8C287C60) == 0) {
        t46 = *(int *)((a4 + 0x28));
        *(unsigned int *)((a4 + 0x28)) = (t46 - 1);
        t49 = t44;
        if ((t46 - 1) == 0) {
            t47 = nlCloseEvent(a4);
            *(unsigned int *)0x8C181610 = ((*(int *)0x8C181610) - 1);
            t49 = t47;
        }
        t53 = t49;
    }
    return t53;
}

int FUN_8c08adba(Stk4 s, float f4)
{
    int stk[51];
    register int t0;
    register int t2;
    register int t5;
    register int t6;
    register float u21;
    register float u26;
    register int t3;
    register int t4;
    register float u7;
    register float u8;

    stk[39] = s.w[0];
    stk[40] = s.w[1];
    stk[41] = s.w[2];
    stk[42] = s.w[3];
    *(float *)(((int)stk + 20)) = f4;
    t0 = 0x8C10DC9C;
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10DC9C + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x14);
    t5 = (((int)stk + 4) + 0x14);
    t6 = (((int)stk + 4) + 0x14);
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)((((int)stk + 4) + 0x14) + 0x60)) {
            break;
        }
        u7 = (*(float *)((t6 + 0x0)));
        t4 = 0x4;
        u8 = (*(float *)(((0xA4 + ((int)stk + 4)) + 0x0)));
        t5 = t4;
        t5 = (t5 + (0xA4 + ((int)stk + 4)));
        u7 = (u7 * u8);
        *(float *)((t6 + 0x0)) = u7;
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t4 = 0x8;
        t5 = t4;
        t5 = (t5 + (0xA4 + ((int)stk + 4)));
        u7 = (*(float *)((t6 + t4)));
        u8 = (*(float *)((t5 + 0x0)));
        u7 = (u7 * u8);
        *(float *)((t6 + t4)) = u7;
        t6 = (t6 + 0xC);
    }
    nlLineSetThickness(1.0f);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((0x98 + ((int)stk + 4)) + 0x0))), (*(float *)(((0x98 + ((int)stk + 4)) + 0x4))), (*(float *)(((0x98 + ((int)stk + 4)) + 0x8))));
    u21 = *(float *)(((int)stk + 20));
    u26 = u21;
    if (u21 > (*(float *)0x8C08AF6C)) {
        u26 = (u21 + (*(float *)0x8C08AF70));
    }
    nlSingleLine((*(int *)(((int)stk + 4))), ((((int)stk + 4) + 0x14) + 0xC), (int)u26);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0x18), ((((int)stk + 4) + 0x14) + 0x24), (int)u26);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0xC), ((((int)stk + 4) + 0x14) + 0x24), (int)u26);
    nlSingleLine((*(int *)(((int)stk + 4))), ((((int)stk + 4) + 0x14) + 0x18), (int)u26);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x14) + 0x3C);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x14) + 0x30);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0x30), ((((int)stk + 4) + 0x14) + 0x3C), (int)u26);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0x14) + 0x54);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0x48), ((((int)stk + 4) + 0x14) + 0x54), (int)u26);
    nlSingleLine((*(int *)(((int)stk + 16))), ((((int)stk + 4) + 0x14) + 0x48), (int)u26);
    nlSingleLine((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (int)u26);
    nlSingleLine((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 16))), (int)u26);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0xC), (*(int *)(((int)stk + 8))), (int)u26);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0x18), ((((int)stk + 4) + 0x14) + 0x48), (int)u26);
    nlSingleLine(((((int)stk + 4) + 0x14) + 0x24), (*(int *)(((int)stk + 12))), (int)u26);
    return (nlPopMatrix(0x1));
}

int FUN_8c036164(int a4)
{
    int stk[11];
    register float t77;
    register float u78;
    register int t1;
    register int t33;
    register int t34;
    register int t35;
    register int t45;
    register int t46;
    register int t47;

    if (((*(int *)0x8C2FBE0C) == a4) && (t1 = *(int *)0x8C2FBE10, t1 == 0)) {
        if ((((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) == 0) && (t33 = *(int *)0x8C421F70, t34 = *(int *)((0x8C29B898 + (t33 << 2))), t35 = *(int *)((t34 + 0x10)), (t35 & 8) == 0)) {
            if (((*(int *)0x8C2FBE10) == 0) && (t45 = *(int *)0x8C421F70, t46 = *(int *)((0x8C29B898 + (t45 << 2))), t47 = *(int *)((t46 + 0x10)), (t47 & 2) != 0)) {
                circuitTaskSetA(a4, 0x0);
                circuitTaskTrim(a4);
                sndSeCancel();
            }
        } else {
            circuitTaskSetA(a4, 0x1);
            circuitTaskTrim(a4);
            sndSeDecide();
        }
    }
    sprSheetSet(0x8C10AAEC);
    sprSheetPut(0x0, (float)((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) + 0x32), (float)((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))) + 0x4), 0.00899999961f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))), (float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))), 0.0109999999f);
    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 8), 1.0f, 100.0f, 1.0f);
    t77 = nlSin(((*(int *)0x8C20D198) * 0x444));
    u78 = 0.5f;
    u78 = u78 + 0.5f * t77;
    *(Stk3 *)(((int)stk + 8)) = vecMake((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))), (float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))), 0.00999999978f);
    return (cursorBoxPut(0x1, *(Stk3 *)((int)stk + 8), u78, 100.0f, 1.0f));
}

float FUN_8c04d600(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)0x8C2FCC6C);
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)0x8C2FCC74);
    *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)0x8C2FCC78);
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
    u2 = (-1.0f);
    u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / 41.1500015f), u2);
    *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)0x8C2FCC78);
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x1);
    }
    u0 = (float)(t3 + 0x5);
    if ((*(int *)0x8C291F74) == 5) {
        u0 = ((float)(t3 + 0x5) + (*(float *)0x8C04D7D0));
    }
    u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    t2 = *(int *)0x8C2FCC1C;
    u2 = *(float *)0x8C04D7D8;
    u3 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    u4 = u0;
    u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C04D7D4))) + 1.0f));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u3 - (float)(0x50 - (((t2 << 2) << 1) - t2)));
    u0 = *(float *)0x8C04D7E0;
    if (u0 > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = u0;
    }
    if ((u4 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u4 - (*(float *)0x8C291F54));
    } else {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
    }
    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x1;
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
    *(unsigned int *)((a4 + 0xA24)) = 0x1;
    return u2;
}

float FUN_8c05e0d2(int a4, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            u0 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2 = *(float *)((a4 + 0xAE8));
            u3 = ((*(float *)((a4 + 0xB00))) * u0);
            if ((((u2 - u1) > 0.0f) - (0.0f > (u2 - u1))) != 0) {
                u0 = *(float *)((a4 + 0xAE8));
                u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = (((u0 - u1) > 0.0f) - (0.0f > (u0 - u1)));
            }
            if ((int)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) < 0) {
                u0 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB9C));
                t1 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
                if (!((*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C))) > u0)) {
                    t1 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t2 = t1;
            } else {
                u0 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB9C));
                t1 = ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
                if (u0 > (*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C)))) {
                    t1 = (0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78));
                }
                t2 = t1;
            }
            u0 = (*(float *)((t2 + 0xB9C)));
            u0 = u0 + 35.0f * (float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u2 = u0;
            if (u1 > 43.8800011f) {
                u2 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 43.8800011f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u2;
            *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
            u0 = 35.0f;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c084cbc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x14))), ((*(float *)((a4 + 0x18))) + 0.0500000007f), (*(float *)((a4 + 0x1C))));
    nlMultiMatrix((a4 + 0x2C));
    nlScale(1.0f, 1.0f, 1.5f);
    t0 = *(int *)0x8C1891E8;
    if ((*(int *)0x8C1891E8) == 2) {
        u0 = *(float *)((a4 + 0x1C));
        u1 = *(float *)0x8C301B8C;
        if ((140.0f > (u0 - u1)) && ((u0 - u1) > -140.0f)) {
            nlObjPutTrnsl((*(int *)((((t0 << 2) + 0x8C181708) + 0x0))), ((*(float *)((a4 + 0x28))) * 0.400000006f));
        } else {
            nlObjPutTrnsl((*(int *)((((t0 << 2) + 0x8C181708) + 0x0))), (*(float *)((a4 + 0x28))));
        }
    } else {
        if ((*(int *)((((t0 << 2) + 0x8C181708) + 0x0))) != 0) {
            nlObjPutTrnsl((*(int *)((((t0 << 2) + 0x8C181708) + 0x0))), (*(float *)((a4 + 0x28))));
        }
    }
    t0 = *(int *)0x8C287C60;
    t1 = (nlPopMatrix(0x1));
    if (t0 == 0) {
        t0 = *(int *)((a4 + 0x24));
        *(unsigned int *)((a4 + 0x24)) = (t0 - 1);
        t2 = (t0 - 1);
        if ((int)(t0 - 1) < (int)0x96) {
            if ((*(int *)0x8C1891E8) != 2) {
                *(float *)((a4 + 0x28)) = ((*(float *)((a4 + 0x28))) - 0.00319999992f);
            } else {
                *(float *)((a4 + 0x28)) = ((*(float *)((a4 + 0x28))) - 0.00200000009f);
            }
            t2 = 0x28;
        }
        t1 = t2;
    }
    if ((*(int *)((a4 + 0x24))) == 0) {
        return nlCloseEvent(a4);
    }
    return t1;
}

int FUN_8c013978(int a4)
{
    int stk[40];
    register int t0;
    register int t3;

    t0 = set_event(0xD90, 0x8C013B28);
    *(unsigned int *)((t0 + 0x14)) = a4;
    playerSetup((t0 + 0x18), 0x0, 0x4, 0x0);
    t3 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 120) = t3;
    *(int *)((int)stk + 116) = 0x8C156D08;
    motionSet((t0 + 0x18), (*(int *)0x8C10144C), 0x1, (*(int *)0x8C101450), 0x8C156D08, t3, 1.0f);
    *(int *)((int)stk + 112) = (((int)stk + 116) + 0x8);
    *(Stk3 *)((((int)stk + 116) + 0x8)) = vecMake(0.0f, -50.0f, 0.0f);
    dbgMenuSetTitle(a4, 0x8C101464, 0xA);
    *(int *)((int)stk + 108) = 0x1;
    *(int *)((int)stk + 104) = 0x1;
    *(int *)((int)stk + 100) = 0xFFFFFFFF;
    dbgMenuSetItem(a4, 0x0, 0x8C101470, 0x0, 0xFFFFFFFF, 0x1, 0x1);
    *(int *)((int)stk + 96) = 0x0;
    *(int *)((int)stk + 92) = 0x1;
    *(int *)((int)stk + 88) = 0x0;
    dbgMenuSetItem(a4, 0x1, 0x8C101478, 0x0, 0x0, 0x1, 0x0);
    *(int *)((int)stk + 84) = 0x1;
    *(int *)((int)stk + 80) = 0x3E7;
    *(int *)((int)stk + 76) = 0x0;
    dbgMenuSetItem(a4, 0x2, 0x8C101480, 0x0, 0x0, 0x3E7, 0x1);
    *(int *)((int)stk + 72) = 0x1;
    *(int *)((int)stk + 68) = 0x270F;
    *(int *)((int)stk + 64) = 0xFFFFFC19;
    dbgMenuSetItem(a4, 0x3, 0x8C101488, (int)(*(float *)(((((int)stk + 116) + 0x8) + 0x0))), 0xFFFFFC19, 0x270F, 0x1);
    *(int *)((int)stk + 60) = 0x1;
    *(int *)((int)stk + 56) = 0x270F;
    *(int *)((int)stk + 52) = 0xFFFFFC19;
    dbgMenuSetItem(a4, 0x4, 0x8C101490, (int)(*(float *)(((((int)stk + 116) + 0x8) + 0x4))), 0xFFFFFC19, 0x270F, 0x1);
    *(int *)((int)stk + 48) = 0x1;
    *(int *)((int)stk + 44) = 0x270F;
    *(int *)((int)stk + 40) = 0xFFFFFC19;
    dbgMenuSetItem(a4, 0x5, 0x8C101498, (int)(*(float *)(((((int)stk + 116) + 0x8) + 0x8))), 0xFFFFFC19, 0x270F, 0x1);
    *(int *)((int)stk + 36) = 0x1;
    *(int *)((int)stk + 32) = 0xFF;
    *(int *)((int)stk + 28) = 0x0;
    dbgMenuSetItem(a4, 0x6, 0x8C1014A0, 0x0, 0x0, 0xFF, 0x1);
    *(int *)((int)stk + 24) = 0x1;
    *(int *)((int)stk + 20) = 0xFF;
    *(int *)((int)stk + 16) = 0x0;
    dbgMenuSetItem(a4, 0x7, 0x8C1014A8, 0x0, 0x0, 0xFF, 0x1);
    *(int *)((int)stk + 12) = 0x1;
    *(int *)((int)stk + 8) = 0xFF;
    *(int *)((int)stk + 4) = 0x0;
    dbgMenuSetItem(a4, 0x8, 0x8C1014B0, 0x0, 0x0, 0xFF, 0x1);
    *(int *)((int)stk + 120) = 0x1;
    *(int *)((int)stk + 116) = 0xFF;
    *(int *)((int)stk + 112) = 0x0;
    return (dbgMenuSetItem(a4, 0x9, 0x8C1014B8, 0x0, 0x0, 0xFF, 0x1));
}

int FUN_8c06008c(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t2 = 0xA24;
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            t3 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
            u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = ((float)(signed char)t3 * ((-u1) + 54.8499985f));
            u1 = (u0 * 0.600000024f);
            if ((((u0 * 0.600000024f) > 0.0f) - (0.0f > (u0 * 0.600000024f))) != (signed char)t3) {
                u1 = 0.0f;
            }
            u0 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u2 = ((*(float *)((a4 + 0xB00))) * u0);
            u0 = (-(u2 * 118.849998f));
            if ((*(int *)0x8C2FCC60) == 1) {
                u3 = (-(-(u2 * 118.849998f)));
                if (!(0.0f > (-(u2 * 118.849998f)))) {
                    u3 = (-(u2 * 118.849998f));
                }
                u4 = (-(u2 * 118.849998f));
                if (59.4249992f > u3) {
                    u4 = (-((*(float *)((a4 + 0xB00))) * 59.4249992f));
                }
                u0 = u4;
            }
            u2 = (-u1);
            if (!(0.0f > u1)) {
                u2 = u1;
            }
            u3 = u1;
            if (u2 > 38.3949966f) {
                u3 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 38.3949966f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u3;
            *(float *)((a4 + 0xA3C)) = u0;
            t2 = 0xA3C;
        }
        t1 = t2;
    }
    return t1;
}
