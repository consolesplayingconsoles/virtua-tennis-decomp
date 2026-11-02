/* Straight-line functions with calls and guards (batch gen_xe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlScalor(int);
float vecLength(Stk3 v);

float vecLength(Stk3 v)
{
    return (nlScalor((int)&v));
}
