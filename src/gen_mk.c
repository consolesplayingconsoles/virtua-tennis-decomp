/* Straight-line functions with calls and guards (batch gen_mk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int endPlayerPut(int, int);
int evFlashStart(float);
int hudFlagPut(int, Stk3, float);
int hudFontNumPut(int, float);
int lightOverrideAmbient(int, int);
int menuTextMsgPut(int, float);
int motionAdvance(int);
int motionBackup(int);
float motionGetFrame(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int sndEndingCheer(int, int, int, int, int, int);
int sprListPut(int, int, int, float, float, float);
int sunPut(int, int, int, float);
int uiBarStretchPut(int, int, float);
Stk3 vecMake(float, float, float);
int endingSceneDraw(int a4, int a5, int a6, int a7, float f4);

int endingSceneDraw(int a4, int a5, int a6, int a7, float f4)
{
    int stk[16];
    register int t0;
    register float u40;
    register float u41;
    register int t2;
    register float u10;
    register float u5;
    register float u6;
    register float u15;
    register float u17;
    register int t55;
    register float t76;
    register float u83;
    register float u84;
    register float u86;
    register float u87;
    register float t101;
    register float u30;
    register float u31;
    register float u20;
    register float u21;
    register int t75;

    t0 = *(int *)0x8C402CAC;
    u40 = 0.0f;
    u41 = 1.0f;
    if (t0 == 0) {
    } else {
        t2 = *(int *)0x8C402CA0;
        if (t0 == 1) {
            u10 = 1.0f;
            if ((int)t2 >= (int)(((*(int *)((0x8C1D3718 + (t0 << 2)))) * 0x3C) - 60)) {
                u5 = (float)((t2 - ((*(int *)((0x8C1D3718 + (t0 << 2)))) * 0x3C)) + 0x3C);
                u6 = ((-(u5 * 0.0199999996f)) + 1.0f);
                if (0.0f > ((-(u5 * 0.0199999996f)) + 1.0f)) {
                    u6 = 0.0f;
                }
                u10 = u6;
            }
            u30 = 0.0f;
            u31 = u10;
        } else {
            if (t0 == 2) {
                u15 = ((float)(t2 - 30) * 0.0199999996f);
                if (0.0f > ((float)(t2 - 30) * 0.0199999996f)) {
                    u15 = 0.0f;
                }
                u17 = u15;
                if (u15 > 1.0f) {
                    u17 = 1.0f;
                }
                u20 = u17;
                u21 = 0.0f;
            }
            u30 = u20;
            u31 = u21;
        }
        u40 = u30;
        u41 = u31;
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(85.0f, 240.0f, 0.0500000007f);
    sprListPut(0x8C1D375C, 0x2, 0x0, u40, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(160.0f, 325.0f, 0.100000001f);
    sprListPut(0x8C1D3ABC, 0x3, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(30.0f, 320.0f, 0.5f);
    uiBarStretchPut(0x8C1D3834, 0x5D, u41);
    *(float *)(((int)stk + 20)) = u41;
    if (u41 > 0.699999988f) {
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) * 0.699999988f);
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(129.0f, 320.0f, 0.5f);
    uiBarStretchPut(0x8C1D3978, 0x1DD, (*(float *)(((int)stk + 20))));
    *(Stk3 *)(((int)stk + 8)) = vecMake(135.0f, 360.0f, 0.100000001f);
    t55 = *(int *)(((*(int *)0x8C402CB4) + 0xC58));
    *(unsigned int *)(((int)stk + 24)) = (((t55 << 1) << 2) + 0x8C125E08);
    sprListPut((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (*(int *)(((((t55 << 1) << 2) + 0x8C125E08) + 0x4))), 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(33.0f, 320.0f, 1.5f);
    sprListPut(0x8C1D3C00, 0x1, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(155.0f, 405.0f, 0.100000001f);
    sprListPut(0x8C1D468C, 0x2, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(505.0f, 355.0f, 0.100000001f);
    hudFlagPut((*(int *)(((*(int *)0x8C402CB4) + 0xC58))), *(Stk3 *)((int)stk + 8), u41);
    *(Stk3 *)(((int)stk + 8)) = vecMake(555.0f, 405.0f, 0.100000001f);
    hudFontNumPut((*(int *)0x8C2FBC58), u41);
    *(Stk3 *)(((int)stk + 8)) = vecMake(505.0f, 400.0f, 0.100000001f);
    menuTextMsgPut((*(int *)((((*(int *)(((*(int *)0x8C402CB4) + 0xC58))) << 2) + 0x8C1D36F8))), u41);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 10.0f, 0.0f);
    nlRotateAY(0x4000);
    if (((*(int *)0x8C402CAC) == 2) && (t75 = *(int *)0x8C402CA0, (int)t75 >= (int)0x19A)) {
    } else {
        t76 = nlRandom();
        if ((int)(t76 * 3.0f) == 1) {
            evFlashStart(100.0f);
            sndEndingCheer(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
        }
        u83 = *(float *)0x8C40C2C8;
        u84 = u83;
        if (u83 > 255.0f) {
            u84 = 255.0f;
        }
        u86 = *(float *)0x8C38B7FC;
        u87 = u84;
        if (u86 > u84) {
            u87 = u86;
        }
        lightOverrideAmbient(0x0, (int)u87);
    }
    motionBackup((*(int *)0x8C402CB4));
    motionAdvance((*(int *)0x8C402CB4));
    endPlayerPut((*(int *)0x8C402CB4), 0x0);
    t101 = motionGetFrame((*(int *)0x8C402CB4));
    *(unsigned int *)0x8C407FB0 = (int)t101;
    sunPut(((*(int *)0x8C2873EC) + 0x1CAA8), (int)t101, 0xCB400F8, 1.0f);
    return nlPopMatrix(0x1);
}
