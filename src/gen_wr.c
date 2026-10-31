/* Straight-line functions with calls and guards (batch gen_wr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int);
int advExec(void);
int advInit(int, int, int, int, int, int, int, int, int, int);
int camSetupView(void);
int cameraExec(int);
int colliObjResolve(int, int, int, int, int, int, int, int, int, int, int, int);
int dbgMenuExec(void);
int dbgMenuInit(void);
int eepromGetMatch(void);
int eepromGetVsMatch(void);
int eepromIsMatchMax(void);
int entryFirstPortFlag(void);
extern int entryIsVersus();
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeReset(void);
int fadeScreenStart(int, int, int, int, int, int);
int gameModeSet(int, int, int);
int hudMatchDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int hudWordFlagDraw(void);
int lightUpdate(int);
int matchFrame(void);
int matchSceneExec(void);
int matchStart(void);
int menuListExec(int, int, int, int, int, int, int, int, int, int, int, int);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlInitEvent(void);
int nlInitMatrix(int, int);
int nlMatrixMode(int);
int nlObjPutInit(void);
int nlPerspective(int, float, float, float);
int nlRenderTextureBegin(int, int, int, int, int, int, int, int, int);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlUnitMatrix(void);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int padPauseOnUnplug(int);
int padUnplugCheck(void);
int padVibStopAll(void);
int perfMark(int);
int perfPrint(void);
int screenFramePut(int, int, float);
int screenPlanePut(void);
int sndFadeFlagsClear(void);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
int stageLoadBegin(int);
int stageLoadBeginLong(void);
int stageLoadStep(void);
int stageLoadTexStep2(void);
int strmBgmPlay(int);
int strmControl(int, int);
int strmVoiceQueueReset(void);
int unlockTestW1(int);
int FUN_8c01219e(int a4, int a5);

int FUN_8c01219e(int a4, int a5)
{
    int stk[18];
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t8;
    register int t7;
    register int t24;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t77;
    register int t89;
    int t90;
    register int t116;
    register int t117;
    register int t118;
    register int t126;
    register int t133;
    register int t154;
    register int t155;
    register int t156;
    register int t157;
    register int t158;
    register int t159;
    register int t203;
    register float u200;
    register int t390;
    register int t207;
    register int t208;
    register int t209;
    register int t210;
    register int t211;
    register int t212;
    register int t213;
    register int t220;
    register int t251;
    register int t234;
    register int t235;
    register int t247;
    register int t258;
    register int t373;
    register int t263;
    register int t282;
    register int t291;
    register int t283;
    register int t285;
    register int t288;
    register int t295;
    register int t301;
    register int t305;
    register int t309;
    int t310;
    register int t358;
    register int t311;
    register int t319;
    register int t334;
    register int t339;
    register int t340;
    register int t16;
    register int t17;
    register int t21;
    register int t9;
    register int t13;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t78;
    register int t95;
    register int t98;
    register float u99;
    register int t108;
    register int t112;
    register int t144;
    register int t147;
    register int t160;
    register int t217;
    register int t381;
    register int t364;
    register int t353;
    register int t346;

    *(int *)((int)stk + 40) = a4;
    *(unsigned int *)0x8C287B3C = 0x0;
    t0 = ((int (*)(int))(entryIsVersus))(a4);
    if (t0 == 0) {
        *(unsigned int *)0x8C287ACC = 0x0;
    }
    *(unsigned int *)0x8C287AD4 = 0x0;
    *(unsigned int *)0x8C287AD0 = 0x0;
    *(unsigned int *)0x8C295DAC = 0x0;
    *(unsigned int *)0x8C295DB0 = 0x0;
    t2 = 0x8C287D04;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)0x8C287D4C) {
            break;
        }
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    }
    *(unsigned int *)0x8C20D154 = 0x0;
    *(unsigned int *)0x8C20D158 = 0x3;
    t3 = *(int *)0x8C287D5C;
    if (t3 == 0) {
        *(unsigned int *)0x8C287C70 = (unsigned char)(eepromIsMatchMax());
        t5 = eepromGetMatch();
        *(unsigned int *)0x8C287C6C = (unsigned char)t5;
        t16 = (unsigned char)t5;
    } else {
        t8 = t3;
        if (t3 == 1) {
            *(unsigned int *)0x8C287C70 = (unsigned char)(eepromIsMatchMax());
            t7 = eepromGetVsMatch();
            *(unsigned int *)0x8C287C6C = (unsigned char)t7;
            t8 = (unsigned char)t7;
        } else {
            t9 = 0x8C20D158;
            t13 = 0x8C287D4C;
        }
        t16 = t8;
        t17 = t9;
        t21 = t13;
    }
    t24 = *(int *)0x8C40C300;
    if ((t24 & 0x1) != 0) {
        *(unsigned int *)0x8C29BBBC = 0x1;
    } else {
        *(unsigned int *)0x8C29BBBC = 0x0;
    }
    t26 = 0x0;
    t27 = t21;
    for (;;) {
        if ((unsigned int)t26 >= (unsigned int)0x90) {
            break;
        }
        t27 = 0x8C287B88;
        t27 = (t27 + 0x4);
        t27 = (t27 + t26);
        t26 = (t26 + 0x24);
        *(unsigned int *)((t27 + 0x4)) = 0x0;
        *(unsigned int *)((t27 + 0x0)) = 0x0;
    }
    *(unsigned int *)0x8C287C54 = 0x0;
    t28 = t16;
    t29 = t17;
    t30 = t24;
    t31 = 0x8C287C54;
    t32 = t26;
    t33 = t27;
    t34 = 0x90;
    t35 = 0x8C287B88;
    t36 = 0x0;
    for (;;) {
        if ((int)t36 >= (int)0x12) {
            break;
        }
        t28 = (*(int *)0x8C287ADC);
        if (t28 != 4) {
            t30 = 0x8C0E87C8;
            t32 = t36;
            t28 = (unlockTestW1(t32));
            if (t28 != 0) {
                t28 = t36;
                t28 = (t28 << 2);
                *(unsigned int *)((0x8C287C74 + t28)) = 0x1;
            } else {
                t28 = t36;
                t28 = (t28 << 2);
                *(unsigned int *)((0x8C287C74 + t28)) = 0x0;
            }
        } else {
            t28 = t36;
            t28 = (t28 << 2);
            *(unsigned int *)((0x8C287C74 + t28)) = 0x1;
            t41 = t29;
            t42 = t30;
            t43 = t31;
            t44 = t32;
            t45 = t33;
            t46 = t34;
            t47 = t35;
        }
        t29 = t41;
        t36 = (t36 + 0x1);
        t30 = t42;
        t31 = t43;
        t32 = t44;
        t33 = t45;
        t34 = t46;
        t35 = t47;
    }
    *(unsigned int *)0x8C287CB8 = 0x0;
    *(unsigned int *)0x8C287CB4 = 0x0;
    if ((*(int *)0x8C421F60) != 0) {
        advInit(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 40), *(int *)((int)stk + 40 + 4), *(int *)((int)stk + 40 + 8), *(int *)((int)stk + 40 + 12), *(int *)((int)stk + 40 + 16), *(int *)((int)stk + 40 + 20));
    } else {
        *(unsigned int *)0x8C295DDC = 0x0;
        if ((*(int *)0x8C287D5C) == 0) {
            *(unsigned int *)0x8C1891F0 = (*(int *)((((*(int *)0x8C287ACC) << 2) + 0x8C1022B8)));
        }
        *(unsigned int *)0x8C287C50 = 0x96;
    }
    *(volatile int *)0x8C421F60;
    *(unsigned int *)0x8C38BA70 = 0x1;
    *(unsigned int *)0x8C38BA74 = 0x1;
    *(unsigned int *)0x8C38BA78 = 0x1;
    *(int *)((int)stk + 64) = a4;
    nlInitMatrix(0x8C285A04, 0x10);
    nlObjPutInit();
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333337f, 0.300000012f, 300.0f);
    nlMatrixMode(0x1);
    FUN_8c0eaf00(0x0, 0x0, 0x0);
    nlInitEvent();
    sndFadeFlagsClear();
    t77 = ((int (*)(void))(entryIsVersus))();
    if ((t77 != 0) && (t78 = *(int *)0x8C421F60, t78 == 0)) {
        fadeScreenStart(0x2, 0x1, 0xF, 0x0, *(int *)((int)stk + 64), *(int *)((int)stk + 64 + 4));
    }
    dbgMenuInit();
    matchStart();
    *(unsigned int *)0x8C287C54 = 0x0;
    *(float *)0x8C287A04 = 10.0f;
    *(unsigned int *)0x8C287C60 = 0x0;
    *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
    if ((*(int *)0x8C421F60) == 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x8000);
    }
    *(unsigned int *)0x8C20D150 = 0x1;
    *(int *)((int)stk + 68) = 0x0;
    t89 = t36;
    *(int *)((int)stk + 64) = t89;
    *(int *)((int)stk + 60) = 0x1;
    *(int *)((int)stk + 56) = 0x8C287ACC;
    *(int *)((int)stk + 52) = 0x8C287C74;
    *(unsigned int *)0x8C38BA14 = 0x0;
    t90 = *(int *)0x8C287B3C;
    if ((0x80000 & t90) != 0) {
        fadeCaptureBegin();
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFF7FFFF);
        t95 = 0x0;
        u99 = 0.0f;
    } else {
        t95 = ((0x200000 & t90) | (0x400 & t90));
        t98 = a4;
        u99 = (*(float *)0x8C287C3C);
    }
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFBFF);
    if (t95 != 0) {
        nlRenderTextureBegin(0x0, 0x0, 0x0, 0x0, 0x8C287C74, 0x8C287ACC, 0x1, t89, 0x0);
    } else {
        t108 = t98;
    }
    if (((*(int *)0x8C287C50) == 0x96) && (t112 = *(int *)0x8C287D5C, t112 != 1)) {
        if ((*(int *)0x8C287ADC) == 4) {
            t116 = ((int (*)(int))(entryIsVersus))(t108);
            if (t116 == 0) {
                t117 = entryFirstPortFlag();
                if (t117 == 0) {
                    t118 = ((int (*)(void))(entryIsVersus))();
                    if (t118 == 0) {
                        stageLoadBegin(0x1);
                    } else {
                        stageLoadBeginLong();
                    }
                } else {
                    stageLoadBeginLong();
                }
            } else {
                t126 = ((int (*)(void))(entryIsVersus))();
                if (t126 == 0) {
                    stageLoadBegin(0x1);
                } else {
                    stageLoadBeginLong();
                }
            }
        } else {
            t133 = ((int (*)(int))(entryIsVersus))(t108);
            if (t133 == 0) {
                stageLoadBegin(0x1);
            } else {
                stageLoadBeginLong();
            }
        }
    } else {
        t144 = t108;
    }
    if (((int)(*(int *)0x8C287C50) > (int)0x1) && (t147 = *(int *)0x8C287D5C, t147 != 1)) {
        *(unsigned int *)0x8C287C50 = ((*(int *)0x8C287C50) - 1);
        if ((*(int *)0x8C287ADC) == 4) {
            t154 = ((int (*)(int))(entryIsVersus))(t144);
            if (t154 == 0) {
                t155 = entryFirstPortFlag();
                if (t155 == 0) {
                    t156 = ((int (*)(void))(entryIsVersus))();
                    if (t156 == 0) {
                        return stageLoadStep();
                    }
                    return stageLoadTexStep2();
                }
                return stageLoadTexStep2();
            }
            t157 = ((int (*)(void))(entryIsVersus))();
            if (t157 == 0) {
                return stageLoadStep();
            }
            return stageLoadTexStep2();
        }
        t158 = ((int (*)(int))(entryIsVersus))(t144);
        if (t158 == 0) {
            return stageLoadStep();
        }
        return stageLoadTexStep2();
    }
    t159 = *(int *)0x8C287D5C;
    if ((t159 != 2) && ((t159 != 3) && (t160 = *(int *)0x8C287C50, t160 == 1))) {
        *(unsigned int *)0x8C287C50 = 0x0;
        *(unsigned int *)0x8C287B44 = 0x7;
        *(unsigned int *)0x8C287B48 = 0xFFFFFFFF;
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
        *(unsigned int *)0x8C287B4C = 0xF0;
        return cameraExec((*(int *)0x8C287B44));
    }
    camSetupView();
    lightUpdate(0x0);
    perfMark(0x8C101338);
    matchSceneExec();
    perfPrint();
    matchFrame();
    nlExecuteEvent();
    colliObjResolve(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28));
    if ((*(int *)0x8C421F60) != 0) {
        advExec();
    }
    if (t95 != 0) {
        if (1.0f > u99) {
            screenFramePut(0x0, 0x0, u99);
        }
        if (t95 != 0) {
            nlRenderTextureEnd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16));
            screenPlanePut();
        }
    }
    fadeCaptureEnd(0x0);
    dbgMenuExec();
    nlExecuteEvent2();
    hudMatchDraw(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28));
    t203 = (hudWordFlagDraw());
    if ((t95 == 0) && (u99 != 0.0f)) {
        *(float *)0x8C287C48 = 1.0f;
        u200 = u99;
        if (!(0.959999979f > u99)) {
            u200 = 1.0f;
        }
        t203 = (screenFramePut(0x1, 0x0, u200));
    }
    *(int *)((int)stk + 68) = 0x8C287ACC;
    *(int *)((int)stk + 64) = (t95);
    *(int *)((int)stk + 60) = 0x8C287C50;
    *(int *)((int)stk + 56) = 0x8C287ACC;
    *(int *)((int)stk + 52) = 0x0;
    *(int *)((int)stk + 48) = 0x12;
    *(unsigned int *)(((int)stk + 4)) = 0x8C287ACC;
    t390 = t203;
    if ((*(int *)0x8C181758) == 0) {
        t207 = *(int *)0x8C287B3C;
        if ((t207 & 0x8000) != 0) {
            t208 = t203;
            t209 = 0x8C287B3C;
            t210 = t207;
            t211 = 0x8000;
            t212 = 0x0;
            t213 = a5;
            for (;;) {
                if ((int)t212 >= (int)0x4) {
                    break;
                }
                t208 = 0x12;
                t211 = t212;
                t211 = (t211 << 2);
                t213 = t212;
                t210 = t208;
                t210 = (t210 + 0x14);
                t211 = (t211 + t210);
                t209 = (*(int *)((t211 + 0x0)));
                t213 = (t213 << 2);
                t213 = (t213 + (((int)stk + 4) + 0x14));
                if ((t209 == 0) && ((t208 = 0x12, t217 = *(int *)((t208 + 0x10)), t208 = t217, t208 != 2) || (t210 = 0x1, (int)t212 <= (int)t210))) {
                    t211 = 0xD78;
                    t208 = 0x8C2888E8;
                    t211 = (t212 * t211);
                    t210 = (*(int *)((t211 + t208)));
                    *(unsigned int *)((t213 + 0x0)) = t210;
                } else {
                    *(unsigned int *)((t213 + 0x0)) = 0xFFFFFFFF;
                }
                t212 = (t212 + 0x1);
            }
            t220 = padPauseOnUnplug((((int)stk + 4) + 0x14));
            *(unsigned int *)(((int)stk + 8)) = t220;
            if (t220 != (*(int *)0x8C285E44)) {
                *(unsigned int *)0x8C12CBE8 = 0x0;
            }
            *(unsigned int *)0x8C285E44 = 0x0;
        }
        if ((*(int *)0x8C287C60) == 0) {
            t251 = 0x8C287B3C;
            if (((*(int *)0x8C287B3C) & 0x8000) != 0) {
                t234 = 0x8C287B3C;
                t235 = 0x0;
                for (;;) {
                    if ((int)t235 >= (int)0x4) {
                        return t234;
                    }
                    t234 = 0x12;
                    if ((*(int *)((((t235 << 2) + (t234 + 0x14)) + 0x0))) == 0) {
                        t234 = 0xD78;
                        t234 = (t235 * t234);
                        t234 = (*(int *)((0x8C2888E8 + t234)));
                        t234 = (t234 << 2);
                        t234 = (*(int *)((0x8C29B898 + t234)));
                        t234 = (*(int *)((t234 + 0x10)));
                        if ((t234 & 8) != 0) {
                            break;
                        }
                        t235 = (t235 + 0x1);
                        continue;
                    }
                    t235 = (t235 + 0x1);
                }
                *(unsigned int *)0x8C287C60 = 0x1;
                *(unsigned int *)0x8C285A00 = t235;
                *(unsigned int *)0x8C12CBE8 = 0x0;
                *(unsigned int *)0x8C40C280 = 0x0;
                *(unsigned int *)0x8C40C284 = 0x0;
                sndSeDecide();
                t247 = 0x1;
                for (;;) {
                    if ((int)t247 >= (int)0x8) {
                        break;
                    }
                    nlsndSystemControl(t247, 0x1300A0, 0x0);
                    t247 = (t247 + 0x1);
                }
                strmControl(0x3, 0x4);
                t251 = (padVibStopAll());
            }
            t381 = t251;
        } else {
            t258 = *(int *)0x8C285A00;
            t373 = t258;
            if (t258 != -1) {
                if ((*(int *)0x8C287D5C) == 1) {
                    *(unsigned int *)(((int)stk + 4)) = 0x2;
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x1;
                }
                if (0x0 == 2) {
                    t263 = padUnplugCheck();
                    if (t263 == 2) {
                        *(unsigned int *)0x8C12CBE8 = 0x0;
                    } else {
                        *(unsigned int *)0x8C12CBE8 = 0xFFFFFFFF;
                    }
                }
                *(unsigned int *)(((int)stk + 16)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x10));
                *(unsigned int *)(((int)stk + 12)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x20));
                menuListExec((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), (*(int *)0x8C12CBE8), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if (0x0 == 2) {
                    t282 = padUnplugCheck();
                    t291 = t282;
                    if (t282 == 0) {
                        t283 = 0x0;
                        for (;;) {
                            t285 = *(int *)(((*(int *)((0x8C29B898 + (t283 << 2)))) + 0x10));
                            t288 = t285;
                            if ((t285 & 8) != 0) {
                                t283 = 0x4;
                                *(unsigned int *)0x8C287C60 = 0x0;
                                *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                                *(unsigned int *)0x8C40C698 = 0x0;
                                sndSeCancel();
                                t288 = (strmControl(0x4, 0x4));
                            }
                            t283 = (t283 + 0x1);
                            if ((int)t283 >= (int)0x4) {
                                break;
                            }
                        }
                        t291 = t288;
                    }
                    t364 = t291;
                } else {
                    t295 = *(int *)0x8C12CBE8;
                    if ((((int)t295 < (int)0x12) && (0x8C287ACC != 0)) || (((int)t295 > 0) && (0x8C287C50 != 0))) {
                        sndSeCursor();
                    }
                    t301 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) < (int)0x12) && (0x8C287ACC != 0)) {
                        t301 = 0x1;
                    }
                    t305 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) > 0) && (0x8C287C50 != 0)) {
                        t305 = 0x1;
                    }
                    *(unsigned int *)0x8C12CBE8 = ((*(int *)0x8C12CBE8) + (t301 - t305));
                    t309 = *(int *)((((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))) << 2) + 0x8C29B898));
                    *(unsigned int *)(((int)stk + 20)) = t309;
                    t310 = *(int *)((t309 + 0x10));
                    t358 = 0x5;
                    if (((0x8 & t310) != 0) || ((0x5 & t310) != 0)) {
                        *(unsigned int *)0x8C287C60 = 0x0;
                        *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                        t311 = *(int *)0x8C12CBE8;
                        if (t311 != 0) {
                            if (t311 != 1) {
                                t319 = t311;
                                if (t311 != 2) {
                                } else {
                                    sndSeCancel();
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                                    strmVoiceQueueReset();
                                    strmControl(0x2, 0x4);
                                    strmControl(0x4, 0x4);
                                    gameModeSet(0x0, 0x3, 0x0);
                                    t319 = (fadeReset());
                                }
                                t346 = t319;
                            } else {
                                sndSeCancel();
                                *(unsigned int *)0x8C38BA60 = 0x7F;
                                strmControl(0x2, 0x4);
                                strmControl(0x4, 0x4);
                                strmVoiceQueueReset();
                                if ((*(int *)0x8C287D5C) == 1) {
                                    *(unsigned int *)0x8C188EA8 = 0x1;
                                    gameModeSet(0x1, 0x4, 0x0);
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                                    strmBgmPlay(0x2);
                                } else {
                                    t334 = *(int *)0x8C287D5C;
                                    if (t334 != 0) {
                                        t339 = 0x0;
                                        t340 = 0x0;
                                        if ((t334 == 2) || (t334 == 3)) {
                                            t339 = (*(int *)0x8C20D154);
                                            t340 = (*(int *)0x8C20D158);
                                        }
                                        gameModeSet(t339, t340, 0x0);
                                    } else {
                                        gameModeSet(0x0, 0x3, 0x0);
                                    }
                                }
                                t346 = (fadeReset());
                            }
                            t353 = t346;
                        } else {
                            sndSeCancel();
                            t353 = (strmControl(0x4, 0x4));
                        }
                        t358 = t353;
                    }
                    t364 = t358;
                }
                t373 = t364;
            }
            t381 = t373;
        }
        t390 = t381;
    }
    return t390;
}
