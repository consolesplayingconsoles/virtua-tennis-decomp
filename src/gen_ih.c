/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuInTriangle(Stk3, Stk3, Stk3, Stk3);
int cpuInFan(int a4, int a5, Stk3 s);

int cpuInFan(int a4, int a5, Stk3 s)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t4;
    int stk[31];

    stk[20] = s.w[0];
    stk[21] = s.w[1];
    stk[22] = s.w[2];
    t5 = 0x0;
    if (0x1 != 0) {
        t0 = a5;
        t1 = 0x1;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAE8 + a4)); }
            t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + a5)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t0); }
            t4 = cpuInTriangle(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
            if ((signed char)t4 != 0) {
                break;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t1 >= (int)0x9) {
                return 0x0;
            }
        }
        t5 = 0x1;
    }
    return t5;
}
