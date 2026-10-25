/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int decoGaugeFramePut(int a4, int a5, int a6, int a7, int a8, float f4);

int decoGaugeFramePut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t0;
    int t2;
    int t4;
    int stk[17];

    stk[8] = a8;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    if ((int)a5 < 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t0 = *(int *)(((int)stk + 20));
        t4 = (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C3422A8), a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x10)), f4));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t2 = *(int *)(((int)stk + 16));
        t4 = (sprPutAtAlpha(((((((t2 << 2) + t2) << 2) << 2) + 0x8C3422A8) + 0x5A0), a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x10)), f4));
    }
    return t4;
}
