/* Straight-line functions with calls and guards (batch gen_oj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);

int nlMultiPushedMatrix(void)
{
    return nlMultiMatrix8(((*(int *)0x8C450864) - 64));
}
