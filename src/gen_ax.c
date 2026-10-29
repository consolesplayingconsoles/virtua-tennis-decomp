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
    register int t12;
    register int t15;
    register int t24;
    register int t25;
    register int t33;
    register int t34;
    register int t44;
    register int t45;
    register int t55;
    register int t56;
    register int t66;
    register int t67;
    register int t76;
    register int t77;
    register int t86;
    register int t87;
    register int t96;
    register int t97;
    register int t106;
    register int t107;
    int stk[10];

    register int R0;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
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



int shopDrawPrice(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register int t28;
    register int t6;
    register float u14;
    register int t25;
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

