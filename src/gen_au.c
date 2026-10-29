/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int ADXT_StartAfs(int, int, int);
int ADX_DecodeInfoAu(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int, int, int, int, int, int, int, int);
int BupFailDialog(int);
int BupGetInfo(int);
int BupLoadFile(int, int, int, int);
int BupSaveFile(int, int, int, int);
int ballColliInit(void);
int buGetDiskInfo(int, int);
int buIsFormat(int);
int camMoveBegin(float, float);
int camSetEye(Stk3);
int camSetTarget(Stk3);
int colliObjInit(int, int, int, int, int, float);
int cpuAimAngleRate(int, int, int, int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int cursorBoxPut(int);
int entryCountJoined(void);
int fmMngBit2Num(int, int);
int fmMngMcpy4(int, int, int);
int fmcalccrc(int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyEnableInterrupt(void);
int kmyInitDMADevice(void);
int kmyInitializeCallback(void);
int kmyInitializeDriver(void);
int kmyInitializeFog(void);
int kmyInitializeHardware(int);
int kmyInitializeInterrupt(void);
int kmyInitializeTA(int);
int kmyRegisterCallback(int, int, int);
int kmyRegisterPALEXTCallback(int);
int memset(int, int, int);
int motionRootAtFrame(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int mtxGetPos(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTrnsl(int, int);
int nlLoadMatrix(int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetFadeColorOffset(float, float, float);
int nlObjPutSetSaturate(float, float);
int nlObjPutTrnsl(int, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int primVertexSet(int, int, int, int, int);
int resCautionReset(int);
int search_dir(int, int, int);
int set_event2(int, int);
int shadowPlayerDraw(int, int, int, int, int, int);
int sndSeDecide(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int strmVoiceSetVol(int);
int syBtFlRead(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int cpuSglAimScoreAngle(int a4, int a5);
void vmsfs_fread1(int a4, int a5);
float padLcdProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void swingBlurPut(int a4, float f4, float f5);
int courtAngleInSector(int a4, int a5);
int umpireInit(void);
int endPlayerPut(int a4, int a5, int a6, int a7);
int vmsfs_fgetinfo(int a4, int a5, int a6);
void hudSlideShow(int a4, int a5, float f4, float f5);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
void strmVoicePlay(int a4, int a5);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int rectFrameDraw(int a4, float f4);
int endingCamera2Set(void);
int BupExecRequest(void);
int fmMngReadSctAllData(int a4);
int circuitDrawPrompt(void);
int endingScreenObjPutTrnsl(float f4);
float _in_fmods(int a4, float f4, float f5);
int kmInitDevice(int a4);
int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6);
int ballInit(int a4, int a5, int a6, int a7);
int miniDrawModels(void);
int entryIsVersus(int a4, int a5, int a6, int a7);
int rankInsert1(void);
float cpuEdgeX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int scorePressure(void);
int primRectDirX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int endingScreenObjPut(void);

int cpuSglAimScoreAngle(int a4, int a5)
{
    int t1;
    int t43;
    int t2;
    int t3;
    float u4;
    float u5;
    float u6;
    int t24;
    int t35;
    int t39;
    float u18;
    float u19;
    float u20;
    float u29;
    float u30;
    float u31;
    int stk[20];

    *(unsigned int *)(((int)stk + 8)) = a5;
    t1 = *(int *)(((int)stk + 8));
    t43 = (cpuShotRange(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (((int)stk + 8) + 0x4)));
    if ((int)(t1 - 1) >= 0) {
        t2 = (t1 - 1);
        t3 = 0x8C2FCC6C;
        for (;;) {
            u4 = *(float *)((t3 + 0x8));
            u5 = *(float *)((t3 + 0x0));
            u6 = u4;
            if (0.0f > u4) {
                u6 = (-u4);
            }
            if ((unsigned char)(*(signed char *)((t3 + 0xC))) == 1) {
                t24 = 0x24;
                if ((u5 > (*(float *)(((int)stk + 48)))) && ((u18 = *(float *)(((int)stk + 36)), u18 > u5) && ((u19 = *(float *)(((int)stk + 56)), u6 > u19) && (u20 = *(float *)(((int)stk + 44)), u20 > u6)))) {
                } else {
                    cpuAimAngleRate((0xB9C + a4), t3, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), u6, u5);
                    *(float *)((t3 + 0x0)) = (*(float *)(((int)stk + 24)));
                    *(float *)((t3 + 0x8)) = (*(float *)(((int)stk + 32)));
                    t24 = 0x8;
                }
                t39 = t24;
            } else {
                t35 = 0xC;
                if ((u5 > (*(float *)(((int)stk + 24)))) && ((u29 = *(float *)(((int)stk + 12)), u29 > u5) && ((u30 = *(float *)(((int)stk + 32)), u6 > u30) && (u31 = *(float *)(((int)stk + 20)), u31 > u6)))) {
                } else {
                    cpuAimAngleRate((0xB9C + a4), t3, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), (((int)stk + 8) + 0x28), u6, u5);
                    *(float *)((t3 + 0x0)) = (*(float *)(((int)stk + 48)));
                    *(float *)((t3 + 0x8)) = (*(float *)(((int)stk + 56)));
                    t35 = 0x8;
                }
                t39 = t35;
            }
            t2 = (t2 - 1);
            t3 = (t3 + 0x20);
            if ((int)t2 < 0) {
                break;
            }
        }
        t43 = t39;
    }
    return t43;
}

void vmsfs_fread1(int a4, int a5)
{
    int t2;
    int t9;
    int t15;
    int t33;
    int t35;
    int t41;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C1EC9E0:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t2 = (vmsio_isready((*(int *)((R4 + 0x28))))) != 0;
    R14 = (R4);
    if (t2) goto L_8C1ECA02;
    goto L_8C1EC9F8;
    L_8C1EC9F8:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_8C1ECA1C;
    L_8C1ECA1C:;
    R0 = (0xFFFFFF01);
    goto L_8C1ECAC2;
    L_8C1ECAC2:;
    return;
    L_8C1ECA02:;
    t9 = (vmsio_ismount((*(int *)((R14 + 0x28))))) == 0;
    if (t9) goto L_8C1ECA1C;
    goto L_8C1ECA0C;
    L_8C1ECA0C:;
    if (((*(signed char *)((((*(int *)((R14 + 0x28))) * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1ECA4C;
    goto L_8C1ECA1C;
    L_8C1ECA4C:;
    t15 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) >= 0;
    if (t15) goto L_8C1ECA5C;
    goto L_8C1ECA56;
    L_8C1ECA56:;
    R0 = (0xFFFFFF03);
    goto L_8C1ECAC2;
    L_8C1ECA5C:;
    R0 = (0x40);
    R13 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x40))) != 0xFFFA)) goto L_8C1ECA74;
    goto L_8C1ECA68;
    L_8C1ECA68:;
    if (((*(int *)((R14 + 0x34))) == 0)) goto L_8C1ECA7A;
    goto L_8C1ECA6E;
    L_8C1ECA6E:;
    R0 = (0xFFFF0000);
    goto L_8C1ECAC2;
    L_8C1ECA7A:;
    R0 = (0x0);
    goto L_8C1ECAC2;
    L_8C1ECA74:;
    if (((*(int *)((R14 + 0x34))) != 0)) goto L_8C1ECA7E;
    goto L_8C1ECA7A;
    L_8C1ECA7E:;
    if (((*(int *)((R14 + R0))) == 0xFFFC)) goto L_8C1ECA8E;
    goto L_8C1ECA86;
    L_8C1ECA86:;
    if (((*(int *)((R14 + R0))) != 0xFFFF)) goto L_8C1ECA94;
    goto L_8C1ECA8E;
    L_8C1ECA8E:;
    R0 = (0xFFFFFF41);
    goto L_8C1ECAC2;
    L_8C1ECA94:;
    t33 = *(int *)((R14 + R0));
    t35 = vmsfs_read_retry(R13, t33, (*(int *)(((int)stk + 4))));
    R12 = (t33);
    R4 = (t35);
    if (((int)t35 >= 0)) goto L_8C1ECAAA;
    goto L_8C1ECAA6;
    L_8C1ECAA6:;
    R0 = (R4);
    goto L_8C1ECAC2;
    L_8C1ECAAA:;
    *(unsigned int *)(((0x40 + R14) + 0x0)) = (unsigned short)(get_fat(R13, R12, R6));
    t41 = *(int *)((R14 + 0x34));
    *(unsigned int *)((R14 + 0x34)) = (t41 - 1);
    R0 = ((t41 - 1));
    goto L_8C1ECAC2;
}



int courtAngleInSector(int a4, int a5)
{
    if ((int)(unsigned short)a4 < 0) {
        return 0x1;
    }
    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x2000) {
            if ((unsigned short)a4 != 0x4000) {
                if ((unsigned short)a4 != 0x6000) {
                    if ((unsigned short)a4 != 0x8000) {
                        if ((unsigned short)a4 != 0xA000) {
                            if ((unsigned short)a4 != 0xC000) {
                                if ((unsigned short)a4 != 0xE000) {
                                    return 0x1;
                                }
                                if (((int)(unsigned short)a5 > (int)0xC000) && ((int)(unsigned short)a5 < (int)0xFFFF)) {
                                    return 0x0;
                                }
                                return 0x1;
                            }
                            if (((int)(unsigned short)a5 > (int)0xA000) && ((int)(unsigned short)a5 < (int)0xE000)) {
                                return 0x0;
                            }
                            return 0x1;
                        }
                        if (((int)(unsigned short)a5 > (int)0x8000) && ((int)(unsigned short)a5 < (int)0xC000)) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    if (((int)(unsigned short)a5 > (int)0x6000) && ((int)(unsigned short)a5 < (int)0xA000)) {
                        return 0x0;
                    }
                    return 0x1;
                }
                if (((int)(unsigned short)a5 > (int)0x4000) && ((int)(unsigned short)a5 < (int)0x8000)) {
                    return 0x0;
                }
                return 0x1;
            }
            if (((int)(unsigned short)a5 > (int)0x2000) && ((int)(unsigned short)a5 < (int)0x6000)) {
                return 0x0;
            }
            return 0x1;
        }
        if (((int)(unsigned short)a5 > 0) && ((int)(unsigned short)a5 < (int)0x4000)) {
            return 0x0;
        }
        return 0x1;
    }
    if (((int)(unsigned short)a5 > (int)0xE000) && ((int)(unsigned short)a5 < (int)0x10000)) {
        return 0x0;
    }
    if (((int)(unsigned short)a5 >= 0) && ((int)(unsigned short)a5 < (int)0x2000)) {
        return 0x0;
    }
    return 0x1;
}

int umpireInit(void)
{
    int t0;
    int t1;
    int t3;
    int t27;
    int t19;
    int t18;

    t0 = *(int *)0x8C287ADC;
    t1 = 0x1;
    if (t0 == 2) {
        t1 = 0x0;
    }
    t3 = *(int *)0x8C1891E8;
    t27 = t0;
    if ((int)t3 <= (int)0x9) {
        t19 = 0x8C1D0DF0;
        if ((*(int *)(((t3 << 2) + 0x8C1D0DF0))) != 0) {
            motionSet(0x8C38A898, (*(int *)0x8C124E60), 0x0, 0x2F720, ((*(int *)(((*(int *)(((t3 << 2) + 0x8C1D0DF0))) + 0x0)))), ((*(int *)0x8C2873D4)), 0.0f);
            *(float *)0x8C38AE38 = (float)(*(int *)((((((*(int *)0x8C1891F0) << 2) << 1) + (((((t1 << 2) + t1) << 2) << 2) + 0x8C124E90)) + 0x0)));
            *(float *)0x8C38AE3C = (float)(*(int *)((((((*(int *)0x8C1891F0) << 2) << 1) + (((((t1 << 2) + t1) << 2) << 2) + 0x8C124E90)) + 0x4)));
            *(float *)0x8C38AE40 = 0.0f;
            *(unsigned short *)0x8C38AE44 = 0x4000;
            *(unsigned int *)0x8C38AE50 = 0x0;
            *(unsigned int *)0x8C38AE48 = 0x1;
            *(unsigned int *)0x8C38A894 = 0x0;
            colliObjInit(0x8C38AE38, 0x8C1891F0, 0x0, 0x0, 0x8C38AE58, 10.0f);
            t18 = *(int *)0x8C38AE90;
            *(unsigned int *)0x8C38AE90 = (t18 | 0x2);
            t19 = (t18 | 0x2);
        }
        t27 = t19;
    }
    return t27;
}

int endPlayerPut(int a4, int a5, int a6, int a7)
{
    int t11;
    int t9;
    int stk[12];

    *(unsigned int *)(((int)stk + 8)) = a5;
    if ((float)(*(int *)((((a5 << 2) + 0x8C1D4764) + 0x0))) > (*(float *)((a4 + 0xC)))) {
        *(unsigned int *)((((a5 << 2) + 0x8C1D4764) + 0x0)) = (int)(*(float *)((a4 + 0xC)));
        motionRootAtFrame(a4, (int)(*(float *)((a4 + 0xC))), a6, a7, (((int)stk + 8) + 0x8));
        nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x8));
    } else {
        if (((*(float *)((a4 + 0x14))) != 0.0f) && (t9 = *(int *)0x8C407FD8, t9 == 0)) {
            t11 = (*(int *)((((a5 << 2) + 0x8C1D4764) + 0x0)));
            for (;;) {
                t11 = (t11 + 0x1);
                if ((int)t11 > (int)(int)(*(float *)((a4 + 0xC)))) {
                    break;
                }
                motionRootAtFrame(a4, t11, a6, a7, (((int)stk + 8) + 0x8));
                nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x8));
            }
        }
    }
    *(unsigned short *)((a4 + 0xB06)) = 0x0;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
    nlRotateAY((*(short *)((a4 + 0xB06))));
    *(unsigned int *)(((int)stk + 12)) = (playerPut(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 12))) != 0) {
        shadowPlayerDraw(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    }
    *(unsigned int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C1D4764)) = (int)(*(float *)(((0xC + a4) + 0x0)));
    return 0x8C1D4764;
}

