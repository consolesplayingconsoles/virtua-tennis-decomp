/* Straight-line functions with calls and guards (batch gen_ec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
void vecMake(Stk4 s, float f4, float f5, float f6);

void vecMake(Stk4 s, float f4, float f5, float f6)
{
    int stk[5];

    *(float *)((((int)stk + 4) + 0x0)) = f4;
    *(float *)((((int)stk + 4) + 0x4)) = f5;
    *(float *)((((int)stk + 4) + 0x8)) = f6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}
