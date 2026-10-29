/* Straight-line functions with calls and guards (batch gen_me): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selFirstJoinedPort(void);

int selFirstJoinedPort(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)0x8C343262;
        if (((unsigned short)t1 & (unsigned short)(*(short *)((((t0 << 1) + 0x8C185298) + 0x0)))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return (unsigned short)t1;
        }
    }
    return t0;
}
