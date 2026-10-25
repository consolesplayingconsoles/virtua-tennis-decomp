/* Straight-line functions with calls and guards (batch gen_dt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdRecvFrame(void);
int mpdrv_set_setcond(int, int, int, int);
int kdSetSetCondition(int a4, int a5, int a6, int a7);

int kdSetSetCondition(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = mpdrv_set_setcond(a4, a5, a6, a7);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}
