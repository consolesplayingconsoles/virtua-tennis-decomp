/* Straight-line functions with calls and guards (batch gen_ya): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetTarget(void);
int camSetupView(void);
int cpuAimPointSet(int, int, float, float);
float cpuDblPathCross(int, Stk3, Stk3);
float cpuEdgeX(int, Stk3, float);
int cpuReachPoint(int, int, int, Stk3);
int entryAnyAtRound5Clean(void);
int entryFirstPortFlag(void);
int fadeStart(int);
int lightOverrideDiffuse(int, int);
int lightSet(int, int, int, int);
int lightUpdate(int, int);
int matchNextSetup(int);
int nlCloseEvent(int);
int nlExecuteEvent(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int resultDoublesDraw(int, int, int, float);
int resultDraw(int, int, int, float);
int serveGetReceiver(void);
int sndStopAll(void);
int strmBgmPlay(int, int, int, int);
int titleFrameCue(void);
int titleMenuLayout(int, int, float, float);
int titleObjSpinPut(int);
int titleObjTrailPut(int, int);
int titleSprAnim(int, int, int, int, int, int);
int vecAdd(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int FUN_8c04b100(int a4, int a5);
int FUN_8c0e9422(int a4, int a5, int a6);
float FUN_8c0601de(int a4, float f4);
int FUN_8c04b3c2(int a4, int a5);
float FUN_8c06bca0(int a4, float f4);
void FUN_8c085c24(int a4);
int FUN_8c087986(int a4, int a5, int a6, int a7);
int FUN_8c06f538(int a4, int a5);
int FUN_8c06265a(int a4);
float FUN_8c06a408(int a4);

int FUN_8c04b100(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((((((t1 + 0x1) & 0x1) * 0xD78) + 0x8C287D84) + 0xAF0));
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    t2 = a5;
    if (u2 > 71.3100052f) {
        if (!(0.0f > (*(float *)((0x30 + ((((t1 + 0x1) & 0x1) * 0x160) + 0x8C2FC69C)))))) {
            u1 = (*(float *)((0x30 + ((((t1 + 0x1) & 0x1) * 0x160) + 0x8C2FC69C))));
        } else {
            u1 = (-(*(float *)((0x30 + ((((t1 + 0x1) & 0x1) * 0x160) + 0x8C2FC69C)))));
        }
        t3 = a5;
        if ((0.5f > u1) && ((u0 = *(float *)((((((t1 + 0x1) & 0x1) * 0xD78) + 0x8C287D84) + 0xC90)), u0 > 0.899999976f) && (t0 = *(int *)0x8C291F78, (t0 & 4) == 0))) {
            t0 = nlRand();
            t4 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t4 = (t0 & 0x1);
            }
            t0 = a5;
            if (t4 != 0) {
                u0 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x2, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 28.8050003f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                t0 = (a5 + 0x1);
            }
            t3 = t0;
        }
        t2 = t3;
    }
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (0.5f > u1) {
        u0 = *(float *)((a4 + 0xB9C));
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = u0;
        }
        if (12.3450012f > u1) {
            u0 = *(float *)((a4 + 0xAE8));
            u1 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(t2, 0x1, ((float)(-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0)))) * 28.8050003f), ((*(float *)((a4 + 0xB00))) * 83.1949997f));
            u0 = *(float *)((a4 + 0xAE8));
            u1 = *(float *)((a4 + 0xB9C));
            u2 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
            t0 = (-(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
        } else {
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(t2, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 28.8050003f), ((*(float *)((a4 + 0xB00))) * 83.1949997f));
            u0 = *(float *)((a4 + 0xB9C));
            u2 = ((*(float *)((a4 + 0xB00))) * 59.4249992f);
            t0 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet((t2 + 0x1), 0x1, ((float)t0 * 28.8050003f), u2);
    } else {
        u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        cpuAimPointSet(t2, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 28.8050003f), ((*(float *)((a4 + 0xB00))) * 83.1949997f));
        u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        cpuAimPointSet((t2 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 28.8050003f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
    }
    return ((t2 + 0x1) + 0x1);
}

int FUN_8c0e9422(int a4, int a5, int a6)
{
    int stk[17];
    register int t10;
    register int t4;
    register int t21;
    register int t22;
    register int t23;
    register int t54;
    register int t55;
    register int t71;
    register int t60;
    register int t66;
    register int t63;
    register int t76;
    register int t79;
    register int t108;
    register int t87;
    register int t89;
    register int t98;
    register int t99;
    register int t119;
    register int t127;
    register int t128;
    int t19;
    int t20;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t133;
    register int t130;

    t10 = a5;
    if ((*(int *)0x8C20D15C) == 0) {
        lightSet(0x0, 0x0, 0x46, 0x64);
        camMoveBegin(1.0f, 1.0f);
        *(float *)0x8C287A04 = 45.0f;
        FUN_8c0eaf00(0x4D4D4D, 0x4D4D4D, 0x4D4D4D);
        t4 = 0x8C42418C;
        for (;;) {
            if ((unsigned int)t4 >= (unsigned int)0x8C4241BC) {
                break;
            }
            *(float *)((t4 + 0x0)) = 0.0f;
            t4 = (t4 + 0x4);
        }
        *(unsigned int *)0x8C4241BC = 0x0;
        *(float *)0x8C424088 = -20.0f;
        *(float *)0x8C42408C = 270.0f;
        *(float *)0x8C424090 = 80.0f;
        *(float *)0x8C424094 = 40.0f;
        *(float *)0x8C424098 = 210.0f;
        *(unsigned int *)0x8C287D5C = 0x0;
        t10 = 0x8C4241BC;
    }
    lightUpdate(0x0, t10);
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 79.0f);
    camSetTarget();
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 0.0f);
    camSetEye();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12), *(int *)((int)stk + 20 + 16), *(int *)((int)stk + 20 + 20), *(int *)((int)stk + 20 + 24), *(int *)((int)stk + 20 + 28));
    camSetupView();
    titleFrameCue();
    t21 = 0x8C29B898;
    t22 = 0x8C29B898;
    t23 = 0x0;
    for (;;) {
        if ((unsigned int)t22 >= (unsigned int)0x8C29B8A8) {
            break;
        }
        t21 = (*(int *)((t22 + 0x0)));
        t22 = (t22 + 0x4);
        t20 = (*(int *)((t21 + 0x10)));
        if (((t20 & 0x8) != 0) && ((t35 = *(int *)((t21 + 0x8)), t19 = t35, t36 = ((t20 & 0x8) == 0), t20 = 0x200, (t19 & t20) == 0) || ((t37 = *(int *)((t21 + 0x8)), t19 = 0x400, (t37 & t19) == 0) || ((t38 = *(int *)((t21 + 0x8)), (t38 & 2) == 0) || (t39 = *(int *)((t21 + 0x8)), (t39 & 5) == 0))))) {
            t23 = 0x1;
        }
    }
    if ((*(int *)0x8C20D15C) == ((*(int *)0x8C1DC6BC) - 40)) {
        strmBgmPlay(0x16, t22, 0x8, 0x1);
    }
    t54 = *(int *)0x8C20D15C;
    t55 = *(int *)0x8C1DC6AC;
    t71 = (titleObjSpinPut((*(int *)0x8C20D15C)));
    if ((int)t54 > (int)t55) {
        t60 = *(int *)0x8C1DC6B0;
        t66 = (t60 + 0xB);
        if ((int)(*(int *)0x8C20D15C) <= (int)(t60 + 0xB)) {
            t63 = 0x1E;
            if ((int)t54 < (int)(*(int *)0x8C1DC6B0)) {
                t63 = (t54 - t55);
            }
            t66 = (titleObjTrailPut(t63, 0x1E));
        }
        t71 = t66;
    }
    t76 = *(int *)0x8C20D15C;
    t79 = t71;
    if ((int)t76 > (int)(*(int *)0x8C1DC6B4)) {
        t79 = (titleSprAnim(t76, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4)));
    }
    t108 = t79;
    if ((int)(*(int *)0x8C20D15C) >= (int)((*(int *)0x8C1DC6B0) + 0xB)) {
        *(float *)((((int)stk + 20) + 0x4)) = 1.0f;
        t87 = *(int *)0x8C1DC6B8;
        if ((int)(*(int *)0x8C20D15C) >= (int)t87) {
            t89 = *(int *)0x8C20D15C;
            *(float *)((((int)stk + 20) + 0x0)) = ((float)(t89 - t87) * 0.0340000018f);
            if (((float)(t89 - t87) * 0.0340000018f) > 1.0f) {
                *(float *)((((int)stk + 20) + 0x0)) = 1.0f;
            }
        } else {
            if (1) {
                *(float *)((((int)stk + 20) + 0x0)) = 0.0f;
            }
        }
        t98 = *(int *)0x8C1DC6BC;
        if ((int)(*(int *)0x8C20D15C) >= (int)t98) {
            t99 = *(int *)0x8C20D15C;
            *(float *)(((((int)stk + 20) + 0x8) + 0x0)) = ((float)(t99 - t98) * 0.100000001f);
            if (((float)(t99 - t98) * 0.100000001f) > 1.0f) {
                *(float *)((((int)stk + 20) + 0x8)) = 1.0f;
            }
        } else {
            if (1) {
                *(float *)(((((int)stk + 20) + 0x8) + 0x0)) = 0.0f;
            }
        }
        t108 = (titleMenuLayout(0x0, ((int)stk + 20), 0.0f, 0.100000001f));
    }
    t119 = t108;
    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C407FD0 = 0x0;
        t119 = (fadeStart(0x1E));
    }
    if ((*(int *)0x8C20D15C) == (*(int *)0x8C1DC6C0)) {
        *(unsigned int *)0x8C20D150 = 0x6;
        *(unsigned int *)0x8C20D15C = 0x0;
        t133 = t119;
    } else {
        if (t23 != 0) {
            *(unsigned int *)0x8C20D150 = 0x6;
            t127 = sndStopAll();
            *(unsigned int *)0x8C20D15C = 0x0;
            t130 = t127;
        } else {
            t128 = nlExecuteEvent(0x6, 0x8C20D150);
            *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
            t130 = t128;
        }
        t133 = t130;
    }
    return t133;
}

float FUN_8c0601de(int a4, float f4)
{
    int stk[54];
    register int t0;
    register int t1;
    register int t2;
    register float u12;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register float u23;
    register float u25;
    register int t27;
    register int t28;
    register float u31;
    register float u33;
    register int t34;
    register float u35;
    register float u36;
    register float u41;
    register float t44;
    register float u47;
    register float u48;
    register float u49;
    register float u50;
    register float u51;
    register float u52;
    register float u53;
    register float u55;
    register float u58;
    register float u65;
    register float t66;
    register float u97;
    register float u78;
    register float u81;
    register float u84;
    register float u61;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t2 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138))) == 0.0f) {
            u12 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u19 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u20 = ((*(float *)((a4 + 0xB00))) * u19);
            u81 = (-(u20 * 118.849998f));
            u84 = (u12 - ((float)((u12 > 0.0f) - (0.0f > u12)) * 54.8499985f));
        } else {
            u21 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u22 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
            u23 = (-u21);
            if (!(0.0f > u21)) {
                u23 = u21;
            }
            u25 = (-u22);
            if (!(0.0f > u22)) {
                u25 = u22;
            }
            t27 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
            t28 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            if (u25 > u23) {
                t27 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                t28 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
            }
            u31 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = (u31 - (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C))));
            u33 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            *(float *)(((((int)stk + 40) + 0x14) + 0x8)) = (u33 - (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xBA4))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + t27)); }
            t34 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118));
            u35 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xBA4));
            *(float *)(((int)stk + 40)) = u35;
            u36 = *(float *)((t27 + 0xAF0));
            *(float *)(((int)stk + 44)) = u36;
            u41 = (u35 - u36);
            if (!(0.0f > (u35 - u36))) {
            } else {
                u41 = ((-(*(float *)(((int)stk + 40)))) + (*(float *)(((int)stk + 44))));
            }
            cpuReachPoint(t27, (((int)stk + 28) + 0x2C), (int)(((float)t34 + (u41 / 4.0f)) + 10.0f), *(Stk3 *)(((int)stk + 28)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84))); }
            t44 = cpuDblPathCross((((int)stk + 4) + 0x44), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            u47 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u48 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u49 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u50 = ((*(float *)((a4 + 0xB00))) * u48);
            u51 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xBA4));
            u52 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u53 = *(float *)((a4 + 0xBA4));
            if (10.0f > t44) {
                u55 = (u47 - (((u49 - u47) / (u52 - u51)) * u53));
                u55 = u55 + (*(float *)((t27 + 0xAF0))) * ((u49 - u47) / (u52 - u51));
                *(float *)(((((int)stk + 40) + 0x8) + 0x0)) = u55;
                *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = 0.0f;
                u61 = (*(float *)((t27 + 0xAF0)));
            } else {
                u58 = (u47 - (((u49 - u47) / (u52 - u51)) * u53));
                u58 = u58 + (*(float *)((t28 + 0xAF0))) * ((u49 - u47) / (u52 - u51));
                *(float *)(((((int)stk + 40) + 0x8) + 0x0)) = u58;
                *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = 0.0f;
                u61 = (*(float *)((t28 + 0xAF0)));
            }
            *(float *)(((((int)stk + 40) + 0x8) + 0x8)) = u61;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x8)); }
            u65 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            t66 = cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > u65)) ? 1 : 0), *(Stk3 *)(((int)stk + 28)), (-(u50 * 118.849998f)));
            u78 = t66;
            u81 = (-(u50 * 118.849998f));
            u84 = t66;
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u84;
        *(float *)((a4 + 0xA3C)) = u81;
        u97 = u78;
    }
    return u97;
}

int FUN_8c04b3c2(int a4, int a5)
{
    int stk[13];
    register int t0;
    register int t11;
    register int t3;
    register float u4;
    register int t6;
    register float u7;
    register float u16;
    register float u17;
    register int t21;
    register int t29;
    register int t22;
    register float u23;
    register int t25;
    register float u26;
    register int t38;
    register int t31;
    register float u32;
    register int t34;
    register float u35;
    register float u43;
    register float u44;
    register int t47;
    register int t55;
    register int t48;
    register float u49;
    register int t51;
    register float u52;
    register int t58;
    register int t66;
    register int t59;
    register float u60;
    register int t62;
    register float u63;
    register int t75;
    register int t68;
    register float u69;
    register int t71;
    register float u72;
    register int t84;
    register int t85;
    register int t94;
    register int t87;
    register float u88;
    register int t90;
    register float u91;
    register int t102;
    register int t95;
    register float u96;
    register int t98;
    register float u99;
    register int t115;
    register int t110;
    register int t41;
    register int t106;
    register int t81;
    register int t78;
    register int t104;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
        t11 = a5;
        if ((int)a5 >= (int)0x1E) {
        } else {
            t3 = a5;
            for (;;) {
                u4 = *(float *)((a4 + 0xB00));
                *(float *)(((int)stk + 4)) = (u4 * 118.849998f);
                t6 = t3;
                t3 = (t3 + 0x1);
                u7 = (-1.0f);
                u7 = u7 + (1.0f + 1.0f) * (nlRandom());
                cpuAimPointSet(t6, 0x1, (u7 * 41.1500015f), (u4 * 118.849998f));
                if ((int)t3 >= (int)0x1E) {
                    break;
                }
            }
            t11 = t3;
        }
        t115 = t11;
    } else {
        u16 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u17 = (-u16);
        if (!(0.0f > u16)) {
            u17 = u16;
        }
        if (u17 > 83.1949997f) {
            t21 = (int)((int)(nlRand()) % (int)0x5);
            if (t21 != 0) {
                t29 = a5;
                if ((int)a5 >= (int)0x1E) {
                } else {
                    t22 = a5;
                    for (;;) {
                        u23 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 4)) = (u23 * 11.8850002f);
                        t25 = t22;
                        t22 = (t22 + 0x1);
                        u26 = (-1.0f);
                        u26 = u26 + (1.0f + 1.0f) * (nlRandom());
                        cpuAimPointSet(t25, 0x1, (u26 * 41.1500015f), (u23 * 11.8850002f));
                        if ((int)t22 >= (int)0x1E) {
                            break;
                        }
                    }
                    t29 = t22;
                }
                t41 = t29;
            } else {
                t38 = a5;
                if ((int)a5 >= (int)0x1E) {
                } else {
                    t31 = a5;
                    for (;;) {
                        u32 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 4)) = (u32 * 118.849998f);
                        t34 = t31;
                        t31 = (t31 + 0x1);
                        u35 = (-1.0f);
                        u35 = u35 + (1.0f + 1.0f) * (nlRandom());
                        cpuAimPointSet(t34, 0x1, (u35 * 41.1500015f), (u32 * 118.849998f));
                        if ((int)t31 >= (int)0x1E) {
                            break;
                        }
                    }
                    t38 = t31;
                }
                t41 = t38;
            }
            t110 = t41;
        } else {
            u43 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u44 = (-u43);
            if (!(0.0f > u43)) {
                u44 = u43;
            }
            if (47.5400009f > u44) {
                t47 = (int)((int)(nlRand()) % (int)0x5);
                if (t47 != 0) {
                    t55 = a5;
                    if ((int)a5 >= (int)0x1E) {
                    } else {
                        t48 = a5;
                        for (;;) {
                            u49 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 4)) = (u49 * 118.849998f);
                            t51 = t48;
                            t48 = (t48 + 0x1);
                            u52 = (-1.0f);
                            u52 = u52 + (1.0f + 1.0f) * (nlRandom());
                            cpuAimPointSet(t51, 0x2, (u52 * 41.1500015f), (u49 * 118.849998f));
                            if ((int)t48 >= (int)0x1E) {
                                break;
                            }
                        }
                        t55 = t48;
                    }
                    t81 = t55;
                } else {
                    t58 = (int)((int)(nlRand()) % (int)0x3);
                    if (t58 != 0) {
                        t66 = a5;
                        if ((int)a5 < (int)0x1E) {
                            t59 = a5;
                            for (;;) {
                                u60 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 4)) = (u60 * 118.849998f);
                                t62 = t59;
                                t59 = (t59 + 0x1);
                                u63 = (-1.0f);
                                u63 = u63 + (1.0f + 1.0f) * (nlRandom());
                                cpuAimPointSet(t62, 0x1, (u63 * 41.1500015f), (u60 * 118.849998f));
                                if ((int)t59 >= (int)0x1E) {
                                    break;
                                }
                            }
                            t66 = t59;
                        }
                        t78 = t66;
                    } else {
                        t75 = a5;
                        if ((int)a5 < (int)0x1E) {
                            t68 = a5;
                            for (;;) {
                                u69 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 4)) = (u69 * 11.8850002f);
                                t71 = t68;
                                t68 = (t68 + 0x1);
                                u72 = (-1.0f);
                                u72 = u72 + (1.0f + 1.0f) * (nlRandom());
                                cpuAimPointSet(t71, 0x1, (u72 * 41.1500015f), (u69 * 11.8850002f));
                                if ((int)t68 >= (int)0x1E) {
                                    break;
                                }
                            }
                            t75 = t68;
                        }
                        t78 = t75;
                    }
                    t81 = t78;
                }
                t106 = t81;
            } else {
                t84 = nlRand();
                t85 = ((~(((~t84) + 0x1) & 0x1)) + 0x1);
                if ((int)t84 >= 0) {
                    t85 = (t84 & 0x1);
                }
                if (t85 != 0) {
                    t94 = a5;
                    if ((int)a5 < (int)0x1E) {
                        t87 = a5;
                        for (;;) {
                            u88 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 4)) = (u88 * 118.849998f);
                            t90 = t87;
                            t87 = (t87 + 0x1);
                            u91 = (-1.0f);
                            u91 = u91 + (1.0f + 1.0f) * (nlRandom());
                            cpuAimPointSet(t90, 0x1, (u91 * 41.1500015f), (u88 * 118.849998f));
                            if ((int)t87 >= (int)0x1E) {
                                break;
                            }
                        }
                        t94 = t87;
                    }
                    t104 = t94;
                } else {
                    t102 = a5;
                    if ((int)a5 < (int)0x1E) {
                        t95 = a5;
                        for (;;) {
                            u96 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 4)) = (u96 * 11.8850002f);
                            t98 = t95;
                            t95 = (t95 + 0x1);
                            u99 = (-1.0f);
                            u99 = u99 + (1.0f + 1.0f) * (nlRandom());
                            cpuAimPointSet(t98, 0x1, (u99 * 41.1500015f), (u96 * 11.8850002f));
                            if ((int)t95 >= (int)0x1E) {
                                break;
                            }
                        }
                        t102 = t95;
                    }
                    t104 = t102;
                }
                t106 = t104;
            }
            t110 = t106;
        }
        t115 = t110;
    }
    return t115;
}

float FUN_8c06bca0(int a4, float f4)
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
                u0 = (*(float *)((a4 + 0xAF0)));
                u1 = (*(float *)((a4 + 0xAE8)));
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
                u3 = *(float *)((a4 + 0xB00));
                u4 = ((((nlRandom()) * 0.200000003f) - ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.449999988f)) + 1.0f);
                u5 = (u3 * u4);
                u0 = (-(u5 * 118.849998f));
                u1 = u2;
            }
            t1 = *(int *)((a4 + 0xC58));
            t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x1);
            }
            if (t2 == 0) {
                t1 = (-((u1 > 0.0f) - (0.0f > u1)));
            } else {
                t1 = ((u1 > 0.0f) - (0.0f > u1));
            }
            u2 = 15.0f;
            u2 = u2 + 10.0f * (nlRandom());
            u3 = u1;
            u3 = u3 + u2 * (float)t1;
            u1 = *(float *)0x8C06BFBC;
            u4 = (-u3);
            if (!(0.0f > u3)) {
                u4 = u3;
            }
            u5 = u3;
            if (u4 > u1) {
                u5 = ((float)((u3 > 0.0f) - (0.0f > u3)) * u1);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u0;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

void FUN_8c085c24(int a4)
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
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;

    if ((*(int *)0x8C30196C) != 0) {
        return;
    }
    t30 = *(int *)((a4 + 0x14));
    if (((int)t30 < (int)0x46) && (((int)t30 > (int)0x3C) && ((t0 = *(int *)((a4 + 0x48)), t0 == 0) && ((t1 = *(int *)((a4 + 0x38)), t1 != 0) && (((t2 = *(short *)0x8C343262, ((unsigned short)t2 & 1) != 0) && ((t3 = *(int *)0x8C29B898, t4 = *(int *)((t3 + 0x10)), (t4 & 5) != 0) || (t5 = *(int *)0x8C29B898, t6 = *(int *)((t5 + 0x10)), (t6 & 2) != 0))) || (((t7 = *(short *)0x8C343262, ((unsigned short)t7 & 16) != 0) && ((t8 = *(int *)0x8C29B89C, t9 = *(int *)((t8 + 0x10)), (t9 & 5) != 0) || (t10 = *(int *)0x8C29B89C, t11 = *(int *)((t10 + 0x10)), (t11 & 2) != 0))) || (((t12 = *(short *)0x8C343262, ((unsigned short)t12 & 0x100) != 0) && ((t13 = *(int *)0x8C29B8A0, t14 = *(int *)((t13 + 0x10)), (t14 & 5) != 0) || (t15 = *(int *)0x8C29B8A0, t16 = *(int *)((t15 + 0x10)), (t16 & 2) != 0))) || ((t17 = *(short *)0x8C343262, ((unsigned short)t17 & 0x1000) != 0) && ((t18 = *(int *)0x8C29B8A4, t19 = *(int *)((t18 + 0x10)), (t19 & 5) != 0) || (t20 = *(int *)0x8C29B8A4, t21 = *(int *)((t20 + 0x10)), (t21 & 2) != 0)))))))))) {
        *(unsigned int *)((a4 + 0x48)) = 0x1;
        *(unsigned int *)((a4 + 0x28)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = 0x0;
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
    }
    if ((int)(*(int *)((a4 + 0x14))) > (int)0xBE) {
        *(float *)((a4 + 0x18)) = ((float)((-(*(int *)((a4 + 0x14)))) + 0xC8) / 10.0f);
    } else {
        if ((int)(*(int *)((a4 + 0x14))) < (int)0xA) {
            *(float *)((a4 + 0x18)) = ((float)(*(int *)((a4 + 0x14))) / 10.0f);
            if (0.0f > (*(float *)((a4 + 0x18)))) {
                *(float *)((a4 + 0x18)) = 0.0f;
            }
        } else {
            *(float *)((a4 + 0x18)) = 1.0f;
        }
    }
    if (((*(int *)((a4 + 0x38))) == 0) && (t22 = *(int *)((a4 + 0x2C)), t22 != 0)) {
        *(unsigned int *)((a4 + 0x28)) = (*(int *)((a4 + 0x2C)));
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
    }
    if ((((*(int *)0x8C301B9C) == 0) && (t23 = *(int *)0x8C301BA0, t23 == 1)) || ((t24 = *(int *)((a4 + 0x30)), t24 == 0) || ((t25 = *(int *)0x8C287D5C, t25 == 1) || (t26 = *(int *)0x8C301B90, t26 != 0)))) {
    } else {
        if (((int)(*(int *)((a4 + 0x14))) < (int)0xAA) && ((t27 = *(int *)((a4 + 0x38)), (int)t27 > 0) && (t28 = *(int *)0x8C287C60, t28 == 0))) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 1);
            *(unsigned int *)((a4 + 0x28)) = ((*(int *)((a4 + 0x28))) + (*(int *)((a4 + 0x30))));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - (*(int *)((a4 + 0x30))));
            nlsndSeqRequest(0x505A9);
            nlsndSystemControl(0x0, 0x10A0, (*(int *)0x8C38BA64));
        }
        if (((*(int *)((a4 + 0x34))) == 0) && (t29 = *(int *)((a4 + 0x3C)), t29 == 0)) {
            *(unsigned int *)((a4 + 0x3C)) = 0x1;
        }
    }
    if ((*(int *)0x8C287ADC) == 2) {
        resultDraw((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x44))), (*(float *)((a4 + 0x18))));
    } else {
        resultDoublesDraw((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x34))), (*(int *)((a4 + 0x44))), (*(float *)((a4 + 0x18))));
    }
    *(volatile int *)0x8C287ADC;
    t0 = entryAnyAtRound5Clean();
    if (t0 != 0) {
        if ((int)(*(int *)0x8C287B4C) <= (int)0xFFFFFFEC) {
            t0 = entryFirstPortFlag();
            if (t0 != 2) {
                matchNextSetup(0x1);
                nlCloseEvent(a4);
    return;
            }
            if ((*(int *)0x8C287C60) == 0) {
                if ((*(int *)0x8C301BF0) == 2) {
                    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 2);
                } else {
                    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
                }
            }
            if ((int)(*(int *)((a4 + 0x14))) <= 0) {
                *(unsigned int *)0x8C185294 = 0x0;
                t0 = entryFirstPortFlag();
                if (t0 != 0) {
                    *(unsigned int *)0x8C20D14C = 0x3;
                    *(unsigned int *)0x8C20D150 = 0x0;
                }
                nlCloseEvent(a4);
    return;
            }
            return;
        }
        if ((*(int *)0x8C287C60) == 0) {
            if ((*(int *)0x8C301BF0) == 2) {
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 2);
            } else {
                *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            }
        }
        if ((int)(*(int *)((a4 + 0x14))) <= 0) {
            *(unsigned int *)0x8C185294 = 0x0;
            t0 = entryFirstPortFlag();
            if (t0 != 0) {
                *(unsigned int *)0x8C20D14C = 0x3;
                *(unsigned int *)0x8C20D150 = 0x0;
            }
            nlCloseEvent(a4);
    return;
        }
        return;
    }
    if ((*(int *)0x8C287C60) == 0) {
        if ((*(int *)0x8C301BF0) == 2) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 2);
        } else {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        }
    }
    if ((int)(*(int *)((a4 + 0x14))) <= 0) {
        *(unsigned int *)0x8C185294 = 0x0;
        t0 = entryFirstPortFlag();
        if (t0 != 0) {
            *(unsigned int *)0x8C20D14C = 0x3;
            *(unsigned int *)0x8C20D150 = 0x0;
        }
        nlCloseEvent(a4);
    return;
    }
}

int FUN_8c087986(int a4, int a5, int a6, int a7)
{
    int stk[30];

    register int R3;
    register int R8;
    register int R9;
    register float F2;
    register float F3;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 32)) = 0x8C291F24;
    v0_7 = *(int *)0x8C287B3C;
    v0_6 = (v0_7);
    v0_5 = (0x8C287ACC);
    v0_2 = (0x8C301BE8);
    v0_4 = (0x64);
    v0_3 = (v0_0);
    if (((v0_7 & 1) == 0)) goto L_8C0879B2;
    L_8C087BFA:;
    return v0_6;
    L_8C0879B2:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    if (((int)(*(int *)((v0_3 + 0x14))) <= 0)) goto L_8C0879CE;
    if (((*(int *)0x8C287C60) == 0)) goto L_8C0879C6;
    goto L_8C087BFA;
    L_8C0879C6:;
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) - 1);
    goto L_8C087BFA;
    L_8C0879CE:;
    v0_7 = (0x0);
    L_8C087AB6:;
    v0_6 = (0x8C087C28);
    w0_0 = (130.0f);
    w0_1 = (100.0f);
    w0_2 = (15.0f);
    w0_3 = (115.0f);
    w0_4 = (-130.0f);
    if (((int)v0_7 < (int)(*(int *)((v0_5 + 0x10))))) goto L_8C0879D2;
    v0_5 = *(int *)(((int)stk + 32));
    w0_6 = *(float *)((v0_3 + 0x24));
    w0_7 = *(float *)((v0_5 + 0x14));
    v0_6 = (0x14);
    v0_5 = (v0_5);
    w0_5 = ((w0_7 - w0_6));
    if (((w0_7 - w0_6) > w0_0)) goto L_8C087B38;
    v0_6 = (0x8C087C1C);
    if ((-130.0f > w0_5)) goto L_8C087B38;
    if ((!(w0_3 > w0_5))) goto L_8C087AF8;
    v0_6 = (0x8C087C10);
    if ((!(w0_5 > -115.0f))) goto L_8C087AF8;
    v0_4 = (0x3C);
    L_8C087B34:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    L_8C087B3A:;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C087B6A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((v0_3 + 0x1C)); }
    *(int *)((int)stk + 4) = (0x1C + v0_3);
    v0_6 = ((vecAdd(v0_0, v0_1, a6, a7, *(int *)((int)stk + 4))));
    L_8C087B6A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C301B84) = *(struct mv3 *)((v0_3 + 0x1C)); }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_3 + 0x1C))), 0.0399999991f, (*(float *)((v0_3 + 0x24))));
    nlRotateAY((unsigned short)(*(short *)((v0_3 + 0x18))));
    nlScale(0.800000012f, 1.0f, 1.0f);
    nlObjPut(0xC555B48);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_3 + 0x1C))), 0.200000003f, (*(float *)((v0_3 + 0x24))));
    nlRotateAY((unsigned short)(*(short *)((v0_3 + 0x18))));
    nlScale(0.800000012f, 1.0f, 1.0f);
    nlObjPut(0xC5582E0);
    nlPopMatrix(0x1);
    v0_6 = (0x24);
    if ((!((*(float *)((v0_3 + 0x24))) > 500.0f))) goto L_8C087BFA;
    v0_6 = ((nlCloseEvent(v0_3)));
    goto L_8C087BFA;
    L_8C087AF8:;
    v0_6 = (0x8C087C2C);
    w0_3 = (40.0f);
    if ((w0_5 > w0_0)) goto L_8C087B1A;
    v0_6 = (0x8C087C18);
    if ((115.0f > w0_5)) goto L_8C087B1A;
    w0_0 = ((w0_0 - w0_5) * w0_3);
    w0_0 = -w0_0;
    v0_4 = ((int)((w0_0 / w0_2) + w0_1));
    goto L_8C087B34;
    L_8C087B1A:;
    if ((w0_4 > w0_5)) goto L_8C087B38;
    v0_6 = (0x8C087C10);
    if ((w0_5 > -115.0f)) goto L_8C087B38;
    w0_0 = ((w0_5 + w0_0) * w0_3);
    w0_0 = -w0_0;
    v0_4 = ((int)((w0_0 / w0_2) + w0_1));
    goto L_8C087B34;
    L_8C087B38:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_4;
    goto L_8C087B3A;
    L_8C0879D2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x4)) = *(struct mv3 *)((0xAE8 + (0x8C287D84 + (v0_7 * 0xD78)))); }
    w0_1 = *(float *)((v0_3 + 0x24));
    w0_2 = *(float *)(((((int)stk + 32) + 0x4) + 0x8));
    v0_0 = ((((int)stk + 32) + 0x4));
    w0_5 = ((w0_2 - w0_1));
    if (((w0_2 - w0_1) > w0_0)) goto L_8C087AAC;
    if ((-130.0f > w0_5)) goto L_8C087AAC;
    if ((!(w0_3 > w0_5))) goto L_8C087A14;
    if ((!(w0_5 > -115.0f))) goto L_8C087A14;
    v0_0 = (0x1E);
    v0_1 = (0x1E);
    L_8C087AAE:;
    lightOverrideDiffuse(v0_7, v0_1);
    v0_7 = ((v0_7 + 0x1));
    goto L_8C087AB6;
    L_8C087A14:;
    w0_3 = (70.0f);
    if ((w0_5 > w0_0)) goto L_8C087A88;
    if ((115.0f > w0_5)) goto L_8C087A88;
    w0_0 = ((w0_0 - w0_5) * w0_3);
    w0_0 = -w0_0;
    L_8C087AA8:;
    goto L_8C087AAE;
    L_8C087A88:;
    if ((w0_4 > w0_5)) goto L_8C087AAC;
    if ((w0_5 > -115.0f)) goto L_8C087AAC;
    w0_0 = ((w0_5 + w0_0) * w0_3);
    w0_0 = -w0_0;
    goto L_8C087AA8;
    L_8C087AAC:;
    v0_1 = (v0_4);
    goto L_8C087AAE;
}

int FUN_8c06f538(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
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
        t2 = *(signed char *)(((0x8C2FC69C + (t0 * 0x160)) + 0x13E));
        t3 = *(int *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xB5C));
        u0 = *(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28));
        u1 = (*(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8)));
        u1 = u1 + 0.600000024f * (u0 * (float)(*(short *)(((0x8C2FC69C + (t0 * 0x160)) + 0x118))));
        cpuAimPointSet(a5, 0x1, u1, (*(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAF0))));
        t0 = nlRand();
        t4 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t4 = (t0 & 0x1);
        }
        t0 = (a5 + 0x1);
        if (t4 == 0) {
            u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
            u1 = *(float *)(((0x8C287D84 + (((t3 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
            u2 = 10.0f;
            u2 = u2 + 10.0f * (nlRandom());
            u3 = u0;
            u3 = u3 + u2 * (float)(((u0 - u1) > 0.0f) - (0.0f > (u0 - u1)));
            u0 = (-u3);
            if (!(0.0f > u3)) {
                u0 = u3;
            }
            u1 = u3;
            if (u0 > 43.8800011f) {
                u1 = ((float)((u3 > 0.0f) - (0.0f > u3)) * 43.8800011f);
            }
            u0 = 0.699999988f;
            u0 = u0 + 0.100000001f * (nlRandom());
            u2 = ((*(float *)((a4 + 0xB00))) * u0);
            cpuAimPointSet((a5 + 0x1), 0x1, u1, (u2 * 118.849998f));
            t0 = ((a5 + 0x1) + 0x1);
        }
        t3 = t0;
        if ((*(int *)(((((*(int *)(((0xB5C + (((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84)) + 0x0))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = (*(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAF0)));
            }
            t4 = t0;
            if (u1 > (*(float *)0x8C06F854)) {
                t5 = (int)((int)(nlRand()) % (int)0xA);
                t6 = t0;
                if (t5 == 0) {
                    u0 = *(float *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0xD78) + 0x8C287D84) + 0xAE8));
                    cpuAimPointSet(t0, 0x2, u0, ((*(float *)((a4 + 0xB00))) * (*(float *)0x8C06F860)));
                    t6 = (t0 + 0x1);
                }
                t4 = t6;
            }
            t3 = t4;
        }
        t1 = t3;
    }
    return t1;
}

int FUN_8c06265a(int a4)
{
    int stk[6];

    register int R5;
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
    register float w0_5;
    v0_1 = a4;
    v0_0 = *(int *)((v0_1 + 0xB5C));
    v0_4 = ((v0_0 + 0x2));
    v0_3 = ((((0x3 & (v0_0 + 0x2)) * 0xD78) + 0x8C287D84));
    v0_2 = (0x8C291F24);
    if (((int)v0_0 >= (int)0x2)) goto L_8C062684;
    L_8C0628AE:;
    return v0_4;
    L_8C062684:;
    w0_1 = *(float *)((v0_1 + 0xAF0));
    w0_2 = ((*(float *)((v0_3 + 0xAF0))));
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C062694;
    w0_1 = (w0_0);
    L_8C062698:;
    if ((0.0f > w0_2)) goto L_8C0626A2;
    w0_0 = (w0_2);
    L_8C0626A6:;
    if ((!(w0_0 > w0_1))) goto L_8C0626B0;
    v0_0 = (v0_1);
    v0_1 = (v0_3);
    L_8C0626B4:;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)((v0_0 + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 8)) = (0x8C2FC69C + ((*(int *)((v0_1 + 0xB5C))) * 0x160));
    if ((((*(int *)((v0_2 + 0x54))) & 4) == 0)) goto L_8C062720;
    v0_0 = (serveGetReceiver()) != (*(int *)(((0xB5C + v0_0) + 0x0)));
    if (!(v0_0)) goto L_8C06289A;
    v0_0 = serveGetReceiver();
    v0_4 = (v0_0);
    if ((v0_0 != (*(int *)(((0xB5C + v0_1) + 0x0))))) goto L_8C062700;
    goto L_8C0628A6;
    L_8C06289A:;
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x12E)) = 0x1;
    v0_4 = (0x12E);
    goto L_8C0628AE;
    L_8C0628A6:;
    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x12E)) = 0x1;
    v0_4 = (0x12E);
    goto L_8C0628AE;
    L_8C062700:;
    goto L_8C0628AE;
    L_8C062720:;
    if (((*(int *)((v0_1 + 0xC5C))) != 12)) goto L_8C062736;
    if ((((*(int *)((v0_1 + 0xB60))) & 0x400) != 0)) goto L_8C062736;
    goto L_8C06289A;
    L_8C062736:;
    if (((*(int *)((v0_0 + 0xC5C))) != 12)) goto L_8C06274C;
    if ((((*(int *)((v0_0 + 0xB60))) & 0x400) != 0)) goto L_8C06274C;
    goto L_8C0628A6;
    L_8C06274C:;
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_4 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_1 - w0_4));
    w0_0 = (w0_4);
    w0_3 = (w0_1);
    if ((0.0f > (w0_1 - w0_4))) goto L_8C062762;
    w0_1 = (w0_2);
    L_8C06276A:;
    if ((50.0f > w0_1)) goto L_8C0627A2;
    v0_4 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))))) goto L_8C06278E;
    w0_1 = *(float *)((v0_1 + 0xB9C));
    w0_0 = (w0_1);
    w0_1 = (((*(float *)((v0_1 + 0xAE8))) - w0_1));
    L_8C06279A:;
    if (!((!(25.0f > w0_1)))) goto L_8C0627A2;
    w0_2 = *(float *)((v0_0 + 0xAE8));
    w0_4 = *(float *)((v0_0 + 0xB9C));
    w0_1 = (0.0f);
    w0_0 = (w0_2);
    w0_3 = ((w0_4 - w0_2));
    if ((!((w0_4 - w0_2) > 0.0f))) goto L_8C0627FA;
    v0_2 = (0x1);
    goto L_8C062816;
    L_8C0627A2:;
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_4 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_1 - w0_4));
    w0_0 = (w0_1);
    w0_3 = (w0_4);
    if ((0.0f > (w0_1 - w0_4))) goto L_8C0627B8;
    w0_1 = (w0_2);
    L_8C0627C0:;
    w0_0 = *(float *)((v0_1 + 0xAE8));
    w0_4 = *(float *)((v0_1 + 0xB9C));
    w0_5 = ((w0_0 - w0_4));
    w0_2 = (w0_0);
    w0_3 = (w0_4);
    if ((0.0f > (w0_0 - w0_4))) goto L_8C0627D6;
    w0_0 = (w0_5);
    L_8C0627DE:;
    if ((!(w0_0 > w0_1))) goto L_8C0628A6;
    goto L_8C06289A;
    L_8C0627D6:;
    w0_0 = ((-w0_2));
    w0_0 = (((-w0_2) + w0_3));
    goto L_8C0627DE;
    L_8C0627B8:;
    w0_1 = (((-w0_0) + w0_3));
    goto L_8C0627C0;
    L_8C062816:;
    w0_3 = *(float *)((v0_1 + 0xAE8));
    w0_1 = (0.0f);
    w0_2 = ((w0_0 - w0_3));
    if ((!((w0_0 - w0_3) > 0.0f))) goto L_8C062828;
    v0_3 = (0x1);
    L_8C062832:;
    if ((v0_2 == v0_3)) goto L_8C06289A;
    w0_3 = *(float *)((v0_1 + 0xAE8));
    w0_4 = *(float *)((v0_1 + 0xB9C));
    w0_1 = (0.0f);
    w0_2 = ((w0_4 - w0_3));
    w0_0 = (w0_3);
    if ((!((w0_4 - w0_3) > 0.0f))) goto L_8C06284A;
    v0_1 = (0x1);
    L_8C062854:;
    w0_2 = *(float *)((v0_0 + 0xAE8));
    w0_1 = (0.0f);
    w0_3 = ((w0_0 - w0_2));
    if ((!((w0_0 - w0_2) > 0.0f))) goto L_8C062866;
    v0_2 = (0x1);
    L_8C062870:;
    if ((v0_1 == v0_2)) goto L_8C0628A6;
    w0_1 = *(float *)((v0_0 + 0xAE8));
    w0_4 = *(float *)((v0_0 + 0xB9C));
    w0_2 = ((w0_1 - w0_4));
    w0_0 = (w0_4);
    w0_3 = (w0_1);
    if ((0.0f > (w0_1 - w0_4))) goto L_8C06288A;
    w0_1 = (w0_2);
    L_8C062892:;
    if ((!(62.5f > w0_1))) goto L_8C0628A6;
    goto L_8C06289A;
    L_8C06288A:;
    w0_1 = (((-w0_3) + w0_0));
    goto L_8C062892;
    L_8C062866:;
    if ((!(w0_1 > w0_3))) goto L_8C06286E;
    v0_2 = (0xFFFFFFFF);
    goto L_8C062870;
    L_8C06286E:;
    v0_2 = (0x0);
    goto L_8C062870;
    L_8C06284A:;
    if ((!(w0_1 > w0_2))) goto L_8C062852;
    v0_1 = (0xFFFFFFFF);
    goto L_8C062854;
    L_8C062852:;
    v0_1 = (0x0);
    goto L_8C062854;
    L_8C062828:;
    if ((!(w0_1 > w0_2))) goto L_8C062830;
    v0_3 = (0xFFFFFFFF);
    goto L_8C062832;
    L_8C062830:;
    v0_3 = (0x0);
    goto L_8C062832;
    L_8C0627FA:;
    if ((!(w0_1 > w0_3))) goto L_8C062814;
    v0_2 = (0xFFFFFFFF);
    goto L_8C062816;
    L_8C062814:;
    v0_2 = (0x0);
    goto L_8C062816;
    L_8C06278E:;
    w0_1 = *(float *)((v0_1 + v0_4));
    w0_2 = *(float *)((v0_1 + 0xB9C));
    w0_0 = (w0_2);
    w0_0 = ((-w0_1));
    w0_1 = (((-w0_1) + w0_2));
    goto L_8C06279A;
    L_8C062762:;
    w0_1 = (((-w0_3) + w0_0));
    goto L_8C06276A;
    L_8C0626B0:;
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    goto L_8C0626B4;
    L_8C0626A2:;
    w0_0 = ((-w0_2));
    goto L_8C0626A6;
    L_8C062694:;
    w0_1 = ((-w0_0));
    goto L_8C062698;
}

float FUN_8c06a408(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u0 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
        u1 = ((*(float *)((a4 + 0xB00))) * u0);
        u0 = (*(float *)((a4 + 0xAE8)));
        u2 = (-(u1 * 118.849998f));
    } else {
        u1 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
        u3 = (-u1);
        if (!(0.0f > u1)) {
            u3 = u1;
        }
        if (u3 > 27.4249992f) {
            u1 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u3 = 71.3049927f;
            u4 = (float)((u1 > 0.0f) - (0.0f > u1));
            u5 = u1;
        } else {
            u1 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u3 = 54.7951508f;
            u4 = (float)((u1 > 0.0f) - (0.0f > u1));
            u5 = u1;
        }
        t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
        u1 = nlRandom();
        u6 = (((-((float)t1 * 0.300000012f)) - (u1 * 0.100000001f)) + 1.0f);
        u7 = ((*(float *)((a4 + 0xB00))) * u6);
        u6 = (u1 * 0.100000001f);
        u0 = (u5 - (u4 * u3));
        u2 = (-(u7 * 118.849998f));
    }
    u1 = u6;
    u3 = u0;
    if (((*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) {
        t0 = 0x1;
        if (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) > 0.0f) {
        } else {
            t1 = 0x0;
            if (0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))))) {
                t1 = 0xFFFFFFFF;
            }
            t0 = t1;
        }
        u4 = *(float *)((a4 + 0xAE8));
        u5 = u6;
        u7 = u0;
        if (t0 == (((u4 - u0) > 0.0f) - (0.0f > (u4 - u0)))) {
            u4 = *(float *)((a4 + 0xAE8));
            u8 = *(float *)((a4 + 0xB9C));
            u9 = ((-u4) + u8);
            if (!(0.0f > (u4 - u8))) {
                u9 = (u4 - u8);
            }
            if (u9 > 54.8499985f) {
                u4 = *(float *)((a4 + 0xB9C));
                u8 = ((-u0) + u4);
                if (!(0.0f > (u0 - u4))) {
                    u8 = (u0 - u4);
                }
                u4 = u6;
                u9 = u0;
                if (54.8499985f > u8) {
                    u0 = *(float *)((a4 + 0xB9C));
                    u8 = *(float *)((a4 + 0xAE8));
                    u10 = u0;
                    u10 = u10 + 54.8499985f * (float)(((u8 - u0) > 0.0f) - (0.0f > (u8 - u0)));
                    u4 = 54.8499985f;
                    u9 = u10;
                }
                u0 = u4;
                u4 = u9;
            } else {
                u0 = u6;
                u4 = (*(float *)((a4 + 0xAE8)));
            }
            u5 = u0;
            u7 = u4;
        }
        u1 = u5;
        u3 = u7;
    }
    u0 = *(float *)0x8C06A6E8;
    u4 = (-u3);
    if (!(0.0f > u3)) {
        u4 = u3;
    }
    u5 = u3;
    if (u4 > u0) {
        u5 = ((float)((u3 > 0.0f) - (0.0f > u3)) * u0);
    }
    *(unsigned int *)((a4 + 0xA24)) = 0x0;
    *(float *)((a4 + 0xA34)) = u5;
    *(float *)((a4 + 0xA3C)) = u2;
    return u1;
}
