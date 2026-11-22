/* Straight-line functions with calls and guards (batch gen_wq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int fadeReset(void);
int gameModeSet(int, int, int);
int menuListExec(int, int, int, int);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int padPauseOnUnplug(int);
int padUnplugCheck(void);
int padVibStopAll(void);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
int strmBgmPlay(int);
int strmControl(int, int);
int strmVoiceQueueReset(void);
int FUN_8c0126d6(int a4, int a5);

int FUN_8c0126d6(int a4, int a5)
{
    int stk[9];
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t19;
    register int t53;
    register int t34;
    register int t35;
    register int t49;
    register int t60;
    register int t186;
    register int t66;
    register int t89;
    register int t98;
    register int t90;
    register int t92;
    register int t95;
    register int t103;
    register int t113;
    register int t118;
    register int t122;
    int t123;
    register int t124;
    register int t147;
    register int t152;
    register int t153;
    register int t203;
    register int t3;
    register int t15;
    register int t16;
    register int t194;
    int t104;
    int t105;
    int t112;
    int t116;

    *(unsigned int *)(((int)stk + 0)) = 0x8C287ACC;
    if ((*(int *)0x8C181758) == 0) {
        t5 = *(int *)0x8C287B3C;
        if ((t5 & 0x8000) != 0) {
            t4 = 0x8C287B3C;
            t6 = 0x8000;
            t7 = 0x0;
            t8 = a5;
            for (;;) {
                if ((int)t7 >= (int)0x4) {
                    break;
                }
                t3 = (*(int *)(((int)stk + 0)));
                t6 = t7;
                t6 = (t6 << 2);
                t8 = t7;
                t5 = t3;
                t5 = (t5 + 0x14);
                t6 = (t6 + t5);
                t4 = (*(int *)((t6 + 0x0)));
                t8 = (t8 << 2);
                t8 = (t8 + (((int)stk + 0) + 0x14));
                if ((t4 == 0) && ((t15 = *(int *)(((int)stk + 0)), t3 = t15, t16 = *(int *)((t3 + 0x10)), t3 = t16, t3 != 2) || (t5 = 0x1, (int)t7 <= (int)t5))) {
                    t6 = 0xD78;
                    t3 = 0x8C2888E8;
                    t6 = (t7 * t6);
                    t5 = (*(int *)((t6 + t3)));
                    *(unsigned int *)((t8 + 0x0)) = t5;
                } else {
                    *(unsigned int *)((t8 + 0x0)) = 0xFFFFFFFF;
                }
                t7 = (t7 + 0x1);
            }
            t19 = padPauseOnUnplug((((int)stk + 0) + 0x14));
            *(unsigned int *)(((int)stk + 4)) = t19;
            if (t19 != (*(int *)0x8C285E44)) {
                *(unsigned int *)0x8C12CBE8 = 0x0;
            }
            *(unsigned int *)0x8C285E44 = (*(int *)(((int)stk + 4)));
        }
        if ((*(int *)0x8C287C60) == 0) {
            t53 = 0x8C287B3C;
            if (((*(int *)0x8C287B3C) & 0x8000) != 0) {
                t34 = 0x8C287B3C;
                t35 = 0x0;
                for (;;) {
                    if ((int)t35 >= (int)0x4) {
                        return t34;
                    }
                    t34 = (*(int *)(((int)stk + 0)));
                    if ((*(int *)((((t35 << 2) + (t34 + 0x14)) + 0x0))) == 0) {
                        t34 = 0xD78;
                        t34 = (t35 * t34);
                        t34 = (*(int *)((0x8C2888E8 + t34)));
                        t34 = (t34 << 2);
                        t34 = (*(int *)((0x8C29B898 + t34)));
                        t34 = (*(int *)((t34 + 0x10)));
                        if ((t34 & 8) != 0) {
                            break;
                        }
                        t35 = (t35 + 0x1);
                        continue;
                    }
                    t35 = (t35 + 0x1);
                }
                *(unsigned int *)0x8C287C60 = 0x1;
                *(unsigned int *)0x8C285A00 = t35;
                *(unsigned int *)0x8C12CBE8 = 0x0;
                (((struct o0_uint *)0x8C40C280)->v) = 0x0;
                (((struct o4_uint *)0x8C40C280)->v) = 0x0;
                sndSeDecide();
                t49 = 0x1;
                for (;;) {
                    if ((int)t49 >= (int)0x8) {
                        break;
                    }
                    nlsndSystemControl(t49, 0x1300A0, 0x0);
                    t49 = (t49 + 0x1);
                }
                strmControl(0x3, 0x4);
                t53 = (padVibStopAll());
            }
            t194 = t53;
        } else {
            t60 = *(int *)0x8C285A00;
            t186 = t60;
            if (t60 != -1) {
                if ((*(int *)0x8C287D5C) == 1) {
                    *(unsigned int *)(((int)stk + 0)) = 0x2;
                } else {
                    *(unsigned int *)(((int)stk + 0)) = 0x1;
                }
                if ((*(int *)(((int)stk + 4))) == 2) {
                    t66 = padUnplugCheck();
                    if (t66 == 2) {
                        *(unsigned int *)0x8C12CBE8 = 0x0;
                    } else {
                        *(unsigned int *)0x8C12CBE8 = 0xFFFFFFFF;
                    }
                }
                *(unsigned int *)(((int)stk + 12)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x10));
                *(unsigned int *)(((int)stk + 8)) = (padDirRepeat((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), 0x20));
                menuListExec((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))), (*(int *)0x8C12CBE8), 0x0, 0x0);
                if ((*(int *)(((int)stk + 4))) == 2) {
                    t89 = padUnplugCheck();
                    t98 = t89;
                    if (t89 == 0) {
                        t90 = 0x0;
                        for (;;) {
                            t92 = *(int *)(((*(int *)((0x8C29B898 + (t90 << 2)))) + 0x10));
                            t95 = t92;
                            if ((t92 & 8) != 0) {
                                t90 = 0x4;
                                *(unsigned int *)0x8C287C60 = 0x0;
                                *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                                *(unsigned int *)0x8C40C698 = 0x0;
                                sndSeCancel();
                                t95 = (strmControl(0x4, 0x4));
                            }
                            t90 = (t90 + 0x1);
                            if ((int)t90 >= (int)0x4) {
                                break;
                            }
                        }
                        t98 = t95;
                    }
                    t186 = t98;
                } else {
                    t103 = *(int *)0x8C12CBE8;
                    if ((((int)t103 < (int)(*(int *)(((int)stk + 0)))) && (t104 = *(int *)(((int)stk + 8)), t104 != 0)) || (((int)t103 > 0) && (t105 = *(int *)(((int)stk + 12)), t105 != 0))) {
                        sndSeCursor();
                    }
                    t113 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) < (int)(*(int *)(((int)stk + 0)))) && (t112 = *(int *)(((int)stk + 8)), t112 != 0)) {
                        t113 = 0x1;
                    }
                    t118 = 0x0;
                    if (((int)(*(int *)0x8C12CBE8) > 0) && (t116 = *(int *)(((int)stk + 12)), t116 != 0)) {
                        t118 = 0x1;
                    }
                    *(unsigned int *)0x8C12CBE8 = ((*(int *)0x8C12CBE8) + (t113 - t118));
                    t122 = *(int *)((((*(int *)((((*(int *)0x8C285A00) * 0xD78) + 0x8C2888E8))) << 2) + 0x8C29B898));
                    *(unsigned int *)(((int)stk + 16)) = t122;
                    t123 = *(int *)((t122 + 0x10));
                    t186 = 0x5;
                    if (((0x8 & t123) != 0) || ((0x5 & t123) != 0)) {
                        *(unsigned int *)0x8C287C60 = 0x0;
                        *(unsigned int *)0x8C285A00 = 0xFFFFFFFF;
                        t124 = *(int *)0x8C12CBE8;
                        if (t124 != 0) {
                            if (t124 != 1) {
                                t186 = t124;
                                if (t124 != 2) {
                                } else {
                                    sndSeCancel();
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                                    strmVoiceQueueReset();
                                    strmControl(0x2, 0x4);
                                    strmControl(0x4, 0x4);
                                    gameModeSet(0x0, 0x3, 0x0);
                                    t186 = (fadeReset());
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
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                                    strmBgmPlay(0x2);
                                } else {
                                    t147 = *(int *)0x8C287D5C;
                                    if (t147 != 0) {
                                        t152 = 0x0;
                                        t153 = 0x0;
                                        if ((t147 == 2) || (t147 == 3)) {
                                            t152 = ((((struct o0_int *)0x8C20D154)->v));
                                            t153 = ((((struct o4_int *)0x8C20D154)->v));
                                        }
                                        gameModeSet(t152, t153, 0x0);
                                    } else {
                                        gameModeSet(0x0, 0x3, 0x0);
                                    }
                                }
                                t186 = (fadeReset());
                            }
                        } else {
                            sndSeCancel();
                            t186 = (strmControl(0x4, 0x4));
                        }
                    }
                }
            }
            t194 = t186;
        }
        t203 = t194;
    }
    return t203;
}
