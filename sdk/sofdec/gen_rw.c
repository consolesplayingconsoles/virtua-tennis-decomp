/* Straight-line functions with calls and guards (batch gen_rw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SJUNI_GetNumData(int a4, int a5);

int SJUNI_GetNumData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        t0 = (a4 + 0x18);
        t1 = ((a5 << 2) + (a4 + 0x18));
        t2 = 0x0;
        for (;;) {
            t1 = (*(int *)((t1 + 0x0)));
            if (t1 == 0) {
                break;
            }
            t0 = (*(int *)((t1 + 0xC)));
            t2 = (t2 + t0);
        }
        return t2;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t0 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
    }
    return 0x0;
}
