/* Straight-line functions with calls and guards (batch gen_xy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int BupRequestLoad(int, int, int, int);
int BupRequestSave(int, int, int, int);
int FUN_8c0a048c(int, int, int, int, float);
int FUN_8c0eaf00(int, int, int, float);
int abs(int);
int countryStagePut(Stk3, Stk1, float);
int cpuAimAngleRate(int, int, int, int, int);
int cpuDblAimRateA(int, int, float, float);
float cpuDblPathCross(int, int, int, int, Stk3, Stk3);
int cpuDblRecoverPosA(int, int, int);
float cpuEdgeX(int, Stk3, float);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuSglHitReady(int);
int cpuSglShotDefault(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotRange(int, int, int, int, int);
int cpuShotTargetSet(int, float, float);
int crowdCheerStop(void);
int entryFirstPortFlag(void);
int entryGetColorId(int);
int entryIsVersus(int, int, int, int);
int entrySetSlot(int, int, int, int);
int fadeScreenStart(int, int, int, int, int, int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int hudFont2DigitPut(int, Stk3, float);
int hudSignPut(int, Stk3, float);
int memmove(int, int, int);
int nlCloseEvent(int);
int nlInitEvent(void);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlSin(int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int panelDrawA(Stk3, float);
int panelLogoPut(Stk3, float);
int plPicLoad(int);
int resultTeamsDrawAlt(Stk3, float);
int selCursorPos(int, int, int, int, int);
int serveGetReceiver(void);
int serveGetServer(void);
int sprPutAtAlpha(int, Stk3, float);
int sprSet173Load(int);
int sprStartLoad(void);
int stageSegaQuadUVSet(int, float, float, float);
Stk3 vecMake(float, float, float);
float FUN_8c0751c6(int a4, int a5);
int FUN_8c05e53a(int a4, float f4);
float FUN_8c05ddec(int a4);
int FUN_8c044dbc(int a4, float f4);
int FUN_8c08873a(int a4, float f4);
float FUN_8c0ab450(void);
int FUN_8c0a082a(int a4, int a5, int a6, int a7, float f4);
int FUN_8c0303c0(int a4, int a5, int a6);
int FUN_8c08509a(int a4, int a5, int a6, int a7);

float FUN_8c0751c6(int a4, int a5)
{
    int stk[29];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register float u9;
    register float u12;
    register int t15;
    register float u16;
    register float u17;
    register float u18;
    register int t33;
    register int t46;
    register int t76;
    register int t66;
    register int t67;
    register int t68;
    register float u69;
    register float u82;
    register float u83;
    register float u86;
    register float u89;
    register int t93;
    register float u98;
    register float u103;
    register float u104;
    register float u105;
    register float u106;
    register float u107;
    register float u135;
    register float u122;
    register int t14;
    register int t56;
    register float u58;
    register float u59;
    register float u30;
    register float u31;
    register float u32;
    register int t38;
    register float u40;
    register float u41;
    register float u43;
    register float u44;
    register float u45;
    register int t51;
    register float u53;
    register float u54;
    register int t111;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    u5 = 1.0f;
    u5 = u5 + 0.100000001f * (nlRandom());
    if (!((u5 * 55.3499985f) > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        u135 = 0.100000001f;
    } else {
        u7 = *(float *)0x8C291F84;
        u9 = (-u7);
        if (!(0.0f > u7)) {
            u9 = (*(float *)0x8C291F84);
        }
        u12 = 1.0f;
        u12 = u12 + 0.200000003f * (nlRandom());
        if (!((u12 * 119.349998f) > u9)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            u122 = 0.200000003f;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
            cpuShotRange(a4, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10));
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t15 = 0x8C2FCC6C;
                for (;;) {
                    u16 = *(float *)((t15 + 0x8));
                    u17 = *(float *)((t15 + 0x0));
                    u18 = u16;
                    if (0.0f > u16) {
                        u18 = (-u16);
                    }
                    if ((unsigned char)(*(signed char *)((t15 + 0xC))) == 1) {
                        if ((u17 > (*(float *)(((int)stk + 60)))) && ((u30 = *(float *)(((int)stk + 48)), u30 > u17) && ((u31 = *(float *)(((int)stk + 68)), u18 > u31) && (u32 = *(float *)(((int)stk + 56)), u32 > u18)))) {
                            t38 = t14;
                            u40 = u17;
                            u41 = u18;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x4);
                            t33 = t14;
                            *(int *)((int)stk + 4) = t33;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), t33);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t56 = t38;
                        u58 = u40;
                        u59 = u41;
                    } else {
                        if ((u17 > (*(float *)(((int)stk + 36)))) && ((u43 = *(float *)(((int)stk + 24)), u43 > u17) && ((u44 = *(float *)(((int)stk + 44)), u18 > u44) && (u45 = *(float *)(((int)stk + 32)), u45 > u18)))) {
                            t51 = t14;
                            u53 = u17;
                            u54 = u18;
                        } else {
                            t14 = ((int)stk + 8);
                            t14 = (t14 + 0x4);
                            t46 = t14;
                            *(int *)((int)stk + 4) = t46;
                            cpuAimAngleRate((0xB9C + a4), t15, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), t46);
                            *(float *)((t15 + 0x0)) = (*(float *)(((int)stk + 12)));
                            *(float *)((t15 + 0x8)) = (*(float *)(((int)stk + 20)));
                        }
                        t56 = t51;
                        u58 = u53;
                        u59 = u54;
                    }
                    t14 = t56;
                    cpuDblAimRateA(a4, t15, u58, u59);
                    t14 = (*(int *)(((int)stk + 8)));
                    t15 = (t15 + 0x20);
                    t14 = (t14 + 0x1);
                    *(unsigned int *)(((int)stk + 8)) = t14;
                    if ((int)t14 >= (int)a5) {
                        break;
                    }
                }
            }
            t76 = 0x0;
            if ((int)a5 > 0) {
                t66 = 0x8C2FCC6C;
                t67 = 0x0;
                t68 = 0x0;
                u69 = -10000.0f;
                for (;;) {
                    if ((*(float *)((t66 + 0x1C))) > u69) {
                        u69 = (*(float *)((t66 + 0x1C)));
                        t68 = t67;
                    }
                    t67 = (t67 + 0x1);
                    t66 = (t66 + 0x20);
                    if ((int)t67 >= (int)a5) {
                        break;
                    }
                }
                t76 = t68;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u82 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u83 = (-u82);
            if (!(0.0f > u82)) {
                u83 = u82;
            }
            u86 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u89 = (-1.0f);
            u89 = u89 + (1.0f + 1.0f) * (u83 / (*(float *)0x8C07551C));
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u86) / (*(float *)0x8C287B40)), u89);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t76 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t93 = (int)((int)(nlRand()) % (int)0x3);
            u98 = (float)(t93 + 0x4);
            if ((*(int *)0x8C291F74) == 5) {
                u98 = ((float)(t93 + 0x4) + (*(float *)0x8C075530));
            }
            u103 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u104 = *(float *)0x8C075538;
            u105 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u106 = u98;
            u106 = u106 + u104 * (((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u103 / (*(float *)0x8C075534))) + 1.0f));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u105 - 29.0f);
            u107 = *(float *)0x8C075540;
            if (u107 > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = u107;
            }
            if ((u106 > (*(float *)0x8C291F54)) && (t111 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t111 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = (u106 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u122 = u104;
        }
        u135 = u122;
    }
    return u135;
}

int FUN_8c05e53a(int a4, float f4)
{
    int stk[18];
    register int t0;
    register int t1;
    register int t106;
    register int t92;
    register int t12;
    register int t13;
    register float u14;
    register float u15;
    register float u17;
    register float u19;
    register float u20;
    register float u22;
    register int t24;
    register float u26;
    register float u35;
    register float u36;
    register float u37;
    register float u39;
    register int t41;
    register int t42;
    register float t45;
    register float u48;
    register float u49;
    register float u77;
    register float u78;
    register float u81;
    register int t10;
    register float u53;
    register float u71;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t106 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t92 = 0xA24;
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if ((((*(int *)0x8C291F78) & 4) != 0) && (t10 = *(int *)((a4 + 0xB60)), (t10 & 0x100) == 0)) {
                cpuDblRecoverPosA(a4, ((int)stk + 28), (((int)stk + 28) + 0x4));
            } else {
                t12 = *(int *)((a4 + 0xB5C));
                *(unsigned int *)(((int)stk + 36)) = t12;
                t13 = *(int *)(((int)stk + 36));
                u14 = *(float *)((((((t12 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u15 = *(float *)((((((t12 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u17 = ((-u14) + u15);
                if (!(0.0f > (u14 - u15))) {
                    u17 = (u14 - u15);
                }
                u19 = *(float *)(((0x8C287D84 + (((t13 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
                u20 = *(float *)(((0x8C287D84 + (((t13 + 0x3) & 0x3) * 0xD78)) + 0xB9C));
                u22 = ((-u19) + u20);
                if (!(0.0f > (u19 - u20))) {
                    u22 = (u19 - u20);
                }
                t24 = ((((t12 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
                if (u17 > u22) {
                    t24 = (0x8C287D84 + (((t13 + 0x3) & 0x3) * 0xD78));
                }
                u26 = *(float *)((t24 + 0xB9C));
                if (((u26 > 0.0f) - (0.0f > u26)) == (-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))))) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x1;
                } else {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x2;
                }
                u35 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u36 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u37 = (-u35);
                if (!(0.0f > u35)) {
                    u37 = u35;
                }
                u39 = (-u36);
                if (!(0.0f > u36)) {
                    u39 = u36;
                }
                t41 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                t42 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                if (u39 > u37) {
                    t41 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    t42 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
                t45 = cpuDblPathCross((((*(int *)((t41 + 0xB5C))) * 0x160) + 0x8C2FC754), (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84), (0x8C287D84 + (((t13 + 0x3) & 0x3) * 0xD78)), 0xD78, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                u48 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u49 = ((*(float *)((a4 + 0xB00))) * u48);
                *(float *)(((int)stk + 32)) = (-(u49 * 118.849998f));
                if ((*(int *)0x8C2FCC60) == 2) {
                    if (!(0.0f > (-(u49 * 118.849998f)))) {
                        u53 = (*(float *)(((int)stk + 32)));
                    } else {
                        u53 = (-(*(float *)(((int)stk + 32))));
                    }
                    if (59.4249992f > u53) {
                        *(float *)(((int)stk + 32)) = (-((*(float *)((a4 + 0xB00))) * 59.4249992f));
                    }
                }
                if (10.0f > t45) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t41)); }
                    u71 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 32)))));
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t42)); }
                    u71 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 32)))));
                }
                *(float *)(((int)stk + 28)) = u71;
            }
            u77 = *(float *)(((int)stk + 28));
            u78 = u77;
            if (0.0f > u77) {
                u78 = (-u77);
            }
            if (u78 > 43.8800011f) {
                u81 = *(float *)(((int)stk + 28));
                *(float *)(((int)stk + 28)) = ((float)((u81 > 0.0f) - (0.0f > u81)) * 43.8800011f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = (*(float *)(((int)stk + 28)));
            *(float *)((a4 + 0xA3C)) = (*(float *)(((int)stk + 32)));
            t92 = 0xA3C;
        }
        t106 = t92;
    }
    return t106;
}

float FUN_8c05ddec(int a4)
{
    int stk[19];

    register int R1;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register float F0;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_3 = a4;
    v0_5 = (0xA24);
    v0_2 = (0x8C291F24);
    v0_0 = (v0_3);
    v0_1 = ((((*(int *)((v0_3 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    if (((*(int *)((v0_3 + 0xA24))) != 0)) goto L_8C05DE1E;
    L_8C05E0BC:;
    return F0;
    L_8C05DE1E:;
    v0_3 = *(int *)((v0_2 + 0x54));
    v0_5 = (v0_3);
    v0_4 = (0xD78);
    w0_0 = (0.400000006f);
    w0_1 = (118.849998f);
    if (((v0_3 & 4) == 0)) goto L_8C05DEA4;
    w0_2 = *(float *)((v0_2 + 0x58));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C05DE3E;
    w0_2 = (w0_3);
    L_8C05DE42:;
    v0_5 = (0x8C05DF04);
    if ((!(w0_2 > 28.8050003f))) goto L_8C05DEA4;
    *(float *)((v0_1 + 0x0)) = 0.0f;
    v0_2 = (*(int *)(((0xB5C + v0_0) + 0x0))) != (serveGetServer());
    if (v0_2) goto L_8C05DE6E;
    w0_3 = (((float)(*(signed char *)((v0_1 + 0x13D))) * 10.9700003f));
    L_8C05DE84:;
    w0_0 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_0)) + 1.10000002f);
    w0_0 = ((*(float *)((v0_0 + 0xB00))) * w0_0);
    w0_6 = ((w0_0 * w0_1));
    w0_4 = ((-(w0_0 * w0_1)));
    L_8C05E0A6:;
    *(unsigned int *)((v0_0 + 0xA24)) = 0x0;
    *(unsigned char *)((v0_1 + 0xB1)) = 0x0;
    *(unsigned char *)((v0_1 + 0xB0)) = 0x0;
    *(float *)((v0_0 + 0xA34)) = w0_3;
    *(float *)((v0_0 + 0xA3C)) = w0_4;
    v0_5 = (0xA3C);
    goto L_8C05E0BC;
    L_8C05DE6E:;
    w0_2 = *(float *)((0x8C288920 + ((serveGetReceiver()) * v0_4)));
    w0_3 = ((w0_2 * 0.800000012f));
    goto L_8C05DE84;
    L_8C05DEA4:;
    if ((!((*(float *)((v0_1 + 0x0))) > 0.0f))) goto L_8C05DEB0;
    goto L_8C05E0BC;
    L_8C05DEB0:;
    v0_5 = *(int *)((v0_0 + 0xB5C));
    w0_2 = *(float *)((((((v0_5 + 0x1) & 0x3) * v0_4) + 0x8C287D84) + 0xAE8));
    w0_4 = *(float *)((((((v0_5 + 0x1) & 0x3) * v0_4) + 0x8C287D84) + 0xB9C));
    v0_3 = (((((v0_5 + 0x1) & 0x3) * v0_4) + 0x8C287D84));
    v0_4 = ((0x8C287D84 + (((v0_5 + 0x3) & 0x3) * v0_4)));
    w0_3 = (w0_4);
    w0_5 = (w0_2);
    w0_6 = ((w0_2 - w0_4));
    if ((0.0f > (w0_2 - w0_4))) goto L_8C05DF24;
    w0_2 = (w0_6);
    L_8C05DF2C:;
    w0_3 = *(float *)((v0_4 + 0xAE8));
    w0_4 = *(float *)((v0_4 + 0xB9C));
    v0_5 = (0xB9C);
    w0_5 = ((w0_3 - w0_4));
    w0_6 = (w0_3);
    w0_7 = (w0_4);
    if ((0.0f > (w0_3 - w0_4))) goto L_8C05DF42;
    w0_3 = (w0_5);
    L_8C05DF4A:;
    if ((!(w0_2 > w0_3))) goto L_8C05DF50;
    v0_3 = (v0_4);
    L_8C05DF50:;
    w0_4 = *(float *)((v0_3 + v0_5));
    w0_2 = (0.0f);
    w0_3 = (w0_4);
    if ((!(w0_4 > 0.0f))) goto L_8C05DF5C;
    v0_3 = (0x1);
    L_8C05DF66:;
    if ((v0_3 != (-(*(signed char *)((v0_1 + 0x13D)))))) goto L_8C05DF78;
    *(unsigned char *)((v0_1 + 0x12B)) = 0x1;
    L_8C05DF7E:;
    w0_2 = *(float *)((v0_0 + 0xB00));
    w0_3 = (((-((float)(*(signed char *)((v0_1 + 0x12B))) * 0.300000012f)) - ((nlRandom()) * 0.100000001f)) + 1.0f);
    w0_2 = (w0_2 * w0_3);
    w0_4 = ((-(w0_2 * w0_1)));
    if ((0.0f > (-(w0_2 * w0_1)))) goto L_8C05DFB6;
    w0_6 = (w0_4);
    L_8C05DFBA:;
    if ((!(59.4249992f > w0_6))) goto L_8C05E010;
    *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((v0_2 + 0x58))) - ((float)(*(signed char *)((v0_1 + 0x13D))) * 54.8499985f));
    w0_0 = (*(float *)((v0_2 + 0x60)));
    w0_0 = w0_0 + w0_1 * (*(float *)((v0_0 + 0xB00)));
    *(float *)((((int)stk + 28) + 0x8)) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_2 + 0x58)); }
    w0_0 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), w0_4);
    F0 = (w0_0);
    w0_3 = (w0_0);
    L_8C05E074:;
    w0_5 = ((*(float *)0x8C05E170));
    if ((0.0f > w0_3)) goto L_8C05E082;
    w0_2 = (w0_3);
    L_8C05E086:;
    if ((!(w0_2 > w0_5))) goto L_8C05E0A6;
    w0_2 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_8C05E094;
    v0_2 = (0x1);
    L_8C05E09E:;
    w0_3 = (((float)v0_2 * w0_5));
    goto L_8C05E0A6;
    L_8C05E094:;
    if ((!(w0_2 > w0_3))) goto L_8C05E09C;
    v0_2 = (0xFFFFFFFF);
    goto L_8C05E09E;
    L_8C05E09C:;
    v0_2 = (0x0);
    goto L_8C05E09E;
    L_8C05E082:;
    w0_2 = ((-w0_3));
    goto L_8C05E086;
    L_8C05E010:;
    w0_1 = *(float *)((v0_2 + 0x58));
    w0_6 = (0.0f);
    w0_3 = ((float)(*(signed char *)((v0_1 + 0x13D))));
    w0_5 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C05E04C;
    v0_2 = (0x1);
    L_8C05E056:;
    w0_2 = ((float)v0_2);
    if ((0.0f > w0_5)) goto L_8C05E064;
    w0_6 = (w0_5);
    L_8C05E068:;
    w0_1 = *(float *)0x8C05E16C;
    w0_2 = (w0_2 * w0_6);
    w0_0 = (w0_2 * w0_0);
    w0_0 = w0_0 + w0_1 * w0_3;
    F0 = (w0_1);
    w0_3 = (w0_0);
    goto L_8C05E074;
    L_8C05E064:;
    w0_6 = ((-w0_5));
    goto L_8C05E068;
    L_8C05E04C:;
    if ((!(w0_6 > w0_5))) goto L_8C05E054;
    v0_2 = (0xFFFFFFFF);
    goto L_8C05E056;
    L_8C05E054:;
    v0_2 = (0x0);
    goto L_8C05E056;
    L_8C05DFB6:;
    w0_6 = ((-w0_4));
    goto L_8C05DFBA;
    L_8C05DF78:;
    *(unsigned char *)((v0_1 + 0x12B)) = 0x2;
    goto L_8C05DF7E;
    L_8C05DF5C:;
    if ((!(w0_2 > w0_3))) goto L_8C05DF64;
    v0_3 = (0xFFFFFFFF);
    goto L_8C05DF66;
    L_8C05DF64:;
    v0_3 = (0x0);
    goto L_8C05DF66;
    L_8C05DF42:;
    w0_3 = (((-w0_6) + w0_7));
    goto L_8C05DF4A;
    L_8C05DF24:;
    w0_2 = (((-w0_5) + w0_3));
    goto L_8C05DF2C;
    L_8C05DE3E:;
    w0_2 = ((-w0_3));
    goto L_8C05DE42;
}

int FUN_8c044dbc(int a4, float f4)
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
    if ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4))) != 0.0f) {
        cpuSglHitReady(a4);
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
        t2 = 0x20;
    } else {
        if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
            u0 = *(float *)((a4 + 0xAE8));
            u1 = *(float *)((a4 + 0xB9C));
            u2 = ((*(float *)((a4 + 0xB00))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u2 * 32.0f)) + 96.0f);
            u0 = *(float *)((a4 + 0xB98));
            u1 = *(float *)((a4 + 0xA2C));
            u2 = *(float *)((a4 + 0xB00));
            t3 = 0xB00;
            if ((((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))) == ((u2 > 0.0f) - (0.0f > u2))) {
                if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                    u0 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                } else {
                    u0 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                }
                t4 = 0x8C0450A8;
                if (10.0f > u0) {
                    u0 = *(float *)(((0xB98 + a4) + 0x0));
                    u1 = *(float *)(((0xA2C + a4) + 0x0));
                    u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
                    *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
                    t4 = 0x20;
                }
                t3 = t4;
            }
            t4 = t3;
        } else {
            if (((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A))) != 0) && (t0 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t0 < (int)0xA)) {
                t0 = *(int *)((a4 + 0xB5C));
                u0 = *(float *)(((0x8C2FC69C + ((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160)) + 0x30));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                if (u1 > 0.100000001f) {
                    if ((float)((u0 > 0.0f) - (0.0f > u0)) == (*(float *)((a4 + 0xB00)))) {
                        u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1 = (-u0);
                        if (!(0.0f > u0)) {
                            u1 = u0;
                        }
                        if (45.1629982f > u1) {
                            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                        }
                    }
                } else {
                    u0 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    if (45.1629982f > u1) {
                        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                    }
                }
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x0;
            }
            cpuSglShotDefault(a4);
            if ((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x24))) == 0) {
                t0 = cpuShotAimCheck(a4);
                *(unsigned char *)(((0x24 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = t0;
                if ((unsigned char)t0 != 0) {
                    *(unsigned short *)(((0x20 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
                } else {
                    *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                }
            } else {
                *(unsigned short *)(((0x20 + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
            }
            u0 = *(float *)(((0xB98 + a4) + 0x0));
            u1 = *(float *)(((0xA2C + a4) + 0x0));
            u2 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u1 - u0) > 0.0f) - (0.0f > (u1 - u0))));
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u2 * 8.0f)) + 24.0f));
            t0 = 0x8;
            if (!((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8))) > 0.0f)) {
            } else {
                u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8));
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = (u0 - 1.0f);
                *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                t0 = 0x20;
            }
            t4 = t0;
        }
        t2 = t4;
    }
    return t2;
}

int FUN_8c08873a(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((int)(*(int *)((a4 + 0x28))) < (int)0xF0) {
        *(unsigned int *)((a4 + 0x24)) = 0x1;
    } else {
        *(unsigned int *)((a4 + 0x24)) = 0x0;
    }
    if ((*(int *)0x8C287C60) == 0) {
        u0 = 0.850000024f;
        u0 = u0 + 0.100000001f * (float)(0x1 & (*(int *)0x8C20D19C));
        *(float *)((a4 + 0x14)) = u0;
    } else {
        *(float *)((a4 + 0x14)) = 0.950000048f;
    }
    if ((*(int *)((a4 + 0x24))) == 1) {
        t2 = *(int *)((a4 + 0x28));
        if (((int)t2 > (int)0x14) && (((int)t2 < (int)0x46) && (t0 = *(int *)0x8C287C60, t0 == 0))) {
            *(float *)((a4 + 0x1C)) = ((*(float *)((a4 + 0x1C))) - (1.0f + 1.0f));
            if (!((*(float *)((a4 + 0x1C))) > 6.0f)) {
                *(float *)((a4 + 0x1C)) = 6.0f;
            }
        }
    } else {
        if ((*(int *)0x8C287C60) == 0) {
            t0 = (int)((int)(*(int *)0x8C20D19C) % (int)0x258);
            *(unsigned int *)((a4 + 0x2C)) = t0;
            if ((int)t0 < (int)0x50) {
                *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x2C))) << 1);
            } else {
                if (((int)(*(int *)((a4 + 0x2C))) >= (int)0x12C) && (t1 = *(int *)((a4 + 0x2C)), (int)t1 < (int)0x17C)) {
                    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) - 2);
                }
            }
            if ((int)(*(int *)((a4 + 0x30))) < (int)0xFFFFFFFE) {
                *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFE;
            }
            *(unsigned short *)((a4 + 0x34)) = ((*(short *)((a4 + 0x34))) + 0x28);
        }
    }
    if ((*(int *)((a4 + 0x24))) == 1) {
        t0 = 0xC8ED360;
        u0 = ((*(float *)((a4 + 0x18))) / 255.0f);
        u1 = ((*(float *)((a4 + 0x1C))) / 255.0f);
        u2 = ((*(float *)((a4 + 0x20))) / 128.0f);
    } else {
        t1 = *(int *)((a4 + 0x30));
        u3 = nlSin((unsigned short)(*(short *)((a4 + 0x34))));
        t0 = 0xC8ED268;
        u0 = ((float)(abs((int)(u3 * 200.0f))) / 512.0f);
        u1 = ((float)t1 / 512.0f);
        u2 = 0.96875f;
    }
    stageSegaQuadUVSet(t0, u0, u1, u2);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 15.3699999f, -23.3000011f);
    nlRotateAX(0x5B0);
    nlObjPutTrnsl((*(int *)((0x8C181794 + ((*(int *)((a4 + 0x24))) << 2)))), (*(float *)((a4 + 0x14))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    u0 = -0.0500000007f;
    if ((*(int *)0x8C301BF4) != 0) {
        u0 = 0.0500000007f;
    }
    nlTranslate((*(float *)0x8C088A70), 15.3699999f, u0);
    nlRotateAZ(0xFFFFFD28);
    nlRotateAY(0x4000);
    nlRotateAX(0x2D8);
    nlObjPutTrnsl((*(int *)((0x8C181794 + ((*(int *)((a4 + 0x24))) << 2)))), (*(float *)((a4 + 0x14))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 15.3699999f, (*(float *)0x8C088A80));
    nlRotateAY(0x8000);
    nlRotateAX(0x5B0);
    nlObjPutTrnsl((*(int *)((0x8C181794 + ((*(int *)((a4 + 0x24))) << 2)))), (*(float *)((a4 + 0x14))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    u0 = *(float *)0x8C088A88;
    if ((*(int *)0x8C301BFC) != 0) {
        nlTranslate(u0, 15.3699999f, -0.0500000007f);
    }
    nlTranslate(u0, 15.3699999f, 0.0500000007f);
    nlRotateAZ(0x2D8);
    nlRotateAY(0xFFFFC000);
    nlRotateAX(0x2D8);
    nlObjPutTrnsl((*(int *)((0x8C181794 + ((*(int *)((a4 + 0x24))) << 2)))), (*(float *)((a4 + 0x14))));
    t0 = nlPopMatrix(0x1);
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x28)) = ((*(int *)((a4 + 0x28))) + 0x1);
    }
    return t0;
}

float FUN_8c0ab450(void)
{
    int stk[14];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register float u32;
    register float u33;
    register float u34;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t51;
    register int t61;
    register float u65;
    register float u71;
    register float u76;
    register float u77;
    register int t7;
    register int t9;
    register float u14;
    register int t36;
    register int t38;
    register int t50;
    register int t54;
    register int t57;
    register int t58;
    register int t59;
    register int t60;

    nlInitEvent();
    *(unsigned int *)0x8C34386C = 0x0;
    t1 = *(signed char *)0x8C40C2F7;
    *(unsigned int *)0x8C343DD8 = (unsigned char)t1;
    *(unsigned int *)0x8C343DCC = (unsigned char)t1;
    t2 = *(signed char *)0x8C40C2F9;
    *(unsigned int *)0x8C343DDC = (unsigned char)t2;
    *(unsigned int *)0x8C343DD0 = (unsigned char)t2;
    t3 = *(signed char *)0x8C40C2F5;
    *(unsigned int *)0x8C343DE0 = (unsigned char)t3;
    *(unsigned int *)0x8C343DD4 = (unsigned char)t3;
    t4 = 0x8C40C2F4;
    t6 = 0x8C343DE4;
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C40C2F4 + 296)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    *(unsigned int *)0x8C30196C = 0x0;
    *(unsigned int *)0x8C343D94 = 0x0;
    if (((*(int *)0x8C343850) == 4) && (t9 = *(int *)0x8C287D5C, t9 != 0)) {
        *(unsigned int *)0x8C18549C = 0x0;
        *(float *)0x8C18D2D0 = 210.0f;
        *(float *)0x8C1855E8 = 180.0f;
        *(unsigned int *)0x8C343D5C = 0x14;
        *(unsigned int *)0x8C1855E4 = 0xA;
    } else {
        *(unsigned int *)0x8C18549C = 0x0;
        *(float *)0x8C18D2D0 = 0.0f;
        *(unsigned int *)0x8C343D5C = 0x0;
        *(unsigned int *)0x8C1855E4 = 0x0;
        *(float *)0x8C1855E8 = 0.0f;
        u14 = 0.0f;
    }
    FUN_8c0eaf00(0x0, 0x0, 0x0, u14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C343DB4) = *(struct mv3 *)(0x8C110DDC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C343DC0) = *(struct mv3 *)(0x8C110DE8); }
    if ((*(int *)0x8C343844) == 2) {
        fileLoadStart(0x8CA80000, 0x8C110DF4, 0x0);
        for (;;) {
            if ((*(int *)0x8C34A1F0) == 1) {
                break;
            }
            fileLoadPoll();
            frameHookNop();
            nlWaitVSync();
        }
        sprStartLoad();
    }
    fadeScreenStart(0x2, 0x1, 0xA, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
    u32 = *(float *)0x8C0AB824;
    u33 = *(float *)0x8C0AB828;
    u34 = *(float *)0x8C0AB82C;
    *(int *)((int)stk + 8) = 0x8C343D98;
    *(Stk3 *)(0x8C343D98) = vecMake(u32, u33, u34);
    *(int *)((int)stk + 4) = 0x8C343DA4;
    *(Stk3 *)(0x8C343DA4) = vecMake(u32, u33, u34);
    if (((*(int *)0x8C287D5C) == 1) && (t36 = *(int *)0x8C287ADC, t36 == 2)) {
        *(unsigned int *)0x8C343AE4 = 0x5;
        *(unsigned int *)0x8C343AE0 = 0x5;
        t38 = 0x8C287ADC;
    }
    t41 = 0x8C185438;
    for (;;) {
        *(unsigned int *)((t41 + 0x0)) = 0xFFFFFFFF;
        t41 = (t41 + 0x4);
        if ((unsigned int)t41 >= (unsigned int)0x8C185448) {
            break;
        }
    }
    t42 = t38;
    t43 = t41;
    t44 = 0xFFFFFFFF;
    t45 = 0x8C185448;
    t46 = 0x8C185438;
    t47 = 0x0;
    for (;;) {
        if ((((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((((t47 << 1) + 0x8C185298) + 0x0)))) != 0) && (t43 = t47, t43 = (t43 << 2), t43 = (t43 + 0x8C185428), t50 = *(int *)((t43 + 0x0)), (int)t50 >= 0)) {
            t51 = *(int *)((t43 + 0x0));
            t42 = t47;
            t42 = (t42 << 1);
            t43 = t47;
            *(unsigned int *)((0x8C185438 + (t51 << 2))) = t47;
            t42 = (t42 + t47);
            t42 = (t42 << 2);
            *(int *)((int)stk + 8) = (0x8C343B1C + t42);
            selCursorPos(t43, t44, t45, t46, (0x8C343B1C + t42));
        } else {
            t54 = t42;
            t57 = t43;
            t58 = t44;
            t59 = t45;
            t60 = t46;
        }
        t42 = t54;
        t47 = (t47 + 0x1);
        t43 = t57;
        t44 = t58;
        t45 = t59;
        t46 = t60;
        if ((int)t47 >= (int)0x4) {
            break;
        }
    }
    t61 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t61 + 0x8C343D64)) = *(struct mv3 *)((t61 + 0x8C185458)); }
        t61 = (t61 + 0xC);
        if ((unsigned int)t61 >= (unsigned int)0x30) {
            break;
        }
    }
    u65 = *(float *)0x8C0AB86C;
    *(float *)0x8C343D64 = ((*(float *)0x8C185458) + u65);
    *(float *)0x8C343D68 = ((*(float *)0x8C18545C) + (*(float *)0x8C0AB870));
    *(float *)0x8C343D7C = ((*(float *)0x8C185470) + u65);
    *(float *)0x8C343D80 = ((*(float *)0x8C185474) + (*(float *)0x8C0AB874));
    u71 = *(float *)0x8C0AB878;
    *(float *)0x8C343D70 = ((*(float *)0x8C185464) + u71);
    *(float *)0x8C343D74 = ((*(float *)0x8C185468) + (*(float *)0x8C0AB87C));
    *(float *)0x8C343D88 = ((*(float *)0x8C18547C) + u71);
    u76 = *(float *)0x8C0AB880;
    u77 = *(float *)0x8C185480;
    *(float *)0x8C343D8C = (u77 + u76);
    *(unsigned int *)0x8C343D58 = 0x0;
    *(unsigned int *)0x8C343D5C = 0x0;
    *(unsigned int *)0x8C343D60 = 0x0;
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return (u77 + u76);
}

int FUN_8c0a082a(int a4, int a5, int a6, int a7, float f4)
{
    int stk[41];
    register int t3;
    register int t4;
    register int t17;
    register int t18;
    register int t19;
    register float u20;
    register float u21;
    register float u22;
    register float u24;
    register float u25;
    register float u26;
    register int t27;
    register float u29;
    register float u30;
    register float u31;
    register float u34;
    register float u35;
    register float u36;
    register float u38;
    register float u39;
    register float u40;
    register float u47;
    register float u48;
    register float u49;
    register float u51;
    register float u52;
    register float u53;
    register float u55;
    register float u56;
    register float u57;
    register int t59;

    if ((*(int *)0x8C185410) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) != 1) {
            t3 = entryIsVersus(a4, a5, a6, a7);
            if (t3 == 0) {
                t4 = entryFirstPortFlag();
                if (t4 != 0) {
                    *(unsigned int *)0x8C3417C4 = 0x5;
                } else {
                    *(unsigned int *)0x8C3417C4 = a4;
                }
            } else {
                *(unsigned int *)0x8C3417C4 = 0x5;
            }
        } else {
            *(unsigned int *)0x8C3417C4 = 0x5;
        }
        t17 = 0x0;
        for (;;) {
            t18 = entryGetColorId(t17);
            t19 = ((t17 << 2) + 0x8C3417C8);
            t17 = (t17 + 0x1);
            *(unsigned int *)((t19 + 0x0)) = t18;
            if ((int)t17 >= (int)0x4) {
                break;
            }
        }
        *(int *)((int)stk + 76) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(80.0f, 120.0f, 0.5f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0xC)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        *(int *)((int)stk + 72) = (((int)stk + 76) + 0x4);
        *(Stk3 *)((((int)stk + 76) + 0x4)) = vecMake(37.0f, 95.0f, 0.5f);
        u20 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u21 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u22 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 68) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(u20, u22, (u21 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        resultTeamsDrawAlt(*(Stk3 *)(((int)stk + 56)), f4);
        u24 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u25 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u26 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 52) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u24 + 73.0f), (u26 + 226.0f), (u25 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        t27 = *(int *)(((a4 << 2) + 0x8C1106B4));
        sprPutAtAlpha((((((t27 << 2) + t27) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 40)), f4);
        u29 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u30 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u31 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 36) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u29 + 109.0f), (u31 + 218.0f), (u30 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        hudFont2DigitPut((*(int *)0x8C1891E8), *(Stk3 *)(((int)stk + 24)), f4);
        u34 = *(float *)(((((int)stk + 80) + 0xC) + 0x0));
        u35 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u36 = *(float *)(((((int)stk + 80) + 0xC) + 0x4));
        *(int *)((int)stk + 20) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u34 + 279.0f), (u36 + 202.0f), (u35 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        countryStagePut(*(Stk3 *)(((int)stk + 8)), *(Stk1 *)((int)stk + 8 + 12), f4);
        u38 = *(float *)(((((int)stk + 80) + 0xC) + 0x8));
        u39 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        u40 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        *(int *)((int)stk + 4) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u40 + 41.0f), (u39 + (1.0f + 1.0f)), (u38 + -0.100000001f));
        if ((*(int *)0x8C287D5C) != 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
            hudSignPut((*(int *)0x8C3417C4), *(Stk3 *)(((int)stk + 68)), f4);
        }
        u47 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u48 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        u49 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        *(int *)((int)stk + 76) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u49 + 401.0f), (u48 + (1.0f + 1.0f)), (u47 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        panelLogoPut(*(Stk3 *)(((int)stk + 64)), f4);
        u51 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u52 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u53 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 60) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake(u51, u53, u52);
        *(float *)(((((int)stk + 80) + 0x18) + 0x8)) = 10.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        panelDrawA(*(Stk3 *)(((int)stk + 48)), ((f4 * 178.0f) / 256.0f));
        u55 = *(float *)(((((int)stk + 76) + 0x4) + 0x0));
        u56 = *(float *)(((((int)stk + 76) + 0x4) + 0x8));
        u57 = *(float *)(((((int)stk + 76) + 0x4) + 0x4));
        *(int *)((int)stk + 44) = (((int)stk + 80) + 0x18);
        *(Stk3 *)((((int)stk + 80) + 0x18)) = vecMake((u55 + 249.0f), (u57 + 53.0f), (u56 + -0.100000001f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 80) + 0x18)); }
        t59 = (sprPutAtAlpha(0x8C33FEF0, *(Stk3 *)(((int)stk + 32)), f4));
    }
    return t59;
}

int FUN_8c0303c0(int a4, int a5, int a6)
{
    register int t6;
    register int t7;
    register int t20;
    register int t24;
    register int t25;
    register int t38;
    register int t42;
    register int t43;
    register int t46;
    register int t48;
    register int t49;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t60;
    register int t71;
    register int t72;
    register int t73;
    register int t74;
    register int t75;
    register int t80;
    int t0;
    register int t1;
    register int t14;
    register int t15;
    register int t32;
    register int t33;

    for (;;) {
        if ((*(int *)0x8C421F6C) == 0) {
            t1 = 0x8C159B58;
            t0 = (*(int *)((t1 + 0x0)));
            if (t0 == 0) {
                BupRequestLoad(0x0, 0x8C108280, 0x8C40C2F4, 0x128);
                t0 = 0x1;
                *(unsigned int *)((t1 + 0x0)) = t0;
                t0 = (*(signed char *)0x8C2FBC7C);
                t0 = (unsigned char)t0;
                *(unsigned int *)0x8C2889DC = t0;
                t1 = 0x0;
                t6 = 0xC58;
                t7 = 0x8C287D84;
                for (;;) {
                    if ((int)t1 >= (int)0x4) {
                        break;
                    }
                    t6 = 0x8C185298;
                    t7 = t1;
                    t7 = (t7 << 1);
                    t0 = (*(short *)((t7 + t6)));
                    t6 = (*(short *)0x8C343262);
                    t0 = (unsigned short)t0;
                    t6 = (unsigned short)t6;
                    if ((t6 & t0) != 0) {
                        t6 = 0x24;
                        t7 = 0x8C0B0234;
                        t6 = (entrySetSlot(0x0, (unsigned char)(*(signed char *)((0x8C2FBC58 + t6))), 0x0, t1));
                    } else {
                        t14 = t0;
                        t15 = t7;
                    }
                    t1 = (t1 + 0x1);
                    t0 = t14;
                    t7 = t15;
                }
                t0 = 0x8C2FBE1C;
                *(unsigned int *)((t0 + 0x0)) = (unsigned char)(*(signed char *)0x8C2FBC7E);
                memmove(0x8C422048, 0x8C40C308, 0xC);
                t0 = 0x8C2FBE24;
                *(unsigned int *)((t0 + 0x0)) = 0x0;
                *(unsigned int *)0x8C2FBE68 = 0x0;
                t20 = *(int *)0x8C40C634;
                if (t20 != 2) {
                    *(unsigned int *)0x8C20D150 = 0x4;
                    return t20;
                }
                return t20;
            }
            *(unsigned int *)((t1 + 0x0)) = 0x0;
            t0 = (*(int *)0x8C41BA10);
            if (t0 != 0) {
                t0 = 0x1;
                *(unsigned int *)0x8C421F6C = t0;
                continue;
            }
            t0 = 0x8C0F7EEC;
            memmove(0x8C2FBC58, 0x8C40C3DC, 0x40);
            t0 = (*(signed char *)0x8C2FBC7C);
            t0 = (unsigned char)t0;
            *(unsigned int *)0x8C2889DC = t0;
            t1 = 0x0;
            t24 = 0xC58;
            t25 = 0x8C287D84;
            for (;;) {
                if ((int)t1 >= (int)0x4) {
                    break;
                }
                t24 = 0x8C185298;
                t25 = t1;
                t25 = (t25 << 1);
                t0 = (*(short *)((t25 + t24)));
                t24 = (*(short *)0x8C343262);
                t0 = (unsigned short)t0;
                t24 = (unsigned short)t24;
                if ((t24 & t0) != 0) {
                    t24 = 0x24;
                    t24 = (entrySetSlot(0x0, (unsigned char)(*(signed char *)((0x8C2FBC58 + t24))), 0x0, t1));
                } else {
                    t32 = t0;
                    t33 = t25;
                }
                t1 = (t1 + 0x1);
                t0 = t32;
                t25 = t33;
            }
            t0 = 0x8C2FBE1C;
            *(unsigned int *)((t0 + 0x0)) = (unsigned char)(*(signed char *)0x8C2FBC7E);
            memmove(0x8C422048, 0x8C40C308, 0xC);
            t0 = 0x8C2FBE24;
            *(unsigned int *)((t0 + 0x0)) = 0x0;
            *(unsigned int *)0x8C2FBE68 = 0x0;
            t38 = *(int *)0x8C40C634;
            if (t38 != 2) {
                *(unsigned int *)0x8C20D150 = 0x4;
                return t38;
            }
            return t38;
        }
        break;
    }
    *(unsigned char *)0x8C2FBC7C = (*(int *)0x8C343264);
    *(unsigned char *)0x8C2FBC7D = 0xFF;
    *(unsigned int *)0x8C2FBC58 = 0x3E8;
    *(unsigned char *)0x8C2FBC7F = 0x0;
    *(unsigned char *)0x8C2FBC80 = 0x0;
    *(float *)0x8C2FBC74 = (*(float *)0x8C1081D8);
    *(unsigned char *)0x8C2FBC81 = 0x0;
    *(float *)0x8C2FBC78 = (*(float *)0x8C108214);
    *(unsigned char *)0x8C2FBC83 = 0xFFFFFFFF;
    *(unsigned char *)0x8C2FBC82 = 0x0;
    t42 = 0x8C108214;
    t43 = 0x0;
    for (;;) {
        if ((int)t43 >= (int)0x5) {
            break;
        }
        t42 = 0x8C2FBC58;
        t42 = (t42 + 0x2C);
        t42 = (t42 + t43);
        t43 = (t43 + 0x1);
        *(unsigned char *)((t42 + 0x0)) = 0xFFFFFFFF;
    }
    *(unsigned char *)0x8C2FBC89 = 0x0;
    *(unsigned int *)0x8C2FBC50 = (*(int *)((((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) << 1) + 0x8C10813C) + 0x0)));
    t46 = *(signed char *)0x8C2FBC7C;
    *(unsigned int *)0x8C2FBC54 = (*(int *)(((0x8C10813C + (((unsigned char)t46 << 2) << 1)) + 0x4)));
    *(unsigned int *)0x8C2FBC5C = 0x0;
    *(unsigned int *)0x8C2FBC60 = 0x0;
    *(unsigned int *)0x8C2FBC64 = 0x0;
    *(unsigned int *)0x8C2FBC68 = 0x0;
    *(unsigned int *)0x8C2FBC6C = 0x0;
    *(unsigned int *)0x8C2FBC70 = 0x0;
    t48 = 0x24;
    t49 = 0x0;
    t50 = 0x0;
    t51 = (0x8C10813C + (((unsigned char)t46 << 2) << 1));
    t52 = 0x0;
    t53 = a6;
    for (;;) {
        if ((unsigned int)t52 >= (unsigned int)0x10) {
            break;
        }
        t48 = 0x24;
        t48 = (*(signed char *)((0x8C2FBC58 + t48)));
        t48 = (unsigned char)t48;
        t50 = t48;
        t48 = (t48 << 2);
        t48 = (t48 + t50);
        t48 = (t48 << 2);
        t48 = (t48 + 0x8C10804C);
        t51 = (*(int *)((t52 + t48)));
        t53 = t51;
        if ((int)t51 < (int)0x20) {
            t50 = 0x1;
            t50 = ((int)t50 << (int)t51);
            t50 = (t50 | (*(int *)0x8C2FBC5C));
            *(unsigned int *)0x8C2FBC5C = t50;
        } else {
            t50 = t51;
            t50 = (t50 - 32);
            t49 = 0x8C2FBC60;
            t60 = ((int)0x1 << (int)t50);
            t50 = (*(int *)((t49 + 0x0)));
            t48 = t49;
            *(unsigned int *)((t48 + 0x0)) = (t60 | t50);
        }
        t49 = 0x8C2FBC50;
        t53 = (t53 << 2);
        t50 = t51;
        t53 = (t53 + t50);
        t53 = (t53 << 2);
        t53 = (t53 << 1);
        t53 = (t53 + (*(int *)((t49 + 0x0))));
        t48 = (*(int *)((t53 + 0x0)));
        t52 = (t52 + 0x4);
        if (t48 == 2) {
            t48 = 0x31;
            t50 = (*(int *)((t53 + 0x4)));
            t48 = (*(signed char *)((0x8C2FBC58 + t48)));
            *(unsigned char *)(((0x8C2FBC84 + t50) + 0x0)) = t48;
            t48 = 0x31;
            t50 = (*(signed char *)((0x8C2FBC58 + t48)));
            t50 = (t50 + 0x1);
            *(unsigned char *)((0x8C2FBC58 + t48)) = t50;
        }
    }
    t71 = *(signed char *)0x8C2FBC7C;
    t72 = *(int *)(((0x8C10804C + ((((unsigned char)t71 << 2) + (unsigned char)t71) << 2)) + 0x10));
    *(unsigned int *)0x8C2FBE1C = t72;
    *(unsigned char *)0x8C2FBC7E = t72;
    t73 = 0x26;
    t74 = 0x8C2FBE1C;
    t75 = 0x0;
    for (;;) {
        if ((unsigned int)t75 >= (unsigned int)0xC) {
            break;
        }
        t74 = 0x8C40C2F4;
        t74 = (t74 + 0x14);
        t74 = (t74 + t75);
        t73 = t75;
        t74 = (*(int *)((t74 + 0x0)));
        t75 = (t75 + 0x4);
        *(unsigned int *)((0x8C422048 + t73)) = t74;
    }
    memmove(0x8C40C3DC, 0x8C2FBC58, 0x40);
    BupRequestSave(0x0, 0x8C108280, 0x8C40C2F4, 0x128);
    *(unsigned int *)0x8C2889DC = (unsigned char)(*(signed char *)0x8C2FBC7C);
    *(unsigned int *)0x8C2FBE24 = 0xFFFFFFFF;
    *(unsigned int *)0x8C2FBE68 = 0x0;
    t80 = *(int *)0x8C40C634;
    if (t80 != 2) {
        *(unsigned int *)0x8C20D150 = 0x4;
    }
    return t80;
}

int FUN_8c08509a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t22;
    register int t23;
    register int t24;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t32;
    register int t33;
    register int t49;
    register int t50;
    register int t68;
    register int t69;
    register int t84;
    register int t85;
    register int t101;
    register int t102;
    register int t117;
    register int t118;
    register int t145;
    register float u147;
    register int t168;
    register int t172;
    register float u182;
    register int t1;
    register int t2;
    register int t13;
    register int t14;
    register int t15;
    register int t139;
    register int t140;
    register int t141;
    register int t31;
    register int t44;
    register int t45;
    register int t46;
    register int t48;
    register int t62;
    register int t63;
    register int t64;
    register int t67;
    register int t79;
    register int t80;
    register int t81;
    register int t83;
    register int t96;
    register int t97;
    register int t98;
    register int t100;
    register int t112;
    register int t113;
    register int t114;
    register int t116;
    register int t130;
    register int t131;
    register int t132;
    register int t146;
    register int t166;
    register int t170;
    register int t174;
    register int t185;
    register int t186;

    t0 = *(int *)((a4 + 0x14));
    t22 = a5;
    t23 = a6;
    t24 = a7;
    if (((int)t0 < (int)0x69) && (t1 = *(int *)0x8C287C60, t1 == 0)) {
        t3 = 0x8C287C60;
        t4 = t0;
        t5 = 0x8C185298;
        t6 = 0x8C29B898;
        for (;;) {
            if ((unsigned int)t5 >= (unsigned int)0x8C1852A0) {
                break;
            }
            t4 = (*(short *)((t5 + 0x0)));
            t2 = (*(short *)0x8C343262);
            t4 = (unsigned short)t4;
            t2 = (unsigned short)t2;
            if (((t2 & t4) != 0) && (t13 = *(int *)((t6 + 0x0)), t14 = ((t2 & t4) == 0), t4 = t13, t15 = *(int *)((t4 + 0x10)), t3 = t15, (t3 & 0x5) != 0)) {
                *(unsigned int *)((a4 + 0x30)) = 0x1;
            }
            t5 = (t5 + 0x2);
            t6 = (t6 + 0x4);
        }
        t22 = t6;
        t23 = 0x5;
        t24 = 0x8C1852A0;
    }
    if ((*(int *)0x8C287ADC) == 2) {
        if (((*(int *)((a4 + 0x34))) == 0) && (t31 = *(int *)0x8C2889DC, (int)t31 >= 0)) {
            t32 = *(int *)0x8C2889DC;
            t33 = plPicLoad(t32);
            if (t33 == 1) {
                sprSet173Load(t32);
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            }
        } else {
            t44 = t22;
            t45 = t23;
            t46 = t24;
        }
        if (((*(int *)((a4 + 0x34))) == 1) && (t48 = *(int *)0x8C289754, (int)t48 >= 0)) {
            t49 = *(int *)0x8C289754;
            t50 = plPicLoad(t49);
            if (t50 == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                sprSet173Load(t49);
                *(unsigned int *)0x8C181750 = 0x0;
                *(unsigned int *)0x8C181754 = 0x0;
            }
        } else {
            t62 = t44;
            t63 = t45;
            t64 = t46;
        }
        t139 = t62;
        t140 = t63;
        t141 = t64;
    } else {
        if (((*(int *)((a4 + 0x34))) == 0) && (t67 = *(int *)0x8C2889DC, (int)t67 >= 0)) {
            t68 = *(int *)0x8C2889DC;
            t69 = plPicLoad(t68);
            if (t69 == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                sprSet173Load(t68);
            }
        } else {
            t79 = t22;
            t80 = t23;
            t81 = t24;
        }
        if (((*(int *)((a4 + 0x34))) == 1) && (t83 = *(int *)0x8C289754, (int)t83 >= 0)) {
            t84 = *(int *)0x8C289754;
            t85 = plPicLoad(t84);
            if (t85 == 1) {
                sprSet173Load(t84);
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
            }
        } else {
            t96 = t79;
            t97 = t80;
            t98 = t81;
        }
        if (((*(int *)((a4 + 0x34))) == 2) && (t100 = *(int *)0x8C28A4CC, (int)t100 >= 0)) {
            t101 = *(int *)0x8C28A4CC;
            t102 = plPicLoad(t101);
            if (t102 == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                sprSet173Load(t101);
            }
        } else {
            t112 = t96;
            t113 = t97;
            t114 = t98;
        }
        if (((*(int *)((a4 + 0x34))) == 3) && (t116 = *(int *)0x8C28B244, (int)t116 >= 0)) {
            t117 = *(int *)0x8C28B244;
            t118 = plPicLoad(t117);
            if (t118 == 1) {
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x1);
                sprSet173Load(t117);
                *(unsigned int *)0x8C181750 = 0x0;
                *(unsigned int *)0x8C181754 = 0x0;
            }
        } else {
            t130 = t112;
            t131 = t113;
            t132 = t114;
        }
        t139 = t130;
        t140 = t131;
        t141 = t132;
    }
    if ((*(int *)0x8C287C60) == 0) {
        t145 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a4 + 0x14)) = (t145 - 1);
        if (((int)(t145 - 1) > (int)0x50) && (((int)(t145 - 1) < (int)0x5A) && (t146 = *(int *)((a4 + 0x30)), t146 == 0))) {
            u147 = *(float *)((a4 + 0x18));
            *(float *)((a4 + 0x18)) = (u147 + 0.100000001f);
            if ((u147 + 0.100000001f) > 1.0f) {
                *(float *)((a4 + 0x18)) = 1.0f;
            }
        }
    }
    if ((*(int *)0x8C287B44) == 0) {
        *(unsigned int *)((a4 + 0x30)) = 0x1;
    }
    t168 = 0x0;
    if (((*(int *)0x8C287ADC) == 2) && (t166 = *(int *)((a4 + 0x34)), t166 == 2)) {
        t168 = 0x1;
    }
    t172 = t168;
    if (((*(int *)0x8C287ADC) == 4) && (t170 = *(int *)((a4 + 0x34)), t170 == 4)) {
        t172 = 0x1;
    }
    if (((int)(*(int *)((a4 + 0x14))) >= (int)0xA) && (t174 = *(int *)((a4 + 0x30)), t174 == 0)) {
        if ((*(int *)0x8C287ADC) == 4) {
            return FUN_8c0a082a((*(int *)((a4 + 0x2C))), t139, t140, t141, (*(float *)((a4 + 0x18))));
        }
        return FUN_8c0a048c((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)((a4 + 0x2C))), t141, (*(float *)((a4 + 0x18))));
    }
    u182 = *(float *)((a4 + 0x18));
    *(float *)((a4 + 0x18)) = (u182 - 0.100000001f);
    if (0.0f > (u182 - 0.100000001f)) {
        *(float *)((a4 + 0x18)) = 0.0f;
    }
    if ((((*(float *)((a4 + 0x18))) > 0.0f) && ((t185 = *(int *)((a4 + 0x14)), t185 != 0) && (t186 = *(int *)((a4 + 0x30)), t186 == 0))) || (t172 == 0)) {
        if ((*(int *)0x8C287ADC) == 4) {
            return FUN_8c0a082a((*(int *)((a4 + 0x2C))), t139, t140, t141, (*(float *)((a4 + 0x18))));
        }
        return FUN_8c0a048c((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)((a4 + 0x2C))), t141, (*(float *)((a4 + 0x18))));
    }
    nlCloseEvent(a4);
    *(unsigned int *)0x8C181754 = 0x0;
    return crowdCheerStop();
}
