/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int cpuChasePlan(int, int, int, int, int, int, int, int, int, int, int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int nlSubVector(int, int, Stk3);
int cpuDblChase(int a4, int a5, int a6, int a7);
int gdFsReinitG(void);
int adxf_read_sj32(int a4, int a5, int a6);

int cpuDblChase(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    float u10;
    float u11;
    float u17;
    int t24;
    float u31;
    float u35;
    int t45;
    int t49;
    int t53;
    int t59;
    int stk[10];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    L_8C05AA74:;
    t0 = *(int *)((R4 + 0xB5C));
    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
    t2 = ((*(int *)((R4 + 0xB60))) & 0x1) != 0;
    R0 = (0xB60);
    R11 = (0x1);
    R12 = (0x8C291F24);
    R13 = (R4);
    R14 = (((t0 * 0x160) + 0x8C2FC69C));
    R4 = (0x0);
    R5 = (0x0);
    if (t2) goto L_8C05AAAA;
    goto L_8C05AAA6;
    L_8C05AAA6:;
    goto L_8C05AC00;
    L_8C05AC00:;
    return R0;
    L_8C05AAAA:;
    u10 = *(float *)((R13 + 0xAF0));
    u11 = *(float *)((R12 + 0x14));
    R10 = (0x3);
    F3 = (0.0f);
    F4 = ((u11 - u10));
    if ((!((u11 - u10) > 0.0f))) goto L_8C05AAC0;
    goto L_8C05AABC;
    L_8C05AABC:;
    R3 = (0x1);
    goto L_8C05AACA;
    L_8C05AACA:;
    u17 = *(float *)((R13 + 0xB00));
    R0 = (0xB00);
    F3 = (0.0f);
    F5 = (u17);
    if ((!(u17 > 0.0f))) goto L_8C05AAD8;
    goto L_8C05AAD4;
    L_8C05AAD4:;
    R1 = (0x1);
    goto L_8C05AAE2;
    L_8C05AAE2:;
    if ((R3 == R1)) goto L_8C05AAFA;
    goto L_8C05AAE6;
    L_8C05AAE6:;
    t24 = *(signed char *)((R14 + 0x1C));
    R0 = ((unsigned char)t24);
    if (((unsigned char)t24 == 3)) goto L_8C05AAFA;
    goto L_8C05AAF0;
    L_8C05AAF0:;
    *(float *)((R14 + 0x0)) = 0.0f;
    *(unsigned char *)((R14 + 0x1C)) = R10;
    R0 = (0x1C);
    R4 = (R11);
    goto L_8C05AAFA;
    L_8C05AAFA:;
    if ((!((*(float *)((R14 + 0x0))) > 0.0f))) goto L_8C05AB06;
    goto L_8C05AB02;
    L_8C05AB02:;
    goto L_8C05AC00;
    L_8C05AB06:;
    u31 = *(float *)((R12 + 0x6C));
    F4 = (u31);
    if ((0.0f > u31)) goto L_8C05AB14;
    goto L_8C05AB10;
    L_8C05AB10:;
    F3 = (F4);
    goto L_8C05AB18;
    L_8C05AB18:;
    u35 = *(float *)((R13 + 0xAF0));
    F5 = (u35);
    if ((0.0f > u35)) goto L_8C05AB38;
    goto L_8C05AB22;
    L_8C05AB22:;
    F2 = (F5);
    goto L_8C05AB3C;
    L_8C05AB3C:;
    if ((!(F2 > F3))) goto L_8C05AB50;
    goto L_8C05AB40;
    L_8C05AB40:;
    if (((unsigned char)(*(signed char *)((R14 + 0x1C))) == 3)) goto L_8C05AB50;
    goto L_8C05AB4A;
    L_8C05AB4A:;
    *(unsigned char *)((R14 + 0x1C)) = R10;
    R4 = (R11);
    goto L_8C05AB50;
    L_8C05AB50:;
    if (((*(signed char *)((R14 + 0x1C))) == 0)) goto L_8C05AB6E;
    goto L_8C05AB58;
    L_8C05AB58:;
    t45 = *(signed char *)((R14 + 0x12E));
    R0 = ((unsigned char)t45);
    if (((unsigned char)t45 == 2)) goto L_8C05AB6E;
    goto L_8C05AB62;
    L_8C05AB62:;
    if ((R4 != 0)) goto L_8C05AB8A;
    goto L_8C05AB66;
    L_8C05AB66:;
    t49 = *(int *)((R13 + 0xA24));
    R0 = (t49);
    if ((t49 == 2)) goto L_8C05AB8A;
    goto L_8C05AB6E;
    L_8C05AB6E:;
    *(unsigned char *)(((0x1C + R14) + 0x0)) = (cpuChasePlan(R13, R5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28)));
    t53 = *(signed char *)((R14 + 0x12E));
    R0 = ((unsigned char)t53);
    R4 = (R11);
    if (((unsigned char)t53 != 2)) goto L_8C05AB8A;
    goto L_8C05AB86;
    L_8C05AB86:;
    *(unsigned char *)((R14 + 0x12E)) = R10;
    R0 = (0x12E);
    goto L_8C05AB8A;
    L_8C05AB8A:;
    if ((R4 == 0)) goto L_8C05AC00;
    goto L_8C05AB8E;
    L_8C05AB8E:;
    t59 = *(signed char *)((R14 + 0x1C));
    R0 = ((unsigned char)t59);
    if (((unsigned char)t59 == 1)) goto L_8C05ABA8;
    goto L_8C05AB98;
    L_8C05AB98:;
    if ((R0 == 2)) goto L_8C05ABB8;
    goto L_8C05AB9C;
    L_8C05AB9C:;
    if ((R0 == 3)) goto L_8C05ABC8;
    goto L_8C05ABA0;
    L_8C05ABA0:;
    if ((R0 == 4)) goto L_8C05ABE2;
    goto L_8C05ABA4;
    L_8C05ABA4:;
    goto L_8C05ABEE;
    L_8C05ABEE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x94 + R14)) = *(struct mv3 *)(((int)stk + 4)); }
    *(unsigned int *)((R13 + 0xA24)) = 0x2;
    R0 = (0xA24);
    goto L_8C05AC00;
    L_8C05ABE2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xA0 + R14)); }
    goto L_8C05ABEE;
    L_8C05ABC8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R12 + 0x64)); }
    goto L_8C05ABD4;
    L_8C05ABD4:;
    R0 = ((nlSubVector(((int)stk + 4), (R12 + 0x24), *(Stk3 *)(((int)stk + 4)))));
    goto L_8C05ABEE;
    L_8C05ABB8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R12 + 0x58)); }
    goto L_8C05ABD4;
    L_8C05ABA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xA0 + R14)); }
    goto L_8C05ABEE;
    L_8C05AB38:;
    F2 = ((-F5));
    goto L_8C05AB3C;
    L_8C05AB14:;
    F3 = ((-F4));
    goto L_8C05AB18;
    L_8C05AAD8:;
    if ((!(F3 > F5))) goto L_8C05AAE0;
    goto L_8C05AADC;
    L_8C05AADC:;
    R1 = (0xFFFFFFFF);
    goto L_8C05AAE2;
    L_8C05AAE0:;
    R1 = (0x0);
    goto L_8C05AAE2;
    L_8C05AAC0:;
    if ((!(F3 > F4))) goto L_8C05AAC8;
    goto L_8C05AAC4;
    L_8C05AAC4:;
    R3 = (0xFFFFFFFF);
    goto L_8C05AACA;
    L_8C05AAC8:;
    R3 = (0x0);
    goto L_8C05AACA;
}

