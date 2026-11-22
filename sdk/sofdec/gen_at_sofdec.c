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
int setCullingThreshold(float);
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
int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
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
    int R1008;
    R1008 = *(int *)((int)stk + 8);
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
    R1008 = (ADXSJD_GetBlkSmpl(R14));
    t29 = *(int *)((R14 + 0xC));
    (*(int *)((int)stk + 4)) = t29;
    t32 = ((int (*)(int, int))((*(int *)(((*(int *)((t29 + 0x0))) + 0x24)))))(t29, 0x0);
    R4 = (((unsigned int)t32 >> 1));
    if (((int)((unsigned int)t32 >> 1) >= (int)(R1008))) goto L_8C1F0714;
    goto L_8C1F06FC;
    L_8C1F0714:;
    ADXB_EntryData(R12, (*(int *)((R14 + 0x14))), (*(int *)((R14 + 0x18))));
    return ADXB_Start(R12);
}


