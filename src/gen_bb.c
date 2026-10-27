/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int buCalcBackupFileSize(int, int, int);
int buGetLastError(int);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int, int, int);
int buStat(int);
int camGetAngles(int, int);
int camMoveBegin(float, float);
extern int camSetEye();
extern int camSetTarget();
int cpuSglAim(int, int, int, int);
int evPackFade(int, int, int);
int evPackRamp(int, int, int, int);
int kmRender(int);
int kmRenderRect(int);
int kmSetRegionClipping(int, int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlFree(int);
int nlMalloc(int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nl_action_PixelClipping(void);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int primRectFrame(int, int, int, int, Stk3);
int primSprDrawScaleAlpha(int, int, int, int, Stk3, float, float, float);
int primTexVertexSet(int, int, int, int, int, float, float);
int selModelSpawn(int, int);
int serveGetServer(void);
int set_event(int, int);
extern int sprPutAtAlpha();
int sprPutCropV(int, int, Stk3, float, float, float);
int strmVoiceSetVol(int);
int sunMatrixSet(int, int);
int syRtcGetDate(int);
float vecLength(Stk4);
int vecMake(int, int, int, int, int, float, float, float);
int vecSub(int, int, int, int, int);
int hudFontNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int standBoxesDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int primSprDrawScale(int a4, int a5, int a6, int a7, float f4, float f5);
int primSprDrawScaleOfs(int a4, int a5, int a6, int a7, float f4, float f5);
int hudSignPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int strmCrowdCue(int a4, int a5, int a6);
int primSprDrawOfs(int a4, int a5, int a6, int a7);
int ballWallStop(int a4);
int eepromVmuSave(int a4);
int endingTrophyPut(void);
int entryCharaCursorInit(int a4);
int nlSysRender(int a4);
int countryNamePutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int hudCallDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int endingCameraSet(int a4, int a5, int a6, int a7);
void effFootDust(int a4, int a5, int a6, int a7);
int cpuSglShot(int a4, int a5, int a6, int a7);
int cpuDblNetmanPos(int a4, float f4, float f5, float f6);


int standBoxesDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[50];

    stk[38] = a8;
    stk[39] = a9;
    stk[40] = a10;
    stk[41] = a11;
    *(unsigned int *)(((int)stk + 88)) = (((int)stk + 88) + 0xC);
    *(unsigned int *)(((((int)stk + 88) + 0xC) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 92)) = ((((int)stk + 88) + 0xC) + 0x4);
    *(unsigned int *)((((((int)stk + 88) + 0xC) + 0x4) + 0x0)) = 0xFFFFFF96;
    *(unsigned int *)((((((int)stk + 88) + 0xC) + 0x8) + 0x0)) = 0x5AFFFF00;
    *(unsigned int *)(((int)stk + 96)) = ((((int)stk + 88) + 0xC) + 0xC);
    *(unsigned int *)((((((int)stk + 88) + 0xC) + 0xC) + 0x0)) = 0x3CFFFF00;
    *(unsigned int *)((((((int)stk + 88) + 0xC) + 0x10) + 0x0)) = 0x1EFFFF00;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame(a4, a5, 0x1, (*(int *)((((((int)stk + 88) + 0xC) + 0x8) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame((a4 + 0x2), (a5 + 0x2), 0x1, (*(int *)(((*(int *)(((int)stk + 88))) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame((a4 + 0x4), (a5 + 0x4), 0x1, (*(int *)(((*(int *)(((int)stk + 92))) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame((a4 + 0x6), (a5 + 0x6), 0x1, (*(int *)((((((int)stk + 88) + 0xC) + 0x8) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame((a4 + 0x8), (a5 + 0x8), 0x1, (*(int *)(((*(int *)(((int)stk + 96))) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    primRectFrame((a4 + 0xA), (a5 + 0xA), 0x1, (*(int *)((((((int)stk + 88) + 0xC) + 0x10) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40)));
    *(float *)(((((int)stk + 88) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x0))) + 1.0f);
    *(float *)(((((int)stk + 88) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 88) + 0x40) + 0x4))) - 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
    return (primRectFrame((a4 + 0xC), (a5 + 0xC), 0x1, (*(int *)((((((int)stk + 88) + 0xC) + 0x10) + 0x0))), *(Stk3 *)((((int)stk + 88) + 0x40))));
}



int hudSignPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t1;
    int t5;
    int t13;
    int t21;
    int t29;
    int t37;
    int t39;
    int t31;
    int t23;
    int t15;
    int t7;
    int stk[21];

    stk[9] = a8;
    stk[10] = a9;
    stk[11] = a10;
    stk[12] = a11;
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        *(float *)(((((int)stk + 16) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x4))) + 1.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t1 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F630, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x4))) - 1.0f);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 201.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t7 = 0x230;
                    } else {
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 10.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t5 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F400, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
                        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 117.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                        t7 = 0x140;
                    }
                    t15 = t7;
                } else {
                    *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                    t13 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F4A0, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
                    *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                    t15 = 0x140;
                }
                t23 = t15;
            } else {
                *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                t21 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F590, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
                *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                t23 = 0x140;
            }
            t31 = t23;
        } else {
            *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            t29 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F450, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
            *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            t31 = 0x140;
        }
        t39 = t31;
    } else {
        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 29.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        t37 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33F540, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x14)), f4);
        *(float *)(((((int)stk + 16) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x14) + 0x0))) + 91.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
        t39 = 0x140;
    }
    return (((int (*)(int, Stk3, float))(sprPutAtAlpha))((t39 + 0x8C33F3B0), *(Stk3 *)((((int)stk + 16) + 0x14)), f4));
}

int strmCrowdCue(int a4, int a5, int a6)
{
    int t1;

    if (a4 == 1) {
        *(unsigned int *)0x8C1D4B44 = (*(int *)0x8C1D4B40);
        t1 = *(int *)0x8C1D4B40;
        *(unsigned int *)0x8C1D4B40 = (t1 + 0x1);
        if ((int)(t1 + 0x1) > (int)0x1) {
            *(unsigned int *)0x8C1D4B40 = 0x0;
        }
    }
    if (a4 == 1) {
        nlsndSeqRequest(0xD03A9);
    }
    if (a4 == 0xFA) {
        nlsndSeqRequest(0x503A9);
    }
    if ((int)a4 >= (int)0x12C) {
        if ((((int)((int)a4 % (int)0xC8)) == 0) && ((a5 != 10) || ((int)a6 > (int)0x12C))) {
            nlsndSeqRequest(0x503A9);
        }
    }
    if (a4 == 1) {
        nlsndSystemControl(0x1, 0x10A0, 0x78);
    }
    if ((a5 == 1) && (a6 == 60)) {
        evPackFade(0x1, 0x64, 0x64);
    }
    if (a5 == 2) {
        if (a6 == 60) {
            evPackRamp(0x1, 0xA, 0x64, 0x78);
        }
        if ((a5 == 2) && (a6 == 0)) {
            evPackFade(0x1, 0x64, 0x64);
        }
    }
    if ((a5 == 5) && (a6 == 1)) {
        evPackRamp(0x1, 0xA, 0x64, 0x78);
    }
    if ((a5 == 6) && (a6 == 1)) {
        evPackFade(0x1, 0xA, 0x64);
    }
    if ((a5 == 8) && (a6 == 20)) {
        evPackRamp(0x1, 0x64, 0x64, 0x78);
    }
    if (a5 == 10) {
        if (a6 == 110) {
            evPackFade(0x1, 0x64, 0x0);
        }
        if (a5 == 10) {
            if (a6 == 1) {
                return strmVoiceSetVol((unsigned char)(*(signed char *)0x8C40C2FD));
            }
            return a6;
        }
        return a5;
    }
    return a5;
}


int ballWallStop(int a4)
{
    float u2;
    float u12;
    float u29;
    float u38;
    float u49;
    int t53;
    float u57;
    int stk[2];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    L_8C0CDC3C:;
    if (((*(float *)((R4 + 0x10))) > 24.7999992f)) goto L_8C0CDCA8;
    goto L_8C0CDC4E;
    L_8C0CDC4E:;
    u2 = *(float *)((R4 + 0x8));
    R0 = (0x8);
    F1 = (0.0f);
    F2 = (u2);
    if ((0.0f > u2)) goto L_8C0CDC5C;
    goto L_8C0CDC58;
    L_8C0CDC58:;
    F2 = ((*(float *)((R4 + R0))));
    goto L_8C0CDC5E;
    L_8C0CDC5E:;
    if ((!((float)(*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11BC))) > F2))) goto L_8C0CDCA8;
    goto L_8C0CDC72;
    L_8C0CDC72:;
    u12 = *(float *)((R4 + 0x14));
    R0 = (0x14);
    F3 = (u12);
    if ((0.0f > u12)) goto L_8C0CDC80;
    goto L_8C0CDC7C;
    L_8C0CDC7C:;
    F3 = ((*(float *)((R4 + R0))));
    goto L_8C0CDC82;
    L_8C0CDC82:;
    R0 = (0x8C1D11BC);
    if (((float)(*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11BC))) > F3)) goto L_8C0CDCA8;
    goto L_8C0CDC96;
    L_8C0CDC96:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x24)) = *(struct mv3 *)((R4 + 0x34)); }
    R0 = (0x2C);
    goto L_8C0CDD0A;
    L_8C0CDD0A:;
    *(float *)((R4 + R0)) = ((*(float *)((R4 + R0))) * F4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x18)) = *(struct mv3 *)((R4 + 0xC)); }
    *(float *)((R4 + 0x30)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((R4 + 0x4C)) = ((*(int *)((R4 + 0x4C))) + 0x1);
    *(unsigned int *)((R4 + 0x54)) = ((*(int *)((R4 + 0x54))) | 0x1);
    R0 = (0x54);
    goto L_8C0CDD9E;
    L_8C0CDD9E:;
    return R0;
    L_8C0CDCA8:;
    if (((*(float *)((R4 + 0x10))) > 7.80000019f)) goto L_8C0CDD46;
    goto L_8C0CDCB4;
    L_8C0CDCB4:;
    u29 = *(float *)((R4 + 0x0));
    F1 = (0.0f);
    F2 = (u29);
    if ((0.0f > u29)) goto L_8C0CDCC0;
    goto L_8C0CDCBC;
    L_8C0CDCBC:;
    F2 = ((*(float *)((R4 + 0x0))));
    goto L_8C0CDCC2;
    L_8C0CDCC2:;
    if ((!((float)(*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8))) > F2))) goto L_8C0CDD46;
    goto L_8C0CDCD6;
    L_8C0CDCD6:;
    u38 = *(float *)((R4 + 0xC));
    R0 = (0xC);
    F3 = (u38);
    if ((0.0f > u38)) goto L_8C0CDCE4;
    goto L_8C0CDCE0;
    L_8C0CDCE0:;
    F3 = ((*(float *)((R4 + R0))));
    goto L_8C0CDCE6;
    L_8C0CDCE6:;
    R0 = (0x8C1D11B8);
    if (((float)(*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8))) > F3)) goto L_8C0CDD46;
    goto L_8C0CDCFA;
    L_8C0CDCFA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R4 + 0x24)) = *(struct mv3 *)((R4 + 0x34)); }
    R0 = (0x24);
    goto L_8C0CDD0A;
    L_8C0CDD46:;
    u49 = *(float *)((R4 + 0x14));
    F4 = (u49);
    if ((0.0f > u49)) goto L_8C0CDD54;
    goto L_8C0CDD50;
    L_8C0CDD50:;
    F3 = (F4);
    goto L_8C0CDD58;
    L_8C0CDD58:;
    t53 = *(int *)0x8C1891E8;
    R5 = ((((t53 << 2) << 1) + 0x8C1D11B8));
    if ((F3 > (float)((*(int *)(((((t53 << 2) << 1) + 0x8C1D11B8) + 0x4))) + 0x5))) goto L_8C0CDD8C;
    goto L_8C0CDD70;
    L_8C0CDD70:;
    u57 = *(float *)((R4 + 0xC));
    R0 = (0xC);
    R2 = ((*(int *)((R5 + 0x0))));
    F3 = (u57);
    if ((0.0f > u57)) goto L_8C0CDD80;
    goto L_8C0CDD7C;
    L_8C0CDD7C:;
    F3 = ((*(float *)((R4 + R0))));
    goto L_8C0CDD82;
    L_8C0CDD82:;
    if ((!(F3 > (float)(R2 + 0xA)))) goto L_8C0CDD9E;
    goto L_8C0CDD8C;
    L_8C0CDD8C:;
    *(unsigned int *)((R4 + 0x4C)) = ((*(int *)((R4 + 0x4C))) + 0x1);
    *(unsigned int *)((R4 + 0x54)) = ((*(int *)((R4 + 0x54))) | 0x1);
    R0 = (0x54);
    goto L_8C0CDD9E;
    L_8C0CDD80:;
    F3 = ((-F3));
    goto L_8C0CDD82;
    L_8C0CDD54:;
    F3 = ((-F4));
    goto L_8C0CDD58;
    L_8C0CDCE4:;
    F3 = ((-F3));
    goto L_8C0CDCE6;
    L_8C0CDCC0:;
    F2 = ((-F2));
    goto L_8C0CDCC2;
    L_8C0CDC80:;
    F3 = ((-F3));
    goto L_8C0CDC82;
    L_8C0CDC5C:;
    F2 = ((-F2));
    goto L_8C0CDC5E;
}

