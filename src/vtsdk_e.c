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
extern SndStream g_8c454cf4[];
extern char *g_8c47317c;
extern void (*g_8c45eef0)(void *s);
extern char *g_8c4762c8;
typedef struct { char pad[36]; int (*fn)(int a); } GdFsObj;
extern GdFsObj *g_8c20c210;

void nlArcCot(float x)
{
    if (x == 0.0f)
        return;
    nlArcTan(1.0f / x);
}

int nlsndStreamGetPlayPos(int i)
{
    SndStream *s = &g_8c454cf4[(short)i];
    if (s->used == 1 && s->busy != 0)
        return nlsndG2Read(s->handle);
    return 0;
}

int gdFsLoadDirFast(int a)
{
    GdFsObj *o = g_8c20c210;
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
    if (*(int *)(g_8c47317c + 4328) != 0)
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

int kmyiGetPALExtRatio(int mode)
{
    struct { int mode; int ratio; } s;
    s.mode = mode;
    g_8c45eef0(&s);
    if (s.ratio < 0 || s.ratio > 4)
        s.ratio = 1;
    return s.ratio;
}

char *mpdrv_get_device(int n)
{
    return g_8c47317c + 40 + n * 44;
}

int mpdrv_get_debugmode(void)
{
    return *(int *)(g_8c47317c + 4296);
}

int mpdrv_get_lastsendaddr(void)
{
    return *(int *)(g_8c47317c + 4272);
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

void buFbrSleepFiber(int t)
{
    int wake;
    char *g = g_8c4762c8;
    char *cur = *(char **)(g + 3448);
    if (t >= 0)
        wake = *(int *)(g + 516) + t;
    else
        wake = 0x7fffffff;
    *(int *)(cur + 20) = wake;
    if (setjmp(*(char **)(g_8c4762c8 + 3448) + 24) == 0)
        longjmp(g_8c4762c8 + 4, 1);
}
