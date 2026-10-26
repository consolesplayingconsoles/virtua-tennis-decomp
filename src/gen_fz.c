/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuDblChase(int);
int cpuDblHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblIsMyBall(int);
int cpuDblMove(int);
int cpuDblNetmanPos(int);
int cpuDblReceivePos(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblServe(int);
int cpuDblShot(int);
int cpuDblSwingInput(int);
float cpuDistXZ(int, int);
int cpuGiveUpCheck(int);
int cpuInRange(Stk3, Stk3, Stk3);
int cpuLineCrossXZ(int, int, int, int, Stk3, Stk3, Stk3, float, float);
int cpuPointOverInput(int);
int cpuSegCrossXZ(int, Stk3, Stk3, Stk3);
int cpuSglChase(int);
int cpuSglHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglMove(int);
int cpuSglReceivePos(int, float, float);
int cpuSglServe(int);
int cpuSglShot(int);
int cpuSglSwingInput(int);
int cpuStickNudge(int);
int serveGetReceiver(void);
Stk3 vecMake(float, float, float);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_save_file_verify(int, int, int, int, int, int);
int cpuSglAimRateOpp3(int a4, int a5);
int cpuDblThink(int a4, int a5, int a6, int a7);
int cpuSglThink(int a4, int a5, int a6, int a7, float f4, float f5);
float cpuDblPathCross(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9);

int cpuSglAimRateOpp3(int a4, int a5)
{
    int t0;
    int t2;
    float u9;
    float u10;
    float u18;
    int t14;
    int t12;
    float u24;
    float u25;
    float u28;
    int t32;
    int t30;
    float u34;
    int t37;
    int t35;
    float u40;
    float u88;
    float u59;
    float u60;
    float t62;
    float t63;
    float t66;
    float t67;
    int t69;
    float u53;
    float u47;
    float u78;
    int stk[26];

    t0 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 40) + 0x18) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 40) + 0x18) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    u9 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u9 = u9 + 0.800000012f * ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u10 = (-u9);
    if (!(0.0f > u9)) {
        u10 = u9;
    }
    u18 = u9;
    if (u10 > 34.9775009f) {
        t14 = 0x1;
        if (u9 > 0.0f) {
        } else {
            t12 = 0x0;
            if (0.0f > u9) {
                t12 = 0xFFFFFFFF;
            }
            t14 = t12;
        }
        u18 = ((float)t14 * 34.9775009f);
    }
    u24 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u24 = u24 + 0.800000012f * ((*(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30))) * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u25 = (-u24);
    if (!(0.0f > u24)) {
        u25 = u24;
    }
    if (u25 > 118.849998f) {
        u53 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u28 = (-u24);
        if (!(0.0f > u24)) {
            u28 = u24;
        }
        if (!(23.7700005f > u28)) {
            t32 = 0x1;
            if (u24 > 0.0f) {
            } else {
                t30 = 0x0;
                if (0.0f > u24) {
                    t30 = 0xFFFFFFFF;
                }
                t32 = t30;
            }
            u34 = *(float *)((a4 + 0xB00));
            t37 = 0x1;
            if (u34 > 0.0f) {
            } else {
                t35 = 0x0;
                if (0.0f > u34) {
                    t35 = 0xFFFFFFFF;
                }
                t37 = t35;
            }
            u40 = u24;
            if (t32 != t37) {
                u40 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
            }
            u47 = u40;
        } else {
            u47 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
        }
        u53 = u47;
    }
    *(float *)(((int)stk + 52)) = u18;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = u53;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
    cpuLineCrossXZ((((int)stk + 4) + 0x24), ((t2 * 0x160) + 0x8C2FC69C), ((t0 * 0x160) + 0x8C2FC69C), 0x8C2FC69C, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), u53, u18);
    u88 = 0.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) == 1) {
        u59 = *(float *)((a5 + 0x8));
        u60 = (-u59);
        if (!(0.0f > u59)) {
            u60 = u59;
        }
        if (u60 > 64.0f) {
            t62 = cpuDistXZ((((int)stk + 40) + 0xC), ((int)stk + 40));
            t63 = cpuDistXZ(((int)stk + 40), (0xB9C + a4));
            u78 = (((((t62 / t63) * (cpuDistXZ(a5, (0xB9C + a4)))) / 41.1500015f)) * 5.0f);
        } else {
            t66 = cpuDistXZ((((int)stk + 40) + 0xC), ((int)stk + 40));
            t67 = cpuDistXZ(((int)stk + 40), (0xB9C + a4));
            t69 = *(int *)0x8C1891E8;
            u78 = ((((((t66 / t67) * (cpuDistXZ(a5, (0xB9C + a4)))) / 118.849998f) / ((*(float *)(((((t69 << 2) << 1) + 0x8C10D41C) + 0x0))) * (*(float *)(((((t69 << 2) << 1) + 0x8C10D41C) + 0x4)))))) * 20.0f);
        }
        u88 = u78;
    }
    *(float *)((a5 + 0x1C)) = u88;
    return 0x1C;
}

