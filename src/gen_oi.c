/* Straight-line functions with calls and guards (batch gen_oi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, Stk3, Stk3, Stk3, float, float);
int cpuSglAimScoreAngle(int, int);
float cpuSglAimRateOpp(int a4, int a5);

float cpuSglAimRateOpp(int a4, int a5)
{
    int stk[32];
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
    register float u116;
    register int t57;
    register int t58;
    register float u59;
    register float t70;
    register float t71;
    register float t72;
    register int t73;
    register float u76;
    register float u77;
    register float t78;
    register float t79;
    register float t80;
    register float u82;
    register float u92;
    register float t93;
    register float t94;
    register float t95;
    register float u97;
    register float u52;
    register float u46;
    register int t56;
    register float u101;
    register float u68;
    register float u86;

    *(unsigned int *)(((int)stk + 40)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    cpuSglAimScoreAngle(a4, (*(int *)(((int)stk + 40))));
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
    *(float *)(((int)stk + 56)) = u17;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = u52;
    t55 = *(int *)(((int)stk + 40));
    u116 = 0.800000012f;
    if ((int)(t55 - 1) < 0) {
    } else {
        t57 = (t55 - 1);
        t58 = 0x8C2FCC6C;
        u59 = u52;
        for (;;) {
            *(float *)(((((int)stk + 40) + 0x1C) + 0x0)) = ((*(float *)((t58 + 0x0))) - (*(float *)((a4 + 0xB9C))));
            *(float *)(((((int)stk + 40) + 0x1C) + 0x4)) = 0.0f;
            *(float *)(((((int)stk + 40) + 0x1C) + 0x8)) = ((*(float *)((t58 + 0x8))) - (*(float *)((a4 + 0xBA4))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x10)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
            cpuLineCrossXZ((((int)stk + 4) + 0x28), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), u59, u17);
            if ((unsigned char)(*(signed char *)((t58 + 0xC))) == 1) {
                u59 = (*(float *)((t58 + 0x8)));
                if (!(0.0f > u59)) {
                    u68 = u59;
                } else {
                    u68 = (-u59);
                }
                if (!(u68 > 64.0f)) {
                    t56 = 0x8C10D41C;
                    t70 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                    t71 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                    t72 = cpuDistXZ(t58, (0xB9C + a4));
                    t73 = *(int *)0x8C1891E8;
                    u76 = ((((t70 / t71) * t72) / 118.849998f) / ((*(float *)(((((t73 << 2) << 1) + t56) + 0x0))) * (*(float *)(((((t73 << 2) << 1) + t56) + 0x4)))));
                    u59 = (u76 * 20.0f);
                    u86 = t72;
                } else {
                    u77 = *(float *)0x8C04EAF4;
                    t78 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                    t79 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                    t80 = cpuDistXZ(t58, (0xB9C + a4));
                    u82 = (((t78 / t79) * t80) / (*(float *)0x8C287B40));
                    u59 = (u82 * u77);
                    u86 = t80;
                }
                u101 = u86;
            } else {
                u92 = *(float *)0x8C04EAF4;
                t93 = cpuDistXZ((((int)stk + 40) + 0x10), (((int)stk + 40) + 0x4));
                t94 = cpuDistXZ((((int)stk + 40) + 0x4), (0xB9C + a4));
                t95 = cpuDistXZ(t58, (0xB9C + a4));
                u97 = (((t93 / t94) * t95) / (*(float *)0x8C287B40));
                u59 = (u97 * u92);
                u101 = t95;
            }
            t57 = (t57 - 1);
            *(float *)((t58 + 0x1C)) = u59;
            t58 = (t58 + 0x20);
            if ((int)t57 >= 0) continue;
            break;
        }
        u116 = u101;
    }
    return u116;
}
