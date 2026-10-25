/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int cpuAimPointSet(int, int, float, float);
int hudRankIconPut(int, Stk3);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int motionBackup(int);
int motionChange(int, int, int, int, int, float);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int nlArcTan(float);
float nlCos(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAY(int);
float nlSin(int);
float nlTan(int);
int nlTranslate(float, float, float);
int nl_requset_PixelClipping(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int serveGetReceiver(void);
int serveGetServer(void);
int sprListPutGrad(int, int, int, int, Stk3, float, float);
int sprPutAt(int, Stk3);
int staffMorphReset(void);
int standBgDraw(int, int, int, int);
int standPanelDraw(int, int, int, int, Stk3);
int standTableDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int nlPerspective(int a4, float f4, float f5, float f6);
int rankDrawGlyph(int a4, int a5, int a6);
int stageSegaCourtDraw(int a4);
int standDraw(int a4, int a5);
int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7);
int nlSetPixelClipping(float f4, float f5, float f6, float f7);
void syCacheOCBI(int a4, int a5);
void syCacheOCBP(int a4, int a5);
int ballBoyRecall(int a4);
int cpuDblTacticPos(int a4, int a5);

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    int t4;
    float t5;
    int t7;
    int t9;
    int t20;
    float t16;
    float t24;
    float u25;
    float u26;
    float u33;
    float u34;
    float u35;
    float t37;
    float u40;
    float t41;
    float t43;
    float t44;
    float t45;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t1);
    u2 = *(float *)(((int)stk + 12));
    if ((*(float *)0x8C1DCA1C) != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = nlTan(t4);
        t7 = nlArcTan((t5 * ((*(float *)0x8C1DCA1C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t7)));
    } else {
        t9 = nlArcTan((u2 / (1.0f / t1)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t9)));
    }
    t20 = (t0 >> 1);
    if ((*(float *)0x8C1DCA20) != 0.0f) {
        t16 = nlTan((t0 >> 1));
        t20 = (nlArcTan((t16 * ((*(float *)0x8C1DCA20) + 1.0f))));
    }
    t24 = nlCos(t20);
    *(float *)0x8C1DCA1C = 0.0f;
    *(float *)0x8C1DCA20 = 0.0f;
    u25 = *(float *)(((int)stk + 4));
    u26 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u25 / u26);
    *(float *)0x8C1DC9EC = ((((u25 / u26) * (*(float *)(((int)stk + 24))))) * 0.5f);
    *(float *)0x8C1DC9F0 = ((((*(float *)(((int)stk + 4))) * (1.0f / t24))) * 0.5f);
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u33 = *(float *)0x8C1DC9F0;
    u34 = *(float *)0x8C1DCA28;
    *(float *)0x8C450B14 = (u34 * u33);
    u35 = *(float *)0x8C450B10;
    if (u35 > (u34 * u33)) {
        *(float *)0x8C1DC9F4 = u35;
    } else {
        *(float *)0x8C1DC9F4 = (u34 * u33);
    }
    t37 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 16)) = (float)(nlArcTan((t37 * (*(float *)(((int)stk + 12))))));
    *(float *)0x8C450AE4 = 0.0f;
    *(float *)0x8C450AD4 = 0.0f;
    *(float *)0x8C450B00 = 0.0f;
    *(float *)0x8C450AF0 = 0.0f;
    u40 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u40;
    t41 = nlCos((int)u40);
    *(float *)0x8C450AD0 = t41;
    *(float *)0x8C450AE0 = (-t41);
    t43 = nlSin((*(int *)(((int)stk + 8))));
    *(float *)0x8C450AE8 = t43;
    *(float *)0x8C450AD8 = t43;
    t44 = nlCos((t0 >> 1));
    *(float *)0x8C450AF4 = t44;
    *(float *)0x8C450B04 = (-t44);
    t45 = nlSin((t0 >> 1));
    *(float *)0x8C450B08 = t45;
    *(float *)0x8C450AF8 = t45;
    *(float *)0x8C450AEC = 0.0f;
    *(float *)0x8C450ADC = 0.0f;
    *(float *)0x8C450B0C = 0.0f;
    *(float *)0x8C450AFC = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)(((int)stk + 84)) = ((((f5 * f6)) * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0x8C458E3C = f5;
    *(float *)0x8C458E40 = f6;
    *(float *)0x8C458E44 = (1.0f / f5);
    *(float *)0x8C458DBC = f5;
    *(float *)0x8C458DA4 = (-f5);
    *(float *)0x8C458DC0 = f6;
    *(float *)0x8C458DB8 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}

int rankDrawGlyph(int a4, int a5, int a6)
{
    int t17;
    int t98;
    int stk[41];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C0E0E84:;
    R13 = ((0x94 + ((int)stk + 16)));
    R14 = ((signed char)R4);
    F14 = (1.0f);
    F15 = (24.0f);
    if (((int)(signed char)R4 < (int)0x41)) goto L_8C0E0EB8;
    goto L_8C0E0EAA;
    L_8C0E0EAA:;
    R1 = (0x59);
    if (((int)R14 > (int)0x59)) goto L_8C0E0EB8;
    goto L_8C0E0EB0;
    L_8C0E0EB0:;
    R4 = ((R14 - 65));
    R6 = (0x0);
    goto L_8C0E0F26;
    L_8C0E0F26:;
    R10 = ((*(int *)((R5 + 0x4))));
    R11 = ((*(int *)((R5 + 0x0))));
    goto L_8C0E0F82;
    L_8C0E0F82:;
    R0 = (0x8C0E0FE0);
    F6 = (128.0f);
    if ((R6 == 0)) goto L_8C0E0F90;
    goto L_8C0E0F8A;
    L_8C0E0F8A:;
    if (((int)R4 > (int)0xE)) goto L_8C0E0FC2;
    goto L_8C0E0F90;
    L_8C0E0F90:;
    t17 = (int)((int)R4 % (int)0x5);
    F4 = ((((float)t17 * F15) / F6));
    F5 = ((F14 - (((float)((int)((int)R4 / (int)0x5)) * F15) / F6)));
    F7 = (((((float)t17 * F15) / F6) + 0.1875f));
    goto L_8C0E1028;
    L_8C0E1028:;
    *(float *)((((int)stk + 16) + 0x0)) = (*(float *)((R13 + 0x0)));
    *(float *)((((int)stk + 16) + 0x4)) = (*(float *)((R13 + 0x4)));
    *(float *)((((int)stk + 16) + 0x8)) = (*(float *)((R13 + 0x8)));
    *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)((R13 + 0x0))) + F15);
    *(float *)(((((int)stk + 16) + 0x1C) + 0x4)) = (*(float *)((R13 + 0x4)));
    *(float *)(((((int)stk + 16) + 0x1C) + 0x8)) = (*(float *)((R13 + 0x8)));
    *(float *)(((((int)stk + 16) + 0x38) + 0x0)) = (*(float *)((R13 + 0x0)));
    *(float *)(((((int)stk + 16) + 0x38) + 0x4)) = ((*(float *)((R13 + 0x4))) + F15);
    *(float *)(((((int)stk + 16) + 0x38) + 0x8)) = (*(float *)((R13 + 0x8)));
    *(float *)(((((int)stk + 16) + 0x54) + 0x0)) = ((*(float *)((R13 + 0x0))) + F15);
    *(float *)(((((int)stk + 16) + 0x54) + 0x4)) = ((*(float *)((R13 + 0x4))) + F15);
    *(float *)(((((int)stk + 16) + 0x54) + 0x8)) = (*(float *)((R13 + 0x8)));
    *(float *)((((int)stk + 16) + 0xC)) = F4;
    *(float *)((((int)stk + 16) + 0x10)) = F5;
    *(float *)(((((int)stk + 16) + 0x1C) + 0xC)) = F7;
    *(float *)(((((int)stk + 16) + 0x1C) + 0x10)) = F5;
    *(float *)(((((int)stk + 16) + 0x38) + 0xC)) = F4;
    *(float *)(((((int)stk + 16) + 0x38) + 0x10)) = (F5 + -0.1875f);
    *(float *)(((((int)stk + 16) + 0x54) + 0xC)) = F7;
    *(float *)(((((int)stk + 16) + 0x54) + 0x10)) = (F5 + -0.1875f);
    *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x14)) = R11;
    *(unsigned int *)((((int)stk + 16) + 0x14)) = R11;
    *(unsigned int *)(((((int)stk + 16) + 0x54) + 0x14)) = R10;
    *(unsigned int *)(((((int)stk + 16) + 0x38) + 0x14)) = R10;
    *(unsigned int *)(((((int)stk + 16) + 0x54) + 0x18)) = 0x0;
    *(unsigned int *)(((((int)stk + 16) + 0x38) + 0x18)) = 0x0;
    *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x18)) = 0x0;
    *(unsigned int *)((((int)stk + 16) + 0x18)) = 0x0;
    R14 = (((int)stk + 16));
    R4 = (((int)stk + 16));
    if ((R6 != 0)) goto L_8C0E10CC;
    goto L_8C0E10BE;
    L_8C0E10BE:;
    R0 = ((nlDispStripTexOfsTrnsl(0x4, R14, 0x9E)));
    goto L_8C0E10DC;
    L_8C0E10DC:;
    return R0;
    L_8C0E10CC:;
    R0 = (R6);
    if ((R6 != 1)) goto L_8C0E10DC;
    goto L_8C0E10D2;
    L_8C0E10D2:;
    R0 = ((nlDispStripTexOfsTrnsl(0x4, R14, 0x9F)));
    goto L_8C0E10DC;
    L_8C0E0FC2:;
    R0 = ((R4 - 15));
    R5 = ((R4 - 15));
    if (((int)(R4 - 15) < 0)) goto L_8C0E0FF0;
    goto L_8C0E0FCC;
    L_8C0E0FCC:;
    R0 = ((R0 & 0x3));
    goto L_8C0E0FFA;
    L_8C0E0FFA:;
    F4 = ((((float)R0 * 30.0f) / F6));
    F7 = (((((float)R0 * 30.0f) / F6) + 0.234375f));
    if (((int)R5 >= 0)) goto L_8C0E1016;
    goto L_8C0E1014;
    L_8C0E1014:;
    R5 = ((R5 + 0x3));
    goto L_8C0E1016;
    L_8C0E1016:;
    F1 = ((((float)(((R5 >> 1) >> 1) + 0x3) * F15) / F6));
    F5 = ((F14 - (((float)(((R5 >> 1) >> 1) + 0x3) * F15) / F6)));
    goto L_8C0E1028;
    L_8C0E0FF0:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_8C0E0FFA;
    L_8C0E0EB8:;
    R11 = ((R5 + 0x8));
    R12 = ((R5 + 0xC));
    R7 = (0x1);
    if (((int)R14 < (int)0x30)) goto L_8C0E0ED4;
    goto L_8C0E0EC8;
    L_8C0E0EC8:;
    R1 = (0x39);
    if (((int)R14 > (int)0x39)) goto L_8C0E0ED4;
    goto L_8C0E0ECE;
    L_8C0E0ECE:;
    R4 = ((R14 - 43));
    goto L_8C0E0F32;
    L_8C0E0F32:;
    R10 = ((*(int *)((R12 + 0x0))));
    R11 = ((*(int *)((R11 + 0x0))));
    R6 = (R7);
    goto L_8C0E0F82;
    L_8C0E0ED4:;
    R0 = (R14);
    if ((R14 != 90)) goto L_8C0E0EDE;
    goto L_8C0E0EDA;
    L_8C0E0EDA:;
    R4 = (0x0);
    goto L_8C0E0F24;
    L_8C0E0F24:;
    R6 = (R7);
    goto L_8C0E0F26;
    L_8C0E0EDE:;
    if ((R0 != 46)) goto L_8C0E0EE6;
    goto L_8C0E0EE2;
    L_8C0E0EE2:;
    R4 = (R7);
    goto L_8C0E0F24;
    L_8C0E0EE6:;
    R0 = (R14);
    if ((R14 != 38)) goto L_8C0E0EF0;
    goto L_8C0E0EEC;
    L_8C0E0EEC:;
    R4 = (0x2);
    goto L_8C0E0F24;
    L_8C0E0EF0:;
    if ((R0 != 36)) goto L_8C0E0EF8;
    goto L_8C0E0EF4;
    L_8C0E0EF4:;
    R4 = (0x3);
    goto L_8C0E0F32;
    L_8C0E0EF8:;
    R0 = (R14);
    if ((R14 != 115)) goto L_8C0E0F02;
    goto L_8C0E0EFE;
    L_8C0E0EFE:;
    R4 = (0xF);
    goto L_8C0E0F32;
    L_8C0E0F02:;
    if ((R0 != 110)) goto L_8C0E0F0A;
    goto L_8C0E0F06;
    L_8C0E0F06:;
    R4 = (0x10);
    goto L_8C0E0F32;
    L_8C0E0F0A:;
    R0 = (R14);
    if ((R14 != 114)) goto L_8C0E0F14;
    goto L_8C0E0F10;
    L_8C0E0F10:;
    R4 = (0x11);
    goto L_8C0E0F32;
    L_8C0E0F14:;
    if ((R0 != 116)) goto L_8C0E0F1C;
    goto L_8C0E0F18;
    L_8C0E0F18:;
    R4 = (0x12);
    goto L_8C0E0F32;
    L_8C0E0F1C:;
    R0 = (R14);
    if ((R14 != 60)) goto L_8C0E0F2C;
    goto L_8C0E0F22;
    L_8C0E0F22:;
    R4 = (0x13);
    goto L_8C0E0F24;
    L_8C0E0F2C:;
    if ((R0 != 101)) goto L_8C0E0F40;
    goto L_8C0E0F30;
    L_8C0E0F30:;
    R4 = (0x14);
    goto L_8C0E0F32;
    L_8C0E0F40:;
    R0 = (R14);
    if ((R14 != 107)) goto L_8C0E0F4A;
    goto L_8C0E0F46;
    L_8C0E0F46:;
    goto L_8C0E10DC;
    L_8C0E0F4A:;
    if ((R14 != 106)) goto L_8C0E0F82;
    goto L_8C0E0F50;
    L_8C0E0F50:;
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) - 6.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R13); }
    t98 = sprListPutGrad(0x8C1D7CD0, 0x2, (*(int *)((R11 + 0x0))), (*(int *)((R12 + 0x0))), *(Stk3 *)(R13), F14, F14);
    *(float *)((R13 + 0x0)) = ((*(float *)((R13 + 0x0))) + 6.0f);
    R0 = (t98);
    goto L_8C0E10DC;
}

