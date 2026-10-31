/* Straight-line functions with calls and guards (batch gen_yd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camViewToWorld(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddCorners(int, int);
int cpuDblAimAddCourt(int, int);
int cpuDblAimAddDeep(int, int);
int cpuDblAimAddRange(int, int, float, float);
float cpuDistXZ(int, int);
float cpuOppLineX(int);
int cpuSglAimAddGrid(int, int);
int cpuSglAimAddRange(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimAddSides(int, int);
int cpuSglAimRateOpp(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimRateOpp2(int, int, int, int, int, int, int, int, int, int, int, int);
float cpuSglAimScore(int, int, float, float);
int cpuShotTargetSet(int, float, float);
int crowdCheerStart(void);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuSetValue(int, int, int);
int ndbGetTargets(int, int, int);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlGetMatrix(int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int restart_t404(void);
int serveGetServer(void);
int thunk_FUN_8c0f2210(int);
int vecAdd(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int FUN_8c013714(int a4);
int FUN_8c074c9c(int a4, int a5);
int FUN_8c0d9072(int a4);
float FUN_8c04d8dc(int a4, int a5, float f4, float f5, float f6);
float FUN_8c04dad4(int a4, int a5, float f4, float f5, float f6);
float FUN_8c071a70(int a4, int a5);
float FUN_8c05fbda(int a4, float f4, float f5, float f6, float f7);
int FUN_8c04e424(int a4, int a5, float f4, float f5);
float FUN_8c0553b0(int a4, int a5, float f4, float f5, float f6);
int FUN_8c0b5f78(int a4);
float FUN_8c0551a8(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_8c04c670(int a4, int a5);
int FUN_8c0495da(int a4);
float FUN_8c04dcca(int a4, int a5, float f4, float f5, float f6);
int FUN_8c06f7aa(int a4, int a5);

int FUN_8c013714(int a4)
{
    int stk[25];
    register int t1;
    register int t63;
    register int t5;
    register int t25;
    register float u52;
    register float u53;
    register float u54;
    register float u57;
    register float u58;
    register float u59;
    register int t62;
    register int t18;

    t1 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    t63 = t1;
    if (t1 == 0) {
    } else {
        t5 = *(int *)0x8C285E48;
        if (((*(int *)(((*(int *)((((t5 << 2) + 0x8C29B898) + 0x0))) + 0x8))) & 0x400) == 0) {
            *(float *)((a4 + 0x28)) = ((float)(-(*(short *)(((*(int *)((((t5 << 2) + 0x8C29B898) + 0x0))) + 0x1C)))) * 0.000199999995f);
            *(float *)((a4 + 0x24)) = ((float)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C285E48) << 2)))) + 0x1E))) * 0.000199999995f);
            *(float *)((a4 + 0x34)) = 0.0f;
            t18 = 0x30;
        } else {
            *(float *)((a4 + 0x30)) = ((float)(*(short *)(((*(int *)((((t5 << 2) + 0x8C29B898) + 0x0))) + 0x1C))) * 0.00499999989f);
            *(float *)((a4 + 0x34)) = ((float)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C285E48) << 2)))) + 0x1E))) * 0.00499999989f);
            *(float *)((a4 + 0x28)) = 0.0f;
            t18 = 0x24;
        }
        *(float *)((a4 + t18)) = 0.0f;
        t25 = *(int *)((0x8C29B898 + ((*(int *)0x8C285E48) << 2)));
        *(float *)((a4 + 0x38)) = (((float)(unsigned short)(*(short *)((t25 + 0x1A))) * 0.0399999991f) - ((float)(unsigned short)(*(short *)((t25 + 0x18))) * 0.0399999991f));
        *(unsigned short *)((a4 + 0x3C)) = ((*(short *)((a4 + 0x3C))) + (int)(((*(float *)(((0x24 + a4) + 0x0))) * 32768.0f) / 3.1415925f));
        *(unsigned short *)((a4 + 0x3E)) = ((*(short *)((a4 + 0x3E))) + (int)(((*(float *)(((0x28 + a4) + 0x0))) * 32768.0f) / 3.1415925f));
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0x3E))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0x3C))));
        nlCalcPoint((a4 + 0x30), (((int)stk + 48) + 0xC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 48) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((a4 + 0x18)); }
        *(int *)((int)stk + 20) = (0x18 + a4);
        vecAdd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20));
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        nlRotateAX((-(unsigned short)(*(short *)((a4 + 0x3C)))));
        nlRotateAY((-(unsigned short)(*(short *)((a4 + 0x3E)))));
        nlTranslate((-(*(float *)((a4 + 0x18)))), (-(*(float *)((a4 + 0x1C)))), (-(*(float *)((a4 + 0x20)))));
        nlGetMatrix(0x8C2878F8);
        nlPopMatrix(0x1);
        *(float *)0x8C287A04 = 40.0f;
        nlLocate(0xA, 0x28);
        u52 = *(float *)((a4 + 0x20));
        *(float *)(((int)stk + 16)) = u52;
        u53 = *(float *)((a4 + 0x1C));
        *(float *)(((int)stk + 12)) = u53;
        u54 = *(float *)((a4 + 0x18));
        *(float *)(((int)stk + 8)) = u54;
        *(int *)((int)stk + 4) = 0x8C101424;
        nlPrintf(0x8C101424, u54, u53, u52);
        *(Stk3 *)(((int)stk + 36)) = vecMake(0.0f, 0.0f, -100.0f);
        *(int *)((int)stk + 32) = (((int)stk + 48) + 0x18);
        camViewToWorld(0x0, 0x0, 0x0, 0x0, (((int)stk + 48) + 0x18));
        u57 = *(float *)(((((int)stk + 48) + 0x18) + 0x8));
        *(float *)(((int)stk + 28)) = u57;
        u58 = *(float *)(((((int)stk + 48) + 0x18) + 0x4));
        *(float *)(((int)stk + 24)) = u58;
        u59 = *(float *)(((((int)stk + 48) + 0x18) + 0x0));
        *(float *)(((int)stk + 20)) = u59;
        *(int *)((int)stk + 16) = 0x8C101438;
        nlPrintf(0x8C101438, u59, u58, u57);
        t62 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1);
        *(float *)0x8C287A04 = (float)t62;
        t63 = t62;
    }
    return t63;
}

int FUN_8c074c9c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t2 = *(int *)((a4 + 0xB5C));
    t3 = (int)((int)(nlRand()) % (int)a5);
    *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
    *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
    *(unsigned char *)(((0x13C + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x138));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    u0 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x130));
    u2 = (-1.0f);
    u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / 54.8499985f), u2);
    *(unsigned char *)(((0x1D + ((t2 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t3 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    t3 = *(int *)0x8C2FCC1C;
    t4 = (int)((int)(nlRand()) % (int)0x5);
    t5 = *(int *)0x8C2FCC1C;
    u0 = (float)(((-((t3 << 1) + t3)) + t4) + 0x1A);
    if ((*(int *)0x8C291F74) == 5) {
        u0 = ((float)(((-((t3 << 1) + t3)) + t4) + 0x1A) + (float)(0x14 - t5));
    }
    u1 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0xC));
    u2 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0xC));
    u3 = u0;
    u3 = u3 + 0.5f * (((float)(*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / 100.0f)) + 1.0f));
    *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0xC)) = (u2 - (float)(0x5A - (((t5 << 2) << 1) - t5)));
    u0 = u3;
    if (((*(int *)0x8C2FCC1C) != 2) && (t0 = *(signed char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12B)), t0 == 2)) {
        u0 = (u3 * 0.5f);
    }
    if (-200.0f > (*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0xC)))) {
        *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
    }
    u1 = u0;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u2 = *(float *)((0x8C288A14 + ((serveGetServer()) * 0xD78)));
        u3 = u0;
        if (u2 > 1.0f) {
            u3 = (u0 + (float)((int)((int)(nlRand()) % (int)0x3)));
        }
        u1 = u3;
    }
    u0 = u1;
    if (u1 > (float)((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x118))) + 0x7)) {
        u0 = (float)((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x118))) + 0x7);
    }
    if ((u0 > (*(float *)0x8C291F54)) && (t1 = *(signed char *)((((t2 * 0x160) + 0x8C2FC69C) + 0xB6)), t1 == 0)) {
        *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x4)) = (u0 - (*(float *)0x8C291F54));
    } else {
        *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
    }
    *(unsigned int *)((a4 + 0xA24)) = 0x1;
    return 0xA24;
}

int FUN_8c0d9072(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(int *)0x8C287D5C;
    if (t1 == 3) {
        *(unsigned int *)0x8C40C280 = 0x0;
    }
    t2 = t1;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 1) / (*(float *)0x8C23D204))) {
        t2 = (nlsndSeqRequest(0x403A9));
    }
    t1 = t2;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 5) / (*(float *)0x8C23D204))) {
        t1 = (nlsndSeqRequest(0x703A9));
    }
    t2 = t1;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 10) / (*(float *)0x8C23D204))) {
        t1 = 0x403A9;
        if ((int)(*(int *)((a4 + 0x14))) >= 0) {
            t1 = 0x203A9;
        }
        nlsndSeqRequest(t1);
        t2 = (crowdCheerStart());
    }
    t1 = t2;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 11) / (*(float *)0x8C23D204))) {
        if ((int)(*(int *)((a4 + 0x14))) >= 0) {
            t2 = 0x603A9;
            if ((*(int *)((0x8C2889E4 + ((*(int *)((a4 + 0x14))) * 0xD78)))) == 5) {
                t2 = 0x503A9;
            }
            t3 = (nlsndSeqRequest(t2));
        } else {
            t3 = (nlsndSeqRequest(0x3A9));
        }
        t1 = t3;
    }
    t2 = t1;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 12) / (*(float *)0x8C23D204))) {
        if ((int)(*(int *)((a4 + 0x14))) < 0) {
            t1 = (nlsndSeqRequest(0x103A9));
        } else {
            t3 = *(int *)((0x8C2889E4 + ((*(int *)((a4 + 0x14))) * 0xD78)));
            t4 = t3;
            if (t3 == 5) {
                t4 = (nlsndSeqRequest(0x104A9));
            }
            t1 = t4;
        }
        t2 = t1;
    }
    t1 = t2;
    if ((*(int *)((a4 + 0x18))) == (int)((float)((*(int *)((a4 + 0x1C))) - 43) / (*(float *)0x8C23D204))) {
        t3 = *(int *)((a4 + 0x14));
        t4 = t2;
        if ((int)t3 >= 0) {
            t2 = *(int *)((0x8C2889E4 + (t3 * 0xD78)));
            t3 = t2;
            if (t2 == 5) {
                t3 = (nlsndSeqRequest(0x4A9));
            }
            t4 = t3;
        }
        t1 = t4;
    }
    *(volatile int *)((a4 + 0x1C));
    *(volatile float *)0x8C23D204;
    t2 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t2 - 1);
    if (((int)(t2 - 1) > 0) && (t0 = *(int *)0x8C40C280, t0 != 0)) {
        return t1;
    }
    if ((*(int *)0x8C1D1274) == 0) {
        nlsndSystemControl(0x1, 0x1300A0, 0x0);
        nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64));
    }
    return nlCloseEvent(a4);
}

float FUN_8c04d8dc(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(49.9800034f > u1)) {
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (!(155.154999f > u1)) {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t2 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t2 = nlRand();
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            u0 = (float)(t3 + 0x3);
            if ((*(int *)0x8C291F74) == 5) {
                u0 = ((float)(t3 + 0x3) + (*(float *)0x8C04DB34));
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)0x8C04DB3C;
            u3 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u4 = u0;
            u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C04DB38))) + 1.0f));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u3 - 60.0f);
            u0 = *(float *)0x8C04DB44;
            if (u0 > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = u0;
            }
            if ((u4 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u4 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x2;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

float FUN_8c04dad4(int a4, int a5, float f4, float f5, float f6)
{
    int stk[9];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t9;
    register int t10;
    register int t26;
    register int t16;
    register int t17;
    register int t18;
    register float u19;
    register float u33;
    register float u34;
    register float u37;
    register float u40;
    register float u45;
    register float u50;
    register float u51;
    register float u52;
    register float u53;
    register float u54;
    register float u83;
    register float u69;
    register int t58;

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
            t9 = nlRand();
            t10 = ((~(((~t9) + 0x1) & 0x1)) + 0x1);
            if ((int)t9 >= 0) {
                t10 = (t9 & 0x1);
            }
            if (t10 != 0) {
                cpuSglAimRateOpp2(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            } else {
                cpuSglAimRateOpp(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
            t26 = 0x0;
            if ((int)a5 > 0) {
                t16 = 0x0;
                t17 = 0x8C2FCC6C;
                t18 = 0x0;
                u19 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t17 + 0x1C))) > u19) {
                        u19 = (*(float *)((t17 + 0x1C)));
                        t18 = t16;
                    }
                    t16 = (t16 + 0x1);
                    t17 = (t17 + 0x20);
                    if ((int)t16 >= (int)a5) {
                        break;
                    }
                }
                t26 = t18;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t26 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t26 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t26 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t26 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u33 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u34 = (-u33);
            if (!(0.0f > u33)) {
                u34 = u33;
            }
            u37 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u40 = (-1.0f);
            u40 = u40 + (1.0f + 1.0f) * (u34 / (*(float *)0x8C04DD34));
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u37) / (*(float *)0x8C287B40)), u40);
            u45 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u45 = (*(float *)0x8C04DD40);
            }
            u50 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u51 = *(float *)0x8C04DD48;
            u52 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u53 = u45;
            u53 = u53 + u51 * (((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u50 / (*(float *)0x8C04DD44))) + 1.0f));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u52 - 60.0f);
            u54 = *(float *)0x8C04DD50;
            if (u54 > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = u54;
            }
            if ((u53 > (*(float *)0x8C291F54)) && (t58 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t58 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u53 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u69 = u51;
        }
        u83 = u69;
    }
    return u83;
}

float FUN_8c071a70(int a4, int a5)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register float F0;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = *(int *)((v0_4 + 0xB5C));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_1 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
    v0_3 = (((((v0_1 + 0x3) & 0x3) * 0xD78) + 0x8C287D84));
    v0_2 = (((((v0_1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84));
    v0_0 = (v0_0);
    v0_1 = (v0_4);
    v0_4 = (0x8C291F24);
    if ((((*(int *)0x8C291F78) & 4) == 0)) goto L_8C071AC8;
    v0_4 = ((cpuDblAimAddCourt(v0_1, v0_0)));
    L_8C071B68:;
    v0_0 = ((v0_0 + v0_4));
    L_8C071C3A:;
    return F0;
    L_8C071AC8:;
    if ((((*(int *)((v0_1 + 0xB60))) & 4) == 0)) goto L_8C071AEE;
    v0_4 = !(10.0f > (cpuDistXZ((0xAE8 + v0_1), (0xBA8 + v0_1))));
    if (v0_4) goto L_8C071AEE;
    v0_4 = ((cpuDblAimAddRange(v0_1, v0_0, F4, F5)));
    goto L_8C071B68;
    L_8C071AEE:;
    v0_4 = !(0.300000012f > (cpuOppLineX(v0_1)));
    if (v0_4) goto L_8C071B06;
    v0_4 = ((cpuDblAimAddCorners(v0_1, v0_0)));
    goto L_8C071B68;
    L_8C071B06:;
    w0_0 = *(float *)(((*(int *)(((int)stk + 4))) + 0xAF0));
    v0_4 = (0xAF0);
    F4 = (w0_0);
    F5 = (47.5400009f);
    if ((0.0f > w0_0)) goto L_8C071B1A;
    w0_0 = (F4);
    L_8C071B1E:;
    if ((F5 > w0_0)) goto L_8C071B62;
    w0_0 = *(float *)((v0_3 + v0_4));
    w0_1 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C071B5C;
    w0_1 = ((*(float *)((v0_3 + v0_4))));
    L_8C071B5E:;
    if (!((!(F5 > w0_1)))) goto L_8C071B62;
    w0_3 = *(float *)((v0_2 + 0xAE8));
    w0_4 = *(float *)((v0_1 + 0xAE8));
    v0_3 = (0x8C041C58);
    w0_2 = ((w0_3 - w0_4));
    w0_1 = (54.8499985f);
    w0_0 = (0.0f);
    F5 = (((*(float *)((v0_1 + 0xB00))) * 11.8850002f));
    if ((!((w0_3 - w0_4) > 0.0f))) goto L_8C071B8E;
    v0_3 = (0x1);
    goto L_8C071B98;
    L_8C071B62:;
    v0_4 = ((cpuDblAimAddDeep(v0_1, v0_0)));
    goto L_8C071B68;
    L_8C071B98:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_3 * w0_1), F5);
    w0_3 = *(float *)((v0_2 + 0xAE8));
    w0_4 = *(float *)((v0_1 + 0xAE8));
    v0_0 = ((v0_0 + 0x1));
    w0_2 = ((w0_3 - w0_4));
    w0_0 = (0.0f);
    F5 = (((*(float *)((v0_1 + 0xB00))) * 59.4249992f));
    if ((!((w0_3 - w0_4) > 0.0f))) goto L_8C071BC4;
    v0_3 = (0x1);
    L_8C071BCE:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_3 * w0_1), F5);
    w0_3 = *(float *)((v0_2 + 0xAE8));
    w0_4 = *(float *)((v0_1 + 0xAE8));
    v0_0 = ((v0_0 + 0x1));
    w0_2 = ((w0_3 - w0_4));
    w0_0 = (0.0f);
    F5 = (((*(float *)((v0_1 + 0xB00))) * 83.1949997f));
    if ((!((w0_3 - w0_4) > 0.0f))) goto L_8C071BFA;
    v0_3 = (0x1);
    L_8C071C04:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_3 * w0_1), F5);
    cpuAimPointSet((v0_0 + 0x1), 0x1, w0_1, ((*(float *)((v0_1 + 0xB00))) * 118.849998f));
    cpuAimPointSet(((v0_0 + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((v0_1 + 0xB00))) * 118.849998f));
    v0_0 = ((((v0_0 + 0x1) + 0x1) + 0x1));
    goto L_8C071C3A;
    L_8C071BFA:;
    if ((!(w0_0 > w0_2))) goto L_8C071C02;
    v0_3 = (0xFFFFFFFF);
    goto L_8C071C04;
    L_8C071C02:;
    v0_3 = (0x0);
    goto L_8C071C04;
    L_8C071BC4:;
    if ((!(w0_0 > w0_2))) goto L_8C071BCC;
    v0_3 = (0xFFFFFFFF);
    goto L_8C071BCE;
    L_8C071BCC:;
    v0_3 = (0x0);
    goto L_8C071BCE;
    L_8C071B8E:;
    if ((!(w0_0 > w0_2))) goto L_8C071B96;
    v0_3 = (0xFFFFFFFF);
    goto L_8C071B98;
    L_8C071B96:;
    v0_3 = (0x0);
    goto L_8C071B98;
    L_8C071B5C:;
    w0_1 = ((-w0_1));
    goto L_8C071B5E;
    L_8C071B1A:;
    w0_0 = ((-F4));
    goto L_8C071B1E;
}

float FUN_8c05fbda(int a4, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = (*(float *)((a4 + 0xAE8)));
                u1 = (*(float *)((a4 + 0xAF0)));
            } else {
                u2 = *(float *)((a4 + 0xAF0));
                u3 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u4 = (-u2);
                if (!(0.0f > u2)) {
                    u4 = u2;
                }
                u2 = (-u3);
                if (!(0.0f > u3)) {
                    u2 = u3;
                }
                if (u2 > u4) {
                    t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    t2 = (u2 > 0.0f) - (0.0f > u2);
                    u3 = (-u2);
                    if (!(0.0f > u2)) {
                        u3 = u2;
                    }
                    u2 = ((float)t2 * u3);
                    u3 = (u2 * 0.400000006f);
                    u2 = (float)t1;
                } else {
                    t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u4 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    t2 = (u4 > 0.0f) - (0.0f > u4);
                    u5 = (-u4);
                    if (!(0.0f > u4)) {
                        u5 = u4;
                    }
                    u4 = ((float)t2 * u5);
                    u3 = (u4 * 0.600000024f);
                    u2 = (float)t1;
                }
                u4 = u3;
                u4 = u4 + 32.9099998f * u2;
                u2 = u4;
                if (((u4 > 0.0f) - (0.0f > u4)) != (*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    u2 = 0.0f;
                }
                u3 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.400000006f)) + 1.10000002f);
                u4 = ((*(float *)((a4 + 0xB00))) * u3);
                u3 = 32.9099998f;
                u0 = u2;
                u1 = (-(u4 * 118.849998f));
            }
            u2 = (-u0);
            if (!(0.0f > u0)) {
                u2 = u0;
            }
            u4 = u0;
            if (u2 > 43.8800011f) {
                u4 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 43.8800011f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u4;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u3;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c04e424(int a4, int a5, float f4, float f5)
{
    int stk[13];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register float t9;
    register float u10;
    register float t12;
    register float u13;
    register int t15;
    register int t16;
    register int t17;
    register float u18;
    register int t19;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register float u28;
    register int t34;
    register int t31;
    register int t48;
    register float u56;
    register float u57;
    register float u59;
    register float u62;
    register int t66;
    register int t89;
    register int t73;
    register int t23;
    register int t35;
    register int t36;
    register float u38;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(41.6500015f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t89 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(119.349998f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t73 = 0x4;
        } else {
            t9 = cpuSglAimScore(a4, a5, u1, f5);
            u10 = t9;
            if (18.0f > t9) {
                u10 = 18.0f;
            }
            *(unsigned int *)(((int)stk + 4)) = 0x0;
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
            if ((int)a5 > 0) {
                t24 = t15;
                t25 = 0x8C2FCC6C;
                t26 = 0x8C2FCC6C;
                t27 = 0x0;
                u28 = (u10 / (1.0f + 1.0f));
                for (;;) {
                    t34 = t23;
                    if (!((*(float *)((t26 + 0x1C))) > u13)) {
                        t23 = 0x8C0F7BAC;
                        t31 = (int)((int)(nlRand()) % (int)t16);
                        if (t31 == 0) {
                            *(unsigned int *)(((int)stk + 4)) = t27;
                        }
                        t34 = 0x8C0F7BAC;
                    } else {
                        t35 = t24;
                        t36 = t25;
                        u38 = u28;
                    }
                    u28 = u38;
                    t27 = (t27 + 0x1);
                    t23 = t34;
                    t24 = t35;
                    t25 = t36;
                    t26 = (t26 + 0x20);
                    if ((int)t27 >= (int)a5) {
                        break;
                    }
                }
            }
            t48 = *(int *)(((int)stk + 4));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((unsigned char)(*(signed char *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t48 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u56 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u57 = (-u56);
            if (!(0.0f > u56)) {
                u57 = u56;
            }
            u59 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u62 = (-1.0f);
            u62 = u62 + (1.0f + 1.0f) * (u57 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u59) / (*(float *)0x8C287B40)), u62);
            if ((int)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) > (int)0x1E) {
                t66 = (int)((int)(nlRand()) % (int)0x3);
                if (t66 == 0) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x1;
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x4;
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
                }
            } else {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t73 = 0xA24;
        }
        t89 = t73;
    }
    return t89;
}

float FUN_8c0553b0(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(56.6500015f > u1)) {
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (!(139.350006f > u1)) {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t2 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t2 = nlRand();
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            u0 = (float)(t3 + 0x2);
            if ((*(int *)0x8C291F74) == 5) {
                u0 = ((float)(t3 + 0x2) + (*(float *)0x8C0555F0));
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)0x8C0555F8;
            u3 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u4 = u0;
            u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C0555F4))) + 1.0f));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u3 - 40.0f);
            u0 = *(float *)0x8C055600;
            if (u0 > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = u0;
            }
            if ((u4 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u4 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u0 * (*(float *)0x8C055604)) / (*(float *)0x8C055608));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c0b5f78(int a4)
{
    register int t0;
    register int t1;

    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x0;
        *(unsigned short *)0x8C287A38 = 0xDC00;
        *(unsigned short *)0x8C287A3C = 0xDC00;
        *(unsigned short *)0x8C287A3A = 0xDC00;
        *(unsigned short *)0x8C287A3E = 0xDC00;
        *(unsigned int *)0x8C287A40 = 0x1;
        thunk_FUN_8c0f2210(0x80);
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x1;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        thunk_FUN_8c0f2210(0xE6);
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x2;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x3;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x4;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t1 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t1, 0x0);
        return restart_t404();
    }
    return t0;
}

float FUN_8c0551a8(int a4, int a5, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(61.6500015f > u1)) {
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (!(149.350006f > u1)) {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t2 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x0;
            t2 = nlRand();
            t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x3);
            }
            u0 = (float)(t3 + 0x9);
            if ((*(int *)0x8C291F74) == 5) {
                u0 = ((float)(t3 + 0x9) + 20.0f);
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u3 = u0;
            u3 = u3 + 0.5f * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / 100.0f)) + 1.0f));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u2 - 80.0f);
            if (-200.0f > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u3 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u3 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u0 * 20.0f) / 32768.0f);
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = 0.5f;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c04c670(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t1;
    register float u4;
    register float u5;
    register float u10;
    register float u11;
    register float u12;
    register float u15;
    register float u23;
    register float t43;
    register float u45;
    register float u46;
    register float u48;
    register float u51;
    register int t56;
    register float u66;
    register int t71;
    register float u83;
    register float u84;
    register float u86;
    register float u89;
    register int t94;
    register float u110;
    register int t115;
    register int t138;
    register float u33;
    register float u27;
    register int t134;
    register int t131;
    register int t81;
    register int t78;
    register int t64;
    register int t128;
    register int t108;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u4 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u5 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u5 = u5 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u4;
    u10 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
    u11 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u11 = u11 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u10;
    u12 = (-u11);
    if (!(0.0f > u11)) {
        u12 = u11;
    }
    if (u12 > 118.849998f) {
        u33 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u15 = (-u11);
        if (!(0.0f > u11)) {
            u15 = u11;
        }
        if (!(8.2300005f > u15)) {
            u23 = u11;
            if ((float)((u11 > 0.0f) - (0.0f > u11)) == (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00)))) {
                u23 = ((*(float *)((a4 + 0xB00))) * 8.2300005f);
            }
            u27 = u23;
        } else {
            u27 = ((*(float *)((a4 + 0xB00))) * 8.2300005f);
        }
        u33 = u27;
    }
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t134 = (a5 + (cpuSglAimAddGrid(a4, a5)));
    } else {
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            t43 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
            if (10.0f > t43) {
                t81 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
            } else {
                u45 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u46 = (-u45);
                if (!(0.0f > u45)) {
                    u46 = u45;
                }
                if (u46 > 0.200000003f) {
                    u48 = (-u33);
                    if (!(0.0f > u33)) {
                        u48 = u33;
                    }
                    if (47.5400009f > u48) {
                        t64 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    } else {
                        u51 = (-u33);
                        if (!(0.0f > u33)) {
                            u51 = u33;
                        }
                        t56 = a5;
                        if ((*(float *)0x8C04C8F8) > u51) {
                            t56 = (a5 + (cpuSglAimAddSides(a4, a5)));
                        }
                        t64 = (t56 + (ndbGetTargets(a4, t56, 0x0)));
                    }
                    t78 = t64;
                } else {
                    u66 = (-u33);
                    if (!(0.0f > u33)) {
                        u66 = u33;
                    }
                    t71 = a5;
                    if ((*(float *)0x8C04C8F8) > u66) {
                        t71 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    }
                    t78 = (t71 + (ndbGetTargets(a4, t71, 0x0)));
                }
                t81 = t78;
            }
            t131 = t81;
        } else {
            u83 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
            u84 = (-u83);
            if (!(0.0f > u83)) {
                u84 = u83;
            }
            if (u84 > 0.200000003f) {
                u86 = (-u33);
                if (!(0.0f > u33)) {
                    u86 = u33;
                }
                if (47.5400009f > u86) {
                    t108 = (a5 + (cpuSglAimAddSides(a4, a5)));
                } else {
                    u89 = (-u33);
                    if (!(0.0f > u33)) {
                        u89 = u33;
                    }
                    t94 = a5;
                    if ((*(float *)0x8C04C8F8) > u89) {
                        t94 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    }
                    t108 = (t94 + (ndbGetTargets(a4, t94, 0x0)));
                }
                t128 = t108;
            } else {
                u110 = (-u33);
                if (!(0.0f > u33)) {
                    u110 = u33;
                }
                t115 = a5;
                if ((*(float *)0x8C04C8F8) > u110) {
                    t115 = (a5 + (cpuSglAimAddSides(a4, a5)));
                }
                t128 = (t115 + (ndbGetTargets(a4, t115, 0x0)));
            }
            t131 = t128;
        }
        t134 = t131;
    }
    t138 = t134;
    if (t134 == 0) {
        cpuAimPointSet(t134, 0x1, 0.0f, 0.0f);
        t138 = (t134 + 0x1);
    }
    return t138;
}

int FUN_8c0495da(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if (((unsigned int)(*(int *)0x8C2FBC58) > (unsigned int)0x4E20) && (t0 = *(signed char *)0x8C2FBC7F, (int)(unsigned char)t0 > (int)0x6)) {
        if ((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x118))) == 30) {
            if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB0))) == 0) {
                t0 = (int)((int)(nlRand()) % (int)0x3);
                if (t0 == 0) {
                    *(unsigned int *)((a4 + 0xA24)) = 0x4;
                }
            } else {
                *(unsigned int *)((a4 + 0xA24)) = 0x4;
            }
        }
        t0 = 0xA24;
        if ((*(int *)((a4 + 0xA24))) == 0) {
        } else {
            t3 = 0xA24;
            if ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
            } else {
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
                if ((*(short *)((((t2 * 0x160) + 0x8C2FC69C) + 0x118))) == 30) {
                    t2 = nlRand();
                    t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                    if ((int)t2 >= 0) {
                        t4 = (t2 & 0x1);
                    }
                    u0 = ((float)((t4 << 1) - 1) * 20.5750008f);
                } else {
                    u1 = (-1.0f);
                    u1 = u1 + (1.0f + 1.0f) * (nlRandom());
                    u2 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u3 = (u1 * 20.0f);
                    u3 = u3 + 0.5f * u2;
                    u0 = u3;
                }
                u1 = *(float *)((a4 + 0xB00));
                u2 = (((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.150000006f)) + 1.04999995f);
                u3 = (u1 * u2);
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u2 = u0;
                if (u1 > 32.920002f) {
                    u2 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 32.920002f);
                }
                *(unsigned int *)((a4 + 0xA24)) = 0x0;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                *(float *)((a4 + 0xA34)) = u2;
                *(float *)((a4 + 0xA3C)) = (-(u3 * 118.849998f));
                t3 = 0xA3C;
            }
            t0 = t3;
        }
        return t0;
    }
    return ((int (*)(int, int, int))(0x8C049480))(a4, 0x8C2FC69C, 0x160);
}

float FUN_8c04dcca(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(43.7324982f > u1)) {
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (!(125.31749f > u1)) {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t2 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0x0)));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0x8)));
            *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)));
            if ((unsigned char)(*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC))) == 3) {
                *(unsigned char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)) = 0x1;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            u0 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u0 = (1.0f + 1.0f);
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u3 = u0;
            u3 = u3 + 0.5f * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / 100.0f)) + 1.0f));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u2 - 30.0f);
            if (-200.0f > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u3 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u3 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = 0.5f;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c06f7aa(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u0 = 0.5f;
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = *(float *)((a4 + 0xAE8));
        u2 = 0.600000024f;
        u2 = u2 + 0.200000003f * (nlRandom());
        u3 = ((float)(-((u0 > 0.0f) - (0.0f > u0))) * u2);
        cpuAimPointSet(a5, 0x1, (u3 * 54.8499985f), (u1 * 118.849998f));
        t1 = (a5 + 0x1);
    } else {
        t2 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13E));
        u0 = 0.5f;
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = (*(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8)));
        u0 = u0 + 15.0f * (nlRandom());
        cpuAimPointSet(a5, 0x1, u0, (u1 * 118.849998f));
        u0 = 0.5f;
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = nlRandom();
        u2 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
        cpuAimPointSet((a5 + 0x1), 0x1, (u2 - (u0 * 15.0f)), (u1 * 118.849998f));
        t0 = ((a5 + 0x1) + 0x1);
        if ((*(int *)(((((*(int *)(((0xB5C + (((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84)) + 0x0))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = (*(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAF0)));
            }
            t3 = ((a5 + 0x1) + 0x1);
            if (u1 > 95.0800018f) {
                t4 = nlRand();
                t5 = ((~(((~t4) + 0x1) & 0x7)) + 0x1);
                if ((int)t4 >= 0) {
                    t5 = (t4 & 0x7);
                }
                t4 = ((a5 + 0x1) + 0x1);
                if (t5 == 0) {
                    u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, u0, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t4 = (((a5 + 0x1) + 0x1) + 0x1);
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}