int eepromVmuSave(int a4)
{
    int t6;
    int t7;
    int t24;
    int t8;
    int t13;
    int t16;
    int t1;
    int t2;
    int t22;
    int t21;
    int stk[38];

    memset((((int)stk + 12) + 0x18), 0x0, 0x60);
    for (t1 = 0; ; t1++) { *(unsigned char *)((((int)stk + 12) + 0x18) + t1) = *(unsigned char *)(0x8C126AC0 + t1); if (*(unsigned char *)(0x8C126AC0 + t1) == 0) break; }
    for (t2 = 0; ; t2++) { *(unsigned char *)((((int)stk + 12) + 0x2A) + t2) = *(unsigned char *)(0x8C126AD4 + t2); if (*(unsigned char *)(0x8C126AD4 + t2) == 0) break; }
    memmove((((int)stk + 12) + 0x4C), 0x8C1D7528, 0x10);
    *(unsigned int *)(((int)stk + 104)) = 0x8C1D753C;
    *(unsigned int *)(((int)stk + 108)) = 0x8C1D755C;
    *(unsigned short *)(((int)stk + 112)) = 0x1;
    *(unsigned short *)(((int)stk + 114)) = 0x14;
    *(unsigned int *)(((int)stk + 116)) = 0x0;
    *(unsigned short *)(((int)stk + 120)) = 0x0;
    *(unsigned int *)(((int)stk + 124)) = 0x8C40C2F4;
    *(unsigned int *)(((int)stk + 128)) = 0x128;
    t6 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 112))), (unsigned short)(*(short *)(((int)stk + 120))), 0x128);
    *(unsigned int *)(((int)stk + 12)) = t6;
    t7 = nlMalloc(((t6 << 8) << 1));
    *(unsigned int *)0x8C421E18 = t7;
    t24 = 0xFFFF0000;
    if (t7 != 0) {
        t8 = buMakeBackupFileImage(t7, (((int)stk + 12) + 0x18));
        if ((int)t8 <= 0) {
            nlFree((*(int *)0x8C421E18));
            t22 = 0xFFFF0000;
        } else {
            syRtcGetDate((((int)stk + 12) + 0x4));
            { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 12) + 0x10)) = *(struct mvb8 *)((((int)stk + 12) + 0x4)); }
            t13 = buSaveFile(a4, 0x8C126AB0, (*(int *)0x8C421E18), t8, (((int)stk + 8) + 0x14), 0x80000000);
            if (t13 != 0) {
                nlFree((*(int *)0x8C421E18));
                t21 = t13;
            } else {
                for (;;) {
                    t16 = buStat(a4);
                    if (t16 != -1) {
                        break;
                    }
                }
                nlFree((*(int *)0x8C421E18));
                t21 = (buGetLastError(a4));
            }
            t22 = t21;
        }
        t24 = t22;
    }
    return t24;
}

