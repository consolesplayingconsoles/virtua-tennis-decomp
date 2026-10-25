/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
int charaModelCount(int);
int charaTexCount(int);
int charaTexLoad(int, int);
int circuitDrawBar(float);
int circuitNumDraw(int, int, int, float, float, float);
int cpuAimPointSet(int, int, float, float);
int entryCountJoined(Stk2);
int entryGetColorId(int);
int entryIsVersus(void);
int gameModeSet(int, int, int);
int menuDimScreen(int);
int menuResultDraw(int, int, int, float);
int miniPlacePlayers(void);
int modelSwapMaterial(int, int, int);
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int muneTexLoad(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLineSetDiv(float);
int nlLoadMatrix(int);
int nlLoadTextureMem(int, int, int);
int nlObjPut(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutLoadTextureCallBack(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetCommonTextureOffset(int);
int nlSetDummyTextureParameter(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSetTextureParameter(int, int);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int primVertexSet(int, int, int, int, int);
int resultFlagsClear(void);
int sklDrawNodeOne(int);
int sndSeCursor(void);
int sndSeDecide(void);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffLookAtBall(int, int, int);
int strmBgmPlay(int);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int uniformTexLoad(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int miniRoundStart(int a4, int a5, int a6, int a7);
int primFrameCorners(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int circuitDrawGameInfo(void);
int menuResultExec(int a4);
int cpuSglAimAddLv23(int a4, int a5);
int uniformLoadStep(void);
int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8);
int primRectFrame(int a4, int a5, int a6, int a7);
int ballBoyPoseRun(int a4);
int standSort(int a4, int a5);

int miniRoundStart(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t6;
    int t9;
    int t12;
    float u21;
    int t24;
    int t22;
    int t27;
    int t31;
    int t40;
    int t115;
    int t117;
    int t119;
    int t123;
    int t133;
    int t142;
    int t144;
    int t146;
    int t148;
    int t207;
    int t208;
    int t116;
    int t137;
    int t143;

    t0 = *(int *)0x8C2FBEF0;
    if ((*(int *)((t0 + 0x20))) == 2) {
        *(unsigned int *)((t0 + 0x20)) = 0x1;
    }
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
    t4 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t4 + 0x8)) = ((*(int *)((t4 + 0x8))) & 0xFFFFFFDF);
    t6 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t6 + 0x8)) = ((*(int *)((t6 + 0x8))) | 0x10);
    *(unsigned int *)0x8C2FC0C8 = 0x0;
    t9 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t9 != 3) {
        if (t9 != 1) {
            if (t9 != 2) {
                if (t9 == 4) {
                    *(float *)0x8C2895E4 = 0.0f;
                    *(float *)0x8C28886C = 0.0f;
                    *(float *)0x8C2895EC = -50.0f;
                    *(unsigned int *)0x8C287B14 = 0x0;
                    *(unsigned int *)0x8C287B10 = 0x0;
                } else {
                    if (t9 == 0) {
                        *(float *)0x8C2895E4 = 0.0f;
                        *(float *)0x8C28886C = 0.0f;
                        *(float *)0x8C288874 = 64.0f;
                        *(float *)0x8C2895EC = -79.2333298f;
                        *(unsigned int *)0x8C287B14 = 0x0;
                        *(unsigned int *)0x8C287B10 = 0x0;
                        if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) != 0) {
                        } else {
                            t12 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t12 + 0x8)) = (0xFFFFFFEF & (*(int *)((t12 + 0x8))));
                        }
                    } else {
                        if (t9 == 5) {
                            *(unsigned int *)(((0x24 + (*(int *)0x8C2FBEF0)) + 0x0)) = (int)((nlRandom()) * 10.0f);
                            u21 = *(float *)0x8C2895E4;
                            t24 = 0x1;
                            if (u21 > 0.0f) {
                            } else {
                                t22 = 0x0;
                                if (0.0f > u21) {
                                    t22 = 0xFFFFFFFF;
                                }
                                t24 = t22;
                            }
                            t27 = *(int *)(((*(int *)0x8C2FBEF0) + 0x24));
                            *(float *)0x8C2895E4 = ((float)t24 * (*(float *)(((((t27 << 2) + t27) << 2) + 0x8C10B980))));
                            *(unsigned int *)0x8C287B14 = 0x0;
                            *(unsigned int *)0x8C287B10 = 0x0;
                            if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) == 0) {
                                t31 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t31 + 0x8)) = (0xFFFFFFEF & (*(int *)((t31 + 0x8))));
                            }
                        } else {
                            if (t9 == 6) {
                                *(float *)0x8C2895E4 = 0.0f;
                                *(float *)0x8C2895EC = -118.849998f;
                                *(unsigned int *)0x8C287B14 = 0x0;
                                *(unsigned int *)0x8C287B10 = 0x0;
                                if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) == 0) {
                                    t40 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t40 + 0x8)) = (0xFFFFFFEF & (*(int *)((t40 + 0x8))));
                                }
                            } else {
                                if (t9 == 7) {
                                    *(float *)0x8C2895E4 = 0.0f;
                                    *(float *)0x8C28886C = 0.0f;
                                    *(unsigned int *)0x8C287B14 = 0x0;
                                    *(unsigned int *)0x8C287B10 = 0x0;
                                    motionSet(0x8C288AFC, 0x29DE0, 0x1, 0x12755C, ((*(int *)((((*(int *)0x8C289754) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873D0)), 1.0f);
                                    *(unsigned int *)0x8C28983C = 0x8C01DE1A;
                                }
                            }
                        }
                    }
                }
            } else {
                *(float *)0x8C2895E4 = 0.0f;
                *(unsigned int *)0x8C287B14 = 0x0;
                *(unsigned int *)0x8C287B10 = 0x0;
                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) == 1) {
                    t115 = *(int *)0x8C2FC158;
                    if ((t115 != 10) && (t116 = *(int *)0x8C2FC154, (t116 + t115) != 10)) {
                        t117 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t117 + 0x8)) = (0xFFFFFFEF & (*(int *)((t117 + 0x8))));
                        t119 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t119 + 0x8)) = (0x200 | (*(int *)((t119 + 0x8))));
                        *(float *)0x8C28886C = ((*(float *)0x8C28886C) * (-1.0f));
                    } else {
                        *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x28)) = 0xFFFFFFFF;
                        t123 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t123 + 0x8)) = ((*(int *)((t123 + 0x8))) & 0xFFFFFDFF);
                    }
                } else {
                    t133 = *(int *)(((*(int *)0x8C2FBEF0) + 0x10));
                    if ((((((int)((unsigned int)((int)((unsigned int)(t133 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t133 - 1))) ? 1u : 0u))) >> 1) & 0x1) == 0) && ((t133 != 2) || (t137 = *(int *)0x8C2FC154, t137 != 10))) {
                        *(float *)0x8C28886C = ((*(float *)0x8C28886C) * (-1.0f));
                    }
                    t142 = *(int *)(((*(int *)0x8C2FBEF0) + 0x10));
                    if (((0x1 & t142) == 0) && ((t142 != 2) || (t143 = *(int *)0x8C2FC154, t143 != 10))) {
                        t144 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t144 + 0x8)) = (0xFFFFFFEF & (*(int *)((t144 + 0x8))));
                        t146 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t146 + 0x8)) = (0x200 | (*(int *)((t146 + 0x8))));
                    } else {
                        t148 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t148 + 0x8)) = ((*(int *)((t148 + 0x8))) & 0xFFFFFDFF);
                    }
                }
            }
        } else {
            *(float *)0x8C28886C = 0.0f;
            *(unsigned int *)0x8C287B14 = 0x0;
            *(unsigned int *)0x8C287B10 = 0x0;
        }
    } else {
        *(float *)0x8C2895E4 = 0.0f;
        *(float *)0x8C28886C = 0.0f;
        *(unsigned int *)0x8C287B14 = 0x0;
        *(unsigned int *)0x8C287B10 = 0x0;
    }
    miniPlacePlayers();
    t207 = *(int *)0x8C2FBEF0;
    t208 = *(int *)((t207 + 0x8));
    *(unsigned int *)((t207 + 0x8)) = (t208 & 0xFFFFF7FF);
    return (t208 & 0xFFFFF7FF);
}