int gdFsReinitG(void)
{
    int t0;
    int t2;
    int t3;
    int t7;
    int t11;
    int t18;
    int t19;
    int t20;
    int t24;
    int t25;

    t0 = *(int *)0x8C20C204;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t2 = 0x0;
    t3 = (0x1080 + t0);
    for (;;) {
        if ((int)t2 >= (int)((*(int *)(((*(int *)0x8C20C204) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t3);
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x54);
    }
    t7 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t11 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x0)))))(t0);
    *(unsigned short *)(((*(int *)0x8C20C204) + 0x38)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x1C)) = 0x0;
    *(unsigned short *)(((*(int *)0x8C20C204) + 0x3A)) = 0x0;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x34)) = 0x0;
    t18 = 0x3A;
    t19 = ((*(int *)0x8C20C204) + 0x1080);
    t20 = 0x0;
    for (;;) {
        if ((int)t20 >= (int)((*(int *)(((*(int *)0x8C20C204) + 0x0))) + 0x1)) {
            break;
        }
        t18 = 0x4C;
        *(unsigned short *)((t19 + t18)) = 0x0;
        t20 = (t20 + 0x1);
        *(unsigned int *)((t19 + 0x0)) = (*(int *)0x8C20C204);
        t19 = (t19 + 0x54);
    }
    t24 = *(int *)0x8C20C204;
    *(unsigned int *)((t24 + 0x14)) = (0x1080 + t24);
    t25 = *(int *)0x8C20C204;
    *(unsigned int *)((t25 + 0x18)) = ((0x1080 + t25) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0x8C20C204) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t7 & 0xF) << 2) << 2) >> 4));
    return ((int (*)(void))(0x8C1DD6E4))();
}

int adxf_read_sj32(int a4, int a5, int a6)
{
    int t38;
    int t19;
    int t20;
    int t21;
    int t26;
    int t31;
    int t59;
    int t52;
    int t45;
    int t35;
    int stk[6];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
        t59 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
            t52 = 0xFFFFFFFD;
        } else {
            if ((*(int *)(((int)stk + 4))) == 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                t45 = 0xFFFFFFFD;
            } else {
                t38 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                        t35 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock(a4, a5);
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t19 = *(int *)((a4 + 0x10));
                        t20 = *(int *)((a4 + 0x18));
                        t21 = (t19 - t20);
                        if ((int)a5 < (int)(t19 - t20)) {
                            t21 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t21;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t26 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (*(int *)(((int)stk + 4))));
                        t31 = 0xFFFFFFFF;
                        if (t26 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t26;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t31 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                        t35 = t31;
                    }
                    t38 = t35;
                }
                t45 = t38;
            }
            t52 = t45;
        }
        t59 = t52;
    }
    return t59;
}
