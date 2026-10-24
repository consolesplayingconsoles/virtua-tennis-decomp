/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXF_GetFsizeSct(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int abs(int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int camWorldToView(int, ...);
int charaModelCount(int);
int charaTexFreeAll(void);
int emotFaceReset(int);
int entryCountJoined(void);
int entryIsVersus(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlotOfs(int, int, int, int, int);
int hudFramePutNarrow(Stk3, float);
int hudImpactSpawn(int, Stk16, float);
int hudNumPut(int, Stk3, float);
int kmSetBackGroundPlane(int, int);
int kmyRegisterBGPlane(int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotReset(int, int);
int nlDispStripTrnsl(int, int);
float nlExp(float);
int nlGetMatrix(int);
int nlLineSetThickness(float);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlSetCommonTextureOffset(int);
int nlSingleLine(int, int, int);
int nlSubVector3op(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int padLcdModeClear(void);
int playerSetup(int, int, int, int);
int prefetch(int);
int primVertexSet(int, int, int, int, int);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int screenQuadPut(int, float);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uiScanlinesPut(void);
int uniformSlotReset(int, int);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int circuitDrawFrame(void);
int screenSphereVisibleRaised(Stk4 s, float f4);
int primRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int camInit(int a4, int a5, int a6, int a7);
int vmsfs_fsetparam(int a4, int a5, int a6);
void bodyLinePerp(Stk10 s);
int nlRotateAxeSC(int a4, float f4, float f5);
int nlChgObjectPolyAttrSub(int a4, int a5, int a6);
int ADXAMP_Create(int a4, int a5, int a6);
int primLineV(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int entryAllReady(void);
int strmCrowdLoop(int a4);
void sndEndingCheer(void);
int circuitMapInit(void);
int charaTexLoad(int a4, int a5);
float nlLdexpf(int a4, float f4);
int sprSet163Setup(int a4);
int kmtex_TextureSize_Palettized(int a4);
int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int fileLoadStart(int a4, int a5, int a6);
int kmiProcessVertex_03(int a4, int a5, int a6, int a7);
int nlLineSendHeader(int a4);
float nlTanh(int a4);
int nlSetBackColorZ(int a4, int a5, int a6, float f4);
int cpuDebugLine(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int nlsndBlockMove(int a4, int a5, int a6);
int cpuGiveUpCheck(int a4, float f4);
int hudValueDraw(int a4, int a5, int a6, int a7, float f4);
int fadeScreenStart(int a4, int a5, int a6, int a7);
int uniformTexLoad(int a4, int a5, int a6);
int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int swingBlurSpawn(int a4, int a5, int a6, int a7);
int charaTexCount(int a4);

int circuitDrawFrame(void)
{
    int t8;
    int stk[15];

    sprSheetSet(0x8C1082C0);
    sprSheetPut(0x0, 30.0f, 32.0f, 51.0f, 1.0f);
    sprSheetSet(0x8C1082E4);
    *(unsigned int *)(((int)stk + 4)) = 0x8C287658;
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * 280.0f);
    sprSheetPut(0x0, 0.0f, 0.0f, 51.0999985f, 0.5f);
    sprSheetSet(0x8C108308);
    sprSheetPut(0x0, 280.0f, 0.0f, 51.0999985f, 0.5f);
    sprSheetSet(0x8C10832C);
    t8 = *(int *)(((int)stk + 4));
    *(float *)((t8 + 0x10)) = ((*(float *)((t8 + 0x10))) * 640.0f);
    sprSheetPut(0x0, 0.0f, 360.0f, 51.0999985f, 0.5f);
    uiScanlinesPut();
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF000000;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = 0xFF000000;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = 0xFF00BABA;
    return (screenQuadPut((((int)stk + 4) + 0x4), 640.0f));
}

int screenSphereVisibleRaised(Stk4 s, float f4)
{
    int t25;
    int t5;
    float u6;
    float u7;
    float u8;
    int t18;
    int t11;
    float u12;
    float u13;
    float u14;
    int t16;
    float u0;
    int stk[25];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    stk[16] = s.w[3];
    u0 = (*(float *)&s.w[1] + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    camWorldToView((((int)stk + 20) + 0x8));
    t25 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)((((int)stk + 20) + 0x8)));
        t5 = abs((*(int *)(((int)stk + 20))));
        u6 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u7 = *(float *)0x8C287A10;
        u8 = (-u6);
        if (!(0.0f > u6)) {
            u8 = u6;
        }
        t18 = 0x0;
        if ((((u7 * f4) / u8) + 320.0f) > (float)t5) {
            t11 = abs((*(int *)(((int)stk + 24))));
            u12 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u13 = *(float *)0x8C287A10;
            u14 = (-u12);
            if (!(0.0f > u12)) {
                u14 = u12;
            }
            t16 = 0x0;
            if ((((u13 * f4) / u14) + 240.0f) > (float)t11) {
                t16 = 0x1;
            }
            t18 = t16;
        }
        t25 = t18;
    }
    return t25;
}

int primRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t5;
    int t11;
    int stk[42];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x8));
    t5 = *(int *)(((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t5), (*(float *)(((((int)stk + 20) + 0x64) + 0x4))), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x8)));
    t11 = *(int *)(((int)stk + 24));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x64) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t11), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x8)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x64) + 0x0))) - (float)t5), ((*(float *)(((((int)stk + 20) + 0x64) + 0x4))) + (float)t11), (*(float *)(((((int)stk + 20) + 0x64) + 0x8))));
    primVertexSet(a6, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x8)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x8)));
}

