/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[10]; } Stk10;
int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ADXPD_GetStat(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADX_DecodeInfoAiff(int, int, int, int, int, int, int, int, int, int);
int FUN_8c1e6420(float);
int _lsfts(int, int, int);
int _mvito4b(int, int);
int adxt_stat_decend(int, int, int, int);
int adxt_stat_decinfo(int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int);
int arcadeNextMatch(void);
int charaModelCount(int, int);
int charaTexCount(int);
int entryGetRound(void);
int hudCallDigitPut(int, Stk3, float, float);
int kmBeginPass(int);
int kmBeginScene(int);
int kmSetWaitVsyncCount(int);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDMAValue(int);
int kmyGetNativeBufferStatus(int, int);
int kmyRequestCallback(int);
int memmove(int, int, int);
int memset(int, int, int);
int modelSwapMaterial(int, int, int);
int motionSet(int, int, int, int, int, int, float);
int mpdrv_insertnop(int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_getcond_ns(int, int);
int nlArcTan2(float, float);
int nlCreateVertexBuffer_clx16(void);
int nlCreateVertexBuffer_clx22(int, int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlDispStripTrnsl(int, int);
int nlObjPutTrnsl(int, float);
int nlRand(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int nlsndSeqRequest(int);
int phraseWordsInitB(void);
int primFrameCorners(int, int, int, int, Stk3);
int set_event2(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern float vecDistXZf();
int vecLineCrossXZ(int, ...);
int vecMake(int, int, int, int, int, float, float, float);
int crowdInit(void);
int staffMorphCapture(int a4, int a5, int a6, int a7);
int miniTargetDraw(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAuUlaw(int a4, int a5, int a6, int a7);
void vecSegCrossXZ(Stk10 s);
float ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int frame_make(void);
int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7);
int ADXT_ExecHndl(int a4, int a5, int a6, int a7);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int arcadeNextStage(void);
void umpCallScore(void);
int hudCallNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int nlsndIcsControl(int a4, int a5, int a6);
int ADXB_ExecOneAu8(int a4, int a5, int a6, int a7);
int uniformTexRestore(int a4);
void sprListPutGrad(int a4, int a5, int a6, int a7, float f4, float f5);
int kmiFLWCTRLEORCallBackFunc(int a4, int a5);
int msgWinFramePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int nlCreateVertexBuffer(int a4, int a5, int a6, int a7);
int nlsndSystemControl(int a4, int a5, int a6);
int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7);
void cpuSglShotDefault(int a4);
int _unpack(int a4, int a5, int a6, float f4, float f5);
int nlSpriteF2ARGB(float f4, float f5, float f6, float f7);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7, float f4);
int kmiFLWCTRLEOVCallBackFunc(int a4);
int phraseInit(void);

int crowdInit(void)
{
    int t1;
    int t13;
    int t20;
    int t21;
    int t24;
    int t26;
    int t0;

    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E0)) = t1;
        *(unsigned int *)(((0x1E4 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)t1 % (int)0x11));
        if ((*(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E4))) == 16) {
            t0 = (t1 * 0x1F4);
            t0 = (t0 + 0x8C344A08);
            *(unsigned int *)((t0 + 0x1E4)) = 0x1;
        }
        t0 = 0x8C0F7BAC;
        *(unsigned int *)(((0x1EC + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0x1C));
        t0 = 0x1EC;
        t0 = (t0 + ((t1 * 0x1F4) + 0x8C344A08));
        t0 = (*(int *)((t0 + 0x0)));
        t13 = t0;
        t0 = (t0 << 1);
        t0 = (t0 + t13);
        t0 = (t0 << 2);
        t0 = (t0 + 0x8C11F830);
        *(unsigned int *)(((0x1E8 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)(*(int *)((t0 + 0x4)))));
        *(unsigned int *)(((0x1F0 + ((t1 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0xA));
        t0 = (*(int *)0x8C2873D0);
        t20 = t0;
        t21 = *(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1E4));
        t0 = (*(int *)((((((t21 << 1) + t21) << 2) << 2) + 0x8C11F530)));
        t24 = *(int *)((((t1 * 0x1F4) + 0x8C344A08) + 0x1EC));
        t26 = motionSet(((t1 * 0x1F4) + 0x8C344A08), (*(int *)((((((t24 << 1) + t24) << 2) + 0x8C11F830) + 0x0))), 0x1, 0x12764C, (t0), t20, 1.0f);
        t0 = 0x1E;
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)t0) {
            break;
        }
    }
    return t26;
}


