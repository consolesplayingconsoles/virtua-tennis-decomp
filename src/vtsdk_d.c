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

struct gdfs_ops {
    char pad0[60];
    int (*open)(int a, int b, int c, int d);
    char pad1[4];
    int (*open_range)(int a, int b, int c, int d);
    char pad2[12];
    int (*get_drv_stat)(int a, int b, int c, int d);
};

struct kmy_cb {
    int fn;
    int arg;
};

extern int g_8c1dc8d4;
extern struct gdfs_ops *g_8c20c210;
extern int g_8c20c8a8;
extern char g_8c209be4[];
extern char g_8c20ac30[];
extern char g_8c45eef4[];
extern struct kmy_cb g_8c470a20[];
extern char *g_8c47317c;
extern char *g_8c1feb48;


float nlCosh(unsigned short x)
{
    float e = nlExp((float)x * 6.2831855f / 65536.0f);
    return (e + 1.0f / e) / 2.0f;
}

void nlInitFont(int a)
{
    g_8c1dc8d4 = a;
}

unsigned int nlsndG2Read(unsigned int *p)
{
    while (*(volatile unsigned int *)0xA05F688C & 0x31)
        ;
    return *p;
}

int gdFsOpen(int a, int b, int c, int d)
{
    struct gdfs_ops *o = g_8c20c210;
    if (o == 0)
        return 0;
    return o->open(a, b, c, d);
}

int gdFsOpenRange(int a, int b, int c, int d)
{
    struct gdfs_ops *o = g_8c20c210;
    if (o == 0)
        return 0;
    return o->open_range(a, b, c, d);
}

int gdFsGetDrvStat(int a, int b, int c, int d)
{
    struct gdfs_ops *o = g_8c20c210;
    if (o == 0)
        return 0;
    return o->get_drv_stat(a, b, c, d);
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

void ADXT_SetOutPan(char *adxt, int ch, short pan)
{
    *(short *)(adxt + 66 + ch * 2) = pan;
    if (ch >= adxt[3]) {
        ADXERR_CallErrFunc(g_8c209be4);
        return;
    }
    ADXRNA_SetOutPan(*(int *)(adxt + 12), ch, pan);
}

void gdFsClose(char *p)
{
    if (p != 0 && *(short *)(p + 76) != 0) {
        short st = *(short *)(p + 80);
        if (st == 2 || st == 3 || st == 4)
            gdFsStopRd((int *)p);
        *(short *)(p + 76) = 0;
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

void adxstm_sj_internal_error(void)
{
    g_8c20c8a8 = g_8c20c8a8 + 1;
}

int mwRnaGetTransSw(char *p)
{
    if (p == 0) {
        mwRnaErrCallFunc(g_8c20ac30);
        return -1;
    }
    return p[1] & 1;
}

void kmiInitFBControl(void)
{
    char *p;
    for (p = g_8c45eef4; p < g_8c45eef4 + 208; p += 52)
        *(int *)(p + 40) = 0;
}

int kmyRegisterCallback(int idx, int fn, int arg)
{
    if (fn == 0)
        return kmyUnregisterCallback(idx);
    g_8c470a20[idx].fn = fn;
    g_8c470a20[idx].arg = arg;
    return 0;
}

int mpdrv_frame_recv_post(void)
{
    *(int *)(g_8c47317c + 4032) = 1;
    *g_8c1feb48 = 0;
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