int camInit(int a4, int a5, int a6, int a7)
{
    vecMake(a4, a5, a6, a7, 0x8C2875F0, 0.0f, 0.0f, 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875C0) = *(struct mv3 *)(0x8C2875F0); }
    vecMake(0x0, 0x0, 0x0, 0x0, 0x8C2875FC, 0.0f, 0.0f, (*(float *)0x8C016754));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875CC) = *(struct mv3 *)(0x8C2875FC); }
    *(unsigned int *)0x8C287634 = 0x0;
    *(unsigned int *)0x8C287638 = 0x0;
    *(unsigned int *)0x8C28763C = 0x0;
    *(unsigned int *)0x8C287630 = 0x0;
    *(unsigned short *)0x8C28764C = 0x0;
    *(unsigned short *)0x8C28764A = 0x0;
    *(unsigned short *)0x8C287648 = 0x0;
    *(float *)0x8C287628 = (*(float *)0x8C016758);
    *(float *)0x8C287620 = 0.0f;
    *(float *)0x8C28761C = 0.0f;
    *(float *)0x8C287618 = 1.0f;
    *(float *)0x8C287614 = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875D8) = *(struct mv3 *)(0x8C2875C0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875E4) = *(struct mv3 *)(0x8C2875CC); }
    *(unsigned short *)0x8C287646 = 0x0;
    *(unsigned short *)0x8C287644 = 0x0;
    *(float *)0x8C287624 = 0.0f;
    *(unsigned int *)0x8C287640 = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C287608) = *(struct mv3 *)(0x8C1016D4); }
    return padLcdModeClear();
}

int vmsfs_fsetparam(int a4, int a5, int a6)
{
    int t3;
    int t7;
    int t11;
    int stk[5];

    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C46459A))) != 0) {
        t3 = vmsio_isready((*(int *)((a4 + 0x28))));
        if (t3 == 0) {
            vmsfs_unmount((*(int *)((a4 + 0x28))));
            return 0xFFFFFF01;
        }
        t7 = vmsio_ismount((*(int *)((a4 + 0x28))));
        if (t7 != 0) {
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0x8C4645A0))) == 0) {
                return 0xFFFFFF01;
            }
            t11 = buIsFormat((*(int *)((a4 + 0x28))));
            if ((int)t11 < 0) {
                return 0xFFFFFF03;
            }
            *(unsigned short *)((a4 + 0x2)) = (*(short *)(((int)stk + 8)));
            *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((int)stk + 4)));
            return 0x0;
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}

void bodyLinePerp(Stk10 s)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u9;
    float u11;
    float u12;
    float u13;
    float u14;
    int stk[36];

    stk[18] = s.w[0];
    stk[19] = s.w[1];
    stk[20] = s.w[2];
    stk[21] = s.w[3];
    stk[22] = s.w[4];
    stk[23] = s.w[5];
    stk[24] = s.w[6];
    stk[25] = s.w[7];
    stk[26] = s.w[8];
    stk[27] = s.w[9];
    u0 = *(float *)(((((int)stk + 4) + 0x60) + 0x4));
    u1 = *(float *)(((((int)stk + 4) + 0x60) + 0x0));
    u2 = *(float *)(((((int)stk + 4) + 0x60) + 0x8));
    u3 = (u0 * u0);
    u3 = u3 + u1 * u1;
    u4 = u3;
    u4 = u4 + u2 * u2;
    if (u4 == 0.0f) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x44) + 0x0)))) = *(struct mv3 *)(0x8C1016D4); }
    } else {
        nlSubVector3op((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x54));
        u9 = (u0 * (*(float *)(((int)stk + 44))));
        u9 = u9 + u1 * (*(float *)(((int)stk + 40)));
        u11 = u9;
        u11 = u11 + u2 * (*(float *)(((int)stk + 48)));
        u12 = *(float *)&s.w[4];
        u12 = u12 + u1 * (u11 / u4);
        *(float *)(((int)stk + 16)) = u12;
        u13 = *(float *)&s.w[5];
        u13 = u13 + u0 * (u11 / u4);
        *(float *)(((int)stk + 20)) = u13;
        u14 = *(float *)&s.w[6];
        u14 = u14 + u2 * (u11 / u4);
        *(float *)(((int)stk + 24)) = u14;
        nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x48));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 4) + 0x44) + 0x0)))) = *(struct mv3 *)(((int)stk + 4)); }
    }
}

int nlRotateAxeSC(int a4, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    int stk[20];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a4 + 0x4));
    u2 = *(float *)((a4 + 0x8));
    u3 = ((1.0f - f5) * u0);
    u4 = ((1.0f - f5) * u1);
    u5 = ((1.0f - f5) * u0);
    u6 = (u0 * u0);
    u6 = u6 + f5 * (1.0f - (u0 * u0));
    *(float *)(((int)stk + 4)) = u6;
    *(float *)(((int)stk + 8)) = ((f4 * u2) + (u3 * u1));
    *(float *)(((int)stk + 12)) = ((u5 * u2) - (f4 * u1));
    *(float *)(((int)stk + 20)) = ((u3 * u1) - (f4 * u2));
    u7 = (u1 * u1);
    u7 = u7 + f5 * (1.0f - (u1 * u1));
    *(float *)(((int)stk + 24)) = u7;
    *(float *)(((int)stk + 28)) = ((f4 * u0) + (u4 * u2));
    *(float *)(((int)stk + 36)) = ((f4 * u1) + (u5 * u2));
    *(float *)(((int)stk + 40)) = ((u4 * u2) - (f4 * u0));
    u8 = (u2 * u2);
    u8 = u8 + f5 * (1.0f - (u2 * u2));
    *(float *)(((int)stk + 44)) = u8;
    *(float *)((((int)stk + 4) + 0x38)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x34)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x30)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x2C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0x1C)) = 0.0f;
    *(float *)((((int)stk + 4) + 0xC)) = 0.0f;
    *(float *)(((int)stk + 64)) = 1.0f;
    return (nlMultiMatrix(((int)stk + 4)));
}

