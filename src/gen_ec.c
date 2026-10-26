/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int cpuDblSignalDraw(int, float);
extern int cursorBoxPut();
int decoGaugeBarPut(int, int, int, Stk3);
int decoGaugeFramePut(int, int, Stk3, float);
int decoNumDraw(int, int, int, int, Stk3, float);
int entryGetColorId(int);
float hudFadeNearPlayers(int, int, int, int, int, int, int, int, int);
int hudPlayerPanelDraw(int, int, Stk3, float, float);
int hudScoreBoardDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int infoWinDraw(int, int, Stk3, float);
int menuIconPut(int, Stk3, float);
int menuIconPutRot(int, int, Stk3);
float nlCos(int);
int nlDispStripTexOfsTrnsl(int, int, int);
float nlInnerProduct(int, int);
float nlPow(float, float);
int nlRand(void);
float nlScalor(int);
int primSprSetSize(int, float, float);
int primTexVertexSet(int, int, int, int, int, float, float);
int sprListPut(int, int, int, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int vecLineCrossXZ(int, ...);
Stk3 vecMake(float, float, float);
int menuItemDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int hudMatchDraw(int a4, float f4);
int titleMenuLayout(int a4, int a5, float f4, float f5);
int cpuDblAimArc(int a4, int a5);
int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4);
int windowBgDraw(int a4, int a5, float f4);
int primSprDrawScaleFadeY(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int fadeQuadDrawB(int a4, int a5, int a6, float f4);
int primSprDrawScaleAlpha(int a4, int a5, int a6, float f4, float f5, float f6);
int primSprDraw(int a4, int a5, int a6, int a7);
int primSprDrawScale(int a4, int a5, int a6, float f4, float f5);

int menuItemDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float t2;
    float u10;
    int t19;
    int t23;
    float u27;
    int t28;
    float t72;
    float t80;
    int t81;
    int t82;
    int t84;
    int t88;
    float u97;
    float u102;
    float u115;
    int t124;
    float u121;
    float u8;
    float u12;
    float u13;
    int stk[36];

    stk[25] = a8;
    stk[26] = a9;
    stk[27] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned short *)0x8C334D9A = ((*(short *)0x8C334D9A) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D9A));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C334D9A)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C334D9A))));
    }
    u10 = u8;
    if (!(u8 > 0.200000003f)) {
        u10 = 0.200000003f;
    }
    if (a5 != 0) {
        *(float *)(((int)stk + 36)) = 1.0f;
        u12 = u10;
        u13 = 1.0f;
    } else {
        *(float *)(((int)stk + 36)) = 0.5f;
        u12 = 0.0f;
        u13 = 0.5f;
    }
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 30.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
    menuIconPut(0xC, *(Stk3 *)(((int)stk + 16)), u13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    t19 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 4)));
    *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
    t23 = ((int (*)(int))(cursorBoxPut))(0x1);
    *(float *)(((((int)stk + 32) + 0x44) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) - 0.00100000005f);
    u27 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    t28 = *(int *)(((int)stk + 32));
    if (t28 != 0) {
        if (t28 != 1) {
            if (t28 != 2) {
                if (t28 != 3) {
                } else {
                    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 35.0f), (u27 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0xF, *(Stk3 *)(((int)stk + 16)), u13);
                    *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x0))) + 40.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0x10, *(Stk3 *)(((int)stk + 20)), u13);
                }
            } else {
                *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 56.0f), (u27 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                menuIconPut(0x10, *(Stk3 *)(((int)stk + 20)), u13);
            }
        } else {
            *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 45.0f), (u27 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
            menuIconPut(0xE, *(Stk3 *)(((int)stk + 16)), u13);
        }
    } else {
        *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 57.0f), (u27 + 5.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        menuIconPut(0xD, *(Stk3 *)(((int)stk + 16)), u13);
    }
    t72 = nlCos((unsigned short)(*(short *)0x8C1846B6));
    if (t72 > 0.0f) {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x600);
    }
    t80 = nlCos((unsigned short)(*(short *)0x8C1846B8));
    t81 = *(short *)0x8C1846B8;
    t82 = 0x600;
    if (0.0f > t80) {
        t82 = 0x1400;
    }
    *(unsigned short *)0x8C1846B8 = (t81 + t82);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    t84 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 20)));
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
        t88 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u97 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u97 = u97 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B8)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u97;
    }
    if ((int)(*(int *)(((int)stk + 32))) > 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u102 = 57.0f;
        u102 = u102 + 195.0f * u12;
        menuIconPutRot(0x7, ((((0xFF & (int)u102) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 20)));
    }
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake(((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + 120.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u115 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u115 = u115 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B6)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u115;
    }
    *(float *)(((((int)stk + 32) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x4))) + 0.0f);
    t124 = 0x4;
    if ((int)(*(int *)(((int)stk + 32))) < (int)0x3) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u121 = 57.0f;
        u121 = u121 + 195.0f * u12;
        t124 = (menuIconPutRot(0x8, ((((0xFF & (int)u121) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 20))));
    }
    return t124;
}

