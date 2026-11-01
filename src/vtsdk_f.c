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

float nlAbsSqrt(float x)
{
    if (0.0f > x)
        return -_builtin_sqrtf(-x);
    return _builtin_sqrtf(x);
}

void nlPrnIndentOff(void)
{
    gNlPrintFlags &= 0xfffffffe;
}

int nlFogDensity(int v)
{
    return kmSetFogDensity(v);
}

int gdFsReadWG(int a, int b, int c)
{
    int h = gdFsReopenHn(*(int *)(gGdFsGlobalState + 20), 0, a, b << 11);
    if (h == 0)
        return -13;
    return gdFsRead(h, b, c);
}

void kdGetGunPosition(int *positionX, int *positionY)
{
    *positionX = gLightGunPosition[0];
    *positionY = gLightGunPosition[1];
}

void ADXSTM_ExecServer(void)
{
    char *stream = gAdxStreamFileHandles;
    do {
        if (*stream == 1)
            ADXSTMF_ExecHndl(stream);
        stream += 100;
    } while (stream < gAdxStreamFileHandles + 3200);
}

int ADXSTM_SetBufSize(int *p, int a, int b)
{
    p[7] = a;
    p[6] = b;
    return 1;
}

void ADXF_Finish(void)
{
    gAdxfInvalidateReadCache = 0;
    gAdxfCommandHistoryWriteIndex = 0;
    memset(gAdxfCommandSequences, 0, 32);
    memset(gAdxfCommandHistory, 255, 4096);
    memset(gAdxfPartitionInfoTable, 0, 1024);
    memset(gAdxfFileHandles, 0, 768);
}

void SJRBF_Init(void)
{
    if (gSjRbfInitCount > 0)
        return;
    gSjRbfInitCount = gSjRbfInitCount + 1;
    memset(gSjRbfHandles, 0, 3072);
}

void SJRBF_Destroy(int *ring)
{
    if (ring) {
        memset(ring, 0, 48);
        ring[1] = 0;
    }
}

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

char *mpdrv_get_portstatus(int n)
{
    return gMapleDriver + 4 + n * 8;
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

void ADXB_ExecOneAu(char *p)
{
    short t = *(short *)(p + 170);
    if (t == 2)
        ADXB_ExecOneAuUlaw(p);
    else if (t == 1)
        ADXB_ExecOneAu8(p);
    else
        ADXB_ExecOneAu16(p);
}

int ADXB_CheckSpsd(char *header)
{
    return memcmp(header, gAdxSpsdMagic, 4) == 0;
}

void kmiGetITPCurrent(int *p)
{
    p[16] = kmiReadRegister(312);
    p[17] = kmiReadRegister(308);
}
