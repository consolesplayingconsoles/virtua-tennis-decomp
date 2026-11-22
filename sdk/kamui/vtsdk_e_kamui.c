/* Small SDK functions, batch e (VT pilot). Behaviour-checked only. */

extern float nlArcTan(float x);
extern int nlsndG2Read(int addr);
extern int kdGetDeviceInfo(int dev);
extern int kdDevGetVibrationInfo(void *out, int info);
extern int syG2Write(void *src, unsigned int dst, int n, int a, int b, int c);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_getinfo(int a, int b);
extern int vmsfs_diskfree(int a, int b);
extern int mpdrv_set_dreq(int a);
extern void kdRecvFrame(void);
extern int gdFsGetStat(int h);
extern int kmiWriteRegister(int reg, int val);
extern int setjmp(void *jb);
extern void longjmp(void *jb, int v);

typedef struct { char used; char busy; char pad[14]; int positionAddress; char rest[8]; } NlSoundStreamState;
extern NlSoundStreamState gNlSoundStreams[];
extern char *gMapleDriver;
extern void (*gPalExtensionRatioCallback)(void *s);
extern char *gBuFiberScheduler;
typedef struct { char pad[36]; int (*loadDirectoryFast)(int a); } GdFsDirectoryOperationsPrefix;
extern GdFsDirectoryOperationsPrefix *gGdFsOperations;


int kmyiGetPALExtRatio(int displayMode)
{
    struct { int displayMode; int ratio; } request;
    request.displayMode = displayMode;
    gPalExtensionRatioCallback(&request);
    if (request.ratio < 0 || request.ratio > 4)
        request.ratio = 1;
    return request.ratio;
}


int kmyConnectRenderPacket(void)
{
    return 0;
}

int kmyResetFatalError(void)
{
    kmiWriteRegister(8, 7);
    return kmiWriteRegister(8, 0);
}

