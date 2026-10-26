/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
float cpuSglAimScore(int, int);
int cpuShotTargetSet(int, float, float);
int entryAnyAtRound5(void);
int entryCountJoined(void);
int entryGetColorId(int, Stk3);
int entryIsVersus(int, int, int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int lightUpdate(void);
int matchCheckTiebreak(int, int);
int menuTextMsgPut(int, Stk3, float);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlsndSeqRequest(int);
int playerInit(int, int);
int primTexVertexSet(int, int, int, int, int, float, float);
int selCharInfoDraw(int, int);
int selModelSpawn(int, int);
int set_event(int, int);
int sklDrawNodeOne(int);
int staffInitAll(void);
int staffLookAtBall(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
float cpuSglPickLv07(int a4, int a5, float f4, float f5);
void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5);
int matchSetupPlayers(void);
int sceneTwoPlayerSetup(int a4, int a5, int a6);
int menuItemTextPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int fadeQuadDraw(int a4, int a5, int a6, float f4, float f5);
int seFootSlide(int a4, int a5, int a6, float f4, float f5);
int umpirePose(int a4);
int netJudgePose(int a4);
int entryCharaSelDraw(void);
void ADXF_Ocbi(int a4, int a5);

float cpuSglPickLv07(int a4, int a5, float f4, float f5)
{
    int t0;
    float u1;
    float u2;
    float u5;
    float u7;
    float t9;
    float u10;
    float t12;
    float u13;
    int t15;
    int t16;
    int t17;
    float u18;
    int t19;
    int t24;
    int t25;
    int t26;
    float u27;
    int t31;
    int t50;
    float u58;
    float u59;
    float u64;
    float u67;
    float u72;
    float u108;
    float u92;
    int t23;
    int t36;
    int t37;
    float u39;
    int t77;
    int stk[14];

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(43.7324982f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(125.31749f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t9 = cpuSglAimScore(a4, a5);
            u10 = t9;
            if (18.0f > t9) {
                u10 = 18.0f;
            }
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t12 = nlRandom();
            u13 = (u10 / (1.0f + 1.0f));
            u13 = u13 + (u10 / (1.0f + 1.0f)) * t12;
            t15 = 0x8C2FCC6C;
            t16 = 0x0;
            t17 = a5;
            u18 = t12;
            for (;;) {
                t19 = (t17 == 0);
                t17 = (t17 - 1);
                if (t19) {
                    break;
                }
                u18 = (*(float *)((t15 + (0x1C))));
                t15 = (t15 + 0x20);
                if (!(u18 > u13)) {
                    t16 = (t16 + 0x1);
                }
            }
            *(unsigned int *)(((int)stk + 4)) = 0x8C2FCC6C;
            if ((int)a5 > 0) {
                t24 = t15;
                t25 = 0x8C2FCC6C;
                t26 = 0x0;
                u27 = (u10 / (1.0f + 1.0f));
                for (;;) {
                    if (!((*(float *)(((*(int *)(((int)stk + 4))) + 0x1C))) > u13)) {
                        t23 = 0x8C0F7BAC;
                        t31 = (int)((int)(nlRand()) % (int)t16);
                        if (t31 == 0) {
                            *(unsigned int *)(((int)stk + 8)) = t26;
                        }
                    } else {
                        t36 = t24;
                        t37 = t25;
                        u39 = u27;
                    }
                    u27 = u39;
                    t23 = (*(int *)(((int)stk + 4)));
                    t24 = t36;
                    t25 = t37;
                    t26 = (t26 + 0x1);
                    t23 = (t23 + 0x20);
                    *(unsigned int *)(((int)stk + 4)) = t23;
                    if ((int)t26 >= (int)a5) {
                        break;
                    }
                }
            }
            t50 = *(int *)(((int)stk + 8));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((unsigned char)(*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t50 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u58 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u59 = (-u58);
            if (!(0.0f > u58)) {
                u59 = u58;
            }
            u64 = (-1.0f);
            u64 = u64 + (1.0f + 1.0f) * (u59 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)))) / (*(float *)0x8C287B40)), u64);
            u67 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u67 = 1.0f;
            }
            u72 = u67;
            u72 = u72 + 0.5f * (((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) / 100.0f)) + 1.0f));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) - 0.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u72 > (*(float *)0x8C291F54)) && (t77 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t77 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u72 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u92 = 0.5f;
        }
        u108 = u92;
    }
    return u108;
}

