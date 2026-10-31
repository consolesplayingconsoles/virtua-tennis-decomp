/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int gdFsInitOvl(void);
int gdFsLoadDirG(int, int);
int gdFsOpenG(int, int);
int kdGetDriverMode(int, int, int, int);
int kdGetGunPosition(int, int);
int kdSendFrame(void);
int memmove(int, int, int);
int mpdrv_get_device(int);
int mpdrv_get_portstatus(int);
int mpdrv_get_version(int, int);
int mpdrv_hreset(int);
int mpdrv_stat(int, int);
int pdVibIsReady(int);
int syChainDeleteHandler(int);
int syChainInit(void);
int syG2SysInit(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_write_retry(int, int, int);
int gdFsGetFileSize(int a4, int a5);
int gdFsGetFileSctSize(int a4, int a5);
int gdFsGetFileFad(int a4, int a5);
int vmsfs_c_settime(int a4, int a5);
int direntry_dirty(int a4, int a5);
void ovLockCs(int a4);
int gdFsOpenFast(void);
int gdFsGetToc(void);
int gdFsReqDrvStat(void);
void gdFsMemcpy(int a4, int a5, int a6);
int gdFsGetStat(int a4);
int read_sys(int a4);
int write_sys(int a4);
void ovUnlockCs(int a4);
int gdFsReinit(void);
int gdFsCreateHn(void);
int gdFsLoadDir(void);
int gdFsSetDir(void);
int gdFsGetDirInfo(void);
int gdFsGetWorkHn(void);
int gdFsGetSysHn(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int gdFsTell(int a4);
int gdFsGetNumRd(int a4);
int mpdrv_memset_l(int a4, int a5, int a6);
int syRtcDbgSetLogAddr(int a4, int a5);
int mpdrv_set_end_ns(void);
int syCblCheckCable(void);
int mpdrv_get_deviceinfo(int a4);
int syHwInit2(void);
int vmsfs_c_getstate(int a4);
void vmsfs_c_setfunc(int a4, int a5);
int mpdrv_recognize(int a4);
int mpdrv_get_timeout(void);
int mpdrv_ischanged(int a4);
int mpdrv_optimize(int a4);
int pdGetOptimize(int a4, int a5, int a6, int a7);
int pdGunGetFlashColor(int a4, int a5, int a6, int a7);
int syRtcFinish(void);
int kdGetDeviceInfo(int a4);
int kdGetPortStatus(int a4);
int mpdrv_swapmode(int a4);
int pdGetPeripheral(int a4);
int gdFsCreateDirhn(int a4, int a5);
int kdVbInHandler(void);
int syCblCheckCableType(void);
int mpdrv_timeout(int a4);
void ovInit(int a4, int a5);
int pdGetPeripheralError(int a4);
void pdSetThreshold(int a4, int a5);
int mpdrv_get_swapmode(void);
int mpdrv_get_nopcount(void);
int mpdrv_get_speed(void);
int mpdrv_debugmode(int a4);
int mpdrv_get_dreqcount(void);
int mpdrv_get_optimize(void);
int mpdrv_rootplay(int a4);
int mpdrv_get_rootplay(void);
int mpdrv_autoflash(int a4);
int mpdrv_get_autoflash(void);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);
int kdDmaEndHandler1(void);
void kdSetGunTrigger(int a4);
int gdFsInit(void);
int pdGetMode(int a4, int a5, int a6, int a7);
int pdGunCheck(int a4, int a5, int a6, int a7);
int pdGunGetPosition(int a4, int a5);
void syRtcSetServerMode(int a4);
int syRtcGetStat(void);
int pdVibMxIsReady(int a4);
int kdGetStatus(int a4, int a5);
int kdGetVersion(int a4, int a5);
int kdIsChanged(int a4);
int kdGetSystemInfo(void);
int kdRecognizeChanged(int a4);
int kdGetGunLatchedPort(void);
int mpdrv_v2p(int a4);
void ovFinish(void);
int gdFsOpenFastG(int a4, int a5);
int gdFsLoadDirFastG(int a4, int a5);
int vmsfs_stat(void);
int check_isopen(void);
int mpdrv_set_hreset_ns(int a4);
int mpdrv_p2v(int a4);
void vmsio_exit(void);
int buFbrSleepVFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int gdFsGetFileSize(int handleAddress, int fileByteCountAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((fileByteCountAddress + 0x0)) = (*(int *)((handleAddress + 0xC)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileSctSize(int handleAddress, int sectorCountAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((sectorCountAddress + 0x0)) = (*(int *)((handleAddress + 0x10)));
        return 0x1;
    }
    return 0x0;
}

int gdFsGetFileFad(int handleAddress, int startFadAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((startFadAddress + 0x0)) = (*(int *)((handleAddress + 0x8)));
        return 0x1;
    }
    return 0x0;
}

int vmsfs_c_settime(int a4, int a5)
{
    return memmove(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x6C), a5, 0x8);
}

int direntry_dirty(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x148) + 0x8C464598) + 0x48)) + 0x0)) = 0x1;
    return (((a4 * 0x148) + 0x8C464598) + 0x48);
}