int nlChgObjectPolyAttrSub(int a4, int a5, int a6)
{
    int t3;
    int t13;
    int t17;
    int t18;
    int stk[2];

    int R0;
    int R1;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C0F7990:;
    R13 = ((~R5));
    R4 = ((*(int *)((R4 + 0xC))));
    goto L_8C0F7996;
    L_8C0F7996:;
    t3 = *(short *)((R4 + 0x0));
    R4 = ((R4 + 0x2));
    R7 = (t3);
    if (((int)t3 < 0)) goto L_8C0F7A40;
    goto L_8C0F799C;
    L_8C0F799C:;
    R0 = ((unsigned char)R7);
    if (((unsigned int)(unsigned char)R7 >= (unsigned int)0x1E)) goto L_8C0F7A30;
    goto L_8C0F79A4;
    L_8C0F79A4:;
    switch (((R0 << 1))) { case 0: goto L_8C0F79EE; case 2: goto L_8C0F7A30; case 4: goto L_8C0F7A00; case 6: goto L_8C0F7A00; case 8: goto L_8C0F7A00; case 10: goto L_8C0F7A00; case 12: goto L_8C0F7A00; case 14: goto L_8C0F7A00; case 16: goto L_8C0F79EC; case 18: goto L_8C0F79EC; case 20: goto L_8C0F79EC; case 22: goto L_8C0F79EC; case 24: goto L_8C0F7A20; case 26: goto L_8C0F7A20; case 28: goto L_8C0F7A20; case 30: goto L_8C0F7A20; case 32: goto L_8C0F7A20; case 34: goto L_8C0F7A20; case 36: goto L_8C0F7A20; case 38: goto L_8C0F7A20; case 40: goto L_8C0F7A20; case 42: goto L_8C0F7A20; case 44: goto L_8C0F7A30; case 46: goto L_8C0F7A30; case 48: goto L_8C0F7A20; case 50: goto L_8C0F7A20; case 52: goto L_8C0F7A20; case 54: goto L_8C0F7A20; case 56: goto L_8C0F7A20; case 58: goto L_8C0F7A20; }
    L_8C0F7A30:;
    return 0xFFFFFFFF;
    L_8C0F7A20:;
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    goto L_8C0F7996;
    L_8C0F7A00:;
    t13 = *(int *)(((R4 + 0x2) + 0x0));
    t17 = (R4 + 0x2);
    R3 = ((t13 & R5));
    R4 = (((R4 + 0x2) + (unsigned short)(*(short *)((R4 + 0x0)))));
    R7 = t17;
    if (((t13 & R5) == R5)) goto L_8C0F7996;
    goto L_8C0F7A10;
    L_8C0F7A10:;
    t18 = *(int *)((R7 + 0x0));
    *(unsigned int *)((R7 + 0x0)) = ((t18 & R13) | R6);
    R3 = (((t18 & R13) | R6));
    goto L_8C0F7996;
    L_8C0F79EE:;
    goto L_8C0F7996;
    L_8C0F79EC:;
    R4 = ((R4 + 0x2));
    goto L_8C0F79EE;
    L_8C0F7A40:;
    return 0x0;
}

int ADXAMP_Create(int a4, int a5, int a6)
{
    int t0;
    int t9;
    int t10;
    float u19;
    int t21;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t21 = 0x0;
    } else {
        ADXCRS_Lock(0x8, a5);
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x2)) = a4;
        if ((int)a4 > 0) {
            t9 = 0x0;
            t10 = 0x0;
            for (;;) {
                t10 = (t10 + 0x1);
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x4) + t9) + 0x0)) = (*(int *)((t9 + a5)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0xC) + t9) + 0x0)) = (*(int *)((t9 + a6)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x14) + t9) + 0x0)) = 0x0;
                t9 = (t9 + 0x4);
                if ((int)t10 >= (int)a4) {
                    break;
                }
            }
        }
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x1)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x2C)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x1C)) = a4;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x20)) = 0xAC44;
        u19 = *(float *)0x8C1EFB94;
        *(float *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x24)) = u19;
        *(float *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x28)) = u19;
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4) + 0x0)) = 0x1;
        ADXCRS_Unlock();
        t21 = (((((t0 << 1) + t0) << 2) << 2) + 0x8C46ABA4);
    }
    return t21;
}

int primLineV(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t5;
    int stk[42];

    stk[28] = a8;
    stk[29] = a9;
    stk[30] = a10;
    stk[31] = a11;
    stk[32] = a12;
    stk[33] = a13;
    *(unsigned int *)(((int)stk + 20)) = a4;
    vecMake(a4, a5, a6, a7, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x5C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x4));
    t5 = *(int *)(((int)stk + 20));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x5C) + 0x0))) - (float)t5), (*(float *)(((((int)stk + 20) + 0x5C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x5C) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x4)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((((int)stk + 20) + 0x68) + 0x0))), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x4)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((((int)stk + 20) + 0x68) + 0x0))) - (float)t5), (*(float *)(((((int)stk + 20) + 0x68) + 0x4))), (*(float *)(((((int)stk + 20) + 0x68) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x4)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x4)));
}

