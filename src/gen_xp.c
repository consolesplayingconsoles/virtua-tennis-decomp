/* Straight-line functions with calls and guards (batch gen_xp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
extern float _builtin_sqrtf(float);
int circuitDrawPrompt(void);
int circuitNumDraw(int, int, int, float, float, float);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
float cpuEdgeX(int, Stk3, float);
int cpuInFan(int, int, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
float cpuVecCos(Stk4);
int hudFontNumPut(int, Stk3, float);
float mathLineY(float, float, float, float, float);
int motionAdvance(int);
extern int motionChange();
extern int nlArcTan2();
int nlCloseEvent(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
float nlTan(int);
int nlTranslate(float, float, float);
int playerExec(int, int, int, int);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primLineV(int, int, Stk6);
int primRectInc(int, int, int, int, int, int, int, int);
int serveGetReceiver(void);
int shadowLightMatrixAng(int, int);
int shadowPartPut(int);
int shadowPartPutStage(int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
Stk3 vecMake(float, float, float);
int FUN_8c08c274(int a4);
int FUN_8c0714e4(int a4, int a5);
int FUN_8c03488c(int a4);
float FUN_8c06158a(int a4);
int FUN_8c025500(int a4, int a5, int a6, int a7, float f4, float f5);
float FUN_8c069fba(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
float FUN_8c049cb0(int a4, float f4, float f5, float f6, float f7);



int FUN_8c03488c(int a4)
{
    int stk[55];
    register int t12;
    register int t16;
    register int t26;
    register int t28;
    register int t57;
    register int t105;
    register int t73;
    register int t78;
    register int t80;
    register int t95;
    register int t90;
    register int t83;
    register int t88;
    register int t68;
    register int t100;
    int R1076;
    int R1080;
    int R1084;
    int R1088;
    float R1092;

    R1076 = *(int *)((int)stk + 76);
    R1080 = *(int *)((int)stk + 80);
    R1084 = *(int *)((int)stk + 84);
    R1088 = *(int *)((int)stk + 88);
    R1092 = *(float *)((int)stk + 92);

    R1088 = a4;
    sprSheetSet(0x8C10A628);
    sprSheetPut(0x0, 260.0f, 96.0f, 0.699999988f, 1.0f);
    sprSheetSet(0x8C10A550);
    sprSheetPut(0x0, 166.0f, 144.0f, 0.699999988f, 1.0f);
    sprSheetSet(0x8C10A574);
    sprSheetPut(0x0, 166.0f, 184.0f, 0.699999988f, 1.0f);
    sprSheetSet(0x8C10A598);
    sprSheetPut(0x0, 166.0f, 224.0f, 0.699999988f, 1.0f);
    sprSheetSet(0x8C10A5BC);
    sprSheetPut(0x0, 166.0f, 264.0f, 0.699999988f, 1.0f);
    sprSheetSet(0x8C10A5E0);
    sprSheetPut(0x0, 166.0f, 304.0f, 0.699999988f, 1.0f);
    R1080 = 0x8C2876A8;
    R1076 = ((((int)stk + 76) + 0x14) + 0x20);
    R1084 = ((((int)stk + 76) + 0x14) + 0x30);
    t12 = 0x0;
    for (;;) {
        sprSheetSet(0x8C10A4D4);
        sprSheetPut(0x0, 483.0f, (float)(0x90 + t12), 0.699999988f, 1.0f);
        sprSheetSet(0x8C10A508);
        t16 = R1080;
        *(float *)((t16 + 0x10)) = ((*(float *)((t16 + 0x10))) * 144.0f);
        R1092 = (float)(0x8C + t12);
        sprSheetPut(0x0, 116.0f, (float)(0x8C + t12), 0.709999979f, 1.0f);
        sprSheetSet(0x8C10A52C);
        sprSheetPut(0x0, 280.0f, (R1092), 0.709999979f, 1.0f);
        { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 76) + 0x14)) = *(struct mv16 *)(0x8C10A694); }
        *(float *)(((((int)stk + 76) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 76) + 0x14) + 0x0))) + 84.0f);
        *(float *)((((((int)stk + 76) + 0x14) + 0x10) + 0x0)) = ((*(float *)((((((int)stk + 76) + 0x14) + 0x10) + 0x0))) + 84.0f);
        *(float *)(((((int)stk + 76) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 76) + 0x14) + 0x4))) + (float)t12);
        *(float *)((((((int)stk + 76) + 0x14) + 0x10) + 0x4)) = ((*(float *)((((((int)stk + 76) + 0x14) + 0x10) + 0x4))) + (float)t12);
        t26 = R1076;
        *(float *)((t26 + 0x4)) = ((*(float *)((t26 + 0x4))) + (float)t12);
        t28 = R1084;
        *(float *)((t28 + 0x4)) = ((*(float *)((t28 + 0x4))) + (float)t12);
        nlDispStripTrnsl(0x4, (((int)stk + 76) + 0x14));
        t12 = (t12 + 0x28);
        if ((int)t12 < (int)0xC8) continue;
        break;
    }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 76) + 0x14)) = *(struct mv16 *)(0x8C10A6D4); }
    nlDispStripTrnsl(0x4, (((int)stk + 76) + 0x14));
    *(Stk3 *)(((int)stk + 64)) = vecMake(540.0f, 90.0f, 0.800000012f);
    primRectInc(0x1B8, 0x28, 0xC0FF3600, 0x0, *(int *)((int)stk + 64), *(int *)((int)stk + 64 + 4), *(int *)((int)stk + 64 + 8), R1076);
    *(Stk3 *)(((int)stk + 64)) = vecMake(540.0f, 90.0f, 0.699999988f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(100.0f, 90.0f, 0.699999988f);
    primLineH(0x2, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20));
    *(Stk3 *)(((int)stk + 64)) = vecMake(540.0f, 130.0f, 0.699999988f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(100.0f, 130.0f, 0.699999988f);
    primLineH(0x2, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20));
    *(Stk3 *)(((int)stk + 64)) = vecMake(540.0f, 346.0f, 0.699999988f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(100.0f, 346.0f, 0.699999988f);
    primLineH(0x2, 0xFFFFFFFF, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20));
    *(Stk3 *)(((int)stk + 64)) = vecMake(100.0f, 346.0f, 0.699999988f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(100.0f, 90.0f, 0.699999988f);
    primLineV(0x2, 0xFFFFFFFF, *(Stk6 *)((int)stk + 52));
    *(Stk3 *)(((int)stk + 64)) = vecMake(540.0f, 346.0f, 0.699999988f);
    *(Stk3 *)(((int)stk + 52)) = vecMake(540.0f, 90.0f, 0.699999988f);
    primLineV(0x2, 0xFFFFFFFF, *(Stk6 *)((int)stk + 52));
    circuitNumDraw((*(int *)0x8C2FBD04), 0x0, 0x8C159D18, 473.0f, 144.0f, 0.699999988f);
    circuitNumDraw((*(int *)0x8C2FBD08), 0x0, 0x8C159D18, 473.0f, 184.0f, 0.699999988f);
    circuitNumDraw((*(int *)0x8C2FBD0C), 0x0, 0x8C159D18, 473.0f, 224.0f, 0.699999988f);
    circuitNumDraw((*(int *)0x8C2FBD10), 0x0, 0x8C159D18, 473.0f, 264.0f, 0.699999988f);
    circuitNumDraw((*(int *)0x8C2FBD14), 0x0, 0x8C159D18, 473.0f, 304.0f, 0.699999988f);
    (*(int *)((int)stk + 48)) = (((int)stk + 52) + 0x6C);
    *(Stk3 *)((((int)stk + 52) + 0x6C)) = vecMake(105.0f, 352.0f, 0.699999988f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 52) + 0x6C)); }
    sprPutAtAlpha(0x8C33E370, *(Stk3 *)(((int)stk + 36)), 1.0f);
    (*(int *)((int)stk + 32)) = (((int)stk + 52) + 0x6C);
    *(Stk3 *)((((int)stk + 52) + 0x6C)) = vecMake(190.0f, 352.0f, 0.699999988f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 52) + 0x6C)); }
    sprPutAtAlpha(0x8C33E3C0, *(Stk3 *)(((int)stk + 20)), 1.0f);
    (*(int *)((int)stk + 16)) = (((int)stk + 52) + 0x6C);
    *(Stk3 *)((((int)stk + 52) + 0x6C)) = vecMake(498.0f, 352.0f, 0.699999988f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x6C)); }
    hudFontNumPut((*(int *)0x8C2FBD18), *(Stk3 *)(((int)stk + 4)), 1.0f);
    sprSheetSet(0x8C10A65C);
    *(float *)0x8C2876B8 = ((*(float *)0x8C2876B8) * 436.0f);
    sprSheetPut(0x0, 100.0f, 351.0f, (1.0f + 1.0f), 0.800000012f);
    sprSheetSet(0x8C10A680);
    sprSheetPut(0x0, 538.0f, 351.0f, (1.0f + 1.0f), 0.800000012f);
    t57 = R1088;
    *(unsigned int *)((t57 + 0x14)) = ((*(int *)((t57 + 0x14))) + (*(int *)0x8C301BF0));
    t105 = 0x8C2FBE2C;
    if ((*(int *)0x8C2FBE2C) == 0) {
        if ((((*(int *)0x8C287B3C) & 64) == 0) && (t68 = *(int *)0x8C287B4C, (int)t68 > 0)) {
            t73 = circuitDrawPrompt();
            t78 = t73;
            if (t73 != 0) {
                *(unsigned int *)0x8C2FBC98 = ((*(int *)0x8C2FBC98) | 0x4);
                *(unsigned int *)0x8C287B4C = 0x2;
                *(unsigned int *)0x8C287B2C = 0x32C;
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
                t78 = (nlCloseEvent((R1088)));
            }
            t100 = t78;
        } else {
            t80 = *(int *)0x8C287B3C;
            t95 = t80;
            if ((t80 & 64) != 0) {
                t90 = 0x8C287B2C;
                if ((int)(*(int *)0x8C287B2C) > (int)0x32B) {
                    t83 = circuitDrawPrompt();
                    t88 = t83;
                    if (t83 != 0) {
                        *(unsigned int *)0x8C2FBC98 = ((*(int *)0x8C2FBC98) | 0x4);
                        *(unsigned int *)0x8C287B4C = 0x2;
                        *(unsigned int *)0x8C287B2C = 0x32C;
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x80000);
                        t88 = (nlCloseEvent((R1088)));
                    }
                    t90 = t88;
                }
                t95 = t90;
            }
            t100 = t95;
        }
        t105 = t100;
    }
    return t105;
}

float FUN_8c06158a(int a4)
{
    int stk[9];

    register int R1;
    register int R8;
    register int R9;
    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_5 = a4;
    v0_1 = R9;
    *(int *)((int)stk + 12) = v0_1;
    v0_2 = R8;
    *(int *)((int)stk + 8) = v0_2;
    v0_4 = *(int *)((v0_5 + 0xB5C));
    v0_0 = *(int *)(((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    v0_7 = (*(signed char *)((((v0_4 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_8 = v0_5;
    v0_3 = (0x12E);
    v0_1 = (0x1);
    v0_0 = (((v0_0 * 0x160) + 0x8C2FC69C));
    v0_2 = (((v0_4 * 0x160) + 0x8C2FC69C));
    v0_5 = (0x8C2FC69C);
    v0_6 = (0x160);
    v0_9 = (0x8C291F24);
    R8 = ((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84));
    R9 = v0_8;
    if (v0_7) goto L_8C0615D6;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C061A0A:;
    *(volatile int *)((int)stk + 4);
    *(volatile int *)((int)stk + 8);
    return F0;
    L_8C0615D6:;
    v0_3 = (*(signed char *)((v0_0 + v0_3))) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_3) goto L_8C0615E0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C0615E0:;
    v0_3 = ((*(int *)((v0_9 + 0x54))) & 4) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_3) goto L_8C061614;
    v0_3 = (serveGetReceiver()) != (*(int *)(((0xB5C + R9) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_3) goto L_8C0615FC;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C061A00:;
    *(unsigned char *)((v0_2 + 0x12E)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x12E);
    goto L_8C061A0A;
    L_8C0615FC:;
    v0_3 = serveGetReceiver();
    v0_2 = v0_3 != (*(int *)(((0xB5C + R8) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (v0_3);
    if (v0_2) goto L_8C061610;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C061A06:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x12E);
    goto L_8C061A0A;
    L_8C061610:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C061614:;
    v0_3 = (*(int *)((R8 + 0xC5C))) != 12;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_3) goto L_8C06162A;
    v0_3 = ((*(int *)((R8 + 0xB60))) & 0x100) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_3) goto L_8C06162A;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A00;
    L_8C06162A:;
    v0_2 = (*(int *)((R9 + 0xC5C))) != 12;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_2) goto L_8C061640;
    v0_2 = ((*(int *)((R9 + 0xB60))) & 0x100) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_2) goto L_8C061640;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A06;
    L_8C061640:;
    w0_2 = *(float *)((R9 + 0xAF0));
    w0_1 = *(float *)((R8 + 0xAF0));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = (w0_2);
    w0_1 = (w0_1);
    if ((0.0f > w0_2)) goto L_8C061650;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_0);
    L_8C061654:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((0.0f > w0_1)) goto L_8C06165E;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_1);
    L_8C061662:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_1 > w0_2))) goto L_8C06168C;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (R8);
    v0_4 = (R9);
    L_8C061690:;
    v0_2 = *(int *)((v0_4 + 0xB5C));
    v0_0 = *(int *)((v0_3 + 0xB5C));
    v0_7 = !((*(float *)((v0_4 + 0xBA0))) > 30.0f);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_0 = (((v0_0 * v0_6) + v0_5));
    v0_2 = (((v0_2 * v0_6) + v0_5));
    if (v0_7) goto L_8C0616F4;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    w0_2 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (0.0f);
    w0_0 = (w0_2);
    if ((!(w0_2 > 0.0f))) goto L_8C0616C0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C0616CA:;
    v0_1 = v0_5 == (*(signed char *)((v0_2 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x13D);
    if (v0_1) goto L_8C0616D6;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C0616D6:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((0.0f > w0_0)) goto L_8C0616E0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_0);
    L_8C0616E4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x8C06176C);
    if ((!(w0_2 > 21.9400005f))) goto L_8C0616F0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    L_8C06182E:;
    *(unsigned char *)((v0_2 + 0x13D)) = ((short)(*(signed char *)((v0_2 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((v0_0 + 0x13D)) = ((short)(*(signed char *)((v0_0 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x13D);
    goto L_8C061A0A;
    L_8C0616F0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C0616E0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = ((-w0_0));
    goto L_8C0616E4;
    L_8C0616C0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_1 > w0_0))) goto L_8C0616C8;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C0616CA;
    L_8C0616C8:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C0616CA;
    L_8C0616F4:;
    v0_5 = ((*(int *)((R9 + 0xB60))) & 4) == 0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_5) goto L_8C061778;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), (0xBA8 + v0_4));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    F0 = (w0_0);
    if ((!(w0_0 > 25.0f))) goto L_8C061778;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    w0_1 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    w0_0 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C061722;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C06172C:;
    v0_1 = v0_5 == (*(signed char *)((v0_2 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x13D);
    if (v0_1) goto L_8C061738;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C061738:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((0.0f > w0_0)) goto L_8C061742;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_0);
    L_8C061746:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x8C06176C);
    if ((w0_2 > 21.9400005f)) goto L_8C061752;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C061752:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C06182E;
    L_8C061742:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = ((-w0_0));
    goto L_8C061746;
    L_8C061722:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_0))) goto L_8C06172A;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C06172C;
    L_8C06172A:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C06172C;
    L_8C061778:;
    v0_5 = (*(int *)0x8C2FCC60) != 2;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_5) goto L_8C061858;
    w0_2 = *(float *)((v0_4 + 0xAE8));
    w0_4 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = (w0_4);
    w0_1 = ((w0_2 - w0_4));
    w0_3 = (w0_2);
    if ((0.0f > (w0_2 - w0_4))) goto L_8C061796;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_1);
    L_8C06179E:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((25.0f > w0_2)) goto L_8C0617DA;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = (0.0f);
    if ((0.0f > w0_1)) goto L_8C0617B0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_1);
    L_8C0617B6:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(50.0f > w0_2))) goto L_8C061806;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    if ((!(w0_0 > 0.0f))) goto L_8C0617C8;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C0617D2:;
    v0_5 = v0_5 != (*(signed char *)((v0_2 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_5) goto L_8C061806;
    L_8C0617DA:;
    *(unsigned char *)((v0_2 + 0x12E)) = v0_1;
    w0_1 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    w0_0 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C0617EC;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C0617F6:;
    v0_1 = v0_5 != (*(signed char *)((v0_2 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x13D);
    if (v0_1) goto L_8C061802;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C061802:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C06182E;
    L_8C0617EC:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_0))) goto L_8C0617F4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C0617F6;
    L_8C0617F4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C0617F6;
    L_8C061806:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    w0_1 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    w0_0 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C061818;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C061822:;
    v0_1 = v0_5 != (*(signed char *)((v0_0 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (0x13D);
    if (v0_1) goto L_8C06182E;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A0A;
    L_8C061818:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_0))) goto L_8C061820;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C061822;
    L_8C061820:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C061822;
    L_8C0617C8:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_0))) goto L_8C0617D0;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C0617D2;
    L_8C0617D0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C0617D2;
    L_8C0617B0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (((-w0_3) + w0_0));
    goto L_8C0617B6;
    L_8C061796:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (((-w0_3) + w0_0));
    goto L_8C06179E;
    L_8C061858:;
    w0_2 = *(float *)((v0_4 + 0xB9C));
    w0_1 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = (0.5f);
    w0_1 = (w0_1);
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C06186C;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_3);
    L_8C061870:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((0.0f > w0_1)) goto L_8C06187A;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_1);
    L_8C06187E:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((16.4549999f > ((w0_2 + w0_1) * w0_0))) goto L_8C06188E;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = *(float *)((v0_4 + 0xB9C));
    w0_4 = *(float *)((v0_4 + 0xAE8));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = (w0_4);
    w0_1 = (w0_2);
    w0_3 = ((w0_2 - w0_4));
    if ((0.0f > (w0_2 - w0_4))) goto L_8C0619D6;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_3);
    L_8C0619DE:;
    w0_0 = *(float *)((v0_3 + 0xB9C));
    w0_5 = *(float *)((v0_3 + 0xAE8));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((w0_0 - w0_5));
    w0_3 = (w0_0);
    w0_1 = (w0_5);
    if ((0.0f > (w0_0 - w0_5))) goto L_8C0619F4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_4);
    L_8C0619FC:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_1 > w0_2))) goto L_8C061A06;
    goto L_8C061A00;
    L_8C0619F4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_3));
    w0_1 = (((-w0_3) + w0_1));
    goto L_8C0619FC;
    L_8C0619D6:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_1));
    w0_2 = (((-w0_1) + w0_0));
    goto L_8C0619DE;
    L_8C06188E:;
    w0_3 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    w0_1 = (w0_3);
    if ((!(w0_3 > 0.0f))) goto L_8C06189C;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C0618A6:;
    v0_5 = v0_5 != (*(signed char *)((v0_2 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_5) goto L_8C06191C;
    w0_2 = *(float *)((v0_4 + 0xAE8));
    w0_4 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = (w0_4);
    w0_1 = ((w0_2 - w0_4));
    w0_3 = (w0_2);
    if ((0.0f > (w0_2 - w0_4))) goto L_8C0618C4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_1);
    L_8C0618CC:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(30.0000019f > w0_2))) goto L_8C0618D8;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A00;
    L_8C0618D8:;
    w0_2 = *(float *)((v0_4 + 0xAE8));
    w0_4 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_0 = ((w0_2 - w0_4));
    w0_1 = (w0_2);
    w0_3 = (w0_4);
    if ((0.0f > (w0_2 - w0_4))) goto L_8C0618EE;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_0);
    L_8C0618F6:;
    w0_0 = *(float *)((v0_3 + 0xAE8));
    w0_5 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((w0_0 - w0_5));
    w0_3 = (w0_0);
    w0_1 = (w0_5);
    if ((0.0f > (w0_0 - w0_5))) goto L_8C06190C;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_4);
    L_8C061914:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_1 > w0_2))) goto L_8C061A06;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A00;
    L_8C06190C:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_3));
    w0_1 = (((-w0_3) + w0_1));
    goto L_8C061914;
    L_8C0618EE:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_1));
    w0_2 = (((-w0_1) + w0_3));
    goto L_8C0618F6;
    L_8C0618C4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (((-w0_3) + w0_0));
    goto L_8C0618CC;
    L_8C06191C:;
    w0_3 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (0.0f);
    w0_1 = (w0_3);
    if ((!(w0_3 > 0.0f))) goto L_8C06192A;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x1);
    L_8C061946:;
    v0_5 = v0_5 != (*(signed char *)((v0_0 + 0x13D)));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if (v0_5) goto L_8C0619BA;
    w0_2 = *(float *)((v0_4 + 0xAE8));
    w0_5 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_5);
    w0_3 = (w0_2);
    w0_4 = ((w0_2 - w0_5));
    if ((0.0f > (w0_2 - w0_5))) goto L_8C061964;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_4);
    L_8C06196C:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((20.0f > w0_2)) goto L_8C061A00;
    w0_2 = *(float *)((v0_4 + 0xAE8));
    w0_5 = *(float *)((v0_4 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_2);
    w0_4 = ((w0_2 - w0_5));
    w0_3 = (w0_5);
    if ((0.0f > (w0_2 - w0_5))) goto L_8C06198A;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (w0_4);
    L_8C061992:;
    w0_4 = *(float *)((v0_3 + 0xAE8));
    w0_6 = *(float *)((v0_3 + 0xB9C));
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_5 = (w0_4);
    w0_3 = (w0_6);
    w0_1 = ((w0_4 - w0_6));
    if ((0.0f > (w0_4 - w0_6))) goto L_8C0619A8;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = (w0_1);
    L_8C0619B0:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!((w0_1 * w0_0) > w0_2))) goto L_8C061A06;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A00;
    L_8C0619A8:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_5));
    w0_1 = (((-w0_5) + w0_3));
    goto L_8C0619B0;
    L_8C06198A:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_4 = ((-w0_1));
    w0_2 = (((-w0_1) + w0_3));
    goto L_8C061992;
    L_8C061964:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = (((-w0_3) + w0_1));
    goto L_8C06196C;
    L_8C0619BA:;
    *(unsigned char *)((v0_2 + 0x12E)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    goto L_8C061A06;
    L_8C06192A:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_1))) goto L_8C061944;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C061946;
    L_8C061944:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C061946;
    L_8C06189C:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    if ((!(w0_2 > w0_1))) goto L_8C0618A4;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0xFFFFFFFF);
    goto L_8C0618A6;
    L_8C0618A4:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_5 = (0x0);
    goto L_8C0618A6;
    L_8C06187A:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = ((-w0_1));
    goto L_8C06187E;
    L_8C06186C:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = ((-w0_3));
    goto L_8C061870;
    L_8C06168C:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    v0_3 = (R9);
    v0_4 = (R8);
    goto L_8C061690;
    L_8C06165E:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_1 = ((-w0_1));
    goto L_8C061662;
    L_8C061650:;
    *(unsigned int *)(((int)stk + 8)) = *(int *)((int)stk + 8);
    *(unsigned int *)(((int)stk + 4)) = *(int *)((int)stk + 4);
    w0_2 = ((-w0_0));
    goto L_8C061654;
}

int FUN_8c025500(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[157];

    register int R1;
    register int R2;
    int R4;
    int R11;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    R4 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    w0_0 = f5;
    *(unsigned int *)(((int)stk + 12)) = 0x8C287ACC;
    v0_0 = (R4);
    if (((*(int *)0x8C287C60) != 0)) goto L_8C02552A;
    motionAdvance(v0_0);
    L_8C02552A:;
    v0_5 = (0x0);
    R4 = (0xFFFEFFFF);
    w0_1 = (0.0f);
    if ((((*(int *)0x8C295DDC) & 32) == 0)) goto L_8C025556;
    *(float *)((v0_0 + 0xC90)) = w0_1;
    *(unsigned int *)((v0_0 + 0xB60)) = ((*(int *)((v0_0 + 0xB60))) & R4);
    *(unsigned int *)((v0_0 + 0xCC0)) = v0_5;
    *(float *)((v0_0 + 0xB14)) = w0_1;
    *(float *)((v0_0 + 0xB18)) = w0_1;
    *(float *)((v0_0 + 0xC7C)) = w0_1;
    L_8C025924:;
    playerExec(v0_0, v0_2, v0_3, v0_4);
    v0_1 = *(int *)((v0_0 + 0xB5C));
    *(unsigned int *)(((int)stk + 8)) = (((0x1 & (v0_1 + 0x1)) * 0xD78) + 0x8C287D84);
    v0_1 = *(int *)(((((0x1 & (v0_1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC98));
    R4 = (v0_1);
    if ((v0_1 == 11)) goto L_8C02594E;
    v0_7 = (R4);
    if ((R4 != 17)) goto L_8C025956;
    L_8C02594E:;
    *(float *)((v0_0 + 0xAE8)) = 9999.0f;
    v0_7 = (0xAE8);
    L_8C025956:;
    return v0_7;
    L_8C025556:;
    if ((((*(int *)((v0_0 + 0xB60))) & 64) != 0)) goto L_8C025562;
    goto L_8C025924;
    L_8C025562:;
    *(float *)((v0_0 + 0xC90)) = w0_1;
    *(unsigned int *)((v0_0 + 0xB60)) = ((*(int *)((v0_0 + 0xB60))) & 0xFFFFFFFE);
    *(unsigned int *)((v0_0 + 0xB60)) = ((*(int *)((v0_0 + 0xB60))) & R4);
    *(unsigned int *)((v0_0 + 0xCC0)) = v0_5;
    *(float *)((v0_0 + 0xB18)) = w0_1;
    *(float *)((v0_0 + 0xC7C)) = w0_1;
    *(unsigned int *)((v0_0 + 0xCB0)) = ((*(int *)((v0_0 + 0xCB0))) - ((((*(int *)0x8C287C60) == 0)) ? 1 : 0));
    v0_1 = (0x8C102E74);
    R11 = (0x1);
    v0_6 = (0x8C014AD2);
    if (!(((int)(*(int *)((v0_0 + 0xCB0))) <= (int)0xFFFFFFF6))) goto L_8C0256B6;
    if (((*(int *)((v0_0 + 0xC98))) == 11)) goto L_8C0255B8;
    if (((*(int *)((v0_0 + 0xC98))) == 17)) goto L_8C0255B8;
    goto L_8C0256B6;
    L_8C0256B6:;
    if (((int)(*(int *)((v0_0 + 0xCB0))) <= 0)) goto L_8C0256C2;
    goto L_8C025924;
    L_8C0256C2:;
    if (((*(int *)((v0_0 + 0xC98))) != 11)) goto L_8C0256CE;
    *(unsigned int *)((v0_0 + 0xC9C)) = v0_5;
    L_8C0256CE:;
    if (((*(int *)((v0_0 + 0xC98))) != 17)) goto L_8C0256F0;
    v0_6 = *(int *)(((0xC9C + v0_0) + 0x0));
    v0_7 = (v0_6);
    v0_8 = ((0xC9C + v0_0));
    if (((int)v0_6 < 0)) goto L_8C0256E4;
    v0_7 = ((v0_7 & 0x1));
    L_8C0256EE:;
    *(unsigned int *)((v0_8 + 0x0)) = v0_7;
    L_8C0256F0:;
    if (((*(int *)((v0_0 + 0xCB0))) != 0)) goto L_8C025750;
    if (((int)(*(int *)((v0_0 + 0xC98))) < (int)0xD)) goto L_8C025750;
    *(float *)((v0_0 + 0xAE8)) = w0_1;
    w0_1 = *(float *)((v0_0 + 0xAF0));
    w0_2 = (0.0f);
    w0_0 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C025714;
    v0_8 = (0x1);
    L_8C02573E:;
    *(float *)((v0_0 + 0xAF0)) = ((float)v0_8 * 64.0f);
    *(unsigned int *)((v0_0 + 0xD4C)) = v0_5;
    L_8C025750:;
    v0_6 = (v0_1);
    v0_8 = (0x8C2873CC);
    w0_1 = ((*(float *)0x8C23D204));
    if (((*(int *)((v0_0 + 0xC98))) != 11)) goto L_8C0257C0;
    v0_7 = (*(int *)((v0_8 + 0x4)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = *(int *)((v0_0 + 0xC98));
    v0_9 = *(int *)((v0_0 + 0xC9C));
    v0_6 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(v0_0, (*(int *)((((((((((v0_8 << 2) << 2) + v0_8) << 2) << 2) + v0_6) + 0xC) + (((v0_9 << 2) + v0_9) << 2)) + 0x0))), 0x0, 0x0, v0_7, w0_1, w0_0);
    if (((*(int *)((v0_0 + 0x28))) != 0)) goto L_8C0257B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + v0_0)) = *(struct mv3 *)((((*(int *)0x8C1891E8) * 0x124) + 0x8C106324)); }
    L_8C0257B0:;
    *(unsigned short *)((v0_0 + 0xB06)) = v0_5;
    *(unsigned short *)((v0_0 + 0xB0E)) = v0_5;
    *(unsigned int *)((v0_0 + 0x28)) = R11;
    *(unsigned int *)((v0_0 + 0xD4C)) = v0_5;
    L_8C0258D2:;
    v0_5 = *(int *)((v0_0 + 0xC98));
    v0_6 = *(int *)((v0_0 + 0xC9C));
    *(unsigned int *)((v0_0 + 0xD10)) = (*(int *)((((((v0_6 << 2) + v0_6) << 2) + (((((((v0_5 << 2) << 2) + v0_5) << 2) << 2) + v0_1) + 0xC)) + 0xC)));
    v0_5 = *(int *)((v0_0 + 0xC98));
    v0_6 = *(int *)((v0_0 + 0xC9C));
    *(unsigned int *)((v0_0 + 0xD14)) = (*(int *)((((((v0_6 << 2) + v0_6) << 2) + ((v0_1 + (((((v0_5 << 2) << 2) + v0_5) << 2) << 2)) + 0xC)) + 0x10)));
    goto L_8C025924;
    L_8C0257C0:;
    if (((*(int *)((v0_0 + 0xC98))) != 17)) goto L_8C02583E;
    v0_7 = (*(int *)((v0_8 + 0x10)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = *(int *)((v0_0 + 0xC98));
    v0_9 = *(int *)((v0_0 + 0xC9C));
    v0_6 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(v0_0, (*(int *)((((((((((v0_8 << 2) << 2) + v0_8) << 2) << 2) + v0_6) + 0xC) + (((v0_9 << 2) + v0_9) << 2)) + 0x0))), 0x0, 0x0, v0_7, w0_1, w0_0);
    if (((*(int *)((v0_0 + 0x28))) != 0)) goto L_8C025832;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + v0_0)) = *(struct mv3 *)((((*(int *)0x8C1891E8) * 0x124) + 0x8C106324)); }
    if (((int)(*(int *)((v0_0 + 0xB5C))) <= (int)R11)) goto L_8C025832;
    *(float *)((v0_0 + 0xAF0)) = (*(float *)((((*(int *)0x8C1891E8) * 0x124) + 0x8C106330)));
    L_8C025832:;
    *(unsigned short *)((v0_0 + 0xB06)) = v0_5;
    *(unsigned short *)((v0_0 + 0xB0E)) = v0_5;
    *(unsigned int *)((v0_0 + 0x28)) = R11;
    goto L_8C0258D2;
    L_8C02583E:;
    v0_7 = (0xC98);
    w0_1 = (1.0f);
    if (((int)(*(int *)((v0_0 + 0xC98))) < (int)0xD)) goto L_8C0258A0;
    v0_2 = (*(int *)((v0_8 + 0x10)));
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = *(int *)((v0_0 + v0_7));
    v0_4 = *(int *)((v0_0 + (v0_7 + 0x4)));
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_2 = (((((((((v0_3 << 2) << 2) + v0_3) << 2) << 2) + v0_6) + 0xC) + (((v0_4 << 2) + v0_4) << 2)));
    v0_3 = (0x0);
    v0_4 = (0x0);
    w0_1 = (w0_1);
    L_8C0258CA:;
    v0_5 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(v0_0, (*(int *)((v0_2 + 0x0))), v0_3, v0_4, *(int *)((int)stk + 4), w0_1, w0_0);
    goto L_8C0258D2;
    L_8C0258A0:;
    v0_2 = (*(int *)((v0_8 + 0xC)));
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = *(int *)((v0_0 + v0_7));
    v0_4 = *(int *)((v0_0 + (v0_7 + 0x4)));
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_2 = (((((((((v0_3 << 2) << 2) + v0_3) << 2) << 2) + v0_6) + 0xC) + (((v0_4 << 2) + v0_4) << 2)));
    v0_3 = (0x0);
    v0_4 = (0x0);
    w0_1 = (w0_1);
    goto L_8C0258CA;
    L_8C025714:;
    if ((!(w0_2 > w0_0))) goto L_8C02573C;
    v0_8 = (0xFFFFFFFF);
    goto L_8C02573E;
    L_8C02573C:;
    v0_8 = (0x0);
    goto L_8C02573E;
    L_8C0256E4:;
    v0_7 = (((~(((~v0_7) + 0x1) & 0x1)) + 0x1));
    goto L_8C0256EE;
    L_8C0255B8:;
    if (((*(int *)0x8C287D5C) != 0)) goto L_8C0256B6;
    if (((*(int *)0x8C38B84C) == 0)) goto L_8C0256B6;
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x10))) != 2)) goto L_8C02564C;
    *(unsigned int *)((v0_0 + 0xC9C)) = R11;
    v0_6 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = *(int *)((v0_0 + 0xC98));
    v0_8 = *(int *)((v0_0 + 0xC9C));
    v0_1 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(v0_0, (*(int *)((((((((((v0_7 << 2) << 2) + v0_7) << 2) << 2) + v0_1) + 0xC) + (((v0_8 << 2) + v0_8) << 2)) + 0x0))), 0x0, 0x0, v0_6, (*(float *)0x8C23D204), w0_0);
    L_8C0256AC:;
    *(unsigned short *)((v0_0 + 0xB06)) = v0_5;
    *(unsigned short *)((v0_0 + 0xB0E)) = v0_5;
    goto L_8C025924;
    L_8C02564C:;
    *(unsigned int *)((v0_0 + 0xC9C)) = (((*(int *)((v0_0 + 0xC9C))) & R11) + 0x2);
    v0_6 = *(int *)((v0_0 + 0xB5C));
    R4 = (v0_6);
    if (((int)v0_6 < (int)0x2)) goto L_8C025674;
    if ((!((*(float *)((((R11 & R4) * 0xD78) + 0x8C287D90))) > 30.0f))) goto L_8C0256AC;
    L_8C025674:;
    v0_6 = (*(int *)0x8C2873DC);
    *(int *)((int)stk + 4) = v0_6;
    v0_7 = *(int *)((v0_0 + 0xC98));
    v0_8 = *(int *)((v0_0 + 0xC9C));
    v0_1 = ((int (*)(int, int, int, int, int, float, float))(motionChange))(v0_0, (*(int *)((((((((((v0_7 << 2) << 2) + v0_7) << 2) << 2) + v0_1) + 0xC) + (((v0_8 << 2) + v0_8) << 2)) + 0x0))), 0x0, 0x0, v0_6, (*(float *)0x8C23D204), w0_0);
    goto L_8C0256AC;
}

float FUN_8c069fba(int a4, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[13];
    register int t0;
    register int t1;
    register float u4;
    register float u6;
    register int t9;
    register int t11;
    register float u14;
    register float t15;
    register float u16;
    register float u17;
    register float u18;
    register float u20;
    register int t22;
    register float u24;
    register float u25;
    register float u27;
    register float u29;
    register float u30;
    register float u32;
    register int t46;
    register float u34;
    register float u35;
    register float u37;
    register float u39;
    register float u40;
    register float u42;
    register int t44;
    register float u57;
    register float u58;
    register float u63;
    register float u64;
    register float u69;
    register float u70;
    register float u75;
    register int t80;
    register float u82;
    register float u83;
    register float u85;
    register int t99;
    register float u87;
    register float u88;
    register float u90;
    register float u92;
    register float u93;
    register float u95;
    register int t97;
    register int t138;
    register float t142;
    register float u143;
    register float u148;
    register float u196;
    register float u187;
    register float u162;
    register float u163;
    register float u180;
    register float u165;
    register float u173;
    register float u212;
    register float u220;
    register float u223;
    register float u225;
    register float u204;
    register float u208;
    register int t125;
    register int t111;
    register float u232;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    u4 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
    u6 = ((*(float *)((a4 + 0xB00))) * u4);
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t9 = serveGetReceiver();
        t11 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if (t9 == (*(int *)(((0xB5C + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)) + 0x0)))) {
            t11 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + t11)); }
        u14 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t15 = cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > u14)) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (-(u6 * 118.849998f)));
        u204 = t15;
        u208 = t15;
    } else {
        u16 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u17 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u18 = (-u16);
        if (!(0.0f > u16)) {
            u18 = u16;
        }
        u20 = (-u17);
        if (!(0.0f > u17)) {
            u20 = u17;
        }
        t22 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if (u20 > u18) {
            t22 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u24 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u25 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u27 = ((-u24) + u25);
        if (!(0.0f > (u24 - u25))) {
            u27 = (u24 - u25);
        }
        if (!(u27 > 54.8499985f)) {
            u29 = *(float *)((t22 + 0xAE8));
            u30 = *(float *)((t22 + 0xB9C));
            u32 = ((-u29) + u30);
            if (!(0.0f > (u29 - u30))) {
                u32 = (u29 - u30);
            }
            t46 = t22;
            if (!(25.0f > u32)) {
                u34 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u35 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u37 = ((-u34) + u35);
                if (!(0.0f > (u34 - u35))) {
                    u37 = (u34 - u35);
                }
                u39 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u40 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u42 = ((-u39) + u40);
                if (!(0.0f > (u39 - u40))) {
                    u42 = (u39 - u40);
                }
                t44 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                if (u42 > u37) {
                    t44 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t46 = t44;
            }
            t125 = t46;
        } else {
            u57 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u58 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u63 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u64 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u58 - u57) > 0.0f) - (0.0f > (u58 - u57))) == (((u64 - u63) > 0.0f) - (0.0f > (u64 - u63)))) {
                u69 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u70 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u75 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t80 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                if ((((u69 - u70) > 0.0f) - (0.0f > (u69 - u70))) != (((u69 - u75) > 0.0f) - (0.0f > (u69 - u75)))) {
                    t80 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t111 = t80;
            } else {
                u82 = *(float *)((t22 + 0xAE8));
                u83 = *(float *)((t22 + 0xB9C));
                u85 = ((-u82) + u83);
                if (!(0.0f > (u82 - u83))) {
                    u85 = (u82 - u83);
                }
                t99 = t22;
                if (!(25.0f > u85)) {
                    u87 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u88 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u90 = ((-u87) + u88);
                    if (!(0.0f > (u87 - u88))) {
                        u90 = (u87 - u88);
                    }
                    u92 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u93 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u95 = ((-u92) + u93);
                    if (!(0.0f > (u92 - u93))) {
                        u95 = (u92 - u93);
                    }
                    t97 = ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                    if (u95 > u90) {
                        t97 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t99 = t97;
                }
                t111 = t99;
            }
            t125 = t111;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t125)); }
        t138 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        t142 = cpuEdgeX((((int)((unsigned int)((int)((unsigned int)(t138 + 0x1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t138 + 0x1))) ? 1u : 0u))) >> 1), *(Stk3 *)(((int)stk + 4)), (-(u6 * 118.849998f)));
        u143 = *(float *)((t125 + 0xB9C));
        u148 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u196 = t142;
        if ((((u143 - t142) > 0.0f) - (0.0f > (u143 - t142))) == (((t142 - u148) > 0.0f) - (0.0f > (t142 - u148)))) {
            u187 = t142;
            if ((((u143 - t142) > 0.0f) - (0.0f > (u143 - t142))) == ((t142 > 0.0f) - (0.0f > t142))) {
                u162 = *(float *)((a4 + 0xB9C));
                u163 = (-u162);
                if (!(0.0f > u162)) {
                    u163 = u162;
                }
                u180 = t142;
                if (u163 > 27.4249992f) {
                    u165 = (-t142);
                    if (!(0.0f > t142)) {
                        u165 = t142;
                    }
                    u173 = t142;
                    if (34.8499985f > u165) {
                        u173 = ((float)((t142 > 0.0f) - (0.0f > t142)) * 34.8499985f);
                    }
                    u180 = u173;
                }
                u187 = u180;
            }
            u196 = u187;
        }
        u204 = t142;
        u208 = u196;
    }
    u212 = (-u208);
    if (!(0.0f > u208)) {
        u212 = u208;
    }
    u220 = u208;
    if (u212 > 46.6225014f) {
        u220 = ((float)((u208 > 0.0f) - (0.0f > u208)) * 46.6225014f);
    }
    if ((*(int *)((a4 + 0xA24))) == 0) {
        u223 = *(float *)((a4 + 0xA34));
        u225 = ((-u220) + u223);
        if (!(0.0f > (u220 - u223))) {
            u225 = (u220 - u223);
        }
        if (1.0f > u225) {
            if (!(0.0f > ((-(u6 * 118.849998f)) - (*(float *)((a4 + 0xA3C)))))) {
                u232 = ((-(u6 * 118.849998f)) - (*(float *)((a4 + 0xA3C))));
            } else {
                u232 = ((-(-(u6 * 118.849998f))) + (*(float *)((a4 + 0xA3C))));
            }
            if (!(1.0f > u232)) {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                *(unsigned int *)((a4 + 0xA24)) = 0x0;
                *(float *)((a4 + 0xA34)) = u220;
                *(float *)((a4 + 0xA3C)) = (-(u6 * 118.849998f));
            }
        } else {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(float *)((a4 + 0xA34)) = u220;
            *(float *)((a4 + 0xA3C)) = (-(u6 * 118.849998f));
        }
    } else {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(float *)((a4 + 0xA34)) = u220;
        *(float *)((a4 + 0xA3C)) = (-(u6 * 118.849998f));
    }
    return u204;
}

float FUN_8c049cb0(int a4, float f4, float f5, float f6, float f7)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t8;
    register float t9;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u38;
    register float u17;
    register float u18;
    register float u21;
    register int t41;
    register float u42;
    register float u43;
    register float u49;
    register float u50;
    register float u51;
    register float u52;
    register float u58;
    register float u73;
    register float u74;
    register float u88;
    register float u96;
    register float u121;
    register float u126;
    register float u135;
    register float u136;
    register float u153;
    register float u155;
    register float u158;
    register float u163;
    register float u184;
    register float u185;
    register int t188;
    register float u190;
    register float u191;
    register int t194;
    register int t203;
    register int t198;
    register int t200;
    register float u230;
    register float u107;
    register float u79;
    register float u83;
    register float u84;
    register float u31;
    register float u62;
    register float u65;
    register int t141;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) != 0) {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                t8 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
                t9 = nlRandom();
                u11 = *(float *)0x8C291F7C;
                u12 = (((-((float)t8 * 0.300000012f)) - (t9 * 0.100000001f)) + 1.0f);
                u13 = ((*(float *)((a4 + 0xB00))) * u12);
                u14 = (-u11);
                if (!(0.0f > u11)) {
                    u14 = u11;
                }
                u38 = 0.0f;
                if (12.3450012f > u14) {
                } else {
                    u17 = *(float *)0x8C291F7C;
                    u18 = (-u17);
                    if (!(0.0f > u17)) {
                        u18 = u17;
                    }
                    if (28.8050003f > u18) {
                        u21 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u31 = ((float)((u21 > 0.0f) - (0.0f > u21)) * 26.7474995f);
                    } else {
                        u31 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                    }
                    u38 = u31;
                }
                u79 = (t9 * 0.100000001f);
                u83 = u38;
                u84 = (-(u13 * 118.849998f));
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + (((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84))); }
                t41 = cpuInFan((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (0xB8 + ((t1 * 0x160) + 0x8C2FC69C)), *(Stk3 *)(((int)stk + 4)));
                if (t41 != 0) {
                    u42 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u43 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u49 = (float)((((u42 - u43) > 0.0f) - (0.0f > (u42 - u43))) * (*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                    u50 = (u49 * 0.5f);
                    u50 = u50 + 0.899999976f * u42;
                    u62 = 0.899999976f;
                    u65 = u50;
                } else {
                    u51 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u52 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u58 = u51;
                    u58 = u58 + 1.10000002f * ((float)(((u51 - u52) > 0.0f) - (0.0f > (u51 - u52))) * (float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))));
                    u62 = 1.10000002f;
                    u65 = u58;
                }
                u73 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u74 = ((*(float *)((a4 + 0xB00))) * u73);
                u79 = u62;
                u83 = u65;
                u84 = (-(u74 * 118.849998f));
            }
            u88 = (-u83);
            if (!(0.0f > u83)) {
                u88 = u83;
            }
            u96 = u83;
            if (u88 > 18.5174999f) {
                u96 = ((float)((u83 > 0.0f) - (0.0f > u83)) * 18.5174999f);
            }
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B)) = (*(int *)((((*(int *)((a4 + 0xC58))) << 2) + 0x8C159F50)));
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u96;
            *(float *)((a4 + 0xA3C)) = u84;
            u107 = u79;
        }
        u230 = u107;
    } else {
        if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) != 1) {
        } else {
            u121 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
            u126 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            if (((u121 > 0.0f) - (0.0f > u121)) == ((u126 > 0.0f) - (0.0f > u126))) {
                u135 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                u136 = *(float *)((a4 + 0xAE8));
                if ((((u126 > 0.0f) - (0.0f > u126)) == (((u135 - u136) > 0.0f) - (0.0f > (u135 - u136)))) && (t141 = *(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118)), (int)t141 < (int)0x19)) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x2;
                }
            }
            if ((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0))) == 2) {
                u153 = *(float *)((a4 + 0xAE8));
                u155 = (-u153);
                if (!(0.0f > u153)) {
                    u155 = (*(float *)((a4 + 0xAE8)));
                }
                if (u155 > 29.1500015f) {
                    u158 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                    u163 = *(float *)((a4 + 0xAE8));
                    if (((u158 > 0.0f) - (0.0f > u158)) == ((u163 > 0.0f) - (0.0f > u163))) {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
                    }
                }
            }
            u184 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u185 = *(float *)0x8C291F44;
            t188 = ((u185 - u184) > 0.0f) - (0.0f > (u185 - u184));
            u190 = *(float *)0x8C291F38;
            u191 = *(float *)0x8C291F50;
            t194 = (u191 > 0.0f) - (0.0f > u191);
            t203 = 0x1;
            if (((u184 - u190) + (float)((t194 << 2) + t194)) > 0.0f) {
            } else {
                t198 = (u191 > 0.0f) - (0.0f > u191);
                t200 = 0x0;
                if (0.0f > ((u184 - u190) + (float)((t198 << 2) + t198))) {
                    t200 = 0xFFFFFFFF;
                }
                t203 = t200;
            }
            if (t188 != t203) {
            } else {
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x1;
            }
        }
    }
    return u230;
}