void ovLockCs(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
}

int gdFsOpenFast(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x40));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetToc(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x50));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsReqDrvStat(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x58));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsMemcpy(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a6;
        t2 = a4;
        for (;;) {
            t3 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = (t1 - 1);
            *(unsigned char *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x1);
            if ((int)t1 <= 0) {
                break;
            }
        }
    }
}

int gdFsGetStat(int handleAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0xFFFFFFF6;
        }
        return (*(short *)((handleAddress + 0x50)));
    }
    return 0xFFFFFFF6;
}

int read_sys(int a4)
{
    return vmsfs_read_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))));
}

int write_sys(int a4)
{
    return vmsfs_write_retry(a4, (*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x8))), (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))));
}

void ovUnlockCs(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int gdFsReinit(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}

int gdFsCreateHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x38));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsLoadDir(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x20));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsSetDir(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x28));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetDirInfo(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x2C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetWorkHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x30));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsGetSysHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x34));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void gdFsExecServer(void)
{
    int t0;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x48)))))();
    return;
    }
}

void gdFsEntryErrFuncAll(void)
{
    int t0;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        ((int (*)(void))((*(int *)((t0 + 0x74)))))();
    return;
    }
}

int gdFsTell(int handleAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        return (*(int *)((handleAddress + 0x14)));
    }
    return 0x0;
}

int gdFsGetNumRd(int handleAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        return (*(int *)((handleAddress + 0x18)));
    }
    return 0x0;
}

int mpdrv_memset_l(int a4, int a5, int a6)
{
    int t0;
    int t1;

    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = a5;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a6) {
                break;
            }
        }
    }
    return a6;
}

int syRtcDbgSetLogAddr(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C45A6E8;
    if ((t0 & 8) != 0) {
        *(unsigned int *)0x8C45A6F4 = a4;
        *(unsigned int *)0x8C45A6F8 = a5;
    }
    return t0;
}

int mpdrv_set_end_ns(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0x8C47317C) + 0xFCC));
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}

int syCblCheckCable(void)
{
    int t0;

    t0 = syCblCheckCableType();
    return (0x3 & ((unsigned int)t0 >> 8));
}

int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0x8C47317C) + 0x44C) + (a4 * 0x78));
}

int syHwInit2(void)
{
    syChainInit();
    return syG2SysInit();
}

int vmsfs_c_getstate(int a4)
{
    return (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x4)));
}

void vmsfs_c_setfunc(int a4, int a5)
{
    *(unsigned int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x8)) = a5;
}

int mpdrv_recognize(int a4)
{
    *(unsigned char *)(((mpdrv_get_device(a4)) + 0xD)) = 0x1;
    return 0x1;
}

int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)(*(int *)((0x10C0 + (*(int *)0x8C47317C)))) >> 16);
}

int mpdrv_ischanged(int a4)
{
    return (unsigned char)(*(signed char *)(((mpdrv_get_device(a4)) + 0xC)));
}

int mpdrv_optimize(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E0)) = a4;
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10E4)) = a4;
    return 0x10E4;
}

int pdGetOptimize(int a4, int a5, int a6, int a7)
{
    return (kdGetDriverMode(0x0, a5, a6, a7));
}

int pdGunGetFlashColor(int a4, int a5, int a6, int a7)
{
    return (kdGetDriverMode(0x9, a5, a6, a7));
}

int syRtcFinish(void)
{
    *(unsigned int *)0x8C45A6E4 = 0x0;
    return syChainDeleteHandler((*(int *)0x8C45A6EC));
}


int kdGetPortStatus(int a4)
{
    return (mpdrv_get_portstatus(a4));
}

int mpdrv_swapmode(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C4)) = (a4 & 0x1);
    return 0x10C4;
}

int pdGetPeripheral(int a4)
{
    return ((a4 * 0x34) + 0x8C45A16C);
}

int gdFsCreateDirhn(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    return a4;
}

