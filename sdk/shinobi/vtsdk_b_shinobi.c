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


int buFindNextFile(int a, int b)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_findnext(a, b);
}

int buGetFileSize(int a, int b)
{
    if (vmsfs_c_getstate(a))
        return -1;
    return vmsfs_fgetsize(a, b);
}


int gdFsSetTmode(char *handle, short transferMode)
{
    if (handle == 0 || *(short *)(handle + 76) == 0)
        return -10;
    *(short *)(handle + 78) = transferMode;
    return 0;
}

int gdFsGetTransStat(char *handle)
{
    if (handle == 0 || *(short *)(handle + 76) == 0)
        return -10;
    return *(short *)(handle + 74);
}

void set_fat(int a, int b)
{
    char *e;

    e = gVmsVolumeStates + a * 328;
    if (b > **(int **)(e + 28))
        return;
    gVmsIoInterface[4](*(int *)(e + 36), b << 1);
}

char *direntry(int a, int b)
{
    return *(char **)(gVmsVolumeStates + a * 328 + 40) + b * 32;
}

int BCDtoDEC(unsigned int packedBcd)
{
    return (packedBcd >> 4) * 10 + (packedBcd & 15);
}


void mpdrv_nopcount(int count)
{
    *(int *)(gMapleDriver + 4300) = count;
}

void mpdrv_get_version(int *versionWord0, int *versionWord1)
{
    if (versionWord0)
        *versionWord0 = gMapleDriverVersionWord0;
    if (versionWord1)
        *versionWord1 = gMapleDriverVersionWord1;
}