int hudMatchDraw(int a4, float f4)
{
    int t0;
    int t256;
    int t5;
    int t236;
    int t9;
    int t216;
    int t12;
    int t196;
    int t176;
    int t156;
    int t136;
    int t15;
    int t18;
    int t19;
    int t120;
    float t26;
    float t27;
    int t109;
    int t111;
    int t88;
    float u93;
    int t64;
    float u69;
    int t103;
    float u107;
    int stk[66];

    t0 = *(int *)0x8C287D5C;
    t256 = t0;
    if (t0 == 3) {
    } else {
        t5 = *(int *)0x8C287B3C;
        t236 = t0;
        if ((0x1 & t5) != 0) {
        } else {
            t9 = *(int *)0x8C185410;
            t216 = t9;
            if (t9 != 0) {
            } else {
                t12 = *(int *)0x8C421F60;
                t196 = t12;
                if (t12 != 0) {
                } else {
                    t176 = 0x8C301970;
                    if ((*(int *)0x8C301970) != 0) {
                    } else {
                        t156 = 0x8C301970;
                        if ((0x20 & t5) != 0) {
                        } else {
                            t136 = 0x8C301970;
                            if ((0x40 & t5) != 0) {
                            } else {
                                t15 = 0x0;
                                for (;;) {
                                    *(unsigned int *)(((((int)stk + 36) + 0x24) + (t15 << 2))) = (*(int *)(((0x8C10E0C4 + (((*(int *)(((0x8C2889DC + (t15 * 0xD78)) + 0x0))) << 2) << 2)) + 0x0)));
                                    t18 = entryGetColorId(t15);
                                    t19 = ((t15 << 2) + (((int)stk + 36) + 0x14));
                                    t15 = (t15 + 0x1);
                                    *(unsigned int *)((t19 + 0x0)) = t18;
                                    if ((int)t15 >= (int)0x4) {
                                        break;
                                    }
                                }
                                *(Stk3 *)((((int)stk + 36) + 0x48)) = vecMake(12.0f, 60.0f, 0.200000003f);
                                *(Stk3 *)((((int)stk + 32) + 0x40)) = vecMake(545.0f, 60.0f, 0.200000003f);
                                *(unsigned int *)(((int)stk + 36)) = 0x8C287B10;
                                hudScoreBoardDraw((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))), (*(int *)0x8C287B14), 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16), *(int *)((int)stk + 36 + 20), *(int *)((int)stk + 36 + 24), *(int *)((int)stk + 36 + 28));
                                t120 = 0x78;
                                if ((*(int *)0x8C287B44) != 0) {
                                } else {
                                    t26 = hudFadeNearPlayers(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16));
                                    t27 = hudFadeNearPlayers(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 36), *(int *)((int)stk + 36 + 4), *(int *)((int)stk + 36 + 8), *(int *)((int)stk + 36 + 12), *(int *)((int)stk + 36 + 16));
                                    *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                    if ((*(int *)0x8C287ADC) != 2) {
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                        *(Stk3 *)((((int)stk + 36) + 0x6C)) = vecMake((*(float *)0x8C185040), ((*(float *)0x8C185044) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x0))), (*(int *)(((((int)stk + 36) + 0x24) + 0x0))), *(Stk3 *)(((int)stk + 20)), 0.649999976f, t26);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 18.0f);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x0)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x0))) + 50.0f);
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C18504C;
                                        *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0xC)) = vecMake(((*(float *)0x8C18504C) + 3.0f), ((*(float *)0x8C185050) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x4))), (*(int *)(((((int)stk + 36) + 0x24) + 0x4))), *(Stk3 *)(((int)stk + 4)), 0.649999976f, t27);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 18.0f);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + 168.0f);
                                        if ((*(int *)0x8C287ADC) == 4) {
                                            *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 36) + 0x6C) + 0x24);
                                            *(unsigned int *)(((int)stk + 40)) = 0x8C185064;
                                            *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0x24)) = vecMake(((*(float *)0x8C185064) + 3.0f), ((*(float *)0x8C185068) + 15.0f), 0.300000012f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((*(int *)(((int)stk + 36)))); }
                                            hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0xC))), (*(int *)(((((int)stk + 36) + 0x24) + 0xC))), *(Stk3 *)(((int)stk + 20)), 0.649999976f, t27);
                                            *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 36) + 0x6C) + 0x18);
                                            *(unsigned int *)(((int)stk + 36)) = 0x8C185058;
                                            *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0x18)) = vecMake((*(float *)0x8C185058), ((*(float *)0x8C18505C) + 15.0f), 0.300000012f);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((*(int *)(((int)stk + 40)))); }
                                            hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x8))), (*(int *)(((((int)stk + 36) + 0x24) + 0x8))), *(Stk3 *)(((int)stk + 4)), 0.649999976f, t26);
                                            *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 26.0f);
                                            *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 26.0f);
                                            *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + -5.0f);
                                            *(float *)(((int)stk + 112)) = ((*(float *)(((int)stk + 112))) + 20.0f);
                                            *(float *)(((int)stk + 100)) = ((*(float *)(((int)stk + 100))) + 20.0f);
                                            t64 = ((((int)stk + 36) + 0x6C) + 0xC);
                                            u69 = 20.0f;
                                        }
                                        t88 = t64;
                                        u93 = u69;
                                    } else {
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C185040;
                                        *(Stk3 *)((((int)stk + 36) + 0x6C)) = vecMake((*(float *)0x8C185040), ((*(float *)0x8C185044) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x0))), (*(int *)(((((int)stk + 36) + 0x24) + 0x0))), *(Stk3 *)(((int)stk + 20)), 0.649999976f, t26);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x4))) + 18.0f);
                                        *(float *)(((((int)stk + 36) + 0x6C) + 0x0)) = ((*(float *)(((((int)stk + 36) + 0x6C) + 0x0))) + 50.0f);
                                        *(unsigned int *)(((int)stk + 36)) = 0x8C18504C;
                                        *(Stk3 *)(((((int)stk + 36) + 0x6C) + 0xC)) = vecMake((*(float *)0x8C18504C), ((*(float *)0x8C185050) + 15.0f), 0.300000012f);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        hudPlayerPanelDraw((*(int *)(((((int)stk + 36) + 0x14) + 0x4))), (*(int *)(((((int)stk + 36) + 0x24) + 0x4))), *(Stk3 *)(((int)stk + 4)), 0.649999976f, t27);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x4))) + 18.0f);
                                        *(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0)) = ((*(float *)((((((int)stk + 36) + 0x6C) + 0xC) + 0x0))) + 168.0f);
                                    }
                                    if ((*(int *)0x8C287D5C) != 3) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x6C)); }
                                        infoWinDraw((*(int *)0x8C287B00), 0x0, *(Stk3 *)(((int)stk + 24)), t26);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)(((((int)stk + 36) + 0x6C) + 0xC)); }
                                        infoWinDraw((*(int *)0x8C287B04), 0x1, *(Stk3 *)(((int)stk + 12)), t27);
                                    } else {
                                        t103 = t88;
                                        u107 = u93;
                                    }
                                    t109 = *(int *)0x8C287ADC;
                                    t111 = t109;
                                    if (t109 == 4) {
                                        t111 = (cpuDblSignalDraw(t103, u107));
                                    }
                                    t120 = t111;
                                }
                                t136 = t120;
                            }
                            t156 = t136;
                        }
                        t176 = t156;
                    }
                    t196 = t176;
                }
                t216 = t196;
            }
            t236 = t216;
        }
        t256 = t236;
    }
    return t256;
}

