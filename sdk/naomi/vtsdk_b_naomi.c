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

float nlFraction(float value)
{
    float magnitude;
    int wholePart;
    float fraction;

    magnitude = value < 0.0f ? -value : value;
    if (!(8388608.0f > magnitude))
        return 0.0f;
    wholePart = (int)magnitude;
    fraction = magnitude - (float)wholePart;
    if (value < 0.0f)
        return -fraction;
    return fraction;
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

void nlsndStreamSetHdPan(char *streamHeader, short channelIndex, char pan)
{
    streamHeader[50 + channelIndex * 4] = pan;
}


