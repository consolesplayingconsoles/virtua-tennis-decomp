/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camProject(int, int, Stk3);
int circuitNumDraw(int, int, int, float, float, float);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primLineV(int, int, int, int, int, int, int, int, int, int);
int primRectInc(int, int, int, int, int, int, int, int);
extern float sprSheetPut();
int sprSheetSet(int);
Stk3 vecMake(float, float, float);
float circuitDrawStage(void);

float circuitDrawStage(void)
{
    int t3;
    int t17;
    int t20;
    float u24;
    int t55;
    int t57;
    int t68;
    int t70;
    int t72;
    float t82;
    int t83;
    int t85;
    int t105;
    int t107;
    float u260;
    float t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t124;
    float t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t172;
    int t173;
    float t192;
    int t193;
    int t195;
    int t218;
    int t220;
    float u252;
    int t221;
    int t223;
    int t225;
    float t231;
    int t233;
    int t236;
    int t239;
    int t241;
    int t243;
    int t129;
    int t122;
    int t187;
    int t170;
    int t178;
    int stk[23];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0x8C2FBE30); }
    camProject((((int)stk + 20) + 0x10), (((int)stk + 20) + 0xC), *(Stk3 *)(((int)stk + 20)));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 336.0f);
    *(float *)(((int)stk + 32)) = (256.0f - (*(float *)(((int)stk + 32))));
    t3 = *(int *)0x8C2FBE1C;
    if ((int)(*(short *)(((((((t3 << 2) + t3) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0xE))) > (int)0xFFFFF000) {
        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) - 100.0f);
    }
    if (1.0f > (*(float *)0x8C2FBE3C)) {
        *(float *)0x8C2FBE3C = ((*(float *)0x8C2FBE3C) + 0.0500000007f);
    }
    t17 = *(int *)0x8C2FBE1C;
    t20 = 0x0;
    if ((*(int *)(((((((t17 << 2) + t17) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) {
        t20 = 0x1E;
    }
    *(Stk3 *)(((int)stk + 20)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 170.0f), (*(float *)(((int)stk + 32))), 51.2000008f);
    u24 = *(float *)0x8C2FBE3C;
    *(unsigned int *)(((int)stk + 40)) = (0xAA + t20);
    primRectInc((0xAA + t20), 0x2A, ((((int)(u24 * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
    *(Stk3 *)(((int)stk + 20)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 173.0f), ((*(float *)(((int)stk + 32))) + 3.0f), 51.2999992f);
    primRectInc((*(int *)(((int)stk + 40))), 0x2A, (0x0 | (((int)((*(float *)0x8C2FBE3C) * 255.0f) << 16) << 8)), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
    *(Stk3 *)(((int)stk + 20)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 170.0f), (*(float *)(((int)stk + 32))), 51.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 32))), 51.0f);
    primLineH(0x1, ((((int)((*(float *)0x8C2FBE3C) * 255.0f) << 16) << 8) | 0x808080), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 170.0f), ((*(float *)(((int)stk + 32))) + 42.0f), 51.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 36))), ((*(float *)(((int)stk + 32))) + 42.0f), 51.0f);
    primLineH(0x1, ((((int)((*(float *)0x8C2FBE3C) * 255.0f) << 16) << 8) | 0x808080), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((int)stk + 36))), ((*(float *)(((int)stk + 32))) + 42.0f), 51.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 36))), (*(float *)(((int)stk + 32))), 51.0f);
    primLineV(0x1, ((((int)((*(float *)0x8C2FBE3C) * 255.0f) << 16) << 8) | 0x808080), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 170.0f), ((*(float *)(((int)stk + 32))) + 42.0f), 51.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake((((float)t20 + (*(float *)(((int)stk + 36)))) + 170.0f), (*(float *)(((int)stk + 32))), 51.0f);
    primLineV(0x1, ((((int)((*(float *)0x8C2FBE3C) * 255.0f) << 16) << 8) | 0x808080), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    t55 = *(int *)0x8C2FBE1C;
    t57 = *(int *)(((*(int *)0x8C2FBC50) + ((((t55 << 2) + t55) << 2) << 1)));
    if (t57 != 0) {
        if (t57 != 1) {
            if (t57 != 2) {
            } else {
                sprSheetSet(0x8C1084EC);
            }
        } else {
            sprSheetSet(0x8C1084A4);
        }
    } else {
        t68 = *(int *)0x8C2FBE1C;
        t70 = *(int *)(((((((t68 << 2) + t68) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
        t72 = 0x8C1084C8;
        if (((*(int *)((0x40 + (((((t70 << 2) << 2) + t70) << 2) + 0x8C108E5C)))) & 2) != 0) {
            t72 = 0x8C108664;
        }
        sprSheetSet(t72);
    }
    t82 = ((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, ((*(float *)(((int)stk + 36))) + 5.0f), ((*(float *)(((int)stk + 32))) + 5.0f), 51.0f, (*(float *)0x8C2FBE3C));
    t83 = *(int *)0x8C2FBE1C;
    t85 = *(int *)(((*(int *)0x8C2FBC50) + ((((t83 << 2) + t83) << 2) << 1)));
    if (t85 != 0) {
        if (t85 != 1) {
            if (t85 != 2) {
            } else {
                sprSheetSet(0x8C108398);
            }
        } else {
            sprSheetSet(0x8C1083CC);
        }
    } else {
        sprSheetSet(0x8C108374);
    }
    t105 = *(int *)0x8C2FBE1C;
    t107 = *(int *)(((*(int *)0x8C2FBC50) + ((((t105 << 2) + t105) << 2) << 1)));
    u260 = (((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, ((*(float *)(((int)stk + 36))) + 49.0f), ((*(float *)(((int)stk + 32))) + 17.0f), 51.0f, (*(float *)0x8C2FBE3C)));
    if (t107 == 2) {
    } else {
        sprSheetSet(0x8C1083F0);
        t112 = ((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, ((*(float *)(((int)stk + 36))) + 122.0f), ((*(float *)(((int)stk + 32))) + 17.0f), 51.0f, (*(float *)0x8C2FBE3C));
        t113 = *(int *)0x8C2FBE1C;
        t114 = *(int *)0x8C2FBE1C;
        t115 = *(int *)0x8C2FBC50;
        t116 = *(int *)((t115 + ((((t114 << 2) + t114) << 2) << 1)));
        if (t116 != 0) {
            if (t116 != 1) {
            } else {
                t122 = (*(int *)((((*(int *)(((((((t113 << 2) + t113) << 2) << 1) + t115) + 0x4))) * 0x64) + 0x8C10BB4C)));
            }
            t129 = t122;
        } else {
            t124 = *(int *)(((((((t113 << 2) + t113) << 2) << 1) + t115) + 0x4));
            t129 = (*(int *)(((((((t124 << 2) << 2) + t124) << 2) + 0x8C108E5C) + 0x20)));
        }
        if (t129 != 0) {
            if (t129 != 1) {
                if (t129 != 2) {
                    if (t129 != 3) {
                    } else {
                        sprSheetSet(0x8C108480);
                    }
                } else {
                    sprSheetSet(0x8C10845C);
                }
            } else {
                sprSheetSet(0x8C108438);
            }
        } else {
            sprSheetSet(0x8C108414);
        }
        t158 = ((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, ((*(float *)(((int)stk + 36))) + 133.0f), ((*(float *)(((int)stk + 32))) + 17.0f), 51.0f, (*(float *)0x8C2FBE3C));
        t159 = *(int *)0x8C2FBE1C;
        t160 = *(int *)0x8C2FBE1C;
        t161 = *(int *)0x8C2FBC50;
        t162 = *(int *)((t161 + ((((t160 << 2) + t160) << 2) << 1)));
        if (t162 != 0) {
            if (t162 != 1) {
                t170 = 0x8C108E5C;
            } else {
                sprSheetSet(0x8C108534);
            }
            t187 = t170;
        } else {
            t172 = *(int *)(((((((t159 << 2) + t159) << 2) << 1) + t161) + 0x4));
            t173 = *(int *)(((((((t172 << 2) << 2) + t172) << 2) + 0x8C108E5C) + 0x24));
            if (t173 == 4) {
                sprSheetSet(0x8C108558);
                *(unsigned int *)(((int)stk + 40)) = 0x4;
            } else {
                if (t173 == 3) {
                    sprSheetSet(0x8C108534);
                    t178 = 0x3;
                } else {
                    sprSheetSet(0x8C108510);
                    t178 = 0x2;
                }
                *(unsigned int *)(((int)stk + 40)) = t178;
            }
        }
        t192 = ((float (*)(int, int, float, float, float, float))(sprSheetPut))(0x0, t187, ((*(float *)(((int)stk + 36))) + 39.0f), ((*(float *)(((int)stk + 32))) + 5.0f), 51.0f, (*(float *)0x8C2FBE3C));
        t193 = *(int *)0x8C2FBE1C;
        t195 = *(int *)(((*(int *)0x8C2FBC50) + ((((t193 << 2) + t193) << 2) << 1)));
        if (t195 != 0) {
            if (t195 != 1) {
            } else {
                sprSheetSet(0x8C10857C);
                *(float *)0x8C28766C = ((*(float *)0x8C28766C) * ((float)(t129 + 0x1) / 3.0f));
            }
        } else {
            sprSheetSet(0x8C1085A0);
            *(float *)0x8C28766C = ((*(float *)0x8C28766C) * ((float)(t129 + 0x1) / (float)(*(int *)(((int)stk + 40)))));
        }
        *(float *)0x8C287668 = ((*(float *)0x8C287668) * (1.0f + 1.0f));
        t218 = *(int *)0x8C2FBE1C;
        t220 = *(int *)(((((((t218 << 2) + t218) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0));
        u252 = (((float (*)(int, float, float, float, float))(sprSheetPut))(0xD, ((*(float *)(((int)stk + 36))) + 39.0f), ((*(float *)(((int)stk + 32))) + 37.0f), 51.0499992f, (*(float *)0x8C2FBE3C)));
        if (t220 == 0) {
            t221 = *(int *)0x8C2FBE1C;
            t223 = *(int *)(((((((t221 << 2) + t221) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
            t225 = 0x8C1085E8;
            if (((*(int *)((0x40 + (((((t223 << 2) << 2) + t223) << 2) + 0x8C108E5C)))) & 2) != 0) {
                t225 = 0x8C10861C;
            }
            sprSheetSet(t225);
            t231 = ((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, ((*(float *)(((int)stk + 36))) + 53.0f), ((*(float *)(((int)stk + 32))) + 3.0f), 51.0f, (*(float *)0x8C2FBE3C));
            *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE3C);
            t233 = *(int *)0x8C2FBE1C;
            t236 = *(int *)(((((((t233 << 2) + t233) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
            circuitNumDraw((*(int *)(((((((t236 << 2) << 2) + t236) << 2) + 0x8C108E5C) + 0x2C))), 0x0, 0x8C159B5C, (t231 + 11.0f), ((*(float *)(((int)stk + 32))) + 3.0f), 51.0f);
            t239 = *(int *)0x8C2FBE1C;
            t241 = *(int *)(((((((t239 << 2) + t239) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
            t243 = 0x8C108640;
            if ((*(int *)(((((((t241 << 2) << 2) + t241) << 2) + 0x8C108E5C) + 0x2C))) == 6) {
                t243 = 0x8C1085C4;
            }
            sprSheetSet(t243);
            u252 = (((float (*)(int, float, float, float, float))(sprSheetPut))(0x0, (t231 + 14.0f), ((*(float *)(((int)stk + 32))) + 3.0f), 51.0f, (*(float *)0x8C2FBE3C)));
        }
        u260 = u252;
    }
    return u260;
}
