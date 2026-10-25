/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int ballBoyExec(int);
int ballExec(int, int, int, int, int, int, int, int, int, int, int, int);
int ballWallStop(int);
int cameraExec(int, int, int, int, int, int, int, int, int, int, int, int);
int circuitNumDraw(int, int, int, float, float, float);
int circuitRateStep(void);
int courtColliEntry(void);
int cpuDblPoachCheck(int);
int cpuDblPositionCalc(int);
int cpuDblThink(int);
int dbgMenuGetValue(int, int);
int decoPairPut(int);
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(void);
int lineJudgeExec(int);
int matchExec(void);
int miniExec(int, int, int, int, int, int, int, int, int, int, int, int);
int miniTimerDraw(void);
int motionBackup(int);
int netHitNop(void);
int netJudgeExec(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
float nlSin(int);
int nlTranslate(float, float, float);
int perfMark(int);
int perfPrint(void);
int primTexVertexSet(int, int, int, int, int, float, float);
int replaySnapshot(void);
int serveGetServer(void);
int shadowLightMatrix(float);
int sndCrowdBallReact(int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutCentered(int, int, int, int, int, float, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffRestart(void);
int staffShadowPart(int);
int stripQuadDrawA(float, float, float, float);
int stripQuadDrawB(float, float, float, float);
int umpireExec(void);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfb_sleep(void);
int staffShadowFlat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int cpuDblRecoverPosA(int a4, int a5, int a6);
int matchFrame(void);
int cpuDblPosition(int a4);
int windowBgDraw(int a4, int a5, int a6, int a7, float f4);
int miniHudDraw(void);
int cpuDblThinkAll(int a4, int a5);
int decoWaveDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int stageCrowdTexLoad(void);
int vmsio_get_media_info(int a4, int a5);
int courtFraDrawAnim(void);
int shopDrawPrice(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void syIntInit(int a4, int a5);

int staffShadowFlat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[34];

    stk[22] = a8;
    stk[23] = a9;
    stk[24] = a10;
    stk[25] = a11;
    nlPushUnitMatrix();
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((((int)stk + 4) + 0x54) + 0x0))), ((*(float *)(((((int)stk + 4) + 0x54) + 0x4))) + 0.219999999f), (*(float *)(((((int)stk + 4) + 0x54) + 0x8))));
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    nlGetMatrix(((int)stk + 4));
    nlPopMatrix(0x1);
    shadowLightMatrix(0.0f);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix(a4);
    staffShadowPart(0x0);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((a4 + 0x40));
    staffShadowPart(0x1);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x80 + a4));
    staffShadowPart(0x2);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0xC0 + a4));
    staffShadowPart(0x3);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x100 + a4));
    staffShadowPart(0x4);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x140 + a4));
    staffShadowPart(0x5);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x180 + a4));
    staffShadowPart(0x6);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x1C0 + a4));
    staffShadowPart(0x7);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x200 + a4));
    staffShadowPart(0x8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x240 + a4));
    staffShadowPart(0x9);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x280 + a4));
    staffShadowPart(0xA);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x2C0 + a4));
    staffShadowPart(0xB);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x300 + a4));
    staffShadowPart(0xC);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x340 + a4));
    staffShadowPart(0xD);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlMultiMatrix(((int)stk + 4));
    nlMultiMatrix((0x380 + a4));
    staffShadowPart(0xE);
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}

int cpuDblRecoverPosA(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t47;
    int t59;
    int t86;
    int t13;
    int t77;
    int t68;
    int t41;
    int t54;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = serveGetServer();
    if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x140))) == 0) {
        if ((*(int *)((a4 + 0xB5C))) == t1) {
            *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
            *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 59.4249992f));
            t13 = 0xB00;
        } else {
            *(float *)((a5 + 0x0)) = (*(float *)((a4 + 0xAE8)));
            *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
            t13 = 0xAF0;
        }
        t86 = t13;
    } else {
        if ((unsigned char)(*(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)))) == 1) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
            if ((*(int *)((a4 + 0xB5C))) == t1) {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 83.1949997f));
            } else {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)(((0x13D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 23.7700005f));
            }
            t77 = 0xB00;
        } else {
            if ((unsigned char)(*(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)))) == 2) {
                if ((*(int *)((0xB5C + a4))) == t1) {
                    *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 0.0f);
                    *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 59.4249992f));
                    t41 = 0xB00;
                } else {
                    *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 43.8800011f);
                    *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                    t41 = 0xAF0;
                }
                t68 = t41;
            } else {
                t47 = *(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)));
                t59 = (unsigned char)t47;
                if ((unsigned char)t47 == 3) {
                    *(unsigned char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C))) = ((short)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * (short)0xFFFFFFFF);
                    if ((*(int *)((a4 + 0xB5C))) == t1) {
                        *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 0.0f);
                        *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 106.964996f));
                        t54 = 0xB00;
                    } else {
                        *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * 0.0f);
                        *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                        t54 = 0xAF0;
                    }
                    t59 = t54;
                }
                t68 = t59;
            }
            t77 = t68;
        }
        t86 = t77;
    }
    return t86;
}