int circuitDrawGameInfo(void)
{
    int t8;
    int t15;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    float u23;
    float u102;
    int t105;

    sprSheetSet(0x8C109920);
    *(unsigned int *)0x8C287658 = (*(int *)((0x8C124A40 + ((*(int *)0x8C2FBE80) << 2))));
    sprSheetPut(0x0, 114.0f, 76.0f, 0.0799999982f, (*(float *)0x8C2FBE90));
    *(unsigned int *)0x8C2FBE18 = (*(int *)((0x8C124A40 + ((*(int *)0x8C2FBE80) << 2))));
    *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE90);
    t8 = *(int *)0x8C2FBE1C;
    circuitNumDraw((*(int *)((((*(int *)(((((((t8 << 2) + t8) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) * 0x64) + 0x8C10BB4C))), 0x0, 0x8C159C80, 397.0f, 115.0f, 0.0700000003f);
    *(unsigned int *)0x8C2FBE18 = (*(int *)((0x8C124A40 + ((*(int *)0x8C2FBE80) << 2))));
    t15 = *(int *)0x8C2FBE1C;
    t17 = *(int *)(((((((t15 << 2) + t15) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
    t19 = (int)((int)(*(int *)((((t17 * 0x64) + 0x8C10BB08) + 0x4C))) / (int)0x3C);
    t20 = *(int *)((((t17 * 0x64) + 0x8C10BB08) + 0x48));
    t21 = *(int *)((((t17 * 0x64) + 0x8C10BB08) + 0x50));
    t22 = *(int *)((((t17 * 0x64) + 0x8C10BB08) + 0x40));
    u23 = *(float *)0x8C2FBE90;
    if (t22 != 0) {
        if (t22 != 1) {
            if (t22 != 2) {
                if (t22 != 3) {
                    if (t22 != 4) {
                        if (t22 != 5) {
                            if (t22 == 6) {
                                *(float *)0x8C2FBE14 = u23;
                                circuitNumDraw(t19, 0x0, 0x8C159C58, (*(float *)0x8C034410), (*(float *)0x8C03440C), 0.0700000003f);
                            } else {
                                if (t22 == 7) {
                                    *(float *)0x8C2FBE14 = u23;
                                    circuitNumDraw(t19, 0x0, 0x8C159C58, (*(float *)0x8C034414), 352.0f, 0.0700000003f);
                                }
                            }
                        } else {
                            *(float *)0x8C2FBE14 = u23;
                            circuitNumDraw(t20, 0x0, 0x8C159C58, 296.0f, 316.0f, 0.0700000003f);
                        }
                    } else {
                        *(float *)0x8C2FBE14 = u23;
                        circuitNumDraw(t19, 0x0, 0x8C159C58, 355.0f, 320.0f, 0.0700000003f);
                    }
                } else {
                    *(float *)0x8C2FBE14 = u23;
                    circuitNumDraw(t21, 0x0, 0x8C159C58, 417.0f, 345.0f, 0.0700000003f);
                    *(unsigned int *)0x8C2FBE18 = (*(int *)((0x8C124A40 + ((*(int *)0x8C2FBE80) << 2))));
                    *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE90);
                    circuitNumDraw(t20, 0x0, 0x8C159C58, 264.0f, 311.0f, 0.0700000003f);
                }
            } else {
                *(float *)0x8C2FBE14 = u23;
                circuitNumDraw(0x5, 0x0, 0x8C159C58, 352.0f, 298.0f, 0.0700000003f);
                *(unsigned int *)0x8C2FBE18 = (*(int *)((0x8C124A40 + ((*(int *)0x8C2FBE80) << 2))));
                *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE90);
                circuitNumDraw(((int)((int)t21 / (int)0x14)), 0x0, 0x8C159C58, 416.0f, 332.0f, 0.0700000003f);
            }
        } else {
            *(float *)0x8C2FBE14 = u23;
            circuitNumDraw(t19, 0x0, 0x8C159C58, 351.0f, 320.0f, 0.0700000003f);
        }
    } else {
        *(float *)0x8C2FBE14 = u23;
        circuitNumDraw(t19, 0x0, 0x8C159C58, 343.0f, 319.0f, 0.0700000003f);
    }
    u102 = *(float *)0x8C2FBE90;
    t105 = (circuitDrawBar((*(float *)0x8C2FBE90)));
    if (1.0f > u102) {
        *(float *)0x8C2FBE90 = ((*(float *)0x8C2FBE90) + (*(float *)0x8C034418));
        t105 = 0x8C034418;
    }
    return t105;
}

int menuResultExec(int a4)
{
    int t1;
    int t5;
    int t7;
    int t19;
    int t29;
    int t40;
    int t42;
    float u50;
    float u51;
    float u52;
    int t53;
    float u54;
    int t89;
    int t69;
    int t73;
    int t94;
    int t4;
    int t6;
    int t24;
    int t20;
    int t21;
    int t22;
    int t30;
    int t36;
    int t38;
    int t62;
    int t67;
    int t87;
    int t79;
    int stk[35];

    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)0x8C287C60 = 0x1;
        *(unsigned int *)0x8C1D1368 = 0x0;
        *(unsigned int *)0x8C40C280 = 0x0;
        *(unsigned int *)0x8C40C284 = 0x0;
        t1 = 0x1;
        for (;;) {
            nlsndSystemControl(t1, 0x1300A0, 0x0);
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
        }
        t94 = (strmVoiceQueueReset());
    } else {
        t5 = a4;
        t7 = 0x0;
        for (;;) {
            if ((*(int *)(((t7 << 2) + 0x8C287AE0))) == 0) {
                t5 = 0xD78;
                t5 = (t7 * t5);
                t5 = (t5 + 0x8C287D84);
                *(unsigned int *)(((int)stk + 20)) = t5;
                t5 = (*(int *)((t5 + 0xB64)));
                t6 = (padDirRepeat(t5, 0x10));
                t5 = (*(int *)(((int)stk + 20)));
                t5 = (*(int *)((t5 + 0xB64)));
                *(unsigned int *)(((int)stk + 16)) = (padDirRepeat(t5, 0x20));
                t5 = (*(int *)(((int)stk + 20)));
                t5 = (*(int *)((t5 + 0xB64)));
                t5 = (t5 << 2);
                t5 = (*(int *)((t5 + 0x8C29B898)));
                *(unsigned int *)(((int)stk + 28)) = t5;
                t5 = (*(int *)((t5 + 0x10)));
                t19 = (t5 & 0x8);
                t5 = (t5 & 0x5);
                *(unsigned int *)(((int)stk + 24)) = t19;
                *(unsigned int *)(((int)stk + 20)) = t5;
                if ((t6 == 0) && ((t20 = *(int *)(((int)stk + 16)), t4 = t20, t4 == 0) && ((t19 == 0) && (t21 = *(int *)(((int)stk + 20)), t4 = t21, t4 == 0)))) {
                    t22 = t4;
                } else {
                    t7 = 0x4;
                }
                t24 = t22;
            } else {
                t24 = t4;
            }
            t4 = t24;
            t7 = (t7 + 0x1);
            if ((int)t7 >= (int)0x4) {
                break;
            }
        }
        t29 = *(int *)0x8C1D1368;
        if ((((int)t29 < (int)0x2) && (t30 = *(int *)(((int)stk + 16)), t30 != 0)) || (((int)t29 > 0) && (t6 != 0))) {
            sndSeCursor();
        } else {
            t36 = t29;
        }
        t40 = 0x0;
        if (((int)(*(int *)0x8C1D1368) < (int)0x2) && (t38 = *(int *)(((int)stk + 16)), t38 != 0)) {
            t40 = 0x1;
        }
        t42 = 0x0;
        if (((int)(*(int *)0x8C1D1368) > 0) && (t6 != 0)) {
            t42 = 0x1;
        }
        *(unsigned int *)0x8C1D1368 = ((*(int *)0x8C1D1368) + (t40 - t42));
        menuDimScreen(t36);
        menuResultDraw((*(int *)0x8C1D1368), 0x3, 0x1, 0.0f);
        *(float *)(((((int)stk + 16) + 0x28) + 0x0)) = (*(float *)0x8C0D1020);
        *(float *)(((((int)stk + 16) + 0x28) + 0xC)) = (*(float *)0x8C0D1024);
        *(float *)(((((int)stk + 16) + 0x28) + 0x18)) = (*(float *)0x8C0D1028);
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x0)) = 0x8C1D1764;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = 0x1;
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x4)) = 0x8C1D17D0;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = 0x2;
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x8)) = 0x8C1D18A8;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = 0x2;
        u50 = *(float *)0x8C0D1038;
        u51 = *(float *)0x8C0D103C;
        u52 = *(float *)0x8C0D1040;
        t53 = 0x0;
        for (;;) {
            u54 = u52;
            u54 = u54 + u50 * (float)t53;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28)) + 0x4)) = u54;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28)) + 0x8)) = u51;
            *(unsigned int *)(((int)stk + 16)) = ((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28));
            if (t53 == (*(int *)0x8C1D1368)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))); }
                t62 = (sprListPut((*(int *)(((((int)stk + 16) + 0x1C) + (t53 << 2)))), (*(int *)(((((int)stk + 16) + 0x10) + (t53 << 2)))), 0x0, *(Stk3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))), 1.0f, 1.0f, 1.0f));
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))); }
                t62 = (sprListPut((*(int *)(((((int)stk + 16) + 0x1C) + (t53 << 2)))), (*(int *)(((((int)stk + 16) + 0x10) + (t53 << 2)))), 0x0, *(Stk3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))), 1.0f, 1.0f, 0.400000006f));
            }
            t53 = (t53 + 0x1);
            if ((int)t53 >= (int)0x3) {
                break;
            }
        }
        *(unsigned int *)0x8C1D136C = 0x0;
        t89 = t62;
        if (((*(int *)(((int)stk + 24))) == 0) && (t67 = *(int *)(((int)stk + 20)), t67 == 0)) {
        } else {
            *(unsigned int *)0x8C287C60 = 0x0;
            strmScoreReset();
            t69 = *(int *)0x8C1D1368;
            if (t69 != 0) {
                if (t69 != 1) {
                    t73 = t69;
                    if (t69 != 2) {
                    } else {
                        sndSeDecide();
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                        t73 = (gameModeSet(0x0, 0x3, 0x0));
                    }
                    t79 = t73;
                } else {
                    *(unsigned int *)0x8C188EA8 = 0x1;
                    *(unsigned int *)0x8C188EAC = 0x0;
                    sndSeDecide();
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                    gameModeSet(0x1, 0x4, 0x0);
                    t79 = (strmBgmPlay(0x2));
                }
                t87 = t79;
            } else {
                sndSeDecide();
                *(unsigned int *)0x8C20D14C = 0x2;
                *(unsigned int *)0x8C20D150 = 0x2;
                *(unsigned int *)0x8C1D136C = 0x1;
                *(unsigned int *)0x8C185408 = (*(int *)0x8C18540C);
                if ((*(int *)0x8C287ADC) == 4) {
                    *(unsigned int *)0x8C185408 = 0x1;
                }
                t87 = (resultFlagsClear());
            }
            t89 = t87;
        }
        t94 = t89;
    }
    return t94;
}

