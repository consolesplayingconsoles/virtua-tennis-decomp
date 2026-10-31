/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int colliObjInit(int, int, int, int, int, float);
int motionSet(int, int, int, int, int, int, float);
int mwRnaErrCallFunc(int, ...);
int netJudgeInit(void);
int mwRnaSetSfreq(int a4, int a5);

int netJudgeInit(void)
{
    int t0;
    int t14;
    int t13;
    int t21;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t14 = 0x8C1D0DF0;
        if ((*(int *)(((t0 << 2) + 0x8C1D0DF0))) != 0) {
            motionSet(0x8C38A25C, (*(int *)0x8C124E50), 0x0, 0x2F600, ((*(int *)(((*(int *)(((t0 << 2) + 0x8C1D0DF0))) + 0x0)))), ((*(int *)0x8C2873D4)), 1.0f);
            *(float *)0x8C38A7FC = (float)(*(int *)((((*(int *)0x8C1891F0) << 2) + 0x8C124E68)));
            *(float *)0x8C38A800 = 0.0f;
            *(float *)0x8C38A804 = 0.0f;
            *(unsigned short *)0x8C38A808 = 0xFFFFC000;
            *(unsigned int *)0x8C38A814 = 0x0;
            *(unsigned int *)0x8C38A258 = 0x1;
            colliObjInit(0x8C38A7FC, 0x0, 0x0, 0x0, 0x8C38A81C, 5.0f);
            t13 = *(int *)0x8C38A854;
            *(unsigned int *)0x8C38A854 = (t13 | 0x2);
            t14 = (t13 | 0x2);
        }
        t21 = t14;
    }
    return t21;
}

int mwRnaSetSfreq(int a4, int a5)
{
    int t1;
    int t4;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    t1 = *(int *)((a4 + 0x38));
    t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, a5);
    *(unsigned int *)((a4 + 0xC)) = a5;
    return t4;
}
