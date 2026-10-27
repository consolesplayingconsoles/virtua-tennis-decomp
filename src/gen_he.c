/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawMember(int, int);
int entryGetColorId(int, Stk3);
int hudFramePutWide(int, int, Stk3, float);
int hudNumPut(int, Stk3, float);
extern int hudPointsPut();
int hudScoreIconPut(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int screenSegVisibleRaised(int, Stk3, Stk3);
int screenSphereVisibleRaised(Stk3, float);
int serveGetServer(void);
int sprPutAt(int, Stk3);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
Stk3 vecMake(float, float, float);
int hudScoreBoardDraw(int a4, int a5);
int crowdDrawBlock(int a4, int a5, int a6, int a7, int a8, int a9);

int hudScoreBoardDraw(int a4, int a5)
{
    int t0;
    int t88;
    float u1;
    int t2;
    int t6;
    int t3;
    int t4;
    float u8;
    int t10;
    float u12;
    int t19;
    int t20;
    float u30;
    float u31;
    float u35;
    float u36;
    int t68;
    int t72;
    float u74;
    int t44;
    int t45;
    float u59;
    int t86;
    int t82;
    int t81;
    int stk[28];

    t0 = *(int *)0x8C287B44;
    t88 = t0;
    if (t0 == 7) {
    } else {
        u1 = *(float *)0x8C288874;
        t2 = serveGetServer();
        t6 = 0xAF0;
        if (t2 != 0) {
            t3 = serveGetServer();
            t4 = 0x1868;
            if (t3 == 2) {
                t4 = 0xAF0;
            }
            t6 = t4;
        }
        u8 = *(float *)((0x8C287D84 + t6));
        t10 = (((u1 > 0.0f)) ? 1 : 0);
        u12 = u8;
        if (((*(int *)0x8C287B3C) & 0x10000) != 0) {
            t10 = (0x1 - (((u1 > 0.0f)) ? 1 : 0));
            u12 = (u8 * (-1.0f));
        }
        if (t10 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x18)) = *(struct mv3 *)(0x8C18513C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)(0x8C185148); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D778) = *(struct mv3 *)(0x8C185154); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D760) = *(struct mv3 *)(0x8C185154); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D784) = *(struct mv3 *)(0x8C185160); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D76C) = *(struct mv3 *)(0x8C185160); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)(0x8C18513C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x18)) = *(struct mv3 *)(0x8C185148); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D784) = *(struct mv3 *)(0x8C185154); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D76C) = *(struct mv3 *)(0x8C185154); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D778) = *(struct mv3 *)(0x8C185160); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C33D760) = *(struct mv3 *)(0x8C185160); }
        }
        *(float *)0x8C33D778 = ((*(float *)0x8C33D778) + 41.0f);
        *(float *)0x8C33D784 = ((*(float *)0x8C33D784) + 41.0f);
        t19 = 0x24;
        t20 = 0x0;
        for (;;) {
            if ((int)t20 >= (int)(*(int *)0x8C287ADC)) {
                break;
            }
            t19 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t20 << 1) + t20) << 2) + 0x8C33D760)); }
            t19 = (entryGetColorId(t20, *(Stk3 *)(((int)stk + 16))));
            t19 = (hudScoreIconPut(t19, 1.0f));
            t20 = (t20 + 0x1);
        }
        if ((*(int *)0x8C287B44) != 5) {
            u30 = *(float *)0x8C185134;
            u31 = *(float *)0x8C185130;
            u35 = (u31 + (1.0f + 1.0f));
            u36 = (u30 + -19.0f);
            if (u12 > 0.0f) {
                u35 = u31;
                u36 = (u30 + (1.0f + 1.0f));
            }
            *(Stk3 *)(((int)stk + 28)) = vecMake(u35, u36, 0.100000001f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)(((int)stk + 28)); }
            sprPutAt(0x8C33BCB0, *(Stk3 *)(((int)stk + 12)));
        } else {
            t44 = 0x8C18513C;
            t45 = 0x8C18513C;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C185130); }
        hudFramePutWide(t44, t45, *(Stk3 *)(((int)stk + 16)), 0.5f);
        if ((*(int *)0x8C287ADC) == 4) {
            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 39.0f);
            *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 39.0f);
            u59 = 39.0f;
        }
        if (((*(int *)0x8C287B3C) & 0x4000) == 0) {
            if ((*(int *)0x8C287B20) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                t68 = ((int (*)(int, Stk3, float))(hudPointsPut))(a4, *(Stk3 *)(((int)stk + 16)), u59);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                t82 = (((int (*)(int, Stk3))(hudPointsPut))(a5, *(Stk3 *)(((int)stk + 4))));
            } else {
                if ((a4 == 2) && (a5 == 2)) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    t72 = ((int (*)(int, Stk3, float))(hudPointsPut))(0x3, *(Stk3 *)(((int)stk + 16)), u59);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                    t81 = (((int (*)(int, Stk3))(hudPointsPut))(0x3, *(Stk3 *)(((int)stk + 4))));
                } else {
                    u74 = *(float *)0x8C098CA0;
                    if (a4 == 3) {
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - u74);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    } else {
                        *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) - u74);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
                    }
                    t81 = (((int (*)(int, Stk3, float))(hudPointsPut))(0x4, *(Stk3 *)(((int)stk + 16)), u74));
                }
                t82 = t81;
            }
            t86 = t82;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
            hudNumPut(a4, *(Stk3 *)(((int)stk + 16)), 1.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
            t86 = (hudNumPut(a5, *(Stk3 *)(((int)stk + 4)), 1.0f));
        }
        t88 = t86;
    }
    return t88;
}