int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int t34;
    int t1;
    int t3;
    int t27;
    int t6;
    int t23;
    int t8;
    int t19;
    int t30;
    int t4;
    int t5;
    int stk[18];

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (a4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((a4 * 0x148) + 0x8C464598);
    t34 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t30 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t27 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(int *)(((int)stk + 12)), t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
                t6 = buIsFormat(a4);
                t23 = 0xFFFFFF03;
                if ((int)t6 < 0) {
                } else {
                    t8 = search_dir(a4, (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
                    t19 = 0xFFFFFF05;
                    if ((int)t8 < 0) {
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 56))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x2C))) + 0x1));
                        *(unsigned short *)((a6 + 0x4)) = (*(int *)(((int)stk + 56)));
                        *(unsigned char *)((a6 + 0x6)) = (*(int *)(((int)stk + 20)));
                        *(unsigned char *)((a6 + 0x7)) = (*(signed char *)(((int)stk + 26)));
                        *(unsigned short *)((a6 + 0x8)) = (*(short *)(((int)stk + 24)));
                        *(unsigned char *)((a6 + 0x6)) = ((((*(int *)(((int)stk + 20))) == 0xCC)) ? 1 : 0);
                        get_vmstime((a6 + 0xA), (((int)stk + 4) + 0x2C));
                        t19 = 0x0;
                    }
                    t23 = t19;
                }
                t27 = t23;
            }
            t30 = t27;
        }
        t34 = t30;
    }
    return t34;
}

