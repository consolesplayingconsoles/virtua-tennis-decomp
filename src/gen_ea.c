/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int nlSubVector(int, int);
void vecSub(Stk7 s);

void vecSub(Stk7 s)
{
    int stk[15];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    stk[6] = s.w[4];
    stk[7] = s.w[5];
    stk[8] = s.w[6];
    nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
}
