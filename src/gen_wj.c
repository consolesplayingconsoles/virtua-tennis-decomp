/* Straight-line functions with calls and guards (batch gen_wj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
extern int FUN_8c0eaf00();
int afsPartition1Load(int);
int angLerp(int, int, float);
int bodyPlacePoints(int);
int bodyStep(int, int, int, int, int, float);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
int colliObjEntry(int);
int fadeScreenDraw(int, float, float);
int fileLoadClose(void);
float mathLerp(float, float, float);
int miniPointPopSpawn(int, Stk3);
int miniTargetDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int miniTargetInit(int, int, Stk3);
int mtxMultiKeepPos(int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlExecuteEvent(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRenderTextureBegin(int, int, int, int, int, int, int, int, int);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int padDirRepeat(int, int);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primRectFrame(int, int, int, int, Stk3);
int primRectInc(int, int, int, Stk3, Stk1);
int primRectIncGradY(int, int, int, int, int, int, int, int);
int screenPlanePut(void);
int selGridClear(void);
int selInit(void);
int sndSeCursor(void);
int sndStagePackLoad(int);
int sprPutAlpha(int, float);
int sprPutCropV(int, int, float, float, float);
int sprSet109Free(void);
int sprSet163Free(int);
int sprSet163Load(int);
int sseleBarDraw(int, int, float, float, float);
int sseleGridDraw(int, int, int, int, int, int);
int sseleScanlines(void);
int sseleSlotEntry(int);
int stageExtraTexFree(void);
int stageLoadTexStep(void);
int stagePolyLoad(void);
int stageReloadBegin(void);
int stageSelFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int stageSelIconPut(int, int, int, int, int, int, int);
int stageSelMarkDraw(Stk4);
int strmBgmFadeOut(int, int);
int uniformTexRestore(int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
float zoneListSample(int, int, int, Stk3);
int FUN_8c0c194c(int a4, float f4);
int FUN_8c037f98(int a4, int a5, int a6, float f4, float f5, float f6);

int FUN_8c0c194c(int a4, float f4)
{
    int stk[35];
    register int t0;
    int t7;
    register int t8;
    register int t9;
    register int t30;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t85;
    register float u97;
    register float u99;
    register float u100;
    register int t103;
    register int t166;
    register int t126;
    register int t135;
    register int t145;
    int t168;
    register int t196;
    register int t197;
    register int t198;
    register int t199;
    register int t282;
    register int t206;
    register int t209;
    register int t222;
    register int t225;
    register int t238;
    register int t240;
    register int t241;
    register int t243;
    register int t247;
    register int t248;
    register int t256;
    register int t258;
    register int t259;
    register int t261;
    register int t265;
    register int t266;
    register int t284;
    register int t285;
    register int t309;
    register int t322;
    register int t327;
    register int t336;
    register int t337;
    register int t341;
    register int t342;
    register int t348;
    register int t349;
    register int t350;
    register int t351;
    register int t352;
    register int t353;
    register float u360;
    register float u361;
    register float u363;
    register float u383;
    register int t418;
    register int t422;
    register int t429;
    register int t454;
    register int t432;
    register int t435;
    register int t449;
    register int t442;
    register int t443;
    register int t10;
    register int t26;
    register int t27;
    register int t28;
    register int t34;
    register int t35;
    register int t37;
    register int t45;
    register int t47;
    register int t58;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    register int t72;
    register int t73;
    register int t75;
    register int t123;
    register int t132;
    register int t142;
    register int t152;
    register int t176;
    register int t190;
    register int t192;
    register int t194;
    register int t280;
    register int t275;
    register int t277;
    register int t218;
    register int t219;
    register int t215;
    register int t234;
    register int t235;
    register int t231;
    register int t252;
    register int t253;
    register int t271;
    register int t304;
    register float u354;
    register float u355;
    register float u356;
    register int t444;

    t0 = ((int (*)(int, int, int, float))(FUN_8c0eaf00))(0x0, 0xFF0800AC, 0x0, f4);
    camSetOrbit(0x600, 0x8000, 255.0f);
    *(Stk3 *)(((int)stk + 32)) = vecMake(0.0f, 0.0f, 0.0f);
    camSetEye();
    *(Stk3 *)(((int)stk + 32)) = vecMake(0.0f, 10.0f, 77.0f);
    camSetTarget();
    camMoveBegin(1.0f, 1.0f);
    *(float *)0x8C287A04 = 20.0f;
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    *(unsigned int *)(((int)stk + 44)) = 0x8C29B898;
    *(unsigned int *)(((int)stk + 48)) = 0x8C1852A0;
    t7 = 0x8C29B898;
    t8 = a4;
    t9 = 0x8C185298;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t9 + 0x0)))) != 0) {
            if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 44))) + 0x0))) + 0x10))) & 2) != 0) {
                t7 = (*(int *)0x8C37B78C);
                if ((t7 == 0) && ((t26 = (t7 == 0), t7 = 0x1E, t27 = *(int *)0x8C37B75C, (int)t27 > (int)t7) && (t28 = *(int *)0x8C1AC25C, t28 == -1))) {
                    t10 = 0x0;
                    t7 = (*(int *)0x8C287B3C);
                    t7 = (t7 | 0x400);
                    *(unsigned int *)0x8C287B3C = t7;
                    *(unsigned int *)0x8C37B798 = 0x1;
                    t30 = 0x8C37B798;
                    for (;;) {
                        if ((*(int *)((((t10 * 0x38) + 0x8C343264) + 0x30))) != -1) {
                            t8 = t10;
                            uniformTexRestore(t8);
                        } else {
                            t34 = t30;
                            t35 = t7;
                            t37 = t8;
                        }
                        t30 = t34;
                        t10 = (t10 + 0x1);
                        t7 = t35;
                        t8 = t37;
                        if ((int)t10 >= (int)0x4) {
                            break;
                        }
                    }
                    selGridClear();
                    t8 = 0x0;
                    for (;;) {
                        t7 = 0x8C343258;
                        t7 = (t7 + 0xC);
                        t7 = (t7 + t8);
                        *(unsigned int *)((t7 + 0x0)) = 0xFFFFFFFF;
                        t7 = 0x8C343258;
                        t7 = (t7 + 0xC);
                        t7 = (t7 + t8);
                        t8 = (t8 + 0x38);
                        *(unsigned short *)((t7 + 0x14)) = 0x0;
                        if ((unsigned int)t8 >= (unsigned int)0xE0) {
                            break;
                        }
                    }
                    t10 = 0x0;
                    for (;;) {
                        t7 = (*(short *)(((t10 << 1) + 0x8C185298)));
                        t7 = (unsigned short)t7;
                        if (((unsigned short)(*(short *)0x8C343262) & t7) != 0) {
                            t8 = t10;
                            sseleSlotEntry(t8);
                        } else {
                            t45 = t7;
                            t47 = t8;
                        }
                        t10 = (t10 + 0x1);
                        t7 = t45;
                        t8 = t47;
                        if ((int)t10 >= (int)0x4) {
                            break;
                        }
                    }
                }
            }
        }
        t7 = (*(int *)(((int)stk + 44)));
        t9 = (t9 + 0x2);
        t7 = (t7 + 0x4);
        *(unsigned int *)(((int)stk + 44)) = t7;
        if ((unsigned int)t9 < (unsigned int)(*(int *)(((int)stk + 48)))) continue;
        break;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x8C1852A0;
    t59 = t7;
    t60 = 0x8C1852A0;
    t61 = 0x8C29B898;
    t62 = 0x8C185298;
    for (;;) {
        if ((((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t62 + 0x0)))) != 0) && ((t65 = *(int *)((t61 + 0x0)), t66 = *(int *)((t65 + 0x10)), (t66 & 5) != 0) && ((t58 = 0x8C37B75C, t59 = 0x1E, t67 = *(int *)((t58 + 0x0)), (int)t67 > (int)t59) && (t68 = *(int *)0x8C1AC25C, t68 == -1)))) {
            t59 = 0x8C37B78C;
            t58 = (*(int *)((t59 + 0x0)));
            t58 = (t58 + 0x1);
            *(unsigned int *)((t59 + 0x0)) = t58;
            if (t58 == 1) {
                t59 = 0x8C0F5DF0;
                t60 = 0xAA9;
                nlsndSeqRequest(t60);
            } else {
                t72 = t58;
                t73 = t59;
                t75 = t60;
            }
            t58 = t72;
            t59 = t73;
            t60 = t75;
            t59 = 0x8C12333C;
            t60 = (*(int *)0x8C1AC1B0);
            t60 = (t60 << 2);
            t60 = (t60 + t59);
            t58 = (*(int *)((t60 + 0x0)));
            *(unsigned int *)0x8C1891F0 = t58;
            t58 = 0x8C1891E8;
            *(unsigned int *)((t58 + 0x0)) = (*(int *)((t60 + 0x0)));
        }
        t62 = (t62 + 0x2);
        t61 = (t61 + 0x4);
        if ((unsigned int)t62 >= (unsigned int)(*(int *)(((int)stk + 44)))) {
            break;
        }
    }
    t85 = *(int *)0x8C37B784;
    if (t85 != 0) {
        if (t85 == 1) {
            *(unsigned int *)0x8C37B760 = 0x0;
            stageReloadBegin();
            sprSet163Free((*(int *)0x8C1AC1B0));
            sprSet109Free();
            stageExtraTexFree();
        }
        u97 = *(float *)0x8C37B794;
        *(float *)0x8C37B794 = (u97 - 0.0299999993f);
        if ((-1.0f) > (u97 - 0.0299999993f)) {
            *(float *)0x8C37B794 = (-1.0f);
        }
        u99 = *(float *)0x8C37B794;
        u100 = (u99 + 1.0f);
        if ((u99 + 1.0f) > 1.0f) {
            u100 = 1.0f;
        }
        fadeScreenDraw(0x8C37B794, u100, 0.100000001f);
        t103 = ((int (*)(int, int, int))(FUN_8c0eaf00))(0x0, 0x0, 0x0);
        *(unsigned int *)0x8C37B784 = ((*(int *)0x8C37B784) + 0x1);
        if ((*(int *)0x8C37B790) == 0) {
            *(unsigned int *)0x8C37B790 = (stageLoadTexStep());
        }
        if ((*(int *)0x8C37B790) != 0) {
            *(unsigned int *)0x8C20D14C = (*(int *)0x8C20D154);
            *(unsigned int *)0x8C20D150 = 0x2;
            *(unsigned int *)0x8C301970 = 0x0;
            strmBgmFadeOut(0x2, 0x0);
        }
    } else {
        t123 = t85;
    }
    t166 = t123;
    if ((*(int *)0x8C37B78C) != 0) {
        t126 = *(int *)0x8C37B78C;
        *(unsigned int *)0x8C37B78C = (t126 + 0x1);
        if ((t126 + 0x1) == 2) {
            sndStagePackLoad(0x0);
        } else {
            t132 = t123;
        }
        if ((*(int *)0x8C37B788) == 0) {
            t135 = sndStagePackLoad(0x1);
            if (t135 == 99) {
                *(unsigned int *)0x8C37B788 = 0x1;
            }
        } else {
            t142 = t132;
        }
        if ((*(int *)0x8C37B788) == 1) {
            t145 = stagePolyLoad();
            if (t145 == 1) {
                *(unsigned int *)0x8C37B788 = 0x2;
            }
        } else {
            t152 = t142;
        }
        if ((*(int *)0x8C37B788) == 2) {
            *(unsigned int *)0x8C37B788 = 0x3;
            *(unsigned int *)0x8C37B784 = 0x1;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
        }
        t166 = t152;
    }
    t168 = *(int *)0x8C287B3C;
    *(unsigned int *)(((int)stk + 48)) = (0x400 & t168);
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFBFF);
    if ((*(int *)(((int)stk + 48))) != 0) {
        nlRenderTextureBegin(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16));
    } else {
        t176 = t166;
    }
    if ((int)(*(int *)0x8C37B784) >= (int)0x2) {
        t190 = 0x8C37B784;
        t192 = 0x2;
        t194 = t176;
    } else {
        *(Stk3 *)(((int)stk + 32)) = vecMake(356.0f, 82.0f, 1.0f);
        stageSelMarkDraw(*(Stk4 *)((int)stk + 32));
        sseleGridDraw(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4));
        *(Stk3 *)(((int)stk + 32)) = vecMake(444.0f, 42.0f, 0.00999999978f);
        stageSelIconPut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8));
        *(Stk3 *)(((int)stk + 32)) = vecMake(30.0f, 33.0f, 0.100000001f);
        stageSelFramePut(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
        *(unsigned int *)(((int)stk + 44)) = 0x3C008BE6;
        *(Stk3 *)(((int)stk + 32)) = vecMake(-5.0f, -16.0f, 1.0f);
        sseleBarDraw((*(int *)(((int)stk + 44))), 0x2, 361.0f, 1.0f, 0.5f);
        *(Stk3 *)(((int)stk + 32)) = vecMake(640.0f, 75.0f, 10.0f);
        *(Stk3 *)(((int)stk + 20)) = vecMake(0.0f, 75.0f, 10.0f);
        primLineH(0x1, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20));
        *(Stk3 *)(((int)stk + 32)) = vecMake(640.0f, 290.0f, 10.0f);
        *(Stk3 *)(((int)stk + 20)) = vecMake(0.0f, 290.0f, 10.0f);
        primLineH(0x1, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20));
        *(Stk3 *)(((int)stk + 32)) = vecMake(640.0f, 290.0f, 11.0f);
        primRectIncGradY(0x280, 0xBE, 0x78008BE6, 0x78008BE6, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12));
        sseleScanlines();
    }
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    t196 = t190;
    t197 = t192;
    t198 = t194;
    t199 = (0x400 & t168);
    for (;;) {
        t282 = t198;
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((((*(int *)(((int)stk + 44))) << 1) + 0x8C185298)))) == 0) {
            t280 = t197;
        } else {
            t197 = 0x8C37B78C;
            if ((*(int *)((t197 + 0x0))) != 0) {
                t275 = t197;
                t277 = t198;
            } else {
                t199 = 0x0;
                t198 = (*(int *)(((int)stk + 44)));
                t206 = padDirRepeat(t198, 0x80);
                if (t206 != 0) {
                    t196 = (*(int *)0x8C37B764);
                    t196 = (t196 + 0x1);
                    *(unsigned int *)0x8C37B764 = ((int)((int)t196 % (int)0x5));
                    for (;;) {
                        t209 = *(int *)0x8C37B768;
                        t197 = (*(int *)0x8C37B764);
                        t197 = (t197 << 2);
                        t197 = (t197 + (0x8C1AC160 + (((t209 << 2) + t209) << 2)));
                        t196 = (*(int *)((t197 + 0x0)));
                        if (t196 != 0) {
                            t215 = t196; break;
                        }
                        t196 = (*(int *)0x8C37B764);
                        t196 = (t196 + 0x1);
                        t199 = (t199 + 0x1);
                        *(unsigned int *)0x8C37B764 = ((int)((int)t196 % (int)0x5));
                        if ((int)t199 < (int)0x4) continue;
                        break;
                    }
                    t218 = t215;
                    t219 = t197;
                }
                t196 = t218;
                t197 = t219;
                t198 = (*(int *)(((int)stk + 44)));
                t222 = padDirRepeat(t198, 0x40);
                if (t222 != 0) {
                    t196 = (*(int *)0x8C37B764);
                    t196 = (t196 + 0x4);
                    *(unsigned int *)0x8C37B764 = ((int)((int)t196 % (int)0x5));
                    for (;;) {
                        t225 = *(int *)0x8C37B768;
                        t197 = (*(int *)0x8C37B764);
                        t197 = (t197 << 2);
                        t197 = (t197 + (0x8C1AC160 + (((t225 << 2) + t225) << 2)));
                        t196 = (*(int *)((t197 + 0x0)));
                        if (t196 != 0) {
                            t231 = t196; break;
                        }
                        t196 = (*(int *)0x8C37B764);
                        t196 = (t196 + 0x4);
                        t197 = 0x4;
                        t199 = (t199 + 0x1);
                        *(unsigned int *)0x8C37B764 = ((int)((int)t196 % (int)0x5));
                        if ((int)t199 < (int)t197) continue;
                        break;
                    }
                    t234 = t231;
                    t235 = t197;
                }
                t196 = t234;
                t197 = t235;
                t198 = (*(int *)(((int)stk + 44)));
                t238 = padDirRepeat(t198, 0x10);
                if (t238 != 0) {
                    t240 = *(int *)0x8C37B768;
                    t241 = ((~(((~(t240 + 0x1)) + 0x1) & 0x1)) + 0x1);
                    if ((int)(t240 + 0x1) >= 0) {
                        t241 = ((t240 + 0x1) & 0x1);
                    }
                    *(unsigned int *)0x8C37B768 = t241;
                    for (;;) {
                        t243 = *(int *)0x8C37B768;
                        t197 = (*(int *)0x8C37B764);
                        t197 = (t197 << 2);
                        t197 = (t197 + (0x8C1AC160 + (((t243 << 2) + t243) << 2)));
                        t196 = (*(int *)((t197 + 0x0)));
                        if (t196 != 0) {
                            break;
                        }
                        t247 = *(int *)0x8C37B768;
                        t248 = ((~(((~(t247 + 0x1)) + 0x1) & 0x1)) + 0x1);
                        if ((int)(t247 + 0x1) >= 0) {
                            t248 = ((t247 + 0x1) & 0x1);
                        }
                        t197 = 0x1;
                        t199 = (t199 + 0x1);
                        *(unsigned int *)0x8C37B768 = t248;
                        if ((int)t199 < (int)t197) continue;
                        break;
                    }
                    t252 = t196;
                    t253 = t197;
                }
                t196 = t252;
                t197 = t253;
                t198 = (*(int *)(((int)stk + 44)));
                t256 = padDirRepeat(t198, 0x20);
                if (t256 != 0) {
                    t258 = *(int *)0x8C37B768;
                    t259 = ((~(((~(t258 + 0x1)) + 0x1) & 0x1)) + 0x1);
                    if ((int)(t258 + 0x1) >= 0) {
                        t259 = ((t258 + 0x1) & 0x1);
                    }
                    *(unsigned int *)0x8C37B768 = t259;
                    for (;;) {
                        t261 = *(int *)0x8C37B768;
                        t197 = (*(int *)0x8C37B764);
                        t197 = (t197 << 2);
                        t197 = (t197 + (0x8C1AC160 + (((t261 << 2) + t261) << 2)));
                        t196 = (*(int *)((t197 + 0x0)));
                        if (t196 != 0) {
                            break;
                        }
                        t265 = *(int *)0x8C37B768;
                        t266 = ((~(((~(t265 + 0x1)) + 0x1) & 0x1)) + 0x1);
                        if ((int)(t265 + 0x1) >= 0) {
                            t266 = ((t265 + 0x1) & 0x1);
                        }
                        t197 = 0x1;
                        t199 = (t199 + 0x1);
                        *(unsigned int *)0x8C37B768 = t266;
                        if ((int)t199 < (int)t197) continue;
                        break;
                    }
                    t271 = t197;
                }
                t275 = t271;
            }
            t280 = t275;
            t282 = t277;
        }
        t196 = (*(int *)(((int)stk + 44)));
        t197 = t280;
        t198 = t282;
        t196 = (t196 + 0x1);
        *(unsigned int *)(((int)stk + 44)) = t196;
        if ((int)t196 < (int)0x4) continue;
        break;
    }
    t284 = *(int *)0x8C37B768;
    t285 = *(int *)0x8C37B764;
    *(unsigned int *)0x8C1AC1B0 = (((t284 << 2) + t284) + t285);
    if ((((t284 << 2) + t284) + t285) != (*(int *)0x8C1AC1B4)) {
        sndSeCursor();
        if ((*(int *)0x8C1AC25C) != (*(int *)0x8C1AC1B0)) {
            fileLoadClose();
        }
    }
    if (((*(int *)((0x8C1AED48 + ((*(int *)0x8C1AC1B0) << 2)))) == 0) && (t304 = *(int *)0x8C37B78C, t304 == 0)) {
        *(unsigned int *)0x8C1AC25C = (*(int *)0x8C1AC1B0);
        *(float *)0x8C1AC260 = 0.0f;
        *(float *)0x8C1AC264 = 0.0f;
        sprSet163Free((*(int *)0x8C1AC1B4));
        t309 = afsPartition1Load((*(int *)0x8C1AC1B0));
        if (t309 == 1) {
            sprSet163Load((*(int *)0x8C1AC1B0));
            *(unsigned int *)0x8C1AC25C = 0xFFFFFFFF;
        }
    }
    if ((int)(*(int *)0x8C37B784) >= (int)0x2) {
    } else {
        t322 = *(short *)0x8C1AC268;
        *(unsigned short *)0x8C1AC268 = (t322 + 0x300);
        if ((*(int *)0x8C37B78C) == 0) {
            *(unsigned int *)(((int)stk + 44)) = (((((int)((((nlSin((unsigned short)(t322 + 0x300))) / 3.0f) + 1.0f) * 90.0f) & 0xFF) << 16) << 8) | 0xFFE600);
        } else {
            t327 = 0x5A;
            if ((int)((int)((int)(*(int *)0x8C37B78C) % (int)0x6)) < (int)0x3) {
                t327 = 0x3C;
            }
            *(unsigned int *)(((int)stk + 44)) = ((((unsigned char)t327 << 16) << 8) | 0xFFE600);
        }
        t336 = *(int *)0x8C37B768;
        t337 = *(int *)0x8C37B764;
        *(float *)0x8C37B778 = (mathLerp((*(float *)0x8C37B778), (*(float *)((((((((t336 << 2) + t336) + t337) << 1) + (((t336 << 2) + t336) + t337)) << 2) + 0x8C1AC1B8))), 0.5f));
        t341 = *(int *)0x8C37B768;
        t342 = *(int *)0x8C37B764;
        *(float *)0x8C37B77C = (mathLerp((*(float *)0x8C37B77C), (*(float *)((((((((t341 << 2) + t341) + t342) << 1) + (((t341 << 2) + t341) + t342)) << 2) + 0x8C1AC1BC))), 0.5f));
        *(Stk3 *)(((int)stk + 32)) = vecMake((*(float *)0x8C37B778), (*(float *)0x8C37B77C), 6.0f);
        t348 = *(int *)(((int)stk + 44));
        t349 = primRectIncGradY(0x71, 0x53, t348, t348, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12));
        *(unsigned int *)(((int)stk + 44)) = 0x8C1AED70;
        t350 = t349;
        t351 = 0x8C1AED70;
        t352 = 0x0;
        t353 = 0x8C1AED48;
        for (;;) {
            if ((*(int *)((t353 + 0x0))) != 0) {
                t350 = (sprPutAlpha((0x8C37BF9C + t352), (*(float *)0x8C1AC260)));
                t350 = 0x8C0C22A4;
                u360 = *(float *)((t350 + 0x0));
                t350 = 0x8C0C22A8;
                u361 = *(float *)((t350 + 0x0));
                t350 = 0x8C0C22AC;
                *(Stk3 *)(((int)stk + 32)) = vecMake((*(float *)((t350 + 0x0))), u361, u360);
                u363 = *(float *)0x8C1AC264;
                t350 = (sprPutCropV((0x8C37BC7C + t352), 0x0, u363, 1.0f, u363));
                t350 = 0x8C0C22B8;
                u355 = (*(float *)0x8C1AC260);
                u356 = (*(float *)((t350 + 0x0)));
                t350 = 0x8C0C22BC;
                u355 = (u355 + u356);
                *(float *)0x8C1AC260 = u355;
                u354 = (*(float *)0x8C1AC264);
                u355 = (*(float *)((t350 + 0x0)));
                u354 = (u354 + u355);
                *(float *)0x8C1AC264 = u354;
                u354 = (*(float *)0x8C1AC260);
                if (u354 > 1.0f) {
                    *(float *)0x8C1AC260 = 1.0f;
                }
                u356 = (*(float *)0x8C1AC264);
                if (u356 > 1.0f) {
                    *(float *)0x8C1AC264 = 1.0f;
                }
            }
            t351 = (*(int *)(((int)stk + 44)));
            t353 = (t353 + 0x4);
            t352 = (t352 + 0x50);
            if ((unsigned int)t353 >= (unsigned int)t351) {
                break;
            }
        }
        *(Stk3 *)(((int)stk + 32)) = vecMake(613.0f, 81.0f, 15.0f);
        primRectIncGradY(0x100, 0xBF, 0xFF000000, 0xFF000000, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12));
        *(Stk3 *)(((int)stk + 32)) = vecMake(624.0f, 94.0f, 16.0f);
        primRectIncGradY(0x100, 0xBF, 0x80000000, 0x80000000, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12));
        *(unsigned int *)(((int)stk + 44)) = (((((int)((*(float *)0x8C1AC260) * 128.0f) & 0xFF) << 16) << 8) | 0x0);
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x18);
        *(Stk3 *)((((int)stk + 32) + 0x18)) = vecMake(347.0f, 198.0f, 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        primRectInc(0x108, 0x4D, (*(int *)(((int)stk + 44))), *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
        *(float *)(((((int)stk + 32) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x18) + 0x8))) - 0.100000001f);
        u383 = *(float *)0x8C1AC260;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        primRectFrame(0x108, 0x4D, 0x1, ((((0xFF & (int)(u383 * 250.0f)) << 16) << 8) | 0xC80000), *(Stk3 *)(((int)stk + 4)));
        *(unsigned short *)0x8C37B76C = (angLerp((*(short *)0x8C37B76C), (-(*(short *)((((*(int *)0x8C1AC1B0) << 2) + 0x8C123366)))), 0.100000001f));
        *(unsigned short *)0x8C37B76E = (angLerp((*(short *)0x8C37B76E), (-(*(short *)((((*(int *)0x8C1AC1B0) << 2) + 0x8C123364)))), 0.100000001f));
        nlPushMatrix(0x0);
        nlTranslate(-11.0f, 3.0f, 0.0f);
        nlPushMatrix(0x0);
        nlRotateAX((int)((float)(*(short *)0x8C37B76C) * 0.300000012f));
        nlRotateAY((*(short *)0x8C37B76E));
        nlObjPut(0xC9B0A88);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-11.0f, 3.0f, 0.0f);
        nlPushMatrix(0x0);
        nlObjPut(0xC9B0000);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
    }
    t418 = *(int *)0x8C1AC1B0;
    *(float *)0x8C37B770 = (mathLerp((*(float *)0x8C37B770), (*(float *)(((((t418 << 1) + t418) << 2) + 0x8C12338C))), 0.100000001f));
    t422 = *(int *)0x8C1AC1B0;
    *(float *)0x8C37B774 = (mathLerp((*(float *)0x8C37B774), (*(float *)(((((t422 << 1) + t422) << 2) + 0x8C123390))), 0.100000001f));
    *(unsigned int *)0x8C1AC1B4 = (*(int *)0x8C1AC1B0);
    *(unsigned int *)0x8C37B75C = ((*(int *)0x8C37B75C) + 0x1);
    t429 = *(int *)(((int)stk + 48));
    t454 = (nlExecuteEvent(0x8C37B75C));
    if (t429 != 0) {
        nlRenderTextureEnd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16));
        screenPlanePut();
        t432 = 0x0;
        for (;;) {
            t435 = (t432 << 2);
            if ((*(int *)((0x8C1AED48 + (t432 << 2)))) != 0) {
                t435 = (sprSet163Free(t432));
            }
            t432 = (t432 + 0x1);
            if ((int)t432 >= (int)0xA) {
                break;
            }
        }
        t449 = t435;
        if ((*(int *)0x8C37B798) != 0) {
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 44) + 0x8)) = *(struct mv4 *)(0x8C1234A4); }
            stageExtraTexFree();
            sprSet109Free();
            t442 = *(int *)0x8C287ADC;
            if (t442 == 2) {
                *(unsigned int *)0x8C20D150 = 0x0;
                t444 = t442;
            } else {
                t443 = selInit();
                *(unsigned int *)0x8C20D150 = 0x1;
                t444 = t443;
            }
            t449 = t444;
        }
        t454 = t449;
    }
    return t454;
}

int FUN_8c037f98(int a4, int a5, int a6, float f4, float f5, float f6)
{
    int stk[53];
    register int t347;
    register int t348;
    register int t1;
    register int t2;
    register int t5;
    register float u14;
    register int t15;
    register int t18;
    register int t27;
    register float u33;
    register int t37;
    register int t38;
    register int t40;
    register float u47;
    register float t67;
    register float t90;
    register int t110;
    register float u146;
    register float u186;
    register float u187;
    register float u190;
    register int t193;
    register float u195;
    register float u196;
    register float u198;
    register int t223;
    register int t226;
    register int t227;
    register int t235;
    register int t238;
    register int t259;
    register int t260;
    register int t261;
    register int t264;
    register float u265;
    register int t266;
    register float u267;
    register float u273;
    register int t276;
    register float u278;
    register float u279;
    register float u281;
    register float u299;
    register float u300;
    register float u306;
    register int t309;
    register float u311;
    register float u312;
    register float u314;
    register float u315;
    register float u336;
    register float u337;
    register float t358;
    register int t370;
    register float t417;
    register float u443;
    register float u444;
    register int t526;
    register int t533;
    register int t586;
    register int t534;
    register int t535;
    register int t542;
    register int t543;
    register float u549;
    register float u551;
    register float u553;
    register float u555;
    register int t557;
    register int t12;
    register float u407;
    register int t416;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x70)) = *(struct mv3 *)((0x33C + a4)); }
    t347 = a5;
    t348 = a6;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((a4 + 0x14));
            if ((int)t1 >= (int)(*(int *)(((((((t2 << 2) << 1) + t2) << 2) + 0x8C10C6B0) + 0xC)))) {
                break;
            }
            t5 = *(int *)((((t1 * 0x78) + (0x3BC + a4)) + 0x38));
            t1 = (t1 + 0x1);
            if ((t5 & 0x1) != 0) {
                *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
            }
        }
        if ((*(int *)(((int)stk + 28))) == 0) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x7C)) = *(struct mv3 *)(0x8C1016D4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x64)) = *(struct mv3 *)(0x8C1016D4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x58)) = *(struct mv3 *)(0x8C1016D4); }
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            u14 = 0.0f;
            for (;;) {
                t15 = *(int *)((a4 + 0x14));
                if ((int)(*(int *)(((int)stk + 24))) >= (int)(*(int *)(((((((t15 << 2) << 1) + t15) << 2) + 0x8C10C6B0) + 0xC)))) {
                    break;
                }
                t18 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 20)) = (t18 * 0x78);
                t12 = (nlAddVector((((int)stk + 16) + 0x7C), (((t18 * 0x78) + (0x3BC + a4)) + 0x18)));
                t12 = (nlAddVector((((int)stk + 16) + 0x64), (((0x3BC + a4) + (*(int *)(((int)stk + 20)))) + 0x50)));
                t12 = (nlAddVector((((int)stk + 16) + 0x58), (((0x3BC + a4) + (*(int *)(((int)stk + 20)))) + 0x60)));
                t12 = 0x40;
                u14 = (u14 + ((*(float *)((((0x3BC + a4) + (*(int *)(((int)stk + 20)))) + t12)))));
                *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
            }
            t27 = *(int *)(((int)stk + 28));
            *(float *)(((int)stk + 36)) = (float)t27;
            *(float *)(((int)stk + 32)) = (1.0f / (float)t27);
            nlScaleVector((((int)stk + 16) + 0x7C), (((int)stk + 16) + 0x7C), (1.0f / (float)t27));
            nlScaleVector((((int)stk + 16) + 0x64), (((int)stk + 16) + 0x64), (*(float *)(((int)stk + 32))));
            nlScaleVector((((int)stk + 16) + 0x58), (((int)stk + 16) + 0x58), (*(float *)(((int)stk + 32))));
            u33 = *(float *)(((int)stk + 36));
            nlAddVector((0x33C + a4), (((int)stk + 16) + 0x7C));
            bodyPlacePoints((a4 + 0x18));
            t37 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 20)) = t37;
                t38 = *(int *)((a4 + 0x14));
                t37 = t38;
                t40 = (((t38 << 2) << 1) + t37);
                t37 = (*(int *)(((int)stk + 20)));
                if ((int)t37 >= (int)(*(int *)((((t40 << 2) + 0x8C10C6B0) + 0xC)))) {
                    break;
                }
                nlAddVector(((((*(int *)(((int)stk + 20))) * 0x78) + (0x3BC + a4)) + 0x24), (((int)stk + 16) + 0x7C));
                t37 = (*(int *)(((int)stk + 20)));
                t37 = (t37 + 0x1);
            }
            u47 = (*(float *)((a4 + 0x358)));
            u47 = u47 + 0.5f * (*(float *)(((((int)stk + 16) + 0x68) + 0x0)));
            *(float *)((a4 + 0x358)) = u47;
            nlAddVector((a4 + 0x18), (((int)stk + 16) + 0x64));
            *(float *)((a4 + 0x1C)) = 0.0f;
            nlScaleVector((((int)stk + 16) + 0x58), (((int)stk + 16) + 0x58), (160.0f / (u14 / u33)));
            nlAddVector((0x348 + a4), (((int)stk + 16) + 0x58));
            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 5) {
                if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
                    miniPointPopSpawn(0x64, *(Stk3 *)(((int)stk + 4)));
                }
                *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
            }
            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x64)); }
                t67 = vecLength(*(Stk3 *)(((int)stk + 4)));
                if ((*(int *)((a4 + 0x3F0))) == 1) {
                    if (t67 > 5.0f) {
                        nlsndSeqRequest(0x602A9);
                    } else {
                        if (t67 > 3.0f) {
                            nlsndSeqRequest(0x502A9);
                        } else {
                            nlsndSeqRequest(0x202A9);
                        }
                    }
                } else {
                    if (t67 > 0.100000001f) {
                        nlsndSeqRequest(0x202A9);
                    }
                }
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x64)); }
            t90 = vecLength(*(Stk3 *)(((int)stk + 4)));
            if (t90 > 0.200000003f) {
                if ((*(int *)((a4 + 0x3B4))) == 0xCB657D8) {
                    nlsndSeqRequest(0x902A9);
                }
                if ((*(int *)((a4 + 0x3B4))) == 0xCB67360) {
                    nlsndSeqRequest(0x902A9);
                }
                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 6) {
                    t110 = 0x1B02A9;
                    if ((*(int *)((a4 + 0x3F0))) == 1) {
                        t110 = 0x1A02A9;
                    }
                    nlsndSeqRequest(t110);
                }
            }
            *(unsigned int *)((a4 + 0x524)) = ((*(int *)((a4 + 0x524))) | 0x1);
        }
        if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 16) == 0) {
            if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) != 6) {
            } else {
                *(float *)((a4 + 0x418)) = 2.20000005f;
                if ((*(int *)0x8C287B44) != 7) {
                    if ((*(int *)(((((*(int *)((a4 + 0x3EC))) - 2) << 2) + 0x8C2FBF54))) == 0) {
                        u146 = (*(float *)((a4 + 0x348)));
                        u146 = u146 + 2.20000005f * ((float)((((*(int *)0x8C287C60) == 0)) ? 1 : 0) * (*(float *)0x8C23D204));
                        *(float *)((a4 + 0x348)) = u146;
                    }
                }
                if (-108.849998f > (*(float *)((a4 + 0x344)))) {
                    if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
                        miniPointPopSpawn(0x12C, *(Stk3 *)(((int)stk + 4)));
                    }
                    *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
                }
                u186 = *(float *)((a4 + 0x33C));
                u187 = (-u186);
                if (!(0.0f > u186)) {
                    u187 = u186;
                }
                if (u187 > 31.1500015f) {
                    u190 = *(float *)((a4 + 0x33C));
                    t193 = (u190 > 0.0f) - (0.0f > u190);
                    u195 = *(float *)((a4 + 0x350));
                    u196 = (-u195);
                    if (!(0.0f > u195)) {
                        u196 = u195;
                    }
                    *(float *)((a4 + 0x350)) = ((float)t193 * (u196 + 10.0f));
                    u198 = *(float *)((a4 + 0x33C));
                    *(float *)((a4 + 0x33C)) = ((float)((u198 > 0.0f) - (0.0f > u198)) * 31.1500015f);
                }
            }
            if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 16) == 0) {
                t223 = *(int *)((a4 + 0x14));
                *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((((t223 << 2) << 1) + t223) << 2) + 0x8C10C6B0) + 0x8)));
                t226 = 0x0;
                for (;;) {
                    t227 = *(int *)((a4 + 0x14));
                    if ((int)t226 >= (int)(*(int *)(((((((t227 << 2) << 1) + t227) << 2) + 0x8C10C6B0) + 0xC)))) {
                        break;
                    }
                    *(unsigned int *)(((int)stk + 20)) = (t226 * 0x78);
                    colliObjEntry(((t226 * 0x78) + (0x3BC + a4)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x3BC + a4) + (*(int *)(((int)stk + 20))))) = *(struct mv3 *)((0x33C + a4)); }
                    nlPushUnitMatrix();
                    mtxMultiKeepPos((0x368 + a4));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x88 + ((int)stk + 16))) = *(struct mv3 *)(((((t226 << 2) + t226) << 2) + (*(int *)(((int)stk + 28))))); }
                    nlCalcPoint((0x88 + ((int)stk + 16)), (0x88 + ((int)stk + 16)));
                    t235 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 24)) = ((0x3BC + a4) + t235);
                    nlAddVector3op((((0x3BC + a4) + t235) + 0xC), ((0x3BC + a4) + t235), (0x88 + ((int)stk + 16)));
                    nlPopMatrix(0x1);
                    t238 = *(int *)(((int)stk + 20));
                    *(unsigned int *)(((int)stk + 24)) = ((0x3BC + a4) + t238);
                    nlSubVector3op(((*(int *)(((int)stk + 24))) + 0x44), ((*(int *)(((int)stk + 24))) + 0xC), (((0x3BC + a4) + t238) + 0x24));
                    t226 = (t226 + 0x1);
                }
            }
        }
        t259 = 0x0;
        t260 = a5;
        for (;;) {
            t261 = *(int *)((a4 + 0x14));
            if ((int)t259 >= (int)(*(int *)(((((((t261 << 2) << 1) + t261) << 2) + 0x8C10C6B0) + 0xC)))) {
                break;
            }
            t260 = (t259 * 0x78);
            t260 = (t260 + (0x3BC + a4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t260 + 0x24)) = *(struct mv3 *)((t260 + 0xC)); }
            t259 = (t259 + 0x1);
        }
        t264 = *(int *)((a4 + 0x14));
        u265 = *(float *)((a4 + 0x33C));
        t266 = *(int *)(((((((t264 << 2) << 1) + t264) << 2) + 0x8C10C6B0) + 0x8));
        u267 = (-u265);
        if (!(0.0f > u265)) {
            u267 = u265;
        }
        if (u267 > ((float)(*(int *)((((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8) + 0x0))) - (*(float *)((t266 + 0xC))))) {
            u273 = *(float *)((a4 + 0x33C));
            t276 = (u273 > 0.0f) - (0.0f > u273);
            u278 = *(float *)((a4 + 0x350));
            u279 = (-u278);
            if (!(0.0f > u278)) {
                u279 = u278;
            }
            *(float *)((a4 + 0x350)) = ((float)t276 * (u279 + 10.0f));
            u281 = *(float *)((a4 + 0x33C));
            *(float *)((a4 + 0x33C)) = ((float)((u281 > 0.0f) - (0.0f > u281)) * ((float)(*(int *)((((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8) + 0x0))) - (*(float *)((t266 + 0xC)))));
        }
        u299 = *(float *)((a4 + 0x344));
        u300 = (-u299);
        if (!(0.0f > u299)) {
            u300 = u299;
        }
        if (u300 > ((float)(*(int *)((((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8) + 0x4))) - (*(float *)((t266 + 0xC))))) {
            u306 = *(float *)((a4 + 0x344));
            t309 = (u306 > 0.0f) - (0.0f > u306);
            u311 = *(float *)((a4 + 0x348));
            u312 = (-u311);
            if (!(0.0f > u311)) {
                u312 = u311;
            }
            u314 = ((float)(-t309) * u312);
            *(float *)((a4 + 0x348)) = (u314 * 0.5f);
            u315 = *(float *)((a4 + 0x344));
            *(float *)((a4 + 0x344)) = ((float)((u315 > 0.0f) - (0.0f > u315)) * ((float)(*(int *)((((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8) + 0x4))) - (*(float *)((t266 + 0xC)))));
        }
        if ((*(float *)((a4 + 0x344))) > (-(*(float *)((t266 + 0xC))))) {
            u336 = *(float *)((a4 + 0x348));
            u337 = (-u336);
            if (!(0.0f > u336)) {
                u337 = u336;
            }
            *(float *)((a4 + 0x348)) = (-u337);
            *(float *)((a4 + 0x344)) = (-(*(float *)((t266 + 0xC))));
        }
        t347 = 0x8C1D11B8;
        t348 = 0x8C1891E8;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
    t358 = zoneListSample((0x88 + ((int)stk + 4)), t347, t348, *(Stk3 *)(((int)stk + 4)));
    nlPushMatrix(0x0);
    if ((*(int *)0x8C287C60) == 0) {
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x18);
        bodyStep((a4 + 0x18), 0x0, 0x0, 0x0, (((int)stk + 16) + 0x18), t358);
        nlLoadMatrix((((int)stk + 16) + 0x18));
    } else {
        nlTranslate((*(float *)((a4 + 0x33C))), (*(float *)((a4 + 0x340))), (*(float *)((a4 + 0x344))));
        nlMultiMatrix((0x368 + a4));
    }
    t370 = *(int *)((a4 + 0x14));
    if (((*(int *)(((((((t370 << 2) << 1) + t370) << 2) + 0x8C10C6B0) + 0x20))) & 0x1) != 0) {
        nlObjPutCheapEnvMap((*(int *)((a4 + 0x3B4))));
    }
    if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 1) {
        nlObjPutTrnsl((*(int *)((a4 + 0x3B4))), 0.5f);
    } else {
        nlObjPut((*(int *)((a4 + 0x3B4))));
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x33C))), 0.109999999f, (*(float *)((a4 + 0x344))));
    miniTargetDraw((0x368 + a4), 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
    nlPopMatrix(0x1);
    if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 2) {
        if (((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) != 1) && (u407 = *(float *)((a4 + 0x37C)), !(0.5f > u407))) {
            if (((int)(*(int *)(((*(int *)0x8C2FBEF0) + 0x20))) < (int)0x2) && (t416 = *(int *)0x8C291F78, (t416 & 0x2) == 0)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x348 + a4)); }
                t417 = vecLength(*(Stk3 *)(((int)stk + 4)));
                if (t417 > 1.0f) {
                    *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x2;
                } else {
                    *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x0;
                }
            } else {
                { struct mv16 { int w[16]; }; *(struct mv16 *)((0x368 + a4)) = *(struct mv16 *)(0x8C2879B8); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x354 + a4)) = *(struct mv3 *)(0x8C1016D4); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x348 + a4)) = *(struct mv3 *)(0x8C1016D4); }
            }
        } else {
            *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
        }
    }
    if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 0) {
        u443 = *(float *)((a4 + 0x33C));
        u444 = (-u443);
        if (!(0.0f > u443)) {
            u444 = u443;
        }
        if (!(u444 > 41.1500015f)) {
            if (!(-118.849998f > (*(float *)((a4 + 0x344))))) {
                if ((*(float *)((a4 + 0x344))) > 0.0f) {
                    if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 0) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
                        miniPointPopSpawn(0x64, *(Stk3 *)(((int)stk + 4)));
                    }
                    *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
                }
            } else {
                if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
                    miniPointPopSpawn(0x64, *(Stk3 *)(((int)stk + 4)));
                }
                *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
            }
        } else {
            if ((*(int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2)))) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
                miniPointPopSpawn(0x64, *(Stk3 *)(((int)stk + 4)));
            }
            *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x1;
        }
    }
    if (((*(int *)((a4 + 0x524))) & 0x2) != 0) {
        *(unsigned int *)((a4 + 0x524)) = ((*(int *)((a4 + 0x524))) & 0xFFFFFFFD);
        t526 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t526 + 0x8)) = ((*(int *)((t526 + 0x8))) & 0xFFFFFFEF);
    }
    t533 = *(int *)(((*(int *)0x8C2FBEF0) + 0x8));
    t586 = t533;
    if ((t533 & 16) == 0) {
    } else {
        t534 = *(int *)0x8C2FBEF0;
        t535 = *(int *)((t534 + 0x4));
        *(unsigned int *)((t534 + 0x28)) = ((int)((int)((*(int *)((t534 + 0x28))) + 0x1) % (int)((*(int *)((((t535 * 0x64) + 0x8C10BB08) + 0x58))) * (*(int *)((((t535 * 0x64) + 0x8C10BB08) + 0x5C))))));
        t542 = *(int *)(((*(int *)0x8C2FBEF0) + 0x4));
        t543 = *(int *)(((*(int *)0x8C2FBEF0) + 0x28));
        *(unsigned int *)(((int)stk + 20)) = ((t543 * 0x1C) + (*(int *)((((t542 * 0x64) + 0x8C10BB08) + 0x60))));
        if (((int)((int)t543 % (int)(*(int *)((((t542 * 0x64) + 0x8C10BB08) + 0x58))))) == 0) {
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)0x8C2FBEF0) + 0x2C);
            u549 = (-1.0f);
            u549 = u549 + (1.0f + 1.0f) * (nlRandom());
            u551 = *(float *)(((*(int *)(((int)stk + 20))) + 0x14));
            *(float *)(((int)stk + 12)) = (u549 * u551);
            u553 = (-1.0f);
            u553 = u553 + (1.0f + 1.0f) * (nlRandom());
            u555 = *(float *)(((*(int *)(((int)stk + 20))) + 0xC));
            t557 = (*(int *)(((int)stk + 16)));
            *(int *)((int)stk + 12) = t557;
            *(Stk3 *)(t557) = vecMake((u553 * u555), 0.0f, (u549 * u551));
            *(volatile int *)(((int)stk + 16));
        }
        nlAddVector3op((0x33C + a4), (*(int *)(((int)stk + 20))), ((*(int *)0x8C2FBEF0) + 0x2C));
        nlPushUnitMatrix();
        nlRotateAY((int)(*(float *)(((*(int *)(((int)stk + 20))) + 0x10))));
        nlCalcPoint((0x33C + a4), (0x33C + a4));
        nlPopMatrix(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x33C + a4)); }
        miniTargetInit(a4, (*(int *)((a4 + 0x3EC))), *(Stk3 *)(((int)stk + 4)));
        *(unsigned int *)((a4 + 0x524)) = ((*(int *)((a4 + 0x524))) & 0xFFFFFFFE);
        *(unsigned int *)((0x8C2FBF54 + (((*(int *)((a4 + 0x3EC))) - 2) << 2))) = 0x0;
        *(unsigned int *)((a4 + 0x524)) = (0x2 | (*(int *)((a4 + 0x524))));
        t586 = 0x524;
    }
    return t586;
}
