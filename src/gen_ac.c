/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_SetOutPan(int, int, int);
int ADXSJD_GetNumChan(int);
int abs(int);
int eepromGetSnap(void);
int kmGetCurrentScanline(int);
int kmyCopyFromTexture(int, int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyPurgeCache(int);
int kmyiCheckNativeHandle(int);
int pdExecPeripheralServer(void);
int strmCallNameScore(int);
int strmCallScore(int, int, int, int);
int FBmovedata(int a4, int a5, int a6);
int mainDebugPause(int a4, int a5);
int motionAngleBlend(int a4, int a5);
void strmScoreAnnounce(void);
int strmCallPending(void);
int adxt_set_outpan(int a4);
int kmyMoveParameterBoundary(int a4, int a5, int a6);

int FBmovedata(int a4, int a5, int a6)
{
    int t15;
    int t19;
    int t20;
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t24;
    int t25;
    int stk[522];

    t15 = a6;
    t19 = a5;
    t20 = a4;
    if ((unsigned int)a6 > (unsigned int)0x800) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            kmyCopyFromTexture((*(int *)(((int)stk + 4))), t0, 0x800);
            t7 = 0x40;
            t8 = (*(int *)(((int)stk + 4)));
            for (;;) {
                if (t7 == 0) {
                    break;
                }
                kmyPurgeCache(t8);
                t7 = (t7 - 1);
                t8 = (t8 + 0x20);
            }
            kmyCopyToTexture(t1, (*(int *)(((int)stk + 4))), 0x800, 0x0);
            t2 = (t2 - 0x800);
            t0 = (t0 + 0x800);
            t1 = (t1 + 0x800);
            if ((unsigned int)t2 <= (unsigned int)0x800) {
                break;
            }
        }
        t15 = t2;
        t19 = t0;
        t20 = t1;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    kmyCopyFromTexture((((int)stk + 4) + 0x4), t19, t15);
    t24 = 0x40;
    t25 = (*(int *)(((int)stk + 4)));
    for (;;) {
        if (t24 == 0) {
            break;
        }
        kmyPurgeCache(t25);
        t24 = (t24 - 1);
        t25 = (t25 + 0x20);
    }
    return (kmyCopyToTexture(t20, (*(int *)(((int)stk + 4))), t15, 0x0));
}

int mainDebugPause(int a4, int a5)
{
    int t0;
    int t4;
    int t17;
    int t34;
    int t42;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C01025A:;
    t0 = eepromGetSnap();
    R0 = ((unsigned char)t0);
    if (((unsigned char)t0 == 0)) goto L_8C010308;
    goto L_8C010278;
    L_8C010278:;
    t4 = *(short *)(((*(int *)0x8C29B898) + 0x1C));
    R0 = (t4);
    R12 = (0x1);
    R13 = (0x40);
    R14 = (0x8C12C5A8);
    R4 = (t4);
    R5 = (0x8C29B898);
    if (((int)t4 < 0)) goto L_8C01028E;
    goto L_8C01028A;
    L_8C01028A:;
    R3 = (R4);
    goto L_8C010290;
    L_8C010290:;
    if (((int)R3 >= (int)R13)) goto L_8C010296;
    goto L_8C010294;
    L_8C010294:;
    *(unsigned int *)((R14 + 0x0)) = R12;
    goto L_8C010296;
    L_8C010296:;
    if (((*(int *)((R14 + 0x0))) == 0)) goto L_8C0102A8;
    goto L_8C01029C;
    L_8C01029C:;
    t17 = *(short *)(((*(int *)0x8C29B898) + 0x1C));
    R0 = (t17);
    if (((int)t17 < (int)0xFFFFFFC0)) goto L_8C0102B0;
    goto L_8C0102A8;
    L_8C0102A8:;
    if (((*(int *)0x8C12C5A4) == 0)) goto L_8C010308;
    goto L_8C0102B0;
    L_8C0102B0:;
    *(unsigned int *)0x8C12C5A4 = 0x0;
    *(unsigned int *)((R14 + 0x0)) = 0x0;
    R10 = (0x0);
    R11 = (0x8C12C5A4);
    R8 = (R5);
    R9 = (0x8C1DCF20);
    goto L_8C0102BC;
    L_8C0102BC:;
    pdExecPeripheralServer();
    goto L_8C0102C2;
    L_8C0102C2:;
    kmGetCurrentScanline(((int)stk + 4));
    if (((*(int *)(((int)stk + 4))) != -1)) goto L_8C0102C2;
    goto L_8C0102CC;
    L_8C0102CC:;
    if (((int)(*(short *)(((*(int *)((R8 + 0x0))) + 0x1C))) <= (int)R13)) goto L_8C0102D6;
    goto L_8C0102D4;
    L_8C0102D4:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    goto L_8C0102D6;
    L_8C0102D6:;
    t34 = *(short *)(((*(int *)((R8 + 0x0))) + 0x1C));
    R4 = (t34);
    if (((int)t34 < 0)) goto L_8C0102E4;
    goto L_8C0102E0;
    L_8C0102E0:;
    R2 = (R4);
    goto L_8C0102E6;
    L_8C0102E6:;
    if (((int)R2 >= (int)R13)) goto L_8C0102EE;
    goto L_8C0102EA;
    L_8C0102EA:;
    *(unsigned int *)((R14 + 0x0)) = R12;
    *(unsigned int *)((R11 + 0x0)) = R10;
    goto L_8C0102EE;
    L_8C0102EE:;
    if (((*(int *)((R14 + 0x0))) == 0)) goto L_8C0102BC;
    goto L_8C0102F4;
    L_8C0102F4:;
    t42 = *(short *)(((*(int *)((R8 + 0x0))) + 0x1C));
    R0 = (t42);
    if (((int)t42 < (int)0xFFFFFFC0)) goto L_8C010306;
    goto L_8C0102FE;
    L_8C0102FE:;
    if (((*(int *)0x8C12C5A4) == 0)) goto L_8C0102BC;
    goto L_8C010306;
    L_8C010306:;
    *(unsigned int *)((R14 + 0x0)) = R10;
    goto L_8C010308;
    L_8C010308:;
    return R0;
    L_8C0102E4:;
    R2 = ((-R4));
    goto L_8C0102E6;
    L_8C01028E:;
    R3 = ((-R4));
    goto L_8C010290;
}

