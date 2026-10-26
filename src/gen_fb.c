/* Straight-line functions with calls and guards (batch gen_fb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestSave(int, int, int, int);
int arcadeNextMatch(void);
int arcadeNextStage(int, int, int, int, int, int);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int ballInit(int);
int cpuInitPoint(void);
int entryAnyAtRound5(void);
int entryCountJoined(void);
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
int pauseExec(int, int);
int playerInit(int, int);
int playerStartReactions(int, int);
int resultFlagSet(int);
int scorePressure(void);
int selCursorReset(int, int);
int selSlot0FlagClear(void);
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
int sseleSlotEntry(int a4);

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

int sseleSlotEntry(int a4)
{
    int t17;
    int t18;
    int t19;
    int t24;
    int t23;

    *(unsigned int *)(((0x8C3437E4 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
    *(unsigned short *)0x8C343260 = ((*(short *)0x8C343260) | (*(short *)(((a4 << 1) + 0x8C185298))));
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
    *(unsigned short *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
    if ((*(int *)(((((*(int *)((((a4 << 2) + 0x8C3437A4) + 0x0))) * 0x38) + 0x8C343264) + 0x8))) == 0) {
        selCursorReset(a4, 0x8C343258);
    }
    t17 = *(int *)0x8C287ADC;
    if (t17 == 2) {
        t18 = entryCountJoined();
        if (t18 == 1) {
            t19 = *(int *)0x8C287ADC;
            t24 = t19;
            if (t19 == 2) {
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
                *(unsigned short *)(((0x14 + (((selSlot0FlagClear()) * 0x38) + 0x8C343264)) + 0x0)) = 0x0;
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
                t23 = selSlot0FlagClear();
                *(unsigned int *)((((t23 * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
                t24 = ((t23 * 0x38) + 0x8C343264);
            }
            return t24;
        }
        return t18;
    }
    return t17;
}
