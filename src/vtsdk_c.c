/* Virtua Tennis SDK library, small functions (batch c). */

extern int nlsndG2Write(int a, int *b);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_xcreate(int a, int b, int c, int d);
extern int ADXRNA_DiscardData(int a);
extern void ADXT_ExecServer(void);
extern void *memset(void *d, int c, int n);
extern void vmsio_exit(void);
extern void ADXB_Destroy(int a);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
extern int mwRnaErrCallFunc(int a, int b, int c, int d, int e);
extern void kmyMemCopy(int a, int b, int c);
extern void kmiWriteRegister(int reg, int val);

extern int g_8c454cbc;
extern int *gGdFsGlobalState;
extern char gVmsVolumeStates[];
extern char gAdxErrorMessageBuffer[];
extern int gAdxErrorCallback;
extern int gAdxErrorCallbackArgument;
extern char strMwRnaNullHandleError[];
extern unsigned int g_8c45ee4c;
extern int g_8c45eee4;
extern int g_8c45eee8;
extern char *gMapleDriver;


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


unsigned int gdFsGetLE4(unsigned char *bytes)
{
    return bytes[0] | (bytes[1] << 8) | (bytes[2] << 16) | (bytes[3] << 24);
}


int gdFsSetGlobalErrG(int errorCode)
{
    gGdFsGlobalState[12] = errorCode;
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
    ADXT_ExecServer();
    return r;
}


int vmsfs_exit(void)
{
    memset(gVmsVolumeStates, 0, 2624);
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


void ADXERR_Init(void)
{
    memset(gAdxErrorMessageBuffer, 0, 256);
    gAdxErrorCallback = 0;
    gAdxErrorCallbackArgument = 0;
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
        mwRnaErrCallFunc(0, 0, 0, 0, (int)strMwRnaNullHandleError);
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


void mpdrv_speed(int speed)
{
    *(int *)(gMapleDriver + 4304) = speed;
}


void mpdrv_gunmode(int mode)
{
    *(int *)(gMapleDriver + 4012) = mode;
}


int mpdrv_get_gunmode(void)
{
    return *(int *)(gMapleDriver + 4016);
}


int kmyCopyFromTexture(int a, int b, int c)
{
    if (c == 0)
        return 0xeeee;
    kmyMemCopy(a, b + 0xa4000000, c);
    return 0;
}


int kmSetCullingRegister(float threshold)
{
    union { float threshold; unsigned int u; } bits;
    bits.threshold = threshold;
    kmiWriteRegister(120, bits.u & 0x7fffffff);
    return 0;
}


void buFbrWakeupFiber(char *scheduler, int fiberIndex)
{
    char *fiber = scheduler + 528 + fiberIndex * 292;
    if (*(int *)(fiber + 12) != 0)
        *(int *)(fiber + 20) = *(int *)(scheduler + 516);
}


unsigned int kmyConvertAddress64to32(unsigned int address)
{
    unsigned int convertedAddress = ((address & 0xfffffff8) >> 1) + (address & 3);
    if (address & 4)
        convertedAddress += 0x400000;
    if (address >= 0x800000)
        convertedAddress += 0x400000;
    return convertedAddress;
}
