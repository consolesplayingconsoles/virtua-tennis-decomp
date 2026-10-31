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
extern int g_8c20ccd0;

struct HardwareRegisterInit { unsigned int *addr; unsigned int val; };
extern struct HardwareRegisterInit gHwInitRegisterTable[];

struct InterruptHandlerNode { void (*fn)(int); struct InterruptHandlerNode *next; int arg; };
extern struct InterruptHandlerNode *gInterruptHandlerChains[];

struct VmsFileCommandState { int w0; int flag; int pad[3]; int p[6]; int rest[21]; };
extern struct VmsFileCommandState gVmsFileCommandStates[];
extern char gMapleDeviceTable[];
extern void (*gMapleHandlers[])(void);

struct fbq { int f0; struct fbq *f4; struct fbq *f8; };
struct dmaent { int f0; int f4; int f8; int f12; int f16; int f20; int f24; short s28; short s30; };
struct adxb { int f0; int f4; void *f8; };

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
    for (registerEntry = gHwInitRegisterTable; registerEntry->addr != 0; registerEntry++) {
        *registerEntry->addr = registerEntry->val;
    }
}

void syChainMasterHandler(short eventCode)
{
    struct InterruptHandlerNode *handler;

    for (handler = gInterruptHandlerChains[eventCode >> 4]; handler != 0; handler = handler->next) {
        handler->fn(handler->arg);
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

void vmsfs_c_setparam(int n, int a, int b, int c, int d, int e, int f)
{
    struct VmsFileCommandState *s = &gVmsFileCommandStates[n];

    s->p[0] = a;
    s->p[1] = b;
    s->p[2] = c;
    s->p[3] = d;
    s->p[4] = e;
    s->p[5] = f;
    s->flag = 1;
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

int kmySetTextureDMA(struct dmaent *p, unsigned int a, int b, int c)
{
    p->f16 = b;
    p->f20 = a | 0x11000000;
    p->f12 = c;
    p->f8 = 0;
    p->f4 = 8;
    p->s28 = 0x8000;
    p->s30 = 0;
    return 0;
}

void kmytex_FBEnQueueEntry(struct fbq **list, struct fbq *e, struct fbq *q)
{
    struct fbq *x;

    if (q->f8 == 0) {
        *list = e;
        e->f4 = q;
        x = 0;
    } else {
        q->f8->f4 = e;
        e->f4 = q;
        x = q->f8;
    }
    e->f8 = x;
    q->f8 = e;
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

void ADXB_Stop(struct adxb *p)
{
    ADXPD_Stop(p->f8);
    p->f4 = 0;
}

int kmySetCheapShadowMode(int a, int b)
{
    kmiWriteRegister(116, (a << 8) | (b & 255));
    return 0;
}

void adxpd_error(void)
{
    g_8c20ccd0 = 1;
}
