/* Straight-line functions with calls and guards (batch gen_yt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_GetDecNumSmpl(int);
int ADXSJD_GetStat(int);
int ADXSTM_GetStat(int);
int ADXT_Stop(int);
int setCullingThreshold(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_RcvrReplay(int);
float cpuDistXZ(int, int);
int cpuSglHitReady(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotTargetSet(int, float, float);
int gdFsReopenHn(int, int, int, int);
int kmInitDevice(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmSetWaitVsyncCount(int);
int kmiExCallBackFunc(int, int, int, int, float, float, float, float, float, float, float, float);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyRegisterBGPlane(int);
int mwRnaErrCallFunc(int, ...);
int mwlSbAlloc(void);
int mwlSbAllocWork(int);
int nlArcTan(float);
float nlCos(int);
int nlCreateVertexBuffer_multi_pass(int, int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlSetFatalErrorMode(int);
int nlSetWindowSize(float, float, float, float);
float nlSin(int);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nl_system_config_init(int);
int nlsndG2DmaHandleClose(int);
int nlsndG2DmaHandleOpen(void);
int nlsndStreamClose(int);
int nlsndStreamGenerateHdInfo(int);
int nlsndStreamGetBufInfo(int, int, int);
int nlsndStreamOpen(int);
int sys_init(void);
int FUN_8c0450ac(int a4, float f4, float f5);
int FUN_8c0f0d80(int a4, float f4, float f5, float f6);
int FUN_8c1f8120(int a4);
int FUN_8c07f038(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_8c200296(int a4);
int kmiProcessVertex_05(int a4, int a5, int a6, int a7);
int kmiProcessVertex_06(int a4, int a5, int a6, int a7);
void FUN_8c0eaf30(int a4, int a5, int a6, int a7);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int ADXT_ExecErrChk(int a4);
float FUN_8c049480(int a4, float f4, float f5);
int FUN_8c0ec6a0(int a4, int a5, int a6, int a7, int a8, int a9);
int kmiProcessVertex_07(int a4, int a5, int a6, int a7);
int kmiProcessVertex_13(int a4, int a5, int a6, int a7);
int kmiProcessVertex_08(int a4, int a5, int a6, int a7);
int kmiProcessVertex_14(int a4, int a5, int a6, int a7);
int gdFsDaReleaseG(int a4);
int FUN_8c1f5c40(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);


int FUN_8c200296(int a4)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t4;
    register int t6;
    register int t19;
    register int t20;
    register int t22;
    register int t23;
    register int t25;
    register int t29;
    register int t30;
    register int t31;
    register int t33;
    register int t34;
    register int t36;
    register int t40;

    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x2)) {
        t0 = mwlSbAlloc();
        if (t0 == 0) {
            *(int *)((int)stk + 4) = 0x8C20B1DC;
            mwRnaErrCallFunc(0x8C20B1DC);
        } else {
            *(unsigned int *)((t0 + 0x0)) = 0x8C20CA68;
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)a4) {
                    t2 = 0x0;
                    for (;;) {
                        if ((int)t2 >= (int)a4) {
                            *(unsigned short *)((t0 + 0x6)) = (nlsndStreamOpen(a4));
                            t4 = *(short *)((t0 + 0x6));
                            if (((int)t4 >= 0) && ((int)t4 <= (int)0x7)) {
                                t6 = mwlSbAllocWork((*(short *)((t0 + 0x6))));
                                *(unsigned int *)((t0 + 0x1C)) = t6;
                                if (t6 == 0) {
                                    *(int *)((int)stk + 4) = 0x8C20B2B4;
                                    mwRnaErrCallFunc(0x8C20B2B4);
                                    nlsndStreamClose((*(short *)((t0 + 0x6))));
                                    return 0x0;
                                }
                                nlsndStreamGenerateHdInfo((*(int *)(((*(int *)((t0 + 0x1C))) + 0x4))));
                                *(unsigned char *)((t0 + 0x60)) = 0x0;
                                *(unsigned char *)((t0 + 0x5)) = 0x0;
                                *(unsigned int *)((t0 + 0x18)) = 0x0;
                                *(unsigned int *)((t0 + 0xC)) = a4;
                                *(unsigned int *)((t0 + 0x8)) = a4;
                                *(unsigned int *)((t0 + 0x20)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x0, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x24)) = (nlsndStreamGetBufInfo((*(short *)((t0 + 0x6))), 0x1, (((int)stk + 8) + 0x4)));
                                *(unsigned int *)((t0 + 0x28)) = (*(int *)(((int)stk + 12)));
                                *(unsigned int *)((t0 + 0x48)) = 0xFFFFFFFF;
                                *(unsigned int *)((t0 + 0x4C)) = 0x0;
                                *(unsigned int *)((t0 + 0x50)) = 0x0;
                                *(unsigned int *)((t0 + 0x54)) = 0x0;
                                *(unsigned short *)((t0 + 0x58)) = 0x0;
                                *(unsigned short *)((t0 + 0x5A)) = 0x0;
                                *(unsigned char *)((t0 + 0x61)) = 0xFFFFFFFF;
                                *(unsigned short *)((t0 + 0x62)) = 0xFFFFFFFF;
                                *(unsigned char *)((t0 + 0x4)) = 0x1;
                                return t0;
                            }
                            *(int *)((int)stk + 4) = 0x8C20B278;
                            mwRnaErrCallFunc(0x8C20B278);
                            return 0x0;
                        }
                        t19 = nlsndG2DmaHandleOpen();
                        if (t19 == 0) {
                            break;
                        }
                        t20 = ((t2 << 2) + (t0 + 0x34));
                        t2 = (t2 + 0x1);
                        *(unsigned int *)((t20 + 0x0)) = t19;
                    }
                    *(int *)((int)stk + 4) = 0x8C20B210;
                    mwRnaErrCallFunc(0x8C20B210);
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    if ((int)t2 > 0) {
                        t22 = (t0 + 0x2C);
                        t23 = (t0 + 0x34);
                        for (;;) {
                            t25 = nlsndG2DmaHandleClose((*(int *)((t23 + 0x0))));
                            if ((int)t25 < 0) {
                                *(int *)((int)stk + 4) = 0x8C20B244;
                                mwRnaErrCallFunc(0x8C20B244);
                            }
                            *(unsigned int *)((t22 + 0x0)) = 0x0;
                            t22 = (t22 + 0x4);
                            t29 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t29 + 0x1);
                            t23 = (t23 + 0x4);
                            if ((int)(t29 + 0x1) >= (int)t2) {
                                break;
                            }
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                t30 = nlsndG2DmaHandleOpen();
                if (t30 == 0) {
                    break;
                }
                t31 = ((t2 << 2) + (t0 + 0x2C));
                t2 = (t2 + 0x1);
                *(unsigned int *)((t31 + 0x0)) = t30;
            }
            *(int *)((int)stk + 4) = 0x8C20B210;
            mwRnaErrCallFunc(0x8C20B210);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)t2 > 0) {
                t33 = (t0 + 0x2C);
                t34 = (t0 + 0x2C);
                for (;;) {
                    t36 = nlsndG2DmaHandleClose((*(int *)((t33 + 0x0))));
                    if ((int)t36 < 0) {
                        *(int *)((int)stk + 4) = 0x8C20B244;
                        mwRnaErrCallFunc(0x8C20B244);
                    }
                    *(unsigned int *)((t34 + 0x0)) = 0x0;
                    t34 = (t34 + 0x4);
                    t40 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 8)) = (t40 + 0x1);
                    t33 = (t33 + 0x4);
                    if ((int)(t40 + 0x1) >= (int)t2) {
                        break;
                    }
                }
            }
        }
    } else {
        *(int *)((int)stk + 4) = 0x8C20B1AC;
        mwRnaErrCallFunc(0x8C20B1AC);
    }
    return 0x0;
}


int ADXT_ExecErrChk(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((t2 == 3) && (t0 = *(signed char *)((a4 + 0x72)), t0 == 0)) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = ADXSJD_GetDecNumSmpl((*(int *)((a4 + 0x4))));
            if ((*(int *)((a4 + 0x64))) == t0) {
                *(unsigned short *)((a4 + 0x68)) = ((*(short *)((a4 + 0x68))) + 0x1);
                t3 = *(int *)((a4 + 0x38));
                if ((int)(*(short *)((a4 + 0x68))) > (int)((t3 << 2) + t3)) {
                    *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFE;
                }
            } else {
                *(unsigned short *)((a4 + 0x68)) = 0x0;
            }
            *(unsigned int *)((a4 + 0x64)) = t0;
            if ((*(short *)((a4 + 0x60))) != 0) {
                t0 = *(signed char *)((a4 + 0x6D));
                if ((t0 != 1) && (t0 != 2)) {
                } else {
                    ADXT_Stop(a4);
                }
                if ((*(signed char *)((a4 + 0x6D))) != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                    *(unsigned short *)((a4 + 0x68)) = 0x0;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x68)) = 0x0;
        }
    } else {
        *(unsigned short *)((a4 + 0x68)) = 0x0;
    }
    if (((int)t2 >= (int)0x1) && (((int)t2 <= (int)0x3) && (t1 = *(signed char *)((a4 + 0x72)), t1 == 0))) {
        t0 = ADXSJD_GetStat((*(int *)((a4 + 0x4))));
        if (t0 != 3) {
            t0 = 0x0;
            if ((*(int *)((a4 + 0x14))) != 0) {
                t1 = *(int *)((a4 + 0x14));
                t0 = (((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1));
            }
            if ((int)t0 < (int)0x40) {
                *(unsigned short *)((a4 + 0x6A)) = ((*(short *)((a4 + 0x6A))) + 0x1);
                if (t2 == 3) {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) <= (int)((t0 << 2) + t0)) {
                    } else {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                } else {
                    t0 = *(int *)((a4 + 0x38));
                    if ((int)(*(short *)((a4 + 0x6A))) > (int)(((t0 << 2) + t0) << 2)) {
                        *(unsigned short *)((a4 + 0x60)) = 0xFFFFFFFF;
                    }
                }
                t0 = 0x60;
                if ((*(short *)((a4 + 0x60))) != 0) {
                    t1 = *(signed char *)((a4 + 0x6D));
                    if (t1 == 1) {
                        ADXT_Stop(a4);
                    } else {
                        if (t1 == 2) {
                            adxt_RcvrReplay(a4);
                        }
                    }
                    t1 = 0x6D;
                    if ((*(signed char *)((a4 + 0x6D))) != 0) {
                        *(unsigned short *)((a4 + 0x60)) = 0x0;
                        *(unsigned short *)((a4 + 0x6A)) = 0x0;
                        t1 = 0x6A;
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x6A)) = 0x0;
            t0 = 0x6A;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x6A)) = 0x0;
        t1 = 0x6A;
    }
    t0 = t1;
    if ((*(int *)((a4 + 0x8))) != 0) {
        t1 = ADXSTM_GetStat((*(int *)((a4 + 0x8))));
        t2 = t1;
        if (t1 == 4) {
            t1 = *(signed char *)((a4 + 0x6D));
            if (t1 == 1) {
                ADXT_Stop(a4);
            } else {
                if (t1 == 2) {
                    adxt_RcvrReplay(a4);
                }
            }
            t1 = 0x6D;
            if ((*(signed char *)((a4 + 0x6D))) != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
                *(unsigned short *)((a4 + 0x6A)) = 0x0;
                t1 = 0x6A;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}