int cpuDblThink(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    float u12;
    float u13;
    float u21;
    float u22;
    int t39;
    float u47;
    int t50;
    int t48;
    int t54;
    int t56;
    int t60;
    int t69;
    int t82;
    int t16;
    int t20;
    int stk[6];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)0x8C20D19C;
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 != 0) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) + (*(float *)0x8C23D204));
    }
    if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) > 100.0f) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = 100.0f;
    }
    u12 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0));
    u13 = *(float *)0x8C23D204;
    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = (u12 - u13);
    if (0.0f > (u12 - u13)) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = 0.0f;
    }
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) == 0) && (t16 = *(int *)((a4 + 0xB60)), (t16 & 0x100) != 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x1;
    }
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) != 0) && (t20 = *(int *)((a4 + 0xB60)), (t20 & 0x100) == 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x0;
        u21 = *(float *)((a4 + 0xCF4));
        u22 = (-u21);
        if (!(0.0f > u21)) {
            u22 = u21;
        }
        if (u22 > 0.75f) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7)) = 0x1;
        }
        if ((*(int *)((a4 + 0xA24))) != 2) {
            *(unsigned int *)((a4 + 0xA24)) = 0x4;
        }
    }
    if (((*(int *)0x8C291F78) & 2) != 0) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            cpuDblServe(a4);
        } else {
            t39 = serveGetReceiver();
            if ((*(int *)(((0xB5C + a4) + 0x0))) != t39) {
                cpuDblNetmanPos(a4);
            } else {
                cpuDblReceivePos(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
    } else {
        u47 = *(float *)0x8C291F50;
        t50 = 0x1;
        if (u47 > 0.0f) {
        } else {
            t48 = 0x0;
            if (0.0f > u47) {
                t48 = 0xFFFFFFFF;
            }
            t50 = t48;
        }
        if ((float)t50 == (-(*(float *)((a4 + 0xB00))))) {
            t54 = cpuDblHitCheck(a4, 0x4, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t54 != 0) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                cpuDblShot(a4);
            } else {
                t56 = cpuDblIsMyBall(a4);
                if (t56 != 0) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    cpuDblChase(a4);
                } else {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t60 = ((int (*)(int))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D798)))))(a4);
                }
            }
        } else {
            if ((0x4 & (*(int *)0x8C291F78)) != 0) {
                if (!((1.0f + 1.0f) > (*(float *)0x8C291F54))) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t69 = ((int (*)(int, int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D71C)))))(a4, 0x4, u47);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                t82 = ((int (*)(int, int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D71C)))))(a4, 0x4, u47);
            }
        }
    }
    cpuDblMove(a4);
    cpuDblSwingInput(a4);
    cpuStickNudge(a4);
    cpuGiveUpCheck(a4);
    cpuPointOverInput(a4);
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x128)) = 0x1;
    return 0x128;
}

int cpuSglThink(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    float u12;
    float u13;
    float u34;
    float u21;
    float u22;
    float u42;
    int t45;
    int t43;
    int t49;
    int t54;
    int t64;
    int t76;
    int t16;
    int t20;
    int stk[7];

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)0x8C20D19C;
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 != 0) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) + (*(float *)0x8C23D204));
    }
    if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) > 100.0f) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = 100.0f;
    }
    u12 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0));
    u13 = *(float *)0x8C23D204;
    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = (u12 - u13);
    if (0.0f > (u12 - u13)) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = 0.0f;
    }
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) == 0) && (t16 = *(int *)((a4 + 0xB60)), (t16 & 0x100) != 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x1;
    }
    u34 = 100.0f;
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) != 0) && (t20 = *(int *)((a4 + 0xB60)), (t20 & 0x100) == 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x0;
        u21 = *(float *)((a4 + 0xCF4));
        u22 = (-u21);
        if (!(0.0f > u21)) {
            u22 = u21;
        }
        if (u22 > 0.75f) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7)) = 0x1;
        }
        if ((*(int *)((a4 + 0xA24))) != 2) {
            *(unsigned int *)((a4 + 0xA24)) = 0x4;
        }
        u34 = u21;
    }
    if (((*(int *)0x8C291F78) & 2) != 0) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            cpuSglServe(a4);
        } else {
            cpuSglReceivePos(a4, u34, f5);
        }
    } else {
        u42 = *(float *)0x8C291F50;
        t45 = 0x1;
        if (u42 > 0.0f) {
        } else {
            t43 = 0x0;
            if (0.0f > u42) {
                t43 = 0xFFFFFFFF;
            }
            t45 = t43;
        }
        if ((float)t45 == (-(*(float *)((a4 + 0xB00))))) {
            t49 = cpuSglHitCheck(a4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t49 != 0) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                if ((*(int *)((a4 + 0xA24))) != 1) {
                    cpuSglShot(a4);
                } else {
                    t54 = ((int (*)(int))((*(int *)((((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129))) << 2) + 0x8C10D574)))))(a4);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                cpuSglChase(a4);
            }
        } else {
            if ((0x4 & (*(int *)0x8C291F78)) != 0) {
                if (!((1.0f + 1.0f) > (*(float *)0x8C291F54))) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t64 = ((int (*)(int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D510)))))(a4, u42);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                t76 = ((int (*)(int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D510)))))(a4, u42);
            }
        }
    }
    cpuSglMove(a4);
    cpuSglSwingInput(a4);
    cpuStickNudge(a4);
    cpuGiveUpCheck(a4);
    cpuPointOverInput(a4);
    if (((*(int *)0x8C291F78) & 2) == 0) {
        if ((int)(*(short *)((0x8C2FC7B4 + ((((*(int *)((a4 + 0xB5C))) + 0x1) & 0x1) * 0x160)))) < (int)0x14) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = ((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) & 0xFFFFFFDF);
        }
    }
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x128)) = 0x1;
    return 0x128;
}

