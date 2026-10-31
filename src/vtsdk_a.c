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
struct TextureDmaRequestPrefix { int requestId; int operationFlags; int transferKind; int byteCount; int sourceAddress; int destinationAddress; int callbackAddress; short transferControlWord; short transferReservedWord; };
struct AdxBitstreamDecoderPrefix { short slotInUse; short slotUnused; int status; void *pcmDecoder; };

void pdGunSetTrigger(int x)
{
    if (x == 0) {
        kdSetGunTrigger(0);
    } else if (x == 6) {
        kdSetGunTrigger(1);
    } else if (x == 12) {
        kdSetGunTrigger(2);
    } else if (x == 18) {
        kdSetGunTrigger(3);
    }
}

void hwInit(void)
{
    struct HardwareRegisterInit *registerEntry;

    *(volatile unsigned short *)0xFFD00000 = 0;
    *(volatile unsigned short *)0xFFD00004 = 0;
    *(volatile unsigned short *)0xFFD00008 = 0;
    *(volatile unsigned short *)0xFFD0000C = 0;
    for (registerEntry = gHwInitRegisterTable; registerEntry->registerAddress != 0; registerEntry++) {
        *registerEntry->registerAddress = registerEntry->initialValue;
    }
}

void syChainMasterHandler(short eventCode)
{
    struct InterruptHandlerNode *handler;

    for (handler = gInterruptHandlerChains[eventCode >> 4]; handler != 0; handler = handler->next) {
        handler->callback(handler->callbackArgument);
    }
}

char *kdGetDevice(int deviceIndex)
{
    return gMapleDeviceTable + deviceIndex * 24;
}

int kdSetResetPattern(void)
{
    int result = mpdrv_set_hreset();

    if (*(int *)(gMapleDriver + 4328) != 0) {
        kdRecvFrame();
    }
    return result;
}

void kdSetHandler(unsigned int handlerIndex, void (*callback)(void))
{
    if (handlerIndex <= 31) {
        gMapleHandlers[handlerIndex] = callback;
    }
}

void vmsfs_c_setparam(int commandIndex, int a, int b, int c, int d, int e, int f)
{
    struct VmsFileCommandState *command = &gVmsFileCommandStates[commandIndex];

    command->parameters[0] = a;
    command->parameters[1] = b;
    command->parameters[2] = c;
    command->parameters[3] = d;
    command->parameters[4] = e;
    command->parameters[5] = f;
    command->commandState = 1;
}

unsigned int DECtoBCD(unsigned int decimalValue)
{
    return ((decimalValue / 10) << 4) + (decimalValue % 10);
}

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

int kmySetTextureDMA(struct TextureDmaRequestPrefix *request, unsigned int destinationAddress, int sourceAddress, int byteCount)
{
    request->sourceAddress = sourceAddress;
    request->destinationAddress = destinationAddress | 0x11000000;
    request->byteCount = byteCount;
    request->transferKind = 0;
    request->operationFlags = 8;
    request->transferControlWord = 0x8000;
    request->transferReservedWord = 0;
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

void mpdrv_dreqcount(int x)
{
    *(int *)(gMapleDriver + 4312) = x;
}

int mpdrv_hreset(int x)
{
    int *p = (int *)(gMapleDriver + 4044);
    unsigned int *w;

    p[0] = p[0] + p[3] * 4;
    w = *(unsigned int **)(gMapleDriver + 4044);
    *w = ((unsigned int)x << 16) | 768;
    *(int *)(gMapleDriver + 4056) = 1;
    *(int *)(gMapleDriver + 4060) = *(int *)(gMapleDriver + 4060) + 4;
    return 0;
}

void mpdrv_set_ft4ctrl_ns(int a, int b)
{
    int buf[2];

    buf[0] = 16;
    buf[1] = b;
    mpdrv_setcmd(a, 15, buf, 1, buf[1], 1);
}

void mpdrv_set_setcond_ns(int a, int b, int c, int d)
{
    int buf[3];

    buf[0] = b;
    buf[1] = c;
    buf[2] = d;
    mpdrv_setcmd(a, 14, buf, 1, buf[1], buf[2]);
}

void ADXB_Stop(struct AdxBitstreamDecoderPrefix *decoder)
{
    ADXPD_Stop(decoder->pcmDecoder);
    decoder->status = 0;
}

int kmySetCheapShadowMode(int a, int b)
{
    kmiWriteRegister(116, (a << 8) | (b & 255));
    return 0;
}

void adxpd_error(void)
{
    gAdxPcmDecodeErrorFlag = 1;
}