void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5)
{
    float u45;
    float u46;
    int t57;
    float u50;
    float u52;
    int t54;
    float u67;
    float u68;
    float u71;
    float u73;
    float u75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    float u82;
    float u83;
    float u84;
    float u85;
    float u102;
    float u103;
    int t107;
    int t105;
    float u111;
    int t114;
    int t112;
    float u204;
    int t207;
    int t205;
    float u209;
    int t212;
    int t210;
    int t42;
    int t63;
    int stk[9];

    if ((*(int *)0x8C421F60) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) == 3) {
        } else {
            if ((*(int *)0x8C181758) != 0) {
            } else {
                if ((*(int *)0x8C38BA70) == 0) {
                } else {
                    if ((*(int *)0x8C38BA74) == 0) {
                    } else {
                        if (((*(int *)0x8C402C98) != (*(int *)((a4 + 0x50)))) && (t42 = *(int *)((a4 + 0x50)), t42 == 12)) {
                            u45 = *(float *)((a4 + 0x58));
                            u46 = (-u45);
                            if (!(0.0f > u45)) {
                                u46 = u45;
                            }
                            t57 = 0xA03A9;
                            if ((*(float *)0x8C287B40) > u46) {
                                u50 = *(float *)((a4 + 0x60));
                                u52 = (-u50);
                                if (!(0.0f > u50)) {
                                    u52 = (*(float *)((a4 + 0x60)));
                                }
                                t54 = 0xA03A9;
                                if (118.849998f > u52) {
                                    t54 = 0xB03A9;
                                }
                                t57 = t54;
                            }
                            nlsndSeqRequest(t57);
                        } else {
                            t63 = 0x8C402C98;
                        }
                        u67 = *(float *)((a4 + 0x14));
                        u68 = (-u67);
                        if (!(0.0f > u67)) {
                            u68 = u67;
                        }
                        if (!(118.849998f > u68)) {
                        } else {
                            u71 = *(float *)((a4 + 0xC));
                            u73 = (-u71);
                            if (!(0.0f > u71)) {
                                u73 = (*(float *)((a4 + 0xC)));
                            }
                            u75 = *(float *)0x8C287B40;
                            if (!(u75 > u73)) {
                            } else {
                                t76 = 0xC;
                                t77 = t63;
                                t78 = 0x8C287B40;
                                t79 = 0x0;
                                t80 = 0x0;
                                t81 = a6;
                                u82 = u75;
                                u83 = u73;
                                u84 = u67;
                                u85 = f5;
                                for (;;) {
                                    if ((int)t79 >= (int)(*(int *)0x8C287ADC)) {
                                        break;
                                    }
                                    t76 = 0x14;
                                    u83 = 0.0f;
                                    u85 = (*(float *)((a4 + t76)));
                                    t81 = (t79 * 0xD78);
                                    t81 = (t81 + 0x8C287D84);
                                    if (u85 > u83) {
                                        t78 = 0x1;
                                    } else {
                                        if (u83 > u85) {
                                            t78 = 0xFFFFFFFF;
                                        } else {
                                            t78 = 0x0;
                                        }
                                    }
                                    t76 = 0xAF0;
                                    u83 = 0.0f;
                                    *(unsigned int *)(((int)stk + 8)) = t81;
                                    u84 = (*(float *)((t81 + t76)));
                                    if (u84 > u83) {
                                        t77 = 0x1;
                                    } else {
                                        if (u83 > u84) {
                                            t77 = 0xFFFFFFFF;
                                        } else {
                                            t77 = 0x0;
                                        }
                                    }
                                    if (t78 == t77) {
                                        u82 = 0.0f;
                                        if (!(u82 > u84)) {
                                            u83 = u84;
                                        } else {
                                            u83 = u84;
                                            u83 = (-u83);
                                        }
                                        u82 = (float)t80;
                                        if (u83 > u82) {
                                            t76 = 0xAF0;
                                            u83 = 0.0f;
                                            *(unsigned int *)(((int)stk + 4)) = t81;
                                            u84 = (*(float *)((t81 + t76)));
                                            if (!(u83 > u84)) {
                                                u83 = u84;
                                            } else {
                                                u83 = u84;
                                                u83 = (-u83);
                                            }
                                            t80 = (int)u83;
                                        }
                                    }
                                    t79 = (t79 + 0x1);
                                }
                                u102 = *(float *)((a4 + 0x14));
                                u103 = (-u102);
                                if (!(0.0f > u102)) {
                                    u103 = u102;
                                }
                                if (u103 > (float)(t80 + 0xA)) {
                                    t107 = 0x1;
                                    if (u102 > 0.0f) {
                                    } else {
                                        t105 = 0x0;
                                        if (0.0f > u102) {
                                            t105 = 0xFFFFFFFF;
                                        }
                                        t107 = t105;
                                    }
                                    if ((*(int *)0x8C402C9C) != t107) {
                                        nlsndSeqRequest(0xB03A9);
                                        u111 = *(float *)((a4 + 0x14));
                                        t114 = 0x1;
                                        if (u111 > 0.0f) {
                                        } else {
                                            t112 = 0x0;
                                            if (0.0f > u111) {
                                                t112 = 0xFFFFFFFF;
                                            }
                                            t114 = t112;
                                        }
                                        *(unsigned int *)0x8C402C9C = t114;
                                    }
                                }
                            }
                        }
                    }
                }
                u204 = *(float *)((a4 + 0x14));
                t207 = 0x1;
                if (u204 > 0.0f) {
                } else {
                    t205 = 0x0;
                    if (0.0f > u204) {
                        t205 = 0xFFFFFFFF;
                    }
                    t207 = t205;
                }
                u209 = *(float *)((a4 + 0x8));
                t212 = 0x1;
                if (u209 > 0.0f) {
                } else {
                    t210 = 0x0;
                    if (0.0f > u209) {
                        t210 = 0xFFFFFFFF;
                    }
                    t212 = t210;
                }
                if (t207 != t212) {
                    *(unsigned int *)0x8C402C9C = 0x0;
                }
                *(unsigned int *)0x8C402C98 = (*(int *)((a4 + 0x50)));
            }
        }
    }
}