int cpuSglAimAddLv23(int a4, int a5)
{
    int t0;
    float u1;
    float u2;
    float u5;
    float u6;
    float u9;
    float u10;
    int t13;
    int t11;
    float u16;
    int t19;
    int t17;
    float u21;
    int t24;
    int t22;
    float u26;
    float u27;
    int t30;
    int t28;
    float u32;
    float u33;
    int t36;
    int t34;
    float u39;
    float u40;
    int t43;
    int t41;
    float u61;
    float u62;
    float u64;
    float u65;
    int t68;
    int t66;
    float u70;
    int t73;
    int t71;
    float u75;
    float u76;
    float u77;
    int t80;
    int t78;
    float u82;
    float u83;
    float u84;
    int t87;
    int t85;
    float u96;
    float u97;
    int t100;
    int t98;
    float u103;
    float u104;
    int t107;
    int t105;
    int t117;
    int t58;
    int t45;
    int t49;
    float u52;
    float u53;
    int t111;
    float u92;
    int t93;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((a4 + 0xB9C));
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(16.460001f > u2)) {
        u5 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u6 = (-u5);
        if (!(0.0f > u5)) {
            u6 = u5;
        }
        if (16.460001f > u6) {
            u9 = *(float *)((a4 + 0xB00));
            u10 = *(float *)((a4 + 0xB9C));
            t13 = 0x1;
            if (u10 > 0.0f) {
            } else {
                t11 = 0x0;
                if (0.0f > u10) {
                    t11 = 0xFFFFFFFF;
                }
                t13 = t11;
            }
            cpuAimPointSet(a5, 0x1, ((float)t13 * 41.1500015f), (u9 * 106.964996f));
            t58 = (a5 + 0x1);
        } else {
            u16 = *(float *)((a4 + 0xB9C));
            t19 = 0x1;
            if (u16 > 0.0f) {
            } else {
                t17 = 0x0;
                if (0.0f > u16) {
                    t17 = 0xFFFFFFFF;
                }
                t19 = t17;
            }
            u21 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t24 = 0x1;
            if (u21 > 0.0f) {
            } else {
                t22 = 0x0;
                if (0.0f > u21) {
                    t22 = 0xFFFFFFFF;
                }
                t24 = t22;
            }
            if (t19 != t24) {
                u26 = *(float *)((a4 + 0xB00));
                u27 = *(float *)((a4 + 0xB9C));
                t30 = 0x1;
                if (u27 > 0.0f) {
                } else {
                    t28 = 0x0;
                    if (0.0f > u27) {
                        t28 = 0xFFFFFFFF;
                    }
                    t30 = t28;
                }
                t45 = a5;
                t49 = 0x1;
                u52 = ((float)t30 * 41.1500015f);
                u53 = (u26 * 106.964996f);
            } else {
                u32 = *(float *)((a4 + 0xB00));
                u33 = *(float *)((a4 + 0xB9C));
                t36 = 0x1;
                if (u33 > 0.0f) {
                } else {
                    t34 = 0x0;
                    if (0.0f > u33) {
                        t34 = 0xFFFFFFFF;
                    }
                    t36 = t34;
                }
                cpuAimPointSet(a5, 0x1, ((float)(-t36) * 41.1500015f), (u32 * 59.4249992f));
                u39 = *(float *)((a4 + 0xB00));
                u40 = *(float *)((a4 + 0xB9C));
                t43 = 0x1;
                if (u40 > 0.0f) {
                } else {
                    t41 = 0x0;
                    if (0.0f > u40) {
                        t41 = 0xFFFFFFFF;
                    }
                    t43 = t41;
                }
                t45 = (a5 + 0x1);
                t49 = 0x2;
                u52 = ((float)(-t43) * 41.1500015f);
                u53 = (u39 * 106.964996f);
            }
            cpuAimPointSet(t45, t49, u52, u53);
            t58 = (t45 + 0x1);
        }
        t117 = t58;
    } else {
        u61 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u62 = (-u61);
        if (!(0.0f > u61)) {
            u62 = u61;
        }
        if (16.460001f > u62) {
            u64 = *(float *)((a4 + 0xAE8));
            u65 = *(float *)((a4 + 0xB9C));
            t68 = 0x1;
            if ((u65 - u64) > 0.0f) {
            } else {
                t66 = 0x0;
                if (0.0f > (u65 - u64)) {
                    t66 = 0xFFFFFFFF;
                }
                t68 = t66;
            }
            u70 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t73 = 0x1;
            if (u70 > 0.0f) {
            } else {
                t71 = 0x0;
                if (0.0f > u70) {
                    t71 = 0xFFFFFFFF;
                }
                t73 = t71;
            }
            if (t68 != t73) {
                u75 = *(float *)((a4 + 0xB00));
                u76 = *(float *)((a4 + 0xAE8));
                u77 = *(float *)((a4 + 0xB9C));
                t80 = 0x1;
                if ((u77 - u76) > 0.0f) {
                } else {
                    t78 = 0x0;
                    if (0.0f > (u77 - u76)) {
                        t78 = 0xFFFFFFFF;
                    }
                    t80 = t78;
                }
                u92 = (u75 * 106.964996f);
                t93 = t80;
            } else {
                u82 = *(float *)((a4 + 0xB00));
                u83 = *(float *)((a4 + 0xAE8));
                u84 = *(float *)((a4 + 0xB9C));
                t87 = 0x1;
                if ((u84 - u83) > 0.0f) {
                } else {
                    t85 = 0x0;
                    if (0.0f > (u84 - u83)) {
                        t85 = 0xFFFFFFFF;
                    }
                    t87 = t85;
                }
                u92 = (u82 * 47.5400009f);
                t93 = (-t87);
            }
            cpuAimPointSet(a5, 0x1, ((float)t93 * 41.1500015f), u92);
            t111 = (a5 + 0x1);
        } else {
            u96 = *(float *)((a4 + 0xB00));
            u97 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
            t100 = 0x1;
            if (u97 > 0.0f) {
            } else {
                t98 = 0x0;
                if (0.0f > u97) {
                    t98 = 0xFFFFFFFF;
                }
                t100 = t98;
            }
            cpuAimPointSet(a5, 0x1, ((float)(-t100) * 41.1500015f), (u96 * 106.964996f));
            u103 = *(float *)((a4 + 0xB00));
            u104 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
            t107 = 0x1;
            if (u104 > 0.0f) {
            } else {
                t105 = 0x0;
                if (0.0f > u104) {
                    t105 = 0xFFFFFFFF;
                }
                t107 = t105;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t107) * 41.1500015f), (u103 * 47.5400009f));
            t111 = ((a5 + 0x1) + 0x1);
        }
        t117 = t111;
    }
    return t117;
}

