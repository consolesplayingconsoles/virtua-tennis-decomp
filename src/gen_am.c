/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char gNlSoundStreams[];
extern char g_0c2b31d8[];
extern char g_0c2b31dc[];
extern char strMwRnaNullHandleError[];

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXF_GetFileRange(int, int, int, int);
float _in_coss(float);
int circuitStatsCalc(void);
int crowdCheerStopAfter(int);
int fileLoadCloseSlot(int);
int fmMngAddData(int);
int fmMngSctRefresh(int);
int gameMatchSetup(void);
int kmiSetFogDMA(int, int, int, int);
int kmyiCheckNativeHandle(int);
float mathLineY(float, float, float, float, float);
int memmove(int, int, int);
int motionBackup(int);
int motionSetSpeed(int, float);
int mwRnaErrCallFunc(int, ...);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlObjPutMvOpenedVolume(int);
int nlRand(void);
float nlRandom(void);
float nlSin(int);
int nlSingleLine(int, int, int);
int nlSprPut(int, int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndG2Read(int);
int nlsndSeqRequest(int);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovSearchLibByUuid(int);
int ovUnlockCs(int);
int p2_cache_set(void);
int pdTmrAlarm(int);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int strmVoicePlay(int, int);
int syBtFlDeleteSct(int, int, int);
int thunk_nlSprPut(int);
int uniformPreviewPut(int, int);
float vecDist(Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int crowdCheerStart(void);
int _fmtout_putstr(int a4, int a5, int a6);
int fmMngWriteData(int a4, int a5, int a6);
int courtPropPickPose(int a4);
int cpuQuadPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int kmyGetBGPlaneBase(int a4, int a5);
int padVmsBeep(int a4, int a5);
int seFootSurface(float f4, float f5);
int texPicPut(int a4, int a5, int a6, int a7, float f4);
void strmCallNameScore(int a4);
int motionRootFirst(int a4, int a5, int a6, int a7, int a8);
int ovLibOpen(int a4);
int kmyWriteFogDMA(int a4);
int circuitStageStart(void);
float effServeSpeedCalc(int a4);
int exprPlay(int a4, int a5, int a6);
float easeSin(int a4, float f4, float f5, float f6);
int sprPutScaleXArgs(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int nlMatrixMode(int a4);
int nlsndStreamChgFilter(int a4, int a5, int a6);
void umpireStart(void);
int adxf_SetAfsFileInfo(int a4, int a5, int a6);
int shadowPlayerScale(float f4);
int shadowBallTrailLen(float f4);
int nlsndStreamChgVolBias(int a4, int a5);
float cos(float f4);
int nlsndStreamChgVol(int a4, int a5, int a6);
int nlsndStreamChgPan(int a4, int a5, int a6);
int nlsndStreamTranspose(int a4, int a5);
int nlsndStreamDetune(int a4, int a5);
int circuitStatsStart(void);
int nlsnd_PL_WaitAica1(void);
int nlsnd_PL_WaitBlockMove(void);
int mwRnaGetOutPan(int a4, int a5);
int cpuInRange(Stk4 s);
int endingWinnerRootSync(int a4, int a5, int a6, int a7);
int cpuDebugLine2(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int mwRnaGetOutVol(int a4);
int mwRnaGetDrctLvl(int a4);
int mwRnaGetNumData(int a4);
int umpCheerTimed(int a4);
int uniformPreviewReset(int a4, int a5);
int muneSlotReset(int a4, int a5);
int syHwCacheFinish(void);
int shadowPartPutProj(int a4);

int crowdCheerStart(void)
{
    float u0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0x8C182664 = 0x1;
    u0 = *(float *)0x8C08CC64;
    t1 = 0x8C3020C8;
    for (;;) {
        t2 = 0x0;
        t3 = t1;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned int *)((t3 + 0x14)) = (int)((nlRandom()) * u0);
            t3 = (t3 + 0x1C);
            if ((int)t2 >= (int)0x32) {
                break;
            }
        }
        t1 = (t1 + 0x460);
        if ((unsigned int)t1 >= (unsigned int)0x8C32DCC8) {
            break;
        }
    }
    return crowdCheerStopAfter(0xB4);
}

int _fmtout_putstr(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t13;
    int t5;
    int t6;
    int t9;
    int t10;
    int t20;

    t0 = *(int *)((a6 + 0x0));
    if (t0 == 1) {
        t2 = memmove((*(int *)((a6 + 0x4))), a4, a5);
        *(unsigned int *)((a6 + 0x4)) = ((*(int *)((a6 + 0x4))) + a5);
        *(unsigned int *)((a6 + 0x8)) = ((*(int *)((a6 + 0x8))) + a5);
        t20 = t2;
    } else {
        t13 = t0;
        if ((int)a5 > 0) {
            t5 = a4;
            t6 = 0x0;
            for (;;) {
                t9 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                t10 = ((int (*)(int, int, int))((*(int *)((a6 + 0xC)))))(t9, (*(int *)((a6 + 0x4))), a6);
                if (t10 != -1) {
                    t6 = (t6 + 0x1);
                    *(unsigned int *)((a6 + 0x8)) = ((*(int *)((a6 + 0x8))) + 0x1);
                    if ((int)t6 >= (int)a5) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t13 = t10;
        }
        t20 = t13;
    }
    return t20;
}

int fmMngWriteData(int managerAddress, int a5, int a6)
{
    int writePhase;
    int refreshResult;
    int eraseResult;
    int erasePhaseResult;
    int appendResult;
    int appendPhaseResult;
    int writeResult;
    int eraseOrRefreshResult;

    writePhase = *(int *)((managerAddress + 0x24));
    if (writePhase != 0) {
        if (writePhase != 1) {
            refreshResult = 0xFFFFFFFE;
            if (writePhase != 2) {
            } else {
                refreshResult = (fmMngSctRefresh(managerAddress));
            }
            eraseOrRefreshResult = refreshResult;
        } else {
            eraseResult = syBtFlDeleteSct((*(int *)((managerAddress + 0x4))), a5, a6);
            erasePhaseResult = 0xFFFFFFFD;
            if (eraseResult == -1) {
            } else {
                *(unsigned int *)((managerAddress + 0x24)) = 0x2;
                erasePhaseResult = 0x1;
            }
            eraseOrRefreshResult = erasePhaseResult;
        }
        writeResult = eraseOrRefreshResult;
    } else {
        appendResult = fmMngAddData(managerAddress);
        appendPhaseResult = appendResult;
        if (appendResult == -10) {
            *(unsigned int *)((managerAddress + 0x24)) = 0x1;
            appendPhaseResult = 0x1;
        }
        writeResult = appendPhaseResult;
    }
    return writeResult;
}

int courtPropPickPose(int a4)
{
    float u1;
    float u2;
    int t7;
    int t8;
    int t12;
    float u16;
    int t17;
    int t25;
    int t13;
    int t9;
    int t22;
    int t20;

    u1 = *(float *)0x8C0B6350;
    u2 = *(float *)0x8C0B6354;
    if ((*(float *)((a4 + 0x0))) > 0.0f) {
        if (((*(float *)((a4 + 0x8))) + u2) == 0.0f) {
            if (!(u1 > (*(float *)((a4 + 0x8))))) {
                t7 = nlRand();
                *(unsigned int *)((a4 + 0x10)) = 0x1;
                t9 = t7;
            } else {
                t8 = nlRand();
                *(unsigned int *)((a4 + 0x10)) = (t8 & 0x2);
                t9 = (t8 & 0x2);
            }
            t13 = t9;
        } else {
            t12 = nlRand();
            *(unsigned int *)((a4 + 0x10)) = (t12 & 0x1);
            t13 = (t12 & 0x1);
        }
        t25 = t13;
    } else {
        u16 = *(float *)((a4 + 0x8));
        if (u2 > u16) {
            t17 = nlRand();
            *(unsigned int *)((a4 + 0x10)) = 0x1;
            t22 = t17;
        } else {
            if (u1 > u16) {
                t20 = ((nlRand()) & 0x2);
            } else {
                t20 = ((nlRand()) & 0x1);
            }
            *(unsigned int *)((a4 + 0x10)) = t20;
            t22 = t20;
        }
        t25 = t22;
    }
    return t25;
}

int cpuQuadPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    float u0;
    float u1;
    float u2;
    int stk[31];

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    stk[22] = a11;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = a4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = a4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a4;
    u0 = *(float *)(((((int)stk + 4) + 0x48) + 0x8));
    *(float *)(((((int)stk + 4) + 0x30) + 0x8)) = u0;
    *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = u0;
    *(float *)(((((int)stk + 4) + 0x10) + 0x8)) = u0;
    *(float *)((((int)stk + 4) + 0x8)) = u0;
    u1 = *(float *)(((((int)stk + 4) + 0x48) + 0x0));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = u1;
    *(float *)((((int)stk + 4) + 0x0)) = u1;
    *(float *)(((((int)stk + 4) + 0x30) + 0x0)) = *(float *)&a11;
    *(float *)(((((int)stk + 4) + 0x20) + 0x0)) = *(float *)&a11;
    u2 = *(float *)(((((int)stk + 4) + 0x48) + 0x4));
    *(float *)(((((int)stk + 4) + 0x20) + 0x4)) = u2;
    *(float *)((((int)stk + 4) + 0x4)) = u2;
    *(float *)(((((int)stk + 4) + 0x30) + 0x4)) = *(float *)&a12;
    *(float *)(((((int)stk + 4) + 0x10) + 0x4)) = *(float *)&a12;
    return (nlDispStripTrnsl(0x4, ((int)stk + 4)));
}

int kmyGetBGPlaneBase(int a4, int a5)
{
    int t0;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    *(unsigned int *)((a5 + 0x0)) = (*(int *)(((a4 + 0x18) + 0x24)));
    return 0x0;
}


int seFootSurface(float f4, float f5)
{
    int t5;
    int t45;
    int t36;
    int t13;
    int t53;
    int t6;
    int t28;
    int t21;

    if ((*(int *)0x8C421F60) == 0) {
        t5 = *(int *)0x8C402C08;
        t45 = t5;
        if ((t5 == 1) && (t6 = *(int *)0x8C38BA70, t6 != 0)) {
            t36 = 0x8C38BA74;
            if ((*(int *)0x8C38BA74) != 0) {
                if (!(f4 > 1.0f)) {
                    t28 = (nlsndSeqRequest(0x107A9));
                } else {
                    if (1 && (1.60000002f > f4)) {
                        t21 = (nlsndSeqRequest(0x207A9));
                    } else {
                        t13 = 0x8C0D2670;
                        if (f4 == 1.60000002f) {
                            t13 = (nlsndSeqRequest(0x307A9));
                        }
                        t21 = t13;
                    }
                    t28 = t21;
                }
                t36 = t28;
            }
            t45 = t36;
        }
        t53 = t45;
    }
    return t53;
}


void strmCallNameScore(int a4)
{
    int t1;
    int t6;

    t1 = *(int *)0x8C287C64;
    if ((*(int *)0x8C287B00) != t1) {
        if ((*(int *)0x8C287B04) != t1) {
            if ((int)(*(int *)((((a4 * 0xD78) + (int)Player) + 0xC58))) <= (int)0x11) {
                t6 = *(int *)((0x8C1D4770 + ((*(int *)0x8C1891E8) << 2)));
                strmVoicePlay(0x9, (*(int *)(((((*(int *)(((0xC58 + ((a4 * 0xD78) + (int)Player)) + 0x0))) << 2) + (0x8C126090 + (((((t6 << 2) << 1) + t6) << 2) << 1))) + 0x0))));
    return;
            }
            return;
        }
        return;
    }
}


int ovLibOpen(int a4)
{
    int t3;
    int t7;
    int t4;
    int t6;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a4;
    ovLockCs(((int)stk + 4));
    *(unsigned int *)(((int)stk + 16)) = (ovGetLibTbl((((int)stk + 4) + 0x4)));
    t3 = ovSearchLibByUuid((*(int *)(((int)stk + 12))));
    t7 = 0x0;
    if ((int)t3 >= 0) {
        t4 = *(int *)(((int)stk + 16));
        t6 = *(int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x0));
        *(unsigned int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x4)) = ((*(int *)((((t4 + 0x8) + ((t3 << 2) << 1)) + 0x4))) + 0x1);
        t7 = t6;
    }
    ovUnlockCs(((int)stk + 4));
    return t7;
}

int kmyWriteFogDMA(int a4)
{
    if ((0x8C4707EC & 31) == 0) {
        kmiSetFogDMA(a4, 0x0, 0x8C4707EC, 0x200);
        return 0x0;
    }
    return kmiSetFogDMA(a4, 0x0, 0x8C4707EC, 0x200);
}

int circuitStageStart(void)
{
    int t0;
    int t1;
    int t4;

    *(unsigned int *)0x8C2FBE9C = 0x0;
    t0 = *(int *)0x8C2FBE1C;
    t1 = *(int *)0x8C2FBC50;
    *(unsigned int *)0x8C2FBE20 = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x4)));
    *(unsigned int *)0x8C1891E8 = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x8)));
    t4 = *(int *)0x8C2FBE20;
    *(unsigned int *)0x8C287ADC = ((((((((*(int *)((0x8C108E9C + ((((t4 << 2) << 2) + t4) << 2)))) & 2) == 0)) ? 1 : 0) ^ 0x1) << 1) + 0x2);
    *(unsigned int *)0x8C20D154 = 0x6;
    *(unsigned int *)0x8C20D158 = 0x4;
    return gameMatchSetup();
}