int entryAllReady(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t13;
    int t17;
    int t18;
    int t20;
    int t21;
    int t23;
    int t29;
    int t0;
    int t1;
    int t31;
    int t27;
    int t25;

    t2 = 0x8C185298;
    t3 = 0x8C343878;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)0x8C1852A0) {
            break;
        }
        t1 = (*(short *)((t2 + 0x0)));
        t0 = (*(short *)0x8C343262);
        t1 = (unsigned short)t1;
        t0 = (unsigned short)t0;
        t13 = ((t0 & t1) == 0);
        t1 = (*(int *)((t3 + 0x0)));
        if (!t13) {
            t4 = (t4 + 0x1);
        }
        t3 = (t3 + 0x4);
        if ((int)t1 > (int)0x1) {
            t5 = (t5 + 0x1);
        }
        t2 = (t2 + 0x2);
    }
    *(unsigned int *)0x8C343F38 = t4;
    *(unsigned int *)0x8C343F3C = t5;
    if ((*(int *)0x8C287ADC) == 4) {
        t17 = entryCountJoined();
        if (t17 == 1) {
            t18 = 0x1;
            if (t5 != 2) {
                t18 = 0x2;
            }
            t27 = t18;
        } else {
            t20 = entryIsVersus();
            if (t20 != 0) {
                t21 = 0x0;
                if (t5 == 4) {
                    t21 = 0x1;
                }
                t25 = t21;
            } else {
                t23 = 0x0;
                if (t5 == 2) {
                    t23 = 0x1;
                }
                t25 = t23;
            }
            t27 = t25;
        }
        t31 = t27;
    } else {
        t29 = 0x0;
        if ((int)t4 <= (int)t5) {
            t29 = 0x1;
        }
        t31 = t29;
    }
    return t31;
}

int strmCrowdLoop(int a4)
{
    float t18;
    float u19;

    if (a4 == 0) {
        *(unsigned int *)0x8C1D4B50 = 0x0;
        nlsndSeqRequest(0x503A9);
    } else {
        if ((*(int *)0x8C1D4B50) == 0x12C) {
            nlsndSeqRequest(0x503A9);
        }
        if ((*(int *)0x8C1D4B50) == 0x258) {
            nlsndSeqRequest(0x503A9);
        }
        if (((int)((int)(*(int *)0x8C1D4B50) % (int)0x64)) == 0) {
            t18 = nlRandom();
            u19 = *(float *)0x8C0D7FC0;
            if ((int)(t18 * u19) == 0) {
                nlsndSeqRequest(0x4A9);
            }
            if ((int)(t18 * u19) == 1) {
                nlsndSeqRequest(0x104A9);
            }
        }
        *(unsigned int *)0x8C1D4B50 = ((*(int *)0x8C1D4B50) + 0x1);
    }
    return (*(int *)0x8C1D4B50);
}

void sndEndingCheer(void)
{
    float t2;
    float t4;
    float u5;
    int t26;
    int t27;
    float u28;
    int t1;

    if (((*(int *)0x8C38BA70) != 0) && (t1 = *(int *)0x8C38BA74, t1 != 0)) {
        t2 = nlRandom();
        if ((int)(t2 * (*(float *)0x8C0D2AC0)) != 1) {
            t4 = nlRandom();
            u5 = *(float *)0x8C0D2AC4;
            if ((int)(t4 * u5) == 0) {
                nlsndSeqRequest(0x22A9);
            } else {
                if ((int)(t4 * u5) == 1) {
                    nlsndSeqRequest(0x122A9);
                } else {
                    if ((int)(t4 * u5) == 2) {
                        nlsndSeqRequest(0x222A9);
                    } else {
                        if ((int)(t4 * u5) == 3) {
                            nlsndSeqRequest(0x322A9);
                        }
                    }
                }
            }
            t26 = nlsndGetPackInfo(0x6, 0x10A0);
            t27 = *(int *)0x8C38BA64;
            u28 = *(float *)0x8C0D2AE0;
            if ((float)t26 > ((float)t27 * u28)) {
                nlsndSystemControl(0x6, 0x10A0, (int)((float)t27 * u28));
    return;
            }
            return;
        }
        return;
    }
}

