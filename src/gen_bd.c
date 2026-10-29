/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
            t3 = 0x8C291F24;
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

float circuitNumDrawSign(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u9;
    int t15;
    int t16;
    int t19;
    int t20;
    int t22;
    float u23;
    int t24;
    int t29;
    int t25;
    int t26;
    int t33;
    int t36;
    int t42;
    float u70;
    int t61;
    int t21;
    int t52;
    int t53;
    int t47;
    int t48;
    int t56;
    int stk[19];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    u9 = f4;
    if (((*(int *)(((int)stk + 8))) & 0x1) != 0) {
        sprSheetSet(0x8C1097A8);
        u9 = (sprSheetPut(0x2000, f4, f5, f6, (*(float *)0x8C2FBE14)));
    }
    t15 = (*(int *)(((int)stk + 4)));
    t16 = 0x0;
    for (;;) {
        t15 = ((int)((int)t15 / (int)0xA));
        t16 = (t16 + 0x1);
        if ((int)t15 < (int)0x1) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 20)) = 0x8C287658;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 8))) & 0x8);
    t19 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 24)) = (t19 & 0x4);
    t20 = (t19 & 0x4);
    t22 = t16;
    u23 = u9;
    for (;;) {
        t24 = *(int *)(((int)stk + 4));
        t29 = t24;
        if ((int)0x1 < (int)t22) {
            t25 = t24;
            t26 = 0x1;
            for (;;) {
                t21 = 0x8C0F7A50;
                t20 = 0xA;
                t20 = ((int)((int)t25 / (int)t20));
                t26 = (t26 + 0x1);
                t25 = t20;
                if ((int)t26 >= (int)t22) {
                    break;
                }
            }
            t29 = t25;
        }
        t21 = 0x8C0F7BAC;
        t20 = 0xA;
        t20 = ((int)((int)t29 % (int)t20));
        *(unsigned int *)(((int)stk + 28)) = t20;
        t33 = t20;
        t20 = (*(int *)(((int)stk + 16)));
        t20 = (sprSheetSet((*(int *)(((t33 << 2) + t20)))));
        t36 = *(int *)0x8C2FBE18;
        if (t36 != 0) {
            *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x0)) = t36;
        }
        t42 = *(int *)(((int)stk + 12));
        u23 = (sprSheetPut(0x2000, u23, f5, f6, (*(float *)0x8C2FBE14)));
        if ((t42 != 0) && ((int)t22 > (int)0x1)) {
            t20 = 0x3;
            t20 = ((int)((int)t22 % (int)t20));
            if (t20 == 1) {
                t20 = (sprSheetSet(0x8C1097CC));
                u23 = (sprSheetPut(0x2000, u23, f5, f6, (*(float *)0x8C2FBE14)));
            } else {
                t47 = t20;
                t48 = 0x8C0F7BAC;
            }
            t52 = t47;
            t53 = t48;
        }
        t20 = t52;
        t22 = (t22 - 0x1);
        t21 = t53;
        if ((t22 == 0) && (t56 = *(int *)(((int)stk + 24)), t21 = t56, t21 == 0)) {
            break;
        }
    }
    u70 = u23;
    if (((*(int *)(((int)stk + 8))) & 2) != 0) {
        t61 = (int)((int)(*(int *)(((int)stk + 4))) % (int)0xA);
        *(unsigned int *)(((int)stk + 4)) = t61;
        sprSheetSet((*(int *)(((t61 << 2) + 0x8C159C30))));
        u70 = (sprSheetPut(0x2000, u23, f5, f6, (*(float *)0x8C2FBE14)));
    }
    *(float *)0x8C2FBE14 = 1.0f;
    *(unsigned int *)0x8C2FBE18 = 0x0;
    return u70;
}

