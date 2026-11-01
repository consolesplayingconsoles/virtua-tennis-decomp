/* A function proven on cases written by hand: the generator's C with the replacements ['    register int t45;\n=>    int t45;\n', 'int shopDrawCount(int, float);=>int shopDrawCount(int, Stk3, float);', 'shopDrawCount(((*(int *)((t48 + 0x14))) + 0x1), u51);=>shopDrawCount(((*(int *)((t48 + 0x14))) + 0x1), *(Stk3 *)(((int)stk + 24)), u51);']. */

typedef struct { int w[3]; } Stk3;
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetTarget(void);
int camSetupView(void);
int circuitRateSetA(int);
int circuitRateSetB(int);
int cursorBoxPut(int, Stk3, float, float, float);
int fadeCaptureBegin(float);
int fadeCaptureEnd(int);
int hudCounterStep(int, int, int, int, int);
int hudFontNumPut(int, Stk3, float);
int lightSet(int, int, int, int);
int lightUpdate(int);
int logoWaveDraw(float);
float mathLerp(float, float, float);
int memcmp(int, int, int);
int memmove(int, int, int);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlExecuteEvent(int, int, int, int);
int nlPrintColor(int);
int padDirRepeat(int, int);
int resWtcShopObjTexFree(void);
int resWtcShopSprTexFree(void);
int screenQuadPut(int, float);
int shopDrawCatIcon(int, float);
int shopDrawCatPanel(int, int, int, int, int);
int shopDrawCount(int, Stk3, float);
int shopDrawMenu(void);
int shopDrawPrice(int, int, int, int, int, int, int, int, int, int, int, int);
int shopItemTblInit(int, float, float, float);
int shopPreviewExec(int, int, int, int, int, int);
int sndSe05_04(void);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
extern int sprListPut();
int sprPutCentered(int, int, int, int, int, float, float);
int uiScanlinesPut(float);
Stk3 vecMake(float, float, float);
int FUN_8c0e6620(int a4, int a5, int a6, float f4);