int circuitMapInit(void)
{
    playerSetup(0x8C287D84, 0x0, (unsigned char)(*(signed char *)0x8C2FBC7C), (*(int *)0x8C421F70));
    motionSet(0x8C287D84, 0x115604, 0x1, 0x12755C, ((*(int *)((0x8C102424 + ((*(int *)0x8C2889DC) * 0x6C))))), ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    vecMake(0x0, 0x0, 0x0, 0x0, 0x8C28886C, 14.0f, -8.0f, -45.0f);
    *(float *)0x8C28889C = 0.0f;
    *(unsigned short *)0x8C28888A = 0x0;
    *(float *)0x8C2FBE94 = 0.0f;
    *(unsigned int *)0x8C2FBEA0 = 0x0;
    *(unsigned int *)0x8C2FBE60 = 0x1;
    *(unsigned int *)0x8C2FBEA4 = (*(signed char *)0x8C2FBC83);
    fileLoadClose();
    *(unsigned int *)0x8C2FBE74 = 0xFFFFFFFF;
    charaTexFreeAll();
    muneSlotReset((*(int *)0x8C421F70), (*(int *)0x8C2889DC));
    return uniformSlotReset((*(int *)0x8C421F70), (*(signed char *)0x8C2FBC83));
}

int charaTexLoad(int a4, int a5)
{
    int t18;
    int t3;
    int t4;
    int t5;
    int t7;
    int t10;
    int t12;
    int t13;
    int stk[169];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t18 = (a4 << 2);
    if ((*(int *)((0x8C1AFA64 + (a4 << 2)))) == 0) {
        *(unsigned int *)((0x8C1AFA64 + (a4 << 2))) = 0x1;
        nlSetCommonTextureOffset((*(int *)(((a4 << 2) + 0x8C1B05DC))));
        t3 = *(int *)(((int)stk + 4));
        t4 = 0x0;
        for (;;) {
            t5 = charaTexCount(a4);
            if ((int)t4 >= (int)t5) {
                break;
            }
            { struct mv4 { int w[4]; }; *(struct mv4 *)((((t4 << 2) << 2) + (((int)stk + 4) + 0x4))) = *(struct mv4 *)(((*(int *)(((0x8C1B0594 + (a4 << 2)) + 0x0))) + ((t4 << 2) << 2))); }
            t7 = *(int *)(((((t4 << 2) << 2) + (((int)stk + 4) + 0x4)) + 0x8));
            t10 = (((t4 << 2) << 2) + (((int)stk + 4) + 0x4));
            t4 = (t4 + 0x1);
            *(unsigned int *)((t10 + 0x8)) = (t7 + (*(int *)((((t3 << 2) + 0x8C124AE0) + 0x0))));
        }
        t12 = 0x0;
        for (;;) {
            t13 = charaModelCount(a4);
            if ((int)t12 >= (int)t13) {
                break;
            }
            nlObjPutLoadTexture((*(int *)(((*(int *)(((0x8C1B054C + (a4 << 2)) + 0x0))) + (t12 << 2)))), (((int)stk + 4) + 0x4));
            t12 = (t12 + 0x1);
        }
        t18 = (emotFaceReset(a4));
    }
    return t18;
}

float nlLdexpf(int a4, float f4)
{
    int t0;
    int t1;
    int stk[2];

    if (f4 == 0.0f) {
        return 0.0f;
    }
    *(float *)(((int)stk + 4)) = f4;
    t0 = *(int *)((((int)stk + 4) + 0x0));
    if ((int)(a4 + (unsigned char)((int)t0 >> 23)) < (int)0x1) {
        t1 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = (((*(int *)((((int)stk + 4) + 0x0))) & 0x80000000) | (((int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) >= 0) ? (((t1 & 0x7FFFFF) | 0x800000) << ((-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31) ? ((int)((t1 & 0x7FFFFF) | 0x800000) >> (-(int)(-(0x1 - (a4 + (unsigned char)((int)t0 >> 23)))) & 31)) : ((int)((t1 & 0x7FFFFF) | 0x800000) >> 31))));
    } else {
        if ((int)(a4 + (unsigned char)((int)t0 >> 23)) > (int)0xFE) {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = (((*(int *)((((int)stk + 4) + 0x0))) & 0x80000000) | 0x7F800000);
        } else {
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) & 0x807FFFFF);
            *(unsigned int *)((((int)stk + 4) + 0x0)) = ((*(int *)((((int)stk + 4) + 0x0))) | ((a4 + (unsigned char)((int)t0 >> 23)) << 23));
        }
    }
    return (*(float *)(((int)stk + 4)));
}

int sprSet163Setup(int a4)
{
    int t0;
    int t1;
    int t2;
    float u6;
    int t8;
    int stk[21];

    *(unsigned int *)(((int)stk + 20)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 20) + 0xC)) = *(struct mv8 *)(0x8C1248AC); }
    t0 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 24)) = ((t0 << 2) + 0x8C124884);
    t1 = *(int *)(((int)stk + 20));
    t2 = *(int *)((((t0 << 2) + 0x8C124884) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = ((((t1 << 2) + t1) << 2) << 2);
    sprInitRectF((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C), t2, (((int)stk + 20) + 0xC), 0x100, 0x100, 0x0);
    *(unsigned int *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x34)) = 0x5;
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x4)) = (*(float *)0x8C0C5314);
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0x8)) = (*(float *)0x8C0C5318);
    u6 = *(float *)0x8C0C531C;
    *(float *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C37BC7C) + 0xC)) = u6;
    t8 = *(int *)(((int)stk + 28));
    sprInitRectF((t8 + 0x8C37BF9C), (*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (((int)stk + 20) + 0xC), 0x100, 0x100, 0x1);
    *(float *)(((t8 + 0x8C37BF9C) + 0x4)) = (*(float *)0x8C0C5324);
    *(float *)(((t8 + 0x8C37BF9C) + 0x8)) = (*(float *)0x8C0C5328);
    *(float *)(((t8 + 0x8C37BF9C) + 0xC)) = u6;
    return 0xC;
}

int kmtex_TextureSize_Palettized(int a4)
{
    int t0;
    int t1;
    int t26;
    int t3;
    int t12;
    int t13;
    int t14;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t16;
    int t21;
    int t35;
    int t32;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(int *)((a4 + 0xC));
    t26 = (t1 * t0);
    if (((*(int *)((a4 + 0x18))) & 0x80000000) != 0) {
        t3 = ((unsigned int)t0 >> 1);
        if ((unsigned int)((unsigned int)t1 >> 1) < (unsigned int)((unsigned int)t0 >> 1)) {
            t3 = ((unsigned int)t1 >> 1);
        }
        t12 = (t1 * t0);
        t13 = ((unsigned int)t1 >> 1);
        t14 = ((unsigned int)t0 >> 1);
        if ((unsigned int)t3 > (unsigned int)0x1) {
            t5 = t3;
            t6 = (t1 * t0);
            t7 = ((unsigned int)t1 >> 1);
            t8 = ((unsigned int)t0 >> 1);
            for (;;) {
                t9 = (t7 * t8);
                t7 = ((unsigned int)t7 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t6 = (t6 + t9);
                if ((unsigned int)t5 <= (unsigned int)0x1) {
                    break;
                }
            }
            t12 = t6;
            t13 = t7;
            t14 = t8;
        }
        t16 = (t12 + (t13 * t14));
        if (t13 == t14) {
            t16 = (t12 + 0x1);
        }
        t21 = (t16 + 0xB);
        if ((*(int *)((a4 + 0x8))) == 0x28000000) {
            t21 = (t16 + 0x2B);
        }
        t26 = t21;
    }
    t35 = t26;
    if ((*(int *)((a4 + 0x8))) == 0x28000000) {
        t32 = ((unsigned int)t26 >> 1);
        if (t26 == 1) {
            t32 = 0x1;
        }
        t35 = t32;
    }
    return t35;
}

int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    float u0;
    int t10;
    int t14;
    float u1;
    float u4;
    int stk[39];

    stk[27] = a8;
    stk[28] = a9;
    stk[29] = a10;
    stk[30] = a11;
    *(unsigned int *)(((int)stk + 76)) = a4;
    u0 = *(float *)0x8C08A2B8;
    u1 = (*(float *)&a9 + u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x30)); }
    camWorldToView((((int)stk + 60) + 0x14));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 32) + 0x24), (((int)stk + 32) + 0x28), *(Stk3 *)((((int)stk + 60) + 0x14)));
    u4 = (*(float *)&a12 + u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x58)); }
    camWorldToView((((int)stk + 60) + 0x14));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x3C), *(Stk3 *)((((int)stk + 60) + 0x14)));
    t10 = screenOutcodeMargin((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 76))));
    t14 = screenOutcodeMargin((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 76))));
    return (((((unsigned short)t10 & (unsigned short)t14) == 0)) ? 1 : 0);
}

