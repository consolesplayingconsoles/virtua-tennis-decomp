/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXF_Ocbi(int, int);
int ADXT_GetStat(int);
int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int ADXT_Stop(int);
int BupFailDialog(int);
int BupLoadFile(int, int, int, int);
int BupRequestSave(int, int, int, int);
int SJRBF_Create(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_read_sj32(int, int, int, int, int, int, int, int, int, int, int, int);
int angLerp(int, int, float);
int bodyCreate(int, int);
int colliObjEntry(int);
int colliObjInit(int, int, int, int, int, float);
int hudBarDrawAlt(Stk3, float, float);
int hudCallNumPut(int, Stk3, float, float);
int lineJudgePose(int);
int lineJudgeShadowPut(int, int);
int memmove(int, int, int);
int motionAdvanceSimple(int);
int nlAddVector(int, int);
int nlDispStripTrnsl(int, int, Stk16);
int nlGetAverageVector(int, int, int, float, float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int padLcdClear(int);
int screenSphereVisible(Stk3, float);
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int strmBgmPlay(int);
int strmBgmSetVol(int, int, int, int, int, int, int);
int strmSetStereo(int);
int strmVoiceSetVol(int);
int syCfgGetSoundMode(int);
int thunk_buIsExistFile(int, int);
int unlockApplyW1(void);
int unlockApplyW2(void);
Stk3 vecMake(float, float, float);
int lineJudgeDraw(void);
int strmExec(void);
int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int btnGuideDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int circuitDrawGameIcon(void);
int hudCallTieBreakDraw(int a4, int a5, float f4, float f5);
int ADXF_ReadNw32(int a4, int a5, int a6);
int eepromBootLoad(int a4);
int objListPutLerp(int a4, int a5, float f4);


int strmExec(void)
{
    int t0;
    int t5;
    float u18;
    float u19;
    int t22;
    int t70;
    int t115;
    int t72;
    int t108;
    int t73;
    int t76;
    int t77;
    int t78;
    int t79;
    int t85;
    int t86;
    int t93;
    int t94;
    int t101;
    int t95;
    int t87;
    int stk[9];

    t0 = *(int *)0x8C38BA94;
    if (t0 != 0) {
        *(unsigned int *)((((int)stk + 4) + 0x0)) = (ADXT_GetStat(t0));
    }
    t5 = *(int *)0x8C38BA98;
    if (t5 != 0) {
        *(unsigned int *)((((int)stk + 4) + 0x4)) = (ADXT_GetStat(t5));
    }
    if ((*(int *)0x8C40C220) == 2) {
        if ((*(float *)0x8C40C228) > (*(float *)0x8C0D6C80)) {
            u18 = *(float *)0x8C40C228;
            u19 = *(float *)0x8C40C224;
            *(float *)0x8C40C228 = (u18 - u19);
            ADXT_SetOutVol((*(int *)0x8C38BA94), (int)(u18 - u19));
        } else {
            t22 = *(int *)0x8C40C22C;
            if (t22 == 0) {
                ADXT_Stop((*(int *)0x8C38BA94));
            } else {
                strmBgmPlay(t22);
            }
            *(unsigned int *)0x8C40C220 = 0x0;
        }
    }
    if ((*(int *)0x8C40C220) == 5) {
        if ((int)(*(int *)0x8C38BA60) < (int)(*(int *)0x8C40C268)) {
            *(unsigned int *)0x8C38BA60 = ((*(int *)0x8C38BA60) + 0x5);
        } else {
            *(unsigned int *)0x8C40C220 = 0x0;
        }
        if ((int)(*(int *)0x8C38BA60) >= (int)(*(int *)0x8C40C268)) {
            *(unsigned int *)0x8C40C220 = 0x0;
            *(unsigned int *)0x8C38BA60 = (*(int *)0x8C40C268);
        }
        strmBgmSetVol(0x50, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    }
    if ((*(int *)0x8C40C220) == 4) {
        if ((int)(*(int *)0x8C38BA60) > (int)(*(int *)0x8C40C268)) {
            *(unsigned int *)0x8C38BA60 = ((*(int *)0x8C38BA60) - 5);
        } else {
            *(unsigned int *)0x8C40C220 = 0x0;
        }
        if ((int)(*(int *)0x8C38BA60) <= (int)(*(int *)0x8C40C268)) {
            *(unsigned int *)0x8C40C220 = 0x0;
            *(unsigned int *)0x8C38BA60 = (*(int *)0x8C40C268);
        }
        strmBgmSetVol(0x50, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    }
    t70 = *(int *)0x8C40C230;
    t115 = t70;
    if (t70 == 3) {
        t72 = *(int *)((((int)stk + 4) + 0x4));
        t108 = t72;
        if ((t72 == 5) || (t72 == 0)) {
            t73 = *(int *)0x8C40C23C;
            *(unsigned int *)0x8C40C23C = (t73 + 0x1);
            if ((t73 + 0x1) == 9) {
                *(unsigned int *)0x8C40C230 = 0x0;
                *(unsigned int *)0x8C40C23C = 0x0;
                t76 = 0x0;
                for (;;) {
                    t77 = (0x8C40C240 + t76);
                    t76 = (t76 + 0x4);
                    *(unsigned int *)((t77 + 0x0)) = 0xFFFFFFFF;
                    if ((unsigned int)t76 >= (unsigned int)0x24) {
                        break;
                    }
                }
                t101 = (t73 + 0x1);
            } else {
                t78 = *(int *)0x8C40C23C;
                t79 = *(int *)((((t78 << 2) + 0x8C40C240) + 0x0));
                if (t79 != -1) {
                    if (t79 != -1) {
                        t87 = (ADXT_StartAfs((*(int *)0x8C38BA98), (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D47B8))), (*(int *)((((t78 << 2) + 0x8C40C240) + 0x0)))));
                    } else {
                        *(unsigned int *)0x8C40C230 = 0x0;
                        *(unsigned int *)0x8C40C23C = 0x0;
                        t85 = 0x0;
                        for (;;) {
                            t86 = (0x8C40C240 + t85);
                            t85 = (t85 + 0x4);
                            *(unsigned int *)((t86 + 0x0)) = 0xFFFFFFFF;
                            if ((unsigned int)t85 >= (unsigned int)0x24) {
                                break;
                            }
                        }
                        t87 = t79;
                    }
                    t95 = t87;
                } else {
                    *(unsigned int *)0x8C40C230 = 0x0;
                    *(unsigned int *)0x8C40C23C = 0x0;
                    t93 = 0x0;
                    for (;;) {
                        t94 = (0x8C40C240 + t93);
                        t93 = (t93 + 0x4);
                        *(unsigned int *)((t94 + 0x0)) = 0xFFFFFFFF;
                        if ((unsigned int)t93 >= (unsigned int)0x24) {
                            break;
                        }
                    }
                    t95 = t79;
                }
                t101 = t95;
            }
            t108 = t101;
        }
        t115 = t108;
    }
    return t115;
}


int btnGuideDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t3;
    int t5;
    int t29;
    int t26;
    int t23;
    int t20;
    int t17;
    int t14;
    int t11;
    int t8;
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(Stk3 *)((((int)stk + 16) + 0x4)) = vecMake((float)(int)(*(float *)(((((int)stk + 16) + 0x24) + 0x0))), (float)(int)(*(float *)(((((int)stk + 16) + 0x24) + 0x4))), (*(float *)(((((int)stk + 16) + 0x24) + 0x8))));
    t3 = *(int *)(((int)stk + 16));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    if (t3 != 4) {
                        if (t3 != 5) {
                            if (t3 != 6) {
                                if (t3 != 7) {
                                    t5 = t3;
                                    if (t3 != 8) {
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                                        t5 = (sprPutAtAlpha(0x8C33B440, *(Stk3 *)(((int)stk + 4)), f4));
                                    }
                                    t8 = t5;
                                } else {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                                    t8 = (sprPutAtAlpha(0x8C33B350, *(Stk3 *)(((int)stk + 4)), f4));
                                }
                                t11 = t8;
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                                t11 = (sprPutAtAlpha(0x8C33B260, *(Stk3 *)(((int)stk + 4)), f4));
                            }
                            t14 = t11;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                            t14 = (sprPutAtAlpha(0x8C33B170, *(Stk3 *)(((int)stk + 4)), f4));
                        }
                        t17 = t14;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                        t17 = (sprPutAtAlpha(0x8C33B5D0, *(Stk3 *)(((int)stk + 4)), f4));
                    }
                    t20 = t17;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                    t20 = (sprPutAtAlpha(0x8C33B800, *(Stk3 *)(((int)stk + 4)), f4));
                }
                t23 = t20;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
                t23 = (sprPutAtAlpha(0x8C33B760, *(Stk3 *)(((int)stk + 4)), f4));
            }
            t26 = t23;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
            t26 = (sprPutAtAlpha(0x8C33B530, *(Stk3 *)(((int)stk + 4)), f4));
        }
        t29 = t26;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        t29 = (sprPutAtAlpha(0x8C33B490, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t29;
}

int circuitDrawGameIcon(void)
{
    int t0;
    int t33;
    int t2;
    float u3;
    float u7;
    float u10;
    int t11;
    float u12;
    int t15;
    int t18;
    int t21;
    int t24;
    float u29;
    int t5;
    int t27;
    int stk[19];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C10AB00); }
    t0 = *(int *)0x8C2FBE48;
    t33 = t0;
    if (t0 != -1) {
        *(unsigned int *)0x8C2FBE48 = ((int)((int)(t0 + 0x1) % (int)0x3C));
        t2 = *(int *)0x8C2FBE48;
        u3 = *(float *)0x8C0366EC;
        if ((int)t2 < (int)0x14) {
            t5 = t2;
        } else {
            t5 = (0x28 - t2);
        }
        u7 = ((float)t5 / u3);
        if (0.0f > ((float)t5 / u3)) {
            u7 = 0.0f;
        }
        u10 = *(float *)0x8C0366F0;
        *(unsigned int *)((((int)stk + 4) + 0xC)) = ((*(int *)((((int)stk + 4) + 0xC))) | (((int)(u7 * u10) << 16) << 8));
        t11 = *(int *)0x8C2FBE48;
        u12 = *(float *)0x8C0366F4;
        t15 = (t11 - 30);
        if ((int)(t11 - 30) >= 0) {
        } else {
            t15 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((int)stk + 4) + 0x1C)) = ((*(int *)((((int)stk + 4) + 0x1C))) | (((int)(((float)((-t15) + 0x1E) / u12) * u10) << 16) << 8));
        t18 = *(int *)0x8C2FBE48;
        t21 = (t18 - 30);
        if ((int)(t18 - 30) >= 0) {
        } else {
            t21 = (0x1E - (*(int *)0x8C2FBE48));
        }
        *(unsigned int *)((((int)stk + 4) + 0x2C)) = ((*(int *)((((int)stk + 4) + 0x2C))) | (((int)(((float)((-t21) + 0x1E) / u12) * u10) << 16) << 8));
        t24 = *(int *)0x8C2FBE48;
        if ((int)t24 > (int)0x28) {
            t27 = (0x3C - t24);
        } else {
            t27 = (t24 - 20);
        }
        u29 = ((float)t27 / u3);
        if (0.0f > ((float)t27 / u3)) {
            u29 = 0.0f;
        }
        *(unsigned int *)((((int)stk + 4) + 0x3C)) = ((*(int *)((((int)stk + 4) + 0x3C))) | (((int)(u29 * u10) << 16) << 8));
        t33 = (nlDispStripTrnsl(0x4, ((int)stk + 4), *(Stk16 *)(((int)stk + 4))));
    }
    return t33;
}

