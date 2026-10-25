/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int kmySetBorderColor(int);
void kmSetBorderColor(Stk4 s);

void kmSetBorderColor(Stk4 s)
{
    kmySetBorderColor(s.w[0]);
}