int miniTargetDraw(int a4, int a5, int a6, int a7)
{
    float u0;
    int t2;
    float t5;
    float t8;
    int t17;
    int t21;
    float u23;
    float u24;
    float u26;
    float u28;
    float u14;
    float u15;

    u0 = *(float *)0x8C03B0F0;
    t2 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t2 != 6) {
        if (t2 != 2) {
            if ((t2 != 0) && (t2 != 5)) {
                return t2;
            }
            t5 = ((float (*)(int, int, int, int, float, float, float, float))(vecDistXZf))(a4, a5, a6, a7, 0.0f, 0.0f, (*(float *)((a4 + 0x20))), (*(float *)((a4 + 0x28))));
            t8 = ((float (*)(float, float, float, float))(vecDistXZf))(0.0f, 0.0f, (*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x8))));
            if (t5 > t8) {
                u14 = (*(float *)((a4 + 0x20)));
                u15 = (*(float *)((a4 + 0x28)));
            } else {
                u14 = (*(float *)((a4 + 0x0)));
                u15 = (*(float *)((a4 + 0x8)));
            }
            t17 = nlArcTan2(u14, u15);
            nlRotateAY(t17);
            return nlObjPutTrnsl(0xCB5E598, u0);
        }
        t21 = nlArcTan2((*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x18))));
        nlRotateAY(t21);
        u23 = *(float *)((a4 + 0x14));
        u24 = (-u23);
        if (!(0.0f > u23)) {
            u24 = u23;
        }
        u26 = 1.0f;
        u26 = u26 + (1.0f + 1.0f) * ((-u24) + 1.0f);
        nlScale(1.0f, 1.0f, u26);
        return nlObjPutTrnsl(0xCB5E4A0, u0);
    }
    u28 = *(float *)0x8C03B100;
    nlScale(u28, u28, u28);
    return nlObjPutTrnsl(0xCB5E4A0, u0);
}

int ADXB_ExecOneAuUlaw(int a4, int a5, int a6, int a7)
{
    int t1;
    int t78;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t38;
    int t24;
    int t25;
    int t26;
    int t29;
    int t48;
    int t39;
    int t40;
    int t41;
    int t42;
    int t79;
    int t85;
    int t84;
    int t67;
    int t55;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t78 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                t38 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        t26 = (t26 + 0x1);
                        *(unsigned short *)(((((t18 << 1) + t14) + t24) + 0x0)) = (*(short *)((0x8C20CAC4 + ((unsigned char)(*(signed char *)((t25 + t1))) << 1))));
                        t29 = *(signed char *)((((t25 + 0x1) + t1) + 0x0));
                        t25 = (t25 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t24)) = (*(short *)(((((unsigned char)t29 << 1) + 0x8C20CAC4) + 0x0)));
                        t24 = (t24 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t38 = t25;
                }
                t55 = t38;
            } else {
                t48 = (0x0 + ((t18 << 1) + t14));
                if ((int)t16 > 0) {
                    t39 = (0x0 + t1);
                    t40 = (0x0 + ((t18 << 1) + t14));
                    t41 = 0x0;
                    for (;;) {
                        t42 = *(signed char *)((t39 + 0x0));
                        t39 = (t39 + 0x1);
                        t41 = (t41 + 0x1);
                        *(unsigned short *)((t40 + 0x0)) = (*(short *)((0x8C20CAC4 + ((unsigned char)t42 << 1))));
                        t40 = (t40 + 0x2);
                        if ((int)t41 >= (int)t16) {
                            break;
                        }
                    }
                    t48 = t40;
                }
                t55 = t48;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t67 = t55;
        }
        t78 = t67;
    }
    t79 = *(int *)((a4 + 0x4));
    t85 = t79;
    if (t79 == 2) {
        t84 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t78);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t85 = t84;
    }
    return t85;
}



