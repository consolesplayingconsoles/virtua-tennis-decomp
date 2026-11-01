/* Straight-line functions with calls and guards (batch gen_aba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int panelLogoPut(Stk3 s, float f4);

int panelLogoPut(Stk3 s, float f4)
{
    int stk[16];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C337C50, *(Stk3 *)(((int)stk + 4)), f4));
}