int selJoinCheck(void)
{
    int t2;
    int t5;
    int t13;
    int t16;
    int t19;
    int t25;
    int t36;
    int t40;
    int t43;
    int t52;
    int t56;
    int t59;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    L_8C0A8B7C:;
    t2 = (*(int *)0x8C181754) == 0;
    R0 = ((selModeTrack()));
    R13 = (0x0);
    if (t2) goto L_8C0A8B96;
    goto L_8C0A8B92;
    L_8C0A8B92:;
    goto L_8C0A8CA8;
    L_8C0A8CA8:;
    return R0;
    L_8C0A8B96:;
    t5 = *(int *)0x8C20D14C;
    R0 = (t5);
    R4 = (0x8C20D14C);
    if ((t5 == 2)) goto L_8C0A8BA2;
    goto L_8C0A8B9E;
    L_8C0A8B9E:;
    *(unsigned int *)0x8C301970 = R13;
    goto L_8C0A8BA2;
    L_8C0A8BA2:;
    if (((*(int *)0x8C287C60) == 0)) goto L_8C0A8BAE;
    goto L_8C0A8BAA;
    L_8C0A8BAA:;
    goto L_8C0A8CA8;
    L_8C0A8BAE:;
    if (((*(int *)((R4 + 0x0))) != 2)) goto L_8C0A8BBC;
    goto L_8C0A8BB4;
    L_8C0A8BB4:;
    t13 = *(int *)0x8C20D150;
    R0 = (t13);
    if ((t13 != 1)) goto L_8C0A8CA8;
    goto L_8C0A8BBC;
    L_8C0A8BBC:;
    t16 = *(int *)0x8C301970;
    R0 = (t16);
    if ((t16 == 1)) goto L_8C0A8CA8;
    goto L_8C0A8BC4;
    L_8C0A8BC4:;
    t19 = *(int *)0x8C287D5C;
    R4 = (t19);
    if ((t19 == 0)) goto L_8C0A8BD8;
    goto L_8C0A8BCC;
    L_8C0A8BCC:;
    if ((R4 == 2)) goto L_8C0A8BD8;
    goto L_8C0A8BD2;
    L_8C0A8BD2:;
    R0 = (R4);
    if ((R4 != 1)) goto L_8C0A8CA8;
    goto L_8C0A8BD8;
    L_8C0A8BD8:;
    t25 = selJoinBlocked();
    R0 = (t25);
    if ((t25 != 0)) goto L_8C0A8CA8;
    goto L_8C0A8BE0;
    L_8C0A8BE0:;
    R14 = (R13);
    goto L_8C0A8CA2;
    L_8C0A8CA2:;
    if (((int)R14 < (int)0x4)) goto L_8C0A8C14;
    goto L_8C0A8CA8;
    L_8C0A8C14:;
    R0 = ((R14 << 2));
    R4 = ((R14 << 2));
    if ((((*(int *)(((*(int *)((0x8C29B898 + (R14 << 2)))) + 0x10))) & 0x8) == 0)) goto L_8C0A8CA0;
    goto L_8C0A8C26;
    L_8C0A8C26:;
    t36 = *(short *)0x8C343262;
    R0 = ((unsigned short)t36);
    R5 = (0x8C343258);
    if ((((unsigned short)t36 & (unsigned short)(*(short *)((((R14 << 1) + 0x8C185298) + 0x0)))) != 0)) goto L_8C0A8CA0;
    goto L_8C0A8C3C;
    L_8C0A8C3C:;
    t40 = *(int *)0x8C20D14C;
    R0 = (t40);
    if ((t40 != 2)) goto L_8C0A8CA0;
    goto L_8C0A8C44;
    L_8C0A8C44:;
    t43 = *(int *)0x8C287B3C;
    R0 = (t43);
    if (((t43 & 64) != 0)) goto L_8C0A8CA0;
    goto L_8C0A8C4C;
    L_8C0A8C4C:;
    *(unsigned int *)(((R4 + (0x58C + R5)) + 0x0)) = 0x1;
    R11 = (0x8C08849C);
    R12 = (0x8C287ACC);
    R4 = ((R4 + (0x58C + R5)));
    if (((*(int *)0x8C287ADC) != 2)) goto L_8C0A8C80;
    goto L_8C0A8C60;
    L_8C0A8C60:;
    t52 = (int)(entryCountJoined()) >= (int)0x2;
    if (t52) goto L_8C0A8C80;
    goto L_8C0A8C6C;
    L_8C0A8C6C:;
    entryPortJoin(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    matchNextSetup(0x0);
    strmVoiceQueueClear();
    goto L_8C0A8C90;
    L_8C0A8C90:;
    t56 = strmControl(0x2, 0x4);
    *(unsigned int *)0x8C40C280 = R13;
    *(unsigned int *)0x8C40C284 = R13;
    R0 = (t56);
    goto L_8C0A8CA0;
    L_8C0A8CA0:;
    R14 = ((R14 + 0x1));
    goto L_8C0A8CA2;
    L_8C0A8C80:;
    t59 = *(int *)((R12 + 0x10));
    R0 = (t59);
    if ((t59 != 4)) goto L_8C0A8CA0;
    goto L_8C0A8C86;
    L_8C0A8C86:;
    entryPortJoin(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
    matchNextSetup(0x0);
    goto L_8C0A8C90;
}

void seBallSpeed(int a4, int a5)
{
    float u5;
    int t8;
    int t6;
    int t11;
    float t13;
    int t17;
    int t14;
    int t20;
    int t21;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t22;
    int t23;

    if ((*(int *)0x8C38BA70) == 0) {
        return;
    }
    if ((*(int *)0x8C38BA74) == 0) {
        return;
    }
    u5 = *(float *)((a5 + 0xAF0));
    t8 = 0x1;
    if (u5 > 0.0f) {
    } else {
        t6 = 0x0;
        if (0.0f > u5) {
            t6 = 0xFFFFFFFF;
        }
        t8 = t6;
    }
    t11 = 0x0;
    if ((*(int *)0x8C402C0C) != t8) {
        t11 = 0x1;
    }
    if (a4 == 0) {
        t13 = nlScalor(0x8C291F48);
        t17 = 0x0;
        if (t13 > 7.0f) {
        } else {
            t14 = 0x2;
            if (t13 > 5.0f) {
                t14 = 0x1;
            }
            t17 = t14;
        }
        if (t11 == 0) {
            t20 = *(int *)((a5 + 0xC58));
            t22 = ((((t20 << 1) + t20) << 2) + 0x8C1D297C);
            t23 = t20;
        } else {
            t21 = *(int *)((a5 + 0xC58));
            t22 = ((((t21 << 1) + t21) << 2) + 0x8C1D2A54);
            t23 = t21;
        }
        t26 = t22;
        t27 = t23;
        t28 = t17;
        t29 = (t17 << 2);
        t30 = 0x0;
        t31 = (*(int *)(((t17 << 2) + t22)));
        for (;;) {
            if ((t31 == 0) && (t30 == 0)) {
                t28 = (t28 + 0x1);
                if ((int)t28 > (int)0x2) {
                    t30 = 0x1;
                    t28 = 0x2;
                }
                t29 = t28;
                t29 = (t29 << 2);
                if (t11 == 0) {
                    t26 = 0xC58;
                    t26 = (*(int *)((a5 + t26)));
                    t27 = t26;
                    t26 = (t26 << 1);
                    t26 = (t26 + t27);
                    t26 = (t26 << 2);
                    t26 = (t26 + 0x8C1D297C);
                } else {
                    t26 = 0xC58;
                    t26 = (*(int *)((a5 + t26)));
                    t27 = t26;
                    t26 = (t26 << 1);
                    t26 = (t26 + t27);
                    t26 = (t26 << 2);
                    t26 = (t26 + 0x8C1D2A54);
                }
                t31 = (*(int *)((t29 + t26)));
                continue;
            }
            break;
        }
        if (t31 != 0) {
            nlsndSeqRequest(t31);
    return;
        }
        return;
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

void buExecServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t3;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t32;
    int t36;
    int t37;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t51;
    int t53;
    int t28;
    int t25;
    int t31;
    int t34;
    int t47;
    int t49;
    int t55;
    int t58;
    int t60;

    if ((*(int *)0x8C20C21C) == 0) {
    } else {
        t3 = 0x8C1DFBFA;
        if ((*(int *)0x8C45AD0C) != 0) {
            t3 = 0x8C1DFBBE;
        }
        vmsfs_c_synch(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
        *(unsigned int *)0x8C45ACFC = (*(int *)0x8C45AD00);
        t7 = vmsfs_isready();
        *(unsigned int *)0x8C45AD00 = t7;
        *(unsigned int *)0x8C45AD00 = (t7 & (*(int *)0x8C45AD10));
        t9 = 0x0;
        t10 = 0x1;
        t11 = 0x0;
        for (;;) {
            t12 = buStat(t11);
            t13 = 0x0;
            if (t12 == 0) {
                t13 = t10;
            }
            t11 = (t11 + 0x1);
            t10 = (t10 << 1);
            t9 = (t9 | t13);
            if ((int)t11 >= (int)0x8) {
                break;
            }
        }
        t15 = *(int *)0x8C45AD00;
        t16 = *(int *)0x8C45ACFC;
        t18 = 0x8C45ACFC;
        t19 = ((t16 ^ t15) & t15);
        t20 = 0x0;
        t21 = 0x1;
        for (;;) {
            if ((((t16 ^ t15) & t15) & t21) != 0) {
                t18 = t21;
                if ((t18 & t9) != 0) {
                    t22 = ((int (*)(int))(t3))(t20);
                    t19 = (~t21);
                    *(unsigned int *)0x8C45AD04 = ((*(int *)0x8C45AD04) & t19);
                } else {
                    t18 = (*(int *)0x8C45AD04);
                    t18 = (t18 | t21);
                    *(unsigned int *)0x8C45AD04 = t18;
                    t25 = t18;
                }
                t28 = t25;
            } else {
                t28 = t18;
            }
            t18 = t28;
            if (((t21 & t9) != 0) && (t31 = *(int *)0x8C45AD04, t18 = t31, (t18 & t21) != 0)) {
                t32 = ((int (*)(int))(t3))(t20);
                t19 = (~t21);
                *(unsigned int *)0x8C45AD04 = ((*(int *)0x8C45AD04) & t19);
            } else {
                t34 = t18;
            }
            t18 = t34;
            t20 = (t20 + 0x1);
            t21 = (t21 << 1);
            if ((int)t20 >= (int)0x8) {
                break;
            }
        }
        t36 = *(int *)0x8C45AD00;
        t37 = *(int *)0x8C45ACFC;
        t39 = t18;
        t40 = ((t36 ^ t37) & t37);
        t41 = t37;
        t42 = 0x0;
        t43 = 0x1;
        for (;;) {
            t51 = t39;
            t53 = t41;
            if ((((t36 ^ t37) & t37) & t43) != 0) {
                if ((t43 & t9) != 0) {
                    t41 = t42;
                    vmsfs_c_execcallback(t41, 0x2, 0x0);
                    t40 = (*(int *)0x8C45AD08);
                    t40 = (t40 & (~t43));
                    *(unsigned int *)0x8C45AD08 = t40;
                } else {
                    t39 = (*(int *)0x8C45AD08);
                    t39 = (t39 | t43);
                    *(unsigned int *)0x8C45AD08 = t39;
                    t47 = t39;
                    t49 = t41;
                }
                t51 = t47;
                t53 = t49;
            }
            t39 = t51;
            t41 = t53;
            if (((t43 & t9) != 0) && (t55 = *(int *)0x8C45AD08, t40 = t55, (t40 & t43) != 0)) {
                t41 = t42;
                vmsfs_c_execcallback(t41, 0x2, 0x0);
                t40 = (~t43);
                *(unsigned int *)0x8C45AD08 = ((*(int *)0x8C45AD08) & t40);
            } else {
                t58 = t39;
                t60 = t41;
            }
            t39 = t58;
            t42 = (t42 + 0x1);
            t41 = t60;
            t43 = (t43 << 1);
            if ((int)t42 >= (int)0x8) {
                break;
            }
        }
    }
}



