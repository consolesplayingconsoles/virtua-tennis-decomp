/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int _builtin_tas(char *);
int gdFsGetStatG(void);
int hwInit(void);
int kdDevGetTimerInfo(int, int);
int kdGetDeviceInfo(int);
int kdGetGunLatchedPort(void);
int kdRecvFrame(void);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_bwrite(int, ...);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getminfo_ns(int, int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mpdrv_set_transagain_ns(int);
int mpdrv_setcmd(int, int, int, int, int);
int ovInit(int, int);
int pdVibMxIsReady(int);
int pdVibStart(int, int, int);
int pdVmsLcdBltAsm(int, int);
int pdVmsLcdBltAsmFlipH(int, int);
int pdVmsLcdBltAsmFlipHV(int, int);
int pdVmsLcdBltAsmFlipV(int, int);
int syCacheInit_P2_(int);
int syChainAddHandler(int, int, int, int);
int syG2Write(int, int, int, int, int, int);
int syIntInit(int, int);
int syRtcDateToCount(void);
int syRtcGetAndCheckCount(int);
int syRtcGetCountForce(void);
int sySqInit(void);
int syTmrInit(void);
int vmsfs_c_getstate(int);
int vmsfs_fsetparam(int, int, int);
int vmsio_ismount(int);
int buSetFileParam(int a4, int a5, int a6);
int kdSetBlockWrite(Stk4 s);
int fmcalccrc(int a4, int a5, int a6, int a7);
int syRtcCompareDate(int a4, int a5);
int vmsfs_ismount(int a4);
int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8);
int kdDevGetFD(int a4, int a5);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int vmsfs_setdevicetype(int a4);
int search_free_dir(int a4);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_dreq(int a4);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_dreset(int a4);
int mpdrv_set_dkill(int a4);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_ft4ctrl(int a4, int a5);
int mpdrv_set_transagain(int a4);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_end(void);
int syRtcInit(void);
int syRtcExecServer(void);
int syHwInit(void);
int pdVmsLcdBlt(int a4, int a5, int a6);
int vmsfs_unmount(int a4);
int gdFsGetDrvStatG(void);
int ovGetLibTbl(int a4);
int pdGunLeave(void);
int syRtcAicaSetDateHi(int a4);
int buGetLastError(int a4);
int pdVibMxStart(int a4, int a5);
int vmsfs_c_execcallback(int a4, int a5, int a6);
void syMmuDeleteEntry(int a4, int a5, int a6);
int gdFsExecServerG(void);
int pdGunEnter(int a4);
int kdSetCallback(int a4, int a5, int a6);
void vmsfs_c_setvolume(int a4, int a5);
void kmytex_FBEnQueueTop(int a4, int a5, int a6, int a7);
int pdVibMxStop(int a4);
int vmsfs_c_progress(int a4);
int pdTmrIsReady(int a4);
int syRtcDbgWriteLog(int a4, int a5, int a6);
int get_fat(int a4, int a5);
int vmsfs_memcmp(int a4, int a5);
int gdFsFinish(void);
int pdGunGetLatchedPort(void);
int vmsfs_c_setcompletecallback(int a4);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);

int buSetFileParam(int a4, int a5, int a6)
{
    int t2;
    int stk[5];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t2 = vmsfs_c_getstate((*(int *)(((*(int *)(((int)stk + 4))) + 0x28))));
    if (t2 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fsetparam((*(int *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), (*(signed char *)(((int)stk + 12))));
}


int fmcalccrc(int a4, int a5, int a6, int a7)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t0;
    int t2;
    int t3;

    t4 = a4;
    t5 = a5;
    t6 = 0xFFFF;
    t7 = a7;
    for (;;) {
        t4 = (t4 - 1);
        if ((int)t4 < 0) {
            break;
        }
        t7 = (unsigned short)t6;
        t0 = t7;
        t3 = 0xFFFFFFF8;
        t0 = (((int)t3 >= 0) ? (t0 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)t0 >> (-(int)t3 & 31)) : ((int)t0 >> 31)));
        t3 = (*(signed char *)((t5 + 0x0)));
        t5 = (t5 + 0x1);
        t2 = t7;
        t2 = (t2 << 8);
        t3 = (unsigned char)t3;
        t6 = t2;
        t0 = (t0 ^ t3);
        t0 = (t0 << 1);
        t6 = (t6 ^ ((*(short *)((0x8C20B774 + t0)))));
    }
    return (unsigned short)(~(unsigned short)t6);
}

