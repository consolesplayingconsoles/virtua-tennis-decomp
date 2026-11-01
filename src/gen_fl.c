/* Straight-line functions with calls and guards (batch gen_fl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_EntryErrFunc(int, int);
int gdFsLoadDir(int, int);
int memset(int, int, int);
int mwRnaErrEntryFunc(int, int);
int mwlRnaDummyFunc(void);
int mwlRnaSetSvrInt(void);
int mwlSbGetWorkTbl(void);
int mwRnaInit(void);
int gdFsChangeDir(int a4);
int thunk_mwRnaErrEntryFunc(int a4, int a5);
int thunk_ADXERR_EntryErrFunc(int a4, int a5);

int mwRnaInit(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    mwlRnaDummyFunc();
    memset(0x8C46D68C, 0x0, 0x480);
    memset(0x8C46DB0C, 0x0, 0x820);
    t0 = 0x0;
    t1 = 0x8C46E32C;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x80808080;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x200) {
            break;
        }
    }
    if ((*(int *)0x8C20C8B0) == 0) {
        *(unsigned int *)0x8C20C8B0 = (mwlSbGetWorkTbl());
    } else {
        t0 = 0x80808080;
        t2 = t1;
        t1 = 0x200;
    }
    t3 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0x8C20C8B0) + 0xC)))))((*(int *)0x8C20C8B4), t0, t2, t1);
    mwlRnaSetSvrInt();
    return mwRnaErrEntryFunc(0x0, 0x0);
}

int gdFsChangeDir(int a4)
{
    return gdFsLoadDir(a4, 0x0);
}

int thunk_mwRnaErrEntryFunc(int a4, int a5)
{
    return mwRnaErrEntryFunc(a4, a5);
}

int thunk_ADXERR_EntryErrFunc(int a4, int a5)
{
    return ADXERR_EntryErrFunc(a4, a5);
}
