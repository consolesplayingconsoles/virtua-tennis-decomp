/* Small SDK functions, batch f (VT pilot). Behaviour-checked only. */

extern float _builtin_sqrtf(float);
extern void *memset(void *d, int c, int n);
extern int kmSetFogDensity(int v);
extern int gdFsReopenHn(int a, int b, int c, int d);
extern int gdFsRead(int h, int a, int b);
extern void ADXSTMF_ExecHndl(char *p);
extern int kmiWriteRegister(int reg, int val);
extern int kmyiCheckNativeHandle(int h);
extern void ADXB_ExecOneAuUlaw(char *p);
extern void ADXB_ExecOneAu8(char *p);
extern void ADXB_ExecOneAu16(char *p);
extern int memcmp(char *a, char *b, int n);
extern int kmiReadRegister(int a);

extern unsigned int gNlPrintFlags;
extern int gLightGunPosition[];
extern char *gGdFsGlobalState;
extern char gAdxStreamFileHandles[];
extern int gAdxfInvalidateReadCache;
extern int gAdxfCommandHistoryWriteIndex;
extern char gAdxfCommandSequences[];
extern char gAdxfCommandHistory[];
extern char gAdxfPartitionInfoTable[];
extern char gAdxfFileHandles[];
extern int gSjRbfInitCount;
extern char gSjRbfHandles[];
extern char gRenderPacketQueues[];
extern char gRenderPacketQueueNextLinks[];
extern int gDisplayFilterUsesSharedFrameBuffer;
extern char *gMapleDriver;
extern char gAdxSpsdMagic[];


int kmySetBorderColor(int c)
{
    kmiWriteRegister(64, c & 0xffffff);
    return 0;
}

char *kmiFLWCTRLFindTailQueue(void)
{
    int queueOffset;
    for (queueOffset = 0; queueOffset < 3616; queueOffset += 452) {
        if (*(int *)(gRenderPacketQueues + queueOffset) == 1 && *(int *)(gRenderPacketQueueNextLinks + queueOffset) == 0)
            return gRenderPacketQueues + queueOffset;
    }
    return 0;
}

int kmiCheckSysConfigSetting(int *p)
{
    if ((p[1] & 2) == 0 && gDisplayFilterUsesSharedFrameBuffer == 0)
        return 0;
    if (p[3] == 2 && (p[1] & 32) == 0)
        return 0;
    return 0xeeee;
}


int kmySetBackGroundDepth(int h, float d)
{
    if (!kmyiCheckNativeHandle(h))
        return 0xeeee;
    *(float *)(*(char **)(h + 136) + 12) = d;
    return 0;
}

int kmySetColorClampMIN(int c)
{
    kmiWriteRegister(192, c);
    return 0;
}


void kmiGetITPCurrent(int *p)
{
    p[16] = kmiReadRegister(312);
    p[17] = kmiReadRegister(308);
}
