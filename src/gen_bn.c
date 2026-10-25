/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestSave(int, int, int, int);
int ballInit(int);
int circuitApplyResult(void);
int entryAssignSlotIds(void);
int entryCountJoined(void);
int entryFirstPortFlag(void);
int entryIsVersus(int, int, int);
int entryPortAtRound5Clean(int);
extern int entryPortLeave();
int fadeStart(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
int miniBallObjSpawn(void);
int miniBowlingDraw(void);
int miniBowlingScore(void);
int miniDrawModels(void);
int miniHudDraw(void);
int miniLaunchAimed(int);
int miniLaunchBall(void);
int miniMessageSpawn(int);
int miniPlacePlayers(void);
int miniResultStart(int, int, int, int, int, int, int, int, int);
int miniStart(void);
int miniWallTargetsHit(int);
float nlRandom(void);
int nlsndSeqRequest(int);
int playerStartReactions(int, int);
int serveNextPoint(void);
int set_event(int, int);
int strmBgmFadeOut(int, int);
int strmVoiceQueueReset(void);
int vecMake(int, int, int, int, int, float, float, float);
int miniExec(void);
float cpuShotAimStick(int a4);
void miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void dbgMenuExec(void);
int resultExec(void);

int miniExec(void)
{
    int t0;
    int t3;
    int t18;
    int t26;
    int t27;
    int t41;
    int t78;
    int t80;
    int t95;
    int t101;
    int t102;
    int t107;
    int t112;
    int t114;
    int t117;
    int t121;
    int t119;
    int t123;
    int t132;
    int t133;
    int t139;
    int t152;
    int t160;
    int t155;
    int t179;
    int t181;
    int t184;
    int t188;
    int t186;
    int t190;
    int t199;
    int t200;
    int t206;
    int t219;
    int t227;
    int t222;
    int t249;
    int t257;
    int t252;
    int t289;
    int t296;
    int t303;
    int t314;
    int t351;
    int t363;
    int t384;
    int t365;
    int t366;
    int t367;
    int t376;
    int t379;
    int t390;
    int t391;
    int t439;
    int t392;
    int t393;
    int t394;
    int t406;
    int t445;
    int t470;
    int t447;
    int t448;
    int t449;
    int t462;
    int t465;
    int t477;
    int t498;
    int t479;
    int t480;
    int t481;
    int t490;
    int t493;
    int t342;
    int t327;
    int t282;
    int t68;
    int t35;
    int t63;
    int t58;
    int t54;
    int t86;
    int t91;
    int t92;
    int t277;
    int t149;
    int t137;
    int t129;
    int t171;
    int t216;
    int t204;
    int t196;
    int t238;
    int t268;
    int t320;
    int t310;
    int t381;
    int t429;
    int t420;
    int t467;
    int t495;
    int stk[9];

    t0 = *(int *)0x8C287D5C;
    if (t0 != 3) {
        return t0;
    }
    miniHudDraw();
    t3 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 == 3) {
                    t18 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t18 + 0x1C)) = ((*(int *)((t18 + 0x1C))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                    if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x1C))) != 0) {
                    } else {
                        *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x4;
                        *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x1C)) = 0x78;
                        *(unsigned int *)0x8C287AF0 = 0x0;
                        *(unsigned int *)0x8C287AF4 = 0x1;
                        t26 = 0x3;
                        t27 = 0x4;
                        if ((0x20 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) != 0) {
                            t26 = 0x0;
                            t27 = 0x1;
                        }
                        playerStartReactions(t26, t27);
                        matchSetSlowMotion(0x9, 0.0399999991f);
                        *(unsigned int *)0x8C287B4C = 0x78;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                        *(unsigned int *)0x8C287AF0 = 0x0;
                        *(unsigned int *)0x8C287AF4 = 0x1;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                        *(unsigned int *)0x8C2888E4 = ((*(int *)0x8C2888E4) | 0x8000);
                        t35 = 0x8C2888E4;
                    }
                    t68 = t35;
                } else {
                    if (t3 == 4) {
                        t41 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t41 + 0x1C)) = ((*(int *)((t41 + 0x1C))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                        if ((*(int *)0x8C287B4C) == 0) {
                            *(unsigned int *)0x8C2FBE24 = 0x1;
                            *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
                            *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
                            *(unsigned int *)0x8C38BA60 = 0x7F;
                            strmVoiceQueueReset();
                            if (((*(int *)0x8C2FBC98) & 4) != 0) {
                                *(unsigned char *)0x8C2FBC7E = (*(signed char *)0x8C2FBE1C);
                                memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
                                BupRequestSave(0x0, 0x8C10C468, 0x8C40C2F4, 0x128);
                                *(unsigned int *)0x8C2FBE24 = 0x0;
                                fadeStart(0x1E);
                                miniStart();
                                *(unsigned int *)0x8C20D150 = 0x1;
                            } else {
                                t54 = 0x8C2FBC98;
                            }
                            t58 = t54;
                        }
                        t63 = t58;
                    }
                    t68 = t63;
                }
                t282 = t68;
            } else {
                if ((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) > 0) {
                    t78 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t78 + 0x3C)) = ((*(int *)((t78 + 0x3C))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                    t86 = t78;
                } else {
                    t80 = *(int *)0x8C2FBEF0;
                    if ((*(int *)((t80 + 0x3C))) == 0) {
                        *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                    }
                    t86 = t80;
                }
                if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) != 0) && (t91 = *(int *)0x8C2FBEF0, t92 = *(int *)((t91 + 0x3C)), t92 != 0)) {
                    t277 = t86;
                } else {
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x3;
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x1C)) = 0x3C;
                    t95 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t95 + 0x8)) = ((*(int *)((t95 + 0x8))) | 0x80);
                    *(unsigned int *)0x8C287B2C = 0x3E8;
                    strmBgmFadeOut(0x2, 0x0);
                    nlsndSeqRequest(0x1D02A9);
                    if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 2) {
                        t101 = *(int *)0x8C2FBEF0;
                        t102 = *(int *)((t101 + 0xC));
                        *(unsigned int *)((t101 + 0xC)) = (((t102 << 2) + t102) << 2);
                    }
                    t107 = *(int *)0x8C2FBEF0;
                    if ((int)(*(int *)((t107 + 0xC))) >= (int)(*(int *)((t107 + 0x14)))) {
                        if ((int)(*(int *)0x8C2FBE1C) < (int)0x20) {
                            t112 = *(int *)0x8C2FBE1C;
                            if (((((int)t112 >= 0) ? (0x1 << (t112 & 31)) : ((-(int)t112 & 31) ? ((int)0x1 >> (-(int)t112 & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C2FBC64)) == 0) {
                                t114 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t114 + 0x8)) = (0x20 | (*(int *)((t114 + 0x8))));
                                t117 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
                                if ((t117 != 0) && ((t117 != 6) && ((t117 != 7) && ((t117 != 4) && (t117 != 1))))) {
                                    if (t117 != 5) {
                                        if (t117 != 3) {
                                            t121 = 0x0;
                                            if (t117 != 2) {
                                            } else {
                                                t119 = *(int *)(((*(int *)0x8C2FBEF0) + 0x38));
                                                t121 = (((t119 << 2) + t119) << 1);
                                            }
                                            t129 = t121;
                                        } else {
                                            t123 = *(int *)0x8C2FBEF0;
                                            t129 = (((*(int *)((t123 + 0x38))) * ((*(int *)((t123 + 0x40))) + 0x1)) << 1);
                                        }
                                        t137 = t129;
                                    } else {
                                        t132 = *(int *)0x8C2FBFD4;
                                        t133 = *(int *)(((*(int *)0x8C2FBEF0) + 0x38));
                                        t137 = (((t133 * (t132 + 0x1)) << 2) + (t133 * (t132 + 0x1)));
                                    }
                                    t149 = t137;
                                } else {
                                    t139 = *(int *)0x8C2FBEF0;
                                    t149 = (((*(int *)((t139 + 0x38))) * ((*(int *)((t139 + 0x40))) + 0x1)) * (((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) / (int)0x3C)) + 0x1));
                                }
                                miniResultStart(t149, 0x1, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                                circuitApplyResult();
                            } else {
                                t152 = *(int *)0x8C2FBEF0;
                                t160 = 0x0;
                                if ((int)(*(int *)((t152 + 0xC))) >= (int)(*(int *)((t152 + 0x14)))) {
                                    t155 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t155 + 0x8)) = (0x20 | (*(int *)((t155 + 0x8))));
                                    t160 = 0x1;
                                }
                                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) {
                                    t171 = (int)((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x38))) * 0.5f);
                                } else {
                                    t171 = (*(int *)(((*(int *)0x8C2FBEF0) + 0x38)));
                                }
                                miniResultStart(t171, t160, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                            }
                        } else {
                            t179 = *(int *)0x8C2FBE1C;
                            if (((((int)(t179 - 32) >= 0) ? (0x1 << ((t179 - 32) & 31)) : ((-(int)(t179 - 32) & 31) ? ((int)0x1 >> (-(int)(t179 - 32) & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C2FBC68)) == 0) {
                                t181 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t181 + 0x8)) = (0x20 | (*(int *)((t181 + 0x8))));
                                t184 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
                                if ((t184 != 0) && ((t184 != 6) && ((t184 != 7) && ((t184 != 4) && (t184 != 1))))) {
                                    if (t184 != 5) {
                                        if (t184 != 3) {
                                            t188 = 0x0;
                                            if (t184 != 2) {
                                            } else {
                                                t186 = *(int *)(((*(int *)0x8C2FBEF0) + 0x38));
                                                t188 = (((t186 << 2) + t186) << 1);
                                            }
                                            t196 = t188;
                                        } else {
                                            t190 = *(int *)0x8C2FBEF0;
                                            t196 = (((*(int *)((t190 + 0x38))) * ((*(int *)((t190 + 0x40))) + 0x1)) << 1);
                                        }
                                        t204 = t196;
                                    } else {
                                        t199 = *(int *)0x8C2FBFD4;
                                        t200 = *(int *)(((*(int *)0x8C2FBEF0) + 0x38));
                                        t204 = (((t200 * (t199 + 0x1)) << 2) + (t200 * (t199 + 0x1)));
                                    }
                                    t216 = t204;
                                } else {
                                    t206 = *(int *)0x8C2FBEF0;
                                    t216 = (((*(int *)((t206 + 0x38))) * ((*(int *)((t206 + 0x40))) + 0x1)) * (((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) / (int)0x3C)) + 0x1));
                                }
                                miniResultStart(t216, 0x1, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                                circuitApplyResult();
                            } else {
                                t219 = *(int *)0x8C2FBEF0;
                                t227 = 0x0;
                                if ((int)(*(int *)((t219 + 0xC))) >= (int)(*(int *)((t219 + 0x14)))) {
                                    t222 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t222 + 0x8)) = (0x20 | (*(int *)((t222 + 0x8))));
                                    t227 = 0x1;
                                }
                                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) {
                                    t238 = (int)((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x38))) * 0.5f);
                                } else {
                                    t238 = (*(int *)(((*(int *)0x8C2FBEF0) + 0x38)));
                                }
                                miniResultStart(t238, t227, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                            }
                        }
                    } else {
                        t249 = *(int *)0x8C2FBEF0;
                        t257 = 0x0;
                        if ((int)(*(int *)((t249 + 0xC))) >= (int)(*(int *)((t249 + 0x14)))) {
                            t252 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t252 + 0x8)) = (0x20 | (*(int *)((t252 + 0x8))));
                            t257 = 0x1;
                        }
                        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) {
                            t268 = (int)((float)(*(int *)(((*(int *)0x8C2FBEF0) + 0x38))) * 0.5f);
                        } else {
                            t268 = (*(int *)(((*(int *)0x8C2FBEF0) + 0x38)));
                        }
                        miniResultStart(t268, t257, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
                    }
                }
                t282 = t277;
            }
            t327 = t282;
        } else {
            t289 = *(int *)0x8C2FBEF0;
            *(unsigned int *)((t289 + 0x18)) = ((*(int *)((t289 + 0x18))) + ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
            if ((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) > 0) {
                t296 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t296 + 0x3C)) = ((*(int *)((t296 + 0x3C))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                if (!((*(float *)0x8C23D204) > 1.0f)) {
                    t310 = t296;
                } else {
                    if (((int)((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x3C))) % (int)0x6)) != 5) {
                    } else {
                        t303 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t303 + 0x3C)) = ((*(int *)((t303 + 0x3C))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
                    }
                }
                t320 = t310;
            } else {
                t314 = *(int *)0x8C2FBEF0;
                if ((*(int *)((t314 + 0x3C))) != 0) {
                } else {
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                }
                t320 = t314;
            }
            t327 = t320;
        }
        t342 = t327;
    } else {
        if ((*(int *)0x8C287B44) == 7) {
        } else {
            *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x1;
            miniPlacePlayers();
        }
    }
    t351 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t351 != 1) {
        if (t351 != 0) {
            if (t351 != 5) {
                if (t351 != 3) {
                    if (t351 == 6) {
                        t363 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
                        t384 = t363;
                        if (t363 == 1) {
                            *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0xC)) = 0x0;
                            t365 = t363;
                            t366 = t342;
                            t367 = 0x0;
                            for (;;) {
                                if ((int)t367 >= (int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x14)))) {
                                    break;
                                }
                                t365 = t367;
                                t365 = (t365 << 2);
                                t367 = (t367 + 0x1);
                                if ((*(int *)((0x8C2FBF54 + t365))) != 0) {
                                    t366 = (*(int *)0x8C2FBEF0);
                                    *(unsigned int *)((t366 + 0xC)) = ((*(int *)((t366 + 0xC))) + 0x1);
                                }
                            }
                            t376 = *(int *)0x8C2FBEF0;
                            if ((*(int *)((t376 + 0xC))) == (*(int *)((t376 + 0x14)))) {
                                t379 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t379 + 0x10)) = 0x0;
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                                t381 = t379;
                            } else {
                                t381 = t365;
                            }
                            t384 = t381;
                        }
                        return t384;
                    }
                    if (t351 == 2) {
                        return miniBowlingDraw();
                    }
                    if (t351 == 7) {
                        t390 = *(int *)0x8C2FBEF0;
                        t391 = *(int *)((t390 + 0x20));
                        t439 = 0x8C2FBF54;
                        if (t391 == 1) {
                            *(unsigned int *)((t390 + 0xC)) = 0x0;
                            t392 = t391;
                            t393 = t342;
                            t394 = 0x0;
                            for (;;) {
                                if ((int)t394 >= (int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x14)))) {
                                    break;
                                }
                                t392 = t394;
                                t392 = (t392 << 2);
                                t394 = (t394 + 0x1);
                                if ((*(int *)((0x8C2FBF54 + t392))) != 0) {
                                    t393 = (*(int *)0x8C2FBEF0);
                                    *(unsigned int *)((t393 + 0xC)) = ((*(int *)((t393 + 0xC))) + 0x1);
                                }
                            }
                            t406 = *(int *)0x8C2FBEF0;
                            if ((*(int *)((t406 + 0xC))) == (*(int *)((t406 + 0x14)))) {
                                *(unsigned int *)((t406 + 0x10)) = 0x0;
                                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                            }
                            if ((*(int *)0x8C287C60) != 0) {
                                *(unsigned int *)0x8C2FC0D0 = 0x0;
                                t429 = t406;
                            } else {
                                if ((*(int *)0x8C2FC0D0) == 0) {
                                    nlsndSeqRequest(0x1C02A9);
                                    *(unsigned int *)0x8C2FC0D0 = 0x1;
                                } else {
                                    t420 = t406;
                                }
                                t429 = t420;
                            }
                            t439 = t429;
                        }
                        return miniLaunchAimed(t439);
                    }
                    return t351;
                }
                return miniDrawModels();
            }
            t445 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
            t470 = t445;
            if (t445 != 1) {
            } else {
                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0xC)) = 0x0;
                t447 = t445;
                t448 = t342;
                t449 = 0x0;
                for (;;) {
                    if ((int)t449 >= (int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x14)))) {
                        break;
                    }
                    t447 = t449;
                    t447 = (t447 << 2);
                    t449 = (t449 + 0x1);
                    if ((*(int *)((0x8C2FBF54 + t447))) != 0) {
                        t448 = (*(int *)0x8C2FBEF0);
                        *(unsigned int *)((t448 + 0xC)) = ((*(int *)((t448 + 0xC))) + 0x1);
                    }
                }
                t462 = *(int *)0x8C2FBEF0;
                if ((*(int *)((t462 + 0xC))) == (*(int *)((t462 + 0x14)))) {
                    t465 = *(int *)0x8C2FBEF0;
                    *(unsigned int *)((t465 + 0x3C)) = 0x0;
                    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                    t467 = t465;
                } else {
                    t467 = t447;
                }
                t470 = t467;
            }
            return t470;
        }
        t477 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
        t498 = t477;
        if (t477 != 1) {
        } else {
            *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0xC)) = 0x0;
            t479 = t477;
            t480 = t342;
            t481 = 0x0;
            for (;;) {
                if ((int)t481 >= (int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x14)))) {
                    break;
                }
                t479 = t481;
                t479 = (t479 << 2);
                t481 = (t481 + 0x1);
                if ((*(int *)((0x8C2FBF54 + t479))) != 0) {
                    t480 = (*(int *)0x8C2FBEF0);
                    *(unsigned int *)((t480 + 0xC)) = ((*(int *)((t480 + 0xC))) + 0x1);
                }
            }
            t490 = *(int *)0x8C2FBEF0;
            if ((*(int *)((t490 + 0xC))) == (*(int *)((t490 + 0x14)))) {
                t493 = *(int *)0x8C2FBEF0;
                *(unsigned int *)((t493 + 0x10)) = 0x0;
                *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x20)) = 0x2;
                t495 = t493;
            } else {
                t495 = t479;
            }
            t498 = t495;
        }
        return t498;
    }
    return miniWallTargetsHit(0x8C2FBF54);
}

