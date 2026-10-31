/* Straight-line functions with calls and guards (batch gen_xv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int, float);
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimArc(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblRecoverPosC(int, int, int);
float cpuEdgeX(int, Stk3, float);
int cpuShotRange(int, int, int, int, int, float);
int cpuShotTargetSet(int, float, float);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeScreenStart(int, int, int, int, int, int);
int fadeStart(int);
int logoWaveDraw(float);
int nlDispStripTrnsl(int, int);
int nlExecuteEvent(void);
int nlInitEvent(void);
int nlRand(void);
float nlRandom(void);
float nlSin(int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
int primSprDrawScaleFadeY(int, int, int, Stk3, float, float, float, float);
int primSprSetSize(int, float, float);
int rankDraw(void);
int rankNameEntryExec(int, int, int, int, int, int, int, int, int, int, int, int);
int screenQuadPut(int, float);
int serveGetReceiver(void);
int sndCrowdAmb(void);
int sndSeDecide(void);
int sndStopAll(void);
int sprListPut(int, int, int, float, float, float);
int stageFreeAll(void);
int stageLoadBegin(int);
int stageLoadStep(int, int, int, int);
int stageTexSetGarbagedAll(void);
int strmBgmPlay(int);
int strmVoiceSetVol(int);
int titleMenuLayout(int, int, float, float);
int titleSprTexFree(void);
int titleStartSprLoad(void);
int uiScanlinesPut(float);
int unlockTestW2(int);
Stk3 vecMake(float, float, float);
int winDrawB(int, int, float, float, float);
int FUN_8c07e1f0(int a4, int a5);
int FUN_8c06fe2e(int a4, int a5);
int FUN_8c0e9c58(float f4);
int FUN_8c0e18b4(float f4);
float FUN_8c069c76(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_8c05ecf6(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_8c091cb0(void);
int FUN_8c0701a8(int a4, int a5, float f4, float f5);

int FUN_8c07e1f0(int a4, int a5)
{
    int stk[30];
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
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t38;
    register int t39;
    register float u41;
    register float u50;
    register int t63;
    register float u67;
    register float u68;
    register float u70;
    register float u73;
    register int t82;
    register int t77;
    register int t78;
    register int t84;
    register float u85;
    register float u86;
    register float u93;
    register int t97;
    register int t99;
    register int t100;
    register float u103;
    register float u104;
    register float u106;
    register float u109;
    register float u123;
    register float u124;
    register float u126;
    register float u129;
    register int t138;
    register int t139;
    register float u142;
    register float u143;
    register float u145;
    register float u148;
    register float u200;
    register int t220;
    register int t202;
    register float u17;
    register float u18;
    register float u19;
    register int t52;
    register int t46;
    register int t90;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(63.6524963f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t220 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(143.220001f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t202 = 0x4;
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
                    if ((u13 > (*(float *)(((int)stk + 60)))) && ((u17 = *(float *)(((int)stk + 48)), u17 > u13) && ((u18 = *(float *)(((int)stk + 68)), u14 > u18) && (u19 = *(float *)(((int)stk + 56)), u19 > u14)))) {
                    } else {
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
                        cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 8) + 0x4));
                        *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                        *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                    }
                    cpuDblAimArc(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t10 = (t10 + 0x1);
                    t11 = (t11 + 0x20);
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t32 = 0x0;
                t33 = 0x0;
                t34 = 0xFFFFD8F0;
                t35 = 0x8C2FCC6C;
                for (;;) {
                    if (!((*(float *)((t35 + 0x1C))) > (float)t34)) {
                        if ((*(float *)((t35 + 0x1C))) == (float)t34) {
                            t38 = nlRand();
                            t39 = ((~(((~t38) + 0x1) & 0x1)) + 0x1);
                            if ((int)t38 >= 0) {
                                t39 = (t38 & 0x1);
                            }
                            if (t39 != 0) {
                                u41 = *(float *)((t35 + 0x1C));
                                *(unsigned int *)(((int)stk + 8)) = t33;
                                t34 = (int)u41;
                            }
                        } else {
                            t46 = t32;
                        }
                        t52 = t46;
                    } else {
                        u50 = *(float *)((t35 + 0x1C));
                        *(unsigned int *)(((int)stk + 8)) = t33;
                        t34 = (int)u50;
                        t52 = t32;
                    }
                    t32 = t52;
                    t33 = (t33 + 0x1);
                    t35 = (t35 + 0x20);
                    if ((int)t33 >= (int)a5) {
                        break;
                    }
                }
            }
            t63 = *(int *)(((int)stk + 8));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u67 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u68 = (-u67);
            if (!(0.0f > u67)) {
                u68 = u67;
            }
            u70 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u73 = (-1.0f);
            u73 = u73 + (1.0f + 1.0f) * (u68 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u70) / (*(float *)0x8C287B40)), u73);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t82 = 0x11;
            if ((*(int *)0x8C291F74) == 5) {
                t77 = nlRand();
                t78 = ((~(((~t77) + 0x1) & 0x1)) + 0x1);
                if ((int)t77 >= 0) {
                    t78 = (t77 & 0x1);
                }
                t82 = (0x11 + (t78 + 0x10));
            }
            t84 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118));
            u85 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u86 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u86 - 60.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if (((float)(int)((float)t82 + ((float)t84 * ((-(u85 / 100.0f)) + 1.0f))) > (*(float *)0x8C291F54)) && (t90 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t90 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = ((float)(int)((float)t82 + ((float)t84 * ((-(u85 / 100.0f)) + 1.0f))) - (*(float *)0x8C291F54));
                u93 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u93 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) - 5)) {
                    if ((*(int *)0x8C291F74) != 5) {
                        t97 = (int)((int)(nlRand()) % (int)0x28);
                        if (t97 == 0) {
                            if ((*(int *)0x8C291F74) == 5) {
                                t99 = nlRand();
                                t100 = ((~(((~t99) + 0x1) & 0x7)) + 0x1);
                                if ((int)t99 >= 0) {
                                    t100 = (t99 & 0x7);
                                }
                                if (t100 == 0) {
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                    u103 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                    u104 = (-u103);
                                    if (!(0.0f > u103)) {
                                        u104 = u103;
                                    }
                                    u106 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                    u109 = (-1.0f);
                                    u109 = u109 + (1.0f + 1.0f) * (u104 / 118.849998f);
                                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u106) / (*(float *)0x8C287B40)), u109);
                                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                                }
                            }
                        } else {
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                            u123 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                            u124 = (-u123);
                            if (!(0.0f > u123)) {
                                u124 = u123;
                            }
                            u126 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                            u129 = (-1.0f);
                            u129 = u129 + (1.0f + 1.0f) * (u124 / 118.849998f);
                            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u126) / (*(float *)0x8C287B40)), u129);
                            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                        }
                    } else {
                        if ((*(int *)0x8C291F74) == 5) {
                            t138 = nlRand();
                            t139 = ((~(((~t138) + 0x1) & 0x7)) + 0x1);
                            if ((int)t138 >= 0) {
                                t139 = (t138 & 0x7);
                            }
                            if (t139 == 0) {
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                u142 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                u143 = (-u142);
                                if (!(0.0f > u142)) {
                                    u143 = u142;
                                }
                                u145 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                u148 = (-1.0f);
                                u148 = u148 + (1.0f + 1.0f) * (u143 / 118.849998f);
                                cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u145) / (*(float *)0x8C287B40)), u148);
                                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                            }
                        }
                    }
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            u200 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u200 * (*(float *)0x8C07E5D0)) / (*(float *)0x8C07E5D4));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t202 = 0xA24;
        }
        t220 = t202;
    }
    return t220;
}

int FUN_8c06fe2e(int a4, int a5)
{
    int stk[18];

    register int R2;
    register int R6;
    register float F0;
    register float F1;
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
    v0_1 = a4;
    v0_3 = a5;
    v0_0 = *(int *)((v0_1 + 0xB5C));
    v0_4 = *(int *)(((((0x3 & ((-v0_0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 12)) = 0x8C291F24;
    w0_0 = *(float *)((v0_1 + 0xAE8));
    v0_2 = ((((0x3 & ((-v0_0) + 0x3)) * 0xD78) + 0x8C287D84));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    v0_3 = ((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84));
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C06FE88;
    v0_4 = (0x1);
    L_8C06FE92:;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    w0_0 = *(float *)((v0_2 + 0xAE8));
    v0_5 = (0xAE8);
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C06FEC4;
    v0_4 = (0x1);
    L_8C06FECE:;
    w0_0 = *(float *)((v0_3 + v0_5));
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C06FEDA;
    v0_5 = (0x1);
    L_8C06FEE4:;
    *(unsigned int *)(((int)stk + 20)) = v0_5;
    w0_0 = 0.100000001f;
    w0_0 = w0_0 + 0.899999976f * (nlRandom());
    w0_0 = ((*(float *)((v0_1 + 0xB00))) * w0_0);
    *(float *)(((int)stk + 4)) = (w0_0 * 118.849998f);
    w0_1 = (-1.0f);
    w0_1 = w0_1 + (1.0f + 1.0f) * (nlRandom());
    cpuAimPointSet(v0_0, 0x1, (w0_1 * 54.8499985f), (w0_0 * 118.849998f));
    v0_5 = (0x8C0ED2B0);
    v0_5 = (0x8C041C58);
    v0_0 = ((v0_0 + 0x1));
    w0_4 = ((float)(-(*(int *)(((int)stk + 8)))));
    w0_3 = (0.899999976f);
    w0_1 = (54.8499985f);
    w0_0 = (118.849998f);
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 12)))))) & 4) != 0)) goto L_8C06FF84;
    if ((!((*(float *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x2C))) * 0xD78) + 0x8C288A14))) > 1.0f))) goto L_8C06FF84;
    v0_5 = ((int)((int)(nlRand()) % (int)0xA)) != 0;
    if (v0_5) goto L_8C06FF84;
    w0_2 = 0.100000001f;
    w0_2 = w0_2 + w0_3 * (nlRandom());
    w0_3 = ((*(float *)((v0_1 + 0xB00))) * w0_2);
    v0_3 = (0x2);
    w0_2 = ((w0_4 * w0_1));
    w0_1 = ((w0_3 * w0_0));
    L_8C06FFAA:;
    cpuAimPointSet(v0_0, v0_3, w0_2, w0_1);
    v0_0 = ((v0_0 + 0x1));
    L_8C07018A:;
    return v0_0;
    L_8C06FF84:;
    if ((v0_4 != (*(int *)(((int)stk + 20))))) goto L_8C06FFB4;
    w0_0 = 59.4249992f;
    w0_0 = w0_0 + 59.4249992f * (nlRandom());
    v0_3 = (0x1);
    w0_2 = (((float)(-v0_4) * w0_1));
    w0_1 = (((*(float *)((v0_1 + 0xB00))) * w0_0));
    goto L_8C06FFAA;
    L_8C06FFB4:;
    w0_3 = (((float)(*(int *)(((int)stk + 8))) * w0_1));
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 12)))))) & 4) == 0)) goto L_8C070074;
    w0_5 = *(float *)(((*(int *)(((int)stk + 12))) + 0x58));
    w0_2 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C070004;
    w0_5 = (w0_2);
    L_8C070008:;
    if ((!(24.6900024f > w0_5))) goto L_8C07004A;
    w0_2 = 0.400000006f;
    w0_2 = w0_2 + 0.200000003f * (nlRandom());
    w0_3 = ((*(float *)((v0_1 + 0xB00))) * w0_2);
    *(float *)(((int)stk + 4)) = (w0_3 * w0_0);
    w0_2 = 0.600000024f;
    w0_2 = w0_2 + 0.300000012f * (nlRandom());
    w0_2 = (w0_4 * w0_2);
    v0_1 = v0_0;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = v0_1;
    v0_3 = (0x1);
    w0_2 = ((w0_2 * w0_1));
    w0_1 = ((w0_3 * w0_0));
    L_8C07006C:;
    cpuAimPointSet(v0_1, v0_3, w0_2, w0_1);
    goto L_8C07018A;
    L_8C07004A:;
    w0_1 = 0.600000024f;
    w0_1 = w0_1 + 0.400000006f * (nlRandom());
    w0_1 = ((*(float *)((v0_1 + 0xB00))) * w0_1);
    v0_1 = v0_0;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = v0_1;
    v0_3 = (0x1);
    w0_2 = (w0_3);
    w0_1 = ((w0_1 * w0_0));
    goto L_8C07006C;
    L_8C070004:;
    w0_5 = ((-w0_2));
    goto L_8C070008;
    L_8C070074:;
    if (((*(int *)(((int)stk + 8))) != v0_4)) goto L_8C07007E;
    v0_4 = (v0_2);
    L_8C070080:;
    w0_5 = *(float *)((v0_4 + 0xAF0));
    w0_2 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C07008E;
    w0_5 = (w0_2);
    L_8C070092:;
    w0_2 = 0.300000012f;
    w0_2 = w0_2 + 0.200000003f * (float)((((*(int *)(((((*(int *)(((0xB5C + v0_4) + 0x0))) << 2) + ((*(int *)(((int)stk + 16))) + 0x14)) + 0x0))) == 0)) ? 1 : 0);
    if ((!((w0_2 * w0_0) > w0_5))) goto L_8C070166;
    w0_2 = (*(float *)((v0_4 + 0xAF0)));
    w0_2 = w0_2 + 41.5974998f * ((*(float *)((v0_1 + 0xB00))) * (nlRandom()));
    cpuAimPointSet(v0_0, 0x2, w0_3, w0_2);
    w0_2 = (*(float *)((v0_4 + 0xAF0)));
    w0_2 = w0_2 + 41.5974998f * (*(float *)((v0_1 + 0xB00)));
    cpuAimPointSet((v0_0 + 0x1), 0x2, (w0_4 * w0_1), w0_2);
    w0_4 = *(float *)((v0_4 + 0xAE8));
    v0_0 = (((v0_0 + 0x1) + 0x1));
    w0_2 = (w0_4);
    w0_1 = ((*(float *)((v0_1 + 0xAE8))));
    if ((0.0f > w0_4)) goto L_8C070104;
    w0_5 = (w0_2);
    L_8C070108:;
    if ((0.0f > w0_1)) goto L_8C070134;
    w0_1 = (w0_1);
    L_8C070138:;
    if ((w0_1 > w0_5)) goto L_8C070152;
    if ((0.0f > w0_2)) goto L_8C070146;
    w0_5 = (w0_2);
    L_8C07014A:;
    if ((!((*(float *)0x8C07023C) > w0_5))) goto L_8C07018A;
    L_8C070152:;
    cpuAimPointSet(v0_0, 0x1, w0_3, ((*(float *)((v0_1 + 0xB00))) * w0_0));
    v0_0 = ((v0_0 + 0x1));
    goto L_8C07018A;
    L_8C070146:;
    w0_5 = ((-w0_2));
    goto L_8C07014A;
    L_8C070134:;
    w0_1 = ((-w0_1));
    goto L_8C070138;
    L_8C070104:;
    w0_5 = ((-w0_2));
    goto L_8C070108;
    L_8C070166:;
    w0_0 = *(float *)0x8C070240;
    cpuAimPointSet(v0_0, 0x1, (((*(float *)((v0_2 + 0xAE8))) + (*(float *)((v0_3 + 0xAE8)))) * w0_0), (((*(float *)((v0_2 + 0xAF0))) + (*(float *)((v0_3 + 0xAF0)))) * w0_0));
    v0_0 = ((v0_0 + 0x1));
    goto L_8C07018A;
    L_8C07008E:;
    w0_5 = ((-w0_2));
    goto L_8C070092;
    L_8C07007E:;
    v0_4 = (v0_3);
    goto L_8C070080;
    L_8C06FEDA:;
    if ((!(w0_5 > w0_2))) goto L_8C06FEE2;
    v0_5 = (0xFFFFFFFF);
    goto L_8C06FEE4;
    L_8C06FEE2:;
    v0_5 = (0x0);
    goto L_8C06FEE4;
    L_8C06FEC4:;
    if ((!(w0_5 > w0_2))) goto L_8C06FECC;
    v0_4 = (0xFFFFFFFF);
    goto L_8C06FECE;
    L_8C06FECC:;
    v0_4 = (0x0);
    goto L_8C06FECE;
    L_8C06FE88:;
    if ((!(w0_5 > w0_2))) goto L_8C06FE90;
    v0_4 = (0xFFFFFFFF);
    goto L_8C06FE92;
    L_8C06FE90:;
    v0_4 = (0x0);
    goto L_8C06FE92;
}

int FUN_8c0e9c58(float f4)
{
    int stk[17];
    register int t3;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register float t34;
    register int t37;
    register float t38;
    register int t39;
    register int t43;
    register float t44;
    register int t45;
    register int t49;
    register float t50;
    register int t51;
    register int t65;
    register int t71;
    register int t90;
    register int t93;
    register int t95;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t66;
    register int t67;
    register int t117;
    register int t114;
    register int t111;
    register int t107;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x8)) = *(struct mv3 *)(0x8C127848); }
    t3 = 0x8C127848;
    if ((*(int *)0x8C20D15C) == 0) {
        FUN_8c0eaf00(0x0, 0x0, 0x0, f4);
        *(unsigned int *)0x8C287D5C = 0x0;
        t3 = 0x8C287D5C;
    }
    t6 = t3;
    t7 = 0x8C29B898;
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)((t7 + 0x0));
        t7 = (t7 + 0x4);
        if ((((*(int *)((t9 + 0x10))) & 0x8) != 0) && ((t11 = *(int *)((t9 + 0x8)), t6 = t11, (t6 & 0x200) == 0) || ((t12 = *(int *)((t9 + 0x8)), t6 = 0x400, (t12 & t6) == 0) || ((t13 = *(int *)((t9 + 0x8)), (t13 & 2) == 0) || (t14 = *(int *)((t9 + 0x8)), (t14 & 5) == 0))))) {
            t8 = 0x1;
        }
        if ((unsigned int)t7 >= (unsigned int)0x8C29B8A8) {
            break;
        }
    }
    if ((*(int *)0x8C20D15C) != 0) {
        t58 = t9;
        t59 = t7;
        t60 = 0x8;
        t61 = 0x8C29B8A8;
    } else {
        t18 = *(int *)0x8C29B280;
        *(unsigned int *)0x8C29B280 = ((t18 + 0x1) & 0x3);
        t19 = *(int *)(((((t18 + 0x1) & 0x3) << 2) + 0x8C127600));
        *(unsigned int *)0x8C29B27C = t19;
        if (t19 == 1) {
            for (;;) {
                t21 = (int)((int)((*(int *)0x8C287C58) + 0x1) % (int)0xA);
                *(unsigned int *)0x8C287C58 = t21;
                t22 = unlockTestW2(t21);
                if (t22 != 0) {
                    break;
                }
            }
            *(unsigned int *)0x8C287ADC = ((((*(int *)0x8C287C58) & 0x1) << 1) + 0x2);
        } else {
            *(unsigned int *)0x8C287ADC = 0x2;
        }
        *(unsigned int *)(((int)stk + 12)) = 0x8C287D84;
        *(int *)((int)stk + 8) = 0x8C2889DC;
        t34 = nlRandom();
        *(unsigned int *)0x8C2889DC = (int)(t34 * 8.0f);
        *(unsigned int *)0x8C343264 = (int)(t34 * 8.0f);
        *(unsigned int *)(((int)stk + 16)) = 0x8C288AFC;
        *(int *)((int)stk + 8) = 0x8C289754;
        t37 = (*(int *)((0xC58 + (*(int *)(((int)stk + 12))))));
        *(int *)((int)stk + 4) = t37;
        t38 = nlRandom();
        t39 = ((~(((~(((int)(t38 * 3.0f) + t37) + 0x1)) + 0x1) & 0x7)) + 0x1);
        if ((int)(((int)(t38 * 3.0f) + t37) + 0x1) >= 0) {
            t39 = ((((int)(t38 * 3.0f) + t37) + 0x1) & 0x7);
        }
        *(unsigned int *)0x8C289754 = t39;
        *(unsigned int *)0x8C34329C = t39;
        *(unsigned int *)(((int)stk + 12)) = 0x8C289874;
        *(int *)((int)stk + 8) = 0x8C28A4CC;
        t43 = (*(int *)((0xC58 + (*(int *)(((int)stk + 16))))));
        *(int *)((int)stk + 4) = t43;
        t44 = nlRandom();
        t45 = ((~(((~(((int)(t44 * (1.0f + 1.0f)) + t43) + 0x1)) + 0x1) & 0x7)) + 0x1);
        if ((int)(((int)(t44 * (1.0f + 1.0f)) + t43) + 0x1) >= 0) {
            t45 = ((((int)(t44 * (1.0f + 1.0f)) + t43) + 0x1) & 0x7);
        }
        *(unsigned int *)0x8C28A4CC = t45;
        *(unsigned int *)0x8C3432D4 = t45;
        t49 = (*(int *)((0xC58 + (*(int *)(((int)stk + 12))))));
        *(int *)((int)stk + 8) = t49;
        t50 = nlRandom();
        t51 = ((~(((~(((int)(t50 * (1.0f + 1.0f)) + t49) + 0x1)) + 0x1) & 0x7)) + 0x1);
        if ((int)(((int)(t50 * (1.0f + 1.0f)) + t49) + 0x1) >= 0) {
            t51 = ((((int)(t50 * (1.0f + 1.0f)) + t49) + 0x1) & 0x7);
        }
        *(unsigned int *)0x8C28B244 = t51;
        *(unsigned int *)0x8C34330C = t51;
        stageLoadBegin(0x0);
    }
    t65 = stageLoadStep(t58, t59, t60, t61);
    if ((t65 == 1) && ((t66 = *(int *)0x8C20D15C, (int)t66 >= (int)0x12D) && (t67 = *(int *)0x8C287A4C, t67 == 0))) {
        *(unsigned int *)0x8C20D14C = 0x2;
        *(unsigned int *)0x8C20D150 = 0x2;
        sndStopAll();
        strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
        *(unsigned int *)0x8C287C50 = 0x0;
        t71 = *(int *)0x8C1D827C;
        *(unsigned int *)0x8C1D827C = (t71 + 0x1);
        if ((int)(t71 + 0x1) > (int)0x1) {
            *(unsigned int *)0x8C1D827C = 0x0;
        }
        *(unsigned int *)0x8C20D15C = 0x0;
        t117 = (fadeStart(0x23));
    } else {
        *(unsigned int *)0x8C421F60 = 0x1;
        if (((*(int *)0x8C20D15C) != 0x12C) && (t8 == 0)) {
        } else {
            fadeCaptureBegin();
            *(float *)0x8C287D64 = 0.0199999996f;
        }
        if ((*(int *)0x8C20D15C) == 0x10E) {
            fadeScreenStart(0x3, 0x0, 0x1F, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
        }
        titleMenuLayout(0x0, (((int)stk + 12) + 0x8), 0.0f, 0.100000001f);
        t90 = nlExecuteEvent();
        if (((*(int *)0x8C20D15C) != 0x12C) && (t8 == 0)) {
            *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
            t114 = t90;
        } else {
            t93 = fadeCaptureEnd(0x0);
            if (t8 != 0) {
                t95 = *(int *)0x8C20D150;
                if (t95 != 3) {
                    nlInitEvent();
                    *(unsigned int *)0x8C20D14C = 0x0;
                    *(unsigned int *)0x8C20D150 = 0x3;
                    sndStopAll();
                    strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
                    fadeStart(0x3C);
                    sndSeDecide();
                    *(unsigned int *)0x8C421F74 = 0x0;
                    *(unsigned int *)0x8C20D15C = 0x0;
                    titleSprTexFree();
                    stageFreeAll();
                    stageTexSetGarbagedAll();
                    t107 = (titleStartSprLoad());
                } else {
                    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
                    t107 = t95;
                }
                t111 = t107;
            } else {
                *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
                t111 = t93;
            }
            t114 = t111;
        }
        t117 = t114;
    }
    return t117;
}

int FUN_8c0e18b4(float f4)
{
    int stk[86];
    register int t0;
    register int t2;
    register int t27;
    register int t29;
    register int t33;
    register int t36;
    register int t3;
    register int t11;

    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 112) + 0x60)) = *(struct mv6 *)(0x8C126C50); }
    t0 = 0x8C126C68;
    t2 = ((int)stk + 112);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126C68 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    FUN_8c0eaf00(0x0, 0x0, 0x0, f4);
    screenQuadPut((((int)stk + 112) + 0x60), 200.0f);
    logoWaveDraw(80.0f);
    uiScanlinesPut(75.0f);
    *(Stk3 *)(((int)stk + 100)) = vecMake(0.0f, -15.0f, 70.0f);
    winDrawB(0xFF1E00, 0x2, 520.0f, 1.0f, 0.649999976f);
    *(Stk3 *)(((int)stk + 100)) = vecMake(8.0f, 32.0f, 60.0f);
    sprListPut(0x8C1D7970, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    if ((*(int *)0x8C287ADC) == 4) {
        *(Stk3 *)(((int)stk + 100)) = vecMake(151.0f, 32.0f, 60.0f);
        t11 = 0x8C1D7BF8;
    } else {
        *(Stk3 *)(((int)stk + 100)) = vecMake(151.0f, 32.0f, 60.0f);
        t11 = 0x8C1D7B20;
    }
    sprListPut(t11, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 100)) = vecMake(347.0f, 32.0f, 60.0f);
    sprListPut(0x8C1D7A48, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 112) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 112)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 112) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 112) + 0x18)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 112) + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 112) + 0x30)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 112) + 0x54)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 112) + 0x48)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 112) + 0x78) + 0x0)) = (*(float *)(((((int)stk + 112) + 0x30) + 0x0)));
    *(float *)(((((int)stk + 112) + 0x78) + 0x4)) = ((*(float *)((((int)stk + 112) + 0x4))) + (1.0f + 1.0f));
    *(float *)(((((int)stk + 112) + 0x78) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x0)) = (*(float *)(((((int)stk + 112) + 0x30) + 0x0)));
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x4)) = (*(float *)(((((int)stk + 112) + 0x18) + 0x4)));
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 112) + 0x48) + 0x0))) + -2.0f);
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x4)) = ((*(float *)((((int)stk + 112) + 0x4))) + (1.0f + 1.0f));
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 112) + 0x48) + 0x0))) + -2.0f);
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x4)) = (*(float *)(((((int)stk + 112) + 0x18) + 0x4)));
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x8)) = 65.0f;
    t27 = (((int)stk + 112) + 0x78);
    for (;;) {
        if ((unsigned int)t27 >= (unsigned int)((((int)stk + 112) + 0x78) + 0x40)) {
            break;
        }
        *(unsigned int *)((t27 + 0xC)) = 0x96000096;
        t27 = (t27 + 0x10);
    }
    nlDispStripTrnsl(0x4, (((int)stk + 112) + 0x78));
    *(float *)(((((int)stk + 112) + 0x78) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 112) + 0x78) + 0x4)) = 360.0f;
    *(float *)(((((int)stk + 112) + 0x78) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x0)) = 0.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x4)) = 450.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x10) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x0)) = 640.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x4)) = 360.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x20) + 0x8)) = 65.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x0)) = 640.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x4)) = 450.0f;
    *(float *)((((((int)stk + 112) + 0x78) + 0x30) + 0x8)) = 65.0f;
    t29 = (((int)stk + 112) + 0x78);
    for (;;) {
        if ((unsigned int)t29 >= (unsigned int)((((int)stk + 112) + 0x78) + 0x40)) {
            break;
        }
        *(unsigned int *)((t29 + 0xC)) = 0x96FF1E00;
        t29 = (t29 + 0x10);
    }
    nlDispStripTrnsl(0x4, (((int)stk + 112) + 0x78));
    rankDraw();
    rankNameEntryExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 112), *(int *)((int)stk + 112 + 4), *(int *)((int)stk + 112 + 8), *(int *)((int)stk + 112 + 12), *(int *)((int)stk + 112 + 16), *(int *)((int)stk + 112 + 20), *(int *)((int)stk + 112 + 24), *(int *)((int)stk + 112 + 28));
    t33 = *(int *)0x8C421E38;
    t36 = t33;
    if (t33 == 10) {
        strmBgmPlay(0x15);
        t36 = (sndCrowdAmb());
    }
    *(unsigned int *)0x8C421E38 = ((*(int *)0x8C421E38) + 0x1);
    return t36;
}

float FUN_8c069c76(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[14];
    register int t0;
    register int t1;
    register float u7;
    register float u8;
    register int t11;
    register int t13;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register int t21;
    register float u25;
    register float u26;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u35;
    register int t49;
    register float u37;
    register float u38;
    register float u40;
    register float u42;
    register float u43;
    register float u45;
    register int t47;
    register float u60;
    register float u61;
    register float u66;
    register float u67;
    register float u72;
    register float u73;
    register float u78;
    register int t83;
    register float u85;
    register float u86;
    register float u88;
    register int t102;
    register float u90;
    register float u91;
    register float u93;
    register float u95;
    register float u96;
    register float u98;
    register int t100;
    register float t160;
    register float u161;
    register float u162;
    register float u170;
    register float u180;
    register float u148;
    register int t128;
    register int t114;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(volatile int *)0x8C291F78;
        u7 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
        u8 = ((*(float *)((a4 + 0xB00))) * u7);
        if (((*(int *)0x8C291F78) & 4) != 0) {
            t11 = serveGetReceiver();
            t13 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
            if (t11 == (*(int *)(((0xB5C + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)) + 0x0)))) {
                t13 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + t13)); }
            u148 = (-(u8 * 118.849998f));
        } else {
            u15 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u16 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u17 = (-u15);
            if (!(0.0f > u15)) {
                u17 = u15;
            }
            u19 = (-u16);
            if (!(0.0f > u16)) {
                u19 = u16;
            }
            t21 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
            if (u19 > u17) {
                t21 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            u25 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u26 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u27 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u28 = ((*(float *)((a4 + 0xB00))) * u27);
            u30 = ((-u25) + u26);
            if (!(0.0f > (u25 - u26))) {
                u30 = (u25 - u26);
            }
            if (!(u30 > 54.8499985f)) {
                u32 = *(float *)((t21 + 0xAE8));
                u33 = *(float *)((t21 + 0xB9C));
                u35 = ((-u32) + u33);
                if (!(0.0f > (u32 - u33))) {
                    u35 = (u32 - u33);
                }
                t49 = t21;
                if (!(25.0f > u35)) {
                    u37 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u38 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u40 = ((-u37) + u38);
                    if (!(0.0f > (u37 - u38))) {
                        u40 = (u37 - u38);
                    }
                    u42 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u43 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u45 = ((-u42) + u43);
                    if (!(0.0f > (u42 - u43))) {
                        u45 = (u42 - u43);
                    }
                    t47 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                    if (u45 > u40) {
                        t47 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t49 = t47;
                }
                t128 = t49;
            } else {
                u60 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u61 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u66 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u67 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                if ((((u61 - u60) > 0.0f) - (0.0f > (u61 - u60))) == (((u67 - u66) > 0.0f) - (0.0f > (u67 - u66)))) {
                    u72 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u73 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u78 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    t83 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    if ((((u72 - u73) > 0.0f) - (0.0f > (u72 - u73))) != (((u72 - u78) > 0.0f) - (0.0f > (u72 - u78)))) {
                        t83 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t114 = t83;
                } else {
                    u85 = *(float *)((t21 + 0xAE8));
                    u86 = *(float *)((t21 + 0xB9C));
                    u88 = ((-u85) + u86);
                    if (!(0.0f > (u85 - u86))) {
                        u88 = (u85 - u86);
                    }
                    t102 = t21;
                    if (!(25.0f > u88)) {
                        u90 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u91 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u93 = ((-u90) + u91);
                        if (!(0.0f > (u90 - u91))) {
                            u93 = (u90 - u91);
                        }
                        u95 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u96 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u98 = ((-u95) + u96);
                        if (!(0.0f > (u95 - u96))) {
                            u98 = (u95 - u96);
                        }
                        t100 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                        if (u98 > u93) {
                            t100 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                        }
                        t102 = t100;
                    }
                    t114 = t102;
                }
                t128 = t114;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t128)); }
            u148 = (-(u28 * 118.849998f));
        }
        t160 = cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), u148);
        u161 = *(float *)0x8C06A088;
        u162 = (-t160);
        if (!(0.0f > t160)) {
            u162 = t160;
        }
        u170 = t160;
        if (u162 > u161) {
            u170 = ((float)((t160 > 0.0f) - (0.0f > t160)) * u161);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(float *)((a4 + 0xA34)) = u170;
        *(float *)((a4 + 0xA3C)) = u148;
        u180 = t160;
    }
    return u180;
}

int FUN_8c05ecf6(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[13];
    register int t0;
    register int t2;
    register int t160;
    register float u11;
    register float u12;
    register float u17;
    register float u18;
    register float u23;
    register float u24;
    register float u25;
    register float u27;
    register int t29;
    register float u31;
    register float u32;
    register float u34;
    register float u36;
    register float u37;
    register float u39;
    register int t53;
    register float u41;
    register float u42;
    register float u44;
    register float u46;
    register float u47;
    register float u49;
    register int t51;
    register float u64;
    register float u65;
    register float u70;
    register float u71;
    register float u76;
    register float u77;
    register float u82;
    register int t87;
    register float u89;
    register float u90;
    register float u92;
    register int t106;
    register float u94;
    register float u95;
    register float u97;
    register float u99;
    register float u100;
    register float u102;
    register int t104;
    register float u145;
    register float u149;
    register float u150;
    register float u153;
    register int t7;
    register float u15;
    register int t132;
    register int t118;

    t0 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 24)) = (0x8C2FC69C + ((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160));
    t160 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((((*(int *)0x8C291F78) & 4) != 0) && (t7 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13F)), (unsigned char)t7 == 2)) {
            cpuDblRecoverPosC(a4, (((int)stk + 16) + 0x4), ((int)stk + 16));
        } else {
            u11 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u12 = ((*(float *)((a4 + 0xB00))) * u11);
            *(float *)(((int)stk + 16)) = (-(u12 * 118.849998f));
            if (!(0.0f > (-(u12 * 118.849998f)))) {
                u15 = (*(float *)(((int)stk + 16)));
            } else {
                u15 = (-(*(float *)(((int)stk + 16))));
            }
            u17 = *(float *)((a4 + 0xAF0));
            u18 = (-u17);
            if (!(0.0f > u17)) {
                u18 = u17;
            }
            if (u15 > u18) {
                *(float *)(((int)stk + 16)) = (*(float *)((a4 + 0xAF0)));
            }
            u23 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u24 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
            u25 = (-u23);
            if (!(0.0f > u23)) {
                u25 = u23;
            }
            u27 = (-u24);
            if (!(0.0f > u24)) {
                u27 = u24;
            }
            t29 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
            if (u27 > u25) {
                t29 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            u31 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u32 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
            u34 = ((-u31) + u32);
            if (!(0.0f > (u31 - u32))) {
                u34 = (u31 - u32);
            }
            if (!(u34 > 54.8499985f)) {
                u36 = *(float *)((t29 + 0xAE8));
                u37 = *(float *)((t29 + 0xB9C));
                u39 = ((-u36) + u37);
                if (!(0.0f > (u36 - u37))) {
                    u39 = (u36 - u37);
                }
                t53 = t29;
                if (!(15.0f > u39)) {
                    u41 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u42 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u44 = ((-u41) + u42);
                    if (!(0.0f > (u41 - u42))) {
                        u44 = (u41 - u42);
                    }
                    u46 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                    u47 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                    u49 = ((-u46) + u47);
                    if (!(0.0f > (u46 - u47))) {
                        u49 = (u46 - u47);
                    }
                    t51 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
                    if (u49 > u44) {
                        t51 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t53 = t51;
                }
                t132 = t53;
            } else {
                u64 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u65 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u70 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                u71 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                if ((((u65 - u64) > 0.0f) - (0.0f > (u65 - u64))) == (((u71 - u70) > 0.0f) - (0.0f > (u71 - u70)))) {
                    u76 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u77 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u82 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                    t87 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    if ((((u76 - u77) > 0.0f) - (0.0f > (u76 - u77))) != (((u76 - u82) > 0.0f) - (0.0f > (u76 - u82)))) {
                        t87 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
                    }
                    t118 = t87;
                } else {
                    u89 = *(float *)((t29 + 0xAE8));
                    u90 = *(float *)((t29 + 0xB9C));
                    u92 = ((-u89) + u90);
                    if (!(0.0f > (u89 - u90))) {
                        u92 = (u89 - u90);
                    }
                    t106 = t29;
                    if (!(15.0f > u92)) {
                        u94 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u95 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u97 = ((-u94) + u95);
                        if (!(0.0f > (u94 - u95))) {
                            u97 = (u94 - u95);
                        }
                        u99 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xAE8));
                        u100 = *(float *)(((0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78)) + 0xB9C));
                        u102 = ((-u99) + u100);
                        if (!(0.0f > (u99 - u100))) {
                            u102 = (u99 - u100);
                        }
                        t104 = (0x8C287D84 + (((t2 + 0x2) & 0x3) * 0xD78));
                        if (u102 > u97) {
                            t104 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                        }
                        t106 = t104;
                    }
                    t118 = t106;
                }
                t132 = t118;
            }
            u145 = *(float *)0x8C05F0BC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t132)); }
            u149 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            u150 = (*(float *)((a4 + 0xAE8)));
            u150 = u150 + u145 * u149;
            u153 = (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)));
            u153 = u153 + u145 * (*(float *)(((*(int *)(((int)stk + 24))) + 0x28)));
            *(float *)(((int)stk + 20)) = (cpuEdgeX((((u150 > u153)) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (*(float *)(((int)stk + 16)))));
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = (*(float *)(((int)stk + 20)));
        *(float *)((a4 + 0xA3C)) = (*(float *)(((int)stk + 16)));
        t160 = 0xA3C;
    }
    return t160;
}

int FUN_8c091cb0(void)
{
    int stk[38];
    register int t1;
    register int t2;
    register int t3;
    register float u4;
    register float t20;
    register float t22;
    register int t0;

    t1 = 0x0;
    for (;;) {
        t2 = 0x8C1846E8;
        t3 = 0x8C1846E8;
        for (;;) {
            u4 = *(float *)(((t2 + (((t1 << 1) + t1) << 2)) + 0x0));
            *(float *)(((t2 + (((t1 << 1) + t1) << 2)) + 0x0)) = (u4 + 0.100000001f);
            if (!(640.0f > (u4 + 0.100000001f))) {
                t0 = t3;
                t0 = (t0 + (((t1 << 1) + t1) << 2));
                *(float *)((t0 + 0x0)) = -640.0f;
            }
            t2 = (t2 + 0x30);
            t3 = (t3 + 0x30);
            if ((unsigned int)t2 >= (unsigned int)0x8C184778) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    *(unsigned short *)0x8C1846E0 = ((*(short *)0x8C1846E0) + 0xA0);
    *(unsigned short *)0x8C1846E2 = ((*(short *)0x8C1846E2) + 0xF0);
    *(unsigned short *)0x8C1846E4 = ((*(short *)0x8C1846E4) + 0xA0);
    *(unsigned short *)0x8C1846E6 = ((*(short *)0x8C1846E6) + 0xF0);
    *(float *)(((int)stk + 96)) = (((((nlSin((unsigned short)(*(short *)0x8C1846E0))) + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f);
    *(float *)(((int)stk + 92)) = (((((nlSin((unsigned short)(*(short *)0x8C1846E2))) + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f);
    t20 = nlSin((unsigned short)(*(short *)0x8C1846E4));
    t22 = nlSin((unsigned short)(*(short *)0x8C1846E6));
    *(unsigned int *)(((int)stk + 100)) = 0x8C339AF0;
    primSprSetSize(0x8C339AF0, 1.25f, 1.0f);
    primSprSetSize(0x8C339B40, 1.25f, 1.0f);
    primSprSetSize(0x8C339B90, 1.25f, 1.0f);
    *(unsigned int *)(((int)stk + 88)) = 0x8C339BE0;
    primSprSetSize(0x8C339BE0, 1.25f, 1.0f);
    primSprSetSize(0x8C339C30, 1.25f, 1.0f);
    primSprSetSize(0x8C339C80, 1.25f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C1846E8); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 100))), 0x100, 0x100, *(Stk3 *)(((int)stk + 76)), 1.25f, 1.0f, (*(float *)(((int)stk + 96))), ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(0x8C1846F4); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 88))), 0x100, 0x100, *(Stk3 *)(((int)stk + 64)), 1.25f, 1.0f, (*(float *)(((int)stk + 96))), ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(0x8C184700); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 100))), 0x100, 0x100, *(Stk3 *)(((int)stk + 52)), 1.25f, 1.0f, (*(float *)(((int)stk + 96))), ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C18470C); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 88))), 0x100, 0x100, *(Stk3 *)(((int)stk + 40)), 1.25f, 1.0f, (*(float *)(((int)stk + 96))), ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    *(unsigned int *)(((int)stk + 88)) = 0x8C184718;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C184718); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(((int)stk + 28)), 1.25f, 1.0f, ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((*(int *)(((int)stk + 88))) + 0xC)); }
    primSprDrawScaleFadeY(0x8C339C30, 0x100, 0x100, *(Stk3 *)(((int)stk + 16)), 1.25f, 1.0f, ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)(((int)stk + 88))) + 0x18)); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(((int)stk + 4)), 1.25f, 1.0f, ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((*(int *)(((int)stk + 88))) + 0x24)); }
    primSprDrawScaleFadeY(0x8C339C30, 0x100, 0x100, *(Stk3 *)(((int)stk + 76)), 1.25f, 1.0f, ((((t20 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(0x8C184748); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(((int)stk + 64)), 1.25f, 1.0f, ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), (*(float *)(((int)stk + 92))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(0x8C184754); }
    primSprDrawScaleFadeY(0x8C339C80, 0x100, 0x100, *(Stk3 *)(((int)stk + 52)), 1.25f, 1.0f, ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), (*(float *)(((int)stk + 92))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C184760); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(((int)stk + 40)), 1.25f, 1.0f, ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), (*(float *)(((int)stk + 92))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C18476C); }
    return (primSprDrawScaleFadeY(0x8C339C80, 0x100, 0x100, *(Stk3 *)(((int)stk + 28)), 1.25f, 1.0f, ((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.0500000007f), (*(float *)(((int)stk + 92)))));
}

int FUN_8c0701a8(int a4, int a5, float f4, float f5)
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
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u0 = *(float *)((a4 + 0xAE8));
    t2 = (u0 > 0.0f) - (0.0f > u0);
    u0 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
    t3 = (u0 > 0.0f) - (0.0f > u0);
    u0 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    if (t3 == ((u0 > 0.0f) - (0.0f > u0))) {
        u0 = 59.4249992f;
        u0 = u0 + 59.4249992f * (nlRandom());
        cpuAimPointSet(a5, 0x1, ((float)(-t3) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * u0));
        t4 = (a5 + 0x1);
    } else {
        if (((*(int *)0x8C291F78) & 4) != 0) {
            t5 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
            if (t2 == t3) {
                t5 = (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84);
            }
            u0 = *(float *)((t5 + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t5 = a5;
            if (41.5974998f > u1) {
                cpuAimPointSet(a5, 0x2, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t5 = (a5 + 0x1);
            }
            cpuAimPointSet(t5, 0x1, ((float)(-t2) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = 0.200000003f;
            u0 = u0 + 0.100000001f * (nlRandom());
            u1 = ((*(float *)((a4 + 0xB00))) * u0);
            cpuAimPointSet((t5 + 0x1), 0x1, ((float)(-t2) * 54.8499985f), (u1 * 118.849998f));
            u0 = *(float *)0x8C291F7C;
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t6 = ((t5 + 0x1) + 0x1);
            if (!(u1 > 16.460001f)) {
            } else {
                t7 = nlRand();
                t8 = ((~(((~t7) + 0x1) & 0x1)) + 0x1);
                if ((int)t7 >= 0) {
                    t8 = (t7 & 0x1);
                }
                t7 = ((t5 + 0x1) + 0x1);
                if (t8 == 0) {
                } else {
                    cpuAimPointSet(((t5 + 0x1) + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t7 = (((t5 + 0x1) + 0x1) + 0x1);
                }
                t6 = t7;
            }
            t5 = t6;
        } else {
            t6 = (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84);
            if (t2 == t3) {
                t6 = (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84);
            }
            u0 = *(float *)((t6 + 0xAF0));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            t3 = a5;
            if (47.5400009f > u1) {
                cpuAimPointSet(a5, 0x2, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                u0 = *(float *)((t6 + 0xAE8));
                u1 = *(float *)((a4 + 0xAE8));
                u2 = (-u0);
                if (!(0.0f > u0)) {
                    u2 = u0;
                }
                u3 = (-u1);
                if (!(0.0f > u1)) {
                    u3 = u1;
                }
                if (!(u3 > u2)) {
                    u1 = (-u0);
                    if (!(0.0f > u0)) {
                        u1 = u0;
                    }
                    t6 = (a5 + 0x1);
                    if (32.9099998f > u1) {
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        t6 = ((a5 + 0x1) + 0x1);
                    }
                    t7 = t6;
                } else {
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t7 = ((a5 + 0x1) + 0x1);
                }
                t3 = t7;
            }
            u0 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u1 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u3 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
            cpuAimPointSet(t3, 0x1, ((u3 + u2) * 0.5f), ((u0 + u1) * 0.5f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet((t3 + 0x1), 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u0 = *(float *)((a4 + 0xB9C));
            cpuAimPointSet(((t3 + 0x1) + 0x1), 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 23.7700005f));
            t5 = (((t3 + 0x1) + 0x1) + 0x1);
        }
        t4 = t5;
    }
    return t4;
}
