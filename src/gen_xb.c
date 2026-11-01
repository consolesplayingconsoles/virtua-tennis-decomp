/* Straight-line functions with calls and guards (batch gen_xb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int unlockCountW0(void);

int unlockCountW0(void)
{
    register int t0;
    register int t1;
    register int t4;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t4 = ((((int)0x1 << (int)t0) & (*(int *)0x8C40C308)) == 0);
        t0 = (t0 + 0x1);
        if (!t4) {
            t1 = (t1 + 0x1);
        }
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    return t1;
}