int matchSetupPlayers(void)
{
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t39;
    int t18;
    int t19;
    int t20;
    int t21;
    int t23;
    int t42;
    int t51;
    int t60;
    int t61;
    int t62;
    int t68;
    int t72;
    int t50;
    float u91;

    *(unsigned int *)0x8C287B3C = 0x0;
    if ((*(int *)0x8C421F60) == 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x8000);
    }
    t5 = 0x8C287CBC;
    for (;;) {
        *(unsigned int *)((t5 + 0x0)) = 0x0;
        t5 = (t5 + 0x4);
        if ((unsigned int)t5 >= (unsigned int)0x8C287D04) {
            break;
        }
    }
    t6 = 0x8C287D84;
    t7 = 0x0;
    t8 = 0x8C287AE0;
    t9 = 0x8C287AE0;
    for (;;) {
        t10 = *(int *)(((t7 * 0x38) + 0x8C34326C));
        t7 = (t7 + 0x1);
        if (t10 == 0) {
            *(unsigned int *)((t8 + 0x0)) = 0x0;
            *(unsigned int *)((0x8C287CBC + ((*(int *)((t6 + 0xC58))) << 2))) = 0x1;
        } else {
            *(unsigned int *)((t9 + 0x0)) = 0x1;
        }
        t6 = (t6 + 0xD78);
        t9 = (t9 + 0x4);
        t8 = (t8 + 0x4);
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    t39 = t6;
    if ((*(int *)0x8C287ADC) == 4) {
        t18 = 0x0;
        t19 = 0x2;
        t20 = 0x8C287AE0;
        t21 = 0x8C287D84;
        for (;;) {
            if ((*(int *)(((t18 << 2) + 0x8C287AE0))) != 0) {
                t23 = ((~(((~t19) + 0x1) & 0x3)) + 0x1);
                if ((int)t19 >= 0) {
                    t23 = (t19 & 0x3);
                }
                if ((*(int *)((0x8C287AE0 + (t23 << 2)))) == 0) {
                    *(unsigned int *)((t20 + 0x0)) = 0x2;
                    *(unsigned int *)((0x8C287CBC + ((*(int *)((t21 + 0xC58))) << 2))) = 0x1;
                }
            }
            t18 = (t18 + 0x1);
            t20 = (t20 + 0x4);
            t21 = (t21 + 0xD78);
            t19 = (t19 + 0x1);
            if ((int)t18 >= (int)0x4) {
                break;
            }
        }
        t39 = t18;
    }
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFDFF);
    t42 = entryIsVersus(0x4, 0xD78, 0x8C287CBC, t39);
    if (t42 != 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x200);
    }
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFDFFFF);
    if (((*(int *)0x8C287ADC) == 4) && (t50 = *(int *)0x8C287B3C, (t50 & 0x200) == 0)) {
        t51 = entryCountJoined();
        if (t51 == 2) {
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20000);
        }
    }
    t60 = 0x0;
    for (;;) {
        *(unsigned int *)(((0x8C287B00 + t60) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C287B10 + t60) + 0x0)) = 0x0;
        t61 = (0x8C287B18 + t60);
        t62 = (0x8C287B08 + t60);
        t60 = (t60 + 0x4);
        *(unsigned int *)((t62 + 0x0)) = 0x0;
        *(unsigned int *)((t61 + 0x0)) = 0x0;
        if ((unsigned int)t60 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)0x8C287B20 = 0x0;
    *(unsigned int *)0x8C287B24 = 0x0;
    *(unsigned int *)0x8C287B2C = 0x0;
    *(unsigned int *)0x8C287B28 = 0x0;
    *(unsigned int *)0x8C1D1270 = 0x0;
    matchCheckTiebreak(t60, 0x8);
    if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
        t68 = *(int *)0x8C185408;
        if ((*(int *)0x8C287ADC) == 2) {
            if (t68 == 1) {
                *(unsigned int *)0x8C287D74 = 0x8C101824;
            } else {
                *(unsigned int *)0x8C287D74 = 0x8C1018E4;
            }
            t72 = entryAnyAtRound5();
            if (t72 != 0) {
                if ((*(int *)0x8C185408) == 1) {
                    *(unsigned int *)0x8C287D74 = 0x8C1018E4;
                } else {
                    *(unsigned int *)0x8C287D74 = 0x8C101824;
                }
            }
            *(unsigned int *)0x8C287D78 = 0x8C1021E4;
            u91 = (*(float *)0x8C0187DC);
        } else {
            if (((t68 - 1) & 0x1) == 0) {
                *(unsigned int *)0x8C287D74 = 0x8C101BE4;
            } else {
                *(unsigned int *)0x8C287D74 = 0x8C101CA4;
            }
            *(unsigned int *)0x8C287D78 = 0x8C1021E4;
            u91 = (*(float *)0x8C0187E8);
        }
        *(float *)0x8C287B40 = u91;
        *(unsigned int *)0x8C287B30 = (*(int *)(((*(int *)0x8C287D78) + 0x0)));
        *(unsigned int *)0x8C287B38 = 0x1;
        *(unsigned int *)0x8C287B34 = 0x1;
    }
    return staffInitAll();
}