void hudSlideShow(int a4, int a5, float f4, float f5)
{
    int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = set_event2(0x44, 0x8C0862BA);
        *(unsigned int *)((t1 + 0x14)) = 0x0;
        *(float *)((t1 + 0x24)) = 0.0f;
        *(float *)((t1 + 0x28)) = 0.0f;
        if (a4 != 0) {
            if (a4 != 1) {
                if (a4 != 2) {
                    if (a4 != 3) {
                        if (a4 == 4) {
                            *(float *)((t1 + 0x2C)) = 1.0f;
                            *(float *)((t1 + 0x30)) = 0.0f;
                            *(unsigned int *)((t1 + 0x18)) = 0xD2;
                            *(float *)((t1 + 0x24)) = 0.0f;
                            *(unsigned int *)((t1 + 0x40)) = 0x1;
                        }
                    } else {
                        *(float *)((t1 + 0x2C)) = 1.0f;
                        *(float *)((t1 + 0x30)) = 0.0f;
                        *(unsigned int *)((t1 + 0x18)) = 0x5A;
                        *(unsigned int *)((t1 + 0x40)) = 0x0;
                    }
                } else {
                    *(float *)((t1 + 0x2C)) = 0.0f;
                    *(float *)((t1 + 0x30)) = 1.0f;
                    *(unsigned int *)((t1 + 0x18)) = 0x78;
                    *(unsigned int *)((t1 + 0x40)) = 0x0;
                }
            } else {
                *(float *)((t1 + 0x2C)) = 1.0f;
                *(float *)((t1 + 0x30)) = 0.0f;
                *(unsigned int *)((t1 + 0x18)) = 0x78;
                *(float *)((t1 + 0x24)) = 0.0f;
                *(unsigned int *)((t1 + 0x40)) = 0x1;
            }
        } else {
            *(float *)((t1 + 0x2C)) = 0.0f;
            *(float *)((t1 + 0x30)) = 1.0f;
            *(unsigned int *)((t1 + 0x18)) = 0x5A;
            *(unsigned int *)((t1 + 0x40)) = 0x0;
        }
    }
}

