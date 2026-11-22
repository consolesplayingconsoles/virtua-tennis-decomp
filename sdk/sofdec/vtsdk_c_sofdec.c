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
extern int kmiWriteRegister(int reg, int val);

extern int gNlSoundPackUsedBytes;
extern int *gGdFsGlobalState;
extern char gVmsVolumeStates[];
extern char gAdxErrorMessageBuffer[];
extern int gAdxErrorCallback;
extern int gAdxErrorCallbackArgument;
extern char strMwRnaNullHandleError[];
extern unsigned int gFrameBufferReadControl;
extern int gStripBufferEnabled;
extern int gStripBufferSizeBytes;
extern char *gMapleDriver;


int ADXT_DiscardSmpl(char *adxt)
{
    int r;
    if (adxt[114] == 0)
        return 0;
    r = ADXRNA_DiscardData(*(int *)(adxt + 12));
    ADXT_ExecServer();
    return r;
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


