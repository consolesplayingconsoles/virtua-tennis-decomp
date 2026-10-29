/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int cpuDblPoachCheck(int, int, float, float, float);
int cpuDblPosition(int);
extern int cpuDblThink();
int hudRankIconPut(int, Stk3, Stk1);
int sprPutAt(int, Stk3);
int standBgDraw(int, int, int, int);
int standPanelDraw(int, int, int, int, Stk3, int, int);
int standTableDraw(int, int, int, int, int, int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
int standDraw(int a4, int a5);
int cpuDblThinkAll(int a4, int a5, float f4, float f5, float f6);


int cpuDblThinkAll(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t104;
    int t107;
    int t108;
    int t8;
    int t98;
    float u14;
    float u16;
    float u18;
    float u19;
    float u23;
    int t26;
    int t24;
    int t41;
    float u42;
    int t45;
    int t43;
    int t60;
    float u69;
    float u71;
    int t80;
    int t94;
    int t4;
    int t101;
    int t102;
    int t95;
    int t33;
    int t35;
    int t52;
    int t54;
    int t85;
    int t86;
    int stk[13];

    *(unsigned int *)(((int)stk + 4)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 8)) = 0x3;
    t0 = 0x3;
    t1 = a4;
    t2 = a5;
    t3 = 0x8C2FC69C;
    t5 = 0x8C287D84;
    for (;;) {
        t104 = 0x128;
        t107 = t1;
        t108 = t2;
        if ((*(signed char *)((t3 + 0x128))) != 0) {
        } else {
            t1 = 0x3;
            t2 = (*(int *)((t5 + 0xB5C)));
            t1 = (t1 & (t2 + 0x2));
            t8 = *(int *)(((int)stk + 4));
            t2 = (t2 << 2);
            t0 = t8;
            t0 = (t0 + 0x14);
            t2 = (t2 + t0);
            t98 = t8;
            if ((*(int *)((t2 + 0x0))) == 0) {
                t101 = t1;
                t102 = t2;
            } else {
                t0 = t1;
                t0 = (t0 << 2);
                t0 = (t0 + ((*(int *)(((int)stk + 4))) + 0x14));
                if ((*(int *)((t0 + 0x0))) != 0) {
                    t4 = 0xD78;
                    u14 = *(float *)((t5 + 0xAF0));
                    t0 = 0x8C287D84;
                    t4 = (t1 * t4);
                    t4 = (t4 + t0);
                    u16 = (-u14);
                    if (!(0.0f > u14)) {
                        u16 = u14;
                    }
                    u18 = *(float *)((t4 + 0xAF0));
                    u19 = (-u18);
                    if (!(0.0f > u18)) {
                        u19 = u18;
                    }
                    if (u19 > u16) {
                        u23 = *(float *)0x8C291F50;
                        t26 = 0x1;
                        if (u23 > 0.0f) {
                        } else {
                            t24 = 0x0;
                            if (0.0f > u23) {
                                t24 = 0xFFFFFFFF;
                            }
                            t26 = t24;
                        }
                        if ((float)t26 == (-(*(float *)((t5 + 0xB00))))) {
                            t1 = t5;
                            cpuDblPoachCheck(t1, t2, u23, u14, f6);
                        } else {
                            t33 = t0;
                            t35 = t2;
                        }
                        t0 = t33;
                        t1 = t5;
                        t2 = t35;
                        t41 = ((int (*)(int, int))(cpuDblThink))(t1, t2);
                        t1 = t4;
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
                        if ((float)t45 == (-(*(float *)((t4 + 0xB00))))) {
                            t1 = t4;
                            cpuDblPoachCheck(t1, t2, u42, u14, f6);
                        } else {
                            t52 = t0;
                            t54 = t2;
                        }
                        t0 = t52;
                        t1 = t4;
                        t2 = t54;
                        t60 = ((int (*)(int, int))(cpuDblThink))(t1, t2);
                        t1 = t5;
                    }
                    t95 = (((int (*)(int))(cpuDblThink))(t1));
                } else {
                    t0 = 0x8C23D204;
                    t1 = (t1 * 0x160);
                    t4 = (*(int *)0x8C2FCC1C);
                    t1 = (t1 + 0x8C2FC69C);
                    *(unsigned int *)0x8C2FCC1C = ((unsigned char)(*(signed char *)((t3 + 0x141))) + 0xE);
                    u69 = (*(float *)((t1 + 0xC)));
                    u69 = u69 + 10.0f * (*(float *)((t0 + 0x0)));
                    *(float *)((t1 + 0xC)) = u69;
                    if (u69 > 100.0f) {
                        *(float *)((t1 + 0xC)) = 100.0f;
                    }
                    u71 = *(float *)0x8C291F50;
                    if (u71 > 0.0f) {
                        t0 = 0x1;
                    } else {
                        if (0.0f > u71) {
                            t0 = 0xFFFFFFFF;
                        } else {
                            t0 = 0x0;
                        }
                    }
                    if ((float)t0 == (-(*(float *)((t5 + 0xB00))))) {
                        t0 = (*(signed char *)(((((*(int *)((t5 + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x141)));
                        t0 = (unsigned char)t0;
                        t0 = (t0 << 2);
                        t1 = t5;
                        t80 = ((int (*)(int, int, float))((*(int *)((t0 + 0x8C10D890)))))(t1, t2, u71);
                    } else {
                        t85 = t1;
                        t86 = t2;
                    }
                    t0 = 0x8C06AB78;
                    t1 = t85;
                    t2 = t86;
                    t1 = t5;
                    cpuDblPosition(t1);
                    t1 = t5;
                    t94 = ((int (*)(int))(cpuDblThink))(t1);
                    *(unsigned int *)0x8C2FCC1C = t4;
                    t95 = t94;
                }
                t98 = t95;
            }
            t104 = t98;
            t107 = t101;
            t108 = t102;
        }
        t0 = 0xD78;
        t1 = t107;
        t2 = t108;
        t5 = (t5 + t0);
        t0 = (*(int *)(((int)stk + 8)));
        t3 = (t3 + 0x160);
        t0 = (t0 - 1);
        *(unsigned int *)(((int)stk + 8)) = t0;
        if ((int)t0 >= 0) continue;
        break;
    }
    return t104;
}

int standDraw(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t26;
    int t28;
    int t31;
    int t33;
    int t0;
    int t1;
    int t11;
    int t8;
    int t40;
    int t34;
    int t35;
    int t36;
    int stk[50];

    t2 = 0x8C185198;
    t3 = (((int)stk + 32) + 0x4);
    t4 = 0x0;
    t5 = (((int)stk + 32) + 0x4);
    for (;;) {
        if (a4 == 0) {
            *(unsigned int *)(((((int)stk + 32) + 0x4) + (t4 << 2))) = 0x1;
            t11 = t1;
        } else {
            t0 = (*(int *)((t2 + 0x0)));
            t1 = 0x8C0F7BAC;
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t0;
            t7 = (int)((int)t0 % (int)0x1A);
            t0 = t7;
            *(unsigned int *)((t2 + 0x0)) = t7;
            if ((int)t0 < (int)0x14) {
                *(unsigned int *)((t5 + 0x0)) = 0x1;
                t8 = 0x8C0F7BAC;
            } else {
                t1 = 0x0;
                *(unsigned int *)((t3 + 0x0)) = t1;
                t8 = t1;
            }
            t11 = t8;
        }
        t1 = t11;
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x4);
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        if ((int)t4 >= (int)0x5) {
            break;
        }
    }
    standBgDraw(t2, 0x1, t3, t4);
    standTableDraw(a4, 0x0, a5, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
    *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(98.0f, 20.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F680, *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 100.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F6D0, *(Stk3 *)(((int)stk + 4)));
    if ((*(int *)0x8C287ADC) == 2) {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33F720, *(Stk3 *)(((int)stk + 16)));
    } else {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33FB30, *(Stk3 *)(((int)stk + 16)));
        *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 147.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33E7D0, *(Stk3 *)(((int)stk + 4)));
    }
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
    *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(42.0f, 410.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    hudRankIconPut(a4, *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    t26 = 0x0;
    for (;;) {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(218.0f, (float)(0x162 - (((t26 << 2) << 2) << 2)), 0.100000001f);
        *(unsigned int *)(((int)stk + 32)) = ((t26 << 2) + (((int)stk + 32) + 0x4));
        if ((int)t26 < (int)a4) {
            t28 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
            *(int *)((int)stk + 28) = t28;
            *(int *)((int)stk + 24) = a5;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
            t40 = (standPanelDraw(t26, 0x0, 0x1, 0x1, *(Stk3 *)(((int)stk + 12)), a5, t28));
        } else {
            if (t26 == a4) {
                t31 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
                *(int *)((int)stk + 28) = t31;
                *(int *)((int)stk + 24) = a5;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t34 = t31;
                t35 = 0x1;
                t36 = 0x1;
            } else {
                t33 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
                *(int *)((int)stk + 28) = t33;
                *(int *)((int)stk + 24) = a5;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t34 = t33;
                t35 = 0x0;
                t36 = 0x0;
            }
            t40 = (standPanelDraw(t26, t35, t36, 0x0, *(Stk3 *)(((int)stk + 12)), a5, t34));
        }
        t26 = (t26 + 0x1);
        if ((int)t26 >= (int)0x5) {
            break;
        }
    }
    return t40;
}

