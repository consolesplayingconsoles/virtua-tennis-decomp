/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuShotRange(int, int, int, int, int);
int emotDebugPrint(int);
int emotGraphDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int emotKeyAdd(int, int);
int emotKeyDel(int, int, int);
float nlInnerProduct(int, int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int nlRand(void);
float nlScalor(int);
int nlSetFontSize(int, int);
int padDirRepeat(int, int);
int cpuDblAimRateA(int a4, int a5, int a6, int a7, float f4, float f5);
float cpuDblAimRateE(int a4, int a5);
int cpuDblAimAddCross(int a4, int a5);
int emotEditExec(int a4);


float cpuDblAimRateE(int a4, int a5)
{
    int t0;
    float t7;
    float u9;
    float u10;
    float t13;
    int t16;
    float u17;
    float u18;
    float u22;
    int t25;
    int t23;
    float u27;
    int t30;
    int t28;
    int t32;
    int t33;
    float u39;
    int t42;
    int t40;
    float u44;
    int t47;
    int t45;
    int t63;
    int t61;
    int t67;
    int t65;
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
    int t107;
    int t105;
    float u117;
    int t120;
    int t118;
    float u122;
    int t125;
    int t123;
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
    int stk[28];

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 52)) = (0x8C287D84 + ((((*(int *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C))) + 0x2) & 0x3) * 0xD78));
    *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t7 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0))));
    u9 = *(float *)(((((0x3 & ((-t0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
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
            t25 = 0x1;
            if (u22 > 0.0f) {
            } else {
                t23 = 0x0;
                if (0.0f > u22) {
                    t23 = 0xFFFFFFFF;
                }
                t25 = t23;
            }
            u27 = *(float *)((a5 + 0x0));
            t30 = 0x1;
            if (u27 > 0.0f) {
            } else {
                t28 = 0x0;
                if (0.0f > u27) {
                    t28 = 0xFFFFFFFF;
                }
                t30 = t28;
            }
            if (t25 == t30) {
                t32 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x0));
                t35 = (0x0 + ((t32 << 2) + t32));
            } else {
                t33 = *(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x1));
                t35 = (0x0 + ((t33 << 2) + t33));
            }
            t55 = t35;
        } else {
            u39 = *(float *)((a4 + 0xAE8));
            t42 = 0x1;
            if (u39 > 0.0f) {
            } else {
                t40 = 0x0;
                if (0.0f > u39) {
                    t40 = 0xFFFFFFFF;
                }
                t42 = t40;
            }
            u44 = *(float *)((a5 + 0x0));
            t47 = 0x1;
            if (u44 > 0.0f) {
            } else {
                t45 = 0x0;
                if (0.0f > u44) {
                    t45 = 0xFFFFFFFF;
                }
                t47 = t45;
            }
            if (t42 == t47) {
                t51 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x4)));
            } else {
                t51 = (*(signed char *)(((((t0 << 1) + (t0 << 2)) + 0x8C15A0F4) + 0x3)));
            }
            t55 = (0x0 + ((t51 << 2) + t51));
        }
        t63 = 0x1;
        if ((u9 - t7) > 0.0f) {
        } else {
            t61 = 0x0;
            if (0.0f > (u9 - t7)) {
                t61 = 0xFFFFFFFF;
            }
            t63 = t61;
        }
        t67 = 0x1;
        if ((u10 - t13) > 0.0f) {
        } else {
            t65 = 0x0;
            if (0.0f > (u10 - t13)) {
                t65 = 0xFFFFFFFF;
            }
            t67 = t65;
        }
        t71 = t55;
        if (t63 != t67) {
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
        t107 = 0x1;
        if (u102 > 0.0f) {
        } else {
            t105 = 0x0;
            if (0.0f > u102) {
                t105 = 0xFFFFFFFF;
            }
            t107 = t105;
        }
        u110 = ((float)t107 * 39.8499985f);
    }
    u117 = (*(float *)0x8C288874);
    u117 = u117 + 0.800000012f * ((*(float *)0x8C2FC6CC) * (float)(*(short *)(((0x8C2FC69C + (t98 * 0x160)) + 0x118))));
    t120 = 0x1;
    if (u117 > 0.0f) {
    } else {
        t118 = 0x0;
        if (0.0f > u117) {
            t118 = 0xFFFFFFFF;
        }
        t120 = t118;
    }
    u122 = *(float *)0x8C288884;
    t125 = 0x1;
    if (u122 > 0.0f) {
    } else {
        t123 = 0x0;
        if (0.0f > u122) {
            t123 = 0xFFFFFFFF;
        }
        t125 = t123;
    }
    if (t120 != t125) {
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

int cpuDblAimAddCross(int a4, int a5)
{
    int t0;
    float u2;
    float u3;
    int t6;
    int t4;
    float u8;
    int t11;
    int t9;
    int t80;
    float u13;
    float u14;
    float u16;
    float u18;
    float u19;
    float u21;
    int t63;
    int t46;
    float u36;
    float u37;
    int t40;
    int t38;
    float t94;
    int t197;
    float t105;
    float u106;
    int t109;
    int t107;
    float u111;
    int t114;
    int t112;
    float u116;
    float u117;
    float u118;
    float u120;
    float t136;
    float t138;
    float u139;
    float u141;
    float u143;
    float u144;
    float u146;
    int t180;
    int t166;
    float u28;
    float u34;
    float u153;
    float u160;
    int stk[46];

    *(unsigned int *)(((int)stk + 52)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    cpuShotRange(a4, (((int)stk + 48) + 0x50), (((int)stk + 48) + 0x44), (((int)stk + 48) + 0x38), (((int)stk + 52) + 0x28));
    u2 = *(float *)((a4 + 0xB9C));
    u3 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    t6 = 0x1;
    if ((u2 - u3) > 0.0f) {
    } else {
        t4 = 0x0;
        if (0.0f > (u2 - u3)) {
            t4 = 0xFFFFFFFF;
        }
        t6 = t4;
    }
    u8 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    t11 = 0x1;
    if ((u2 - u8) > 0.0f) {
    } else {
        t9 = 0x0;
        if (0.0f > (u2 - u8)) {
            t9 = 0xFFFFFFFF;
        }
        t11 = t9;
    }
    t80 = a5;
    if (t6 == t11) {
        u13 = *(float *)((a4 + 0xB9C));
        u14 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u16 = ((-u13) + u14);
        if (!(0.0f > (u13 - u14))) {
            u16 = (u13 - u14);
        }
        u18 = *(float *)((a4 + 0xAF0));
        u19 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u21 = ((-u18) + u19);
        if (!(0.0f > (u18 - u19))) {
            u21 = (u18 - u19);
        }
        t63 = a5;
        if (u16 > (((u21 * 45.0f) / 237.699997f) + 10.0f)) {
            if (!(0.0f > (u13 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))))) {
                u28 = (u13 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
            } else {
                u28 = ((-u13) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
            }
            if (!(0.0f > (u18 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)))))) {
                u34 = (u18 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
            } else {
                u34 = ((-u18) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
            }
            t46 = a5;
            if (u28 > (((u34 * 45.0f) / 237.699997f) + 10.0f)) {
                u36 = *(float *)((a4 + 0xB00));
                u37 = *(float *)((a4 + 0xB9C));
                t40 = 0x1;
                if (u37 > 0.0f) {
                } else {
                    t38 = 0x0;
                    if (0.0f > u37) {
                        t38 = 0xFFFFFFFF;
                    }
                    t40 = t38;
                }
                cpuAimPointSet(a5, 0x1, ((float)t40 * 54.8499985f), (u36 * 118.849998f));
                t46 = (a5 + 0x1);
            }
            t63 = t46;
        }
        t80 = t63;
    }
    t94 = cpuDistXZ((0xAE8 + ((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84)), (0xAE8 + ((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84)));
    t197 = t80;
    if (!(t94 > 30.0f)) {
    } else {
        *(float *)(((((int)stk + 52) + 0x1C) + 0x0)) = (((*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))) * 0.5f);
        *(float *)(((((int)stk + 52) + 0x1C) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 52) + 0x1C) + 0x8)) = (((*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)))) * 0.5f);
        *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x1C) + 0x0))));
        *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x1C) + 0x8))));
        *(float *)(((((int)stk + 52) + 0x10) + 0x8)) = (*(float *)(((int)stk + 124)));
        *(float *)(((((int)stk + 52) + 0x10) + 0x4)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
        t105 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
        *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = t105;
        u106 = *(float *)(((int)stk + 128));
        t109 = 0x1;
        if ((t105 - u106) > 0.0f) {
        } else {
            t107 = 0x0;
            if (0.0f > (t105 - u106)) {
                t107 = 0xFFFFFFFF;
            }
            t109 = t107;
        }
        u111 = *(float *)(((int)stk + 116));
        t114 = 0x1;
        if ((t105 - u111) > 0.0f) {
        } else {
            t112 = 0x0;
            if (0.0f > (t105 - u111)) {
                t112 = 0xFFFFFFFF;
            }
            t114 = t112;
        }
        if (t109 == t114) {
            u116 = *(float *)(((((int)stk + 52) + 0x10) + 0x0));
            u117 = *(float *)(((int)stk + 116));
            u118 = ((-u116) + u106);
            if (!(0.0f > (u116 - u106))) {
                u118 = (u116 - u106);
            }
            u120 = ((-u116) + u117);
            if (!(0.0f > (u116 - u117))) {
                u120 = (u116 - u117);
            }
            if (u120 > u118) {
                *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = u106;
            } else {
                *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = u117;
            }
        }
        *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x10) + 0x0))));
        *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
        t136 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t138 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
        u139 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u141 = ((-t136) + u139);
        if (!(0.0f > (t136 - u139))) {
            u141 = (t136 - u139);
        }
        u143 = *(float *)((a4 + 0xAF0));
        u144 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u146 = ((-u143) + u144);
        if (!(0.0f > (u143 - u144))) {
            u146 = (u143 - u144);
        }
        t180 = t80;
        if (u141 > (((u146 * 35.0f) / 237.699997f) + 5.0f)) {
            if (!(0.0f > (t138 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))))) {
                u153 = (t138 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
            } else {
                u153 = ((-t138) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
            }
            if (!(0.0f > (u143 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)))))) {
                u160 = (u143 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
            } else {
                u160 = ((-u143) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))));
            }
            t166 = t80;
            if (u153 > (((u160 * 35.0f) / 237.699997f) + 5.0f)) {
                cpuAimPointSet(t80, 0x1, (*(float *)(((((int)stk + 52) + 0x10) + 0x0))), (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
                t166 = (t80 + 0x1);
            }
            t180 = t166;
        }
        t197 = t180;
    }
    return (t197 - (*(int *)(((int)stk + 52))));
}

