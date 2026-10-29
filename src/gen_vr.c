/* Straight-line functions with calls and guards (batch gen_vr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int numPutDigits(int a4, Stk3 s, float f4);

int numPutDigits(int a4, Stk3 s, float f4)
{
    int stk[25];
    register int t4;
    register int t0;
    register int t1;
    register int t14;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t23;

    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    t4 = 0x0;
    if ((int)a4 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t0 = ((int)((int)t0 / (int)0xA));
            t1 = (t1 + 0x1);
            if ((int)t0 <= 0) {
                break;
            }
        }
        t4 = t1;
    }
    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
        t23 = (sprPutAtAlpha(0x8C3373BC, *(Stk3 *)(((int)stk + 4)), f4));
    } else {
        t14 = 0x8C0901BC;
        if ((int)t4 > 0) {
            t8 = 0x0;
            t9 = a4;
            for (;;) {
                t10 = (int)((int)t9 % (int)0xA);
                t9 = ((int)((int)t9 / (int)0xA));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x28)); }
                t12 = sprPutAtAlpha((((((t10 << 2) + t10) << 2) << 2) + 0x8C3373BC), *(Stk3 *)(((int)stk + 4)), f4);
                t8 = (t8 + 0x1);
                *(float *)(((((int)stk + 16) + 0x28) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x28) + 0x0))) - 20.0f);
                if ((int)t8 >= (int)t4) {
                    break;
                }
            }
            t14 = t12;
        }
        t23 = t14;
    }
    return t23;
}