float effServeSpeedCalc(int a4)
{
    float t0;
    float u1;
    float u2;
    float u3;
    int stk[9];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    t0 = vecDist(*(Stk3 *)(a4));
    u1 = *(float *)0x8C0834DC;
    u2 = *(float *)0x8C0834E0;
    u3 = *(float *)0x8C0834E4;
    *(float *)0x8C301B74 = (((t0 * u1) / u2) / u3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C301B78) = *(struct mv3 *)((a4 + 0x24)); }
    return (((t0 * u1) / u2) / u3);
}

int exprPlay(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = *(int *)((((a6 << 2) + (0x8C122D20 + (a5 * 0x34))) + 0x0));
    *(unsigned int *)((((t0 * 0x270) + 0x8C34B4F4) + 0x268)) = 0x0;
    *(unsigned int *)((((t0 * 0x270) + 0x8C34B4F4) + 0x26C)) = 0x0;
    t1 = set_event(0x20, 0x8C088FC0);
    *(unsigned int *)((t1 + 0x14)) = 0x0;
    *(unsigned int *)((t1 + 0x1C)) = (*(int *)((a4 + 0xC58)));
    *(unsigned int *)((t1 + 0x18)) = t0;
    return 0xC58;
}

float easeSin(int a4, float f4, float f5, float f6)
{
    float u7;
    float u3;

    u7 = f5;
    if (!((*(float *)0x8C1016E4) > ((float)a4 / f6))) {
    } else {
        u3 = (*(float *)0x8C0165CC);
        u3 = u3 + (*(float *)0x8C0165D0) * ((float)a4 / f6);
        u7 = (f4 + ((((nlSin((int)u3)) + 1.0f) * f5) / f6));
    }
    return u7;
}