int matchFrame(void)
{
    int t0;
    float u27;
    float u37;
    float u39;
    int t61;
    int t63;
    int t64;
    int t109;
    int t111;
    int t6;
    int t62;
    int t68;
    int stk[15];

    t0 = *(int *)0x8C287D5C;
    if ((t0 != 2) && (t0 != 3)) {
    } else {
        circuitRateStep();
    }
    if (((*(int *)0x8C287C60) == 0) && (t6 = *(int *)0x8C287B44, t6 == 0)) {
        *(unsigned int *)0x8C287B88 = ((*(int *)0x8C287B88) + 0x1);
        if ((*(float *)0x8C23D204) > 1.0f) {
            if (((int)((int)(*(int *)0x8C287B88) % (int)0x6)) == 0) {
                *(unsigned int *)0x8C287B88 = ((*(int *)0x8C287B88) + 0x1);
            }
        }
    }
    if ((*(int *)0x8C287C60) == 0) {
        u27 = *(float *)0x8C287C40;
        if ((*(float *)0x8C287C3C) == 1.0f) {
            *(float *)0x8C287C3C = ((*(float *)0x8C287C3C) - u27);
        } else {
            *(float *)0x8C287C3C = ((*(float *)0x8C287C3C) - ((float)(*(int *)0x8C301BF0) * u27));
        }
        u37 = *(float *)0x8C287C3C;
        if (((*(int *)0x8C287B3C) & 0x200000) != 0) {
            u39 = *(float *)0x8C287C44;
            if (u39 > u37) {
                *(float *)0x8C287C3C = u39;
            }
        } else {
            if (0.0f > u37) {
                *(float *)0x8C287C3C = 0.0f;
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFBFFFF);
            }
        }
    }
    t61 = (netHitNop());
    t63 = 0x8C287D84;
    t64 = 0x0;
    for (;;) {
        if ((int)t64 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        if (t64 == 0) {
            t61 = (perfMark(0x8C102324));
        } else {
            t68 = t62;
        }
        t62 = t68;
        t61 = (motionBackup(t63));
        t61 = 0xD40;
        t62 = (*(int *)((t63 + t61)));
        t61 = (((int (*)(int))(t62))(t63));
        if (t64 == 0) {
            t61 = (perfPrint());
        }
        t62 = 0xD78;
        t64 = (t64 + 0x1);
        t63 = (t63 + t62);
    }
    ballExec(0x8C291F24, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    sndCrowdBallReact(0x8C291F24);
    ballWallStop(0x8C291F24);
    matchExec();
    perfMark(0x8C10232C);
    if ((*(int *)0x8C34B148) != 7) {
        ballBoyExec(0x8C291F24);
        lineJudgeExec(0x8C291F24);
        netJudgeExec(0x8C291F24);
        umpireExec();
    }
    if ((*(int *)0x8C287B2C) == 0) {
        staffRestart();
    }
    perfPrint();
    miniExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    if ((*(int *)0x8C421F60) == 0) {
        if (((*(int *)0x8C287B3C) & 8) != 0) {
            *(unsigned int *)0x8C38BA70 = 0x0;
        } else {
            *(unsigned int *)0x8C38BA70 = 0x1;
        }
    }
    replaySnapshot();
    cameraExec((*(int *)0x8C287B44), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    t109 = 0x0;
    for (;;) {
        t111 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x2);
        if ((int)t109 >= (int)(t111 * 0x186A0)) {
            break;
        }
        t109 = (t109 + 0x1);
    }
    return courtColliEntry();
}

int cpuDblPosition(int a4)
{
    int t0;
    float u9;
    float u15;
    float u31;
    float u32;
    float u48;
    float u49;
    float u60;
    float u69;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    R4 = a4;
    L_8C06AB78:;
    t0 = *(int *)((R4 + 0xB5C));
    R0 = (0x142);
    R12 = (R4);
    R13 = (((t0 * 0x160) + 0x8C2FC69C));
    R14 = ((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84));
    R4 = (t0);
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x142))) == 0)) goto L_8C06ABB4;
    goto L_8C06ABAC;
    L_8C06ABAC:;
    *(unsigned char *)((R13 + R0)) = ((*(signed char *)((R13 + R0))) - 1);
    goto L_8C06AD58;
    L_8C06AD58:;
    return R0;
    L_8C06ABB4:;
    u9 = *(float *)((R12 + 0xAE8));
    R0 = (0xAE8);
    F3 = (0.0f);
    F4 = (u9);
    if ((!(u9 > 0.0f))) goto L_8C06ABC2;
    goto L_8C06ABBE;
    L_8C06ABBE:;
    R2 = (0x1);
    goto L_8C06ABEE;
    L_8C06ABEE:;
    u15 = *(float *)((R14 + R0));
    F3 = (0.0f);
    F5 = (u15);
    if ((!(u15 > 0.0f))) goto L_8C06ABFA;
    goto L_8C06ABF6;
    L_8C06ABF6:;
    R3 = (0x1);
    goto L_8C06AC04;
    L_8C06AC04:;
    if ((R2 != R3)) goto L_8C06AC26;
    goto L_8C06AC08;
    L_8C06AC08:;
    if ((0.0f > (F5 - F4))) goto L_8C06AC18;
    goto L_8C06AC12;
    L_8C06AC12:;
    F3 = ((F5 - F4));
    goto L_8C06AC1E;
    L_8C06AC1E:;
    if ((20.0f > F3)) goto L_8C06AC52;
    goto L_8C06AC26;
    L_8C06AC26:;
    if ((0.0f > F4)) goto L_8C06AC30;
    goto L_8C06AC2C;
    L_8C06AC2C:;
    F3 = (F4);
    goto L_8C06AC34;
    L_8C06AC34:;
    if ((!(16.4549999f > F3))) goto L_8C06ACBC;
    goto L_8C06AC3C;
    L_8C06AC3C:;
    if ((0.0f > F5)) goto L_8C06AC46;
    goto L_8C06AC42;
    L_8C06AC42:;
    F3 = (F5);
    goto L_8C06AC4A;
    L_8C06AC4A:;
    if ((!(16.4549999f > F3))) goto L_8C06ACBC;
    goto L_8C06AC52;
    L_8C06AC52:;
    cpuDblPositionCalc(R14);
    u31 = *(float *)(((int)stk + 4));
    u32 = *(float *)((R14 + 0xAE8));
    F4 = ((u32 - u31));
    F5 = (u32);
    F6 = (u31);
    if ((0.0f > (u32 - u31))) goto L_8C06AC6C;
    goto L_8C06AC68;
    L_8C06AC68:;
    F3 = (F4);
    goto L_8C06AC74;
    L_8C06AC74:;
    if ((!(F3 > 5.0f))) goto L_8C06ACBC;
    goto L_8C06AC7C;
    L_8C06AC7C:;
    R2 = ((*(signed char *)((R13 + 0x13D))));
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C06AC8A;
    goto L_8C06AC86;
    L_8C06AC86:;
    R3 = (0x1);
    goto L_8C06ACA6;
    L_8C06ACA6:;
    if ((R2 == R3)) goto L_8C06ACBC;
    goto L_8C06ACAA;
    L_8C06ACAA:;
    *(unsigned char *)((R13 + 0x13D)) = ((short)(*(signed char *)((R13 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((R13 + 0x142)) = 0xA;
    goto L_8C06ACBC;
    L_8C06ACBC:;
    if (((*(signed char *)((R13 + 0x142))) != 0)) goto L_8C06AD44;
    goto L_8C06ACC4;
    L_8C06ACC4:;
    u48 = *(float *)((R12 + 0xAF0));
    u49 = *(float *)((R14 + 0xAF0));
    F4 = (u48);
    F5 = (u49);
    F6 = ((u48 - u49));
    if ((0.0f > (u48 - u49))) goto L_8C06ACD8;
    goto L_8C06ACD4;
    L_8C06ACD4:;
    F3 = (F6);
    goto L_8C06ACE0;
    L_8C06ACE0:;
    if ((20.0f > F3)) goto L_8C06AD44;
    goto L_8C06ACE8;
    L_8C06ACE8:;
    if ((((*(int *)((R14 + 0xB60))) & 0x100) == 0)) goto L_8C06AD44;
    goto L_8C06ACF2;
    L_8C06ACF2:;
    if (((*(int *)((R14 + 0xC5C))) != 12)) goto L_8C06AD44;
    goto L_8C06ACFA;
    L_8C06ACFA:;
    u60 = *(float *)((R14 + 0xAE8));
    R0 = (0xAE8);
    F1 = (0.0f);
    F3 = (u60);
    if ((0.0f > u60)) goto L_8C06AD08;
    goto L_8C06AD04;
    L_8C06AD04:;
    F3 = ((*(float *)((R14 + R0))));
    goto L_8C06AD0A;
    L_8C06AD0A:;
    if ((!(F3 > 16.4549999f))) goto L_8C06AD44;
    goto L_8C06AD12;
    L_8C06AD12:;
    u69 = *(float *)((R14 + 0xAE8));
    R2 = ((*(signed char *)((R13 + 0x13D))));
    F1 = (u69);
    F3 = (0.0f);
    if ((!(u69 > 0.0f))) goto L_8C06AD24;
    goto L_8C06AD20;
    L_8C06AD20:;
    R3 = (0x1);
    goto L_8C06AD2E;
    L_8C06AD2E:;
    if ((R2 != R3)) goto L_8C06AD44;
    goto L_8C06AD32;
    L_8C06AD32:;
    *(unsigned char *)((R13 + 0x13D)) = ((short)(*(signed char *)((R13 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((R13 + 0x142)) = 0xA;
    goto L_8C06AD44;
    L_8C06AD44:;
    R0 = (0x142);
    if (((*(signed char *)((R13 + 0x142))) == 0)) goto L_8C06AD58;
    goto L_8C06AD4C;
    L_8C06AD4C:;
    R0 = (0xA24);
    if (((*(int *)((R12 + 0xA24))) != 0)) goto L_8C06AD58;
    goto L_8C06AD54;
    L_8C06AD54:;
    *(unsigned int *)((R12 + R0)) = 0x4;
    goto L_8C06AD58;
    L_8C06AD24:;
    if ((!(F3 > F1))) goto L_8C06AD2C;
    goto L_8C06AD28;
    L_8C06AD28:;
    R3 = (0xFFFFFFFF);
    goto L_8C06AD2E;
    L_8C06AD2C:;
    R3 = (0x0);
    goto L_8C06AD2E;
    L_8C06AD08:;
    F3 = ((-F3));
    goto L_8C06AD0A;
    L_8C06ACD8:;
    F3 = (((-F4) + F5));
    goto L_8C06ACE0;
    L_8C06AC8A:;
    if ((!(F3 > F4))) goto L_8C06ACA4;
    goto L_8C06AC8E;
    L_8C06AC8E:;
    R3 = (0xFFFFFFFF);
    goto L_8C06ACA6;
    L_8C06ACA4:;
    R3 = (0x0);
    goto L_8C06ACA6;
    L_8C06AC6C:;
    F3 = (((-F5) + F6));
    goto L_8C06AC74;
    L_8C06AC46:;
    F3 = ((-F5));
    goto L_8C06AC4A;
    L_8C06AC30:;
    F3 = ((-F4));
    goto L_8C06AC34;
    L_8C06AC18:;
    F3 = (((-F5) + F4));
    goto L_8C06AC1E;
    L_8C06ABFA:;
    if ((!(F3 > F5))) goto L_8C06AC02;
    goto L_8C06ABFE;
    L_8C06ABFE:;
    R3 = (0xFFFFFFFF);
    goto L_8C06AC04;
    L_8C06AC02:;
    R3 = (0x0);
    goto L_8C06AC04;
    L_8C06ABC2:;
    if ((!(F3 > F4))) goto L_8C06ABEC;
    goto L_8C06ABC6;
    L_8C06ABC6:;
    R2 = (0xFFFFFFFF);
    goto L_8C06ABEE;
    L_8C06ABEC:;
    R2 = (0x0);
    goto L_8C06ABEE;
}

int windowBgDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t61;
    float u53;
    float u55;
    int stk[75];

    t61 = 0xFFFFFF48;
    if ((int)a4 < 0) {
    } else {
        *(unsigned int *)(((int)stk + 80)) = (*(int *)(((a4 << 2) + 0x8C10F5B0)));
        *(float *)(((int)stk + 88)) = 0.0f;
        *(float *)(((int)stk + 84)) = 93.0f;
        *(float *)(((int)stk + 68)) = (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8)));
        *(float *)(((int)stk + 72)) = (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)));
        *(float *)(((int)stk + 76)) = (*(float *)(((0xE8 + ((int)stk + 68)) + 0x0)));
        if (a5 == 1) {
            *(float *)(((int)stk + 88)) = ((1.0f - f4) * 93.0f);
            vecMake((a4 << 2), a5, a6, a7, (((int)stk + 68) + 0x3C), ((f4 * 93.0f) + (*(float *)(((int)stk + 76)))), (*(float *)(((int)stk + 72))), (*(float *)(((int)stk + 68))));
            vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x30), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x24), ((f4 * 93.0f) + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x0)))), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x18), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
        } else {
            if (a5 == 0) {
                *(float *)(((int)stk + 84)) = (f4 * 93.0f);
                vecMake((a4 << 2), a5, a6, a7, (((int)stk + 68) + 0x3C), ((*(float *)(((int)stk + 76))) + 93.0f), (*(float *)(((int)stk + 72))), (*(float *)(((int)stk + 68))));
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x30), ((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + ((1.0f - f4) * 93.0f)), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x24), ((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + 93.0f), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
                vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 68) + 0x18), ((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + ((1.0f - f4) * 93.0f)), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x3C)); }
        u53 = *(float *)(((int)stk + 84));
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x48), (u53 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 68) + 0x30)); }
        u55 = *(float *)(((int)stk + 88));
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x48)), (u55 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x48)), (u53 / 128.0f), 0.0625f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 68) + 0x18)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x48)), (u55 / 128.0f), 0.0625f);
        t61 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x48), (*(int *)(((int)stk + 80)))));
    }
    return t61;
}

