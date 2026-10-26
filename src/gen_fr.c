/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int bodyInit(int);
int bodyPlacePoints(int);
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
int cpuInFan(int, int, Stk3);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuReachPoint(int, int, int, Stk3, float);
int cpuShotRange(int, int, int, int, int);
float nlCos(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float cpuDblAimRateC(int a4, int a5);
int cpuDblAimRateB(int a4, int a5);
int cpuSglAimAddReach(int a4, int a5);
void bodyCreate(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

float cpuDblAimRateC(int a4, int a5)
{
    int t0;
    int t1;
    float t9;
    float u10;
    float t12;
    float u13;
    float u16;
    float u17;
    float u20;
    float u21;
    int t23;
    float u24;
    float u25;
    int t28;
    int t26;
    float t31;
    float t34;
    float t35;
    float t36;
    float t37;
    float u39;
    int t42;
    int t40;
    float u47;
    int t60;
    float u61;
    float u62;
    int t65;
    int t63;
    float t68;
    float t71;
    float t72;
    float t73;
    float t74;
    float u76;
    int t79;
    int t77;
    float u84;
    float t96;
    int t102;
    float t103;
    float t104;
    int t105;
    float t106;
    float t107;
    float t108;
    float u111;
    float u112;
    float u113;
    float u117;
    int t120;
    int t118;
    float u122;
    int t125;
    int t123;
    float u136;
    int t139;
    int t137;
    float u141;
    int t144;
    int t142;
    int t164;
    int t162;
    int t168;
    int t166;
    float u175;
    float t194;
    float t195;
    int t203;
    float u214;
    float u207;
    int t217;
    float u228;
    float u221;
    float u239;
    float u241;
    int t243;
    float u244;
    float u246;
    float u255;
    float u248;
    float u249;
    float u251;
    float u262;
    float u264;
    float u267;
    int t270;
    int t268;
    int t274;
    int t272;
    float u278;
    float u282;
    int t285;
    int t283;
    int t289;
    int t287;
    float u293;
    float u186;
    float u54;
    float u57;
    float u92;
    float u156;
    int t134;
    int t150;
    float u235;
    int t204;
    int t218;
    float u300;
    int stk[48];

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 84)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 92)) = ((t0 * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 88)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 84))) + 0xB5C))) * 0x160));
    *(unsigned int *)(((int)stk + 76)) = (((t0 << 1) + (t0 << 2)) + 0x8C15A0F4);
    *(float *)(((((int)stk + 76) + 0x2C) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 76) + 0x2C) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 76) + 0x2C) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB9C + a4)); }
    t9 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), (*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
    u10 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t12 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
    u13 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        u16 = *(float *)((a4 + 0xB9C));
        *(float *)(((int)stk + 108)) = (u16 + (((*(float *)((a5 + 0x0))) - u16) / (1.0f + 1.0f)));
        u17 = *(float *)((a4 + 0xBA4));
        *(float *)(((int)stk + 116)) = (u17 + (((*(float *)((a5 + 0x8))) - u17) / (1.0f + 1.0f)));
        u20 = *(float *)(((int)stk + 108));
        *(float *)(((int)stk + 96)) = (u20 + ((((*(float *)((a5 + 0x0))) - u20) * 1.0f) / 3.0f));
        u21 = *(float *)(((int)stk + 116));
        *(float *)(((int)stk + 104)) = (u21 + ((((*(float *)((a5 + 0x8))) - u21) * 1.0f) / 3.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t23 = ((int (*)(int, Stk3, Stk3, Stk3, float, float))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u21, 3.0f);
        u24 = *(float *)(((int)stk + 104));
        u25 = *(float *)(((int)stk + 140));
        t28 = 0x1;
        if ((u25 - u24) > 0.0f) {
        } else {
            t26 = 0x0;
            if (0.0f > (u25 - u24)) {
                t26 = 0xFFFFFFFF;
            }
            t28 = t26;
        }
        if ((float)t28 == (*(float *)((a4 + 0xB00)))) {
            t31 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t31;
            u54 = ((t31 / (cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x3C)))) * 0.100000001f);
        } else {
            *(unsigned int *)(((int)stk + 80)) = (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t34 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t34;
            t35 = cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x18));
            *(float *)(((int)stk + 72)) = (t34 / t35);
            t36 = cpuDistXZ((((int)stk + 72) + 0x24), (((int)stk + 72) + 0x3C));
            *(float *)(((int)stk + 68)) = t36;
            t37 = cpuDistXZ((((int)stk + 68) + 0x28), (((int)stk + 68) + 0x1C));
            u39 = *(float *)(((*(int *)(((int)stk + 80))) + 0x30));
            t42 = 0x1;
            if (u39 > 0.0f) {
            } else {
                t40 = 0x0;
                if (0.0f > u39) {
                    t40 = 0xFFFFFFFF;
                }
                t42 = t40;
            }
            u47 = ((float)((((*(int *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u47 = u47 + 1.0f * (float)((((float)t42 == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            u54 = ((((t34 / t35) * ((t36 / t37) + 1.0f))) * u47);
            u57 = u39;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t60 = ((int (*)(int, Stk3, Stk3, Stk3, float))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u57);
        u61 = *(float *)(((int)stk + 104));
        u62 = *(float *)(((int)stk + 140));
        t65 = 0x1;
        if ((u62 - u61) > 0.0f) {
        } else {
            t63 = 0x0;
            if (0.0f > (u62 - u61)) {
                t63 = 0xFFFFFFFF;
            }
            t65 = t63;
        }
        if ((float)t65 == (*(float *)((a4 + 0xB00)))) {
            t68 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t68;
            u92 = ((t68 / (cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x3C)))) * 0.100000001f);
        } else {
            *(unsigned int *)(((int)stk + 80)) = (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t71 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t71;
            t72 = cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x18));
            *(float *)(((int)stk + 72)) = (t71 / t72);
            t73 = cpuDistXZ((((int)stk + 72) + 0x24), (((int)stk + 72) + 0x3C));
            *(float *)(((int)stk + 68)) = t73;
            t74 = cpuDistXZ((((int)stk + 68) + 0x28), (((int)stk + 68) + 0x1C));
            u76 = *(float *)(((*(int *)(((int)stk + 80))) + 0x30));
            t79 = 0x1;
            if (u76 > 0.0f) {
            } else {
                t77 = 0x0;
                if (0.0f > u76) {
                    t77 = 0xFFFFFFFF;
                }
                t79 = t77;
            }
            u84 = ((float)((((*(int *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u84 = u84 + 1.0f * (float)((((float)t79 == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            u92 = ((((t71 / t72) * ((t73 / t74) + 1.0f))) * u84);
        }
        t96 = cpuDistXZ(a5, (0xB9C + a4));
        u186 = ((((((_builtin_sqrtf((u54 * u92))) * (nlPow(t96, 1.20000005f)))) * 5.0f) / 54.8499985f) + (float)(*(signed char *)(((*(int *)(((int)stk + 76))) + 0x5))));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t102 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
        t103 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 40) + 0x5C));
        *(float *)(((int)stk + 36)) = t103;
        t104 = cpuDistXZ((0xB9C + a4), (((int)stk + 36) + 0x60));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t105 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((0x80 + ((int)stk + 4)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        t106 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84)), (((int)stk + 76) + 0x38));
        *(float *)(((int)stk + 72)) = t106;
        t107 = cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x3C));
        t108 = cpuDistXZ(a5, (0xB9C + a4));
        u111 = *(float *)((a5 + 0x8));
        u112 = ((_builtin_sqrtf(((t103 / t104) * (t106 / t107)))) * (nlPow(t108, 1.20000005f)));
        u113 = (-u111);
        if (!(0.0f > u111)) {
            u113 = u111;
        }
        if (u113 > 64.0f) {
            u117 = *(float *)((a4 + 0xAE8));
            t120 = 0x1;
            if (u117 > 0.0f) {
            } else {
                t118 = 0x0;
                if (0.0f > u117) {
                    t118 = 0xFFFFFFFF;
                }
                t120 = t118;
            }
            u122 = *(float *)((a5 + 0x0));
            t125 = 0x1;
            if (u122 > 0.0f) {
            } else {
                t123 = 0x0;
                if (0.0f > u122) {
                    t123 = 0xFFFFFFFF;
                }
                t125 = t123;
            }
            if (t120 == t125) {
                t134 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x0)));
            } else {
                t134 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x1)));
            }
            u156 = ((0.0f + ((u112 * 5.0f) / 54.8499985f)) + (float)t134);
        } else {
            u136 = *(float *)((a4 + 0xAE8));
            t139 = 0x1;
            if (u136 > 0.0f) {
            } else {
                t137 = 0x0;
                if (0.0f > u136) {
                    t137 = 0xFFFFFFFF;
                }
                t139 = t137;
            }
            u141 = *(float *)((a5 + 0x0));
            t144 = 0x1;
            if (u141 > 0.0f) {
            } else {
                t142 = 0x0;
                if (0.0f > u141) {
                    t142 = 0xFFFFFFFF;
                }
                t144 = t142;
            }
            if (t139 == t144) {
                t150 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x4)));
            } else {
                t150 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x3)));
            }
            u156 = ((0.0f + ((u112 * 5.0f) / 54.8499985f)) + (float)(t150 << 1));
        }
        t164 = 0x1;
        if ((u10 - t9) > 0.0f) {
        } else {
            t162 = 0x0;
            if (0.0f > (u10 - t9)) {
                t162 = 0xFFFFFFFF;
            }
            t164 = t162;
        }
        t168 = 0x1;
        if ((u13 - t12) > 0.0f) {
        } else {
            t166 = 0x0;
            if (0.0f > (u13 - t12)) {
                t166 = 0xFFFFFFFF;
            }
            t168 = t166;
        }
        u175 = u156;
        if (t164 == t168) {
        } else {
            u175 = (u156 + (float)(*(signed char *)(((*(int *)(((int)stk + 76))) + 0x2))));
        }
        u186 = u175;
    }
    t194 = cpuDistXZ(a5, (0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84)));
    *(float *)(((int)stk + 72)) = t194;
    t195 = cpuDistXZ(a5, (0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84)));
    if (t195 > t194) {
        t203 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
        u214 = u186;
        if (((*(int *)0x8C287AF8) == t203) && (t204 = *(int *)((((t203 << 2) + 0x8C287AE0) + 0x0)), t204 == 0)) {
            u207 = ((u186 + (1.0f + 1.0f)) + 4.0f);
            if (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) == 0) {
                u207 = (u186 + (1.0f + 1.0f));
            }
            u214 = u207;
        }
        u235 = u214;
    } else {
        t217 = *(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
        u228 = u186;
        if (((*(int *)0x8C287AF8) == t217) && (t218 = *(int *)((((t217 << 2) + 0x8C287AE0) + 0x0)), t218 == 0)) {
            u221 = (u186 + (1.0f + 1.0f));
            if (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
                u221 = ((u186 + (1.0f + 1.0f)) + 4.0f);
            }
            u228 = u221;
        }
        u235 = u228;
    }
    u239 = *(float *)((a4 + 0xB9C));
    u241 = *(float *)(((*(int *)(((int)stk + 84))) + 0xAE8));
    t243 = *(short *)(((*(int *)(((int)stk + 92))) + 0x118));
    u244 = *(float *)(((*(int *)(((int)stk + 88))) + 0x28));
    u246 = (((-u239) + u241) + (u244 * (float)t243));
    if (!(0.0f > ((u239 - u241) - (u244 * (float)t243)))) {
        u246 = ((u239 - u241) - (u244 * (float)t243));
    }
    u255 = u235;
    if (20.0f > u246) {
        u248 = *(float *)((a5 + 0x0));
        u249 = *(float *)((a4 + 0xB9C));
        u251 = ((-u249) + u248);
        if (!(0.0f > (u249 - u248))) {
            u251 = (u249 - u248);
        }
        u255 = (u235 - (u251 * 0.0599999987f));
    }
    u262 = (-(u10 - t9));
    if (!(0.0f > (u10 - t9))) {
        u262 = (u10 - t9);
    }
    u264 = (-(u13 - t12));
    if (!(0.0f > (u13 - t12))) {
        u264 = (u13 - t12);
    }
    if (u264 > u262) {
        u267 = *(float *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t270 = 0x1;
        if (u267 > 0.0f) {
        } else {
            t268 = 0x0;
            if (0.0f > u267) {
                t268 = 0xFFFFFFFF;
            }
            t270 = t268;
        }
        t274 = 0x1;
        if ((u10 - t9) > 0.0f) {
        } else {
            t272 = 0x0;
            if (0.0f > (u10 - t9)) {
                t272 = 0xFFFFFFFF;
            }
            t274 = t272;
        }
        u278 = u255;
        if (t270 != t274) {
        } else {
            u278 = (u255 + (*(float *)0x8C077BC0));
        }
        u300 = u278;
    } else {
        u282 = *(float *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t285 = 0x1;
        if (u282 > 0.0f) {
        } else {
            t283 = 0x0;
            if (0.0f > u282) {
                t283 = 0xFFFFFFFF;
            }
            t285 = t283;
        }
        t289 = 0x1;
        if ((u13 - t12) > 0.0f) {
        } else {
            t287 = 0x0;
            if (0.0f > (u13 - t12)) {
                t287 = 0xFFFFFFFF;
            }
            t289 = t287;
        }
        u293 = u255;
        if (t285 == t289) {
            u293 = (u255 + (*(float *)0x8C077BC0));
        }
        u300 = u293;
    }
    *(float *)((a5 + 0x1C)) = u300;
    return t195;
}

int cpuDblAimRateB(int a4, int a5)
{
    int t0;
    int t1;
    float u7;
    float u8;
    float u11;
    float u12;
    float u13;
    float u52;
    float u15;
    float t23;
    float u43;
    int t58;
    float t59;
    float t60;
    float u62;
    float u63;
    float u65;
    float u66;
    float u68;
    float u70;
    float t74;
    float u94;
    int t103;
    float t104;
    float t105;
    float u107;
    float u108;
    float u109;
    int t110;
    float t112;
    float u113;
    float t115;
    float u116;
    int t117;
    float t118;
    float t119;
    int t120;
    float t121;
    float t122;
    float t123;
    float u126;
    float u127;
    float u128;
    float u132;
    int t135;
    int t133;
    float u137;
    int t140;
    int t138;
    float u148;
    int t151;
    int t149;
    float u153;
    int t156;
    int t154;
    int t186;
    int t184;
    int t190;
    int t188;
    float u195;
    float u206;
    float u207;
    int t48;
    int t49;
    float u55;
    float u56;
    float u19;
    float u41;
    float u27;
    float u35;
    float u101;
    float u92;
    float u78;
    float u86;
    float u177;
    int t146;
    float u166;
    int t171;
    int stk[53];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(float *)(((((int)stk + 124) + 0x10) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 124) + 0x10) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 124) + 0x10) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        u7 = *(float *)((a4 + 0xBA4));
        u8 = (-u7);
        if (!(0.0f > u7)) {
            u8 = u7;
        }
        u11 = u7;
        u11 = u11 + ((u8 + 89.1374969f) * 0.5f) * (*(float *)((a4 + 0xB00)));
        u12 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u13 = (-u12);
        if (!(0.0f > u12)) {
            u13 = u12;
        }
        u52 = 0.0f;
        if (89.1374969f > u13) {
            u15 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
            *(float *)(((int)stk + 132)) = u15;
            *(float *)(((int)stk + 128)) = (u15 - u11);
            if (!(0.0f > (u15 - u11))) {
                u19 = (*(float *)(((int)stk + 128)));
            } else {
                u19 = ((-(*(float *)(((int)stk + 132)))) + u11);
            }
            t23 = nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u19));
            if (!(0.0f > t23)) {
                if (!(0.0f > ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u27 = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u27 = ((-(*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u41 = (nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u27)));
            } else {
                if (!(0.0f > ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u35 = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u35 = ((-(*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u41 = (-(nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u35))));
            }
            u43 = (-1.0f);
            u43 = u43 + (1.0f + 1.0f) * u41;
            u52 = (u43 * (1.0f + 1.0f));
        } else {
            t48 = t0;
            t49 = 0xD78;
            u55 = u12;
            u56 = ((u8 + 89.1374969f) * 0.5f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((0xAE8 + (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((0xB9C + a4)); }
        t58 = ((int (*)(int, int, int, Stk3, Stk3, Stk3, float, float))(cpuLineCrossXZ))((((int)stk + 88) + 0x40), t48, t49, *(Stk3 *)(((int)stk + 88)), *(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)), u55, u56);
        t59 = cpuDistXZ((0xAE8 + (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84)), (((int)stk + 124) + 0x1C));
        *(float *)(((int)stk + 120)) = t59;
        t60 = cpuDistXZ((0xB9C + a4), (((int)stk + 120) + 0x20));
        *(float *)(((int)stk + 120)) = (t59 / t60);
        u62 = ((t59 / t60) * (cpuDistXZ(a5, (0xB9C + a4))));
        u63 = (u52 + ((u62 * 5.0f) / 54.8499985f));
        if (0.0f > (u52 + ((u62 * 5.0f) / 54.8499985f))) {
            u63 = 0.0f;
        }
        u65 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u66 = (-u65);
        if (!(0.0f > u65)) {
            u66 = u65;
        }
        if (89.1374969f > u66) {
            u68 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0));
            *(float *)(((int)stk + 136)) = (u68 - u11);
            u70 = ((-u68) + u11);
            if (!(0.0f > (u68 - u11))) {
                u70 = (*(float *)(((int)stk + 136)));
            }
            t74 = nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u70));
            if (!(0.0f > t74)) {
                if (!(0.0f > ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u78 = ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u78 = ((-(*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u92 = (nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u78)));
            } else {
                if (!(0.0f > ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u86 = ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u86 = ((-(*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u92 = (-(nlCos((int)(((16384.0f / ((u8 + 89.1374969f) * 0.5f))) * u86))));
            }
            u94 = (-1.0f);
            u94 = u94 + (1.0f + 1.0f) * u92;
            *(float *)(((int)stk + 124)) = (u94 * (1.0f + 1.0f));
        } else {
            *(float *)(((int)stk + 124)) = 0.0f;
            u101 = u65;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((0xAE8 + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((0xB9C + a4)); }
        t103 = ((int (*)(int, Stk3, Stk3, Stk3, float))(cpuLineCrossXZ))((((int)stk + 88) + 0x40), *(Stk3 *)(((int)stk + 88)), *(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)), u101);
        t104 = cpuDistXZ((0xAE8 + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84)), (((int)stk + 124) + 0x1C));
        *(float *)(((int)stk + 120)) = t104;
        t105 = cpuDistXZ((0xB9C + a4), (((int)stk + 120) + 0x20));
        *(float *)(((int)stk + 120)) = (t104 / t105);
        u107 = *(float *)(((int)stk + 124));
        u108 = ((t104 / t105) * (cpuDistXZ(a5, (0xB9C + a4))));
        u109 = (u107 + ((u108 * 5.0f) / 54.8499985f));
        *(float *)(((int)stk + 124)) = (u107 + ((u108 * 5.0f) / 54.8499985f));
        t110 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x5));
        u206 = _builtin_sqrtf((u63 * u109));
        u207 = (_builtin_sqrtf((u63 * u109)) + (float)t110);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((0xB9C + a4)); }
        t112 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)), (*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))));
        u113 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + a4)); }
        t115 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 76)), *(Stk3 *)(((int)stk + 88)), (*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))));
        u116 = *(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t117 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((((int)stk + 40) + 0x70), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
        t118 = cpuDistXZ((0xAE8 + (((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84)), (((int)stk + 40) + 0x70));
        *(float *)(((int)stk + 36)) = t118;
        t119 = cpuDistXZ((0xB9C + a4), (((int)stk + 36) + 0x74));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 124) + 0x10)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t120 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((0x94 + ((int)stk + 4)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        t121 = cpuDistXZ((0xAE8 + (((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84)), (((int)stk + 124) + 0x1C));
        *(float *)(((int)stk + 120)) = t121;
        t122 = cpuDistXZ((0xB9C + a4), (((int)stk + 120) + 0x20));
        t123 = cpuDistXZ(a5, (0xB9C + a4));
        u126 = *(float *)((a5 + 0x8));
        u127 = ((_builtin_sqrtf(((t118 / t119) * (t121 / t122)))) * (nlPow(t123, 1.20000005f)));
        u128 = (-u126);
        if (!(0.0f > u126)) {
            u128 = u126;
        }
        if (u128 > 64.0f) {
            u132 = *(float *)((a4 + 0xAE8));
            t135 = 0x1;
            if (u132 > 0.0f) {
            } else {
                t133 = 0x0;
                if (0.0f > u132) {
                    t133 = 0xFFFFFFFF;
                }
                t135 = t133;
            }
            u137 = *(float *)((a5 + 0x0));
            t140 = 0x1;
            if (u137 > 0.0f) {
            } else {
                t138 = 0x0;
                if (0.0f > u137) {
                    t138 = 0xFFFFFFFF;
                }
                t140 = t138;
            }
            if (t135 == t140) {
                t146 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x0)));
            } else {
                t146 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x1)));
            }
            u177 = ((0.0f + ((u127 * 5.0f) / 54.8499985f)) + (float)t146);
        } else {
            u148 = *(float *)((a4 + 0xAE8));
            t151 = 0x1;
            if (u148 > 0.0f) {
            } else {
                t149 = 0x0;
                if (0.0f > u148) {
                    t149 = 0xFFFFFFFF;
                }
                t151 = t149;
            }
            u153 = *(float *)((a5 + 0x0));
            t156 = 0x1;
            if (u153 > 0.0f) {
            } else {
                t154 = 0x0;
                if (0.0f > u153) {
                    t154 = 0xFFFFFFFF;
                }
                t156 = t154;
            }
            if (t151 == t156) {
                u166 = (0.0f + ((u127 * 5.0f) / 54.8499985f));
                t171 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x4)));
            } else {
                u166 = ((0.0f + ((u127 * 5.0f) / 54.8499985f)) + (float)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x3))));
                t171 = (((int)((int)(nlRand()) % (int)0x5)) + 0xF);
            }
            u177 = (u166 + (float)t171);
        }
        t186 = 0x1;
        if ((u113 - t112) > 0.0f) {
        } else {
            t184 = 0x0;
            if (0.0f > (u113 - t112)) {
                t184 = 0xFFFFFFFF;
            }
            t186 = t184;
        }
        t190 = 0x1;
        if ((u116 - t115) > 0.0f) {
        } else {
            t188 = 0x0;
            if (0.0f > (u116 - t115)) {
                t188 = 0xFFFFFFFF;
            }
            t190 = t188;
        }
        u195 = u177;
        if (t186 == t190) {
        } else {
            u195 = (u177 + (float)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x2))));
        }
        u206 = (u116 - t115);
        u207 = u195;
    }
    *(float *)((a5 + 0x1C)) = (u207 + (float)((int)((int)(nlRand()) % (int)0x7)));
    return 0x1C;
}

