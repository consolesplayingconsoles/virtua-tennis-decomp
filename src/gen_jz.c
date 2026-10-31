/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char g_0c2b2fc8[];
extern char g_0c2b7948[];
extern char g_0c2b8cbc[];
extern char padPeri[];
extern char replayInput[];

typedef struct { int w[1]; } Stk1;
typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int _rnd(int, int);
int ballColliInit(int, int, int, int);
int cameraCalcPoint(int, int, int, int, int);
int countryNamePutB(int, Stk3, Stk1, float);
int cpuBallPredict(int, int, int, int, float, float, float);
int cpuDblMoodUpdate(float);
int cpuDblPartnerSignal(void);
int cpuDblThinkAll(float);
int cpuMeterInput(int, int, int, float, float);
int cpuPadHistory(int, int, int, int, int, int);
int cursorBoxPut(int, Stk3, float, float, float);
int decoPairPut(int, float);
int hudProfileDraw(int, Stk3);
int hudScoreIconPut(int, Stk3, float);
int iconSlotPutB(int, Stk3, float, float);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmProcessVertexRenderState(int, int, int, int);
int kmRender(int);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int menuDimScreen(int, int, int, int);
int menuListDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int nlArcTan(float);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlSin(int);
int nlTranslate(float, float, float);
int nl_action_PixelClipping(void);
int primRectDirX(int, int, int, int, Stk3, Stk1);
int primRectDirY(int, int, int, int, Stk3, Stk1);
int sndSeDecide(void);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageSelNameDraw(int, int, int, Stk3);
int unlockCountW0(void);
int vecAnglesTo(int, int, Stk3, Stk3);
Stk3 vecMake(float, float, float);
int selCharInfoDraw(int a4, int a5, int a6, int a7, int a8);
int menuListExec(int a4, int a5, int a6, int a7);
void cpuDblInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int decoWaveDraw(int a4, Stk2 s);
int sseleGridDraw(void);
int panelLogoSwingDraw2(int a4, Stk3 s);
int _power(int a4, int a5, int a6);
float cameraFovForSize(float f4);
int panelLogoSwingDraw(Stk3 s, float f4);
int rectFrameDraw(int a4, Stk4 s, float f4);
int circuitDrawPrompt(void);
int ballInit(int a4);
int nlSysInitStripContextVtx(int a4, int a5, int a6, int a7);
int nlSysInitStripContextBG(int a4, int a5, int a6, int a7);
int nlstripSetVertexContext(int a4, int a5, int a6, int a7);
int nlWaitVSync(void);
int hudScoreIconPutFull(int a4, Stk3 s);


