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


int gdFsChangeDir(int a4)
{
    return gdFsLoadDir(a4, 0x0);
}


