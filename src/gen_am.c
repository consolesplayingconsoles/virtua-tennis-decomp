/* Straight-line functions with calls and guards (batch gen_am): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
float vecDist(Stk3, Stk3);
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
int FUN_8c032e32(void);
float effServeSpeedCalc(int a4);
int exprPlay(int a4, int a5, int a6);
float easeSin(int a4, float f4, float f5, float f6);
int sprPutScaleXArgs(int a4, int a5, int a6, int a7, Stk4 p, float f4, float f5);
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
int cpuInRange(Stk3, Stk3, Stk3);
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
            if ((int)(*(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xC58))) <= (int)0x11) {
                t6 = *(int *)((0x8C1D4770 + ((*(int *)0x8C1891E8) << 2)));
                strmVoicePlay(0x9, (*(int *)(((((*(int *)(((0xC58 + ((a4 * 0xD78) + 0x8C287D84)) + 0x0))) << 2) + (0x8C126090 + (((((t6 << 2) << 1) + t6) << 2) << 1))) + 0x0))));
    return;
            }
            return;
        }
        return;
    }
}


/* port: the function at 0x8C032E32 (functions.txt counts it in circuitStageStart, which falls into it): a state of its own in
   the game's table (0x8C108260..), reached without the set-up before it */


float effServeSpeedCalc(int a4)
{
    float t0;
    float u1;
    float u2;
    float u3;
    int stk[9];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    t0 = vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
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

int sprPutScaleXArgs(int a4, int a5, int a6, int a7, Stk4 p, float f4, float f5)
{
    int stk[14];


    stk[2] = p.w[0];
    stk[3] = p.w[1];
    stk[4] = p.w[2];
    stk[5] = p.w[3];
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x8)));
    *(float *)((a4 + 0x2C)) = f5;
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(float *)((a4 + 0x10)) = (f4 * ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))));
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    return (nlSprPut(a4, a5, (((int)stk + 4) + 0x4), a7));
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


int circuitStatsStart(void)
{
    *(unsigned int *)(((set_event(0x18, 0x8C03488C)) + 0x14)) = 0x0;
    if (((*(int *)0x8C287B3C) & 64) != 0) {
        *(unsigned int *)0x8C2FBD00 = (int)((float)(*(int *)0x8C2FBD00) * 0.25f);
    }
    return circuitStatsCalc();
}


int cpuInRange(Stk3 a, Stk3 b, Stk3 c)
{
    float u0;
    float u1;

    u0 = *(float *)&a.w[0];
    u1 = *(float *)&b.w[0];
    if (u0 > u1) {
        *(float *)&a.w[0] = u1;
        *(float *)&b.w[0] = u0;
    }
    if (!((*(float *)&a.w[0]) > *(float *)&c.w[0]) && !(*(float *)&c.w[0] > *(float *)&b.w[0])) {
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


int shadowPartPutProj(int a4)
{
    return nlObjPutMvOpenedVolume((*(int *)(((a4 << 2) + 0x8C18251C))));
}


