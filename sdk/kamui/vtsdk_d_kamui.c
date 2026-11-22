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


void kmiInitFBControl(void)
{
    char *frameBuffer;
    for (frameBuffer = gFrameBufferControlRecords; frameBuffer < gFrameBufferControlRecords + 208; frameBuffer += 52)
        *(int *)(frameBuffer + 40) = 0;
}

int kmyRegisterCallback(int callbackIndex, int callback, int callbackArgument)
{
    if (callback == 0)
        return kmyUnregisterCallback(callbackIndex);
    gRenderCallbacks[callbackIndex].callback = callback;
    gRenderCallbacks[callbackIndex].callbackArgument = callbackArgument;
    return 0;
}


void kmiSetFogDMA(int *p, int a, int b, int c)
{
    p[12] = 0;
    p[4] = b;
    p[5] = (a & 480) + 0x5F8200;
    p[3] = c;
    p[2] = 7;
    p[1] = 1;
    *(short *)((char *)p + 28) = 16384;
    *(short *)((char *)p + 30) = 0;
}

void kmySetTADMA(int *p, int a, int b, int c, int d, short e)
{
    p[12] = a;
    p[4] = b;
    p[5] = 0x10000000;
    p[3] = c;
    p[2] = d;
    p[1] = 9;
    *(short *)((char *)p + 28) = e | 0x8000;
    *(short *)((char *)p + 30) = 0;
}