int frame_make(void)
{
    int t0;
    int t1;
    int t4;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t36;
    int t37;
    int t5;
    int t8;
    int t9;
    int t23;
    int t64;
    int t65;
    int t66;
    int t60;
    int t61;
    int t62;
    int t55;
    int t56;
    int t57;
    int t50;
    int t51;
    int t52;
    int t45;
    int t46;
    int t47;
    int t41;
    int t42;
    int t43;

    t0 = *(int *)0x8C47317C;
    t1 = *(int *)((t0 + 0x10E4));
    t4 = 0x10E4;
    if ((int)t1 > 0) {
        t4 = (mpdrv_insertnop((*(int *)((t0 + 0x10E4)))));
    } else {
        t5 = t1;
    }
    t7 = t4;
    t10 = t5;
    t11 = (0x44C + t0);
    t12 = (t0 + 0x28);
    t13 = 0x0;
    for (;;) {
        if ((int)t13 >= (int)0x18) {
            break;
        }
        t10 = 0xF90;
        t7 = (*(int *)0x8C47317C);
        t10 = (t10 + t7);
        t10 = (t10 + t13);
        t9 = (*(signed char *)((t10 + 0x0)));
        if ((t9 != 0) && (t23 = *(signed char *)((t12 + 0x6)), t7 = t23, t7 == 0)) {
            t7 = (*(signed char *)((t12 + 0x4)));
            t7 = (unsigned char)t7;
            if (t7 != 1) {
                if (t7 != 2) {
                    if (t7 != 3) {
                        if (t7 != 4) {
                            if (t7 != 9) {
                                t41 = t8;
                                t42 = t9;
                                t43 = t10;
                            } else {
                                t36 = *(int *)((t11 + 0x0));
                                t9 = t36;
                                t37 = t36;
                                if ((t9 & 0x1) != 0) {
                                    t37 = 0x1;
                                }
                                t9 = 0x8C1FE6A2;
                                t7 = (mpdrv_set_getcond_ns(t13, t37));
                            }
                            t45 = t41;
                            t46 = t42;
                            t47 = t43;
                        } else {
                            t9 = 0x8C1FE748;
                            t7 = (mpdrv_set_dkill_ns(t13));
                        }
                        t50 = t45;
                        t51 = t46;
                        t52 = t47;
                    } else {
                        t9 = 0x8C1FE78C;
                        t7 = (mpdrv_set_dreset_ns(t13));
                    }
                    t55 = t50;
                    t56 = t51;
                    t57 = t52;
                } else {
                    t9 = 0x8C1FE7D0;
                    t7 = (mpdrv_set_allstatreq_ns(t13));
                }
                t60 = t55;
                t61 = t56;
                t62 = t57;
            } else {
                t7 = (mpdrv_set_dreq_ns(t13));
            }
            t64 = t60;
            t65 = t61;
            t66 = t62;
        } else {
            t64 = t8;
            t65 = t9;
            t66 = t10;
        }
        t8 = t64;
        t11 = (t11 + 0x78);
        t9 = t65;
        t10 = t66;
        t12 = (t12 + 0x2C);
        t13 = (t13 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}

int ADXB_ExecOneWav8(int a4, int a5, int a6, int a7)
{
    int t1;
    int t71;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t35;
    int t24;
    int t25;
    int t26;
    int t28;
    int t43;
    int t36;
    int t37;
    int t38;
    int t39;
    int t72;
    int t78;
    int t77;
    int t61;
    int t50;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t71 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                t35 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = (((unsigned char)(*(signed char *)((t24 + t1))) - 128) << 8);
                        t28 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = (((unsigned char)t28 - 128) << 8);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t35 = t26;
                }
                t50 = t35;
            } else {
                t43 = 0x0;
                if ((int)t16 > 0) {
                    t36 = (0x0 + t1);
                    t37 = (0x0 + ((t18 << 1) + t14));
                    t38 = 0x0;
                    for (;;) {
                        t39 = *(signed char *)((t36 + 0x0));
                        t36 = (t36 + 0x1);
                        t38 = (t38 + 0x1);
                        *(unsigned short *)((t37 + 0x0)) = (((unsigned char)t39 - 128) << 8);
                        t37 = (t37 + 0x2);
                        if ((int)t38 >= (int)t16) {
                            break;
                        }
                    }
                    t43 = t38;
                }
                t50 = t43;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t61 = t50;
        }
        t71 = t61;
    }
    t72 = *(int *)((a4 + 0x4));
    t78 = t72;
    if (t72 == 2) {
        t77 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t71);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t78 = t77;
    }
    return t78;
}

int ADXT_ExecHndl(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            adxt_stat_decinfo(a4);
        } else {
            t7 = *(signed char *)((a4 + 0x1));
            if (t7 == 2) {
                adxt_stat_prep(a4);
            } else {
                if (t7 == 4) {
                    adxt_stat_decend(a4, a5, a6, a7);
                } else {
                    if ((*(signed char *)((a4 + 0x1))) == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return ((int (*)(int))(0x8C1F1658))(a4);
}

int ADXB_DecodeHeaderAiff(int a4, int a5, int a6)
{
    int t2;
    int stk[12];

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAiff((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 4) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    if ((int)t2 < 0) {
        return 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x4A)) = 0x0;
    *(unsigned short *)((a4 + 0x48)) = 0x0;
    *(unsigned short *)((a4 + 0x26)) = 0x0;
    *(unsigned short *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    *(unsigned int *)(((0x58 + a4) + 0x0)) = (*(signed char *)((a4 + 0xE)));
    *(unsigned int *)(((0x5C + a4) + 0x0)) = (*(signed char *)((a4 + 0xF)));
    *(unsigned int *)((a4 + 0x60)) = (*(int *)((a4 + 0x10)));
    *(unsigned int *)((a4 + 0x64)) = (*(int *)((a4 + 0x3C)));
    *(unsigned int *)((a4 + 0x68)) = (*(int *)((a4 + 0x40)));
    *(unsigned int *)((a4 + 0x6C)) = (*(int *)((a4 + 0x44)));
    *(unsigned short *)(((a4 + 0x7C) + 0x0)) = (*(short *)((a4 + 0x48)));
    *(unsigned short *)((a4 + 0x7E)) = (*(short *)((a4 + 0x4A)));
    *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
    *(unsigned int *)((a4 + 0x9C)) = 0x0;
    *(unsigned int *)((a4 + 0x98)) = 0x0;
    *(unsigned short *)((a4 + 0xA8)) = 0x3;
    if ((*(signed char *)((a4 + 0xD))) == 8) {
        *(unsigned short *)((a4 + 0xAA)) = 0x1;
    } else {
        *(unsigned short *)((a4 + 0xAA)) = 0x0;
    }
    memset((a4 + 0x4C), 0x0, 0x4);
    return (*(short *)(((int)stk + 28)));
}

int arcadeNextStage(void)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t13;

    t0 = *(int *)0x8C287AF0;
    t2 = (int)((int)((*(int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0))) + 0x1) % (int)0x6);
    *(unsigned int *)(((((t0 & 0x1) << 2) + 0x8C287AD0) + 0x0)) = t2;
    t3 = t2;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t3 = t5;
        t3 = (t3 << 2);
        t3 = (*(int *)((0x8C287AE0 + t3)));
        if (t3 == 1) {
            t3 = (t5 * 0xD78);
            t3 = (t3 + 0x8C287D84);
            t3 = (*(int *)(((0xC58) + t3)));
            t3 = (t3 << 2);
            *(unsigned int *)((0x8C287C74 + t3)) = 0x0;
        }
        t5 = (t5 + 0x1);
    }
    if ((*(int *)0x8C287D5C) == 0) {
        t13 = entryGetRound();
        if ((int)t13 >= (int)0x5) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x0;
            return t13;
        }
        return arcadeNextMatch();
    }
    return arcadeNextMatch();
}