int miniHudDraw(void)
{
    int t31;
    float u26;

    if (((*(int *)((0x8C10D194 + ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) << 2)))) & 1) != 0) {
        miniTimerDraw();
    }
    if (((*(int *)((0x8C10D194 + ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) << 2)))) & 2) != 0) {
        sprSheetSet(0x8C10CDFC);
        sprSheetPut(0x0, 16.0f, 30.0f, 1.0f, 1.0f);
        circuitNumDraw((*(int *)(((*(int *)0x8C2FBEF0) + 0x38))), 0x0, 0x8C159E70, 204.0f, 31.0f, 1.0f);
    }
    if (((*(int *)((0x8C10D194 + ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) << 2)))) & 8) != 0) {
        sprSheetSet(0x8C10CFAC);
        sprSheetPut(0x0, 200.0f, 30.0f, 1.0f, 1.0f);
        circuitNumDraw((*(int *)(((*(int *)0x8C2FBEF0) + 0x14))), 0x0, 0x8C159E70, 325.0f, 31.0f, 1.0f);
        u26 = 403.0f;
    } else {
        u26 = (*(float *)0x8C03B94C);
    }
    stripQuadDrawB(0.0f, 27.0f, u26, 29.0f);
    t31 = *(int *)((0x8C10D194 + ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) << 2)));
    if ((t31 & 4) != 0) {
        sprSheetSet(0x8C10CE20);
        sprSheetPut(0x0, (*(float *)0x8C03B954), 29.0f, 1.0f, 1.0f);
        circuitNumDraw((*(int *)(((*(int *)0x8C2FBEF0) + 0x10))), 0x0, 0x8C159E98, (*(float *)0x8C03B960), (*(float *)0x8C03B95C), 1.0f);
        return stripQuadDrawA((*(float *)0x8C03B970), (*(float *)0x8C03B96C), (*(float *)0x8C03B968), (*(float *)0x8C03B964));
    }
    return t31;
}