int sceneTwoPlayerSetup(int a4, int a5, int a6)
{
    int t19;
    int t25;
    int t46;
    int t5;
    int t9;
    int stk[20];

    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 20) + 0x8)) = *(struct mv4 *)(0x8C10DFBC); }
    if ((*(int *)0x8C287ADC) == 4) {
        if (((*(int *)0x8C34326C) != 0) && (t5 = *(int *)0x8C3432DC, t5 != 0)) {
            *(unsigned int *)0x8C185408 = 0x1;
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x0;
            *(unsigned int *)((((int)stk + 20) + 0x4)) = 0x2;
        }
        if (((*(int *)0x8C3432A4) != 0) && (t9 = *(int *)0x8C343314, t9 != 0)) {
            *(unsigned int *)0x8C185408 = 0x2;
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x1;
            *(unsigned int *)((((int)stk + 20) + 0x4)) = 0x3;
        }
    } else {
        if ((*(int *)0x8C34326C) != 0) {
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x0;
        } else {
            *(unsigned int *)((((int)stk + 20) + 0x0)) = 0x1;
        }
    }
    t19 = set_event(0x38, 0x8C08D78C);
    *(unsigned int *)((t19 + 0x20)) = 0x0;
    *(unsigned int *)((t19 + 0x24)) = 0x0;
    vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t19), 0.0f, 0.0f, -20.0f);
    *(unsigned short *)((t19 + 0x28)) = 0x0;
    if ((unsigned short)(*(short *)0x8C343262) == 1) {
        *(unsigned int *)((t19 + 0x2C)) = 0x0;
    } else {
        *(unsigned int *)((t19 + 0x2C)) = 0x1;
    }
    nlsndSeqRequest(0x503A9);
    matchSetupPlayers();
    t25 = *(int *)((((int)stk + 20) + 0x0));
    *(unsigned int *)((t19 + 0x30)) = ((t25 * 0xD78) + 0x8C287D84);
    playerInit(((t25 * 0xD78) + 0x8C287D84), (*(int *)((((int)stk + 20) + 0x0))));
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    *(unsigned int *)(((0xB5C + (*(int *)((t19 + 0x30)))) + 0x0)) = (*(int *)((((int)stk + 20) + 0x0)));
    *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xC58)) = 0x10;
    *(float *)(((*(int *)((t19 + 0x30))) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)((t19 + 0x30))) + 0xB18)) = 0.0f;
    *(unsigned short *)(((*(int *)((t19 + 0x30))) + 0xB10)) = 0x0;
    *(unsigned short *)(((*(int *)((t19 + 0x30))) + 0xB12)) = 0x0;
    *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xD4C)) = 0x0;
    vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x30)))), 0.0f, 0.0f, -20.0f);
    motionSet((*(int *)((t19 + 0x30))), 0x118E84, 0x1, 0x12755C, 0x8C157020, ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    if ((*(int *)0x8C287ADC) == 4) {
        vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x30)))), -4.0f, 0.0f, -20.0f);
        t46 = *(int *)(((((int)stk + 20) + 0x4) + 0x0));
        *(unsigned int *)((t19 + 0x34)) = ((t46 * 0xD78) + 0x8C287D84);
        playerInit(((t46 * 0xD78) + 0x8C287D84), (*(int *)(((((int)stk + 20) + 0x4) + 0x0))));
        *(unsigned int *)(((*(int *)((t19 + 0x30))) + 0xB5C)) = (*(int *)(((((int)stk + 20) + 0x4) + 0x0)));
        *(unsigned int *)(((*(int *)((t19 + 0x34))) + 0xC58)) = 0x11;
        *(unsigned short *)(((*(int *)((t19 + 0x34))) + 0xB10)) = 0x0;
        *(unsigned short *)(((*(int *)((t19 + 0x34))) + 0xB12)) = 0x0;
        *(float *)(((*(int *)((t19 + 0x34))) + 0xC90)) = 0.0f;
        *(float *)(((*(int *)((t19 + 0x34))) + 0xB18)) = 0.0f;
        *(unsigned int *)(((*(int *)((t19 + 0x34))) + 0xD4C)) = 0x0;
        vecMake(0x0, 0x0, 0x0, 0x0, (0xAE8 + (*(int *)((t19 + 0x34)))), 4.0f, 0.0f, -20.0f);
        motionSet((*(int *)((t19 + 0x34))), 0x117244, 0x1, 0x12755C, 0x8C1570A4, ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    }
    *(unsigned int *)0x8C287C60 = 0x0;
    return (vecMake(0x0, 0x0, 0x0, 0x0, 0x8C32DDA4, 0.0f, 0.0f, 0.0f));
}