int syRtcCompareDate(int a4, int a5)
{
    int t4;
    int t10;
    int t7;
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    syRtcDateToCount();
    *(volatile int *)(((int)stk + 12));
    syRtcDateToCount();
    t4 = *(int *)(((int)stk + 4));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 8))) == t4) {
    } else {
        t7 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 8))) > (unsigned int)t4) {
            t7 = 0x1;
        }
        t10 = t7;
    }
    return t10;
}

int vmsfs_ismount(int a4)
{
    int t0;
    int t1;

    t0 = vmsio_ismount(a4);
    if ((t0 != 0) && (t1 = *(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x8)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bread_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int kdDevGetFD(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x0));
    t1 = 0x0;
    t2 = (a4 + 0x4);
    t3 = 0x80000000;
    t4 = (a4 + 0x4);
    for (;;) {
        if ((t3 & t0) != 0) {
            if (a5 == t3) {
                break;
            }
            t2 = (t2 + 0x4);
            t4 = t2;
            t1 = (t1 + 0x1);
            t3 = ((unsigned int)t3 >> 1);
            if ((int)t1 >= (int)0x20) {
                return 0x0;
            }
            continue;
        }
        t1 = (t1 + 0x1);
        t3 = ((unsigned int)t3 >> 1);
        if ((int)t1 >= (int)0x20) {
            return 0x0;
        }
    }
    return t4;
}


int vmsfs_setdevicetype(int a4)
{
    int t1;
    int t4;

    *(unsigned int *)(((*(int *)0x8C464594) + 0x0)) = (a4 & 0x1);
    t1 = *(int *)0x8C464594;
    if ((a4 & 0x1) == 1) {
        *(unsigned int *)((t1 + 0xC)) = 0x8C1FEB60;
        *(unsigned int *)(((*(int *)0x8C464594) + 0x10)) = 0x8C1FEB72;
        t4 = (a4 & 0x1);
    } else {
        *(unsigned int *)((t1 + 0xC)) = 0x8C1FEB6A;
        *(unsigned int *)(((*(int *)0x8C464594) + 0x10)) = 0x8C1FEB7A;
        t4 = 0x8C1FEB6A;
    }
    return t4;
}

int search_free_dir(int a4)
{
    int t1;
    int t2;

    t1 = 0x0;
    t2 = (*(int *)((((a4 * 0x148) + 0x8C464598) + 0x28)));
    for (;;) {
        if ((int)t1 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        if ((unsigned char)(*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t2 = (t2 + 0x20);
        t1 = (t1 + 0x1);
    }
    return t1;
}

int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 12), 0x2, 0x0));
}

