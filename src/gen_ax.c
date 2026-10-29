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


