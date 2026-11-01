/* Straight-line functions with calls and guards (batch gen_we): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int padUnplugCheck(void);

int padUnplugCheck(void)
{
    int stk[9];
    register int t0;
    register int t6;
    register int t9;
    register int t2;
    register int t7;
    register int t8;

    t0 = 0x0;
    for (;;) {
        if (((*(int *)((((t0 << 2) + 0x8C287AE0) + 0x0))) == 0) && ((t2 = *(int *)0x8C287ADC, t2 != 2) || ((int)t0 <= (int)0x1))) {
            *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = (*(int *)(((0xB64 + ((t0 * 0xD78) + 0x8C287D84)) + 0x0)));
        } else {
            *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = 0xFFFFFFFF;
        }
        t6 = *(int *)((((int)stk + 4) + (t0 << 2)));
        if ((t6 != -1) && (t7 = *(int *)(((t6 << 2) + 0x8C29B898)), t8 = *(int *)((t7 + 0x0)), t8 == 0)) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    t9 = 0x1;
    if (t0 == 0) {
        t9 = 0x2;
    }
    return t9;
}
