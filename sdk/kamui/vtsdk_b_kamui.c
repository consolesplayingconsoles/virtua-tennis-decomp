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


int kmyFreeArea(int a)
{
    int buf[2];
    int r;

    buf[1] = a;
    r = SearchUsed(a, buf);
    if (r == 0)
        return 7;
    return FBfree(*(short *)buf, r);
}


int kmiQueryFinishAllPacket(void)
{
    unsigned int queueOffset;

    if (gRenderPacketVBlankWaitPending) {
        kmWaitVBlank();
        gRenderPacketVBlankWaitPending = 0;
    }
    for (queueOffset = 0; queueOffset < 3616; queueOffset += 452) {
        if (*(int *)(gRenderPacketQueues + queueOffset))
            return 0xeeee;
    }
    return 0;
}


void kmyResetTA(void)
{
    kmiWriteRegister(8, 1);
    kmiWriteRegister(8, 0);
}