int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7)
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

void strmVoicePlay(int a4, int a5)
{
    int t13;
    int t15;
    int t24;
    int t41;
    int stk[6];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C0D6E16:;
    *(unsigned int *)(((int)stk + 12)) = (R13);
    *(unsigned int *)(((int)stk + 8)) = (R12);
    *(unsigned int *)(((int)stk + 4)) = (R11);
    R14 = (R5);
    if ((R4 != 0)) goto L_8C0D6E34;
    goto L_8C0D6E26;
    L_8C0D6E26:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 > (int)0x1EF)) goto L_8C0D6EF2;
    goto L_8C0D6E2C;
    L_8C0D6E2C:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 >= 0)) goto L_8C0D6E56;
    goto L_8C0D6E30;
    L_8C0D6E30:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0D6EF2;
    L_8C0D6EF2:;
    return;
    L_8C0D6E56:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R14);
    if ((R14 == -1)) goto L_8C0D6EF2;
    goto L_8C0D6E5C;
    L_8C0D6E5C:;
    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C23C = 0x0;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R13 = (0x24);
    R5 = (0x0);
    R6 = (0x8C40C220);
    R7 = (0xFFFFFFFF);
    goto L_8C0D6E6A;
    L_8C0D6E6A:;
    t13 = (unsigned int)(R5 + 0x4) < (unsigned int)R13;
    *(unsigned int *)((((R6 + 0x20) + R5) + 0x0)) = R7;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R5 = ((R5 + 0x4));
    if (t13) goto L_8C0D6E6A;
    goto L_8C0D6E78;
    L_8C0D6E78:;
    t15 = *(signed char *)0x8C40C2FD;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R11 = (0x8C38BA98);
    R12 = (0x8C1E0E2C);
    R13 = ((unsigned char)t15);
    if ((R4 != 0)) goto L_8C0D6E90;
    goto L_8C0D6E86;
    L_8C0D6E86:;
    strmVoiceSetVol(R13);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R5 = (0x2);
    R6 = (R14);
    goto L_8C0D6EAE;
    L_8C0D6EAE:;
    t24 = ADXT_StartAfs((*(int *)((R11 + 0x0))), R5, R6);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (t24);
    goto L_8C0D6EF2;
    L_8C0D6E90:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R4);
    if ((R4 != 1)) goto L_8C0D6EA2;
    goto L_8C0D6E96;
    L_8C0D6E96:;
    strmVoiceSetVol(R13);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R5 = (0x5);
    R6 = (R14);
    goto L_8C0D6EAE;
    L_8C0D6EA2:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((R0 != 2)) goto L_8C0D6ED8;
    goto L_8C0D6EA6;
    L_8C0D6EA6:;
    strmVoiceSetVol(0x50);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R5 = (0x6);
    R6 = (R14);
    goto L_8C0D6EAE;
    L_8C0D6ED8:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R4);
    if ((R4 != 9)) goto L_8C0D6EF2;
    goto L_8C0D6EDE;
    L_8C0D6EDE:;
    strmVoiceSetVol(R13);
    t41 = ADXT_StartAfs((*(int *)((R11 + 0x0))), (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D47B8))), R14);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (t41);
    goto L_8C0D6EF2;
    L_8C0D6E34:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    R0 = (R4);
    if ((R4 != 1)) goto L_8C0D6E48;
    goto L_8C0D6E3A;
    L_8C0D6E3A:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 > (int)0x1FF)) goto L_8C0D6EF2;
    goto L_8C0D6E40;
    L_8C0D6E40:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 >= 0)) goto L_8C0D6E56;
    goto L_8C0D6E44;
    L_8C0D6E44:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C0D6EF2;
    L_8C0D6E48:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((R0 != 2)) goto L_8C0D6E56;
    goto L_8C0D6E4C;
    L_8C0D6E4C:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 > (int)0x8)) goto L_8C0D6EF2;
    goto L_8C0D6E52;
    L_8C0D6E52:;
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (((int)R14 < 0)) goto L_8C0D6EF2;
    goto L_8C0D6E56;
}

