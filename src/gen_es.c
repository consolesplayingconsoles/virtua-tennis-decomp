/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int);
int btnGuideDrawB(int, Stk3, float);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camSetupView(void);
int dbgMenuGetValue(int, int);
int entryAllReady(void);
int entryCountJoined(void);
int entryIsVersus(void);
int entryPickRandomCourt(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int fadeBlinkStart(int);
int getID_Color(int, float);
int hudFontNumPut(int, Stk3, float);
int hudSignFirstPut(Stk3);
int lightUpdate(int, int);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, float);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlLineSetThickness(float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSingleLine(int, int, int);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3, float);
int primRectInc(int, int, int, int, int, int, int, int);
int resultBoxDraw(int, int, Stk3);
int resultSideDraw(int, Stk3, float);
int scoreInit(void);
int selCellClearCur(void);
int selCellSetChosen(int);
int selCursorInput(int, int);
int selCursorPlace(int);
int selFirstJoinedPort(void);
int selModelSpawn(int, int);
int selPortsExec(void);
int selSideCheck(void);
int selSlot0FlagClear(void);
int selSlot0FlagSet(void);
int sndSeCursor(void);
int sprPutAtAlpha(int, Stk3, float);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int vecSegCrossXZ(Stk3);
int selExec(int a4, int a5);
int resultDraw(int a4, int a5, int a6, float f4);
int racketHitCheck(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);