int menuListExec(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;
    int t24;
    int t26;
    int t28;
    int t29;
    int t87;
    int t75;
    int t32;
    int t34;
    int t40;
    int t43;
    float u44;
    int t49;
    int t58;
    float u59;
    int t64;
    int t3;
    int t7;
    int t11;
    int t15;
    int t19;
    int t23;
    int t27;
    int t67;
    int t52;
    float u45;
    float u60;
    int stk[232];

    t0 = 0x8C125680;
    t2 = (0x2DC + ((int)stk + 40));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125680 + 108)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0x8C1256EC;
    t6 = (0x270 + ((int)stk + 40));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C1256EC + 108)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0x8C125758;
    t10 = (0x204 + ((int)stk + 40));
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((0x8C125758 + 108)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    t12 = 0x8C1257C4;
    t14 = (0x198 + ((int)stk + 40));
    for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)((0x8C1257C4 + 108)) < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
    t16 = 0x8C125830;
    t18 = (0x12C + ((int)stk + 40));
    for (;;) { t19 = *(int *)t16; t16 = (t16 + 4); if ((unsigned int)((0x8C125830 + 108)) < (unsigned int)t16) break; *(unsigned int *)t18 = t19; t18 = (t18 + 4); }
    t20 = 0x8C12589C;
    t22 = (0xC0 + ((int)stk + 40));
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((0x8C12589C + 108)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    t24 = 0x8C125908;
    t26 = (((int)stk + 40) + 0x54);
    for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0x8C125908 + 108)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
    t28 = *(int *)(((a4 << 2) + (int)padPeri));
    *(unsigned int *)(((int)stk + 44)) = t28;
    t29 = *(int *)((t28 + 0x8));
    t87 = (int)padPeri;
    if (((0x400 & t29) != 0) && ((0x200 & t29) != 0)) {
    } else {
        menuDimScreen((a4 << 2), t29, a6, a7);
        t75 = a5;
        if (a5 != -1) {
            t32 = *(int *)0x8C287D5C;
            t34 = 0x0;
            if ((t32 != 0) && ((t32 != 2) && (t32 != 3))) {
                t34 = 0x3;
            }
            menuListDraw(a5, t34, 0x0, 0x0, *(int *)((int)stk + 40), *(int *)((int)stk + 40 + 4), *(int *)((int)stk + 40 + 8), *(int *)((int)stk + 40 + 12), *(int *)((int)stk + 40 + 16), *(int *)((int)stk + 40 + 20), *(int *)((int)stk + 40 + 24), *(int *)((int)stk + 40 + 28));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x0)) = (0x270 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x4)) = (0x204 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0x8)) = (0x198 + ((int)stk + 40));
            *(unsigned int *)(((((int)stk + 40) + 0x44) + 0xC)) = (0x12C + ((int)stk + 40));
            *(float *)(((((int)stk + 40) + 0x38) + 0x0)) = 265.0f;
            *(float *)(((((int)stk + 40) + 0x38) + 0x4)) = 186.0f;
            *(float *)(((((int)stk + 40) + 0x38) + 0x8)) = 9.99999975e-05f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((0x2E8 + ((int)stk + 28)), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((*(int *)(((((int)stk + 40) + 0x44) + (a4 << 2)))), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), 1.0f, 1.0f, 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            sprListPut((0xE4 + ((int)stk + 4)), 0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
            t40 = *(int *)0x8C287D5C;
            if (t40 != 1) {
                if ((t40 != 2) && (t40 != 3)) {
                    *(float *)(((((int)stk + 40) + 0x38) + 0x0)) = 289.0f;
                    *(float *)(((((int)stk + 40) + 0x38) + 0x4)) = 227.0f;
                    *(float *)(((((int)stk + 40) + 0x38) + 0x8)) = 9.99999975e-05f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x0)) = 274.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x4)) = 263.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x8)) = 9.99999975e-05f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
                    sprListPut((((int)stk + 40) + 0x54), 0x1, 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, ((-((float)a5 * 0.600000024f)) + 1.0f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x2C)); }
                    t52 = (sprListPut(0x8C1D18A8, 0x2, 0x0, *(Stk3 *)(((int)stk + 16)), 1.0f, 1.0f, (((float)a5 * 0.600000024f) + 0.400000006f)));
                } else {
                    *(float *)(((((int)stk + 40) + 0x2C) + 0x0)) = 289.0f;
                    *(float *)(((((int)stk + 40) + 0x2C) + 0xC)) = 278.0f;
                    *(unsigned int *)(((((int)stk + 40) + 0x24) + 0x0)) = (((int)stk + 40) + 0x54);
                    *(unsigned int *)(((int)stk + 68)) = 0x1;
                    *(unsigned int *)(((((int)stk + 40) + 0x24) + 0x4)) = 0x8C1D127C;
                    *(unsigned int *)(((int)stk + 72)) = 0x2;
                    t43 = 0x0;
                    for (;;) {
                        u44 = 227.0f;
                        u44 = u44 + 36.0f * (float)t43;
                        *(float *)((((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C)) + 0x4)) = u44;
                        *(float *)((((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C)) + 0x8)) = 9.99999975e-05f;
                        *(unsigned int *)(((int)stk + 40)) = ((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C));
                        if (t43 == a5) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C))); }
                            u45 = 1.0f;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t43 << 1) + t43) << 2) + (((int)stk + 40) + 0x2C))); }
                            u45 = 0.400000006f;
                        }
                        t49 = sprListPut((*(int *)(((((int)stk + 40) + 0x24) + (t43 << 2)))), (*(int *)((((((int)stk + 28) + 0x28) + (t43 << 2)) + 0x0))), 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, u45);
                        t43 = (t43 + 0x1);
                        if ((int)t43 >= (int)0x2) {
                            break;
                        }
                    }
                    t52 = t49;
                }
                t67 = t52;
            } else {
                *(float *)(((((int)stk + 40) + 0x20) + 0x0)) = 289.0f;
                *(float *)(((((int)stk + 40) + 0x20) + 0xC)) = 271.0f;
                *(float *)(((((int)stk + 40) + 0x20) + 0x18)) = 274.0f;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x0)) = (((int)stk + 40) + 0x54);
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x0)) = 0x1;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x4)) = 0x8C1D17D0;
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x4)) = 0x2;
                *(unsigned int *)(((((int)stk + 40) + 0x14) + 0x8)) = 0x8C1D18A8;
                *(unsigned int *)(((((int)stk + 40) + 0x8) + 0x8)) = 0x2;
                t58 = 0x0;
                for (;;) {
                    u59 = 227.0f;
                    u59 = u59 + 36.0f * (float)t58;
                    *(float *)((((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20)) + 0x4)) = u59;
                    *(float *)((((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20)) + 0x8)) = 9.99999975e-05f;
                    *(unsigned int *)(((int)stk + 40)) = ((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20));
                    if (t58 == a5) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20))); }
                        u60 = 1.0f;
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((t58 << 1) + t58) << 2) + (((int)stk + 40) + 0x20))); }
                        u60 = 0.400000006f;
                    }
                    t64 = sprListPut((*(int *)(((((int)stk + 40) + 0x14) + (t58 << 2)))), (*(int *)(((((int)stk + 40) + 0x8) + (t58 << 2)))), 0x0, *(Stk3 *)(((int)stk + 28)), 1.0f, 1.0f, u60);
                    t58 = (t58 + 0x1);
                    if ((int)t58 >= (int)0x3) {
                        break;
                    }
                }
                t67 = t64;
            }
            t75 = t67;
        }
        t87 = t75;
    }
    return t87;
}