int fadeQuadDraw(int a4, int a5, int a6, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[101];

    u0 = *(float *)((a6 + 0x18));
    u1 = *(float *)((a6 + 0x20));
    u2 = ((float)a4 * (u1 - u0));
    u3 = *(float *)((a6 + 0x1C));
    u4 = *(float *)((a6 + 0x24));
    u5 = u0;
    u5 = u5 + f4 * (u1 - u0);
    vecMake(a4, a5, (0xFF & (int)(f5 * 255.0f)), 0xFF000000, (((int)stk + 124) + 0x3C), (((float)a4 * (u1 - u0)) + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 120) + 0x34), (*(float *)((a6 + 0x4))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x2C), (((float)a4 * (u1 - u0)) + (*(float *)((a6 + 0x4)))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x24), (*(float *)((a6 + 0x4))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 108) + 0x1C), ((f4 * u2) + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 104) + 0x14), ((f4 * u2) + (*(float *)((a6 + 0x4)))), (((float)a5 * (u4 - u3)) + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 100) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 100) + 0x60), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 84) + 0x40)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f5 * 255.0f)) << 16) | ((0xFF & (int)(f5 * 255.0f)) << 8)) | (0xFF & (int)(f5 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x38 + (((int)stk + 100) + 0x60)), u5, ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f5 * 255.0f)) << 16) | ((0xFF & (int)(f5 * 255.0f)) << 8)) | (0xFF & (int)(f5 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x54 + (((int)stk + 100) + 0x60)), u5, ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0x94 + ((int)stk + 36))); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x70 + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x8C + ((int)stk + 20))); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x8C + (((int)stk + 100) + 0x60)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x6, (((int)stk + 100) + 0x60), (*(int *)((a6 + 0x0)))));
}