void umpCallScore(void)
{
    int t1;
    float u2;
    float u3;
    float u6;
    int t8;
    int t12;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        u2 = *(float *)0x8C084678;
        u3 = *(float *)0x8C08467C;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), (*(float *)0x8C084680), u3, u2);
        u6 = *(float *)0x8C084684;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), u6, u3, u2);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        t8 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t8 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t8), (*(float *)0x8C084688), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t8), u6, u3, u2);
        *(float *)((t8 + 0x80)) = 1.0f;
        *(unsigned int *)((t8 + 0x88)) = 0x0;
        *(float *)((t8 + 0x80)) = 0.0f;
        t12 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t12 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t12), (*(float *)0x8C08468C), u3, u2);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t12), u6, u3, u2);
        *(float *)((t12 + 0x80)) = 1.0f;
        *(unsigned int *)((t12 + 0x88)) = 0x0;
        *(float *)((t12 + 0x80)) = 0.0f;
    }
}


int nlsndIcsControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA5) {
        if (a5 != 0x10A5) {
            if ((a5 != 0x20A5) && ((a5 != 0x30A5) && ((a5 != 0x40A5) && ((a5 != 0xA7) && (a5 != 0x10A7))))) {
                if (a5 != 0x50A5) {
                    if (a5 != 0xA6) {
                        return 0xFFFFFFFE;
                    }
                    return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1))));
                }
                return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0x7F) << 16)));
    }
    t0 = nlsndSeqRequest(((((0x7F00 & a6) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
    if (t0 != 0) {
        return t0;
    }
    return nlsndSeqRequest(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5));
}

int ADXB_ExecOneAu8(int a4, int a5, int a6, int a7)
{
    int t1;
    int t71;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t35;
    int t24;
    int t25;
    int t26;
    int t28;
    int t43;
    int t36;
    int t37;
    int t38;
    int t39;
    int t72;
    int t78;
    int t77;
    int t61;
    int t50;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t71 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                t35 = 0x0;
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t18 << 1) + t14) + t25) + 0x0)) = ((unsigned char)(*(signed char *)((t24 + t1))) << 8);
                        t28 = *(signed char *)((((t24 + 0x1) + t1) + 0x0));
                        t26 = (t26 + 0x1);
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = ((unsigned char)t28 << 8);
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                    t35 = t26;
                }
                t50 = t35;
            } else {
                t43 = 0x0;
                if ((int)t16 > 0) {
                    t36 = (0x0 + t1);
                    t37 = (0x0 + ((t18 << 1) + t14));
                    t38 = 0x0;
                    for (;;) {
                        t39 = *(signed char *)((t36 + 0x0));
                        t36 = (t36 + 0x1);
                        t38 = (t38 + 0x1);
                        *(unsigned short *)((t37 + 0x0)) = ((unsigned char)t39 << 8);
                        t37 = (t37 + 0x2);
                        if ((int)t38 >= (int)t16) {
                            break;
                        }
                    }
                    t43 = t38;
                }
                t50 = t43;
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = (t16 * (*(signed char *)((a4 + 0xE))));
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t61 = t50;
        }
        t71 = t61;
    }
    t72 = *(int *)((a4 + 0x4));
    t78 = t72;
    if (t72 == 2) {
        t77 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t71);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t78 = t77;
    }
    return t78;
}