float cpuShotAimStick(int a4)
{
    float u0;
    float u30;
    float u31;
    float u43;
    float u44;
    int t45;
    float u48;
    int t60;
    float u79;
    int t89;
    int t101;
    float u115;
    float u116;
    int t130;
    float u147;
    float u150;
    int t167;
    int t201;
    float u220;
    float u249;
    float u252;
    int stk[5];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    int R10;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_8C03EFD6:;
    u0 = *(float *)((R4 + 0xB90));
    R6 = (0x8C2FC69C);
    R7 = (0x160);
    F5 = ((*(float *)((R4 + 0xA28))));
    F6 = (u0);
    F8 = (u0);
    if (((*(short *)((0x118 + (((*(int *)((R4 + 0xB5C))) * 0x160) + 0x8C2FC69C)))) != 1)) goto L_8C03F002;
    goto L_8C03EFFE;
    L_8C03EFFE:;
    goto L_8C03F59A;
    L_8C03F59A:;
    R5 = (0x0);
    goto L_8C03F59C;
    L_8C03F59C:;
    return F0;
    L_8C03F002:;
    F14 = ((F5 - F8));
    F3 = (0.0f);
    if ((!((F5 - F8) > 0.0f))) goto L_8C03F010;
    goto L_8C03F00C;
    L_8C03F00C:;
    R2 = (0x1);
    goto L_8C03F01A;
    L_8C03F01A:;
    if ((R2 != 0)) goto L_8C03F022;
    goto L_8C03F01E;
    L_8C03F01E:;
    goto L_8C03F59A;
    L_8C03F022:;
    F10 = (32.0f);
    F9 = (96.0f);
    if ((0.0f > F5)) goto L_8C03F034;
    goto L_8C03F030;
    L_8C03F030:;
    F3 = (F5);
    goto L_8C03F038;
    L_8C03F038:;
    if ((!(F3 > 0.899999976f))) goto L_8C03F058;
    goto L_8C03F040;
    L_8C03F040:;
    F3 = (0.0f);
    if ((!(F14 > 0.0f))) goto L_8C03F04A;
    goto L_8C03F046;
    L_8C03F046:;
    R5 = (0x1);
    goto L_8C03F57E;
    L_8C03F57E:;
    R5 = ((int)((-((((*(float *)((R4 + 0xB00))) * (float)R5)) * F10)) + F9));
    goto L_8C03F59C;
    L_8C03F04A:;
    if ((!(F3 > F14))) goto L_8C03F052;
    goto L_8C03F04E;
    L_8C03F04E:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F57E;
    L_8C03F052:;
    R5 = (0x0);
    goto L_8C03F57E;
    L_8C03F058:;
    u30 = *(float *)((R4 + 0xB9C));
    u31 = *(float *)0x8C287B40;
    F11 = (0.949999988f);
    F4 = ((u30 / u31));
    if ((0.0f > (u30 / u31))) goto L_8C03F094;
    goto L_8C03F06C;
    L_8C03F06C:;
    F3 = (F4);
    goto L_8C03F098;
    L_8C03F098:;
    if ((!(F3 > F11))) goto L_8C03F0B8;
    goto L_8C03F09C;
    L_8C03F09C:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C03F0A6;
    goto L_8C03F0A2;
    L_8C03F0A2:;
    R3 = (0x1);
    goto L_8C03F0B0;
    L_8C03F0B0:;
    F4 = (((float)R3 * F11));
    goto L_8C03F0B8;
    L_8C03F0B8:;
    u43 = *(float *)0x8C23D204;
    u44 = *(float *)(((((*(int *)(((0xC6C + R4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((R4 + 0xC58))) * 0x6C))) + 0x0));
    t45 = *(int *)((R4 + 0xC5C));
    u48 = 0.300000012f;
    u48 = u48 + 3.29999995f * (u44 * u43);
    F0 = (3.29999995f);
    F13 = (u48);
    F7 = ((u44 * u43));
    if ((((*(int *)((((((t45 << 1) + t45) << 2) << 1) + 0x8C105FE0))) & 0x10000) == 0)) goto L_8C03F100;
    goto L_8C03F0FA;
    L_8C03F0FA:;
    F13 = ((F13 * 1.25f));
    goto L_8C03F100;
    L_8C03F100:;
    F15 = (F5);
    if ((((((((*(int *)((R4 + 0xC6C))) + (*(int *)((R4 + 0xD4C)))) & 1) == 0)) ? 1 : 0) != (((0.0f > (((*(float *)(((0xB90 + R4) + 0x0))) - F4) * (*(float *)(((0xB00 + R4) + 0x0)))))) ? 1 : 0))) goto L_8C03F130;
    goto L_8C03F12A;
    L_8C03F12A:;
    F13 = ((F13 * 0.800000012f));
    goto L_8C03F130;
    L_8C03F130:;
    t60 = 0.0f > (F15 - F4);
    F1 = ((F8 - F5));
    F15 = ((F15 - F4));
    if (t60) goto L_8C03F140;
    goto L_8C03F13C;
    L_8C03F13C:;
    F3 = (F15);
    goto L_8C03F144;
    L_8C03F144:;
    if ((!(F13 > F3))) goto L_8C03F14C;
    goto L_8C03F148;
    L_8C03F148:;
    goto L_8C03F27E;
    L_8C03F27E:;
    *(float *)(((int)stk + 4)) = (F8 - F4);
    F2 = (0.0f);
    if ((!((F8 - F4) > 0.0f))) goto L_8C03F28E;
    goto L_8C03F28A;
    L_8C03F28A:;
    R2 = (0x1);
    goto L_8C03F29A;
    L_8C03F29A:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F2A4;
    goto L_8C03F2A0;
    L_8C03F2A0:;
    R1 = (0x1);
    goto L_8C03F2AE;
    L_8C03F2AE:;
    if ((R2 == R1)) goto L_8C03F398;
    goto L_8C03F2B2;
    L_8C03F2B2:;
    R5 = ((*(short *)(((((*(int *)((R4 + 0xB5C))) * R7) + R6) + 0x118))));
    F1 = ((F4 - F8));
    F3 = (0.0f);
    if ((!((F4 - F8) > 0.0f))) goto L_8C03F2CE;
    goto L_8C03F2CA;
    L_8C03F2CA:;
    R3 = (0x1);
    goto L_8C03F2D8;
    L_8C03F2D8:;
    u79 = F4;
    u79 = u79 + F13 * (float)R3;
    F0 = (F13);
    F8 = (u79);
    if ((0.0f > u79)) goto L_8C03F2EC;
    goto L_8C03F2E8;
    L_8C03F2E8:;
    F2 = (F8);
    goto L_8C03F2F0;
    L_8C03F2F0:;
    if ((!(F2 > F11))) goto L_8C03F320;
    goto L_8C03F2F4;
    L_8C03F2F4:;
    F3 = (0.0f);
    if ((!(F8 > 0.0f))) goto L_8C03F2FE;
    goto L_8C03F2FA;
    L_8C03F2FA:;
    R2 = (0x1);
    goto L_8C03F308;
    L_8C03F308:;
    F8 = (((float)R2 * F11));
    goto L_8C03F320;
    L_8C03F320:;
    t89 = (int)R5 > 0;
    R5 = ((R5 - 1));
    if (t89) goto L_8C03F312;
    goto L_8C03F326;
    L_8C03F326:;
    F1 = (0.0f);
    F7 = ((F8 - F4));
    if ((0.0f > (F8 - F4))) goto L_8C03F33C;
    goto L_8C03F332;
    L_8C03F332:;
    F3 = (F7);
    goto L_8C03F340;
    L_8C03F340:;
    if ((F1 > F15)) goto L_8C03F348;
    goto L_8C03F344;
    L_8C03F344:;
    F2 = (F15);
    goto L_8C03F34C;
    L_8C03F34C:;
    if ((F2 > F3)) goto L_8C03F380;
    goto L_8C03F350;
    L_8C03F350:;
    F1 = (F5);
    if ((0.0f > (F5 - F8))) goto L_8C03F362;
    goto L_8C03F35C;
    L_8C03F35C:;
    F3 = ((F5 - F8));
    goto L_8C03F366;
    L_8C03F366:;
    t101 = 0.0f > (F1 - F6);
    F1 = ((F1 - F6));
    if (t101) goto L_8C03F374;
    goto L_8C03F36E;
    L_8C03F36E:;
    F2 = ((F5 - F6));
    goto L_8C03F378;
    L_8C03F378:;
    if ((F2 > F3)) goto L_8C03F380;
    goto L_8C03F37C;
    L_8C03F37C:;
    goto L_8C03F59A;
    L_8C03F380:;
    F3 = (0.0f);
    if ((!(F14 > 0.0f))) goto L_8C03F38A;
    goto L_8C03F386;
    L_8C03F386:;
    R5 = (0x1);
    goto L_8C03F57E;
    L_8C03F38A:;
    if ((!(F3 > F14))) goto L_8C03F392;
    goto L_8C03F38E;
    L_8C03F38E:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F57E;
    L_8C03F392:;
    R5 = (0x0);
    goto L_8C03F57E;
    L_8C03F374:;
    F2 = ((F6 - F5));
    goto L_8C03F378;
    L_8C03F362:;
    F3 = ((F8 - F5));
    goto L_8C03F366;
    L_8C03F348:;
    F2 = ((F4 - F5));
    goto L_8C03F34C;
    L_8C03F33C:;
    F3 = ((F4 - F8));
    goto L_8C03F340;
    L_8C03F312:;
    u115 = F6;
    u115 = u115 + F7 * (F4 - F6);
    u116 = F8;
    u116 = u116 + F7 * (F4 - F8);
    F0 = (F7);
    F6 = (u115);
    F8 = (u116);
    goto L_8C03F320;
    L_8C03F2FE:;
    if ((!(F3 > F8))) goto L_8C03F306;
    goto L_8C03F302;
    L_8C03F302:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F308;
    L_8C03F306:;
    R2 = (0x0);
    goto L_8C03F308;
    L_8C03F2EC:;
    F2 = ((-F8));
    goto L_8C03F2F0;
    L_8C03F2CE:;
    if ((!(F3 > F1))) goto L_8C03F2D6;
    goto L_8C03F2D2;
    L_8C03F2D2:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F2D8;
    L_8C03F2D6:;
    R3 = (0x0);
    goto L_8C03F2D8;
    L_8C03F398:;
    R1 = ((*(short *)(((((*(int *)((R4 + 0xB5C))) * R7) + R6) + 0x118))));
    goto L_8C03F3BC;
    L_8C03F3BC:;
    t130 = (int)R1 > 0;
    R1 = ((R1 - 1));
    if (t130) goto L_8C03F3AA;
    goto L_8C03F3C4;
    L_8C03F3C4:;
    F14 = ((float)R5);
    F3 = (0.0f);
    F6 = (((float)R5 - F5));
    if ((!(((float)R5 - F5) > 0.0f))) goto L_8C03F3D8;
    goto L_8C03F3D4;
    L_8C03F3D4:;
    R3 = (0x1);
    goto L_8C03F3E2;
    L_8C03F3E2:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F3EC;
    goto L_8C03F3E8;
    L_8C03F3E8:;
    R1 = (0x1);
    goto L_8C03F3F6;
    L_8C03F3F6:;
    if ((R3 != R1)) goto L_8C03F3FE;
    goto L_8C03F3FA;
    L_8C03F3FA:;
    goto L_8C03F59A;
    L_8C03F3FE:;
    F3 = (0.0f);
    F6 = (F8);
    F8 = ((*(float *)((R4 + 0xB00))));
    if ((!(F15 > 0.0f))) goto L_8C03F414;
    goto L_8C03F40A;
    L_8C03F40A:;
    R5 = (0x1);
    goto L_8C03F41E;
    L_8C03F41E:;
    u147 = (F8 * (float)R5);
    u150 = F6;
    u150 = u150 + F7 * ((((((float)((((((0x40 & (int)((-(u147 * F10)) + F9)) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & (int)((-(u147 * F10)) + F9)) == 0)) ? 1 : 0) - 1)))) * F8)) * F11) - F6);
    F0 = (F7);
    F6 = (u150);
    if ((0.0f > u150)) goto L_8C03F468;
    goto L_8C03F464;
    L_8C03F464:;
    F2 = (F6);
    goto L_8C03F46C;
    L_8C03F46C:;
    if ((!(F2 > F11))) goto L_8C03F48C;
    goto L_8C03F470;
    L_8C03F470:;
    F3 = (0.0f);
    if ((!(F6 > 0.0f))) goto L_8C03F47A;
    goto L_8C03F476;
    L_8C03F476:;
    R2 = (0x1);
    goto L_8C03F484;
    L_8C03F484:;
    F6 = (((float)R2 * F11));
    goto L_8C03F48C;
    L_8C03F48C:;
    F8 = ((F6 - F4));
    if ((0.0f > (F6 - F4))) goto L_8C03F49A;
    goto L_8C03F496;
    L_8C03F496:;
    F2 = (F8);
    goto L_8C03F49E;
    L_8C03F49E:;
    if ((!(F2 > F13))) goto L_8C03F4A6;
    goto L_8C03F4A2;
    L_8C03F4A2:;
    goto L_8C03F59A;
    L_8C03F4A6:;
    R5 = (((*(short *)(((((*(int *)((R4 + 0xB5C))) * R7) + R6) + 0x118))) - 1));
    goto L_8C03F4C0;
    L_8C03F4C0:;
    t167 = (int)R5 > 0;
    R5 = ((R5 - 1));
    if (t167) goto L_8C03F4B8;
    goto L_8C03F4C6;
    L_8C03F4C6:;
    F13 = ((F5 - F6));
    F3 = (0.0f);
    if ((!(F1 > 0.0f))) goto L_8C03F4D4;
    goto L_8C03F4D0;
    L_8C03F4D0:;
    R3 = (0x1);
    goto L_8C03F4DE;
    L_8C03F4DE:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F4E8;
    goto L_8C03F4E4;
    L_8C03F4E4:;
    R1 = (0x1);
    goto L_8C03F4F8;
    L_8C03F4F8:;
    if ((R3 != R1)) goto L_8C03F544;
    goto L_8C03F4FC;
    L_8C03F4FC:;
    F3 = (0.0f);
    F6 = ((F4 - F5));
    if ((!((F4 - F5) > 0.0f))) goto L_8C03F50A;
    goto L_8C03F506;
    L_8C03F506:;
    R2 = (0x1);
    goto L_8C03F514;
    L_8C03F514:;
    F3 = (0.0f);
    if ((!(F13 > 0.0f))) goto L_8C03F51E;
    goto L_8C03F51A;
    L_8C03F51A:;
    R3 = (0x1);
    goto L_8C03F528;
    L_8C03F528:;
    if ((R2 != R3)) goto L_8C03F59A;
    goto L_8C03F52C;
    L_8C03F52C:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F536;
    goto L_8C03F532;
    L_8C03F532:;
    R5 = (0x1);
    goto L_8C03F57E;
    L_8C03F536:;
    if ((!(F3 > F15))) goto L_8C03F53E;
    goto L_8C03F53A;
    L_8C03F53A:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F57E;
    L_8C03F53E:;
    R5 = (0x0);
    goto L_8C03F57E;
    L_8C03F51E:;
    if ((!(F3 > F13))) goto L_8C03F526;
    goto L_8C03F522;
    L_8C03F522:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F528;
    L_8C03F526:;
    R3 = (0x0);
    goto L_8C03F528;
    L_8C03F50A:;
    if ((!(F3 > F6))) goto L_8C03F512;
    goto L_8C03F50E;
    L_8C03F50E:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F514;
    L_8C03F512:;
    R2 = (0x0);
    goto L_8C03F514;
    L_8C03F544:;
    F4 = ((F6 - F5));
    F7 = (F14);
    if ((0.0f > (F6 - F5))) goto L_8C03F554;
    goto L_8C03F550;
    L_8C03F550:;
    F3 = (F4);
    goto L_8C03F556;
    L_8C03F556:;
    t201 = 0.0f > (F7 - F5);
    F1 = (0.0f);
    F7 = ((F7 - F5));
    if (t201) goto L_8C03F562;
    goto L_8C03F55E;
    L_8C03F55E:;
    F2 = (F7);
    goto L_8C03F566;
    L_8C03F566:;
    if ((!(F2 > F3))) goto L_8C03F59A;
    goto L_8C03F56A;
    L_8C03F56A:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F574;
    goto L_8C03F570;
    L_8C03F570:;
    R5 = (0x1);
    goto L_8C03F57E;
    L_8C03F574:;
    if ((!(F3 > F15))) goto L_8C03F57C;
    goto L_8C03F578;
    L_8C03F578:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F57E;
    L_8C03F57C:;
    R5 = (0x0);
    goto L_8C03F57E;
    L_8C03F562:;
    F2 = ((F5 - F14));
    goto L_8C03F566;
    L_8C03F554:;
    F3 = (F13);
    goto L_8C03F556;
    L_8C03F4E8:;
    if ((!(F3 > F15))) goto L_8C03F4F6;
    goto L_8C03F4EC;
    L_8C03F4EC:;
    R1 = (0xFFFFFFFF);
    goto L_8C03F4F8;
    L_8C03F4F6:;
    R1 = (0x0);
    goto L_8C03F4F8;
    L_8C03F4D4:;
    if ((!(F3 > F1))) goto L_8C03F4DC;
    goto L_8C03F4D8;
    L_8C03F4D8:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F4DE;
    L_8C03F4DC:;
    R3 = (0x0);
    goto L_8C03F4DE;
    L_8C03F4B8:;
    u220 = F6;
    u220 = u220 + F7 * (F4 - F6);
    F0 = (F7);
    F6 = (u220);
    goto L_8C03F4C0;
    L_8C03F49A:;
    F2 = ((F4 - F6));
    goto L_8C03F49E;
    L_8C03F47A:;
    if ((!(F3 > F6))) goto L_8C03F482;
    goto L_8C03F47E;
    L_8C03F47E:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F484;
    L_8C03F482:;
    R2 = (0x0);
    goto L_8C03F484;
    L_8C03F468:;
    F2 = ((-F6));
    goto L_8C03F46C;
    L_8C03F414:;
    if ((!(F3 > F15))) goto L_8C03F41C;
    goto L_8C03F418;
    L_8C03F418:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F41E;
    L_8C03F41C:;
    R5 = (0x0);
    goto L_8C03F41E;
    L_8C03F3EC:;
    if ((!(F3 > F15))) goto L_8C03F3F4;
    goto L_8C03F3F0;
    L_8C03F3F0:;
    R1 = (0xFFFFFFFF);
    goto L_8C03F3F6;
    L_8C03F3F4:;
    R1 = (0x0);
    goto L_8C03F3F6;
    L_8C03F3D8:;
    if ((!(F3 > F6))) goto L_8C03F3E0;
    goto L_8C03F3DC;
    L_8C03F3DC:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F3E2;
    L_8C03F3E0:;
    R3 = (0x0);
    goto L_8C03F3E2;
    L_8C03F3AA:;
    goto L_8C03F3BC;
    L_8C03F2A4:;
    if ((!(F3 > F15))) goto L_8C03F2AC;
    goto L_8C03F2A8;
    L_8C03F2A8:;
    R1 = (0xFFFFFFFF);
    goto L_8C03F2AE;
    L_8C03F2AC:;
    R1 = (0x0);
    goto L_8C03F2AE;
    L_8C03F28E:;
    if ((!(F2 > (*(float *)(((int)stk + 4)))))) goto L_8C03F298;
    goto L_8C03F294;
    L_8C03F294:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F29A;
    L_8C03F298:;
    R2 = (0x0);
    goto L_8C03F29A;
    L_8C03F14C:;
    F3 = (0.0f);
    F4 = ((*(float *)((R4 + 0xB00))));
    if ((!(F14 > 0.0f))) goto L_8C03F15A;
    goto L_8C03F156;
    L_8C03F156:;
    R5 = (0x1);
    goto L_8C03F192;
    L_8C03F192:;
    u249 = (F4 * (float)R5);
    u252 = F6;
    u252 = u252 + F7 * ((((((float)((((((0x40 & (int)((-(u249 * F10)) + F9)) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x80 & (int)((-(u249 * F10)) + F9)) == 0)) ? 1 : 0) - 1)))) * F4)) * F11) - F6);
    F0 = (F7);
    F3 = (0.0f);
    F6 = (u252);
    if ((!(F1 > 0.0f))) goto L_8C03F1DC;
    goto L_8C03F1D8;
    L_8C03F1D8:;
    R3 = (0x1);
    goto L_8C03F1E6;
    L_8C03F1E6:;
    F3 = (0.0f);
    if ((!(F15 > 0.0f))) goto L_8C03F1F0;
    goto L_8C03F1EC;
    L_8C03F1EC:;
    R1 = (0x1);
    goto L_8C03F1FA;
    L_8C03F1FA:;
    if ((R3 != R1)) goto L_8C03F24C;
    goto L_8C03F1FE;
    L_8C03F1FE:;
    F3 = (0.0f);
    F4 = ((F8 - F6));
    if ((!((F8 - F6) > 0.0f))) goto L_8C03F20C;
    goto L_8C03F208;
    L_8C03F208:;
    R2 = (0x1);
    goto L_8C03F216;
    L_8C03F216:;
    F3 = (0.0f);
    F7 = ((F6 - F5));
    if ((!((F6 - F5) > 0.0f))) goto L_8C03F224;
    goto L_8C03F220;
    L_8C03F220:;
    R3 = (0x1);
    goto L_8C03F22E;
    L_8C03F22E:;
    if ((R2 == R3)) goto L_8C03F236;
    goto L_8C03F232;
    L_8C03F232:;
    goto L_8C03F59A;
    L_8C03F236:;
    F3 = (0.0f);
    if ((!(F14 > 0.0f))) goto L_8C03F240;
    goto L_8C03F23C;
    L_8C03F23C:;
    R5 = (0x1);
    goto L_8C03F262;
    L_8C03F262:;
    R5 = ((int)((-((((*(float *)((R4 + 0xB00))) * (float)R5)) * F10)) + F9));
    goto L_8C03F59C;
    L_8C03F240:;
    if ((!(F3 > F14))) goto L_8C03F248;
    goto L_8C03F244;
    L_8C03F244:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F262;
    L_8C03F248:;
    R5 = (0x0);
    goto L_8C03F262;
    L_8C03F224:;
    if ((!(F3 > F7))) goto L_8C03F22C;
    goto L_8C03F228;
    L_8C03F228:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F22E;
    L_8C03F22C:;
    R3 = (0x0);
    goto L_8C03F22E;
    L_8C03F20C:;
    if ((!(F3 > F4))) goto L_8C03F214;
    goto L_8C03F210;
    L_8C03F210:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F216;
    L_8C03F214:;
    R2 = (0x0);
    goto L_8C03F216;
    L_8C03F24C:;
    F3 = (0.0f);
    if ((!(F14 > 0.0f))) goto L_8C03F256;
    goto L_8C03F252;
    L_8C03F252:;
    R5 = (0x1);
    goto L_8C03F262;
    L_8C03F256:;
    if ((!(F3 > F14))) goto L_8C03F260;
    goto L_8C03F25A;
    L_8C03F25A:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F262;
    L_8C03F260:;
    R5 = (0x0);
    goto L_8C03F262;
    L_8C03F1F0:;
    if ((!(F3 > F15))) goto L_8C03F1F8;
    goto L_8C03F1F4;
    L_8C03F1F4:;
    R1 = (0xFFFFFFFF);
    goto L_8C03F1FA;
    L_8C03F1F8:;
    R1 = (0x0);
    goto L_8C03F1FA;
    L_8C03F1DC:;
    if ((!(F3 > F1))) goto L_8C03F1E4;
    goto L_8C03F1E0;
    L_8C03F1E0:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F1E6;
    L_8C03F1E4:;
    R3 = (0x0);
    goto L_8C03F1E6;
    L_8C03F15A:;
    if ((!(F3 > F14))) goto L_8C03F190;
    goto L_8C03F15E;
    L_8C03F15E:;
    R5 = (0xFFFFFFFF);
    goto L_8C03F192;
    L_8C03F190:;
    R5 = (0x0);
    goto L_8C03F192;
    L_8C03F140:;
    F3 = ((F4 - F5));
    goto L_8C03F144;
    L_8C03F0A6:;
    if ((!(F3 > F4))) goto L_8C03F0AE;
    goto L_8C03F0AA;
    L_8C03F0AA:;
    R3 = (0xFFFFFFFF);
    goto L_8C03F0B0;
    L_8C03F0AE:;
    R3 = (0x0);
    goto L_8C03F0B0;
    L_8C03F094:;
    F3 = ((-F4));
    goto L_8C03F098;
    L_8C03F034:;
    F3 = ((-F5));
    goto L_8C03F038;
    L_8C03F010:;
    if ((!(F3 > F14))) goto L_8C03F018;
    goto L_8C03F014;
    L_8C03F014:;
    R2 = (0xFFFFFFFF);
    goto L_8C03F01A;
    L_8C03F018:;
    R2 = (0x0);
    goto L_8C03F01A;
}

void miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t97;
    int t121;
    int t138;
    int t141;
    int t146;
    int t156;
    int t160;
    int t164;
    float t171;
    int t173;
    float u175;
    float u178;
    int t186;
    float u198;
    float u204;
    float u206;
    float u211;
    int t218;
    int t221;
    int t227;
    float u235;
    int stk[20];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    L_8C03771C:;
    t0 = *(int *)0x8C2FBEF0;
    R11 = (R5);
    R12 = (0x8C291F24);
    R14 = (0x8C2FBEF0);
    R5 = (0x8C287ACC);
    R6 = (t0);
    if (((*(int *)((t0 + 0x20))) == 1)) goto L_8C03774A;
    goto L_8C037746;
    L_8C037746:;
    goto L_8C037CCA;
    L_8C037CCA:;
    return;
    L_8C03774A:;
    R0 = (R4);
    R10 = (0xD78);
    R13 = (0x0);
    R8 = (0x8C287D84);
    R9 = (0x2);
    if ((R4 != 0)) goto L_8C03775C;
    goto L_8C037758;
    L_8C037758:;
    goto L_8C037CCA;
    L_8C03775C:;
    if ((R0 == 1)) goto L_8C037780;
    goto L_8C037760;
    L_8C037760:;
    if ((R0 != 2)) goto L_8C037768;
    goto L_8C037764;
    L_8C037764:;
    goto L_8C037CCA;
    L_8C037768:;
    if ((R0 == 3)) goto L_8C0377DC;
    goto L_8C03776C;
    L_8C03776C:;
    if ((R0 != 5)) goto L_8C037774;
    goto L_8C037770;
    L_8C037770:;
    goto L_8C0379B0;
    L_8C0379B0:;
    *(unsigned int *)0x8C2FC0C8 = R13;
    R11 = (0x8C02638C);
    R9 = (0x8C02414C);
    F14 = (-118.849998f);
    F15 = (0.0f);
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 3)) goto L_8C037A22;
    goto L_8C0379C6;
    L_8C0379C6:;
    if (((int)(*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) <= 0)) goto L_8C037A08;
    goto L_8C0379CE;
    L_8C0379CE:;
    *(unsigned int *)(((int)stk + 12)) = (R8 + R10);
    *(unsigned int *)(((0xB60 + (R8 + R10)) + 0x0)) = ((*(int *)(((0xB60 + (R8 + R10)) + 0x0))) | 0x40000);
    *(unsigned int *)(((0xD40 + (*(int *)(((int)stk + 12)))) + 0x0)) = R9;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = R13;
    vecMake(R4, R5, R6, R7, (0xAE8 + (*(int *)(((int)stk + 12)))), F15, F15, F14);
    goto L_8C037A08;
    L_8C037A08:;
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((R12 + 0x54)) = ((*(int *)((R12 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x18)) = R13;
    goto L_8C037A22;
    L_8C037A22:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 1)) goto L_8C037A40;
    goto L_8C037A2A;
    L_8C037A2A:;
    if (((*(int *)((R12 + 0x50))) != 1)) goto L_8C037A40;
    goto L_8C037A32;
    L_8C037A32:;
    *(float *)((R12 + 0x28)) = ((*(float *)((R12 + 0x28))) * 0.800000012f);
    goto L_8C037A40;
    L_8C037A40:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 4)) goto L_8C037A94;
    goto L_8C037A48;
    L_8C037A48:;
    *(unsigned int *)(((int)stk + 12)) = (R8 + R10);
    *(unsigned int *)(((R8 + R10) + 0xB60)) = ((*(int *)(((R8 + R10) + 0xB60))) | 0x40000);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = R9;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = R13;
    vecMake(R4, R5, R6, R7, (0xAE8 + (*(int *)(((int)stk + 12)))), F15, F15, -50.0f);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((R12 + 0x54)) = ((*(int *)((R12 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x18)) = R13;
    goto L_8C037A94;
    L_8C037A94:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 0)) goto L_8C037AE8;
    goto L_8C037A9C;
    L_8C037A9C:;
    *(unsigned int *)(((int)stk + 12)) = (R8 + R10);
    *(unsigned int *)(((R8 + R10) + 0xB60)) = ((*(int *)(((R8 + R10) + 0xB60))) | 0x40000);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = R9;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = R13;
    vecMake(R4, R5, R6, R7, (0xAE8 + (*(int *)(((int)stk + 12)))), F15, F15, -79.2333298f);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((R12 + 0x54)) = ((*(int *)((R12 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x18)) = R13;
    goto L_8C037AE8;
    L_8C037AE8:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 6)) goto L_8C037B6E;
    goto L_8C037AF0;
    L_8C037AF0:;
    *(unsigned int *)(((int)stk + 12)) = (R8 + R10);
    R0 = (0xB60);
    R1 = ((*(int *)(((R8 + R10) + 0xB60))));
    R2 = (0x40000);
    R8 = ((R8 + R10));
    goto L_8C037B34;
    L_8C037B34:;
    *(unsigned int *)((R8 + R0)) = (R1 | R2);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = R9;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = R13;
    vecMake(R4, R5, R6, R7, (0xAE8 + (*(int *)(((int)stk + 12)))), F15, F15, F14);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((R12 + 0x54)) = ((*(int *)((R12 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x18)) = R13;
    goto L_8C037B6E;
    L_8C037B6E:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) == 7)) goto L_8C037B7A;
    goto L_8C037B76;
    L_8C037B76:;
    goto L_8C037CCA;
    L_8C037B7A:;
    miniBallObjSpawn();
    goto L_8C037B7E;
    L_8C037B7E:;
    miniLaunchBall();
    goto L_8C037CCA;
    L_8C037774:;
    if ((R0 != 6)) goto L_8C03777C;
    goto L_8C037778;
    L_8C037778:;
    goto L_8C037B88;
    L_8C037B88:;
    if (((*(int *)((R6 + 0x0))) == 2)) goto L_8C037B92;
    goto L_8C037B8E;
    L_8C037B8E:;
    goto L_8C037CCA;
    L_8C037B92:;
    R11 = (0x8C2FBF54);
    R12 = (0x8C2FBF7C);
    R4 = (0x8C2FBF54);
    R6 = (0x8C2FBF54);
    R7 = (R13);
    goto L_8C037BAA;
    L_8C037BAA:;
    if (((unsigned int)R4 < (unsigned int)R12)) goto L_8C037BA0;
    goto L_8C037BAE;
    L_8C037BAE:;
    t97 = *(int *)((R5 + 0x60));
    R4 = (t97);
    if (((int)t97 > 0)) goto L_8C037BBA;
    goto L_8C037BB6;
    L_8C037BB6:;
    goto L_8C037CCA;
    L_8C037BBA:;
    if ((R7 == 10)) goto L_8C037BCA;
    goto L_8C037BC0;
    L_8C037BC0:;
    if (((int)R4 < (int)0xF0)) goto L_8C037BCA;
    goto L_8C037BC6;
    L_8C037BC6:;
    goto L_8C037CCA;
    L_8C037BCA:;
    R12 = ((R6 + 0x28));
    R4 = (R6);
    R7 = (R13);
    goto L_8C037BDE;
    L_8C037BDE:;
    if (((unsigned int)R4 < (unsigned int)R12)) goto L_8C037BD4;
    goto L_8C037BE2;
    L_8C037BE2:;
    if ((R7 == 0)) goto L_8C037BEE;
    goto L_8C037BE6;
    L_8C037BE6:;
    if (((*(int *)((R5 + 0x60))) != 60)) goto L_8C037CCA;
    goto L_8C037BEE;
    L_8C037BEE:;
    *(unsigned int *)((R5 + 0x60)) = 0x3C;
    R12 = (R13);
    R4 = (R11);
    R5 = ((0x80 + R11));
    goto L_8C037C22;
    L_8C037C22:;
    if (((unsigned int)R4 < (unsigned int)R5)) goto L_8C037C18;
    goto L_8C037C26;
    L_8C037C26:;
    *(unsigned int *)((0x8C2FC134 + (((-(*(int *)(((*(int *)((R14 + 0x0))) + 0x10)))) + 0xB) << 2))) = R12;
    R11 = (0x200);
    R4 = (0x8C2FC134);
    if ((((*(int *)(((*(int *)((R14 + 0x0))) + 0x8))) & 0x200) == 0)) goto L_8C037C5A;
    goto L_8C037C3E;
    L_8C037C3E:;
    t121 = *(int *)(((*(int *)((R14 + 0x0))) + 0x10));
    *(unsigned int *)((R4 + (((-t121) + 0xB) << 2))) = ((*(int *)((R4 + (((-t121) + 0xB) << 2)))) - (*(int *)((((((-t121) + 0xA) << 2) + R4) + 0x0))));
    goto L_8C037C5A;
    L_8C037C5A:;
    miniBowlingScore();
    if ((R12 != 10)) goto L_8C037C76;
    goto L_8C037C66;
    L_8C037C66:;
    if ((((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 0x200) != 0)) goto L_8C037C76;
    goto L_8C037C72;
    L_8C037C72:;
    R4 = (0x1);
    goto L_8C037C78;
    L_8C037C78:;
    miniMessageSpawn((R4 + R12));
    if ((((*(int *)(((*(int *)((R14 + 0x0))) + 0x8))) & R11) != 0)) goto L_8C037CA2;
    goto L_8C037C86;
    L_8C037C86:;
    if ((R12 != 10)) goto L_8C037CA2;
    goto L_8C037C8C;
    L_8C037C8C:;
    if (((int)(*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) <= (int)0x3)) goto L_8C037CA2;
    goto L_8C037C96;
    L_8C037C96:;
    t138 = *(int *)((R14 + 0x0));
    *(unsigned int *)((t138 + 0x10)) = ((*(int *)((t138 + 0x10))) - 1);
    serveNextPoint();
    goto L_8C037CA2;
    L_8C037CA2:;
    t141 = *(int *)((R14 + 0x0));
    R4 = (t141);
    if (((int)(*(int *)((t141 + 0x10))) <= 0)) goto L_8C037CB0;
    goto L_8C037CAA;
    L_8C037CAA:;
    *(unsigned int *)((R4 + 0x10)) = ((*(int *)((R4 + 0x10))) - 1);
    goto L_8C037CB0;
    L_8C037CB0:;
    t146 = *(int *)((R14 + 0x0));
    R4 = (t146);
    if (((R11 & (*(int *)((t146 + 0x8)))) == 0)) goto L_8C037CC6;
    goto L_8C037CB8;
    L_8C037CB8:;
    if (((*(int *)((R4 + 0x10))) != 1)) goto L_8C037CC6;
    goto L_8C037CBE;
    L_8C037CBE:;
    if (((int)R12 >= (int)0xA)) goto L_8C037CC6;
    goto L_8C037CC4;
    L_8C037CC4:;
    *(unsigned int *)((R4 + 0x10)) = R13;
    goto L_8C037CC6;
    L_8C037CC6:;
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x20)) = R9;
    goto L_8C037CCA;
    L_8C037C76:;
    R4 = (0x0);
    goto L_8C037C78;
    L_8C037C18:;
    t156 = (*(int *)((R4 + 0x0))) != 1;
    R4 = ((R4 + 0x4));
    if (t156) goto L_8C037C22;
    goto L_8C037C20;
    L_8C037C20:;
    R12 = ((R12 + 0x1));
    goto L_8C037C22;
    L_8C037BD4:;
    t160 = (*(int *)((R4 + 0x0))) != 2;
    R4 = ((R4 + 0x4));
    if (t160) goto L_8C037BDE;
    goto L_8C037BDC;
    L_8C037BDC:;
    R7 = ((R7 + 0x1));
    goto L_8C037BDE;
    L_8C037BA0:;
    t164 = (*(int *)((R4 + 0x0))) != 1;
    R4 = ((R4 + 0x4));
    if (t164) goto L_8C037BAA;
    goto L_8C037BA8;
    L_8C037BA8:;
    R7 = ((R7 + 0x1));
    goto L_8C037BAA;
    L_8C03777C:;
    goto L_8C037CCA;
    L_8C0377DC:;
    R9 = (0x8C0ED2B0);
    F14 = (0.699999988f);
    if (((*(int *)((R6 + 0x0))) != 3)) goto L_8C037866;
    goto L_8C0377E8;
    L_8C0377E8:;
    t171 = nlRandom();
    *(float *)(((int)stk + 8)) = (float)(((int)(t171 * (1.0f + 1.0f)) << 1) - 1);
    t173 = *(int *)(((*(int *)((R14 + 0x0))) + 0x40));
    *(float *)(((int)stk + 4)) = (float)(t173 + 0x3);
    u175 = ((nlRandom()) * 0.400000006f);
    u175 = u175 + 0.100000001f * (float)(t173 + 0x3);
    *(float *)((R11 + 0xB90)) = (((float)(((int)(t171 * (1.0f + 1.0f)) << 1) - 1)) * u175);
    u178 = -0.300000012f;
    u178 = u178 + 1.20000005f * (nlRandom());
    *(float *)((R11 + 0xB98)) = u178;
    *(unsigned int *)((R12 + 0x50)) = R13;
    *(float *)((R12 + 0x28)) = ((((-((float)(*(int *)(((*(int *)((R14 + 0x0))) + 0x40))) * 0.100000001f)) + 1.20000005f)) * F14);
    F0 = (1.20000005f);
    if (((int)(*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) <= 0)) goto L_8C037866;
    goto L_8C03785E;
    L_8C03785E:;
    t186 = *(int *)((R14 + 0x0));
    *(unsigned int *)((t186 + 0x10)) = ((*(int *)((t186 + 0x10))) - 1);
    goto L_8C037866;
    L_8C037866:;
    F15 = (1.0f);
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 1)) goto L_8C037878;
    goto L_8C037870;
    L_8C037870:;
    *(unsigned int *)((R12 + 0x50)) = R13;
    *(float *)((R12 + 0x28)) = F15;
    goto L_8C037878;
    L_8C037878:;
    F12 = (-0.5f);
    F13 = (0.5f);
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 4)) goto L_8C0378A4;
    goto L_8C037888;
    L_8C037888:;
    u198 = F12;
    u198 = u198 + F15 * (nlRandom());
    *(float *)((R11 + 0xB90)) = u198;
    *(float *)((R11 + 0xB98)) = F13;
    *(unsigned int *)((R12 + 0x50)) = R13;
    *(float *)((R12 + 0x28)) = F14;
    F0 = (F15);
    goto L_8C0378A4;
    L_8C0378A4:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 0)) goto L_8C0378DA;
    goto L_8C0378AC;
    L_8C0378AC:;
    u204 = F12;
    u204 = u204 + F15 * (nlRandom());
    *(float *)((R11 + 0xB90)) = u204;
    u206 = -0.25f;
    u206 = u206 + F13 * (nlRandom());
    *(float *)((R11 + 0xB98)) = u206;
    *(unsigned int *)((R12 + 0x50)) = 0x1;
    *(float *)((R12 + 0x28)) = 1.68000007f;
    F0 = (F13);
    goto L_8C0378DA;
    L_8C0378DA:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 5)) goto L_8C037980;
    goto L_8C0378E2;
    L_8C0378E2:;
    *(unsigned int *)(((int)stk + 16)) = (R8 + R10);
    u211 = *(float *)(((R8 + R10) + 0xAE8));
    R4 = (0x8C10B980);
    F3 = (0.0f);
    F4 = (u211);
    if ((!(u211 > 0.0f))) goto L_8C0378F6;
    goto L_8C0378F2;
    L_8C0378F2:;
    R2 = (0x1);
    goto L_8C037932;
    L_8C037932:;
    t218 = *(int *)(((*(int *)((R14 + 0x0))) + 0x24));
    *(float *)((R11 + 0xB90)) = ((float)(-R2) * (*(float *)((((((t218 << 2) + t218) << 2) + R4) + 0xC))));
    t221 = *(int *)(((*(int *)((R14 + 0x0))) + 0x24));
    *(float *)((R11 + 0xB98)) = (-(*(float *)(((R4 + (((t221 << 2) + t221) << 2)) + 0x10))));
    R4 = ((R4 + (((t221 << 2) + t221) << 2)));
    if (((int)(*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) <= 0)) goto L_8C037978;
    goto L_8C037970;
    L_8C037970:;
    t227 = *(int *)((R14 + 0x0));
    *(unsigned int *)((t227 + 0x10)) = ((*(int *)((t227 + 0x10))) - 1);
    goto L_8C037978;
    L_8C037978:;
    *(unsigned int *)0x8C2FBFD4 = (*(int *)(((*(int *)((R14 + 0x0))) + 0x10)));
    goto L_8C037980;
    L_8C037980:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) == 6)) goto L_8C03798C;
    goto L_8C037988;
    L_8C037988:;
    goto L_8C037CCA;
    L_8C03798C:;
    u235 = F12;
    u235 = u235 + F15 * (nlRandom());
    *(float *)((R11 + 0xB90)) = u235;
    *(float *)((R11 + 0xB98)) = F13;
    *(unsigned int *)((R12 + 0x50)) = R13;
    *(float *)((R12 + 0x28)) = F14;
    F0 = (F15);
    goto L_8C037CCA;
    L_8C0378F6:;
    if ((!(F3 > F4))) goto L_8C037930;
    goto L_8C0378FA;
    L_8C0378FA:;
    R2 = (0xFFFFFFFF);
    goto L_8C037932;
    L_8C037930:;
    R2 = (0x0);
    goto L_8C037932;
    L_8C037780:;
    if (((*(int *)((R6 + 0x0))) != 2)) goto L_8C03778C;
    goto L_8C037786;
    L_8C037786:;
    *(unsigned int *)((R5 + 0x60)) = 0x12C;
    goto L_8C03778C;
    L_8C03778C:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 3)) goto L_8C0377A0;
    goto L_8C037794;
    L_8C037794:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) != 0)) goto L_8C0377A0;
    goto L_8C03779C;
    L_8C03779C:;
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x20)) = R9;
    goto L_8C0377A0;
    L_8C0377A0:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 5)) goto L_8C0377B4;
    goto L_8C0377A8;
    L_8C0377A8:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x10))) != 0)) goto L_8C0377B4;
    goto L_8C0377B0;
    L_8C0377B0:;
    *(unsigned int *)(((*(int *)((R14 + 0x0))) + 0x20)) = R9;
    goto L_8C0377B4;
    L_8C0377B4:;
    if (((*(int *)(((*(int *)((R14 + 0x0))) + 0x0))) != 7)) goto L_8C0377C0;
    goto L_8C0377BC;
    L_8C0377BC:;
    goto L_8C037B7E;
    L_8C0377C0:;
    goto L_8C037CCA;
}

