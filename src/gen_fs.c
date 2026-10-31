/* Straight-line functions with calls and guards (batch gen_fs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
float cpuDistXZ(int, int);
int cpuInFan(int, int, Stk3);
extern int cpuLineCrossXZ();
float cpuLineXAtZ(Stk3, Stk3, float);
extern int cpuReachPoint();
float nlPow(float, float);
float nlTanfReduce(int, float);
int cpuDblAimRateD(int a4, int a5);
void bodyInit(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5);
float nlTanf(float f4);
int kmyZeroMemory(int a4, int a5);
int kmyMemCopy(int a4, int a5, int a6);
void vmsfs_memcpyl(int a4, int a5, int a6);
void SJMEM_Error(void);
void SJRBF_Error(void);
void SJUNI_Error(void);



float nlTanf(float f4)
{
    float t0;
    int t1;
    int t2;
    int stk[3];

    t0 = nlTanfReduce(((int)stk + 4), f4);
    t1 = *(int *)(((int)stk + 4));
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 == 0) {
        return t0;
    }
    if (t0 != 0.0f) {
        return ((-1.0f) / t0);
    }
    return (*(float *)0x8C0ED670);
}

int kmyZeroMemory(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    if (((a4 | a5) & 7) == 0) {
        t0 = a4;
        t1 = ((unsigned int)((unsigned int)a5 >> 2) >> 1);
        for (;;) {
            t1 = (t1 - 0x1);
            *(float *)((t0 + 0x0)) = 0.0f;
            *(float *)(((t0 + 0x0) + 4)) = 0.0f;
            t0 = (t0 + 0x8);
            if (t1 == 0) {
                break;
            }
        }
        return (a4 | a5);
    }
    if (((a4 | a5) & 3) == 0) {
        t2 = a4;
        t3 = ((unsigned int)a5 >> 2);
        for (;;) {
            t3 = (t3 - 0x1);
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x4);
            if (t3 == 0) {
                break;
            }
        }
        return 0x0;
    }
    if (((a4 | a5) & 1) == 0) {
        t4 = a4;
        t5 = ((unsigned int)a5 >> 1);
        for (;;) {
            t5 = (t5 - 0x1);
            *(unsigned short *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x2);
            if (t5 == 0) {
                break;
            }
        }
        return 0x0;
    }
    t6 = a4;
    t7 = a5;
    for (;;) {
        t7 = (t7 - 0x1);
        *(unsigned char *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x1);
        if (t7 == 0) {
            break;
        }
    }
    return 0x0;
}

int kmyMemCopy(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        for (;;) {
            u3 = *(float *)((t1 + 0x0));
            u4 = *(float *)(((t1 + 0x0) + 4));
            t1 = (t1 + 0x8);
            t2 = (t2 - 0x1);
            *(float *)((t0 + 0x0)) = u3;
            *(float *)(((t0 + 0x0) + 4)) = u4;
            t0 = (t0 + 0x8);
            if (t2 == 0) {
                break;
            }
        }
        return ((a4 | a5) | a6);
    }
    if ((((a4 | a5) | a6) & 3) == 0) {
        t5 = a4;
        t6 = a5;
        t7 = ((unsigned int)a6 >> 2);
        for (;;) {
            t8 = *(int *)((t6 + 0x0));
            t6 = (t6 + 0x4);
            t7 = (t7 - 0x1);
            *(unsigned int *)((t5 + 0x0)) = t8;
            t5 = (t5 + 0x4);
            if (t7 == 0) {
                break;
            }
        }
        return t8;
    }
    if ((((a4 | a5) | a6) & 1) == 0) {
        t9 = a4;
        t10 = a5;
        t11 = ((unsigned int)a6 >> 1);
        for (;;) {
            t12 = *(short *)((t10 + 0x0));
            t10 = (t10 + 0x2);
            t11 = (t11 - 0x1);
            *(unsigned short *)((t9 + 0x0)) = t12;
            t9 = (t9 + 0x2);
            if (t11 == 0) {
                break;
            }
        }
        return t12;
    }
    t13 = a4;
    t14 = a5;
    t15 = a6;
    for (;;) {
        t16 = *(signed char *)((t14 + 0x0));
        t14 = (t14 + 0x1);
        t15 = (t15 - 0x1);
        *(unsigned char *)((t13 + 0x0)) = t16;
        t13 = (t13 + 0x1);
        if (t15 == 0) {
            break;
        }
    }
    return t16;
}

void vmsfs_memcpyl(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = ((unsigned int)a6 >> 2);
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        t2 = (t2 - 0x1);
        *(unsigned int *)((t0 + 0x0)) = t3;
        t0 = (t0 + 0x4);
        if (t2 == 0) {
            break;
        }
    }
}

void SJMEM_Error(void)
{
    for (;;) {
    }
}

void SJRBF_Error(void)
{
    for (;;) {
    }
}

void SJUNI_Error(void)
{
    for (;;) {
    }
}

int cpuDblAimRateD(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u9;
    register int t12;
    register int t10;
    register float u23;
    register float u24;
    register float u28;
    register int t31;
    register int t29;
    register float u49;
    register float u50;
    register float u53;
    register int t56;
    register int t54;
    register float u67;
    register float u68;
    register float u72;
    register int t75;
    register int t73;
    register float t95;
    register float u96;
    register float t98;
    register float u99;
    register float u102;
    register float u103;
    register float u106;
    register float u107;
    register int t109;
    register float u110;
    register float u111;
    register int t114;
    register int t112;
    register float t117;
    register float t120;
    register float t121;
    register float t122;
    register float t123;
    register float u125;
    register int t128;
    register int t126;
    register float u134;
    register int t146;
    register float u147;
    register float u148;
    register int t151;
    register int t149;
    register float t154;
    register float t159;
    register float t160;
    register float t161;
    register float t162;
    register float u164;
    register int t167;
    register int t165;
    register float u173;
    register float u186;
    register float t187;
    register int t192;
    register float t193;
    register int t195;
    register float t196;
    register float t197;
    register float u198;
    register float t199;
    register float u202;
    register float u203;
    register float u204;
    register float u208;
    register int t211;
    register int t209;
    register float u213;
    register int t216;
    register int t214;
    register float u227;
    register int t230;
    register int t228;
    register float u232;
    register int t235;
    register int t233;
    register int t255;
    register int t253;
    register int t259;
    register int t257;
    register float u266;
    register float t284;
    register float t285;
    register int t297;
    register float u310;
    register float u303;
    register int t313;
    register float u326;
    register float u319;
    register float u336;
    register float u338;
    register float u341;
    register int t344;
    register int t342;
    register int t348;
    register int t346;
    register float u351;
    register float u355;
    register int t358;
    register int t356;
    register int t362;
    register int t360;
    register float u365;
    register float u387;
    register float u388;
    register float u393;
    register int t395;
    register int t399;
    register float u404;
    register float u405;
    register float u408;
    register int t411;
    register int t409;
    register float u422;
    register float u423;
    register float u428;
    register int t431;
    register int t429;
    register float u451;
    register float u452;
    register float u457;
    register int t460;
    register int t465;
    register float u276;
    register float u142;
    register float u143;
    register float u247;
    register int t225;
    register int t241;
    register float u333;
    register int t299;
    register int t300;
    register int t315;
    register int t316;
    register float u372;
    register float u383;
    register float u447;
    int stk[89];

    t0 = *(int *)((a4 + 0xB5C));
    *(unsigned int *)(((int)stk + 76)) = ((((t0 + 0x2) & 0x3) * 0xD78) + (int)Player);
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
    *(unsigned int *)(((int)stk + 84)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 80)) = (((t0 << 1) + (t0 << 2)) + 0x8C15A0F4);
    u5 = (*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8)));
    u5 = u5 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    *(float *)(((int)stk + 296)) = u5;
    u6 = (-u5);
    if (!(0.0f > u5)) {
        u6 = u5;
    }
    if (u6 > 46.6225014f) {
        u9 = *(float *)(((int)stk + 296));
        t12 = 0x1;
        if (u9 > 0.0f) {
        } else {
            t10 = 0x0;
            if (0.0f > u9) {
                t10 = 0xFFFFFFFF;
            }
            t12 = t10;
        }
        *(float *)(((int)stk + 296)) = ((float)t12 * 46.6225014f);
    }
    u23 = (*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0)));
    u23 = u23 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    *(float *)(((int)stk + 304)) = u23;
    u24 = (-u23);
    if (!(0.0f > u23)) {
        u24 = u23;
    }
    if (u24 > 118.849998f) {
        *(float *)(((int)stk + 304)) = (-((*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB00))) * 118.849998f));
    } else {
        u28 = *(float *)(((int)stk + 304));
        t31 = 0x1;
        if (u28 > 0.0f) {
        } else {
            t29 = 0x0;
            if (0.0f > u28) {
                t29 = 0xFFFFFFFF;
            }
            t31 = t29;
        }
        if ((float)t31 == (*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB00)))) {
            *(float *)(((int)stk + 304)) = (-((*(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB00))) * 11.8850002f));
        }
    }
    u49 = (*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xAE8)));
    u49 = u49 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    *(float *)(((int)stk + 284)) = u49;
    u50 = (-u49);
    if (!(0.0f > u49)) {
        u50 = u49;
    }
    if (u50 > 46.6225014f) {
        u53 = *(float *)(((int)stk + 284));
        t56 = 0x1;
        if (u53 > 0.0f) {
        } else {
            t54 = 0x0;
            if (0.0f > u53) {
                t54 = 0xFFFFFFFF;
            }
            t56 = t54;
        }
        *(float *)(((int)stk + 284)) = ((float)t56 * 46.6225014f);
    }
    u67 = (*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xAF0)));
    u67 = u67 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    *(float *)(((int)stk + 292)) = u67;
    u68 = (-u67);
    if (!(0.0f > u67)) {
        u68 = u67;
    }
    if (u68 > 118.849998f) {
        *(float *)(((int)stk + 292)) = (-((*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB00))) * 118.849998f));
    } else {
        u72 = *(float *)(((int)stk + 292));
        t75 = 0x1;
        if (u72 > 0.0f) {
        } else {
            t73 = 0x0;
            if (0.0f > u72) {
                t73 = 0xFFFFFFFF;
            }
            t75 = t73;
        }
        if ((float)t75 == (*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB00)))) {
            *(float *)(((int)stk + 292)) = (-((*(float *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB00))) * 11.8850002f));
        }
    }
    *(float *)(((0xB8 + ((int)stk + 76)) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((0xB8 + ((int)stk + 76)) + 0x4)) = 0.0f;
    *(float *)(((0xB8 + ((int)stk + 76)) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB9C + a4)); }
    t95 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), (*(float *)(((int)stk + 304))));
    u96 = *(float *)(((int)stk + 296));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
    t98 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((int)stk + 292))));
    u99 = *(float *)(((int)stk + 284));
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) != 1) {
        u102 = *(float *)((a4 + 0xB9C));
        *(float *)(((int)stk + 248)) = (u102 + (((*(float *)((a5 + 0x0))) - u102) / (1.0f + 1.0f)));
        u103 = *(float *)((a4 + 0xBA4));
        *(float *)(((int)stk + 256)) = (u103 + (((*(float *)((a5 + 0x8))) - u103) / (1.0f + 1.0f)));
        u106 = *(float *)(((int)stk + 248));
        *(float *)(((int)stk + 236)) = (u106 + ((((*(float *)((a5 + 0x0))) - u106) * 1.0f) / 3.0f));
        u107 = *(float *)(((int)stk + 256));
        *(float *)(((int)stk + 244)) = (u107 + ((((*(float *)((a5 + 0x8))) - u107) * 1.0f) / 3.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xDC + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t109 = ((int (*)(int, Stk3, Stk3, Stk3, float, float))(cpuLineCrossXZ))((0xE8 + ((int)stk + 40)), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), 3.0f, u107);
        u110 = *(float *)(((int)stk + 244));
        u111 = *(float *)(((int)stk + 280));
        t114 = 0x1;
        if ((u111 - u110) > 0.0f) {
        } else {
            t112 = 0x0;
            if (0.0f > (u111 - u110)) {
                t112 = 0xFFFFFFFF;
            }
            t114 = t112;
        }
        if ((float)t114 == (*(float *)((a4 + 0xB00)))) {
            t117 = cpuDistXZ((0xDC + ((int)stk + 76)), (0xC4 + ((int)stk + 76)));
            *(float *)(((int)stk + 72)) = t117;
            u142 = ((t117 / (cpuDistXZ((0xB9C + a4), (0xC8 + ((int)stk + 72))))) * 0.100000001f);
        } else {
            *(unsigned int *)(((int)stk + 92)) = (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t120 = cpuDistXZ((0xDC + ((int)stk + 76)), (0xC4 + ((int)stk + 76)));
            *(float *)(((int)stk + 72)) = t120;
            t121 = cpuDistXZ((0xB9C + a4), (0xA4 + ((int)stk + 72)));
            *(float *)(((int)stk + 72)) = (t120 / t121);
            t122 = cpuDistXZ((0xB0 + ((int)stk + 72)), (0xC8 + ((int)stk + 72)));
            *(float *)(((int)stk + 68)) = t122;
            t123 = cpuDistXZ((0xB4 + ((int)stk + 68)), (0xA8 + ((int)stk + 68)));
            u125 = *(float *)(((*(int *)(((int)stk + 92))) + 0x30));
            t128 = 0x1;
            if (u125 > 0.0f) {
            } else {
                t126 = 0x0;
                if (0.0f > u125) {
                    t126 = 0xFFFFFFFF;
                }
                t128 = t126;
            }
            u134 = ((float)((((*(int *)(((((*(int *)(((0xB5C + (((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player)) + 0x0))) << 2) + ((*(int *)(((int)stk + 84))) + 0x14)) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u134 = u134 + 1.0f * (float)((((float)t128 == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            u142 = ((((t120 / t121) * ((t122 / t123) + 1.0f))) * u134);
            u143 = u125;
        }
        *(float *)(((int)stk + 88)) = u142;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xD0 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t146 = ((int (*)(int, Stk3, Stk3, Stk3, float))(cpuLineCrossXZ))((0xE8 + ((int)stk + 40)), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u143);
        u147 = *(float *)(((int)stk + 244));
        u148 = *(float *)(((int)stk + 280));
        t151 = 0x1;
        if ((u148 - u147) > 0.0f) {
        } else {
            t149 = 0x0;
            if (0.0f > (u148 - u147)) {
                t149 = 0xFFFFFFFF;
            }
            t151 = t149;
        }
        if ((float)t151 == (*(float *)((a4 + 0xB00)))) {
            t154 = cpuDistXZ((0xD0 + ((int)stk + 76)), (0xC4 + ((int)stk + 76)));
            *(float *)(((int)stk + 72)) = t154;
            *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * (((t154 / (cpuDistXZ((0xB9C + a4), (0xC8 + ((int)stk + 72))))) * 0.100000001f)));
        } else {
            *(unsigned int *)(((int)stk + 92)) = (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C);
            t159 = cpuDistXZ((0xD0 + ((int)stk + 76)), (0xC4 + ((int)stk + 76)));
            *(float *)(((int)stk + 72)) = t159;
            t160 = cpuDistXZ((0xB9C + a4), (0xA4 + ((int)stk + 72)));
            *(float *)(((int)stk + 72)) = (t159 / t160);
            t161 = cpuDistXZ((0xB0 + ((int)stk + 72)), (0xC8 + ((int)stk + 72)));
            *(float *)(((int)stk + 68)) = t161;
            t162 = cpuDistXZ((0xB4 + ((int)stk + 68)), (0xA8 + ((int)stk + 68)));
            u164 = *(float *)(((*(int *)(((int)stk + 92))) + 0x30));
            t167 = 0x1;
            if (u164 > 0.0f) {
            } else {
                t165 = 0x0;
                if (0.0f > u164) {
                    t165 = 0xFFFFFFFF;
                }
                t167 = t165;
            }
            u173 = ((float)((((*(int *)(((((*(int *)(((0xB5C + ((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player)) + 0x0))) << 2) + ((*(int *)(((int)stk + 84))) + 0x14)) + 0x0))) == 0)) ? 1 : 0) * 0.5f);
            u173 = u173 + 1.0f * (float)((((float)t167 == (-(*(float *)((a4 + 0xB00)))))) ? 1 : 0);
            *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * (((((t159 / t160) * ((t161 / t162) + 1.0f))) * u173)));
        }
        u186 = *(float *)(((int)stk + 88));
        *(float *)(((int)stk + 72)) = _builtin_sqrtf(u186);
        t187 = cpuDistXZ(a5, (0xB9C + a4));
        u276 = (((((_builtin_sqrtf(u186) * (nlPow(t187, 1.20000005f)))) * 5.0f) / 54.8499985f) + (float)(*(signed char *)(((*(int *)(((int)stk + 80))) + 0x5))));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xDC + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xB9C + a4)); }
        t192 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((0xE8 + ((int)stk + 40)), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
        t193 = cpuDistXZ((0x100 + ((int)stk + 40)), (0xE8 + ((int)stk + 40)));
        *(float *)(((int)stk + 36)) = t193;
        *(float *)(((int)stk + 96)) = (t193 / (cpuDistXZ((0xB9C + a4), (0xEC + ((int)stk + 36)))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xF4 + ((int)stk + 40))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t195 = ((int (*)(int, Stk3, Stk3, Stk3))(cpuLineCrossXZ))((0x10C + ((int)stk + 4)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
        t196 = cpuDistXZ((0xD0 + ((int)stk + 76)), (0xC4 + ((int)stk + 76)));
        *(float *)(((int)stk + 72)) = t196;
        t197 = cpuDistXZ((0xB9C + a4), (0xC8 + ((int)stk + 72)));
        u198 = *(float *)(((int)stk + 96));
        *(float *)(((int)stk + 96)) = (u198 * (t196 / t197));
        *(float *)(((int)stk + 72)) = _builtin_sqrtf((u198 * (t196 / t197)));
        t199 = cpuDistXZ(a5, (0xB9C + a4));
        u202 = ((_builtin_sqrtf((u198 * (t196 / t197)))) * (nlPow(t199, 1.20000005f)));
        u203 = *(float *)((a5 + 0x8));
        u204 = (-u203);
        if (!(0.0f > u203)) {
            u204 = u203;
        }
        if (u204 > 64.0f) {
            u208 = *(float *)((a4 + 0xAE8));
            t211 = 0x1;
            if (u208 > 0.0f) {
            } else {
                t209 = 0x0;
                if (0.0f > u208) {
                    t209 = 0xFFFFFFFF;
                }
                t211 = t209;
            }
            u213 = *(float *)((a5 + 0x0));
            t216 = 0x1;
            if (u213 > 0.0f) {
            } else {
                t214 = 0x0;
                if (0.0f > u213) {
                    t214 = 0xFFFFFFFF;
                }
                t216 = t214;
            }
            if (t211 == t216) {
                t225 = (*(signed char *)(((*(int *)(((int)stk + 80))) + 0x0)));
            } else {
                t225 = (*(signed char *)(((*(int *)(((int)stk + 80))) + 0x1)));
            }
            u247 = ((0.0f + ((u202 * 5.0f) / 54.8499985f)) + (float)t225);
        } else {
            u227 = *(float *)((a4 + 0xAE8));
            t230 = 0x1;
            if (u227 > 0.0f) {
            } else {
                t228 = 0x0;
                if (0.0f > u227) {
                    t228 = 0xFFFFFFFF;
                }
                t230 = t228;
            }
            u232 = *(float *)((a5 + 0x0));
            t235 = 0x1;
            if (u232 > 0.0f) {
            } else {
                t233 = 0x0;
                if (0.0f > u232) {
                    t233 = 0xFFFFFFFF;
                }
                t235 = t233;
            }
            if (t230 == t235) {
                t241 = (*(signed char *)(((*(int *)(((int)stk + 80))) + 0x4)));
            } else {
                t241 = (*(signed char *)(((*(int *)(((int)stk + 80))) + 0x3)));
            }
            u247 = ((0.0f + ((u202 * 5.0f) / 54.8499985f)) + (float)(t241 << 1));
        }
        t255 = 0x1;
        if ((u96 - t95) > 0.0f) {
        } else {
            t253 = 0x0;
            if (0.0f > (u96 - t95)) {
                t253 = 0xFFFFFFFF;
            }
            t255 = t253;
        }
        t259 = 0x1;
        if ((u99 - t98) > 0.0f) {
        } else {
            t257 = 0x0;
            if (0.0f > (u99 - t98)) {
                t257 = 0xFFFFFFFF;
            }
            t259 = t257;
        }
        u266 = u247;
        if (t255 == t259) {
        } else {
            u266 = (u247 + (float)(*(signed char *)(((*(int *)(((int)stk + 80))) + 0x2))));
        }
        u276 = u266;
    }
    t284 = cpuDistXZ(a5, (0xDC + ((int)stk + 76)));
    *(float *)(((int)stk + 72)) = t284;
    t285 = cpuDistXZ(a5, (0xD4 + ((int)stk + 72)));
    if (t285 > t284) {
        t297 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
        u310 = u276;
        if (((*(int *)(((*(int *)(((int)stk + 84))) + 0x2C))) == t297) && (t299 = *(int *)(((int)stk + 84)), t300 = *(int *)((((t297 << 2) + (t299 + 0x14)) + 0x0)), t300 == 0)) {
            u303 = ((u276 + (1.0f + 1.0f)) + 4.0f);
            if (((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) == 0) {
                u303 = (u276 + (1.0f + 1.0f));
            }
            u310 = u303;
        }
        u333 = u310;
    } else {
        t313 = *(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C));
        u326 = u276;
        if (((*(int *)(((*(int *)(((int)stk + 84))) + 0x2C))) == t313) && (t315 = *(int *)(((int)stk + 84)), t316 = *(int *)((((t313 << 2) + (t315 + 0x14)) + 0x0)), t316 == 0)) {
            u319 = (u276 + (1.0f + 1.0f));
            if (((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB60))) & 0x100) != 0) {
                u319 = ((u276 + (1.0f + 1.0f)) + 4.0f);
            }
            u326 = u319;
        }
        u333 = u326;
    }
    u336 = (-(u96 - t95));
    if (!(0.0f > (u96 - t95))) {
        u336 = (u96 - t95);
    }
    u338 = (-(u99 - t98));
    if (!(0.0f > (u99 - t98))) {
        u338 = (u99 - t98);
    }
    if (u338 > u336) {
        u341 = *(float *)(((((*(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t344 = 0x1;
        if (u341 > 0.0f) {
        } else {
            t342 = 0x0;
            if (0.0f > u341) {
                t342 = 0xFFFFFFFF;
            }
            t344 = t342;
        }
        t348 = 0x1;
        if ((u96 - t95) > 0.0f) {
        } else {
            t346 = 0x0;
            if (0.0f > (u96 - t95)) {
                t346 = 0xFFFFFFFF;
            }
            t348 = t346;
        }
        u351 = (u333 + 4.0f);
        if (t344 != t348) {
            u351 = u333;
        }
        u372 = u351;
    } else {
        u355 = *(float *)(((((*(int *)((((((t1 + 0x2) & 0x3) * 0xD78) + (int)Player) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x28));
        t358 = 0x1;
        if (u355 > 0.0f) {
        } else {
            t356 = 0x0;
            if (0.0f > u355) {
                t356 = 0xFFFFFFFF;
            }
            t358 = t356;
        }
        t362 = 0x1;
        if ((u99 - t98) > 0.0f) {
        } else {
            t360 = 0x0;
            if (0.0f > (u99 - t98)) {
                t360 = 0xFFFFFFFF;
            }
            t362 = t360;
        }
        u365 = u333;
        if (t358 == t362) {
            u365 = (u333 + 4.0f);
        }
        u372 = u365;
    }
    if ((u99 - t98) > (u96 - t95)) {
        *(float *)(((0xAC + ((int)stk + 76)) + 0x8)) = (*(float *)(((int)stk + 304)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB9C + a4)); }
        u383 = (*(float *)(((int)stk + 304)));
    } else {
        *(float *)(((0xAC + ((int)stk + 76)) + 0x8)) = (*(float *)(((int)stk + 292)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((0xB9C + a4)); }
        u383 = (*(float *)(((int)stk + 292)));
    }
    *(float *)(((0xAC + ((int)stk + 76)) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), u383));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 76) + 0x28)) = *(struct mv3 *)((0xB8 + ((int)stk + 76))); }
    *(float *)(((int)stk + 124)) = ((*(float *)(((int)stk + 124))) * (-1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xB9C + a4)); }
    u387 = *(float *)((a4 + 0xBA4));
    *(float *)(((int)stk + 112)) = u387;
    u388 = *(float *)(((0xAC + ((int)stk + 76)) + 0x8));
    *(float *)(((int)stk + 108)) = u388;
    u393 = (u387 - u388);
    if (!(0.0f > (u387 - u388))) {
    } else {
        u393 = ((-(*(float *)(((int)stk + 112)))) + (*(float *)(((int)stk + 108))));
    }
    t395 = ((int (*)(int, int, int, Stk3))(cpuReachPoint))(a4, (((int)stk + 64) + 0x4C), (int)((u393 / 4.0f) + 10.0f), *(Stk3 *)(((int)stk + 64)));
    *(float *)(((0xAC + ((int)stk + 64)) + 0x8)) = (*(float *)((a4 + 0xBA4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAC + ((int)stk + 76))); }
    *(float *)(((0xAC + ((int)stk + 64)) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), (*(float *)(((0xAC + ((int)stk + 64)) + 0x8)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAC + ((int)stk + 64))); }
    t399 = cpuInFan(a4, (((int)stk + 28) + 0x70), *(Stk3 *)(((int)stk + 28)));
    if (t399 != 0) {
    } else {
        u404 = (*(float *)(((*(int *)(((int)stk + 76))) + 0xAE8)));
        u404 = u404 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        *(float *)(((((int)stk + 76) + 0x34) + 0x0)) = u404;
        u405 = (-u404);
        if (!(0.0f > u404)) {
            u405 = u404;
        }
        if (u405 > 46.6225014f) {
            u408 = *(float *)(((((int)stk + 76) + 0x34) + 0x0));
            t411 = 0x1;
            if (u408 > 0.0f) {
            } else {
                t409 = 0x0;
                if (0.0f > u408) {
                    t409 = 0xFFFFFFFF;
                }
                t411 = t409;
            }
            *(float *)(((((int)stk + 76) + 0x34) + 0x0)) = ((float)t411 * 46.6225014f);
        }
        u422 = (*(float *)(((*(int *)(((int)stk + 76))) + 0xAF0)));
        u422 = u422 + 0.800000012f * ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
        *(float *)(((((int)stk + 76) + 0x34) + 0x8)) = u422;
        u423 = (-u422);
        if (!(0.0f > u422)) {
            u423 = u422;
        }
        if (u423 > 118.849998f) {
            *(float *)(((((int)stk + 76) + 0x34) + 0x8)) = (-((*(float *)(((*(int *)(((int)stk + 76))) + 0xB00))) * 118.849998f));
            u447 = u422;
        } else {
            u428 = *(float *)(((((int)stk + 76) + 0x34) + 0x8));
            t431 = 0x1;
            if (u428 > 0.0f) {
            } else {
                t429 = 0x0;
                if (0.0f > u428) {
                    t429 = 0xFFFFFFFF;
                }
                t431 = t429;
            }
            if ((float)t431 == (*(float *)(((*(int *)(((int)stk + 76))) + 0xB00)))) {
                *(float *)(((((int)stk + 76) + 0x34) + 0x8)) = (-((*(float *)(((*(int *)(((int)stk + 76))) + 0xB00))) * 11.8850002f));
            }
            u447 = u428;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((0xB9C + (*(int *)(((int)stk + 76))))); }
        u451 = *(float *)((a4 + 0xBA4));
        *(float *)(((int)stk + 104)) = u451;
        u452 = *(float *)(((0xAC + ((int)stk + 76)) + 0x8));
        *(float *)(((int)stk + 100)) = u452;
        u457 = (u451 - u452);
        if (!(0.0f > (u451 - u452))) {
        } else {
            u457 = ((-(*(float *)(((int)stk + 104)))) + (*(float *)(((int)stk + 100))));
        }
        t460 = ((int (*)(int, int, int, Stk3, float))(cpuReachPoint))((*(int *)(((int)stk + 76))), (((int)stk + 64) + 0x4C), ((int)((u457 / 4.0f) + 10.0f) << 1), *(Stk3 *)(((int)stk + 64)), u447);
        *(float *)(((0xAC + ((int)stk + 64)) + 0x8)) = (*(float *)(((((int)stk + 76) + 0x34) + 0x8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAC + ((int)stk + 76))); }
        *(float *)(((0xAC + ((int)stk + 64)) + 0x0)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), (*(float *)(((0xAC + ((int)stk + 64)) + 0x8)))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAC + ((int)stk + 76))); }
        t465 = cpuInFan((*(int *)(((int)stk + 76))), (((int)stk + 28) + 0x70), *(Stk3 *)(((int)stk + 28)));
        if (t465 == 0) {
            *(float *)((a5 + 0x1C)) = ((*(float *)((a5 + 0x1C))) - (float)((((-(*(signed char *)(((0x12B + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)))) + 0x3) << 1) + 0x2));
        }
    }
    *(float *)((a5 + 0x1C)) = u372;
    return 0x1C;
}

