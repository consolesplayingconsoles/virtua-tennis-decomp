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

int sysInit(void)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFFFFFFC));
    *(unsigned int *)0x8C40C5C4 = 0x0;
    _builtin_set_imask(0xE);
    syHwInit();
    t0 = syCblCheck();
    *(unsigned int *)0x8C23D200 = 0x0;
    u0 = 1.0f;
    u0 = u0 + 0.200000003f * (float)(((t0 == 2)) ? 1 : 0);
    *(float *)0x8C23D204 = u0;
    *(float *)0x8C23D208 = u0;
    *(float *)0x8C23D204 = 1.0f;
    *(float *)0x8C23D208 = 1.0f;
    *(float *)0x8C23D20C = 1.33333337f;
    t1 = 0x0;
    if (t0 != 1) {
        t2 = 0x9;
        if (t0 != 2) {
        } else {
            *(unsigned int *)0x8C23D200 = 0x1;
            nlSetPalExtMode(0x1);
            t2 = 0x1A;
        }
        t1 = t2;
    }
    nlInitLibraryDC(t1, 0x80, 0x1);
    *(unsigned int *)0x8C20D124 = 0x0;
    _builtin_set_imask(0xE);
    syHwInit2();
    *(unsigned int *)0x8C40C5C8 = (gdFsInit(0xC, 0x8C2808C0, 0x15E, 0x8C281D88));
    gdFsEntryErrFuncAll(0x8C010DC8, 0x0);
    ADXT_Init();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x1);
    thunk_ADXERR_EntryErrFunc(0x8C0E92AA, 0x0);
    *(unsigned int *)0x8C423BD4 = 0x0;
    nlInitInterruptDC();
    nlSetIntrFunction(0x1, 0x8C010DA8);
    _builtin_set_imask(0x0);
    padInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x2);
    sysInitGraphics();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x20);
    BupInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x8);
    syRtcInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x10);
    *(unsigned int *)0x8C20D1A8 = 0x8C20D1AC;
    nlInitHeapMemory(0x8C20D1AC, 0x20000);
    *(unsigned int *)0x8C22D1C8 = 0x8C22D1CC;
    nlInitHeapMemory2(0x8C22D1CC, 0x10000);
    nlInitEvent();
    eepromCfgInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x4);
    sndFadeFlagsClear();
    *(unsigned int *)0x8C20D14C = 0x7;
    *(unsigned int *)0x8C20D150 = 0x0;
    *(unsigned int *)0x8C20D198 = 0x0;
    *(unsigned int *)0x8C20D19C = 0x0;
    *(unsigned int *)0x8C20D15C = 0x0;
    dbgLockClear();
    fileLoadReset();
    motFileInit();
    camSceneInit();
    t0 = (dbgHookNop());
    if (0x0 != 0) {
        t0 = (sysVideoSelect());
    }
    t1 = 0x8C287C74;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8C287CB4) {
            break;
        }
    }
    return t0;
}

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