int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int t2;
    int t14;
    int stk[15];

    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoAu((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 44))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (((int)stk + 32) + 0x4));
    t14 = 0x0;
    if ((int)t2 < 0) {
    } else {
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
        *(unsigned short *)((a4 + 0xA8)) = 0x4;
        *(unsigned short *)((a4 + 0xAA)) = (*(int *)(((int)stk + 36)));
        memset((a4 + 0x4C), 0x0, 0x4);
        t14 = (*(short *)(((int)stk + 32)));
    }
    return t14;
}


int endingCamera2Set(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u5;
    float u7;
    int t10;
    float u20;
    float u21;
    int t24;
    int stk[16];

    t0 = *(int *)0x8C1D3718;
    t1 = *(int *)0x8C1D371C;
    t2 = *(int *)0x8C1D3720;
    t3 = *(int *)0x8C1D3724;
    u4 = *(float *)0x8C0D5FCC;
    u5 = ((float)t3 / ((float)((t0 + t1) + t2) * u4));
    if (((float)t3 / ((float)((t0 + t1) + t2) * u4)) > 1.0f) {
        u5 = 1.0f;
    }
    u7 = *(float *)0x8C0D5FD4;
    t10 = ((int)(u5 * u7) & 0xFFFF);
    if ((*(int *)0x8C1891E8) == 7) {
        t10 = (((int)(u5 * u7) & 0xFFFF) + 0x4000);
    }
    nlPushUnitMatrix();
    nlRotateAY(t10);
    nlCalcPoint(0x8C1D3740, 0x8C40C1C8);
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 28)) = 0x8C1D3728;
    nlSubVector3op((((int)stk + 28) + 0x4), 0x8C1D3734, 0x8C1D3728);
    nlScaleVector((((int)stk + 28) + 0x4), (((int)stk + 28) + 0x4), u5);
    nlAddVector3op(0x8C40C1D4, (*(int *)(((int)stk + 28))), (((int)stk + 28) + 0x4));
    u20 = *(float *)0x8C0D6010;
    u21 = u20;
    u21 = u21 + u20 * u5;
    *(float *)0x8C287A04 = u21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C40C1C8); }
    camSetTarget(*(Stk3 *)(0x8C40C1C8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C40C1D4); }
    camSetEye(*(Stk3 *)(0x8C40C1D4));
    t24 = camMoveBegin(1.0f, 1.0f);
    *(unsigned int *)0x8C1D3724 = ((*(int *)0x8C1D3724) + 0x1);
    return t24;
}

int BupExecRequest(void)
{
    int t0;
    int t1;
    int t5;
    int t2;
    int t13;
    int t19;
    int t20;
    int t26;
    int t27;

    t0 = BupGetInfo(0x0);
    t1 = *(int *)0x8C40C6A4;
    t5 = t1;
    if (t1 == 1) {
        t2 = buGetDiskInfo(0x0, (t0 + 0x14));
        if (t2 == 0xFFFFFF01) {
            *(unsigned int *)0x8C40C6A4 = 0x0;
        }
        t5 = t2;
    }
    if ((*(int *)0x8C40C634) != 0) {
        t13 = *(int *)0x8C40C634;
        if (t13 == 1) {
            resCautionReset(0x0);
            for (;;) {
                t19 = BupSaveFile((*(int *)0x8C40C638), (*(int *)0x8C40C63C), (*(int *)0x8C40C640), (*(int *)0x8C40C644));
                *(unsigned int *)0x8C41BA10 = t19;
                if (t19 != 0) {
                    t20 = BupFailDialog(0x1);
                    if (t20 != 0) {
                        break;
                    }
                    continue;
                }
                return ((int (*)(void))(0x8C0E0610))();
            }
            return ((int (*)(int))(0x8C0E0610))(t20);
        }
        if (t13 == 2) {
            resCautionReset(0x0);
            for (;;) {
                t26 = BupLoadFile((*(int *)0x8C40C638), (*(int *)0x8C40C63C), (*(int *)0x8C40C640), (*(int *)0x8C40C644));
                *(unsigned int *)0x8C41BA10 = t26;
                if (t26 != 0) {
                    t27 = BupFailDialog(0x0);
                    if (t27 != 0) {
                        break;
                    }
                    continue;
                }
                *(unsigned int *)0x8C40C698 = 0x1;
                return ((int (*)(void))(0x8C0E0610))();
            }
            return ((int (*)(int))(0x8C0E0610))(t27);
        }
        return t13;
    }
    return t5;
}

