/* Katana SDK and CRI library small functions (VT batch a). */

extern int kdSetGunTrigger(int a);
extern int mpdrv_set_hreset(void);
extern void kdRecvFrame(void);
extern int mpdrv_setcmd(int port, int cmd, int *buf, int len, int a5, int a6);
extern int mwRnaGetSfreq(int *rna);
extern void _divlu(void);
extern void _modlu(void);
extern void mwlRnaAddRdPos(void *rna);
extern void mwRnaErrCallFunc(char *fmt, ...);
extern void ADXPD_Stop(void *pd);
extern int kmiWriteRegister(int reg, int val);

extern char strMwRnaNullHandleError[];
extern char *gMapleDriver;
extern unsigned int gVertexBufferLockState[];
extern int gAdxPcmDecodeErrorFlag;

struct HardwareRegisterInit { unsigned int *registerAddress; unsigned int initialValue; };
extern struct HardwareRegisterInit gHwInitRegisterTable[];

struct InterruptHandlerNode { void (*callback)(int); struct InterruptHandlerNode *next; int callbackArgument; };
extern struct InterruptHandlerNode *gInterruptHandlerChains[];

struct VmsFileCommandState { int w0; int commandState; int pad[3]; int parameters[6]; int rest[21]; };
extern struct VmsFileCommandState gVmsFileCommandStates[];
extern char gMapleDeviceTable[];
extern void (*gMapleHandlers[])(void);

struct TextureBlockQueuePrefix { int allocationFlags; struct TextureBlockQueuePrefix *next; struct TextureBlockQueuePrefix *previous; };
struct TextureDmaRequestPrefix { int requestId; int operationFlags; int transferKind; int byteCount; int sourceAddress; int destinationAddress; int callbackAddress; short textureSetupControlWord; short textureSetupReservedWord; };
struct AdxBitstreamDecoderPrefix { short slotInUse; short slotUnused; int status; void *pcmDecoder; };


void mwRnaGetTime(int *rna, int *a, int *b)
{
    if (rna == 0) {
        mwRnaErrCallFunc(strMwRnaNullHandleError);
        return;
    }
    mwlRnaAddRdPos(rna);
    *a = rna[19] - rna[13];
    *b = mwRnaGetSfreq(rna);
}

int mwRnaGetSfreq(int *rna)
{
    if (rna == 0) {
        mwRnaErrCallFunc(strMwRnaNullHandleError);
        return -1;
    }
    return rna[3];
}


void ADXB_Stop(struct AdxBitstreamDecoderPrefix *decoder)
{
    ADXPD_Stop(decoder->pcmDecoder);
    decoder->status = 0;
}


void adxpd_error(void)
{
    gAdxPcmDecodeErrorFlag = 1;
}
