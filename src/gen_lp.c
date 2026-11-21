/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int advExec(void);
int camSetupView(void);
int cameraExec(int);
int colliObjResolve(void);
int dbgMenuExec(void);
int entryFirstPortFlag(void);
int entryIsVersus(void);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeReset(void);
int gameModeSet(int, int, int);
int gdFsExecServerG(void);
int hudMatchDraw(void);
int hudWordFlagDraw(void);
int lightUpdate(int);
int matchFrame(void);
int matchSceneExec(void);
int menuListExec(int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlFastInvertMatrix(void);
int nlMakeModelViewProjectMatrix_objput(void);
int nlObjPutMvSub(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRenderTextureBegin(int);
int nlRenderTextureEnd(void);
int nldispstripSub(int, int, int);
int nldispstripTexOfsSub(int, int);
int nldispstripTexSub(int, int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int, int, int, int);
int nlstripSetVertexContextTex(int, int);
int padDirRepeat(int, int);
int padPauseOnUnplug(int);
int padUnplugCheck(void);
int padVibStopAll(void);
int perfMark(void);
int perfPrint(void);
int screenFramePut(int, int, float);
int screenPlanePut(void);
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
int FUN_8c0123e8(float f4);
int FUN_8c0ee910(void);
int FUN_8c0f7170(int a4, int a5, int a6);
int FUN_8c0f71d0(int a4, int a5, int a6);
int FUN_8c0f70c0(int a4, int a5, int a6, int a7);
int FUN_8c0f7150(int a4, int a5, int a6, int a7);
int FUN_8c0f22d0(int a4);
int FUN_8c0f22f0(int a4);
int FUN_8c1dd6ac(int a4, int a5, int a6, int a7);

int FUN_8c0123e8(float f4)
{
    int stk[17];
    int t0;
    register int t22;
    register int t23;
    register int t24;
    register int t32;
    register int t39;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register float u104;
    register int t108;
    register int t313;
    register int t112;
    register int t113;
    register int t114;
    register int t115;
    register int t116;
    register int t118;
    register int t129;
    register int t163;
    register int t144;
    register int t145;
    register int t159;
    register int t170;
    register int t296;
    register int t176;
    register int t199;
    register int t208;
    register int t200;
    register int t202;
    register int t205;
    register int t213;
    register int t223;
    register int t228;
    register int t232;
    int t233;
    register int t234;
    register int t257;
    register int t262;
    register int t263;
    float u8;
    int t18;
    int t51;
    int t64;
    register int t117;
    register int t125;
    register int t126;
    register int t304;
    int t214;
    int t215;
    int t222;
    int t226;

    *(unsigned int *)0x8C38BA14 = 0x0;
    t0 = (((struct o0_int *)0x8C287B3C)->v);
    if ((0x80000 & t0) != 0) {
        fadeCaptureBegin();
        (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFF7FFFF);
        t108 = 0x0;
        u8 = 0.0f;
    } else {
        t108 = ((0x200000 & t0) | (0x400 & t0));
        u8 = ((((struct o0_float *)0x8C287C3C)->v));
    }
    (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFFFFBFF);
    if (t108 != 0) {
        nlRenderTextureBegin(0x0);
    }
    if ((((((struct o14_int *)0x8C287C3C)->v)) == 0x96) && (t18 = *(int *)0x8C287D5C, t18 != 1)) {
        if ((*(int *)0x8C287ADC) == 4) {
            t22 = entryIsVersus();
            if (t22 == 0) {
                t23 = entryFirstPortFlag();
                if (t23 == 0) {
                    t24 = entryIsVersus();
                    if (t24 == 0) {
                        stageLoadBegin(0x1);
                    } else {
                        stageLoadBeginLong();
                    }
                } else {
                    stageLoadBeginLong();
                }
            } else {
                t32 = entryIsVersus();
                if (t32 == 0) {
                    stageLoadBegin(0x1);
                } else {
                    stageLoadBeginLong();
                }
            }
        } else {
            t39 = entryIsVersus();
            if (t39 == 0) {
                stageLoadBegin(0x1);
            } else {
                stageLoadBeginLong();
            }
        }
    }
    if (((int)((((struct o14_int *)0x8C287C3C)->v)) > (int)0x1) && (t51 = *(int *)0x8C287D5C, t51 != 1)) {
        (((struct o14_uint *)0x8C287C3C)->v) = (((((struct o14_int *)0x8C287C3C)->v)) - 1);
        if ((*(int *)0x8C287ADC) == 4) {
            t58 = entryIsVersus();
            if (t58 == 0) {
                t59 = entryFirstPortFlag();
                if (t59 == 0) {
                    t60 = entryIsVersus();
                    if (t60 == 0) {
                        return stageLoadStep();
                    }
                    return stageLoadTexStep2();
                }
                return stageLoadTexStep2();
            }
            t61 = entryIsVersus();
            if (t61 == 0) {
                return stageLoadStep();
            }
            return stageLoadTexStep2();
        }
        t62 = entryIsVersus();
        if (t62 == 0) {
            return stageLoadStep();
        }
        return stageLoadTexStep2();
    }
    t63 = *(int *)0x8C287D5C;
    if ((t63 != 2) && ((t63 != 3) && (t64 = (((struct o14_int *)0x8C287C3C)->v), t64 == 1))) {
        (((struct o14_uint *)0x8C287C3C)->v) = 0x0;
        (((struct o8_uint *)0x8C287B3C)->v) = 0x7;
        (((struct oC_uint *)0x8C287B3C)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) | 0x800);
        (((struct o10_uint *)0x8C287B3C)->v) = 0xF0;
        return cameraExec(((((struct o8_int *)0x8C287B3C)->v)));
    }
    camSetupView();
    lightUpdate(0x0);
    perfMark();
    matchSceneExec();
    perfPrint();
    matchFrame();
    nlExecuteEvent();
    colliObjResolve();
    if ((*(int *)0x8C421F60) != 0) {
        advExec();
    }
    if (t108 != 0) {
        if (1.0f > u8) {
            screenFramePut(0x0, 0x0, u8);
        }
        if (t108 != 0) {
            nlRenderTextureEnd();
            screenPlanePut();
        }
    }
    fadeCaptureEnd(0x0);
    dbgMenuExec();
    nlExecuteEvent2();
    hudMatchDraw();
    t112 = (hudWordFlagDraw());
    if ((t108 == 0) && (u8 != 0.0f)) {
        (((struct oC_float *)0x8C287C3C)->v) = 1.0f;
        u104 = u8;
        if (!(0.959999979f > u8)) {
            u104 = 1.0f;
        }
        t112 = (screenFramePut(0x1, 0x0, u104));
    }
    *(int *)((int)stk + 64) = 0x8C287ACC;
    *(int *)((int)stk + 60) = t108;
    *(int *)((int)stk + 56) = 0x8C287C50;
    *(int *)((int)stk + 52) = 0x8C287ACC;
    *(int *)((int)stk + 48) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x8C287ACC;
    t313 = t112;
    if ((*(int *)0x8C181758) == 0) {
        t114 = (((struct o0_int *)0x8C287B3C)->v);
        if ((t114 & 0x8000) != 0) {
            t113 = 0x8C287B3C;
            t115 = 0x8000;
            t116 = 0x0;
            t118 = t117;
            for (;;) {
                if ((int)t116 >= (int)0x4) {
                    break;
                }
                t112 = (*(int *)(((int)stk + 0)));
                t115 = t116;
                t115 = (t115 << 2);
                t118 = t116;
                t114 = t112;
                t114 = (t114 + 0x14);
                t115 = (t115 + t114);
                t113 = (*(int *)((t115 + 0x0)));
                t118 = (t118 << 2);
                t118 = (t118 + (((int)stk + 0) + 0x14));
                if ((t113 == 0) && ((t125 = *(int *)(((int)stk + 0)), t112 = t125, t126 = *(int *)((t112 + 0x10)), t112 = t126, t112 != 2) || (t114 = 0x1, (int)t116 <= (int)t114))) {
                    t115 = 0xD78;
                    t112 = 0x8C2888E8;
                    t115 = (t116 * t115);
                    t114 = (*(int *)((t115 + t112)));
                    *(unsigned int *)((t118 + 0x0)) = t114;
                } else {
                    *(unsigned int *)((t118 + 0x0)) = 0xFFFFFFFF;
                }
                t116 = (t116 + 0x1);
            }
            t129 = padPauseOnUnplug((((int)stk + 0) + 0x14));
            *(unsigned int *)(((int)stk + 4)) = t129;
            if (t129 != (*(int *)0x8C285E44)) {
                *(unsigned int *)0x8C12CBE8 = 0x0;
            }
            *(unsigned int *)0x8C285E44 = (*(int *)(((int)stk + 4)));
        }
        if (((((struct o24_int *)0x8C287C3C)->v)) == 0) {
            t163 = 0x8C287B3C;
            if ((((((struct o0_int *)0x8C287B3C)->v)) & 0x8000) != 0) {
                t144 = 0x8C287B3C;
                t145 = 0x0;
                for (;;) {
                    if ((int)t145 >= (int)0x4) {
                        return t144;
                    }
                    t144 = (*(int *)(((int)stk + 0)));
                    if ((*(int *)((((t145 << 2) + (t144 + 0x14)) + 0x0))) == 0) {
                        t144 = 0xD78;
                        t144 = (t145 * t144);
                        t144 = (*(int *)((0x8C2888E8 + t144)));
                        t144 = (t144 << 2);
                        t144 = (*(int *)((0x8C29B898 + t144)));
                        t144 = (*(int *)((t144 + 0x10)));
                        if ((t144 & 8) != 0) {
                            break;
                        }
                        t145 = (t145 + 0x1);
                        continue;
                    }
                    t145 = (t145 + 0x1);
                }
                (((struct o24_uint *)0x8C287C3C)->v) = 0x1;
                *(unsigned int *)0x8C285A00 = t145;
                *(unsigned int *)0x8C12CBE8 = 0x0;
                (((struct o0_uint *)0x8C40C280)->v) = 0x0;
                (((struct o4_uint *)0x8C40C280)->v) = 0x0;
                sndSeDecide();
                t159 = 0x1;
                for (;;) {
                    if ((int)t159 >= (int)0x8) {
                        break;
                    }
                    nlsndSystemControl(t159, 0x1300A0, 0x0);
                    t159 = (t159 + 0x1);
                }
                strmControl(0x3, 0x4);
                t163 = (padVibStopAll());
            }
            t304 = t163;
        } else {
            t170 = *(int *)0x8C285A00;
            t296 = t170;
            if (t170 != -1) {
                if ((*(int *)0x8C287D5C) == 1) {
                    *(unsigned int *)(((int)stk + 0)) = 0x2;
                } else {
                    *(unsigned int *)(((int)stk + 0)) = 0x1;
                }
                if ((*(int *)(((int)stk + 4))) == 2) {
                    t176 = padUnplugCheck();
                    if (t176 == 2) {
                        *(unsigned int *)0x8C12CBE8 = 0x0;
                    } else {
                        *(unsigned int *)0x8C12CBE8 = 0xFFFFFFFF;
                    }
                }
                *(unsigned int *)(((int)stk + 12)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x10));
                *(unsigned int *)(((int)stk + 8)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x20));
                menuListExec((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), (*(int *)0x8C12CBE8), 0x0, 0x0);
                if ((*(int *)(((int)stk + 4))) == 2) {
                    t199 = padUnplugCheck();
                    t208 = t199;
                    if (t199 == 0) {
                        t200 = 0x0;
                        for (;;) {
                            t202 = *(int *)(((*(int *)((0x8C29B898 + (t200 << 2)))) + 0x10));
                            t205 = t202;
                            if ((t202 & 8) != 0) {
                                t200 = 0x4;
                                (((struct o24_uint *)0x8C287C3C)->v) = 0x0;
                                *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                                *(unsigned int *)0x8C40C698 = 0x0;
                                sndSeCancel();
                                t205 = (strmControl(0x4, 0x4));
                            }
                            t200 = (t200 + 0x1);
                            if ((int)t200 >= (int)0x4) {
                                break;
                            }
                        }
                        t208 = t205;
                    }
                    t296 = t208;
                } else {
                    t213 = *(int *)0x8C12CBE8;
                    if ((((int)t213 < (int)(*(int *)(((int)stk + 0)))) && (t214 = *(int *)(((int)stk + 8)), t214 != 0)) || (((int)t213 > 0) && (t215 = *(int *)(((int)stk + 12)), t215 != 0))) {
                        sndSeCursor();
                    }
                    t223 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) < (int)(*(int *)(((int)stk + 0)))) && (t222 = *(int *)(((int)stk + 8)), t222 != 0)) {
                        t223 = 0x1;
                    }
                    t228 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) > 0) && (t226 = *(int *)(((int)stk + 12)), t226 != 0)) {
                        t228 = 0x1;
                    }
                    *(unsigned int *)0x8C12CBE8 = ((*(int *)0x8C12CBE8) + (t223 - t228));
                    t232 = *(int *)((((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))) << 2) + 0x8C29B898));
                    *(unsigned int *)(((int)stk + 16)) = t232;
                    t233 = *(int *)((t232 + 0x10));
                    t296 = 0x5;
                    if (((0x8 & t233) != 0) || ((0x5 & t233) != 0)) {
                        (((struct o24_uint *)0x8C287C3C)->v) = 0x0;
                        *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                        t234 = *(int *)0x8C12CBE8;
                        if (t234 != 0) {
                            if (t234 != 1) {
                                t296 = t234;
                                if (t234 != 2) {
                                } else {
                                    sndSeCancel();
                                    (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFFF7FFF);
                                    strmVoiceQueueReset();
                                    strmControl(0x2, 0x4);
                                    strmControl(0x4, 0x4);
                                    gameModeSet(0x0, 0x3, 0x0);
                                    t296 = (fadeReset());
                                }
                            } else {
                                sndSeCancel();
                                *(unsigned int *)0x8C38BA60 = 0x7F;
                                strmControl(0x2, 0x4);
                                strmControl(0x4, 0x4);
                                strmVoiceQueueReset();
                                if ((*(int *)0x8C287D5C) == 1) {
                                    *(unsigned int *)0x8C188EA8 = 0x1;
                                    gameModeSet(0x1, 0x4, 0x0);
                                    (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFFF7FFF);
                                    strmBgmPlay(0x2);
                                } else {
                                    t257 = *(int *)0x8C287D5C;
                                    if (t257 != 0) {
                                        t262 = 0x0;
                                        t263 = 0x0;
                                        if ((t257 == 2) || (t257 == 3)) {
                                            t262 = ((((struct o0_int *)0x8C20D154)->v));
                                            t263 = ((((struct o4_int *)0x8C20D154)->v));
                                        }
                                        gameModeSet(t262, t263, 0x0);
                                    } else {
                                        gameModeSet(0x0, 0x3, 0x0);
                                    }
                                }
                                t296 = (fadeReset());
                            }
                        } else {
                            sndSeCancel();
                            t296 = (strmControl(0x4, 0x4));
                        }
                    }
                }
            }
            t304 = t296;
        }
        t313 = t304;
    }
    return t313;
}

