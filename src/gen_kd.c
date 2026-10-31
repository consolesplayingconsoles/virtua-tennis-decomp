/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
float cpuLineXAtZ(Stk3, Stk3, float);
float cpuDblAimRateE(int a4, int a5);

float cpuDblAimRateE(int a4, int a5)
{
    int stk[28];
    int t0;
    float t7;
    float u9;
    float u10;
    float t13;
    int t16;
    float u17;
    float u18;
    float u22;
    float u27;
    int t32;
    int t33;
    float u39;
    float u44;
    int t71;
    int t69;
    float u84;
    float u85;
    int t92;
    float u88;
    float u89;
    int t98;
    float u102;
    float u103;
    float u110;
    float u117;
    float u122;
    float u127;
    float u130;
    float u134;
    float t150;
    float u151;
    float u153;
    float u155;
    float u157;
    float u159;
    int t164;
    float u161;
    float u182;
    float u184;
    float u185;
    int t192;
    float u187;
    float u189;
    int t76;
    int t55;
    int t35;
    int t51;
    float u145;
    float u138;
    int t176;
    int t170;

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 52)) = ((int)Player + ((((*(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + (int)Player) + 0xB5C))) + 0x2) & 0x3) * 0xD78));
    *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t7 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + (int)Player) + 0xAF0))));
    u9 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + (int)Player) + 0xAE8));
    u10 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
    t13 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)(((*(int *)(((int)stk + 52))) + 0xAF0))));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        t16 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x5));
        t76 = (0x0 + ((t16 << 2) + t16));
    } else {
        u17 = *(float *)((a5 + 0x8));
        u18 = (-u17);
        if (!(0.0f > u17)) {
            u18 = u17;
        }
        if (u18 > 64.0f) {
            u22 = *(float *)((a4 + 0xAE8));
            u27 = *(float *)((a5 + 0x0));
            if (((u22 > 0.0f) - (0.0f > u22)) == ((u27 > 0.0f) - (0.0f > u27))) {
                t32 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x0));
                t35 = (0x0 + ((t32 << 2) + t32));
            } else {
                t33 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x1));
                t35 = (0x0 + ((t33 << 2) + t33));
            }
            t55 = t35;
        } else {
            u39 = *(float *)((a4 + 0xAE8));
            u44 = *(float *)((a5 + 0x0));
            if (((u39 > 0.0f) - (0.0f > u39)) == ((u44 > 0.0f) - (0.0f > u44))) {
                t51 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x4)));
            } else {
                t51 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x3)));
            }
            t55 = (0x0 + ((t51 << 2) + t51));
        }
        t71 = t55;
        if ((((u9 - t7) > 0.0f) - (0.0f > (u9 - t7))) != (((u10 - t13) > 0.0f) - (0.0f > (u10 - t13)))) {
            t69 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x2));
            t71 = (t55 + ((t69 << 2) + t69));
        }
        t76 = t71;
    }
    u84 = *(float *)((a5 + 0x0));
    u85 = (-u84);
    if (!(0.0f > u84)) {
        u85 = u84;
    }
    t92 = t76;
    if (u85 > 41.1499977f) {
        u88 = *(float *)((a5 + 0x0));
        u89 = (-u88);
        if (!(0.0f > u88)) {
            u89 = u88;
        }
        t92 = (int)((float)t76 - (u89 + -41.1499977f));
    }
    t98 = *(int *)((a4 + 0xB5C));
    u102 = (*(float *)0x8C28886C);
    u102 = u102 + 0.800000012f * ((*(float *)0x8C2FC6C4) * (float)(*(short *)(((0x8C2FC69C + (t98 * 0x160)) + 0x118))));
    u103 = (-u102);
    if (!(0.0f > u102)) {
        u103 = u102;
    }
    u110 = u102;
    if (u103 > 39.8499985f) {
        u110 = ((float)((u102 > 0.0f) - (0.0f > u102)) * 39.8499985f);
    }
    u117 = (*(float *)0x8C288874);
    u117 = u117 + 0.800000012f * ((*(float *)0x8C2FC6CC) * (float)(*(short *)(((0x8C2FC69C + (t98 * 0x160)) + 0x118))));
    u122 = *(float *)0x8C288884;
    if (((u117 > 0.0f) - (0.0f > u117)) != ((u122 > 0.0f) - (0.0f > u122))) {
        u127 = (-u117);
        if (!(0.0f > u117)) {
            u127 = u117;
        }
        if (35.6550026f > u127) {
            u138 = (-((*(float *)0x8C288884) * 35.6550026f));
        } else {
            u130 = (-u117);
            if (!(0.0f > u117)) {
                u130 = u117;
            }
            u134 = u117;
            if (u130 > 130.735001f) {
                u134 = (-((*(float *)0x8C288884) * 130.735001f));
            }
            u138 = u134;
        }
        u145 = u138;
    } else {
        u145 = (-((*(float *)0x8C288884) * 35.6550026f));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t150 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), u145);
    u151 = (u110 - t150);
    if (!(0.0f > (t150 - u110))) {
        u151 = (t150 - u110);
    }
    if (5.0f > u151) {
        u153 = (u110 - t150);
        if (!(0.0f > (t150 - u110))) {
            u153 = (t150 - u110);
        }
        t176 = (int)((float)t92 - u153);
    } else {
        u155 = (u110 - t150);
        if (!(0.0f > (t150 - u110))) {
            u155 = (t150 - u110);
        }
        if (15.0f > u155) {
            u157 = (u110 - t150);
            if (!(0.0f > (t150 - u110))) {
                u157 = (t150 - u110);
            }
            t170 = (int)((float)t92 + (((-u157) + 30.0f) * 0.5f));
        } else {
            u159 = (u110 - t150);
            if (!(0.0f > (t150 - u110))) {
                u159 = (t150 - u110);
            }
            t164 = t92;
            if (30.0f > u159) {
                u161 = (u110 - t150);
                if (!(0.0f > (t150 - u110))) {
                    u161 = (t150 - u110);
                }
                t164 = (int)((float)t92 - (u161 * 0.200000003f));
            }
            t170 = t164;
        }
        t176 = t170;
    }
    u182 = (-u145);
    if (!(0.0f > u145)) {
        u182 = u145;
    }
    u184 = *(float *)((a5 + 0x8));
    u185 = (-u184);
    if (!(0.0f > u184)) {
        u185 = u184;
    }
    t192 = t176;
    if (u182 > u185) {
        u187 = *(float *)((a5 + 0x8));
        u189 = ((-u145) + u187);
        if (!(0.0f > (u145 - u187))) {
            u189 = (u145 - u187);
        }
        t192 = (int)((float)t176 - (u189 * 0.100000001f));
    }
    *(float *)((a5 + 0x1C)) = (float)t192;
    return (t150 - u110);
}