int fmMngReadSctAllData(int a4)
{
    int t0;
    int t1;
    int t2;
    int t41;
    int t3;
    int t5;
    int t35;
    int t7;
    int t29;
    int t24;
    int t10;
    int t11;
    int t12;
    int t15;
    int t17;
    int t18;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x4));
    t2 = syBtFlRead(t1, t0, 0x40);
    t41 = 0xFFFFFFFF;
    if (t2 != -1) {
        t3 = *(int *)((a4 + 0x14));
        t5 = syBtFlRead((t1 + ((((t3 + 0x1) << 2) << 2) << 2)), (((((t3 + 0x1) << 2) << 2) << 2) + t0), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t35 = 0xFFFFFFFF;
        if (t5 != -1) {
            t7 = fmMngBit2Num((((((t3 + 0x1) << 2) << 2) << 2) + t0), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t7;
            t29 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t24 = 0x0;
                if ((int)t7 > 0) {
                    t10 = (t1 + 0x40);
                    t11 = t7;
                    for (;;) {
                        t12 = syBtFlRead(t10, (a4 + 0x34), 0x40);
                        if (t12 == -1) {
                            break;
                        }
                        if ((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) != 0xFFFF) {
                            t15 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)(*(short *)(((a4 + 0x34) + 0x3E))) == (unsigned short)t15) && (t17 = *(short *)(((a4 + 0x34) + 0x0)), t18 = *(int *)((a4 + 0x14)), (int)(unsigned short)t17 < (int)t18)) {
                                fmMngMcpy4((a4 + 0x34), ((((((unsigned short)(*(short *)(((a4 + 0x34) + 0x0))) + 0x1) << 2) << 2) << 2) + t0), 0x40);
                            }
                            t11 = (t11 - 1);
                            t10 = (t10 + 0x40);
                            if ((int)t11 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t24 = 0xFFFFFFFF;
                }
                t29 = t24;
            }
            t35 = t29;
        }
        t41 = t35;
    }
    return t41;
}


int endingScreenObjPutTrnsl(float f4)
{
    float u7;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x38E, 1.33333337f, 0.300000012f, 3000.0f);
    *(float *)0x8C287A10 = (320.0f / (nlTanf(0.058032196f)));
    nlMatrixMode(0x1);
    nlPushUnitMatrix();
    nlTranslate(0.0f, 0.0f, (-1.0f));
    u7 = *(float *)0x8C287A10;
    nlScale((100.0f / u7), (100.0f / u7), 1.0f);
    nlObjPutTrnsl(0xC5BEA50, f4);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
    *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
    return (nlMatrixMode(0x1));
}

float _in_fmods(int a4, float f4, float f5)
{
    float u16;
    float u17;
    int t18;
    float u24;
    float u27;
    float u31;
    int t1;
    int t2;
    int stk[9];

    *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = f4;
    *(float *)(((((int)stk + 4) + 0x14) + 0x0)) = f5;
    if ((((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x7F800000) != 0x7F800000) && ((t1 = *(int *)(((int)stk + 24)), (t1 & 0x7F800000) != 0x7F800000) || (t2 = *(int *)(((int)stk + 24)), (t2 & 0x7FFFFF) == 0))) {
        if ((*(float *)(((int)stk + 24))) == 0.0f) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)0x8C12C3A8);
        } else {
            if (((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) & 0x7F800000) == 0x7F800000) {
                *(unsigned int *)((a4 + 0x0)) = 0x0;
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = f4;
            } else {
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x80000000);
                *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0x7FFFFFFF);
                *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x14) + 0x0))) & 0x7FFFFFFF);
                u16 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
                u17 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
                *(float *)(((int)stk + 16)) = (u17 / u16);
                t18 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 4)) = t18;
                *(unsigned int *)(((int)stk + 8)) = (t18 & 0x80000000);
                if ((int)(0x7F800000 & (*(int *)(((int)stk + 4)))) < (int)0x4F800000) {
                    *(float *)(((int)stk + 16)) = (float)(int)(u17 / u16);
                }
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | (*(int *)(((int)stk + 8))));
                u24 = *(float *)(((int)stk + 16));
                u27 = u24;
                if (u24 > 2.14748365e+09f) {
                    u27 = (u24 + -4.2949673e+09f);
                }
                *(unsigned int *)((a4 + 0x0)) = (int)u27;
                u31 = (float)(int)u27;
                if ((int)(int)u27 < 0) {
                    u31 = ((float)(int)u27 + 4.2949673e+09f);
                }
                *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x18) + 0x0))) - (u31 * (*(float *)(((((int)stk + 4) + 0x14) + 0x0)))));
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) | (*(int *)(((int)stk + 12))));
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = (*(float *)0x8C12C3A8);
    }
    return (*(float *)(((((int)stk + 4) + 0x10) + 0x0)));
}

