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