int endingTrophyPut(void)
{
    int t0;
    int t2;
    int t6;
    int t8;
    int t15;
    int t17;
    int t23;
    int t25;
    int t32;
    int t33;
    float u39;
    int t53;
    int t3;
    int stk[51];

    t0 = 0x8C125D74;
    t2 = (((int)stk + 4) + 0x30);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125D74 + 108)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0xC)) = *(struct mv9 *)(0x8C125DE0); }
    nlPushMatrix(0x0);
    nlPushMatrix(0x0);
    t6 = nlArcTan2(0.0f, 0.0f);
    nlRotateAY(t6);
    t8 = nlArcTan2(0.0f, 0.0f);
    nlRotateAX(t8);
    nlObjPutCheapEnvMap(0xCB5B328);
    nlPopMatrix(0x1);
    nlObjPut(0xCB5B328);
    nlObjPut(0xCB668C8);
    nlPushMatrix(0x0);
    t15 = nlArcTan2(0.0f, 0.0f);
    nlRotateAY(t15);
    t17 = nlArcTan2(0.0f, 0.0f);
    nlRotateAX(t17);
    nlObjPutCheapEnvMap(0xCB62A68);
    nlPopMatrix(0x1);
    nlObjPut(0xCB62A68);
    nlPushMatrix(0x0);
    t23 = nlArcTan2(0.0f, 0.0f);
    nlRotateAY(t23);
    t25 = nlArcTan2(0.0f, 0.0f);
    nlRotateAX(t25);
    nlObjPutCheapEnvMap(0xCB65618);
    nlPopMatrix(0x1);
    nlObjPut(0xCB65618);
    nlPopMatrix(0x1);
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    *(unsigned int *)(((int)stk + 12)) = (0x9C + ((int)stk + 4));
    t32 = (((int)stk + 4) + 0xC);
    t33 = (((int)stk + 4) + 0x30);
    for (;;) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((t33 + 0x0))), (*(float *)((t33 + 0x4))), (*(float *)((t33 + 0x8))));
        u39 = *(float *)((t32 + 0x0));
        t32 = (t32 + 0x4);
        nlRotateAY((int)((u39 / 360.0f) * 65536.0f));
        nlObjPut(0xCB598B0);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((t33 + 0x0))), ((*(float *)((t33 + 0x4))) + 20.0f), (*(float *)((t33 + 0x8))));
        nlRotateAX((unsigned short)(*(short *)(((int)stk + 4))));
        nlRotateAY((unsigned short)(*(short *)(((int)stk + 8))));
        nlObjPut(0xCB5AB20);
        t53 = nlPopMatrix(0x1);
        t33 = (t33 + 0xC);
        if ((unsigned int)t33 >= (unsigned int)(*(int *)(((int)stk + 12)))) {
            break;
        }
    }
    return t53;
}

