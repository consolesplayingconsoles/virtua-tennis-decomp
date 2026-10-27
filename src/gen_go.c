/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int bgSprInitRect(int, int, int, int, Stk3);
int bgSprInitAll(int a4, int a5, int a6, int a7);

int bgSprInitAll(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int stk[9];

    t0 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
        t1 = bgSprInitRect((((((t0 << 2) + t0) << 2) << 2) + 0x8C33D120), t0, a6, a7, *(Stk3 *)(((int)stk + 4)));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x14) {
            break;
        }
    }
    return t1;
}