int mpdrv_set_dreq(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreq_ns(a4);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getcond(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getcond_ns(a4, a5);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dreset(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_dkill(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dkill_ns(a4);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_allstatreq(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_allstatreq_ns(a4);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_getminfo(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_arctrl(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_arctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_ft4ctrl(int a4, int a5)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_transagain(int a4)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_transagain_ns(a4);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_setcond(int a4, int a5, int a6, int a7)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_setcond_ns(a4, a5, a6, a7);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int mpdrv_set_end(void)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_end_ns();
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int syRtcInit(void)
{
    *(unsigned int *)0x8C45A6E4 = (syRtcGetCountForce());
    *(unsigned int *)0x8C45A6E8 = 0x0;
    syRtcExecServer();
    *(unsigned int *)0x8C45A6EC = (syChainAddHandler(0x900, 0x8C1DF04C, 0x5C, 0x0));
    return 0x0;
}

int syRtcExecServer(void)
{
    int t6;
    int t8;
    int t7;

    if (((*(int *)0x8C45A6E8) & 1) == 0) {
        *(unsigned int *)0x8C45A6E4 = (syRtcGetAndCheckCount((*(int *)0x8C45A6E4)));
    }
    t6 = *(int *)0x8C45A6E8;
    t8 = t6;
    if ((t6 & 2) != 0) {
        t7 = syRtcGetCountForce();
        *(unsigned int *)0x8C45A6E4 = t7;
        t8 = t7;
    }
    return t8;
}

int syHwInit(void)
{
    hwInit();
    syIntInit((*(int *)0x8C209758), (*(int *)0x8C20C214));
    sySqInit();
    syCacheInit_P2_((*(int *)0x8C209754));
    return syTmrInit();
}

int pdVmsLcdBlt(int a4, int a5, int a6)
{
    if (a6 != 1) {
        if (a6 != 2) {
            if (a6 != 3) {
                return pdVmsLcdBltAsm(a4, a5);
            }
            return pdVmsLcdBltAsmFlipHV(a4, a5);
        }
        return pdVmsLcdBltAsmFlipV(a4, a5);
    }
    return pdVmsLcdBltAsmFlipH(a4, a5);
}

int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x8C464598) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x4)) = 0x0;
    return 0x0;
}

int gdFsGetDrvStatG(void)
{
    int t3;
    int stk[4];

    t3 = ((int (*)(int))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x20)))))(((int)stk + 4));
    if (t3 == 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)(((int)stk + 4)));
}

int ovGetLibTbl(int a4)
{
    int t7;

    if ((*(int *)0x8C00FFF0) == 0) {
        ovInit(0x8C00FC00, 0x78);
    }
    t7 = *(int *)0x8C00FFF0;
    *(unsigned int *)((a4 + 0x0)) = (*(int *)0x8C00FFF4);
    return t7;
}

int pdGunLeave(void)
{
    int t3;

    kdSetDriverMode(0x8, 0x0);
    kdSetDriverMode(0x9, 0x0);
    t3 = kdSetHandler((*(int *)0x8C209674), 0x0);
    *(unsigned int *)0x8C45A168 = 0x0;
    return t3;
}

int syRtcAicaSetDateHi(int a4)
{
    int stk[6];

    *(unsigned int *)(((int)stk + 12)) = a4;
    syG2Write((((int)stk + 4) + 0x8), 0xA0710000, 0x4, 0x1, 0x0, 0x0);
    return 0x0;
}

int buGetLastError(int a4)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    return (*(int *)((0x8C462160 + (a4 << 2))));
}

int pdVibMxStart(int a4, int a5)
{
    int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return pdVibStart(a4, a5, 0x1);
}

int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    int t1;
    int t2;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x74))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x74));
        t2 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x7C));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, t2);
    }
    return 0x74;
}

void syMmuDeleteEntry(int a4, int a5, int a6)
{
    if ((unsigned int)a4 < (unsigned int)0x40) {
        *(unsigned int *)(((0xF6000000 + (a4 << 8)) + 0x0)) = ((*(int *)((((a4 << 8) + 0xF6000000) + 0x0))) & 0xFFFFFEFF);
        *(unsigned int *)((((a4 << 8) + 0xF7000000) + 0x0)) = 0x0;
    }
}

int gdFsExecServerG(void)
{
    int t3;

    t3 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0x8C20C204) + 0xC))) + 0x40)))))();
    if ((*(int *)(((*(int *)0x8C20C204) + 0x1C))) != 0) {
        return gdFsGetStatG();
    }
    return t3;
}

int pdGunEnter(int a4)
{
    int t1;
    int t2;

    if (a4 != 0) {
        kdSetDriverMode(0x8, a4);
        t1 = kdSetDriverMode(0x9, 0xFFFFFFFF);
        *(unsigned int *)0x8C45A168 = a4;
        t2 = t1;
    }
    return t2;
}

