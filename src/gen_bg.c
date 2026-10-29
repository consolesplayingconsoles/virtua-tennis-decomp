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