int uniformTexRestore(int a4)
{
    int t0;
    int t7;
    int t8;
    int t9;
    int t39;
    int t10;
    int t11;
    int t13;
    int t4;
    int t6;
    int t12;
    int stk[11];

    t0 = *(int *)0x8C287D5C;
    if ((t0 != 2) && (t0 != 3)) {
        t4 = (*(int *)(((a4 * 0x38) + 0x8C343268)));
        t6 = a4;
    } else {
        t4 = (*(int *)0x8C421F70);
        t6 = 0x0;
    }
    *(unsigned int *)(((int)stk + 8)) = (t6 * 0x38);
    t7 = *(int *)((((t6 * 0x38) + 0x8C343264) + 0x0));
    t8 = *(int *)((((t6 * 0x38) + 0x8C343264) + 0x34));
    t9 = charaTexCount(t7);
    t39 = t8;
    if (t8 != -1) {
        t10 = ((t4 * 0x70) + 0x8C1AF8A4);
        t11 = 0x0;
        for (;;) {
            t11 = (t11 + 0x1);
            *(unsigned int *)((t10 + 0x0)) = 0x0;
            t10 = (t10 + 0x4);
            if ((int)t11 >= (int)0x1C) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            t13 = charaModelCount(t7, t11);
            if ((int)(*(int *)(((int)stk + 4))) >= (int)t13) {
                break;
            }
            t12 = (*(int *)(((int)stk + 4)));
            t12 = (t12 << 2);
            modelSwapMaterial((*(int *)((t12 + (*(int *)((((t7 << 2) + 0x8C1AF85C) + 0x0)))))), ((*(int *)(((((t8 << 2) << 2) + 0x8C124C10) + 0x0))) + (t9 - 27)), (*(int *)(((((t7 << 2) << 2) + 0x8C124AF0) + 0x0))));
            modelSwapMaterial((*(int *)((t12 + (*(int *)((((t7 << 2) + 0x8C1AF85C) + 0x0)))))), ((*(int *)(((((t8 << 2) << 2) + 0x8C124C10) + 0x4))) + (t9 - 27)), (*(int *)(((((t7 << 2) << 2) + 0x8C124AF0) + 0x4))));
            modelSwapMaterial((*(int *)((t12 + (*(int *)((((t7 << 2) + 0x8C1AF85C) + 0x0)))))), ((*(int *)(((((t8 << 2) << 2) + 0x8C124C10) + 0x8))) + (t9 - 27)), (*(int *)(((((t7 << 2) << 2) + 0x8C124AF0) + 0x8))));
            modelSwapMaterial((*(int *)((t12 + (*(int *)((((t7 << 2) + 0x8C1AF85C) + 0x0)))))), ((*(int *)(((((t8 << 2) << 2) + 0x8C124C10) + 0xC))) + (t9 - 27)), (*(int *)(((((t7 << 2) << 2) + 0x8C124AF0) + 0xC))));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
        *(unsigned int *)(((0x8C343264 + (*(int *)(((int)stk + 8)))) + 0x34)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + (*(int *)(((int)stk + 8)))) + 0x30)) = 0xFFFFFFFF;
        t39 = t13;
    }
    return t39;
}


int kmiFLWCTRLEORCallBackFunc(int a4, int a5)
{
    int t1;
    int t11;

    if ((*(int *)0x8C4607B4) == 0) {
    } else {
        t1 = *(int *)0x8C45F8FC;
        *(unsigned int *)0x8C45F8FC = (t1 + 0x1);
        *(unsigned int *)((((((t1 + 0x1) - 1) << 2) + 0x8C45F8D8) + 0x0)) = ((*(int *)((((((t1 + 0x1) - 1) << 2) + 0x8C45F8D8) + 0x0))) - (*(int *)0xFFD8000C));
        *(unsigned int *)0x8C45F8FC = ((*(int *)0x8C45F8FC) & 0x7);
        *(unsigned int *)0x8C4607B4 = 0x0;
        *(unsigned int *)(((*(int *)0x8C4607B8) + 0x14)) = 0x6;
        if ((*(int *)0x8C4607E8) == 0) {
            t11 = *(int *)(((*(int *)0x8C4607B8) + 0x20));
            if ((unsigned int)t11 < (unsigned int)(*(int *)0x8C45F938)) {
                if ((*(int *)0x8C45F95C) != 0) {
                    *(unsigned int *)0x8C45F950 = ((*(int *)0x8C45F950) | (((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31))));
                } else {
                    *(unsigned int *)0x8C45F944 = ((*(int *)0x8C45F944) & (~(((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31)))));
                }
            }
            *(unsigned int *)(((*(int *)0x8C4607B8) + 0x20)) = 0xFFFFFFFF;
        }
        *(unsigned int *)0x8C4607BC = (*(int *)0x8C4607B8);
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x0);
    }
    return 0x0;
}