int fileLoadStart(int a4, int a5, int a6)
{
    int t8;
    int t9;
    int t12;
    int t13;
    int t18;

    if ((*(int *)0x8C34A1F8) != 0) {
        fileLoadClose();
    }
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1EC = 0x1;
    *(unsigned int *)0x8C34A1F0 = 0x0;
    t8 = 0x0;
    t9 = 0x1;
    for (;;) {
        if ((*(signed char *)((a5 + t8))) == 0) {
            break;
        }
        t9 = (*(signed char *)((a5 + t8)));
        t12 = (0x8C34A204 + t8);
        t8 = (t8 + 0x1);
        *(unsigned char *)((t12 + 0x0)) = t9;
    }
    t13 = 0x0;
    for (;;) {
        *(unsigned int *)0x8C34A1F8 = (ADXF_Open(a5, 0x0));
        *(unsigned int *)0x8C34B134 = ((*(int *)0x8C34B134) + 0x1);
        if ((*(int *)0x8C34A1F8) == 0) {
            if ((int)t13 < (int)0xA) {
                t13 = (t13 + 0x1);
                continue;
            }
            break;
        }
        if (a6 == 0) {
            t18 = ADXF_GetFsizeSct((*(int *)0x8C34A1F8));
            *(unsigned int *)0x8C34B13C = t18;
            ADXF_ReadNw32((*(int *)0x8C34A1F8), t18, a4);
            return 0x1;
        }
        *(unsigned int *)0x8C34B13C = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
        ADXF_ReadNw32((*(int *)0x8C34A1F8), ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1), a4);
        return 0x1;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

int kmiProcessVertex_03(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t19;
    int t21;
    int stk[31];

    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = a5;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = a6;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = a7;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)((a4 + 0xC)));
    t5 = 0x0;
    t6 = (*(int *)(((int)stk + 4)));
    for (;;) {
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x0)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x4)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x4)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x8)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x8)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0xC)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0xC)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x10)));
        *(float *)((((((int)stk + 4) + 0x20) + t5) + 0x10)) = (*(float *)(((*(int *)((t6 + 0x0))) + 0x14)));
        *(unsigned int *)((((((int)stk + 4) + 0x20) + t5) + 0x14)) = (*(int *)(((*(int *)((t6 + 0x0))) + 0x18)));
        t19 = *(int *)((t6 + 0x0));
        t6 = (t6 + 0x4);
        t21 = ((((int)stk + 4) + 0x20) + t5);
        t5 = (t5 + 0x1C);
        *(unsigned int *)((t21 + 0x18)) = (*(int *)((t19 + 0x1C)));
        if ((unsigned int)t5 >= (unsigned int)0x54) {
            break;
        }
    }
    return (kmyRegisterBGPlane((((int)stk + 4) + 0x10)));
}

int nlLineSendHeader(int a4)
{
    float u0;
    int t7;
    int t16;
    int t17;
    int t18;
    int t10;
    int t11;

    u0 = *(float *)0x8C0F3254;
    *(float *)0x8C454C48 = ((*(float *)0x8C1DCA24) * u0);
    *(float *)0x8C454C4C = ((*(float *)0x8C1DCA28) * u0);
    *(float *)0x8C454C50 = ((-1.0f) - (*(float *)0x8C454C48));
    *(float *)0x8C454C54 = ((-1.0f) - (*(float *)0x8C454C4C));
    *(float *)0x8C1DCAB8 = (*(float *)0x8C454C48);
    *(float *)0x8C1DCACC = (-(*(float *)0x8C454C4C));
    t7 = *(int *)0x8C42445C;
    if ((a4 & 0x1) != 0) {
        t10 = (*(int *)((t7 + 0x8)));
        t11 = 0x8C1DCC40;
    } else {
        t10 = (*(int *)((t7 + 0x0)));
        t11 = 0x8C1DCC20;
    }
    *(unsigned int *)((t11 + 0x0)) = ((*(int *)((t11 + 0x0))) & 0xFFFCFFFF);
    *(unsigned int *)((t11 + 0x0)) = ((*(int *)((t11 + 0x0))) | (((*(int *)0x8C1DC890) << 16) | 0x8C0000));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    t16 = ((0x3FFFFFF & t10) | 0xE0000000);
    t17 = t11;
    for (;;) {
        t18 = *(int *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t18;
        t16 = (t16 + 0x4);
        if ((unsigned int)t16 >= (unsigned int)(((0x3FFFFFF & t10) | 0xE0000000) + 0x20)) {
            break;
        }
    }
    prefetch(((0x3FFFFFF & t10) | 0xE0000000));
    return (((0x3FFFFFF & t10) | 0xE0000000) + 0x20);
}

float nlTanh(int a4)
{
    float u0;
    float u20;
    float u9;

    u0 = (((float)(unsigned short)a4 * 6.28318548f) / 65536.0f);
    if ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) > 0.00100000005f) {
        u20 = (((1.0f + 1.0f) / ((nlExp((-(u0 * (1.0f + 1.0f))))) + 1.0f)) + (-1.0f));
    } else {
        if (0.00100000005f > (((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)) {
            u9 = ((-((1.0f + 1.0f) / ((nlExp((u0 * (1.0f + 1.0f)))) + 1.0f))) + 1.0f);
        } else {
            u9 = (((1.0f - ((((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)) * ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f))) / 3.0f))) * ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f)));
        }
        u20 = u9;
    }
    return u20;
}

