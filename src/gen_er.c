/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int panelLogoPut(int a4, int a5, int a6, int a7, int a8, float f4);

int panelLogoPut(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int stk[14];

    stk[5] = a8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C337C50, a5, a6, a7, *(Stk3 *)((((int)stk + 16) + 0x4)), f4));
}