int entryCharaCursorInit(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t19;
    int t22;
    int t26;
    int t32;
    int t37;
    int stk[20];

    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0)));
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = 0x0;
    *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)) = 0x0;
    t1 = (((int)stk + 4) + 0x8);
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)((((int)stk + 4) + 0x8) + 0x28)) {
            break;
        }
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C343B0C;
    t2 = 0x8C343B4C;
    t3 = 0x0;
    t4 = 0x8C343B0C;
    t5 = 0x8C343B0C;
    for (;;) {
        t6 = *(short *)(((t3 << 1) + 0x8C185298));
        t19 = (unsigned short)t6;
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)t6) != 0) {
            if ((*(int *)(((((t3 << 2) << 1) + 0x8C343B4C) + 0x4))) == 0) {
                *(unsigned int *)(((((int)stk + 4) + 0x8) + ((*(int *)((t2 + 0x0))) << 2))) = 0x1;
            }
            if ((int)(*(int *)((t4 + 0x0))) >= 0) {
                *(unsigned int *)(((((int)stk + 4) + 0x8) + ((*(int *)((0x8C343B4C + (((*(int *)((t5 + 0x0))) << 2) << 1)))) << 2))) = 0x1;
            }
            t19 = (((t3 << 2) << 1) + 0x8C343B4C);
        }
        t3 = (t3 + 0x1);
        t5 = (t5 + 0x4);
        t4 = (t4 + 0x4);
        t2 = (t2 + 0x8);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    t22 = t19;
    for (;;) {
        if ((*(int *)(((((int)stk + 4) + 0x8) + ((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2)))) == 0) {
            break;
        }
        t22 = (*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)));
        t22 = (t22 + 0x1);
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t22;
        t26 = ((~(((~t22) + 0x1) & 0x7)) + 0x1);
        if ((int)t22 >= 0) {
            t26 = (t22 & 0x7);
        }
        *(unsigned int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0)) = t26;
    }
    *(unsigned int *)((((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) << 2) + 0x8C1853C0)) = 0x2;
    *(unsigned int *)((0x8C343ACC + (a4 << 2))) = ((((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4))) << 2) << 1) + (*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))));
    if (((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) == 8) && (t32 = *(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)), t32 == 0)) {
        *(unsigned int *)((0x8C343ACC + (a4 << 2))) = 0x10;
    }
    if (((*(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x0))) == 8) && (t37 = *(int *)(((((a4 << 2) << 1) + 0x8C343B4C) + 0x4)), t37 == 1)) {
        *(unsigned int *)((0x8C343ACC + (a4 << 2))) = 0x11;
    }
    *(unsigned short *)(((((*(int *)((((a4 << 2) + 0x8C3437C4) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
    return (selModelSpawn((*(int *)(((int)stk + 8))), 0x0));
}

int nlSysRender(int a4)
{
    int t2;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t18;
    int t19;
    int t13;
    int t28;
    int t30;
    int t34;
    int t1;

    if (((*(int *)0x8C1DCA18) == 0) && (t1 = *(int *)0x8C1DC8C4, t1 == 0)) {
        t2 = 0x1;
        if (a4 == 1) {
            t2 = 0x0;
        }
        kmRender(t2);
        *(unsigned int *)0x8C1DC8C0 = 0xFFFFFFFF;
    } else {
        t5 = *(short *)0x8C458DD8;
        t6 = *(short *)0x8C458DDA;
        t7 = *(int *)0x8C1DC9F8;
        t9 = *(int *)0x8C1DC9FC;
        t10 = *(int *)0x8C1DCA00;
        t11 = *(int *)0x8C1DCA04;
        t18 = ((int)(t6 + 0x1F) >> 5);
        t19 = (((int)(t5 + 0x1F) >> 5) - 1);
        if ((*(short *)0x8C458DDE) != 0) {
            t13 = ((int)(t6 + 0x1F) >> 5);
            if ((int)(t6 << 1) <= (int)0x1E0) {
                t13 = ((int)(t6 + 0xF) >> 4);
            }
            t18 = t13;
            t19 = (((int)(t5 + 0xF) >> 4) - 1);
        }
        if ((*(int *)0x8C1DCA18) != 0) {
            *(unsigned int *)0x8C1DC8C4 = 0x1;
        } else {
            *(unsigned int *)0x8C1DC8C4 = 0x0;
        }
        *(unsigned int *)0x8C1DCA08 = t7;
        *(unsigned int *)0x8C1DCA0C = t9;
        *(unsigned int *)0x8C1DCA10 = t10;
        *(unsigned int *)0x8C1DCA14 = t11;
        t28 = t9;
        if ((int)t9 > (int)t19) {
            t28 = t19;
        }
        t30 = t11;
        if ((int)t11 >= (int)(t18 - 1)) {
            t30 = (t18 - 1);
        }
        kmSetRegionClipping(t7, t10, t28, t30);
        nl_action_PixelClipping();
        t34 = 0x1;
        if (a4 == 1) {
            t34 = 0x0;
        }
        *(unsigned int *)0x8C1DC8C0 = (kmRenderRect(t34));
        *(unsigned int *)0x8C1DCA18 = 0x0;
    }
    *(unsigned int *)0x8C424464 = 0x0;
    return 0x0;
}

int countryNamePutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t27;
    int t20;
    int t21;
    int t24;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
    t27 = a4;
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 21.0f);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 23.0f);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 16.0f);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 31.0f);
            }
                break;
            case 8:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 0.0f);
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 34.0f);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 4.0f);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 8.0f);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 3.0f);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 31.0f);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 30.0f);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 16.0f);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 23.0f);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 28.0f);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 13.0f);
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 32.0f);
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 12.0f);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x24) + 0x0))) + 36.0f);
            }
                break;
        }
        if ((int)a4 < (int)0x8) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t20 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t24 = (((((t20 << 2) + t20) << 2) << 2) + 0x8C339CD0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t21 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t24 = (((((t21 << 2) + t21) << 2) << 2) + 0x8C338600);
        }
        t27 = (primSprDrawScaleAlpha(t24, 0x100, 0x100, a7, *(Stk3 *)((((int)stk + 16) + 0x24)), 0.8984375f, 0.8984375f, f4));
    }
    return t27;
}




