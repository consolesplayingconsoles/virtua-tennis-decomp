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

typedef struct { char used; char busy; char pad[14]; int handle; char rest[8]; } SndStream;
extern SndStream gNlSoundStreams[];
extern char *gMapleDriver;
extern void (*gPalExtensionRatioCallback)(void *s);
extern char *gBuFiberScheduler;
typedef struct { char pad[36]; int (*fn)(int a); } GdFsObj;
extern GdFsObj *gGdFsOperations;

void nlArcCot(float x)
{
    if (x == 0.0f)
        return;
    nlArcTan(1.0f / x);
}

int nlsndStreamGetPlayPos(int streamIndex)
{
    SndStream *stream = &gNlSoundStreams[(short)streamIndex];
    if (stream->used == 1 && stream->busy != 0)
        return nlsndG2Read(stream->handle);
    return 0;
}

int gdFsLoadDirFast(int a)
{
    GdFsObj *o = gGdFsOperations;
    if (o == 0)
        return 0;
    return o->fn(a);
}

int pdGetPeripheralInfo(int dev)
{
    return kdGetDeviceInfo(dev);
}

int syRtcAicaSetDateLo(int v)
{
    syG2Write(&v, 0xA0710004, 4, 1, 0, 0);
    return 0;
}

int buGetDiskInfo(int a, int b)
{
    if (vmsfs_c_getstate(a) != 0)
        return -1;
    return vmsfs_getinfo(a, b);
}

int buGetDiskFree(int a, int b)
{
    if (vmsfs_c_getstate(a) != 0)
        return -1;
    return vmsfs_diskfree(a, b);
}

int gdFsCheckEof(char *h, int *out)
{
    if (h == 0 || *(short *)(h + 76) == 0)
        return -10;
    if (*(int *)(h + 20) >= *(int *)(h + 16))
        *out = 1;
    else
        *out = 0;
    return 0;
}

int kdSetDeviceRequest(int a)
{
    int r = mpdrv_set_dreq(a);
    if (*(int *)(gMapleDriver + 4328) != 0)
        kdRecvFrame();
    return r;
}

int pdVibGetInfo(int dev, char *out)
{
    struct { int a; char b; } v;
    int info = kdGetDeviceInfo(dev);
    if (kdDevGetVibrationInfo(&v, info) < 0)
        return -2;
    out[0] = v.a;
    out[1] = v.b;
    return 0;
}

int ADXSTM_GetBufSize(char *p, int *a, int *b)
{
    *a = *(int *)(p + 28);
    *b = *(int *)(p + 24);
    return 1;
}

void ADXSTM_GetGdfsStat(char *p, int *out)
{
    *out = gdFsGetStat(*(int *)(p + 8));
}

int kmyiGetPALExtRatio(int displayMode)
{
    struct { int displayMode; int ratio; } request;
    request.displayMode = displayMode;
    gPalExtensionRatioCallback(&request);
    if (request.ratio < 0 || request.ratio > 4)
        request.ratio = 1;
    return request.ratio;
}

char *mpdrv_get_device(int n)
{
    return gMapleDriver + 40 + n * 44;
}

int mpdrv_get_debugmode(void)
{
    return *(int *)(gMapleDriver + 4296);
}

int mpdrv_get_lastsendaddr(void)
{
    return *(int *)(gMapleDriver + 4272);
}

void ADXB_Start(char *p)
{
    if (*(int *)(p + 4) == 0)
        *(int *)(p + 4) = 1;
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

void buFbrSleepFiber(int sleepTicks)
{
    int wakeTick;
    char *scheduler = gBuFiberScheduler;
    char *currentFiber = *(char **)(scheduler + 3448);
    if (sleepTicks >= 0)
        wakeTick = *(int *)(scheduler + 516) + sleepTicks;
    else
        wakeTick = 0x7fffffff;
    *(int *)(currentFiber + 20) = wakeTick;
    if (setjmp(*(char **)(gBuFiberScheduler + 3448) + 24) == 0)
        longjmp(gBuFiberScheduler + 4, 1);
}
