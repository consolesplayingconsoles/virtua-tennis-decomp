/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int memset(int, int, int);
int mwRnaCreate_8c1f1d9c(int, int);
int mwRnaDestroy(int);
int mwRnaErrEntryFunc(int, int);
int mwRnaStop(int, int, int, int);
int mwlRnaDummyFunc(void);
int mwlRnaSetSvrInt(void);
int mwlSbGetWorkTbl(void);
int mwRnaCreate(int a4, int a5);
int kmSetHSyncLine(int a4);
int mwRnaFinish(int a4, int a5, int a6, int a7);
int mwRnaInit(void);
void ADXERR_EntryErrFunc(int a4, int a5);
int thunk_mwRnaInit(void);
int thunk_mwRnaErrEntryFunc(int a4, int a5);

int mwRnaCreate(int a4, int a5)
{
    int stk[1];

    return mwRnaCreate_8c1f1d9c(a4, a5);
}


int mwRnaFinish(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;
    int t21;
    int t24;
    int t6;
    int t15;
    int t16;

    t0 = 0x8C46D68C;
    t1 = 0x8C46D68C;
    t2 = 0x8C46D68C;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 1) {
            t0 = t1;
            mwRnaStop(t0, a5, a6, a7);
        } else {
            t6 = t0;
        }
        t2 = (t2 + 0x90);
        t0 = t6;
        t1 = (t1 + 0x90);
        if ((unsigned int)t2 >= (unsigned int)0x8C46DB0C) {
            break;
        }
    }
    t8 = 0x8C46D68C;
    t9 = 0x8C46D68C;
    t10 = 0x8C46D68C;
    t11 = 0x8C46D68C;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t11 + 0x0))) == 1) {
            t8 = t10;
            mwRnaDestroy(t8);
        } else {
            t15 = t8;
            t16 = t9;
        }
        t11 = (t11 + 0x90);
        t8 = t15;
        t9 = t16;
        t10 = (t10 + 0x90);
        if ((unsigned int)t11 >= (unsigned int)0x8C46DB0C) {
            break;
        }
    }
    memset(0x8C46D68C, 0x0, 0x480);
    memset(0x8C46DB0C, 0x0, 0x820);
    t20 = 0x0;
    t21 = 0x8C46E32C;
    for (;;) {
        t20 = (t20 + 0x1);
        *(unsigned int *)((t21 + 0x0)) = 0x80808080;
        t21 = (t21 + 0x4);
        if ((int)t20 >= (int)0x200) {
            break;
        }
    }
    t24 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0x8C20C8B0) + 0x10)))))(t20, 0x80808080, 0x200, t21);
    return ((int (*)(void))(0x8C200110))();
}


int thunk_mwRnaInit(void)
{
    return mwRnaInit();
}