int motionAngleBlend(int a4, int a5)
{
    int t3;
    float u4;
    float u5;
    float u7;
    float k;

    if (abs((a4 - a5)) >= 0x8000) {
        if ((int)a4 > (int)a5) {
            a5 = (a5 + 0x10000);
        } else {
            a5 = (a5 - 65536);
        }
    }
    t3 = *(int *)0x8C2871D4;
    u4 = *(float *)((t3 + 0x0));
    u5 = *(float *)((t3 + 0x4));
    k = *(float *)0x8C2873F4;
    u7 = ((float)a5 * u4);
    u7 = u7 + (u5 - u4) * (float)a4;
    return (int)(u7 * k);
}

void strmScoreAnnounce(void)
{
    int t11;
    int t6;
    int t13;
    int t51;
    int t52;
    int t53;
    int t54;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t43;
    int t44;
    int t45;
    int t46;

    t11 = 0x1;
    if ((*(int *)0x8C1D4B48) != (*(int *)0x8C287B00)) {
    } else {
        t6 = 0x0;
        if ((*(int *)0x8C1D4B4C) != (*(int *)0x8C287B04)) {
            t6 = 0x2;
        }
        t11 = t6;
    }
    t13 = *(int *)0x8C287C64;
    if (t11 == 1) {
        if ((*(int *)0x8C287B00) != t13) {
            strmCallNameScore(0x0);
            strmCallScore((*(int *)0x8C2889DC), (*(int *)0x8C289754), (*(int *)0x8C287B00), (*(int *)0x8C287B04));
        } else {
            t27 = t11;
            t28 = 0x8C287B00;
            t29 = t13;
            t30 = 0x8C287B04;
        }
        t51 = t27;
        t52 = t28;
        t53 = t29;
        t54 = t30;
    } else {
        if ((t11 == 2) && (t32 = *(int *)0x8C287B04, t32 != t13)) {
            strmCallNameScore(0x1);
            strmCallScore((*(int *)0x8C2889DC), (*(int *)0x8C289754), (*(int *)0x8C287B00), (*(int *)0x8C287B04));
        } else {
            t43 = t11;
            t44 = 0x8C287B00;
            t45 = t13;
            t46 = 0x8C287B04;
        }
        t51 = t43;
        t52 = t44;
        t53 = t45;
        t54 = t46;
    }
    *(unsigned int *)0x8C1D4B48 = (*(int *)0x8C287B00);
    *(unsigned int *)0x8C1D4B4C = (*(int *)0x8C287B04);
    if ((*(int *)0x8C1D4A40) != 0) {
        strmCallPending();
    }
}

int adxt_set_outpan(int a4)
{
    int t1;
    int t6;
    int t8;
    int t13;
    int t20;
    int t24;

    t1 = ADXSJD_GetNumChan((*(int *)((a4 + 0x4))));
    if (t1 == 1) {
        t6 = *(int *)((a4 + 0xC));
        t8 = 0x0;
        if ((*(short *)(((a4 + 0x42) + 0x0))) == -128) {
        } else {
            t8 = (*(short *)(((a4 + 0x42) + 0x0)));
        }
        t24 = (ADXRNA_SetOutPan(t6, 0x0, t8));
    } else {
        t13 = 0xFFFFFFF1;
        if ((*(short *)(((a4 + 0x42) + 0x0))) == -128) {
        } else {
            t13 = (*(short *)(((a4 + 0x42) + 0x0)));
        }
        ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x0, t13);
        t20 = 0xF;
        if ((*(short *)((a4 + 0x44))) == -128) {
        } else {
            t20 = (*(short *)((a4 + 0x44)));
        }
        t24 = (ADXRNA_SetOutPan((*(int *)((a4 + 0xC))), 0x1, t20));
    }
    return t24;
}

int kmyMoveParameterBoundary(int a4, int a5, int a6)
{
    int t0;
    int t19;
    int t4;
    int t8;
    int t9;
    int t12;
    int t13;
    int t16;
    int t17;

    t0 = kmyiCheckNativeHandle(a4);
    t19 = 0xEEEE;
    if (t0 == 0) {
    } else {
        t4 = *(int *)(((a4 + 0x18) + 0x18));
        if (a5 != 0) {
            t8 = 0xEEEE;
            t9 = 0x0;
            if ((unsigned int)((a6 + t4) - 256) < (unsigned int)(*(int *)(((a4 + 0x18) + 0x10)))) {
                t8 = 0x0;
                t9 = (a6 & 0xFFFFFFE0);
            }
            t16 = t8;
            t17 = t9;
        } else {
            t12 = 0xEEEE;
            t13 = 0x0;
            if ((unsigned int)((a6 + t4) - 256) > (unsigned int)(*(int *)(((a4 + 0x18) + 0x28)))) {
                t12 = 0x0;
                t13 = (-(a6 & 0xFFFFFFE0));
            }
            t16 = t12;
            t17 = t13;
        }
        *(unsigned int *)(((a4 + 0x18) + 0x18)) = (t4 + t17);
        *(unsigned int *)(((a4 + 0x18) + 0x14)) = ((t4 + t17) - 256);
        t19 = t16;
    }
    return t19;
}