int sprPutScaleXArgs(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    int stk[14];

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    stk[5] = a11;
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x8)));
    *(float *)((a4 + 0x2C)) = f5;
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(float *)((a4 + 0x10)) = (f4 * ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))));
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    return (nlSprPut(a4, a5, (((int)stk + 4) + 0x4), a7));
}

int nlMatrixMode(int a4)
{
    int t1;
    int t2;

    nlGetMatrix(0x0);
    t1 = *(signed char *)(int)g_0c2b31d8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t1 << 1) + t1) << 2) + (int)g_0c2b31dc)) = *(struct mv3 *)((int)g_0c2b31dc); }
    *(unsigned char *)(int)g_0c2b31d8 = a4;
    t2 = *(signed char *)(int)g_0c2b31d8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((int)g_0c2b31dc) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + (int)g_0c2b31dc)); }
    return nlLoadMatrix((*(int *)0x8C450864));
}

int nlsndStreamChgFilter(int a4, int a5, int a6)
{
    int t0;
    int stk[5];

    *(unsigned short *)(((int)stk + 4)) = a6;
    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 8)) = ((((short)a4 << 8) << 2) << 2);
        nlsndSeqRequest(((((((short)a4 << 8) << 2) << 2) | ((short)a5 << 16)) | 0xAA1));
        return nlsndSeqRequest(((((*(short *)(((int)stk + 4))) << 16) | (*(int *)(((int)stk + 8)))) | 0xBA1));
    }
    return t0;
}

