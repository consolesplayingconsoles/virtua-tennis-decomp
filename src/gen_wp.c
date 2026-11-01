/* Straight-line functions with calls and guards (batch gen_wp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int nlDispStripTrnsl(int, int, Stk16);
int optionQuadPut(int a4, Stk3 s);

int optionQuadPut(int a4, Stk3 s)
{
    int stk[30];
    register int t0;

    stk[19] = s.w[0];
    stk[20] = s.w[1];
    stk[21] = s.w[2];
    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C126554); }
    t0 = ((int)stk + 4);
    for (;;) {
        *(float *)((t0 + 0x0)) = ((*(float *)((t0 + 0x0))) + (*(float *)(((((int)stk + 4) + 0x48) + 0x0))));
        *(float *)((t0 + 0x4)) = ((*(float *)((t0 + 0x4))) + (*(float *)(((0x4 + (((int)stk + 4) + 0x48)) + 0x0))));
        *(float *)((t0 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x48) + 0x8)));
        *(unsigned int *)((t0 + 0xC)) = a4;
        t0 = (t0 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)(((int)stk + 4) + 0x40)) {
            break;
        }
    }
    return (nlDispStripTrnsl(0x4, ((int)stk + 4), *(Stk16 *)(((int)stk + 4))));
}
