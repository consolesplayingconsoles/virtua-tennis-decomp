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

void nlArcCot(float x)
{
    if (x == 0.0f)
        return;
    nlArcTan(1.0f / x);
}

int nlsndStreamGetPlayPos(int streamIndex)
{
    NlSoundStreamState *stream = &gNlSoundStreams[(short)streamIndex];
    if (stream->used == 1 && stream->busy != 0)
        return nlsndG2Read(stream->positionAddress);
    return 0;
}


