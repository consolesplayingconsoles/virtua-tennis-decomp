/* Straight-line functions with calls and guards (batch gen_gw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTrnsl(int, int);
int primFrameCorners(int, int, int, int, Stk3, Stk3, Stk3, Stk3, float, float, float, float);
int winPartsPut(int, int, int, int, Stk3, int, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int msgWinFramePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int sseleBarDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);
int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);
int winDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6);

int msgWinFramePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    float u18;
    float u19;
    float u20;
    float u21;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    float u23;
    int t24;
    int t25;
    int t29;
    int stk[33];

    u18 = f4;
    u19 = f5;
    u20 = f6;
    u21 = f7;
    if ((int)(*(int *)0x8C38BA50) < (int)0xF) {
        u1 = *(float *)((a4 + 0x0));
        u2 = *(float *)(((a4 + 0x24) + 0x0));
        u3 = *(float *)((a4 + 0x4));
        u4 = *(float *)(((a4 + 0x24) + 0x4));
        u5 = *(float *)0x8C0D127C;
        t6 = a4;
        for (;;) {
            *(float *)((t6 + 0x0)) = ((u1 + ((u2 - u1) / (1.0f + 1.0f))) + ((((*(float *)((t6 + 0x0))) - (u1 + ((u2 - u1) / (1.0f + 1.0f)))) * (float)(*(int *)0x8C38BA50)) / u5));
            *(float *)((t6 + 0x4)) = ((u3 + ((u4 - u3) / (1.0f + 1.0f))) + ((((*(float *)((t6 + 0x4))) - (u3 + ((u4 - u3) / (1.0f + 1.0f)))) * (float)(*(int *)0x8C38BA50)) / u5));
            t6 = (t6 + 0xC);
            if ((unsigned int)t6 >= (unsigned int)(a4 + 0x30)) {
                break;
            }
        }
        u18 = u5;
        u19 = (u1 + ((u2 - u1) / (1.0f + 1.0f)));
        u20 = (u3 + ((u4 - u3) / (1.0f + 1.0f)));
        u21 = (1.0f + 1.0f);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((a4 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x18)); }
    primFrameCorners(0x2, 0xFFFFFFFF, a6, a7, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), u18, u19, u20, u21);
    u23 = *(float *)0x8C0D128C;
    t24 = ((int)stk + 52);
    t25 = a4;
    for (;;) {
        *(float *)((t24 + 0x0)) = (*(float *)((t25 + 0x0)));
        *(float *)((t24 + 0x4)) = (*(float *)((t25 + 0x4)));
        *(float *)((t24 + 0x8)) = ((*(float *)((t25 + 0x8))) + u23);
        *(unsigned int *)((t24 + 0xC)) = 0xC8000000;
        t24 = (t24 + 0x10);
        t25 = (t25 + 0xC);
        if ((unsigned int)t24 >= (unsigned int)(((int)stk + 52) + 0x40)) {
            break;
        }
    }
    t29 = nlDispStripTrnsl(0x4, ((int)stk + 52));
    *(unsigned int *)0x8C38BA50 = ((*(int *)0x8C38BA50) + 0x1);
    return t29;
}

int sseleBarDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    int t4;
    int stk[26];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1AC314;
    *(float *)0x8C1AC2CC = f4;
    *(float *)0x8C1AC290 = f4;
    *(float *)0x8C1AC278 = f4;
    *(float *)0x8C1AC368 = f4;
    *(float *)0x8C1AC350 = f4;
    *(float *)0x8C1AC2FC = (f4 + 90.0f);
    *(float *)0x8C1AC2E4 = (f4 + 90.0f);
    *(float *)0x8C1AC2A8 = (f4 + 90.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x1C)); }
    winTriPartsPut(0x8C1AC26C, 0x2, (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 20)), f6, f5);
    t4 = (*(int *)(((int)stk + 36)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x2C)); }
    return (winPartsPut(0x8C1AC314, 0x8C1AC26C, 0x1, (*(int *)(((int)stk + 32))), *(Stk3 *)(((int)stk + 4)), t4, f6, f5));
}

int winDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    float u0;
    int t5;
    int stk[26];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1D7300;
    *(float *)0x8C1D73CC = f4;
    *(float *)0x8C1D7390 = f4;
    *(float *)0x8C1D7378 = f4;
    *(float *)0x8C1D7354 = f4;
    *(float *)0x8C1D733C = f4;
    u0 = *(float *)0x8C0DEB40;
    *(float *)0x8C1D73FC = (f4 + u0);
    *(float *)0x8C1D73E4 = (f4 + u0);
    *(float *)0x8C1D73A8 = (f4 + u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x1C)); }
    winTriPartsPut(0x8C1D736C, 0x2, ((*(int *)(((int)stk + 32))) + 0xF), (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 20)), f6, f5);
    t5 = (*(int *)(((int)stk + 36)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x2C)); }
    return (winPartsPut(0x8C1D7300, 0x8C1D736C, 0x1, (*(int *)(((int)stk + 32))), *(Stk3 *)(((int)stk + 4)), t5, f6, f5));
}

int winDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6)
{
    float u0;
    int t5;
    int stk[26];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1D7414;
    *(float *)0x8C1D74E0 = f4;
    *(float *)0x8C1D74A4 = f4;
    *(float *)0x8C1D748C = f4;
    *(float *)0x8C1D7468 = f4;
    *(float *)0x8C1D7450 = f4;
    u0 = *(float *)0x8C0DEB40;
    *(float *)0x8C1D7510 = (f4 + u0);
    *(float *)0x8C1D74F8 = (f4 + u0);
    *(float *)0x8C1D74BC = (f4 + u0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x1C)); }
    winTriPartsPut(0x8C1D7480, 0x2, (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 20)), f6, f5);
    t5 = (*(int *)(((int)stk + 36)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x2C)); }
    return (winPartsPut(0x8C1D7414, 0x8C1D7480, 0x1, (*(int *)(((int)stk + 32))), *(Stk3 *)(((int)stk + 4)), t5, f6, f5));
}
