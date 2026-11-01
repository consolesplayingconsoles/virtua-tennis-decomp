/* Straight-line functions with calls and guards (batch gen_wv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int matchGetCpuRank(void);

int matchGetCpuRank(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)0x8C287D5C) == 3) {
        t0 = *(int *)0x8C2FBEB4;
        t1 = 0x2;
        if ((int)t0 >= (int)0x3) {
            t2 = 0x1;
            if ((int)t0 >= (int)0x6) {
                t2 = 0x0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(int *)0x8C287B84;
        t2 = 0x2;
        if ((int)t1 < (int)0x3) {
        } else {
            t3 = 0x0;
            if ((int)t1 < (int)0x6) {
                t3 = 0x1;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    return t0;
}
