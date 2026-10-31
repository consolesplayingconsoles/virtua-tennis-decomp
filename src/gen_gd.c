/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuLineXAtZ(Stk3, float);
int serveGetServer(void);
Stk3 vecMake(float, float, float);
int cpuDblReceivePos(int a4);

int cpuDblReceivePos(int a4)
{
    int t1;
    int t82;
    int t60;
    int t4;
    float u5;
    int t8;
    int t6;
    float u10;
    float u11;
    float u12;
    float u16;
    float u23;
    float u27;
    float u34;
    float u44;
    float u45;
    float u47;
    int t52;
    float u38;
    float u40;
    int stk[21];
    float R1032;

    R1032 = *(float *)((int)stk + 32);

    t1 = *(int *)((0x8C2888EC + ((serveGetServer()) * 0xD78)));
    t82 = t1;
    if (t1 != 5) {
    } else {
        t60 = 0xA24;
        if ((*(int *)((a4 + 0xA24))) == 0) {
        } else {
            t4 = serveGetServer();
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x4)) = *(struct mv3 *)((0xAE8 + (0x8C287D84 + (t4 * 0xD78)))); }
            u5 = *(float *)(((0x8C287D84 + (t4 * 0xD78)) + 0xAE8));
            t8 = 0x1;
            if (u5 > 0.0f) {
            } else {
                t6 = 0x0;
                if (0.0f > u5) {
                    t6 = 0xFFFFFFFF;
                }
                t8 = t6;
            }
            u10 = *(float *)(((((int)stk + 32) + 0x4) + 0x0));
            u11 = *(float *)(((((int)stk + 32) + 0x4) + 0x8));
            R1032 = ((float)(-t8) * 41.1500015f);
            u12 = (-u10);
            if (!(0.0f > u10)) {
                u12 = u10;
            }
            if (u12 > ((*(float *)0x8C287B40) * 0.5f)) {
                u16 = u11;
                u16 = u16 + 64.0f * (*(float *)((a4 + 0xB00)));
                *(Stk3 *)(((int)stk + 20)) = vecMake((u10 + -0.0f), 0.0f, u16);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
                *(float *)(((int)stk + 28)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), (*(float *)((a4 + 0xAF0)))));
                u23 = (*(float *)(((((int)stk + 32) + 0x4) + 0x8)));
                u23 = u23 + 64.0f * (*(float *)((a4 + 0xB00)));
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 32) + 0x4) + 0x0))) - (R1032)), 0.0f, u23);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
                u38 = 0.200000003f;
                u40 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0xAF0))))) * 0.800000012f);
            } else {
                u27 = u11;
                u27 = u27 + 64.0f * (*(float *)((a4 + 0xB00)));
                *(Stk3 *)(((int)stk + 20)) = vecMake((u10 + -0.0f), 0.0f, u27);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
                *(float *)(((int)stk + 28)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 8)), (*(float *)((a4 + 0xAF0)))));
                u34 = (*(float *)(((((int)stk + 32) + 0x4) + 0x8)));
                u34 = u34 + 64.0f * (*(float *)((a4 + 0xB00)));
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 32) + 0x4) + 0x0))) - (R1032)), 0.0f, u34);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
                u38 = 0.5f;
                u40 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), (*(float *)((a4 + 0xAF0))))) * 0.5f);
            }
            u44 = u40;
            u44 = u44 + u38 * (*(float *)(((int)stk + 28)));
            u45 = *(float *)((a4 + 0xA34));
            u47 = ((-u44) + u45);
            if (!(0.0f > (u44 - u45))) {
                u47 = (u44 - u45);
            }
            t52 = 0xA34;
            if (u47 > 0.0f) {
                *(unsigned int *)((a4 + 0xA24)) = 0x0;
                *(unsigned char *)(((((*(int *)((a4 + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
                *(unsigned char *)(((0x8C2FC69C + ((*(int *)((a4 + 0xB5C))) * 0x160)) + 0xB1)) = 0x1;
                *(float *)((a4 + 0xA34)) = u44;
                *(float *)((a4 + 0xA3C)) = (*(float *)((a4 + 0xAF0)));
                t52 = 0xA3C;
            }
            t60 = t52;
        }
        t82 = t60;
    }
    return t82;
}