int cpuSglShot(int a4, int a5, int a6, int a7)
{
    int t0;
    float u2;
    float u3;
    int t6;
    int t4;
    int t56;
    int t13;
    int t14;
    float u15;
    float u16;
    float u19;
    int t22;
    int t20;
    int t37;
    float u33;
    float u35;
    int t43;

    t0 = *(int *)((a4 + 0xB5C));
    cpuSglAim(a4, a5, a6, a7);
    u2 = *(float *)((a4 + 0xAE8));
    u3 = *(float *)((a4 + 0xB9C));
    t6 = 0x1;
    if ((u3 - u2) > 0.0f) {
    } else {
        t4 = 0x0;
        if (0.0f > (u3 - u2)) {
            t4 = 0xFFFFFFFF;
        }
        t6 = t4;
    }
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-((((*(float *)((a4 + 0xB00))) * (float)t6)) * 32.0f)) + 96.0f);
    t56 = 0x20;
    if ((int)(*(int *)0x8C2FCC1C) > (int)0x7) {
        if ((*(int *)0x8C291F74) == 5) {
            *(float *)((a4 + 0xA28)) = 0.0f;
            *(float *)((a4 + 0xA2C)) = 0.0f;
            t43 = 0xA2C;
        } else {
            t13 = *(int *)((a4 + 0xC64));
            t14 = *(int *)((((((t13 << 1) + t13) << 2) << 1) + 0x8C105FDC));
            u15 = *(float *)((a4 + 0xA28));
            u16 = (-(u15 * 41.1500015f));
            if (!(0.0f > (u15 * 41.1500015f))) {
                u16 = (u15 * 41.1500015f);
            }
            if (((float)t14 * 1.0f) > ((-u16) + 41.1500015f)) {
                u19 = *(float *)((a4 + 0xA28));
                t22 = 0x1;
                if (u19 > 0.0f) {
                } else {
                    t20 = 0x0;
                    if (0.0f > u19) {
                        t20 = 0xFFFFFFFF;
                    }
                    t22 = t20;
                }
                *(float *)((a4 + 0xA28)) = (((float)t22 * ((41.1500015f - ((float)t14 * 1.0f)))) / 41.1500015f);
            }
            t37 = 0x8C044B34;
            if (((float)t14 * 1.0f) > ((-(((*(float *)((a4 + 0xA2C))) + 1.0f) * 59.4249992f)) + 118.849998f)) {
                u33 = (((float)t14 * 1.0f) + -118.849998f);
                if (!(0.0f > (118.849998f - ((float)t14 * 1.0f)))) {
                    u33 = (118.849998f - ((float)t14 * 1.0f));
                }
                u35 = (-1.0f);
                u35 = u35 + (1.0f + 1.0f) * (u33 / 118.849998f);
                *(float *)((a4 + 0xA2C)) = ((*(float *)((a4 + 0xB00))) * u35);
                t37 = 0xA2C;
            }
            t43 = t37;
        }
        t56 = t43;
    }
    return t56;
}

