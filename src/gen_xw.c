/* Straight-line functions with calls and guards (batch gen_xw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupRequestSave(int, int, int, int);
int FUN_8c03f5aa(int, float);
int ballWallStop(int);
int buGetDiskInfo(int, int);
int circuitPanelReset(void);
int circuitTaskAdd(int, int, int);
int circuitTaskClear(void);
int commonLoadStep(int, int, int);
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimArc(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblRecoverPosB(int, int, int);
float cpuDistXZ(int, int);
float cpuEdgeX(int, Stk3, float);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuSglAimAddGrid(int, int);
int cpuSglAimAddRange(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimPickNet(int, int, int);
int cpuSglShotDefault(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotRange(int, int, int, int, int);
int cpuShotTargetSet(int, float, float);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int fadeStart(int);
int fileLoadCloseSlot(int);
int memmove(int, int, int);
int miniPopupSpawn(Stk4);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int, int, int, int, int, int);
int ndbGetTargets(int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlInitEvent(void);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int padLcdModeClear(void);
int padVibRequest(int, int, int, int, int, int);
int resCautionFreeAll(void);
int resCautionReset(int);
int serveGetReceiver(void);
int serveGetServer(void);
int shadowBallDraw(Stk3);
int sndStopAllExcept(int);
int stageFreeAll(void);
int stageLoadWtcMain(void);
int stageLoadWtcSprites(void);
int stageTexSetGarbagedAll(void);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int thunk_FUN_8c032f6c(void);
int thunk_FUN_8c1e0150(int, int);
int unlockApplyW1(void);
int unlockApplyW2(void);
float vecDistXZ(Stk3, Stk3);
float vecLengthXZ(Stk3, Stk1);
Stk3 vecMake(float, float, float);
int FUN_8c04c83a(int a4, int a5);
float FUN_8c074ea0(int a4, int a5);
int FUN_8c07b484(int a4, int a5, float f4, float f5);
int FUN_8c0e00c0(void);
int FUN_8c0306a4(void);
int FUN_8c045c42(int a4, float f4);
int FUN_8c03a068(int a4);
int FUN_8c05e9f8(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
float FUN_8c06b79e(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
float FUN_8c05e244(int a4, int a5, int a6, float f4, float f5);

int FUN_8c04c83a(int a4, int a5)
{
    int stk[12];
    register int t0;
    register int t1;
    register float t6;
    register float u8;
    register float u9;
    register float u12;
    register float u17;
    register float u27;
    register int t33;
    register float u34;
    register float u35;
    register int t50;
    register float u42;
    int t60;
    register int t61;
    register int t97;
    register int t66;
    register int t71;
    register int t76;
    register int t81;
    register int t86;
    register int t91;
    register int t106;
    register int t110;
    register int t115;
    register int t119;
    register int t123;
    register int t127;
    register int t139;
    register float u140;
    register float u141;
    register int t155;
    register float u148;
    int t164;
    register int t165;
    register int t201;
    register int t170;
    register int t175;
    register int t180;
    register int t185;
    register int t190;
    register int t195;
    register int t209;
    register int t213;
    register int t218;
    register int t222;
    register int t226;
    register int t230;
    register float u252;
    register float u253;
    register float u256;
    register float u261;
    register float u271;
    register int t277;
    register float u278;
    register float u279;
    register int t294;
    register float u286;
    int t306;
    register int t307;
    register int t343;
    register int t312;
    register int t317;
    register int t322;
    register int t327;
    register int t332;
    register int t337;
    register int t353;
    register int t357;
    register int t362;
    register int t366;
    register int t370;
    register int t374;
    register int t386;
    register float u387;
    register float u388;
    register int t403;
    register float u395;
    int t414;
    register int t415;
    register int t451;
    register int t420;
    register int t425;
    register int t430;
    register int t435;
    register int t440;
    register int t445;
    register int t460;
    register int t464;
    register int t469;
    register int t473;
    register int t477;
    register int t481;
    register int t520;
    register int t513;
    register int t516;
    register int t504;
    register int t494;
    register int t243;
    register int t235;
    register int t132;
    register int t63;
    register int t64;
    register int t167;
    register int t168;
    register int t486;
    register int t379;
    register int t309;
    register int t310;
    register int t417;
    register int t418;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t504 = (a5 + (cpuSglAimAddGrid(a4, a5)));
    } else {
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            t6 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
            if (10.0f > t6) {
                t243 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
            } else {
                u8 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u9 = (-u8);
                if (!(0.0f > u8)) {
                    u9 = u8;
                }
                if (35.6550026f > u9) {
                    u12 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                    u17 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                    if (((u12 > 0.0f) - (0.0f > u12)) != (((-u17) > 0.0f) - (0.0f > (-u17)))) {
                        cpuAimPointSet(a5, 0x2, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet((a5 + 0x1), 0x2, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u27 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, ((float)((u27 > 0.0f) - (0.0f > u27)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t132 = (((a5 + 0x1) + 0x1) + 0x1);
                    } else {
                        t33 = *(int *)((a4 + 0xC58));
                        u34 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u35 = (-u34);
                        if (!(0.0f > u34)) {
                            u35 = u34;
                        }
                        t50 = a5;
                        if (59.4249992f > u35) {
                            cpuAimPointSet(a5, 0x3, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet((a5 + 0x1), 0x3, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u42 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((float)((u42 > 0.0f) - (0.0f > u42)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t50 = (((a5 + 0x1) + 0x1) + 0x1);
                        }
                        t60 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60));
                        t61 = 0x1;
                        if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
                            t61 = 0x2;
                        }
                        t97 = t50;
                        if (((0x100 & t60) != 0) && ((t63 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t63 >= (int)0x9) && (t64 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t64 <= (int)0xC))) {
                        } else {
                            t66 = (int)((int)(nlRand()) % (int)0x64);
                            t71 = t50;
                            if ((int)t66 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x1))) / (int)t61))) {
                                t71 = (t50 + (ndbGetTargets(a4, t50, 0x4)));
                            }
                            t76 = (int)((int)(nlRand()) % (int)0x64);
                            t81 = t71;
                            if ((int)t76 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x3))) / (int)t61))) {
                                t81 = (t71 + (ndbGetTargets(a4, t71, 0x6)));
                            }
                            t86 = (int)((int)(nlRand()) % (int)0x64);
                            t91 = t81;
                            if ((int)t86 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x5))) / (int)t61))) {
                                t91 = (t81 + (ndbGetTargets(a4, t81, 0x8)));
                            }
                            t97 = t91;
                        }
                        t106 = (int)((int)(nlRand()) % (int)0x64);
                        t110 = t97;
                        if ((int)t106 < (int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x0)))) {
                            t110 = (t97 + (ndbGetTargets(a4, t97, 0x3)));
                        }
                        t115 = (int)((int)(nlRand()) % (int)0x64);
                        t119 = t110;
                        if ((int)t115 < (int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x2)))) {
                            t119 = (t110 + (ndbGetTargets(a4, t110, 0x5)));
                        }
                        t123 = (int)((int)(nlRand()) % (int)0x64);
                        t127 = t119;
                        if ((int)t123 < (int)(unsigned char)(*(signed char *)(((((t33 << 1) + (t33 << 2)) + 0x8C159FA4) + 0x4)))) {
                            t127 = (t119 + (ndbGetTargets(a4, t119, 0x7)));
                        }
                        t132 = t127;
                    }
                    t235 = t132;
                } else {
                    t139 = *(int *)((a4 + 0xC58));
                    u140 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u141 = (-u140);
                    if (!(0.0f > u140)) {
                        u141 = u140;
                    }
                    t155 = a5;
                    if (59.4249992f > u141) {
                        cpuAimPointSet(a5, 0x3, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet((a5 + 0x1), 0x3, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u148 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((float)((u148 > 0.0f) - (0.0f > u148)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t155 = (((a5 + 0x1) + 0x1) + 0x1);
                    }
                    t164 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60));
                    t165 = 0x1;
                    if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
                        t165 = 0x2;
                    }
                    t201 = t155;
                    if (((0x100 & t164) != 0) && ((t167 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t167 >= (int)0x9) && (t168 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t168 <= (int)0xC))) {
                    } else {
                        t170 = (int)((int)(nlRand()) % (int)0x64);
                        t175 = t155;
                        if ((int)t170 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x1))) / (int)t165))) {
                            t175 = (t155 + (ndbGetTargets(a4, t155, 0x4)));
                        }
                        t180 = (int)((int)(nlRand()) % (int)0x64);
                        t185 = t175;
                        if ((int)t180 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x3))) / (int)t165))) {
                            t185 = (t175 + (ndbGetTargets(a4, t175, 0x6)));
                        }
                        t190 = (int)((int)(nlRand()) % (int)0x64);
                        t195 = t185;
                        if ((int)t190 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x5))) / (int)t165))) {
                            t195 = (t185 + (ndbGetTargets(a4, t185, 0x8)));
                        }
                        t201 = t195;
                    }
                    t209 = (int)((int)(nlRand()) % (int)0x64);
                    t213 = t201;
                    if ((int)t209 < (int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x0)))) {
                        t213 = (t201 + (ndbGetTargets(a4, t201, 0x3)));
                    }
                    t218 = (int)((int)(nlRand()) % (int)0x64);
                    t222 = t213;
                    if ((int)t218 < (int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x2)))) {
                        t222 = (t213 + (ndbGetTargets(a4, t213, 0x5)));
                    }
                    t226 = (int)((int)(nlRand()) % (int)0x64);
                    t230 = t222;
                    if ((int)t226 < (int)(unsigned char)(*(signed char *)(((((t139 << 1) + (t139 << 2)) + 0x8C159FA4) + 0x4)))) {
                        t230 = (t222 + (ndbGetTargets(a4, t222, 0x7)));
                    }
                    t235 = t230;
                }
                t243 = t235;
            }
            t494 = t243;
        } else {
            u252 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u253 = (-u252);
            if (!(0.0f > u252)) {
                u253 = u252;
            }
            if (35.6550026f > u253) {
                u256 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u261 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00));
                if (((u256 > 0.0f) - (0.0f > u256)) != (((-u261) > 0.0f) - (0.0f > (-u261)))) {
                    cpuAimPointSet(a5, 0x2, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet((a5 + 0x1), 0x2, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u271 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, ((float)((u271 > 0.0f) - (0.0f > u271)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t379 = (((a5 + 0x1) + 0x1) + 0x1);
                } else {
                    t277 = *(int *)((a4 + 0xC58));
                    u278 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u279 = (-u278);
                    if (!(0.0f > u278)) {
                        u279 = u278;
                    }
                    t294 = a5;
                    if (59.4249992f > u279) {
                        cpuAimPointSet(a5, 0x3, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet((a5 + 0x1), 0x3, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u286 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((float)((u286 > 0.0f) - (0.0f > u286)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t294 = (((a5 + 0x1) + 0x1) + 0x1);
                    }
                    t306 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60));
                    t307 = 0x1;
                    if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
                        t307 = 0x2;
                    }
                    t343 = t294;
                    if (((0x100 & t306) != 0) && ((t309 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t309 >= (int)0x9) && (t310 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t310 <= (int)0xC))) {
                    } else {
                        t312 = (int)((int)(nlRand()) % (int)0x64);
                        t317 = t294;
                        if ((int)t312 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x1))) / (int)t307))) {
                            t317 = (t294 + (ndbGetTargets(a4, t294, 0x4)));
                        }
                        t322 = (int)((int)(nlRand()) % (int)0x64);
                        t327 = t317;
                        if ((int)t322 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x3))) / (int)t307))) {
                            t327 = (t317 + (ndbGetTargets(a4, t317, 0x6)));
                        }
                        t332 = (int)((int)(nlRand()) % (int)0x64);
                        t337 = t327;
                        if ((int)t332 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x5))) / (int)t307))) {
                            t337 = (t327 + (ndbGetTargets(a4, t327, 0x8)));
                        }
                        t343 = t337;
                    }
                    t353 = (int)((int)(nlRand()) % (int)0x64);
                    t357 = t343;
                    if ((int)t353 < (int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x0)))) {
                        t357 = (t343 + (ndbGetTargets(a4, t343, 0x3)));
                    }
                    t362 = (int)((int)(nlRand()) % (int)0x64);
                    t366 = t357;
                    if ((int)t362 < (int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x2)))) {
                        t366 = (t357 + (ndbGetTargets(a4, t357, 0x5)));
                    }
                    t370 = (int)((int)(nlRand()) % (int)0x64);
                    t374 = t366;
                    if ((int)t370 < (int)(unsigned char)(*(signed char *)(((((t277 << 1) + (t277 << 2)) + 0x8C159FA4) + 0x4)))) {
                        t374 = (t366 + (ndbGetTargets(a4, t366, 0x7)));
                    }
                    t379 = t374;
                }
                t486 = t379;
            } else {
                t386 = *(int *)((a4 + 0xC58));
                u387 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u388 = (-u387);
                if (!(0.0f > u387)) {
                    u388 = u387;
                }
                t403 = a5;
                if (59.4249992f > u388) {
                    cpuAimPointSet(a5, 0x3, 41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet((a5 + 0x1), 0x3, -41.1500015f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u395 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x3, ((float)((u395 > 0.0f) - (0.0f > u395)) * 41.1500015f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t403 = (((a5 + 0x1) + 0x1) + 0x1);
                }
                t414 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60));
                t415 = 0x1;
                if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
                    t415 = 0x2;
                }
                t451 = t403;
                if (((0x100 & t414) != 0) && ((t417 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t417 >= (int)0x9) && (t418 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t418 <= (int)0xC))) {
                } else {
                    t420 = (int)((int)(nlRand()) % (int)0x64);
                    t425 = t403;
                    if ((int)t420 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x1))) / (int)t415))) {
                        t425 = (t403 + (ndbGetTargets(a4, t403, 0x4)));
                    }
                    t430 = (int)((int)(nlRand()) % (int)0x64);
                    t435 = t425;
                    if ((int)t430 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x3))) / (int)t415))) {
                        t435 = (t425 + (ndbGetTargets(a4, t425, 0x6)));
                    }
                    t440 = (int)((int)(nlRand()) % (int)0x64);
                    t445 = t435;
                    if ((int)t440 < (int)((int)((int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x5))) / (int)t415))) {
                        t445 = (t435 + (ndbGetTargets(a4, t435, 0x8)));
                    }
                    t451 = t445;
                }
                t460 = (int)((int)(nlRand()) % (int)0x64);
                t464 = t451;
                if ((int)t460 < (int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x0)))) {
                    t464 = (t451 + (ndbGetTargets(a4, t451, 0x3)));
                }
                t469 = (int)((int)(nlRand()) % (int)0x64);
                t473 = t464;
                if ((int)t469 < (int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x2)))) {
                    t473 = (t464 + (ndbGetTargets(a4, t464, 0x5)));
                }
                t477 = (int)((int)(nlRand()) % (int)0x64);
                t481 = t473;
                if ((int)t477 < (int)(unsigned char)(*(signed char *)(((((t386 << 1) + (t386 << 2)) + 0x8C159FA4) + 0x4)))) {
                    t481 = (t473 + (ndbGetTargets(a4, t473, 0x7)));
                }
                t486 = t481;
            }
            t494 = t486;
        }
        t504 = t494;
    }
    t520 = t504;
    if (t504 == 0) {
        t513 = ndbGetTargets(a4, t504, 0x0);
        t516 = (t504 + t513);
        if ((t504 + t513) == 0) {
            cpuAimPointSet((t504 + t513), 0x1, 0.0f, 0.0f);
            t516 = ((t504 + t513) + 0x1);
        }
        t520 = t516;
    }
    return t520;
}

float FUN_8c074ea0(int a4, int a5)
{
    int stk[29];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register float u9;
    register float u12;
    register int t15;
    register float u16;
    register float u17;
    register float u18;
    register int t33;
    register int t46;
    register int t76;
    register int t66;
    register int t67;
    register int t68;
    register float u69;
    register float u88;
    register float u89;
    register float u92;
    register float u95;
    register int t98;
    register int t100;
    register int t101;
    register float u107;
    register float u111;
    register float u112;
    register float u113;
    register float u114;
    register float u115;
    register float u147;
    register float u131;
    register int t14;
    register int t56;
    register float u30;
    register float u31;
    register float u32;
    register int t38;
    register float u43;
    register float u44;
    register float u45;
    register int t51;
    register int t119;

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 8)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    u5 = 1.10000002f;
    u5 = u5 + 0.100000001f * (nlRandom());
    if (!((u5 * 55.3499985f) > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        u147 = 0.100000001f;
    } else {
        u7 = *(float *)0x8C291F84;
        u9 = (-u7);
        if (!(0.0f > u7)) {
            u9 = (*(float *)0x8C291F84);
        }
        u12 = 1.20000005f;
        u12 = u12 + 0.300000012f * (nlRandom());
        if (!((u12 * 119.349998f) > u9)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            u131 = 0.300000012f;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
            cpuShotRange(a4, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14));
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            if ((int)a5 > 0) {
                t15 = 0x8C2FCC6C;
                for (;;) {
                    u16 = *(float *)((t15 + 0x8));
                    u17 = *(float *)((t15 + 0x0));
                    u18 = u16;
                    if (0.0f > u16) {
                        u18 = (-u16);
                    }
                    if ((unsigned char)(*(signed char *)((t15 + 0xC))) == 1) {
                        if ((u17 > (*(float *)(((int)stk + 64)))) && ((u30 = *(float *)(((int)stk + 52)), u30 > u17) && ((u31 = *(float *)(((int)stk + 72)), u18 > u31) && (u32 = *(float *)(((int)stk + 60)), u32 > u18)))) {
                            t38 = t14;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x8);
                            t33 = t14;
                            *(int *)((int)stk + 4) = t33;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), t33);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t56 = t38;
                    } else {
                        if ((u17 > (*(float *)(((int)stk + 40)))) && ((u43 = *(float *)(((int)stk + 28)), u43 > u17) && ((u44 = *(float *)(((int)stk + 48)), u18 > u44) && (u45 = *(float *)(((int)stk + 36)), u45 > u18)))) {
                            t51 = t14;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x8);
                            t46 = t14;
                            *(int *)((int)stk + 4) = t46;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18), t46);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 16)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 24)));
                        }
                        t56 = t51;
                    }
                    t14 = t56;
                    cpuDblAimArc(a4, t15, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t14 = (*(int *)(((int)stk + 12)));
                    t15 = (t15 + 0x20);
                    t14 = (t14 + 0x1);
                    *(unsigned int *)(((int)stk + 12)) = t14;
                    if ((int)t14 >= (int)a5) {
                        break;
                    }
                }
            }
            t76 = 0x0;
            if ((int)a5 > 0) {
                t66 = 0x8C2FCC6C;
                t67 = 0x0;
                t68 = 0x0;
                u69 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t66 + 0x1C))) > u69) {
                        u69 = (*(float *)((t66 + 0x1C)));
                        t68 = t67;
                    }
                    t67 = (t67 + 0x1);
                    t66 = (t66 + 0x20);
                    if ((int)t67 >= (int)a5) {
                        break;
                    }
                }
                t76 = t68;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((*(int *)(((*(int *)(((int)stk + 8))) + 0xA24))) == 0) {
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xA24)) = 0x4;
            }
            u88 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u89 = (-u88);
            if (!(0.0f > u88)) {
                u89 = u88;
            }
            u92 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u95 = (-1.0f);
            u95 = u95 + (1.0f + 1.0f) * (u89 / (*(float *)0x8C075214));
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u92) / (*(float *)0x8C075218)), u95);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t98 = *(int *)0x8C2FCC1C;
            *(int *)((int)stk + 4) = (-(((t98 - 5) << 1) + (t98 - 5)));
            t100 = (int)((int)(nlRand()) % (int)0x3);
            t101 = *(int *)0x8C2FCC1C;
            u107 = (float)((t100 + (-(((t98 - 5) << 1) + (t98 - 5)))) + 0x8);
            if ((*(int *)0x8C291F74) == 5) {
                u107 = ((float)((t100 + (-(((t98 - 5) << 1) + (t98 - 5)))) + 0x8) + (float)(0x11 - (((t101 - 5) << 1) + ((t101 - 5) << 2))));
            }
            u111 = *(float *)0x8C07522C;
            u112 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u113 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u114 = u107;
            u114 = u114 + ((-(u112 / u111)) + 1.0f) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u113 - (float)(0x33 - ((t101 - 5) * 0xB)));
            u115 = *(float *)0x8C075230;
            if (u115 > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = u115;
            }
            if ((u114 > (*(float *)0x8C291F54)) && (t119 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t119 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u114 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u131 = ((-(u112 / u111)) + 1.0f);
        }
        u147 = u131;
    }
    return u147;
}

int FUN_8c07b484(int a4, int a5, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u0 = *(float *)((a4 + 0xAE8));
    t2 = (u0 > 0.0f) - (0.0f > u0);
    u0 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
    t3 = (u0 > 0.0f) - (0.0f > u0);
    u0 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    if (t3 == ((u0 > 0.0f) - (0.0f > u0))) {
        u0 = 59.4249992f;
        u0 = u0 + 59.4249992f * (nlRandom());
        cpuAimPointSet(a5, 0x1, ((float)(-t3) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * u0));
        t4 = (a5 + 0x1);
    } else {
        if (((*(int *)0x8C291F78) & 4) != 0) {
            t5 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
            if (t2 == t3) {
                t5 = (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84);
            }
            u0 = *(float *)((t5 + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t5 = a5;
            if (41.5974998f > u1) {
                cpuAimPointSet(a5, 0x2, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t5 = (a5 + 0x1);
            }
            cpuAimPointSet(t5, 0x1, ((float)(-t2) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = 0.200000003f;
            u0 = u0 + 0.100000001f * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            cpuAimPointSet((t5 + 0x1), 0x1, ((float)(-t2) * 54.8499985f), (u1 * 118.849998f));
            u0 = *(float *)0x8C291F7C;
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t6 = ((t5 + 0x1) + 0x1);
            if (!(u1 > 16.460001f)) {
            } else {
                t7 = nlRand();
                t8 = ((~(((~t7) + 0x1) & 0x1)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0x1);
                }
                t7 = ((t5 + 0x1) + 0x1);
                if (t8 == 0) {
                } else {
                    cpuAimPointSet(((t5 + 0x1) + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t7 = (((t5 + 0x1) + 0x1) + 0x1);
                }
                t6 = t7;
            }
            t5 = t6;
        } else {
            t6 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
            if (t2 == t3) {
                t6 = (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84);
            }
            u0 = *(float *)((t6 + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t3 = a5;
            if (47.5400009f > u1) {
                cpuAimPointSet(a5, 0x2, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((t6 + 0xAE8));
                u1 = *(float *)((a4 + 0xAE8));
                u2 = (-u0);
                if (!(0.0f > u0)) {
                    u2 = u0;
                }
                u3 = (-u1);
                if (!(0.0f > u1)) {
                    u3 = u1;
                }
                if (!(u3 > u2)) {
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    t6 = (a5 + 0x1);
                    if (32.9099998f > u1) {
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t6 = ((a5 + 0x1) + 0x1);
                    }
                    t7 = t6;
                } else {
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t7 = ((a5 + 0x1) + 0x1);
                }
                t3 = t7;
            }
            u0 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u3 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
            cpuAimPointSet(t3, 0x1, ((u3 + u2) * 0.5f), ((u0 + u1) * 0.5f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((t3 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((t3 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 23.7700005f));
            t5 = (((t3 + 0x1) + 0x1) + 0x1);
        }
        t4 = t5;
    }
    return t4;
}

int FUN_8c0e00c0(void)
{
    int stk[31];
    register int t6;
    register int t8;
    register int t11;
    register int t19;
    register int t27;
    register int t32;
    register int t34;
    register float u37;
    register float u38;
    register float u39;
    register float u40;
    register float u41;
    register int t48;
    register int t75;
    register int t87;
    register int t83;
    register int t66;
    register int t18;
    register int t62;
    register int t26;
    register int t58;
    register int t56;
    register int t55;
    register int t82;

    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C40C69C = 0x1;
        *(unsigned int *)0x8C40C698 = 0x1;
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    *(unsigned int *)0x8C421E24 = 0x63;
    *(unsigned int *)0x8C40C628 = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x8C40C6B0;
    t6 = buGetDiskInfo(0x0, 0x8C40C6C4);
    if (t6 != (*(int *)0x8C1D78B0)) {
        t8 = *(int *)0x8C1D78B4;
        *(unsigned int *)0x8C1D78B4 = (t8 + 0x1);
        if ((int)(t8 + 0x1) > (int)0x5) {
            *(unsigned int *)0x8C1D78B0 = t6;
            *(unsigned int *)0x8C1D78B4 = 0x0;
        }
        t87 = (resCautionReset(0x0));
    } else {
        *(unsigned int *)0x8C1D78B4 = 0x0;
        if ((t6 != 0xFFFFFF03) && (t6 != 0xFFFFFF01)) {
            if (t6 == -1) {
                if ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8) {
                    t11 = 0x8C29B898;
                    for (;;) {
                        if (((*(int *)(((*(int *)((t11 + 0x0))) + 0x10))) & 0x8) != 0) {
                            break;
                        }
                        t11 = (t11 + 0x4);
                        if ((unsigned int)t11 >= (unsigned int)0x8C29B8A8) {
                            return (commonLoadStep(t11, 0x8, 0x8C29B8A8));
                        }
                    }
                    *(unsigned int *)0x8C20D14C = 0x7;
                    *(unsigned int *)0x8C20D150 = 0x2;
                    *(unsigned int *)0x8C20D15C = 0x0;
                    resCautionReset(0x0);
                    t18 = (resCautionFreeAll());
                } else {
                    t18 = (commonLoadStep(0x8C29B898, 0x8C29B898, 0x8C29B8A8));
                }
                t66 = t18;
            } else {
                if (t6 != 0) {
                    if ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8) {
                        t19 = 0x8C29B898;
                        for (;;) {
                            if (((*(int *)(((*(int *)((t19 + 0x0))) + 0x10))) & 0x8) != 0) {
                                break;
                            }
                            t19 = (t19 + 0x4);
                            if ((unsigned int)t19 >= (unsigned int)0x8C29B8A8) {
                                return (commonLoadStep(t19, 0x8, 0x8C29B8A8));
                            }
                        }
                        *(unsigned int *)0x8C20D14C = 0x7;
                        *(unsigned int *)0x8C20D150 = 0x2;
                        *(unsigned int *)0x8C20D15C = 0x0;
                        resCautionReset(0x0);
                        t26 = (resCautionFreeAll());
                    } else {
                        t26 = (commonLoadStep(0x8C29B898, 0x8C29B898, 0x8C29B8A8));
                    }
                    t62 = t26;
                } else {
                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                    *(unsigned int *)0x8C40C69C = 0x1;
                    *(unsigned int *)0x8C40C698 = 0x1;
                    t27 = thunk_FUN_8c1e0150(0x0, 0x8C126AB0);
                    if (t27 == 0) {
                        *(unsigned int *)(((int)stk + 24)) = 0x1;
                    }
                    t32 = *(short *)(((*(int *)(((int)stk + 20))) + 0x3A));
                    if ((*(int *)(((int)stk + 24))) != 0) {
                        *(unsigned int *)0x8C20D14C = 0x7;
                        *(unsigned int *)0x8C20D150 = 0x3;
                        *(unsigned int *)0x8C20D15C = 0x0;
                        fileLoadCloseSlot(0x4);
                        t34 = resCautionFreeAll();
                        *(unsigned int *)0x8C421E24 = 0x63;
                        t58 = t34;
                    } else {
                        if ((int)(unsigned short)t32 >= (int)0x2) {
                            *(unsigned int *)0x8C1D7538 = 0x1;
                            *(unsigned int *)0x8C421E24 = 0x63;
                            *(unsigned int *)0x8C20D14C = 0x7;
                            *(unsigned int *)0x8C20D150 = 0x3;
                            *(unsigned int *)0x8C20D15C = 0x0;
                            fileLoadCloseSlot(0x4);
                            t56 = (resCautionFreeAll());
                        } else {
                            u37 = *(float *)0x8C0E04AC;
                            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x8);
                            *(Stk3 *)((((int)stk + 20) + 0x8)) = vecMake(40.0f, u37, 0.0500000007f);
                            u38 = *(float *)0x8C0E04B0;
                            *(int *)((int)stk + 12) = (0xC + (((int)stk + 20) + 0x8));
                            *(Stk3 *)((0xC + (((int)stk + 20) + 0x8))) = vecMake(40.0f, u38, 0.0500000007f);
                            u39 = *(float *)0x8C0E04B4;
                            u40 = *(float *)0x8C0E04AC;
                            *(int *)((int)stk + 8) = (0x18 + (((int)stk + 20) + 0x8));
                            *(Stk3 *)((0x18 + (((int)stk + 20) + 0x8))) = vecMake(u39, u40, 0.0500000007f);
                            u41 = *(float *)0x8C0E04B0;
                            *(int *)((int)stk + 4) = (0x24 + (((int)stk + 20) + 0x8));
                            *(Stk3 *)((0x24 + (((int)stk + 20) + 0x8))) = vecMake(u39, u41, 0.0500000007f);
                            msgWinFramePut((((int)stk + 20) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
                            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, (*(float *)0x8C0E04BC), 0.00999999978f);
                            msgWinPut(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, (*(float *)0x8C0E04C4), 0.00999999978f);
                            msgWinPut(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 320.0f, 0.00999999978f);
                            msgWinPut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
                            *(unsigned int *)0x8C421E24 = 0xA;
                            if ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8) {
                                t48 = 0x8C29B898;
                                for (;;) {
                                    if (((*(int *)(((*(int *)((t48 + 0x0))) + 0x10))) & 0x8) != 0) {
                                        break;
                                    }
                                    t48 = (t48 + 0x4);
                                    if ((unsigned int)t48 >= (unsigned int)0x8C29B8A8) {
                                        return (commonLoadStep(t48, 0x8, 0x8C29B8A8));
                                    }
                                }
                                *(unsigned int *)0x8C20D14C = 0x7;
                                *(unsigned int *)0x8C20D150 = 0x2;
                                *(unsigned int *)0x8C20D15C = 0x0;
                                resCautionReset(0x0);
                                t55 = (resCautionFreeAll());
                            } else {
                                t55 = (commonLoadStep(0x8C29B898, 0x8C29B898, 0x8C29B8A8));
                            }
                            t56 = t55;
                        }
                        t58 = t56;
                    }
                    t62 = t58;
                }
                t66 = t62;
            }
            t83 = t66;
        } else {
            *(unsigned int *)0x8C40C69C = 0x0;
            *(unsigned int *)0x8C40C698 = 0x0;
            *(int *)((int)stk + 16) = (((int)stk + 20) + 0x8);
            *(Stk3 *)((((int)stk + 20) + 0x8)) = vecMake(40.0f, 175.0f, 0.0500000007f);
            *(int *)((int)stk + 12) = (0xC + (((int)stk + 20) + 0x8));
            *(Stk3 *)((0xC + (((int)stk + 20) + 0x8))) = vecMake(40.0f, 375.0f, 0.0500000007f);
            *(int *)((int)stk + 8) = (0x18 + (((int)stk + 20) + 0x8));
            *(Stk3 *)((0x18 + (((int)stk + 20) + 0x8))) = vecMake(560.0f, 175.0f, 0.0500000007f);
            *(int *)((int)stk + 4) = (0x24 + (((int)stk + 20) + 0x8));
            *(Stk3 *)((0x24 + (((int)stk + 20) + 0x8))) = vecMake(560.0f, 375.0f, 0.0500000007f);
            msgWinFramePut((((int)stk + 20) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 200.0f, 0.00999999978f);
            msgWinPut(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, (*(float *)0x8C0E04C4), 0.00999999978f);
            msgWinPut(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
            *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 320.0f, 0.00999999978f);
            msgWinPut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
            *(unsigned int *)0x8C421E24 = 0xA;
            if ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8) {
                t75 = 0x8C29B898;
                for (;;) {
                    if (((*(int *)(((*(int *)((t75 + 0x0))) + 0x10))) & 0x8) != 0) {
                        break;
                    }
                    t75 = (t75 + 0x4);
                    if ((unsigned int)t75 >= (unsigned int)0x8C29B8A8) {
                        return (commonLoadStep(t75, 0x8, 0x8C29B8A8));
                    }
                }
                *(unsigned int *)0x8C20D14C = 0x7;
                *(unsigned int *)0x8C20D150 = 0x2;
                *(unsigned int *)0x8C20D15C = 0x0;
                resCautionReset(0x0);
                t82 = (resCautionFreeAll());
            } else {
                t82 = (commonLoadStep(0x8C29B898, 0x8C29B898, 0x8C29B8A8));
            }
            t83 = t82;
        }
        t87 = t83;
    }
    return t87;
}

int FUN_8c0306a4(void)
{
    int stk[10];

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    *(int *)((int)stk + 32) = (R13);
    *(int *)((int)stk + 28) = (R12);
    *(int *)((int)stk + 24) = (R11);
    *(int *)((int)stk + 20) = (R10);
    *(int *)((int)stk + 16) = (R8);
    *(float *)(((int)stk + 12)) = F15;
    *(unsigned int *)0x8C20D150 = 0x5;
    circuitTaskClear();
    sndStopAllExcept(0x0);
    nlInitEvent();
    *(unsigned int *)0x8C2FBC50 = (*(int *)((((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) << 1) + 0x8C10813C) + 0x0)));
    *(unsigned int *)0x8C2FBC54 = (*(int *)(((0x8C10813C + (((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) << 1)) + 0x4)));
    v0_0 = *(int *)0x8C2FBE1C;
    *(unsigned short *)0x8C2FBC9C = (*(short *)(((((((v0_0 << 2) + v0_0) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE)));
    v0_0 = *(int *)0x8C2FBE1C;
    *(unsigned short *)0x8C2FBC9E = (*(short *)(((((((v0_0 << 2) + v0_0) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xC)));
    *(unsigned short *)0x8C2FBCA0 = (-(*(short *)0x8C2FBC9E));
    *(unsigned short *)0x8C2FBCA2 = (-(*(short *)0x8C2FBC9C));
    *(float *)0x8C2FBCA4 = 0.0f;
    { struct mv16 { int w[16]; }; *(struct mv16 *)(0x8C2878F8) = *(struct mv16 *)(0x8C2879B8); }
    *(float *)0x8C287A04 = 7.0f;
    *(int *)((int)stk + 4) = 0x8C2FBE30;
    *(Stk3 *)(0x8C2FBE30) = vecMake(0.0f, 0.0f, -100.0f);
    *(float *)0x8C2FBE3C = 0.0f;
    *(unsigned int *)0x8C2FBE40 = 0x0;
    circuitTaskAdd(0x8C0314E0, 0x0, 0x0);
    *(float *)0x8C2FBE14 = 1.0f;
    *(unsigned int *)0x8C2FBE18 = 0x0;
    *(unsigned int *)0x8C2FBE44 = 0x0;
    *(unsigned int *)0x8C2FBE48 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE5C = 0xF0;
    *(unsigned int *)0x8C2FBE2C = 0x0;
    *(unsigned int *)0x8C2FBE60 = 0x0;
    *(unsigned int *)0x8C2FBE64 = 0x0;
    circuitPanelReset();
    stageFreeAll();
    stageTexSetGarbagedAll();
    R10 = (0x0);
    R11 = (0x8C2FBE24);
    R12 = (0x8C2FBC58);
    R13 = (0x8C2FBC54);
    v0_0 = (0x8C2FBE1C);
    if (((*(int *)0x8C2FBE24) != -1)) goto L_8C03086C;
    *(unsigned int *)((R11 + 0x0)) = R10;
    *(unsigned int *)0x8C2FBE6C = 0x4;
    *(unsigned int *)0x8C2FBE70 = 0x4;
    *(unsigned int *)0x8C2FBE98 = 0xFFFFFFFF;
    circuitTaskAdd(0x8C033E2E, 0x0, 0x0);
    L_8C03087E:;
    fadeStart(0x3C);
    v0_1 = (0x20);
    if (((int)(*(int *)((v0_0 + 0x0))) >= (int)0x20)) goto L_8C03089E;
    if (((((int)0x1 << (int)(*(int *)((v0_0 + 0x0)))) & (*(int *)0x8C2FBC5C)) != 0)) goto L_8C03095C;
    L_8C0308AE:;
    v0_2 = (R10);
    L_8C030956:;
    if (!(((int)v0_2 < (int)(*(int *)((R13 + 0x0)))))) goto L_8C03095C;
    if (((int)v0_2 >= (int)v0_1)) goto L_8C0308C6;
    if (((((int)0x1 << (int)v0_2) & (*(int *)0x8C2FBC5C)) == 0)) goto L_8C030954;
    goto L_8C0308D6;
    L_8C03095C:;
    padLcdModeClear();
    if (((*(int *)((R11 + 0x0))) == 0)) goto L_8C030990;
    *(unsigned char *)((R12 + 0x26)) = (*(int *)((v0_0 + 0x0)));
    memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
    BupRequestSave(0x0, 0x8C108280, 0x8C40C2F4, 0x128);
    unlockApplyW1();
    unlockApplyW2();
    L_8C030990:;
    *(unsigned int *)((R11 + 0x0)) = R10;
    thunk_FUN_8c032f6c();
    strmBgmPlay(0xD);
    return strmVoiceQueueReset();
    L_8C0308D6:;
    v0_4 = *(int *)0x8C2FBE1C;
    v0_3 = (0x8C2FBC50);
    if (((*(short *)(((((((v0_2 << 2) + v0_2) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE))) != (*(short *)(((((((v0_4 << 2) + v0_4) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE))))) goto L_8C030954;
    v0_4 = *(int *)0x8C2FBE1C;
    if (((*(short *)(((((((v0_2 << 2) + v0_2) << 2) << 1) + (*(int *)((v0_3 + 0x0)))) + 0xC))) != (*(short *)(((((((v0_4 << 2) + v0_4) << 2) << 1) + (*(int *)((v0_3 + 0x0)))) + 0xC))))) goto L_8C030954;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_8C03095C;
    L_8C030954:;
    v0_2 = ((v0_2 + 0x1));
    goto L_8C030956;
    L_8C0308C6:;
    if (((((int)0x1 << (int)(v0_2 - 32)) & (*(int *)0x8C2FBC60)) == 0)) goto L_8C030954;
    goto L_8C0308D6;
    L_8C03089E:;
    if (((((int)0x1 << (int)((*(int *)((v0_0 + 0x0))) - 32)) & (*(int *)0x8C2FBC60)) != 0)) goto L_8C03095C;
    goto L_8C0308AE;
    L_8C03086C:;
    stageLoadWtcMain();
    stageLoadWtcSprites();
    *(unsigned int *)0x8C2FBE98 = 0x1;
    goto L_8C03087E;
}

int FUN_8c045c42(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(int *)((a4 + 0xB5C));
    if ((*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) == 30) {
        cpuSglAimPickNet(a4, 0x8C2FC69C, 0x160);
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
        return 0x20;
    }
    if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
        u0 = *(float *)((a4 + 0xB98));
        u1 = *(float *)((a4 + 0xA2C));
        u2 = *(float *)((a4 + 0xB00));
        t2 = 0xB00;
        if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u2 > 0.0f) - (0.0f > u2))) {
            if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                u0 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
            } else {
                u0 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
            }
            t3 = 0x8C045F14;
            if (10.0f > u0) {
                u0 = *(float *)(((0xB98 + a4) + 0x0));
                u1 = *(float *)(((0xA2C + a4) + 0x0));
                u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
                t3 = 0x20;
            }
            t2 = t3;
        }
        return t2;
    }
    if ((int)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) > (int)0x1E) {
        return FUN_8c03f5aa(a4, f4);
    }
    if (((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A))) != 0) && (t0 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t0 < (int)0xA)) {
        t0 = *(int *)((a4 + 0xB5C));
        u0 = *(float *)(((0x8C2FC69C + ((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160)) + 0x30));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (u1 > 0.100000001f) {
            if ((float)((u0 > 0.0f) - (0.0f > u0)) == (*(float *)((a4 + 0xB00)))) {
                u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (45.1629982f > u1) {
                    *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                }
            }
        } else {
            u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            if (45.1629982f > u1) {
                *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
            }
        }
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x0;
    }
    cpuSglShotDefault(a4);
    if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x24))) == 0) {
        t0 = cpuShotAimCheck(a4);
        *(unsigned char *)(((0x24 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = t0;
        if ((unsigned char)t0 != 0) {
            *(unsigned short *)(((0x20 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
        } else {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        }
    } else {
        *(unsigned short *)(((0x20 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
    }
    u0 = *(float *)(((0xB98 + a4) + 0x0));
    u1 = *(float *)(((0xA2C + a4) + 0x0));
    u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
    *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
    return 0x20;
}

int FUN_8c03a068(int a4)
{
    int stk[22];
    register float u9;
    register float u12;
    register float u20;
    register float t35;
    register float t36;
    register float t37;
    register float u40;
    register int t47;
    register int t48;
    register int t111;
    register float u17;

    if ((int)(*(int *)((a4 + 0x60))) > (int)0x1) {
        t111 = (nlCloseEvent(a4));
    } else {
        if ((*(int *)0x8C287C60) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((a4 + 0x2C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((a4 + 0x20)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)((a4 + 0x38)); }
            *(float *)((a4 + 0x4C)) = ((*(float *)((a4 + 0x4C))) - ((*(float *)(((0x84 + a4) + 0x0))) * (*(float *)0x8C23D204)));
            u9 = (1.0f - ((*(float *)0x8C23D204) * 0.00999999978f));
            *(float *)((a4 + 0x48)) = ((*(float *)((a4 + 0x48))) * u9);
            u12 = (1.0f - ((*(float *)0x8C23D204) * 0.00999999978f));
            *(float *)((a4 + 0x50)) = ((*(float *)((a4 + 0x50))) * u12);
            nlScaleVector(((int)stk + 28), (a4 + 0x48), (*(float *)0x8C23D204));
            nlAddVector((a4 + 0x20), ((int)stk + 28));
            if (((*(int *)0x8C287C60) == 0) && (u17 = *(float *)((a4 + 0x24)), 0.349999994f > u17)) {
                *(unsigned int *)((a4 + 0x60)) = ((*(int *)((a4 + 0x60))) + 0x1);
                *(float *)((a4 + 0x24)) = 0.349999994f;
                u20 = (*(float *)((a4 + 0x4C)));
                u20 *= -0.899999976f;
                *(float *)((a4 + 0x4C)) = u20;
            }
        }
        if (!(18.0f > (*(float *)((a4 + 0x24))))) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C28886C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x20)); }
            t35 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (!(5.0f > t35)) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0x48)); }
                t36 = vecLengthXZ(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C288A78); }
                t37 = vecLengthXZ(*(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12));
                u40 = t36;
                if (t37 > t36) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C288A78); }
                    u40 = (vecLengthXZ(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12)));
                }
                nlSubVector3op(((int)stk + 28), (a4 + 0x20), 0x8C28886C);
                nlScaleUnitVector(((int)stk + 28), ((int)stk + 28), u40);
                *(float *)((a4 + 0x48)) = (*(float *)(((int)stk + 28)));
                *(float *)((a4 + 0x50)) = (*(float *)(((int)stk + 36)));
                if (((*(int *)0x8C2FBFD8) == 0) && ((unsigned int)0x8C2FBF54 < (unsigned int)0x8C2FBFD4)) {
                    t47 = 0x8C2FBF54;
                    t48 = 0x8C2FBF54;
                    for (;;) {
                        if ((*(int *)((t47 + 0x0))) != 0) {
                            break;
                        }
                        t47 = (t47 + 0x4);
                        t48 = (t48 + 0x4);
                        if ((unsigned int)t47 >= (unsigned int)0x8C2FBFD4) {
                            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C28886C), 20.0f, (*(float *)0x8C288874));
                            miniPopupSpawn(*(Stk4 *)((int)stk + 16));
                            *(int *)((int)stk + 12) = 0x1E;
                            t48 = 0x7;
                            *(int *)((int)stk + 8) = 0xA;
                            t47 = (*(int *)0x8C2888E8);
                            padVibRequest(t47, t48, 0xF, 0x0, 0xA, 0x1E);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)((a4 + 0x20)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)((a4 + 0x48)); }
                            t47 = a4;
                            t47 = (t47 + 0x14);
                            ballWallStop(t47);
                            t47 = 0x0;
                            nlPushMatrix(t47);
                            nlTranslate((*(float *)((a4 + 0x2C))), (*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))));
                            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
                            t47 = 0xC505BB0;
                            nlObjPut(t47);
                            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                            t47 = 0x1;
                            nlPopMatrix(t47);
                            if ((int)(*(int *)((a4 + 0x60))) < (int)0x5) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0x2C)); }
                                shadowBallDraw(*(Stk3 *)(((int)stk + 16)));
                                t47 = a4;
                                t47 = (t47 + 0x14);
                                return (effBounceDustCheck(t47, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28)));
                            }
                            t47 = a4;
                            t47 = (t47 + 0x14);
                            return (effBounceDustCheck(t47, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28)));
                        }
                    }
                    *(unsigned int *)((t48 + 0x0)) = 0x0;
                }
                *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C28886C), 20.0f, (*(float *)0x8C288874));
                miniPopupSpawn(*(Stk4 *)((int)stk + 16));
                *(int *)((int)stk + 12) = 0x1E;
                *(int *)((int)stk + 8) = 0xA;
                padVibRequest((*(int *)0x8C2888E8), 0x7, 0xF, 0x0, 0xA, 0x1E);
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)((a4 + 0x20)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x38)) = *(struct mv3 *)((a4 + 0x48)); }
        ballWallStop((a4 + 0x14));
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x2C))), (*(float *)((a4 + 0x30))), (*(float *)((a4 + 0x34))));
        nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        nlObjPut(0xC505BB0);
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
        nlPopMatrix(0x1);
        if ((int)(*(int *)((a4 + 0x60))) < (int)0x5) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0x2C)); }
            shadowBallDraw(*(Stk3 *)(((int)stk + 16)));
        }
        t111 = (effBounceDustCheck((a4 + 0x14), 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28)));
    }
    return t111;
}

int FUN_8c05e9f8(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t151;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t20;
    register float u22;
    register float u23;
    register float u25;
    register float u27;
    register float u28;
    register float u30;
    register int t44;
    register float u32;
    register float u33;
    register float u35;
    register float u37;
    register float u38;
    register float u40;
    register int t42;
    register float u55;
    register float u56;
    register float u61;
    register float u62;
    register float u67;
    register float u68;
    register float u73;
    register int t78;
    register float u80;
    register float u81;
    register float u83;
    register int t97;
    register float u85;
    register float u86;
    register float u88;
    register float u90;
    register float u91;
    register float u93;
    register int t95;
    register float u136;
    register float u140;
    register float u141;
    register float u144;
    register int t8;
    register int t123;
    register int t109;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 24)) = 0x8C2FC69C;
    *(unsigned int *)(((int)stk + 24)) = (((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + (*(int *)(((int)stk + 24))));
    t151 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((((*(int *)0x8C291F78) & 4) != 0) && (t8 = *(signed char *)(((0x8C2FC69C + (t0 * 0x160)) + 0x13F)), (unsigned char)t8 == 2)) {
            cpuDblRecoverPosB(a4, (((int)stk + 16) + 0x4), ((int)stk + 16));
        } else {
            u12 = ((-((float)(*(signed char *)(((0x8C2FC69C + (t0 * 0x160)) + 0x12B))) * 0.300000012f)) + 1.0f);
            u13 = ((*(float *)((a4 + 0xB00))) * u12);
            *(float *)(((int)stk + 16)) = (-(u13 * 118.849998f));
            u14 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u15 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
            u16 = (-u14);
            if (!(0.0f > u14)) {
                u16 = u14;
            }
            u18 = (-u15);
            if (!(0.0f > u15)) {
                u18 = u15;
            }
            t20 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
            if (u18 > u16) {
                t20 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            u22 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u23 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
            u25 = ((-u22) + u23);
            if (!(0.0f > (u22 - u23))) {
                u25 = (u22 - u23);
            }
            if (!(u25 > 54.8499985f)) {
                u27 = *(float *)((t20 + 0xAE8));
                u28 = *(float *)((t20 + 0xB9C));
                u30 = ((-u27) + u28);
                if (!(0.0f > (u27 - u28))) {
                    u30 = (u27 - u28);
                }
                t44 = t20;
                if (!(15.0f > u30)) {
                    u32 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u33 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u35 = ((-u32) + u33);
                    if (!(0.0f > (u32 - u33))) {
                        u35 = (u32 - u33);
                    }
                    u37 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                    u38 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                    u40 = ((-u37) + u38);
                    if (!(0.0f > (u37 - u38))) {
                        u40 = (u37 - u38);
                    }
                    t42 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                    if (u40 > u35) {
                        t42 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t44 = t42;
                }
                t123 = t44;
            } else {
                u55 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u56 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u61 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                u62 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                if ((((u56 - u55) > 0.0f) - (0.0f > (u56 - u55))) == (((u62 - u61) > 0.0f) - (0.0f > (u62 - u61)))) {
                    u67 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u68 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u73 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                    t78 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    if ((((u67 - u68) > 0.0f) - (0.0f > (u67 - u68))) != (((u67 - u73) > 0.0f) - (0.0f > (u67 - u73)))) {
                        t78 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                    }
                    t109 = t78;
                } else {
                    u80 = *(float *)((t20 + 0xAE8));
                    u81 = *(float *)((t20 + 0xB9C));
                    u83 = ((-u80) + u81);
                    if (!(0.0f > (u80 - u81))) {
                        u83 = (u80 - u81);
                    }
                    t97 = t20;
                    if (!(15.0f > u83)) {
                        u85 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u86 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u88 = ((-u85) + u86);
                        if (!(0.0f > (u85 - u86))) {
                            u88 = (u85 - u86);
                        }
                        u90 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                        u91 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                        u93 = ((-u90) + u91);
                        if (!(0.0f > (u90 - u91))) {
                            u93 = (u90 - u91);
                        }
                        t95 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                        if (u93 > u88) {
                            t95 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                        }
                        t97 = t95;
                    }
                    t109 = t97;
                }
                t123 = t109;
            }
            u136 = *(float *)0x8C05EDD4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t123)); }
            u140 = *(float *)(((0x8C2FC69C + (t0 * 0x160)) + 0x28));
            u141 = (*(float *)((a4 + 0xAE8)));
            u141 = u141 + u136 * u140;
            u144 = (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)));
            u144 = u144 + u136 * (*(float *)(((*(int *)(((int)stk + 24))) + 0x28)));
            *(float *)(((int)stk + 20)) = (cpuEdgeX((((u141 > u144)) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (*(float *)(((int)stk + 16)))));
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB1)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = (*(float *)(((int)stk + 20)));
        *(float *)((a4 + 0xA3C)) = (*(float *)(((int)stk + 16)));
        t151 = 0xA3C;
    }
    return t151;
}

float FUN_8c06b79e(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[12];
    register int t0;
    register int t1;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u12;
    register int t14;
    register float u16;
    register float u17;
    register float u19;
    register float u21;
    register float u22;
    register float u24;
    register int t38;
    register float u26;
    register float u27;
    register float u29;
    register float u31;
    register float u32;
    register float u34;
    register int t36;
    register float u49;
    register float u50;
    register float u55;
    register float u56;
    register float u61;
    register float u62;
    register float u67;
    register int t72;
    register float u74;
    register float u75;
    register float u77;
    register int t91;
    register float u79;
    register float u80;
    register float u82;
    register float u84;
    register float u85;
    register float u87;
    register int t89;
    register float u133;
    register float u135;
    register float u136;
    register float t137;
    register float u138;
    register float u139;
    register float u147;
    register float u157;
    register int t117;
    register int t103;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = (0x8C2FC69C + ((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        u6 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
        u7 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u8 = ((*(float *)((a4 + 0xB00))) * u6);
        u9 = (-u7);
        if (!(0.0f > u7)) {
            u9 = u7;
        }
        u11 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
        u12 = (-u11);
        if (!(0.0f > u11)) {
            u12 = u11;
        }
        t14 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
        if (u12 > u9) {
            t14 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u16 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u17 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
        u19 = ((-u16) + u17);
        if (!(0.0f > (u16 - u17))) {
            u19 = (u16 - u17);
        }
        if (!(u19 > 54.8499985f)) {
            u21 = *(float *)((t14 + 0xAE8));
            u22 = *(float *)((t14 + 0xB9C));
            u24 = ((-u21) + u22);
            if (!(0.0f > (u21 - u22))) {
                u24 = (u21 - u22);
            }
            t38 = t14;
            if (!(15.0f > u24)) {
                u26 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u27 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u29 = ((-u26) + u27);
                if (!(0.0f > (u26 - u27))) {
                    u29 = (u26 - u27);
                }
                u31 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                u32 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                u34 = ((-u31) + u32);
                if (!(0.0f > (u31 - u32))) {
                    u34 = (u31 - u32);
                }
                t36 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                if (u34 > u29) {
                    t36 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t38 = t36;
            }
            t117 = t38;
        } else {
            u49 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u50 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u55 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
            u56 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
            if ((((u50 - u49) > 0.0f) - (0.0f > (u50 - u49))) == (((u56 - u55) > 0.0f) - (0.0f > (u56 - u55)))) {
                u61 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u62 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u67 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                t72 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                if ((((u61 - u62) > 0.0f) - (0.0f > (u61 - u62))) != (((u61 - u67) > 0.0f) - (0.0f > (u61 - u67)))) {
                    t72 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                }
                t103 = t72;
            } else {
                u74 = *(float *)((t14 + 0xAE8));
                u75 = *(float *)((t14 + 0xB9C));
                u77 = ((-u74) + u75);
                if (!(0.0f > (u74 - u75))) {
                    u77 = (u74 - u75);
                }
                t91 = t14;
                if (!(15.0f > u77)) {
                    u79 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u80 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u82 = ((-u79) + u80);
                    if (!(0.0f > (u79 - u80))) {
                        u82 = (u79 - u80);
                    }
                    u84 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                    u85 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                    u87 = ((-u84) + u85);
                    if (!(0.0f > (u84 - u85))) {
                        u87 = (u84 - u85);
                    }
                    t89 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                    if (u87 > u82) {
                        t89 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t91 = t89;
                }
                t103 = t91;
            }
            t117 = t103;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t117)); }
        u133 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u135 = (*(float *)((a4 + 0xAE8)));
        u135 = u135 + (*(float *)0x8C06BB34) * u133;
        u136 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t137 = cpuEdgeX((((u135 > (u136 + (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (-(u8 * 118.849998f)));
        u138 = *(float *)0x8C06BB3C;
        u139 = (-t137);
        if (!(0.0f > t137)) {
            u139 = t137;
        }
        u147 = t137;
        if (u139 > u138) {
            u147 = ((float)((t137 > 0.0f) - (0.0f > t137)) * u138);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u147;
        *(float *)((a4 + 0xA3C)) = (-(u8 * 118.849998f));
        u157 = t137;
    }
    return u157;
}

float FUN_8c05e244(int a4, int a5, int a6, float f4, float f5)
{
    int stk[19];

    register int R1;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_4 = a4;
    v0_0 = a6;
    w0_6 = f4;
    w0_3 = f5;
    v0_3 = (0xA24);
    v0_2 = (0x8C291F24);
    v0_0 = (v0_4);
    v0_1 = ((((*(int *)((v0_4 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    if (((*(int *)((v0_4 + 0xA24))) != 0)) goto L_8C05E276;
    L_8C05E524:;
    return F0;
    L_8C05E276:;
    v0_4 = *(int *)((v0_2 + 0x54));
    v0_3 = (v0_4);
    w0_5 = (0.300000012f);
    w0_0 = (118.849998f);
    w0_1 = (1.0f);
    if (!(((v0_4 & 4) != 0))) goto L_8C05E3E2;
    w0_4 = *(float *)((v0_2 + 0x58));
    w0_2 = (10.9700003f);
    w0_6 = (w0_4);
    w0_3 = (0.0f);
    if ((0.0f > w0_4)) goto L_8C05E2A0;
    w0_4 = (w0_6);
    goto L_8C05E2A4;
    L_8C05E3E2:;
    if ((!((*(float *)((v0_1 + 0x0))) > 0.0f))) goto L_8C05E3EE;
    goto L_8C05E524;
    L_8C05E3EE:;
    w0_1 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_5)) + w0_1);
    w0_2 = ((*(float *)((v0_0 + 0xB00))) * w0_1);
    w0_1 = ((-(w0_2 * w0_0)));
    if ((0.0f > (-(w0_2 * w0_0)))) goto L_8C05E412;
    w0_4 = (w0_1);
    L_8C05E416:;
    if ((!(59.4249992f > w0_4))) goto L_8C05E46C;
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((v0_2 + 0x58))) - ((float)(*(signed char *)((v0_1 + 0x13D))) * 54.8499985f));
    w0_2 = (*(float *)((v0_2 + 0x60)));
    w0_2 = w0_2 + w0_0 * (*(float *)((v0_0 + 0xB00)));
    *(float *)((((int)stk + 28) + 0x8)) = w0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_2 + 0x58)); }
    w0_0 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), w0_1);
    F0 = (w0_0);
    w0_6 = (w0_0);
    L_8C05E4DC:;
    w0_3 = ((*(float *)0x8C05E5DC));
    if ((0.0f > w0_6)) goto L_8C05E4EA;
    w0_4 = (w0_6);
    L_8C05E4EE:;
    if ((!(w0_4 > w0_3))) goto L_8C05E50E;
    w0_4 = (0.0f);
    if ((!(w0_6 > 0.0f))) goto L_8C05E4FC;
    v0_2 = (0x1);
    L_8C05E506:;
    w0_6 = (((float)v0_2 * w0_3));
    L_8C05E50E:;
    *(unsigned int *)((v0_0 + 0xA24)) = 0x0;
    *(unsigned char *)((v0_1 + 0xB1)) = 0x0;
    *(unsigned char *)((v0_1 + 0xB0)) = 0x0;
    *(float *)((v0_0 + 0xA34)) = w0_6;
    *(float *)((v0_0 + 0xA3C)) = w0_1;
    v0_3 = (0xA3C);
    goto L_8C05E524;
    L_8C05E4FC:;
    if ((!(w0_4 > w0_6))) goto L_8C05E504;
    v0_2 = (0xFFFFFFFF);
    goto L_8C05E506;
    L_8C05E504:;
    v0_2 = (0x0);
    goto L_8C05E506;
    L_8C05E4EA:;
    w0_4 = ((-w0_6));
    goto L_8C05E4EE;
    L_8C05E46C:;
    w0_2 = *(float *)((v0_2 + 0x58));
    w0_0 = (0.0f);
    w0_4 = ((float)(*(signed char *)((v0_1 + 0x13D))));
    w0_3 = (w0_2);
    if ((!(w0_2 > 0.0f))) goto L_8C05E482;
    v0_2 = (0x1);
    L_8C05E4BA:;
    w0_2 = ((float)v0_2);
    if ((0.0f > w0_3)) goto L_8C05E4C8;
    w0_0 = (w0_3);
    L_8C05E4CC:;
    w0_2 = (w0_2 * w0_0);
    w0_0 = *(float *)0x8C05E5D8;
    w0_2 = (w0_2 * (*(float *)0x8C05E5D4));
    w0_2 = w0_2 + w0_0 * w0_4;
    F0 = (w0_0);
    w0_6 = (w0_2);
    goto L_8C05E4DC;
    L_8C05E4C8:;
    w0_0 = ((-w0_3));
    goto L_8C05E4CC;
    L_8C05E482:;
    if ((!(w0_0 > w0_3))) goto L_8C05E4B8;
    v0_2 = (0xFFFFFFFF);
    goto L_8C05E4BA;
    L_8C05E4B8:;
    v0_2 = (0x0);
    goto L_8C05E4BA;
    L_8C05E412:;
    w0_4 = ((-w0_1));
    goto L_8C05E416;
    L_8C05E2A4:;
    v0_3 = (0x8C05E358);
    if ((!(12.3450012f > w0_4))) goto L_8C05E32A;
    if ((((int)((int)(*(int *)0x8C20D19C) % (int)0x3)) != 0)) goto L_8C05E32A;
    *(unsigned char *)((v0_1 + 0x13D)) = ((short)(*(signed char *)((v0_1 + 0x13D))) * (short)0xFFFFFFFF);
    *(float *)((v0_1 + 0x0)) = w0_3;
    v0_2 = (*(int *)(((0xB5C + v0_0) + 0x0))) != (serveGetServer());
    if (v0_2) goto L_8C05E302;
    w0_1 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_5)) + w0_1);
    w0_1 = ((*(float *)((v0_0 + 0xB00))) * w0_1);
    w0_1 = ((-(w0_1 * w0_0)));
    w0_6 = (((float)(*(signed char *)((v0_1 + 0x13D))) * 21.9400005f));
    goto L_8C05E50E;
    L_8C05E302:;
    w0_1 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_5)) + w0_1);
    w0_1 = ((*(float *)((v0_0 + 0xB00))) * w0_1);
    w0_1 = ((-(w0_1 * w0_0)));
    w0_6 = (((float)(*(signed char *)((v0_1 + 0x13D))) * w0_2));
    goto L_8C05E50E;
    L_8C05E32A:;
    w0_4 = *(float *)((v0_2 + 0x58));
    w0_6 = (w0_4);
    if ((0.0f > w0_4)) goto L_8C05E36C;
    w0_4 = (w0_6);
    L_8C05E370:;
    v0_3 = (0x8C05E494);
    if ((!(28.8050003f > w0_4))) goto L_8C05E3E2;
    *(float *)((v0_1 + 0x0)) = w0_3;
    v0_2 = (*(int *)(((0xB5C + v0_0) + 0x0))) != (serveGetServer());
    if (v0_2) goto L_8C05E3B0;
    w0_1 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_5)) + w0_1);
    w0_1 = ((*(float *)((v0_0 + 0xB00))) * w0_1);
    w0_1 = ((-(w0_1 * w0_0)));
    w0_6 = (((float)(*(signed char *)((v0_1 + 0x13D))) * w0_2));
    goto L_8C05E50E;
    L_8C05E3B0:;
    w0_1 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_5)) + w0_1);
    w0_1 = ((*(float *)((v0_0 + 0xB00))) * w0_1);
    w0_2 = *(float *)((0x8C288920 + ((serveGetReceiver()) * 0xD78)));
    w0_1 = ((-(w0_1 * w0_0)));
    w0_6 = ((w0_2 * 0.800000012f));
    goto L_8C05E50E;
    L_8C05E36C:;
    w0_4 = ((-w0_6));
    goto L_8C05E370;
    L_8C05E2A0:;
    w0_4 = ((-w0_6));
    goto L_8C05E2A4;
}