int cpuDblThinkAll(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t104;
    int t107;
    int t108;
    int t8;
    int t98;
    float u14;
    float u16;
    float u18;
    float u19;
    float u23;
    int t26;
    int t24;
    float u42;
    int t45;
    int t43;
    float u69;
    float u71;
    int t80;
    int t94;
    int t4;
    int t101;
    int t102;
    int t95;
    int t33;
    int t35;
    int t52;
    int t54;
    int t85;
    int t86;
    int stk[13];

    *(unsigned int *)(((int)stk + 4)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    t0 = 0x3;
    t1 = a4;
    t2 = a5;
    t3 = 0x8C2FC69C;
    t5 = 0x8C287D84;
    for (;;) {
        t104 = 0x128;
        t107 = t1;
        t108 = t2;
        if ((*(signed char *)((t3 + 0x128))) != 0) {
        } else {
            t1 = 0x3;
            t2 = (*(int *)((t5 + 0xB5C)));
            t1 = (t1 & (t2 + 0x2));
            t8 = *(int *)(((int)stk + 4));
            t2 = (t2 << 2);
            t0 = t8;
            t0 = (t0 + 0x14);
            t2 = (t2 + t0);
            t98 = t8;
            if ((*(int *)((t2 + 0x0))) == 0) {
                t101 = t1;
                t102 = t2;
            } else {
                t0 = t1;
                t0 = (t0 << 2);
                t0 = (t0 + ((*(int *)(((int)stk + 4))) + 0x14));
                if ((*(int *)((t0 + 0x0))) != 0) {
                    t4 = 0xD78;
                    u14 = *(float *)((t5 + 0xAF0));
                    t0 = 0x8C287D84;
                    t4 = (t1 * t4);
                    t4 = (t4 + t0);
                    u16 = (-u14);
                    if (!(0.0f > u14)) {
                        u16 = u14;
                    }
                    u18 = *(float *)((t4 + 0xAF0));
                    u19 = (-u18);
                    if (!(0.0f > u18)) {
                        u19 = u18;
                    }
                    if (u19 > u16) {
                        u23 = *(float *)0x8C291F50;
                        t26 = 0x1;
                        if (u23 > 0.0f) {
                        } else {
                            t24 = 0x0;
                            if (0.0f > u23) {
                                t24 = 0xFFFFFFFF;
                            }
                            t26 = t24;
                        }
                        if ((float)t26 == (-(*(float *)((t5 + 0xB00))))) {
                            t1 = t5;
                            cpuDblPoachCheck(t1);
                        } else {
                            t33 = t0;
                            t35 = t2;
                        }
                        t0 = t33;
                        t1 = t5;
                        t2 = t35;
                        cpuDblThink(t1);
                        t1 = t4;
                    } else {
                        u42 = *(float *)0x8C291F50;
                        t45 = 0x1;
                        if (u42 > 0.0f) {
                        } else {
                            t43 = 0x0;
                            if (0.0f > u42) {
                                t43 = 0xFFFFFFFF;
                            }
                            t45 = t43;
                        }
                        if ((float)t45 == (-(*(float *)((t4 + 0xB00))))) {
                            t1 = t4;
                            cpuDblPoachCheck(t1);
                        } else {
                            t52 = t0;
                            t54 = t2;
                        }
                        t0 = t52;
                        t1 = t4;
                        t2 = t54;
                        cpuDblThink(t1);
                        t1 = t5;
                    }
                    t95 = (cpuDblThink(t1));
                } else {
                    t0 = 0x8C23D204;
                    t1 = (t1 * 0x160);
                    t4 = (*(int *)0x8C2FCC1C);
                    t1 = (t1 + 0x8C2FC69C);
                    *(unsigned int *)0x8C2FCC1C = ((unsigned char)(*(signed char *)((t3 + 0x141))) + 0xE);
                    u69 = (*(float *)((t1 + 0xC)));
                    u69 = u69 + 10.0f * (*(float *)((t0 + 0x0)));
                    *(float *)((t1 + 0xC)) = u69;
                    if (u69 > 100.0f) {
                        *(float *)((t1 + 0xC)) = 100.0f;
                    }
                    u71 = *(float *)0x8C291F50;
                    if (u71 > 0.0f) {
                        t0 = 0x1;
                    } else {
                        if (0.0f > u71) {
                            t0 = 0xFFFFFFFF;
                        } else {
                            t0 = 0x0;
                        }
                    }
                    if ((float)t0 == (-(*(float *)((t5 + 0xB00))))) {
                        t0 = (*(signed char *)(((((*(int *)((t5 + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x141)));
                        t0 = (unsigned char)t0;
                        t0 = (t0 << 2);
                        t1 = t5;
                        t80 = ((int (*)(int, int, float))((*(int *)((t0 + 0x8C10D890)))))(t1, t2, u71);
                    } else {
                        t85 = t1;
                        t86 = t2;
                    }
                    t0 = 0x8C06AB78;
                    t1 = t85;
                    t2 = t86;
                    t1 = t5;
                    cpuDblPosition(t1);
                    t1 = t5;
                    t94 = cpuDblThink(t1);
                    *(unsigned int *)0x8C2FCC1C = t4;
                    t95 = t94;
                }
                t98 = t95;
            }
            t104 = t98;
            t107 = t101;
            t108 = t102;
        }
        t0 = 0xD78;
        t1 = t107;
        t2 = t108;
        t5 = (t5 + t0);
        t0 = (*(int *)(((int)stk + 8)));
        t3 = (t3 + 0x160);
        t0 = (t0 - 1);
        *(unsigned int *)(((int)stk + 8)) = t0;
        if ((int)t0 >= 0) continue;
        break;
    }
    return t104;
}

int decoWaveDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float t1;
    float t10;
    float t19;
    float t28;
    float t37;
    float t46;
    float u56;
    float u7;
    float u16;
    float u25;
    float u34;
    float u43;
    float u52;
    int stk[26];

    stk[14] = a8;
    stk[15] = a9;
    stk[16] = a10;
    stk[17] = a11;
    if (a4 == 0) {
        t1 = nlSin((((*(int *)0x8C20D198) << 8) << 2));
        if (!(0.0f > t1)) {
            u7 = (nlSin((((*(int *)0x8C20D198) << 8) << 2)));
        } else {
            u7 = (-(nlSin((((*(int *)0x8C20D198) << 8) << 2))));
        }
        *(float *)((((int)stk + 20) + 0x0)) = u7;
        t10 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400));
        if (!(0.0f > t10)) {
            u16 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400)));
        } else {
            u16 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x1400))));
        }
        *(float *)((((int)stk + 20) + 0x4)) = u16;
        t19 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800));
        if (!(0.0f > t19)) {
            u25 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800)));
        } else {
            u25 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) + 0x2800))));
        }
        u56 = u25;
    } else {
        t28 = nlSin((((*(int *)0x8C20D198) << 8) << 2));
        if (!(0.0f > t28)) {
            u34 = (nlSin((((*(int *)0x8C20D198) << 8) << 2)));
        } else {
            u34 = (-(nlSin((((*(int *)0x8C20D198) << 8) << 2))));
        }
        *(float *)((((int)stk + 20) + 0x0)) = u34;
        t37 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 5120));
        if (!(0.0f > t37)) {
            u43 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 5120)));
        } else {
            u43 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 5120))));
        }
        *(float *)((((int)stk + 20) + 0x4)) = u43;
        t46 = nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 10240));
        if (!(0.0f > t46)) {
            u52 = (nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 10240)));
        } else {
            u52 = (-(nlSin(((((*(int *)0x8C20D198) << 8) << 2) - 10240))));
        }
        u56 = u52;
    }
    *(float *)((((int)stk + 20) + 0x8)) = u56;
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x24) + 0x0))), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D08));
    *(volatile float *)((((int)stk + 20) + 0x0));
    decoPairPut(a4);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x24) + 0x0))) + (*(float *)0x8C0A5D10)), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D0C));
    *(volatile float *)((((int)stk + 20) + 0x4));
    decoPairPut(a4);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x24) + 0x0))) + (*(float *)0x8C0A5D18)), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D14));
    *(volatile float *)((((int)stk + 20) + 0x8));
    return (decoPairPut(a4));
}