int kdSetCallback(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)(((*(int *)0x8C47317C) + 0xFC0));
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x8C461E9C) + 0x8)) = a5;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x8C461E9C) + 0x4)) = a6;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x8C461E9C) + 0x0)) = a4;
    return 0x0;
}

void vmsfs_c_setvolume(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = ((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x4C);
    t1 = a5;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned char *)((t0 + 0x0)) = t2;
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x6C)) {
            break;
        }
    }
}

void kmytex_FBEnQueueTop(int a4, int a5, int a6, int a7)
{
    int t1;

    if ((*(int *)((a4 + 0x0))) == 0) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0x0)) = a6;
        *(unsigned int *)((a5 + 0x0)) = a6;
    } else {
        t1 = *(int *)((a4 + 0x0));
        *(unsigned int *)((a6 + 0x4)) = (*(int *)((t1 + 0x4)));
        *(unsigned int *)((a6 + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)((t1 + 0x4)) = a6;
        *(unsigned int *)((a4 + 0x0)) = a6;
    }
}

int pdVibMxStop(int a4)
{
    int t0;

    t0 = pdVibMxIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    return pdVibStart(a4, 0x8C209AF4, 0x1);
}

int vmsfs_c_progress(int a4)
{
    int t1;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x78))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x78));
        return ((int (*)(int))(t1))(a4);
    }
    return 0x78;
}

int pdTmrIsReady(int a4)
{
    int t0;
    int t1;
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = kdGetDeviceInfo(a4);
    t1 = kdDevGetTimerInfo((((int)stk + 4) + 0x4), t0);
    return ((((int)t1 >= 0)) ? 1 : 0);
}

int syRtcDbgWriteLog(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C45A6E8;
    if (((t0 & 8) != 0) && (t1 = *(int *)0x8C45A6F8, t2 = *(int *)0x8C45A6F4, (unsigned int)t2 < (unsigned int)t1)) {
        *(unsigned int *)((t2 + 0x0)) = a4;
        *(unsigned int *)0x8C45A6F4 = ((*(int *)0x8C45A6F4) + 0x4);
    }
    return t0;
}

int get_fat(int a4, int a5)
{
    int t1;
    int t2;

    t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x24));
    t2 = *(int *)(((*(int *)0x8C464594) + 0xC));
    return ((int (*)(int, int))(t2))(t1, (a5 << 1));
}

int vmsfs_memcmp(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        if ((*(signed char *)((t0 + 0x0))) != (*(signed char *)((t1 + 0x0)))) {
            t3 = 0xFFFFFFFF;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x200) {
            break;
        }
    }
    return t3;
}

int gdFsFinish(void)
{
    int t0;
    int t2;
    int t3;

    t0 = *(int *)0x8C20C210;
    if (t0 != 0) {
        t2 = ((int (*)(void))((*(int *)((t0 + 0x14)))))();
        *(unsigned int *)0x8C20C210 = 0x0;
        t3 = t2;
    }
    return t3;
}

int pdGunGetLatchedPort(void)
{
    int t0;
    int t4;

    t0 = kdGetGunLatchedPort();
    t4 = t0;
    if ((int)t0 > 0) {
        t4 = (*(int *)(((t0 << 2) + 0x8C209688)));
    }
    return t4;
}

int vmsfs_c_setcompletecallback(int a4)
{
    int t0;

    t0 = 0x8C462180;
    for (;;) {
        *(unsigned int *)((t0 + 0x74)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0x8C462580) {
            break;
        }
    }
    return 0x74;
}

int vmsfs_c_setprogresscallback(int a4)
{
    int t0;

    t0 = 0x8C462180;
    for (;;) {
        *(unsigned int *)((t0 + 0x78)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0x8C462580) {
            break;
        }
    }
    return 0x78;
}

int vmsfs_c_setcallbackparam(int a4)
{
    int t0;

    t0 = 0x8C462180;
    for (;;) {
        *(unsigned int *)((t0 + 0x7C)) = a4;
        t0 = (t0 + 0x80);
        if ((unsigned int)t0 >= (unsigned int)0x8C462580) {
            break;
        }
    }
    return 0x7C;
}
