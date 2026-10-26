/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ambLevelGet(void);
int ballColliSync(void);
int ballMove(int, int, int, int, int, int, int, int, int, int, int, int);
int circuitStatsReset(void);
int dbgMenuInit(void);
int effBallTrailSpawn(Stk3);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int effServeSpeedCalc(int);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entrySetSlot(int, int, int, int);
int fadeScreenDraw(int, int, int, int, float, float);
int matchStart(void);
int nlArcTan2(float, float);
int nlLineSetThickness(float);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutTrnsl(int, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
int nlSingleLine(int, int, int);
float nlTanf(float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int primLineV(int, int, int, int, int, int, int, int, int, int);
int sceneVecStub(Stk3);
int shadowBallDraw(Stk3);
int sndFadeFlagsClear(void);
int sndStopAllExcept(int);
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int gameMatchSetup(void);
int screenFramePut(int a4, int a5, int a6, int a7, float f4);
void ballExec(int a4);

int gameMatchSetup(void)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t12;
    int t16;
    int t31;
    int t33;
    int t36;
    int t54;
    int t56;
    int t59;
    int t67;
    int t35;
    int t58;
    int t69;
    int stk[13];

    *(unsigned int *)0x8C287B3C = 0x0;
    *(unsigned int *)0x8C287AD4 = 0x0;
    *(unsigned int *)0x8C287AD0 = 0x0;
    *(unsigned int *)0x8C295DAC = 0x0;
    *(unsigned int *)0x8C295DB0 = 0x0;
    *(unsigned int *)0x8C29BBBC = 0x1;
    t0 = 0x0;
    for (;;) {
        t1 = (0x8C287B8C + t0);
        t0 = (t0 + 0x24);
        *(unsigned int *)((t1 + 0x4)) = 0x0;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x90) {
            break;
        }
    }
    *(unsigned int *)0x8C287C54 = 0x0;
    t2 = 0x8C287C74;
    for (;;) {
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        t2 = (t2 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0x8C287CBC) {
            break;
        }
    }
    *(unsigned int *)0x8C295DDC = 0x0;
    *(unsigned int *)0x8C38BA70 = 0x1;
    *(unsigned int *)0x8C38BA74 = 0x1;
    *(unsigned int *)0x8C38BA78 = 0x1;
    sndStopAllExcept(0x0);
    sndFadeFlagsClear();
    dbgMenuInit();
    *(unsigned int *)0x8C287C60 = 0x0;
    *(unsigned int *)0x8C287ACC = (*(int *)0x8C1891E8);
    *(unsigned int *)0x8C1891F0 = (*(int *)0x8C1891E8);
    if ((*(int *)0x8C287D5C) == 2) {
        t9 = *(int *)0x8C2FBE20;
        t10 = *(int *)(((((((t9 << 2) << 2) + t9) << 2) + 0x8C108E5C) + 0x2C));
        *(unsigned int *)0x8C287C6C = t10;
        if (t10 == 6) {
            *(unsigned int *)0x8C287C70 = 0x1;
        } else {
            *(unsigned int *)0x8C287C70 = 0x0;
        }
        t12 = *(int *)0x8C2FBE20;
        if (((*(int *)((0x40 + (((((t12 << 2) << 2) + t12) << 2) + 0x8C108E5C)))) & 4) != 0) {
            *(unsigned int *)0x8C185408 = 0x2;
        } else {
            *(unsigned int *)0x8C185408 = 0x1;
        }
        t16 = *(int *)0x8C2FBE20;
        *(unsigned int *)0x8C2FBE28 = (((((0x1 & (*(int *)(((((((t16 << 2) << 2) + t16) << 2) + 0x8C108E5C) + 0x40)))) == 0)) ? 1 : 0) ^ 0x1);
    }
    *(unsigned int *)0x8C2889DC = (unsigned char)(*(signed char *)0x8C2FBC7C);
    *(unsigned int *)0x8C28A4CC = (unsigned char)(*(signed char *)0x8C2FBC7D);
    if ((*(int *)0x8C287D5C) == 2) {
        if (((*(int *)0x8C2FBC98) & 4) == 0) {
            t31 = *(int *)0x8C2FBE20;
            *(unsigned int *)0x8C289754 = (*(int *)(((((((t31 << 2) << 2) + t31) << 2) + 0x8C108E5C) + 0x34)));
            t33 = *(int *)0x8C289754;
            if ((t33 != (unsigned char)(*(signed char *)0x8C2FBC7C)) && (t35 = *(signed char *)0x8C2FBC7D, t33 != (unsigned char)t35)) {
            } else {
                t36 = *(int *)0x8C2FBE20;
                *(unsigned int *)0x8C289754 = (*(int *)(((((((t36 << 2) << 2) + t36) << 2) + 0x8C108E5C) + 0x3C)));
            }
            if ((*(int *)0x8C289754) == -1) {
                *(unsigned int *)(((int)stk + 8)) = 0x8C288AFC;
                for (;;) {
                    *(unsigned int *)(((0xC58 + (*(int *)(((int)stk + 8)))) + 0x0)) = ((int)((nlRandom()) * 8.0f) + 0x8);
                    if ((*(int *)(((*(int *)(((int)stk + 8))) + 0xC58))) != (unsigned char)(*(signed char *)0x8C2FBC7D)) {
                        break;
                    }
                }
            }
            t54 = *(int *)0x8C2FBE20;
            *(unsigned int *)0x8C28B244 = (*(int *)(((((((t54 << 2) << 2) + t54) << 2) + 0x8C108E5C) + 0x38)));
            t56 = *(int *)0x8C28B244;
            if ((t56 != (unsigned char)(*(signed char *)0x8C2FBC7C)) && (t58 = *(signed char *)0x8C2FBC7D, t56 != (unsigned char)t58)) {
            } else {
                t59 = *(int *)0x8C2FBE20;
                *(unsigned int *)0x8C28B244 = (*(int *)(((((((t59 << 2) << 2) + t59) << 2) + 0x8C108E5C) + 0x3C)));
            }
            if ((*(int *)0x8C28B244) == -1) {
                for (;;) {
                    *(unsigned int *)0x8C28B244 = ((int)((nlRandom()) * 8.0f) + 0x8);
                    *(unsigned int *)(((int)stk + 12)) = 0x8C28A5EC;
                    t67 = *(int *)0x8C28B244;
                    if ((t67 != (unsigned char)(*(signed char *)0x8C2FBC7D)) && (t69 = *(int *)0x8C289754, t67 != t69)) {
                        break;
                    }
                }
            }
        }
    }
    if ((*(int *)0x8C287D5C) == 3) {
        *(unsigned int *)0x8C289754 = 0x10;
    }
    entryInit();
    entryPortJoin((*(int *)0x8C421F70), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    entrySetSlot(0x0, (*(int *)0x8C2889DC), 0x0, (*(int *)0x8C421F70));
    *(unsigned int *)0x8C343294 = (*(signed char *)0x8C2FBC83);
    entrySetSlot(0x1, (*(int *)0x8C289754), 0x1, 0x0);
    entrySetSlot(0x2, (*(int *)0x8C28A4CC), 0x1, 0x0);
    entrySetSlot(0x3, (*(int *)0x8C28B244), 0x1, 0x0);
    matchStart();
    *(unsigned int *)0x8C287C54 = 0x0;
    *(float *)0x8C287A04 = (*(float *)0x8C032EB0);
    if (((*(int *)0x8C2FBC98) & 4) == 0) {
        *(unsigned int *)0x8C287C50 = 0x96;
    }
    *(unsigned int *)0x8C2FBC98 = ((*(int *)0x8C2FBC98) & 0xFFFFFFFB);
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x8000);
    return circuitStatsReset();
}

