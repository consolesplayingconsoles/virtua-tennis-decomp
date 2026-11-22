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


int kmySetTextureDMA(struct TextureDmaRequestPrefix *request, unsigned int destinationAddress, int sourceAddress, int byteCount)
{
    request->sourceAddress = sourceAddress;
    request->destinationAddress = destinationAddress | 0x11000000;
    request->byteCount = byteCount;
    request->transferKind = 0;
    request->operationFlags = 8;
    request->textureSetupControlWord = 0x8000;
    request->textureSetupReservedWord = 0;
    return 0;
}

void kmytex_FBEnQueueEntry(struct TextureBlockQueuePrefix **head, struct TextureBlockQueuePrefix *entry, struct TextureBlockQueuePrefix *before)
{
    struct TextureBlockQueuePrefix *previous;

    if (before->previous == 0) {
        *head = entry;
        entry->next = before;
        previous = 0;
    } else {
        before->previous->next = entry;
        entry->next = before;
        previous = before->previous;
    }
    entry->previous = previous;
    before->previous = entry;
}

int kmiFLWCTRLGetVBufLockStatus(int bufferIndex)
{
    unsigned int releasedBuffers = gVertexBufferLockState[3];

    if (releasedBuffers != 0) {
        gVertexBufferLockState[3] = 0;
        gVertexBufferLockState[0] &= ~releasedBuffers;
        gVertexBufferLockState[6] = 0;
    }
    return (gVertexBufferLockState[0] >> bufferIndex) & 1;
}


int kmySetCheapShadowMode(int a, int b)
{
    kmiWriteRegister(116, (a << 8) | (b & 255));
    return 0;
}

