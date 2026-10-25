/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int panelWordPut(int a4, int a5, int a6, int a7, int a8, float f4);

int panelWordPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t0;
    int stk[15];

    stk[6] = a8;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C337DE0), a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x8)), f4));
}
