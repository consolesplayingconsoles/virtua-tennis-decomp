/* Virtua Tennis SDK library, small functions (batch c). */

extern int nlsndG2Write(int a, int *b);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_xcreate(int a, int b, int c, int d);
extern int ADXRNA_DiscardData(int a);
extern void FUN_8c1e16cc(void);
extern void *memset(void *d, int c, int n);
extern void vmsio_exit(void);
extern void ADXB_Destroy(int a);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
extern int mwRnaErrCallFunc(int a, ...);
extern void FUN_8c1e28e0(int a, int b, int c);
extern void kmiWriteRegister(int reg, int val);

extern int g_8c454cbc;
extern int *g_8c20c204;
extern char g_8c464598[];
extern char g_8c46ad24[];
extern int g_8c20c89c;
extern int g_8c20c8a0;
extern char g_8c20ac30[];
extern unsigned int g_8c45ee4c;
extern int g_8c45eee4;
extern int g_8c45eee8;
extern char *g_8c47317c;


int nlsndG2WriteN(int *a, int *b, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        nlsndG2Write(a[i], b + i);
    }
    return 0;
}


int nlsndRemainMem(void)
{
    return nlsndG2Read(0xa0800088) - g_8c454cbc;
}


unsigned int gdFsGetLE4(unsigned char *p)
{
    return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}


int gdFsSetGlobalErrG(int e)
{
    g_8c20c204[12] = e;
    return 1;
}


int buCreateExecFile(int a, int b, int c, int d)
{
    if (vmsfs_c_getstate(a) != 0)
        return -1;
    return vmsfs_xcreate(a, b, c, d);
}


int ADXT_DiscardSmpl(char *adxt)
{
    int r;
    if (adxt[114] == 0)
        return 0;
    r = ADXRNA_DiscardData(*(int *)(adxt + 12));
    FUN_8c1e16cc();
    return r;
}


int vmsfs_exit(void)
{
    memset(g_8c464598, 0, 2624);
    vmsio_exit();
    return 0;
}


int str_len(char *s)
{
    int i;
    int n = 0;
    for (i = 0; i < 12; i++) {
        if (s[i] == 0)
            break;
        n++;
    }
    return n;
}


void ADXERR_Finish(void)
{
    memset(g_8c46ad24, 0, 256);
    g_8c20c89c = 0;
    g_8c20c8a0 = 0;
}


void ADXSJD_Destroy(int *p)
{
    if (p != 0) {
        if (p[1] != 0)
            ADXB_Destroy(p[1]);
        ADXCRS_Lock();
        memset(p, 0, 152);
        ADXCRS_Unlock();
    }
}


int mwRnaGetAutoSw(unsigned char *p)
{
    if (p == 0) {
        mwRnaErrCallFunc(0, g_8c20ac30);
        return -1;
    }
    return (p[1] & 4) >> 2;
}


int SJUNI_GetNumChainPool(int *p)
{
    int n = 0;
    int *q = (int *)p[5];
    while (q != 0) {
        q = (int *)*q;
        n++;
    }
    return n;
}


int kmySetStripBuffer(int a, int b)
{
    g_8c45ee4c = (g_8c45ee4c & 0xffa0ffff) | ((a & 1) << 22) | (((b / 32) & 31) << 16);
    g_8c45eee4 = a;
    g_8c45eee8 = b;
    return 0;
}


void mpdrv_speed(int v)
{
    *(int *)(g_8c47317c + 4304) = v;
}


void mpdrv_gunmode(int v)
{
    *(int *)(g_8c47317c + 4012) = v;
}


int mpdrv_get_gunmode(void)
{
    return *(int *)(g_8c47317c + 4016);
}


int kmyCopyFromTexture(int a, int b, int c)
{
    if (c == 0)
        return 0xeeee;
    FUN_8c1e28e0(a, b + 0xa4000000, c);
    return 0;
}


int kmSetCullingRegister(float f)
{
    union { float f; unsigned int u; } x;
    x.f = f;
    kmiWriteRegister(120, x.u & 0x7fffffff);
    return 0;
}


void buFbrWakeupFiber(char *base, int idx)
{
    char *p = base + 528 + idx * 292;
    if (*(int *)(p + 12) != 0)
        *(int *)(p + 20) = *(int *)(base + 516);
}


unsigned int kmyConvertAddress64to32(unsigned int a)
{
    unsigned int r = ((a & 0xfffffff8) >> 1) + (a & 3);
    if (a & 4)
        r += 0x400000;
    if (a >= 0x800000)
        r += 0x400000;
    return r;
}
