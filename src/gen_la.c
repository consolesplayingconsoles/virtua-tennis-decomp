/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
float nlCos(int);
float nlPow(float, float);
int nlRand(void);
int cpuDblAimRateB(int a4, int a5);

int cpuDblAimRateB(int a4, int a5)
{
    int stk[53];
    int t0;
    int t1;
    float u7;
    float u8;
    float u11;
    float u12;
    float u13;
    float u52;
    float u15;
    float u22;
    float t23;
    float u30;
    float u38;
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
    float u73;
    float t74;
    float u81;
    float u89;
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
    float t124;
    float u125;
    float u126;
    float u127;
    float u128;
    float u132;
    float u137;
    float u148;
    float u153;
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
    float R1124;
    float R1128;
    float R1132;
    float R1136;

    R1124 = *(float *)((int)stk + 124);
    R1128 = *(float *)((int)stk + 128);
    R1132 = *(float *)((int)stk + 132);
    R1136 = *(float *)((int)stk + 136);

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
            R1132 = u15;
            R1128 = (u15 - u11);
            if (!(0.0f > (u15 - u11))) {
                u19 = (R1128);
            } else {
                u19 = ((-(R1132)) + u11);
            }
            u22 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
            t23 = nlCos((int)(u22 * u19));
            if (!(0.0f > t23)) {
                if (!(0.0f > ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u27 = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u27 = ((-(*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u30 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
                u41 = (nlCos((int)(u30 * u27)));
            } else {
                if (!(0.0f > ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u35 = ((*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u35 = ((-(*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u38 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
                u41 = (-(nlCos((int)(u38 * u35))));
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
            R1136 = (u68 - u11);
            u70 = ((-u68) + u11);
            if (!(0.0f > (u68 - u11))) {
                u70 = (R1136);
            }
            u73 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
            t74 = nlCos((int)(u73 * u70));
            if (!(0.0f > t74)) {
                if (!(0.0f > ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u78 = ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u78 = ((-(*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u81 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
                u92 = (nlCos((int)(u81 * u78)));
            } else {
                if (!(0.0f > ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11))) {
                    u86 = ((*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0))) - u11);
                } else {
                    u86 = ((-(*(float *)(((((0x3 & (t1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAF0)))) + u11);
                }
                u89 = (16384.0f / ((u8 + 89.1374969f) * 0.5f));
                u92 = (-(nlCos((int)(u89 * u86))));
            }
            u94 = (-1.0f);
            u94 = u94 + (1.0f + 1.0f) * u92;
            R1124 = (u94 * (1.0f + 1.0f));
        } else {
            R1124 = 0.0f;
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
        u107 = R1124;
        u108 = ((t104 / t105) * (cpuDistXZ(a5, (0xB9C + a4))));
        u109 = (u107 + ((u108 * 5.0f) / 54.8499985f));
        R1124 = (u107 + ((u108 * 5.0f) / 54.8499985f));
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
        t124 = nlPow(t123, 1.20000005f);
        u125 = _builtin_sqrtf(((t118 / t119) * (t121 / t122)));
        u126 = *(float *)((a5 + 0x8));
        u127 = (u125 * t124);
        u128 = (-u126);
        if (!(0.0f > u126)) {
            u128 = u126;
        }
        if (u128 > 64.0f) {
            u132 = *(float *)((a4 + 0xAE8));
            u137 = *(float *)((a5 + 0x0));
            if (((u132 > 0.0f) - (0.0f > u132)) == ((u137 > 0.0f) - (0.0f > u137))) {
                t146 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x0)));
            } else {
                t146 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x1)));
            }
            u177 = ((0.0f + ((u127 * 5.0f) / 54.8499985f)) + (float)t146);
        } else {
            u148 = *(float *)((a4 + 0xAE8));
            u153 = *(float *)((a5 + 0x0));
            if (((u148 > 0.0f) - (0.0f > u148)) == ((u153 > 0.0f) - (0.0f > u153))) {
                u166 = (0.0f + ((u127 * 5.0f) / 54.8499985f));
                t171 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x4)));
            } else {
                u166 = ((0.0f + ((u127 * 5.0f) / 54.8499985f)) + (float)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x3))));
                t171 = (((int)((int)(nlRand()) % (int)0x5)) + 0xF);
            }
            u177 = (u166 + (float)t171);
        }
        u195 = u177;
        if ((((u113 - t112) > 0.0f) - (0.0f > (u113 - t112))) == (((u116 - t115) > 0.0f) - (0.0f > (u116 - t115)))) {
        } else {
            u195 = (u177 + (float)(*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x2))));
        }
        u206 = (u116 - t115);
        u207 = u195;
    }
    *(float *)((a5 + 0x1C)) = (u207 + (float)((int)((int)(nlRand()) % (int)0x7)));
    return 0x1C;
}
