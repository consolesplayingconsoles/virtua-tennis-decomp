/* Straight-line functions with calls and guards (batch gen_rl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float cpuEdgeX(int a4, Stk3 s, float f4);

float cpuEdgeX(int a4, Stk3 s, float f4)
{
    int stk[12];
    float u0;
    float u1;
    int t4;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u35;
    float u15;
    float u27;
    float u23;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    u0 = *(float *)((((int)stk + 4) + 0x8));
    u1 = *(float *)((((int)stk + 4) + 0x0));
    t4 = (u0 > 0.0f) - (0.0f > u0);
    u7 = ((float)((a4 << 1) - 1) * (*(float *)0x8C287B40));
    u8 = ((u1 - (u7 * 0.5f)) / (u0 - ((float)(-t4) * 118.849998f)));
    u9 = (u1 - (u8 * u0));
    u9 = u9 + f4 * ((u1 - (u7 * 0.5f)) / (u0 - ((float)(-t4) * 118.849998f)));
    u10 = ((u1 + -0.0f) / (u0 - ((float)(-t4) * 118.849998f)));
    u11 = ((((float)((a4 << 1) - 1) * 25.0f) - (u10 * u0)) + u1);
    u11 = u11 + f4 * ((u1 + -0.0f) / (u0 - ((float)(-t4) * 118.849998f)));
    u12 = u11;
    if (((float)((a4 << 1) - 1) * u9) > ((float)((a4 << 1) - 1) * u11)) {
        u12 = u9;
    }
    u35 = u12;
    if (((*(int *)0x8C291F78) & 4) == 0) {
        u15 = (-u12);
        if (!(0.0f > u12)) {
            u15 = u12;
        }
        u27 = u12;
        if (u15 > ((*(float *)0x8C287B40) * 0.699999988f)) {
            u23 = ((float)((u12 > 0.0f) - (0.0f > u12)) * (*(float *)0x8C287B40));
            u27 = (u23 * 0.699999988f);
        }
        u35 = u27;
    }
    return u35;
}