int seFootSlide(int a4, int a5, int a6, float f4, float f5)
{
    float u9;
    int t12;
    int t10;
    int t15;
    float u17;
    float u18;
    int t190;
    int t29;
    float u40;
    float u41;
    float u45;
    float u46;
    int t48;
    float u53;
    float u54;
    int t56;
    float u69;
    float u70;
    float u74;
    float u75;
    int t77;
    float u82;
    float u83;
    int t85;
    float u96;
    float u97;
    float u100;
    float u101;
    int t103;
    float u109;
    float u110;
    int t112;
    int t142;
    float u121;
    float u122;
    float u126;
    float u127;
    int t129;
    float u134;
    float u135;
    int t137;
    int t229;
    int t216;
    int t203;
    int t178;
    int t59;
    int t51;
    int t166;
    int t88;
    int t80;
    int t154;
    int t115;
    int t107;
    int t140;
    int t132;

    if ((*(int *)0x8C38BA70) == 0) {
    } else {
        if ((*(int *)0x8C38BA74) == 0) {
        } else {
            if ((*(int *)0x8C181758) != 0) {
            } else {
                u9 = *(float *)((a4 + 0x14));
                t12 = 0x1;
                if (u9 > 0.0f) {
                } else {
                    t10 = 0x0;
                    if (0.0f > u9) {
                        t10 = 0xFFFFFFFF;
                    }
                    t12 = t10;
                }
                t15 = 0x0;
                if ((*(int *)0x8C402C0C) != t12) {
                    t15 = 0x1;
                }
                u17 = *(float *)((a4 + 0x38));
                u18 = (-u17);
                if (!(0.0f > u17)) {
                    u18 = u17;
                }
                t190 = 0x8C0D19C4;
                if (!(u18 > 0.0500000007f)) {
                } else {
                    t29 = *(int *)0x8C402C08;
                    if (t29 == 0) {
                        if (t15 == 0) {
                            u40 = *(float *)((a4 + 0x38));
                            u41 = (-u40);
                            if (!(0.0f > u40)) {
                                u41 = u40;
                            }
                            if (!(0.699999988f > u41)) {
                                t51 = (nlsndSeqRequest(0x6A9));
                            } else {
                                u45 = *(float *)((a4 + 0x38));
                                u46 = (-u45);
                                if (!(0.0f > u45)) {
                                    u46 = u45;
                                }
                                t48 = 0x306A9;
                                if (0.400000006f > u46) {
                                    t48 = 0x406A9;
                                }
                                t51 = (nlsndSeqRequest(t48));
                            }
                            t59 = t51;
                        } else {
                            u53 = *(float *)((a4 + 0x38));
                            u54 = (-u53);
                            if (!(0.0f > u53)) {
                                u54 = u53;
                            }
                            t56 = 0x406A9;
                            if (!(0.699999988f > u54)) {
                                t56 = 0x306A9;
                            }
                            t59 = (nlsndSeqRequest(t56));
                        }
                        t178 = t59;
                    } else {
                        if (t29 == 1) {
                            if (t15 == 0) {
                                u69 = *(float *)((a4 + 0x38));
                                u70 = (-u69);
                                if (!(0.0f > u69)) {
                                    u70 = u69;
                                }
                                if (!(0.699999988f > u70)) {
                                    t80 = (nlsndSeqRequest(0x7A9));
                                } else {
                                    u74 = *(float *)((a4 + 0x38));
                                    u75 = (-u74);
                                    if (!(0.0f > u74)) {
                                        u75 = u74;
                                    }
                                    t77 = 0x407A9;
                                    if (0.400000006f > u75) {
                                        t77 = 0x507A9;
                                    }
                                    t80 = (nlsndSeqRequest(t77));
                                }
                                t88 = t80;
                            } else {
                                u82 = *(float *)((a4 + 0x38));
                                u83 = (-u82);
                                if (!(0.0f > u82)) {
                                    u83 = u82;
                                }
                                t85 = 0x507A9;
                                if (!(0.699999988f > u83)) {
                                    t85 = 0x407A9;
                                }
                                t88 = (nlsndSeqRequest(t85));
                            }
                            t166 = t88;
                        } else {
                            if (t29 == 2) {
                                if (t15 == 0) {
                                    u96 = *(float *)((a4 + 0x38));
                                    u97 = (-u96);
                                    if (!(0.0f > u96)) {
                                        u97 = u96;
                                    }
                                    if (0.699999988f > u97) {
                                        u100 = *(float *)((a4 + 0x38));
                                        u101 = (-u100);
                                        if (!(0.0f > u100)) {
                                            u101 = u100;
                                        }
                                        t103 = 0x108A9;
                                        if (0.400000006f > u101) {
                                            t103 = 0x208A9;
                                        }
                                        t107 = (nlsndSeqRequest(t103));
                                    } else {
                                        t107 = (nlsndSeqRequest(0x8A9));
                                    }
                                    t115 = t107;
                                } else {
                                    u109 = *(float *)((a4 + 0x38));
                                    u110 = (-u109);
                                    if (!(0.0f > u109)) {
                                        u110 = u109;
                                    }
                                    t112 = 0x208A9;
                                    if (!(0.699999988f > u110)) {
                                        t112 = 0x108A9;
                                    }
                                    t115 = (nlsndSeqRequest(t112));
                                }
                                t154 = t115;
                            } else {
                                t142 = t29;
                                if (t29 == 3) {
                                    if (t15 == 0) {
                                        u121 = *(float *)((a4 + 0x38));
                                        u122 = (-u121);
                                        if (!(0.0f > u121)) {
                                            u122 = u121;
                                        }
                                        if (!(0.699999988f > u122)) {
                                            t132 = (nlsndSeqRequest(0x8A9));
                                        } else {
                                            u126 = *(float *)((a4 + 0x38));
                                            u127 = (-u126);
                                            if (!(0.0f > u126)) {
                                                u127 = u126;
                                            }
                                            t129 = 0x208A9;
                                            if (!(0.400000006f > u127)) {
                                                t129 = 0x108A9;
                                            }
                                            t132 = (nlsndSeqRequest(t129));
                                        }
                                        t140 = t132;
                                    } else {
                                        u134 = *(float *)((a4 + 0x38));
                                        u135 = (-u134);
                                        if (!(0.0f > u134)) {
                                            u135 = u134;
                                        }
                                        t137 = 0x208A9;
                                        if (!(0.699999988f > u135)) {
                                            t137 = 0x108A9;
                                        }
                                        t140 = (nlsndSeqRequest(t137));
                                    }
                                    t142 = t140;
                                }
                                t154 = t142;
                            }
                            t166 = t154;
                        }
                        t178 = t166;
                    }
                    t190 = t178;
                }
                t203 = t190;
            }
            t216 = t203;
        }
        t229 = t216;
    }
    return t229;
}

