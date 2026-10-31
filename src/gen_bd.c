/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];

typedef struct { int w[3]; } Stk3;
int BupCheckFile(void);
int BupSaveFile(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buStat(int);
int entryCountJoined(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int gdFsWaitCompleteReq(int);
int matchNextSetup(int);
int menuTextLetterPut(int, Stk3);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int);
int nlAddVector3op(int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int resCautionTexFree(int);
int selJoinBlocked(void);
int selModeTrack(void);
float sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffMorphReset(void);
int strmControl(int, int);
int strmVoiceQueueClear(void);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_c_execcallback(int, int, int);
int vmsfs_c_synch(int, int, int, int, float, float, float, float, float, float, float, float);
int vmsfs_isready(void);
int menuStatusDraw(int a4, int a5, int a6, int a7);
int emotVmuSave(int a4);
float sprListPutScaleY(int a4, int a5, int a6, float f4, float f5, float f6);
void ballBoyReset(int a4, int a5, int a6);
float circuitNumDrawSign(int a4, int a5, int a6, float f4, float f5, float f6);
int selJoinCheck(void);
void seBallSpeed(int a4, int a5);
int titleObjSpinPut(int a4);
int padPauseOnUnplug(int a4);
int BupDrawWarning(int a4, int a5, int a6, int a7);
void buExecServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int gdFsStopRd(int a4);


int emotVmuSave(int a4)
{
    int t0;
    int t1;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t26;
    int t27;
    int t28;
    int t29;
    int t31;
    int t44;
    int t35;
    int t36;
    int t37;
    int t38;
    int t40;
    int t68;
    int t4;
    int t62;
    int t14;
    int t56;
    int t23;
    int t50;
    int t32;
    int t41;

    if (a4 == 0) {
        t0 = 0x0;
        for (;;) {
            t1 = (t0 + 0x8C34B4F4);
            t3 = (t0 + 0x8C36FE04);
            for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)(((t0 + 0x8C34B4F4) + 624)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
            t0 = (t0 + 0x270);
            if ((unsigned int)t0 >= (unsigned int)0x2490) {
                break;
            }
        }
        t7 = BupSaveFile(0x0, 0x8C123270, 0x8C36FE04, 0x2490);
        *(unsigned int *)0x8C37B4D4 = t7;
        t68 = t7;
    } else {
        if (a4 == 1) {
            t8 = 0x8C372294;
            t9 = 0x8C34D984;
            for (;;) {
                t10 = t9;
                t9 = (t9 + 0x270);
                t11 = t10;
                t13 = t8;
                for (;;) { t14 = *(int *)t11; t11 = (t11 + 4); if ((unsigned int)((t10 + 624)) < (unsigned int)t11) break; *(unsigned int *)t13 = t14; t13 = (t13 + 4); }
                t8 = (t8 + 0x270);
                if ((unsigned int)t8 >= (unsigned int)0x8C374724) {
                    break;
                }
            }
            t62 = (BupSaveFile(0x0, 0x8C123280, 0x8C372294, 0x2490));
        } else {
            if (a4 == 2) {
                t17 = 0x8C374724;
                t18 = 0x8C34FE14;
                for (;;) {
                    t19 = t18;
                    t18 = (t18 + 0x270);
                    t20 = t19;
                    t22 = t17;
                    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((t19 + 624)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
                    t17 = (t17 + 0x270);
                    if ((unsigned int)t17 >= (unsigned int)0x8C376BB4) {
                        break;
                    }
                }
                t56 = (BupSaveFile(0x0, 0x8C123290, 0x8C374724, 0x2490));
            } else {
                if (a4 == 3) {
                    t26 = 0x8C376BB4;
                    t27 = 0x8C3522A4;
                    for (;;) {
                        t28 = t27;
                        t27 = (t27 + 0x270);
                        t29 = t28;
                        t31 = t26;
                        for (;;) { t32 = *(int *)t29; t29 = (t29 + 4); if ((unsigned int)((t28 + 624)) < (unsigned int)t29) break; *(unsigned int *)t31 = t32; t31 = (t31 + 4); }
                        t26 = (t26 + 0x270);
                        if ((unsigned int)t26 >= (unsigned int)0x8C379044) {
                            break;
                        }
                    }
                    t50 = (BupSaveFile(0x0, 0x8C1232A0, 0x8C376BB4, 0x2490));
                } else {
                    t44 = a4;
                    if (a4 == 4) {
                        t35 = 0x8C376BB4;
                        t36 = 0x8C354734;
                        for (;;) {
                            t37 = t36;
                            t36 = (t36 + 0x270);
                            t38 = t37;
                            t40 = t35;
                            for (;;) { t41 = *(int *)t38; t38 = (t38 + 4); if ((unsigned int)((t37 + 624)) < (unsigned int)t38) break; *(unsigned int *)t40 = t41; t40 = (t40 + 4); }
                            t35 = (t35 + 0x270);
                            if ((unsigned int)t35 >= (unsigned int)0x8C378414) {
                                break;
                            }
                        }
                        t44 = (BupSaveFile(0x1, 0x8C1232B0, 0x8C379044, 0x2490));
                    }
                    t50 = t44;
                }
                t56 = t50;
            }
            t62 = t56;
        }
        t68 = t62;
    }
    return t68;
}

float sprListPutScaleY(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int t2;
    int t4;
    int t6;
    int t9;
    int t10;
    int t11;
    float u16;
    float u18;
    float u20;
    float u50;
    int t3;
    int t5;
    float u7;
    int t34;
    int stk[45];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if ((*(int *)(((int)stk + 8))) != 0) {
        *(unsigned int *)(((int)stk + 12)) = (((unsigned char)(int)(f4 * 255.0f) << 16) << 8);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 8))) - 1);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x14) + 0x54);
        t2 = 0x8C0DE200;
        t4 = 0x0;
        t6 = a4;
        for (;;) {
            if ((int)t4 >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
            t5 = (0x0 + (((int)stk + 4) + 0x14));
            t9 = 0x0;
            t10 = (0x0 + (((int)stk + 4) + 0x14));
            t11 = 0x0;
            for (;;) {
                t2 = 0x4;
                *(float *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + 0x0)) = ((*(float *)((((t6 + 0xC) + t9) + 0x0))) + (*(float *)(((0xB0 + ((int)stk + 4)) + 0x0))));
                u16 = (*(float *)(((0xB0 + ((int)stk + 4)) + t2)));
                u16 = u16 + (*(float *)((((t6 + 0xC) + t9) + t2))) * f5;
                *(float *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + t2)) = u16;
                t2 = 0x8;
                *(float *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + t2)) = (*(float *)(((0xB0 + ((int)stk + 4)) + t2)));
                t2 = 0x4;
                u18 = *(float *)((t6 + t2));
                t2 = 0xC;
                *(float *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + t2)) = ((*(float *)((((t6 + 0xC) + t9) + t2))) / u18);
                t2 = 0x8;
                t3 = (unsigned char)(int)(f6 * 255.0f);
                u20 = *(float *)((t6 + t2));
                t2 = 0x10;
                t3 = (t3 << 8);
                *(float *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + t2)) = ((-((*(float *)((((t6 + 0xC) + t9) + t2))) / u20)) + 1.0f);
                *(unsigned int *)((((t11 * 0x1C) + (((int)stk + 4) + 0x14)) + 0x14)) = (((((unsigned char)(int)(f6 * 255.0f) << 16) | (*(int *)(((int)stk + 12)))) | t3) | (unsigned char)(int)(f6 * 255.0f));
                t11 = (t11 + 0x1);
                if ((*(int *)(((int)stk + 4))) != 0) {
                    *(unsigned int *)((t10 + 0x18)) = (*(int *)(((int)stk + 4)));
                } else {
                    *(unsigned int *)((t5 + 0x18)) = 0x0;
                }
                t5 = (t5 + 0x1C);
                t10 = (t10 + 0x1C);
                t9 = (t9 + 0x18);
                if ((int)t11 >= (int)0x4) {
                    break;
                }
            }
            t2 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 4) + 0x14), (*(int *)((t6 + 0x0)))));
            t6 = (t6 + 0x6C);
            if (t4 == (*(int *)(((int)stk + 20)))) {
                t3 = (*(int *)(((int)stk + 16)));
                t2 = 0x4;
                u7 = (*(float *)((t3 + t2)));
                t34 = t3;
            }
            t3 = t34;
            t4 = (t4 + 0x1);
        }
        u50 = u7;
    }
    return u50;
}

