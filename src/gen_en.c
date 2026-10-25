/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int hudLabelPut(int a4, int a5, int a6, int a7, int a8, float f4);

int hudLabelPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t1;
    int stk[15];

    stk[6] = a8;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t1 = *(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C10FF30));
    return (sprPutAtAlpha((((((t1 << 2) + t1) << 2) << 2) + 0x8C33ECD0), a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x8)), f4));
}
