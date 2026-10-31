/* Interrupt callback setters hidden beside nlInitInterruptDC's literal pool.
   The dispatcher supplies interruptId even when a setter uses a fixed slot.
   Callback addresses remain 32-bit words, as in the original SH-4 ABI. */

extern int gNlIntrRenderEndCallback;
extern int gNlIntrVSyncCallback;
extern int gNlIntrHSyncCallback;
extern int gNlIntrGdDmaCallback;
extern int gNlIntrGdCommandCallback;
extern int gNlIntrTextureOverflowCallback;
extern const short nlCpuInterruptEventCodes[8];

int nlIntrSetRenderEndCallback(int interruptId, int callbackAddress)
{
    gNlIntrRenderEndCallback = callbackAddress;
    return 1;
}

int nlIntrSetVSyncCallback(int interruptId, int callbackAddress)
{
    gNlIntrVSyncCallback = callbackAddress;
    return 1;
}

int nlIntrSetHSyncCallback(int interruptId, int callbackAddress)
{
    gNlIntrHSyncCallback = callbackAddress;
    return 1;
}

int nlIntrSetGdDmaCallback(int interruptId, int callbackAddress)
{
    gNlIntrGdDmaCallback = callbackAddress;
    return 1;
}

int nlIntrSetGdCommandCallback(int interruptId, int callbackAddress)
{
    gNlIntrGdCommandCallback = callbackAddress;
    return 1;
}

int nlIntrSetCpuVectorCallback(int interruptId, int callbackAddress)
{
    unsigned int vectorOffset;
    int vectorBase;

    vectorOffset = (unsigned int)(int)nlCpuInterruptEventCodes[interruptId - 5] >> 3;
    vectorBase = (int)_builtin_get_vbr();
    *(int *)(vectorBase + 0x1c0 + vectorOffset) = callbackAddress;
    return 1;
}

int nlIntrSetTextureOverflowCallback(int interruptId, int callbackAddress)
{
    gNlIntrTextureOverflowCallback = callbackAddress;
    return 1;
}
