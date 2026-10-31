/* Straight-line functions with calls and guards (batch gen_yc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimRateD(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblPathCross(int, int, int, int, Stk3, Stk3);
int cpuShotRange(int, int, int, int, int, float);
int cpuShotTargetSet(int, float, float);
int fadeScreenStart(int, int, int, int, int, int);
int hudCallAdvDraw(int, int, int, int, float, float);
int hudCallDeuceDraw(int, int, int, int, float, float);
int hudCallGameDraw(int, int, int, int, float, float);
int hudCallPointsDraw(int, int, int, int, float, float);
int hudPanelShow9a1d6(void);
int hudPanelShow9a26c(void);
int hudPanelShow9a302(void);
int hudPanelShow9a504(void);
int motionAdvance(int);
int motionRootAtFrame(int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent2(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int serveGetReceiver(void);
int shadowNullCb(void);
int strmUmpireCallAnim(int, int);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
int FUN_8c076140(int a4, int a5);
int FUN_8c06fbde(int a4, int a5);
int FUN_8c06f990(int a4, int a5);
int FUN_8c08d78c(int a4);
int FUN_8c075ef0(int a4, int a5);
void FUN_8c08726c(int a4, float f4);
int FUN_8c06f302(int a4, int a5);
float FUN_8c05f9b8(int a4, float f4, float f5);
int FUN_8c060fa4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
float FUN_8c055ac0(int a4, int a5, float f4, float f5, float f6, float f7);
float FUN_8c055cd2(int a4, int a5, float f4, float f5, float f6, float f7);
float FUN_8c06bf34(int a4, float f4, float f5);
float FUN_8c06c142(int a4, float f4, float f5, float f6);
int FUN_8c060db4(int a4, int a5, float f4, float f5, float f6);

int FUN_8c076140(int a4, int a5)
{
    int stk[27];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t29;
    register int t42;
    register int t72;
    register int t62;
    register int t63;
    register int t64;
    register float u65;
    register float u84;
    register float u85;
    register float u87;
    register float u89;
    register int t107;
    register int t93;
    register int t10;
    register int t52;
    register float u26;
    register float u27;
    register float u28;
    register int t34;
    register float u39;
    register float u40;
    register float u41;
    register int t47;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(55.3499985f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t107 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(119.349998f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t93 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
            cpuShotRange(a4, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), u1);
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((unsigned char)(*(signed char *)((t11 + 0xC))) == 1) {
                        if ((u13 > (*(float *)(((int)stk + 60)))) && ((u26 = *(float *)(((int)stk + 48)), u26 > u13) && ((u27 = *(float *)(((int)stk + 68)), u14 > u27) && (u28 = *(float *)(((int)stk + 56)), u28 > u14)))) {
                            t34 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x4);
                            t29 = t10;
                            *(int *)((int)stk + 4) = t29;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), t29);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t52 = t34;
                    } else {
                        if ((u13 > (*(float *)(((int)stk + 36)))) && ((u39 = *(float *)(((int)stk + 24)), u39 > u13) && ((u40 = *(float *)(((int)stk + 44)), u14 > u40) && (u41 = *(float *)(((int)stk + 32)), u41 > u14)))) {
                            t47 = t10;
                        } else {
                            t10 = ((int)stk + 8);
                            t10 = (t10 + 0x4);
                            t42 = t10;
                            *(int *)((int)stk + 4) = t42;
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), t42);
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t52 = t47;
                    }
                    t10 = t52;
                    cpuDblAimRateD(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t10 = (*(int *)(((int)stk + 8)));
                    t11 = (t11 + 0x20);
                    t10 = (t10 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t10;
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            t72 = 0x0;
            if ((int)a5 > 0) {
                t62 = 0x0;
                t63 = 0x8C2FCC6C;
                t64 = 0x0;
                u65 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t63 + 0x1C))) > u65) {
                        u65 = (*(float *)((t63 + 0x1C)));
                        t64 = t62;
                    }
                    t62 = (t62 + 0x1);
                    t63 = (t63 + 0x20);
                    if ((int)t62 >= (int)a5) {
                        break;
                    }
                }
                t72 = t64;
            }
            if ((unsigned char)(*(signed char *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xA24))) == 0) {
                *(unsigned int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xA24)) = 0x4;
            }
            u84 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u85 = (-u84);
            if (!(0.0f > u84)) {
                u85 = u84;
            }
            u87 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u89 = (-1.0f);
            u89 = u89 + (1.0f + 1.0f) * (u85 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u87) / 54.8499985f), u89);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((((t72 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t93 = 0xA24;
        }
        t107 = t93;
    }
    return t107;
}

int FUN_8c06fbde(int a4, int a5)
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
        u0 = *(float *)((a4 + 0xB00));
        u1 = *(float *)((a4 + 0xAE8));
        u2 = 0.600000024f;
        u2 = u2 + 0.400000006f * (nlRandom());
        u3 = ((float)(-((u1 > 0.0f) - (0.0f > u1))) * u2);
        cpuAimPointSet(a5, 0x1, (u3 * 54.8499985f), (u0 * 118.849998f));
        t1 = (a5 + 0x1);
    } else {
        cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        t2 = (a5 + 0x1);
        if (t3 == 0) {
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 16.4549999f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t2 = ((a5 + 0x1) + 0x1);
        }
        t3 = *(int *)((a4 + 0xB5C));
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((((((t3 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u2 = *(float *)((((((t3 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t4 = t2;
        if ((((u0 - u1) > 0.0f) - (0.0f > (u0 - u1))) == (((u0 - u2) > 0.0f) - (0.0f > (u0 - u2)))) {
            u0 = *(float *)((a4 + 0xAE8));
            u1 = *(float *)((((((t3 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2 = *(float *)((((((t3 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u3 = ((-u0) + u1);
            if (!(0.0f > (u0 - u1))) {
                u3 = (u0 - u1);
            }
            u1 = ((-u0) + u2);
            if (!(0.0f > (u0 - u2))) {
                u1 = (u0 - u2);
            }
            t5 = ((((t3 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
            if (u3 > u1) {
                t5 = ((((t3 + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            t3 = t2;
            if ((*(int *)(((((*(int *)(((0xB5C + t5) + 0x0))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
                cpuAimPointSet(t2, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t3 = (t2 + 0x1);
            }
            t4 = t3;
        }
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x7);
        }
        t2 = t4;
        if (t3 == 0) {
            cpuAimPointSet(t4, 0x2, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (*(float *)0x8C06FEB4)), ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C06FEB0)));
            t2 = (t4 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_8c06f990(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (((*(int *)0x8C291F78) & 4) == 0) {
        u0 = (*(float *)0x8C06FC38);
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = 0.600000024f;
        u0 = u0 + 0.200000003f * (nlRandom());
        cpuAimPointSet(a5, 0x1, (u0 * 54.8499985f), (u1 * 118.849998f));
        u0 = (*(float *)0x8C06FC38);
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = 0.600000024f;
        u0 = u0 + 0.200000003f * (nlRandom());
        cpuAimPointSet((a5 + 0x1), 0x1, (-(u0 * 54.8499985f)), (u1 * 118.849998f));
        t0 = (int)((int)(nlRand()) % (int)0x3);
        t1 = ((a5 + 0x1) + 0x1);
        if (t0 == 0) {
            u0 = (*(float *)0x8C06FC40);
            u0 = u0 + (*(float *)0x8C06FC44) * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            u0 = 0.600000024f;
            u0 = u0 + 0.200000003f * (nlRandom());
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, (u0 * 54.8499985f), (u1 * 118.849998f));
            t1 = (((a5 + 0x1) + 0x1) + 0x1);
        }
        t0 = (int)((int)(nlRand()) % (int)0x3);
        t2 = t1;
        if (t0 == 0) {
            u0 = (*(float *)0x8C06FC40);
            u0 = u0 + (*(float *)0x8C06FC44) * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            u0 = 0.600000024f;
            u0 = u0 + 0.200000003f * (nlRandom());
            cpuAimPointSet(t1, 0x1, (-(u0 * 54.8499985f)), (u1 * 118.849998f));
            t2 = (t1 + 0x1);
        }
        t0 = t2;
    } else {
        u0 = 0.699999988f;
        u0 = u0 + 0.200000003f * (nlRandom());
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = *(float *)((a4 + 0xAE8));
        u2 = 0.600000024f;
        u2 = u2 + 0.200000003f * (nlRandom());
        u3 = ((float)(-((u0 > 0.0f) - (0.0f > u0))) * u2);
        cpuAimPointSet(a5, 0x1, (u3 * 54.8499985f), (u1 * 118.849998f));
        t1 = nlRand();
        t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x3);
        }
        t1 = (a5 + 0x1);
        if (t2 != 0) {
        } else {
            u0 = 0.300000012f;
            u0 = u0 + 0.200000003f * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            u0 = *(float *)((a4 + 0xAE8));
            u2 = 0.600000024f;
            u2 = u2 + 0.200000003f * (nlRandom());
            u3 = ((float)(-((u0 > 0.0f) - (0.0f > u0))) * u2);
            cpuAimPointSet((a5 + 0x1), 0x1, (u3 * 54.8499985f), (u1 * 118.849998f));
            t1 = ((a5 + 0x1) + 0x1);
        }
        t0 = t1;
    }
    return t0;
}

int FUN_8c08d78c(int a4)
{
    int stk[29];
    register int t2;
    register float u3;
    register int t4;
    register int t6;
    register int t7;
    register float u11;
    register int t17;
    register int t31;
    register float u32;
    register int t33;
    register int t35;
    register int t36;
    register float u40;
    register int t46;
    register int t73;
    register int t75;
    register int t81;

    motionAdvance((*(int *)((a4 + 0x30))));
    t2 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 44)) = t2;
    u3 = *(float *)((t2 + 0xC));
    t4 = *(int *)(((int)stk + 44));
    *(int *)((int)stk + 40) = (((int)stk + 44) + 0x28);
    motionRootAtFrame(t4, (int)u3, 0x0, 0x0, (((int)stk + 44) + 0x28));
    t6 = *(int *)((a4 + 0x30));
    t7 = *(int *)((t6 + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x1C)) = *(struct mv3 *)((((((t7 << 1) + t7) << 2) << 2) + (t6 + 0x60))); }
    nlPushUnitMatrix();
    *(float *)(((int)stk + 76)) = 0.0f;
    nlCalcPoint((((int)stk + 44) + 0x1C), (((int)stk + 44) + 0x28));
    nlPopMatrix(0x1);
    u11 = *(float *)(((int)stk + 92));
    if (u11 > 0.0f) {
        *(float *)(((int)stk + 92)) = (-u11);
    }
    nlAddVector(((*(int *)((a4 + 0x30))) + 0xAE8), (((int)stk + 44) + 0x28));
    nlPushMatrix(0x0);
    t17 = *(int *)((a4 + 0x30));
    nlTranslate((*(float *)((t17 + 0xAE8))), (*(float *)((t17 + 0xAEC))), (*(float *)((t17 + 0xAF0))));
    nlRotateAY(0x8000);
    playerPut((*(int *)((a4 + 0x30))), 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    *(volatile int *)((a4 + 0x30));
    shadowNullCb();
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 4) {
        motionAdvance((*(int *)((a4 + 0x34))));
        t31 = *(int *)((a4 + 0x34));
        *(unsigned int *)(((int)stk + 44)) = t31;
        u32 = *(float *)((t31 + 0xC));
        t33 = *(int *)(((int)stk + 44));
        *(int *)((int)stk + 40) = (((int)stk + 44) + 0x10);
        motionRootAtFrame(t33, (int)u32, 0x0, 0x0, (((int)stk + 44) + 0x10));
        t35 = *(int *)((a4 + 0x34));
        t36 = *(int *)((t35 + 0x48));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x4)) = *(struct mv3 *)((((((t36 << 1) + t36) << 2) << 2) + (t35 + 0x60))); }
        nlPushUnitMatrix();
        *(float *)(((int)stk + 52)) = 0.0f;
        nlCalcPoint((((int)stk + 44) + 0x4), (((int)stk + 44) + 0x10));
        nlPopMatrix(0x1);
        u40 = *(float *)(((int)stk + 68));
        if (u40 > 0.0f) {
            *(float *)(((int)stk + 68)) = (-u40);
        }
        nlAddVector(((*(int *)((a4 + 0x34))) + 0xAE8), (((int)stk + 44) + 0x10));
        nlPushMatrix(0x0);
        t46 = *(int *)((a4 + 0x34));
        nlTranslate((*(float *)((t46 + 0xAE8))), (*(float *)((t46 + 0xAEC))), (*(float *)((t46 + 0xAF0))));
        nlRotateAY(0x8000);
        playerPut((*(int *)((a4 + 0x34))), 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
        *(volatile int *)((a4 + 0x34));
        shadowNullCb();
        nlPopMatrix(0x1);
    }
    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C32DDA4) = *(struct mv3 *)(((*(int *)((a4 + 0x30))) + 0xAF4)); }
    if ((*(int *)0x8C287ADC) == 4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xAF4 + (*(int *)((a4 + 0x34))))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((*(int *)((a4 + 0x30))) + 0xAF4)); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecAdd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        *(int *)((int)stk + 28) = 0x8C32DDA4;
        vecDiv(0x0, 0x0, 0x0, 0x0, 0x8C32DDA4, (1.0f + 1.0f));
    }
    t73 = *(int *)((a4 + 0x24));
    t75 = t73;
    if (t73 == 90) {
        t75 = (fadeScreenStart(0x3, 0x1, 0x1F, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4)));
    }
    t81 = t75;
    if ((int)(*(int *)((a4 + 0x24))) >= (int)0x78) {
        *(unsigned int *)0x8C30196C = 0x0;
        *(unsigned int *)0x8C185410 = 0x0;
        *(unsigned int *)0x8C20D14C = 0x2;
        *(unsigned int *)0x8C20D150 = 0x0;
        *(unsigned int *)0x8C301970 = 0x0;
        t81 = 0x8C20D14C;
    }
    return t81;
}

int FUN_8c075ef0(int a4, int a5)
{
    int stk[27];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t66;
    register int t56;
    register int t57;
    register int t58;
    register float u59;
    register float u78;
    register float u79;
    register float u81;
    register float u83;
    register int t101;
    register int t87;
    register float u26;
    register float u27;
    register float u28;
    register float u37;
    register float u38;
    register float u39;

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 8)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(55.3499985f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t101 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(119.349998f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t87 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
            cpuShotRange(a4, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), u1);
            if ((int)a5 > 0) {
                t10 = 0x0;
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((unsigned char)(*(signed char *)((t11 + 0xC))) == 1) {
                        if ((u13 > (*(float *)(((int)stk + 60)))) && ((u26 = *(float *)(((int)stk + 48)), u26 > u13) && ((u27 = *(float *)(((int)stk + 68)), u14 > u27) && (u28 = *(float *)(((int)stk + 56)), u28 > u14)))) {
                        } else {
                            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 8) + 0x4));
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                    } else {
                        if ((u13 > (*(float *)(((int)stk + 36)))) && ((u37 = *(float *)(((int)stk + 24)), u37 > u13) && ((u38 = *(float *)(((int)stk + 44)), u14 > u38) && (u39 = *(float *)(((int)stk + 32)), u39 > u14)))) {
                        } else {
                            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
                            cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (((int)stk + 8) + 0x4));
                            *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                    }
                    cpuDblAimRateD(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t10 = (t10 + 0x1);
                    t11 = (t11 + 0x20);
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            t66 = 0x0;
            if ((int)a5 > 0) {
                t56 = 0x8C2FCC6C;
                t57 = 0x0;
                t58 = 0x0;
                u59 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t56 + 0x1C))) > u59) {
                        u59 = (*(float *)((t56 + 0x1C)));
                        t58 = t57;
                    }
                    t57 = (t57 + 0x1);
                    t56 = (t56 + 0x20);
                    if ((int)t57 >= (int)a5) {
                        break;
                    }
                }
                t66 = t58;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((*(int *)(((*(int *)(((int)stk + 8))) + 0xA24))) == 0) {
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0xA24)) = 0x4;
            }
            u78 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u79 = (-u78);
            if (!(0.0f > u78)) {
                u79 = u78;
            }
            u81 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u83 = (-1.0f);
            u83 = u83 + (1.0f + 1.0f) * (u79 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u81) / 54.8499985f), u83);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t87 = 0xA24;
        }
        t101 = t87;
    }
    return t101;
}

void FUN_8c08726c(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    if (((*(int *)0x8C287B3C) & 0x1) != 0) {
        return;
    }
    t11 = 0x8C287D84;
    for (;;) {
        if ((((*(int *)((t11 + 0xB60))) & 0x40000) != 0) && (t0 = *(int *)((t11 + 0xB68)), t0 == 5)) {
            *(unsigned int *)((a4 + 0x3C)) = 0x1;
        }
        t12 = t11;
        t11 = (t11 + 0xD78);
        if ((unsigned int)t11 >= (unsigned int)0x8C289874) {
            break;
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
    }
    if (((*(int *)0x8C301BF0) == 2) && (t1 = *(int *)0x8C287C60, t1 == 0)) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if ((int)(*(int *)((a4 + 0x18))) <= 0) {
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        }
        if (((*(int *)0x8C301BF0) == 2) && (t2 = *(int *)0x8C287C60, t2 == 0)) {
            *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x20))) + 0.100000001f);
        }
        if ((*(float *)((a4 + 0x20))) > 1.0f) {
            *(float *)((a4 + 0x20)) = 1.0f;
        }
        if ((*(int *)((a4 + 0x30))) == 0) {
            hudCallPointsDraw((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))), 0x1, 0x40000, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
        } else {
            t0 = t12;
            t1 = 0x1;
            t2 = 0x40000;
        }
        if ((*(int *)((a4 + 0x44))) != 0) {
            *(unsigned int *)((a4 + 0x44)) = 0x0;
            strmUmpireCallAnim((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
        } else {
            t11 = *(int *)((a4 + 0x30));
            if (t11 == 1) {
                hudCallDeuceDraw((*(int *)0x8C334404), t0, t1, t2, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
            } else {
                if (t11 == 2) {
                    hudCallAdvDraw(0x0, t0, t1, t2, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
                } else {
                    t11 = *(int *)((a4 + 0x30));
                    if (t11 == 3) {
                        hudCallAdvDraw(0x1, t0, t1, t2, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
                    } else {
                        if (t11 == 4) {
                            hudCallGameDraw((*(int *)((a4 + 0x34))), t0, t1, t2, (*(float *)((a4 + 0x24))), (*(float *)((a4 + 0x20))));
                        }
                    }
                }
            }
        }
    }
    if (((*(int *)((a4 + 0x40))) == 1) && (t3 = *(int *)((a4 + 0x14)), t3 == 121)) {
        if (((*(int *)0x8C1891E8) == 4) && (t4 = *(int *)0x8C287D5C, t4 == 0)) {
            hudPanelShow9a1d6();
        } else {
            hudPanelShow9a302();
        }
    }
    if (((*(int *)((a4 + 0x30))) == 4) && (t5 = *(int *)((a4 + 0x38)), t5 == 1)) {
        if (((*(int *)((a4 + 0x14))) == 91) && (t6 = *(int *)0x8C287B3C, (t6 & 0x4000) != 0)) {
            hudPanelShow9a504();
        }
        if (((*(int *)((a4 + 0x30))) == 4) && ((t7 = *(int *)((a4 + 0x38)), t7 == 1) && (t8 = *(int *)0x8C287B3C, (t8 & 0x4000) != 0))) {
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
        }
    }
    if ((*(int *)((a4 + 0x40))) == 2) {
        if ((*(int *)((a4 + 0x14))) == 121) {
            hudPanelShow9a26c();
        }
    }
    if ((int)(*(int *)((a4 + 0x14))) < (int)0x5) {
        *(float *)((a4 + 0x24)) = ((float)(*(int *)((a4 + 0x14))) / 5.0f);
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    if (((int)(*(int *)((a4 + 0x14))) > 0) && ((t9 = *(int *)((a4 + 0x3C)), t9 == 0) && (t10 = *(int *)0x8C30196C, t10 == 0))) {
        return;
    }
    nlCloseEvent2(a4);
}

int FUN_8c06f302(int a4, int a5)
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
        t0 = *(int *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xB5C));
        u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
        u1 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u2 = 10.0f;
        u2 = u2 + 10.0f * (nlRandom());
        u3 = u0;
        u3 = u3 + u2 * (float)(((u0 - u1) > 0.0f) - (0.0f > (u0 - u1)));
        u0 = (-u3);
        if (!(0.0f > u3)) {
            u0 = u3;
        }
        u1 = u3;
        if (u0 > 27.4249992f) {
            u1 = ((float)((u3 > 0.0f) - (0.0f > u3)) * 27.4249992f);
        }
        u0 = 0.300000012f;
        u0 = u0 + 0.300000012f * (nlRandom());
        u2 = ((*(float *)((a4 + 0xB00))) * u0);
        cpuAimPointSet(a5, 0x1, u1, (u2 * 118.849998f));
        t3 = nlRand();
        t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x1);
        }
        t3 = (a5 + 0x1);
        if (t4 == 0) {
            u0 = 0.300000012f;
            u0 = u0 + 0.300000012f * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
            u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u3 = ((float)(((u0 - u2) > 0.0f) - (0.0f > (u0 - u2))) * (nlRandom()));
            cpuAimPointSet((a5 + 0x1), 0x1, (u0 - (u3 * 10.0f)), (u1 * 118.849998f));
            t3 = ((a5 + 0x1) + 0x1);
        }
        t1 = t3;
    }
    return t1;
}

float FUN_8c05f9b8(int a4, float f4, float f5)
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
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = (*(float *)((a4 + 0xAE8)));
                u1 = (*(float *)((a4 + 0xAF0)));
            } else {
                u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u2 > 0.0f) - (0.0f > u2)) != (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                }
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
                    u2 = 0.400000006f;
                    u4 = ((float)t2 * u3);
                    u3 = (float)t1;
                } else {
                    t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    t2 = (u5 > 0.0f) - (0.0f > u5);
                    u6 = (-u5);
                    if (!(0.0f > u5)) {
                        u6 = u5;
                    }
                    u2 = 0.600000024f;
                    u4 = ((float)t2 * u6);
                    u3 = (float)t1;
                }
                u5 = (u4 * u2);
                u5 = u5 + 32.9099998f * u3;
                u2 = u5;
                if (((u5 > 0.0f) - (0.0f > u5)) != (*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    u2 = 0.0f;
                }
                u3 = *(float *)((a4 + 0xB00));
                u4 = *(float *)0x8C05FC70;
                u5 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C05FC64))) - ((nlRandom()) * (*(float *)0x8C05FC6C))) + 1.0f);
                u6 = (u3 * u5);
                u3 = u4;
                u0 = u2;
                u1 = (-(u6 * u4));
            }
            u2 = *(float *)0x8C05FC74;
            u4 = (-u0);
            if (!(0.0f > u0)) {
                u4 = u0;
            }
            u5 = u0;
            if (u4 > u2) {
                u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u2);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u3;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c060fa4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t180;
    register int t162;
    register int t26;
    register int t28;
    register int t30;
    register float u45;
    register float u46;
    register float u51;
    register float u56;
    register float u57;
    register float u62;
    register float u67;
    register float u68;
    register float u70;
    register float u72;
    register float u73;
    register float u75;
    register float u77;
    register float u82;
    register float u83;
    register float u85;
    register int t87;
    register int t145;
    register int t32;
    register int t37;
    register int t129;
    register int t43;
    register int t113;
    register int t100;
    register int t89;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    t180 = 0x12E;
    if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
    } else {
        t162 = 0x12E;
        if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                t26 = serveGetReceiver();
                if (t26 != (*(int *)(((0xB5C + a4) + 0x0)))) {
                    t28 = serveGetReceiver();
                    t30 = t28;
                    if (t28 == (*(int *)(((0xB5C + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)) + 0x0)))) {
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        t30 = 0x12E;
                    }
                    t32 = t30;
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t32 = 0x12E;
                }
                t145 = t32;
            } else {
                if (((*(int *)((a4 + 0xC5C))) == 12) && (t37 = *(int *)((a4 + 0xB60)), (t37 & 0x100) != 0)) {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t129 = 0x12E;
                } else {
                    if (((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xC5C))) == 12) && (t43 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)), (t43 & 0x100) != 0)) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        t113 = 0x12E;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
                        cpuDblPathCross((0xB8 + ((t0 * 0x160) + 0x8C2FC69C)), t0, 0x160, a7, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                        u45 = *(float *)((a4 + 0xAE8));
                        u46 = *(float *)((a4 + 0xB9C));
                        u51 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                        if ((((u46 - u45) > 0.0f) - (0.0f > (u46 - u45))) == (((u45 - u51) > 0.0f) - (0.0f > (u45 - u51)))) {
                            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                            t100 = 0x12E;
                        } else {
                            u56 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u57 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                            u62 = *(float *)((a4 + 0xAE8));
                            if ((((u57 - u56) > 0.0f) - (0.0f > (u57 - u56))) != (((u56 - u62) > 0.0f) - (0.0f > (u56 - u62)))) {
                                u67 = *(float *)((a4 + 0xAE8));
                                u68 = *(float *)((a4 + 0xB9C));
                                u70 = ((-u67) + u68);
                                if (!(0.0f > (u67 - u68))) {
                                    u70 = (u67 - u68);
                                }
                                u72 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u73 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                u75 = ((-u72) + u73);
                                if (!(0.0f > (u72 - u73))) {
                                    u75 = (u72 - u73);
                                }
                                u77 = ((-u67) + u68);
                                if (!(0.0f > (u67 - u68))) {
                                    u77 = (u67 - u68);
                                }
                                if (((u70 + u75) * 0.75f) > u77) {
                                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                }
                                u82 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u83 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                                u85 = ((-u82) + u83);
                                if (!(0.0f > (u82 - u83))) {
                                    u85 = (u82 - u83);
                                }
                                t87 = 0xB9C;
                                if (((u70 + u75) * 0.75f) > u85) {
                                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                    t87 = 0x12E;
                                }
                                t89 = t87;
                            } else {
                                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                                t89 = 0x12E;
                            }
                            t100 = t89;
                        }
                        t113 = t100;
                    }
                    t129 = t113;
                }
                t145 = t129;
            }
            t162 = t145;
        }
        t180 = t162;
    }
    return t180;
}

float FUN_8c055ac0(int a4, int a5, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;
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
    if (!(42.8995018f > u1)) {
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
            if ((*(int *)((a4 + 0xC58))) == 0) {
                u0 = *(float *)((0xAF0 + (((((*(int *)((a4 + 0xB5C))) + 0x1) & 0x1) * 0xD78) + 0x8C287D84)));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u0 = *(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8));
                u2 = (-u0);
                if (!(0.0f > u0)) {
                    u2 = u0;
                }
                if (u1 > u2) {
                    *(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)) = ((*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0))) * 0.800000012f);
                }
            }
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
            u2 = u2 + (1.0f + 1.0f) * (u1 / (*(float *)0x8C055D1C));
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            if ((unsigned char)(*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u0 = (*(float *)0x8C055D28);
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)0x8C055D30;
            u3 = *(float *)0x8C055D34;
            u4 = u0;
            u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C055D2C))) + 1.0f));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u0 - u3);
            u0 = *(float *)0x8C055D38;
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
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u0 * u3) / (*(float *)0x8C055D3C));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

float FUN_8c055cd2(int a4, int a5, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(42.8995018f > u1)) {
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
            if ((unsigned char)(*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u0 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u0 = 3.0f;
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = u0;
            u2 = u2 + 0.5f * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / 100.0f)) + 1.0f));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u0 - 10.0f);
            if (-200.0f > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if ((u2 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u2 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u0 * 10.0f) / (*(float *)0x8C055F6C));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = 0.5f;
        }
        u1 = u0;
    }
    return u1;
}

float FUN_8c06bf34(int a4, float f4, float f5)
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
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = (*(float *)((a4 + 0xAE8)));
                u1 = (*(float *)((a4 + 0xAF0)));
            } else {
                u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u2 > 0.0f) - (0.0f > u2)) != (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                }
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
                    u2 = 0.400000006f;
                    u4 = ((float)t2 * u3);
                    u3 = (float)t1;
                } else {
                    t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    t2 = (u5 > 0.0f) - (0.0f > u5);
                    u6 = (-u5);
                    if (!(0.0f > u5)) {
                        u6 = u5;
                    }
                    u2 = 0.600000024f;
                    u4 = ((float)t2 * u6);
                    u3 = (float)t1;
                }
                u5 = (u4 * u2);
                u5 = u5 + 32.9099998f * u3;
                u2 = u5;
                if (((u5 > 0.0f) - (0.0f > u5)) != (*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    u2 = 0.0f;
                }
                u3 = *(float *)0x8C06C1D4;
                u4 = (-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C06C1CC)));
                u4 = u4 + u3 * (nlRandom());
                u5 = ((*(float *)((a4 + 0xB00))) * (u4 + 1.0f));
                u4 = u3;
                u0 = u2;
                u1 = (-(u5 * (*(float *)0x8C06C1D8)));
            }
            u2 = *(float *)0x8C06C1DC;
            u3 = (-u0);
            if (!(0.0f > u0)) {
                u3 = u0;
            }
            u5 = u0;
            if (u3 > u2) {
                u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u2);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u4;
        }
        u1 = u0;
    }
    return u1;
}

float FUN_8c06c142(int a4, float f4, float f5, float f6)
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
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = (*(float *)((a4 + 0xAE8)));
                u1 = (*(float *)((a4 + 0xAF0)));
            } else {
                u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u2 > 0.0f) - (0.0f > u2)) != (*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)))) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                    *(unsigned char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)) = ((short)(*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D))) * (short)0xFFFFFFFF);
                }
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
                    u2 = 0.400000006f;
                    u4 = ((float)t2 * u3);
                    u3 = (float)t1;
                } else {
                    t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                    u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    t2 = (u5 > 0.0f) - (0.0f > u5);
                    u6 = (-u5);
                    if (!(0.0f > u5)) {
                        u6 = u5;
                    }
                    u2 = 0.600000024f;
                    u4 = ((float)t2 * u6);
                    u3 = (float)t1;
                }
                u5 = (u4 * u2);
                u5 = u5 + 32.9099998f * u3;
                u2 = u5;
                if (((u5 > 0.0f) - (0.0f > u5)) != (*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                    u2 = 0.0f;
                }
                u3 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C06C3CC))) + 1.0f);
                u4 = *(float *)0x8C06C3D0;
                u5 = ((*(float *)((a4 + 0xB00))) * u3);
                u3 = (u5 * u4);
                u0 = u2;
                u1 = (-(u5 * u4));
            }
            u2 = *(float *)0x8C06C3D4;
            u4 = (-u0);
            if (!(0.0f > u0)) {
                u4 = u0;
            }
            u5 = u0;
            if (u4 > u2) {
                u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u2);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u3;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c060db4(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    t3 = 0x12E;
    if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
    } else {
        t4 = 0x12E;
        if ((*(signed char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E))) != 0) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                t5 = serveGetReceiver();
                if (t5 != (*(int *)(((0xB5C + a4) + 0x0)))) {
                    t5 = serveGetReceiver();
                    t6 = t5;
                    if (t5 != (*(int *)(((0xB5C + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84)) + 0x0)))) {
                    } else {
                        *(unsigned char *)((((t2 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        t6 = 0x12E;
                    }
                    t2 = t6;
                } else {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t2 = 0x12E;
                }
                t5 = t2;
            } else {
                if (((*(int *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xC5C))) == 12) && (t0 = *(int *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)), (t0 & 0x100) != 0)) {
                    *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                    t0 = 0x12E;
                } else {
                    u0 = *(float *)((a4 + 0xAF0));
                    u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u2 = (-u0);
                    if (!(0.0f > u0)) {
                        u2 = u0;
                    }
                    u0 = (-u1);
                    if (!(0.0f > u1)) {
                        u0 = u1;
                    }
                    t2 = a4;
                    t6 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
                    if (u0 > u2) {
                        t2 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
                        t6 = a4;
                    }
                    t1 = *(int *)((t6 + 0xB5C));
                    t7 = *(int *)((t2 + 0xB5C));
                    u0 = *(float *)((t2 + 0xB9C));
                    if (((u0 > 0.0f) - (0.0f > u0)) != (*(signed char *)(((0x8C2FC69C + (t7 * 0x160)) + 0x13D)))) {
                        u0 = *(float *)((t6 + 0xB9C));
                        if (((u0 > 0.0f) - (0.0f > u0)) == (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
                            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
                        } else {
                            *(unsigned char *)(((0x8C2FC69C + (t7 * 0x160)) + 0x12E)) = 0x1;
                        }
                    } else {
                        *(unsigned char *)(((0x8C2FC69C + (t7 * 0x160)) + 0x12E)) = 0x1;
                    }
                    u0 = *(float *)((t6 + 0xAE8));
                    u1 = *(float *)((t6 + 0xB9C));
                    u2 = ((-u0) + u1);
                    if (!(0.0f > (u0 - u1))) {
                        u2 = (u0 - u1);
                    }
                    t2 = 0x8C060F64;
                    if (5.0f > u2) {
                        u0 = *(float *)0x8C291F84;
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = (*(float *)0x8C291F84);
                        }
                        u0 = *(float *)((t6 + 0xBA4));
                        u2 = (-u0);
                        if (!(0.0f > u0)) {
                            u2 = (*(float *)((t6 + 0xBA4)));
                        }
                        t6 = 0xBA4;
                        if (u1 > u2) {
                            t7 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118));
                            t8 = t7;
                            if ((int)t7 < 0) {
                                t8 = (t7 + 0x3);
                            }
                            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x0));
                            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x0)) = (u0 + (float)((t8 >> 1) >> 1));
                            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
                            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u0 - 30.0f);
                            t6 = 0xC;
                        }
                        t2 = t6;
                    }
                    t0 = t2;
                }
                t5 = t0;
            }
            t4 = t5;
        }
        t3 = t4;
    }
    return t3;
}