int screenFramePut(int a4, int a5, int a6, int a7, float f4)
{
    float u11;
    float u12;
    float u19;
    float u20;
    float u32;
    int t62;
    int stk[26];

    *(unsigned int *)(((int)stk + 32)) = a4;
    if (a4 == 0) {
        t62 = (fadeScreenDraw(a4, a5, a6, a7, f4, 0.100000001f));
    } else {
        nlMatrixMode(0x3);
        nlUnitMatrix();
        nlPerspective(0x38E, 1.33333337f, 0.300000012f, 3000.0f);
        *(float *)0x8C287A10 = (320.0f / (nlTanf(0.058032196f)));
        nlMatrixMode(0x1);
        nlPushUnitMatrix();
        if ((*(int *)(((int)stk + 32))) == 0) {
            nlTranslate(0.0f, 0.0f, (-(*(float *)0x8C287C48)));
            u11 = *(float *)0x8C287C48;
            u12 = *(float *)0x8C287A10;
            *(float *)(((int)stk + 36)) = ((u11 * 100.0f) / u12);
            nlScale(((u11 * 100.0f) / u12), ((u11 * 100.0f) / u12), 1.0f);
            nlObjPutTrnsl(0xC5BEA50, f4);
            *(Stk3 *)(((int)stk + 20)) = vecMake(1.0f, 480.0f, 0.00999999978f);
            *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, 0.00999999978f);
            primLineV(0x1, (((int)(f4 * 255.0f) << 16) << 8), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
        } else {
            if (((*(int *)0x8C287B3C) & 0x40000) == 0) {
                nlTranslate(0.0f, 0.0f, (-(*(float *)0x8C287C48)));
                u19 = *(float *)0x8C287C48;
                u20 = *(float *)0x8C287A10;
                *(float *)(((int)stk + 36)) = ((u19 * 100.0f) / u20);
                nlScale(((u19 * 100.0f) / u20), ((u19 * 100.0f) / u20), 1.0f);
                nlObjPutTrnsl(0xC5BEA50, f4);
                *(Stk3 *)(((int)stk + 20)) = vecMake(1.0f, 480.0f, 0.00999999978f);
                *(Stk3 *)(((int)stk + 8)) = vecMake(1.0f, 0.0f, 0.00999999978f);
                primLineV(0x1, (((int)(f4 * 255.0f) << 16) << 8), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
            } else {
                nlTranslate((-((((1.0f - f4) * (1.0f - f4))) * 0.400000006f)), ((((1.0f - f4) * (1.0f - f4))) * 0.200000003f), ((-1.0f) - ((((1.0f - f4) * (1.0f - f4))) * 5.0f)));
                nlRotateAX((int)(-((((1.0f - f4) * (1.0f - f4))) * 12288.0f)));
                nlRotateAZ((int)((((1.0f - f4) * (1.0f - f4))) * 65536.0f));
                u32 = *(float *)0x8C287A10;
                nlScale((100.0f / u32), (100.0f / u32), 1.0f);
                nlObjPut(0xC5BEA50);
                *(Stk3 *)((((int)stk + 32) + 0x14)) = vecMake(-3.20000005f, -2.4000001f, 9.99999975e-05f);
                *(Stk3 *)((((int)stk + 28) + 0xC)) = vecMake(3.20000005f, -2.4000001f, 9.99999975e-05f);
                nlLineSetThickness((1.0f + 1.0f));
                nlSingleLine((((int)stk + 24) + 0x1C), (((int)stk + 24) + 0x10), 0xFF);
                *(Stk3 *)((((int)stk + 24) + 0x1C)) = vecMake(3.20000005f, 2.4000001f, 9.99999975e-05f);
                nlSingleLine((((int)stk + 20) + 0x14), (((int)stk + 20) + 0x20), 0xFF);
                *(Stk3 *)((((int)stk + 20) + 0x14)) = vecMake(-3.20000005f, 2.4000001f, 9.99999975e-05f);
                nlSingleLine((((int)stk + 16) + 0x24), (((int)stk + 16) + 0x18), 0xFF);
                *(Stk3 *)((((int)stk + 16) + 0x24)) = vecMake(-3.20000005f, -2.4000001f, 9.99999975e-05f);
                nlSingleLine((((int)stk + 32) + 0x8), (((int)stk + 32) + 0x14), 0xFF);
            }
        }
        nlPopMatrix(0x1);
        nlMatrixMode(0x3);
        nlUnitMatrix();
        nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), 1.33333337f, 0.300000012f, 3000.0f);
        *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
        t62 = (nlMatrixMode(0x1));
    }
    return t62;
}

