/* Straight-line functions with calls and guards (batch gen_fj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int hudSignFirstPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int hudSignFirstPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[16];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    *(float *)(((int)stk + 20)) = ((*(float *)&a8 + 105.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C33F3B0, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}
