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


int kmSetHSyncLine(int a4)
{
    int t0;
    int t1;
    int t24;
    int t19;
    int t25;
    int t27;
    int t29;
    int t31;
    int t3;
    int t9;

    t0 = *(int *)0x8C45EEA8;
    t1 = *(int *)0x8C45EEB8;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t3 = *(int *)0x8C45EE2C, (t3 & 44) != 0) && (0x1 != 0))) {
        t9 = ((unsigned int)((unsigned int)(*(int *)0x8C45EE74) >> 16) >> 1);
    } else {
        t9 = ((unsigned int)(*(int *)0x8C45EE74) >> 16);
    }
    t24 = (a4 + (t1 + t0));
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) || (0x1 == 0)) {
        t19 = (a4 + (t1 + t0));
        if (((*(int *)0x8C45EE2C) & 32) != 0) {
            t19 = ((((int)((unsigned int)((int)((unsigned int)a4 + (unsigned int)0x0)) + ((((int)0x0 > (int)a4)) ? 1u : 0u))) >> 1) + (t1 + t0));
        }
        t24 = t19;
    }
    t25 = t24;
    if ((int)t24 < 0) {
        t25 = (t24 + t9);
    }
    t27 = t25;
    if ((int)t25 > (int)t9) {
        t27 = t9;
    }
    t29 = t27;
    if ((int)t27 < 0) {
        t29 = 0x0;
    }
    t31 = *(int *)0x8C45EE68;
    *(unsigned int *)0x8C45EE68 = ((t31 & 0x3FF0000) | (0x3FF & t29));
    kmiWriteRegister(0xC8, ((t31 & 0x3FF0000) | (0x3FF & t29)));
    return 0x0;
}