int hudCallTieBreakDraw(int a4, int a5, float f4, float f5)
{
    int t7;
    int t9;
    int stk[34];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x30)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C099ABC)), f5);
    *(float *)(((((int)stk + 40) + 0x30) + 0x8)) = ((*(float *)(((((int)stk + 40) + 0x30) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0xC)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x18)) = *(struct mv3 *)((((int)stk + 40) + 0x30)); }
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x18) + 0x0))) + (*(float *)0x8C099AC8));
    *(float *)(((((int)stk + 40) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x0))) + (*(float *)0x8C099ACC));
    t7 = a4;
    if ((int)a4 > (int)0x63) {
        t7 = 0x63;
    }
    t9 = a5;
    if ((int)a5 > (int)0x63) {
        t9 = 0x63;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    hudCallNumPut(t7, *(Stk3 *)(((int)stk + 28)), f4, f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    hudCallNumPut(t9, *(Stk3 *)(((int)stk + 16)), f4, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C099AD0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33A8B0, 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
}

int ADXF_ReadNw32(int a4, int a5, int a6)
{
    int t42;
    int t17;
    int t37;
    int t28;
    int t31;
    int t62;
    int t57;
    int t52;
    int t47;
    int t39;
    int stk[8];

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
        t62 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
            t57 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                t52 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                    t47 = 0xFFFFFFFD;
                } else {
                    t42 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                            t39 = 0xFFFFFFFF;
                        } else {
                            *(unsigned int *)(((int)stk + 8)) = (((a5 << 8) << 2) << 1);
                            t17 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t37 = 0xFFFFFFFE;
                            if (t17 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((int)stk + 8)));
                                if ((*(int *)0x8C46C664) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                                }
                                ADXCRS_Lock();
                                t28 = adxf_read_sj32(a4, a5, t17, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                                *(unsigned int *)(((int)stk + 8)) = t28;
                                if ((int)t28 <= 0) {
                                    t31 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0xC)))))(t17);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t17;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                                t37 = (*(int *)(((int)stk + 8)));
                            }
                            t39 = t37;
                        }
                        t42 = t39;
                    }
                    t47 = t42;
                }
                t52 = t47;
            }
            t57 = t52;
        }
        t62 = t57;
    }
    return t62;
}

