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


int windowBgDraw(int a4, int a5, float f4)
{
    register int t51;
    register float u43;
    register float u45;
    int stk[75];
    float R1068;
    float R1072;
    float R1076;
    int R1080;
    float R1084;
    float R1088;
    float R1300;
    float R1304;
    float R1308;

    R1068 = *(float *)((int)stk + 68);
    R1072 = *(float *)((int)stk + 72);
    R1076 = *(float *)((int)stk + 76);
    R1080 = *(int *)((int)stk + 80);
    R1084 = *(float *)((int)stk + 84);
    R1088 = *(float *)((int)stk + 88);
    R1300 = *(float *)((int)stk + 300);
    R1304 = *(float *)((int)stk + 304);
    R1308 = *(float *)((int)stk + 308);

    t51 = 0xFFFFFF48;
    if ((int)a4 < 0) {
    } else {
        R1080 = (*(int *)(((a4 << 2) + 0x8C10F5B0)));
        R1088 = 0.0f;
        R1084 = 93.0f;
        R1068 = (R1308);
        R1072 = (R1304);
        R1076 = (R1300);
        if (a5 == 1) {
            R1088 = ((1.0f - f4) * 93.0f);
            *(Stk3 *)((((int)stk + 68) + 0x3C)) = vecMake(((f4 * 93.0f) + (R1076)), (R1072), (R1068));
            *(Stk3 *)((((int)stk + 68) + 0x30)) = vecMake((R1300), (R1304), (R1308));
            *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(((f4 * 93.0f) + (R1300)), (120.0f + (R1304)), (R1308));
            *(Stk3 *)((((int)stk + 68) + 0x18)) = vecMake((R1300), (120.0f + (R1304)), (R1308));
        } else {
            if (a5 == 0) {
                R1084 = (f4 * 93.0f);
                *(Stk3 *)((((int)stk + 68) + 0x3C)) = vecMake(((R1076) + 93.0f), (R1072), (R1068));
                *(Stk3 *)((((int)stk + 68) + 0x30)) = vecMake(((R1300) + ((1.0f - f4) * 93.0f)), (R1304), (R1308));
                *(Stk3 *)((((int)stk + 68) + 0x24)) = vecMake(((R1300) + 93.0f), (120.0f + (R1304)), (R1308));
                *(Stk3 *)((((int)stk + 68) + 0x18)) = vecMake(((R1300) + ((1.0f - f4) * 93.0f)), (120.0f + (R1304)), (R1308));
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x3C)); }
        u43 = R1084;
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (((int)stk + 68) + 0x48), (u43 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 68) + 0x30)); }
        u45 = R1088;
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x48)), (u45 / 128.0f), 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 68) + 0x24)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x48)), (u43 / 128.0f), 0.0625f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 68) + 0x18)); }
        primTexVertexSet(0xFFFFFFFF, 0xFF000000, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x48)), (u45 / 128.0f), 0.0625f);
        t51 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x48), (R1080)));
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
    float R1084;
    int R1088;
    int R1092;
    float R1096;
    float R1304;
    float R1308;
    float R1312;

    R1084 = *(float *)((int)stk + 84);
    R1088 = *(int *)((int)stk + 88);
    R1092 = *(int *)((int)stk + 92);
    R1096 = *(float *)((int)stk + 96);
    R1304 = *(float *)((int)stk + 304);
    R1308 = *(float *)((int)stk + 308);
    R1312 = *(float *)((int)stk + 312);

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    R1092 = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    R1088 = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = R1092;
    u7 = R1312;
    u8 = R1308;
    R1084 = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (R1304)), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((R1304), (R1308), (R1312));
    t13 = R1088;
    u14 = R1312;
    R1096 = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((R1084) + (R1304)), ((float)t13 + (R1308)), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((R1304), ((R1096) + (R1308)), (R1312));
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
    register float u0;
    register float u1;
    register float u3;
    register float u4;
    register int t6;
    register float u7;
    register float u8;
    register int t13;
    register float u14;
    int stk[75];
    float R1084;
    float R1088;
    int R1092;
    int R1096;
    float R1300;
    float R1304;
    float R1308;

    R1084 = *(float *)((int)stk + 84);
    R1088 = *(float *)((int)stk + 88);
    R1092 = *(int *)((int)stk + 92);
    R1096 = *(int *)((int)stk + 96);
    R1300 = *(float *)((int)stk + 300);
    R1304 = *(float *)((int)stk + 304);
    R1308 = *(float *)((int)stk + 308);

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    R1092 = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    R1096 = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = R1092;
    u7 = R1308;
    u8 = R1304;
    R1084 = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (R1300)), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((R1300), (R1304), (R1308));
    t13 = R1096;
    u14 = R1308;
    R1088 = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((R1084) + (R1300)), ((float)t13 + (R1304)), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((R1300), ((R1088) + (R1304)), (R1308));
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register float u5;
    register float u6;
    register int t11;
    register float u12;
    int stk[75];
    int R1084;
    int R1088;
    float R1092;
    float R1096;
    float R1300;
    float R1304;
    float R1308;

    R1084 = *(int *)((int)stk + 84);
    R1088 = *(int *)((int)stk + 88);
    R1092 = *(float *)((int)stk + 92);
    R1096 = *(float *)((int)stk + 96);
    R1300 = *(float *)((int)stk + 300);
    R1304 = *(float *)((int)stk + 304);
    R1308 = *(float *)((int)stk + 308);

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    R1084 = (int)((u0 - u1) * (float)a5);
    u2 = *(float *)((a4 + 0x24));
    u3 = *(float *)((a4 + 0x1C));
    R1088 = (int)((u2 - u3) * (float)a6);
    t4 = R1084;
    u5 = R1308;
    u6 = R1304;
    R1092 = (float)t4;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t4 + (R1300)), u6, u5);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((R1300), (R1304), (R1308));
    t11 = R1088;
    u12 = R1308;
    R1096 = (float)t11;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((R1092) + (R1300)), ((float)t11 + (R1304)), u12);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((R1300), ((R1096) + (R1304)), (R1308));
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
    register float u0;
    register float u1;
    register float u3;
    register float u4;
    register int t6;
    register float u7;
    register float u8;
    register int t13;
    register float u14;
    int stk[74];
    int R1084;
    int R1088;
    float R1092;
    float R1096;
    float R1296;
    float R1300;
    float R1304;

    R1084 = *(int *)((int)stk + 84);
    R1088 = *(int *)((int)stk + 88);
    R1092 = *(float *)((int)stk + 92);
    R1096 = *(float *)((int)stk + 96);
    R1296 = *(float *)((int)stk + 296);
    R1300 = *(float *)((int)stk + 300);
    R1304 = *(float *)((int)stk + 304);

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    R1084 = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    R1088 = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = R1084;
    u7 = R1304;
    u8 = R1300;
    R1092 = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (R1296)), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((R1296), (R1300), (R1304));
    t13 = R1088;
    u14 = R1304;
    R1096 = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((R1092) + (R1296)), ((float)t13 + (R1300)), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((R1296), ((R1096) + (R1300)), (R1304));
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
