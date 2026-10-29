/* Straight-line functions with calls and guards (batch gen_sv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int angDiff(int, int);
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int mtxGetWorldPos(int, int, int, int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlMultiPushedMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetTranslate(int);
int nlTranslate(float, float, float);
float vecDistXZf(float, float, float, float);
void playerSolveArmReach(int a4, int a5, int a6, int a7, float f4, float f5);

void playerSolveArmReach(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[194];
    int t0;
    int t4;
    float u5;
    int t7;
    int t8;
    int t9;
    int t10;
    float u13;
    float u14;
    float u15;
    int t21;
    int t19;
    int t32;
    int t29;
    int t64;
    int t66;
    int t70;
    int t146;
    int t151;
    int t152;
    int t168;
    int t165;
    int t163;
    int t172;
    int t173;
    int t176;
    int t179;
    int t177;
    int t224;
    float t233;
    int t236;
    float u244;
    float u245;
    float u248;
    float t262;
    int t265;
    int t274;
    int t278;
    int t279;
    float u11;
    float u12;
    int t67;
    int t155;
    int t161;

    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(int *)((a4 + 0xB60));
    if (((0x1 & t0) == 0) && ((0x400 & t0) != 0)) {
        *(float *)((a4 + 0xC7C)) = 0.0f;
    } else {
        if ((*(int *)(((int)stk + 20))) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC80 + a4)) = *(struct mv3 *)(0x8C1016D4); }
            *(unsigned short *)((a4 + 0xC8C)) = 0x0;
            t4 = *(int *)((a4 + 0xB60));
            if ((t4 & 0x400) != 0) {
                u5 = *(float *)((a4 + 0xBA4));
                *(float *)(((0x2C0 + ((int)stk + 16)) + 0x8)) = u5;
                t7 = t4;
                t8 = 0x400;
                t9 = (*(int *)((a4 + 0xD30)));
                t10 = a6;
                u13 = u5;
                u14 = f4;
                u15 = f5;
                for (;;) {
                    if ((int)t9 > (int)(*(int *)0x8C295480)) {
                        break;
                    }
                    t10 = t9;
                    t10 = (t10 << 1);
                    t8 = t9;
                    t10 = (t10 + t8);
                    t10 = (t10 << 2);
                    u13 = 0.0f;
                    t10 = (t10 + 0x8C294670);
                    *(unsigned int *)(((int)stk + 24)) = t10;
                    u14 = (*(float *)((t10 + 0x8)));
                    t21 = 0x1;
                    if (u14 > u13) {
                    } else {
                        t19 = 0x0;
                        if (u13 > u14) {
                            t19 = 0xFFFFFFFF;
                        }
                        t21 = t19;
                    }
                    u15 = (*(float *)(((0x2C0 + ((int)stk + 16)) + 0x8)));
                    u13 = 0.0f;
                    if (u15 > u13) {
                        t8 = 0x1;
                    } else {
                        if (u13 > u15) {
                            t8 = 0xFFFFFFFF;
                        } else {
                            t8 = 0x0;
                        }
                    }
                    t32 = t8;
                    if (t21 == t8) {
                        u12 = 0.0f;
                        u11 = 0.0f;
                        if (!(u12 > u14)) {
                            u13 = u14;
                        } else {
                            u13 = u14;
                            u13 = (-u13);
                        }
                        if (!(u11 > u15)) {
                            u12 = u15;
                        } else {
                            u12 = u15;
                            u12 = (-u12);
                        }
                        t29 = t8;
                        if (!(u12 > u13)) {
                            t8 = 0x8C0F7DAC;
                            t7 = 0x8C295594;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t10); }
                            t9 = 0x12C;
                            t29 = 0x8C0F7DAC;
                        }
                        t32 = t29;
                    }
                    t8 = t32;
                    t9 = (t9 + 0x1);
                }
                if (((int)t9 > (int)(*(int *)0x8C295480)) && ((int)t9 < (int)0x12C)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C295594) = *(struct mv3 *)((0xB9C + a4)); }
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C295594) = *(struct mv3 *)((0xC44 + a4)); }
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x2C0 + ((int)stk + 16))) = *(struct mv3 *)(0x8C295594); }
        t64 = a4;
        t66 = (0x8C + ((int)stk + 16));
        for (;;) { t67 = *(int *)t64; t64 = (t64 + 4); if ((unsigned int)((a4 + 480)) < (unsigned int)t64) break; *(unsigned int *)t66 = t67; t66 = (t66 + 4); }
        t70 = *(int *)((a4 + 0xC74));
        *(float *)(((int)stk + 168)) = (float)(*(int *)((((((*(int *)((a4 + 0xC6C))) * 0x6C) + (0x8C104194 + ((*(int *)((a4 + 0xC5C))) * 0xD8))) + ((((t70 << 2) << 1) + t70) << 2)) + 0x8)));
        *(float *)(((int)stk + 160)) = 0.0f;
        *(unsigned int *)(((int)stk + 224)) = 0x0;
        nlPushMatrix(0x0);
        if ((*(int *)(((int)stk + 20))) != 0) {
            nlLoadMatrix(0x8C2955AC);
        } else {
            nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
            nlRotateAY((*(short *)((a4 + 0xB06))));
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                nlScale((-1.0f), 1.0f, 1.0f);
            }
            motionSetCurrent((0x8C + ((int)stk + 16)));
            motionRootBone(0x0, 0x5, 0x0, 0x0, *(int *)((int)stk + 16));
            nlRotateAY(0x4000);
            nlRotateAZ(0xFFFFC000);
            motionBone(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
            nlRotateAY(0x8000);
            motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
            motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
            motionBone(0x11, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
            *(int *)((int)stk + 12) = 0x8C2955A0;
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, 0x8C2955A0);
            motionBone(0x12, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
            motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
            *(int *)((int)stk + 8) = (0x284 + ((int)stk + 16));
            mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x284 + ((int)stk + 16)));
            nlPushMatrix(0x0);
            nlLoadMatrix(0x8C287978);
            nlMultiPushedMatrix();
            nlSetTranslate(0x8C1016D4);
            nlGetMatrix(0x8C2955EC);
            nlPopMatrix(0x1);
            nlLoadMatrix(0x8C287938);
            nlTranslate((*(float *)(((0x284 + ((int)stk + 16)) + 0x0))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x4))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x8))));
            nlGetMatrix(0x8C2955AC);
        }
        { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 16) + 0x4C)) = *(struct mv16 *)(0x8C2955EC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x26C + ((int)stk + 16))) = *(struct mv3 *)(0x8C2955A0); }
        nlTranslate((*(float *)((a4 + 0xC80))), (*(float *)((a4 + 0xC84))), (*(float *)((a4 + 0xC88))));
        nlMultiMatrix((((int)stk + 16) + 0x4C));
        motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4));
        nlGetMatrix((((int)stk + 16) + 0x4C));
        *(int *)((int)stk + 12) = (0x284 + ((int)stk + 16));
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x284 + ((int)stk + 16)));
        nlPushMatrix(0x0);
        nlLoadMatrix(0x8C287978);
        nlMultiPushedMatrix();
        nlSetTranslate(0x8C1016D4);
        nlGetMatrix((((int)stk + 12) + 0x10));
        nlPopMatrix(0x1);
        nlLoadMatrix(0x8C287938);
        nlTranslate((*(float *)(((0x284 + ((int)stk + 16)) + 0x0))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x4))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x8))));
        nlRotateAZ((*(short *)((a4 + 0xC8C))));
        nlMultiMatrix((((int)stk + 12) + 0x10));
        *(int *)((int)stk + 8) = (0x2AC + ((int)stk + 12));
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x2AC + ((int)stk + 12)));
        nlTranslate(4.0f, 0.0f, 0.0f);
        *(int *)((int)stk + 4) = (0x2BC + ((int)stk + 8));
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x2BC + ((int)stk + 8)));
        nlPopMatrix(0x1);
        t146 = (nlArcTan2(((*(float *)(((int)stk + 712))) - (*(float *)(((0x2AC + ((int)stk + 12)) + 0x4)))), ((*(float *)(((int)stk + 708))) - (*(float *)(((0x2AC + ((int)stk + 12)) + 0x0))))));
        *(int *)((int)stk + 12) = t146;
        t151 = nlArcTan2(((*(float *)(((0x2C0 + ((int)stk + 16)) + 0x4))) - (*(float *)(((0x2AC + ((int)stk + 12)) + 0x4)))), ((*(float *)(((0x2C0 + ((int)stk + 16)) + 0x0))) - (*(float *)(((0x2AC + ((int)stk + 12)) + 0x0)))));
        t152 = angDiff(t151, t146);
        *(unsigned int *)(((int)stk + 16)) = (short)t152;
        if ((int)(short)t152 >= 0) {
            t155 = (*(int *)(((int)stk + 16)));
        } else {
            t155 = (-(*(int *)(((int)stk + 16))));
        }
        if ((int)t155 < (int)0x4000) {
            if ((int)(*(int *)(((int)stk + 16))) >= 0) {
                t161 = (*(int *)(((int)stk + 16)));
            } else {
                t161 = (-(*(int *)(((int)stk + 16))));
            }
            t168 = t152;
            if ((int)t161 > (int)0x800) {
                t165 = 0x1;
                if ((int)(short)t152 > 0) {
                } else {
                    t163 = 0x0;
                    if ((int)(short)t152 < 0) {
                        t163 = 0xFFFFFFFF;
                    }
                    t165 = t163;
                }
                t168 = (((t165 << 8) << 2) << 1);
            }
            *(unsigned short *)((a4 + 0xC8C)) = ((*(short *)((a4 + 0xC8C))) + t168);
            t172 = *(short *)((a4 + 0xC8C));
            t173 = (-t172);
            if ((int)t172 >= 0) {
                t173 = t172;
            }
            if ((int)t173 > (int)0x2000) {
                t176 = *(short *)((a4 + 0xC8C));
                t179 = 0x1;
                if ((int)t176 > 0) {
                } else {
                    t177 = 0x0;
                    if ((int)t176 < 0) {
                        t177 = 0xFFFFFFFF;
                    }
                    t179 = t177;
                }
                *(unsigned short *)((a4 + 0xC8C)) = ((((t179 << 8) << 2) << 2) << 1);
            }
        }
        nlPushMatrix(0x0);
        nlLoadMatrix((((int)stk + 16) + 0x4C));
        *(int *)((int)stk + 12) = (0x284 + ((int)stk + 16));
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x284 + ((int)stk + 16)));
        nlPushMatrix(0x0);
        nlLoadMatrix(0x8C287978);
        nlMultiPushedMatrix();
        nlSetTranslate(0x8C1016D4);
        nlGetMatrix((((int)stk + 12) + 0x50));
        nlPopMatrix(0x1);
        nlLoadMatrix(0x8C287938);
        nlTranslate((*(float *)(((0x284 + ((int)stk + 16)) + 0x0))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x4))), (*(float *)(((0x284 + ((int)stk + 16)) + 0x8))));
        nlRotateAZ((*(short *)((a4 + 0xC8C))));
        nlMultiMatrix((((int)stk + 12) + 0x50));
        nlTranslate(4.0f, 0.0f, 0.0f);
        *(int *)((int)stk + 8) = (0x2B8 + ((int)stk + 12));
        mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x2B8 + ((int)stk + 12)));
        nlPopMatrix(0x1);
        *(float *)(((int)stk + 648)) = ((*(float *)(((0x2C0 + ((int)stk + 16)) + 0x0))) - (*(float *)(((int)stk + 708))));
        *(float *)(((int)stk + 652)) = ((*(float *)(((0x2C0 + ((int)stk + 16)) + 0x4))) - (*(float *)(((int)stk + 712))));
        *(float *)((a4 + 0xC80)) = ((*(float *)((a4 + 0xC80))) + (*(float *)(((0x278 + ((int)stk + 16)) + 0x0))));
        *(float *)((a4 + 0xC84)) = ((*(float *)((a4 + 0xC84))) + (*(float *)(((0x27C + ((int)stk + 16)) + 0x0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x278 + ((int)stk + 16))) = *(struct mv3 *)((0xC80 + a4)); }
        nlPushUnitMatrix();
        t224 = nlArcTan2(((*(float *)(((0x2AC + ((int)stk + 12)) + 0x0))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x0)))), ((*(float *)(((0x2AC + ((int)stk + 12)) + 0x8))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x8)))));
        nlRotateAY((-t224));
        nlCalcPoint((0x278 + ((int)stk + 16)), (0x278 + ((int)stk + 16)));
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        t233 = vecDistXZf((*(float *)(((0x2AC + ((int)stk + 12)) + 0x0))), (*(float *)(((0x2AC + ((int)stk + 12)) + 0x8))), (*(float *)(((0x26C + ((int)stk + 16)) + 0x0))), (*(float *)(((0x26C + ((int)stk + 16)) + 0x8))));
        t236 = nlArcTan2(((*(float *)(((0x2AC + ((int)stk + 12)) + 0x4))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x4)))), t233);
        nlRotateAX(t236);
        nlCalcPoint((0x278 + ((int)stk + 16)), (0x278 + ((int)stk + 16)));
        nlPopMatrix(0x1);
        if ((*(float *)(((int)stk + 656))) > 3.0f) {
            *(float *)(((int)stk + 656)) = 3.0f;
        }
        if ((-1.0f) > (*(float *)(((int)stk + 656)))) {
            *(float *)(((int)stk + 656)) = (-1.0f);
        }
        u244 = *(float *)(((int)stk + 652));
        u245 = (-u244);
        if (!(0.0f > u244)) {
            u245 = u244;
        }
        if (u245 > 4.0f) {
            u248 = *(float *)(((int)stk + 652));
            *(float *)(((int)stk + 652)) = (float)(((u248 > 0.0f) - (0.0f > u248)) << 2);
        }
        nlPushUnitMatrix();
        t262 = vecDistXZf((*(float *)(((0x2AC + ((int)stk + 12)) + 0x0))), (*(float *)(((0x2AC + ((int)stk + 12)) + 0x8))), (*(float *)(((0x26C + ((int)stk + 16)) + 0x0))), (*(float *)(((0x26C + ((int)stk + 16)) + 0x8))));
        t265 = nlArcTan2(((*(float *)(((0x2AC + ((int)stk + 12)) + 0x4))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x4)))), t262);
        nlRotateAX((-t265));
        nlCalcPoint((0x278 + ((int)stk + 16)), (0x278 + ((int)stk + 16)));
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        t274 = nlArcTan2(((*(float *)(((0x2AC + ((int)stk + 12)) + 0x0))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x0)))), ((*(float *)(((0x2AC + ((int)stk + 12)) + 0x8))) - (*(float *)(((0x26C + ((int)stk + 16)) + 0x8)))));
        nlRotateAY(t274);
        nlCalcPoint((0x278 + ((int)stk + 16)), (0x278 + ((int)stk + 16)));
        nlPopMatrix(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC80 + a4)) = *(struct mv3 *)((0x278 + ((int)stk + 16))); }
        t278 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t278 + 0x1);
        if ((int)(t278 + 0x1) < (int)0x4) {
            t279 = ((int (*)(int, int))(playerSolveArmReach))(a4, (t278 + 0x1));
        }
    }
}