int selExec(int a4, int a5)
{
    int t4;
    int t7;
    int t8;
    int t12;
    int t48;
    int t50;
    int t44;
    int t15;
    int t20;
    int t36;
    int t37;
    int t52;
    int t69;
    int t55;
    int t64;
    int t59;
    int t60;
    int t61;
    int t62;
    int t73;
    int t74;
    int t75;
    int t76;
    int t107;
    int t108;
    int t167;
    int t170;
    int t163;
    int t111;
    int t162;
    int t118;
    int t119;
    int t123;
    int t126;
    int t128;
    int t132;
    int t133;
    int t140;
    int t145;
    int t149;
    int t150;
    int t157;
    int t460;
    int t175;
    int t450;
    int t180;
    int t181;
    int t183;
    int t184;
    int t188;
    int t221;
    int t214;
    int t215;
    int t191;
    int t193;
    int t194;
    int t204;
    int t225;
    int t227;
    int t228;
    int t229;
    int t230;
    int t231;
    int t232;
    int t252;
    int t263;
    int t275;
    int t307;
    int t308;
    int t309;
    int t301;
    int t302;
    int t278;
    int t280;
    int t281;
    int t291;
    int t312;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t339;
    int t350;
    int t362;
    int t394;
    int t395;
    int t396;
    int t388;
    int t389;
    int t365;
    int t367;
    int t368;
    int t378;
    int t399;
    int t401;
    int t402;
    int t403;
    int t404;
    int t405;
    int t406;
    int t426;
    int t437;
    int t576;
    int t490;
    int t506;
    int t507;
    int t569;
    int t509;
    int t562;
    int t510;
    int t519;
    int t517;
    int t518;
    int t525;
    int t526;
    int t527;
    int t528;
    int t529;
    int t540;
    int t556;
    int t544;
    int t5;
    int t6;
    int t46;
    int t33;
    int t38;
    int t41;
    int t42;
    int t43;
    int t53;
    int t54;
    int t70;
    int t72;
    int t65;
    int t67;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t104;
    int t106;
    int t102;
    int t98;
    int t166;
    int t161;
    int t144;
    int t129;
    int t143;
    int t146;
    int t160;
    int t439;
    int t352;
    int t265;
    int t220;
    int t222;
    int t213;
    int t195;
    int t196;
    int t207;
    int t208;
    int t248;
    int t249;
    int t253;
    int t300;
    int t282;
    int t283;
    int t294;
    int t295;
    int t335;
    int t336;
    int t340;
    int t387;
    int t369;
    int t370;
    int t381;
    int t382;
    int t422;
    int t423;
    int t427;
    int t523;
    int stk[15];

    lightUpdate(0x0, a5);
    *(float *)0x8C287A04 = 7.0f;
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
    t4 = (selPortsExec());
    t7 = a4;
    t8 = 0x0;
    for (;;) {
        if ((int)t8 < (int)0x4) {
            t6 = 0x56C;
            t7 = t8;
            t7 = (t7 << 2);
            t6 = (t6 + 0x8C343258);
            t7 = (t7 + t6);
            t6 = 0x8C343258;
            t7 = (*(int *)((t7 + 0x0)));
            t6 = (t6 + 0xC);
            t7 = (t7 * 0x38);
            t7 = (t7 + t6);
            t6 = t8;
            t4 = (*(short *)((t7 + 0x14)));
            t6 = (t6 << 1);
            t7 = (unsigned short)t4;
            t4 = 0x8C185298;
            t12 = *(short *)((t6 + t4));
            t4 = (*(short *)0x8C343260);
            t4 = (unsigned short)t4;
            t48 = t5;
            t50 = t7;
            if ((t4 & (unsigned short)t12) == 0) {
            } else {
                t4 = t7;
                t44 = t5;
                if (t4 != 1) {
                    t46 = t7;
                } else {
                    t6 = 0x56C;
                    t7 = t8;
                    t7 = (t7 << 2);
                    t4 = t8;
                    t6 = (t6 + 0x8C343258);
                    t6 = (t6 + t7);
                    t15 = *(int *)((t6 + 0x0));
                    t6 = 0x8C343258;
                    t6 = (t6 + 0xC);
                    t5 = 0x30;
                    t4 = (t4 << 1);
                    t5 = (t5 + ((t15 * 0x38) + t6));
                    t5 = (*(int *)((t5 + 0x0)));
                    t5 = 0x8C185298;
                    t6 = (*(short *)((t5 + t4)));
                    t4 = (*(short *)0x8C343260);
                    t6 = (~t6);
                    t4 = (t4 & t6);
                    t6 = 0x4CC;
                    *(unsigned short *)0x8C343260 = t4;
                    t6 = (t6 + 0x8C343258);
                    t6 = (t6 + t7);
                    t7 = (t7 + 0x8C343744);
                    *(unsigned int *)((t6 + 0x0)) = 0x0;
                    *(unsigned int *)((t7 + 0x0)) = 0x0;
                    t7 = 0x0;
                    for (;;) {
                        if ((unsigned int)t7 >= (unsigned int)0x20) {
                            break;
                        }
                        t4 = 0x1CC;
                        t6 = 0xFFFFFFFF;
                        t4 = (t4 + 0x8C343258);
                        t4 = (t4 + (((t8 << 2) << 2) << 1));
                        *(unsigned int *)((t7 + t4)) = t6;
                        t7 = (t7 + 0x4);
                    }
                    t6 = 0x56C;
                    t5 = t8;
                    t5 = (t5 << 2);
                    t4 = 0x8C343258;
                    t6 = (t6 + 0x8C343258);
                    *(unsigned int *)(((int)stk + 20)) = t5;
                    t5 = (t5 + t6);
                    t6 = (*(int *)(((int)stk + 20)));
                    t20 = *(int *)((t5 + 0x0));
                    t4 = (t4 + 0xC);
                    t5 = 0x56C;
                    t7 = 0x56C;
                    t5 = (t5 + 0x8C343258);
                    t5 = (t5 + t6);
                    t5 = (*(int *)((t5 + 0x0)));
                    t7 = (t7 + 0x8C343258);
                    t5 = (t5 * 0x38);
                    t6 = (*(int *)((t5 + t4)));
                    t4 = 0x8C3343F0;
                    *(unsigned int *)(((t20 << 2) + t4)) = t6;
                    t6 = (*(int *)(((int)stk + 20)));
                    t7 = (t7 + t6);
                    t6 = 0x8C084B1C;
                    t7 = (*(int *)((t7 + 0x0)));
                    t7 = (t7 << 2);
                    t7 = (t7 + 0x8C1854A8);
                    t4 = (fadeBlinkStart(t7));
                    t7 = 0x56C;
                    t6 = (*(int *)(((int)stk + 20)));
                    t7 = (t7 + 0x8C343258);
                    t4 = 0x8C3343F0;
                    t7 = (t7 + t6);
                    t7 = (*(int *)((t7 + 0x0)));
                    t7 = (t7 << 2);
                    t7 = (*(int *)((t7 + t4)));
                    t4 = (selCellSetChosen(t7));
                    t6 = 0x8C0B0BBC;
                    t4 = (entryCountJoined());
                    t7 = t8;
                    if (t4 == 1) {
                        t6 = 0x1C9C380;
                        *(unsigned int *)0x8C343A50 = t6;
                        t33 = t6;
                    }
                    t6 = t33;
                    t7 = (t7 << 2);
                    t6 = 0x8C343258;
                    t6 = (t6 + 0xC);
                    t4 = 0x8C343878;
                    *(unsigned int *)((t7 + t4)) = 0x1;
                    t36 = *(int *)(((0x8C3437C4 + t7) + 0x0));
                    *(unsigned int *)(((int)stk + 24)) = ((t36 * 0x38) + t6);
                    t37 = *(int *)((((t36 * 0x38) + t6) + 0x0));
                    t4 = t37;
                    if ((t4 == 16) || (t38 = (t4 == 16), t4 = t37, t4 == 17)) {
                        t4 = 0x8C343878;
                        t6 = t8;
                        t6 = (t6 << 2);
                        *(unsigned int *)((t6 + t4)) = 0x2;
                    }
                    t6 = 0x8C0E878E;
                    t4 = (unlockCountW0());
                    if ((t4 == 0) || (t6 = 0x8C287D5C, t41 = *(int *)((t6 + 0x0)), t42 = (t4 == 0), t4 = t41, t4 == 2)) {
                        t4 = 0x8C343878;
                        t5 = t8;
                        t6 = 0x2;
                        t5 = (t5 << 2);
                        *(unsigned int *)((t5 + t4)) = t6;
                        t43 = t5;
                    }
                    t44 = t43;
                }
                t48 = t44;
                t50 = t46;
            }
            t5 = t48;
            t7 = t50;
            t8 = (t8 + 0x1);
            continue;
        }
        break;
    }
    t52 = entryCountJoined();
    t69 = t52;
    if ((t52 == 2) && ((t53 = *(short *)0x8C343278, t53 != 0) && (t54 = *(short *)0x8C3432B0, t54 != 0))) {
        t55 = entryAllReady();
        t64 = t55;
        if (t55 != 0) {
            *(unsigned int *)0x8C343AB4 = 0x5A;
            selCellSetChosen((*(int *)0x8C3343F0));
            t59 = selCellSetChosen((*(int *)0x8C3343F4));
            t60 = *(int *)0x8C343AB4;
            *(unsigned int *)0x8C343AB4 = (t60 + 0x1);
            t61 = t59;
            t62 = (t60 + 0x1);
            if ((int)t60 >= (int)0x5A) {
                *(unsigned short *)0x8C343260 = 0x0;
                *(unsigned int *)0x8C343874 = 0x1;
                t61 = 0x0;
                t62 = 0x8C343874;
            }
            *(unsigned int *)0x8C343A50 = 0x1C9C380;
            t64 = t61;
            t65 = 0x8C343A50;
            t67 = t62;
        }
        t69 = t64;
        t70 = t65;
        t72 = t67;
    }
    t73 = t69;
    t74 = t70;
    t75 = t72;
    t76 = 0x0;
    for (;;) {
        if ((int)t76 >= (int)0x4) {
            break;
        }
        t74 = 0x8C29B898;
        t73 = t76;
        t73 = (t73 << 2);
        t73 = (*(int *)((t74 + t73)));
        t73 = (*(int *)((t73 + 0x10)));
        if (((t73 & 8) != 0) && ((t75 = 0x8C185424, t85 = *(int *)((t75 + 0x0)), t85 == 0) && ((t86 = *(int *)0x8C287D5C, t87 = ((t73 & 8) == 0), t73 = t86, t73 != 2) && (t75 = 0x8C343262, t88 = *(short *)((t75 + 0x0)), t89 = ((t73 & 8) == 0), t73 = t88, t74 = (unsigned short)t73, t73 = 0x8C185298, t90 = *(short *)(((t76 << 1) + t73)), t75 = t90, t75 = (unsigned short)t75, (t74 & t75) == 0)))) {
            t73 = (entryCountJoined());
            t75 = 0x2;
            if ((int)t73 < (int)t75) {
                t74 = (*(int *)0x8C343AB0);
                if (t74 != 0) {
                    t75 = 0x8C343874;
                    t74 = 0x8C343AB0;
                    *(unsigned int *)((t74 + 0x0)) = 0x0;
                    *(unsigned int *)((t75 + 0x0)) = 0x0;
                    *(unsigned int *)0x8C343AB4 = 0x0;
                    t73 = (selSlot0FlagClear());
                    t73 = (t73 + 0x1);
                    t75 = 0x8C34390C;
                    *(unsigned int *)((t75 + 0x0)) = t73;
                    t73 = (selCellClearCur());
                } else {
                    t98 = t75;
                }
                t74 = 0x8C343A50;
                t75 = t98;
                t75 = 0x8C0B0BE4;
                *(unsigned int *)((t74 + 0x0)) = 0x0;
                t73 = (entryPortJoin(t76, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12)));
            } else {
                t102 = t75;
            }
            t106 = t102;
        } else {
            t104 = t74;
            t106 = t75;
        }
        t74 = t104;
        t75 = t106;
        t76 = (t76 + 0x1);
    }
    t107 = *(int *)0x8C343A50;
    *(unsigned int *)0x8C343A50 = (t107 + 0x1);
    t108 = *(short *)0x8C343260;
    t167 = t108;
    t170 = (t107 + 0x1);
    if (t108 == 0) {
        t163 = t108;
        if ((*(int *)0x8C343AB0) != 0) {
            t166 = (t107 + 0x1);
        } else {
            t111 = entryAllReady();
            t162 = t111;
            if (t111 != 0) {
                if ((*(int *)0x8C287D5C) == 2) {
                    *(unsigned int *)0x8C343AB4 = 0xB4;
                    *(unsigned int *)0x8C343AB0 = 0x0;
                    *(unsigned int *)0x8C343874 = 0x1;
                }
                if ((*(int *)0x8C287D5C) == 1) {
                    t118 = entryIsVersus();
                    if (t118 == 0) {
                        *(unsigned int *)0x8C343AB0 = 0x1;
                        t119 = selFirstJoinedPort();
                        selCursorPlace(((-t119) + 0x1));
                        selCellSetChosen((*(int *)0x8C343248));
                        t123 = selSlot0FlagSet();
                        *(unsigned int *)((((((-t123) + 0x1) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)((0x8C343ACC + (((-(selFirstJoinedPort())) + 0x1) << 2))));
                        t126 = selSlot0FlagClear();
                        t144 = (selModelSpawn(t126, 0x0));
                    } else {
                        t128 = entryCountJoined();
                        if ((t128 != 2) && (t129 = *(int *)0x8C287D5C, t129 != 2)) {
                            *(unsigned int *)0x8C185294 = 0x0;
                            *(unsigned int *)0x8C343AB0 = 0x1;
                            for (;;) {
                                *(unsigned int *)0x8C343248 = (entryPickRandomCourt());
                                t132 = *(int *)0x8C343248;
                                t133 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x0));
                                if (t133 != t132) {
                                    break;
                                }
                            }
                            *(unsigned int *)(((((((selFirstJoinedPort()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
                            selCellSetChosen((*(int *)0x8C343248));
                            *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)0x8C343248);
                            t140 = selSlot0FlagClear();
                            t143 = (selModelSpawn(t140, 0x0));
                        } else {
                            *(unsigned int *)0x8C185294 = 0x1;
                            t143 = (scoreInit());
                        }
                        t144 = t143;
                    }
                    t161 = t144;
                } else {
                    t145 = entryCountJoined();
                    if ((t145 != 2) && (t146 = *(int *)0x8C287D5C, t146 != 2)) {
                        *(unsigned int *)0x8C185294 = 0x0;
                        *(unsigned int *)0x8C343AB0 = 0x1;
                        for (;;) {
                            *(unsigned int *)0x8C343248 = (entryPickRandomCourt());
                            t149 = *(int *)0x8C343248;
                            t150 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x0));
                            if (t150 != t149) {
                                break;
                            }
                        }
                        *(unsigned int *)(((((((selFirstJoinedPort()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
                        selCellSetChosen((*(int *)0x8C343248));
                        *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)0x8C343248);
                        t157 = selSlot0FlagClear();
                        t160 = (selModelSpawn(t157, 0x0));
                    } else {
                        *(unsigned int *)0x8C185294 = 0x1;
                        t160 = (scoreInit());
                    }
                    t161 = t160;
                }
                t162 = t161;
            }
            t163 = t162;
        }
        t167 = t163;
        t170 = t166;
    }
    t460 = t167;
    if ((*(int *)0x8C343AB0) == 0) {
    } else {
        t175 = *(int *)0x8C343874;
        t450 = 0x8C343874;
        if (t175 != 0) {
        } else {
            if ((*(int *)0x8C287D5C) == 1) {
                t180 = *(int *)0x8C343AB4;
                if ((int)t180 > (int)0x1) {
                    t181 = entryIsVersus();
                    if (t181 == 0) {
                        t183 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x4));
                        t184 = selCursorInput(t183, (0x1 - t183));
                        if (t184 == 0) {
                        } else {
                            *(unsigned int *)0x8C343AB4 = 0x3E8;
                            *(unsigned int *)0x8C343874 = 0x1;
                        }
                        t265 = t184;
                    } else {
                        t188 = *(int *)0x8C343AB4;
                        t221 = 0x14;
                        if (((int)t188 > (int)0x14) && ((int)t188 < (int)0x6E)) {
                            t214 = 0x14;
                            t215 = 0x8C0F7BAC;
                            if (((int)((int)t188 % (int)0xA)) == 0) {
                                selCellClearCur();
                                for (;;) {
                                    t191 = entryPickRandomCourt();
                                    *(unsigned int *)0x8C343248 = t191;
                                    *(unsigned int *)0x8C343D38 = t191;
                                    t193 = *(int *)0x8C343248;
                                    t194 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x0));
                                    if ((t194 != t193) && (t195 = *(int *)0x8C343D3C, t196 = *(int *)0x8C343D38, t196 != t195)) {
                                        break;
                                    }
                                }
                                *(unsigned int *)(((((((selFirstJoinedPort()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
                                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)0x8C343248);
                                selCellSetChosen((*(int *)0x8C343248));
                                t204 = *(int *)0x8C343D3C;
                                if ((*(int *)0x8C343D38) != t204) {
                                    sndSeCursor();
                                } else {
                                    t207 = 0x8C343D3C;
                                    t208 = t204;
                                }
                                *(unsigned int *)0x8C343D3C = (*(int *)0x8C343D38);
                                t213 = t207;
                                t214 = t208;
                                t215 = 0x8C343D3C;
                            }
                            t220 = t213;
                            t221 = t214;
                            t222 = t215;
                        }
                        t225 = *(int *)0x8C343AB4;
                        if (t225 == 110) {
                            *(unsigned int *)0x8C185424 = 0x1;
                        }
                        t227 = t225;
                        t228 = t220;
                        t229 = t221;
                        t230 = t222;
                        t231 = 0x8C29B898;
                        t232 = 0x8C185298;
                        for (;;) {
                            if ((unsigned int)t231 >= (unsigned int)0x8C29B8A8) {
                                break;
                            }
                            t229 = (*(int *)((t231 + 0x0)));
                            t230 = (*(int *)((t229 + 0x10)));
                            if ((t230 & 0x5) != 0) {
                                t230 = (*(short *)((t232 + 0x0)));
                                t227 = (*(short *)0x8C343262);
                                t230 = (unsigned short)t230;
                                t227 = (unsigned short)t227;
                                if (((t227 & t230) != 0) && (t228 = 0x8C343AB4, t248 = ((t227 & t230) == 0), t230 = 0x3, t249 = *(int *)((t228 + 0x0)), t229 = t249, (int)t229 > (int)t230)) {
                                    t230 = 0xB4;
                                    *(unsigned int *)0x8C185424 = 0x1;
                                    t229 = (*(int *)0x8C343AB4);
                                    t229 = (t229 + t230);
                                    *(unsigned int *)0x8C343AB4 = t229;
                                }
                            }
                            t231 = (t231 + 0x4);
                            t232 = (t232 + 0x2);
                        }
                        if ((*(int *)0x8C185424) != 0) {
                            t252 = selSlot0FlagClear();
                            *(unsigned short *)(((0x14 + ((t252 * 0x38) + 0x8C343264)) + 0x0)) = 0x1;
                            t253 = ((t252 * 0x38) + 0x8C343264);
                        } else {
                            t253 = t227;
                        }
                        t263 = t253;
                        if ((int)(*(int *)0x8C343AB4) >= (int)0xB4) {
                            *(unsigned int *)0x8C343874 = 0x1;
                            t263 = 0x8C343874;
                        }
                        *(unsigned int *)0x8C343A50 = 0x1C9C380;
                        t265 = t263;
                    }
                    t352 = t265;
                } else {
                    t275 = *(int *)0x8C343AB4;
                    t307 = 0x1;
                    t308 = 0x14;
                    t309 = t180;
                    if (((int)t275 > (int)0x14) && ((int)t275 < (int)0x6E)) {
                        t301 = 0x14;
                        t302 = 0x8C0F7BAC;
                        if (((int)((int)t275 % (int)0xA)) == 0) {
                            selCellClearCur();
                            for (;;) {
                                t278 = entryPickRandomCourt();
                                *(unsigned int *)0x8C343248 = t278;
                                *(unsigned int *)0x8C343D38 = t278;
                                t280 = *(int *)0x8C343248;
                                t281 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x0));
                                if ((t281 != t280) && (t282 = *(int *)0x8C343D3C, t283 = *(int *)0x8C343D38, t283 != t282)) {
                                    break;
                                }
                            }
                            *(unsigned int *)(((((((selFirstJoinedPort()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
                            *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)0x8C343248);
                            selCellSetChosen((*(int *)0x8C343248));
                            t291 = *(int *)0x8C343D3C;
                            if ((*(int *)0x8C343D38) != t291) {
                                sndSeCursor();
                            } else {
                                t294 = 0x8C343D3C;
                                t295 = t291;
                            }
                            *(unsigned int *)0x8C343D3C = (*(int *)0x8C343D38);
                            t300 = t294;
                            t301 = t295;
                            t302 = 0x8C343D3C;
                        }
                        t307 = t300;
                        t308 = t301;
                        t309 = t302;
                    }
                    t312 = *(int *)0x8C343AB4;
                    if (t312 == 110) {
                        *(unsigned int *)0x8C185424 = 0x1;
                    }
                    t314 = t312;
                    t315 = t307;
                    t316 = t308;
                    t317 = t309;
                    t318 = 0x8C29B898;
                    t319 = 0x8C185298;
                    for (;;) {
                        if ((unsigned int)t318 >= (unsigned int)0x8C29B8A8) {
                            break;
                        }
                        t316 = (*(int *)((t318 + 0x0)));
                        t317 = (*(int *)((t316 + 0x10)));
                        if ((t317 & 0x5) != 0) {
                            t317 = (*(short *)((t319 + 0x0)));
                            t314 = (*(short *)0x8C343262);
                            t317 = (unsigned short)t317;
                            t314 = (unsigned short)t314;
                            if (((t314 & t317) != 0) && (t315 = 0x8C343AB4, t335 = ((t314 & t317) == 0), t317 = 0x3, t336 = *(int *)((t315 + 0x0)), t316 = t336, (int)t316 > (int)t317)) {
                                t317 = 0xB4;
                                *(unsigned int *)0x8C185424 = 0x1;
                                t316 = (*(int *)0x8C343AB4);
                                t316 = (t316 + t317);
                                *(unsigned int *)0x8C343AB4 = t316;
                            }
                        }
                        t318 = (t318 + 0x4);
                        t319 = (t319 + 0x2);
                    }
                    if ((*(int *)0x8C185424) != 0) {
                        t339 = selSlot0FlagClear();
                        *(unsigned short *)(((0x14 + ((t339 * 0x38) + 0x8C343264)) + 0x0)) = 0x1;
                        t340 = ((t339 * 0x38) + 0x8C343264);
                    } else {
                        t340 = t314;
                    }
                    t350 = t340;
                    if ((int)(*(int *)0x8C343AB4) >= (int)0xB4) {
                        *(unsigned int *)0x8C343874 = 0x1;
                        t350 = 0x8C343874;
                    }
                    *(unsigned int *)0x8C343A50 = 0x1C9C380;
                    t352 = t350;
                }
                t439 = t352;
            } else {
                t362 = *(int *)0x8C343AB4;
                t394 = t175;
                t395 = 0x14;
                t396 = t170;
                if (((int)t362 > (int)0x14) && ((int)t362 < (int)0x6E)) {
                    t388 = 0x14;
                    t389 = 0x8C0F7BAC;
                    if (((int)((int)t362 % (int)0xA)) == 0) {
                        selCellClearCur();
                        for (;;) {
                            t365 = entryPickRandomCourt();
                            *(unsigned int *)0x8C343248 = t365;
                            *(unsigned int *)0x8C343D38 = t365;
                            t367 = *(int *)0x8C343248;
                            t368 = *(int *)(((((selSlot0FlagSet()) * 0x38) + 0x8C343264) + 0x0));
                            if ((t368 != t367) && (t369 = *(int *)0x8C343D3C, t370 = *(int *)0x8C343D38, t370 != t369)) {
                                break;
                            }
                        }
                        *(unsigned int *)(((((((selFirstJoinedPort()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
                        *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x0)) = (*(int *)0x8C343248);
                        selCellSetChosen((*(int *)0x8C343248));
                        t378 = *(int *)0x8C343D3C;
                        if ((*(int *)0x8C343D38) != t378) {
                            sndSeCursor();
                        } else {
                            t381 = 0x8C343D3C;
                            t382 = t378;
                        }
                        *(unsigned int *)0x8C343D3C = (*(int *)0x8C343D38);
                        t387 = t381;
                        t388 = t382;
                        t389 = 0x8C343D3C;
                    }
                    t394 = t387;
                    t395 = t388;
                    t396 = t389;
                }
                t399 = *(int *)0x8C343AB4;
                if (t399 == 110) {
                    *(unsigned int *)0x8C185424 = 0x1;
                }
                t401 = t399;
                t402 = t394;
                t403 = t395;
                t404 = t396;
                t405 = 0x8C29B898;
                t406 = 0x8C185298;
                for (;;) {
                    if ((unsigned int)t405 >= (unsigned int)0x8C29B8A8) {
                        break;
                    }
                    t403 = (*(int *)((t405 + 0x0)));
                    t404 = (*(int *)((t403 + 0x10)));
                    if ((t404 & 0x5) != 0) {
                        t404 = (*(short *)((t406 + 0x0)));
                        t401 = (*(short *)0x8C343262);
                        t404 = (unsigned short)t404;
                        t401 = (unsigned short)t401;
                        if (((t401 & t404) != 0) && (t402 = 0x8C343AB4, t422 = ((t401 & t404) == 0), t404 = 0x3, t423 = *(int *)((t402 + 0x0)), t403 = t423, (int)t403 > (int)t404)) {
                            t404 = 0xB4;
                            *(unsigned int *)0x8C185424 = 0x1;
                            t403 = (*(int *)0x8C343AB4);
                            t403 = (t403 + t404);
                            *(unsigned int *)0x8C343AB4 = t403;
                        }
                    }
                    t405 = (t405 + 0x4);
                    t406 = (t406 + 0x2);
                }
                if ((*(int *)0x8C185424) != 0) {
                    t426 = selSlot0FlagClear();
                    *(unsigned short *)(((0x14 + ((t426 * 0x38) + 0x8C343264)) + 0x0)) = 0x1;
                    t427 = ((t426 * 0x38) + 0x8C343264);
                } else {
                    t427 = t401;
                }
                t437 = t427;
                if ((int)(*(int *)0x8C343AB4) >= (int)0xB4) {
                    *(unsigned int *)0x8C343874 = 0x1;
                    t437 = 0x8C343874;
                }
                *(unsigned int *)0x8C343A50 = 0x1C9C380;
                t439 = t437;
            }
            *(unsigned int *)0x8C343AB4 = ((*(int *)0x8C343AB4) + 0x1);
            t450 = t439;
        }
        t460 = t450;
    }
    t576 = t460;
    if ((*(int *)0x8C343874) == 0) {
    } else {
        *(unsigned int *)0x8C343A54 = ((*(int *)0x8C343A54) + 0x1);
        if ((*(int *)0x8C185294) != 0) {
            *(unsigned int *)(((int)stk + 20)) = 0x50;
        } else {
            *(unsigned int *)(((int)stk + 20)) = 0x50;
            *(unsigned int *)0x8C1855B8 = 0x1;
            *(unsigned int *)(((((((selSlot0FlagSet()) << 2) << 2) << 1) + 0x8C343424) + 0x0)) = (*(int *)0x8C343248);
        }
        if ((int)(*(int *)0x8C343A54) > (int)0x50) {
            *(unsigned int *)0x8C343A54 = (*(int *)(((int)stk + 20)));
            *(unsigned int *)0x8C1855BC = 0x0;
            *(unsigned int *)0x8C1855B8 = 0x1;
        }
        t490 = *(int *)0x8C343A54;
        if ((int)t490 >= (int)0x50) {
            *(unsigned int *)0x8C343D40 = 0xFF;
        } else {
            if ((int)t490 > (int)0x46) {
                *(unsigned int *)0x8C343D40 = (int)((float)(((t490 - 70) << 8) - (t490 - 70)) / 10.0f);
            } else {
                *(unsigned int *)0x8C343D40 = 0x0;
            }
        }
        *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 0.0f, 9.99999975e-05f);
        t506 = *(int *)0x8C343A54;
        t507 = *(int *)(((int)stk + 20));
        t569 = (primRectInc(0x280, 0x1E0, (((unsigned char)(*(signed char *)0x8C343D40) << 16) << 8), 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
        if ((int)t506 < (int)t507) {
        } else {
            t509 = *(int *)0x8C343AC8;
            t562 = t509;
            if (t509 != 2) {
            } else {
                *(unsigned int *)0x8C343908 = 0x1;
                t510 = entryCountJoined();
                t519 = t510;
                if (t510 != 2) {
                    if ((*(int *)0x8C287D5C) != 2) {
                        selCellClearCur();
                    }
                    t517 = selSlot0FlagClear();
                    t518 = selSideCheck();
                    *(unsigned int *)(((0x4 + ((t517 * 0x38) + 0x8C343264)) + 0x0)) = t518;
                    t519 = t518;
                }
                *(unsigned int *)0x8C287C50 = 0x96;
                if ((*(int *)0x8C185410) != 0) {
                    *(unsigned int *)0x8C20D150 = 0x2;
                    *(unsigned int *)0x8C185410 = 0x0;
                    t523 = 0x2;
                } else {
                    *(unsigned int *)0x8C20D150 = 0x3;
                    t523 = 0x3;
                }
                t525 = t519;
                t526 = t523;
                t527 = 0x8C287C50;
                t528 = 0x8C185298;
                t529 = 0x0;
                for (;;) {
                    if ((unsigned int)t528 >= (unsigned int)0x8C1852A0) {
                        break;
                    }
                    t527 = (*(short *)((t528 + 0x0)));
                    t525 = (*(short *)0x8C343262);
                    t527 = (unsigned short)t527;
                    t525 = (unsigned short)t525;
                    if ((t525 & t527) != 0) {
                        t527 = 0x56C;
                        t527 = (t527 + 0x8C343258);
                        t527 = (t527 + t529);
                        t526 = (*(int *)((t527 + 0x0)));
                        t527 = 0x8C343258;
                        t527 = (t527 + 0xC);
                        t526 = (t526 * 0x38);
                        t526 = (t526 + t527);
                        *(unsigned int *)((t526 + 0x8)) = 0x0;
                    }
                    t528 = (t528 + 0x2);
                    t529 = (t529 + 0x4);
                }
                FUN_8c0eaf00(0x0, 0x0, 0x0);
                if ((*(int *)0x8C287ADC) == 4) {
                    *(unsigned int *)0x8C185408 = 0x1;
                }
                t540 = *(int *)0x8C287D5C;
                t556 = t540;
                if (t540 == 1) {
                    t544 = *(int *)0x8C287ADC;
                    if (t544 == 2) {
                        if ((*(int *)0x8C185444) == (*(int *)0x8C343268)) {
                            *(unsigned int *)0x8C18540C = 0x2;
                            *(unsigned int *)0x8C185408 = 0x2;
                        } else {
                            *(unsigned int *)0x8C18540C = 0x1;
                            *(unsigned int *)0x8C185408 = 0x1;
                        }
                    }
                    t556 = t544;
                }
                t562 = t556;
            }
            t569 = t562;
        }
        t576 = t569;
    }
    return t576;
}

int resultDraw(int a4, int a5, int a6, float f4)
{
    int t116;
    int t147;
    int t118;
    int t140;
    int stk[65];

    *(unsigned int *)(((int)stk + 148)) = a4;
    *(unsigned int *)(((int)stk + 144)) = a5;
    *(unsigned int *)(((int)stk + 140)) = a6;
    *(volatile int *)0x8C301B90;
    *(volatile int *)0x8C3417C4;
    *(float *)(((int)stk + 136)) = ((f4 * 178.0f) / 256.0f);
    *(Stk3 *)((((int)stk + 128) + 0x3C)) = vecMake(41.0f, 71.0f, 0.5f);
    *(unsigned int *)(((int)stk + 132)) = (getID_Color((*(int *)0x8C301B9C), f4));
    *(unsigned int *)(((int)stk + 128)) = (getID_Color((*(int *)0x8C301BA0), f4));
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 107.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 108)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 108)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 308.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultSideDraw((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 92)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 188.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 69.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301B9C), *(Stk3 *)(((int)stk + 76)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 385.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 69.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    btnGuideDrawB((*(int *)0x8C301BA0), *(Stk3 *)(((int)stk + 60)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 249.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 53.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 44)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    hudSignFirstPut(*(Stk3 *)(((int)stk + 28)));
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))) + 405.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 128) + 0x3C) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    panelLogoPut(*(Stk3 *)(((int)stk + 12)), f4);
    *(Stk3 *)((0x98 + ((int)stk + 12))) = vecMake((*(float *)(((((int)stk + 128) + 0x3C) + 0x0))), (*(float *)(((((int)stk + 128) + 0x3C) + 0x4))), (*(float *)(((((int)stk + 128) + 0x3C) + 0x8))));
    if ((*(int *)0x8C301B90) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawC(*(Stk3 *)(((int)stk + 116)), (*(float *)(((int)stk + 136))));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((0x98 + ((int)stk + 12))); }
        panelDrawB(*(Stk3 *)(((int)stk + 116)), (*(float *)(((int)stk + 136))));
    }
    *(float *)(((0x98 + ((int)stk + 12)) + 0x0)) = ((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 26.0f);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 140.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 194.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F810, *(Stk3 *)(((int)stk + 112)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 159.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C110708, *(Stk3 *)(((int)stk + 100)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextMsgPut(0x8C11070C, *(Stk3 *)(((int)stk + 88)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 281.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 218.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    menuTextTimePut((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 72)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 196.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 217.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F770, *(Stk3 *)(((int)stk + 56)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 44)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 110.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B98), *(Stk3 *)(((int)stk + 32)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BBC), *(Stk3 *)(((int)stk + 20)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 192.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 241.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F8B0, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 79.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) - 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 116)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 107.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287B94), *(Stk3 *)(((int)stk + 104)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 358.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BB8), *(Stk3 *)(((int)stk + 92)), f4);
    *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 180.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 264.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    sprPutAtAlpha(0x8C33F860, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 77.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
    resultBoxDraw((*(int *)(((int)stk + 132))), (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 64)));
    *(float *)(((((int)stk + 72) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) - 95.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    menuTextNumPut((*(int *)0x8C287BA8), *(Stk3 *)(((int)stk + 52)), f4);
    *(float *)(((((int)stk + 72) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x68) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 72) + 0x68)); }
    t116 = *(int *)0x8C301B90;
    t147 = (menuTextNumPut((*(int *)0x8C287BCC), *(Stk3 *)(((int)stk + 40)), f4));
    if (t116 != 0) {
    } else {
        t118 = *(int *)0x8C287D5C;
        t140 = t118;
        if (t118 == 1) {
        } else {
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 75.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 287.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 112)), f4);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x0))) + 91.0f);
            *(float *)(((((int)stk + 124) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 124) + 0x4C) + 0x4))) + (1.0f + 1.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 100)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 462.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 287.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            hudFontNumPut((*(int *)(((int)stk + 144))), *(Stk3 *)(((int)stk + 84)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 119.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 317.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            sprPutAtAlpha(0x8C33E460, *(Stk3 *)(((int)stk + 68)), f4);
            *(Stk3 *)((((int)stk + 124) + 0x4C)) = vecMake(((*(float *)(((0x98 + ((int)stk + 12)) + 0x0))) + 462.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x4))) + 316.0f), ((*(float *)(((0x98 + ((int)stk + 12)) + 0x8))) + -0.100000001f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 124) + 0x4C)); }
            t140 = (hudFontNumPut((*(int *)(((int)stk + 148))), *(Stk3 *)(((int)stk + 52)), f4));
        }
        t147 = t140;
    }
    return t147;
}

int racketHitCheck(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t252;
    int t229;
    int t7;
    int t8;
    int t9;
    float u10;
    float u11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    float u23;
    float u24;
    float u25;
    int t28;
    float u33;
    int t210;
    int t191;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    float u43;
    float u47;
    float u48;
    float u51;
    float u49;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    float u59;
    float u60;
    float u70;
    int t74;
    float u89;
    float u90;
    int t92;
    int t95;
    int t96;
    int t98;
    int t112;
    int t123;
    int t114;
    int t121;
    int t115;
    int t119;
    int t117;
    int t125;
    int t128;
    int t129;
    int t130;
    float u134;
    float u135;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    float u161;
    float u162;
    float u163;
    float u164;
    float u165;
    int t187;
    int t21;
    float u34;
    float u35;
    int t126;
    int t127;
    float u131;
    float u132;
    float u133;
    int stk[73];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB8 + ((int)stk + 52))) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAC + ((int)stk + 52))) = *(struct mv3 *)((a5 + 0xC)); }
    u0 = *(float *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0xC5C));
    t2 = *(int *)((a4 + 0xC6C));
    t3 = *(int *)((a4 + 0xC74));
    *(unsigned int *)(((int)stk + 64)) = ((((t1 * 0xD8) + 0x8C104194) + (t2 * 0x6C)) + ((((t3 << 2) << 1) + t3) << 2));
    t4 = *(int *)((((((t1 * 0xD8) + 0x8C104194) + (t2 * 0x6C)) + ((((t3 << 2) << 1) + t3) << 2)) + 0x8));
    t252 = 0x0;
    if (!((float)(t4 - 5) > u0)) {
        t229 = 0x0;
        if (!(u0 > (float)(t4 + 0x5))) {
            t7 = *(int *)((a4 + 0xC5C));
            t8 = *(int *)((((((t7 << 1) + t7) << 2) << 1) + 0x8C105FE0));
            t9 = 0x8C01B408;
            u10 = 0.0f;
            u11 = 22.0f;
            if ((t8 & 0x20000) != 0) {
                t9 = 0x8C01B404;
                u10 = 100.0f;
                u11 = 0.0f;
            }
            t13 = t9;
            t14 = t8;
            t15 = ((((t7 << 1) + t7) << 2) << 1);
            t16 = 0x20000;
            t17 = t4;
            t18 = a5;
            t19 = a6;
            t20 = a7;
            t22 = 0x0;
            u23 = (float)(t4 + 0x5);
            u24 = u10;
            u25 = u11;
            for (;;) {
                if ((int)t22 >= (int)0x2) {
                    break;
                }
                t21 = t22;
                t21 = (t21 << 1);
                t16 = t22;
                t21 = (t21 + t16);
                t20 = 0xBE0;
                t21 = (t21 << 2);
                t21 = (t21 << 2);
                t18 = 0x0;
                t20 = (t20 + a4);
                t20 = (t20 + t21);
                t17 = t20;
                t19 = t20;
                for (;;) {
                    if ((int)t18 >= (int)0x4) {
                        break;
                    }
                    t16 = t18;
                    t15 = 0xBE0;
                    t14 = t18;
                    t16 = (t16 << 1);
                    t16 = (t16 + t14);
                    t15 = (t15 + a4);
                    t16 = (t16 << 2);
                    t15 = (t15 + t21);
                    t13 = 0x4;
                    t15 = (t15 + t16);
                    u23 = (*(float *)((t15 + t13)));
                    t28 = (u23 > u25);
                    u23 = (*(float *)((t19 + t13)));
                    if (t28) {
                        u25 = (*(float *)((t20 + t13)));
                    }
                    t18 = (t18 + 0x1);
                    if (u24 > u23) {
                        u24 = (*(float *)((t17 + t13)));
                    }
                    t20 = (t20 + 0xC);
                    t19 = (t19 + 0xC);
                    t17 = (t17 + 0xC);
                }
                t22 = (t22 + 0x1);
            }
            u33 = *(float *)(((int)stk + 240));
            t210 = 0x0;
            if ((u33 > (u25 + 1.0f)) && (u34 = *(float *)(((int)stk + 228)), u34 > (u25 + 1.0f))) {
            } else {
                t191 = 0x0;
                if (((u24 + (-1.0f)) > u33) && (u35 = *(float *)(((int)stk + 228)), (u24 + (-1.0f)) > u35)) {
                } else {
                    t36 = t14;
                    t37 = t15;
                    t38 = t16;
                    t39 = 0x1;
                    t40 = 0x0;
                    t41 = t19;
                    u43 = (-1.0f);
                    for (;;) {
                        if ((int)t39 >= (int)0x4) {
                            break;
                        }
                        t37 = t39;
                        t38 = t39;
                        t37 = (t37 << 1);
                        t36 = t40;
                        t37 = (t37 + t38);
                        t41 = 0xBE0;
                        t36 = (t36 << 1);
                        t38 = t40;
                        t36 = (t36 + t38);
                        t41 = (t41 + a4);
                        t36 = (t36 << 2);
                        t37 = (t37 << 2);
                        t41 = (t41 + 0x30);
                        t36 = (t36 + t41);
                        t37 = (t37 + t41);
                        u43 = (*(float *)((t36 + 0x0)));
                        if (u43 > ((*(float *)((t37 + 0x0))))) {
                            t40 = t39;
                        }
                        t39 = (t39 + 0x1);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)) = *(struct mv3 *)((((((t40 << 1) + t40) << 2) + (0xBE0 + a4)) + 0x30)); }
                    u47 = *(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x0));
                    u48 = *(float *)((a4 + 0xAE8));
                    u51 = (u48 + -10.0f);
                    if (u47 > (u48 + -10.0f)) {
                        u49 = *(float *)((a4 + 0xAE8));
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x24)) = (u49 + -10.0f);
                        u51 = (u49 + -10.0f);
                    }
                    t53 = ((((int)stk + 52) + 0x4C) + 0x24);
                    t54 = (((((t40 << 1) + t40) << 2) + (0xBE0 + a4)) + 0x30);
                    t55 = 0x8C0F7DAC;
                    t56 = 0x1;
                    t57 = 0x0;
                    t58 = t41;
                    u59 = u47;
                    u60 = u51;
                    for (;;) {
                        if ((int)t56 >= (int)0x4) {
                            break;
                        }
                        t54 = t56;
                        t55 = t56;
                        t54 = (t54 << 1);
                        t53 = t57;
                        t54 = (t54 + t55);
                        t58 = 0xBE0;
                        t53 = (t53 << 1);
                        t55 = t57;
                        t53 = (t53 + t55);
                        t58 = (t58 + a4);
                        t53 = (t53 << 2);
                        t54 = (t54 << 2);
                        t58 = (t58 + 0x30);
                        t53 = (t53 + t58);
                        t54 = (t54 + t58);
                        u60 = (*(float *)((t53 + 0x0)));
                        u59 = (*(float *)((t54 + 0x0)));
                        if (u59 > u60) {
                            t57 = t56;
                        }
                        t56 = (t56 + 0x1);
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)) = *(struct mv3 *)((((((t57 << 1) + t57) << 2) + (0xBE0 + a4)) + 0x30)); }
                    if (((*(float *)((a4 + 0xAE8))) + 10.0f) > (*(float *)((((((int)stk + 52) + 0x4C) + 0x18) + 0x0)))) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x18)) = ((*(float *)((a4 + 0xAE8))) + 10.0f);
                    }
                    u70 = *(float *)((a4 + 0xD0C));
                    *(float *)(((((int)stk + 52) + 0x4C) + 0x20)) = u70;
                    *(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x8)) = u70;
                    nlPushUnitMatrix();
                    t74 = nlArcTan2((*(float *)((a5 + 0x34))), (*(float *)((a5 + 0x3C))));
                    nlRotateAY((0x4000 + t74));
                    *(Stk3 *)((0x88 + ((int)stk + 52))) = vecMake(-10.0f, 0.0f, 0.0f);
                    nlCalcPoint((0x88 + ((int)stk + 52)), (0x88 + ((int)stk + 52)));
                    nlPopMatrix(0x1);
                    *(unsigned int *)(((int)stk + 56)) = (((int)stk + 52) + 0x4C);
                    nlAddVector3op((((int)stk + 52) + 0x4C), ((((int)stk + 52) + 0x4C) + 0x24), (0x88 + ((int)stk + 52)));
                    if ((*(float *)(((*(int *)(((int)stk + 56))) + 0x0))) > (*(float *)((((((int)stk + 52) + 0x4C) + 0x24) + 0x0)))) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0x0)) = (*(float *)(((((int)stk + 52) + 0x4C) + 0x24)));
                    }
                    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x4C) + 0x18);
                    *(unsigned int *)(((int)stk + 56)) = ((((int)stk + 52) + 0x4C) + 0xC);
                    u89 = *(float *)(((*(int *)(((int)stk + 52))) + 0x0));
                    u90 = *(float *)(((*(int *)(((int)stk + 56))) + 0x0));
                    t92 = (nlAddVector3op(((((int)stk + 52) + 0x4C) + 0xC), ((((int)stk + 52) + 0x4C) + 0x18), (0x88 + ((int)stk + 52))));
                    if (u89 > u90) {
                        *(float *)(((((int)stk + 52) + 0x4C) + 0xC)) = (*(float *)(((((int)stk + 52) + 0x4C) + 0x18)));
                        t92 = 0xC;
                    }
                    t95 = t92;
                    t96 = (((int)stk + 52) + 0x4C);
                    for (;;) {
                        if ((unsigned int)t96 >= (unsigned int)((((int)stk + 52) + 0x4C) + 0x30)) {
                            break;
                        }
                        t95 = 0x4;
                        *(float *)((t96 + t95)) = 1.0f;
                        t96 = (t96 + 0xC);
                    }
                    t98 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x3);
                    if (t98 != 0) {
                        nlLineSetThickness((1.0f + 1.0f));
                        nlSingleLine((0xB8 + ((int)stk + 52)), (0xAC + ((int)stk + 52)), 0x0);
                        *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0xC);
                        *(unsigned int *)(((int)stk + 56)) = (((int)stk + 52) + 0x4C);
                        nlSingleLine((((int)stk + 52) + 0x4C), ((((int)stk + 52) + 0x4C) + 0xC), 0x0);
                        *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 52) + 0x4C) + 0x18);
                        nlSingleLine((*(int *)(((int)stk + 60))), ((((int)stk + 52) + 0x4C) + 0x18), 0x0);
                        *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0x24);
                        nlSingleLine((*(int *)(((int)stk + 52))), ((((int)stk + 52) + 0x4C) + 0x24), 0x0);
                        nlSingleLine((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))), 0x0);
                    }
                    *(unsigned int *)(((int)stk + 56)) = 0x1;
                    *(unsigned int *)(((int)stk + 60)) = ((((int)stk + 52) + 0x4C) + 0xC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0xC)); }
                    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x4C);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                    t112 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                    t123 = t112;
                    if (t112 == 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 60)))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                        t114 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                        t121 = t114;
                        if (t114 == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x18)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                            t115 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                            t119 = t115;
                            if (t115 == 0) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4C) + 0x24)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xC4 + ((int)stk + 28))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xDC + ((int)stk + 16))); }
                                t117 = vecSegCrossXZ(*(Stk3 *)(((int)stk + 4)));
                                if (t117 == 0) {
                                    *(unsigned int *)(((int)stk + 56)) = 0x0;
                                }
                                t119 = t117;
                            }
                            t121 = t119;
                        }
                        t123 = t121;
                    }
                    t125 = t123;
                    t128 = 0x0;
                    t129 = a7;
                    t130 = 0x1;
                    u134 = 0.0f;
                    u135 = f5;
                    for (;;) {
                        if ((int)t128 >= (int)0x4) {
                            break;
                        }
                        t129 = t128;
                        t129 = (t129 << 1);
                        t127 = t128;
                        t129 = (t129 + t127);
                        t125 = 0xB8;
                        t129 = (t129 << 2);
                        t129 = (t129 + (((int)stk + 52) + 0x4C));
                        t127 = t128;
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t127 = (t127 + 0x1);
                        u133 = (*(float *)((t129 + 0x0)));
                        t127 = (t127 & 0x3);
                        t125 = 0x88;
                        t126 = t127;
                        u132 = (u132 - u133);
                        t127 = (t127 << 1);
                        t127 = (t127 + t126);
                        t127 = (t127 << 2);
                        t127 = (t127 + (((int)stk + 52) + 0x4C));
                        *(float *)((((int)stk + 52) + t125)) = u132;
                        t125 = 0x8;
                        u133 = (*(float *)((t129 + t125)));
                        t125 = 0xC0;
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t125 = 0x90;
                        u132 = (u132 - u133);
                        *(float *)((((int)stk + 52) + t125)) = u132;
                        *(unsigned int *)(((int)stk + 52)) = t127;
                        u132 = (*(float *)((t127 + 0x0)));
                        u133 = (*(float *)((t129 + 0x0)));
                        u132 = (u132 - u133);
                        *(float *)(((((int)stk + 52) + 0x7C) + 0x0)) = u132;
                        t127 = (*(int *)(((int)stk + 52)));
                        t125 = 0x8;
                        u133 = (*(float *)((t129 + t125)));
                        u132 = (*(float *)((t127 + t125)));
                        u132 = (u132 - u133);
                        *(float *)(((((int)stk + 52) + 0x7C) + t125)) = u132;
                        t125 = 0x90;
                        u133 = (*(float *)(((((int)stk + 52) + 0x7C) + 0x0)));
                        u132 = (*(float *)((((int)stk + 52) + t125)));
                        t125 = 0x8;
                        u132 = (u132 * u133);
                        u133 = (*(float *)(((((int)stk + 52) + 0x7C) + t125)));
                        t125 = 0x88;
                        u131 = (*(float *)((((int)stk + 52) + t125)));
                        u135 = u132;
                        u131 = (u131 * u133);
                        u135 = (u135 - u131);
                        if (t128 != 0) {
                            u133 = 0.0f;
                            if (u135 > u133) {
                                t126 = 0x1;
                            } else {
                                if (u133 > u135) {
                                    t126 = 0xFFFFFFFF;
                                } else {
                                    t126 = 0x0;
                                }
                            }
                            u133 = 0.0f;
                            if (u134 > u133) {
                                t127 = 0x1;
                            } else {
                                if (u133 > u134) {
                                    t127 = 0xFFFFFFFF;
                                } else {
                                    t127 = 0x0;
                                }
                            }
                            if (t126 != t127) {
                                t130 = 0x0;
                            }
                        }
                        t128 = (t128 + 0x1);
                        u134 = u135;
                    }
                    t155 = t125;
                    t156 = t126;
                    t157 = t127;
                    t158 = 0x0;
                    t159 = t129;
                    t160 = 0x1;
                    u161 = u131;
                    u162 = u132;
                    u163 = u133;
                    u164 = u134;
                    u165 = 0.0f;
                    for (;;) {
                        if ((int)t158 >= (int)0x4) {
                            break;
                        }
                        t159 = t158;
                        t159 = (t159 << 1);
                        t157 = t158;
                        t159 = (t159 + t157);
                        t155 = 0xAC;
                        t159 = (t159 << 2);
                        t159 = (t159 + (((int)stk + 52) + 0x4C));
                        t157 = t158;
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t157 = (t157 + 0x1);
                        u163 = (*(float *)((t159 + 0x0)));
                        t157 = (t157 & 0x3);
                        t155 = 0x88;
                        t156 = t157;
                        u162 = (u162 - u163);
                        t157 = (t157 << 1);
                        t157 = (t157 + t156);
                        t157 = (t157 << 2);
                        t157 = (t157 + (((int)stk + 52) + 0x4C));
                        *(float *)((((int)stk + 52) + t155)) = u162;
                        t155 = 0x8;
                        u163 = (*(float *)((t159 + t155)));
                        t155 = 0xB4;
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t155 = 0x90;
                        u162 = (u162 - u163);
                        *(float *)((((int)stk + 52) + t155)) = u162;
                        *(unsigned int *)(((int)stk + 52)) = t157;
                        u162 = (*(float *)((t157 + 0x0)));
                        u163 = (*(float *)((t159 + 0x0)));
                        u162 = (u162 - u163);
                        *(float *)(((((int)stk + 52) + 0x7C) + 0x0)) = u162;
                        t157 = (*(int *)(((int)stk + 52)));
                        t155 = 0x8;
                        u163 = (*(float *)((t159 + t155)));
                        u162 = (*(float *)((t157 + t155)));
                        u162 = (u162 - u163);
                        *(float *)(((((int)stk + 52) + 0x7C) + t155)) = u162;
                        t155 = 0x90;
                        u163 = (*(float *)(((((int)stk + 52) + 0x7C) + 0x0)));
                        u162 = (*(float *)((((int)stk + 52) + t155)));
                        t155 = 0x8;
                        u162 = (u162 * u163);
                        u163 = (*(float *)(((((int)stk + 52) + 0x7C) + t155)));
                        t155 = 0x88;
                        u161 = (*(float *)((((int)stk + 52) + t155)));
                        u164 = u162;
                        u161 = (u161 * u163);
                        u164 = (u164 - u161);
                        if (t158 != 0) {
                            u163 = 0.0f;
                            if (u164 > u163) {
                                t156 = 0x1;
                            } else {
                                if (u163 > u164) {
                                    t156 = 0xFFFFFFFF;
                                } else {
                                    t156 = 0x0;
                                }
                            }
                            u163 = 0.0f;
                            if (u165 > u163) {
                                t157 = 0x1;
                            } else {
                                if (u163 > u165) {
                                    t157 = 0xFFFFFFFF;
                                } else {
                                    t157 = 0x0;
                                }
                            }
                            if (t156 != t157) {
                                t160 = 0x0;
                            }
                        }
                        t158 = (t158 + 0x1);
                        u165 = u164;
                    }
                    t187 = 0x0;
                    if (((*(int *)(((int)stk + 56))) != 0) || ((t130 != 0) || (t160 != 0))) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC44 + a4)) = *(struct mv3 *)(a5); }
                        t187 = 0x1;
                    }
                    t191 = t187;
                }
                t210 = t191;
            }
            t229 = t210;
        }
        t252 = t229;
    }
    return t252;
}