int eepromBootLoad(int a4)
{
    int t5;
    int t8;
    int t11;
    int t20;
    int t22;
    int t34;
    int t38;
    int t23;
    int stk[9];

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
    L_8C0DF308:;
    *(unsigned int *)0x8C40C628 = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (R8);
    R11 = (0x8C40C628);
    R9 = (0x0);
    goto L_8C0DF31E;
    L_8C0DF31E:;
    t5 = (thunk_buIsExistFile((*(int *)((R11 + 0x0))), 0x8C126AB0)) != 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R8 = (0x8C126AB0);
    if (t5) goto L_8C0DF34A;
    goto L_8C0DF32A;
    L_8C0DF32A:;
    t8 = BupLoadFile((*(int *)((R11 + 0x0))), R8, 0x8C40C2F4, 0x128);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = (t8);
    if ((t8 == 0)) goto L_8C0DF34C;
    goto L_8C0DF33A;
    L_8C0DF33A:;
    t11 = BupFailDialog(0x0);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R4 = (t11);
    if ((t11 == 0)) goto L_8C0DF31E;
    goto L_8C0DF346;
    L_8C0DF346:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF34C;
    L_8C0DF34C:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R12 = (0x8C40C2F4);
    R13 = (0x1);
    if ((R14 == 0)) goto L_8C0DF38A;
    goto L_8C0DF354;
    L_8C0DF354:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R10 = (0x4);
    R14 = (R9);
    goto L_8C0DF362;
    L_8C0DF362:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 < (int)R10)) goto L_8C0DF35A;
    goto L_8C0DF366;
    L_8C0DF366:;
    t20 = 0x8C1D775C;
    t22 = R12;
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((0x8C1D775C + 296)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    *(unsigned int *)((R12 + 0xC)) = ((*(int *)((R12 + 0xC))) | R13);
    *(unsigned int *)0x8C29BBB8 = R13;
    BupRequestSave((*(int *)((R11 + 0x0))), R8, 0x8C40C2F4, 0x128);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF3A6;
    L_8C0DF3A6:;
    unlockApplyW1();
    unlockApplyW2();
    syCfgGetSoundMode(0x8C40C2F0);
    strmSetStereo(((((*(int *)0x8C40C2F0) == 0)) ? 1 : 0));
    strmBgmSetVol(0x50, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
    t34 = strmVoiceSetVol((unsigned char)(*(signed char *)((R12 + 0x9))));
    *(unsigned int *)0x8C38BA78 = R13;
    *(unsigned int *)0x8C38BA74 = R13;
    *(unsigned int *)0x8C38BA70 = R13;
    return t34;
    L_8C0DF35A:;
    padLcdClear(R14);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = ((R14 + 0x1));
    goto L_8C0DF362;
    L_8C0DF38A:;
    t38 = ((*(int *)((R12 + 0xC))) & R13) == 0;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R6 = (0x40);
    if (t38) goto L_8C0DF398;
    goto L_8C0DF392;
    L_8C0DF392:;
    *(unsigned int *)0x8C29BBB8 = R13;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF39C;
    L_8C0DF39C:;
    memmove(0x8C2FBC58, (0xE8 + R12), R6);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF3A6;
    L_8C0DF398:;
    *(unsigned int *)0x8C29BBB8 = R9;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0DF39C;
    L_8C0DF34A:;
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R14 = (0xFFFFFF05);
    goto L_8C0DF34C;
}

int objListPutLerp(int a4, int a5, float f4)
{
    int t1;
    int t2;
    int t4;
    int stk[20];

    *(unsigned int *)(((int)stk + 12)) = a5;
    t1 = (int)((int)(int)f4 % (int)(*(int *)((a4 + 0x0))));
    t2 = *(int *)((((t1 << 2) + a4) + 0x4));
    t4 = *(int *)(((((t1 + 0x1) << 2) + a4) + 0x4));
    *(Stk3 *)((((int)stk + 12) + 0x1C)) = vecMake((*(float *)(((t2 + a4) + 0x8))), (*(float *)(((t2 + a4) + 0xC))), (*(float *)(((t2 + a4) + 0x10))));
    *(Stk3 *)((((int)stk + 8) + 0x14)) = vecMake((*(float *)(((t4 + a4) + 0x8))), (*(float *)(((t4 + a4) + 0xC))), (*(float *)(((t4 + a4) + 0x10))));
    nlGetAverageVector((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), (1.0f - (f4 - (float)(int)f4)), (f4 - (float)(int)f4));
    *(unsigned short *)(((int)stk + 16)) = (angLerp((*(short *)(((t2 + a4) + 0x2))), (*(short *)(((t4 + a4) + 0x2))), (f4 - (float)(int)f4)));
    *(unsigned short *)(((int)stk + 20)) = (angLerp((*(short *)(((t2 + a4) + 0x4))), (*(short *)(((t4 + a4) + 0x4))), (f4 - (float)(int)f4)));
    *(unsigned short *)(((int)stk + 24)) = (angLerp((*(short *)(((t2 + a4) + 0x6))), (*(short *)(((t4 + a4) + 0x6))), (f4 - (float)(int)f4)));
    nlTranslate((*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))), (-(*(float *)(((int)stk + 60)))));
    nlRotateAZ((-(unsigned short)(*(short *)(((int)stk + 24)))));
    nlRotateAY((unsigned short)(*(short *)(((int)stk + 20))));
    nlRotateAX((unsigned short)(*(short *)(((int)stk + 16))));
    return (nlObjPut((*(int *)(((int)stk + 12)))));
}