int decoWaveDraw(int a4, Stk2 s)
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
    int stk[24];

    stk[14] = s.w[0];
    stk[15] = s.w[1];
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
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x24) + 0x0))), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D08));
    decoPairPut(a4, (*(float *)((((int)stk + 20) + 0x0))));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x24) + 0x0))) + (*(float *)0x8C0A5D10)), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D0C));
    decoPairPut(a4, (*(float *)((((int)stk + 20) + 0x4))));
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x24) + 0x0))) + (*(float *)0x8C0A5D18)), (*(float *)(((((int)stk + 20) + 0x24) + 0x4))), (*(float *)0x8C0A5D14));
    return (decoPairPut(a4, (*(float *)((((int)stk + 20) + 0x8)))));
}


int panelLogoSwingDraw2(int a4, Stk3 s)
{
    float u1;
    float t5;
    float u13;
    float u14;
    float u16;
    float u11;
    int stk[24];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    *(unsigned int *)(((int)stk + 20)) = a4;
    u1 = 0.5f;
    if (a4 != 0) {
        u1 = 1.0f;
    }
    *(unsigned short *)0x8C340492 = ((*(short *)0x8C340492) + 0x200);
    t5 = nlCos((unsigned short)(*(short *)0x8C340492));
    if (!(0.0f > t5)) {
        u11 = (nlCos((unsigned short)(*(short *)0x8C340492)));
    } else {
        u11 = (-(nlCos((unsigned short)(*(short *)0x8C340492))));
    }
    u13 = *(float *)0x8C09C444;
    u14 = u11;
    if (!(u11 > u13)) {
        u14 = u13;
    }
    u16 = *(float *)0x8C09C448;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 8)), 1.0f, u16, u1);
    if ((*(int *)(((int)stk + 20))) != 0) {
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x20) + 0x0))), (*(float *)(((((int)stk + 20) + 0x20) + 0x4))), ((*(float *)(((((int)stk + 20) + 0x20) + 0x8))) + (*(float *)0x8C09C454)));
        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 8), u14, u16, u1);
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x20) + 0x0))) + (*(float *)0x8C09C464)), ((*(float *)(((((int)stk + 20) + 0x20) + 0x4))) + (*(float *)0x8C09C460)), ((*(float *)(((((int)stk + 20) + 0x20) + 0x8))) + (*(float *)0x8C09C45C)));
    return (sprPutAtAlpha(0x8C340440, *(Stk3 *)((int)stk + 8), u1));
}