int uniformLoadStep(void)
{
    int t0;
    int t2;
    int t9;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t53;
    int t54;
    int t58;
    int t59;
    int t60;
    int t61;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t89;
    int t90;
    int t135;
    int t139;
    int t127;
    int t141;
    int stk[134];

    t0 = *(int *)0x8C37DAF0;
    *(unsigned int *)(((int)stk + 20)) = (t0 * 0x38);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((t0 * 0x38) + 0x8C343264) + 0x30)));
    *(unsigned int *)(((int)stk + 4)) = (t0 * 0xD78);
    t2 = *(int *)(((t0 * 0xD78) + 0x8C2889DC));
    *(unsigned int *)((((t0 * 0x38) + 0x8C343264) + 0x0)) = t2;
    *(unsigned int *)(((int)stk + 16)) = (t0 << 2);
    if ((*(int *)0x8C37DAF0) == (*(int *)0x8C37DAEC)) {
        t9 = muneTexLoad((*(int *)((((*(int *)(((int)stk + 4))) + 0x8C287D84) + 0xC58))), (*(int *)(((t0 << 2) + 0x8C124AE0))), t0);
        if (t9 != 1) {
        } else {
            charaTexLoad(t2, t0);
            *(unsigned int *)0x8C37DAEC = ((*(int *)0x8C37DAEC) + 0x1);
        }
    } else {
        if ((int)(*(int *)(((int)stk + 12))) < 0) {
            *(unsigned int *)0x8C37DAF0 = ((*(int *)0x8C37DAF0) + 0x1);
        } else {
            t19 = uniformTexLoad((*(int *)(((int)stk + 12))), ((*(int *)(((t0 << 2) + 0x8C124AE0))) + 0x30000), t0);
            if (t19 == 1) {
                t20 = charaTexCount(t2);
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t21 = *(int *)(((int)stk + 12));
                for (;;) {
                    t22 = charaModelCount(t2);
                    if ((int)(*(int *)(((int)stk + 8))) >= (int)t22) {
                        break;
                    }
                    t24 = *(int *)(((int)stk + 8));
                    t25 = *(int *)(((((t21 << 2) << 2) + 0x8C124C10) + 0x0));
                    t26 = *(int *)(((((t2 << 2) << 2) + 0x8C124AF0) + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = (t24 << 2);
                    modelSwapMaterial((*(int *)(((t24 << 2) + (*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0)))))), t26, (t25 + (t20 - 27)));
                    modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0)))))), (*(int *)(((((t2 << 2) << 2) + 0x8C124AF0) + 0x4))), ((*(int *)(((((t21 << 2) << 2) + 0x8C124C10) + 0x4))) + (t20 - 27)));
                    modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0)))))), (*(int *)(((((t2 << 2) << 2) + 0x8C124AF0) + 0x8))), ((*(int *)(((((t21 << 2) << 2) + 0x8C124C10) + 0x8))) + (t20 - 27)));
                    modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0)))))), (*(int *)(((((t2 << 2) << 2) + 0x8C124AF0) + 0xC))), ((*(int *)(((((t21 << 2) << 2) + 0x8C124C10) + 0xC))) + (t20 - 27)));
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
                }
                *(unsigned int *)(((0x8C343264 + (*(int *)(((int)stk + 20)))) + 0x34)) = (*(int *)(((int)stk + 12)));
                nlSetCommonTextureOffset((*(int *)(((t2 << 2) + 0x8C1B05DC))));
                t53 = 0x0;
                for (;;) {
                    t54 = charaModelCount(t2);
                    if ((int)t53 >= (int)t54) {
                        break;
                    }
                    nlObjPutFreeTextureOnce((*(int *)(((*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0))) + (t53 << 2)))));
                    t53 = (t53 + 0x1);
                }
                t58 = charaTexCount(t2);
                t59 = *(int *)(((int)stk + 16));
                if ((int)t58 > 0) {
                    t60 = 0x0;
                    t61 = 0x0;
                    for (;;) {
                        { struct mv4 { int w[4]; }; *(struct mv4 *)((t60 + (((int)stk + 4) + 0x14))) = *(struct mv4 *)(((*(int *)(((0x8C1B0594 + (t2 << 2)) + 0x0))) + t60)); }
                        t61 = (t61 + 0x1);
                        *(unsigned int *)(((t60 + (((int)stk + 4) + 0x14)) + 0x8)) = ((*(int *)(((t60 + (((int)stk + 4) + 0x14)) + 0x8))) + (*(int *)(((t59 + 0x8C124AE0) + 0x0))));
                        t60 = (t60 + 0x10);
                        if ((int)t61 >= (int)t58) {
                            break;
                        }
                    }
                }
                t73 = *(int *)(((int)stk + 12));
                t74 = *(int *)(((int)stk + 16));
                if ((int)t58 < (int)(t58 + 0x4)) {
                    t75 = (((t58 << 2) << 2) + (((int)stk + 4) + 0x14));
                    t76 = t58;
                    t77 = (((t58 - t58) << 2) << 2);
                    for (;;) {
                        { struct mv4 { int w[4]; }; *(struct mv4 *)(t75) = *(struct mv4 *)(((*(int *)((((t73 << 2) + 0x8C1B1B3C) + 0x0))) + t77)); }
                        t76 = (t76 + 0x1);
                        t77 = (t77 + 0x10);
                        *(unsigned int *)((t75 + 0x8)) = ((*(int *)((t75 + 0x8))) + ((*(int *)(((t74 + 0x8C124AE0) + 0x0))) + 0x30000));
                        t75 = (t75 + 0x10);
                        if ((int)t76 >= (int)(t58 + 0x4)) {
                            break;
                        }
                    }
                }
                nlSetCommonTextureOffset((*(int *)(((t2 << 2) + 0x8C1B05DC))));
                t89 = 0x0;
                for (;;) {
                    t90 = charaModelCount(t2);
                    if ((int)t89 >= (int)t90) {
                        break;
                    }
                    nlObjPutLoadTexture((*(int *)(((*(int *)(((0x8C1AF85C + (t2 << 2)) + 0x0))) + (t89 << 2)))), (((int)stk + 4) + 0x14));
                    t89 = (t89 + 0x1);
                }
                *(unsigned int *)(((t2 << 2) + 0x8C1AFA64)) = 0x1;
                *(unsigned int *)0x8C37DAF0 = ((*(int *)0x8C37DAF0) + 0x1);
            }
        }
    }
    if (((*(int *)0x8C287D5C) == 2) && (t127 = *(int *)0x8C3449F4, t127 != 0)) {
        t135 = 0x1;
        if ((*(int *)0x8C37DAF0) != 1) {
            t135 = 0x0;
        }
        t141 = t135;
    } else {
        t139 = 0x0;
        if ((*(int *)0x8C37DAF0) == (*(int *)0x8C287ADC)) {
            t139 = 0x1;
        }
        t141 = t139;
    }
    return t141;
}

