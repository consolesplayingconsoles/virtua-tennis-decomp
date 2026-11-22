/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syBtCfgSet(int, int, int);
int syCfgGetSoundMode(int a4, int a5, int a6);
int syCfgSetSoundMode(int a4, int a5, int a6);

int syCfgGetSoundMode(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0x8C20C240;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0, t0, a6);
            if (t1 != -1) {
                t0 = *(signed char *)0x8C00007E;
                if ((signed char)t0 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return 0x0;
                }
                if ((signed char)t0 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFF;
    }
    return 0xFFFFFFFF;
}

int syCfgSetSoundMode(int a4, int a5, int a6)
{
    register int t2;

    if ((*(int *)0x8C20C240) != 0) {
        if ((a4 != 0) && (a4 != 1)) {
            return 0xFFFFFFFF;
        }
        *(unsigned char *)0x8C00007E = a4;
        t2 = syBtCfgSet(0x2, (*(int *)0x8C20C240), a6);
        if (t2 == -1) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}