int kmInitDevice(int a4)
{
    int t1;

    *(unsigned int *)0x8C45EFC4 = (a4 & 0xFFFF0000);
    *(unsigned int *)0x8C45EFC8 = 0x8C20A27C;
    *(unsigned int *)0x8C45EFCC = 0x8C20A2D8;
    t1 = 0x800000;
    if ((*(int *)0x8C45EFC4) == 0x10000) {
        t1 = 0x1000000;
    }
    *(unsigned int *)0x8C45F7BC = t1;
    kmyInitializeDriver();
    kmyInitializeCallback();
    kmyRegisterCallback(0x8, 0x8C1E326E, 0x8C45F920);
    kmyRegisterCallback(0xB, 0x8C1E3272, 0x8C45F928);
    kmyRegisterPALEXTCallback(0x8C1E3278);
    kmyInitializeHardware(a4);
    kmyInitializeFog();
    *(unsigned int *)0x8C45F914 = 0xF;
    *(unsigned int *)0x8C45F910 = 0x28;
    *(unsigned int *)0x8C45F90C = 0x0;
    *(unsigned int *)0x8C45F908 = 0x0;
    kmyInitializeInterrupt();
    kmyConnectInterrupt(0x1E, 0x8C1E3260, 0x0);
    kmyInitDMADevice();
    kmyEnableInterrupt();
    kmyInitializeTA(0x8C45F798);
    *(unsigned int *)0x8C45F904 = 0x0;
    return 0x0;
}

int ADXB_DecodeHeaderSpsd(int a4, int a5, int a6)
{
    int t2;
    int t13;
    int stk[14];

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t2 = ADX_DecodeInfoSpsd((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 40))), (((int)stk + 4) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
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
        *(unsigned short *)((a4 + 0xA8)) = 0x2;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 32)));
    }
    return t13;
}


int miniDrawModels(void)
{
    int t1;

    if (((*(int *)0x8C287C60) == 0) && (t1 = *(int *)0x8C2FC208, t1 != 0)) {
        *(unsigned int *)0x8C2FC208 = ((*(int *)0x8C2FC208) - 1);
    }
    nlObjPutSetFadeColorOffset(0.0f, ((float)(*(int *)0x8C2FC208) / (*(float *)0x8C039B10)), 0.0f);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C039B20), (*(float *)0x8C039B1C));
    if ((*(int *)0x8C2FC204) == 0) {
        nlObjPutSetSaturate(0.0f, 1.0f);
    }
    nlObjPut(0xCB6F520);
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    if ((*(int *)0x8C2FC204) == 1) {
        nlObjPutSetSaturate(0.0f, 1.0f);
    }
    nlObjPut(0xCB72F50);
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    if ((*(int *)0x8C2FC204) == 2) {
        nlObjPutSetSaturate(0.0f, 1.0f);
    }
    nlObjPut(0xCB74880);
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    if ((*(int *)0x8C2FC204) == 3) {
        nlObjPutSetSaturate(0.0f, 1.0f);
    }
    nlObjPut(0xCB72148);
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    nlObjPutSetFadeColorOffset(1.0f, 1.0f, 1.0f);
    nlObjPut(0xCB761B0);
    return nlPopMatrix(0x1);
}

int entryIsVersus(int a4, int a5, int a6, int a7)
{
    int t25;
    int t7;
    int t8;
    int t13;
    int t17;
    int t18;
    int t21;
    int t11;
    int t15;

    t25 = 0x0;
    if ((*(int *)0x8C287D5C) != 2) {
        if ((*(int *)0x8C287ADC) == 2) {
            t7 = entryCountJoined();
            t8 = 0x1;
            if (t7 != 2) {
                t8 = 0x0;
            }
            t21 = t8;
        } else {
            t13 = 0x0;
            if (((*(int *)0x8C34326C) == 1) && (t11 = *(int *)0x8C3432DC, t11 == 1)) {
                t13 = 0x1;
            }
            t17 = 0x0;
            if (((*(int *)0x8C3432A4) == 1) && (t15 = *(int *)0x8C343314, t15 == 1)) {
                t17 = 0x1;
            }
            t18 = 0x0;
            if ((t13 == 0) && (t17 == 0)) {
                t18 = 0x1;
            }
            t21 = t18;
        }
        t25 = t21;
    }
    return t25;
}

