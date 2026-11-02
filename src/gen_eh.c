/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int kmySetBorderColor(int);
int kmSetBorderColor(Stk4 s);

int kmSetBorderColor(Stk4 s)
{
    kmySetBorderColor(s.w[0]);
    return 0x0;
}