int umpirePose(int a4)
{
    int t50;
    int t51;
    int t70;
    int t77;
    int t71;
    int t72;
    int t74;
    int t76;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D1070)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5B0))), (0x5B8 + a4), (*(int *)((a4 + 0x5B4))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    t50 = 0x0;
    t51 = (0x1E4 + a4);
    for (;;) {
        nlLoadMatrix(t51);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)((t50 + (*(int *)((0x8C1D0DF0 + ((*(int *)0x8C1891E8) << 2))))))));
        }
        t51 = (t51 + 0x40);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t50 = (t50 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)((0x1E4 + a4) + 0x3C0)) {
            break;
        }
    }
    t70 = *(int *)0x8C38B768;
    t77 = (nlPopMatrix(0x1));
    if (t70 != 0) {
        t71 = *(int *)(((int)stk + 8));
        t72 = t71;
        for (;;) {
            nlPushMatrix(0x0);
            t74 = *(int *)((t72 + 0x0));
            t72 = (t72 + 0x4);
            sklDrawNodeOne(t74);
            t76 = nlPopMatrix(0x1);
            if ((unsigned int)t72 >= (unsigned int)(t71 + 0x3C)) {
                break;
            }
        }
        t77 = t76;
    }
    return t77;
}

int netJudgePose(int a4)
{
    int t50;
    int t51;
    int t70;
    int t77;
    int t71;
    int t72;
    int t74;
    int t76;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D1070)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5B0))), (0x5B8 + a4), (*(int *)((a4 + 0x5B4))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
    t50 = 0x0;
    t51 = (0x1E4 + a4);
    for (;;) {
        nlLoadMatrix(t51);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)((t50 + (*(int *)((0x8C1D0DF0 + ((*(int *)0x8C1891E8) << 2))))))));
        }
        t51 = (t51 + 0x40);
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
        t50 = (t50 + 0x4);
        if ((unsigned int)t51 >= (unsigned int)((0x1E4 + a4) + 0x3C0)) {
            break;
        }
    }
    t70 = *(int *)0x8C38B768;
    t77 = (nlPopMatrix(0x1));
    if (t70 != 0) {
        t71 = *(int *)(((int)stk + 8));
        t72 = t71;
        for (;;) {
            nlPushMatrix(0x0);
            t74 = *(int *)((t72 + 0x0));
            t72 = (t72 + 0x4);
            sklDrawNodeOne(t74);
            t76 = nlPopMatrix(0x1);
            if ((unsigned int)t72 >= (unsigned int)(t71 + 0x3C)) {
                break;
            }
        }
        t77 = t76;
    }
    return t77;
}


