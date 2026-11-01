/* Straight-line functions with calls and guards (batch gen_xu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuAimAngleRate(int, int, int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimRateA(int, int, float, float);
int cpuDblAimRateB(int, int, int, int, int, int, int, int, int, int, int, int);
float cpuEdgeX(int, Stk3, float);
int cpuSglHitReady(int);
int cpuShotAimCheck(int);
int cpuShotAimStick(int);
int cpuShotRange(int, int, int, int, int, float);
int cpuShotTargetSet(int, float, float);
int nlRand(void);
float nlRandom(void);
int FUN_8c0704ce(int a4, int a5);
float FUN_8c06b404(int a4, float f4);
int FUN_8c07e8f8(int a4, int a5);
int FUN_8c07ec90(int a4, int a5);
int FUN_8c07e570(int a4, int a5);
float FUN_8c060480(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
float FUN_8c06b062(int a4, float f4);
int FUN_8c07b106(int a4, int a5);
int FUN_8c04546c(int a4);

int FUN_8c0704ce(int a4, int a5)
{
    int stk[15];
    register int t0;
    register int t1;
    register float u2;
    register int t47;
    register int t17;
    register int t19;
    register float u20;
    register int t21;
    register int t23;
    register float u24;
    register int t27;
    register float u28;
    register float u30;
    register float u31;
    register int t32;
    register float u34;
    register int t42;
    register int t69;
    register int t51;
    register int t53;
    register float u54;
    register int t55;
    register float u57;
    register int t58;
    register int t66;
    register float u72;
    register int t117;
    register int t87;
    register int t89;
    register float u90;
    register int t91;
    register int t93;
    register float u94;
    register int t97;
    register float u98;
    register float u100;
    register float u101;
    register int t102;
    register float u104;
    register int t112;
    register int t139;
    register int t121;
    register int t123;
    register float u124;
    register int t125;
    register float u127;
    register int t128;
    register int t136;
    register int t180;
    register int t150;
    register int t152;
    register float u153;
    register int t154;
    register int t156;
    register float u157;
    register int t160;
    register float u161;
    register float u163;
    register float u164;
    register int t165;
    register float u167;
    register int t175;
    register int t194;
    register int t184;
    register float u187;
    register int t188;
    register int t190;
    register float u191;
    register int t200;
    register int t71;
    register float u35;
    register int t36;
    register float u40;
    register float u60;
    register float u64;
    register int t198;
    register int t141;
    register float u105;
    register int t106;
    register float u110;
    register float u130;
    register float u134;
    register int t196;
    register float u168;
    register int t169;
    register float u173;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u2 = *(float *)((a4 + 0xAE8));
    if (((u2 > 0.0f) - (0.0f > u2)) != (*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
        if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) != 2) {
            cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet((a5 + 0x1), 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t47 = (((a5 + 0x1) + 0x1) + 0x1);
            if ((int)(((a5 + 0x1) + 0x1) + 0x1) < (int)0x5A) {
                t17 = (((a5 + 0x1) + 0x1) + 0x1);
                for (;;) {
                    t19 = (int)((int)(nlRand()) % (int)0x14);
                    if (t19 != 0) {
                        u20 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 8)) = (u20 * 118.849998f);
                        t21 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                        *(float *)(((int)stk + 4)) = (float)t21;
                        t23 = t17;
                        t17 = (t17 + 0x1);
                        u24 = ((float)t21 * (nlRandom()));
                        cpuAimPointSet(t23, 0x1, (u24 * 54.8499985f), (u20 * 118.849998f));
                    } else {
                        t27 = (int)((int)(nlRand()) % (int)0x14);
                        if (t27 != 0) {
                            u28 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u28 * 118.849998f);
                            u30 = (-1.0f);
                            u30 = u30 + (1.0f + 1.0f) * (nlRandom());
                            u35 = (u28 * 118.849998f);
                            t36 = 0x2;
                            u40 = (u30 * 54.8499985f);
                        } else {
                            u31 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u31 * 118.849998f);
                            t32 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                            *(float *)(((int)stk + 4)) = (float)(-t32);
                            u34 = ((float)(-t32) * (nlRandom()));
                            u35 = (u31 * 118.849998f);
                            t36 = 0x1;
                            u40 = (u34 * 54.8499985f);
                        }
                        t42 = t17;
                        t17 = (t17 + 0x1);
                        cpuAimPointSet(t42, t36, u40, u35);
                    }
                    if ((int)t17 >= (int)0x5A) {
                        break;
                    }
                }
                t47 = t17;
            }
            t71 = t47;
        } else {
            cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
            t69 = (a5 + 0x1);
            if ((int)(a5 + 0x1) < (int)0x5A) {
                t51 = (a5 + 0x1);
                for (;;) {
                    t53 = (int)((int)(nlRand()) % (int)0xA);
                    if (t53 != 0) {
                        u54 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 8)) = (u54 * 11.8850002f);
                        t55 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                        *(float *)(((int)stk + 4)) = (float)t55;
                        u60 = (u54 * 11.8850002f);
                        u64 = ((float)t55 * (nlRandom()));
                    } else {
                        u57 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 8)) = (u57 * 11.8850002f);
                        t58 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                        *(float *)(((int)stk + 4)) = (float)(-t58);
                        u60 = (u57 * 11.8850002f);
                        u64 = ((float)(-t58) * (nlRandom()));
                    }
                    t66 = t51;
                    t51 = (t51 + 0x1);
                    cpuAimPointSet(t66, 0x1, (u64 * 54.8499985f), u60);
                    if ((int)t51 >= (int)0x5A) {
                        break;
                    }
                }
                t69 = t51;
            }
            t71 = t69;
        }
        t200 = t71;
    } else {
        u72 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        if (((u72 > 0.0f) - (0.0f > u72)) != (*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)))) {
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) != 2) {
                cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet((a5 + 0x1), 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t117 = (((a5 + 0x1) + 0x1) + 0x1);
                if ((int)(((a5 + 0x1) + 0x1) + 0x1) < (int)0x5A) {
                    t87 = (((a5 + 0x1) + 0x1) + 0x1);
                    for (;;) {
                        t89 = (int)((int)(nlRand()) % (int)0x14);
                        if (t89 != 0) {
                            u90 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u90 * 118.849998f);
                            t91 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                            *(float *)(((int)stk + 4)) = (float)t91;
                            t93 = t87;
                            t87 = (t87 + 0x1);
                            u94 = ((float)t91 * (nlRandom()));
                            cpuAimPointSet(t93, 0x1, (u94 * 54.8499985f), (u90 * 118.849998f));
                        } else {
                            t97 = (int)((int)(nlRand()) % (int)0x14);
                            if (t97 != 0) {
                                u98 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 8)) = (u98 * 118.849998f);
                                u100 = (-1.0f);
                                u100 = u100 + (1.0f + 1.0f) * (nlRandom());
                                u105 = (u98 * 118.849998f);
                                t106 = 0x2;
                                u110 = (u100 * 54.8499985f);
                            } else {
                                u101 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 8)) = (u101 * 118.849998f);
                                t102 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                                *(float *)(((int)stk + 4)) = (float)(-t102);
                                u104 = ((float)(-t102) * (nlRandom()));
                                u105 = (u101 * 118.849998f);
                                t106 = 0x1;
                                u110 = (u104 * 54.8499985f);
                            }
                            t112 = t87;
                            t87 = (t87 + 0x1);
                            cpuAimPointSet(t112, t106, u110, u105);
                        }
                        if ((int)t87 >= (int)0x5A) {
                            break;
                        }
                    }
                    t117 = t87;
                }
                t141 = t117;
            } else {
                cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t139 = (a5 + 0x1);
                if ((int)(a5 + 0x1) < (int)0x5A) {
                    t121 = (a5 + 0x1);
                    for (;;) {
                        t123 = (int)((int)(nlRand()) % (int)0xA);
                        if (t123 != 0) {
                            u124 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u124 * 11.8850002f);
                            t125 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                            *(float *)(((int)stk + 4)) = (float)t125;
                            u130 = (u124 * 11.8850002f);
                            u134 = ((float)t125 * (nlRandom()));
                        } else {
                            u127 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u127 * 11.8850002f);
                            t128 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                            *(float *)(((int)stk + 4)) = (float)(-t128);
                            u130 = (u127 * 11.8850002f);
                            u134 = ((float)(-t128) * (nlRandom()));
                        }
                        t136 = t121;
                        t121 = (t121 + 0x1);
                        cpuAimPointSet(t136, 0x1, (u134 * 54.8499985f), u130);
                        if ((int)t121 >= (int)0x5A) {
                            break;
                        }
                    }
                    t139 = t121;
                }
                t141 = t139;
            }
            t198 = t141;
        } else {
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) != 2) {
                cpuAimPointSet(a5, 0x1, ((float)(-(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet((a5 + 0x1), 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t180 = (((a5 + 0x1) + 0x1) + 0x1);
                if ((int)(((a5 + 0x1) + 0x1) + 0x1) < (int)0x5A) {
                    t150 = (((a5 + 0x1) + 0x1) + 0x1);
                    for (;;) {
                        t152 = (int)((int)(nlRand()) % (int)0x14);
                        if (t152 != 0) {
                            u153 = *(float *)((a4 + 0xB00));
                            *(float *)(((int)stk + 8)) = (u153 * 118.849998f);
                            t154 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                            *(float *)(((int)stk + 4)) = (float)(-t154);
                            t156 = t150;
                            t150 = (t150 + 0x1);
                            u157 = ((float)(-t154) * (nlRandom()));
                            cpuAimPointSet(t156, 0x1, (u157 * 54.8499985f), (u153 * 118.849998f));
                        } else {
                            t160 = (int)((int)(nlRand()) % (int)0x46);
                            if (t160 != 0) {
                                u161 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 8)) = (u161 * 118.849998f);
                                u163 = (-1.0f);
                                u163 = u163 + (1.0f + 1.0f) * (nlRandom());
                                u168 = (u161 * 118.849998f);
                                t169 = 0x2;
                                u173 = (u163 * 54.8499985f);
                            } else {
                                u164 = *(float *)((a4 + 0xB00));
                                *(float *)(((int)stk + 8)) = (u164 * 118.849998f);
                                t165 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                                *(float *)(((int)stk + 4)) = (float)t165;
                                u167 = ((float)t165 * (nlRandom()));
                                u168 = (u164 * 118.849998f);
                                t169 = 0x1;
                                u173 = (u167 * 54.8499985f);
                            }
                            t175 = t150;
                            t150 = (t150 + 0x1);
                            cpuAimPointSet(t175, t169, u173, u168);
                        }
                        if ((int)t150 >= (int)0x5A) {
                            break;
                        }
                    }
                    t180 = t150;
                }
                t196 = t180;
            } else {
                cpuAimPointSet(a5, 0x1, ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t194 = (a5 + 0x1);
                if ((int)(a5 + 0x1) < (int)0x5A) {
                    t184 = (a5 + 0x1);
                    for (;;) {
                        nlRand();
                        u187 = *(float *)((a4 + 0xB00));
                        *(float *)(((int)stk + 8)) = (u187 * 11.8850002f);
                        t188 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                        *(float *)(((int)stk + 4)) = (float)t188;
                        t190 = t184;
                        t184 = (t184 + 0x1);
                        u191 = ((float)t188 * (nlRandom()));
                        cpuAimPointSet(t190, 0x1, (u191 * 54.8499985f), (u187 * 11.8850002f));
                        if ((int)t184 >= (int)0x5A) {
                            break;
                        }
                    }
                    t194 = t184;
                }
                t196 = t194;
            }
            t198 = t196;
        }
        t200 = t198;
    }
    return t200;
}

float FUN_8c06b404(int a4, float f4)
{
    int stk[17];
    register int t0;
    register int t2;
    register int t4;
    register float u6;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register int t15;
    register float u17;
    register float u18;
    register float u20;
    register float u22;
    register float u23;
    register float u25;
    register int t39;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u35;
    register int t37;
    register float u50;
    register float u51;
    register float u56;
    register float u57;
    register float u62;
    register float u63;
    register float u68;
    register int t73;
    register float u75;
    register float u76;
    register float u78;
    register int t92;
    register float u80;
    register float u81;
    register float u83;
    register float u85;
    register float u86;
    register float u88;
    register int t90;
    register float u133;
    register float u135;
    register float u136;
    register float t137;
    register int t138;
    register int t139;
    register float u154;
    register float u155;
    register float u156;
    register float u157;
    register float u164;
    register float u175;
    register int t118;
    register int t104;
    register int t151;

    t0 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = (0x8C2FC69C + ((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t4 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
        *(float *)(((int)stk + 12)) = (-((float)t4 * 0.300000012f));
        u6 = (-((float)t4 * 0.300000012f));
        u6 = u6 + 0.100000001f * (nlRandom());
        u8 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u9 = ((*(float *)((a4 + 0xB00))) * (u6 + 1.0f));
        u10 = (-u8);
        if (!(0.0f > u8)) {
            u10 = u8;
        }
        u12 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u13 = (-u12);
        if (!(0.0f > u12)) {
            u13 = u12;
        }
        t15 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if (u13 > u10) {
            t15 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u17 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u18 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u20 = ((-u17) + u18);
        if (!(0.0f > (u17 - u18))) {
            u20 = (u17 - u18);
        }
        if (!(u20 > 54.8499985f)) {
            u22 = *(float *)((t15 + 0xAE8));
            u23 = *(float *)((t15 + 0xB9C));
            u25 = ((-u22) + u23);
            if (!(0.0f > (u22 - u23))) {
                u25 = (u22 - u23);
            }
            t39 = t15;
            if (!(15.0f > u25)) {
                u27 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u28 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u30 = ((-u27) + u28);
                if (!(0.0f > (u27 - u28))) {
                    u30 = (u27 - u28);
                }
                u32 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u33 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u35 = ((-u32) + u33);
                if (!(0.0f > (u32 - u33))) {
                    u35 = (u32 - u33);
                }
                t37 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                if (u35 > u30) {
                    t37 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t39 = t37;
            }
            t118 = t39;
        } else {
            u50 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u51 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u56 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u57 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u51 - u50) > 0.0f) - (0.0f > (u51 - u50))) == (((u57 - u56) > 0.0f) - (0.0f > (u57 - u56)))) {
                u62 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u63 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u68 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t73 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                if ((((u62 - u63) > 0.0f) - (0.0f > (u62 - u63))) != (((u62 - u68) > 0.0f) - (0.0f > (u62 - u68)))) {
                    t73 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t104 = t73;
            } else {
                u75 = *(float *)((t15 + 0xAE8));
                u76 = *(float *)((t15 + 0xB9C));
                u78 = ((-u75) + u76);
                if (!(0.0f > (u75 - u76))) {
                    u78 = (u75 - u76);
                }
                t92 = t15;
                if (!(15.0f > u78)) {
                    u80 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u81 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u83 = ((-u80) + u81);
                    if (!(0.0f > (u80 - u81))) {
                        u83 = (u80 - u81);
                    }
                    u85 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u86 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u88 = ((-u85) + u86);
                    if (!(0.0f > (u85 - u86))) {
                        u88 = (u85 - u86);
                    }
                    t90 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                    if (u88 > u83) {
                        t90 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t92 = t90;
                }
                t104 = t92;
            }
            t118 = t104;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t118)); }
        u133 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u135 = (*(float *)((a4 + 0xAE8)));
        u135 = u135 + 16.0f * u133;
        u136 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t137 = cpuEdgeX((((u135 > (u136 + (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (-(u9 * 118.849998f)));
        t138 = *(int *)((a4 + 0xC58));
        t139 = ((~(((~t138) + 0x1) & 0x1)) + 0x1);
        if ((int)t138 >= 0) {
            t139 = (t138 & 0x1);
        }
        if (t139 == 0) {
            t151 = (-((t137 > 0.0f) - (0.0f > t137)));
        } else {
            t151 = ((t137 > 0.0f) - (0.0f > t137));
        }
        *(float *)(((int)stk + 12)) = (float)t151;
        u154 = 18.0f;
        u154 = u154 + 10.0f * (nlRandom());
        u155 = t137;
        u155 = u155 + u154 * (float)t151;
        u156 = *(float *)0x8C06B854;
        u157 = (-u155);
        if (!(0.0f > u155)) {
            u157 = u155;
        }
        u164 = u155;
        if (u157 > u156) {
            u164 = ((float)((u155 > 0.0f) - (0.0f > u155)) * u156);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u164;
        *(float *)((a4 + 0xA3C)) = (-(u9 * 118.849998f));
        u175 = u154;
    }
    return u175;
}

int FUN_8c07e8f8(int a4, int a5)
{
    int stk[31];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t31;
    register int t32;
    register int t33;
    register int t38;
    register int t39;
    register int t66;
    register float u70;
    register float u71;
    register float u73;
    register float u76;
    register int t85;
    register int t80;
    register int t81;
    register int t87;
    register float u88;
    register float u89;
    register float u96;
    register int t100;
    register int t102;
    register int t103;
    register float u106;
    register float u107;
    register float u109;
    register float u112;
    register float u126;
    register float u127;
    register float u129;
    register float u132;
    register int t141;
    register int t142;
    register float u145;
    register float u146;
    register float u148;
    register float u151;
    register float u203;
    register int t222;
    register int t205;
    register float u17;
    register float u18;
    register float u19;
    register int t55;
    register int t48;
    register int t93;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(60.8849983f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t222 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(137.252502f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t205 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
            cpuShotRange(a4, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14), u1);
            if ((int)a5 > 0) {
                t10 = 0x0;
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((u13 > (*(float *)(((int)stk + 64)))) && ((u17 = *(float *)(((int)stk + 52)), u17 > u13) && ((u18 = *(float *)(((int)stk + 72)), u14 > u18) && (u19 = *(float *)(((int)stk + 60)), u19 > u14)))) {
                    } else {
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
                        cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 8) + 0x8));
                        *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 16)));
                        *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 24)));
                    }
                    cpuDblAimRateB(a4, t11, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                    t10 = (t10 + 0x1);
                    t11 = (t11 + 0x20);
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0xFFFFD8F0;
            if ((int)a5 > 0) {
                t31 = 0xFFFFD8F0;
                t32 = 0x0;
                t33 = 0x8C2FCC6C;
                for (;;) {
                    if (!((*(float *)((t33 + 0x1C))) > (float)(*(int *)(((int)stk + 8))))) {
                        if ((*(float *)((t33 + 0x1C))) == (float)(*(int *)(((int)stk + 8)))) {
                            t38 = nlRand();
                            t39 = ((~(((~t38) + 0x1) & 0x1)) + 0x1);
                            if ((int)t38 >= 0) {
                                t39 = (t38 & 0x1);
                            }
                            if (t39 != 0) {
                                *(unsigned int *)(((int)stk + 8)) = (int)(*(float *)((t33 + 0x1C)));
                                *(unsigned int *)(((int)stk + 12)) = t32;
                            }
                        } else {
                            t48 = t31;
                        }
                        t55 = t48;
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = (int)(*(float *)((t33 + 0x1C)));
                        *(unsigned int *)(((int)stk + 12)) = t32;
                        t55 = t31;
                    }
                    t31 = t55;
                    t32 = (t32 + 0x1);
                    t33 = (t33 + 0x20);
                    if ((int)t32 >= (int)a5) {
                        break;
                    }
                }
            }
            t66 = *(int *)(((int)stk + 12));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u70 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u71 = (-u70);
            if (!(0.0f > u70)) {
                u71 = u70;
            }
            u73 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u76 = (-1.0f);
            u76 = u76 + (1.0f + 1.0f) * (u71 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u73) / (*(float *)0x8C287B40)), u76);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t85 = 0x0;
            if ((*(int *)0x8C291F74) == 5) {
                t80 = nlRand();
                t81 = ((~(((~t80) + 0x1) & 0x1)) + 0x1);
                if ((int)t80 >= 0) {
                    t81 = (t80 & 0x1);
                }
                t85 = (0x0 + (t81 + 0x6));
            }
            t87 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118));
            u88 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u89 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u89 - 30.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if (((float)(int)((float)t85 + ((float)t87 * ((-(u88 / 100.0f)) + 1.0f))) > (*(float *)0x8C291F54)) && (t93 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t93 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = ((float)(int)((float)t85 + ((float)t87 * ((-(u88 / 100.0f)) + 1.0f))) - (*(float *)0x8C291F54));
                u96 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u96 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) - 5)) {
                    if ((*(int *)0x8C291F74) != 5) {
                        t100 = (int)((int)(nlRand()) % (int)0x28);
                        if (t100 == 0) {
                            if ((*(int *)0x8C291F74) == 5) {
                                t102 = nlRand();
                                t103 = ((~(((~t102) + 0x1) & 0x7)) + 0x1);
                                if ((int)t102 >= 0) {
                                    t103 = (t102 & 0x7);
                                }
                                if (t103 == 0) {
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                    u106 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                    u107 = (-u106);
                                    if (!(0.0f > u106)) {
                                        u107 = u106;
                                    }
                                    u109 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                    u112 = (-1.0f);
                                    u112 = u112 + (1.0f + 1.0f) * (u107 / 118.849998f);
                                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u109) / (*(float *)0x8C287B40)), u112);
                                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                                }
                            }
                        } else {
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                            u126 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                            u127 = (-u126);
                            if (!(0.0f > u126)) {
                                u127 = u126;
                            }
                            u129 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                            u132 = (-1.0f);
                            u132 = u132 + (1.0f + 1.0f) * (u127 / 118.849998f);
                            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u129) / (*(float *)0x8C287B40)), u132);
                            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                        }
                    } else {
                        if ((*(int *)0x8C291F74) == 5) {
                            t141 = nlRand();
                            t142 = ((~(((~t141) + 0x1) & 0x7)) + 0x1);
                            if ((int)t141 >= 0) {
                                t142 = (t141 & 0x7);
                            }
                            if (t142 == 0) {
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                u145 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                u146 = (-u145);
                                if (!(0.0f > u145)) {
                                    u146 = u145;
                                }
                                u148 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                u151 = (-1.0f);
                                u151 = u151 + (1.0f + 1.0f) * (u146 / 118.849998f);
                                cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u148) / (*(float *)0x8C287B40)), u151);
                                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                            }
                        }
                    }
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            u203 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u203 * (*(float *)0x8C07ECF4)) / (*(float *)0x8C07ECF8));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t205 = 0xA24;
        }
        t222 = t205;
    }
    return t222;
}

int FUN_8c07ec90(int a4, int a5)
{
    int stk[31];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t31;
    register int t32;
    register int t33;
    register int t38;
    register int t39;
    register int t66;
    register float u70;
    register float u71;
    register float u73;
    register float u76;
    register int t85;
    register int t80;
    register int t81;
    register int t87;
    register float u88;
    register float u89;
    register float u96;
    register int t100;
    register int t102;
    register int t103;
    register float u106;
    register float u107;
    register float u109;
    register float u112;
    register float u126;
    register float u127;
    register float u129;
    register float u132;
    register int t141;
    register int t142;
    register float u145;
    register float u146;
    register float u148;
    register float u151;
    register float u202;
    register int t220;
    register int t203;
    register float u17;
    register float u18;
    register float u19;
    register float u25;
    register float u26;
    register int t55;
    register int t48;
    register int t93;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(55.3499985f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t220 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(119.349998f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t203 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x14);
            cpuShotRange(a4, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 8) + 0x14), u1);
            if ((int)a5 > 0) {
                t10 = 0x0;
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((u13 > (*(float *)(((int)stk + 64)))) && ((u17 = *(float *)(((int)stk + 52)), u17 > u13) && ((u18 = *(float *)(((int)stk + 72)), u14 > u18) && (u19 = *(float *)(((int)stk + 60)), u19 > u14)))) {
                        u25 = u14;
                        u26 = u13;
                    } else {
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x8);
                        cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 8) + 0x8));
                        *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 16)));
                        *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 24)));
                    }
                    cpuDblAimRateA(a4, t11, u25, u26);
                    t10 = (t10 + 0x1);
                    t11 = (t11 + 0x20);
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned int *)(((int)stk + 12)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0xFFFFD8F0;
            if ((int)a5 > 0) {
                t31 = 0xFFFFD8F0;
                t32 = 0x0;
                t33 = 0x8C2FCC6C;
                for (;;) {
                    if (!((*(float *)((t33 + 0x1C))) > (float)(*(int *)(((int)stk + 8))))) {
                        if ((*(float *)((t33 + 0x1C))) == (float)(*(int *)(((int)stk + 8)))) {
                            t38 = nlRand();
                            t39 = ((~(((~t38) + 0x1) & 0x1)) + 0x1);
                            if ((int)t38 >= 0) {
                                t39 = (t38 & 0x1);
                            }
                            if (t39 != 0) {
                                *(unsigned int *)(((int)stk + 8)) = (int)(*(float *)((t33 + 0x1C)));
                                *(unsigned int *)(((int)stk + 12)) = t32;
                            }
                        } else {
                            t48 = t31;
                        }
                        t55 = t48;
                    } else {
                        *(unsigned int *)(((int)stk + 8)) = (int)(*(float *)((t33 + 0x1C)));
                        *(unsigned int *)(((int)stk + 12)) = t32;
                        t55 = t31;
                    }
                    t31 = t55;
                    t32 = (t32 + 0x1);
                    t33 = (t33 + 0x20);
                    if ((int)t32 >= (int)a5) {
                        break;
                    }
                }
            }
            t66 = *(int *)(((int)stk + 12));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u70 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u71 = (-u70);
            if (!(0.0f > u70)) {
                u71 = u70;
            }
            u73 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u76 = (-1.0f);
            u76 = u76 + (1.0f + 1.0f) * (u71 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u73) / (*(float *)0x8C287B40)), u76);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t66 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t85 = 0x0;
            if ((*(int *)0x8C291F74) == 5) {
                t80 = nlRand();
                t81 = ((~(((~t80) + 0x1) & 0x1)) + 0x1);
                if ((int)t80 >= 0) {
                    t81 = (t80 & 0x1);
                }
                t85 = (0x0 + t81);
            }
            t87 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118));
            u88 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u89 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u89 - 12.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if (((float)(int)((float)t85 + ((float)t87 * ((-(u88 / 100.0f)) + 1.0f))) > (*(float *)0x8C291F54)) && (t93 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t93 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = ((float)(int)((float)t85 + ((float)t87 * ((-(u88 / 100.0f)) + 1.0f))) - (*(float *)0x8C291F54));
                u96 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u96 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) - 5)) {
                    if ((*(int *)0x8C291F74) != 5) {
                        t100 = (int)((int)(nlRand()) % (int)0x28);
                        if (t100 == 0) {
                            if ((*(int *)0x8C291F74) == 5) {
                                t102 = nlRand();
                                t103 = ((~(((~t102) + 0x1) & 0x7)) + 0x1);
                                if ((int)t102 >= 0) {
                                    t103 = (t102 & 0x7);
                                }
                                if (t103 == 0) {
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                    u106 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                    u107 = (-u106);
                                    if (!(0.0f > u106)) {
                                        u107 = u106;
                                    }
                                    u109 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                    u112 = (-1.0f);
                                    u112 = u112 + (1.0f + 1.0f) * (u107 / 118.849998f);
                                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u109) / (*(float *)0x8C287B40)), u112);
                                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                                }
                            }
                        } else {
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                            u126 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                            u127 = (-u126);
                            if (!(0.0f > u126)) {
                                u127 = u126;
                            }
                            u129 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                            u132 = (-1.0f);
                            u132 = u132 + (1.0f + 1.0f) * (u127 / 118.849998f);
                            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u129) / (*(float *)0x8C287B40)), u132);
                            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                        }
                    } else {
                        if ((*(int *)0x8C291F74) == 5) {
                            t141 = nlRand();
                            t142 = ((~(((~t141) + 0x1) & 0x7)) + 0x1);
                            if ((int)t141 >= 0) {
                                t142 = (t141 & 0x7);
                            }
                            if (t142 == 0) {
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                u145 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                u146 = (-u145);
                                if (!(0.0f > u145)) {
                                    u146 = u145;
                                }
                                u148 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                u151 = (-1.0f);
                                u151 = u151 + (1.0f + 1.0f) * (u146 / 118.849998f);
                                cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u148) / (*(float *)0x8C287B40)), u151);
                                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                            }
                        }
                    }
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            u202 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u202 * 5.0f) / 32768.0f);
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t203 = 0xA24;
        }
        t220 = t203;
    }
    return t220;
}

int FUN_8c07e570(int a4, int a5)
{
    int stk[30];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t38;
    register int t39;
    register float u41;
    register float u50;
    register int t63;
    register float u67;
    register float u68;
    register float u70;
    register float u73;
    register int t82;
    register int t77;
    register int t78;
    register int t84;
    register float u85;
    register float u86;
    register float u93;
    register int t97;
    register int t99;
    register int t100;
    register float u103;
    register float u104;
    register float u106;
    register float u109;
    register float u123;
    register float u124;
    register float u126;
    register float u129;
    register int t138;
    register int t139;
    register float u142;
    register float u143;
    register float u145;
    register float u148;
    register float u200;
    register int t220;
    register int t202;
    register float u17;
    register float u18;
    register float u19;
    register float u25;
    register float u26;
    register int t52;
    register int t46;
    register int t90;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(60.8849983f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t220 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(137.252502f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t202 = 0x4;
        } else {
            *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
            cpuShotRange(a4, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x20), (((int)stk + 8) + 0x10), u1);
            if ((int)a5 > 0) {
                t10 = 0x0;
                t11 = 0x8C2FCC6C;
                for (;;) {
                    u12 = *(float *)((t11 + 0x8));
                    u13 = *(float *)((t11 + 0x0));
                    u14 = u12;
                    if (0.0f > u12) {
                        u14 = (-u12);
                    }
                    if ((u13 > (*(float *)(((int)stk + 60)))) && ((u17 = *(float *)(((int)stk + 48)), u17 > u13) && ((u18 = *(float *)(((int)stk + 68)), u14 > u18) && (u19 = *(float *)(((int)stk + 56)), u19 > u14)))) {
                        u25 = u13;
                        u26 = u14;
                    } else {
                        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
                        cpuAimAngleRate((0xB9C + a4), t11, (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x2C), (((int)stk + 8) + 0x4));
                        *(float *)((t11 + 0x0)) = (*(float *)(((int)stk + 12)));
                        *(float *)((t11 + 0x8)) = (*(float *)(((int)stk + 20)));
                    }
                    cpuDblAimRateA(a4, t11, u25, u26);
                    t10 = (t10 + 0x1);
                    t11 = (t11 + 0x20);
                    if ((int)t10 >= (int)a5) {
                        break;
                    }
                }
            }
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            if ((int)a5 > 0) {
                t32 = 0x0;
                t33 = 0x0;
                t34 = 0xFFFFD8F0;
                t35 = 0x8C2FCC6C;
                for (;;) {
                    if (!((*(float *)((t35 + 0x1C))) > (float)t34)) {
                        if ((*(float *)((t35 + 0x1C))) == (float)t34) {
                            t38 = nlRand();
                            t39 = ((~(((~t38) + 0x1) & 0x1)) + 0x1);
                            if ((int)t38 >= 0) {
                                t39 = (t38 & 0x1);
                            }
                            if (t39 != 0) {
                                u41 = *(float *)((t35 + 0x1C));
                                *(unsigned int *)(((int)stk + 8)) = t33;
                                t34 = (int)u41;
                            }
                        } else {
                            t46 = t32;
                        }
                        t52 = t46;
                    } else {
                        u50 = *(float *)((t35 + 0x1C));
                        *(unsigned int *)(((int)stk + 8)) = t33;
                        t34 = (int)u50;
                        t52 = t32;
                    }
                    t32 = t52;
                    t33 = (t33 + 0x1);
                    t35 = (t35 + 0x20);
                    if ((int)t33 >= (int)a5) {
                        break;
                    }
                }
            }
            t63 = *(int *)(((int)stk + 8));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u67 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u68 = (-u67);
            if (!(0.0f > u67)) {
                u68 = u67;
            }
            u70 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u73 = (-1.0f);
            u73 = u73 + (1.0f + 1.0f) * (u68 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u70) / (*(float *)0x8C287B40)), u73);
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t63 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            t82 = 0x5;
            if ((*(int *)0x8C291F74) == 5) {
                t77 = nlRand();
                t78 = ((~(((~t77) + 0x1) & 0x1)) + 0x1);
                if ((int)t77 >= 0) {
                    t78 = (t77 & 0x1);
                }
                t82 = (0x5 + (t78 + 0xA));
            }
            t84 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118));
            u85 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            u86 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u86 - 40.0f);
            if (-200.0f > (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
            }
            if (((float)(int)((float)t82 + ((float)t84 * ((-(u85 / 100.0f)) + 1.0f))) > (*(float *)0x8C291F54)) && (t90 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB6)), t90 == 0)) {
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = ((float)(int)((float)t82 + ((float)t84 * ((-(u85 / 100.0f)) + 1.0f))) - (*(float *)0x8C291F54));
                u93 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4));
                if (u93 > (float)((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) - 5)) {
                    if ((*(int *)0x8C291F74) != 5) {
                        t97 = (int)((int)(nlRand()) % (int)0x28);
                        if (t97 == 0) {
                            if ((*(int *)0x8C291F74) == 5) {
                                t99 = nlRand();
                                t100 = ((~(((~t99) + 0x1) & 0x7)) + 0x1);
                                if ((int)t99 >= 0) {
                                    t100 = (t99 & 0x7);
                                }
                                if (t100 == 0) {
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                    u103 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                    u104 = (-u103);
                                    if (!(0.0f > u103)) {
                                        u104 = u103;
                                    }
                                    u106 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                    u109 = (-1.0f);
                                    u109 = u109 + (1.0f + 1.0f) * (u104 / 118.849998f);
                                    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u106) / (*(float *)0x8C287B40)), u109);
                                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                                }
                            }
                        } else {
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                            u123 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                            u124 = (-u123);
                            if (!(0.0f > u123)) {
                                u124 = u123;
                            }
                            u126 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                            u129 = (-1.0f);
                            u129 = u129 + (1.0f + 1.0f) * (u124 / 118.849998f);
                            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u126) / (*(float *)0x8C287B40)), u129);
                            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                        }
                    } else {
                        if ((*(int *)0x8C291F74) == 5) {
                            t138 = nlRand();
                            t139 = ((~(((~t138) + 0x1) & 0x7)) + 0x1);
                            if ((int)t138 >= 0) {
                                t139 = (t138 & 0x7);
                            }
                            if (t139 == 0) {
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((a4 + 0xAE8)));
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = 0.0f;
                                u142 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
                                u143 = (-u142);
                                if (!(0.0f > u142)) {
                                    u143 = u142;
                                }
                                u145 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
                                u148 = (-1.0f);
                                u148 = u148 + (1.0f + 1.0f) * (u143 / 118.849998f);
                                cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u145) / (*(float *)0x8C287B40)), u148);
                                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x2;
                                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
                            }
                        }
                    }
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            }
            u200 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x10));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = ((u200 * (*(float *)0x8C07E95C)) / (*(float *)0x8C07E960));
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t202 = 0xA24;
        }
        t220 = t202;
    }
    return t220;
}

float FUN_8c060480(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if (((*(int *)0x8C291F78) & 4) != 0) {
            u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            if (!(16.4549999f > u1)) {
                u0 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u0 = 0.0f;
                if (u1 > 54.8499985f) {
                } else {
                    u1 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u2 = (-u1);
                    if (!(0.0f > u1)) {
                        u2 = u1;
                    }
                    if (u2 > 38.3949966f) {
                        u1 = ((*(float *)((a4 + 0xAE8))) * 0.5f);
                    } else {
                        u1 = (*(float *)((a4 + 0xAE8)));
                    }
                    u0 = u1;
                }
                u1 = u0;
            } else {
                u1 = (*(float *)((a4 + 0xAE8)));
            }
            u0 = u1;
            u1 = (*(float *)((a4 + 0xAF0)));
        } else {
            u2 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
            u3 = ((*(float *)((a4 + 0xB00))) * u2);
            u2 = *(float *)((a4 + 0xB9C));
            u4 = *(float *)((a4 + 0xAE8));
            u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
            u6 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u4 - u2) > 0.0f) - (0.0f > (u4 - u2))) != (((u6 - u5) > 0.0f) - (0.0f > (u6 - u5)))) {
                u2 = *(float *)((a4 + 0xAE8));
                u4 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u2 > 0.0f) - (0.0f > u2)) != ((u4 > 0.0f) - (0.0f > u4))) {
                    u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u4 = *(float *)((a4 + 0xAE8));
                    u5 = (u3 * 118.849998f);
                    u6 = (u2 - ((float)(((u2 - u4) > 0.0f) - (0.0f > (u2 - u4))) * 49.3649979f));
                } else {
                    u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u4 = (-u2);
                    if (!(0.0f > u2)) {
                        u4 = u2;
                    }
                    if (27.4249992f > u4) {
                        u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u4 = *(float *)((a4 + 0xAE8));
                        u7 = (u3 * 118.849998f);
                        u8 = (u2 - ((float)(((u2 - u4) > 0.0f) - (0.0f > (u2 - u4))) * 38.3949966f));
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                        u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u4 = *(float *)((a4 + 0xAE8));
                        u9 = u2;
                        u9 = u9 + 54.8499985f * (float)(((u2 - u4) > 0.0f) - (0.0f > (u2 - u4)));
                        u7 = 54.8499985f;
                        u8 = u9;
                    }
                    u5 = u7;
                    u6 = u8;
                }
                u2 = u5;
                u4 = u6;
            } else {
                u5 = *(float *)((a4 + 0xAE8));
                u6 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u5 > 0.0f) - (0.0f > u5)) != ((u6 > 0.0f) - (0.0f > u6))) {
                    u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u6 = *(float *)((a4 + 0xAE8));
                    u7 = (u3 * 118.849998f);
                    u8 = (u5 - ((float)(((u5 - u6) > 0.0f) - (0.0f > (u5 - u6))) * 49.3649979f));
                } else {
                    u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u6 = (-u5);
                    if (!(0.0f > u5)) {
                        u6 = u5;
                    }
                    if (27.4249992f > u6) {
                        u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u6 = *(float *)((a4 + 0xAE8));
                        u9 = (u3 * 118.849998f);
                        u10 = (u5 - ((float)(((u5 - u6) > 0.0f) - (0.0f > (u5 - u6))) * 38.3949966f));
                    } else {
                        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                        u5 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u6 = *(float *)((a4 + 0xAE8));
                        u11 = u5;
                        u11 = u11 + 54.8499985f * (float)(((u5 - u6) > 0.0f) - (0.0f > (u5 - u6)));
                        u9 = 54.8499985f;
                        u10 = u11;
                    }
                    u7 = u9;
                    u8 = u10;
                }
                u2 = u7;
                u4 = u8;
            }
            u5 = u2;
            u0 = u4;
            u1 = (-(u3 * 118.849998f));
        }
        u2 = (-u0);
        if (!(0.0f > u0)) {
            u2 = u0;
        }
        u3 = u0;
        if (u2 > 41.1374969f) {
            u3 = ((float)((u0 > 0.0f) - (0.0f > u0)) * 41.1374969f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u3;
        *(float *)((a4 + 0xA3C)) = u1;
        u0 = u5;
    }
    return u0;
}

float FUN_8c06b062(int a4, float f4)
{
    int stk[17];
    register int t0;
    register int t2;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u13;
    register int t15;
    register float u17;
    register float u18;
    register float u20;
    register float u22;
    register float u23;
    register float u25;
    register int t39;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u33;
    register float u35;
    register int t37;
    register float u50;
    register float u51;
    register float u56;
    register float u57;
    register float u62;
    register float u63;
    register float u68;
    register int t73;
    register float u75;
    register float u76;
    register float u78;
    register int t92;
    register float u80;
    register float u81;
    register float u83;
    register float u85;
    register float u86;
    register float u88;
    register int t90;
    register float u133;
    register float u135;
    register float u136;
    register float t137;
    register int t138;
    register int t139;
    register float u154;
    register float u155;
    register float u156;
    register float u163;
    register float u174;
    register int t118;
    register int t104;
    register int t151;

    t0 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = (0x8C2FC69C + ((*(int *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        u6 = *(float *)((a4 + 0xB00));
        u7 = ((((nlRandom()) * 0.200000003f) - ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.400000006f)) + 1.0f);
        u8 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u9 = (u6 * u7);
        u10 = (-u8);
        if (!(0.0f > u8)) {
            u10 = u8;
        }
        u12 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u13 = (-u12);
        if (!(0.0f > u12)) {
            u13 = u12;
        }
        t15 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
        if (u13 > u10) {
            t15 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
        }
        u17 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u18 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u20 = ((-u17) + u18);
        if (!(0.0f > (u17 - u18))) {
            u20 = (u17 - u18);
        }
        if (!(u20 > 54.8499985f)) {
            u22 = *(float *)((t15 + 0xAE8));
            u23 = *(float *)((t15 + 0xB9C));
            u25 = ((-u22) + u23);
            if (!(0.0f > (u22 - u23))) {
                u25 = (u22 - u23);
            }
            t39 = t15;
            if (!(15.0f > u25)) {
                u27 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u28 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u30 = ((-u27) + u28);
                if (!(0.0f > (u27 - u28))) {
                    u30 = (u27 - u28);
                }
                u32 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u33 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u35 = ((-u32) + u33);
                if (!(0.0f > (u32 - u33))) {
                    u35 = (u32 - u33);
                }
                t37 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                if (u35 > u30) {
                    t37 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t39 = t37;
            }
            t118 = t39;
        } else {
            u50 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u51 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u56 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
            u57 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u51 - u50) > 0.0f) - (0.0f > (u51 - u50))) == (((u57 - u56) > 0.0f) - (0.0f > (u57 - u56)))) {
                u62 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u63 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                u68 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                t73 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                if ((((u62 - u63) > 0.0f) - (0.0f > (u62 - u63))) != (((u62 - u68) > 0.0f) - (0.0f > (u62 - u68)))) {
                    t73 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                }
                t104 = t73;
            } else {
                u75 = *(float *)((t15 + 0xAE8));
                u76 = *(float *)((t15 + 0xB9C));
                u78 = ((-u75) + u76);
                if (!(0.0f > (u75 - u76))) {
                    u78 = (u75 - u76);
                }
                t92 = t15;
                if (!(15.0f > u78)) {
                    u80 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u81 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u83 = ((-u80) + u81);
                    if (!(0.0f > (u80 - u81))) {
                        u83 = (u80 - u81);
                    }
                    u85 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u86 = *(float *)((((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
                    u88 = ((-u85) + u86);
                    if (!(0.0f > (u85 - u86))) {
                        u88 = (u85 - u86);
                    }
                    t90 = ((((t2 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
                    if (u88 > u83) {
                        t90 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
                    }
                    t92 = t90;
                }
                t104 = t92;
            }
            t118 = t104;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + t118)); }
        u133 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u135 = (*(float *)((a4 + 0xAE8)));
        u135 = u135 + 16.0f * u133;
        u136 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t137 = cpuEdgeX((((u135 > (u136 + (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) ? 1 : 0), *(Stk3 *)(((int)stk + 4)), (-(u9 * 118.849998f)));
        t138 = *(int *)((a4 + 0xC58));
        t139 = ((~(((~t138) + 0x1) & 0x1)) + 0x1);
        if ((int)t138 >= 0) {
            t139 = (t138 & 0x1);
        }
        if (t139 == 0) {
            t151 = (-((t137 > 0.0f) - (0.0f > t137)));
        } else {
            t151 = ((t137 > 0.0f) - (0.0f > t137));
        }
        *(float *)(((int)stk + 12)) = (float)t151;
        u154 = 15.0f;
        u154 = u154 + 10.0f * (nlRandom());
        u155 = t137;
        u155 = u155 + u154 * (float)t151;
        u156 = (-u155);
        if (!(0.0f > u155)) {
            u156 = u155;
        }
        u163 = u155;
        if (u156 > 52.1074982f) {
            u163 = ((float)((u155 > 0.0f) - (0.0f > u155)) * 52.1074982f);
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = u163;
        *(float *)((a4 + 0xA3C)) = (-(u9 * 118.849998f));
        u174 = u154;
    }
    return u174;
}

int FUN_8c07b106(int a4, int a5)
{
    int stk[18];

    register int R2;
    register int R6;
    register float F0;
    register float F1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_1 = a4;
    v0_3 = a5;
    v0_0 = *(int *)((v0_1 + 0xB5C));
    v0_4 = *(int *)(((((0x3 & ((-v0_0) + 0x3)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 12)) = 0x8C291F24;
    w0_0 = *(float *)((v0_1 + 0xAE8));
    v0_2 = ((((0x3 & ((-v0_0) + 0x3)) * 0xD78) + 0x8C287D84));
    v0_0 = (v0_3);
    v0_1 = (v0_1);
    v0_3 = ((((0x3 & (v0_4 + 0x2)) * 0xD78) + 0x8C287D84));
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C07B160;
    v0_4 = (0x1);
    L_8C07B16A:;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    w0_0 = *(float *)((v0_2 + 0xAE8));
    v0_5 = (0xAE8);
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C07B17A;
    v0_4 = (0x1);
    L_8C07B184:;
    w0_0 = *(float *)((v0_3 + v0_5));
    w0_5 = (0.0f);
    w0_2 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C07B190;
    v0_5 = (0x1);
    L_8C07B1BE:;
    *(unsigned int *)(((int)stk + 20)) = v0_5;
    w0_0 = 0.100000001f;
    w0_0 = w0_0 + 0.899999976f * (nlRandom());
    w0_0 = ((*(float *)((v0_1 + 0xB00))) * w0_0);
    *(float *)(((int)stk + 4)) = (w0_0 * 118.849998f);
    w0_1 = (-1.0f);
    w0_1 = w0_1 + (1.0f + 1.0f) * (nlRandom());
    cpuAimPointSet(v0_0, 0x1, (w0_1 * 54.8499985f), (w0_0 * 118.849998f));
    v0_5 = (0x8C0ED2B0);
    v0_5 = (0x8C041C58);
    v0_0 = ((v0_0 + 0x1));
    w0_4 = ((float)(-(*(int *)(((int)stk + 8)))));
    w0_3 = (0.899999976f);
    w0_1 = (54.8499985f);
    w0_0 = (118.849998f);
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 12)))))) & 4) != 0)) goto L_8C07B25E;
    if ((!((*(float *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x2C))) * 0xD78) + 0x8C288A14))) > 1.0f))) goto L_8C07B25E;
    v0_5 = ((int)((int)(nlRand()) % (int)0xA)) != 0;
    if (v0_5) goto L_8C07B25E;
    w0_2 = 0.100000001f;
    w0_2 = w0_2 + w0_3 * (nlRandom());
    w0_3 = ((*(float *)((v0_1 + 0xB00))) * w0_2);
    v0_3 = (0x2);
    w0_2 = ((w0_4 * w0_1));
    w0_1 = ((w0_3 * w0_0));
    L_8C07B284:;
    cpuAimPointSet(v0_0, v0_3, w0_2, w0_1);
    v0_0 = ((v0_0 + 0x1));
    L_8C07B466:;
    return v0_0;
    L_8C07B25E:;
    if ((v0_4 != (*(int *)(((int)stk + 20))))) goto L_8C07B28E;
    w0_0 = 59.4249992f;
    w0_0 = w0_0 + 59.4249992f * (nlRandom());
    v0_3 = (0x1);
    w0_2 = (((float)(-v0_4) * w0_1));
    w0_1 = (((*(float *)((v0_1 + 0xB00))) * w0_0));
    goto L_8C07B284;
    L_8C07B28E:;
    w0_3 = (((float)(*(int *)(((int)stk + 8))) * w0_1));
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 12)))))) & 4) == 0)) goto L_8C07B350;
    w0_5 = *(float *)(((*(int *)(((int)stk + 12))) + 0x58));
    w0_2 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C07B2E0;
    w0_5 = (w0_2);
    L_8C07B2E4:;
    if ((!(24.6900024f > w0_5))) goto L_8C07B326;
    w0_2 = 0.400000006f;
    w0_2 = w0_2 + 0.200000003f * (nlRandom());
    w0_3 = ((*(float *)((v0_1 + 0xB00))) * w0_2);
    *(float *)(((int)stk + 4)) = (w0_3 * w0_0);
    w0_2 = 0.600000024f;
    w0_2 = w0_2 + 0.300000012f * (nlRandom());
    w0_2 = (w0_4 * w0_2);
    v0_1 = v0_0;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = v0_1;
    v0_3 = (0x1);
    w0_2 = ((w0_2 * w0_1));
    w0_1 = ((w0_3 * w0_0));
    L_8C07B348:;
    cpuAimPointSet(v0_1, v0_3, w0_2, w0_1);
    goto L_8C07B466;
    L_8C07B326:;
    w0_1 = 0.600000024f;
    w0_1 = w0_1 + 0.400000006f * (nlRandom());
    w0_1 = ((*(float *)((v0_1 + 0xB00))) * w0_1);
    v0_1 = v0_0;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = v0_1;
    v0_3 = (0x1);
    w0_2 = (w0_3);
    w0_1 = ((w0_1 * w0_0));
    goto L_8C07B348;
    L_8C07B2E0:;
    w0_5 = ((-w0_2));
    goto L_8C07B2E4;
    L_8C07B350:;
    if (((*(int *)(((int)stk + 8))) != v0_4)) goto L_8C07B35A;
    v0_4 = (v0_2);
    L_8C07B35C:;
    w0_5 = *(float *)((v0_4 + 0xAF0));
    w0_2 = (w0_5);
    if ((0.0f > w0_5)) goto L_8C07B36A;
    w0_5 = (w0_2);
    L_8C07B36E:;
    w0_2 = 0.300000012f;
    w0_2 = w0_2 + 0.200000003f * (float)((((*(int *)(((((*(int *)(((0xB5C + v0_4) + 0x0))) << 2) + ((*(int *)(((int)stk + 16))) + 0x14)) + 0x0))) == 0)) ? 1 : 0);
    if ((!((w0_2 * w0_0) > w0_5))) goto L_8C07B442;
    w0_2 = (*(float *)((v0_4 + 0xAF0)));
    w0_2 = w0_2 + 41.5974998f * ((*(float *)((v0_1 + 0xB00))) * (nlRandom()));
    cpuAimPointSet(v0_0, 0x2, w0_3, w0_2);
    w0_2 = (*(float *)((v0_4 + 0xAF0)));
    w0_2 = w0_2 + 41.5974998f * (*(float *)((v0_1 + 0xB00)));
    cpuAimPointSet((v0_0 + 0x1), 0x2, (w0_4 * w0_1), w0_2);
    w0_4 = *(float *)((v0_4 + 0xAE8));
    v0_0 = (((v0_0 + 0x1) + 0x1));
    w0_2 = (w0_4);
    w0_1 = ((*(float *)((v0_1 + 0xAE8))));
    if ((0.0f > w0_4)) goto L_8C07B3E0;
    w0_5 = (w0_2);
    L_8C07B3E4:;
    if ((0.0f > w0_1)) goto L_8C07B410;
    w0_1 = (w0_1);
    L_8C07B414:;
    if ((w0_1 > w0_5)) goto L_8C07B42E;
    if ((0.0f > w0_2)) goto L_8C07B422;
    w0_5 = (w0_2);
    L_8C07B426:;
    if ((!((*(float *)0x8C07B518) > w0_5))) goto L_8C07B466;
    L_8C07B42E:;
    cpuAimPointSet(v0_0, 0x1, w0_3, ((*(float *)((v0_1 + 0xB00))) * w0_0));
    v0_0 = ((v0_0 + 0x1));
    goto L_8C07B466;
    L_8C07B422:;
    w0_5 = ((-w0_2));
    goto L_8C07B426;
    L_8C07B410:;
    w0_1 = ((-w0_1));
    goto L_8C07B414;
    L_8C07B3E0:;
    w0_5 = ((-w0_2));
    goto L_8C07B3E4;
    L_8C07B442:;
    w0_0 = *(float *)0x8C07B51C;
    cpuAimPointSet(v0_0, 0x1, (((*(float *)((v0_2 + 0xAE8))) + (*(float *)((v0_3 + 0xAE8)))) * w0_0), (((*(float *)((v0_2 + 0xAF0))) + (*(float *)((v0_3 + 0xAF0)))) * w0_0));
    v0_0 = ((v0_0 + 0x1));
    goto L_8C07B466;
    L_8C07B36A:;
    w0_5 = ((-w0_2));
    goto L_8C07B36E;
    L_8C07B35A:;
    v0_4 = (v0_3);
    goto L_8C07B35C;
    L_8C07B190:;
    if ((!(w0_5 > w0_2))) goto L_8C07B1BC;
    v0_5 = (0xFFFFFFFF);
    goto L_8C07B1BE;
    L_8C07B1BC:;
    v0_5 = (0x0);
    goto L_8C07B1BE;
    L_8C07B17A:;
    if ((!(w0_5 > w0_2))) goto L_8C07B182;
    v0_4 = (0xFFFFFFFF);
    goto L_8C07B184;
    L_8C07B182:;
    v0_4 = (0x0);
    goto L_8C07B184;
    L_8C07B160:;
    if ((!(w0_5 > w0_2))) goto L_8C07B168;
    v0_4 = (0xFFFFFFFF);
    goto L_8C07B16A;
    L_8C07B168:;
    v0_4 = (0x0);
    goto L_8C07B16A;
}

int FUN_8c04546c(int a4)
{
    int stk[9];
    register int t0;
    register float u4;
    register float u5;
    register float u11;
    register float u13;
    register float u14;
    register float u20;
    register float u21;
    register float u22;
    register float u27;
    register int t60;
    register int t51;
    register float u42;
    register float u43;
    register float u50;
    register int t69;
    register int t70;
    register float u72;
    register float u73;
    register float u74;
    register float u75;
    register float u79;
    register float u84;
    register float u85;
    register float u89;
    register float u94;
    register float u110;
    register float u114;
    register int t117;
    register float u128;
    register float u129;
    register float u136;
    register int t139;
    register float u138;
    register int t161;
    register int t144;
    register float u40;
    register int t100;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4))) != 0.0f) {
        cpuSglHitReady(a4);
        u4 = *(float *)((a4 + 0xAE8));
        u5 = *(float *)((a4 + 0xB9C));
        u11 = ((*(float *)((a4 + 0xB00))) * (float)(((u5 - u4) > 0.0f) - (0.0f > (u5 - u4))));
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u11 * 32.0f)) + 96.0f);
        t161 = 0x20;
    } else {
        if (((*(int *)((a4 + 0xB60))) & 0x100) == 0) {
            u13 = *(float *)((a4 + 0xAE8));
            u14 = *(float *)((a4 + 0xB9C));
            u20 = ((*(float *)((a4 + 0xB00))) * (float)(((u14 - u13) > 0.0f) - (0.0f > (u14 - u13))));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((-(u20 * 32.0f)) + 96.0f);
            u21 = *(float *)((a4 + 0xB98));
            u22 = *(float *)((a4 + 0xA2C));
            u27 = *(float *)((a4 + 0xB00));
            t60 = 0xB00;
            if ((((u22 - u21) > 0.0f) - (0.0f > (u22 - u21))) == ((u27 > 0.0f) - (0.0f > u27))) {
                if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                    u40 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                } else {
                    u40 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                }
                t51 = 0x8C0457D8;
                if (10.0f > u40) {
                    u42 = *(float *)(((0xB98 + a4) + 0x0));
                    u43 = *(float *)(((0xA2C + a4) + 0x0));
                    u50 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u43 - u42) > 0.0f) - (0.0f > (u43 - u42))));
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u50 * 8.0f)) + 24.0f));
                    t51 = 0x20;
                }
                t60 = t51;
            }
            t144 = t60;
        } else {
            t69 = *(int *)((a4 + 0xB5C));
            t70 = *(int *)(((((0x1 & (t69 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
            u72 = *(float *)(((0x8C2FC69C + (t70 * 0x160)) + 0x28));
            u73 = (*(float *)(((((0x1 & (t69 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
            u73 = u73 + 8.0f * u72;
            u74 = *(float *)((a4 + 0xB00));
            u75 = (-u73);
            if (!(0.0f > u73)) {
                u75 = u73;
            }
            if (u75 > 37.0349998f) {
                u79 = *(float *)(((((0x1 & (t69 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(float *)(((int)stk + 4)) = ((float)(-((u79 > 0.0f) - (0.0f > u79))) * 41.1500015f);
            } else {
                u84 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
                u85 = (-u84);
                if (!(0.0f > u84)) {
                    u85 = u84;
                }
                if (0.200000003f > u85) {
                    u89 = *(float *)(((((0x1 & (t69 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                    t100 = ((u89 > 0.0f) - (0.0f > u89));
                } else {
                    u94 = *(float *)(((0x8C2FC69C + (t70 * 0x160)) + 0x28));
                    t100 = ((u94 > 0.0f) - (0.0f > u94));
                }
                *(float *)(((int)stk + 4)) = ((float)(-t100) * 41.1500015f);
            }
            u110 = (-(u74 * 118.849998f));
            if (!(0.0f > (u74 * 118.849998f))) {
                u110 = (u74 * 118.849998f);
            }
            u114 = (-1.0f);
            u114 = u114 + (1.0f + 1.0f) * (u110 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * (*(float *)(((int)stk + 4)))) / 41.1500015f), u114);
            if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x24))) == 0) {
                t117 = cpuShotAimCheck(a4);
                *(unsigned char *)(((0x24 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = t117;
                if ((unsigned char)t117 != 0) {
                    *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
                } else {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                }
            } else {
                *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (cpuShotAimStick(a4));
            }
            u128 = *(float *)(((0xB98 + a4) + 0x0));
            u129 = *(float *)(((0xA2C + a4) + 0x0));
            u136 = ((*(float *)(((0xB00 + a4) + 0x0))) * (float)(((u129 - u128) > 0.0f) - (0.0f > (u129 - u128))));
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = (int)((float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) + ((-(u136 * 8.0f)) + 24.0f));
            t139 = 0x8;
            if (!((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8))) > 0.0f)) {
            } else {
                u138 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8));
                *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = (u138 - 1.0f);
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                t139 = 0x20;
            }
            t144 = t139;
        }
        t161 = t144;
    }
    return t161;
}
