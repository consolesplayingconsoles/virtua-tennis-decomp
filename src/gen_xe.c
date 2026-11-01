/* Straight-line functions with calls and guards (batch gen_xe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
int nlScalor(int);
int vecLength(Stk1 s);

int vecLength(Stk1 s)
{
    int stk[11];

    stk[2] = s.w[0];
    return (nlScalor((((int)stk + 4) + 0x4)));
}