float cameraFovForSize(float f4)
{
    float u13;
    float u14;
    int t19;
    int stk[36];

    *(float *)(((int)stk + 52)) = f4;
    nlPushUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(0x8C287B54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C287B60); }
    vecAnglesTo((((int)stk + 20) + 0x18), (((int)stk + 20) + 0x1C), *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
    nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 44)))));
    nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 48)))));
    nlTranslate((-(*(float *)0x8C287B54)), (-(*(float *)0x8C287B58)), (-(*(float *)0x8C287B5C)));
    nlGetMatrix((((int)stk + 20) + 0x24));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0x8C287B60); }
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x70);
    cameraCalcPoint((((int)stk + 8) + 0x30), 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
    u13 = *(float *)(((int)stk + 128));
    u14 = (-u13);
    if (!(0.0f > u13)) {
        u14 = u13;
    }
    t19 = nlArcTan(((*(float *)0x8C02DBEC) / ((u14 * (*(float *)0x8C02DBE8)) / (*(float *)(((int)stk + 52))))));
    return ((((float)t19 * (*(float *)0x8C02DBF4)) / (*(float *)0x8C02DBF8)) / (*(float *)0x8C02DBFC));
}

int panelLogoSwingDraw(Stk3 s, float f4)
{
    float t2;
    float u10;
    float u11;
    float u13;
    float u8;
    int stk[23];

    stk[12] = s.w[0];
    stk[13] = s.w[1];
    stk[14] = s.w[2];
    *(float *)(((int)stk + 20)) = f4;
    *(unsigned short *)0x8C340490 = ((*(short *)0x8C340490) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C340490));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C340490)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C340490))));
    }
    u10 = *(float *)0x8C09C2F4;
    u11 = u8;
    if (!(u8 > u10)) {
        u11 = u10;
    }
    u13 = *(float *)0x8C09C2F8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x1C)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 8)), 1.0f, u13, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x1C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x1C) + 0x4))), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x8))) + (*(float *)0x8C09C304)));
    cursorBoxPut(0x1, *(Stk3 *)((int)stk + 8), u11, u13, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x1C) + 0x0))) + (*(float *)0x8C09C314)), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x4))) + (*(float *)0x8C09C310)), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x8))) + (*(float *)0x8C09C30C)));
    return (sprPutAtAlpha(0x8C340440, *(Stk3 *)((int)stk + 8), (*(float *)(((int)stk + 20)))));
}