int nlSetBackColorZ(int a4, int a5, int a6, float f4)
{
    int t0;
    int t2;
    int stk[30];

    *(unsigned int *)0x8C1DC894 = a4;
    *(unsigned int *)0x8C1DC898 = a5;
    *(unsigned int *)0x8C1DC89C = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0xE0000000;
    *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0xC)) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = *(short *)0x8C458DD8;
    t2 = (short)t0;
    if ((*(short *)0x8C458DDE) != 0) {
        t2 = ((short)t0 << 1);
    }
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4)) = (float)t2;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x8)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x18)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x0)) = 0xF0000000;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x4)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x8)) = (float)(*(short *)0x8C458DDA);
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = ((((int)stk + 4) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 4) + 0x8)) = ((((int)stk + 4) + 0xC) + 0x40);
    return (kmSetBackGroundPlane(((int)stk + 4), 0x0));
}

int cpuDebugLine(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int stk[29];

    stk[17] = a8;
    stk[18] = a9;
    stk[19] = a10;
    stk[20] = a11;
    *(unsigned int *)(((int)stk + 20)) = a4;
    nlLineSetThickness(f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10), ((*(float *)(((((int)stk + 20) + 0x30) + 0x0))) - f4), 1.0f, ((*(float *)(((((int)stk + 20) + 0x30) + 0x8))) - f4));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 16) + 0x8), ((*(float *)(((((int)stk + 20) + 0x30) + 0x0))) + f4), 1.0f, ((*(float *)(((((int)stk + 20) + 0x30) + 0x8))) + f4));
    nlSingleLine((((int)stk + 12) + 0x18), (((int)stk + 12) + 0xC), (*(int *)(((int)stk + 20))));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 12) + 0x18), ((*(float *)(((((int)stk + 20) + 0x30) + 0x0))) - f4), 1.0f, ((*(float *)(((((int)stk + 20) + 0x30) + 0x8))) + f4));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 8) + 0x10), ((*(float *)(((((int)stk + 20) + 0x30) + 0x0))) + f4), 1.0f, ((*(float *)(((((int)stk + 20) + 0x30) + 0x8))) - f4));
    nlSingleLine((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14), (*(int *)(((int)stk + 20))));
    return (nlLineSetThickness(1.0f));
}

int nlsndBlockMove(int a4, int a5, int a6)
{
    int t3;
    int t4;
    int t5;
    int t6;

    nlsndG2Write((a4 + 0x5F800000), 0xA0800090);
    nlsndG2Write((a5 + 0x5F800000), 0xA0800094);
    nlsndG2Write(a6, 0xA0800098);
    t3 = 0x0;
    for (;;) {
        t4 = nlsndG2Read(0xA0800098);
        if (t4 == 0) {
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x400000) {
                break;
            }
            continue;
        }
        t3 = 0x2000A0;
        t5 = 0x0;
        for (;;) {
            t6 = nlsndSeqRequest(t3);
            if (t6 != 0) {
                t5 = (t5 + 0x1);
                if ((int)t5 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFF00;
    }
    return 0xFFFFFF00;
}

int cpuGiveUpCheck(int a4, float f4)
{
    int t0;
    int t41;
    int t31;
    float u6;
    float u8;
    float u10;
    float u12;
    int t23;
    int t14;

    t0 = *(int *)((a4 + 0xB5C));
    t41 = 0x8C38B934;
    if ((*(int *)0x8C38B934) != 0) {
        t31 = 0xB6;
        if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6))) == 0) {
            u6 = *(float *)((a4 + 0xAF0));
            u8 = (-u6);
            if (!(0.0f > u6)) {
                u8 = (*(float *)((a4 + 0xAF0)));
            }
            u10 = *(float *)0x8C291F90;
            u12 = (-u10);
            if (!(0.0f > u10)) {
                u12 = (*(float *)0x8C291F90);
            }
            t23 = 0xC50;
            if (!(u8 > u12) && (t14 = *(int *)((a4 + 0xC50)), (int)t14 <= 0)) {
            } else {
                if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x3;
                }
                *(unsigned int *)((a4 + 0xA24)) = 0x4;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAE)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAF)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = 0.0f;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)) = 0x1;
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) + 50.0f);
                if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) > 100.0f) {
                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = 100.0f;
                }
                t23 = 0xC;
            }
            t31 = t23;
        }
        t41 = t31;
    }
    return t41;
}

int hudValueDraw(int a4, int a5, int a6, int a7, float f4)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 44)) = a4;
    vecMake(a4, a5, a6, a7, (((int)stk + 44) + 0x4), (*(float *)0x8C0986B0), (*(float *)0x8C0986AC), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    hudFramePutNarrow(*(Stk3 *)((((int)stk + 44) + 0x4)), (f4 * (*(float *)0x8C0986BC)));
    *(float *)(((((int)stk + 44) + 0x4) + 0x8)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x8))) - 0.0500000007f);
    *(float *)(((((int)stk + 44) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x0))) + (*(float *)0x8C0986C8));
    *(float *)(((((int)stk + 44) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x4))) - 7.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    sprPutAtAlpha(0x8C33BC60, *(Stk3 *)((((int)stk + 44) + 0x4)), f4);
    *(float *)(((((int)stk + 44) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x0))) - (*(float *)0x8C0986D8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    return (hudNumPut((*(int *)(((int)stk + 44))), *(Stk3 *)((((int)stk + 44) + 0x4)), f4));
}

