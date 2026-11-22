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


int kmySetStripBuffer(int enabled, int sizeBytes)
{
    gFrameBufferReadControl = (gFrameBufferReadControl & 0xffa0ffff) | ((enabled & 1) << 22) | (((sizeBytes / 32) & 31) << 16);
    gStripBufferEnabled = enabled;
    gStripBufferSizeBytes = sizeBytes;
    return 0;
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


unsigned int kmyConvertAddress64to32(unsigned int address)
{
    unsigned int convertedAddress = ((address & 0xfffffff8) >> 1) + (address & 3);
    if (address & 4)
        convertedAddress += 0x400000;
    if (address >= 0x800000)
        convertedAddress += 0x400000;
    return convertedAddress;
}
