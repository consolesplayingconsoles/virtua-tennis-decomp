/* Straight-line functions with calls and guards (batch gen_on): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Seek(int, int);
int BupRequestSave(int, int, int, int);
int ambLevelGet(void);
int arcadeNextMatch(void);
int arcadeNextStage(int, int, int, int, int, int);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int ballColliSync(void);
int ballInit(int);
int ballMove(int, int, int, int, int, int, int, int, int, int, int, int);
int btnGuideDrawB(int, Stk3, float);
int countryStagePut(Stk3, Stk1, float);
int cpuInitPoint(void);
int effBallTrailSpawn(Stk3, Stk3);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int effServeSpeedCalc(int);
int entryAnyAtRound5(void);
int entryFirstPortFlag(void);
int entryGetColorId(int);
int entryIsVersus(int, int, int, int);
int evCrowdPointStart(int);
int evPackFade(int, int, int);
int fadeStart(int);
int gameMatchSetup(void);
int gdFsGetDrvStat(void);
int gdFsOpen(int, int, int, int);
int gdFsReqDrvStat(int);
int getID_Color(int, float);
int hudDoubleFaultPanel(int);
int hudFaultPanel(int);
int hudFont2DigitPut(int, Stk3, float);
int hudFontNumPut(int, Stk3, float);
int hudLabelPut(int, Stk3, float);
int hudLetPanel(void);
int hudPointPanelShow(int);
int hudScoreShow(int, int, int);
int hudSignFirstPut(int, Stk3, float);
int hudSignPut(int, Stk3, float);
int infoPlayerDrawWrap(int, int, int, int, Stk3, float, float, float);
int mainExitToBios(int);
int markerShowStart(int, int, int, int, Stk3, Stk3, Stk3);
int matchCheckTiebreak(void);
int matchGetCpuRank(void);
int matchPointWon(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
int menuTextMsgPut(int, Stk3, float);
int menuTextNumPut(int, Stk3, float);
int menuTextTimePut(int, Stk3, Stk1, float);
extern int miniOnEvent();
int miniRoundStart(void);
int netHitReset(void);
int netTouchFlag(int);
int nlArcTan2(int, float, float);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int panelDrawA(Stk3, float);
int panelDrawB(Stk3, float);
int panelDrawC(Stk3, float);
int panelLogoPut(Stk3);
int pauseExec(int, int);
int playerInit(int, int);
int playerStartReactions(int, int);
int primRectIncGradX(int, int, int, int, Stk3, Stk1);
int resultBoxDraw(int, int, Stk3);
int resultFlagSet(int);
int resultTeamsDraw(float);
int resultTeamsDrawAlt(Stk3, float);
int sceneVecStub(Stk3, Stk3);
int scorePressure(void);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int shadowBallDraw(Stk3);
int sndSeStage(void);
int sprPutAtAlpha(int, Stk3, float);
int stageSoftReset(void);
int standBarDraw(int, int, int, int, Stk3);
int standBoxesDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int strncpy(int, int, int);
int umpCallDoubleFault(void);
int umpCallFault(int, int, int, int, int, int, int, int);
int umpCallLet(int, int, int, int, int, int, int);
int umpCallOut(int, int, int, int, int, int, int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int matchExec(int a4, int a5, int a6, float f4, float f5);
int standPanelDraw(int a4, int a5, int a6, int a7, Stk3 p, int a11, int a12);
int resultDoublesDraw(int a4, int a5, int a6, float f4);
int FUN_8c0a048c(int a4, int a5, int a6, int a7, float f4);
void ballExec(int a4);
int FUN_8c0a082a(int a4, int a5, int a6, int a7, float f4);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int mainCheckDrive(void);
int hudSignLastPut(Stk3 s, float f4);

int matchExec(int a4, int a5, int a6, float f4, float f5)
{
    int stk[18];
    register int t0;
    register int t1777;
    register int t6;
    register int t1763;
    register int t62;
    int t110;
    register int t125;
    register int t128;
    register int t140;
    int t167;
    register int t182;
    register int t185;
    register int t197;
    int t211;
    register int t240;
    register int t241;
    register int t235;
    register int t246;
    register int t250;
    register int t251;
    register int t258;
    register int t259;
    register int t285;
    register int t286;
    register int t304;
    register int t305;
    register int t325;
    register int t326;
    register int t319;
    register int t1750;
    register int t377;
    register int t382;
    register int t387;
    register int t411;
    register int t412;
    register int t555;
    register int t543;
    register int t531;
    register float u422;
    register float u423;
    register int t437;
    register int t439;
    register int t440;
    register int t442;
    register float u443;
    register float u448;
    register int t465;
    register int t466;
    register float u468;
    register float u469;
    register int t484;
    register int t486;
    register int t487;
    register int t593;
    register int t594;
    register int t616;
    register int t617;
    register int t760;
    register int t748;
    register int t736;
    register float u627;
    register float u628;
    register int t642;
    register int t644;
    register int t645;
    register int t647;
    register float u648;
    register float u653;
    register int t670;
    register int t671;
    register float u673;
    register float u674;
    register int t689;
    register int t691;
    register int t692;
    register int t810;
    register int t811;
    register int t833;
    register int t834;
    register int t977;
    register int t965;
    register int t953;
    register float u844;
    register float u845;
    register int t859;
    register int t861;
    register int t862;
    register int t864;
    register float u865;
    register float u870;
    register int t887;
    register int t888;
    register float u890;
    register float u891;
    register int t906;
    register int t908;
    register int t909;
    register int t1026;
    register int t1027;
    register int t1049;
    register int t1050;
    register int t1193;
    register int t1181;
    register int t1169;
    register float u1060;
    register float u1061;
    register int t1075;
    register int t1077;
    register int t1078;
    register int t1080;
    register float u1081;
    register float u1086;
    register int t1103;
    register int t1104;
    register float u1106;
    register float u1107;
    register int t1122;
    register int t1124;
    register int t1125;
    register int t1241;
    register int t1242;
    register int t1264;
    register int t1265;
    register int t1408;
    register int t1396;
    register int t1384;
    register float u1275;
    register float u1276;
    register int t1290;
    register int t1292;
    register int t1293;
    register int t1295;
    register float u1296;
    register float u1301;
    register int t1318;
    register int t1319;
    register float u1321;
    register float u1322;
    register int t1337;
    register int t1339;
    register int t1340;
    register int t1438;
    register float u1440;
    register int t1445;
    register float u1446;
    register float u1452;
    register float u1453;
    register float u1456;
    register float u1458;
    register int t1467;
    register int t1465;
    register int t1485;
    register int t1478;
    register int t1476;
    register int t1482;
    register int t1494;
    register int t1492;
    register int t1501;
    register float u1503;
    register float u1505;
    register float u1508;
    register float u1510;
    register float u1513;
    register float u1515;
    register int t1647;
    register int t1649;
    register int t1650;
    register int t1729;
    register int t1731;
    register int t1732;
    register int t1747;
    register int t1748;
    float u69;
    register int t120;
    register int t121;
    register int t122;
    register int t177;
    register int t178;
    register int t179;
    int t230;
    register int t231;
    int t374;
    int t379;
    int t384;
    register int t1720;
    register float u1724;
    register int t391;
    int t392;
    register int t567;
    register float u570;
    register float u558;
    register float u546;
    register float u534;
    register int t519;
    register float u522;
    register int t507;
    register float u510;
    register int t495;
    register float u498;
    register int t1707;
    register float u1711;
    int t576;
    register int t784;
    register float u787;
    register int t596;
    int t597;
    register int t772;
    register float u775;
    register float u763;
    register float u751;
    register float u739;
    register int t724;
    register float u727;
    register int t712;
    register float u715;
    register int t700;
    register float u703;
    register int t1694;
    register float u1698;
    int t793;
    register int t1001;
    register float u1004;
    register int t813;
    int t814;
    register int t989;
    register float u992;
    register float u980;
    register float u968;
    register float u956;
    register int t941;
    register float u944;
    register int t929;
    register float u932;
    register int t917;
    register float u920;
    register int t1681;
    register float u1685;
    int t1009;
    register int t1217;
    register float u1220;
    register int t1029;
    int t1030;
    register int t1205;
    register float u1208;
    register float u1196;
    register float u1184;
    register float u1172;
    register int t1157;
    register float u1160;
    register int t1145;
    register float u1148;
    register int t1133;
    register float u1136;
    register int t1668;
    register float u1672;
    int t1224;
    register int t1432;
    register float u1435;
    register int t1244;
    int t1245;
    register int t1420;
    register float u1423;
    register float u1411;
    register float u1399;
    register float u1387;
    register int t1372;
    register float u1375;
    register int t1360;
    register float u1363;
    register int t1348;
    register float u1351;
    register float u1605;
    register float u1594;
    register float u1583;
    register float u1572;
    register float u1562;
    register float u1550;
    int t1610;
    register float u1626;
    register float u1659;
    int t1728;

    t0 = *(int *)0x8C291F78;
    t1777 = t0;
    if ((t0 & 2) != 0) {
    } else {
        t6 = *(int *)0x8C287B3C;
        t1763 = t6;
        if ((t6 & 1) != 0) {
        } else {
            if ((int)(*(int *)0x8C287B2C) <= 0) {
            } else {
                if (((*(int *)0x8C287B3C) & 64) == 0) {
                } else {
                    if ((*(int *)0x8C287D5C) != 2) {
                        pauseExec(0x8C287ACC, (*(int *)0x8C287AF4));
                    } else {
                        if ((int)(*(int *)0x8C287B2C) >= (int)0x32A) {
                        } else {
                            *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) + (*(int *)0x8C2FBD18));
                            *(unsigned int *)0x8C2FBE24 = 0x1;
                            if (((*(int *)0x8C2FBC98) & 4) != 0) {
                                fadeStart(0x1E);
                                gameMatchSetup();
                                *(unsigned int *)0x8C20D150 = 0x1;
                                *(unsigned int *)0x8C287C50 = 0x0;
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFBF);
                                *(unsigned char *)0x8C2FBC7E = (*(signed char *)0x8C2FBE1C);
                                memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
                                BupRequestSave(0x0, 0x8C10234C, 0x8C40C2F4, 0x128);
                                *(unsigned int *)0x8C2FBE24 = 0x0;
                            } else {
                                *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
                                *(unsigned int *)0x8C20D150 = (*(int *)0x8C20D158);
                                *(unsigned int *)0x8C421F64 = 0x0;
                                *(unsigned int *)0x8C20D15C = 0x0;
                                *(unsigned int *)0x8C38BA60 = 0x7F;
                                strmVoiceQueueReset();
                                stageSoftReset();
                            }
                        }
                    }
                }
            }
            *(unsigned int *)0x8C287B2C = ((*(int *)0x8C287B2C) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
            if ((*(int *)0x8C287D5C) == 3) {
                t62 = ((int (*)(int, int))(miniOnEvent))(0x6, 0x0);
            }
            if (((*(int *)0x8C287B2C) == 1) && (u69 = *(float *)0x8C287B7C, u69 != 0.0f)) {
                *(unsigned int *)0x8C287B44 = 0x0;
                matchSetSlowMotion((*(int *)0x8C287B44), (*(float *)0x8C287B7C));
                *(float *)0x8C287B7C = 0.0f;
                if ((*(int *)0x8C287D5C) != 3) {
                } else {
                    if ((*(int *)0x8C2FBEB8) != 0) {
                    } else {
                        *(unsigned int *)0x8C2FBEC8 = 0x2;
                    }
                }
            } else {
                if ((*(int *)0x8C287B2C) != 0) {
                    if ((*(int *)0x8C287B2C) == 0) {
                        if ((0x40 & (*(int *)0x8C287B3C)) != 0) {
                            *(unsigned int *)0x8C20D14C = 0x0;
                            *(unsigned int *)0x8C20D150 = 0x0;
                            *(unsigned int *)0x8C20D15C = 0x0;
                        }
                        t110 = *(int *)0x8C287B3C;
                        if ((0x20 & t110) != 0) {
                            netTouchFlag(0x8C287ACC);
                            if (((*(int *)0x8C287B3C) & 0x200) != 0) {
                                arcadeNextMatch();
                            } else {
                                arcadeNextStage(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
                            }
                        } else {
                            t120 = t110;
                            t121 = 0x40;
                            t122 = 0x20;
                        }
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        t125 = t120;
                        for (;;) {
                            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)0x8C287ADC)) {
                                break;
                            }
                            t128 = *(int *)(((int)stk + 8));
                            t125 = 0x8C287D84;
                            playerInit(((t128 * 0xD78) + t125), t128);
                            t125 = (*(int *)(((int)stk + 8)));
                            t125 = (t125 + 0x1);
                            *(unsigned int *)(((int)stk + 8)) = t125;
                        }
                        ballBoyReset(t121, t122, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
                        ballInit(0x8C291F24);
                        if ((*(int *)0x8C287D5C) == 3) {
                            miniRoundStart();
                        }
                        netHitReset();
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                        if ((*(int *)0x8C287D5C) == 3) {
                            t140 = ((int (*)(int, int))(miniOnEvent))(0x2, 0x0);
                            if (t140 != 0) {
                                cpuInitPoint();
                            }
                        } else {
                            cpuInitPoint();
                        }
                    }
                } else {
                    if ((*(int *)0x8C287B80) == 0) {
                        if ((*(int *)0x8C287B2C) == 0) {
                            if ((0x40 & (*(int *)0x8C287B3C)) != 0) {
                                *(unsigned int *)0x8C20D14C = 0x0;
                                *(unsigned int *)0x8C20D150 = 0x0;
                                *(unsigned int *)0x8C20D15C = 0x0;
                            }
                            t167 = *(int *)0x8C287B3C;
                            if ((0x20 & t167) != 0) {
                                netTouchFlag(0x8C287ACC);
                                if (((*(int *)0x8C287B3C) & 0x200) != 0) {
                                    arcadeNextMatch();
                                } else {
                                    arcadeNextStage(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
                                }
                            } else {
                                t177 = t167;
                                t178 = 0x40;
                                t179 = 0x20;
                            }
                            *(unsigned int *)(((int)stk + 8)) = 0x0;
                            t182 = t177;
                            for (;;) {
                                if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)0x8C287ADC)) {
                                    break;
                                }
                                t185 = *(int *)(((int)stk + 8));
                                t182 = 0x8C287D84;
                                playerInit(((t185 * 0xD78) + t182), t185);
                                t182 = (*(int *)(((int)stk + 8)));
                                t182 = (t182 + 0x1);
                                *(unsigned int *)(((int)stk + 8)) = t182;
                            }
                            ballBoyReset(t178, t179, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
                            ballInit(0x8C291F24);
                            if ((*(int *)0x8C287D5C) == 3) {
                                miniRoundStart();
                            }
                            netHitReset();
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                            if ((*(int *)0x8C287D5C) == 3) {
                                t197 = ((int (*)(int, int))(miniOnEvent))(0x2, 0x0);
                                if (t197 != 0) {
                                    cpuInitPoint();
                                }
                            } else {
                                cpuInitPoint();
                            }
                        }
                    } else {
                        t211 = *(int *)0x8C287B80;
                        if ((t211 != 1) && (t211 != 2)) {
                            if (t211 != 3) {
                                if (t211 == 4) {
                                    *(unsigned int *)0x8C287B2C = 0x708;
                                    if ((*(int *)0x8C40C28C) != 1) {
                                        evPackFade(0x1, 0x5A, 0x0);
                                    }
                                    t240 = 0x10;
                                    t241 = 0xE;
                                    if ((*(int *)0x8C287ADC) != 4) {
                                        t235 = 0x8;
                                        if ((((*(int *)0x8C287B3C) & 0x200) == 0) && (t230 = *(int *)0x8C287AF0, t231 = *(int *)(((((t230 & 0x1) << 2) + 0x8C287AD0) + 0x0)), (int)t231 >= (int)0x4)) {
                                            t235 = 0xA;
                                        }
                                        t240 = t235;
                                        t241 = 0x9;
                                    }
                                    playerStartReactions(t240, t241);
                                    *(unsigned int *)0x8C287B48 = 0x6;
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x200000);
                                    *(float *)0x8C287C3C = 1.0f;
                                    *(float *)0x8C287C40 = 0.0199999996f;
                                    *(float *)0x8C287C44 = 0.5f;
                                    *(unsigned int *)0x8C287B4C = 0x96;
                                    t246 = 0x11;
                                    if ((*(int *)0x8C287D5C) != 2) {
                                        t246 = 0xF;
                                    }
                                    strmBgmPlay(t246);
                                    *(unsigned int *)0x8C3343C0 = 0x0;
                                    *(unsigned int *)0x8C3343C4 = 0x0;
                                    resultFlagSet(0x1);
                                    t250 = entryAnyAtRound5();
                                    if (t250 == 0) {
                                        t251 = *(int *)0x8C287AF4;
                                        *(unsigned int *)(((((((t251 & 0x1) << 2) << 1) + (t251 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
                                    }
                                    *(unsigned int *)0x8C287B28 = 0x0;
                                } else {
                                    if (t211 == 5) {
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x40);
                                        *(unsigned int *)0x8C287B2C = 0x41A;
                                        t258 = 0xC;
                                        t259 = 0xB;
                                        if ((*(int *)0x8C287ADC) == 4) {
                                            t258 = 0x10;
                                            t259 = 0x11;
                                        }
                                        playerStartReactions(t258, t259);
                                        matchSetSlowMotion(0xA, 0.0199999996f);
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                                        *(unsigned int *)0x8C287B4C = 0x41A;
                                        *(unsigned int *)0x8C287B28 = 0x0;
                                        resultFlagSet(0x2);
                                        if ((*(int *)0x8C287D5C) == 2) {
                                            strmBgmPlay(0x12);
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)0x8C287B2C = 0x78;
                                t285 = 0x6;
                                t286 = 0x7;
                                if ((*(int *)0x8C287ADC) == 4) {
                                    t285 = 0xF;
                                    t286 = 0xE;
                                }
                                playerStartReactions(t285, t286);
                                matchSetSlowMotion(0x5, 0.0199999996f);
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                                *(unsigned int *)0x8C287B4C = 0x78;
                                *(unsigned int *)0x8C287B28 = 0x0;
                                matchCheckTiebreak();
                            }
                        } else {
                            if ((*(int *)0x8C287D5C) == 3) {
                                if ((0x20 & (*(int *)0x8C2FBEB0)) == 0) {
                                    *(unsigned int *)0x8C287B2C = 0x2;
                                    *(float *)0x8C287B7C = 0.0399999991f;
                                } else {
                                    *(unsigned int *)0x8C287B2C = 0x78;
                                    *(unsigned int *)0x8C287AF0 = 0x0;
                                    *(unsigned int *)0x8C287AF4 = 0x1;
                                    if ((*(int *)0x8C287ADC) == 4) {
                                        playerStartReactions(0xD, 0xE);
                                    } else {
                                        t304 = matchGetCpuRank();
                                        *(int *)((int)stk + 4) = (t304 + 0x3);
                                        t305 = matchGetCpuRank();
                                        playerStartReactions(t305, (t304 + 0x3));
                                    }
                                    matchSetSlowMotion(0x9, 0.0399999991f);
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                                    *(unsigned int *)0x8C287B4C = 0x78;
                                    *(unsigned int *)0x8C287B28 = 0x0;
                                }
                            } else {
                                *(unsigned int *)0x8C287B2C = 0x78;
                                t325 = 0xD;
                                t326 = 0xE;
                                if ((*(int *)0x8C287ADC) == 4) {
                                } else {
                                    t319 = matchGetCpuRank();
                                    *(int *)((int)stk + 4) = (t319 + 0x3);
                                    t325 = (matchGetCpuRank());
                                    t326 = (t319 + 0x3);
                                }
                                playerStartReactions(t325, t326);
                                matchSetSlowMotion(0x9, 0.0399999991f);
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
                                *(unsigned int *)0x8C287B4C = 0x78;
                                *(unsigned int *)0x8C287B28 = 0x0;
                            }
                        }
                        *(unsigned int *)0x8C287B80 = 0x0;
                    }
                }
            }
            t1750 = 0x60;
            if ((int)(*(int *)0x8C287B2C) >= 0) {
            } else {
                t377 = 0x1;
                if (((*(int *)0x8C287D5C) == 3) && (t374 = *(int *)0x8C2FBEB0, (t374 & 64) != 0)) {
                    t377 = 0x0;
                }
                t382 = 0x1;
                if (((*(int *)0x8C287D5C) == 3) && (t379 = *(int *)0x8C2FBEB0, (t379 & 128) != 0)) {
                    t382 = 0x0;
                }
                t387 = 0x1;
                if (((*(int *)0x8C287D5C) == 3) && (t384 = *(int *)0x8C2FBEB0, (t384 & 8) != 0)) {
                    t387 = 0x0;
                }
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                if (t387 == 0) {
                    if ((t382 != 0) && ((t391 = *(int *)0x8C291F70, (int)t391 > (int)0x1) && (t392 = *(int *)0x8C291F70, (int)t392 < (int)0xA))) {
                        *(unsigned int *)0x8C287AFC = (*(int *)0x8C287AF8);
                        *(unsigned int *)0x8C287AF0 = (*(int *)0x8C287AF8);
                        *(unsigned int *)0x8C287AF4 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                        *(unsigned int *)0x8C287B2C = 0x1E;
                        *(unsigned int *)0x8C287B80 = 0x2;
                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                        if ((*(int *)0x8C38BA70) == 0) {
                        } else {
                            evCrowdPointStart(0x12C);
                        }
                        t411 = *(int *)0x8C287AF4;
                        *(int *)((int)stk + 4) = (t411 & 0x1);
                        t412 = scorePressure();
                        hudScoreShow(t412, 0x0, (t411 & 0x1));
                    } else {
                        t555 = t382;
                        if (t377 == 0) {
                        } else {
                            t543 = t382;
                            if (((*(int *)0x8C291F78) & 1) == 0) {
                            } else {
                                t531 = t382;
                                if ((*(int *)0x8C291F70) != 1) {
                                } else {
                                    u422 = *(float *)0x8C291F38;
                                    u423 = (-u422);
                                    if (!(0.0f > u422)) {
                                        u423 = u422;
                                    }
                                    if (u423 > 118.849998f) {
                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                        umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                        *(unsigned int *)0x8C287B80 = 0x1;
                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                        if ((*(int *)0x8C38BA70) == 0) {
                                        } else {
                                            evCrowdPointStart(0x12C);
                                        }
                                        t437 = scorePressure();
                                        hudPointPanelShow(t437);
                                        t439 = *(int *)0x8C287AF4;
                                        *(int *)((int)stk + 4) = (t439 & 0x1);
                                        t440 = scorePressure();
                                        hudScoreShow((t440 + 0x3C), 0x1, (t439 & 0x1));
                                    } else {
                                        t442 = *(int *)0x8C287AF8;
                                        *(unsigned int *)(((int)stk + 12)) = ((t442 * 0xD78) + 0x8C287D84);
                                        u443 = *(float *)((((t442 * 0xD78) + 0x8C287D84) + 0xAF0));
                                        u448 = *(float *)0x8C291F38;
                                        if (((u443 > 0.0f) - (0.0f > u443)) == ((u448 > 0.0f) - (0.0f > u448))) {
                                            *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                            *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                            *(unsigned int *)0x8C287B2C = 0x3C;
                                            *(unsigned int *)0x8C287B80 = 0x1;
                                            matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                            if ((*(int *)0x8C38BA70) != 0) {
                                                evCrowdPointStart(0x12C);
                                            }
                                            t465 = *(int *)0x8C287AF4;
                                            *(int *)((int)stk + 4) = (t465 & 0x1);
                                            t466 = scorePressure();
                                            hudScoreShow(t466, 0x0, (t465 & 0x1));
                                        } else {
                                            u468 = *(float *)0x8C291F30;
                                            u469 = (-u468);
                                            if (!(0.0f > u468)) {
                                                u469 = u468;
                                            }
                                            if (u469 > (*(float *)0x8C287B40)) {
                                                *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                *(unsigned int *)0x8C287B2C = 0x3C;
                                                *(unsigned int *)0x8C287B80 = 0x1;
                                                matchPointWon(((*(int *)0x8C287AF8) & 0x1));
                                                if ((*(int *)0x8C38BA70) != 0) {
                                                    evCrowdPointStart(0x12C);
                                                }
                                                t484 = scorePressure();
                                                hudPointPanelShow(t484);
                                                t486 = *(int *)0x8C287AF4;
                                                *(int *)((int)stk + 4) = (t486 & 0x1);
                                                t487 = scorePressure();
                                                hudScoreShow((t487 + 0x3C), 0x1, (t486 & 0x1));
                                            } else {
                                                t495 = t382;
                                                u498 = u468;
                                            }
                                            t507 = t495;
                                            u510 = u498;
                                        }
                                        t519 = t507;
                                        u522 = u510;
                                    }
                                    t531 = t519;
                                    u534 = u522;
                                }
                                t543 = t531;
                                u546 = u534;
                            }
                            t555 = t543;
                            u558 = u546;
                        }
                        t567 = t555;
                        u570 = u558;
                    }
                    t1720 = t567;
                    u1724 = u570;
                } else {
                    if (t377 == 0) {
                        if ((t387 != 0) && (t576 = *(int *)0x8C287B3C, (t576 & 0x100) != 0)) {
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFEFF);
                            *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                            *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                            *(unsigned int *)0x8C287B2C = 0x3C;
                            if ((*(int *)0x8C287D5C) == 3) {
                                *(unsigned int *)0x8C287B2C = 0x5;
                            }
                            *(unsigned int *)0x8C287B80 = 0x1;
                            matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                            if ((*(int *)0x8C38BA70) == 0) {
                            } else {
                                evCrowdPointStart(0x12C);
                            }
                            t593 = *(int *)0x8C287AF4;
                            *(int *)((int)stk + 4) = (t593 & 0x1);
                            t594 = scorePressure();
                            hudScoreShow(t594, 0x0, (t593 & 0x1));
                        } else {
                            if ((t382 != 0) && ((t596 = *(int *)0x8C291F70, (int)t596 > (int)0x1) && (t597 = *(int *)0x8C291F70, (int)t597 < (int)0xA))) {
                                *(unsigned int *)0x8C287AFC = (*(int *)0x8C287AF8);
                                *(unsigned int *)0x8C287AF0 = (*(int *)0x8C287AF8);
                                *(unsigned int *)0x8C287AF4 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                                *(unsigned int *)0x8C287B2C = 0x1E;
                                *(unsigned int *)0x8C287B80 = 0x2;
                                matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                if ((*(int *)0x8C38BA70) == 0) {
                                } else {
                                    evCrowdPointStart(0x12C);
                                }
                                t616 = *(int *)0x8C287AF4;
                                *(int *)((int)stk + 4) = (t616 & 0x1);
                                t617 = scorePressure();
                                hudScoreShow(t617, 0x0, (t616 & 0x1));
                            } else {
                                t760 = t382;
                                if (t377 == 0) {
                                } else {
                                    t748 = t382;
                                    if (((*(int *)0x8C291F78) & 1) == 0) {
                                    } else {
                                        t736 = t382;
                                        if ((*(int *)0x8C291F70) != 1) {
                                        } else {
                                            u627 = *(float *)0x8C291F38;
                                            u628 = (-u627);
                                            if (!(0.0f > u627)) {
                                                u628 = u627;
                                            }
                                            if (u628 > 118.849998f) {
                                                *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                *(unsigned int *)0x8C287B2C = 0x3C;
                                                *(unsigned int *)0x8C287B80 = 0x1;
                                                matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                if ((*(int *)0x8C38BA70) == 0) {
                                                } else {
                                                    evCrowdPointStart(0x12C);
                                                }
                                                t642 = scorePressure();
                                                hudPointPanelShow(t642);
                                                t644 = *(int *)0x8C287AF4;
                                                *(int *)((int)stk + 4) = (t644 & 0x1);
                                                t645 = scorePressure();
                                                hudScoreShow((t645 + 0x3C), 0x1, (t644 & 0x1));
                                            } else {
                                                t647 = *(int *)0x8C287AF8;
                                                *(unsigned int *)(((int)stk + 12)) = ((t647 * 0xD78) + 0x8C287D84);
                                                u648 = *(float *)((((t647 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                u653 = *(float *)0x8C291F38;
                                                if (((u648 > 0.0f) - (0.0f > u648)) == ((u653 > 0.0f) - (0.0f > u653))) {
                                                    *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                    *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                    *(unsigned int *)0x8C287B2C = 0x3C;
                                                    *(unsigned int *)0x8C287B80 = 0x1;
                                                    matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                    if ((*(int *)0x8C38BA70) != 0) {
                                                        evCrowdPointStart(0x12C);
                                                    }
                                                    t670 = *(int *)0x8C287AF4;
                                                    *(int *)((int)stk + 4) = (t670 & 0x1);
                                                    t671 = scorePressure();
                                                    hudScoreShow(t671, 0x0, (t670 & 0x1));
                                                } else {
                                                    u673 = *(float *)0x8C291F30;
                                                    u674 = (-u673);
                                                    if (!(0.0f > u673)) {
                                                        u674 = u673;
                                                    }
                                                    if (u674 > (*(float *)0x8C287B40)) {
                                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                        umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                                        *(unsigned int *)0x8C287B80 = 0x1;
                                                        matchPointWon(((*(int *)0x8C287AF8) & 0x1));
                                                        if ((*(int *)0x8C38BA70) != 0) {
                                                            evCrowdPointStart(0x12C);
                                                        }
                                                        t689 = scorePressure();
                                                        hudPointPanelShow(t689);
                                                        t691 = *(int *)0x8C287AF4;
                                                        *(int *)((int)stk + 4) = (t691 & 0x1);
                                                        t692 = scorePressure();
                                                        hudScoreShow((t692 + 0x3C), 0x1, (t691 & 0x1));
                                                    } else {
                                                        t700 = t382;
                                                        u703 = u673;
                                                    }
                                                    t712 = t700;
                                                    u715 = u703;
                                                }
                                                t724 = t712;
                                                u727 = u715;
                                            }
                                            t736 = t724;
                                            u739 = u727;
                                        }
                                        t748 = t736;
                                        u751 = u739;
                                    }
                                    t760 = t748;
                                    u763 = u751;
                                }
                                t772 = t760;
                                u775 = u763;
                            }
                            t784 = t772;
                            u787 = u775;
                        }
                        t1707 = t784;
                        u1711 = u787;
                    } else {
                        if (((*(int *)0x8C291F78) & 4) == 0) {
                            if ((t387 != 0) && (t793 = *(int *)0x8C287B3C, (t793 & 0x100) != 0)) {
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFEFF);
                                *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                *(unsigned int *)0x8C287B2C = 0x3C;
                                if ((*(int *)0x8C287D5C) == 3) {
                                    *(unsigned int *)0x8C287B2C = 0x5;
                                }
                                *(unsigned int *)0x8C287B80 = 0x1;
                                matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                if ((*(int *)0x8C38BA70) == 0) {
                                } else {
                                    evCrowdPointStart(0x12C);
                                }
                                t810 = *(int *)0x8C287AF4;
                                *(int *)((int)stk + 4) = (t810 & 0x1);
                                t811 = scorePressure();
                                hudScoreShow(t811, 0x0, (t810 & 0x1));
                            } else {
                                if ((t382 != 0) && ((t813 = *(int *)0x8C291F70, (int)t813 > (int)0x1) && (t814 = *(int *)0x8C291F70, (int)t814 < (int)0xA))) {
                                    *(unsigned int *)0x8C287AFC = (*(int *)0x8C287AF8);
                                    *(unsigned int *)0x8C287AF0 = (*(int *)0x8C287AF8);
                                    *(unsigned int *)0x8C287AF4 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                                    *(unsigned int *)0x8C287B2C = 0x1E;
                                    *(unsigned int *)0x8C287B80 = 0x2;
                                    matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                    if ((*(int *)0x8C38BA70) == 0) {
                                    } else {
                                        evCrowdPointStart(0x12C);
                                    }
                                    t833 = *(int *)0x8C287AF4;
                                    *(int *)((int)stk + 4) = (t833 & 0x1);
                                    t834 = scorePressure();
                                    hudScoreShow(t834, 0x0, (t833 & 0x1));
                                } else {
                                    t977 = t382;
                                    if (t377 == 0) {
                                    } else {
                                        t965 = t382;
                                        if (((*(int *)0x8C291F78) & 1) == 0) {
                                        } else {
                                            t953 = t382;
                                            if ((*(int *)0x8C291F70) != 1) {
                                            } else {
                                                u844 = *(float *)0x8C291F38;
                                                u845 = (-u844);
                                                if (!(0.0f > u844)) {
                                                    u845 = u844;
                                                }
                                                if (u845 > 118.849998f) {
                                                    *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                    *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                    umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                    *(unsigned int *)0x8C287B2C = 0x3C;
                                                    *(unsigned int *)0x8C287B80 = 0x1;
                                                    matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                    if ((*(int *)0x8C38BA70) == 0) {
                                                    } else {
                                                        evCrowdPointStart(0x12C);
                                                    }
                                                    t859 = scorePressure();
                                                    hudPointPanelShow(t859);
                                                    t861 = *(int *)0x8C287AF4;
                                                    *(int *)((int)stk + 4) = (t861 & 0x1);
                                                    t862 = scorePressure();
                                                    hudScoreShow((t862 + 0x3C), 0x1, (t861 & 0x1));
                                                } else {
                                                    t864 = *(int *)0x8C287AF8;
                                                    *(unsigned int *)(((int)stk + 12)) = ((t864 * 0xD78) + 0x8C287D84);
                                                    u865 = *(float *)((((t864 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                    u870 = *(float *)0x8C291F38;
                                                    if (((u865 > 0.0f) - (0.0f > u865)) == ((u870 > 0.0f) - (0.0f > u870))) {
                                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                                        *(unsigned int *)0x8C287B80 = 0x1;
                                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                        if ((*(int *)0x8C38BA70) != 0) {
                                                            evCrowdPointStart(0x12C);
                                                        }
                                                        t887 = *(int *)0x8C287AF4;
                                                        *(int *)((int)stk + 4) = (t887 & 0x1);
                                                        t888 = scorePressure();
                                                        hudScoreShow(t888, 0x0, (t887 & 0x1));
                                                    } else {
                                                        u890 = *(float *)0x8C291F30;
                                                        u891 = (-u890);
                                                        if (!(0.0f > u890)) {
                                                            u891 = u890;
                                                        }
                                                        if (u891 > (*(float *)0x8C287B40)) {
                                                            *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                            *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                            umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                            *(unsigned int *)0x8C287B2C = 0x3C;
                                                            *(unsigned int *)0x8C287B80 = 0x1;
                                                            matchPointWon(((*(int *)0x8C287AF8) & 0x1));
                                                            if ((*(int *)0x8C38BA70) != 0) {
                                                                evCrowdPointStart(0x12C);
                                                            }
                                                            t906 = scorePressure();
                                                            hudPointPanelShow(t906);
                                                            t908 = *(int *)0x8C287AF4;
                                                            *(int *)((int)stk + 4) = (t908 & 0x1);
                                                            t909 = scorePressure();
                                                            hudScoreShow((t909 + 0x3C), 0x1, (t908 & 0x1));
                                                        } else {
                                                            t917 = t382;
                                                            u920 = u890;
                                                        }
                                                        t929 = t917;
                                                        u932 = u920;
                                                    }
                                                    t941 = t929;
                                                    u944 = u932;
                                                }
                                                t953 = t941;
                                                u956 = u944;
                                            }
                                            t965 = t953;
                                            u968 = u956;
                                        }
                                        t977 = t965;
                                        u980 = u968;
                                    }
                                    t989 = t977;
                                    u992 = u980;
                                }
                                t1001 = t989;
                                u1004 = u992;
                            }
                            t1694 = t1001;
                            u1698 = u1004;
                        } else {
                            if (((*(int *)0x8C291F78) & 1) == 0) {
                                if ((t387 != 0) && (t1009 = *(int *)0x8C287B3C, (t1009 & 0x100) != 0)) {
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFEFF);
                                    *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                    *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                    *(unsigned int *)0x8C287B2C = 0x3C;
                                    if ((*(int *)0x8C287D5C) == 3) {
                                        *(unsigned int *)0x8C287B2C = 0x5;
                                    }
                                    *(unsigned int *)0x8C287B80 = 0x1;
                                    matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                    if ((*(int *)0x8C38BA70) == 0) {
                                    } else {
                                        evCrowdPointStart(0x12C);
                                    }
                                    t1026 = *(int *)0x8C287AF4;
                                    *(int *)((int)stk + 4) = (t1026 & 0x1);
                                    t1027 = scorePressure();
                                    hudScoreShow(t1027, 0x0, (t1026 & 0x1));
                                } else {
                                    if ((t382 != 0) && ((t1029 = *(int *)0x8C291F70, (int)t1029 > (int)0x1) && (t1030 = *(int *)0x8C291F70, (int)t1030 < (int)0xA))) {
                                        *(unsigned int *)0x8C287AFC = (*(int *)0x8C287AF8);
                                        *(unsigned int *)0x8C287AF0 = (*(int *)0x8C287AF8);
                                        *(unsigned int *)0x8C287AF4 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                                        *(unsigned int *)0x8C287B2C = 0x1E;
                                        *(unsigned int *)0x8C287B80 = 0x2;
                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                        if ((*(int *)0x8C38BA70) == 0) {
                                        } else {
                                            evCrowdPointStart(0x12C);
                                        }
                                        t1049 = *(int *)0x8C287AF4;
                                        *(int *)((int)stk + 4) = (t1049 & 0x1);
                                        t1050 = scorePressure();
                                        hudScoreShow(t1050, 0x0, (t1049 & 0x1));
                                    } else {
                                        t1193 = t382;
                                        if (t377 == 0) {
                                        } else {
                                            t1181 = t382;
                                            if (((*(int *)0x8C291F78) & 1) == 0) {
                                            } else {
                                                t1169 = t382;
                                                if ((*(int *)0x8C291F70) != 1) {
                                                } else {
                                                    u1060 = *(float *)0x8C291F38;
                                                    u1061 = (-u1060);
                                                    if (!(0.0f > u1060)) {
                                                        u1061 = u1060;
                                                    }
                                                    if (u1061 > 118.849998f) {
                                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                        umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                                        *(unsigned int *)0x8C287B80 = 0x1;
                                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                        if ((*(int *)0x8C38BA70) == 0) {
                                                        } else {
                                                            evCrowdPointStart(0x12C);
                                                        }
                                                        t1075 = scorePressure();
                                                        hudPointPanelShow(t1075);
                                                        t1077 = *(int *)0x8C287AF4;
                                                        *(int *)((int)stk + 4) = (t1077 & 0x1);
                                                        t1078 = scorePressure();
                                                        hudScoreShow((t1078 + 0x3C), 0x1, (t1077 & 0x1));
                                                    } else {
                                                        t1080 = *(int *)0x8C287AF8;
                                                        *(unsigned int *)(((int)stk + 12)) = ((t1080 * 0xD78) + 0x8C287D84);
                                                        u1081 = *(float *)((((t1080 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                        u1086 = *(float *)0x8C291F38;
                                                        if (((u1081 > 0.0f) - (0.0f > u1081)) == ((u1086 > 0.0f) - (0.0f > u1086))) {
                                                            *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                            *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                            *(unsigned int *)0x8C287B2C = 0x3C;
                                                            *(unsigned int *)0x8C287B80 = 0x1;
                                                            matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                            if ((*(int *)0x8C38BA70) != 0) {
                                                                evCrowdPointStart(0x12C);
                                                            }
                                                            t1103 = *(int *)0x8C287AF4;
                                                            *(int *)((int)stk + 4) = (t1103 & 0x1);
                                                            t1104 = scorePressure();
                                                            hudScoreShow(t1104, 0x0, (t1103 & 0x1));
                                                        } else {
                                                            u1106 = *(float *)0x8C291F30;
                                                            u1107 = (-u1106);
                                                            if (!(0.0f > u1106)) {
                                                                u1107 = u1106;
                                                            }
                                                            if (u1107 > (*(float *)0x8C287B40)) {
                                                                *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                                *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                                umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                                *(unsigned int *)0x8C287B2C = 0x3C;
                                                                *(unsigned int *)0x8C287B80 = 0x1;
                                                                matchPointWon(((*(int *)0x8C287AF8) & 0x1));
                                                                if ((*(int *)0x8C38BA70) != 0) {
                                                                    evCrowdPointStart(0x12C);
                                                                }
                                                                t1122 = scorePressure();
                                                                hudPointPanelShow(t1122);
                                                                t1124 = *(int *)0x8C287AF4;
                                                                *(int *)((int)stk + 4) = (t1124 & 0x1);
                                                                t1125 = scorePressure();
                                                                hudScoreShow((t1125 + 0x3C), 0x1, (t1124 & 0x1));
                                                            } else {
                                                                t1133 = t382;
                                                                u1136 = u1106;
                                                            }
                                                            t1145 = t1133;
                                                            u1148 = u1136;
                                                        }
                                                        t1157 = t1145;
                                                        u1160 = u1148;
                                                    }
                                                    t1169 = t1157;
                                                    u1172 = u1160;
                                                }
                                                t1181 = t1169;
                                                u1184 = u1172;
                                            }
                                            t1193 = t1181;
                                            u1196 = u1184;
                                        }
                                        t1205 = t1193;
                                        u1208 = u1196;
                                    }
                                    t1217 = t1205;
                                    u1220 = u1208;
                                }
                                t1681 = t1217;
                                u1685 = u1220;
                            } else {
                                if ((*(int *)0x8C291F70) != 1) {
                                    if ((t387 != 0) && (t1224 = *(int *)0x8C287B3C, (t1224 & 0x100) != 0)) {
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFEFF);
                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                        if ((*(int *)0x8C287D5C) == 3) {
                                            *(unsigned int *)0x8C287B2C = 0x5;
                                        }
                                        *(unsigned int *)0x8C287B80 = 0x1;
                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                        if ((*(int *)0x8C38BA70) == 0) {
                                        } else {
                                            evCrowdPointStart(0x12C);
                                        }
                                        t1241 = *(int *)0x8C287AF4;
                                        *(int *)((int)stk + 4) = (t1241 & 0x1);
                                        t1242 = scorePressure();
                                        hudScoreShow(t1242, 0x0, (t1241 & 0x1));
                                    } else {
                                        if ((t382 != 0) && ((t1244 = *(int *)0x8C291F70, (int)t1244 > (int)0x1) && (t1245 = *(int *)0x8C291F70, (int)t1245 < (int)0xA))) {
                                            *(unsigned int *)0x8C287AFC = (*(int *)0x8C287AF8);
                                            *(unsigned int *)0x8C287AF0 = (*(int *)0x8C287AF8);
                                            *(unsigned int *)0x8C287AF4 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFEFFF);
                                            *(unsigned int *)0x8C287B2C = 0x1E;
                                            *(unsigned int *)0x8C287B80 = 0x2;
                                            matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                            if ((*(int *)0x8C38BA70) == 0) {
                                            } else {
                                                evCrowdPointStart(0x12C);
                                            }
                                            t1264 = *(int *)0x8C287AF4;
                                            *(int *)((int)stk + 4) = (t1264 & 0x1);
                                            t1265 = scorePressure();
                                            hudScoreShow(t1265, 0x0, (t1264 & 0x1));
                                        } else {
                                            t1408 = t382;
                                            if (t377 == 0) {
                                            } else {
                                                t1396 = t382;
                                                if (((*(int *)0x8C291F78) & 1) == 0) {
                                                } else {
                                                    t1384 = t382;
                                                    if ((*(int *)0x8C291F70) != 1) {
                                                    } else {
                                                        u1275 = *(float *)0x8C291F38;
                                                        u1276 = (-u1275);
                                                        if (!(0.0f > u1275)) {
                                                            u1276 = u1275;
                                                        }
                                                        if (u1276 > 118.849998f) {
                                                            *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                            *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                            umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                            *(unsigned int *)0x8C287B2C = 0x3C;
                                                            *(unsigned int *)0x8C287B80 = 0x1;
                                                            matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                            if ((*(int *)0x8C38BA70) == 0) {
                                                            } else {
                                                                evCrowdPointStart(0x12C);
                                                            }
                                                            t1290 = scorePressure();
                                                            hudPointPanelShow(t1290);
                                                            t1292 = *(int *)0x8C287AF4;
                                                            *(int *)((int)stk + 4) = (t1292 & 0x1);
                                                            t1293 = scorePressure();
                                                            hudScoreShow((t1293 + 0x3C), 0x1, (t1292 & 0x1));
                                                        } else {
                                                            t1295 = *(int *)0x8C287AF8;
                                                            *(unsigned int *)(((int)stk + 12)) = ((t1295 * 0xD78) + 0x8C287D84);
                                                            u1296 = *(float *)((((t1295 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                            u1301 = *(float *)0x8C291F38;
                                                            if (((u1296 > 0.0f) - (0.0f > u1296)) == ((u1301 > 0.0f) - (0.0f > u1301))) {
                                                                *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                                *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                                *(unsigned int *)0x8C287B2C = 0x3C;
                                                                *(unsigned int *)0x8C287B80 = 0x1;
                                                                matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                                                if ((*(int *)0x8C38BA70) != 0) {
                                                                    evCrowdPointStart(0x12C);
                                                                }
                                                                t1318 = *(int *)0x8C287AF4;
                                                                *(int *)((int)stk + 4) = (t1318 & 0x1);
                                                                t1319 = scorePressure();
                                                                hudScoreShow(t1319, 0x0, (t1318 & 0x1));
                                                            } else {
                                                                u1321 = *(float *)0x8C291F30;
                                                                u1322 = (-u1321);
                                                                if (!(0.0f > u1321)) {
                                                                    u1322 = u1321;
                                                                }
                                                                if (u1322 > (*(float *)0x8C287B40)) {
                                                                    *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                                                    *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                                                    umpCallOut(t377, t387, t382, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                                                    *(unsigned int *)0x8C287B2C = 0x3C;
                                                                    *(unsigned int *)0x8C287B80 = 0x1;
                                                                    matchPointWon(((*(int *)0x8C287AF8) & 0x1));
                                                                    if ((*(int *)0x8C38BA70) != 0) {
                                                                        evCrowdPointStart(0x12C);
                                                                    }
                                                                    t1337 = scorePressure();
                                                                    hudPointPanelShow(t1337);
                                                                    t1339 = *(int *)0x8C287AF4;
                                                                    *(int *)((int)stk + 4) = (t1339 & 0x1);
                                                                    t1340 = scorePressure();
                                                                    hudScoreShow((t1340 + 0x3C), 0x1, (t1339 & 0x1));
                                                                } else {
                                                                    t1348 = t382;
                                                                    u1351 = u1321;
                                                                }
                                                                t1360 = t1348;
                                                                u1363 = u1351;
                                                            }
                                                            t1372 = t1360;
                                                            u1375 = u1363;
                                                        }
                                                        t1384 = t1372;
                                                        u1387 = u1375;
                                                    }
                                                    t1396 = t1384;
                                                    u1399 = u1387;
                                                }
                                                t1408 = t1396;
                                                u1411 = u1399;
                                            }
                                            t1420 = t1408;
                                            u1423 = u1411;
                                        }
                                        t1432 = t1420;
                                        u1435 = u1423;
                                    }
                                    t1668 = t1432;
                                    u1672 = u1435;
                                } else {
                                    t1438 = serveGetServer();
                                    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
                                    serveGetPos(t1438, 0x0, 0x0, 0x0, (((int)stk + 8) + 0xC));
                                    u1440 = *(float *)0x8C291F38;
                                    t1445 = *(int *)0x8C287AF8;
                                    *(unsigned int *)(((int)stk + 16)) = ((t1445 * 0xD78) + 0x8C287D84);
                                    u1446 = *(float *)((((t1445 * 0xD78) + 0x8C287D84) + 0xAF0));
                                    if (((u1440 > 0.0f) - (0.0f > u1440)) != ((u1446 > 0.0f) - (0.0f > u1446))) {
                                        u1452 = *(float *)0x8C291F38;
                                        u1453 = (-u1452);
                                        if (!(0.0f > u1452)) {
                                            u1453 = u1452;
                                        }
                                        if (!(u1453 > 64.5f)) {
                                            u1456 = *(float *)0x8C291F30;
                                            u1458 = (-u1456);
                                            if (!(0.0f > u1456)) {
                                                u1458 = (*(float *)0x8C291F30);
                                            }
                                            if (!(u1458 > 41.6500015f)) {
                                                t1467 = 0x1;
                                                if ((*(float *)(((int)stk + 20))) > 0.0f) {
                                                } else {
                                                    t1465 = 0x0;
                                                    if (0.0f > (*(float *)(((int)stk + 20)))) {
                                                        t1465 = 0xFFFFFFFF;
                                                    }
                                                    t1467 = t1465;
                                                }
                                                t1485 = 0x1;
                                                if (((*(float *)0x8C291F30) - ((float)t1467 * 0.5f)) > 0.0f) {
                                                } else {
                                                    t1478 = 0x1;
                                                    if ((*(float *)(((int)stk + 20))) > 0.0f) {
                                                    } else {
                                                        t1476 = 0x0;
                                                        if (0.0f > (*(float *)(((int)stk + 20)))) {
                                                            t1476 = 0xFFFFFFFF;
                                                        }
                                                        t1478 = t1476;
                                                    }
                                                    t1482 = 0x0;
                                                    if (0.0f > ((*(float *)0x8C291F30) - ((float)t1478 * 0.5f))) {
                                                        t1482 = 0xFFFFFFFF;
                                                    }
                                                    t1485 = t1482;
                                                }
                                                t1494 = 0x1;
                                                if ((*(float *)(((int)stk + 20))) > 0.0f) {
                                                } else {
                                                    t1492 = 0x0;
                                                    if (0.0f > (*(float *)(((int)stk + 20)))) {
                                                        t1492 = 0xFFFFFFFF;
                                                    }
                                                    t1494 = t1492;
                                                }
                                                if (t1485 == t1494) {
                                                    *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                                    u1572 = u1452;
                                                } else {
                                                    if (((*(int *)0x8C287B3C) & 128) == 0) {
                                                        *(unsigned int *)0x8C287B28 = 0x0;
                                                        if ((*(int *)0x8C287D5C) == 2) {
                                                            t1501 = serveGetServer();
                                                            if ((t1501 & 1) == 0) {
                                                                u1503 = *(float *)0x8C291F30;
                                                                u1505 = (-u1503);
                                                                if (!(0.0f > u1503)) {
                                                                    u1505 = (*(float *)0x8C291F30);
                                                                }
                                                                if (!(u1505 > 40.1500015f)) {
                                                                    u1508 = *(float *)0x8C291F30;
                                                                    u1510 = (-u1508);
                                                                    if (!(0.0f > u1508)) {
                                                                        u1510 = (*(float *)0x8C291F30);
                                                                    }
                                                                    if (!(1.0f > u1510)) {
                                                                        u1513 = *(float *)0x8C291F38;
                                                                        u1515 = (-u1513);
                                                                        if (!(0.0f > u1513)) {
                                                                            u1515 = (*(float *)0x8C291F38);
                                                                        }
                                                                        if (u1515 > 63.5f) {
                                                                            *(unsigned int *)0x8C2FBCB8 = ((*(int *)0x8C2FBCB8) + 0x1);
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)0x8C2FBCB8 = ((*(int *)0x8C2FBCB8) + 0x1);
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)0x8C2FBCB8 = ((*(int *)0x8C2FBCB8) + 0x1);
                                                                }
                                                            }
                                                        } else {
                                                            u1550 = u1452;
                                                        }
                                                        u1562 = u1550;
                                                    } else {
                                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                                        umpCallLet(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                        hudLetPanel();
                                                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                                                        *(float *)0x8C287B7C = 0.0399999991f;
                                                    }
                                                    u1572 = u1562;
                                                }
                                                u1583 = u1572;
                                            } else {
                                                *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                                u1583 = u1452;
                                            }
                                            u1594 = u1583;
                                        } else {
                                            *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                            u1594 = u1452;
                                        }
                                        u1605 = u1594;
                                    } else {
                                        *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                        u1605 = u1446;
                                    }
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                    if (((*(int *)(((int)stk + 8))) == 0) && (t1610 = *(int *)0x8C287B28, t1610 == 1)) {
                                        umpCallFault(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
                                        hudFaultPanel(0x78);
                                        if ((*(int *)0x8C1D126C) == 0) {
                                            sndSeStage();
                                        }
                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                        *(float *)0x8C287B7C = 0.0399999991f;
                                    } else {
                                        u1626 = u1605;
                                    }
                                    if ((*(int *)0x8C287B28) != 2) {
                                        u1659 = u1626;
                                    } else {
                                        *(unsigned int *)0x8C287AF0 = ((-((*(int *)0x8C287AF8) & 0x1)) + 0x1);
                                        *(unsigned int *)0x8C287AF4 = (*(int *)0x8C287AF8);
                                        umpCallDoubleFault();
                                        if ((*(int *)0x8C1D126C) == 0) {
                                            sndSeStage();
                                        }
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x1000);
                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                        *(unsigned int *)0x8C287B80 = 0x1;
                                        matchPointWon(((*(int *)0x8C287AF4) & 0x1));
                                        if ((*(int *)0x8C38BA70) != 0) {
                                            evCrowdPointStart(0x12C);
                                        }
                                        t1647 = scorePressure();
                                        hudDoubleFaultPanel(t1647);
                                        t1649 = *(int *)0x8C287AF4;
                                        *(int *)((int)stk + 4) = (t1649 & 0x1);
                                        t1650 = scorePressure();
                                        hudScoreShow((t1650 + 0x3C), 0x1, (t1649 & 0x1));
                                    }
                                    u1672 = u1659;
                                }
                                t1681 = t1668;
                                u1685 = u1672;
                            }
                            t1694 = t1681;
                            u1698 = u1685;
                        }
                        t1707 = t1694;
                        u1711 = u1698;
                    }
                    t1720 = t1707;
                    u1724 = u1711;
                }
                if (((*(int *)0x8C287D5C) == 3) && (t1728 = *(int *)0x8C291F78, (t1728 & 1) != 0)) {
                    t1729 = *(int *)0x8C287AF8;
                    if ((*(int *)0x8C291F70) == 1) {
                        t1731 = ((int (*)(int, int, int, float))(miniOnEvent))(0x0, ((t1729 * 0xD78) + 0x8C287D84), t1720, u1724);
                    } else {
                        t1732 = ((int (*)(int, int, int, float))(miniOnEvent))(0x1, ((t1729 * 0xD78) + 0x8C287D84), t1720, u1724);
                    }
                }
                t1747 = *(int *)0x8C287B28;
                t1748 = t1747;
                if (t1747 == 2) {
                    *(unsigned int *)0x8C287B28 = 0x0;
                    t1748 = 0x5C;
                }
                t1750 = t1748;
            }
            t1763 = t1750;
        }
        t1777 = t1763;
    }
    return t1777;
}

int standPanelDraw(int a4, int a5, int a6, int a7, Stk3 p, int a11, int a12)
{
    int stk[63];

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    stk[54] = p.w[0];
    stk[55] = p.w[1];
    stk[56] = p.w[2];
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 84)) = v0_0;
    *(unsigned int *)(((int)stk + 96)) = v0_2;
    *(unsigned int *)(((int)stk + 92)) = v0_3;
    v0_1 = ((((int)stk + 80) + 0x34));
    v0_0 = (0x8C015EEA);
    v0_0 = ((((int)stk + 80) + 0x4C));
    v0_5 = ((0x88 + ((int)stk + 80)));
    v0_6 = (v0_4);
    w0_0 = (1.0f);
    if ((v0_4 == 0)) goto L_8C0A34FC;
    w0_1 = (0.5f);
    L_8C0A34FE:;
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_3 = *(float *)((v0_5 + 0x8));
    w0_4 = *(float *)((v0_5 + 0x4));
    v0_7 = v0_0;
    *(int *)((int)stk + 76) = v0_7;
    *(Stk3 *)(v0_7) = vecMake((w0_2 + -15.0f), (w0_4 + 7.0f), w0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(v0_0); }
    sprPutAtAlpha(0x8C33EE10, *(Stk3 *)(((int)stk + 64)), w0_1);
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_3 = *(float *)((v0_5 + 0x8));
    w0_4 = *(float *)((v0_5 + 0x4));
    v0_7 = v0_0;
    *(int *)((int)stk + 60) = v0_7;
    *(Stk3 *)(v0_7) = vecMake((w0_2 + 103.0f), (w0_4 + 7.0f), w0_3);
    *(float *)0x8C33EE70 = (((*(float *)0x8C33EE80) - (*(float *)0x8C33EE78)) * 231.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)(v0_0); }
    sprPutAtAlpha(0x8C33EE60, *(Stk3 *)(((int)stk + 48)), w0_1);
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_3 = *(float *)((v0_5 + 0x8));
    w0_4 = *(float *)((v0_5 + 0x4));
    v0_7 = v0_0;
    *(int *)((int)stk + 44) = v0_7;
    *(Stk3 *)(v0_7) = vecMake((w0_2 + 221.0f), (w0_4 + 7.0f), w0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(v0_0); }
    sprPutAtAlpha(0x8C33EEB0, *(Stk3 *)(((int)stk + 32)), w0_1);
    *(unsigned int *)(((int)stk + 80)) = 0x96FFFFFF;
    w0_1 = *(float *)((v0_5 + 0x8));
    w0_2 = *(float *)((v0_5 + 0x4));
    w0_3 = *(float *)((v0_5 + 0x0));
    v0_7 = v0_0;
    *(int *)((int)stk + 28) = v0_7;
    *(Stk3 *)(v0_7) = vecMake((w0_3 + 103.0f), (w0_2 + -19.0f), (w0_1 + 0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(v0_0); }
    primRectIncGradX(0x76, 0x27, 0x1EFFFFFF, (*(int *)(((int)stk + 80))), *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) + 117.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_0); }
    primRectIncGradX(0x76, 0x27, (*(int *)(((int)stk + 80))), 0x1EFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12));
    v0_7 = (0x8C33ECD0);
    w0_3 = (-13.0f);
    w0_1 = (0.100000001f);
    if ((v0_6 == 0)) goto L_8C0A36E8;
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_4 = *(float *)((v0_5 + 0x8));
    w0_5 = *(float *)((v0_5 + 0x4));
    v0_8 = v0_0;
    *(int *)((int)stk + 76) = v0_8;
    *(Stk3 *)(v0_8) = vecMake((w0_2 + 223.0f), (w0_5 + -23.0f), (w0_4 + -0.00999999978f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(v0_0); }
    primRectIncGradX(0xF1, 0x2F, 0xAA000000, 0xAA000000, *(Stk3 *)(((int)stk + 64)), *(Stk1 *)((int)stk + 64 + 12));
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((v0_5 + 0x0))) + 41.0f), ((*(float *)((v0_5 + 0x4))) + w0_3), 0.00499999989f);
    hudSignLastPut(*(Stk3 *)((int)stk + 68), w0_0);
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((v0_5 + 0x0))) + 97.0f), ((*(float *)((v0_5 + 0x4))) + -42.0f), w0_1);
    standBarDraw(0x1F, 0x16, 0x1, 0x0, *(Stk3 *)((int)stk + 68));
    L_8C0A36E8:;
    w0_2 = *(float *)((v0_5 + 0x0));
    w0_4 = *(float *)((v0_5 + 0x8));
    w0_5 = *(float *)((v0_5 + 0x4));
    v0_8 = v0_0;
    *(int *)((int)stk + 76) = v0_8;
    *(Stk3 *)(v0_8) = vecMake((w0_2 + 8.0f), (w0_5 + -21.0f), (w0_4 + w0_1));
    w0_1 = *(float *)((v0_5 + 0x0));
    w0_2 = *(float *)((v0_5 + 0x8));
    w0_4 = *(float *)((v0_5 + 0x4));
    *(int *)((int)stk + 72) = (((int)stk + 76) + 0x2C);
    *(Stk3 *)((((int)stk + 76) + 0x2C)) = vecMake((w0_1 + -26.0f), (w0_4 + w0_3), (w0_2 + -0.0500000007f));
    w0_2 = (-26.0f);
    w0_1 = (-0.0500000007f);
    if (((*(int *)(((int)stk + 92))) != 0)) goto L_8C0A3730;
    v0_1 = *(int *)(((int)stk + 84));
    v0_9 = (v0_1);
    w0_2 = (((*(float *)((v0_5 + 0x0))) + w0_2));
    w0_4 = (((*(float *)((v0_5 + 0x4))) + w0_3));
    w0_1 = (((*(float *)((v0_5 + 0x8))) + w0_1));
    if ((v0_1 == 0)) goto L_8C0A3CB4;
    if ((v0_9 == 1)) goto L_8C0A3CB4;
    if ((v0_9 == 2)) goto L_8C0A3CBC;
    if ((v0_9 == 3)) goto L_8C0A3CC4;
    if (!((v0_9 == 4))) goto L_8C0A3CE8;
    v0_1 = v0_0;
    *(int *)((int)stk + 76) = v0_1;
    *(Stk3 *)(v0_1) = vecMake(w0_2, w0_4, w0_1);
    goto L_8C0A3CD2;
    L_8C0A3CE8:;
    return v0_9;
    L_8C0A3CD2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_0); }
    v0_9 = ((hudSignPut((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 68)), w0_0)));
    goto L_8C0A3CE8;
    L_8C0A3CC4:;
    v0_1 = v0_0;
    *(int *)((int)stk + 76) = v0_1;
    *(Stk3 *)(v0_1) = vecMake(w0_2, w0_4, w0_1);
    goto L_8C0A3CD2;
    L_8C0A3CBC:;
    v0_1 = v0_0;
    *(int *)((int)stk + 76) = v0_1;
    *(Stk3 *)(v0_1) = vecMake(w0_2, w0_4, w0_1);
    goto L_8C0A3CD2;
    L_8C0A3CB4:;
    v0_1 = v0_0;
    *(int *)((int)stk + 76) = v0_1;
    *(Stk3 *)(v0_1) = vecMake(w0_2, w0_4, w0_1);
    goto L_8C0A3CD2;
    L_8C0A3730:;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 80) + 0x14)) = *(struct mv5 *)(0x8C110710); }
    if ((v0_6 == 0)) goto L_8C0A3746;
    w0_2 = (0.5f);
    L_8C0A3748:;
    *(float *)(((int)stk + 88)) = ((*(float *)((v0_5 + 0x4))) + -15.0f);
    *(unsigned int *)(((int)stk + 80)) = ((*(int *)(((int)stk + 84))) << 2);
    v0_10 = *(int *)(((int)stk + 84));
    v0_9 = (v0_10);
    v0_8 = ((((int)stk + 80) + 0x40));
    w0_0 = (0.509803951f);
    w0_4 = (((*(float *)((v0_5 + 0x4))) + -14.0f));
    if ((v0_10 == 0)) goto L_8C0A37C8;
    if ((v0_9 != 1)) goto L_8C0A377C;
    w0_4 = *(float *)((v0_5 + 0x0));
    w0_5 = *(float *)((v0_5 + 0x8));
    w0_6 = *(float *)(((int)stk + 88));
    v0_9 = v0_1;
    *(int *)((int)stk + 76) = v0_9;
    *(Stk3 *)(v0_9) = vecMake((w0_4 + 38.0f), w0_6, (w0_5 + w0_1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_8) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(v0_1); }
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 67.0f);
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) - 17.0f);
    *(float *)((v0_8 + 0x0)) = ((*(float *)((v0_8 + 0x0))) - 37.0f);
    *(float *)((v0_8 + 0x4)) = ((*(float *)((v0_8 + 0x4))) - w0_3);
    v0_9 = (0x41880000);
    FPUL_ = (0x41880000);
    if ((v0_6 == 0)) goto L_8C0A39D2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_8); }
    v0_0 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((v0_0 << 2) + v0_0) << 2) << 2) + v0_7), *(Stk3 *)(((int)stk + 68)), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    v0_9 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), w0_2)));
    goto L_8C0A3CE8;
    L_8C0A39D2:;
    if (!((a11 == 1))) goto L_8C0A3BE4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(v0_0); }
    markerShowStart((*(int *)(((int)stk + 84))), v0_2, v0_3, v0_4, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)));
    goto L_8C0A3BE4;
    L_8C0A3BE4:;
    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)((v0_5 + 0x0))) + 220.0f), ((*(float *)((v0_5 + 0x4))) + -19.0f), 0.0799999982f);
    v0_9 = ((standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28))));
    goto L_8C0A3CE8;
    L_8C0A377C:;
    if ((v0_9 != 2)) goto L_8C0A3784;
    w0_3 = *(float *)((v0_5 + 0x0));
    w0_4 = *(float *)((v0_5 + 0x8));
    w0_5 = *(float *)((v0_5 + 0x4));
    v0_9 = v0_1;
    *(int *)((int)stk + 76) = v0_9;
    *(Stk3 *)(v0_9) = vecMake((w0_3 + 40.0f), (w0_5 + -12.0f), (w0_4 + w0_1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_8) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(v0_1); }
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 81.0f);
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) - 24.0f);
    *(float *)((v0_8 + 0x0)) = ((*(float *)((v0_8 + 0x0))) - 38.0f);
    *(float *)((v0_8 + 0x4)) = ((*(float *)((v0_8 + 0x4))) - -6.0f);
    v0_9 = (0xC0C00000);
    FPUL_ = (0xC0C00000);
    if ((v0_6 != 0)) goto L_8C0A3A48;
    goto L_8C0A39D2;
    L_8C0A3A48:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_8); }
    v0_0 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((v0_0 << 2) + v0_0) << 2) << 2) + v0_7), *(Stk3 *)(((int)stk + 68)), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    v0_9 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), w0_2)));
    goto L_8C0A3CE8;
    L_8C0A3784:;
    if ((v0_9 != 3)) goto L_8C0A378C;
    w0_3 = *(float *)((v0_5 + 0x0));
    w0_5 = *(float *)((v0_5 + 0x8));
    v0_9 = v0_1;
    *(int *)((int)stk + 76) = v0_9;
    *(Stk3 *)(v0_9) = vecMake((w0_3 + 28.0f), w0_4, (w0_5 + w0_1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_8) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(v0_1); }
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 63.0f);
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) - 18.0f);
    *(float *)((v0_8 + 0x0)) = ((*(float *)((v0_8 + 0x0))) - 33.0f);
    *(float *)((v0_8 + 0x4)) = ((*(float *)((v0_8 + 0x4))) - -12.0f);
    v0_9 = (0xC1400000);
    FPUL_ = (0xC1400000);
    if ((v0_6 == 0)) goto L_8C0A3BAE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_8); }
    v0_0 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((v0_0 << 2) + v0_0) << 2) << 2) + v0_7), *(Stk3 *)(((int)stk + 68)), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    v0_9 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), w0_2)));
    goto L_8C0A3CE8;
    L_8C0A3BAE:;
    if ((a11 != 1)) goto L_8C0A3BE4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(v0_0); }
    markerShowStart((*(int *)(((int)stk + 84))), v0_2, v0_3, v0_4, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)));
    goto L_8C0A3BE4;
    L_8C0A378C:;
    if ((v0_9 != 4)) goto L_8C0A3794;
    w0_3 = *(float *)((v0_5 + 0x0));
    w0_5 = *(float *)((v0_5 + 0x8));
    v0_9 = v0_1;
    *(int *)((int)stk + 76) = v0_9;
    *(Stk3 *)(v0_9) = vecMake((w0_3 + 29.0f), w0_4, (w0_5 + w0_1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_8) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(v0_1); }
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 61.0f);
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) - 20.0f);
    *(float *)((v0_8 + 0x0)) = ((*(float *)((v0_8 + 0x0))) - 31.0f);
    *(float *)((v0_8 + 0x4)) = ((*(float *)((v0_8 + 0x4))) - -10.0f);
    v0_9 = (0xC1200000);
    FPUL_ = (0xC1200000);
    if ((v0_6 != 0)) goto L_8C0A3C0C;
    goto L_8C0A3BAE;
    L_8C0A3C0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_8); }
    v0_0 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((v0_0 << 2) + v0_0) << 2) << 2) + v0_7), *(Stk3 *)(((int)stk + 68)), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    v0_9 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), w0_2)));
    goto L_8C0A3CE8;
    L_8C0A3794:;
    goto L_8C0A3CE8;
    L_8C0A37C8:;
    w0_4 = *(float *)((v0_5 + 0x0));
    w0_5 = *(float *)((v0_5 + 0x8));
    w0_6 = *(float *)(((int)stk + 88));
    v0_9 = v0_1;
    *(int *)((int)stk + 76) = v0_9;
    *(Stk3 *)(v0_9) = vecMake((w0_4 + 49.0f), w0_6, (w0_5 + w0_1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_8) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)(v0_1); }
    *(float *)((v0_0 + 0x0)) = ((*(float *)((v0_0 + 0x0))) - 71.0f);
    *(float *)((v0_0 + 0x4)) = ((*(float *)((v0_0 + 0x4))) - 17.0f);
    w0_1 = *(float *)((v0_8 + 0x0));
    *(float *)((v0_8 + 0x0)) = (w0_1 - 41.0f);
    *(float *)((v0_8 + 0x4)) = ((*(float *)((v0_8 + 0x4))) - w0_3);
    v0_9 = (0x41880000);
    w0_1 = ((w0_1 - 41.0f));
    w0_1 = (41.0f);
    FPUL_ = (0x41880000);
    if ((v0_6 != 0)) goto L_8C0A3864;
    v0_9 = (a11);
    if ((a11 != 1)) goto L_8C0A3856;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(v0_0); }
    v0_9 = ((markerShowStart((*(int *)(((int)stk + 84))), v0_2, v0_3, v0_4, *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), *(Stk3 *)(((int)stk + 68)))));
    L_8C0A3856:;
    if (((*(int *)(((int)stk + 96))) == 0)) goto L_8C0A3860;
    goto L_8C0A3BE4;
    L_8C0A3860:;
    goto L_8C0A3CE8;
    L_8C0A3864:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(v0_8); }
    v0_0 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
    sprPutAtAlpha((((((v0_0 << 2) + v0_0) << 2) << 2) + v0_7), *(Stk3 *)(((int)stk + 68)), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(v0_1); }
    v0_9 = ((hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), w0_2)));
    goto L_8C0A3CE8;
    L_8C0A3746:;
    w0_2 = (w0_0);
    goto L_8C0A3748;
    L_8C0A34FC:;
    w0_1 = (w0_0);
    goto L_8C0A34FE;
}

int resultDoublesDraw(int a4, int a5, int a6, float f4)
{
    int stk[63];
    register int t1;
    register int t6;
    register int t9;
    register float u16;
    register float u17;
    register float u18;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float u25;
    register float u26;
    register float u28;
    register float u29;
    register float u30;
    register float u36;
    register float u37;
    register float u38;
    register float u45;
    register float u46;
    register float u47;
    register float u50;
    register float u51;
    register float u52;
    register float u65;
    register float u66;
    register float u67;
    register float u81;
    register float u82;
    register float u83;
    register int t117;
    register float u96;
    register float u97;
    register float u98;
    register float u103;
    register float u104;
    register float u105;
    register float u108;
    register float u109;
    register float u110;
    register float u112;
    register float u113;
    register float u114;

    *(unsigned int *)(((int)stk + 136)) = a4;
    *(unsigned int *)(((int)stk + 140)) = a5;
    *(unsigned int *)(((int)stk + 132)) = a6;
    t1 = getID_Color((*(int *)0x8C3417B4), f4);
    *(unsigned int *)(((int)stk + 128)) = (getID_Color((*(int *)0x8C3417B8), f4));
    t6 = (*(int *)0x8C301B90);
    if ((*(int *)0x8C287D5C) == 1) {
        t6 = 0x1;
    }
    t9 = 0xFFFFFFFF;
    if (t6 != 0) {
    } else {
        t9 = (*(int *)0x8C3417C4);
    }
    *(int *)((int)stk + 124) = (((int)stk + 128) + 0x34);
    *(Stk3 *)((((int)stk + 128) + 0x34)) = vecMake(35.0f, 71.0f, 0.5f);
    *(Stk3 *)(((int)stk + 116)) = vecMake((*(float *)(((((int)stk + 128) + 0x34) + 0x0))), (*(float *)(((((int)stk + 128) + 0x34) + 0x4))), (*(float *)(((((int)stk + 128) + 0x34) + 0x8))));
    resultTeamsDraw(f4);
    u16 = *(float *)(((((int)stk + 128) + 0x34) + 0x0));
    u17 = *(float *)(((((int)stk + 128) + 0x34) + 0x8));
    u18 = *(float *)(((((int)stk + 128) + 0x34) + 0x4));
    *(int *)((int)stk + 112) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u16 + 249.0f), (u18 + 53.0f), (u17 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 100)), f4);
    u20 = *(float *)(((((int)stk + 128) + 0x34) + 0x0));
    u21 = *(float *)(((((int)stk + 128) + 0x34) + 0x8));
    u22 = *(float *)(((((int)stk + 128) + 0x34) + 0x4));
    *(int *)((int)stk + 96) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u20 + 10.0f), (u22 + 4.0f), (u21 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    hudSignFirstPut(t9, *(Stk3 *)(((int)stk + 84)), f4);
    u24 = *(float *)(((((int)stk + 128) + 0x34) + 0x0));
    u25 = *(float *)(((((int)stk + 128) + 0x34) + 0x8));
    u26 = *(float *)(((((int)stk + 128) + 0x34) + 0x4));
    *(int *)((int)stk + 80) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u24 + 405.0f), (u26 + 4.0f), (u25 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    panelLogoPut(*(Stk3 *)(((int)stk + 68)));
    u28 = *(float *)(((((int)stk + 128) + 0x34) + 0x0));
    u29 = *(float *)(((((int)stk + 128) + 0x34) + 0x8));
    u30 = *(float *)(((((int)stk + 128) + 0x34) + 0x4));
    *(int *)((int)stk + 64) = (((int)stk + 68) + 0x58);
    *(Stk3 *)((((int)stk + 68) + 0x58)) = vecMake(u28, u30, u29);
    if (t6 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 68) + 0x58)); }
        panelDrawC(*(Stk3 *)(((int)stk + 116)), ((f4 * 178.0f) / 256.0f));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 68) + 0x58)); }
        panelDrawB(*(Stk3 *)(((int)stk + 116)), ((f4 * 178.0f) / 256.0f));
    }
    *(float *)(((((int)stk + 68) + 0x58) + 0x0)) = ((*(float *)(((((int)stk + 68) + 0x58) + 0x0))) + 26.0f);
    u36 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
    u37 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
    u38 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
    *(int *)((int)stk + 124) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u38 + 140.0f), (u37 + 194.0f), (u36 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F810, *(Stk3 *)(((int)stk + 112)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 159.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextMsgPut(0x8C110708, *(Stk3 *)(((int)stk + 100)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextMsgPut(0x8C11070C, *(Stk3 *)(((int)stk + 88)), f4);
    u45 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
    u46 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
    u47 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
    *(int *)((int)stk + 84) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u45 + 281.0f), (u47 + 218.0f), (u46 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    menuTextTimePut((*(int *)(((int)stk + 132))), *(Stk3 *)(((int)stk + 72)), *(Stk1 *)((int)stk + 72 + 12), f4);
    u50 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
    u51 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
    u52 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
    *(int *)((int)stk + 68) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u50 + 196.0f), (u52 + 217.0f), (u51 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F770, *(Stk3 *)(((int)stk + 56)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 61.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 44)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 110.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287B98), *(Stk3 *)(((int)stk + 32)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BBC), *(Stk3 *)(((int)stk + 20)), f4);
    u65 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
    u66 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
    u67 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
    *(int *)((int)stk + 16) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u65 + 192.0f), (u67 + 241.0f), (u66 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F8B0, *(Stk3 *)(((int)stk + 4)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 79.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) - 14.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 116)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 107.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287B94), *(Stk3 *)(((int)stk + 104)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 358.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BB8), *(Stk3 *)(((int)stk + 92)), f4);
    u81 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
    u82 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
    u83 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
    *(int *)((int)stk + 88) = (((int)stk + 116) + 0x4C);
    *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u81 + 180.0f), (u83 + 264.0f), (u82 + -0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 72) + 0x60)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    sprPutAtAlpha(0x8C33F860, *(Stk3 *)(((int)stk + 76)), f4);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + 11.0f);
    *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 77.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
    resultBoxDraw(t1, (*(int *)(((int)stk + 128))), *(Stk3 *)(((int)stk + 64)));
    *(float *)(((((int)stk + 72) + 0x60) + 0x4)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x4))) + 22.0f);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) - 95.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    menuTextNumPut((*(int *)0x8C287BA8), *(Stk3 *)(((int)stk + 52)), f4);
    *(float *)(((((int)stk + 72) + 0x60) + 0x0)) = ((*(float *)(((((int)stk + 72) + 0x60) + 0x0))) + 357.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 72) + 0x60)); }
    t117 = (menuTextNumPut((*(int *)0x8C287BCC), *(Stk3 *)(((int)stk + 40)), f4));
    if (t6 != 0) {
    } else {
        u96 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
        u97 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
        u98 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
        *(int *)((int)stk + 124) = (((int)stk + 116) + 0x4C);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u96 + 75.0f), (u98 + 287.0f), (u97 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 112)), f4);
        *(float *)(((((int)stk + 116) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x0))) + 91.0f);
        *(float *)(((((int)stk + 116) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 116) + 0x4C) + 0x4))) + (1.0f + 1.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 100)), f4);
        u103 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
        u104 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
        u105 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
        *(int *)((int)stk + 96) = (((int)stk + 116) + 0x4C);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u103 + 462.0f), (u105 + 287.0f), (u104 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        hudFontNumPut((*(int *)(((int)stk + 140))), *(Stk3 *)(((int)stk + 84)), f4);
        u108 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
        u109 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
        u110 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
        *(int *)((int)stk + 80) = (((int)stk + 116) + 0x4C);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u108 + 119.0f), (u110 + 317.0f), (u109 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        sprPutAtAlpha(0x8C33E460, *(Stk3 *)(((int)stk + 68)), f4);
        u112 = *(float *)(((((int)stk + 68) + 0x58) + 0x0));
        u113 = *(float *)(((((int)stk + 68) + 0x58) + 0x8));
        u114 = *(float *)(((((int)stk + 68) + 0x58) + 0x4));
        *(int *)((int)stk + 64) = (((int)stk + 116) + 0x4C);
        *(Stk3 *)((((int)stk + 116) + 0x4C)) = vecMake((u112 + 462.0f), (u114 + 316.0f), (u113 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 116) + 0x4C)); }
        t117 = (hudFontNumPut((*(int *)(((int)stk + 136))), *(Stk3 *)(((int)stk + 52)), f4));
    }
    return t117;
}

int FUN_8c0a048c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[41];
    register int t3;
    register int t4;
    register float u22;
    register float u23;
    register float u24;
    register float u27;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u45;
    register float u46;
    register float u47;
    register float u54;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u61;
    register float u62;
    register float u63;
    register float u64;
    register float u65;
    register float u68;
    register float u69;
    register float u70;
    register float u71;
    register float u72;
    register float u75;
    register float u76;
    register float u77;
    register float u78;
    register float u85;
    register float u86;
    register float u87;
    register float u88;
    register float u90;
    register float u91;
    register float u92;
    register float u95;
    register float u96;
    register float u97;
    register float u98;
    register float u99;
    register int t101;
    register int t42;
    register int t40;
    int t50;
    register int t52;

    *(unsigned int *)(((int)stk + 72)) = a4;
    *(unsigned int *)(((int)stk + 68)) = a5;
    *(unsigned int *)(((int)stk + 76)) = a6;
    if ((*(int *)0x8C185410) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) != 1) {
            t3 = entryIsVersus(a4, a5, a6, a7);
            if (t3 == 0) {
                t4 = entryFirstPortFlag();
                if (t4 != 0) {
                    *(unsigned int *)0x8C3417C4 = 0x5;
                } else {
                    *(unsigned int *)0x8C3417C4 = (*(int *)(((int)stk + 76)));
                }
            } else {
                *(unsigned int *)0x8C3417C4 = 0x5;
            }
        } else {
            *(unsigned int *)0x8C3417C4 = 0x5;
        }
        *(int *)((int)stk + 64) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(80.0f, 120.0f, 0.5f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 68) + 0x18)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(int *)((int)stk + 60) = (((int)stk + 64) + 0x10);
        *(Stk3 *)((((int)stk + 64) + 0x10)) = vecMake(42.0f, 95.0f, 0.5f);
        u22 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u23 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u24 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 56) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u22 + 107.0f), (u24 + 55.0f), (u23 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        infoPlayerDrawWrap(*(volatile int *)(((int)stk + 72)), 0, 0, 0, *(Stk3 *)(((int)stk + 44)), f4, 0.0f, 0.0f);
        u27 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u28 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u29 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 40) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u27 + 307.0f), (u29 + 55.0f), (u28 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        infoPlayerDrawWrap(*(volatile int *)(((int)stk + 68)), 0, 0, 0, *(Stk3 *)(((int)stk + 28)), f4, 0.0f, 0.0f);
        u32 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u33 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u34 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 24) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u32 + 195.0f), (u34 + 71.0f), (u33 + -0.100000001f));
        if ((*(int *)(((((*(int *)(((int)stk + 72))) << 2) + 0x8C3437C4) + 0x0))) == 0) {
            if ((*(int *)0x8C34326C) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
                t40 = (*(int *)0x8C343268);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
                t40 = 0x4;
            }
            t42 = t40;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t42 = 0x4;
        }
        btnGuideDrawB(t42, *(Stk3 *)(((int)stk + 56)), f4);
        u45 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u46 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u47 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 52) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u45 + 379.0f), (u47 + 71.0f), (u46 + -0.100000001f));
        if (((*(int *)((0x8C3437C4 + ((*(int *)(((int)stk + 68))) << 2)))) == 1) && (t50 = *(int *)0x8C3432A4, t50 == 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t52 = (*(int *)0x8C3432A0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            t52 = 0x4;
        }
        btnGuideDrawB(t52, *(Stk3 *)(((int)stk + 56)), f4);
        u54 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u55 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u56 = *(float *)0x8C0A087C;
        u57 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u58 = *(float *)0x8C0A0880;
        *(int *)((int)stk + 52) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u54 + u58), (u57 + u56), (u55 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        hudLabelPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 40)), f4);
        u61 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u62 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u63 = *(float *)0x8C0A088C;
        u64 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u65 = *(float *)0x8C0A0890;
        *(int *)((int)stk + 36) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u61 + u65), (u64 + u63), (u62 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        hudFont2DigitPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 24)), f4);
        u68 = *(float *)(((((int)stk + 68) + 0x18) + 0x0));
        u69 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u70 = *(float *)0x8C0A0898;
        u71 = *(float *)(((((int)stk + 68) + 0x18) + 0x4));
        u72 = *(float *)0x8C0A089C;
        *(int *)((int)stk + 20) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u68 + u72), (u71 + u70), (u69 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        *(volatile int *)(((int)stk + 76));
        countryStagePut(*(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12), f4);
        u75 = *(float *)(((((int)stk + 68) + 0x18) + 0x8));
        u76 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u77 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u78 = *(float *)0x8C0A08A4;
        *(int *)((int)stk + 4) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u77 + u78), (u76 + (1.0f + 1.0f)), (u75 + -0.100000001f));
        if ((*(int *)0x8C287D5C) != 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
            hudSignPut((*(int *)0x8C3417C4), *(Stk3 *)(((int)stk + 56)), f4);
        }
        u85 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u86 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u87 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u88 = *(float *)0x8C0A08B0;
        *(int *)((int)stk + 64) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u87 + u88), (u86 + (1.0f + 1.0f)), (u85 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        panelLogoPut(*(Stk3 *)(((int)stk + 52)));
        u90 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u91 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u92 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        *(int *)((int)stk + 48) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(u90, u92, u91);
        *(float *)(((((int)stk + 68) + 0x24) + 0x8)) = (*(float *)0x8C0A08B8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        panelDrawA(*(Stk3 *)(((int)stk + 36)), ((f4 * 178.0f) / 256.0f));
        u95 = *(float *)(((((int)stk + 64) + 0x10) + 0x0));
        u96 = *(float *)(((((int)stk + 64) + 0x10) + 0x8));
        u97 = *(float *)0x8C0A08C0;
        u98 = *(float *)(((((int)stk + 64) + 0x10) + 0x4));
        u99 = *(float *)0x8C0A08C4;
        *(int *)((int)stk + 32) = (((int)stk + 68) + 0x24);
        *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake((u95 + u99), (u98 + u97), (u96 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        t101 = (sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 20)), f4));
    }
    return t101;
}

void ballExec(int a4)
{
    int stk[49];
    register int t27;
    register float u29;
    register int t30;
    register int t45;
    register int t55;
    int t1;
    int t7;
    register int t23;
    int t34;
    register int t51;
    register int t52;
    int t53;
    register int t59;
    register int t60;
    register int t100;
    register int t101;

    if (((*(int *)0x8C421F60) != 0) && (t1 = *(int *)0x8C295DDC, (t1 & 32) != 0)) {
        *(int *)((int)stk + 48) = (0xC + a4);
        *(Stk3 *)((0xC + a4)) = vecMake(0.0f, 10.0f, 0.0f);
    } else {
        if (((*(int *)0x8C287C60) == 0) && (t7 = *(int *)((a4 + 0x54)), (t7 & 8) == 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)((a4 + 0xC)); }
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + 1.0f);
            if ((*(int *)0x8C287D5C) == 3) {
                ballColliSync();
            }
            ballMove(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
        } else {
            t23 = a4;
        }
        *(unsigned short *)(((0x84 + a4) + 0x0)) = (nlArcTan2(t23, (*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x3C)))));
        t27 = *(int *)0x8C20D19C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0x34)); }
        u29 = ((float)(-t27) * (vecLength(*(Stk3 *)(((int)stk + 40)))));
        *(unsigned short *)((a4 + 0x86)) = (int)((u29 * 65536.0f) / 21.0f);
        t30 = ambLevelGet();
        nlScaleVector(((int)stk + 52), 0x8C38B834, ((float)t30 / 100.0f));
        nlObjPutSetLightDirectionV(((int)stk + 52));
        if (((*(int *)0x8C421F60) == 0) && (t34 = *(int *)0x8C287B44, t34 == 7)) {
        } else {
            t45 = *(int *)0x8C421F60;
            if (t45 == 0) {
                t55 = 0x0;
                if (((*(int *)0x8C287B44) != 9) && ((t51 = *(int *)0x8C287B44, t51 != 5) && ((t52 = *(int *)0x8C287B44, t52 != 6) && (t53 = *(int *)0x8C287B44, t53 != 10)))) {
                    t55 = 0x1;
                }
                if ((t55 ^ ((((((*(int *)0x8C287B3C) & 0x800) == 0)) ? 1 : 0) ^ 0x1)) == 0) {
                } else {
                    if ((((*(int *)((a4 + 0x54))) & 8) == 0) && (((t45 != 0) || (t59 = *(int *)0x8C287B44, t59 == 0)) && ((t45 == 0) || (t60 = *(int *)0x8C295DF0, t60 == 0)))) {
                        nlPushMatrix(0x0);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(a4); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((a4 + 0xC)); }
                        sceneVecStub(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
                        nlPopMatrix(0x1);
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                        nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                        nlObjPut(0xC505BB0);
                        nlPopMatrix(0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
                        effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                    } else {
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                        nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                        nlObjPut(0xC5053E0);
                        nlPopMatrix(0x1);
                    }
                    nlObjPutSetLightDirectionV(0x8C38B834);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0xC)); }
                    shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
                    effBounceDustCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
                    effServeSpeedCalc(a4);
                }
            } else {
                if ((((*(int *)((a4 + 0x54))) & 8) == 0) && (((t45 != 0) || (t100 = *(int *)0x8C287B44, t100 == 0)) && ((t45 == 0) || (t101 = *(int *)0x8C295DF0, t101 == 0)))) {
                    nlPushMatrix(0x0);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(a4); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((a4 + 0xC)); }
                    sceneVecStub(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                    nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                    nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                    nlObjPut(0xC505BB0);
                    nlPopMatrix(0x1);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
                    effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                } else {
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                    nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                    nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                    nlObjPut(0xC5053E0);
                    nlPopMatrix(0x1);
                }
                nlObjPutSetLightDirectionV(0x8C38B834);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0xC)); }
                shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
                effBounceDustCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
                effServeSpeedCalc(a4);
            }
        }
    }
}

int FUN_8c0a082a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[41];
    register int t3;
    register int t4;
    register int t17;
    register int t18;
    register int t19;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float u25;
    register float u26;
    register int t27;
    register float u29;
    register float u30;
    register float u31;
    register float u34;
    register float u35;
    register float u36;
    register float u38;
    register float u39;
    register float u40;
    register float u47;
    register float u48;
    register float u49;
    register float u51;
    register float u52;
    register float u53;
    register float u55;
    register float u56;
    register float u57;
    register int t59;

    if ((*(int *)0x8C185410) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) != 1) {
            t3 = entryIsVersus(a4, a5, a6, a7);
            if (t3 == 0) {
                t4 = entryFirstPortFlag();
                if (t4 != 0) {
                    *(unsigned int *)0x8C3417C4 = 0x5;
                } else {
                    *(unsigned int *)0x8C3417C4 = a4;
                }
            } else {
                *(unsigned int *)0x8C3417C4 = 0x5;
            }
        } else {
            *(unsigned int *)0x8C3417C4 = 0x5;
        }
        t17 = 0x0;
        for (;;) {
            t18 = entryGetColorId(t17);
            t19 = ((t17 << 2) + 0x8C3417C8);
            t17 = (t17 + 0x1);
            *(unsigned int *)((t19 + 0x0)) = t18;
            if ((int)t17 >= (int)0x4) {
                break;
            }
        }
        *(int *)((int)stk + 76) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(80.0f, 120.0f, 0.5f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0xC)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        *(int *)((int)stk + 72) = (((int)stk + 76) + 0x4);
        *(Stk3 *)((((int)stk + 76) + 0x4)) = vecMake(37.0f, 95.0f, 0.5f);
        u20 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u21 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u22 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 68) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(u20, u22, (u21 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        resultTeamsDrawAlt(*(Stk3 *)(((int)stk + 56)), f4);
        u24 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u25 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u26 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 52) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u24 + 73.0f), (u26 + 226.0f), (u25 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        t27 = *(int *)(((a4 << 2) + 0x8C1106B4));
        sprPutAtAlpha((((((t27 << 2) + t27) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 40)), f4);
        u29 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u30 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u31 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 36) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u29 + 109.0f), (u31 + 218.0f), (u30 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        hudFont2DigitPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 24)), f4);
        u34 = *(float *)(((((int)stk + 80) + 0xC) + 0x0));
        u35 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u36 = *(float *)(((((int)stk + 80) + 0xC) + 0x4));
        *(int *)((int)stk + 20) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u34 + 279.0f), (u36 + 202.0f), (u35 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        countryStagePut(*(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12), f4);
        u38 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u39 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        u40 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        *(int *)((int)stk + 4) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u40 + 41.0f), (u39 + (1.0f + 1.0f)), (u38 + -0.100000001f));
        if ((*(int *)0x8C287D5C) != 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
            hudSignPut((*(int *)0x8C3417C4), *(Stk3 *)(((int)stk + 68)), f4);
        }
        u47 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u48 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        u49 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        *(int *)((int)stk + 76) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u49 + 401.0f), (u48 + (1.0f + 1.0f)), (u47 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        panelLogoPut(*(Stk3 *)(((int)stk + 64)));
        u51 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u52 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u53 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 60) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(u51, u53, u52);
        *(float *)(((((int)stk + 80) + 0x18) + 0x8)) = 10.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        panelDrawA(*(Stk3 *)(((int)stk + 48)), ((f4 * 178.0f) / 256.0f));
        u55 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u56 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u57 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 44) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u55 + 249.0f), (u57 + 53.0f), (u56 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        t59 = (sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 32)), f4));
    }
    return t59;
}

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t7;

    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0x8C20AAA8, a4);
        t7 = 0x0;
    } else {
        t2 = ADXSTMF_Create(t0, a5, (((a6 << 8) << 2) << 1), a7);
        if (t2 != 0) {
            strncpy((t2 + 0x40), a4, 0x20);
            ADXSTM_Seek(t2, 0x0);
        }
        t7 = t2;
    }
    return t7;
}

int mainCheckDrive(void)
{
    int t0;

    t0 = gdFsGetDrvStat();
    if ((t0 != 6) && (t0 != 0)) {
    } else {
        gdFsReqDrvStat(t0);
    }
    if ((int)(*(int *)0x8C12C5A0) > 0) {
        *(unsigned int *)0x8C12C5A0 = ((*(int *)0x8C12C5A0) - 1);
    }
    t0 = *(int *)0x8C12C5A0;
    if (t0 == 1) {
        return mainExitToBios(0x8C12C5A0);
    }
    return t0;
}

int hudSignLastPut(Stk3 s, float f4)
{
    int stk[16];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C33FA90, *(Stk3 *)(((int)stk + 4)), f4));
}
