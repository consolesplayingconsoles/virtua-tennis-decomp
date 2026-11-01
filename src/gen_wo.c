/* Straight-line functions with calls and guards (batch gen_wo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_GetStat(int);
int strmVoicePlay(int, int);
int strmVoiceQueueAdd(int);
int strmCallPending(void);

int strmCallPending(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D4770))) << 2) + 0x8C1D4A5C));
    t1 = t0;
    if (t0 != -1) {
        t2 = ADXT_GetStat((*(int *)0x8C38BA98));
        if ((t2 != 5) && (t2 != 0)) {
            t2 = (strmVoiceQueueAdd(t0));
        } else {
            t2 = (strmVoicePlay(0x9, t0));
        }
        *(unsigned int *)0x8C1D4A40 = 0x0;
        t1 = t2;
    }
    return t1;
}