int FUN_8c0ee910(void)
{
    register int t3;
    register int t4;

    nlPushMatrix(0x0);
    nlFastInvertMatrix();
    t3 = 0x0;
    t4 = 0x8C44FC08;
    for (;;) {
        if ((*(short *)((t4 + 0x0))) != 0) {
            nlCalcVector((t4 + 0x68), (0x80 + t4));
            nlCalcPoint((t4 + 0x5C), (t4 + 0x74));
        }
        t3 = (t3 + 0x1);
        t4 = (t4 + 0xB0);
        if ((int)t3 >= (int)0x10) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}

int FUN_8c0f7170(int a4, int a5, int a6)
{
    register int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB48, a6);
    if (t0 == 0) {
        return nldispstripTexSub(a4, a5);
    }
    return t0;
}

int FUN_8c0f71d0(int a4, int a5, int a6)
{
    register int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB70, a6);
    if (t0 == 0) {
        return nldispstripTexOfsSub(a4, a5);
    }
    return t0;
}

int FUN_8c0f70c0(int a4, int a5, int a6, int a7)
{
    nlstripSetVertexContext(0x8C1DCB0C, a5, a6, a7);
    return nldispstripSub(a4, a5, a6);
}

int FUN_8c0f7150(int a4, int a5, int a6, int a7)
{
    nlstripSetVertexContext(0x8C1DCB34, a5, a6, a7);
    return nldispstripSub(a4, a5, a6);
}

int FUN_8c0f22d0(int a4)
{
    nlMakeModelViewProjectMatrix_objput();
    return nlObjPutMvSub(a4, 0x0);
}

int FUN_8c0f22f0(int a4)
{
    nlMakeModelViewProjectMatrix_objput();
    return nlObjPutMvSub(a4, 0xFFFFFFFF);
}

int FUN_8c1dd6ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x20));
    if (t0 != 1) {
        return gdFsExecServerG();
    }
    return t0;
}