int titleMenuLayout(int a4, int a5, float f4, float f5)
{
    int t0;
    int t2;
    int t7;
    int t8;
    int t12;
    int t14;
    int t16;
    int t17;
    int t23;
    int t77;
    int t25;
    int t30;
    int t36;
    int t72;
    int t39;
    int t40;
    int t46;
    int t67;
    int t47;
    int t49;
    int t54;
    int t60;
    int t63;
    int stk[66];

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 60)) = a5;
    *(unsigned int *)(((int)stk + 68)) = (((int)stk + 48) + 0x24);
    *(Stk3 *)((((int)stk + 48) + 0x24)) = vecMake(0.0f, 0.0f, 0.449999988f);
    *(Stk3 *)((0xC + (((int)stk + 48) + 0x24))) = vecMake(256.0f, 0.0f, 0.449999988f);
    *(Stk3 *)((0x18 + (((int)stk + 48) + 0x24))) = vecMake(0.0f, 256.0f, 0.449999988f);
    *(Stk3 *)((0x24 + (((int)stk + 48) + 0x24))) = vecMake(256.0f, 256.0f, 0.449999988f);
    *(Stk3 *)((0x30 + (((int)stk + 48) + 0x24))) = vecMake(512.0f, 0.0f, 0.449999988f);
    *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 48) + 0x24) + 0x3C);
    *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x3C)) = vecMake(410.0f, 20.0f, 0.100000001f);
    *(unsigned int *)(((int)stk + 52)) = ((((int)stk + 48) + 0x24) + 0x48);
    *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x48)) = vecMake(20.0f, 420.0f, 0.100000001f);
    *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x54)) = vecMake(25.0f, 113.0f, 0.200000003f);
    *(Stk3 *)((0x60 + (((int)stk + 48) + 0x24))) = vecMake(20.0f, 173.0f, 0.100000001f);
    *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x6C)) = vecMake(20.0f, 173.0f, 0.100000001f);
    *(unsigned int *)(((int)stk + 48)) = ((((int)stk + 48) + 0x24) + 0x78);
    *(Stk3 *)(((((int)stk + 48) + 0x24) + 0x78)) = vecMake(200.0f, 239.0f, 0.100000001f);
    t0 = 0x0;
    for (;;) {
        *(float *)(((t0 + (((int)stk + 48) + 0x24)) + 0x8)) = ((*(float *)(((t0 + (((int)stk + 48) + 0x24)) + 0x8))) + f5);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x8C421F9C)) = *(struct mv3 *)((t0 + (((int)stk + 48) + 0x24))); }
        t2 = (t0 + (((int)stk + 48) + 0x24));
        t0 = (t0 + 0xC);
        if ((unsigned int)t0 >= (unsigned int)0x84) {
            break;
        }
    }
    t7 = 0x8C37DC1C;
    t8 = (*(int *)(((int)stk + 68)));
    for (;;) {
        if ((unsigned int)t8 >= (unsigned int)(*(int *)(((int)stk + 64)))) {
            break;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(t8); }
        t12 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(t7, 0x84, t2, 0x8C421F9C, *(Stk3 *)(((int)stk + 36)), (*(float *)(((*(int *)(((int)stk + 60))) + 0x0))));
        t8 = (t8 + 0xC);
        t7 = (t7 + 0x50);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
    t14 = *(int *)(((int)stk + 60));
    t16 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C37DF8C, 0x84, t2, 0x8C421F9C, *(Stk3 *)(((int)stk + 36)), (*(float *)(((t14 + 0x8) + 0x0))));
    t17 = *(int *)(((int)stk + 52));
    *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((t17 + 0x0))) + 162.0f), (*(float *)((t17 + 0x4))), (*(float *)((t17 + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
    t23 = *(int *)(((int)stk + 56));
    t77 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DFDC, *(Stk3 *)(((int)stk + 20)), (*(float *)(((t14 + 0x8) + 0x0)))));
    if (t23 != 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((((int)stk + 48) + 0x24) + 0x54)); }
        t25 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DDAC, *(Stk3 *)(((int)stk + 36)), (*(float *)(((t14 + 0x8) + 0x0))));
        *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x0))) + 256.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
        t30 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DDFC, *(Stk3 *)(((int)stk + 20)), (*(float *)(((t14 + 0x8) + 0x0))));
        *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x0))) + 512.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x54) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
        t36 = *(int *)(((int)stk + 56));
        t72 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DE4C, *(Stk3 *)(((int)stk + 4)), (*(float *)(((t14 + 0x8) + 0x0)))));
        if (t36 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((*(int *)(((int)stk + 48)))); }
            t39 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DE9C, *(Stk3 *)(((int)stk + 36)), (*(float *)(((t14 + 0x8) + 0x0))));
            t40 = *(int *)(((int)stk + 48));
            *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((t40 + 0x0))) + 256.0f), (*(float *)((t40 + 0x4))), (*(float *)((t40 + 0x8))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
            t46 = *(int *)(((int)stk + 56));
            t67 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37DEEC, *(Stk3 *)(((int)stk + 20)), (*(float *)(((t14 + 0x8) + 0x0)))));
            if (t46 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((((int)stk + 48) + 0x24) + 0x6C)); }
                t47 = *(int *)(((int)stk + 60));
                t49 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E11C, *(Stk3 *)(((int)stk + 36)), (*(float *)(((t47 + 0x4) + 0x0))));
                *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x0))) + 256.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
                t54 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E16C, *(Stk3 *)(((int)stk + 20)), (*(float *)(((t47 + 0x4) + 0x0))));
                *(Stk3 *)((((int)stk + 36) + 0x24)) = vecMake(((*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x0))) + 512.0f), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x4))), (*(float *)((((((int)stk + 48) + 0x24) + 0x6C) + 0x8))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 36) + 0x24)); }
                t60 = *(int *)(((int)stk + 56));
                t63 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C37E1BC, *(Stk3 *)(((int)stk + 4)), (*(float *)(((t47 + 0x4) + 0x0)))));
                if (t60 == 0) {
                    *(Stk3 *)(((int)stk + 36)) = vecMake(256.0f, 305.0f, 0.100000001f);
                    t63 = (sprListPut(0x8C1D90C0, 0x1, 0xFF000000, (*(float *)(((t14 + 0x8) + 0x0))), 1.0f, 1.0f));
                }
                t67 = t63;
            }
            t72 = t67;
        }
        t77 = t72;
    }
    return t77;
}

