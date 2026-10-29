/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int, int, int, int, int, int, int, int, int);
int SJRBF_Create(int, int, int);
int ballBoyPoseRun(int);
int colliObjEntry(int);
int colliObjInit(int, int, int, int, int, float);
int memset(int, int, int);
int motionAdvance(int);
int mtxGetWorldPos(int, int, int, int, int);
int mwRnaCreate(int, int, int);
int nlAddVector(int, int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int set_event(int, int);
int sprPutAt(int, int, int, int, Stk3);
int staffMorphBlend(int, int, int, float, float, float, float);
int staffShadowPut(int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
float miniEp2TargetSpawn(int a4);
int ADXT_Create(int a4, int a5, int a6);
int ballBoyDrawRun(int a4, float f4, float f5, float f6, float f7);
int btnGuideDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10);


int ADXT_Create(int a4, int a5, int a6)
{
    int t9;
    int t17;
    int t20;
    int t23;
    int t24;
    int t30;
    int t33;
    int t35;
    int t39;
    int t49;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1E1038:;
    *(unsigned int *)(((int)stk + 8)) = (R6 - (((R5 + 0x1F) & 0xFFFFFFE0) - R5));
    R10 = (0x8C);
    R11 = (((R5 + 0x1F) & 0xFFFFFFE0));
    R12 = (R4);
    R13 = (0x0);
    R4 = (0x0);
    R5 = (0x8C20C258);
    R6 = (0x8);
    goto L_8C1E1066;
    L_8C1E1066:;
    if (((*(signed char *)((((R4 * R10) + R5) + 0x0))) == 0)) goto L_8C1E1078;
    goto L_8C1E1072;
    L_8C1E1072:;
    t9 = (int)(R4 + 0x1) < (int)R6;
    R4 = ((R4 + 0x1));
    if (t9) goto L_8C1E1066;
    goto L_8C1E1078;
    L_8C1E1078:;
    if ((R4 == 8)) goto L_8C1E114A;
    goto L_8C1E107E;
    L_8C1E107E:;
    memset(((R4 * R10) + R5), 0x0, R10);
    *(unsigned char *)((((R4 * R10) + R5) + 0x3)) = R12;
    *(unsigned int *)((((R4 * R10) + R5) + 0x20)) = (((((((R12 << 8) + R12) << 2) << 2) << 1) << 1) + R11);
    *(unsigned int *)((((R4 * R10) + R5) + 0x24)) = (((((unsigned int)((unsigned int)((unsigned int)(((*(int *)(((int)stk + 8))) - ((((((R12 << 8) + R12) << 2) << 2) << 1) << 1)) - 36) >> 8) >> 2) >> 1) << 8) << 2) << 1);
    *(unsigned int *)((((R4 * R10) + R5) + 0x28)) = 0x24;
    *(unsigned int *)((((R4 * R10) + R5) + 0x2C)) = R11;
    *(unsigned int *)((((R4 * R10) + R5) + 0x30)) = 0x2000;
    *(unsigned int *)((((R4 * R10) + R5) + 0x34)) = 0x2020;
    t17 = SJRBF_Create((*(int *)((((R4 * R10) + R5) + 0x20))), (*(int *)((((R4 * R10) + R5) + 0x24))), (*(int *)((((R4 * R10) + R5) + 0x28))));
    *(unsigned int *)((((R4 * R10) + R5) + 0x10)) = t17;
    *(unsigned int *)((((R4 * R10) + R5) + 0x14)) = t17;
    t20 = ((R4 * R10) + R5);
    R10 = (0x8C1F3444);
    R14 = t20;
    if ((t17 == 0)) goto L_8C1E1146;
    goto L_8C1E10DE;
    L_8C1E10DE:;
    R11 = (R13);
    if (((int)R12 <= 0)) goto L_8C1E1124;
    goto L_8C1E10E4;
    L_8C1E10E4:;
    *(unsigned int *)(((int)stk + 8)) = (R11 << 2);
    t23 = *(int *)((R14 + 0x34));
    t24 = *(int *)((R14 + 0x30));
    *(unsigned int *)((((R11 << 2) + (R14 + 0x18)) + 0x0)) = (SJRBF_Create((((t23 * R11) << 1) + (*(int *)((R14 + 0x2C)))), (t24 << 1), ((t23 - t24) << 1)));
    if (((*(int *)((((R14 + 0x18) + (*(int *)(((int)stk + 8)))) + 0x0))) == 0)) goto L_8C1E1146;
    goto L_8C1E111E;
    L_8C1E111E:;
    t30 = (int)(R11 + 0x1) < (int)R12;
    R11 = ((R11 + 0x1));
    if (t30) goto L_8C1E10E4;
    goto L_8C1E1124;
    L_8C1E1124:;
    t33 = ADXSJD_Create((*(int *)((R14 + 0x14))), R12, (R14 + 0x18));
    *(unsigned int *)((R14 + 0x4)) = t33;
    if ((t33 == 0)) goto L_8C1E1146;
    goto L_8C1E1136;
    L_8C1E1136:;
    t35 = mwRnaCreate((R14 + 0x18), R12, R6);
    *(unsigned int *)((R14 + 0xC)) = t35;
    if ((t35 != 0)) goto L_8C1E1168;
    goto L_8C1E1146;
    L_8C1E1146:;
    ADXT_Destroy(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    goto L_8C1E114A;
    L_8C1E114A:;
    R0 = (0x0);
    goto L_8C1E11DE;
    L_8C1E11DE:;
    return R0;
    L_8C1E1168:;
    *(unsigned int *)((R14 + 0x38)) = 0x3C;
    t39 = *(int *)((R14 + 0x24));
    R2 = (t39);
    if (((int)t39 >= 0)) goto L_8C1E1176;
    goto L_8C1E1172;
    L_8C1E1172:;
    R2 = ((R2 + 0x7FF));
    goto L_8C1E1176;
    L_8C1E1176:;
    *(unsigned short *)((R14 + 0x3C)) = ((int)R2 >> 11);
    *(unsigned short *)((R14 + 0x3E)) = (int)((float)(*(short *)((R14 + 0x3C))) * (*(float *)0x8C1E124C));
    *(unsigned short *)((R14 + 0x40)) = R13;
    R4 = ((R14 + 0x42));
    R5 = (R13);
    if (((int)R12 <= 0)) goto L_8C1E11AC;
    goto L_8C1E11A0;
    L_8C1E11A0:;
    R6 = (0xFFFFFF80);
    goto L_8C1E11A2;
    L_8C1E11A2:;
    *(unsigned short *)((R4 + 0x0)) = R6;
    t49 = (int)(R5 + 0x1) < (int)R12;
    R4 = ((R4 + 0x2));
    R5 = ((R5 + 0x1));
    if (t49) goto L_8C1E11A2;
    goto L_8C1E11AC;
    L_8C1E11AC:;
    *(unsigned char *)((R14 + 0x6C)) = 0x1;
    *(unsigned int *)((R14 + 0x54)) = R13;
    *(unsigned int *)((R14 + 0x58)) = R13;
    *(unsigned int *)((R14 + 0x5C)) = R13;
    *(unsigned short *)((R14 + 0x60)) = R13;
    *(unsigned int *)((R14 + 0x64)) = R13;
    *(unsigned short *)((R14 + 0x68)) = R13;
    *(unsigned short *)((R14 + 0x6A)) = R13;
    *(unsigned char *)((R14 + 0x6D)) = 0x1;
    *(unsigned char *)((R14 + 0x72)) = R13;
    *(unsigned int *)((R14 + 0x88)) = R13;
    *(unsigned char *)((R14 + 0x0)) = 0x1;
    R0 = (R14);
    goto L_8C1E11DE;
}

int ballBoyDrawRun(int a4, float f4, float f5, float f6, float f7)
{
    int t0;
    float u1;
    float u2;
    int t17;
    int t76;
    int t79;
    int t20;
    float u21;
    int stk[9];

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 > (int)0x9) {
    } else {
        if (t0 == 2) {
            u1 = *(float *)(((0x5E4 + a4) + 0x4));
            u2 = *(float *)(((0x5E4 + a4) + 0x10));
            if ((*(int *)0x8C287C60) == 0) {
                *(float *)((a4 + 0x5FC)) = ((*(float *)((a4 + 0x5FC))) + ((u2 - u1) / -0.300000012f));
                *(float *)((a4 + 0x5FC)) = ((*(float *)((a4 + 0x5FC))) - 0.00999999978f);
            }
            if ((*(float *)((a4 + 0x5FC))) > 1.0f) {
                *(float *)((a4 + 0x5FC)) = 1.0f;
            }
            if (0.0f > (*(float *)((a4 + 0x5FC)))) {
                *(float *)((a4 + 0x5FC)) = 0.0f;
            }
            if ((*(float *)((a4 + 0x5FC))) != 0.0f) {
                t17 = *(int *)0x8C1D0194;
                if (a4 == 0x8C37EA84) {
                    t20 = 0xC880000;
                    u21 = (*(float *)((a4 + 0x5FC)));
                } else {
                    t20 = 0xC880320;
                    u21 = (*(float *)((a4 + 0x5FC)));
                }
                staffMorphBlend(t20, 0xC880960, t17, u21, f5, f6, f7);
            }
        }
        colliObjEntry((0x604 + a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x610 + a4)) = *(struct mv3 *)((0x5A4 + a4)); }
        if ((*(int *)0x8C287C60) == 0) {
            motionAdvance((a4 + 0x4));
        }
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((a4 + 0x5A4))), (*(float *)((a4 + 0x5A8))), (*(float *)((a4 + 0x5AC))));
        nlRotateAY((*(short *)((a4 + 0x5BC))));
        ballBoyPoseRun(a4);
        nlPopMatrix(0x1);
        if ((*(int *)((a4 + 0x5E0))) != 0) {
            nlPushUnitMatrix();
            nlLoadMatrix(((0x1E4 + a4) + 0x280));
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, ((int)stk + 8));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((((int)stk + 8) + 0x0))), (*(float *)((((int)stk + 8) + 0x4))), (*(float *)((((int)stk + 8) + 0x8))));
            nlObjPut(0xC505BB0);
            nlPopMatrix(0x1);
        }
        t76 = 0x1;
        if (a4 == 0x8C37EA84) {
            t76 = 0x0;
        }
        t79 = (staffShadowPut(a4, t76, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8)));
    }
    return t79;
}

int btnGuideDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t3;
    int stk[22];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    stk[11] = a8;
    stk[12] = a9;
    stk[13] = a10;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C095DEC:;
    *(unsigned int *)(((int)stk + 16)) = R4;
    *(Stk3 *)((((int)stk + 16) + 0x4)) = vecMake((float)(int)(*(float *)(((((int)stk + 16) + 0x1C) + 0x0))), (float)(int)(*(float *)(((((int)stk + 16) + 0x1C) + 0x4))), (*(float *)(((((int)stk + 16) + 0x1C) + 0x8))));
    t3 = *(int *)(((int)stk + 16));
    R0 = (t3);
    R14 = ((((int)stk + 16) + 0x4));
    R5 = (0x8C33B490);
    R6 = (0x8C33B0D0);
    R7 = (0xA0);
    F4 = (1.0f);
    if ((t3 == 0)) goto L_8C095E56;
    goto L_8C095E32;
    L_8C095E32:;
    if ((R0 == 1)) goto L_8C095E6C;
    goto L_8C095E36;
    L_8C095E36:;
    if ((R0 == 2)) goto L_8C095E84;
    goto L_8C095E3A;
    L_8C095E3A:;
    if ((R0 == 3)) goto L_8C095E9C;
    goto L_8C095E3E;
    L_8C095E3E:;
    if ((R0 == 4)) goto L_8C095EB4;
    goto L_8C095E42;
    L_8C095E42:;
    if ((R0 == 5)) goto L_8C095ECC;
    goto L_8C095E46;
    L_8C095E46:;
    if ((R0 == 6)) goto L_8C095EFC;
    goto L_8C095E4A;
    L_8C095E4A:;
    if ((R0 == 7)) goto L_8C095F14;
    goto L_8C095E4E;
    L_8C095E4E:;
    if ((R0 == 8)) goto L_8C095F2C;
    goto L_8C095E52;
    L_8C095E52:;
    goto L_8C095F48;
    L_8C095F48:;
    return R0;
    L_8C095F2C:;
    *(float *)(((0x370 + R6) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x370 + R6));
    goto L_8C095F40;
    L_8C095F40:;
    R0 = ((sprPutAt(R4, R5, R6, R7, *(Stk3 *)(((int)stk + 4)))));
    goto L_8C095F48;
    L_8C095F14:;
    *(float *)(((0x280 + R6) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x280 + R6));
    goto L_8C095F40;
    L_8C095EFC:;
    *(float *)(((0x190 + R6) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x190 + R6));
    goto L_8C095F40;
    L_8C095ECC:;
    *(float *)(((R6 + R7) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((R6 + R7));
    goto L_8C095F40;
    L_8C095EB4:;
    *(float *)(((0x140 + R5) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x140 + R5));
    goto L_8C095F40;
    L_8C095E9C:;
    *(float *)(((0x370 + R5) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x370 + R5));
    goto L_8C095F40;
    L_8C095E84:;
    *(float *)(((0x2D0 + R5) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((0x2D0 + R5));
    goto L_8C095F40;
    L_8C095E6C:;
    *(float *)(((R5 + R7) + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = ((R5 + R7));
    goto L_8C095F40;
    L_8C095E56:;
    *(float *)((R5 + 0x2C)) = F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    R4 = (R5);
    goto L_8C095F40;
}
