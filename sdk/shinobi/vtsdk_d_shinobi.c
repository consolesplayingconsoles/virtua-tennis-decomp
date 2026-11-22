/* Small SDK library functions (batch d): math, gd file system glue, backup-unit file calls, ADX/RNA/mpdrv/kmi/kmy helpers. */

extern float nlExp(float x);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findfirst(int a, int b);
extern int vmsfs_fcreate(int a, int b, int c, int d);
extern int ADXRNA_SetOutPan(int rna, int ch, int pan);
extern void ADXERR_CallErrFunc(char *fmt, ...);
extern void mwRnaErrCallFunc(char *fmt, ...);
extern void gdFsStopRd(int *p);
extern int kmyUnregisterCallback(int idx);
extern int mpdrv_setcmd(int a, int b, int *p, int c, int d, int e);

struct GdFsOperations {
    char pad0[60];
    int (*open)(int a, int b, int c, int d);
    char pad1[4];
    int (*open_range)(int a, int b, int c, int d);
    char pad2[12];
    int (*get_drv_stat)(int a, int b, int c, int d);
};

struct RenderCallbackSlot {
    int callback;
    int callbackArgument;
};

extern int gNlFontTextureAddress;
extern struct GdFsOperations *gGdFsOperations;
extern int gAdxStreamInternalErrorCount;
extern char strAdxtPanChannelRangeError[];
extern char strMwRnaNullHandleError[];
extern char gFrameBufferControlRecords[];
extern struct RenderCallbackSlot gRenderCallbacks[];
extern char *gMapleDriver;
extern char *gMapleTransferLockAddress;


int gdFsOpen(int a, int b, int c, int d)
{
    struct GdFsOperations *operations = gGdFsOperations;
    if (operations == 0)
        return 0;
    return operations->open(a, b, c, d);
}

int gdFsOpenRange(int a, int b, int c, int d)
{
    struct GdFsOperations *operations = gGdFsOperations;
    if (operations == 0)
        return 0;
    return operations->open_range(a, b, c, d);
}

int gdFsGetDrvStat(int a, int b, int c, int d)
{
    struct GdFsOperations *operations = gGdFsOperations;
    if (operations == 0)
        return 0;
    return operations->get_drv_stat(a, b, c, d);
}

int buFindFirstFile(int a, int b)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_findfirst(a, b);
}

int buCreateFile(int a, int b, int c, int d)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_fcreate(a, b, c, d);
}


void gdFsClose(char *handle)
{
    if (handle != 0 && *(short *)(handle + 76) != 0) {
        short driveStatus = *(short *)(handle + 80);
        if (driveStatus == 2 || driveStatus == 3 || driveStatus == 4)
            gdFsStopRd((int *)handle);
        *(short *)(handle + 76) = 0;
    }
}

void syTmrInit(void)
{
    *(volatile char *)0xFFD80000 = 0;
    *(volatile char *)0xFFD80004 &= 0xFE;
    *(volatile short *)0xFFD80010 = 2;
    *(volatile int *)0xFFD80008 = -1;
    *(volatile int *)0xFFD8000C = -1;
    *(volatile char *)0xFFD80004 |= 1;
}


int mpdrv_frame_recv_post(void)
{
    *(int *)(gMapleDriver + 4032) = 1;
    *gMapleTransferLockAddress = 0;
    return 0;
}

int mpdrv_set_getcond_ns(int a, int b)
{
    int buf[1];
    buf[0] = b;
    return mpdrv_setcmd(a, 9, buf, 1, 0, 0);
}

int mpdrv_set_getminfo_ns(int a, int b, int c)
{
    int buf[2];
    buf[0] = b;
    buf[1] = c << 24;
    return mpdrv_setcmd(a, 10, buf, 2, 0, 0);
}