int nlCreateVertexBuffer(int a4, int a5, int a6, int a7)
{
    int t7;
    int t8;
    int t13;
    int t11;
    int t3;

    if ((*(int *)0x8C424414) == 1) {
        t3 = (nlCreateVertexBuffer_clx22(a4, a5, a6, a7));
    } else {
        t3 = (nlCreateVertexBuffer_clx16());
    }
    nlSysInitStripContextBG(0x8C454FE0);
    nlSysInitStripContextVtx(0x8C458610);
    *(unsigned int *)0x8C458C10 = 0x8C458610;
    *(unsigned int *)0x8C458C14 = 0x0;
    t7 = *(short *)0x8C458DDA;
    t8 = *(short *)0x8C458DD8;
    if (0x0 != 0) {
        t13 = (short)t7;
        if ((*(short *)0x8C458DDE) == 1) {
            t11 = ((short)t7 + (short)t7);
            if ((int)((short)t7 + (short)t7) > (int)0x1E0) {
                t11 = 0x1E0;
            }
            t13 = t11;
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)t13);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)(short)t7);
    }
    FUN_8c1e6420(0.0199999996f);
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    kmSetWaitVsyncCount((*(int *)0x8C424474));
    if ((*(int *)0x8C424460) == 0) {
        kmBeginScene(0x8C42420C);
        kmBeginPass(0x8C454FC0);
        *(unsigned int *)0x8C42445C = (*(int *)0x8C454FC0);
    }
    return t3;
}

int nlsndSystemControl(int a4, int a5, int a6)
{
    if ((0xFF00 & a5) == 0) {
        return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
    }
    if ((a5 != 0x1A0) && ((a5 != 0x4A0) && ((a5 != 0x9A0) && ((a5 != 0xAA0) && ((a5 != 0x10A0) && ((a5 != 0x19A0) && (a5 != 0x1CA0))))))) {
        if ((a5 != 0x5A0) && ((a5 != 0x6A0) && ((a5 != 0x7A0) && (a5 != 0x11A0)))) {
            if (a5 != 0x1BA0) {
                if ((a5 != 0x30A0) && ((a5 != 0x28A0) && (a5 != 0x29A0))) {
                    if ((a5 != 0x2A0) && (a5 != 0x3A0)) {
                        return 0xFFFFFFFE;
                    }
                    return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
                }
                return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 - 1) & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0xF) << 16)));
        }
        return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
    }
    return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
}

int ADXB_ExecOneSpsd(int a4, int a5, int a6, int a7)
{
    int t1;
    int t69;
    int t3;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t35;
    int t36;
    int t70;
    int t76;
    int t75;
    int t59;

    t1 = *(int *)(((a4 + 0x50) + 0x0));
    t69 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t3 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t3 == 0) {
            t6 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x88)))))((*(int *)((a4 + 0x8C))), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t7 = *(int *)(((a4 + 0x50) + 0x18));
            t8 = *(int *)(((a4 + 0x50) + 0x20));
            t10 = *(int *)(((a4 + 0x50) + 0x4));
            t12 = (t7 - t8);
            if ((int)(t7 - t8) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t12 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t14 = *(int *)(((a4 + 0x50) + 0x14));
            t16 = t12;
            if ((int)t12 > (int)t10) {
                t16 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t18 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t22 = *(int *)(((a4 + 0x50) + 0x1C));
                t23 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t16 > 0) {
                    t24 = 0x0;
                    t25 = 0x0;
                    t26 = 0x0;
                    for (;;) {
                        t26 = (t26 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t25)) = (*(short *)((((t24 << 1) + t1) + 0x0)));
                        t28 = *(short *)(((((t24 + 0x1) << 1) + t1) + 0x0));
                        t24 = (t24 + 0x2);
                        *(unsigned short *)(((((t22 + t23) << 1) + t14) + t25)) = t28;
                        t25 = (t25 + 0x2);
                        if ((int)t26 >= (int)t16) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t16 > 0) {
                    t35 = 0x0;
                    t36 = 0x0;
                    for (;;) {
                        t36 = (t36 + 0x1);
                        *(unsigned short *)((((t18 << 1) + t14) + t35)) = (*(short *)((t1 + t35)));
                        t35 = (t35 + 0x2);
                        if ((int)t36 >= (int)t16) {
                            break;
                        }
                    }
                }
            }
            *(unsigned int *)((a4 + 0xA0)) = t16;
            *(unsigned int *)((a4 + 0xA4)) = ((t16 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t59 = 0x0;
        }
        t69 = t59;
    }
    t70 = *(int *)((a4 + 0x4));
    t76 = t70;
    if (t70 == 2) {
        t75 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x90)))))((*(int *)((a4 + 0x94))), (*(int *)((a4 + 0xA4))), (*(int *)((a4 + 0xA0))), t69);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t76 = t75;
    }
    return t76;
}


