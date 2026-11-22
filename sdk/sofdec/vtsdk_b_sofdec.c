/* Small SDK functions (batch b): nl fraction, sound wait/pan, backup-unit file wrappers, ADX/mw error
   checks, GD filesystem accessors, FAT helpers, mpdrv, kmy/kmi helpers. */

extern char strAdxfPartitionIdRangeError[];
extern char strAdxfFileIdRangeError[];
extern char strMwRnaNullHandleError[];
extern char gMwRnaErrorCallback[];
extern char gMwRnaErrorCallbackArgument[];
extern int gMapleDriverVersionWord0;
extern int gMapleDriverVersionWord1;
extern int *gAdxfPartitionInfoTable[];
extern char gVmsVolumeStates[];
extern int (**gVmsIoInterface)(int a, int b);
extern int gRenderPacketVBlankWaitPending;
extern char gRenderPacketQueues[];
extern char *gMapleDriver;
extern char gMwRnaErrorMessageBuffer[];

extern int nlsndG2Write(int v, int addr);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findnext(int a, int b);
extern int vmsfs_fgetsize(int a, int b);
extern int ADXERR_CallErrFunc(char *fmt);
extern int mwRnaErrCallFunc(int a, ...);
extern int SearchUsed(int a, int *out);
extern int FBfree(int a, int b);
extern void kmWaitVBlank(void);
extern int kmiWriteRegister(int reg, int val);
extern void ADXB_ExecOneWav4(char *o);
extern void ADXB_ExecOneWav8(char *o);
extern void ADXB_ExecOneWav16(char *o);
extern void *memset(void *dst, int val, unsigned int n);


int adxf_ChkPrmGfr(int partitionId, int fileId)
{
    char *partitionInfo;

    if (partitionId < 0 || partitionId >= 256) {
        ADXERR_CallErrFunc(strAdxfPartitionIdRangeError);
        return -3;
    }
    partitionInfo = (char *)gAdxfPartitionInfoTable[partitionId];
    if (fileId < 0 || fileId >= *(int *)(partitionInfo + 12)) {
        ADXERR_CallErrFunc(strAdxfFileIdRangeError);
        return -3;
    }
    return 0;
}


void mwRnaErrEntryFunc(int callback, int callbackArgument)
{
    if (callback == 0) {
        *(int *)gMwRnaErrorCallback = 0;
        *(int *)gMwRnaErrorCallbackArgument = 0;
    } else {
        *(int *)gMwRnaErrorCallback = callback;
        *(int *)gMwRnaErrorCallbackArgument = callbackArgument;
    }
    memset(gMwRnaErrorMessageBuffer, 0, 256);
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