int stageCrowdTexLoad(void)
{
    int t12;
    int t15;
    int t24;
    int t25;
    int t33;
    int t34;
    int t44;
    int t45;
    int t55;
    int t56;
    int t66;
    int t67;
    int t76;
    int t77;
    int t86;
    int t87;
    int t96;
    int t97;
    int t106;
    int t107;
    int stk[10];

    int R0;
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
    L_8C0B1C54:;
    *(unsigned int *)0x8C188E80 = 0x0;
    nlSetCommonTextureOffset(0xF00);
    R10 = (0x8C1891F0);
    R11 = (0x8C13293C);
    R12 = (0x8C0F1E90);
    R13 = (0x8C188E80);
    R14 = (0x0);
    if (((*(int *)0x8C1891F0) != 2)) goto L_8C0B1CA0;
    goto L_8C0B1C7E;
    L_8C0B1C7E:;
    R8 = (R14);
    R9 = (0x8C186520);
    goto L_8C0B1C82;
    L_8C0B1C82:;
    t12 = (nlObjPutLoadTexture((*(int *)((R9 + 0x0))), R11)) == 0;
    if (t12) goto L_8C0B1C90;
    goto L_8C0B1C8C;
    L_8C0B1C8C:;
    goto L_8C0B1E0A;
    L_8C0B1E0A:;
    R0 = (0x1);
    goto L_8C0B1E1C;
    L_8C0B1E1C:;
    return R0;
    L_8C0B1C90:;
    *(unsigned int *)((R13 + 0x0)) = ((*(int *)((R13 + 0x0))) + 0x1);
    t15 = (unsigned int)(R8 + 0x1) < (unsigned int)0x27;
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t15) goto L_8C0B1C82;
    goto L_8C0B1CA0;
    L_8C0B1CA0:;
    R9 = (0x26);
    if (((*(int *)((R10 + 0x0))) != 0)) goto L_8C0B1CC8;
    goto L_8C0B1CA8;
    L_8C0B1CA8:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C186F74);
    goto L_8C0B1CAC;
    L_8C0B1CAC:;
    t24 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) == 0;
    if (t24) goto L_8C0B1CBA;
    goto L_8C0B1CB6;
    L_8C0B1CB6:;
    goto L_8C0B1E0A;
    L_8C0B1CBA:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t25 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t25 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t25 + 0x1) < (unsigned int)R9)) goto L_8C0B1CAC;
    goto L_8C0B1CC8;
    L_8C0B1CC8:;
    if (((*(int *)((R10 + 0x0))) != 1)) goto L_8C0B1CF0;
    goto L_8C0B1CCE;
    L_8C0B1CCE:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C186A30);
    goto L_8C0B1CD2;
    L_8C0B1CD2:;
    t33 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) == 0;
    if (t33) goto L_8C0B1CE0;
    goto L_8C0B1CDC;
    L_8C0B1CDC:;
    goto L_8C0B1E0A;
    L_8C0B1CE0:;
    *(unsigned int *)((R13 + 0x0)) = 0x1;
    t34 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t34 + 0x1);
    R4 = (0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t34 + 0x1) < (unsigned int)R9)) goto L_8C0B1CD2;
    goto L_8C0B1CF0;
    L_8C0B1CF0:;
    if (((*(int *)((R10 + 0x0))) != 3)) goto L_8C0B1D14;
    goto L_8C0B1CF6;
    L_8C0B1CF6:;
    R8 = (R14);
    R9 = (0x8C187470);
    goto L_8C0B1CFA;
    L_8C0B1CFA:;
    t44 = (nlObjPutLoadTexture((*(int *)((R9 + 0x0))), R11)) == 0;
    if (t44) goto L_8C0B1D08;
    goto L_8C0B1D04;
    L_8C0B1D04:;
    goto L_8C0B1E0A;
    L_8C0B1D08:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t45 = (unsigned int)(R8 + 0x1) < (unsigned int)0x19;
    R4 = (0x19);
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t45) goto L_8C0B1CFA;
    goto L_8C0B1D14;
    L_8C0B1D14:;
    if (((*(int *)((R10 + 0x0))) != 4)) goto L_8C0B1D34;
    goto L_8C0B1D1A;
    L_8C0B1D1A:;
    R8 = (R14);
    R9 = (0x8C187A24);
    goto L_8C0B1D1E;
    L_8C0B1D1E:;
    t55 = (nlObjPutLoadTexture((*(int *)((R9 + 0x0))), R11)) != 0;
    if (t55) goto L_8C0B1E0A;
    goto L_8C0B1D28;
    L_8C0B1D28:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t56 = (unsigned int)(R8 + 0x1) < (unsigned int)0x12;
    R4 = (0x12);
    R8 = ((R8 + 0x1));
    R9 = ((R9 + 0x4));
    if (t56) goto L_8C0B1D1E;
    goto L_8C0B1D34;
    L_8C0B1D34:;
    R9 = (0xB);
    if (((*(int *)((R10 + 0x0))) != 5)) goto L_8C0B1D8C;
    goto L_8C0B1D3C;
    L_8C0B1D3C:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C187D98);
    goto L_8C0B1D40;
    L_8C0B1D40:;
    t66 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) != 0;
    if (t66) goto L_8C0B1E0A;
    goto L_8C0B1D4A;
    L_8C0B1D4A:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t67 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t67 + 0x1);
    R8 = ((R8 + 0x4));
    T_ = ((((unsigned int)(t67 + 0x1) >= (unsigned int)R9)));
    goto L_8C0B1D88;
    L_8C0B1D88:;
    if ((!T_)) goto L_8C0B1D40;
    goto L_8C0B1D8C;
    L_8C0B1D8C:;
    if (((*(int *)((R10 + 0x0))) != 6)) goto L_8C0B1DB0;
    goto L_8C0B1D92;
    L_8C0B1D92:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C1880D8);
    goto L_8C0B1D96;
    L_8C0B1D96:;
    t76 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) != 0;
    if (t76) goto L_8C0B1E0A;
    goto L_8C0B1DA0;
    L_8C0B1DA0:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t77 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t77 + 0x1);
    R4 = (0x6);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t77 + 0x1) < (unsigned int)0x6)) goto L_8C0B1D96;
    goto L_8C0B1DB0;
    L_8C0B1DB0:;
    if (((*(int *)((R10 + 0x0))) != 7)) goto L_8C0B1DD4;
    goto L_8C0B1DB6;
    L_8C0B1DB6:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C18841C);
    goto L_8C0B1DBA;
    L_8C0B1DBA:;
    t86 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) != 0;
    if (t86) goto L_8C0B1E0A;
    goto L_8C0B1DC4;
    L_8C0B1DC4:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t87 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t87 + 0x1);
    R4 = (0x9);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t87 + 0x1) < (unsigned int)0x9)) goto L_8C0B1DBA;
    goto L_8C0B1DD4;
    L_8C0B1DD4:;
    if (((*(int *)((R10 + 0x0))) != 8)) goto L_8C0B1DF6;
    goto L_8C0B1DDA;
    L_8C0B1DDA:;
    *(unsigned int *)(((int)stk + 4)) = R14;
    R8 = (0x8C188768);
    goto L_8C0B1DDE;
    L_8C0B1DDE:;
    t96 = (nlObjPutLoadTexture((*(int *)((R8 + 0x0))), R11)) != 0;
    if (t96) goto L_8C0B1E0A;
    goto L_8C0B1DE8;
    L_8C0B1DE8:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t97 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (t97 + 0x1);
    R8 = ((R8 + 0x4));
    if (((unsigned int)(t97 + 0x1) < (unsigned int)R9)) goto L_8C0B1DDE;
    goto L_8C0B1DF6;
    L_8C0B1DF6:;
    if (((*(int *)((R10 + 0x0))) != 9)) goto L_8C0B1E1A;
    goto L_8C0B1DFC;
    L_8C0B1DFC:;
    R10 = (0x8C188B14);
    R9 = (R14);
    goto L_8C0B1E00;
    L_8C0B1E00:;
    t106 = (nlObjPutLoadTexture((*(int *)((R10 + 0x0))), R11)) == 0;
    if (t106) goto L_8C0B1E0E;
    goto L_8C0B1E0A;
    L_8C0B1E0E:;
    *(unsigned int *)((R13 + 0x0)) = R14;
    t107 = (unsigned int)(R9 + 0x1) < (unsigned int)0x21;
    R10 = ((R10 + 0x4));
    R4 = (0x21);
    R9 = ((R9 + 0x1));
    if (t107) goto L_8C0B1E00;
    goto L_8C0B1E1A;
    L_8C0B1E1A:;
    R0 = (0x0);
    goto L_8C0B1E1C;
}