int emotEditExec(int a4)
{
    int t1;
    int t3;
    int t11;
    int t31;
    int t32;
    int t44;
    int t52;
    int t66;
    int t72;
    int t86;
    int t117;
    int t123;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    L_8C0BD652:;
    *(unsigned int *)(((int)stk + 12)) = R4;
    nlLocate(0x1E, 0x1E);
    t1 = *(int *)(((int)stk + 12));
    t3 = (padDirRepeat(0x0, 0x40)) == 0;
    R10 = (0x0);
    R12 = (0x8C0300E0);
    R13 = (0x8C34B4F4);
    R14 = ((t1 * 0x270));
    R8 = (0x8C1AA4B8);
    if (t3) goto L_8C0BD690;
    goto L_8C0BD68C;
    L_8C0BD68C:;
    goto L_8C0BD964;
    L_8C0BD964:;
    if (((*(int *)((R8 + 0x0))) == 0)) goto L_8C0BD9B2;
    goto L_8C0BD96A;
    L_8C0BD96A:;
    t11 = *(int *)(((R14 + R13) + 0x268));
    *(unsigned int *)(((R14 + R13) + 0x26C)) = ((*(int *)(((R14 + R13) + 0x26C))) + 0x1);
    R4 = (t11);
    if (((*(int *)(((R14 + R13) + 0x26C))) != 120)) goto L_8C0BD98C;
    goto L_8C0BD980;
    L_8C0BD980:;
    *(unsigned int *)(((R14 + R13) + 0x26C)) = R10;
    *(unsigned int *)(((R14 + R13) + 0x268)) = R10;
    goto L_8C0BD98C;
    L_8C0BD98C:;
    if (((*(int *)(((R14 + R13) + 0x26C))) != (*(int *)((((((R4 << 1) + R4) << 2) + (R14 + R13)) + 0xC))))) goto L_8C0BD9B2;
    goto L_8C0BD9A6;
    L_8C0BD9A6:;
    *(unsigned int *)(((R14 + R13) + 0x268)) = ((*(int *)(((R14 + R13) + 0x268))) + 0x1);
    goto L_8C0BD9B2;
    L_8C0BD9B2:;
    R4 = (R13);
    if (((*(int *)(((R14 + R13) + 0x26C))) != 0)) goto L_8C0BD9C6;
    goto L_8C0BD9C0;
    L_8C0BD9C0:;
    *(unsigned int *)(((R4 + R14) + 0x268)) = R10;
    R4 = ((R4 + R14));
    goto L_8C0BD9C6;
    L_8C0BD9C6:;
    emotGraphDraw((*(int *)(((int)stk + 12))), 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    *(unsigned int *)0x8C36FE00 = (*(int *)(((R14 + R13) + 0x26C)));
    nlSetFontSize(0x10, 0x10);
    emotDebugPrint((*(int *)(((int)stk + 12))));
    return nlSetFontSize(0x8, 0x8);
    L_8C0BD690:;
    t31 = (padDirRepeat(0x0, 0x80)) == 0;
    if (t31) goto L_8C0BD6F6;
    goto L_8C0BD69A;
    L_8C0BD69A:;
    t32 = *(int *)(((R14 + R13) + 0x268));
    *(unsigned int *)(((0x26C + (R14 + R13)) + 0x0)) = ((int)((int)((*(int *)(((R14 + R13) + 0x26C))) + 0x79) % (int)0x78));
    R4 = (R14);
    if (((*(int *)(((R14 + R13) + 0x26C))) != (*(int *)((((((t32 << 1) + t32) << 2) + (R14 + R13)) + 0xC))))) goto L_8C0BD6D8;
    goto L_8C0BD6CC;
    L_8C0BD6CC:;
    *(unsigned int *)(((R14 + R13) + 0x268)) = ((*(int *)(((R14 + R13) + 0x268))) + 0x1);
    goto L_8C0BD6D8;
    L_8C0BD6D8:;
    if (((int)(*(int *)(((R4 + R13) + 0x268))) > (int)(*(int *)(((R4 + R13) + 0x264))))) goto L_8C0BD6EA;
    goto L_8C0BD6E6;
    L_8C0BD6E6:;
    goto L_8C0BD964;
    L_8C0BD6EA:;
    *(unsigned int *)(((R14 + R13) + 0x268)) = R10;
    goto L_8C0BD964;
    L_8C0BD6F6:;
    t44 = (padDirRepeat(0x0, 0x10)) == 0;
    R9 = (0x8C0EDD30);
    F15 = (0.00249999994f);
    if (t44) goto L_8C0BD7C0;
    goto L_8C0BD706;
    L_8C0BD706:;
    R11 = ((R14 + R13));
    R12 = (R10);
    F14 = (1.0f);
    goto L_8C0BD7B4;
    L_8C0BD7B4:;
    if (((int)R12 < (int)(*(int *)((R11 + 0x264))))) goto L_8C0BD744;
    goto L_8C0BD7BC;
    L_8C0BD7BC:;
    goto L_8C0BD964;
    L_8C0BD744:;
    t52 = *(int *)((R11 + 0x26C));
    R4 = (t52);
    if ((t52 != (*(int *)((((((R12 << 1) + R12) << 2) + R11) + 0x0))))) goto L_8C0BD7B2;
    goto L_8C0BD75C;
    L_8C0BD75C:;
    *(unsigned int *)(((int)stk + 20)) = R11;
    R0 = (0x8);
    R4 = (((((R4 << 1) + R4) << 2) + R11));
    R5 = ((R11 + (((R12 << 1) + R12) << 2)));
    if ((((*(float *)(((R11 + (((R12 << 1) + R12) << 2)) + 0x8))) + F15) > F14)) goto L_8C0BD798;
    goto L_8C0BD784;
    L_8C0BD784:;
    *(float *)((((((R12 << 1) + R12) << 2) + R11) + R0)) = ((*(float *)((((((R12 << 1) + R12) << 2) + R11) + R0))) + F15);
    goto L_8C0BD798;
    L_8C0BD798:;
    *(float *)(((int)stk + 8)) = (*(float *)((((((R12 << 1) + R12) << 2) + R11) + R0)));
    nlPrintf(0x8C123264);
    goto L_8C0BD7B2;
    L_8C0BD7B2:;
    R12 = ((R12 + 0x1));
    goto L_8C0BD7B4;
    L_8C0BD7C0:;
    t66 = (padDirRepeat(0x0, 0x20)) == 0;
    if (t66) goto L_8C0BD854;
    goto L_8C0BD7CA;
    L_8C0BD7CA:;
    R11 = ((R14 + R13));
    R12 = (R10);
    F14 = (-0.00249999994f);
    goto L_8C0BD848;
    L_8C0BD848:;
    if (((int)R12 < (int)(*(int *)((R11 + 0x264))))) goto L_8C0BD7D6;
    goto L_8C0BD850;
    L_8C0BD850:;
    goto L_8C0BD964;
    L_8C0BD7D6:;
    t72 = *(int *)((R11 + 0x26C));
    R4 = (t72);
    if ((t72 != (*(int *)((((((R12 << 1) + R12) << 2) + R11) + 0x0))))) goto L_8C0BD846;
    goto L_8C0BD7EE;
    L_8C0BD7EE:;
    *(unsigned int *)(((int)stk + 16)) = R11;
    R0 = (0x8);
    R4 = (((((R4 << 1) + R4) << 2) + R11));
    R5 = ((R11 + (((R12 << 1) + R12) << 2)));
    if ((0.0f > ((*(float *)(((R11 + (((R12 << 1) + R12) << 2)) + 0x8))) + F14))) goto L_8C0BD82C;
    goto L_8C0BD818;
    L_8C0BD818:;
    *(float *)((((((R12 << 1) + R12) << 2) + R11) + R0)) = ((*(float *)((((((R12 << 1) + R12) << 2) + R11) + R0))) - F15);
    goto L_8C0BD82C;
    L_8C0BD82C:;
    *(float *)(((int)stk + 8)) = (*(float *)((((((R12 << 1) + R12) << 2) + R11) + R0)));
    nlPrintf(0x8C123264);
    goto L_8C0BD846;
    L_8C0BD846:;
    R12 = ((R12 + 0x1));
    goto L_8C0BD848;
    L_8C0BD854:;
    t86 = *(int *)(((*(int *)0x8C29B898) + 0x10));
    R0 = (t86);
    R4 = (0x8C29B898);
    if (((t86 & 5) == 0)) goto L_8C0BD8C4;
    goto L_8C0BD85E;
    L_8C0BD85E:;
    R12 = ((R14 + R13));
    R4 = (R10);
    R6 = (0x3);
    R7 = ((*(int *)(((R14 + R13) + 0x26C))));
    goto L_8C0BD8B8;
    L_8C0BD8B8:;
    if (((int)R4 < (int)(*(int *)((R12 + 0x264))))) goto L_8C0BD880;
    goto L_8C0BD8C0;
    L_8C0BD8C0:;
    goto L_8C0BD964;
    L_8C0BD880:;
    R1 = (R12);
    if ((R7 != (*(int *)((((((R4 << 1) + R4) << 2) + R12) + 0x0))))) goto L_8C0BD8B6;
    goto L_8C0BD894;
    L_8C0BD894:;
    *(unsigned int *)(((R12 + (((R4 << 1) + R4) << 2)) + 0x4)) = ((*(int *)(((R12 + (((R4 << 1) + R4) << 2)) + 0x4))) + 0x1);
    *(unsigned int *)(((R12 + (((R4 << 1) + R4) << 2)) + 0x4)) = ((int)((int)(*(int *)(((R12 + (((R4 << 1) + R4) << 2)) + 0x4))) % (int)R6));
    goto L_8C0BD8B6;
    L_8C0BD8B6:;
    R4 = ((R4 + 0x1));
    goto L_8C0BD8B8;
    L_8C0BD8C4:;
    if (((R0 & 2) == 0)) goto L_8C0BD918;
    goto L_8C0BD8C8;
    L_8C0BD8C8:;
    R11 = ((*(int *)(((R14 + R13) + 0x26C))));
    R12 = (R10);
    R4 = (R10);
    R9 = ((R14 + R13));
    goto L_8C0BD8F2;
    L_8C0BD8F2:;
    if (((int)R4 < (int)(*(int *)((R9 + 0x264))))) goto L_8C0BD8DA;
    goto L_8C0BD8FA;
    L_8C0BD8FA:;
    if ((R12 != 0)) goto L_8C0BD906;
    goto L_8C0BD8FE;
    L_8C0BD8FE:;
    emotKeyAdd((R14 + R13), R11);
    goto L_8C0BD906;
    L_8C0BD906:;
    if ((R12 != 1)) goto L_8C0BD964;
    goto L_8C0BD90C;
    L_8C0BD90C:;
    emotKeyDel((R14 + R13), R11, R6);
    goto L_8C0BD964;
    L_8C0BD8DA:;
    t117 = R11 != (*(int *)((((((R4 << 1) + R4) << 2) + R9) + 0x0)));
    R4 = ((R4 + 0x1));
    if (t117) goto L_8C0BD8F2;
    goto L_8C0BD8F0;
    L_8C0BD8F0:;
    R12 = ((R12 + 0x1));
    goto L_8C0BD8F2;
    L_8C0BD918:;
    if ((((*(int *)(((*(int *)((R4 + 0x0))) + 0x10))) & 0x400) == 0)) goto L_8C0BD948;
    goto L_8C0BD922;
    L_8C0BD922:;
    t123 = *(int *)((R8 + 0x0));
    *(unsigned int *)((R8 + 0x0)) = (t123 + 0x1);
    R0 = ((t123 + 0x1));
    if (((int)(t123 + 0x1) < 0)) goto L_8C0BD930;
    goto L_8C0BD92C;
    L_8C0BD92C:;
    R0 = ((R0 & 0x1));
    goto L_8C0BD93A;
    L_8C0BD93A:;
    *(unsigned int *)((R8 + 0x0)) = R0;
    goto L_8C0BD964;
    L_8C0BD930:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0BD93A;
    L_8C0BD948:;
    R1 = (0x200);
    if ((((*(int *)(((*(int *)((R4 + 0x0))) + 0x10))) & 0x200) == 0)) goto L_8C0BD964;
    goto L_8C0BD952;
    L_8C0BD952:;
    *(unsigned int *)0x8C35D974 = ((*(int *)0x8C35D974) + 0x1);
    *(unsigned int *)0x8C35D974 = ((int)((int)(*(int *)0x8C35D974) % (int)0x12));
    goto L_8C0BD964;
}