void ballExec(int a4)
{
    int t27;
    int t30;
    int t45;
    int t55;
    int t1;
    int t7;
    int t34;
    int t51;
    int t52;
    int t53;
    int t59;
    int t60;
    int t100;
    int t101;
    int stk[49];

    if (((*(int *)0x8C421F60) != 0) && (t1 = *(int *)0x8C295DDC, (t1 & 32) != 0)) {
        *(Stk3 *)((0xC + a4)) = vecMake(0.0f, 10.0f, 0.0f);
    } else {
        if (((*(int *)0x8C287C60) == 0) && (t7 = *(int *)((a4 + 0x54)), (t7 & 8) == 0)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)((a4 + 0xC)); }
            *(float *)((a4 + 0x30)) = ((*(float *)((a4 + 0x30))) + 1.0f);
            if ((*(int *)0x8C287D5C) == 3) {
                ballColliSync();
            }
            ballMove(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
        }
        *(unsigned short *)(((0x84 + a4) + 0x0)) = (nlArcTan2((*(float *)((a4 + 0x34))), (*(float *)((a4 + 0x3C)))));
        t27 = *(int *)0x8C20D19C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned short *)((a4 + 0x86)) = (int)(((((float)(-t27) * (vecLength(*(Stk3 *)(((int)stk + 40)))))) * 65536.0f) / 21.0f);
        t30 = ambLevelGet();
        nlScaleVector(((int)stk + 52), 0x8C38B834, ((float)t30 / 100.0f));
        nlObjPutSetLightDirectionV(((int)stk + 52));
        if (((*(int *)0x8C421F60) == 0) && (t34 = *(int *)0x8C287B44, t34 == 7)) {
        } else {
            t45 = *(int *)0x8C421F60;
            if (t45 == 0) {
                t55 = 0x0;
                if (((*(int *)0x8C287B44) != 9) && ((t51 = *(int *)0x8C287B44, t51 != 5) && ((t52 = *(int *)0x8C287B44, t52 != 6) && (t53 = *(int *)0x8C287B44, t53 != 10)))) {
                    t55 = 0x1;
                }
                if ((t55 ^ ((((((*(int *)0x8C287B3C) & 0x800) == 0)) ? 1 : 0) ^ 0x1)) == 0) {
                } else {
                    if ((((*(int *)((a4 + 0x54))) & 8) == 0) && (((t45 != 0) || (t59 = *(int *)0x8C287B44, t59 == 0)) && ((t45 == 0) || (t60 = *(int *)0x8C295DF0, t60 == 0)))) {
                        nlPushMatrix(0x0);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(a4); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((a4 + 0xC)); }
                        sceneVecStub(*(Stk3 *)(((int)stk + 28)));
                        nlPopMatrix(0x1);
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                        nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                        nlObjPut(0xC505BB0);
                        nlPopMatrix(0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
                        effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)));
                    } else {
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                        nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                        nlObjPut(0xC5053E0);
                        nlPopMatrix(0x1);
                    }
                    nlObjPutSetLightDirectionV(0x8C38B834);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0xC)); }
                    shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
                    effBounceDustCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
                    effServeSpeedCalc(a4);
                }
            } else {
                if ((((*(int *)((a4 + 0x54))) & 8) == 0) && (((t45 != 0) || (t100 = *(int *)0x8C287B44, t100 == 0)) && ((t45 == 0) || (t101 = *(int *)0x8C295DF0, t101 == 0)))) {
                    nlPushMatrix(0x0);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(a4); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((a4 + 0xC)); }
                    sceneVecStub(*(Stk3 *)(((int)stk + 28)));
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                    nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                    nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                    nlObjPut(0xC505BB0);
                    nlPopMatrix(0x1);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((a4 + 0xC)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
                    effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)));
                } else {
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
                    nlRotateAY((unsigned short)(*(short *)((a4 + 0x84))));
                    nlRotateAX((unsigned short)(*(short *)((a4 + 0x86))));
                    nlObjPut(0xC5053E0);
                    nlPopMatrix(0x1);
                }
                nlObjPutSetLightDirectionV(0x8C38B834);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0xC)); }
                shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
                effBounceDustCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
                effServeSpeedCalc(a4);
            }
        }
    }
}
