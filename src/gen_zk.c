/* A function proven on cases written by hand: the generator's C with the saved SR kept in a variable (stc sr at the start, ldc sr of that value at the end). */

int kmSetEORCallback(int, int);
int kmSetTexOverflowCallback(int, int);
int nlSetIntrFunction(int, int);
int nlSetIntrPriority(int, int, int, int);
int nlSynchFunction(int);
int syChainAddHandler(int, int, int, int);
int thunk_kmSetHSyncLine(int);
int FUN_8c0f8100(int a4);

int FUN_8c0f8100(int a4)
{
    register int t0;
    register int t1;
    int saved;

    saved = _builtin_get_cr();
    _builtin_set_cr(saved | 0x10000000);
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0x8C454F40 + t0)) = 0x0;
        *(unsigned int *)((0x8C454F74 + t0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x34) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x8C127FD6;
    for (;;) {
        nlSetIntrPriority((*(short *)((t1 + 0x0))), (*(short *)((t1 + 0x2))), 0xFFFFFFFF, 0x8C454F40);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0xC) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        nlSetIntrFunction(t0, 0x0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xD) {
            break;
        }
    }
    nlSynchFunction(0x0);
    kmSetEORCallback(0x8C0F7FF0, 0x0);
    *(unsigned int *)0x8C454F78 = (syChainAddHandler(0x900, 0x8C0F8010, 0x58, 0x0));
    *(unsigned int *)0x8C454F7C = (syChainAddHandler(0x920, 0x8C0F8030, 0x0, 0x0));
    if (a4 != 0) {
        *(unsigned int *)0x8C454F80 = (syChainAddHandler(0xA40, 0x8C0F8050, 0x0, 0x0));
        *(unsigned int *)0x8C454F84 = (syChainAddHandler(0xB00, 0x8C0F8080, 0x0, 0x0));
    }
    kmSetTexOverflowCallback(0x8C0F80B0, 0x0);
    t0 = thunk_kmSetHSyncLine(0x0);
    _builtin_set_cr(saved);
    return t0;
}
