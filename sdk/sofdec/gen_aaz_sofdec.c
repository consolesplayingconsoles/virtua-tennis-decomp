/* Straight-line functions with calls and guards (batch gen_aaz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSTMF_Create(int, int, int, int);
int ADXT_Init(void);
int BupInit(void);
extern void _builtin_set_imask(int);
int camSceneInit(void);
int dbgHookNop(void);
int dbgLockClear(void);
int eepromCfgInit(void);
int fileLoadReset(void);
int gdFsEntryErrFuncAll(int, int);
int gdFsInit(int, int, int, int);
int gdFsOpenRange(int, int, int);
int motFileInit(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlInitHeapMemory2(int, int);
int nlInitInterruptDC(void);
int nlInitLibraryDC(int, int, int);
int nlSetIntrFunction(int, int);
int nlSetPalExtMode(int);
int padInit(void);
int sndFadeFlagsClear(void);
int strncpy(int, int, int);
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcInit(void);
int sysInitGraphics(void);
int sysVideoSelect(void);
int thunk_ADXERR_EntryErrFunc(int, int);
int sysInit(void);
int ADXSTM_OpenRange(int a4, int a5, int a6);


int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = gdFsOpenRange(a4, a5, a6);
    if (t0 == 0) {
        ADXERR_CallErrFunc(0x8C20AA64, a4, a5);
        return 0x0;
    }
    t2 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    if (t2 != 0) {
        strncpy((t2 + 0x40), 0x8C20AA9C, 0x20);
    }
    return t2;
}