int _unpack(int a4, int a5, int a6, float f4, float f5)
{
    int t1;
    int t4;
    int t5;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t25;
    int stk[9];

    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = f5;
    *(float *)(((((int)stk + 4) + 0x8) + 0x0)) = f4;
    t1 = 0x1;
    if (((unsigned short)(*(short *)((((((int)stk + 4) + 0x4) + 0x6) + 0x0))) & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    *(unsigned short *)((a5 + 0x0)) = (*(short *)((((((int)stk + 4) + 0x4) + 0x6) + 0x0)));
    t4 = *(short *)((a5 + 0x0));
    t5 = _builtin_get_fpscr();
    *(unsigned short *)((a5 + 0x0)) = ((int)(t4 & 0x7FF0) >> 4);
    _builtin_set_fpscr((t5 & 0xFFE7FFFF));
    _mvito4b(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 2));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memmove(a6, (((int)stk + 4) + 0x1), 0x3);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    _mvito4b(((int)stk + 4), (((((int)stk + 4) + 0x4) + 0x6) - 6));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memmove((a6 + 0x3), ((int)stk + 4), 0x4);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    _lsfts(a6, 0x7, 0x3);
    if ((int)(*(short *)((a5 + 0x0))) > 0) {
        t16 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t16 | 0x80);
        t25 = (t16 | 0x80);
    } else {
        t17 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t17 + 0x1);
        t18 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t18 & 0x7F);
        t19 = (t18 & 0x7F);
        t20 = (t17 + 0x1);
        for (;;) {
            if (((unsigned char)(*(signed char *)((a6 + 0x0))) & 0x80) != 0) {
                break;
            }
            t20 = (_builtin_get_fpscr());
            t20 = (t20 & 0xFFE7FFFF);
            _builtin_set_fpscr(t20);
            t19 = (_lsfts(a6, 0x7, 0x1));
            t20 = (*(short *)((a5 + 0x0)));
            t20 = (t20 - 1);
            *(unsigned short *)((a5 + 0x0)) = t20;
        }
        t25 = t19;
    }
    return t25;
}

int nlSpriteF2ARGB(float f4, float f5, float f6, float f7)
{
    float u2;
    float u6;
    float u10;
    float u14;
    int t16;
    int t18;
    int t20;
    int t22;

    u2 = (f4 * 255.0f);
    if ((f4 * 255.0f) > 2.14748365e+09f) {
        u2 = ((f4 * 255.0f) + -4.2949673e+09f);
    }
    u6 = (f5 * 255.0f);
    if ((f5 * 255.0f) > 2.14748365e+09f) {
        u6 = ((f5 * 255.0f) + -4.2949673e+09f);
    }
    u10 = (f6 * 255.0f);
    if ((f6 * 255.0f) > 2.14748365e+09f) {
        u10 = ((f6 * 255.0f) + -4.2949673e+09f);
    }
    u14 = (f7 * 255.0f);
    if ((f7 * 255.0f) > 2.14748365e+09f) {
        u14 = ((f7 * 255.0f) + -4.2949673e+09f);
    }
    t16 = (int)u2;
    if ((unsigned int)(int)u2 > (unsigned int)0xFF) {
        t16 = 0xFF;
    }
    t18 = (int)u6;
    if ((unsigned int)(int)u6 > (unsigned int)0xFF) {
        t18 = 0xFF;
    }
    t20 = (int)u10;
    if ((unsigned int)(int)u10 > (unsigned int)0xFF) {
        t20 = 0xFF;
    }
    t22 = (int)u14;
    if ((unsigned int)(int)u14 > (unsigned int)0xFF) {
        t22 = 0xFF;
    }
    return ((((((t16 << 8) | t18) << 8) | t20) << 8) | t22);
}

int adxsjd_decexec_start(int a4, int a5, int a6, int a7, float f4)
{
    int t10;
    int t14;
    int t16;
    int t20;
    int t25;
    int t27;
    int t29;
    int t32;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R12;
    int R13;
    int R14;
    float F3;
    float F4;
    float F12;
    int T_;
    R4 = a4;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    L_8C1F0648:;
    R12 = ((*(int *)((R4 + 0x4))));
    R13 = ((*(int *)((R4 + 0x8))));
    R14 = (R4);
    if (((*(signed char *)((R4 + 0x3))) != 1)) goto L_8C1F068C;
    goto L_8C1F065E;
    L_8C1F065E:;
    t10 = (((int (*)(int, int, int, int, float))((*(int *)(((*(int *)((R13 + 0x0))) + 0x24)))))(R13, 0x1, R6, R7, F4)) != 0;
    if (t10) goto L_8C1F068C;
    goto L_8C1F066C;
    L_8C1F066C:;
    *(unsigned char *)((R14 + 0x1)) = 0x3;
    R0 = (0x3);
    goto L_8C1F072E;
    L_8C1F072E:;
    return R0;
    L_8C1F068C:;
    t14 = ((int (*)(int, int, int, int, float))((*(int *)(((*(int *)((R13 + 0x0))) + 0x18)))))(R13, 0x1, 0x7FFFFFFF, (R14 + 0x14), F4);
    t16 = (ADXB_GetFormat(R12)) != 0;
    if (t16) goto L_8C1F06CE;
    goto L_8C1F06A6;
    L_8C1F06A6:;
    if (((int)(*(int *)((R14 + 0x18))) < (int)0x2)) goto L_8C1F06CE;
    goto L_8C1F06AE;
    L_8C1F06AE:;
    t20 = *(short *)(((*(int *)((R14 + 0x14))) + 0x0));
    R4 = ((unsigned short)((unsigned char)((int)t20 >> 8) | ((t20 << 8) & 0xFF00)));
    if (((unsigned short)((unsigned char)((int)t20 >> 8) | ((t20 << 8) & 0xFF00)) == 0x8001)) goto L_8C1F06D8;
    goto L_8C1F06CE;
    L_8C1F06CE:;
    t25 = (int)(*(int *)((R14 + 0x34))) < (int)(ADXSJD_GetTotalNumSmpl(R14));
    if (t25) goto L_8C1F06DE;
    goto L_8C1F06D8;
    L_8C1F06D8:;
    *(unsigned char *)((R14 + 0x1)) = 0x3;
    goto L_8C1F06FC;
    L_8C1F06FC:;
    t27 = *(int *)(((*(int *)((R13 + 0x0))) + 0x1C));
    return ((int (*)(int, int, int, int, float))(t27))(R13, 0x1, (R14 + 0x14), R7, F4);
    L_8C1F06DE:;
    *(unsigned int *)(((int)stk + 8)) = (ADXSJD_GetBlkSmpl(R14));
    t29 = *(int *)((R14 + 0xC));
    *(unsigned int *)(((int)stk + 4)) = t29;
    t32 = ((int (*)(int, int))((*(int *)(((*(int *)((t29 + 0x0))) + 0x24)))))(t29, 0x0);
    R4 = (((unsigned int)t32 >> 1));
    if (((int)((unsigned int)t32 >> 1) >= (int)(*(int *)(((int)stk + 8))))) goto L_8C1F0714;
    goto L_8C1F06FC;
    L_8C1F0714:;
    ADXB_EntryData(R12, (*(int *)((R14 + 0x14))), (*(int *)((R14 + 0x18))));
    return ADXB_Start(R12);
}