int nlObjPutLoadTextureOnce_Sub(int a4, int a5, int a6, int a7, int a8)
{
    int t9;
    int t14;
    int t19;
    int t27;
    int t28;
    int t32;
    int t33;
    int t38;
    int t54;
    int t55;
    int t61;
    int t62;
    int t71;
    int t77;
    int t82;
    int t93;
    int t95;
    int stk[15];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0F1BC0:;
    *(unsigned int *)(((int)stk + 16)) = R5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    R8 = (R7);
    R9 = (0x0);
    if ((R6 != 0)) goto L_8C0F1C10;
    goto L_8C0F1BE4;
    L_8C0F1BE4:;
    if (((int)(*(int *)((R4 + 0x0))) < 0)) goto L_8C0F1BF0;
    goto L_8C0F1BEA;
    L_8C0F1BEA:;
    if (((*(int *)((R4 + 0x18))) != 0)) goto L_8C0F1C00;
    goto L_8C0F1BF0;
    L_8C0F1BF0:;
    R0 = (0x0);
    goto L_8C0F1E5E;
    L_8C0F1E5E:;
    return R0;
    L_8C0F1C00:;
    R12 = ((R4 + 0x18));
    goto L_8C0F1C12;
    L_8C0F1C12:;
    t9 = *(int *)((R12 + 0x20));
    t14 = R12;
    R10 = (t9);
    R12 = ((R12 + 0x50));
    R13 = (t9);
    R14 = t14;
    if (((int)t9 < 0)) goto L_8C0F1CB2;
    goto L_8C0F1C1E;
    L_8C0F1C1E:;
    if ((a8 != 1)) goto L_8C0F1C30;
    goto L_8C0F1C24;
    L_8C0F1C24:;
    R13 = ((*(int *)(((((R13 << 2) << 2) + (*(int *)(((int)stk + 16)))) + 0xC))));
    goto L_8C0F1C30;
    L_8C0F1C30:;
    t19 = *(int *)0x8C458DCC;
    *(unsigned int *)(((int)stk + 8)) = (((R13 + t19) << 2) << 1);
    R11 = (0x8C4241C0);
    if (((*(int *)((((((R13 + t19) << 2) << 1) + (*(int *)0x8C4241C0)) + 0x0))) != 0)) goto L_8C0F1C5E;
    goto L_8C0F1C4A;
    L_8C0F1C4A:;
    *(unsigned int *)(((0x4 + ((*(int *)(((int)stk + 8))) + (*(int *)((R11 + 0x0))))) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    goto L_8C0F1C5E;
    L_8C0F1C5E:;
    t27 = *(int *)(((int)stk + 8));
    t28 = *(int *)((R11 + 0x0));
    *(unsigned int *)(((t27 + t28) + 0x0)) = ((*(int *)(((t27 + t28) + 0x0))) + 0x1);
    t32 = *(int *)((((*(int *)(((int)stk + 8))) + (*(int *)((R11 + 0x0)))) + 0x4));
    t33 = *(int *)0x8C458608;
    R11 = (((t32 * 0x3C) + t33));
    R13 = (t32);
    if (((*(int *)((((t32 * 0x3C) + t33) + 0x2C))) != 0)) goto L_8C0F1CAC;
    goto L_8C0F1C84;
    L_8C0F1C84:;
    t38 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 12)) = (((R10 << 2) << 2) + t38);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) | (nlLoadTextureMem((((R10 << 2) << 2) + t38), R13, (*(int *)(((((R10 << 2) << 2) + t38) + 0x8))))));
    nlCreateTextureParam(R13);
    *(unsigned int *)((R11 + 0x38)) = R13;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    goto L_8C0F1CAC;
    L_8C0F1CAC:;
    *(unsigned int *)((R11 + 0x2C)) = ((*(int *)((R11 + 0x2C))) + 0x1);
    goto L_8C0F1CB2;
    L_8C0F1CB2:;
    if (((int)R10 >= 0)) goto L_8C0F1CC4;
    goto L_8C0F1CB6;
    L_8C0F1CB6:;
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) | 0x1);
    *(unsigned int *)((R14 + 0x4)) = ((*(int *)((R14 + 0x4))) | 0x400000);
    goto L_8C0F1CC4;
    L_8C0F1CC4:;
    *(unsigned int *)((R14 + 0x0)) = (((*(int *)((R14 + 0x0))) & 0xFFFCFFFF) | (((*(int *)0x8C1DC890) << 16) | 0x8C0000));
    if (((int)R13 < 0)) goto L_8C0F1CF0;
    goto L_8C0F1CDC;
    L_8C0F1CDC:;
    nlSetTextureParameter(R14, R13);
    goto L_8C0F1CF6;
    L_8C0F1CF6:;
    R4 = (0x7);
    if (((*(int *)0x8C1DC888) == 0)) goto L_8C0F1D04;
    goto L_8C0F1D00;
    L_8C0F1D00:;
    goto L_8C0F1E10;
    L_8C0F1E10:;
    t54 = *(int *)((R14 + 0xC));
    t55 = (R4 & ((unsigned int)t54 >> 27)) == 5;
    R4 = ((R4 & ((unsigned int)t54 >> 27)));
    if (t55) goto L_8C0F1E24;
    goto L_8C0F1E1E;
    L_8C0F1E1E:;
    if ((R4 != 6)) goto L_8C0F1E34;
    goto L_8C0F1E24;
    L_8C0F1E24:;
    *(unsigned int *)((R14 + 0xC)) = (((*(int *)((R14 + 0xC))) & 0xF81FFFFF) | ((*(int *)((R14 + 0x3C))) << 21));
    goto L_8C0F1E34;
    L_8C0F1E34:;
    nlObjPutLoadTextureCallBack();
    t61 = *(int *)((R14 + 0x4C));
    t62 = *(int *)(((R12 + t61) + 0x0));
    R12 = ((R12 + t61));
    R4 = (t62);
    if ((t62 != 0)) goto L_8C0F1E50;
    goto L_8C0F1E46;
    L_8C0F1E46:;
    *(unsigned int *)((R8 + 0x0)) = R9;
    goto L_8C0F1E5C;
    L_8C0F1E5C:;
    R0 = ((*(int *)(((int)stk + 20))));
    goto L_8C0F1E5E;
    L_8C0F1E50:;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C0F1E5A;
    goto L_8C0F1E56;
    L_8C0F1E56:;
    goto L_8C0F1C12;
    L_8C0F1E5A:;
    *(unsigned int *)((R8 + 0x0)) = R12;
    goto L_8C0F1E5C;
    L_8C0F1D04:;
    t71 = *(int *)0x8C450BF8;
    R4 = ((R4 & ((unsigned int)(*(int *)((R14 + 0xC))) >> 27)));
    R5 = (t71);
    if ((t71 != 0)) goto L_8C0F1D18;
    goto L_8C0F1D14;
    L_8C0F1D14:;
    goto L_8C0F1E34;
    L_8C0F1D18:;
    if ((R4 == 5)) goto L_8C0F1D28;
    goto L_8C0F1D1E;
    L_8C0F1D1E:;
    if ((R4 == 6)) goto L_8C0F1D28;
    goto L_8C0F1D24;
    L_8C0F1D24:;
    goto L_8C0F1E34;
    L_8C0F1D28:;
    t77 = *(int *)((R14 + 0x3C));
    R4 = (t77);
    R6 = (0x8C458E20);
    if (((int)t77 < (int)(*(short *)0x8C458E24))) goto L_8C0F1D36;
    goto L_8C0F1D32;
    L_8C0F1D32:;
    goto L_8C0F1E34;
    L_8C0F1D36:;
    t82 = *(int *)((R6 + 0x18));
    R10 = (((((R4 << 1) + R4) << 2) + R5));
    R13 = ((t82 + ((R4 << 2) << 1)));
    if (((*(short *)(((t82 + ((R4 << 2) << 1)) + 0x4))) == 0)) goto L_8C0F1D60;
    goto L_8C0F1D52;
    L_8C0F1D52:;
    *(unsigned short *)((R13 + 0x4)) = ((*(short *)((R13 + 0x4))) + 0x1);
    R11 = ((*(short *)((R13 + 0x0))));
    goto L_8C0F1DB2;
    L_8C0F1DB2:;
    *(unsigned int *)((R14 + 0xC)) = (((*(int *)((R14 + 0xC))) & 0xF81FFFFF) | (R11 << 21));
    goto L_8C0F1E34;
    L_8C0F1D60:;
    *(unsigned char *)((R13 + 0x2)) = (*(signed char *)((R10 + 0x2)));
    *(unsigned char *)((R13 + 0x3)) = ((int)((*(int *)((R10 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((R13 + 0x4)) = 0x1;
    *(unsigned short *)((R13 + 0x6)) = R4;
    t93 = *(int *)((R10 + 0x8));
    *(unsigned int *)(((int)stk + 8)) = t93;
    t95 = nlSearchPalette((*(short *)((R10 + 0x2))), t93);
    R11 = (t95);
    if (((int)t95 < 0)) goto L_8C0F1DB0;
    goto L_8C0F1D8A;
    L_8C0F1D8A:;
    *(unsigned short *)((R13 + 0x0)) = R11;
    nlSetPaletteMap(R11, (*(int *)(((int)stk + 8))));
    nlSetPaletteData(((R11 << 2) << 2), (*(int *)((R10 + 0x4))), (*(int *)(((int)stk + 8))));
    goto L_8C0F1DB2;
    L_8C0F1DB0:;
    R11 = (R9);
    goto L_8C0F1DB2;
    L_8C0F1CF0:;
    nlSetDummyTextureParameter(R14);
    goto L_8C0F1CF6;
    L_8C0F1C10:;
    R12 = (R6);
    goto L_8C0F1C12;
}

int primRectFrame(int a4, int a5, int a6, int a7)
{
    int t5;
    int t11;
    int t26;
    int t37;
    int stk[37];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x80 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    t5 = *(int *)(((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), (*(float *)(((0x80 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    t11 = *(int *)(((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x10) + 0x30);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x10) + 0x30);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10));
    t26 = *(int *)(((int)stk + 32));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    t37 = *(int *)(((int)stk + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)(t37 << 1)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)(t37 << 1)), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t11), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x80 + ((int)stk + 20)) + 0x0))), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t11), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5) + (float)t11), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x10));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5) + (float)t11), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x10) + 0x20));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x80 + ((int)stk + 20)) + 0x0))) - (float)t5), (((*(float *)(((0x80 + ((int)stk + 20)) + 0x4))) + (float)t26) + (float)t11), (*(float *)(((0x80 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a7, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}

int ballBoyPoseRun(int a4)
{
    int t61;
    int t98;
    int t105;
    int t112;
    int t106;
    int t107;
    int t109;
    int t111;
    int t81;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0670)));
    motionSetCurrent((a4 + 0x4));
    motionRootBone(0x0, 0x2, 0x0, 0x0, *(int *)((int)stk + 8));
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBone(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBone(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBone(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBone(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBone(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287C60) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x5E4 + a4)) = *(struct mv3 *)(((0x5E4 + a4) + 0xC)); }
    }
    motionBone(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    if ((*(int *)0x8C287C60) == 0) {
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x5F0 + a4));
    }
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5BC))), (0x5CC + a4), (*(int *)((a4 + 0x5C8))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t61 = 0x0;
    for (;;) {
        nlLoadMatrix(((((t61 << 2) << 2) << 2) + (0x1E4 + a4)));
        *(unsigned int *)(((int)stk + 8)) = (t61 << 2);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((t61 << 2) + (*(int *)(((int)stk + 12)))))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D03F0))) + (*(int *)(((int)stk + 8)))))));
        }
        if ((t61 == 3) && (t81 = *(int *)0x8C1891E8, t81 == 2)) {
            if ((*(int *)0x8C38B768) != 0) {
                nlScale(1.0f, 1.09809995f, 1.12950003f);
            }
            nlRotateAY(0x4000);
            if ((*(int *)0x8C38B768) != 0) {
                nlLineSetDiv(1.12950003f);
            }
            t98 = 0xC880320;
            if ((*(int *)((a4 + 0x0))) == 0) {
                t98 = 0xC880000;
            }
            nlObjPut(t98);
        }
        t61 = (t61 + 0x1);
        if ((int)t61 >= (int)0xF) {
            break;
        }
    }
    t105 = *(int *)0x8C38B768;
    t112 = (nlPopMatrix(0x1));
    if (t105 != 0) {
        t106 = *(int *)(((int)stk + 12));
        t107 = t106;
        for (;;) {
            nlPushMatrix(0x0);
            t109 = *(int *)((t107 + 0x0));
            t107 = (t107 + 0x4);
            sklDrawNodeOne(t109);
            t111 = nlPopMatrix(0x1);
            if ((unsigned int)t107 >= (unsigned int)(t106 + 0x3C)) {
                break;
            }
        }
        t112 = t111;
    }
    return t112;
}

int primFrameCorners(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t14;
    int stk[47];

    stk[35] = a8;
    stk[36] = a9;
    stk[37] = a10;
    stk[38] = a11;
    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 36)) = (((int)stk + 20) + 0x14);
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x14);
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 20) + 0x14) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x10);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 20) + 0x14) + 0x20);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x20);
    t14 = *(int *)(((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x78) + 0x4))) + (float)t14), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x14) + 0x30);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x30);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x84 + ((int)stk + 20)) + 0x4))) + (float)t14), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x90 + ((int)stk + 20)) + 0x4))) - (float)t14), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) - (float)t14), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x78) + 0x0))) - (float)t14), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x90 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x90 + ((int)stk + 20)) + 0x0))) - (float)t14), (*(float *)(((0x90 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x90 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x84 + ((int)stk + 20)) + 0x0))) + (float)t14), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x84 + ((int)stk + 20)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x4))), (*(float *)(((0x84 + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t14), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14)));
}