float cpuDblPathCross(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t10;
    float u13;
    float u15;
    float u16;
    float u19;
    int t22;
    int t24;
    float u25;
    float u27;
    float u28;
    float u31;
    float u38;
    int stk[52];

    stk[38] = a8;
    stk[39] = a9;
    stk[40] = a10;
    stk[41] = a11;
    stk[42] = a12;
    stk[43] = a13;
    *(unsigned int *)(((int)stk + 88)) = a4;
    if (0x1 != 0) {
        t0 = 0x1;
        t1 = a4;
        for (;;) {
            t2 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x7);
            }
            *(unsigned int *)(((int)stk + 92)) = t2;
            t4 = *(int *)(((int)stk + 88));
            *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((t1 + 0x0))) - (*(float *)((((((t2 << 1) + t2) << 2) + t4) + 0x0)))), 0.0f, ((*(float *)((t1 + 0x8))) - (*(float *)((((((t2 << 1) + t2) << 2) + t4) + 0x8)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t1); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
            cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + t4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t1); }
            t10 = cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if (t10 != 0) {
                break;
            }
            t0 = (t0 + 0x1);
            t1 = (t1 + 0xC);
            if ((int)t0 >= (int)0x9) {
                t1 = (*(int *)(((int)stk + 88)));
                t0 = t1;
                t0 = (t0 + 0x60);
                u13 = (*(float *)0x8C05D220);
                for (;;) {
                    *(Stk3 *)(((int)stk + 76)) = vecMake(1.0f, 0.0f, 0.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t1); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
                    cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
                    u15 = *(float *)((t1 + 0x0));
                    u16 = *(float *)(((int)stk + 96));
                    u19 = ((-u16) + u15);
                    if (!(0.0f > (u16 - u15))) {
                        u19 = (u16 - u15);
                    }
                    t1 = (t1 + 0xC);
                    if (u13 > u19) {
                        u13 = u19;
                    }
                    if ((unsigned int)t1 >= (unsigned int)t0) {
                        break;
                    }
                }
                return u13;
            }
        }
        u38 = 0.0f;
    } else {
        t22 = *(int *)(((int)stk + 88));
        t24 = t22;
        u25 = (*(float *)0x8C05D220);
        for (;;) {
            *(Stk3 *)(((int)stk + 76)) = vecMake(1.0f, 0.0f, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t24); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
            cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
            u27 = *(float *)((t24 + 0x0));
            u28 = *(float *)(((int)stk + 96));
            u31 = ((-u28) + u27);
            if (!(0.0f > (u28 - u27))) {
                u31 = (u28 - u27);
            }
            t24 = (t24 + 0xC);
            if (u25 > u31) {
                u25 = u31;
            }
            if ((unsigned int)t24 >= (unsigned int)(t22 + 0x60)) {
                break;
            }
        }
        u38 = u25;
    }
    return u38;
}

int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t43;
    int t37;
    int t6;
    int t31;
    int t8;
    int t9;
    int t11;
    int t12;
    int t14;
    int t32;
    int stk[11];

    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x0);
    t1 = vmsfs_fgetsize(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t43 = t2;
    if ((int)t2 >= 0) {
        t37 = 0xFFFFFF04;
        if ((unsigned int)t2 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t32 = (vmsfs_save_file_verify(a4, a5, (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t6 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 12));
                t31 = t6;
                if ((int)t6 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t8 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
                    t9 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = ((*(int *)((((((t9 << 2) + t9) << 2) << 2) + 0x8C20C77C))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t11 = t8;
                        t12 = 0x0;
                        for (;;) {
                            t14 = vmsfs_fwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t14 >= 0) {
                                t12 = (t12 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t12 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t14;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t31 = 0x0;
                }
                t32 = t31;
            }
            t37 = t32;
        }
        t43 = t37;
    }
    return t43;
}
