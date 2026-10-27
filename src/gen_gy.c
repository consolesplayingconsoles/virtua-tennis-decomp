/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int cursorBoxPut(int, Stk3, float, float, float);
int logoWaveDraw(float);
float mathLerp(float, float, float);
int menuIconPutRot(int, int, float);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
int rankDrawTbl1(Stk4);
int rankDrawTbl2(int, int, int, int, int, int, int, int, int, int, int, int);
int screenQuadPut(int, float);
int sprListPut(int, int, int, float, float, float);
int uiScanlinesPut(float);
Stk3 vecMake(float, float, float);
int winDrawB(int, int, float, float, float);
int rankDispExec(int a4, int a5, float f4, float f5, float f6);

int rankDispExec(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    int t2;
    int t12;
    int t47;
    float t52;
    float t71;
    float t75;
    float t93;
    float t97;
    int t153;
    int t208;
    int t223;
    int t3;
    int t35;
    float u58;
    float u81;
    float u103;
    int t113;
    int t171;
    int stk[85];

    *(unsigned int *)(((int)stk + 64)) = a4;
    *(unsigned int *)(((int)stk + 68)) = a5;
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0x8C + ((int)stk + 64))) = *(struct mv6 *)(0x8C126DEC); }
    t0 = 0x8C126E04;
    t2 = (((int)stk + 64) + 0x2C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126E04 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    if ((*(int *)(((int)stk + 68))) == 30) {
        *(float *)0x8C421F50 = 55.0f;
        *(float *)0x8C421F54 = 120.0f;
    }
    if ((*(int *)(((int)stk + 68))) != 0) {
        t12 = *(int *)(((int)stk + 68));
        if ((*(int *)(((int)stk + 64))) == 0) {
            *(float *)0x8C421F58 = (-(((float)t12 / 30.0f) * 640.0f));
            *(float *)0x8C421F5C = (((float)(0x1E - t12) / 30.0f) * 640.0f);
        } else {
            *(float *)0x8C421F58 = (-(((float)(0x1E - t12) / 30.0f) * 640.0f));
            *(float *)0x8C421F5C = (((float)t12 / 30.0f) * 640.0f);
        }
    } else {
        if ((*(int *)(((int)stk + 64))) == 0) {
            *(float *)0x8C421F58 = 0.0f;
            *(float *)0x8C421F5C = 640.0f;
        } else {
            *(float *)0x8C421F58 = -640.0f;
            *(float *)0x8C421F5C = 0.0f;
        }
    }
    screenQuadPut((0x8C + ((int)stk + 64)), 200.0f);
    logoWaveDraw(80.0f);
    uiScanlinesPut(75.0f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(0.0f, -15.0f, 70.0f);
    winDrawB(0xFF1E00, 0x2, 520.0f, 1.0f, 0.649999976f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(8.0f, 32.0f, 60.0f);
    sprListPut(0x8C1D7970, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    if ((*(int *)(((int)stk + 64))) == 1) {
        *(Stk3 *)(((int)stk + 52)) = vecMake(151.0f, 32.0f, 60.0f);
        t35 = 0x8C1D7BF8;
    } else {
        *(Stk3 *)(((int)stk + 52)) = vecMake(157.0f, 32.0f, 60.0f);
        t35 = 0x8C1D7B20;
    }
    sprListPut(t35, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(347.0f, 32.0f, 60.0f);
    sprListPut(0x8C1D7A48, 0x2, 0xFF000000, 1.0f, 1.0f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 64) + 0x2C) + 0xC)); }
    *(unsigned int *)(((int)stk + 92)) = (((int)stk + 64) + 0x2C);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 64) + 0x2C)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 64) + 0x2C) + 0x24)); }
    *(unsigned int *)(((int)stk + 96)) = ((((int)stk + 64) + 0x2C) + 0x18);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 64) + 0x2C) + 0x18)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    *(float *)(((0xA4 + ((int)stk + 64)) + 0x0)) = 0.0f;
    *(float *)(((0xA4 + ((int)stk + 64)) + 0x4)) = 400.0f;
    *(float *)(((0xA4 + ((int)stk + 64)) + 0x8)) = 65.0f;
    *(unsigned int *)(((int)stk + 84)) = ((0xA4 + ((int)stk + 64)) + 0x10);
    *(float *)((((0xA4 + ((int)stk + 64)) + 0x10) + 0x0)) = 0.0f;
    *(float *)(((*(int *)(((int)stk + 84))) + 0x4)) = 450.0f;
    *(float *)(((*(int *)(((int)stk + 84))) + 0x8)) = 65.0f;
    *(unsigned int *)(((int)stk + 72)) = ((0xA4 + ((int)stk + 64)) + 0x20);
    *(float *)((((0xA4 + ((int)stk + 64)) + 0x20) + 0x0)) = 640.0f;
    *(float *)(((*(int *)(((int)stk + 72))) + 0x4)) = 400.0f;
    *(float *)(((*(int *)(((int)stk + 72))) + 0x8)) = 65.0f;
    *(unsigned int *)(((int)stk + 76)) = ((0xA4 + ((int)stk + 64)) + 0x30);
    *(float *)((((0xA4 + ((int)stk + 64)) + 0x30) + 0x0)) = 640.0f;
    *(float *)(((*(int *)(((int)stk + 76))) + 0x4)) = 450.0f;
    *(float *)(((*(int *)(((int)stk + 76))) + 0x8)) = 65.0f;
    *(unsigned int *)(((int)stk + 80)) = ((0xA4 + ((int)stk + 64)) + 0x40);
    t47 = (0xA4 + ((int)stk + 64));
    for (;;) {
        if ((unsigned int)t47 >= (unsigned int)(*(int *)(((int)stk + 80)))) {
            break;
        }
        *(unsigned int *)((t47 + 0xC)) = 0x96FF1E00;
        t47 = (t47 + 0x10);
    }
    nlDispStripTrnsl(0x4, (0xA4 + ((int)stk + 64)));
    *(Stk3 *)(((int)stk + 52)) = vecMake(35.0f, 410.0f, 1.0f);
    cursorBoxPut(0x0, *(Stk3 *)((int)stk + 52), 1.0f, 95.0f, 1.0f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(35.0f, 410.0f, 1.0f);
    t52 = nlCos((*(int *)0x8C421F4C));
    if (!(0.0f > t52)) {
        u58 = (nlCos((*(int *)0x8C421F4C)));
    } else {
        u58 = (-(nlCos((*(int *)0x8C421F4C))));
    }
    cursorBoxPut(0x1, *(Stk3 *)((int)stk + 52), u58, 95.0f, 1.0f);
    if ((*(int *)(((int)stk + 64))) == 1) {
        *(Stk3 *)(((int)stk + 52)) = vecMake(80.0f, 415.0f, 0.5f);
        sprListPut(0x8C1D7E14, 0x1, 0x0, 1.0f, 1.0f, 1.0f);
        if (((int)((int)(*(int *)0x8C421F48) % (int)0x1E)) == 0) {
            *(float *)0x8C421F50 = 55.0f;
        }
        t71 = mathLerp((*(float *)0x8C421F50), 40.0f, 0.200000003f);
        *(float *)0x8C421F50 = t71;
        *(Stk3 *)(((int)stk + 52)) = vecMake(t71, 415.0f, 0.5f);
        menuIconPutRot(0x7, 0xFF00FF00, 1.0f);
        *(Stk3 *)(((int)stk + 52)) = vecMake((*(float *)0x8C421F50), 415.0f, 0.400000006f);
        t75 = nlCos((*(int *)0x8C421F4C));
        if (!(0.0f > t75)) {
            u81 = (nlCos((*(int *)0x8C421F4C)));
        } else {
            u81 = (-(nlCos((*(int *)0x8C421F4C))));
        }
        menuIconPutRot(0x7, (0xFFFF00 | ((((int)(u81 * 255.0f) & 0xFF) << 16) << 8)), 1.0f);
    } else {
        if ((*(int *)(((int)stk + 64))) == 0) {
            *(Stk3 *)(((int)stk + 52)) = vecMake(50.0f, 415.0f, 0.5f);
            sprListPut(0x8C1D7E80, 0x1, 0x0, 1.0f, 1.0f, 1.0f);
            if (((int)((int)(*(int *)0x8C421F48) % (int)0x1E)) == 0) {
                *(float *)0x8C421F54 = 120.0f;
            }
            t93 = mathLerp((*(float *)0x8C421F54), 135.0f, 0.200000003f);
            *(float *)0x8C421F54 = t93;
            *(Stk3 *)(((int)stk + 52)) = vecMake(t93, 415.0f, 0.400000006f);
            menuIconPutRot(0x8, 0xFF00FF00, 1.0f);
            *(Stk3 *)(((int)stk + 52)) = vecMake((*(float *)0x8C421F54), 415.0f, 0.400000006f);
            t97 = nlCos((*(int *)0x8C421F4C));
            if (!(0.0f > t97)) {
                u103 = (nlCos((*(int *)0x8C421F4C)));
            } else {
                u103 = (-(nlCos((*(int *)0x8C421F4C))));
            }
            menuIconPutRot(0x8, (0xFFFF00 | ((((int)(u103 * 255.0f) & 0xFF) << 16) << 8)), 1.0f);
        }
    }
    if (((*(int *)(((int)stk + 64))) != 0) && (t113 = *(int *)(((int)stk + 68)), t113 == 0)) {
    } else {
        *(unsigned int *)(((int)stk + 100)) = ((((int)stk + 64) + 0x2C) + 0x30);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x30) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x30) + 0x0))) + (*(float *)0x8C421F58));
        *(unsigned int *)(((int)stk + 88)) = ((((int)stk + 64) + 0x2C) + 0x3C);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x3C) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x3C) + 0x0))) + (*(float *)0x8C421F58));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 88)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 100)))); }
        primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
        *(unsigned int *)(((int)stk + 88)) = ((((int)stk + 64) + 0x2C) + 0x48);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0))) + (*(float *)0x8C421F58));
        *(unsigned int *)(((int)stk + 104)) = ((((int)stk + 64) + 0x2C) + 0x54);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x54) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x54) + 0x0))) + (*(float *)0x8C421F58));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 104)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 88)))); }
        primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x0)) = (*(float *)(((*(int *)(((int)stk + 100))) + 0x0)));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x4))) + (1.0f + 1.0f));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 84))) + 0x0)) = (*(float *)(((*(int *)(((int)stk + 100))) + 0x0)));
        *(float *)(((*(int *)(((int)stk + 84))) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 96))) + 0x4)));
        *(float *)(((*(int *)(((int)stk + 84))) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 72))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 88))) + 0x0))) + -2.0f);
        *(float *)(((*(int *)(((int)stk + 72))) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x4))) + (1.0f + 1.0f));
        *(float *)(((*(int *)(((int)stk + 72))) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 76))) + 0x0)) = ((*(float *)(((*(int *)(((int)stk + 88))) + 0x0))) + -2.0f);
        *(float *)(((*(int *)(((int)stk + 76))) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 96))) + 0x4)));
        *(float *)(((*(int *)(((int)stk + 76))) + 0x8)) = 65.0f;
        t153 = (0xA4 + ((int)stk + 64));
        for (;;) {
            if ((unsigned int)t153 >= (unsigned int)(*(int *)(((int)stk + 80)))) {
                break;
            }
            *(unsigned int *)((t153 + 0xC)) = 0x96000096;
            t153 = (t153 + 0x10);
        }
        nlDispStripTrnsl(0x4, (0xA4 + ((int)stk + 64)));
        *(Stk3 *)(((int)stk + 52)) = vecMake(((*(float *)0x8C421F58) + 80.0f), 105.0f, 0.400000006f);
        rankDrawTbl1(*(Stk4 *)((int)stk + 52));
        *(float *)(((((int)stk + 64) + 0x2C) + 0x30)) = ((*(float *)(((((int)stk + 64) + 0x2C) + 0x30))) - (*(float *)0x8C421F58));
        *(float *)(((((int)stk + 64) + 0x2C) + 0x3C)) = ((*(float *)(((((int)stk + 64) + 0x2C) + 0x3C))) - (*(float *)0x8C421F58));
        *(float *)(((((int)stk + 64) + 0x2C) + 0x48)) = ((*(float *)(((((int)stk + 64) + 0x2C) + 0x48))) - (*(float *)0x8C421F58));
        *(float *)(((((int)stk + 64) + 0x2C) + 0x54)) = ((*(float *)(((((int)stk + 64) + 0x2C) + 0x54))) - (*(float *)0x8C421F58));
    }
    if (((*(int *)(((int)stk + 64))) != 1) && (t171 = *(int *)(((int)stk + 68)), t171 == 0)) {
    } else {
        *(unsigned int *)(((int)stk + 64)) = ((((int)stk + 64) + 0x2C) + 0x30);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x30) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x30) + 0x0))) + (*(float *)0x8C421F5C));
        *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 64) + 0x2C) + 0x3C);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x3C) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x3C) + 0x0))) + (*(float *)0x8C421F5C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((*(int *)(((int)stk + 68)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 64)))); }
        primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
        *(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0))) + (*(float *)0x8C421F5C));
        *(unsigned int *)(((int)stk + 68)) = ((((int)stk + 64) + 0x2C) + 0x54);
        *(float *)((((((int)stk + 64) + 0x2C) + 0x54) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x54) + 0x0))) + (*(float *)0x8C421F5C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((*(int *)(((int)stk + 68)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 64) + 0x2C) + 0x48)); }
        primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x0)) = (*(float *)(((*(int *)(((int)stk + 64))) + 0x0)));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x4))) + (1.0f + 1.0f));
        *(float *)(((0xA4 + ((int)stk + 64)) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 84))) + 0x0)) = (*(float *)(((*(int *)(((int)stk + 64))) + 0x0)));
        *(float *)(((*(int *)(((int)stk + 84))) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 96))) + 0x4)));
        *(float *)(((*(int *)(((int)stk + 84))) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 72))) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0))) + -2.0f);
        *(float *)(((*(int *)(((int)stk + 72))) + 0x4)) = ((*(float *)(((*(int *)(((int)stk + 92))) + 0x4))) + (1.0f + 1.0f));
        *(float *)(((*(int *)(((int)stk + 72))) + 0x8)) = 65.0f;
        *(float *)(((*(int *)(((int)stk + 76))) + 0x0)) = ((*(float *)((((((int)stk + 64) + 0x2C) + 0x48) + 0x0))) + -2.0f);
        *(float *)(((*(int *)(((int)stk + 76))) + 0x4)) = (*(float *)(((*(int *)(((int)stk + 96))) + 0x4)));
        *(float *)(((*(int *)(((int)stk + 76))) + 0x8)) = 65.0f;
        t208 = (0xA4 + ((int)stk + 64));
        for (;;) {
            if ((unsigned int)t208 >= (unsigned int)(*(int *)(((int)stk + 80)))) {
                break;
            }
            *(unsigned int *)((t208 + 0xC)) = 0x96000096;
            t208 = (t208 + 0x10);
        }
        nlDispStripTrnsl(0x4, (0xA4 + ((int)stk + 64)));
        *(Stk3 *)(((int)stk + 52)) = vecMake(((*(float *)0x8C421F5C) + (*(float *)0x8C0E419C)), (*(float *)0x8C0E4198), 0.400000006f);
        rankDrawTbl2(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    }
    *(unsigned int *)0x8C421F48 = ((*(int *)0x8C421F48) + 0x1);
    t223 = *(int *)0x8C421F4C;
    *(unsigned int *)0x8C421F4C = (t223 + 0x200);
    return (t223 + 0x200);
}