int FUN_8c0e6620(int a4, int a5, int a6, float f4)
{
    int stk[50];
    register int t31;
    register int t34;
    register int t35;
    register int t38;
    register int t44;
    register int t47;
    register int t48;
    register float u51;
    register int t60;
    register int t95;
    register int t118;
    register int t120;
    register int t126;
    register int t132;
    register int t133;
    register int t150;
    register float u151;
    register int t153;
    register int t155;
    register int t156;
    register float u159;
    register int t163;
    register int t167;
    register int t173;
    register float u179;
    register float t185;
    register float u195;
    register int t196;
    register int t198;
    register int t221;
    register int t223;
    register int t262;
    register int t264;
    register int t265;
    register int t266;
    register int t267;
    register int t281;
    register int t334;
    register int t336;
    register int t351;
    register int t353;
    register int t370;
    register int t389;
    register int t390;
    register int t417;
    int t45;
    register int t46;
    register float u49;
    register float u50;
    register int t74;
    register int t62;
    register int t70;
    register int t101;
    register int t124;
    register float u127;
    register int t147;
    register int t144;
    register int t141;
    register int t138;
    register int t135;
    register float u191;
    register int t412;
    register int t413;
    register int t414;
    register int t415;
    register int t328;
    register int t329;
    register int t330;
    register int t331;
    register int t319;
    register int t320;
    register int t321;
    register int t322;
    register int t310;
    register int t311;
    register int t312;
    register int t313;
    register int t300;
    register int t301;
    register int t302;
    register int t303;
    register int t294;
    register int t288;

    if ((*(int *)0x8C20D15C) == 0) {
        *(unsigned int *)0x8C4220B4 = 0x0;
        *(unsigned int *)0x8C4220B8 = 0x0;
        *(unsigned int *)0x8C4220BC = 0xFFFFFFFF;
        *(float *)0x8C4220CC = (-1.0f);
        *(unsigned int *)0x8C4220C0 = 0x0;
        *(unsigned int *)0x8C4220C8 = 0x0;
        *(unsigned int *)0x8C4220C4 = 0x0;
    }
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 36) + 0x70);
    *(unsigned int *)(((((int)stk + 36) + 0x70) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 36) + 0x6C);
    *(unsigned int *)(((((int)stk + 36) + 0x6C) + 0x0)) = 0x0;
    if ((*(int *)0x8C4220C0) == 0) {
        if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 2) != 0) {
            fadeCaptureBegin(f4);
        }
    }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 36) + 0x3C)) = *(struct mv6 *)(0x8C126FEC); }
    screenQuadPut((((int)stk + 36) + 0x3C), 250.0f);
    logoWaveDraw(80.0f);
    uiScanlinesPut(75.0f);
    shopDrawMenu();
    *(Stk3 *)(((int)stk + 24)) = vecMake(412.0f, 374.0f, 0.100000001f);
    t31 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DC270, 0x2, 0x0, 1.0f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 24)) = vecMake(575.0f, 400.0f, 0.100000001f);
    hudFontNumPut((*(int *)0x8C2FBC58), *(Stk3 *)((int)stk + 24), 1.0f);
    *(Stk3 *)(((int)stk + 24)) = vecMake(384.0f, 370.0f, 0.150000006f);
    t34 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DC12C, 0x3, 0x0, 0.5f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 24)) = vecMake(384.0f, 400.0f, 0.150000006f);
    t35 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DC12C, 0x3, 0x0, 0.5f, 1.0f, 1.0f);
    *(int *)((int)stk + 20) = 0x8C4220D0;
    hudCounterStep(0x1, 0x0, 0x1E, 0xA, 0x8C4220D0);
    if ((*(int *)0x8C4220D0) != 0) {
        *(Stk3 *)(((int)stk + 24)) = vecMake(427.0f, 433.0f, 0.100000001f);
        t38 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DBFE8, 0x3, 0x0, 1.0f, 1.0f, 1.0f);
    }
    *(int *)((int)stk + 32) = (((int)stk + 36) + 0x54);
    *(Stk3 *)((((int)stk + 36) + 0x54)) = vecMake(0.0f, 80.0f, 1.0f);
    t44 = *(int *)((((*(int *)0x8C4220A4) << 2) + 0x8C1D9CB4));
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    t47 = 0x8C4220A4;
    t48 = t44;
    u51 = 384.0f;
    for (;;) {
        if ((*(int *)((t48 + 0x8))) != -1) {
            t47 = (*(int *)((t48 + 0x8)));
            if (t47 == 0) {
            } else {
                t47 = 0x8C4220BC;
                t46 = (*(int *)((t48 + 0x10)));
                t60 = *(int *)((t47 + 0x0));
                if (t60 != t46) {
                    if ((t60 == 4) && (t62 = *(int *)((t48 + 0x10)), t62 == 5)) {
                        t46 = 0x8C4220BC;
                        t47 = (*(int *)((t48 + 0x10)));
                        *(unsigned int *)((t46 + 0x0)) = t47;
                        t70 = t46;
                    } else {
                        t45 = 0x8C4220BC;
                        t46 = (((int)stk + 36) + 0x54);
                        t47 = 0x8C0F7DAC;
                        *(unsigned int *)((t45 + 0x0)) = (*(int *)((t48 + 0x10)));
                        u50 = 16.0f;
                        *(float *)(((((int)stk + 36) + 0x54) + 0x0)) = u50;
                        t45 = ((int)stk + 24);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t46); }
                        t47 = 0x8C0E837C;
                        t46 = 0x8C4220BC;
                        shopDrawCatPanel((*(int *)((t46 + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 24));
                        t45 = 0x41B80000;
                        u49 = (*(float *)(((((int)stk + 36) + 0x54) + 0x4)));
                        u50 = (*(float *)&(t45));
                        u49 = (u49 + u50);
                        *(float *)(((((int)stk + 36) + 0x54) + 0x4)) = u49;
                    }
                    t74 = t70;
                } else {
                    t74 = t46;
                }
                t46 = t74;
                t47 = (*(int *)((t48 + 0x10)));
                if (t47 == 0) {
                    t47 = 0x2;
                    *(unsigned int *)(((int)stk + 44)) = t47;
                } else {
                    *(unsigned int *)(((int)stk + 44)) = 0x1;
                }
                t47 = (*(int *)((t48 + 0x18)));
                if (t47 != 0) {
                    t46 = 0x8C4220CC;
                    u50 = 1.0f;
                    u50 = (-u50);
                    t47 = (*(int *)(((int)stk + 48)));
                    t47 = (t47 + 0x1);
                    *(unsigned int *)(((int)stk + 48)) = t47;
                    u49 = (*(float *)((t46 + 0x0)));
                    u51 = 1.0f;
                    if (u49 == u50) {
                        t47 = 0x8C4220CC;
                        u49 = (*(float *)(((((int)stk + 36) + 0x54) + 0x4)));
                        *(float *)((t47 + 0x0)) = u49;
                    }
                    t46 = (*(int *)((t48 + 0x4)));
                    *(unsigned int *)(((int)stk + 36)) = t46;
                } else {
                    t47 = 0xFFFFFFFF;
                    u51 = 0.400000006f;
                    *(unsigned int *)(((int)stk + 36)) = t47;
                }
                t47 = 0x8C0F7DAC;
                u50 = (*(float *)(((((int)stk + 36) + 0x54) + 0x4)));
                t46 = (((int)stk + 36) + 0x54);
                *(float *)((t48 + 0x20)) = u50;
                u50 = 30.0f;
                *(float *)(((((int)stk + 36) + 0x54) + 0x0)) = u50;
                t45 = ((int)stk + 24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t46); }
                t46 = 0x8C0E84C0;
                shopDrawCatIcon((*(int *)((t48 + 0x10))), u51);
                u49 = (*(float *)(((((int)stk + 36) + 0x54) + 0x0)));
                u50 = 25.0f;
                u49 = (u49 + u50);
                t46 = (((int)stk + 36) + 0x54);
                *(float *)(((((int)stk + 36) + 0x54) + 0x0)) = u49;
                t45 = ((int)stk + 12);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t46); }
                t95 = ((int (*)(int, int, int, float, float, float))(sprListPut))((*(int *)((t48 + 0x0))), (*(int *)(((int)stk + 44))), 0x0, 1.0f, 1.0f, u51);
                t47 = (*(int *)((t48 + 0x10)));
                if (t47 == 0) {
                    u49 = (*(float *)(((((int)stk + 36) + 0x54) + 0x0)));
                    u50 = 95.0f;
                    u49 = (u49 + u50);
                    t46 = (((int)stk + 36) + 0x54);
                    *(float *)(((((int)stk + 36) + 0x54) + 0x0)) = u49;
                    t45 = ((int)stk + 24);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t46); }
                    t46 = 0x8C0E85C4;
                    shopDrawCount(((*(int *)((t48 + 0x14))) + 0x1), *(Stk3 *)(((int)stk + 24)), u51);
                } else {
                    t101 = t47;
                }
                t47 = t101;
                u50 = 345.0f;
                t46 = (((int)stk + 36) + 0x54);
                *(float *)(((((int)stk + 36) + 0x54) + 0x0)) = u50;
                t45 = ((int)stk + 24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t45) = *(struct mv3 *)(t46); }
                shopDrawPrice((*(int *)(((int)stk + 36))), (*(int *)((t48 + 0x10))), 0x0, 0x0, *(int *)((int)stk + 24), *(int *)((int)stk + 24 + 4), *(int *)((int)stk + 24 + 8), *(int *)((int)stk + 24 + 12), *(int *)((int)stk + 24 + 16), *(int *)((int)stk + 24 + 20), *(int *)((int)stk + 24 + 24), *(int *)((int)stk + 24 + 28));
                t45 = 0x41B00000;
                u49 = (*(float *)(((((int)stk + 36) + 0x54) + 0x4)));
                u50 = (*(float *)&(t45));
                u49 = (u49 + u50);
                *(float *)(((((int)stk + 36) + 0x54) + 0x4)) = u49;
                t47 = (*(int *)(((int)stk + 40)));
                t46 = (*(int *)((t47 + 0x0)));
                t46 = (t46 + 0x1);
                *(unsigned int *)((t47 + 0x0)) = t46;
            }
            t48 = (t48 + 0x24);
            continue;
        }
        break;
    }
    if ((*(int *)(((int)stk + 48))) == 0) {
        *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0x0)) = 0x1;
    }
    nlPrintColor(0xFFFFFFFF);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 36) + 0x14)) = *(struct mv16 *)(0x8C127004); }
    t118 = *(int *)0x8C4220B4;
    t120 = *(int *)((((*(int *)0x8C4220A4) << 2) + 0x8C1D9CB4));
    *(float *)0x8C4220CC = (mathLerp((*(float *)0x8C4220CC), (*(float *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x20))), 0.5f));
    t126 = (((int)stk + 36) + 0x14);
    for (;;) {
        if ((unsigned int)t126 >= (unsigned int)((((int)stk + 36) + 0x14) + 0x40)) {
            break;
        }
        t124 = 0x4;
        u127 = (*(float *)((t126 + t124)));
        u127 = (u127 + ((*(float *)(((0x8C4220CC) + 0x0)))));
        *(float *)((t126 + t124)) = u127;
        t126 = (t126 + 0x10);
    }
    nlDispStripTrnsl(0x4, (((int)stk + 36) + 0x14));
    t132 = *(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10));
    if (t132 != 1) {
        if (t132 != 6) {
            if (t132 != 2) {
                if (t132 != 4) {
                    if (t132 != 5) {
                        t133 = (((int)stk + 36) + 0x14);
                        if (t132 != 0) {
                        } else {
                            *(unsigned int *)(((int)stk + 44)) = 0x1;
                            t133 = 0x8C1DB418;
                        }
                        t135 = t133;
                    } else {
                        *(unsigned int *)(((int)stk + 36)) = 0x8C1DC420;
                        *(unsigned int *)(((int)stk + 44)) = 0x1;
                        t135 = 0x8C1DB3AC;
                    }
                    t138 = t135;
                } else {
                    *(unsigned int *)(((int)stk + 36)) = 0x8C1DC348;
                    *(unsigned int *)(((int)stk + 44)) = 0x1;
                    t138 = 0x8C1DB3AC;
                }
                t141 = t138;
            } else {
                *(unsigned int *)(((int)stk + 44)) = 0x3;
                t141 = 0x8C1DB484;
            }
            t144 = t141;
        } else {
            *(unsigned int *)(((int)stk + 44)) = 0x1;
            t144 = 0x8C1DB3AC;
        }
        t147 = t144;
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x2;
        t147 = 0x8C1DB2D4;
    }
    *(int *)((int)stk + 32) = (((int)stk + 36) + 0x48);
    *(Stk3 *)((((int)stk + 36) + 0x48)) = vecMake(505.0f, 95.0f, 0.100000001f);
    t150 = *(int *)(((int)stk + 44));
    *(unsigned int *)(((int)stk + 40)) = ((t150 - 1) * 0x6C);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4C)); }
    u151 = *(float *)(((t147 + ((t150 - 1) * 0x6C)) + 0x54));
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x58);
    sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u151, 0.0f);
    t153 = *(int *)(((int)stk + 40));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x5C)); }
    t155 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))(((t147 + ((t150 - 1) * 0x6C)) - t153), (*(int *)(((int)stk + 44))), 0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
    t156 = *(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10));
    if ((t156 != 4) && (t156 != 5)) {
    } else {
        *(int *)((int)stk + 32) = (((int)stk + 36) + 0x48);
        *(Stk3 *)((((int)stk + 36) + 0x48)) = vecMake(505.0f, 340.0f, 0.100000001f);
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4C)); }
        u159 = *(float *)(((*(int *)(((int)stk + 36))) + 0x54));
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x58);
        sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), u159, 0.0f);
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) - 108);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x5C)); }
        t163 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((int)stk + 36))), 0x2, 0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f);
    }
    *(Stk3 *)(((int)stk + 24)) = vecMake(503.0f, 113.0f, 1.0f);
    shopItemTblInit(0x8C1DA4E8, 233.0f, 51.0f, 1.0f);
    t167 = *(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10));
    if ((t167 != 4) && (t167 != 5)) {
    } else {
        *(Stk3 *)(((int)stk + 24)) = vecMake(503.0f, 347.0f, 1.0f);
        shopItemTblInit(0x8C1DA4E8, 233.0f, 30.0f, 1.0f);
    }
    if ((*(int *)0x8C1D9CD0) == 1) {
        *(Stk3 *)(((int)stk + 24)) = vecMake(430.0f, 231.0f, 0.150000006f);
        cursorBoxPut(0xFFE60000, *(Stk3 *)((int)stk + 24), 1.0f, 170.0f, 1.0f);
        *(Stk3 *)(((int)stk + 24)) = vecMake(450.0f, 235.0f, 0.100000001f);
        t173 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DB5C8, 0x3, 0x0, 1.0f, 1.0f, 1.0f);
    }
    if ((*(int *)0x8C4220C0) != 1) {
    } else {
        *(Stk3 *)(((int)stk + 24)) = vecMake(490.0f, 255.0f, 1.0f);
        u179 = 0.400000006f;
        u179 = u179 + 0.600000024f * (float)(*(int *)0x8C4220C4);
        cursorBoxPut(0x0, *(Stk3 *)((int)stk + 24), 1.0f, 70.0f, u179);
        *(Stk3 *)(((int)stk + 24)) = vecMake(490.0f, 290.0f, 1.0f);
        cursorBoxPut(0x0, *(Stk3 *)((int)stk + 24), 1.0f, 70.0f, (1.0f - ((float)(*(int *)0x8C4220C4) * 0.600000024f)));
        *(Stk3 *)(((int)stk + 24)) = vecMake(490.0f, (290.0f - (float)((*(int *)0x8C4220C4) * 0x23)), 0.5f);
        t185 = nlCos((*(int *)0x8C4220D4));
        if (!(0.0f > t185)) {
            u191 = (nlCos((*(int *)0x8C4220D4)));
        } else {
            u191 = (-(nlCos((*(int *)0x8C4220D4))));
        }
        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 24), u191, 70.0f, 1.0f);
        *(Stk3 *)(((int)stk + 24)) = vecMake(515.0f, 260.0f, 0.100000001f);
        u195 = 0.400000006f;
        u195 = u195 + 0.600000024f * (float)(*(int *)0x8C4220C4);
        t196 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DB778, 0x1, 0x0, 1.0f, 1.0f, u195);
        *(Stk3 *)(((int)stk + 24)) = vecMake(505.0f, 295.0f, 0.100000001f);
        t198 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1DB70C, 0x1, 0x0, 1.0f, 1.0f, (1.0f - ((float)(*(int *)0x8C4220C4) * 0.600000024f)));
        *(unsigned int *)0x8C4220D4 = ((*(int *)0x8C4220D4) + 0x200);
    }
    lightSet(0x0, 0x0, 0x46, 0x64);
    lightUpdate(0x0);
    *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, 0.0f, 47.0f);
    camSetTarget();
    *(Stk3 *)(((int)stk + 24)) = vecMake(0.0f, 0.0f, 0.0f);
    camSetEye();
    camMoveBegin(1.0f, 1.0f);
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28));
    shopPreviewExec((*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10))), (*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x14))), 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4));
    if ((*(int *)0x8C4220C0) != 0) {
        if ((*(int *)0x8C4220C0) != 1) {
        } else {
            t221 = padDirRepeat((*(int *)0x8C421F70), 0x10);
            if (t221 == 0) {
                t223 = padDirRepeat((*(int *)0x8C421F70), 0x20);
                if (t223 != 0) {
                    if ((*(int *)0x8C4220C8) != 0) {
                        *(unsigned int *)0x8C4220C4 = ((*(int *)0x8C4220C4) + 0x1);
                        sndSeCursor();
                        if ((int)(*(int *)0x8C4220C4) > (int)0x1) {
                            *(unsigned int *)0x8C4220C4 = 0x0;
                        }
                    } else {
                        sndSe05_04();
                    }
                }
            } else {
                if ((*(int *)0x8C4220C8) != 0) {
                    *(unsigned int *)0x8C4220C4 = ((*(int *)0x8C4220C4) + 0x1);
                    sndSeCursor();
                    if ((int)(*(int *)0x8C4220C4) > (int)0x1) {
                        *(unsigned int *)0x8C4220C4 = 0x0;
                    }
                } else {
                    sndSe05_04();
                }
            }
            if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 2) != 0) {
                *(unsigned int *)0x8C4220C0 = 0x0;
                sndSeCancel();
            }
            if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) == 0) {
            } else {
                *(unsigned int *)0x8C4220C0 = 0x0;
                if ((*(int *)0x8C4220C4) == 0) {
                    sndSeCancel();
                } else {
                    sndSeDecide();
                    t262 = *(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10));
                    if (t262 == 6) {
                        t264 = t262;
                        t265 = a4;
                        t266 = 0x8C1D9CB4;
                        t267 = a6;
                        for (;;) {
                            if ((unsigned int)t266 >= (unsigned int)0x8C1D9CC8) {
                                break;
                            }
                            t267 = t266;
                            t265 = (*(int *)((t267 + 0x0)));
                            for (;;) {
                                t264 = (*(int *)((t265 + 0x8)));
                                if (t264 == -1) {
                                    break;
                                }
                                t264 = (*(int *)((t265 + 0x10)));
                                if (t264 == 6) {
                                    *(unsigned int *)((t265 + 0x18)) = 0x1;
                                }
                                t265 = (t265 + 0x24);
                            }
                            t266 = (t266 + 0x4);
                        }
                        *(unsigned char *)0x8C2FBC7D = (*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x14)));
                        *(unsigned int *)0x8C2FBE24 = 0x1;
                        t300 = t265;
                        t301 = t266;
                        t302 = t267;
                        t303 = 0x8C1D9CC8;
                    } else {
                        if (t262 == 4) {
                            circuitRateSetA((*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x14))));
                            *(unsigned int *)0x8C2FBE24 = 0x1;
                        } else {
                            if ((*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10))) == 5) {
                                circuitRateSetB((*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x14))));
                                *(unsigned int *)0x8C2FBE24 = 0x1;
                            } else {
                                t281 = *(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x10));
                                *(unsigned int *)((((t281 << 2) + 0x8C422048) + 0x0)) = (((int)0x1 << (int)(*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x14)))) | (*(int *)((((t281 << 2) + 0x8C422048) + 0x0))));
                                t288 = ((t281 << 2) + 0x8C422048);
                            }
                            t294 = t288;
                        }
                        t300 = t294;
                    }
                    *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) - (*(int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x4))));
                    *(unsigned int *)(((t120 + ((((t118 << 2) << 1) + t118) << 2)) + 0x18)) = 0x0;
                    t310 = t300;
                    t311 = t301;
                    t312 = t302;
                    t313 = t303;
                }
                t319 = t310;
                t320 = t311;
                t321 = t312;
                t322 = t313;
            }
            t328 = t319;
            t329 = t320;
            t330 = t321;
            t331 = t322;
        }
        t412 = t328;
        t413 = t329;
        t414 = t330;
        t415 = t331;
    } else {
        t334 = padDirRepeat((*(int *)0x8C421F70), 0x10);
        if (t334 != 0) {
            sndSeCursor();
            t336 = *(int *)0x8C4220B4;
            *(unsigned int *)0x8C4220B4 = (t336 - 1);
            if ((int)(t336 - 1) < 0) {
                *(unsigned int *)0x8C4220B4 = ((*(int *)((((*(int *)0x8C4220B8) << 2) + (((int)stk + 36) + 0x70)))) - 1);
            }
            *(unsigned int *)0x8C4220A8 = 0x0;
            if ((*(int *)0x8C1D9CD0) == 1) {
                *(unsigned int *)0x8C1D9CD0 = 0x0;
            }
        }
        t351 = padDirRepeat((*(int *)0x8C421F70), 0x20);
        if (t351 != 0) {
            sndSeCursor();
            t353 = *(int *)0x8C4220B4;
            *(unsigned int *)0x8C4220B4 = (t353 + 0x1);
            if ((int)(t353 + 0x1) > (int)((*(int *)((((*(int *)0x8C4220B8) << 2) + (((int)stk + 36) + 0x70)))) - 1)) {
                *(unsigned int *)0x8C4220B4 = 0x0;
            }
            *(unsigned int *)0x8C4220A8 = 0x0;
            if ((*(int *)0x8C1D9CD0) == 1) {
                *(unsigned int *)0x8C1D9CD0 = 0x0;
            }
        }
        if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 2) != 0) {
            fadeCaptureEnd(0x0);
            sndSeCancel();
            *(unsigned int *)0x8C20D150 = 0x4;
            t370 = memcmp(0x8C40C308, 0x8C422048, 0xC);
            if (t370 != 0) {
                memmove(0x8C40C308, 0x8C422048, 0xC);
                *(unsigned int *)0x8C2FBE24 = 0x1;
            }
            resWtcShopSprTexFree();
            resWtcShopObjTexFree();
            if ((*(int *)0x8C1D9CD0) == 1) {
                *(unsigned int *)0x8C1D9CD0 = 0x0;
            }
        }
        if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) == 0) {
        } else {
            t389 = *(int *)(((((*(int *)0x8C4220B8) << 2) + (0x8C1D9CB4 + ((*(int *)0x8C4220A4) << 2))) + 0x0));
            t390 = *(int *)0x8C4220B4;
            if ((*(int *)(((t389 + ((((t390 << 2) << 1) + t390) << 2)) + 0x18))) != 0) {
                if ((unsigned int)(*(int *)(((t389 + ((((t390 << 2) << 1) + t390) << 2)) + 0x4))) > (unsigned int)(*(int *)0x8C2FBC58)) {
                    *(unsigned int *)0x8C4220C8 = 0x0;
                    *(unsigned int *)0x8C4220C4 = 0x0;
                    *(unsigned int *)0x8C1D9CD0 = 0x1;
                    sndSe05_04();
                } else {
                    *(unsigned int *)0x8C4220C4 = 0x0;
                    *(unsigned int *)0x8C4220C8 = 0x1;
                    *(unsigned int *)0x8C4220C0 = 0x1;
                    sndSeDecide();
                }
            } else {
                sndSe05_04();
            }
        }
    }
    t417 = nlExecuteEvent(t412, t413, t414, t415);
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return t417;
}
