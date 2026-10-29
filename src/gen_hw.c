/* Straight-line functions with calls and guards (batch gen_hw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int cameraCalcPoint(int, int, int, int, int);
int cameraCalcPointInv(int, int, int, int, int);
float cameraFovForSize(float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlTanf(float);
int nlTranslate(float, float, float);
int vecAnglesTo(int, int, Stk3, Stk3);
float cameraFovFit(Stk4 s, float f4, float f5);

float cameraFovFit(Stk4 s, float f4, float f5)
{
    float t13;
    float u16;
    float u17;
    float u18;
    float u20;
    float u21;
    float u22;
    float u23;
    float u25;
    float u26;
    float u27;
    float u29;
    float u30;
    float u32;
    float u33;
    float u35;
    float u42;
    float u44;
    float u45;
    float u47;
    float u48;
    float u50;
    float u66;
    float u67;
    int t69;
    float u71;
    float u72;
    float t75;
    int t57;
    int t58;
    float u39;
    float u54;
    int stk[63];

    stk[51] = s.w[0];
    stk[52] = s.w[1];
    stk[53] = s.w[2];
    stk[54] = s.w[3];
    *(float *)(((int)stk + 60)) = f5;
    nlPushUnitMatrix();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)(0x8C287B54); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(0x8C287B60); }
    vecAnglesTo((((int)stk + 36) + 0x1C), (((int)stk + 36) + 0x20), *(Stk3 *)(((int)stk + 36)), *(Stk3 *)(((int)stk + 48)));
    nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 64)))));
    nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 68)))));
    nlTranslate((-(*(float *)0x8C287B54)), (-(*(float *)0x8C287B58)), (-(*(float *)0x8C287B5C)));
    nlGetMatrix((((int)stk + 36) + 0x24));
    nlPopMatrix(0x1);
    t13 = nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((0xA8 + ((int)stk + 36))); }
    *(int *)((int)stk + 20) = (0x88 + ((int)stk + 24));
    cameraCalcPoint((((int)stk + 24) + 0x30), 0x0, 0x0, 0x0, *(int *)((int)stk + 20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0xC4 + ((int)stk + 20))); }
    *(int *)((int)stk + 4) = (0x8C + ((int)stk + 8));
    cameraCalcPoint((((int)stk + 8) + 0x40), 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
    u16 = *(float *)(((int)stk + 160));
    u17 = *(float *)(((int)stk + 168));
    u18 = (-u17);
    if (!(0.0f > u17)) {
        u18 = u17;
    }
    u20 = *(float *)(((int)stk + 148));
    u21 = *(float *)(((int)stk + 156));
    u22 = *(float *)(((int)stk + 60));
    u23 = (-u21);
    if (!(0.0f > u21)) {
        u23 = u21;
    }
    u25 = *(float *)(((int)stk + 168));
    u26 = *(float *)(((int)stk + 156));
    if ((int)(int)(((u16 - f4) * (320.0f / t13)) / u18) < (int)(int)(((u20 - u22) * (320.0f / t13)) / u23)) {
        u27 = (-u25);
        if (!(0.0f > u25)) {
            u27 = u25;
        }
        u29 = *(float *)(((int)stk + 60));
        u30 = (-u26);
        if (!(0.0f > u26)) {
            u30 = u26;
        }
        if ((((u20 + u29) * (320.0f / t13)) / u30) > (((u16 + f4) * (320.0f / t13)) / u27)) {
            u32 = *(float *)(((int)stk + 60));
            u33 = (-u26);
            if (!(0.0f > u26)) {
                u33 = u26;
            }
            u39 = (((u20 + u32) * (320.0f / t13)) / u33);
        } else {
            u35 = (-u25);
            if (!(0.0f > u25)) {
                u35 = u25;
            }
            u39 = (((u16 + f4) * (320.0f / t13)) / u35);
        }
        t57 = (int)u39;
        t58 = (int)(((u16 - f4) * (320.0f / t13)) / u18);
    } else {
        u42 = (-u25);
        if (!(0.0f > u25)) {
            u42 = u25;
        }
        u44 = *(float *)(((int)stk + 60));
        u45 = (-u26);
        if (!(0.0f > u26)) {
            u45 = u26;
        }
        if ((((u20 + u44) * (320.0f / t13)) / u45) > (((u16 + f4) * (320.0f / t13)) / u42)) {
            u47 = *(float *)(((int)stk + 60));
            u48 = (-u26);
            if (!(0.0f > u26)) {
                u48 = u26;
            }
            u54 = (((u20 + u47) * (320.0f / t13)) / u48);
        } else {
            u50 = (-u25);
            if (!(0.0f > u25)) {
                u50 = u25;
            }
            u54 = (((u16 + f4) * (320.0f / t13)) / u50);
        }
        t57 = (int)(((u20 - u22) * (320.0f / t13)) / u23);
        t58 = (int)u54;
    }
    nlGetAverageVector((((int)stk + 60) + 0x64), (((int)stk + 60) + 0x58), (((int)stk + 60) + 0x4C), 0.5f, 0.5f);
    u66 = *(float *)(((int)stk + 144));
    u67 = (-u66);
    if (!(0.0f > u66)) {
        u67 = u66;
    }
    *(float *)(((int)stk + 136)) = (((float)(t58 + t57) / (1.0f + 1.0f)) / ((320.0f / t13) / u67));
    t69 = (t57 - t58);
    if ((int)(t58 - t57) >= 0) {
        t69 = (t58 - t57);
    }
    u71 = *(float *)(((int)stk + 144));
    u72 = (-u71);
    if (!(0.0f > u71)) {
        u72 = u71;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x4C)); }
    *(int *)((int)stk + 44) = 0x8C287B60;
    cameraCalcPointInv((((int)stk + 48) + 0x18), 0x0, 0x0, 0x0, *(int *)((int)stk + 44));
    t75 = cameraFovForSize((((float)t69 / (1.0f + 1.0f)) / ((320.0f / t13) / u72)));
    *(float *)0x8C287A04 = t75;
    return t75;
}