int kmiFLWCTRLEOVCallBackFunc(int a4)
{
    int t0;
    int t6;
    int t14;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        *(unsigned int *)(((((kmyGetDMAValue(a4)) << 2) + 0x8C45F8B8) + 0x0)) = ((*(int *)0x8C45F8F8) - (*(int *)0xFFD8000C));
        kmyGetNativeBufferStatus((*(int *)((t0 + 0x3C))), 0x8C45F800);
        t6 = t0;
        for (;;) {
            if ((*(int *)((t6 + 0x14))) == 3) {
                break;
            }
            t6 = (*(int *)((t6 + 0x10)));
            if (t6 == 0) {
                kmiFLWCTRLRotateReadyQueue(0x0);
                kmyRequestCallback(0x5);
                return 0x0;
            }
        }
        t14 = *(int *)((t6 + 0x1C));
        if ((unsigned int)t14 < (unsigned int)(*(int *)0x8C45F934)) {
            if ((*(int *)0x8C45F958) != 0) {
                *(unsigned int *)0x8C45F94C = ((*(int *)0x8C45F94C) | (((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31))));
            } else {
                *(unsigned int *)0x8C45F940 = ((*(int *)0x8C45F940) & (~(((int)t14 >= 0) ? (0x1 << (t14 & 31)) : ((-(int)t14 & 31) ? ((int)0x1 >> (-(int)t14 & 31)) : ((int)0x1 >> 31)))));
            }
        }
        *(unsigned int *)((t6 + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x14)) = 0x4;
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x5);
    }
    return 0x0;
}

int phraseInit(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t16;
    int t19;
    int t20;
    int t23;
    int t3;
    int t7;
    int t11;
    int stk[160];

    t0 = 0x8C10E9EC;
    t2 = (0x194 + ((int)stk + 12));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C10E9EC + 192)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C10EAAC;
    t6 = (0xC4 + ((int)stk + 12));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C10EAAC + 208)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x8C10EB7C;
    t10 = (((int)stk + 12) + 0x4);
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((0x8C10EB7C + 192)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    t12 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 12)) = (((((t12 << 2) + t12) << 2) << 2) + 0x8C338D30);
        sprInitRectF((((((t12 << 2) + t12) << 2) << 2) + 0x8C338D30), 0x6, (0x194 + ((int)stk + 12)), 0x80, 0x80, (t12));
        t12 = (t12 + 0x1);
        *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x34)) = 0x5;
        if ((int)t12 >= (int)0xC) {
            break;
        }
    }
    t16 = 0x0;
    for (;;) {
        sprInitRectF((((((t16 << 2) + t16) << 2) << 2) + 0x8C3390F0), 0x7, (0xC4 + ((int)stk + 12)), 0x80, 0x80, (t16));
        t19 = (((((t16 << 2) + t16) << 2) << 2) + 0x8C3390F0);
        t16 = (t16 + 0x1);
        *(unsigned int *)((t19 + 0x34)) = 0x5;
        if ((int)t16 >= (int)0xD) {
            break;
        }
    }
    t20 = 0x0;
    for (;;) {
        sprInitRectF((((((t20 << 2) + t20) << 2) << 2) + 0x8C339500), 0x8, (((int)stk + 12) + 0x4), 0x80, 0x80, (t20));
        t23 = (((((t20 << 2) + t20) << 2) << 2) + 0x8C339500);
        t20 = (t20 + 0x1);
        *(unsigned int *)((t23 + 0x34)) = 0x5;
        if ((int)t20 >= (int)0xC) {
            break;
        }
    }
    return (phraseWordsInitB());
}


