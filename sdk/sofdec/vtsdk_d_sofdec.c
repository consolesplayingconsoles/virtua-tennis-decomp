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


void adxstm_sj_internal_error(void)
{
    gAdxStreamInternalErrorCount = gAdxStreamInternalErrorCount + 1;
}

int mwRnaGetTransSw(char *p)
{
    if (p == 0) {
        mwRnaErrCallFunc(strMwRnaNullHandleError);
        return -1;
    }
    return p[1] & 1;
}