int crowdDrawBlock(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t3;
    int t4;
    int t5;
    int t71;
    int t67;
    int t6;
    int t7;
    int t62;
    int t19;
    int t41;
    int t57;
    int t43;
    int t141;
    int t80;
    int t81;
    int t136;
    int t93;
    int t115;
    int t131;
    int t117;
    int t215;
    int t154;
    int t155;
    int t210;
    int t167;
    int t189;
    int t205;
    int t191;
    int t219;
    int t145;
    int stk[28];

    *(unsigned short *)(((int)stk + 60)) = a6;
    *(unsigned int *)(((int)stk + 44)) = (a4 + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(a4); }
    vecAdd(a4, a5, a6, a7, (0x18 + ((int)stk + 8)));
    vecDiv(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x20), (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 44)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    t3 = screenSegVisibleRaised(0xA, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    if (t3 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((a4 + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((a4 + 0x18)); }
        t4 = screenSegVisibleRaised(0xA, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
        if (t4 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x14)); }
            t5 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 40.0f);
            t71 = t5;
            if (t5 != 0) {
                *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
                t67 = 0x8C0B3B0C;
                if ((int)(a7 - 1) > 0) {
                    t6 = 0x0;
                    for (;;) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((((t6 << 1) + t6) << 2) + a5)); }
                        t7 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 6.0f);
                        t62 = t7;
                        if (t7 == 0) {
                        } else {
                            *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t6) % (int)0x1E)));
                            } else {
                                *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t6) % (int)0x1E));
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 44)) = ((((t6 << 1) + t6) << 2) + a5);
                            nlTranslate((*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x0))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x4))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x8))));
                            t19 = *(short *)(((int)stk + 60));
                            *(unsigned int *)(((int)stk + 44)) = (unsigned short)t19;
                            nlRotateAY((unsigned short)t19);
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                            nlPopMatrix(0x1);
                            t6 = (t6 + 0x1);
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t6) % (int)0x1E)));
                            } else {
                                *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t6) % (int)0x1E));
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 48)) = ((((t6 << 1) + t6) << 2) + a5);
                            nlTranslate((*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x0))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x4))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x8))));
                            nlRotateAY((*(int *)(((int)stk + 44))));
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                            t41 = *(int *)(((int)stk + 56));
                            t57 = (nlPopMatrix(0x1));
                            if ((t6 + 0x1) == t41) {
                                t6 = (t6 + 0x1);
                                t43 = (int)((int)(a7 + t6) % (int)0x1E);
                                if (a8 != 0) {
                                    *(unsigned int *)(((int)stk + 52)) = (0x1D - t43);
                                } else {
                                    *(unsigned int *)(((int)stk + 52)) = t43;
                                }
                                nlPushMatrix(0x0);
                                *(unsigned int *)(((int)stk + 48)) = ((((t6 << 1) + t6) << 2) + a5);
                                nlTranslate((*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x0))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x4))), (*(float *)((((((t6 << 1) + t6) << 2) + a5) + 0x8))));
                                nlRotateAY((*(int *)(((int)stk + 44))));
                                crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                                t57 = (nlPopMatrix(0x1));
                            }
                            t62 = t57;
                        }
                        t6 = (t6 + 0x1);
                        if ((int)t6 < (int)(*(int *)(((int)stk + 56)))) continue;
                        break;
                    }
                    t67 = t62;
                }
                t71 = t67;
            }
            t145 = t71;
        } else {
            *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
            t141 = 0x8C0B3B0C;
            if ((int)(a7 - 1) > 0) {
                t80 = 0x0;
                for (;;) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((((t80 << 1) + t80) << 2) + a5)); }
                    t81 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 6.0f);
                    t136 = t81;
                    if (t81 == 0) {
                    } else {
                        *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t80) % (int)0x1E)));
                        } else {
                            *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t80) % (int)0x1E));
                        }
                        nlPushMatrix(0x0);
                        *(unsigned int *)(((int)stk + 44)) = ((((t80 << 1) + t80) << 2) + a5);
                        nlTranslate((*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x0))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x4))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x8))));
                        t93 = *(short *)(((int)stk + 60));
                        *(unsigned int *)(((int)stk + 44)) = (unsigned short)t93;
                        nlRotateAY((unsigned short)t93);
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                        nlPopMatrix(0x1);
                        t80 = (t80 + 0x1);
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t80) % (int)0x1E)));
                        } else {
                            *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t80) % (int)0x1E));
                        }
                        nlPushMatrix(0x0);
                        *(unsigned int *)(((int)stk + 48)) = ((((t80 << 1) + t80) << 2) + a5);
                        nlTranslate((*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x0))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x4))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x8))));
                        nlRotateAY((*(int *)(((int)stk + 44))));
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                        t115 = *(int *)(((int)stk + 56));
                        t131 = (nlPopMatrix(0x1));
                        if ((t80 + 0x1) == t115) {
                            t80 = (t80 + 0x1);
                            t117 = (int)((int)(a7 + t80) % (int)0x1E);
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 52)) = (0x1D - t117);
                            } else {
                                *(unsigned int *)(((int)stk + 52)) = t117;
                            }
                            nlPushMatrix(0x0);
                            *(unsigned int *)(((int)stk + 48)) = ((((t80 << 1) + t80) << 2) + a5);
                            nlTranslate((*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x0))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x4))), (*(float *)((((((t80 << 1) + t80) << 2) + a5) + 0x8))));
                            nlRotateAY((*(int *)(((int)stk + 44))));
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                            t131 = (nlPopMatrix(0x1));
                        }
                        t136 = t131;
                    }
                    t80 = (t80 + 0x1);
                    if ((int)t80 < (int)(*(int *)(((int)stk + 56)))) continue;
                    break;
                }
                t141 = t136;
            }
            t145 = t141;
        }
        t219 = t145;
    } else {
        *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
        t215 = 0x8C0B3B0C;
        if ((int)(a7 - 1) > 0) {
            t154 = 0x0;
            for (;;) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((((t154 << 1) + t154) << 2) + a5)); }
                t155 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 6.0f);
                t210 = t155;
                if (t155 == 0) {
                } else {
                    *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                    if (a8 != 0) {
                        *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t154) % (int)0x1E)));
                    } else {
                        *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t154) % (int)0x1E));
                    }
                    nlPushMatrix(0x0);
                    *(unsigned int *)(((int)stk + 44)) = ((((t154 << 1) + t154) << 2) + a5);
                    nlTranslate((*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x0))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x4))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x8))));
                    t167 = *(short *)(((int)stk + 60));
                    *(unsigned int *)(((int)stk + 44)) = (unsigned short)t167;
                    nlRotateAY((unsigned short)t167);
                    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                    nlPopMatrix(0x1);
                    t154 = (t154 + 0x1);
                    if (a8 != 0) {
                        *(unsigned int *)(((int)stk + 52)) = (0x1D - ((int)((int)(a7 + t154) % (int)0x1E)));
                    } else {
                        *(unsigned int *)(((int)stk + 52)) = ((int)((int)(a7 + t154) % (int)0x1E));
                    }
                    nlPushMatrix(0x0);
                    *(unsigned int *)(((int)stk + 48)) = ((((t154 << 1) + t154) << 2) + a5);
                    nlTranslate((*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x0))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x4))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x8))));
                    nlRotateAY((*(int *)(((int)stk + 44))));
                    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                    t189 = *(int *)(((int)stk + 56));
                    t205 = (nlPopMatrix(0x1));
                    if ((t154 + 0x1) == t189) {
                        t154 = (t154 + 0x1);
                        t191 = (int)((int)(a7 + t154) % (int)0x1E);
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 52)) = (0x1D - t191);
                        } else {
                            *(unsigned int *)(((int)stk + 52)) = t191;
                        }
                        nlPushMatrix(0x0);
                        *(unsigned int *)(((int)stk + 48)) = ((((t154 << 1) + t154) << 2) + a5);
                        nlTranslate((*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x0))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x4))), (*(float *)((((((t154 << 1) + t154) << 2) + a5) + 0x8))));
                        nlRotateAY((*(int *)(((int)stk + 44))));
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 52))) * 0x1F4) + 0x8C344BE8))), a9);
                        t205 = (nlPopMatrix(0x1));
                    }
                    t210 = t205;
                }
                t154 = (t154 + 0x1);
                if ((int)t154 < (int)(*(int *)(((int)stk + 56)))) continue;
                break;
            }
            t215 = t210;
        }
        t219 = t215;
    }
    return t219;
}
