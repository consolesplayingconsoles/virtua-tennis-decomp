/* Small SDK functions, batch f (VT pilot). Behaviour-checked only. */

extern float _builtin_sqrtf(float);
extern void *memset(void *d, int c, int n);
extern int kmSetFogDensity(int v);
extern int gdFsReopenHn(int a, int b, int c, int d);
extern int gdFsRead(int h, int a, int b);
extern void ADXSTMF_ExecHndl(char *p);
extern int kmiWriteRegister(int reg, int val);
extern int kmyiCheckNativeHandle(int h);
extern void ADXB_ExecOneAuUlaw(char *p);
extern void ADXB_ExecOneAu8(char *p);
extern void ADXB_ExecOneAu16(char *p);
extern int memcmp(char *a, char *b, int n);
extern int kmiReadRegister(int a);

extern unsigned int gNlPrintFlags;
extern int g_8c4620f8[];
extern char *g_8c20c204;
extern char g_8c46b2e4[];
extern int g_8c46c664;
extern int g_8c46d688;
extern char g_8c46d668[];
extern char g_8c46c668[];
extern char g_8c46c264[];
extern char g_8c46bf64[];
extern int g_8c20c928;
extern char g_8c46efd4[];
extern char g_8c45f964[];
extern char g_8c45f974[];
extern int g_8c45efec;
extern char *g_8c47317c;
extern char g_8c20b990[];

float nlAbsSqrt(float x)
{
    if (0.0f > x)
        return -_builtin_sqrtf(-x);
    return _builtin_sqrtf(x);
}

void nlPrnIndentOff(void)
{
    gNlPrintFlags &= 0xfffffffe;
}

int nlFogDensity(int v)
{
    return kmSetFogDensity(v);
}

int gdFsReadWG(int a, int b, int c)
{
    int h = gdFsReopenHn(*(int *)(g_8c20c204 + 20), 0, a, b << 11);
    if (h == 0)
        return -13;
    return gdFsRead(h, b, c);
}

void kdGetGunPosition(int *x, int *y)
{
    *x = g_8c4620f8[0];
    *y = g_8c4620f8[1];
}

void ADXSTM_ExecServer(void)
{
    char *p = g_8c46b2e4;
    do {
        if (*p == 1)
            ADXSTMF_ExecHndl(p);
        p += 100;
    } while (p < g_8c46b2e4 + 3200);
}

int ADXSTM_SetBufSize(int *p, int a, int b)
{
    p[7] = a;
    p[6] = b;
    return 1;
}

void ADXF_Finish(void)
{
    g_8c46c664 = 0;
    g_8c46d688 = 0;
    memset(g_8c46d668, 0, 32);
    memset(g_8c46c668, 255, 4096);
    memset(g_8c46c264, 0, 1024);
    memset(g_8c46bf64, 0, 768);
}

void SJRBF_Init(void)
{
    if (g_8c20c928 > 0)
        return;
    g_8c20c928 = g_8c20c928 + 1;
    memset(g_8c46efd4, 0, 3072);
}

void SJRBF_Destroy(int *p)
{
    if (p) {
        memset(p, 0, 48);
        p[1] = 0;
    }
}

int kmySetBorderColor(int c)
{
    kmiWriteRegister(64, c & 0xffffff);
    return 0;
}

char *kmiFLWCTRLFindTailQueue(void)
{
    int i;
    for (i = 0; i < 3616; i += 452) {
        if (*(int *)(g_8c45f964 + i) == 1 && *(int *)(g_8c45f974 + i) == 0)
            return g_8c45f964 + i;
    }
    return 0;
}

int kmiCheckSysConfigSetting(int *p)
{
    if ((p[1] & 2) == 0 && g_8c45efec == 0)
        return 0;
    if (p[3] == 2 && (p[1] & 32) == 0)
        return 0;
    return 0xeeee;
}

char *mpdrv_get_portstatus(int n)
{
    return g_8c47317c + 4 + n * 8;
}

int kmySetBackGroundDepth(int h, float d)
{
    if (!kmyiCheckNativeHandle(h))
        return 0xeeee;
    *(float *)(*(char **)(h + 136) + 12) = d;
    return 0;
}

int kmySetColorClampMIN(int c)
{
    kmiWriteRegister(192, c);
    return 0;
}

void ADXB_ExecOneAu(char *p)
{
    short t = *(short *)(p + 170);
    if (t == 2)
        ADXB_ExecOneAuUlaw(p);
    else if (t == 1)
        ADXB_ExecOneAu8(p);
    else
        ADXB_ExecOneAu16(p);
}

int ADXB_CheckSpsd(char *p)
{
    return memcmp(p, g_8c20b990, 4) == 0;
}

void kmiGetITPCurrent(int *p)
{
    p[16] = kmiReadRegister(312);
    p[17] = kmiReadRegister(308);
}
