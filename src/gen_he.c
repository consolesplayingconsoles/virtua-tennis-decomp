/* Straight-line functions with calls and guards (batch gen_he): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

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
        u8 = *(float *)(((int)Player + t6));
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