int cpuDblAimArc(int a4, int a5)
{
    int t0;
    int t1;
    int t8;
    float u11;
    float u12;
    float u14;
    float u16;
    float u17;
    float u19;
    float u21;
    float u22;
    int t25;
    int t23;
    float u28;
    float u29;
    float u31;
    float u33;
    float u34;
    float u36;
    float u38;
    float u39;
    int t42;
    int t40;
    float u45;
    float u47;
    float t55;
    float t56;
    float t57;
    float t58;
    float t59;
    float t61;
    float t62;
    float t69;
    float t70;
    float t71;
    float u80;
    int t81;
    float u89;
    float u48;
    int t74;
    float u75;
    float u77;
    float u65;
    int stk[32];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(float *)((a5 + 0x1C)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 72)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((int)stk + 80)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        t8 = (int)((int)(nlRand()) % (int)0xA);
        *(float *)(((0x1C + a5) + 0x0)) = ((*(float *)(((0x1C + a5) + 0x0))) + (float)(t8 + 0xA));
        t81 = (t8 + 0xA);
    } else {
        *(Stk3 *)(((int)stk + 44)) = vecMake(1.0f, 0.0f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((0xAE8 + (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xB9C + a4)); }
        vecLineCrossXZ((((int)stk + 8) + 0x34));
        u11 = *(float *)(((int)stk + 60));
        u12 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u14 = ((-u11) + u12);
        if (!(0.0f > (u11 - u12))) {
            u14 = (u11 - u12);
        }
        u16 = *(float *)((a4 + 0xBA4));
        u17 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u19 = ((-u16) + u17);
        if (!(0.0f > (u16 - u17))) {
            u19 = (u16 - u17);
        }
        u21 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u22 = *(float *)(((int)stk + 60));
        t25 = 0x1;
        if ((u22 - u21) > 0.0f) {
        } else {
            t23 = 0x0;
            if (0.0f > (u22 - u21)) {
                t23 = 0xFFFFFFFF;
            }
            t25 = t23;
        }
        *(unsigned int *)(((int)stk + 56)) = t25;
        *(Stk3 *)(((int)stk + 44)) = vecMake(1.0f, 0.0f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((0xAE8 + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xB9C + a4)); }
        vecLineCrossXZ((((int)stk + 8) + 0x34));
        u28 = *(float *)(((int)stk + 60));
        u29 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u31 = ((-u28) + u29);
        if (!(0.0f > (u28 - u29))) {
            u31 = (u28 - u29);
        }
        u33 = *(float *)((a4 + 0xBA4));
        u34 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u36 = ((-u33) + u34);
        if (!(0.0f > (u33 - u34))) {
            u36 = (u33 - u34);
        }
        u38 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u39 = *(float *)(((int)stk + 60));
        t42 = 0x1;
        if ((u39 - u38) > 0.0f) {
        } else {
            t40 = 0x0;
            if (0.0f > (u39 - u38)) {
                t40 = 0xFFFFFFFF;
            }
            t42 = t40;
        }
        if ((u31 / _builtin_sqrtf(u36)) > (u14 / _builtin_sqrtf(u19))) {
            u45 = (*(float *)((a5 + 0x1C)));
            u45 = u45 + 4.0f * (u14 / _builtin_sqrtf(u19));
            u48 = u45;
        } else {
            u47 = (*(float *)((a5 + 0x1C)));
            u47 = u47 + 4.0f * (u31 / _builtin_sqrtf(u36));
            u48 = u47;
        }
        *(float *)((a5 + 0x1C)) = u48;
        if ((*(int *)(((int)stk + 56))) != t42) {
            *(float *)(((int)stk + 60)) = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8))) - (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8))));
            *(float *)(((int)stk + 68)) = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))));
            t55 = nlInnerProduct((((int)stk + 52) + 0x14), (((int)stk + 52) + 0x8));
            t56 = nlScalor((((int)stk + 52) + 0x14));
            t57 = nlScalor((((int)stk + 52) + 0x8));
            if (!(0.0f > ((t55 / t56) / t57))) {
                t58 = nlInnerProduct((((int)stk + 52) + 0x14), (((int)stk + 52) + 0x8));
                t59 = nlScalor((((int)stk + 52) + 0x14));
                u65 = ((t58 / t59) / (nlScalor((((int)stk + 52) + 0x8))));
            } else {
                t61 = nlInnerProduct((((int)stk + 52) + 0x14), (((int)stk + 52) + 0x8));
                t62 = nlScalor((((int)stk + 52) + 0x14));
                u65 = (-((t61 / t62) / (nlScalor((((int)stk + 52) + 0x8)))));
            }
            t74 = 0x8C076778;
            u75 = (*(float *)0x8C076778);
            u77 = ((-u65) + (*(float *)0x8C076774));
        } else {
            *(float *)(((int)stk + 60)) = 1.0f;
            *(float *)(((int)stk + 68)) = 0.0f;
            t69 = nlInnerProduct((((int)stk + 52) + 0x14), (((int)stk + 52) + 0x8));
            t70 = nlScalor((((int)stk + 52) + 0x14));
            t71 = nlScalor((((int)stk + 52) + 0x8));
            t74 = 0x8C076784;
            u75 = (*(float *)0x8C076784);
            u77 = (nlPow(((t69 / t70) / t71), 3.0f));
        }
        u80 = (*(float *)(((a5 + 0x1C) + 0x0)));
        u80 = u80 + u75 * u77;
        *(float *)(((a5 + 0x1C) + 0x0)) = u80;
        t81 = t74;
        u89 = (u14 / _builtin_sqrtf(u19));
    }
    return t81;
}