void ballBoyReset(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t13;
    int t14;
    int t17;
    int t7;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 > (int)0x9) {
        return;
    }
    t1 = 0x8C0C7504;
    t2 = 0x8C1891E8;
    t3 = t0;
    t4 = 0x9;
    t5 = 0x0;
    t6 = a6;
    for (;;) {
        if ((int)t5 >= (int)0x2) {
            break;
        }
        t1 = 0x5D0;
        t6 = (t5 * 0x67C);
        t6 = (t6 + 0x8C37EA84);
        t4 = (*(int *)((t6 + t1)));
        if ((t4 != 0) && (t1 = 0x5E0, t9 = *(int *)((t6 + t1)), t10 = (t4 == 0), t4 = t9, t4 == 0)) {
            t4 = 0x8C0F7DAC;
            t3 = (int)Ball;
            t2 = 0x8C38B784;
            t3 = (t3 + 0xC);
            t1 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
            t1 = 0x4;
            *(float *)((0x8C38B784 + t1)) = 0.349999994f;
            t11 = 0x8C0F7DAC;
        } else {
            t11 = t4;
        }
        t4 = t11;
        t7 = 0x5E4;
        t1 = 0x5D0;
        t6 = (t5 * 0x67C);
        t6 = (t6 + 0x8C37EA84);
        t7 = (t7 + t6);
        *(unsigned int *)((t6 + t1)) = 0x0;
        t3 = t7;
        t1 = (t1 + 0x4);
        t3 = (t3 + 0xC);
        *(unsigned int *)((t6 + t1)) = 0x0;
        t2 = t7;
        t1 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t3); }
        t1 = 0x5FC;
        *(unsigned int *)((t6 + 0x0)) = t5;
        t5 = (t5 + 0x1);
        *(float *)((t6 + t1)) = 0.0199999996f;
    }
    *(unsigned int *)0x8C37EA7C = 0x0;
    t13 = t5;
    t14 = 0x2;
    for (;;) {
        if (t14 == 0) {
            break;
        }
        t13 = 0x2;
        for (;;) {
            if (t13 == 0) {
                break;
            }
            t13 = (t13 - 1);
        }
        t14 = (t14 - 1);
    }
    t17 = *(int *)0x8C1891E8;
    if (t17 == 3) {
        *(unsigned int *)0x8C38B780 = 0x3C;
        return;
    }
    if (t17 == 2) {
        *(unsigned int *)0x8C38B780 = 0x4B;
        staffMorphReset();
    return;
    }
    if (t17 == 0) {
        *(unsigned int *)0x8C38B780 = 0x41;
    } else {
        if (t17 != 1) {
            if (t17 != 4) {
                if (t17 != 5) {
                    if (t17 != 6) {
                        if (t17 != 7) {
                            if (t17 != 8) {
                                if (t17 == 9) {
                                    *(unsigned int *)0x8C38B780 = 0x4B;
                                }
                            } else {
                                *(unsigned int *)0x8C38B780 = 0x4B;
                            }
                        } else {
                            *(unsigned int *)0x8C38B780 = 0x4B;
                        }
                    } else {
                        *(unsigned int *)0x8C38B780 = 0x4B;
                    }
                } else {
                    *(unsigned int *)0x8C38B780 = 0x4B;
                }
            } else {
                *(unsigned int *)0x8C38B780 = 0x4B;
            }
        } else {
            *(unsigned int *)0x8C38B780 = 0x4B;
        }
    }
}