void ADXF_Ocbi(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1F19C4))(a4, a5);
    return;
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

int entryCharaSelDraw(void)
{
    int t10;
    int t14;
    int t15;
    int t16;
    int t17;
    int t32;
    float u34;
    float u35;
    int t37;
    int t38;
    int t42;
    int t43;
    int t46;
    int t47;
    int t49;
    int t51;
    int t53;
    int t12;
    int t13;
    int t29;
    int stk[41];

    *(unsigned int *)0x8C34386C = ((*(int *)0x8C34386C) + 0x1);
    lightUpdate();
    camSetOrbit(0x600, 0x8000, 255.0f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 40), 0.0f, 12.0f, 0.0f);
    camSetEye();
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 40), 0.0f, 77.0f, 295.0f);
    camSetTarget();
    camMoveBegin(1.0f, 1.0f);
    *(float *)0x8C287A04 = 7.0f;
    camSetupView();
    t10 = (camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28)));
    t14 = 0x8C185298;
    t15 = 0x0;
    t16 = 0x8C185298;
    t17 = 0x0;
    for (;;) {
        if ((unsigned int)t16 >= (unsigned int)0x8C1852A0) {
            break;
        }
        t13 = (*(short *)((t16 + 0x0)));
        t10 = (*(short *)0x8C343262);
        t13 = (unsigned short)t13;
        t10 = (unsigned short)t10;
        t32 = t14;
        if ((t10 & t13) != 0) {
            t10 = 0x56C;
            t13 = 0x8C343258;
            t13 = (t13 + 0xC);
            t10 = (t10 + 0x8C343258);
            t10 = (*(int *)((t15 + t10)));
            t10 = (t10 * 0x38);
            t10 = (t10 + t13);
            t10 = (*(int *)((t10 + 0x18)));
            if (t10 == 1) {
                t14 = 0x56C;
                t13 = 0x8C0A94FC;
                t14 = (t14 + 0x8C343258);
                t14 = (t14 + t17);
                t14 = (*(int *)((t14 + 0x0)));
                t10 = (selModelSpawn(t14, 0x0));
                t12 = 0x56C;
                t12 = (t12 + 0x8C343258);
                t12 = (t12 + t17);
                t13 = (*(int *)((t12 + 0x0)));
                t12 = 0x8C343258;
                t12 = (t12 + 0xC);
                t13 = (t13 * 0x38);
                t13 = (t13 + t12);
                *(unsigned int *)((t13 + 0x18)) = (0x0);
            } else {
                t29 = t14;
            }
            t32 = t29;
        }
        t16 = (t16 + 0x2);
        t14 = t32;
        t15 = (t15 + 0x4);
        t17 = (t17 + 0x4);
    }
    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x4);
    u34 = *(float *)0x8C0AE040;
    u35 = *(float *)0x8C0AE044;
    t37 = 0x10;
    t38 = (((int)stk + 52) + 0x4);
    for (;;) {
        if ((unsigned int)t38 >= (unsigned int)((((int)stk + 52) + 0x4) + 0x18)) {
            break;
        }
        vecMake(t14, 0x0, 0x0, 0x0, (t38), (float)t37, u35, u34);
        t38 = (t38 + 0xC);
        t37 = (t37 + 0x92);
    }
    t42 = 0x150;
    t43 = ((((int)stk + 52) + 0x4) + 0x18);
    for (;;) {
        if ((unsigned int)t43 >= (unsigned int)((((int)stk + 52) + 0x4) + 0x30)) {
            break;
        }
        vecMake(t14, 0x0, 0x0, 0x0, (t43), (float)t42, u35, u34);
        t43 = (t43 + 0xC);
        t42 = (t42 + 0x92);
    }
    t46 = *(int *)(((int)stk + 52));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(t46); }
    t47 = entryGetColorId(0x0, *(Stk3 *)(t46));
    selCharInfoDraw(0x0, t47);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0xC)); }
    t49 = entryGetColorId(0x2, *(Stk3 *)(((((int)stk + 52) + 0x4) + 0xC)));
    selCharInfoDraw(0x2, t49);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0x18)); }
    t51 = entryGetColorId(0x1, *(Stk3 *)(((((int)stk + 52) + 0x4) + 0x18)));
    selCharInfoDraw(0x1, t51);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0x24)); }
    t53 = entryGetColorId(0x3, *(Stk3 *)(((((int)stk + 52) + 0x4) + 0x24)));
    return (selCharInfoDraw(0x3, t53));
}