int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4)
{
    int t21;
    int t19;
    float u26;
    float u27;
    int t58;
    int t35;
    int t40;
    int t50;
    int stk[61];

    stk[50] = a8;
    stk[51] = a9;
    stk[52] = a10;
    *(unsigned int *)(((int)stk + 96)) = a5;
    *(unsigned int *)(((int)stk + 100)) = a6;
    *(unsigned int *)(((int)stk + 104)) = a7;
    *(Stk3 *)((((int)stk + 92) + 0x34)) = vecMake(((*(float *)(((((int)stk + 92) + 0x6C) + 0x0))) + -32.0f), ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 22.0f), ((*(float *)(((((int)stk + 92) + 0x6C) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0x38)); }
    sprPutAtAlpha(0x8C341E98, *(Stk3 *)(((int)stk + 76)), f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C342028, *(Stk3 *)(((int)stk + 64)), (f4 * 0.349999994f));
    *(unsigned int *)(((int)stk + 92)) = 0x8C342078;
    primSprSetSize(0x8C342078, 1.0f, 20.0f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 20.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha((*(int *)(((int)stk + 92))), *(Stk3 *)(((int)stk + 52)), (f4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C3420C8, *(Stk3 *)(((int)stk + 40)), (f4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C342118, *(Stk3 *)(((int)stk + 28)), (f4 * 0.349999994f));
    *(unsigned int *)(((int)stk + 92)) = 0x8C342168;
    primSprSetSize(0x8C342168, 1.0f, 89.0f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 89.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha((*(int *)(((int)stk + 92))), *(Stk3 *)(((int)stk + 16)), (f4 * 0.349999994f));
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    sprPutAtAlpha(0x8C3421B8, *(Stk3 *)(((int)stk + 4)), (f4 * 0.349999994f));
    t21 = 0x20;
    if ((int)a13 > 0) {
    } else {
        t19 = 0x0;
        if ((int)a13 < 0) {
            t19 = 0xFFFFFFE0;
        }
        t21 = t19;
    }
    *(float *)(((((int)stk + 92) + 0x6C) + 0x8)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x8))) - 0.00999999978f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x0)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x0))) + -53.0f);
    *(float *)(((((int)stk + 92) + 0x6C) + 0x4)) = ((*(float *)(((((int)stk + 92) + 0x6C) + 0x4))) + -3.0f);
    u26 = *(float *)(((((int)stk + 92) + 0x6C) + 0x8));
    *(float *)(((((int)stk + 92) + 0x10) + 0x8)) = (u26 + -0.00100000005f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x8)) = (u26 + -0.00100000005f);
    *(float *)(((((int)stk + 92) + 0x28) + 0x8)) = (u26 + -0.00100000005f);
    u27 = *(float *)(((((int)stk + 92) + 0x6C) + 0x4));
    *(float *)(((((int)stk + 92) + 0x10) + 0x4)) = (u27 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x4)) = (u27 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x28) + 0x4)) = (u27 + -85.0f);
    *(float *)(((((int)stk + 92) + 0x1C) + 0x0)) = (((*(float *)(((((int)stk + 92) + 0x6C) + 0x0))) + (float)t21) + -41.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    decoGaugeFramePut(a4, (*(int *)(((int)stk + 96))), *(Stk3 *)(((int)stk + 80)), f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 92) + 0x6C)); }
    decoNumDraw(((*(int *)(((int)stk + 96))) + 0x1), 0x1, 0x1, a11, *(Stk3 *)(((int)stk + 68)), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 92) + 0x28)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 92) + 0x10)) = *(struct mv3 *)((((int)stk + 92) + 0x1C)); }
    *(float *)(((((int)stk + 92) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 92) + 0x28) + 0x0))) + -68.0f);
    *(float *)(((((int)stk + 92) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 92) + 0x10) + 0x0))) + 68.0f);
    t58 = 0x78;
    if (a11 == 0) {
        t35 = 0x78;
        if (a13 == 0) {
            t35 = 0x8C0A63A8;
        }
        t40 = t35;
        if ((int)a13 >= 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 92) + 0x28)); }
            t40 = (decoGaugeBarPut(a4, (*(int *)(((int)stk + 100))), 0x1, *(Stk3 *)(((int)stk + 80))));
        }
        t50 = t40;
        if ((int)a13 <= 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 92) + 0x10)); }
            t50 = (decoGaugeBarPut(a4, (*(int *)(((int)stk + 104))), 0x0, *(Stk3 *)(((int)stk + 80))));
        }
        t58 = t50;
    }
    return t58;
}

