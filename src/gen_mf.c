/* Straight-line functions with calls and guards (batch gen_mf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, Stk3, Stk3, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuSglAimScoreAngle(int, int);
float cpuSglAimRateOpp2(int a4, int a5);

float cpuSglAimRateOpp2(int a4, int a5)
{
    int stk[38];
    register int t0;
    register int t1;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u17;
    register float u21;
    register float u23;
    register float u24;
    register float u27;
    register float u33;
    register float u39;
    register int t55;
    register float u184;
    register int t56;
    register int t57;
    register float t63;
    register float u64;
    register float t68;
    register float t69;
    register float t70;
    register float u72;
    register float u73;
    register float u78;
    register float u91;
    register float u84;
    register float u85;
    register float u87;
    register float u88;
    register float u94;
    register float u95;
    register float t97;
    register float t98;
    register float t99;
    register float u101;
    register float u102;
    register float u107;
    register float u120;
    register float u113;
    register float u114;
    register float u116;
    register float u117;
    register float t123;
    register float t124;
    register float t125;
    register int t126;
    register float u129;
    register float u130;
    register float u135;
    register float u148;
    register float u141;
    register float u142;
    register float u144;
    register float u145;
    register float u52;
    register float u46;
    register float u169;
    register float u173;
    register float u156;
    register float u160;

    *(unsigned int *)(((int)stk + 64)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    cpuSglAimScoreAngle(a4, (*(int *)(((int)stk + 64))));
    u5 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u7 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u7 = u7 + 0.800000012f * (u5 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u8 = *(float *)0x8C287B40;
    u9 = (-u7);
    if (!(0.0f > u7)) {
        u9 = u7;
    }
    u17 = u7;
    if (u9 > u8) {
        u17 = ((float)((u7 > 0.0f) - (0.0f > u7)) * u8);
    }
    u21 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
    u23 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u23 = u23 + 0.800000012f * (u21 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u24 = (-u23);
    if (!(0.0f > u23)) {
        u24 = u23;
    }
    if (u24 > 118.849998f) {
        u52 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u27 = (-u23);
        if (!(0.0f > u23)) {
            u27 = u23;
        }
        if (!(23.7700005f > u27)) {
            u33 = *(float *)((a4 + 0xB00));
            u39 = u23;
            if (((u23 > 0.0f) - (0.0f > u23)) != ((u33 > 0.0f) - (0.0f > u33))) {
                u39 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
            }
            u46 = u39;
        } else {
            u46 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
        }
        u52 = u46;
    }
    *(float *)(((int)stk + 80)) = u17;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 88)) = u52;
    t55 = *(int *)(((int)stk + 64));
    u184 = 0.800000012f;
    if ((int)(t55 - 1) >= 0) {
        t56 = (t55 - 1);
        t57 = 0x8C2FCC6C;
        for (;;) {
            *(float *)(((((int)stk + 64) + 0x1C) + 0x0)) = ((*(float *)((t57 + 0x0))) - (*(float *)((a4 + 0xB9C))));
            *(float *)(((((int)stk + 64) + 0x1C) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 64) + 0x1C) + 0x8)) = ((*(float *)((t57 + 0x8))) - (*(float *)((a4 + 0xBA4))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
            t63 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), (*(float *)(((int)stk + 88))));
            u64 = *(float *)(((int)stk + 80));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x28)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
            cpuLineCrossXZ((((int)stk + 4) + 0x40), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if ((unsigned char)(*(signed char *)((t57 + 0xC))) != 1) {
                t68 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                *(float *)(((int)stk + 60)) = t68;
                t69 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                *(float *)(((int)stk + 60)) = (t68 / t69);
                t70 = cpuDistXZ(t57, (0xB9C + a4));
                u72 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                u73 = (((t68 / t69) * t70) / (*(float *)0x8C287B40));
                u78 = *(float *)(((int)stk + 80));
                u91 = (u73 * 10.0f);
                if (((u72 > 0.0f) - (0.0f > u72)) == (((u78 - (u64 - t63)) > 0.0f) - (0.0f > (u78 - (u64 - t63))))) {
                    u84 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u85 = (-u84);
                    if (!(0.0f > u84)) {
                        u85 = u84;
                    }
                    u87 = (u73 * 10.0f);
                    u88 = (u85 * 4.0f);
                    u91 = (u87 * u88);
                }
                u169 = t70;
                u173 = u91;
            } else {
                u94 = *(float *)((t57 + 0x8));
                u95 = (-u94);
                if (!(0.0f > u94)) {
                    u95 = u94;
                }
                if (u95 > 64.0f) {
                    t97 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                    *(float *)(((int)stk + 60)) = t97;
                    t98 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                    *(float *)(((int)stk + 60)) = (t97 / t98);
                    t99 = cpuDistXZ(t57, (0xB9C + a4));
                    u101 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u102 = (((t97 / t98) * t99) / (*(float *)0x8C287B40));
                    u107 = *(float *)(((int)stk + 80));
                    u120 = (u102 * 10.0f);
                    if (((u101 > 0.0f) - (0.0f > u101)) != (((u107 - (u64 - t63)) > 0.0f) - (0.0f > (u107 - (u64 - t63))))) {
                    } else {
                        u113 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        u114 = (-u113);
                        if (!(0.0f > u113)) {
                            u114 = u113;
                        }
                        u116 = (u102 * 10.0f);
                        u117 = (u114 * 4.0f);
                        u120 = (u116 * u117);
                    }
                    u156 = t99;
                    u160 = u120;
                } else {
                    t123 = cpuDistXZ((((int)stk + 64) + 0x10), (((int)stk + 64) + 0x4));
                    *(float *)(((int)stk + 60)) = t123;
                    t124 = cpuDistXZ((((int)stk + 60) + 0x8), (0xB9C + a4));
                    *(float *)(((int)stk + 60)) = (t123 / t124);
                    t125 = cpuDistXZ(t57, (0xB9C + a4));
                    t126 = *(int *)0x8C1891E8;
                    u129 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                    u130 = ((((t123 / t124) * t125) / 118.849998f) / ((*(float *)(((((t126 << 2) << 1) + 0x8C10D41C) + 0x0))) * (*(float *)(((((t126 << 2) << 1) + 0x8C10D41C) + 0x4)))));
                    u135 = *(float *)(((int)stk + 80));
                    u148 = (u130 * 20.0f);
                    if (((u129 > 0.0f) - (0.0f > u129)) == (((u135 - (u64 - t63)) > 0.0f) - (0.0f > (u135 - (u64 - t63))))) {
                        u141 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                        u142 = (-u141);
                        if (!(0.0f > u141)) {
                            u142 = u141;
                        }
                        u144 = (u130 * 20.0f);
                        u145 = (u142 * 4.0f);
                        u148 = (u144 * u145);
                    }
                    u156 = t125;
                    u160 = u148;
                }
                u169 = u156;
                u173 = u160;
            }
            t56 = (t56 - 1);
            *(float *)((t57 + 0x1C)) = u173;
            t57 = (t57 + 0x20);
            if ((int)t56 >= 0) continue;
            break;
        }
        u184 = u169;
    }
    return u184;
}
