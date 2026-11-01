/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddCorners2(int, int);
int cpuDblAimAddCourt2(int, int);
int cpuDblAimAddDeep2(int, int);
int cpuDblAimAddRange2(int, int);
float cpuDistXZ(int, int);
float cpuLineXAtZ(Stk3, Stk3, float);
float cpuOppLineX(int);
int cpuShotRange(int, int, int, int, int, float, float, float, float);
int dbgMenuGetValue(int, int);
int exprPlayB(int, int, int);
int miniOnEvent(int, int);
int miniPlayerInput(int);
int motionAdvance(int);
extern int motionChange();
int motionIsEnd(int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlsndSeqRequest(int);
int padLcdSetMode(int, int, int, int, int, int);
int padVibRequest(int, int, int, int, int, int);
extern int playerCpuInput();
int playerDrawMarker(int, int, int, int, int, int, int, int, int);
int playerExec(int, int, int, int);
int playerReadPad(int);
int seFootLand(int, int, float);
int seShotHit2(int, int);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
float vecDistXZf(float, float, float, float);
int vecFromYaw(int, int, int, int, int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int vecTableGet(int, int, int, int, int);
int FUN_8c02414c(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_8c07c338(int a4, int a5);


int FUN_8c07c338(int a4, int a5)
{
    int stk[45];
    register int t0;
    register int t2;
    register float t8;
    register float t10;
    register float u13;
    register float u14;
    register int t18;
    register float t35;
    register float u38;
    register float u39;
    register int t43;
    register int t489;
    register float t66;
    register int t139;
    register float u67;
    register float u68;
    register float u69;
    register float u70;
    register float t78;
    register float u79;
    register float u80;
    register float u83;
    register int t127;
    register int t115;
    register float t92;
    register float u93;
    register float u98;
    register int t106;
    register float u151;
    register float u152;
    register float u154;
    register float u155;
    register float u158;
    register float u159;
    register float u161;
    register float u169;
    register float u170;
    register float u178;
    register float u179;
    register float u198;
    register float u199;
    register float u209;
    register float u216;
    register float u223;
    register int t230;
    register int t239;
    register float u232;
    register float u243;
    register float u244;
    register float u253;
    register float u263;
    register float u270;
    register int t277;
    register int t293;
    register float u279;
    register float u286;
    register int t299;
    register float u301;
    register float u307;
    register float u314;
    register float u335;
    register float u342;
    register int t349;
    register int t365;
    register float u351;
    register float u358;
    register float u388;
    register float u389;
    register float u394;
    register float u399;
    register float u400;
    register float u410;
    register float u416;
    register float u423;
    register int t443;
    register float u445;
    register int t451;
    register int t452;
    register float u455;
    register float u461;
    register int t498;
    register float u501;
    register float u502;
    register float u505;
    register float u506;
    register float u509;
    register float u510;
    register float u528;
    register float u529;
    register float u570;
    register float u571;
    register int t575;
    register float u587;
    register float u588;
    register float u618;
    register float u619;
    register float u637;
    register float u638;
    register float u679;
    register float u680;
    register float u684;
    register float u685;
    register float u708;
    register float u709;
    register float u713;
    register float u714;
    register int t717;
    register int t724;
    register int t725;
    register int t727;
    register int t728;
    register float u758;
    register float u759;
    register int t804;
    register int t4;
    register int t62;
    register int t55;
    register int t30;
    register int t24;
    register int t49;
    register float u88;
    register int t483;
    register int t383;
    register int t185;
    register float u192;
    register float u193;
    register int t377;
    register int t371;
    register int t329;
    register int t319;
    register float u324;
    register int t325;
    register int t478;
    register int t428;
    register float u436;
    register int t439;
    register float u469;
    register int t470;
    register int t799;
    register int t676;
    register int t616;
    register int t568;
    register int t560;
    register float u563;
    register float u564;
    register int t613;
    register int t585;
    register int t610;
    register int t796;
    register int t706;
    register int t793;
    register int t756;
    register int t744;
    register int t790;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) == 0) {
        t2 = *(int *)((a4 + 0xB5C));
        *(unsigned int *)(((int)stk + 52)) = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if ((((*(int *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) && (t4 = *(int *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xB60)), (t4 & 0x100) == 0)) {
            if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
                t8 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
                if (8.0f > t8) {
                    t30 = (a5 + (cpuDblAimAddRange2(a4, a5)));
                } else {
                    t10 = cpuOppLineX(a4);
                    if (0.150000006f > t10) {
                        t24 = (a5 + (cpuDblAimAddCorners2(a4, a5)));
                    } else {
                        u13 = *(float *)0x8C288874;
                        u14 = (-u13);
                        if (!(0.0f > u13)) {
                            u14 = u13;
                        }
                        t18 = a5;
                        if (47.5400009f > u14) {
                            t18 = (a5 + (cpuDblAimAddDeep2(a4, a5)));
                        }
                        t24 = t18;
                    }
                    t30 = t24;
                }
                t55 = t30;
            } else {
                t35 = cpuOppLineX(a4);
                if (0.150000006f > t35) {
                    t49 = (a5 + (cpuDblAimAddCorners2(a4, a5)));
                } else {
                    u38 = *(float *)0x8C288874;
                    u39 = (-u38);
                    if (!(0.0f > u38)) {
                        u39 = u38;
                    }
                    t43 = a5;
                    if (47.5400009f > u39) {
                        t43 = (a5 + (cpuDblAimAddDeep2(a4, a5)));
                    }
                    t49 = t43;
                }
                t55 = t49;
            }
            t62 = t55;
        } else {
            t62 = (a5 + (cpuDblAimAddCourt2(a4, a5)));
        }
        t489 = t62;
        if (t62 != 0) {
        } else {
            t66 = cpuDistXZ((0xAE8 + (((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84)), (0xAE8 + (((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84)));
            t139 = t62;
            if (!(t66 > 30.0f)) {
            } else {
                u67 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u68 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(float *)(((((int)stk + 52) + 0x44) + 0x0)) = ((u68 + u67) * 0.5f);
                *(float *)(((((int)stk + 52) + 0x44) + 0x4)) = 0.0f;
                u69 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u70 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
                *(float *)(((((int)stk + 52) + 0x44) + 0x8)) = ((u69 + u70) * 0.5f);
                *(float *)(((((int)stk + 52) + 0x38) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x44) + 0x0))));
                *(float *)(((((int)stk + 52) + 0x38) + 0x4)) = 0.0f;
                *(float *)(((((int)stk + 52) + 0x38) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x44) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
                *(float *)(((int)stk + 56)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
                t78 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))));
                u79 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u80 = *(float *)(((int)stk + 56));
                u83 = ((-u79) + u80);
                if (!(0.0f > (u79 - u80))) {
                    u83 = (u79 - u80);
                }
                t127 = t62;
                if (u83 > 20.0f) {
                    if (!(0.0f > ((*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))) - t78))) {
                        u88 = ((*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))) - t78);
                    } else {
                        u88 = ((-(*(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8)))) + t78);
                    }
                    t115 = t62;
                    if (u88 > 20.0f) {
                        *(int *)((int)stk + 48) = (((int)stk + 52) + 0x8);
                        cpuShotRange(a4, (((int)stk + 48) + 0x30), (((int)stk + 48) + 0x24), (((int)stk + 48) + 0x18), (((int)stk + 52) + 0x8), t78, u79, 20.0f, (u79 - u80));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 52) + 0x38)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0xB9C + a4)); }
                        t92 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 24)), *(Stk3 *)(((int)stk + 36)), (*(float *)(((int)stk + 92))));
                        u93 = *(float *)(((int)stk + 96));
                        u98 = *(float *)(((int)stk + 84));
                        t106 = t62;
                        if ((((u93 - t92) > 0.0f) - (0.0f > (u93 - t92))) == (((t92 - u98) > 0.0f) - (0.0f > (t92 - u98)))) {
                            cpuAimPointSet(t62, 0x1, t92, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t106 = (t62 + 0x1);
                        }
                        t115 = t106;
                    }
                    t127 = t115;
                }
                t139 = t127;
            }
            u151 = *(float *)((a4 + 0xB9C));
            u152 = (-u151);
            if (!(0.0f > u151)) {
                u152 = u151;
            }
            if (!(u152 > 34.8499985f)) {
                u154 = *(float *)((a4 + 0xB9C));
                u155 = (-u154);
                if (!(0.0f > u154)) {
                    u155 = u154;
                }
                if (15.0f > u155) {
                    u158 = *(float *)((a4 + 0xB9C));
                    u159 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                    u161 = ((-u158) + u159);
                    if (!(0.0f > (u158 - u159))) {
                        u161 = (u158 - u159);
                    }
                    if (10.0f > u161) {
                        t185 = t139;
                        u192 = (((*(float *)((a4 + 0xB9C))) + (*(float *)(((*(int *)(((int)stk + 52))) + 0xAE8)))) * 0.5f);
                        u193 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    } else {
                        u169 = *(float *)((a4 + 0xB9C));
                        u170 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                        cpuAimPointSet(t139, 0x1, ((float)(((u170 - u169) > 0.0f) - (0.0f > (u170 - u169))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        u178 = *(float *)((a4 + 0xB9C));
                        u179 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
                        t185 = (t139 + 0x1);
                        u192 = ((float)(((u179 - u178) > 0.0f) - (0.0f > (u179 - u178))) * 54.8499985f);
                        u193 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    }
                    cpuAimPointSet(t185, 0x1, u192, u193);
                    t383 = (t185 + 0x1);
                } else {
                    u198 = *(float *)((a4 + 0xB9C));
                    u199 = *(float *)((a4 + 0xAE8));
                    if ((((u198 - u199) > 0.0f) - (0.0f > (u198 - u199))) != ((u198 > 0.0f) - (0.0f > u198))) {
                        u209 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)(-((u209 > 0.0f) - (0.0f > u209))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u216 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u216 > 0.0f) - (0.0f > u216))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u223 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)(-((u223 > 0.0f) - (0.0f > u223))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t230 = (int)((int)(nlRand()) % (int)0x5);
                        t239 = (((t139 + 0x1) + 0x1) + 0x1);
                        if (t230 == 0) {
                            u232 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u232 > 0.0f) - (0.0f > u232)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t239 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                        }
                        t377 = t239;
                    } else {
                        u243 = *(float *)((a4 + 0xB9C));
                        u244 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        if ((((u244 - u243) > 0.0f) - (0.0f > (u244 - u243))) != ((u243 > 0.0f) - (0.0f > u243))) {
                            u253 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            if ((((u253 - u243) > 0.0f) - (0.0f > (u253 - u243))) == ((u243 > 0.0f) - (0.0f > u243))) {
                                u263 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(t139, 0x1, ((float)(-((u263 > 0.0f) - (0.0f > u263))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                                u270 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u270 > 0.0f) - (0.0f > u270))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t277 = (int)((int)(nlRand()) % (int)0x5);
                                t293 = ((t139 + 0x1) + 0x1);
                                if (t277 != 0) {
                                } else {
                                    u279 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)((u279 > 0.0f) - (0.0f > u279)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    u286 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u286 > 0.0f) - (0.0f > u286)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t293 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                                }
                                t329 = t293;
                            } else {
                                t299 = (int)((int)(nlRand()) % (int)0x3);
                                if (t299 != 0) {
                                    u301 = *(float *)((a4 + 0xB9C));
                                    t319 = t139;
                                    u324 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t325 = ((u301 > 0.0f) - (0.0f > u301));
                                } else {
                                    u307 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(t139, 0x1, ((float)(-((u307 > 0.0f) - (0.0f > u307))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    u314 = *(float *)((a4 + 0xB9C));
                                    t319 = (t139 + 0x1);
                                    u324 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t325 = (-((u314 > 0.0f) - (0.0f > u314)));
                                }
                                cpuAimPointSet(t319, 0x1, ((float)t325 * 54.8499985f), u324);
                                t329 = (t319 + 0x1);
                            }
                            t371 = t329;
                        } else {
                            u335 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(t139, 0x1, ((float)(-((u335 > 0.0f) - (0.0f > u335))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                            u342 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet((t139 + 0x1), 0x1, ((float)(-((u342 > 0.0f) - (0.0f > u342))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t349 = (int)((int)(nlRand()) % (int)0x5);
                            t365 = ((t139 + 0x1) + 0x1);
                            if (t349 != 0) {
                            } else {
                                u351 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((t139 + 0x1) + 0x1), 0x1, ((float)((u351 > 0.0f) - (0.0f > u351)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                u358 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet((((t139 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u358 > 0.0f) - (0.0f > u358)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t365 = ((((t139 + 0x1) + 0x1) + 0x1) + 0x1);
                            }
                            t371 = t365;
                        }
                        t377 = t371;
                    }
                    t383 = t377;
                }
                t483 = t383;
            } else {
                u388 = *(float *)((a4 + 0xB9C));
                u389 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u394 = *(float *)(((((0x3 & (t2 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
                if ((((u389 - u388) > 0.0f) - (0.0f > (u389 - u388))) == (((u394 - u388) > 0.0f) - (0.0f > (u394 - u388)))) {
                    u399 = *(float *)((a4 + 0xB9C));
                    u400 = *(float *)(((((0x3 & (t2 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    if ((((u399 - u400) > 0.0f) - (0.0f > (u399 - u400))) == ((u399 > 0.0f) - (0.0f > u399))) {
                        u410 = *(float *)((a4 + 0xB9C));
                        t428 = t139;
                        u436 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        t439 = ((u410 > 0.0f) - (0.0f > u410));
                    } else {
                        u416 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)(-((u416 > 0.0f) - (0.0f > u416))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        u423 = *(float *)((a4 + 0xB9C));
                        t428 = (t139 + 0x1);
                        u436 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        t439 = (-((u423 > 0.0f) - (0.0f > u423)));
                    }
                    cpuAimPointSet(t428, 0x1, ((float)t439 * 54.8499985f), u436);
                    t478 = (t428 + 0x1);
                } else {
                    t443 = (int)((int)(nlRand()) % (int)0x3);
                    if (t443 == 0) {
                        u445 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(t139, 0x1, ((float)((u445 > 0.0f) - (0.0f > u445)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    } else {
                        t451 = nlRand();
                        t452 = ((~(((~t451) + 0x1) & 0x1)) + 0x1);
                        if ((int)t451 >= 0) {
                            t452 = (t451 & 0x1);
                        }
                        if (t452 != 0) {
                            u455 = *(float *)((a4 + 0xB9C));
                            u469 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            t470 = (-((u455 > 0.0f) - (0.0f > u455)));
                        } else {
                            u461 = *(float *)((a4 + 0xB9C));
                            u469 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                            t470 = (-((u461 > 0.0f) - (0.0f > u461)));
                        }
                        cpuAimPointSet(t139, 0x1, ((float)t470 * 54.8499985f), u469);
                    }
                    t478 = (t139 + 0x1);
                }
                t483 = t478;
            }
            t489 = t483;
        }
        t804 = t489;
    } else {
        t498 = serveGetServer();
        if (t498 != (*(int *)0x8C2888E0)) {
            u501 = *(float *)((a4 + 0xB9C));
            u502 = (-u501);
            if (!(0.0f > u501)) {
                u502 = u501;
            }
            if (!(18.6490002f > u502)) {
                u505 = *(float *)((a4 + 0xB9C));
                u506 = (-u505);
                if (!(0.0f > u505)) {
                    u506 = u505;
                }
                if (!(u506 > 43.8800011f)) {
                    u509 = *(float *)0x8C288874;
                    u510 = (-u509);
                    if (!(0.0f > u509)) {
                        u510 = u509;
                    }
                    if (35.6550026f > u510) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t568 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u528 = *(float *)0x8C288874;
                        u529 = (-u528);
                        if (!(0.0f > u528)) {
                            u529 = u528;
                        }
                        if (83.1949997f > u529) {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t560 = (((a5 + 0x1) + 0x1) + 0x1);
                            u563 = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f);
                            u564 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        } else {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 71.3100052f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (((*(float *)0x8C28886C) + (*(float *)0x8C28A35C)) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t560 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                            u563 = 0.0f;
                            u564 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                        }
                        cpuAimPointSet(t560, 0x1, u563, u564);
                        t568 = (t560 + 0x1);
                    }
                    t616 = t568;
                } else {
                    u570 = *(float *)0x8C288874;
                    u571 = (-u570);
                    if (!(0.0f > u570)) {
                        u571 = u570;
                    }
                    if (35.6550026f > u571) {
                        t575 = (int)((int)(nlRand()) % (int)0x3);
                        if (t575 == 0) {
                            cpuAimPointSet(a5, 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t585 = (a5 + 0x1);
                        } else {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t585 = ((a5 + 0x1) + 0x1);
                        }
                        t613 = t585;
                    } else {
                        u587 = *(float *)0x8C288874;
                        u588 = (-u587);
                        if (!(0.0f > u587)) {
                            u588 = u587;
                        }
                        if (83.1949997f > u588) {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 27.4249992f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t610 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                        } else {
                            cpuAimPointSet(a5, 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 27.4249992f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t610 = (((a5 + 0x1) + 0x1) + 0x1);
                        }
                        t613 = t610;
                    }
                    t616 = t613;
                }
                t676 = t616;
            } else {
                u618 = *(float *)0x8C288874;
                u619 = (-u618);
                if (!(0.0f > u618)) {
                    u619 = u618;
                }
                if (35.6550026f > u619) {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 42.7829971f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                } else {
                    u637 = *(float *)0x8C288874;
                    u638 = (-u637);
                    if (!(0.0f > u637)) {
                        u638 = u637;
                    }
                    if (83.1949997f > u638) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 16.4549999f), ((*(float *)((a4 + 0xB00))) * 83.1949997f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 95.0800018f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, (((*(float *)0x8C28886C) + (*(float *)0x8C28A35C)) * 0.5f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    }
                }
                t676 = (((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
            }
            t799 = t676;
        } else {
            u679 = *(float *)((a4 + 0xB9C));
            u680 = (-u679);
            if (!(0.0f > u679)) {
                u680 = u679;
            }
            if (18.6490002f > u680) {
                u684 = *(float *)0x8C28A364;
                u685 = (-u684);
                if (!(0.0f > u684)) {
                    u685 = u684;
                }
                if (59.4249992f > u685) {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t706 = (((a5 + 0x1) + 0x1) + 0x1);
                } else {
                    cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 49.3649979f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t706 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t796 = t706;
            } else {
                u708 = *(float *)((a4 + 0xB9C));
                u709 = (-u708);
                if (!(0.0f > u708)) {
                    u709 = u708;
                }
                if (u709 > 43.8800011f) {
                    u713 = *(float *)0x8C28A364;
                    u714 = (-u713);
                    if (!(0.0f > u713)) {
                        u714 = u713;
                    }
                    if (59.4249992f > u714) {
                        t717 = (int)((int)(nlRand()) % (int)0x3);
                        if (t717 != 0) {
                            cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t744 = ((a5 + 0x1) + 0x1);
                        } else {
                            t724 = nlRand();
                            t725 = ((~(((~t724) + 0x1) & 0x1)) + 0x1);
                            if ((int)t724 >= 0) {
                                t725 = (t724 & 0x1);
                            }
                            if (t725 == 0) {
                                t727 = nlRand();
                                t728 = ((~(((~t727) + 0x1) & 0x3)) + 0x1);
                                if ((int)t727 >= 0) {
                                    t728 = (t727 & 0x3);
                                }
                                if (t728 != 0) {
                                    cpuAimPointSet(a5, 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                } else {
                                    cpuAimPointSet(a5, 0x2, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                }
                            } else {
                                cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            }
                            t744 = (a5 + 0x1);
                        }
                        t756 = t744;
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t756 = (((a5 + 0x1) + 0x1) + 0x1);
                    }
                    t793 = t756;
                } else {
                    u758 = *(float *)0x8C28A364;
                    u759 = (-u758);
                    if (!(0.0f > u758)) {
                        u759 = u758;
                    }
                    if (59.4249992f > u759) {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t790 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 10.9700003f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t790 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    }
                    t793 = t790;
                }
                t796 = t793;
            }
            t799 = t796;
        }
        t804 = t799;
    }
    return t804;
}