int rankInsert1(void)
{
    int t0;
    int t3;
    int t5;
    int t9;
    int t11;
    int t12;
    int t25;

    *(unsigned int *)0x8C421E74 = 0x0;
    t0 = 0x0;
    for (;;) {
        { struct mv2 { int w[2]; }; *(struct mv2 *)((t0 + 0x8C421E78)) = *(struct mv2 *)((0x8C40C314 + t0)); }
        t0 = (t0 + 0x8);
        if ((unsigned int)t0 >= (unsigned int)0x50) {
            break;
        }
    }
    t3 = 0x0;
    for (;;) {
        t5 = *(int *)(((((t3 << 2) << 1) + 0x8C421E78) + 0x0));
        if ((unsigned int)t5 > (unsigned int)(*(int *)0x8C421E34)) {
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xA) {
                break;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)0x8C421E30 = t3;
    if ((int)t3 <= (int)0x9) {
        t9 = t5;
        t11 = 0x8C421EB8;
        t12 = 0x8;
        for (;;) {
            if ((int)t12 < (int)(*(int *)0x8C421E30)) {
                break;
            }
            t9 = t11;
            t9 = (t9 + 0x8);
            { struct mv2 { int w[2]; }; *(struct mv2 *)(t9) = *(struct mv2 *)(t11); }
            t11 = (t11 - 8);
            t12 = (t12 - 1);
        }
        *(unsigned int *)0x8C421E74 = 0x1;
    }
    memset(((((*(int *)0x8C421E30) << 2) << 1) + 0x8C421E78), 0x0, 0x8);
    *(unsigned int *)((((((*(int *)0x8C421E30) << 2) << 1) + 0x8C421E78) + 0x0)) = (*(int *)0x8C421E34);
    t25 = *(int *)0x8C421F40;
    *(unsigned char *)((((((*(int *)0x8C421E30) << 2) << 1) + 0x8C421E78) + 0x7)) = t25;
    return t25;
}


int scorePressure(void)
{
    int t1;
    int t3;
    int t45;
    int t23;
    int t29;
    int t30;
    int t41;
    int t37;
    int t49;
    int t53;
    int t58;
    int t61;
    int t64;
    int t69;
    int t16;
    int t24;
    int t25;
    int t31;
    int t34;

    t1 = *(int *)((0x8C10E648 + ((*(int *)0x8C287B10) << 2)));
    t3 = *(int *)((0x8C10E648 + ((*(int *)0x8C287B14) << 2)));
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t45 = 0x0;
        if (((*(int *)0x8C287B00) == 6) && (t16 = *(int *)0x8C287B04, t16 == 6)) {
            t23 = *(int *)0x8C287B10;
            t29 = 0x0;
            if (((t23 == 6) && (t24 = *(int *)0x8C287B14, (int)t24 < (int)0x6)) || (((int)t23 > (int)0x6) && (t25 = *(int *)0x8C287B14, (t23 - t25) == 1))) {
                t29 = 0x3C;
            }
            t30 = *(int *)0x8C287B14;
            t41 = (t29 + 0x3C);
            if ((t30 == 6) && (t31 = *(int *)0x8C287B10, (int)t31 < (int)0x6)) {
            } else {
                t37 = t29;
                if (((int)t30 > (int)0x6) && (t34 = *(int *)0x8C287B10, (t30 - t34) == 1)) {
                    t37 = (t29 + 0x3C);
                }
                t41 = t37;
            }
            t45 = t41;
        }
        t69 = t45;
    } else {
        t49 = *(int *)0x8C287C64;
        t53 = 0x0;
        if (((*(int *)0x8C287B00) == (t49 - 1)) && ((t1 == 40) && ((int)(t1 - t3) >= (int)0xA))) {
            t53 = 0x3C;
        }
        t58 = t53;
        if (((*(int *)0x8C287B04) == (t49 - 1)) && ((t3 == 40) && ((int)(t3 - t1) >= (int)0xA))) {
            t58 = (t53 + 0x3C);
        }
        t61 = t58;
        if (((int)(*(int *)0x8C287B00) < (int)(t49 - 1)) && (t1 == 40)) {
            t61 = (t58 + 0x3C);
        }
        t64 = t61;
        if (((int)(*(int *)0x8C287B04) < (int)(t49 - 1)) && (t3 == 40)) {
            t64 = (t61 + 0x3C);
        }
        t69 = t64;
    }
    return t69;
}

int primRectDirX(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t12;
    int stk[42];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = (-a6);
    if (a7 != 0) {
        t0 = a6;
    }
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x4));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t0), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x4)));
    t12 = *(int *)(((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t12), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x4)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t0), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t12), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a4, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x4)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x4)));
}

int endingScreenObjPut(void)
{
    float u7;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x38E, 1.33333337f, 0.300000012f, 3000.0f);
    *(float *)0x8C287A10 = (320.0f / (nlTanf(0.058032196f)));
    nlMatrixMode(0x1);
    nlPushUnitMatrix();
    nlTranslate(0.0f, 0.0f, (-1.0f));
    u7 = *(float *)0x8C287A10;
    nlScale((100.0f / u7), (100.0f / u7), 1.0f);
    nlObjPut(0xC5BEA50);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
    *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
    return (nlMatrixMode(0x1));
}