int stageSegaCourtDraw(int a4)
{
    int t117;
    int t5;
    int t85;

    if ((*(int *)0x8C287ADC) != 2) {
        nlObjPut(0xC8EAB70);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t5 = (*(int *)0x8C18D2A0);
        } else {
            t5 = (*(int *)0x8C18D29C);
        }
        t117 = (nlObjPut(t5));
    } else {
        nlObjPut(0xC8C6830);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18D288));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D290));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t85 = 0x8C18D298;
        } else {
            nlObjPut((*(int *)0x8C18D284));
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, -196.300003f);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(-40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(40.5999985f, 0.0f, 196.300003f);
            nlRotateAY(0x8000);
            nlObjPut((*(int *)0x8C18D28C));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -62.9000015f);
            t85 = 0x8C18D294;
        }
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, -118.699997f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 62.9000015f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 118.699997f);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, 118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t85 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, -118.699997f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t85 + 0x0))));
        t117 = (nlPopMatrix(0x1));
    }
    return t117;
}

int standDraw(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t30;
    int t0;
    int t1;
    int t11;
    int t8;
    int t45;
    int t40;
    int t41;
    int stk[50];

    t2 = 0x8C185198;
    t3 = (((int)stk + 32) + 0x4);
    t4 = 0x0;
    t5 = (((int)stk + 32) + 0x4);
    for (;;) {
        if (a4 == 0) {
            *(unsigned int *)(((((int)stk + 32) + 0x4) + (t4 << 2))) = 0x1;
            t11 = t1;
        } else {
            t0 = (*(int *)((t2 + 0x0)));
            t1 = 0x8C0F7BAC;
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t0;
            t7 = (int)((int)t0 % (int)0x1A);
            t0 = t7;
            *(unsigned int *)((t2 + 0x0)) = t7;
            if ((int)t0 < (int)0x14) {
                *(unsigned int *)((t5 + 0x0)) = 0x1;
                t8 = 0x8C0F7BAC;
            } else {
                t1 = 0x0;
                *(unsigned int *)((t3 + 0x0)) = t1;
                t8 = t1;
            }
            t11 = t8;
        }
        t1 = t11;
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x4);
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        if ((int)t4 >= (int)0x5) {
            break;
        }
    }
    standBgDraw(t2, 0x1, t3, t4);
    standTableDraw(a4, 0x0, a5, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x2C), 98.0f, 20.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F680, *(Stk3 *)((((int)stk + 32) + 0x2C)));
    *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 100.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F6D0, *(Stk3 *)((((int)stk + 32) + 0x2C)));
    if ((*(int *)0x8C287ADC) == 2) {
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x2C), 312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33F720, *(Stk3 *)((((int)stk + 32) + 0x2C)));
    } else {
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x2C), 312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33FB30, *(Stk3 *)((((int)stk + 32) + 0x2C)));
        *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 147.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33E7D0, *(Stk3 *)((((int)stk + 32) + 0x2C)));
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x2C), 42.0f, 410.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    hudRankIconPut(a4, *(Stk3 *)((((int)stk + 32) + 0x2C)));
    t30 = 0x0;
    for (;;) {
        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x2C), 218.0f, (float)(0x162 - (((t30 << 2) << 2) << 2)), 0.100000001f);
        *(unsigned int *)(((int)stk + 32)) = ((t30 << 2) + (((int)stk + 32) + 0x4));
        if ((int)t30 < (int)a4) {
            *(volatile int *)((((t30 << 2) + (((int)stk + 32) + 0x4)) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
            t45 = (standPanelDraw(t30, 0x0, 0x1, 0x1, *(Stk3 *)((((int)stk + 32) + 0x2C))));
        } else {
            if (t30 == a4) {
                *(volatile int *)((((t30 << 2) + (((int)stk + 32) + 0x4)) + 0x0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t40 = 0x1;
                t41 = 0x1;
            } else {
                *(volatile int *)((((t30 << 2) + (((int)stk + 32) + 0x4)) + 0x0));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t40 = 0x0;
                t41 = 0x0;
            }
            t45 = (standPanelDraw(t30, t40, t41, 0x0, *(Stk3 *)((((int)stk + 32) + 0x2C))));
        }
        t30 = (t30 + 0x1);
        if ((int)t30 >= (int)0x5) {
            break;
        }
    }
    return t45;
}

int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u4;
    float u7;
    float u9;
    int t38;
    float u11;
    float u12;
    float u15;
    float u17;
    int t23;
    float u52;
    float u55;
    float u57;
    int t86;
    float u59;
    float u60;
    float u63;
    float u65;
    int t71;
    float u100;
    float u101;
    float u104;
    float u106;
    float u110;
    float u111;
    int t114;
    int t112;
    float u127;
    float u128;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t2 = *(int *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    t3 = *(int *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xB5C));
    u4 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u7 = ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u9 = ((-u4) - (u7 * 0.800000012f));
    if (!(0.0f > (u4 + (u7 * 0.800000012f)))) {
        u9 = (u4 + (u7 * 0.800000012f));
    }
    t38 = a5;
    if (47.5400009f > u9) {
        u11 = *(float *)((a4 + 0xB9C));
        u12 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u15 = ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u17 = (((-u11) + u12) + (u15 * 0.800000012f));
        if (!(0.0f > ((u11 - u12) - (u15 * 0.800000012f)))) {
            u17 = ((u11 - u12) - (u15 * 0.800000012f));
        }
        t23 = a5;
        if (20.0f > u17) {
            cpuAimPointSet(a5, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t23 = (a5 + 0x1);
        }
        t38 = t23;
    }
    u52 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAF0));
    u55 = ((*(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u57 = ((-u52) - (u55 * 0.800000012f));
    if (!(0.0f > (u52 + (u55 * 0.800000012f)))) {
        u57 = (u52 + (u55 * 0.800000012f));
    }
    t86 = t38;
    if (47.5400009f > u57) {
        u59 = *(float *)((a4 + 0xB9C));
        u60 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
        u63 = ((*(float *)((((t3 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        u65 = (((-u59) + u60) + (u63 * 0.800000012f));
        if (!(0.0f > ((u59 - u60) - (u63 * 0.800000012f)))) {
            u65 = ((u59 - u60) - (u63 * 0.800000012f));
        }
        t71 = t38;
        if (20.0f > u65) {
            cpuAimPointSet(t38, 0x2, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t71 = (t38 + 0x1);
        }
        t86 = t71;
    }
    u100 = *(float *)((a4 + 0xB9C));
    u101 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u104 = ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u106 = (((-u100) - u101) - (u104 * 0.800000012f));
    if (!(0.0f > ((u100 + u101) + (u104 * 0.800000012f)))) {
        u106 = ((u100 + u101) + (u104 * 0.800000012f));
    }
    if (15.0f > u106) {
        u127 = (*(float *)((a4 + 0xB9C)));
        u128 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
    } else {
        u110 = *(float *)((a4 + 0xB00));
        u111 = *(float *)((a4 + 0xB9C));
        t114 = 0x1;
        if (u111 > 0.0f) {
        } else {
            t112 = 0x0;
            if (0.0f > u111) {
                t112 = 0xFFFFFFFF;
            }
            t114 = t112;
        }
        u127 = ((((float)t114 * (nlRandom()))) * 54.8499985f);
        u128 = (u110 * 11.8850002f);
    }
    cpuAimPointSet(t86, 0x1, u127, u128);
    return (t86 + 0x1);
}

int nlSetPixelClipping(float f4, float f5, float f6, float f7)
{
    int t0;
    int t3;
    int t1;
    int t7;
    int t5;
    int t9;
    int t12;
    int t10;
    int t16;
    int t14;
    int t20;
    float u34;
    float u31;
    float u28;
    float u25;
    float u22;
    int t41;
    int t49;
    int t50;
    int t44;
    int t45;
    int t52;
    int t53;
    int t59;
    int t60;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;

    t0 = *(short *)0x8C458DD8;
    t3 = 0x0;
    if ((int)(int)f4 < 0) {
    } else {
        t1 = (int)f4;
        if ((int)(int)f4 >= (int)t0) {
            t1 = t0;
        }
        t3 = t1;
    }
    t7 = 0x0;
    if ((int)(int)(f4 + f6) < 0) {
    } else {
        t5 = (int)(f4 + f6);
        if ((int)(int)(f4 + f6) >= (int)t0) {
            t5 = t0;
        }
        t7 = t5;
    }
    t9 = *(short *)0x8C458DDA;
    t12 = 0x0;
    if ((int)(int)f5 < 0) {
    } else {
        t10 = (int)f5;
        if ((int)(int)f5 >= (int)t9) {
            t10 = t9;
        }
        t12 = t10;
    }
    t16 = 0x0;
    if ((int)(int)(f5 + f7) < 0) {
    } else {
        t14 = (int)(f5 + f7);
        if ((int)(int)(f5 + f7) >= (int)t9) {
            t14 = t9;
        }
        t16 = t14;
    }
    if ((*(int *)0x8C424470) == 1) {
        t20 = *(int *)0x8C1DC88C;
        u34 = 1.03299999f;
        if (t20 != 0) {
            u31 = 1.06599998f;
            if (t20 != 1) {
                u28 = 1.10000002f;
                if (t20 != 2) {
                    u25 = 1.13300002f;
                    if (t20 != 3) {
                        u22 = 1.16600001f;
                        if (t20 != 4) {
                            u22 = 1.0f;
                        }
                        u25 = u22;
                    }
                    u28 = u25;
                }
                u31 = u28;
            }
            u34 = u31;
        }
        nl_requset_PixelClipping((float)t3, ((float)t12 * u34), (float)t7, ((float)t16 * u34));
    } else {
        nl_requset_PixelClipping((float)t3, (float)t12, (float)t7, (float)t16);
    }
    t41 = *(short *)0x8C458DDA;
    if ((*(short *)0x8C458DDE) == 0) {
        t49 = ((int)t16 >> 5);
        t50 = ((int)t12 >> 5);
        if ((*(int *)0x8C42446C) == 0) {
            t44 = 0xFFFFFFFB;
            t45 = (t41 + 0x1F);
            if ((int)(t41 << 1) <= (int)0x1E0) {
                t44 = 0xFFFFFFFC;
                t45 = (t41 + 0xF);
            }
            t49 = ((((int)t44 >= 0) ? (t45 << (t44 & 31)) : ((-(int)t44 & 31) ? ((int)t45 >> (-(int)t44 & 31)) : ((int)t45 >> 31))) - 1);
            t50 = 0x0;
        }
        *(unsigned int *)0x8C1DC9F8 = ((int)t3 >> 5);
        *(unsigned int *)0x8C1DC9FC = ((int)t7 >> 5);
        t59 = t49;
        t60 = t50;
    } else {
        t52 = 0xFFFFFFFB;
        t53 = (t41 + 0x1F);
        if ((int)(t41 << 1) <= (int)0x1E0) {
            t52 = 0xFFFFFFFC;
            t53 = (t41 + 0xF);
        }
        *(unsigned int *)0x8C1DC9F8 = ((int)t3 >> 4);
        *(unsigned int *)0x8C1DC9FC = ((int)t7 >> 4);
        t59 = ((((int)t52 >= 0) ? (t53 << (t52 & 31)) : ((-(int)t52 & 31) ? ((int)t53 >> (-(int)t52 & 31)) : ((int)t53 >> 31))) - 1);
        t60 = 0x0;
    }
    *(unsigned int *)0x8C1DCA00 = t60;
    *(unsigned int *)0x8C1DCA04 = t59;
    if (((*(int *)0x8C1DCA08) == (*(int *)0x8C1DC9F8)) && ((t64 = *(int *)0x8C1DC9FC, t65 = *(int *)0x8C1DCA0C, t65 == t64) && ((t66 = *(int *)0x8C1DCA00, t67 = *(int *)0x8C1DCA10, t67 == t66) && (t68 = *(int *)0x8C1DCA04, t69 = *(int *)0x8C1DCA14, t69 == t68)))) {
        *(unsigned int *)0x8C1DCA18 = 0x0;
        t70 = 0x8C1DCA08;
    } else {
        *(unsigned int *)0x8C1DCA18 = 0x1;
        t70 = 0x1;
    }
    return t70;
}

void syCacheOCBI(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1E7A80))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

void syCacheOCBP(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC1E7CD0))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

int ballBoyRecall(int a4)
{
    int t0;
    int t2;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float u12;
    int t24;
    int t27;
    int t28;
    float u42;
    float u47;
    float u56;
    float u57;
    int t66;
    int t78;
    int t74;
    int t75;
    int t52;
    int t44;
    int t49;
    int stk[15];

    *(unsigned int *)(((int)stk + 20)) = a4;
    t0 = *(int *)0x8C1891E8;
    if ((int)t0 > (int)0x9) {
    } else {
        t2 = t0;
        if (t0 == 2) {
            t2 = (staffMorphReset());
        }
        *(unsigned int *)(((int)stk + 16)) = 0x8C2873D4;
        *(unsigned int *)(((int)stk + 12)) = 0x8C38B76C;
        t7 = t2;
        t8 = 0x8C38B76C;
        t9 = 0x8C2873D4;
        t10 = 0x0;
        for (;;) {
            if ((int)t10 < (int)0x2) {
                t7 = 0x5FC;
                t8 = 0x8C014C34;
                t9 = (t10 * 0x67C);
                t9 = (t9 + 0x8C37EA84);
                *(unsigned int *)(((int)stk + 8)) = t9;
                *(float *)((t9 + t7)) = 0.0f;
                t7 = 0x4;
                t9 = 0x5E4;
                t11 = *(int *)(((int)stk + 8));
                u12 = *(float *)(((t11 + t9) + t7));
                t7 = 0x10;
                *(float *)(((t11 + t9) + t7)) = u12;
                t7 = (motionBackup(((*(int *)(((int)stk + 8))) + 0x4)));
                t7 = 0x5DC;
                t9 = (*(int *)(((int)stk + 8)));
                t8 = (*(int *)((t9 + t7)));
                if (t8 == 0) {
                    t74 = t8;
                    t75 = t9;
                } else {
                    t9 = (t10 * 0x67C);
                    t9 = (t9 + 0x8C37EA84);
                    t8 = (*(int *)((t9 + t7)));
                    if ((int)t8 >= (int)0x4) {
                        t8 = 0x5B0;
                        t9 = 0x8C0F7DAC;
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 12);
                        t8 = (t8 + ((t10 * 0x67C) + 0x8C37EA84));
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x5A4 + ((t10 * 0x67C) + 0x8C37EA84))) = *(struct mv3 *)(t8); }
                        t7 = 0x5A4;
                        if (0.0f > (*(float *)((((t10 * 0x67C) + 0x8C37EA84) + t7)))) {
                            t7 = 0x5BC;
                            t8 = (t10 * 0x67C);
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0x4000;
                        } else {
                            t8 = (t10 * 0x67C);
                            t7 = 0x5BC;
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0xFFFFC000;
                        }
                        t9 = (*(int *)(((int)stk + 16)));
                        t8 = (*(int *)((t9 + 0x0)));
                        t24 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x67C) + 0x8C37EA84);
                        t7 = (motionChange((((t10 * 0x67C) + 0x8C37EA84) + 0x4), t24, 0x0, 0x0, (t8), 0.0f));
                        t7 = 0x5D4;
                        t8 = 0x0;
                        t9 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t9 + t7)) = t8;
                    } else {
                        t9 = 0x8C38B780;
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 12);
                        *(unsigned int *)((((t10 * 0x67C) + 0x8C37EA84) + t7)) = 0x0;
                        t7 = (t7 - 20);
                        t27 = *(short *)((((t10 * 0x67C) + 0x8C37EA84) + t7));
                        t28 = *(int *)((t9 + 0x0));
                        if (((int)(unsigned short)t27 > (int)0x8000) && ((int)(unsigned short)t27 < (int)0xFFFF)) {
                            t7 = 0x8C0C8400;
                            t9 = (*(int *)(((int)stk + 20)));
                            u42 = *(float *)((t7 + 0x0));
                            t7 = 0xC;
                            if (!((*(float *)((t9 + t7))) > u42)) {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t44 = (-t28);
                            } else {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t44 = t28;
                            }
                            t52 = t44;
                        } else {
                            t7 = 0x8C0C8404;
                            t9 = (*(int *)(((int)stk + 20)));
                            u47 = *(float *)((t7 + 0x0));
                            t7 = 0xC;
                            if (u47 > (*(float *)((t9 + t7)))) {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t49 = (-t28);
                            } else {
                                t8 = (t10 * 0x67C);
                                t8 = (t8 + 0x8C37EA84);
                                t49 = t28;
                            }
                            t52 = t49;
                        }
                        t7 = 0x5A4;
                        *(float *)((t8 + t7)) = (float)t52;
                        if (t10 == 0) {
                            t7 = 0x8C0C8408;
                            u56 = *(float *)((t7 + 0x0));
                            t7 = 0x5AC;
                            t9 = (t10 * 0x67C);
                            t9 = (t9 + 0x8C37EA84);
                            *(float *)((t9 + t7)) = u56;
                        } else {
                            t7 = 0x8C0C84A4;
                            u57 = *(float *)((t7 + 0x0));
                            t7 = 0x5AC;
                            t9 = (t10 * 0x67C);
                            t9 = (t9 + 0x8C37EA84);
                            *(float *)((t9 + t7)) = u57;
                        }
                        t7 = 0x5A4;
                        t9 = (t10 * 0x67C);
                        t9 = (t9 + 0x8C37EA84);
                        if (0.0f > (*(float *)((t9 + t7)))) {
                            t7 = 0x5BC;
                            t8 = (t10 * 0x67C);
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0x4000;
                        } else {
                            t8 = (t10 * 0x67C);
                            t7 = 0x5BC;
                            t8 = (t8 + 0x8C37EA84);
                            *(unsigned short *)((t8 + t7)) = 0xFFFFC000;
                        }
                        t9 = (*(int *)(((int)stk + 16)));
                        t8 = (*(int *)((t9 + 0x0)));
                        t66 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = ((t10 * 0x67C) + 0x8C37EA84);
                        t7 = (motionChange((((t10 * 0x67C) + 0x8C37EA84) + 0x4), t66, 0x0, 0x0, (t8), 0.0f));
                        t7 = 0x5D4;
                        t8 = 0x0;
                        t9 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t9 + t7)) = t8;
                    }
                    t9 = 0x8C015B7E;
                    t7 = (motionSetFrame(((*(int *)(((int)stk + 8))) + 0x4), 0.0f));
                    t9 = 0x8C015B72;
                    t7 = (motionSetSpeed(((*(int *)(((int)stk + 8))) + 0x4), 0.0f));
                }
                t10 = (t10 + 0x1);
                t8 = t74;
                t9 = t75;
                continue;
            }
            break;
        }
        t78 = t7;
    }
    return t78;
}