int vmsio_get_media_info(int a4, int a5)
{
    int t0;
    int t2;
    int t11;
    int t13;
    int t15;
    int t16;
    int t19;
    int t20;
    int t53;
    int t54;
    int t67;
    int t63;
    int stk[13];

    t0 = *(int *)(((a4 << 2) + 0x8C20B048));
    *(unsigned int *)(((int)stk + 4)) = (kdGetDevice(t0));
    t2 = kdGetDeviceInfo(t0);
    if ((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0) {
        vmsfb_sleep();
        t67 = 0xFFFFFF01;
    } else {
        if (((*(int *)((t2 + 0x0))) & 2) == 0) {
            vmsfb_sleep();
            t63 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t11 = kdSetGetMediaInfo();
                    if ((int)t11 < 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t13 = kdGetStatus(t0, t11);
                    if (t13 == 0) {
                        vmsfb_sleep();
                        continue;
                    }
                    break;
                }
                t15 = kdGetDevice(t0);
                t16 = kdIsChanged(t0);
                if (t16 != 0) {
                    break;
                }
                t19 = *(signed char *)((t15 + 0x4));
                t20 = *(int *)((t15 + 0x8));
                if ((unsigned char)t19 != 8) {
                    if ((unsigned char)t19 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x0));
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x2));
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x4));
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x6));
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x8));
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0xA));
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0xC));
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x10));
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x12));
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)(((int (*)(int, int))((*(int *)(((*(int *)0x8C464594) + 0xC)))))((t20 + 0x8), 0x14));
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xE)));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)(*(signed char *)(((t20 + 0x8) + 0xF)));
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t53 = kdGetDeviceInfo(t0);
                t54 = kdDevGetStorageInfo((((int)stk + 4) + 0x4), t53);
                if ((int)t54 >= 0) {
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 14)));
                    *(unsigned int *)(((0x40 + a5) + 0x0)) = (unsigned short)(*(short *)(((int)stk + 12)));
                    *(unsigned int *)(((0x44 + a5) + 0x0)) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 14)))));
                    *(unsigned int *)(((0x48 + a5) + 0x0)) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 12)))));
                    return 0x0;
                }
                vmsfb_sleep();
                return 0xFFFFFF01;
            }
            vmsfb_sleep();
            t63 = 0xFFFFFF30;
        }
        t67 = t63;
    }
    return t67;
}