int rectFrameDraw(int a4, Stk4 s, float f4)
{
    float u0;
    int stk[55];

    stk[43] = s.w[0];
    stk[44] = s.w[1];
    stk[45] = s.w[2];
    stk[46] = s.w[3];
    u0 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a4;
    *(float *)((((int)stk + 4) + 0x8)) = u0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = a4;
    *(float *)(((((int)stk + 4) + 0x10) + 0x8)) = u0;
    *(unsigned int *)((((((int)stk + 4) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)((((((int)stk + 4) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)(((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)(((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)(((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)(((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)(((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)(((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(unsigned int *)(((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0xC)) = a4;
    *(float *)(((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x8)) = u0;
    *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x0)));
    *(float *)((((int)stk + 4) + 0x4)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x4)));
    *(float *)(((((int)stk + 4) + 0x10) + 0x0)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x0))) - (f4 * 1.33000004f));
    *(float *)(((((int)stk + 4) + 0x10) + 0x4)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x4))) - f4);
    *(float *)((((((int)stk + 4) + 0x10) + 0x10) + 0x0)) = (*(float *)(((0xB4 + ((int)stk + 4)) + 0x0)));
    *(float *)((((((int)stk + 4) + 0x10) + 0x10) + 0x4)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x4)));
    *(float *)(((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x0)) = ((*(float *)(((0xB4 + ((int)stk + 4)) + 0x0))) + (f4 * 1.33000004f));
    *(float *)(((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x4)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x4))) - f4);
    *(float *)((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = (*(float *)(((0xB4 + ((int)stk + 4)) + 0x0)));
    *(float *)((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = (*(float *)(((0xB4 + ((int)stk + 4)) + 0x4)));
    *(float *)(((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = ((*(float *)(((0xB4 + ((int)stk + 4)) + 0x0))) + (f4 * 1.33000004f));
    *(float *)(((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = ((*(float *)(((0xB4 + ((int)stk + 4)) + 0x4))) + f4);
    *(float *)((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x0)));
    *(float *)((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = (*(float *)(((0xB4 + ((int)stk + 4)) + 0x4)));
    *(float *)(((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x0))) - (f4 * 1.33000004f));
    *(float *)(((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = ((*(float *)(((0xB4 + ((int)stk + 4)) + 0x4))) + f4);
    *(float *)((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x0)));
    *(float *)((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = (*(float *)(((0xA8 + ((int)stk + 4)) + 0x4)));
    *(float *)(((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x0)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x0))) - (f4 * 1.33000004f));
    *(float *)(((((((((((((int)stk + 4) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x10) + 0x4)) = ((*(float *)(((0xA8 + ((int)stk + 4)) + 0x4))) - f4);
    return (nlDispStripTrnsl(0xA, ((int)stk + 4)));
}

int circuitDrawPrompt(void)
{
    int t6;
    int t9;
    int t10;
    int t14;
    float t21;
    float u22;
    int t12;
    int stk[13];

    t6 = 0x0;
    if (((*(int *)(((*(int *)(((int)padPeri + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 8) != 0) {
        sndSeDecide();
        t6 = 0x1;
    }
    t9 = *(int *)0x8C287D5C;
    t10 = 0x15F;
    if (t9 == 2) {
        t10 = 0x191;
    }
    t14 = t10;
    if ((t9 == 3) && (t12 = *(int *)0x8C2FBFDC, t12 == 1)) {
        t14 = (t10 + 0x46);
    }
    sprSheetSet(0x8C10ABC0);
    sprSheetPut(0x0, 250.0f, (float)(t14 + 0x3), 9.99999975e-05f, 1.0f);
    *(float *)(((int)stk + 20)) = (float)t14;
    *(Stk3 *)(((int)stk + 8)) = vecMake(224.0f, (float)t14, 0.000300000014f);
    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 8), 1.0f, 177.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(224.0f, (*(float *)(((int)stk + 20))), 0.000199999995f);
    t21 = nlSin(((*(int *)0x8C20D19C) * 0x888));
    u22 = 0.5f;
    u22 = u22 + 0.5f * t21;
    cursorBoxPut(0x1, *(Stk3 *)((int)stk + 8), u22, 177.0f, 1.0f);
    return t6;
}

int ballInit(int a4)
{
    int t2;
    int t5;
    int t6;
    int t8;
    int t11;
    int t9;

    *(Stk3 *)(a4) = vecMake(0.0f, (*(float *)0x8C0264B4), 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0xC)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x18)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x24)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
    *(float *)((a4 + 0x30)) = 0.0f;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x2;
    *(unsigned int *)((a4 + 0x54)) = ((*(int *)((a4 + 0x54))) | 0x8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x64)) = *(struct mv3 *)(0x8C1016D4); }
    t2 = *(int *)((a4 + 0x50));
    *(float *)((a4 + 0x70)) = ((*(float *)((((((t2 << 1) + t2) << 2) << 1) + 0x8C105FD8))) * (*(float *)0x8C0264C4));
    *(unsigned short *)((a4 + 0x84)) = 0x0;
    *(unsigned short *)((a4 + 0x86)) = 0x0;
    t5 = 0x8C291FB0;
    for (;;) {
        t6 = a4;
        t8 = t5;
        for (;;) { t9 = *(int *)t6; t6 = (t6 + 4); if ((unsigned int)((a4 + 140)) < (unsigned int)t6) break; *(unsigned int *)t8 = t9; t8 = (t8 + 4); }
        t5 = (t5 + 0x8C);
        if ((unsigned int)t5 >= (unsigned int)(int)replayInput) {
            break;
        }
    }
    *(unsigned int *)0x8C295480 = 0x0;
    t11 = ballColliInit(t5, 0x8C, (int)replayInput, 0x8C291FB0);
    *(unsigned int *)0x8C1D126C = 0x0;
    return t11;
}

int nlSysInitStripContextVtx(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x0;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x3;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState(a4, 0x4, 0x1, a7);
    return kmSetVertexRenderState(0x8C454FC0, a4);
}

int nlSysInitStripContextBG(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x1;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState(a4, 0x1, 0x4, a7);
    return kmSetBackGroundRenderState(a4);
}

int nlstripSetVertexContext(int a4, int a5, int a6, int a7)
{
    int t13;
    int t15;
    int t18;
    int t20;

    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0x8)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0xC)) = (*(int *)(((a4 + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0x20)) = (*(int *)((((a4 + 0x4) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0x44)) = (*(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)(int)g_0c2b2fc8) + 0x40)) = (*(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    kmProcessVertexRenderState((*(int *)(int)g_0c2b2fc8), a5, a6, a7);
    t13 = *(int *)(int)g_0c2b2fc8;
    *(unsigned int *)((t13 + 0x90)) = ((*(int *)((t13 + 0x90))) & 0xFFFCFF3F);
    t15 = *(int *)(int)g_0c2b2fc8;
    *(unsigned int *)((t15 + 0x90)) = ((*(int *)((t15 + 0x90))) | (*(int *)(int)g_0c2b7948));
    t18 = *(int *)(int)g_0c2b2fc8;
    *(unsigned int *)((t18 + 0x98)) = ((*(int *)((t18 + 0x98))) & 0x31FF0FF);
    t20 = *(int *)(int)g_0c2b2fc8;
    *(unsigned int *)(((t20 + 0x98) + 0x0)) = ((*(int *)(((t20 + 0x98) + 0x0))) | (((((*(int *)0x8C424418) ^ 0xFC) << 16) << 8) | (*(int *)0x8C458E08)));
    return kmSetVertexRenderState(0x8C454FC0, (*(int *)(int)g_0c2b2fc8));
}

int nlWaitVSync(void)
{
    int t3;
    int t4;
    int t9;
    int t10;
    int t17;
    int t19;

    kmEndPass(0x8C454FC0);
    nl_action_PixelClipping();
    kmRender(0x0);
    t3 = *(int *)0x8C1DC8A0;
    if (t3 != 0) {
        t4 = ((int (*)(void))(t3))();
    }
    kmEndScene(0x8C42420C);
    t9 = *(int *)0x8C1DC8A4;
    if (t9 != 0) {
        t10 = ((int (*)(void))(t9))();
    }
    kmBeginScene(0x8C42420C);
    kmBeginPass(0x8C454FC0);
    *(unsigned int *)(int)g_0c2b8cbc = (*(int *)0x8C454FC0);
    t17 = *(int *)0x8C1DC8A8;
    t19 = 0x8C1DC8A8;
    if (t17 != 0) {
        t19 = (((int (*)(void))(t17))());
    }
    return t19;
}

int hudScoreIconPutFull(int a4, Stk3 s)
{
    int stk[16];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (hudScoreIconPut(a4, *(Stk3 *)(((int)stk + 4)), 1.0f));
}