int cpuDblTacticPos(int a4, int a5)
{
    int t5;
    int t7;
    int t9;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t20;
    int t28;
    int t29;
    int t69;
    int t86;
    int t24;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t5 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t7 = (int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u));
        t9 = ((~(((~((t7 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t7 >> 1) + 0x2) >= 0) {
            t9 = (((t7 >> 1) + 0x2) & 0x1);
        }
        t24 = ((((-t9) + 0x1) << 1) - 1);
    } else {
        t11 = *(int *)0x8C287B10;
        t12 = *(int *)0x8C287B14;
        t13 = ((~(((~((t11 + t12) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t11 + t12) + 0x2) >= 0) {
            t13 = (((t11 + t12) + 0x2) & 0x1);
        }
        t15 = *(int *)0x8C287B00;
        t16 = *(int *)0x8C287B04;
        t18 = (int)((unsigned int)((int)((unsigned int)(t15 + t16) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t15 + t16))) ? 1u : 0u));
        t20 = ((~(((~(t18 >> 1)) + 0x1) & 0x1)) + 0x1);
        if ((int)(t18 >> 1) >= 0) {
            t20 = ((t18 >> 1) & 0x1);
        }
        t24 = (((-(t13 << 1)) + 0x1) * ((-(t20 << 1)) + 0x1));
    }
    t28 = serveGetServer();
    t29 = ((~(((~t28) + 0x1) & 0x1)) + 0x1);
    if ((int)t28 >= 0) {
        t29 = (t28 & 0x1);
    }
    if (t29 == 0) {
        if ((*(int *)(((((*(int *)((((t28 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t28 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t24);
        }
        if ((*(int *)(((((*(int *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0) {
        } else {
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t24);
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D660)));
        }
    } else {
        if ((*(int *)(((((*(int *)((((t28 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((t28 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D654) * (float)t24);
        }
        if ((*(int *)(((((*(int *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D65C) * (float)t24);
            *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D660)));
        }
    }
    t69 = serveGetReceiver();
    if ((*(int *)(((((*(int *)((((t69 * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D664) * (float)t24);
        *(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((t69 * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D668)));
    }
    t86 = 0xB5C;
    if ((*(int *)(((((*(int *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        *(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)) = ((*(float *)0x8C10D66C) * (float)t24);
        *(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)) = (-((*(float *)((((((t69 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB00))) * (*(float *)0x8C10D670)));
        t86 = 0xAF0;
    }
    return t86;
}