int kdVbInHandler(void)
{
    *(unsigned int *)0x8C461E64 = ((*(int *)0x8C461E64) + 0x1);
    return kdSendFrame();
}

int syCblCheckCableType(void)
{
    return ((unsigned short)(*(short *)0xFF800030) & 0x300);
}

int mpdrv_timeout(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C0)) = (a4 << 16);
    return 0x10C0;
}

void ovInit(int a4, int a5)
{
    *(unsigned int *)0x8C00FFF0 = a4;
    *(unsigned int *)0x8C00FFF4 = a5;
}

int pdGetPeripheralError(int a4)
{
    return (*(int *)((0x8C45A64C + (a4 << 2))));
}

void pdSetThreshold(int a4, int a5)
{
    *(unsigned char *)0x8C45A6B0 = a4;
    *(unsigned char *)0x8C45A6B1 = a5;
}

int mpdrv_get_swapmode(void)
{
    return (*(int *)((0x10C4 + (*(int *)0x8C47317C))));
}

int mpdrv_get_nopcount(void)
{
    return (*(int *)((0x10CC + (*(int *)0x8C47317C))));
}

int mpdrv_get_speed(void)
{
    return (*(int *)((0x10D0 + (*(int *)0x8C47317C))));
}

int mpdrv_debugmode(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C8)) = a4;
    return 0x10C8;
}

int mpdrv_get_dreqcount(void)
{
    return (*(int *)((0x10D8 + (*(int *)0x8C47317C))));
}

int mpdrv_get_optimize(void)
{
    return (*(int *)((0x10E4 + (*(int *)0x8C47317C))));
}

int mpdrv_rootplay(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0x10DC)) = a4;
    return 0x10DC;
}

int mpdrv_get_rootplay(void)
{
    return (*(int *)((0x10DC + (*(int *)0x8C47317C))));
}

int mpdrv_autoflash(int a4)
{
    *(unsigned int *)(((*(int *)0x8C47317C) + 0xFBC)) = a4;
    return 0xFBC;
}

int mpdrv_get_autoflash(void)
{
    return (*(int *)((0xFBC + (*(int *)0x8C47317C))));
}

int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x30)));
}

int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x1C)));
}

int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x14)));
}

int kdDmaEndHandler1(void)
{
    *(unsigned int *)0xA05F6900 = 0x1000;
    return 0x1000;
}

void kdSetGunTrigger(int a4)
{
    *(unsigned int *)0x8C4620EC = (a4 + 0x1);
}

int gdFsInit(void)
{
    return gdFsInitOvl();
}

int pdGetMode(int a4, int a5, int a6, int a7)
{
    return kdGetDriverMode(0x5, a5, a6, a7);
}

int pdGunCheck(int a4, int a5, int a6, int a7)
{
    return kdGetDriverMode(0x8, a5, a6, a7);
}

int pdGunGetPosition(int a4, int a5)
{
    return kdGetGunPosition(a4, a5);
}

void syRtcSetServerMode(int a4)
{
    *(unsigned int *)0x8C45A6E8 = a4;
}

int syRtcGetStat(void)
{
    return (*(int *)0x8C45A6E8);
}

int pdVibMxIsReady(int a4)
{
    return pdVibIsReady(a4);
}

int kdGetStatus(int a4, int a5)
{
    return mpdrv_stat(a4, a5);
}

int kdGetVersion(int a4, int a5)
{
    return mpdrv_get_version(a4, a5);
}

int kdIsChanged(int a4)
{
    return mpdrv_ischanged(a4);
}

int kdGetSystemInfo(void)
{
    return 0x8C461E5C;
}

int kdRecognizeChanged(int a4)
{
    return mpdrv_recognize(a4);
}

int kdGetGunLatchedPort(void)
{
    return (*(int *)0x8C4620F0);
}

int mpdrv_v2p(int a4)
{
    return (0xFFFFFFF & a4);
}

void ovFinish(void)
{
    
}

int gdFsOpenFastG(int a4, int a5)
{
    return gdFsOpenG(a4, a5);
}

int gdFsLoadDirFastG(int a4, int a5)
{
    return gdFsLoadDirG(a4, a5);
}

int vmsfs_stat(void)
{
    return 0x0;
}

int check_isopen(void)
{
    return 0x0;
}

int mpdrv_set_hreset_ns(int a4)
{
    return mpdrv_hreset(a4);
}

int mpdrv_p2v(int a4)
{
    return a4;
}

void vmsio_exit(void)
{
    
}

int buFbrSleepVFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return buFbrSleepFiber(0x1, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
}
