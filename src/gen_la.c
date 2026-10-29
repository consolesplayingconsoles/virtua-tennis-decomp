/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
float nlPow(float, float);
float cpuDblAimRateC(int a4, int a5);

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
    float u48;
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
    float u85;
    float t96;
    float t97;
    float u98;
    float u100;
    int t102;
    float t103;
    float t104;
    int t105;
    float t106;
    float t107;
    float t108;
    float t109;
    float u110;
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
    float u263;
    float u262;
    float u266;
    float u265;
    float u269;
    int t272;
    int t270;
    int t276;
    int t274;
    float u280;
    float u284;
    int t287;
    int t285;
    int t291;
    int t289;
    float u295;
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
    float u302;
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
            u48 = ((t34 / t35) * ((t36 / t37) + 1.0f));
            u54 = (u48 * u47);
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
            u85 = ((t71 / t72) * ((t73 / t74) + 1.0f));
            u92 = (u85 * u84);
        }
        t96 = cpuDistXZ(a5, (0xB9C + a4));
        t97 = nlPow(t96, 1.20000005f);
        u98 = _builtin_sqrtf((u54 * u92));
        u100 = (u98 * t97);
        u186 = (((u100 * 5.0f) / 54.8499985f) + (float)(*(signed char *)(((*(int *)(((int)stk + 76))) + 0x5))));
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
        t109 = nlPow(t108, 1.20000005f);
        u110 = _builtin_sqrtf(((t103 / t104) * (t106 / t107)));
        u111 = *(float *)((a5 + 0x8));
        u112 = (u110 * t109);
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
    u263 = (u10 - t9);
    if (!(0.0f > (u10 - t9))) {
    } else {
        u262 = (u10 - t9);
        u262 = -u262;
        u263 = u262;
    }
    u266 = (u13 - t12);
    if (!(0.0f > (u13 - t12))) {
    } else {
        u265 = (u13 - t12);
        u265 = -u265;
        u266 = u265;
    }
    if (u266 > u263) {
        u269 = *(float *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t272 = 0x1;
        if (u269 > 0.0f) {
        } else {
            t270 = 0x0;
            if (0.0f > u269) {
                t270 = 0xFFFFFFFF;
            }
            t272 = t270;
        }
        t276 = 0x1;
        if ((u10 - t9) > 0.0f) {
        } else {
            t274 = 0x0;
            if (0.0f > (u10 - t9)) {
                t274 = 0xFFFFFFFF;
            }
            t276 = t274;
        }
        u280 = u255;
        if (t272 != t276) {
        } else {
            u280 = (u255 + (*(float *)0x8C077BC0));
        }
        u302 = u280;
    } else {
        u284 = *(float *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t287 = 0x1;
        if (u284 > 0.0f) {
        } else {
            t285 = 0x0;
            if (0.0f > u284) {
                t285 = 0xFFFFFFFF;
            }
            t287 = t285;
        }
        t291 = 0x1;
        if ((u13 - t12) > 0.0f) {
        } else {
            t289 = 0x0;
            if (0.0f > (u13 - t12)) {
                t289 = 0xFFFFFFFF;
            }
            t291 = t289;
        }
        u295 = u255;
        if (t287 == t291) {
            u295 = (u255 + (*(float *)0x8C077BC0));
        }
        u302 = u295;
    }
    *(float *)((a5 + 0x1C)) = u302;
    return t195;
}
