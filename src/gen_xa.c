/* Straight-line functions with calls and guards (batch gen_xa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int unlockCountW1(void);

int unlockCountW1(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x8;
    t1 = 0x0;
    for (;;) {
        t2 = ((((int)0x1 << (int)t0) & (*(int *)0x8C40C30C)) == 0);
        t0 = (t0 + 0x1);
        if (!t2) {
            t1 = (t1 + 0x1);
        }
        if ((int)t0 >= (int)0x1E) {
            break;
        }
    }
    t0 = t1;
    if (((*(int *)0x8C40C30C) & 0x10000) != 0) {
        t0 = (t1 - 1);
    }
    return t0;
}