int courtFraDrawAnim(void)
{
    float t6;
    float t18;
    float t30;
    float t42;
    int t48;
    int t63;
    int t49;
    int t62;

    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B44), (*(float *)0x8C120B48), (*(float *)0x8C120B4C));
    t6 = nlSin((unsigned short)(*(short *)0x8C189FBC));
    nlRotateAY((int)(7168.0f * t6));
    nlObjPut((*(int *)((0x8C189D6C + ((*(int *)0x8C189FAC) << 2)))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B50), (*(float *)0x8C120B54), (*(float *)0x8C120B58));
    t18 = nlSin((unsigned short)(*(short *)0x8C189FBE));
    nlRotateAY((int)(7168.0f * t18));
    nlObjPut((*(int *)(((((*(int *)0x8C189FB0) << 2) + 0x8C189D6C) + 0xC0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B5C), (*(float *)0x8C120B60), (*(float *)0x8C120B64));
    t30 = nlSin((unsigned short)(*(short *)0x8C189FC0));
    nlRotateAY((int)(7168.0f * t30));
    nlObjPut((*(int *)((((*(int *)0x8C189FB4) << 2) + 0x8C189EEC))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)0x8C120B68), (*(float *)0x8C120B6C), (*(float *)0x8C120B70));
    t42 = nlSin((unsigned short)(*(short *)0x8C189FC2));
    nlRotateAY((int)(7168.0f * t42));
    nlObjPut((*(int *)((((*(int *)0x8C189FB8) << 2) + 0x8C189EEC))));
    t48 = *(int *)0x8C287C60;
    t63 = (nlPopMatrix(0x1));
    if (t48 == 0) {
        t49 = 0x8C189FBC;
        for (;;) {
            *(unsigned short *)((t49 + 0x0)) = ((*(short *)((t49 + 0x0))) + 0x100);
            t49 = (t49 + 0x2);
            if ((unsigned int)t49 >= (unsigned int)0x8C189FC4) {
                break;
            }
        }
        *(unsigned int *)0x8C189FAC = ((*(int *)0x8C189FAC) + 0x1);
        *(unsigned int *)0x8C189FB0 = ((*(int *)0x8C189FB0) + 0x1);
        *(unsigned int *)0x8C189FB4 = ((*(int *)0x8C189FB4) + 0x1);
        *(unsigned int *)0x8C189FB8 = ((*(int *)0x8C189FB8) + 0x1);
        *(unsigned int *)0x8C189FAC = ((int)((int)(*(int *)0x8C189FAC) % (int)0x30));
        *(unsigned int *)0x8C189FB0 = ((int)((int)(*(int *)0x8C189FB0) % (int)0x30));
        *(unsigned int *)0x8C189FB4 = ((int)((int)(*(int *)0x8C189FB4) % (int)0x30));
        t62 = (int)((int)(*(int *)0x8C189FB8) % (int)0x30);
        *(unsigned int *)0x8C189FB8 = t62;
        t63 = t62;
    }
    return t63;
}