int cpuSglAimAddReach(int a4, int a5)
{
    int t0;
    float u2;
    float u3;
    float u4;
    float u6;
    float u8;
    float u10;
    float u13;
    float u14;
    int t15;
    float u16;
    float u17;
    float u19;
    float u21;
    float u46;
    float u39;
    int t27;
    float u33;
    float u29;
    float u50;
    float u51;
    int t58;
    int t61;
    int t63;
    int t66;
    int t73;
    int t76;
    int t79;
    int stk[59];

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 40)) = ((t0 * 0x160) + 0x8C2FC69C);
    cpuShotRange(a4, (((int)stk + 36) + 0x2C), (((int)stk + 36) + 0x20), (((int)stk + 36) + 0x14), (((int)stk + 40) + 0x4));
    u2 = *(float *)(((int)stk + 80));
    u3 = *(float *)(((int)stk + 68));
    u4 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u6 = ((-u2) + u4);
    if (!(0.0f > (u2 - u4))) {
        u6 = (u2 - u4);
    }
    u8 = ((-u3) + u4);
    if (!(0.0f > (u3 - u4))) {
        u8 = (u3 - u4);
    }
    u10 = u3;
    if (u6 > u8) {
        u10 = u2;
    }
    u13 = *(float *)(((int)stk + 88));
    u14 = *(float *)(((int)stk + 76));
    t15 = *(short *)(((*(int *)(((int)stk + 40))) + 0x118));
    u16 = *(float *)((a4 + 0xAF0));
    u17 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u19 = ((-u16) + u17);
    if (!(0.0f > (u16 - u17))) {
        u19 = (u16 - u17);
    }
    u21 = *(float *)0x8C23D204;
    u46 = ((float)t15 + (((u19 / 6.0f) + 10.0f) / u21));
    if (((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) {
        u39 = (((float)t15 + (((u19 / 6.0f) + 10.0f) / u21)) * 0.0500000007f);
        if ((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C))) == 12) {
        } else {
            t27 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C));
            u33 = 0.699999988f;
            if ((int)t27 >= (int)0x9) {
                u29 = 0.699999988f;
                if ((int)t27 <= (int)0xC) {
                    u29 = 0.25f;
                }
                u33 = u29;
            }
            u39 = (((float)t15 + (((u19 / 6.0f) + 10.0f) / u21)) * u33);
        }
        u46 = u39;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + (((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84))); }
    cpuReachPoint((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84), (((int)stk + 40) + 0x34), (int)u46, *(Stk3 *)(((int)stk + 28)), (u16 - u17));
    u50 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u51 = (-u50);
    if (!(0.0f > u50)) {
        u51 = u50;
    }
    if (u51 > 88.8499985f) {
        *(float *)(((((int)stk + 40) + 0x28) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - u10);
        *(float *)(((((int)stk + 40) + 0x28) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 40) + 0x28) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - u14);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + a4)); }
        *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)))));
        *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
        t58 = cpuInFan(a4, (((int)stk + 40) + 0x34), *(Stk3 *)(((int)stk + 4)));
        t61 = a5;
        if (t58 == 0) {
            cpuAimPointSet(a5, 0x1, u10, u14);
            t61 = (a5 + 0x1);
        }
        *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = u10;
        *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = u13;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
        t63 = cpuInFan(a4, (((int)stk + 40) + 0x34), *(Stk3 *)(((int)stk + 28)));
        t66 = t61;
        if (t63 == 0) {
            cpuAimPointSet(t61, 0x1, u10, u13);
            t66 = (t61 + 0x1);
        }
        t79 = t66;
    } else {
        *(float *)(((((int)stk + 40) + 0x28) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - u10);
        *(float *)(((((int)stk + 40) + 0x28) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 40) + 0x28) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - u14);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + a4)); }
        *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)))));
        *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
        t73 = cpuInFan(a4, (((int)stk + 40) + 0x34), *(Stk3 *)(((int)stk + 4)));
        t76 = a5;
        if (t73 == 0) {
            cpuAimPointSet(a5, 0x1, u10, u14);
            t76 = (a5 + 0x1);
        }
        t79 = t76;
    }
    return t79;
}

