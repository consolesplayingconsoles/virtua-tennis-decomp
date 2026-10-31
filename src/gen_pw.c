/* Straight-line functions with calls and guards (batch gen_pw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
float nlPow(float, float);
float cpuDblAimRateC(int a4, int a5);

float cpuDblAimRateC(int a4, int a5)
{
    int stk[48];
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
    float t31;
    float t34;
    float t35;
    float t36;
    float u39;
    float u47;
    float u48;
    int t60;
    float u61;
    float u62;
    float t68;
    float t71;
    float t72;
    float t73;
    float u76;
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
    float u122;
    float u136;
    float u141;
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
    float u280;
    float u284;
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

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 84)) = ((((t0 + 0x2) & 0x3) * 0xD78) + (int)Player);
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
    *(unsigned int *)(((int)stk + 92)) = ((t0 * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 88)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 84))) + 0xB5C))) * 0x160));
    *(unsigned int *)(((int)stk + 76)) = (((t0 << 1) + (t0 << 2)) + 0x8C15A0F4);
    *(float *)(((((int)stk + 76) + 0x2C) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 76) + 0x2C) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 76) + 0x2C) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB9C + a4)); }
    t9 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), (*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
    u10 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t12 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
    u13 = *(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        u16 = *(float *)((a4 + 0xB9C));
        *(float *)(((int)stk + 108)) = (u16 + (((*(float *)((a5 + 0x0))) - u16) / (1.0f + 1.0f)));
        u17 = *(float *)((a4 + 0xBA4));
        *(float *)(((int)stk + 116)) = (u17 + (((*(float *)((a5 + 0x8))) - u17) / (1.0f + 1.0f)));
        u20 = *(float *)(((int)stk + 108));
        *(float *)(((int)stk + 96)) = (u20 + ((((*(float *)((a5 + 0x0))) - u20) * 1.0f) / 3.0f));
        u21 = *(float *)(((int)stk + 116));
        *(float *)(((int)stk + 104)) = (u21 + ((((*(float *)((a5 + 0x8))) - u21) * 1.0f) / 3.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t23 = ((int (*)(int, Stk3, Stk3, Stk3, float, float))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u21, 3.0f);
        u24 = *(float *)(((int)stk + 104));
        u25 = *(float *)(((int)stk + 140));
        if ((float)(((u25 - u24) > 0.0f) - (0.0f > (u25 - u24))) == (*(float *)((a4 + 0xB00)))) {
            t31 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t31;
            u54 = ((t31 / (cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x3C)))) * 0.100000001f);
        } else {
            *(unsigned int *)(((int)stk + 80)) = (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t34 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t34;
            t35 = cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x18));
            *(float *)(((int)stk + 72)) = (t34 / t35);
            t36 = cpuDistXZ((((int)stk + 72) + 0x24), (((int)stk + 72) + 0x3C));
            *(float *)(((int)stk + 68)) = t36;
            u39 = *(float *)(((*(int *)(((int)stk + 80))) + 0x30));
            u47 = ((float)((((*(int *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u47 = u47 + 1.0f * (float)((((float)((u39 > 0.0f) - (0.0f > u39)) == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            u48 = ((t34 / t35) * ((t36 / (cpuDistXZ((((int)stk + 68) + 0x28), (((int)stk + 68) + 0x1C)))) + 1.0f));
            u54 = (u48 * u47);
            u57 = u39;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t60 = ((int (*)(int, Stk3, Stk3, Stk3, float))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u57);
        u61 = *(float *)(((int)stk + 104));
        u62 = *(float *)(((int)stk + 140));
        if ((float)(((u62 - u61) > 0.0f) - (0.0f > (u62 - u61))) == (*(float *)((a4 + 0xB00)))) {
            t68 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t68;
            u92 = ((t68 / (cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x3C)))) * 0.100000001f);
        } else {
            *(unsigned int *)(((int)stk + 80)) = (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t71 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 76) + 0x38));
            *(float *)(((int)stk + 72)) = t71;
            t72 = cpuDistXZ((0xB9C + a4), (((int)stk + 72) + 0x18));
            *(float *)(((int)stk + 72)) = (t71 / t72);
            t73 = cpuDistXZ((((int)stk + 72) + 0x24), (((int)stk + 72) + 0x3C));
            *(float *)(((int)stk + 68)) = t73;
            u76 = *(float *)(((*(int *)(((int)stk + 80))) + 0x30));
            u84 = ((float)((((*(int *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u84 = u84 + 1.0f * (float)((((float)((u76 > 0.0f) - (0.0f > u76)) == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            u85 = ((t71 / t72) * ((t73 / (cpuDistXZ((((int)stk + 68) + 0x28), (((int)stk + 68) + 0x1C)))) + 1.0f));
            u92 = (u85 * u84);
        }
        t96 = cpuDistXZ(a5, (0xB9C + a4));
        t97 = nlPow(t96, 1.20000005f);
        u98 = _builtin_sqrtf((u54 * u92));
        u100 = (u98 * t97);
        u186 = (((u100 * 5.0f) / 54.8499985f) + (float)(*(signed char *)(((*(int *)(((int)stk + 76))) + 0x5))));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t102 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((((int)stk + 40) + 0x5C), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
        t103 = cpuDistXZ((0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 40) + 0x5C));
        *(float *)(((int)stk + 36)) = t103;
        t104 = cpuDistXZ((0xB9C + a4), (((int)stk + 36) + 0x60));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 76) + 0x2C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t105 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((0x80 + ((int)stk + 4)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        t106 = cpuDistXZ((0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player)), (((int)stk + 76) + 0x38));
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
            u122 = *(float *)((a5 + 0x0));
            if (((u117 > 0.0f) - (0.0f > u117)) == ((u122 > 0.0f) - (0.0f > u122))) {
                t134 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x0)));
            } else {
                t134 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x1)));
            }
            u156 = ((0.0f + ((u112 * 5.0f) / 54.8499985f)) + (float)t134);
        } else {
            u136 = *(float *)((a4 + 0xAE8));
            u141 = *(float *)((a5 + 0x0));
            if (((u136 > 0.0f) - (0.0f > u136)) == ((u141 > 0.0f) - (0.0f > u141))) {
                t150 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x4)));
            } else {
                t150 = (*(signed char *)(((*(int *)(((int)stk + 76))) + 0x3)));
            }
            u156 = ((0.0f + ((u112 * 5.0f) / 54.8499985f)) + (float)(t150 << 1));
        }
        u175 = u156;
        if ((((u10 - t9) > 0.0f) - (0.0f > (u10 - t9))) == (((u13 - t12) > 0.0f) - (0.0f > (u13 - t12)))) {
        } else {
            u175 = (u156 + (float)(*(signed char *)(((*(int *)(((int)stk + 76))) + 0x2))));
        }
        u186 = u175;
    }
    t194 = cpuDistXZ(a5, (0xAE8 + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player)));
    *(float *)(((int)stk + 72)) = t194;
    t195 = cpuDistXZ(a5, (0xAE8 + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player)));
    if (t195 > t194) {
        t203 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
        u214 = u186;
        if (((*(int *)0x8C287AF8) == t203) && (t204 = *(int *)((((t203 << 2) + 0x8C287AE0) + 0x0)), t204 == 0)) {
            u207 = ((u186 + (1.0f + 1.0f)) + 4.0f);
            if (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) == 0) {
                u207 = (u186 + (1.0f + 1.0f));
            }
            u214 = u207;
        }
        u235 = u214;
    } else {
        t217 = *(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
        u228 = u186;
        if (((*(int *)0x8C287AF8) == t217) && (t218 = *(int *)((((t217 << 2) + 0x8C287AE0) + 0x0)), t218 == 0)) {
            u221 = (u186 + (1.0f + 1.0f));
            if (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) != 0) {
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
        u269 = *(float *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        u280 = u255;
        if (((u269 > 0.0f) - (0.0f > u269)) != (((u10 - t9) > 0.0f) - (0.0f > (u10 - t9)))) {
        } else {
            u280 = (u255 + (*(float *)0x8C077BC0));
        }
        u302 = u280;
    } else {
        u284 = *(float *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        u295 = u255;
        if (((u284 > 0.0f) - (0.0f > u284)) == (((u13 - t12) > 0.0f) - (0.0f > (u13 - t12)))) {
            u295 = (u255 + (*(float *)0x8C077BC0));
        }
        u302 = u295;
    }
    *(float *)((a5 + 0x1C)) = u302;
    return t195;
}
