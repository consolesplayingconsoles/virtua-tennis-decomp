/* Small SDK functions (batch b): nl fraction, sound wait/pan, backup-unit file wrappers, ADX/mw error
   checks, GD filesystem accessors, FAT helpers, mpdrv, kmy/kmi helpers. */

extern char g_8c20a1e0[];
extern char g_8c20a218[];
extern char g_8c20ac30[];
extern char g_8c20ca48[];
extern char g_8c20ca4c[];
extern int g_8c20b040;
extern int g_8c20b044;
extern int *g_8c46c264[];
extern char g_8c464598[];
extern int (**g_8c464594)(int a, int b);
extern int g_8c4607e8;
extern char g_8c45f964[];
extern char *g_8c47317c;
extern char g_8c473758[];

extern int nlsndG2Write(int v, int addr);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findnext(int a, int b);
extern int vmsfs_fgetsize(int a, int b);
extern int ADXERR_CallErrFunc(char *fmt);
extern int mwRnaErrCallFunc(int a, ...);
extern int FUN_8c1e2de4(int a, int *out);
extern int FUN_8c1e2e1c(int a, int b);
extern void kmWaitVBlank(void);
extern int kmiWriteRegister(int reg, int val);
extern void ADXB_ExecOneWav4(char *o);
extern void ADXB_ExecOneWav8(char *o);
extern void ADXB_ExecOneWav16(char *o);
extern void *memset(void *dst, int val, unsigned int n);

float nlFraction(float x)
{
    float a;
    int i;
    float f;

    a = x < 0.0f ? -x : x;
    if (!(8388608.0f > a))
        return 0.0f;
    i = (int)a;
    f = a - (float)i;
    if (x < 0.0f)
        return -f;
    return f;
}

int nlsnd_PL_WaitAica2andGo(void)
{
    int i;

    nlsndG2Write(1, 0xa08000b0);
    for (i = 0; i < 0x400000; ) {
        if (nlsndG2Read(0xa08000b4) == 0) {
            nlsndG2Write(0, 0xa08000b0);
            return 0;
        }
        i++;
    }
    return -256;
}

void nlsndStreamSetHdPan(char *p, short i, char v)
{
    p[50 + i * 4] = v;
}

int buFindNextFile(int a, int b)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_findnext(a, b);
}

int buGetFileSize(int a, int b)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_fgetsize(a, b);
}

int adxf_ChkPrmGfr(int a, int b)
{
    char *p;

    if (a < 0 || a >= 256) {
        ADXERR_CallErrFunc(g_8c20a1e0);
        return -3;
    }
    p = (char *)g_8c46c264[a];
    if (b < 0 || b >= *(int *)(p + 12)) {
        ADXERR_CallErrFunc(g_8c20a218);
        return -3;
    }
    return 0;
}

int kmyFreeArea(int a)
{
    int buf[2];
    int r;

    buf[1] = a;
    r = FUN_8c1e2de4(a, buf);
    if (r == 0)
        return 7;
    return FUN_8c1e2e1c(*(short *)buf, r);
}

int gdFsSetTmode(char *p, short v)
{
    if (p == 0 || *(short *)(p + 76) == 0)
        return -10;
    *(short *)(p + 78) = v;
    return 0;
}

int gdFsGetTransStat(char *p)
{
    if (p == 0 || *(short *)(p + 76) == 0)
        return -10;
    return *(short *)(p + 74);
}

void set_fat(int a, int b)
{
    char *e;

    e = g_8c464598 + a * 328;
    if (b > **(int **)(e + 28))
        return;
    g_8c464594[4](*(int *)(e + 36), b << 1);
}

char *direntry(int a, int b)
{
    return *(char **)(g_8c464598 + a * 328 + 40) + b * 32;
}

int BCDtoDEC(unsigned int x)
{
    return (x >> 4) * 10 + (x & 15);
}

void mwRnaSetSfreq(char *o, int f)
{
    int **p;

    if (o == 0) {
        mwRnaErrCallFunc((int)o, g_8c20ac30);
        return;
    }
    p = *(int ***)(o + 56);
    ((void (*)(int **, int))(*p)[9])(p, f);
    *(int *)(o + 12) = f;
}

int kmiQueryFinishAllPacket(void)
{
    unsigned int i;

    if (g_8c4607e8) {
        kmWaitVBlank();
        g_8c4607e8 = 0;
    }
    for (i = 0; i < 3616; i += 452) {
        if (*(int *)(g_8c45f964 + i))
            return 0xeeee;
    }
    return 0;
}

void mpdrv_nopcount(int x)
{
    *(int *)(g_8c47317c + 4300) = x;
}

void mpdrv_get_version(int *a, int *b)
{
    if (a)
        *a = g_8c20b040;
    if (b)
        *b = g_8c20b044;
}

void mwRnaErrEntryFunc(int a, int b)
{
    if (a == 0) {
        *(int *)g_8c20ca48 = 0;
        *(int *)g_8c20ca4c = 0;
    } else {
        *(int *)g_8c20ca48 = a;
        *(int *)g_8c20ca4c = b;
    }
    memset(g_8c473758, 0, 256);
}

void kmyResetTA(void)
{
    kmiWriteRegister(8, 1);
    kmiWriteRegister(8, 0);
}

void ADXB_ExecOneWav(char *o)
{
    if (*(short *)(o + 170) == 2)
        ADXB_ExecOneWav4(o);
    else if (*(short *)(o + 170) == 1)
        ADXB_ExecOneWav8(o);
    else if (*(short *)(o + 170) == 0)
        ADXB_ExecOneWav16(o);
}

void ADXPD_Destroy(int *p)
{
    if (p) {
        *p = 0;
        memset(p, 0, 52);
    }
}
