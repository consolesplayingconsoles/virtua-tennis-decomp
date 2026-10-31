/* Straight-line functions with calls and guards (batch gen_xd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
int nlScaleVector(int, int, float);
void pauseScaleVecArgs(Stk2 s, float f4);

void pauseScaleVecArgs(Stk2 s, float f4)
{
    int stk[15];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    nlScaleVector(((int)stk + 4), (((int)stk + 4) + 0x14), f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}