int fadeScreenStart(int a4, int a5, int a6, int a7)
{
    int t1;
    float u7;
    int t10;
    int stk[13];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    vecMake(a4, a5, a6, a7, (((int)stk + 16) + 0xC), 320.0f, 240.0f, 9.99999975e-06f);
    t1 = set_event(0x78, 0x8C084BCE);
    *(unsigned int *)((t1 + 0x14)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)((t1 + 0x18)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)((t1 + 0x24)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)((t1 + 0x20)) = (*(int *)(((int)stk + 20)));
    u7 = 0.0f;
    if ((*(int *)(((int)stk + 16))) == 2) {
        u7 = 1.0f;
    }
    *(float *)((t1 + 0x1C)) = u7;
    if ((*(int *)(((int)stk + 20))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t10 = 0x22;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t10 = 0x21;
    }
    sprInitPos((t1 + 0x28), t10, *(Stk3 *)((((int)stk + 16) + 0xC)));
    *(float *)((t1 + 0x38)) = 40.0f;
    *(float *)((t1 + 0x3C)) = 30.0f;
    return 0x3C;
}

int uniformTexLoad(int a4, int a5, int a6)
{
    int t26;

    if ((*(int *)((0x8C1891D4 + (a6 << 2)))) != a4) {
        if ((*(int *)(((0x8C34A238 + (a6 * 0x4C)) + 0x0))) != 0) {
            fileLoadCloseSlot(a6);
            *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
        }
    }
    if ((*(int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0))) == 0) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = a4;
        *(unsigned int *)((((a6 * 0x4C) + 0x8C34A238) + 0x0)) = 0x1;
        cacheOcbiRange((a5 + 0x8CA80000), 0x20000);
        fileLoadStartSlotOfs(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C18911C))), 0x0, a5, a6);
    }
    t26 = fileLoadPollSlot(a6);
    if (t26 == 1) {
        *(unsigned int *)((0x8C1891D4 + (a6 << 2))) = 0xFFFFFFFF;
    }
    return t26;
}

int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    float u0;
    int stk[27];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    stk[18] = a11;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1D7300;
    *(float *)0x8C1D73CC = f4;
    *(float *)0x8C1D7390 = f4;
    *(float *)0x8C1D7378 = f4;
    *(float *)0x8C1D7354 = f4;
    *(float *)0x8C1D733C = f4;
    u0 = *(float *)0x8C0DEB40;
    *(float *)0x8C1D73FC = (f4 + u0);
    *(float *)0x8C1D73E4 = (f4 + u0);
    *(float *)0x8C1D73A8 = (f4 + u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x1C)); }
    winTriPartsPut(0x8C1D736C, 0x2, ((*(int *)(((int)stk + 32))) + 0xF), (*(int *)(((int)stk + 36))), *(Stk3 *)((((int)stk + 32) + 0x1C)), f6, f5);
    *(volatile int *)(((int)stk + 36));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x2C)); }
    return (winPartsPut(0x8C1D7300, 0x8C1D736C, 0x1, (*(int *)(((int)stk + 32))), *(Stk3 *)((((int)stk + 16) + 0x2C)), f6, f5));
}

int swingBlurSpawn(int a4, int a5, int a6, int a7)
{
    int stk[41];

    *(unsigned int *)(((int)stk + 72)) = a4;
    *(unsigned int *)(((int)stk + 76)) = (*(int *)((((*(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xC58))) << 2) + 0x8C10DFD4)));
    vecMake(((a4 * 0xD78) + 0x8C287D84), a5, a6, a7, (((int)stk + 72) + 0x48), 0.0f, 0.0f, 1.0f);
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlMultiMatrix((((int)stk + 68) + 0xC));
    nlGetMatrix((((int)stk + 68) + 0xC));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)((((int)stk + 68) + 0xC)); }
    hudImpactSpawn((*(int *)(((int)stk + 76))), *(Stk16 *)((((int)stk + 68) + 0xC)), (*(float *)((((*(int *)(((int)stk + 72))) << 2) + 0x8C334384))));
    return (nlPopMatrix(0x1));
}

int charaTexCount(int a4)
{
    int t0;

    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                t0 = 0x14;
            }
                break;
            case 2:
            {
                t0 = 0x12;
            }
                break;
            case 4:
            {
                t0 = 0x12;
            }
                break;
            case 6:
            {
                t0 = 0x13;
            }
                break;
            case 8:
            {
                t0 = 0x11;
            }
                break;
            case 10:
            {
                t0 = 0x12;
            }
                break;
            case 12:
            {
                t0 = 0x13;
            }
                break;
            case 14:
            {
                t0 = 0x11;
            }
                break;
            case 16:
            {
                t0 = 0x11;
            }
                break;
            case 18:
            {
                t0 = 0x11;
            }
                break;
            case 20:
            {
                t0 = 0x11;
            }
                break;
            case 22:
            {
                t0 = 0x13;
            }
                break;
            case 24:
            {
                t0 = 0x12;
            }
                break;
            case 26:
            {
                t0 = 0x12;
            }
                break;
            case 28:
            {
                t0 = 0x11;
            }
                break;
            case 30:
            {
                t0 = 0x12;
            }
                break;
            case 32:
            {
                t0 = 0x10;
            }
                break;
            default:
            {
                t0 = 0xF;
            }
                break;
        }
        return t0;
    }
    return 0x0;
}
