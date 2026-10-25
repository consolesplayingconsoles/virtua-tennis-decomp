/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_tas(char *);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_bread_ns(int, int, int, int, int);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);

int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20A820);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a9, t2);
    }
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}
