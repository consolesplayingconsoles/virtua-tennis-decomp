/* Straight-line functions with calls and guards (batch gen_sq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syCachePurgeAll(int, int, int, int);
void syCacheFinish_P2_(int a4, int a5, int a6, int a7);

void syCacheFinish_P2_(int a4, int a5, int a6, int a7)
{
    int stk[4];

    int R0;
    int R1;
    int R2;
    int R3;
    int T_;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    R1008 = 0x0;
    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    syCachePurgeAll(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = (R1008);
    _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
}
