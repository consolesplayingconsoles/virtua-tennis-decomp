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

extern char g_8c20ac30[];
extern char *g_8c47317c;
extern unsigned int g_8c45f940[];
extern int g_8c20ccd0;

struct hw_pair { unsigned int *addr; unsigned int val; };
extern struct hw_pair g_8c20975c[];

struct chain_node { void (*fn)(int); struct chain_node *next; int arg; };
extern struct chain_node *g_8c461818[];

struct vmsfs_c { int w0; int flag; int pad[3]; int p[6]; int rest[21]; };
extern struct vmsfs_c g_8c462180[];
extern char g_8c461c1c[];
extern void (*g_8c461b9c[])(void);

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
    struct hw_pair *p;

    *(volatile unsigned short *)0xFFD00000 = 0;
    *(volatile unsigned short *)0xFFD00004 = 0;
    *(volatile unsigned short *)0xFFD00008 = 0;
    *(volatile unsigned short *)0xFFD0000C = 0;
    for (p = g_8c20975c; p->addr != 0; p++) {
        *p->addr = p->val;
    }
}

void syChainMasterHandler(short x)
{
    struct chain_node *n;

    for (n = g_8c461818[x >> 4]; n != 0; n = n->next) {
        n->fn(n->arg);
    }
}

char *kdGetDevice(int n)
{
    return g_8c461c1c + n * 24;
}

int kdSetResetPattern(void)
{
    int r = mpdrv_set_hreset();

    if (*(int *)(g_8c47317c + 4328) != 0) {
        kdRecvFrame();
    }
    return r;
}

void kdSetHandler(unsigned int n, void (*fn)(void))
{
    if (n <= 31) {
        g_8c461b9c[n] = fn;
    }
}

void vmsfs_c_setparam(int n, int a, int b, int c, int d, int e, int f)
{
    struct vmsfs_c *s = &g_8c462180[n];

    s->p[0] = a;
    s->p[1] = b;
    s->p[2] = c;
    s->p[3] = d;
    s->p[4] = e;
    s->p[5] = f;
    s->flag = 1;
}

unsigned int DECtoBCD(unsigned int n)
{
    return ((n / 10) << 4) + (n % 10);
}

void mwRnaGetTime(int *rna, int *a, int *b)
{
    if (rna == 0) {
        mwRnaErrCallFunc(g_8c20ac30);
        return;
    }
    mwlRnaAddRdPos(rna);
    *a = rna[19] - rna[13];
    *b = mwRnaGetSfreq(rna);
}

int mwRnaGetSfreq(int *rna)
{
    if (rna == 0) {
        mwRnaErrCallFunc(g_8c20ac30);
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

int kmiFLWCTRLGetVBufLockStatus(int n)
{
    unsigned int a = g_8c45f940[3];

    if (a != 0) {
        g_8c45f940[3] = 0;
        g_8c45f940[0] &= ~a;
        g_8c45f940[6] = 0;
    }
    return (g_8c45f940[0] >> n) & 1;
}

void mpdrv_dreqcount(int x)
{
    *(int *)(g_8c47317c + 4312) = x;
}

int mpdrv_hreset(int x)
{
    int *p = (int *)(g_8c47317c + 4044);
    unsigned int *w;

    p[0] = p[0] + p[3] * 4;
    w = *(unsigned int **)(g_8c47317c + 4044);
    *w = ((unsigned int)x << 16) | 768;
    *(int *)(g_8c47317c + 4056) = 1;
    *(int *)(g_8c47317c + 4060) = *(int *)(g_8c47317c + 4060) + 4;
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