int cpuDblNetmanPos(int a4, float f4, float f5, float f6)
{
    int t0;
    int t65;
    int t2;
    int t5;
    int t7;
    float u14;
    int t17;
    int t15;
    float u19;
    float u25;
    float u26;
    float u40;
    float u28;
    float u29;
    float u34;
    int t4;
    float u61;
    float u62;
    int t9;
    float u50;
    float u51;

    t0 = *(int *)((a4 + 0xB5C));
    t65 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t2 = serveGetServer();
        if ((t2 == (*(int *)(((0xB5C + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)) + 0x0)))) && (t4 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13F)), (unsigned char)t4 == 1)) {
            t5 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
            u61 = (-((*(float *)((a4 + 0xB00))) * 35.6550026f));
            u62 = (float)(-(((t5 << 2) << 1) - t5));
        } else {
            t7 = serveGetServer();
            if ((t7 == (*(int *)(((0xB5C + (((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84)) + 0x0)))) && (t9 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13F)), (unsigned char)t9 == 2)) {
                u50 = (-((*(float *)((a4 + 0xB00))) * 35.6550026f));
                u51 = ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 27.4249992f);
            } else {
                u14 = *(float *)((a4 + 0xAE8));
                t17 = 0x1;
                if (u14 > 0.0f) {
                } else {
                    t15 = 0x0;
                    if (0.0f > u14) {
                        t15 = 0xFFFFFFFF;
                    }
                    t17 = t15;
                }
                u19 = *(float *)0x8C05CE20;
                u25 = *(float *)0x8C05CE28;
                u26 = ((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C05CE24))) + 1.0f)));
                u40 = (-(u26 * u25));
                if ((int)(*(int *)0x8C2FCC1C) < (int)0xE) {
                    u28 = *(float *)0x8C05CE30;
                    u29 = (-(-(u26 * u25)));
                    if (!(0.0f > (-(u26 * u25)))) {
                        u29 = (-(u26 * u25));
                    }
                    u34 = (-(u26 * u25));
                    if (u28 > u29) {
                        u34 = (-((*(float *)((a4 + 0xB00))) * u28));
                    }
                    u40 = u34;
                }
                u50 = u40;
                u51 = ((float)t17 * u19);
            }
            u61 = u50;
            u62 = u51;
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u62;
        *(float *)((a4 + 0xA3C)) = u61;
        t65 = 0xA3C;
    }
    return t65;
}


