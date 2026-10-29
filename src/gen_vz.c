/* Straight-line functions with calls and guards (batch gen_vz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int hudFontNumPut(int a4, Stk3 s, float f4);

int hudFontNumPut(int a4, Stk3 s, float f4)
{
    int stk[30];
    register int t1;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t9;
    register float u10;
    register int t12;
    register int t7;
    register int t19;
    register int t20;

    stk[19] = s.w[0];
    stk[20] = s.w[1];
    stk[21] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) - 171.0f);
    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
        t1 = *(int *)0x8C18516C;
        sprPutAtAlpha((((((t1 << 2) + t1) << 2) << 2) + 0x8C33E000), *(Stk3 *)(((int)stk + 4)), f4);
        *(float *)(((((int)stk + 16) + 0x3C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x3C) + 0x0))) - 20.0f);
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x8C33E410;
        t4 = 0x8C09A974;
        t5 = 0x410;
        t6 = 0x8C0F7DAC;
        t8 = 0x0;
        t9 = a4;
        u10 = 171.0f;
        for (;;) {
            if (t9 == 0) {
                break;
            }
            t5 = 0x8C0F7BAC;
            t8 = (t8 + 0x1);
            t4 = 0xA;
            t4 = ((int)((int)t9 % (int)t4));
            t7 = t4;
            t6 = 0x8C0F7DAC;
            t4 = 0xC;
            t5 = (((int)stk + 16) + 0x3C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t5); }
            t4 = 0x8C18516C;
            t5 = 0x8C08E944;
            t12 = *(int *)(((t7 << 2) + t4));
            t6 = t12;
            t4 = (sprPutAtAlpha((((((t12 << 2) + t6) << 2) << 2) + 0x8C33E000), *(Stk3 *)(((int)stk + 4)), f4));
            t6 = 0x8C0F7A50;
            t9 = (t9 - t7);
            t4 = 0xA;
            t4 = ((int)((int)t9 / (int)t4));
            t5 = 0x8C0F7BAC;
            t9 = t4;
            t4 = 0x3;
            t4 = ((int)((int)t8 % (int)t4));
            if ((t4 == 0) && (((int)t8 > 0) && (t9 != 0))) {
                u10 = (*(float *)(((((int)stk + 16) + 0x3C) + 0x0)));
                t4 = 0xC;
                t6 = 0x8C0F7DAC;
                u10 = (u10 - 10.0f);
                t5 = (((int)stk + 16) + 0x3C);
                *(float *)(((((int)stk + 16) + 0x3C) + 0x0)) = u10;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t5); }
                t6 = 0x8C08E944;
                t4 = (sprPutAtAlpha((*(int *)(((int)stk + 16))), *(Stk3 *)(((int)stk + 4)), f4));
            } else {
                t19 = 0x8C0F7BAC;
                t20 = 0x8C0F7A50;
            }
            u10 = (*(float *)(((((int)stk + 16) + 0x3C) + 0x0)));
            t5 = t19;
            t6 = t20;
            u10 = (u10 - 19.0f);
            *(float *)(((((int)stk + 16) + 0x3C) + 0x0)) = u10;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x3C)); }
    return (sprPutAtAlpha(0x8C33E000, *(Stk3 *)(((int)stk + 4)), f4));
}