int shopDrawPrice(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t9;
    int t10;
    int t12;
    int t13;
    int t28;
    int t6;
    float u14;
    int t25;
    int stk[51];

    stk[39] = a8;
    stk[40] = a9;
    stk[41] = a10;
    stk[42] = a11;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 32) + 0x28)) = *(struct mv10 *)(0x8C127044); }
    if (a4 == -1) {
        if (a5 != 6) {
            *(float *)(((((int)stk + 32) + 0x7C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x7C) + 0x0))) + -40.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x7C)); }
            sprPutCentered(a4, a5, a6, a7, (((int)stk + 32) + 0x4), (*(float *)0x8C1DB838), 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
            t6 = 0x8C1DB7E4;
        } else {
            *(float *)(((((int)stk + 32) + 0x7C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x7C) + 0x0))) + -60.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x7C)); }
            sprPutCentered(a4, a5, a6, a7, (((int)stk + 32) + 0x4), (*(float *)0x8C1DBFD0), 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
            t6 = 0x8C1DBF7C;
        }
        t28 = (sprListPut(t6, 0x1, 0x0, *(Stk3 *)((((int)stk + 32) + 0x4)), 1.0f, 1.0f, 1.0f));
    } else {
        t9 = 0x8C0E73F4;
        t10 = 0x8C127044;
        t12 = 0x0;
        t13 = a4;
        for (;;) {
            if (t13 == 0) {
                break;
            }
            t10 = 0x8C0F7BAC;
            t9 = 0xA;
            t9 = ((int)((int)t13 % (int)t9));
            *(unsigned int *)(((int)stk + 32)) = t9;
            t9 = 0xC;
            t10 = (((int)stk + 32) + 0x7C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t10); }
            t9 = (*(int *)(((int)stk + 32)));
            t9 = (t9 << 2);
            t9 = (sprListPut((*(int *)(((((int)stk + 32) + 0x28) + t9))), 0x1, 0x0, *(Stk3 *)(t10), 1.0f, 1.0f, 1.0f));
            t9 = 0xA;
            t12 = (t12 + 0x1);
            t9 = ((int)((int)t13 / (int)t9));
            t13 = t9;
            t9 = 0x3;
            t9 = ((int)((int)t12 % (int)t9));
            if ((t9 == 0) && (t13 != 0)) {
                u14 = (*(float *)(((((int)stk + 32) + 0x7C) + 0x0)));
                t9 = 0xC;
                u14 = (u14 - 13.0f);
                t10 = (((int)stk + 32) + 0x7C);
                *(float *)(((((int)stk + 32) + 0x7C) + 0x0)) = u14;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(t10); }
                t9 = (sprListPut(0x8C1DB268, 0x1, 0x0, *(Stk3 *)(t10), 1.0f, 1.0f, 1.0f));
                u14 = (*(float *)(((((int)stk + 32) + 0x7C) + 0x0)));
                u14 = (u14 - 13.0f);
            } else {
                u14 = (*(float *)(((((int)stk + 32) + 0x7C) + 0x0)));
                u14 = (u14 - 15.0f);
                t25 = 0x8C0F7BAC;
            }
            *(float *)(((((int)stk + 32) + 0x7C) + 0x0)) = u14;
            t10 = t25;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x7C)); }
        t28 = (sprListPut(0x8C1DB1FC, 0x1, 0x0, *(Stk3 *)((((int)stk + 32) + 0x7C)), 1.0f, 1.0f, 1.0f));
    }
    return t28;
}

void syIntInit(int a4, int a5)
{
    int t0;
    int t5;
    int t6;
    int t7;
    int t9;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t18;
    int t20;
    int t21;
    int t23;
    int t24;
    int t25;
    int t27;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t43;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0xFF00001C = ((*(int *)0xFF00001C) | 0x800);
    if (a4 == 0x80000000) {
        *(unsigned int *)0x8C1FC76C = 0x8C1FC964;
        *(unsigned int *)0x8C1FC7C8 = 0x8C1FC964;
        *(unsigned int *)0x8C1FCB0C = 0x0;
        *(unsigned int *)0x8C1FCB04 = a5;
    } else {
        *(unsigned int *)0x8C1FC76C = 0x8C1FC7FC;
        *(unsigned int *)0x8C1FC7C8 = 0x8C1FC7FC;
        *(unsigned int *)0x8C1FCB0C = 0x0;
        *(unsigned int *)0x8C1FCB04 = 0x0;
    }
    t5 = 0x8C1FCB0C;
    t6 = 0x8C1FC7CC;
    t7 = ((int)_builtin_get_vbr());
    for (;;) {
        if ((unsigned int)t6 > (unsigned int)0x8C1FC7FC) {
            break;
        }
        t5 = (*(int *)((t6 + 0x0)));
        t6 = (t6 + 0x4);
        *(unsigned int *)((t7 + 0x0)) = t5;
        t7 = (t7 + 0x4);
    }
    t9 = (int)_builtin_get_vbr();
    t11 = ((int)_builtin_get_vbr());
    t12 = (((unsigned int)((unsigned int)((unsigned int)(t7 - t9) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t11);
        t12 = (t12 - 0x1);
        t11 = (t11 + 0x20);
        if (t12 == 0) {
            break;
        }
    }
    t14 = t5;
    t15 = 0x8C1FC738;
    t16 = (((int)_builtin_get_vbr()) + 0x100);
    for (;;) {
        if ((unsigned int)t15 > (unsigned int)0x8C1FC770) {
            break;
        }
        t14 = (*(int *)((t15 + 0x0)));
        t15 = (t15 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t14;
        t16 = (t16 + 0x4);
    }
    t18 = (int)_builtin_get_vbr();
    t20 = (((int)_builtin_get_vbr()) + 0x400);
    t21 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFF00 + (t16 - t18)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t20);
        t21 = (t21 - 0x1);
        t20 = (t20 + 0x20);
        if (t21 == 0) {
            break;
        }
    }
    t23 = t14;
    t24 = 0x8C1FC738;
    t25 = (((int)_builtin_get_vbr()) + 0x400);
    for (;;) {
        if ((unsigned int)t24 > (unsigned int)0x8C1FC770) {
            break;
        }
        t23 = (*(int *)((t24 + 0x0)));
        t24 = (t24 + 0x4);
        *(unsigned int *)((t25 + 0x0)) = t23;
        t25 = (t25 + 0x4);
    }
    t27 = (int)_builtin_get_vbr();
    t29 = (((int)_builtin_get_vbr()) + 0x1000);
    t30 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFC00 + (t25 - t27)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t29);
        t30 = (t30 - 0x1);
        t29 = (t29 + 0x20);
        if (t30 == 0) {
            break;
        }
    }
    t32 = t23;
    t33 = 0x8C1FC770;
    t34 = (((int)_builtin_get_vbr()) + 0x600);
    for (;;) {
        if ((unsigned int)t33 > (unsigned int)0x8C1FC7CC) {
            break;
        }
        t32 = (*(int *)((t33 + 0x0)));
        t33 = (t33 + 0x4);
        *(unsigned int *)((t34 + 0x0)) = t32;
        t34 = (t34 + 0x4);
    }
    t36 = (int)_builtin_get_vbr();
    t38 = (((int)_builtin_get_vbr()) + 0x1800);
    t39 = (((unsigned int)((unsigned int)((unsigned int)(0xFFFFFA00 + (t34 - t36)) >> 2) >> 2) >> 1) + 0x1);
    for (;;) {
        iaOcbp((void *)t38);
        t39 = (t39 - 0x1);
        t38 = (t38 + 0x20);
        if (t39 == 0) {
            break;
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    t40 = 0xFFFFFE40;
    for (;;) {
        t43 = (((int)_builtin_get_vbr()) + (((t40 >> 1) >> 1) >> 1));
        t40 = (t40 + 0x20);
        *(unsigned int *)(((t43 + 0x200) + 0x0)) = 0x8C1FC640;
        if ((int)t40 >= (int)0x620) {
            break;
        }
    }
    _builtin_set_cr((_builtin_get_cr() & 0xEFFFFFFF));
}
