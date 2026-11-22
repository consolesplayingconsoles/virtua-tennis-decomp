/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int copy_device(void);
int gdFsSearchName(int, int, int);
int init_sub(void);
int kdDevGetFD(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetHandler(int, int);
int kdSetSetCondition(void);
int memcmp(int, int, int);
int memset(int, int, int);
int mpdrv_init(int, int, int);
int mpdrv_init_ex(int, int, int, int);
int nlGetMatrix(int);
int nlUnitMatrix(void);
int ovGetLibTbl(int);
int ovLockCs(int);
int ovUnlockCs(int);
int pdTmrIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int set_file_info(int, int, int, int);
int str_len(int);
int syRtcAicaSetDateHi(int);
int syRtcAicaSetDateLo(int);
int syRtcAicaSetWriteFlag(void);
int syRtcDateToCount(int, int);
int syRtcGetCountForce(void);
int vmsfs_read_retry(int, int, int);
int vsprintf(int, int, int);
int kdInitSystemEx(int a4, int a5, int a6, int a7);
int pdTmrAlarm(int a4, int a5);
int kdInitSystem(int a4, int a5);
int read_fat(int a4);
int ovSearchLibByUuid(int a4);
int syRtcSetDate(int a4);
int search_fat_free(int a4, int a5);
int search_fat(int a4, int a5);
int ovLibEntryTbl(int a4);
int gdFsReopenHn(int a4, int a5, int a6, int a7);
int search_fat_used(int a4);
int gdFsSeek(int a4, int a5, int a6);
int gdFsGetDirInfoG(int a4, int a5);
int kdDevGetControllerInfo(int a4, int a5);
int kdDevGetSIPInfo(int a4, int a5);
int kdDevGetGunInfo(int a4, int a5);
int vmsfs_resetwork(int a4);
int cmp_fname(int a4, int a5);
int mpdrv_sdckbenable(int a4);
int mpdrv_dpf(Stk4 s);
int fmMngWrite(int a4, int a5);
int vmsio_isready(int a4);
int search_exec_file(int a4, int a5);
void buDisableServer(void);
int vmsfs_init_work_new(int a4);
int vmsfs_dpf(Stk4 s);
int nlInitMatrixStack(int a4, int a5, int a6);
int kdDevGetTimerInfo(int a4, int a5);
int vmsfs_isready(void);
int mpdrv_sdckbdisable(int a4);
int buFbrEndFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kdDevGetVibrationInfo(int a4, int a5);
void pdVibGetUnitInfoCallback(int a4, int a5, int a6, int a7);


int nlInitMatrixStack(int a4, int a5, int a6)
{
    int t0;
    int t2;

    t0 = a6;
    if (a5 != ((a5 + 0x1F) & 0xFFFFFFE0)) {
        t0 = (a6 - 1);
    }
    t2 = t0;
    if ((int)t0 > (int)0x7FFF) {
        t2 = 0x7FFF;
    }
    *(unsigned short *)((a4 + 0x2)) = t2;
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)((a4 + 0x4)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    nlUnitMatrix();
    nlGetMatrix((*(int *)((a4 + 0x8))));
    return (*(int *)((a4 + 0x4)));
}


