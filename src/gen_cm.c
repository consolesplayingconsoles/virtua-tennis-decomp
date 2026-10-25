/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestSave(int, int, int, int);
extern float _builtin_sqrtf(float);
int arcadeNextMatch(void);
int arcadeNextStage(int, int, int, int, int, int);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int ballInit(int);
int cpuInitPoint(void);
int entryAnyAtRound5(void);
int evCrowdPointStart(int);
int evPackFade(int, int, int);
int fadeStart(int);
int gameMatchSetup(void);
int hudDoubleFaultPanel(int);
int hudFaultPanel(int);
int hudLetPanel(void);
int hudPointPanelShow(int);
int hudScoreShow(int, int, int);
int matchCheckTiebreak(void);
int matchGetCpuRank(void);
int matchPointWon(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
extern int miniOnEvent();
int miniRoundStart(void);
int netHitReset(void);
int netTouchFlag(int);
int pauseExec(int);
int playerInit(int, int);
int playerStartReactions(int, int);
int resultFlagSet(int);
int scorePressure(void);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int sndSeStage(void);
int stageSoftReset(void);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int umpCallDoubleFault(void);
int umpCallFault(int, int, int, int, int, int, int, int);
int umpCallLet(int, int, int, int, int, int, int);
int umpCallOut(int, int, int, int, int, int, int);
int matchExec(int a4, int a5, int a6, float f4, float f5);
float cpuSglMove(int a4);

int matchExec(int a4, int a5, int a6, float f4, float f5)
{
    int t0;
    int t1777;
    int t6;
    int t1763;
    int t62;
    int t110;
    int t125;
    int t128;
    int t140;
    int t167;
    int t182;
    int t185;
    int t197;
    int t211;
    int t240;
    int t241;
    int t235;
    int t246;
    int t250;
    int t251;
    int t258;
    int t259;
    int t285;
    int t286;
    int t304;
    int t305;
    int t325;
    int t326;
    int t319;
    int t1750;
    int t377;
    int t382;
    int t387;
    int t411;
    int t412;
    int t555;
    int t543;
    int t531;
    float u422;
    float u423;
    int t437;
    int t439;
    int t440;
    int t442;
    float u443;
    int t446;
    int t444;
    float u448;
    int t451;
    int t449;
    int t465;
    int t466;
    float u468;
    float u469;
    int t484;
    int t486;
    int t487;
    int t593;
    int t594;
    int t616;
    int t617;
    int t760;
    int t748;
    int t736;
    float u627;
    float u628;
    int t642;
    int t644;
    int t645;
    int t647;
    float u648;
    int t651;
    int t649;
    float u653;
    int t656;
    int t654;
    int t670;
    int t671;
    float u673;
    float u674;
    int t689;
    int t691;
    int t692;
    int t810;
    int t811;
    int t833;
    int t834;
    int t977;
    int t965;
    int t953;
    float u844;
    float u845;
    int t859;
    int t861;
    int t862;
    int t864;
    float u865;
    int t868;
    int t866;
    float u870;
    int t873;
    int t871;
    int t887;
    int t888;
    float u890;
    float u891;
    int t906;
    int t908;
    int t909;
    int t1026;
    int t1027;
    int t1049;
    int t1050;
    int t1193;
    int t1181;
    int t1169;
    float u1060;
    float u1061;
    int t1075;
    int t1077;
    int t1078;
    int t1080;
    float u1081;
    int t1084;
    int t1082;
    float u1086;
    int t1089;
    int t1087;
    int t1103;
    int t1104;
    float u1106;
    float u1107;
    int t1122;
    int t1124;
    int t1125;
    int t1241;
    int t1242;
    int t1264;
    int t1265;
    int t1408;
    int t1396;
    int t1384;
    float u1275;
    float u1276;
    int t1290;
    int t1292;
    int t1293;
    int t1295;
    float u1296;
    int t1299;
    int t1297;
    float u1301;
    int t1304;
    int t1302;
    int t1318;
    int t1319;
    float u1321;
    float u1322;
    int t1337;
    int t1339;
    int t1340;
    int t1438;
    float u1440;
    int t1443;
    int t1441;
    int t1445;
    float u1446;
    int t1449;
    int t1447;
    float u1452;
    float u1453;
    float u1456;
    float u1458;
    int t1467;
    int t1465;
    int t1485;
    int t1478;
    int t1476;
    int t1482;
    int t1494;
    int t1492;
    int t1501;
    float u1503;
    float u1505;
    float u1508;
    float u1510;
    float u1513;
    float u1515;
    int t1647;
    int t1649;
    int t1650;
    int t1729;
    int t1731;
    int t1732;
    int t1747;
    int t1748;
    float u69;
    int t120;
    int t121;
    int t122;
    int t177;
    int t178;
    int t179;
    int t230;
    int t231;
    int t374;
    int t379;
    int t384;
    int t1720;
    float u1724;
    float u1725;
    int t391;
    int t392;
    int t567;
    float u570;
    float u571;
    float u558;
    float u559;
    float u546;
    float u547;
    float u534;
    float u535;
    int t519;
    float u522;
    float u523;
    int t507;
    float u510;
    float u511;
    int t495;
    float u498;
    float u499;
    int t1707;
    float u1711;
    float u1712;
    int t576;
    int t784;
    float u787;
    float u788;
    int t596;
    int t597;
    int t772;
    float u775;
    float u776;
    float u763;
    float u764;
    float u751;
    float u752;
    float u739;
    float u740;
    int t724;
    float u727;
    float u728;
    int t712;
    float u715;
    float u716;
    int t700;
    float u703;
    float u704;
    int t1694;
    float u1698;
    float u1699;
    int t793;
    int t1001;
    float u1004;
    float u1005;
    int t813;
    int t814;
    int t989;
    float u992;
    float u993;
    float u980;
    float u981;
    float u968;
    float u969;
    float u956;
    float u957;
    int t941;
    float u944;
    float u945;
    int t929;
    float u932;
    float u933;
    int t917;
    float u920;
    float u921;
    int t1681;
    float u1685;
    float u1686;
    int t1009;
    int t1217;
    float u1220;
    float u1221;
    int t1029;
    int t1030;
    int t1205;
    float u1208;
    float u1209;
    float u1196;
    float u1197;
    float u1184;
    float u1185;
    float u1172;
    float u1173;
    int t1157;
    float u1160;
    float u1161;
    int t1145;
    float u1148;
    float u1149;
    int t1133;
    float u1136;
    float u1137;
    int t1668;
    float u1672;
    float u1673;
    int t1224;
    int t1432;
    float u1435;
    float u1436;
    int t1244;
    int t1245;
    int t1420;
    float u1423;
    float u1424;
    float u1411;
    float u1412;
    float u1399;
    float u1400;
    float u1387;
    float u1388;
    int t1372;
    float u1375;
    float u1376;
    int t1360;
    float u1363;
    float u1364;
    int t1348;
    float u1351;
    float u1352;
    float u1605;
    float u1606;
    float u1594;
    float u1595;
    float u1583;
    float u1584;
    float u1572;
    float u1573;
    float u1562;
    float u1563;
    float u1550;
    float u1551;
    int t1610;
    float u1626;
    float u1627;
    float u1659;
    float u1660;
    int t1728;
    int stk[18];

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
                        *(volatile int *)0x8C287AF4;
                        pauseExec(0x8C287ACC);
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
                                        umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                        t440 = scorePressure();
                                        hudScoreShow((t440 + 0x3C), 0x1, (t439 & 0x1));
                                    } else {
                                        t442 = *(int *)0x8C287AF8;
                                        *(unsigned int *)(((int)stk + 12)) = ((t442 * 0xD78) + 0x8C287D84);
                                        u443 = *(float *)((((t442 * 0xD78) + 0x8C287D84) + 0xAF0));
                                        t446 = 0x1;
                                        if (u443 > 0.0f) {
                                        } else {
                                            t444 = 0x0;
                                            if (0.0f > u443) {
                                                t444 = 0xFFFFFFFF;
                                            }
                                            t446 = t444;
                                        }
                                        u448 = *(float *)0x8C291F38;
                                        t451 = 0x1;
                                        if (u448 > 0.0f) {
                                        } else {
                                            t449 = 0x0;
                                            if (0.0f > u448) {
                                                t449 = 0xFFFFFFFF;
                                            }
                                            t451 = t449;
                                        }
                                        if (t446 == t451) {
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
                                                umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                t487 = scorePressure();
                                                hudScoreShow((t487 + 0x3C), 0x1, (t486 & 0x1));
                                            } else {
                                                t495 = t382;
                                                u498 = u468;
                                                u499 = u448;
                                            }
                                            t507 = t495;
                                            u510 = u498;
                                            u511 = u499;
                                        }
                                        t519 = t507;
                                        u522 = u510;
                                        u523 = u511;
                                    }
                                    t531 = t519;
                                    u534 = u522;
                                    u535 = u523;
                                }
                                t543 = t531;
                                u546 = u534;
                                u547 = u535;
                            }
                            t555 = t543;
                            u558 = u546;
                            u559 = u547;
                        }
                        t567 = t555;
                        u570 = u558;
                        u571 = u559;
                    }
                    t1720 = t567;
                    u1724 = u570;
                    u1725 = u571;
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
                                                umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                t645 = scorePressure();
                                                hudScoreShow((t645 + 0x3C), 0x1, (t644 & 0x1));
                                            } else {
                                                t647 = *(int *)0x8C287AF8;
                                                *(unsigned int *)(((int)stk + 12)) = ((t647 * 0xD78) + 0x8C287D84);
                                                u648 = *(float *)((((t647 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                t651 = 0x1;
                                                if (u648 > 0.0f) {
                                                } else {
                                                    t649 = 0x0;
                                                    if (0.0f > u648) {
                                                        t649 = 0xFFFFFFFF;
                                                    }
                                                    t651 = t649;
                                                }
                                                u653 = *(float *)0x8C291F38;
                                                t656 = 0x1;
                                                if (u653 > 0.0f) {
                                                } else {
                                                    t654 = 0x0;
                                                    if (0.0f > u653) {
                                                        t654 = 0xFFFFFFFF;
                                                    }
                                                    t656 = t654;
                                                }
                                                if (t651 == t656) {
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
                                                        umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                        t692 = scorePressure();
                                                        hudScoreShow((t692 + 0x3C), 0x1, (t691 & 0x1));
                                                    } else {
                                                        t700 = t382;
                                                        u703 = u673;
                                                        u704 = u653;
                                                    }
                                                    t712 = t700;
                                                    u715 = u703;
                                                    u716 = u704;
                                                }
                                                t724 = t712;
                                                u727 = u715;
                                                u728 = u716;
                                            }
                                            t736 = t724;
                                            u739 = u727;
                                            u740 = u728;
                                        }
                                        t748 = t736;
                                        u751 = u739;
                                        u752 = u740;
                                    }
                                    t760 = t748;
                                    u763 = u751;
                                    u764 = u752;
                                }
                                t772 = t760;
                                u775 = u763;
                                u776 = u764;
                            }
                            t784 = t772;
                            u787 = u775;
                            u788 = u776;
                        }
                        t1707 = t784;
                        u1711 = u787;
                        u1712 = u788;
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
                                                    umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                    t862 = scorePressure();
                                                    hudScoreShow((t862 + 0x3C), 0x1, (t861 & 0x1));
                                                } else {
                                                    t864 = *(int *)0x8C287AF8;
                                                    *(unsigned int *)(((int)stk + 12)) = ((t864 * 0xD78) + 0x8C287D84);
                                                    u865 = *(float *)((((t864 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                    t868 = 0x1;
                                                    if (u865 > 0.0f) {
                                                    } else {
                                                        t866 = 0x0;
                                                        if (0.0f > u865) {
                                                            t866 = 0xFFFFFFFF;
                                                        }
                                                        t868 = t866;
                                                    }
                                                    u870 = *(float *)0x8C291F38;
                                                    t873 = 0x1;
                                                    if (u870 > 0.0f) {
                                                    } else {
                                                        t871 = 0x0;
                                                        if (0.0f > u870) {
                                                            t871 = 0xFFFFFFFF;
                                                        }
                                                        t873 = t871;
                                                    }
                                                    if (t868 == t873) {
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
                                                            umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                            t909 = scorePressure();
                                                            hudScoreShow((t909 + 0x3C), 0x1, (t908 & 0x1));
                                                        } else {
                                                            t917 = t382;
                                                            u920 = u890;
                                                            u921 = u870;
                                                        }
                                                        t929 = t917;
                                                        u932 = u920;
                                                        u933 = u921;
                                                    }
                                                    t941 = t929;
                                                    u944 = u932;
                                                    u945 = u933;
                                                }
                                                t953 = t941;
                                                u956 = u944;
                                                u957 = u945;
                                            }
                                            t965 = t953;
                                            u968 = u956;
                                            u969 = u957;
                                        }
                                        t977 = t965;
                                        u980 = u968;
                                        u981 = u969;
                                    }
                                    t989 = t977;
                                    u992 = u980;
                                    u993 = u981;
                                }
                                t1001 = t989;
                                u1004 = u992;
                                u1005 = u993;
                            }
                            t1694 = t1001;
                            u1698 = u1004;
                            u1699 = u1005;
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
                                                        umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                        t1078 = scorePressure();
                                                        hudScoreShow((t1078 + 0x3C), 0x1, (t1077 & 0x1));
                                                    } else {
                                                        t1080 = *(int *)0x8C287AF8;
                                                        *(unsigned int *)(((int)stk + 12)) = ((t1080 * 0xD78) + 0x8C287D84);
                                                        u1081 = *(float *)((((t1080 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                        t1084 = 0x1;
                                                        if (u1081 > 0.0f) {
                                                        } else {
                                                            t1082 = 0x0;
                                                            if (0.0f > u1081) {
                                                                t1082 = 0xFFFFFFFF;
                                                            }
                                                            t1084 = t1082;
                                                        }
                                                        u1086 = *(float *)0x8C291F38;
                                                        t1089 = 0x1;
                                                        if (u1086 > 0.0f) {
                                                        } else {
                                                            t1087 = 0x0;
                                                            if (0.0f > u1086) {
                                                                t1087 = 0xFFFFFFFF;
                                                            }
                                                            t1089 = t1087;
                                                        }
                                                        if (t1084 == t1089) {
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
                                                                umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                                t1125 = scorePressure();
                                                                hudScoreShow((t1125 + 0x3C), 0x1, (t1124 & 0x1));
                                                            } else {
                                                                t1133 = t382;
                                                                u1136 = u1106;
                                                                u1137 = u1086;
                                                            }
                                                            t1145 = t1133;
                                                            u1148 = u1136;
                                                            u1149 = u1137;
                                                        }
                                                        t1157 = t1145;
                                                        u1160 = u1148;
                                                        u1161 = u1149;
                                                    }
                                                    t1169 = t1157;
                                                    u1172 = u1160;
                                                    u1173 = u1161;
                                                }
                                                t1181 = t1169;
                                                u1184 = u1172;
                                                u1185 = u1173;
                                            }
                                            t1193 = t1181;
                                            u1196 = u1184;
                                            u1197 = u1185;
                                        }
                                        t1205 = t1193;
                                        u1208 = u1196;
                                        u1209 = u1197;
                                    }
                                    t1217 = t1205;
                                    u1220 = u1208;
                                    u1221 = u1209;
                                }
                                t1681 = t1217;
                                u1685 = u1220;
                                u1686 = u1221;
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
                                                            umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                            t1293 = scorePressure();
                                                            hudScoreShow((t1293 + 0x3C), 0x1, (t1292 & 0x1));
                                                        } else {
                                                            t1295 = *(int *)0x8C287AF8;
                                                            *(unsigned int *)(((int)stk + 12)) = ((t1295 * 0xD78) + 0x8C287D84);
                                                            u1296 = *(float *)((((t1295 * 0xD78) + 0x8C287D84) + 0xAF0));
                                                            t1299 = 0x1;
                                                            if (u1296 > 0.0f) {
                                                            } else {
                                                                t1297 = 0x0;
                                                                if (0.0f > u1296) {
                                                                    t1297 = 0xFFFFFFFF;
                                                                }
                                                                t1299 = t1297;
                                                            }
                                                            u1301 = *(float *)0x8C291F38;
                                                            t1304 = 0x1;
                                                            if (u1301 > 0.0f) {
                                                            } else {
                                                                t1302 = 0x0;
                                                                if (0.0f > u1301) {
                                                                    t1302 = 0xFFFFFFFF;
                                                                }
                                                                t1304 = t1302;
                                                            }
                                                            if (t1299 == t1304) {
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
                                                                    umpCallOut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
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
                                                                    t1340 = scorePressure();
                                                                    hudScoreShow((t1340 + 0x3C), 0x1, (t1339 & 0x1));
                                                                } else {
                                                                    t1348 = t382;
                                                                    u1351 = u1321;
                                                                    u1352 = u1301;
                                                                }
                                                                t1360 = t1348;
                                                                u1363 = u1351;
                                                                u1364 = u1352;
                                                            }
                                                            t1372 = t1360;
                                                            u1375 = u1363;
                                                            u1376 = u1364;
                                                        }
                                                        t1384 = t1372;
                                                        u1387 = u1375;
                                                        u1388 = u1376;
                                                    }
                                                    t1396 = t1384;
                                                    u1399 = u1387;
                                                    u1400 = u1388;
                                                }
                                                t1408 = t1396;
                                                u1411 = u1399;
                                                u1412 = u1400;
                                            }
                                            t1420 = t1408;
                                            u1423 = u1411;
                                            u1424 = u1412;
                                        }
                                        t1432 = t1420;
                                        u1435 = u1423;
                                        u1436 = u1424;
                                    }
                                    t1668 = t1432;
                                    u1672 = u1435;
                                    u1673 = u1436;
                                } else {
                                    t1438 = serveGetServer();
                                    serveGetPos(t1438, 0x0, 0x0, 0x0, (((int)stk + 8) + 0xC));
                                    u1440 = *(float *)0x8C291F38;
                                    t1443 = 0x1;
                                    if (u1440 > 0.0f) {
                                    } else {
                                        t1441 = 0x0;
                                        if (0.0f > u1440) {
                                            t1441 = 0xFFFFFFFF;
                                        }
                                        t1443 = t1441;
                                    }
                                    t1445 = *(int *)0x8C287AF8;
                                    *(unsigned int *)(((int)stk + 16)) = ((t1445 * 0xD78) + 0x8C287D84);
                                    u1446 = *(float *)((((t1445 * 0xD78) + 0x8C287D84) + 0xAF0));
                                    t1449 = 0x1;
                                    if (u1446 > 0.0f) {
                                    } else {
                                        t1447 = 0x0;
                                        if (0.0f > u1446) {
                                            t1447 = 0xFFFFFFFF;
                                        }
                                        t1449 = t1447;
                                    }
                                    if (t1443 != t1449) {
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
                                                    u1573 = u1440;
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
                                                            u1551 = u1440;
                                                        }
                                                        u1562 = u1550;
                                                        u1563 = u1551;
                                                    } else {
                                                        *(unsigned int *)0x8C287B2C = 0x3C;
                                                        umpCallLet(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                                                        hudLetPanel();
                                                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                                                        *(float *)0x8C287B7C = 0.0399999991f;
                                                    }
                                                    u1572 = u1562;
                                                    u1573 = u1563;
                                                }
                                                u1583 = u1572;
                                                u1584 = u1573;
                                            } else {
                                                *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                                u1583 = u1452;
                                                u1584 = u1440;
                                            }
                                            u1594 = u1583;
                                            u1595 = u1584;
                                        } else {
                                            *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                            u1594 = u1452;
                                            u1595 = u1440;
                                        }
                                        u1605 = u1594;
                                        u1606 = u1595;
                                    } else {
                                        *(unsigned int *)0x8C287B28 = ((*(int *)0x8C287B28) + 0x1);
                                        u1605 = u1446;
                                        u1606 = u1440;
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
                                        u1627 = u1606;
                                    }
                                    if ((*(int *)0x8C287B28) != 2) {
                                        u1659 = u1626;
                                        u1660 = u1627;
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
                                        t1650 = scorePressure();
                                        hudScoreShow((t1650 + 0x3C), 0x1, (t1649 & 0x1));
                                    }
                                    u1672 = u1659;
                                    u1673 = u1660;
                                }
                                t1681 = t1668;
                                u1685 = u1672;
                                u1686 = u1673;
                            }
                            t1694 = t1681;
                            u1698 = u1685;
                            u1699 = u1686;
                        }
                        t1707 = t1694;
                        u1711 = u1698;
                        u1712 = u1699;
                    }
                    t1720 = t1707;
                    u1724 = u1711;
                    u1725 = u1712;
                }
                if (((*(int *)0x8C287D5C) == 3) && (t1728 = *(int *)0x8C291F78, (t1728 & 1) != 0)) {
                    t1729 = *(int *)0x8C287AF8;
                    if ((*(int *)0x8C291F70) == 1) {
                        t1731 = ((int (*)(int, int, int, float, float))(miniOnEvent))(0x0, ((t1729 * 0xD78) + 0x8C287D84), t1720, u1724, u1725);
                    } else {
                        t1732 = ((int (*)(int, int, int, float, float))(miniOnEvent))(0x1, ((t1729 * 0xD78) + 0x8C287D84), t1720, u1724, u1725);
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

float cpuSglMove(int a4)
{
    int t1;
    float u15;
    float u16;
    float u25;
    float u36;
    float u41;
    float u42;
    float u48;
    float u53;
    float u54;
    float u61;
    float u66;
    float u71;
    float u72;
    float u80;
    float u81;
    float u86;
    float u92;
    float u98;
    float u110;
    float u111;
    float u117;
    float u122;
    float u133;
    float u134;
    float u143;
    float u148;
    float u155;
    float u168;
    float u169;
    float u175;
    float u180;
    float u191;
    float u192;
    int t201;
    int t204;
    float u212;
    float u213;
    float u221;
    float u227;
    float u240;
    float u241;
    float u247;
    float u252;
    float u263;
    float u264;
    float u276;
    float u277;
    float u285;
    float u289;
    float u301;
    float u302;
    float u308;
    float u313;
    float u324;
    float u325;
    float u337;
    float u338;
    float u346;
    float u355;
    float u356;
    float u364;
    float u379;
    float u396;
    float u397;
    int t410;
    float u420;
    float u421;
    float u438;
    float u439;
    float u451;
    float u463;
    float u468;
    float u473;
    float u474;
    float u488;
    float u491;
    float u504;
    float u509;
    float u510;
    float u525;
    float u539;
    float u551;
    float u552;
    float u561;
    float u562;
    float u570;
    float u571;
    int stk[11];

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
    float F7;
    float F8;
    float F9;
    float F10;
    float F11;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_8C03D06C:;
    t1 = *(int *)((R4 + 0xA24));
    R0 = (t1);
    R13 = (0x0);
    R14 = (0x8C291F24);
    R5 = ((((*(int *)((R4 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    R6 = (((int)stk + 4));
    R7 = (0x1);
    F10 = (24.0f);
    F4 = (0.100000001f);
    F6 = (8.0f);
    F7 = (32.0f);
    F8 = (96.0f);
    if ((t1 == 0)) goto L_8C03D0DA;
    goto L_8C03D0B6;
    L_8C03D0B6:;
    if ((R0 != 2)) goto L_8C03D0BE;
    goto L_8C03D0BA;
    L_8C03D0BA:;
    goto L_8C03D3D8;
    L_8C03D3D8:;
    *(unsigned short *)((R5 + 0x20)) = R13;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R6) = *(struct mv3 *)((0x94 + R5)); }
    u15 = *(float *)((R6 + 0x0));
    u16 = *(float *)((R4 + 0xAE8));
    F11 = ((u15 - u16));
    F14 = (u16);
    F15 = (u15);
    if ((0.0f > (u15 - u16))) goto L_8C03D414;
    goto L_8C03D3F8;
    L_8C03D3F8:;
    F3 = (F11);
    goto L_8C03D41C;
    L_8C03D41C:;
    if ((!(F5 > F3))) goto L_8C03D47A;
    goto L_8C03D420;
    L_8C03D420:;
    if (((*(signed char *)((R5 + 0xAF))) == 0)) goto L_8C03D47A;
    goto L_8C03D428;
    L_8C03D428:;
    u25 = *(float *)((R5 + 0x30));
    R0 = (0x30);
    F3 = (u25);
    if ((0.0f > u25)) goto L_8C03D436;
    goto L_8C03D432;
    L_8C03D432:;
    F3 = ((*(float *)((R5 + R0))));
    goto L_8C03D438;
    L_8C03D438:;
    if ((!(0.100000001f > F3))) goto L_8C03D47A;
    goto L_8C03D440;
    L_8C03D440:;
    if (((int)(*(short *)((R5 + 0x118))) <= (int)0x14)) goto L_8C03D47A;
    goto L_8C03D44A;
    L_8C03D44A:;
    if ((((*(int *)((R4 + 0xB60))) & 4) != 0)) goto L_8C03D47A;
    goto L_8C03D452;
    L_8C03D452:;
    u36 = *(float *)((R4 + 0xB9C));
    F11 = (u36);
    F3 = (0.0f);
    if ((!(u36 > 0.0f))) goto L_8C03D460;
    goto L_8C03D45C;
    L_8C03D45C:;
    R3 = (0x1);
    goto L_8C03D46A;
    L_8C03D46A:;
    *(float *)((R5 + 0x94)) = (F11 - ((float)R3 * F5));
    goto L_8C03D49A;
    L_8C03D49A:;
    *(unsigned char *)((R5 + 0xAE)) = R13;
    goto L_8C03D49E;
    L_8C03D49E:;
    u41 = *(float *)((R4 + 0xAF0));
    u42 = *(float *)((R14 + 0x20));
    F13 = ((u42 - u41));
    F15 = (u41);
    F3 = (0.0f);
    if ((!((u42 - u41) > 0.0f))) goto L_8C03D4B2;
    goto L_8C03D4AE;
    L_8C03D4AE:;
    R3 = (0x1);
    goto L_8C03D4BC;
    L_8C03D4BC:;
    u48 = *(float *)((R4 + 0xB00));
    F11 = ((-u48));
    F3 = (0.0f);
    if ((!((-u48) > 0.0f))) goto L_8C03D4CC;
    goto L_8C03D4C8;
    L_8C03D4C8:;
    R2 = (0x1);
    goto L_8C03D4EE;
    L_8C03D4EE:;
    u53 = *(float *)((R14 + 0x14));
    u54 = F15;
    u54 = u54 + F5 * (float)R2;
    F0 = (F5);
    F14 = (u53);
    F3 = (0.0f);
    if ((!((u54 - u53) > 0.0f))) goto L_8C03D508;
    goto L_8C03D504;
    L_8C03D504:;
    R1 = (0x1);
    goto L_8C03D534;
    L_8C03D534:;
    if ((R3 != R1)) goto L_8C03D53C;
    goto L_8C03D538;
    L_8C03D538:;
    *(unsigned char *)((R5 + 0xAF)) = R13;
    goto L_8C03D53C;
    L_8C03D53C:;
    u61 = *(float *)((R4 + 0xAF0));
    R0 = (0x6C);
    F11 = (u61);
    if ((0.0f > u61)) goto L_8C03D54C;
    goto L_8C03D548;
    L_8C03D548:;
    F3 = (F11);
    goto L_8C03D550;
    L_8C03D550:;
    u66 = *(float *)((R14 + R0));
    F15 = (u66);
    if ((0.0f > u66)) goto L_8C03D55C;
    goto L_8C03D558;
    L_8C03D558:;
    F2 = (F15);
    goto L_8C03D560;
    L_8C03D560:;
    if ((F3 > F2)) goto L_8C03D5E2;
    goto L_8C03D564;
    L_8C03D564:;
    u71 = *(float *)((R6 + 0x8));
    u72 = *(float *)((R4 + 0xAF0));
    R0 = (0xAF0);
    F11 = ((u71 - u72));
    F14 = (u72);
    F15 = (u71);
    if ((0.0f > (u71 - u72))) goto L_8C03D57A;
    goto L_8C03D576;
    L_8C03D576:;
    F3 = (F11);
    goto L_8C03D582;
    L_8C03D582:;
    if ((!(F3 > F9))) goto L_8C03D5E6;
    goto L_8C03D586;
    L_8C03D586:;
    u80 = *(float *)((R4 + R0));
    u81 = *(float *)((R6 + 0x8));
    F11 = ((u81 - u80));
    F3 = (0.0f);
    if ((!((u81 - u80) > 0.0f))) goto L_8C03D598;
    goto L_8C03D594;
    L_8C03D594:;
    R3 = (0x1);
    goto L_8C03D5A2;
    L_8C03D5A2:;
    u86 = *(float *)((R4 + 0xB00));
    F15 = (u86);
    F3 = (0.0f);
    if ((!(u86 > 0.0f))) goto L_8C03D5B0;
    goto L_8C03D5AC;
    L_8C03D5AC:;
    R1 = (0x1);
    goto L_8C03D5C0;
    L_8C03D5C0:;
    if ((R3 != (-R1))) goto L_8C03D5E2;
    goto L_8C03D5C6;
    L_8C03D5C6:;
    u92 = *(float *)((R4 + 0xBA0));
    F11 = (u92);
    if ((u92 > 22.0f)) goto L_8C03D5E2;
    goto L_8C03D5D2;
    L_8C03D5D2:;
    if (((*(signed char *)((R5 + 0xAE))) == 0)) goto L_8C03D5E6;
    goto L_8C03D5DA;
    L_8C03D5DA:;
    if ((!(F11 > 27.5f))) goto L_8C03D5E6;
    goto L_8C03D5E2;
    L_8C03D5E2:;
    *(unsigned char *)((R5 + 0xAF)) = R13;
    goto L_8C03D5E6;
    L_8C03D5E6:;
    u98 = *(float *)((R5 + 0x30));
    F11 = (u98);
    if ((0.0f > u98)) goto L_8C03D5F4;
    goto L_8C03D5F0;
    L_8C03D5F0:;
    F3 = (F11);
    goto L_8C03D5F8;
    L_8C03D5F8:;
    if ((!(F4 > F3))) goto L_8C03D62E;
    goto L_8C03D5FC;
    L_8C03D5FC:;
    if ((0.0f > ((*(float *)(((int)stk + 12))) - (*(float *)((R4 + 0xAF0)))))) goto L_8C03D618;
    goto L_8C03D60C;
    L_8C03D60C:;
    F3 = (((*(float *)(((int)stk + 12))) - (*(float *)((R4 + 0xAF0)))));
    goto L_8C03D626;
    L_8C03D626:;
    if ((5.0f > F3)) goto L_8C03D66C;
    goto L_8C03D62E;
    L_8C03D62E:;
    u110 = *(float *)((R6 + 0x8));
    u111 = *(float *)((R4 + 0xAF0));
    F13 = (u111);
    F14 = (u110);
    F15 = ((u110 - u111));
    if ((0.0f > (u110 - u111))) goto L_8C03D644;
    goto L_8C03D640;
    L_8C03D640:;
    F3 = (F15);
    goto L_8C03D64C;
    L_8C03D64C:;
    u117 = *(float *)((R5 + 0x30));
    F1 = (F3);
    F11 = (u117);
    if ((0.0f > u117)) goto L_8C03D65C;
    goto L_8C03D658;
    L_8C03D658:;
    F2 = (F11);
    goto L_8C03D660;
    L_8C03D660:;
    u122 = 0.0f;
    u122 = u122 + F5 * _builtin_sqrtf(F2);
    F0 = (F5);
    if ((!(u122 > F1))) goto L_8C03D670;
    goto L_8C03D66C;
    L_8C03D66C:;
    *(unsigned char *)((R5 + 0xAF)) = R7;
    goto L_8C03D670;
    L_8C03D670:;
    if (((*(signed char *)((R5 + 0xAF))) != 0)) goto L_8C03D6FE;
    goto L_8C03D678;
    L_8C03D678:;
    F3 = (0.0f);
    if ((!(((*(float *)(((int)stk + 12))) - (*(float *)((R4 + 0xAF0)))) > 0.0f))) goto L_8C03D68C;
    goto L_8C03D688;
    L_8C03D688:;
    R3 = (0x1);
    goto L_8C03D6B6;
    L_8C03D6B6:;
    if ((R3 == 0)) goto L_8C03D6FE;
    goto L_8C03D6BA;
    L_8C03D6BA:;
    u133 = *(float *)(((0xAF0 + R4) + 0x0));
    u134 = *(float *)(((0x8 + R6) + 0x0));
    R0 = (0x20);
    F11 = ((u134 - u133));
    F3 = (0.0f);
    if ((!((u134 - u133) > 0.0f))) goto L_8C03D6D4;
    goto L_8C03D6D0;
    L_8C03D6D0:;
    R2 = (0x1);
    goto L_8C03D6DE;
    L_8C03D6DE:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R2)) * F6)) + F10));
    goto L_8C03D6FE;
    L_8C03D6FE:;
    u143 = *(float *)((R4 + 0xAF0));
    R0 = (0x14);
    F11 = (u143);
    if ((0.0f > u143)) goto L_8C03D70E;
    goto L_8C03D70A;
    L_8C03D70A:;
    F2 = (F11);
    goto L_8C03D712;
    L_8C03D712:;
    u148 = *(float *)((R14 + R0));
    F15 = (u148);
    if ((0.0f > u148)) goto L_8C03D71E;
    goto L_8C03D71A;
    L_8C03D71A:;
    F3 = (F15);
    goto L_8C03D722;
    L_8C03D722:;
    if (((F3 + F5) > F2)) goto L_8C03D72C;
    goto L_8C03D728;
    L_8C03D728:;
    goto L_8C03D832;
    L_8C03D832:;
    if ((((*(int *)((R4 + 0xB60))) & 4) != 0)) goto L_8C03D83E;
    goto L_8C03D83A;
    L_8C03D83A:;
    goto L_8C03D960;
    L_8C03D960:;
    u155 = *(float *)((R5 + 0x28));
    F11 = (u155);
    if ((0.0f > u155)) goto L_8C03D97C;
    goto L_8C03D96A;
    L_8C03D96A:;
    F3 = (F11);
    goto L_8C03D980;
    L_8C03D980:;
    if ((!(F4 > F3))) goto L_8C03D9B4;
    goto L_8C03D984;
    L_8C03D984:;
    R0 = (0xB9C);
    if ((0.0f > ((*(float *)((R4 + 0xB9C))) - (*(float *)((R4 + 0xAE8)))))) goto L_8C03D9A0;
    goto L_8C03D994;
    L_8C03D994:;
    F3 = (((*(float *)((R4 + 0xB9C))) - (*(float *)((R4 + 0xAE8)))));
    goto L_8C03D9AC;
    L_8C03D9AC:;
    if ((5.0f > F3)) goto L_8C03D9F2;
    goto L_8C03D9B4;
    L_8C03D9B4:;
    u168 = *(float *)((R4 + 0xB9C));
    u169 = *(float *)((R4 + 0xAE8));
    F13 = ((u168 - u169));
    F14 = (u169);
    F15 = (u168);
    if ((0.0f > (u168 - u169))) goto L_8C03D9CA;
    goto L_8C03D9C6;
    L_8C03D9C6:;
    F3 = (F13);
    goto L_8C03D9D2;
    L_8C03D9D2:;
    u175 = *(float *)((R5 + 0x28));
    F1 = (F3);
    F11 = (u175);
    if ((0.0f > u175)) goto L_8C03D9E2;
    goto L_8C03D9DE;
    L_8C03D9DE:;
    F2 = (F11);
    goto L_8C03D9E6;
    L_8C03D9E6:;
    u180 = 0.0f;
    u180 = u180 + F6 * _builtin_sqrtf(F2);
    F0 = (F6);
    if ((!(u180 > F1))) goto L_8C03D9F6;
    goto L_8C03D9F2;
    L_8C03D9F2:;
    *(unsigned char *)((R5 + 0xAE)) = R7;
    goto L_8C03D9F6;
    L_8C03D9F6:;
    if (((*(signed char *)((R5 + 0xAE))) != 0)) goto L_8C03DA7A;
    goto L_8C03D9FE;
    L_8C03D9FE:;
    F3 = (0.0f);
    if ((!(((*(float *)((R4 + 0xB9C))) - (*(float *)((R4 + 0xAE8)))) > 0.0f))) goto L_8C03DA12;
    goto L_8C03DA0E;
    L_8C03DA0E:;
    R3 = (0x1);
    goto L_8C03DA26;
    L_8C03DA26:;
    if ((R3 == 0)) goto L_8C03DA7A;
    goto L_8C03DA2A;
    L_8C03DA2A:;
    u191 = *(float *)(((0xAE8 + R4) + 0x0));
    u192 = *(float *)(((0xB9C + R4) + 0x0));
    R0 = (0x20);
    F11 = ((u192 - u191));
    F3 = (0.0f);
    if ((!((u192 - u191) > 0.0f))) goto L_8C03DA44;
    goto L_8C03DA40;
    L_8C03DA40:;
    R2 = (0x1);
    goto L_8C03DA5A;
    L_8C03DA5A:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R2)) * F7)) + F8));
    goto L_8C03DA7A;
    L_8C03DA7A:;
    t201 = *(int *)((R14 + 0x54));
    R0 = (t201);
    if (((t201 & 4) == 0)) goto L_8C03DAA2;
    goto L_8C03DA82;
    L_8C03DA82:;
    t204 = *(signed char *)((R5 + 0x1C));
    R0 = ((unsigned char)t204);
    if (((unsigned char)t204 != 1)) goto L_8C03DAA2;
    goto L_8C03DA8C;
    L_8C03DA8C:;
    *(unsigned short *)((R5 + 0x20)) = ((*(short *)((R5 + 0x20))) & 0xFFFFFFDF);
    R0 = (0x20);
    goto L_8C03DAA2;
    L_8C03DAA2:;
    return F0;
    L_8C03DA44:;
    if ((!(F3 > F11))) goto L_8C03DA58;
    goto L_8C03DA48;
    L_8C03DA48:;
    R2 = (0xFFFFFFFF);
    goto L_8C03DA5A;
    L_8C03DA58:;
    R2 = (0x0);
    goto L_8C03DA5A;
    L_8C03DA12:;
    u212 = *(float *)((R4 + 0xAE8));
    u213 = *(float *)((R4 + 0xB9C));
    F1 = ((u213 - u212));
    if ((!(F3 > (u213 - u212)))) goto L_8C03DA24;
    goto L_8C03DA20;
    L_8C03DA20:;
    R3 = (0xFFFFFFFF);
    goto L_8C03DA26;
    L_8C03DA24:;
    R3 = (0x0);
    goto L_8C03DA26;
    L_8C03D9E2:;
    F2 = ((-F11));
    goto L_8C03D9E6;
    L_8C03D9CA:;
    F3 = (((-F15) + F14));
    goto L_8C03D9D2;
    L_8C03D9A0:;
    u221 = *(float *)((R4 + 0xAE8));
    F1 = (u221);
    F3 = (((-(*(float *)((R4 + R0)))) + u221));
    goto L_8C03D9AC;
    L_8C03D97C:;
    F3 = ((-F11));
    goto L_8C03D980;
    L_8C03D83E:;
    if (((unsigned char)(*(signed char *)((R5 + 0x1C))) == 4)) goto L_8C03D84C;
    goto L_8C03D848;
    L_8C03D848:;
    goto L_8C03D960;
    L_8C03D84C:;
    u227 = *(float *)((R5 + 0x28));
    F11 = (u227);
    if ((0.0f > u227)) goto L_8C03D85A;
    goto L_8C03D856;
    L_8C03D856:;
    F3 = (F11);
    goto L_8C03D85E;
    L_8C03D85E:;
    if ((!(F4 > F3))) goto L_8C03D89C;
    goto L_8C03D862;
    L_8C03D862:;
    R0 = (0xBA8);
    if ((0.0f > ((*(float *)((R4 + 0xBA8))) - (*(float *)((R4 + 0xAE8)))))) goto L_8C03D888;
    goto L_8C03D872;
    L_8C03D872:;
    F3 = (((*(float *)((R4 + 0xBA8))) - (*(float *)((R4 + 0xAE8)))));
    goto L_8C03D894;
    L_8C03D894:;
    if ((5.0f > F3)) goto L_8C03D8DA;
    goto L_8C03D89C;
    L_8C03D89C:;
    u240 = *(float *)((R4 + 0xBA8));
    u241 = *(float *)((R4 + 0xAE8));
    F13 = (u241);
    F14 = (u240);
    F15 = ((u240 - u241));
    if ((0.0f > (u240 - u241))) goto L_8C03D8B2;
    goto L_8C03D8AE;
    L_8C03D8AE:;
    F3 = (F15);
    goto L_8C03D8BA;
    L_8C03D8BA:;
    u247 = *(float *)((R5 + 0x28));
    F1 = (F3);
    F11 = (u247);
    if ((0.0f > u247)) goto L_8C03D8CA;
    goto L_8C03D8C6;
    L_8C03D8C6:;
    F2 = (F11);
    goto L_8C03D8CE;
    L_8C03D8CE:;
    u252 = 0.0f;
    u252 = u252 + F6 * _builtin_sqrtf(F2);
    F0 = (F6);
    if ((!(u252 > F1))) goto L_8C03D8DE;
    goto L_8C03D8DA;
    L_8C03D8DA:;
    *(unsigned char *)((R5 + 0xAE)) = R7;
    goto L_8C03D8DE;
    L_8C03D8DE:;
    if (((*(signed char *)((R5 + 0xAE))) == 0)) goto L_8C03D8EA;
    goto L_8C03D8E6;
    L_8C03D8E6:;
    goto L_8C03DA7A;
    L_8C03D8EA:;
    F3 = (0.0f);
    if ((!(((*(float *)((R4 + 0xBA8))) - (*(float *)((R4 + 0xAE8)))) > 0.0f))) goto L_8C03D8FE;
    goto L_8C03D8FA;
    L_8C03D8FA:;
    R3 = (0x1);
    goto L_8C03D912;
    L_8C03D912:;
    if ((R3 != 0)) goto L_8C03D91A;
    goto L_8C03D916;
    L_8C03D916:;
    goto L_8C03DA7A;
    L_8C03D91A:;
    u263 = *(float *)(((0xAE8 + R4) + 0x0));
    u264 = *(float *)(((0xBA8 + R4) + 0x0));
    R0 = (0x20);
    F11 = ((u264 - u263));
    F3 = (0.0f);
    if ((!((u264 - u263) > 0.0f))) goto L_8C03D934;
    goto L_8C03D930;
    L_8C03D930:;
    R2 = (0x1);
    goto L_8C03D93E;
    L_8C03D93E:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R2)) * F7)) + F8));
    goto L_8C03DA7A;
    L_8C03D934:;
    if ((!(F3 > F11))) goto L_8C03D93C;
    goto L_8C03D938;
    L_8C03D938:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D93E;
    L_8C03D93C:;
    R2 = (0x0);
    goto L_8C03D93E;
    L_8C03D8FE:;
    u276 = *(float *)((R4 + 0xAE8));
    u277 = *(float *)((R4 + 0xBA8));
    F1 = ((u277 - u276));
    if ((!(F3 > (u277 - u276)))) goto L_8C03D910;
    goto L_8C03D90C;
    L_8C03D90C:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D912;
    L_8C03D910:;
    R3 = (0x0);
    goto L_8C03D912;
    L_8C03D8CA:;
    F2 = ((-F11));
    goto L_8C03D8CE;
    L_8C03D8B2:;
    F3 = (((-F14) + F13));
    goto L_8C03D8BA;
    L_8C03D888:;
    u285 = *(float *)((R4 + 0xAE8));
    F1 = (u285);
    F3 = (((-(*(float *)((R4 + R0)))) + u285));
    goto L_8C03D894;
    L_8C03D85A:;
    F3 = ((-F11));
    goto L_8C03D85E;
    L_8C03D72C:;
    u289 = *(float *)((R5 + 0x28));
    F11 = (u289);
    if ((0.0f > u289)) goto L_8C03D73A;
    goto L_8C03D736;
    L_8C03D736:;
    F3 = (F11);
    goto L_8C03D73E;
    L_8C03D73E:;
    if ((!(F4 > F3))) goto L_8C03D76E;
    goto L_8C03D742;
    L_8C03D742:;
    if ((0.0f > ((*(float *)(((int)stk + 4))) - (*(float *)((R4 + 0xAE8)))))) goto L_8C03D75A;
    goto L_8C03D750;
    L_8C03D750:;
    F3 = (((*(float *)(((int)stk + 4))) - (*(float *)((R4 + 0xAE8)))));
    goto L_8C03D766;
    L_8C03D766:;
    if ((5.0f > F3)) goto L_8C03D7B4;
    goto L_8C03D76E;
    L_8C03D76E:;
    u301 = *(float *)((R6 + 0x0));
    u302 = *(float *)((R4 + 0xAE8));
    F13 = (u302);
    F14 = (u301);
    F15 = ((u301 - u302));
    if ((0.0f > (u301 - u302))) goto L_8C03D782;
    goto L_8C03D77E;
    L_8C03D77E:;
    F3 = (F15);
    goto L_8C03D78A;
    L_8C03D78A:;
    u308 = *(float *)((R5 + 0x28));
    F1 = (F3);
    F11 = (u308);
    if ((0.0f > u308)) goto L_8C03D7A4;
    goto L_8C03D796;
    L_8C03D796:;
    F2 = (F11);
    goto L_8C03D7A8;
    L_8C03D7A8:;
    u313 = 0.0f;
    u313 = u313 + F6 * _builtin_sqrtf(F2);
    F0 = (F6);
    if ((!(u313 > F1))) goto L_8C03D7B8;
    goto L_8C03D7B4;
    L_8C03D7B4:;
    *(unsigned char *)((R5 + 0xAE)) = R7;
    goto L_8C03D7B8;
    L_8C03D7B8:;
    if (((*(signed char *)((R5 + 0xAE))) == 0)) goto L_8C03D7C4;
    goto L_8C03D7C0;
    L_8C03D7C0:;
    goto L_8C03DA7A;
    L_8C03D7C4:;
    F3 = (0.0f);
    if ((!(((*(float *)(((int)stk + 4))) - (*(float *)((R4 + 0xAE8)))) > 0.0f))) goto L_8C03D7D6;
    goto L_8C03D7D2;
    L_8C03D7D2:;
    R3 = (0x1);
    goto L_8C03D7E8;
    L_8C03D7E8:;
    if ((R3 != 0)) goto L_8C03D7F0;
    goto L_8C03D7EC;
    L_8C03D7EC:;
    goto L_8C03DA7A;
    L_8C03D7F0:;
    u324 = *(float *)((R6 + 0x0));
    u325 = *(float *)(((0xAE8 + R4) + 0x0));
    R0 = (0x20);
    F11 = ((u324 - u325));
    F3 = (0.0f);
    if ((!((u324 - u325) > 0.0f))) goto L_8C03D806;
    goto L_8C03D802;
    L_8C03D802:;
    R2 = (0x1);
    goto L_8C03D810;
    L_8C03D810:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R2)) * F7)) + F8));
    goto L_8C03DA7A;
    L_8C03D806:;
    if ((!(F3 > F11))) goto L_8C03D80E;
    goto L_8C03D80A;
    L_8C03D80A:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D810;
    L_8C03D80E:;
    R2 = (0x0);
    goto L_8C03D810;
    L_8C03D7D6:;
    u337 = *(float *)(((int)stk + 4));
    u338 = *(float *)((R4 + 0xAE8));
    F1 = ((u337 - u338));
    if ((!(F3 > (u337 - u338)))) goto L_8C03D7E6;
    goto L_8C03D7E2;
    L_8C03D7E2:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D7E8;
    L_8C03D7E6:;
    R3 = (0x0);
    goto L_8C03D7E8;
    L_8C03D7A4:;
    F2 = ((-F11));
    goto L_8C03D7A8;
    L_8C03D782:;
    F3 = (((-F14) + F13));
    goto L_8C03D78A;
    L_8C03D75A:;
    u346 = *(float *)((R4 + 0xAE8));
    F1 = (u346);
    F3 = (((-(*(float *)(((int)stk + 4)))) + u346));
    goto L_8C03D766;
    L_8C03D73A:;
    F3 = ((-F11));
    goto L_8C03D73E;
    L_8C03D71E:;
    F3 = ((-F15));
    goto L_8C03D722;
    L_8C03D70E:;
    F2 = ((-F11));
    goto L_8C03D712;
    L_8C03D6D4:;
    if ((!(F3 > F11))) goto L_8C03D6DC;
    goto L_8C03D6D8;
    L_8C03D6D8:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D6DE;
    L_8C03D6DC:;
    R2 = (0x0);
    goto L_8C03D6DE;
    L_8C03D68C:;
    u355 = *(float *)((R4 + 0xAF0));
    u356 = *(float *)(((int)stk + 12));
    F1 = ((u356 - u355));
    if ((!(F3 > (u356 - u355)))) goto L_8C03D6B4;
    goto L_8C03D69A;
    L_8C03D69A:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D6B6;
    L_8C03D6B4:;
    R3 = (0x0);
    goto L_8C03D6B6;
    L_8C03D65C:;
    F2 = ((-F11));
    goto L_8C03D660;
    L_8C03D644:;
    F3 = (((-F14) + F13));
    goto L_8C03D64C;
    L_8C03D618:;
    u364 = *(float *)((R4 + 0xAF0));
    F1 = (u364);
    F3 = (((-(*(float *)(((int)stk + 12)))) + u364));
    goto L_8C03D626;
    L_8C03D5F4:;
    F3 = ((-F11));
    goto L_8C03D5F8;
    L_8C03D5B0:;
    if ((!(F3 > F15))) goto L_8C03D5BE;
    goto L_8C03D5B4;
    L_8C03D5B4:;
    R1 = (0xFFFFFFFF);
    goto L_8C03D5C0;
    L_8C03D5BE:;
    R1 = (0x0);
    goto L_8C03D5C0;
    L_8C03D598:;
    if ((!(F3 > F11))) goto L_8C03D5A0;
    goto L_8C03D59C;
    L_8C03D59C:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D5A2;
    L_8C03D5A0:;
    R3 = (0x0);
    goto L_8C03D5A2;
    L_8C03D57A:;
    F3 = (((-F15) + F14));
    goto L_8C03D582;
    L_8C03D55C:;
    F2 = ((-F15));
    goto L_8C03D560;
    L_8C03D54C:;
    F3 = ((-F11));
    goto L_8C03D550;
    L_8C03D508:;
    if ((!(F11 > F3))) goto L_8C03D510;
    goto L_8C03D50C;
    L_8C03D50C:;
    R0 = (0x1);
    goto L_8C03D51C;
    L_8C03D51C:;
    u379 = F15;
    u379 = u379 + F5 * (float)R0;
    F0 = (F5);
    if ((!(0.0f > (u379 - F14)))) goto L_8C03D532;
    goto L_8C03D52E;
    L_8C03D52E:;
    R1 = (0xFFFFFFFF);
    goto L_8C03D534;
    L_8C03D532:;
    R1 = (0x0);
    goto L_8C03D534;
    L_8C03D510:;
    if ((!(0.0f > F11))) goto L_8C03D51A;
    goto L_8C03D516;
    L_8C03D516:;
    R0 = (0xFFFFFFFF);
    goto L_8C03D51C;
    L_8C03D51A:;
    R0 = (0x0);
    goto L_8C03D51C;
    L_8C03D4CC:;
    if ((!(F3 > F11))) goto L_8C03D4EC;
    goto L_8C03D4D0;
    L_8C03D4D0:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D4EE;
    L_8C03D4EC:;
    R2 = (0x0);
    goto L_8C03D4EE;
    L_8C03D4B2:;
    if ((!(F3 > F13))) goto L_8C03D4BA;
    goto L_8C03D4B6;
    L_8C03D4B6:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D4BC;
    L_8C03D4BA:;
    R3 = (0x0);
    goto L_8C03D4BC;
    L_8C03D460:;
    if ((!(F3 > F11))) goto L_8C03D468;
    goto L_8C03D464;
    L_8C03D464:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D46A;
    L_8C03D468:;
    R3 = (0x0);
    goto L_8C03D46A;
    L_8C03D47A:;
    u396 = *(float *)((R6 + 0x0));
    u397 = *(float *)((R4 + 0xAE8));
    F11 = (u397);
    F14 = ((u396 - u397));
    F15 = (u396);
    if ((0.0f > (u396 - u397))) goto L_8C03D48E;
    goto L_8C03D48A;
    L_8C03D48A:;
    F3 = (F14);
    goto L_8C03D496;
    L_8C03D496:;
    if ((!(F3 > F9))) goto L_8C03D49E;
    goto L_8C03D49A;
    L_8C03D48E:;
    F3 = (((-F15) + F11));
    goto L_8C03D496;
    L_8C03D436:;
    F3 = ((-F3));
    goto L_8C03D438;
    L_8C03D414:;
    F3 = (((-F15) + F14));
    goto L_8C03D41C;
    L_8C03D0BE:;
    if ((R0 != 1)) goto L_8C03D0C6;
    goto L_8C03D0C2;
    L_8C03D0C2:;
    goto L_8C03DAA2;
    L_8C03D0C6:;
    if ((R0 != 3)) goto L_8C03D0CE;
    goto L_8C03D0CA;
    L_8C03D0CA:;
    goto L_8C03DAA2;
    L_8C03D0CE:;
    if ((R0 != 4)) goto L_8C03D0D6;
    goto L_8C03D0D2;
    L_8C03D0D2:;
    goto L_8C03DA98;
    L_8C03DA98:;
    t410 = *(short *)((R5 + 0x22));
    *(unsigned short *)(((0x20 + R5) + 0x0)) = t410;
    R0 = (t410);
    goto L_8C03DAA2;
    L_8C03D0D6:;
    goto L_8C03DAA2;
    L_8C03D0DA:;
    *(unsigned short *)((R5 + 0x20)) = R13;
    if (((unsigned char)(*(signed char *)((R5 + 0xB0))) == 1)) goto L_8C03D1A6;
    goto L_8C03D0E8;
    L_8C03D0E8:;
    F3 = (0.0f);
    if ((!(((*(float *)((R4 + 0xA34))) - (*(float *)((R4 + 0xAE8)))) > 0.0f))) goto L_8C03D0FC;
    goto L_8C03D0F8;
    L_8C03D0F8:;
    R2 = (0x1);
    goto L_8C03D15E;
    L_8C03D15E:;
    if ((R2 == 0)) goto L_8C03D1A6;
    goto L_8C03D162;
    L_8C03D162:;
    u420 = *(float *)(((0xAE8 + R4) + 0x0));
    u421 = *(float *)(((0xA34 + R4) + 0x0));
    R0 = (0x20);
    F11 = ((u421 - u420));
    F3 = (0.0f);
    if ((!((u421 - u420) > 0.0f))) goto L_8C03D17C;
    goto L_8C03D178;
    L_8C03D178:;
    R3 = (0x1);
    goto L_8C03D186;
    L_8C03D186:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R3)) * F7)) + F8));
    goto L_8C03D1A6;
    L_8C03D1A6:;
    if (((unsigned char)(*(signed char *)((R5 + 0xB1))) == 1)) goto L_8C03D220;
    goto L_8C03D1B0;
    L_8C03D1B0:;
    F3 = (0.0f);
    if ((!(((*(float *)((R4 + 0xA3C))) - (*(float *)((R4 + 0xAF0)))) > 0.0f))) goto L_8C03D1C4;
    goto L_8C03D1C0;
    L_8C03D1C0:;
    R2 = (0x1);
    goto L_8C03D1D8;
    L_8C03D1D8:;
    if ((R2 == 0)) goto L_8C03D220;
    goto L_8C03D1DC;
    L_8C03D1DC:;
    u438 = *(float *)(((0xAF0 + R4) + 0x0));
    u439 = *(float *)(((0xA3C + R4) + 0x0));
    R0 = (0x20);
    F11 = ((u439 - u438));
    F3 = (0.0f);
    if ((!((u439 - u438) > 0.0f))) goto L_8C03D1F6;
    goto L_8C03D1F2;
    L_8C03D1F2:;
    R3 = (0x1);
    goto L_8C03D200;
    L_8C03D200:;
    *(unsigned short *)((R5 + R0)) = (int)((float)(*(short *)((R5 + R0))) + ((-((((*(float *)(((0xB00 + R4) + 0x0))) * (float)R3)) * F6)) + F10));
    goto L_8C03D220;
    L_8C03D220:;
    R0 = (0xB60);
    if ((((*(int *)((R4 + 0xB60))) & 0x100) == 0)) goto L_8C03D22E;
    goto L_8C03D22A;
    L_8C03D22A:;
    goto L_8C03DAA2;
    L_8C03D22E:;
    u451 = *(float *)((R5 + 0x28));
    F11 = (u451);
    if ((0.0f > u451)) goto L_8C03D24C;
    goto L_8C03D238;
    L_8C03D238:;
    F3 = (F11);
    goto L_8C03D250;
    L_8C03D250:;
    if ((!(F3 > F4))) goto L_8C03D29A;
    goto L_8C03D254;
    L_8C03D254:;
    if ((0.0f > F11)) goto L_8C03D25E;
    goto L_8C03D25A;
    L_8C03D25A:;
    F3 = (F11);
    goto L_8C03D262;
    L_8C03D262:;
    if ((!(0.200000003f > F3))) goto L_8C03D29A;
    goto L_8C03D26A;
    L_8C03D26A:;
    R0 = (0xA34);
    if ((0.0f > ((*(float *)((R4 + 0xA34))) - (*(float *)((R4 + 0xAE8)))))) goto L_8C03D286;
    goto L_8C03D27A;
    L_8C03D27A:;
    u463 = *(float *)((R4 + 0xAE8));
    F1 = (u463);
    F3 = (((*(float *)((R4 + 0xA34))) - u463));
    goto L_8C03D292;
    L_8C03D292:;
    if ((10.0f > F3)) goto L_8C03D304;
    goto L_8C03D29A;
    L_8C03D29A:;
    u468 = *(float *)((R5 + 0x28));
    F11 = (u468);
    F3 = (0.0f);
    if ((!(u468 > 0.0f))) goto L_8C03D2A8;
    goto L_8C03D2A4;
    L_8C03D2A4:;
    R2 = (0x1);
    goto L_8C03D2B2;
    L_8C03D2B2:;
    u473 = *(float *)((R4 + 0xA34));
    u474 = *(float *)((R4 + 0xAE8));
    F13 = (u474);
    F14 = (u473);
    F15 = ((u473 - u474));
    F3 = (0.0f);
    if ((!((u473 - u474) > 0.0f))) goto L_8C03D2C8;
    goto L_8C03D2C4;
    L_8C03D2C4:;
    R3 = (0x1);
    goto L_8C03D2D2;
    L_8C03D2D2:;
    if ((R2 != R3)) goto L_8C03D308;
    goto L_8C03D2D6;
    L_8C03D2D6:;
    if ((0.0f > F15)) goto L_8C03D2E0;
    goto L_8C03D2DC;
    L_8C03D2DC:;
    F3 = (F15);
    goto L_8C03D2E6;
    L_8C03D2E6:;
    F1 = (0.0f);
    F12 = (F3);
    if ((0.0f > F11)) goto L_8C03D2F2;
    goto L_8C03D2EE;
    L_8C03D2EE:;
    F2 = (F11);
    goto L_8C03D2F6;
    L_8C03D2F6:;
    u488 = 0.0f;
    u488 = u488 + 25.0f * _builtin_sqrtf(F2);
    F0 = (25.0f);
    if ((!(u488 > F12))) goto L_8C03D308;
    goto L_8C03D304;
    L_8C03D304:;
    *(unsigned char *)((R5 + 0xB0)) = R7;
    goto L_8C03D308;
    L_8C03D308:;
    u491 = *(float *)((R5 + 0x30));
    F11 = (u491);
    if ((0.0f > u491)) goto L_8C03D328;
    goto L_8C03D312;
    L_8C03D312:;
    F3 = (F11);
    goto L_8C03D32C;
    L_8C03D32C:;
    if ((!(F4 > F3))) goto L_8C03D360;
    goto L_8C03D330;
    L_8C03D330:;
    R0 = (0xA3C);
    if ((0.0f > ((*(float *)((R4 + 0xA3C))) - (*(float *)((R4 + 0xAF0)))))) goto L_8C03D34C;
    goto L_8C03D340;
    L_8C03D340:;
    F3 = (((*(float *)((R4 + 0xA3C))) - (*(float *)((R4 + 0xAF0)))));
    goto L_8C03D358;
    L_8C03D358:;
    if ((10.0f > F3)) goto L_8C03D3D2;
    goto L_8C03D360;
    L_8C03D360:;
    u504 = *(float *)((R5 + 0x30));
    F11 = (u504);
    F3 = (0.0f);
    if ((!(u504 > 0.0f))) goto L_8C03D36E;
    goto L_8C03D36A;
    L_8C03D36A:;
    R2 = (0x1);
    goto L_8C03D378;
    L_8C03D378:;
    u509 = *(float *)((R4 + 0xA3C));
    u510 = *(float *)((R4 + 0xAF0));
    R0 = (0xAF0);
    F13 = (u510);
    F14 = (u509);
    F15 = ((u509 - u510));
    F3 = (0.0f);
    if ((!((u509 - u510) > 0.0f))) goto L_8C03D38E;
    goto L_8C03D38A;
    L_8C03D38A:;
    R3 = (0x1);
    goto L_8C03D398;
    L_8C03D398:;
    if ((R2 == R3)) goto L_8C03D3A0;
    goto L_8C03D39C;
    L_8C03D39C:;
    goto L_8C03DAA2;
    L_8C03D3A0:;
    if ((0.0f > F15)) goto L_8C03D3AA;
    goto L_8C03D3A6;
    L_8C03D3A6:;
    F3 = (F15);
    goto L_8C03D3B0;
    L_8C03D3B0:;
    F1 = (0.0f);
    F12 = (F3);
    if ((0.0f > F11)) goto L_8C03D3BC;
    goto L_8C03D3B8;
    L_8C03D3B8:;
    F2 = (F11);
    goto L_8C03D3C0;
    L_8C03D3C0:;
    u525 = 0.0f;
    u525 = u525 + 20.0f * _builtin_sqrtf(F2);
    R0 = (0x8C03D40C);
    F0 = (20.0f);
    if ((u525 > F12)) goto L_8C03D3D2;
    goto L_8C03D3CE;
    L_8C03D3CE:;
    goto L_8C03DAA2;
    L_8C03D3D2:;
    *(unsigned char *)((R5 + 0xB1)) = R7;
    R0 = (0xB1);
    goto L_8C03DAA2;
    L_8C03D3BC:;
    F2 = ((-F11));
    goto L_8C03D3C0;
    L_8C03D3AA:;
    F3 = (((-F14) + F13));
    goto L_8C03D3B0;
    L_8C03D38E:;
    if ((!(F3 > F15))) goto L_8C03D396;
    goto L_8C03D392;
    L_8C03D392:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D398;
    L_8C03D396:;
    R3 = (0x0);
    goto L_8C03D398;
    L_8C03D36E:;
    if ((!(F3 > F11))) goto L_8C03D376;
    goto L_8C03D372;
    L_8C03D372:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D378;
    L_8C03D376:;
    R2 = (0x0);
    goto L_8C03D378;
    L_8C03D34C:;
    u539 = *(float *)((R4 + 0xAF0));
    F1 = (u539);
    F3 = (((-(*(float *)((R4 + R0)))) + u539));
    goto L_8C03D358;
    L_8C03D328:;
    F3 = ((-F11));
    goto L_8C03D32C;
    L_8C03D2F2:;
    F2 = ((-F11));
    goto L_8C03D2F6;
    L_8C03D2E0:;
    F3 = (((-F14) + F13));
    goto L_8C03D2E6;
    L_8C03D2C8:;
    if ((!(F3 > F15))) goto L_8C03D2D0;
    goto L_8C03D2CC;
    L_8C03D2CC:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D2D2;
    L_8C03D2D0:;
    R3 = (0x0);
    goto L_8C03D2D2;
    L_8C03D2A8:;
    if ((!(F3 > F11))) goto L_8C03D2B0;
    goto L_8C03D2AC;
    L_8C03D2AC:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D2B2;
    L_8C03D2B0:;
    R2 = (0x0);
    goto L_8C03D2B2;
    L_8C03D286:;
    u551 = *(float *)((R4 + R0));
    u552 = *(float *)((R4 + 0xAE8));
    F0 = (u552);
    F1 = ((-u551));
    F3 = (((-u551) + u552));
    goto L_8C03D292;
    L_8C03D25E:;
    F3 = ((-F11));
    goto L_8C03D262;
    L_8C03D24C:;
    F3 = ((-F11));
    goto L_8C03D250;
    L_8C03D1F6:;
    if ((!(F3 > F11))) goto L_8C03D1FE;
    goto L_8C03D1FA;
    L_8C03D1FA:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D200;
    L_8C03D1FE:;
    R3 = (0x0);
    goto L_8C03D200;
    L_8C03D1C4:;
    u561 = *(float *)((R4 + 0xAF0));
    u562 = *(float *)((R4 + 0xA3C));
    F1 = ((u562 - u561));
    if ((!(F3 > (u562 - u561)))) goto L_8C03D1D6;
    goto L_8C03D1D2;
    L_8C03D1D2:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D1D8;
    L_8C03D1D6:;
    R2 = (0x0);
    goto L_8C03D1D8;
    L_8C03D17C:;
    if ((!(F3 > F11))) goto L_8C03D184;
    goto L_8C03D180;
    L_8C03D180:;
    R3 = (0xFFFFFFFF);
    goto L_8C03D186;
    L_8C03D184:;
    R3 = (0x0);
    goto L_8C03D186;
    L_8C03D0FC:;
    u570 = *(float *)((R4 + 0xAE8));
    u571 = *(float *)((R4 + 0xA34));
    F1 = ((u571 - u570));
    if ((!(F3 > (u571 - u570)))) goto L_8C03D15C;
    goto L_8C03D10A;
    L_8C03D10A:;
    R2 = (0xFFFFFFFF);
    goto L_8C03D15E;
    L_8C03D15C:;
    R2 = (0x0);
    goto L_8C03D15E;
}
