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
    return nlsndG2Read(0xa0800088) - gNlSoundPackUsedBytes;
}