int BupDrawWarning(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t42;
    int t45;
    int stk[26];

    u0 = *(float *)0x8C0E0C5C;
    u1 = *(float *)0x8C0E0C60;
    u2 = *(float *)0x8C0E0C64;
    u3 = *(float *)0x8C0E0C68;
    if (a4 == 0) {
        vecMake(a4, a5, a6, a7, ((int)stk + 20), u0, (*(float *)0x8C0E0C70), u3);
        vecMake(0x0, 0x0, 0x0, 0x0, (0xC + ((int)stk + 20)), u0, (*(float *)0x8C0E0C74), u3);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x18 + ((int)stk + 20)), (*(float *)0x8C0E0C78), (*(float *)0x8C0E0C70), u3);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x24 + ((int)stk + 20)), (*(float *)0x8C0E0C78), (*(float *)0x8C0E0C74), u3);
        msgWinFramePut(((int)stk + 20), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, (*(float *)0x8C0E0C80), u1);
        msgWinPut(0x5, 0x0);
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, (*(float *)0x8C0E0C88), u1);
        msgWinPut(0xB, 0x0);
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, u2, u1);
        t45 = (msgWinPut(0x0, 0x0));
    } else {
        t42 = a4;
        if (a4 == 1) {
            vecMake(a4, a5, a6, a7, ((int)stk + 20), u0, (*(float *)0x8C0E0C84), u3);
            vecMake(0x0, 0x0, 0x0, 0x0, (0xC + ((int)stk + 20)), u0, (*(float *)0x8C0E0C74), u3);
            vecMake(0x0, 0x0, 0x0, 0x0, (0x18 + ((int)stk + 20)), (*(float *)0x8C0E0C78), (*(float *)0x8C0E0C84), u3);
            vecMake(0x0, 0x0, 0x0, 0x0, (0x24 + ((int)stk + 20)), (*(float *)0x8C0E0C78), (*(float *)0x8C0E0C74), u3);
            msgWinFramePut(((int)stk + 20), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, (*(float *)0x8C0E0C70), u1);
            msgWinPut(0x4, 0x0);
            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, (*(float *)0x8C0E0C88), u1);
            msgWinPut(0xB, 0x0);
            vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), u2, u2, u1);
            t42 = (msgWinPut(0x0, 0x0));
        }
        t45 = t42;
    }
    return t45;
}


