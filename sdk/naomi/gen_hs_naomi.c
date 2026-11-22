/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_EntryErrFunc(void);
int kmSetHSyncLine(void);
int mwRnaErrCallFunc(int, ...);
int mwRnaFinish(void);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int, int, int, int, int, int);
int mwRnaSetSfreq(int, int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int mwRnaCreate_8c1f1d9c(int a4, int a5, int a6);
int thunk_kmSetHSyncLine(void);
int thunk_ADXERR_EntryErrFunc(void);
int thunk_mwRnaFinish(void);


int thunk_kmSetHSyncLine(void)
{
    return kmSetHSyncLine();
}