int windowBgDraw(int a4, int a5, float f4)
{
    int t51;
    float u43;
    float u45;
    int stk[75];

    t51 = 0xFFFFFF48;
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
            *(Stk3 *)((((int)stk + 68) + 0x3C)) = vecMake(((f4 * 93.0f) + (*(float *)(((int)stk + 76)))), (*(float *)(((int)stk + 72))), (*(float *)(((int)stk + 68))));
            *(Stk3 *)((((int)stk + 68) + 0x30)) = vecMake((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(((f4 * 93.0f) + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x0)))), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            *(Stk3 *)((((int)stk + 68) + 0x18)) = vecMake((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
        } else {
            if (a5 == 0) {
                *(float *)(((int)stk + 84)) = (f4 * 93.0f);
                *(Stk3 *)((((int)stk + 68) + 0x3C)) = vecMake(((*(float *)(((int)stk + 76))) + 93.0f), (*(float *)(((int)stk + 72))), (*(float *)(((int)stk + 68))));
                *(Stk3 *)((((int)stk + 68) + 0x30)) = vecMake(((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + ((1.0f - f4) * 93.0f)), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
                *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + 93.0f), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
                *(Stk3 *)((((int)stk + 68) + 0x18)) = vecMake(((*(float *)(((0xE8 + ((int)stk + 68)) + 0x0))) + ((1.0f - f4) * 93.0f)), (120.0f + (*(float *)(((0xE8 + ((int)stk + 68)) + 0x4)))), (*(float *)(((0xE8 + ((int)stk + 68)) + 0x8))));
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x3C)); }
        u43 = *(float *)(((int)stk + 84));
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x48), (u43 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 68) + 0x30)); }
        u45 = *(float *)(((int)stk + 88));
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x48)), (u45 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x48)), (u43 / 128.0f), 0.0625f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 68) + 0x18)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x48)), (u45 / 128.0f), 0.0625f);
        t51 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x48), (*(int *)(((int)stk + 80)))));
    }
    return t51;
}