void bodyCreate(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t14;
    int t15;
    int t16;
    int t17;
    int stk[254];

    stk[241] = a8;
    stk[242] = a9;
    stk[243] = a10;
    stk[244] = a11;
    stk[245] = a12;
    *(unsigned int *)(((int)stk + 20)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x328 + ((int)stk + 20))) = *(struct mv3 *)((0x3B4 + ((int)stk + 20))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x340 + ((int)stk + 20))) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x334 + ((int)stk + 20))) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)(((int)stk + 936)) = a4;
    *(unsigned int *)(((int)stk + 944)) = (*(int *)(((int)stk + 20)));
    *(float *)(((int)stk + 940)) = 0.0f;
    *(unsigned int *)(((int)stk + 948)) = a6;
    *(float *)(((int)stk + 864)) = 0.163333341f;
    *(float *)(((int)stk + 868)) = 0.5f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x328 + ((int)stk + 20))); }
    bodyInit((*(int *)(((int)stk + 20))));
    *(unsigned int *)(((int)stk + 952)) = 0x0;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x4))));
    nlGetMatrix((0x364 + ((int)stk + 4)));
    nlPopMatrix(0x1);
    bodyPlacePoints((((int)stk + 4) + 0x14));
    t14 = (((int)stk + 4) + 0x14);
    t15 = ((((int)stk + 4) + 0x14) + 932);
    t16 = (*(int *)(((0x3C0 + ((int)stk + 4)) + 0x0)));
    for (;;) { t17 = *(int *)t14; t14 = (t14 + 4); if ((unsigned int)t15 < (unsigned int)t14) break; *(unsigned int *)t16 = t17; t16 = (t16 + 4); }
}
