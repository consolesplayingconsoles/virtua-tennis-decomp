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


void buFbrWakeupFiber(char *scheduler, int fiberIndex)
{
    char *fiber = scheduler + 528 + fiberIndex * 292;
    if (*(int *)(fiber + 12) != 0)
        *(int *)(fiber + 20) = *(int *)(scheduler + 516);
}