int primSprDrawScaleFadeY(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    float u0;
    float u1;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t13;
    float u14;
    int stk[76];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 92)) = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 88)) = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = *(int *)(((int)stk + 92));
    u7 = *(float *)(((0xDC + ((int)stk + 84)) + 0x8));
    u8 = *(float *)(((0xDC + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 84)) = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (*(float *)(((0xDC + ((int)stk + 84)) + 0x0)))), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xDC + ((int)stk + 84)) + 0x0))), (*(float *)(((0xDC + ((int)stk + 84)) + 0x4))), (*(float *)(((0xDC + ((int)stk + 84)) + 0x8))));
    t13 = *(int *)(((int)stk + 88));
    u14 = *(float *)(((0xDC + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 96)) = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 84))) + (*(float *)(((0xDC + ((int)stk + 84)) + 0x0)))), ((float)t13 + (*(float *)(((0xDC + ((int)stk + 84)) + 0x4)))), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xDC + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 96))) + (*(float *)(((0xDC + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xDC + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet((((((int)(f6 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet((((((int)(f6 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet((((((int)(f7 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet((((((int)(f7 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}

int fadeQuadDrawB(int a4, int a5, int a6, float f4)
{
    int t4;
    int t11;
    int stk[70];

    *(unsigned int *)(((int)stk + 84)) = (int)((float)a4 * ((*(float *)((a6 + 0x20))) - (*(float *)((a6 + 0x18)))));
    *(unsigned int *)(((int)stk + 88)) = (int)((float)a5 * ((*(float *)((a6 + 0x24))) - (*(float *)((a6 + 0x1C)))));
    t4 = *(int *)(((int)stk + 84));
    *(Stk3 *)((((int)stk + 84) + 0x2C)) = vecMake(((float)t4 + (*(float *)((a6 + 0x4)))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    *(Stk3 *)((((int)stk + 80) + 0x24)) = vecMake((*(float *)((a6 + 0x4))), (*(float *)((a6 + 0x8))), (*(float *)((a6 + 0xC))));
    t11 = *(int *)(((int)stk + 88));
    *(Stk3 *)((((int)stk + 76) + 0x1C)) = vecMake(((float)t4 + (*(float *)((a6 + 0x4)))), ((float)t11 + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    *(Stk3 *)((((int)stk + 72) + 0x14)) = vecMake((*(float *)((a6 + 0x4))), ((float)t11 + (*(float *)((a6 + 0x8)))), (*(float *)((a6 + 0xC))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x3C)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (((int)stk + 68) + 0x48), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x40)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x1C)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x20))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, (((((0xFF & (int)(f4 * 255.0f)) << 16) | ((0xFF & (int)(f4 * 255.0f)) << 8)) | (0xFF & (int)(f4 * 255.0f))) | 0xFF000000), 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x48)), (*(float *)((a6 + 0x18))), ((-(*(float *)((a6 + 0x24)))) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x48), (*(int *)((a6 + 0x0)))));
}

int primSprDrawScaleAlpha(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t13;
    float u14;
    int stk[75];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 92)) = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 96)) = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = *(int *)(((int)stk + 92));
    u7 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x8));
    u8 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 84)) = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x0)))), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xD8 + ((int)stk + 84)) + 0x0))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x8))));
    t13 = *(int *)(((int)stk + 96));
    u14 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 88)) = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 84))) + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x0)))), ((float)t13 + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4)))), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xD8 + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 88))) + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(((((0xFF & (int)(f6 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(((((0xFF & (int)(f6 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet(((((0xFF & (int)(f6 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet(((((0xFF & (int)(f6 * 255.0f)) << 16) << 8) | 0xFFFFFF), 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}

int primSprDraw(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    int t11;
    float u12;
    int stk[75];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 84)) = (int)((u0 - u1) * (float)a5);
    u2 = *(float *)((a4 + 0x24));
    u3 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 88)) = (int)((u2 - u3) * (float)a6);
    t4 = *(int *)(((int)stk + 84));
    u5 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x8));
    u6 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 92)) = (float)t4;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t4 + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x0)))), u6, u5);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xD8 + ((int)stk + 84)) + 0x0))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x8))));
    t11 = *(int *)(((int)stk + 88));
    u12 = *(float *)(((0xD8 + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 96)) = (float)t11;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 92))) + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x0)))), ((float)t11 + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4)))), u12);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xD8 + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 96))) + (*(float *)(((0xD8 + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xD8 + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(a7, 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(a7, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet(a7, 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u2) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet(a7, 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u2) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}

int primSprDrawScale(int a4, int a5, int a6, float f4, float f5)
{
    float u0;
    float u1;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t13;
    float u14;
    int stk[74];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 84)) = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 88)) = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = *(int *)(((int)stk + 84));
    u7 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    u8 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 92)) = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    t13 = *(int *)(((int)stk + 88));
    u14 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 96)) = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 92))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), ((float)t13 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 96))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}