void umpireStart(void)
{
    int t0;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        if ((*(int *)(((t0 << 2) + 0x8C1D0DF0))) != 0) {
            motionBackup(0x8C38A898);
            *(unsigned int *)0x8C38AE50 = 0x1;
            *(unsigned int *)0x8C38AE48 = 0x0;
            motionSetSpeed(0x8C38A898, (*(float *)0x8C0CAE00));
    return;
        }
        return;
    }
}

int adxf_SetAfsFileInfo(int a4, int a5, int a6)
{
    int t2;
    int stk[7];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t2 = ADXF_GetFileRange((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (((int)stk + 4) + 0x4), ((int)stk + 4));
    if ((int)t2 < 0) {
        return 0xFFFFFFFD;
    }
    *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((a4 + 0x14)) = ((((*(int *)(((int)stk + 4))) << 8) << 2) << 1);
    return 0x0;
}

int shadowPlayerScale(float f4)
{
    if (0.699999988f > f4) {
        return 0;
    }
    if (f4 > 3.0f) {
        return 15;
    }
    return (int)(mathLineY(0.699999988f, 0.0f, 3.0f, 15.0f, f4));
}

int shadowBallTrailLen(float f4)
{
    if (4.0f > f4) {
        return 0;
    }
    if (f4 > 25.0f) {
        return 15;
    }
    return (int)(mathLineY(4.0f, 0.0f, 25.0f, 15.0f, f4));
}

int nlsndStreamChgVolBias(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        return nlsndSeqRequest((0xCA1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

float cos(float f4)
{
    int stk[3];

    *(float *)(((int)stk + 4)) = (_in_coss(f4));
    if (((*(int *)((((int)stk + 4) + 0x0))) & 0x7F800000) == 0x7F800000) {
        if (((*(int *)((((int)stk + 4) + 0x0))) & 0x7FFFFF) != 0) {
            *(unsigned int *)0x8C45A0E0 = 0x44D;
        } else {
            *(unsigned int *)0x8C45A0E0 = 0x44C;
        }
    }
    return (*(float *)(((int)stk + 4)));
}

int nlsndStreamChgVol(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        return nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0xA2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

int nlsndStreamChgPan(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        return nlsndSeqRequest((((((((short)a4 << 8) << 2) << 2) | ((short)a6 << 16)) | 0x1A2) + ((((short)a5 << 8) << 2) << 1)));
    }
    return t0;
}

int nlsndStreamTranspose(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        return nlsndSeqRequest((0x8A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int nlsndStreamDetune(int a4, int a5)
{
    int t0;

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    if (t0 == 1) {
        return nlsndSeqRequest((0x9A1 | ((((short)a5 + 0x40) << 16) | ((((short)a4 << 8) << 2) << 2))));
    }
    return t0;
}

int circuitStatsStart(void)
{
    *(unsigned int *)(((set_event(0x18, 0x8C03488C)) + 0x14)) = 0x0;
    if (((*(int *)0x8C287B3C) & 64) != 0) {
        *(unsigned int *)0x8C2FBD00 = (int)((float)(*(int *)0x8C2FBD00) * 0.25f);
    }
    return circuitStatsCalc();
}

int nlsnd_PL_WaitAica1(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = nlsndG2Read(0xA08000B4);
        if (t1 != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x400000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int nlsnd_PL_WaitBlockMove(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = nlsndBlockMoveStatus();
        if (t1 == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x1000000) {
            return 0xFFFFFF00;
        }
    }
    return 0x0;
}

int mwRnaGetOutPan(int a4, int a5)
{
    if (a4 == 0) {
        mwRnaErrCallFunc((int)strMwRnaNullHandleError);
        return 0xFFFFFFFF;
    }
    return (*(int *)(((a4 + 0x64) + (a5 << 2))));
}

int cpuInRange(Stk4 s)
{
    float u0;
    float u1;
    int stk[13];

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    u0 = *(float *)((((int)stk + 4) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    if (u0 > u1) {
        *(float *)((((int)stk + 4) + 0x0)) = u1;
        *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = u0;
    }
    if (!((*(float *)((((int)stk + 4) + 0x0))) > *(float *)&s.w[6]) && !(*(float *)&s.w[6] > *(float *)&s.w[3])) {
        return 1;
    }
    return 0;
}

int endingWinnerRootSync(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C402CAC;
    if (t0 == 0) {
        t1 = *(int *)0x8C402CB4;
        t4 = (motionRootFirst(t1, a5, a6, a7, (0xAE8 + t1)));
    } else {
        
        t4 = t0;
    }
    return t4;
}


int mwRnaGetOutVol(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc((int)strMwRnaNullHandleError);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x60)));
}

int mwRnaGetDrctLvl(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc((int)strMwRnaNullHandleError);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x84)));
}

int mwRnaGetNumData(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc((int)strMwRnaNullHandleError);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x34)));
}

int umpCheerTimed(int a4)
{
    *(unsigned int *)(((set_event(0x18, 0x8C0849E8)) + 0x14)) = a4;
    return crowdCheerStart();
}

int uniformPreviewReset(int a4, int a5)
{
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x8)) = a5;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0xC)) = 0x0;
    return uniformPreviewPut(a4, a5);
}

int muneSlotReset(int a4, int a5)
{
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x0)) = a5;
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x4)) = a5;
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8)) = a5;
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0xC)) = 0x0;
    return fileLoadCloseSlot(a4);
}

int syHwCacheFinish(void)
{
    return p2_cache_set();
}

int shadowPartPutProj(int a4)
{
    return nlObjPutMvOpenedVolume((*(int *)(((a4 << 2) + 0x8C18251C))));
}




