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


char *mpdrv_get_portstatus(int n)
{
    return gMapleDriver + 4 + n * 8;
}