void dbgMenuExec(void)
{
    
}

int resultExec(void)
{
    int t0;
    int t22;
    int t29;
    int t40;
    int t41;
    int t43;
    int t46;
    int t50;
    int t51;
    int t53;
    int t56;
    int t66;
    int t68;
    int t71;
    int t73;
    int t83;
    int t84;
    int t86;
    int t89;
    int t92;
    int t94;
    int t103;
    int t107;
    int t108;
    int t110;
    int t113;
    int t117;
    int t118;
    int t119;
    int t122;
    int t123;
    int t124;
    int t125;
    int t121;
    int t138;
    int t139;
    int t141;
    int t144;
    int t154;
    int t159;
    int t162;
    int t163;
    int t165;
    int t168;
    int t178;
    int t179;
    int t180;
    int t181;
    int t216;
    int t218;
    int t225;
    int t230;
    int t235;
    int t236;
    int t237;
    int t243;
    int t244;
    int t246;
    int t248;
    int t249;
    int t250;
    int t255;
    int t256;
    int t257;
    int t258;
    int t269;
    int t303;
    int t304;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    int t273;
    int t277;
    int t278;
    int t279;
    int t283;
    int t284;
    int t285;
    int t290;
    int t291;
    int t292;
    int t293;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t350;
    int t367;
    int t1;
    int t332;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    int t338;
    int t339;
    int t340;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t61;
    int t62;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t82;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t104;
    int t105;
    int t137;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    int t330;
    int t221;
    int t222;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t260;
    int t261;
    int t262;
    int t263;
    int t264;
    int t265;
    int t266;
    int t267;
    int t245;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t301;
    int t280;
    int t281;
    int t356;
    int t357;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t359;
    int stk[16];

    *(unsigned int *)0x8C1846DC = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)0x8C301970 = 0x1;
    t0 = entryCountJoined();
    if ((t0 == 2) && (t1 = *(int *)0x8C287ADC, t1 == 2)) {
        *(unsigned int *)0x8C301BC4 = 0x4;
    } else {
        if ((*(int *)0x8C287ADC) == 2) {
            *(unsigned int *)0x8C301BC4 = 0x0;
        } else {
            if ((*(int *)0x8C287ADC) == 4) {
                *(unsigned int *)0x8C301BC4 = 0x5;
            } else {
                *(unsigned int *)0x8C301BC4 = 0x4;
            }
        }
    }
    t22 = *(int *)0x8C287C64;
    if ((*(int *)0x8C287ADC) != 2) {
        t29 = entryIsVersus(t22, 0x8C34329C, 0x8C343264);
        if (t29 != 0) {
            if ((*(int *)0x8C287B00) == (*(int *)0x8C287C64)) {
                t40 = *(int *)0x8C343268;
                *(unsigned int *)(((int)stk + 24)) = t40;
                t41 = *(int *)0x8C3432D8;
                *(unsigned int *)(((int)stk + 28)) = t41;
                t43 = t40;
                if ((*(int *)0x8C34326C) != 0) {
                    t43 = 0x4;
                }
                t46 = t41;
                if ((*(int *)0x8C3432DC) != 0) {
                    t46 = 0x4;
                }
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(int *)0x8C3432A0);
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = (*(int *)0x8C343310);
                *(unsigned int *)0x8C343328 = 0xFFFFFFFF;
                *(unsigned int *)0x8C3432B8 = 0xFFFFFFFF;
                t61 = t46;
                t62 = t43;
            } else {
                t50 = *(int *)0x8C3432A0;
                *(unsigned int *)(((int)stk + 24)) = t50;
                t51 = *(int *)0x8C343310;
                *(unsigned int *)(((int)stk + 28)) = t51;
                t53 = t50;
                if ((*(int *)0x8C3432A4) != 0) {
                    t53 = 0x4;
                }
                t56 = t51;
                if ((*(int *)0x8C343314) != 0) {
                    t56 = 0x4;
                }
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(int *)0x8C343268);
                *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = (*(int *)0x8C3432D8);
                *(unsigned int *)0x8C3432F0 = 0xFFFFFFFF;
                *(unsigned int *)0x8C343280 = 0xFFFFFFFF;
                t61 = t56;
                t62 = t53;
            }
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            t66 = *(int *)(((int)stk + 24));
            *(unsigned int *)((((t66 << 2) + 0x8C343744) + 0x0)) = ((*(int *)((((t66 << 2) + 0x8C343744) + 0x0))) + 0x1);
            t68 = *(int *)(((int)stk + 28));
            *(unsigned int *)((((t68 << 2) + 0x8C343744) + 0x0)) = ((*(int *)((((t68 << 2) + 0x8C343744) + 0x0))) + 0x1);
            t71 = ((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x0))), 0x1);
            t73 = ((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x4))), 0x1);
            t200 = (entryAssignSlotIds());
            t202 = t61;
            t203 = t62;
        } else {
            if ((*(int *)0x8C287B00) == (*(int *)0x8C287C64)) {
                if (((*(int *)0x8C34326C) != 0) && (t82 = *(int *)0x8C3432DC, t82 != 0)) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    *(unsigned int *)0x8C301970 = 0x1;
                    t83 = *(int *)0x8C3432A0;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t83;
                    t84 = *(int *)0x8C343310;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t84;
                    t86 = t83;
                    if ((*(int *)0x8C3432A4) != 0) {
                        t86 = 0x4;
                    }
                    t89 = t84;
                    if ((*(int *)0x8C343314) != 0) {
                        t89 = 0x4;
                    }
                    t92 = ((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x0))), 0x0);
                    t94 = ((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x4))), 0x0);
                    if ((*(int *)0x8C287D5C) == 1) {
                        *(unsigned int *)0x8C34324C = (*(int *)0x8C343264);
                        *(unsigned int *)0x8C343250 = (*(int *)0x8C3432D4);
                    }
                    t103 = entryFirstPortFlag();
                    if (t103 == 0) {
                    } else {
                        *(unsigned int *)0x8C181628 = 0x2;
                        *(unsigned int *)(((int)stk + 4)) = 0x1;
                        t104 = 0x8C181628;
                        t105 = 0x2;
                    }
                    t127 = t103;
                    t129 = t89;
                    t130 = t86;
                    t131 = t104;
                    t132 = t105;
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    t107 = *(int *)0x8C343268;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t107;
                    t108 = *(int *)0x8C3432D8;
                    *(unsigned int *)(((int)stk + 28)) = t108;
                    t110 = t107;
                    if ((*(int *)0x8C34326C) != 0) {
                        t110 = 0x4;
                    }
                    t113 = t108;
                    if ((*(int *)0x8C3432DC) != 0) {
                        t113 = 0x4;
                    }
                    *(unsigned int *)0x8C343784 = ((*(int *)0x8C343784) + (*(int *)0x8C287B04));
                    t117 = *(int *)0x8C34378C;
                    t118 = *(int *)0x8C287B04;
                    *(unsigned int *)0x8C34378C = (t117 + t118);
                    t119 = *(int *)0x8C287D5C;
                    t122 = t119;
                    t123 = (t117 + t118);
                    t124 = 0x8C287D5C;
                    t125 = t118;
                    if (t119 != 1) {
                    } else {
                        *(unsigned int *)0x8C34324C = (*(int *)0x8C34329C);
                        t121 = *(int *)0x8C34330C;
                        *(unsigned int *)0x8C343250 = t121;
                        t122 = 0xB4;
                        t123 = 0x8C34324C;
                        t124 = 0x8C343250;
                        t125 = t121;
                    }
                    t127 = t122;
                    t128 = t123;
                    t129 = t113;
                    t130 = t110;
                    t131 = t124;
                    t132 = t125;
                    t133 = (((int)stk + 4) + 0x14);
                    t134 = 0x8C343264;
                }
                t191 = t127;
                t192 = t128;
                t193 = t129;
                t194 = t130;
                t195 = t131;
                t196 = t132;
                t197 = t133;
                t198 = t134;
            } else {
                if (((*(int *)0x8C3432A4) != 0) && (t137 = *(int *)0x8C343314, t137 != 0)) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    *(unsigned int *)0x8C301970 = 0x1;
                    t138 = *(int *)0x8C343268;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t138;
                    t139 = *(int *)0x8C3432D8;
                    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t139;
                    t141 = t138;
                    if ((*(int *)0x8C34326C) != 0) {
                        t141 = 0x4;
                    }
                    t144 = t139;
                    if ((*(int *)0x8C3432DC) != 0) {
                        t144 = 0x4;
                    }
                    if ((*(int *)0x8C287D5C) == 1) {
                        *(unsigned int *)0x8C34324C = (*(int *)0x8C34329C);
                        *(unsigned int *)0x8C343250 = (*(int *)0x8C34330C);
                    }
                    t154 = entryFirstPortFlag();
                    if (t154 != 0) {
                        *(unsigned int *)0x8C181628 = 0x2;
                        *(unsigned int *)(((int)stk + 4)) = 0x1;
                    }
                    t159 = ((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x0))), 0x0);
                    t182 = (((int (*)(int, int))(entryPortLeave))((*(int *)(((((int)stk + 4) + 0xC) + 0x4))), 0x0));
                    t184 = t144;
                    t185 = t141;
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    t162 = *(int *)0x8C3432A0;
                    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t162;
                    t163 = *(int *)0x8C343310;
                    *(unsigned int *)(((int)stk + 28)) = t163;
                    t165 = t162;
                    if ((*(int *)0x8C3432A4) != 0) {
                        t165 = 0x4;
                    }
                    t168 = t163;
                    if ((*(int *)0x8C343314) != 0) {
                        t168 = 0x4;
                    }
                    if ((*(int *)0x8C287D5C) == 1) {
                        *(unsigned int *)0x8C34324C = (*(int *)0x8C343264);
                        *(unsigned int *)0x8C343250 = (*(int *)0x8C3432D4);
                    }
                    t178 = *(int *)0x8C287B04;
                    t179 = *(int *)0x8C343788;
                    *(unsigned int *)0x8C343788 = (t179 + t178);
                    t180 = *(int *)0x8C343790;
                    t181 = *(int *)0x8C287B04;
                    *(unsigned int *)0x8C343790 = (t180 + t181);
                    t182 = 0x538;
                    t183 = (t180 + t181);
                    t184 = t168;
                    t185 = t165;
                    t186 = (t179 + t178);
                    t187 = t181;
                    t188 = (((int)stk + 4) + 0x14);
                    t189 = 0x8C343264;
                }
                t191 = t182;
                t192 = t183;
                t193 = t184;
                t194 = t185;
                t195 = t186;
                t196 = t187;
                t197 = t188;
                t198 = t189;
            }
            t200 = t191;
            t201 = t192;
            t202 = t193;
            t203 = t194;
            t204 = t195;
            t205 = t196;
            t206 = t197;
            t207 = t198;
        }
        t332 = t200;
        t333 = t201;
        t334 = t202;
        t335 = t203;
        t336 = t204;
        t337 = t205;
        t338 = t206;
        t339 = t207;
    } else {
        if ((*(int *)0x8C301BC4) == 4) {
            if ((*(int *)0x8C287B00) == t22) {
                t216 = *(int *)0x8C343268;
                *(unsigned int *)0x8C185408 = 0x1;
                t221 = (*(int *)0x8C3432A0);
                t222 = t216;
            } else {
                t218 = *(int *)0x8C3432A0;
                *(unsigned int *)0x8C185408 = 0x2;
                t221 = (*(int *)0x8C343268);
                t222 = t218;
            }
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = (t222 << 2);
            *(unsigned int *)((((t222 << 2) + 0x8C343744) + 0x0)) = ((*(int *)((((t222 << 2) + 0x8C343744) + 0x0))) + 0x1);
            t225 = ((int (*)(int, int, int))(entryPortLeave))(t221, 0x1, 0x8C343264);
            *(unsigned int *)0x8C343248 = (*(int *)((((*(int *)(((0x8C343724 + (*(int *)(((int)stk + 8)))) + 0x0))) << 2) + ((((t222 << 2) << 2) << 1) + 0x8C343424))));
            t322 = (entryAssignSlotIds());
            t324 = t221;
            t325 = t222;
        } else {
            t230 = *(int *)0x8C287B00;
            if (t230 == t22) {
                if ((*(int *)0x8C34326C) != 0) {
                    *(unsigned int *)(((int)stk + 12)) = 0x1;
                    *(unsigned int *)0x8C301970 = 0x1;
                    t235 = *(int *)0x8C343268;
                    t236 = *(int *)0x8C3432A0;
                    t237 = ((int (*)(int, int, int))(entryPortLeave))(t236, 0x0, 0x8C343264);
                    if ((*(int *)0x8C287D5C) == 1) {
                        *(unsigned int *)0x8C343248 = (*(int *)0x8C343444);
                    }
                    t243 = *(int *)((0x8C181628 + (t236 << 2)));
                    t244 = t243;
                    t246 = 0x8C287D5C;
                    if (t243 != 1) {
                    } else {
                        *(unsigned int *)(((t236 << 2) + 0x8C181628)) = 0x2;
                        *(unsigned int *)(((int)stk + 4)) = 0x1;
                        t244 = 0x8C181628;
                        t245 = (t236 << 2);
                        t246 = 0x2;
                    }
                    t260 = t244;
                    t261 = t235;
                    t262 = t236;
                    t263 = t245;
                    t264 = t246;
                } else {
                    *(unsigned int *)(((int)stk + 12)) = 0x0;
                    t248 = *(int *)0x8C343268;
                    t249 = *(int *)0x8C287B04;
                    t250 = *(int *)((((t248 << 2) + 0x8C343784) + 0x0));
                    *(unsigned int *)((((t248 << 2) + 0x8C343784) + 0x0)) = (t250 + t249);
                    if ((*(int *)0x8C287D5C) == 1) {
                        *(unsigned int *)0x8C343248 = (*(int *)0x8C343424);
                    }
                    t255 = *(int *)((0x8C181628 + (t248 << 2)));
                    t256 = t255;
                    t257 = (t250 + t249);
                    t258 = 0x8C287D5C;
                    if (t255 != 1) {
                    } else {
                        *(unsigned int *)(((t248 << 2) + 0x8C181628)) = 0x2;
                        t256 = 0x8C181628;
                        t257 = (t248 << 2);
                        t258 = 0x2;
                    }
                    t260 = t256;
                    t262 = t248;
                    t263 = t257;
                    t264 = t258;
                    t265 = t22;
                    t266 = 0x8C34329C;
                    t267 = 0x8C343264;
                }
                t312 = t260;
                t313 = 0x8C181628;
                t314 = t261;
                t315 = t262;
                t316 = t263;
                t317 = t264;
                t318 = t265;
                t319 = t266;
                t320 = t267;
            } else {
                t269 = *(int *)0x8C287B04;
                t303 = t269;
                t304 = 0x8C301BC4;
                t305 = 0x8C287C64;
                t306 = 0x8C287ADC;
                t307 = t230;
                t308 = t22;
                t309 = 0x8C34329C;
                t310 = 0x8C343264;
                if (t269 != t22) {
                } else {
                    if ((*(int *)0x8C3432A4) != 0) {
                        *(unsigned int *)(((int)stk + 12)) = 0x1;
                        *(unsigned int *)0x8C301970 = 0x1;
                        t273 = *(int *)0x8C343268;
                        if ((*(int *)0x8C287D5C) == 1) {
                            *(unsigned int *)0x8C343248 = (*(int *)0x8C343424);
                        }
                        t277 = ((int (*)(int, int, int))(entryPortLeave))(t273, 0x0, 0x8C343264);
                        t278 = *(int *)((0x8C181628 + (t273 << 2)));
                        t279 = t278;
                        if (t278 != 1) {
                        } else {
                            *(unsigned int *)(((t273 << 2) + 0x8C181628)) = 0x2;
                            *(unsigned int *)(((int)stk + 4)) = 0x1;
                            t279 = 0x8C181628;
                            t280 = (t273 << 2);
                            t281 = 0x2;
                        }
                        t295 = t279;
                        t296 = t273;
                        t297 = t280;
                        t298 = t281;
                    } else {
                        *(unsigned int *)(((int)stk + 12)) = 0x0;
                        t283 = *(int *)0x8C3432A0;
                        t284 = *(int *)0x8C287B00;
                        t285 = *(int *)((((t283 << 2) + 0x8C343784) + 0x0));
                        *(unsigned int *)((((t283 << 2) + 0x8C343784) + 0x0)) = (t285 + t284);
                        if ((*(int *)0x8C287D5C) == 1) {
                            *(unsigned int *)0x8C343248 = (*(int *)0x8C343444);
                        }
                        t290 = *(int *)((0x8C181628 + (t283 << 2)));
                        t291 = t290;
                        t292 = (t285 + t284);
                        t293 = 0x8C287D5C;
                        if (t290 != 1) {
                        } else {
                            *(unsigned int *)(((t283 << 2) + 0x8C181628)) = 0x2;
                            t291 = 0x8C181628;
                            t292 = (t283 << 2);
                            t293 = 0x2;
                        }
                        t295 = t291;
                        t296 = t283;
                        t297 = t292;
                        t298 = t293;
                        t299 = t22;
                        t300 = 0x8C34329C;
                        t301 = 0x8C343264;
                    }
                    t303 = t295;
                    t304 = 0x8C181628;
                    t305 = t296;
                    t306 = t297;
                    t307 = t298;
                    t308 = t299;
                    t309 = t300;
                    t310 = t301;
                }
                t312 = t303;
                t313 = t304;
                t315 = t305;
                t316 = t306;
                t317 = t307;
                t318 = t308;
                t319 = t309;
                t320 = t310;
            }
            t322 = t312;
            t323 = t313;
            t324 = t314;
            t325 = t315;
            t326 = t316;
            t327 = t317;
            t328 = t318;
            t329 = t319;
            t330 = t320;
        }
        t332 = t322;
        t333 = t323;
        t334 = t324;
        t335 = t325;
        t336 = t326;
        t337 = t327;
        t338 = t328;
        t339 = t329;
        t340 = t330;
    }
    t343 = t332;
    t344 = t333;
    t345 = t336;
    t346 = t337;
    t347 = t338;
    t348 = t339;
    t349 = t340;
    t350 = 0x0;
    for (;;) {
        if ((int)t350 >= (int)0x4) {
            break;
        }
        t346 = t350;
        t346 = (t346 << 1);
        t346 = (t346 + 0x8C185298);
        t343 = (*(short *)0x8C343262);
        t345 = (*(short *)((t346 + 0x0)));
        t343 = (unsigned short)t343;
        t345 = (unsigned short)t345;
        if (((t343 & t345) != 0) && (t356 = ((t343 & t345) == 0), t343 = 0x8C181628, t345 = t350, t345 = (t345 << 2), t357 = *(int *)((t345 + t343)), t346 = t357, t346 == 0)) {
            t346 = 0x8C0AB234;
            t347 = t350;
            t343 = (entryPortAtRound5Clean(t347));
            if (t343 != 0) {
                t343 = 0x8C181628;
                t346 = t350;
                t346 = (t346 << 2);
                *(unsigned int *)((t346 + t343)) = 0x1;
                t359 = t346;
            }
            t363 = t359;
        } else {
            t361 = t344;
            t362 = t345;
            t363 = t346;
            t364 = t347;
            t365 = t348;
            t366 = t349;
        }
        t344 = t361;
        t345 = t362;
        t346 = t363;
        t347 = t364;
        t348 = t365;
        t349 = t366;
        t350 = (t350 + 0x1);
    }
    t367 = set_event(0x2C, 0x8C0855C6);
    *(unsigned int *)((t367 + 0x14)) = 0x32;
    *(unsigned int *)((t367 + 0x18)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)((t367 + 0x1C)) = t335;
    *(unsigned int *)((t367 + 0x20)) = t334;
    *(float *)((t367 + 0x24)) = 0.0f;
    *(unsigned int *)((t367 + 0x28)) = (*(int *)(((int)stk + 4)));
    if ((*(int *)(((int)stk + 4))) != 0) {
        *(unsigned int *)((((t335 << 2) + 0x8C343804) + 0x0)) = 0x1;
    }
    return 0x24;
}
