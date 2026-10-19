/* Ported from crazy-taxi-decomp (src/sdk_c.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small NAOMI library (nl*) and runtime functions: texture and palette loading, trig helpers, object/triangle
   put attributes, interrupt priority, sound stream and DMA handles, strlen. */

extern float _builtin_sqrtf(float);
/* the 12-byte struct copy in nlObjPutSetFadeColor compiles to a call of this runtime helper */
extern void _quick_odd_mvn(void);

typedef struct { float x, y, z; } Vec3;
typedef struct { short w, h; int data; int pal; } DummyTex;

extern DummyTex g_0c0d6264;
extern char g_0c2aec8c[];
extern char *g_0c2b7bd8;
extern unsigned int g_0c2af0bc;
extern int g_0c2b31bc[3];
extern Vec3 g_0c14a948;
extern Vec3 g_0c14a958;
extern signed char g_0c14a9c0[][4];
extern float g_0c2b76d4[2];
extern char g_0c14aaf0[];

void kmCreateTextureSurface(void *s, int w, int h, int fmt);
void kmLoadTexture(void *s, int data, int a, int b);
void nlCreateTextureParamA(void *s);
void kmSetBorderColor(unsigned int c);
float nlSin(int a);
float nlLog(float x);
void FUN_0c0770f0(int a, int b, int c);
void nlUnitVector(float *v);
void FUN_0c078480(float *v, int a);
int nlObjPutLoadTextureOnce_Sub(int a, int b, int i, int *pi, int z);
void kmSetCheapShadowMode(void);
void nlObjPutMvSetMode(int mode);
void FUN_0c07aad0(int a);
void nlstripSetVertexContext(void *a);
void FUN_0c080ae0(int a, int b, int c);


void nlReloadPalette(int idx, int b)
{
    char *e = g_0c2b7bd8 + idx * 8;

    if (*(short *)(e + 4)) {
        FUN_0c0770f0(*(short *)e << 4, b, *(unsigned char *)(e + 3) << 4);
    }
}


void setBorderColor(unsigned int c)
{
    kmSetBorderColor(c | 0xFF000000);
}


float nlCosec(int a)
{
    a = a & 0xFFFF;
    if (a == 0 || a == 0x8000)
        return 3.4028235e38f;
    return 1.0f / nlSin(a);
}


void nlPrnIndentOn(void)
{
    g_0c2af0bc |= 1;
}


void nlRotate(float *v, int ang)
{
    struct { int a; float v[3]; } t;

    t.a = ang;
    t.v[0] = v[0];
    t.v[1] = v[1];
    t.v[2] = v[2];
    nlUnitVector(t.v);
    FUN_0c078480(t.v, t.a);
}


float nlScalor(float *v)
{
    return _builtin_sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}


void nlObjPutSetFadeColor(float r, float g, float b)
{
    g_0c14a948.x = r;
    g_0c14a948.y = g;
    g_0c14a948.z = b;
    g_0c14a958 = g_0c14a948;
}


void nlSpriteGetImaginaryScreenSize(float *w, float *h)
{
    *w = g_0c2b76d4[0];
    *h = g_0c2b76d4[1];
}


int nlsndG2DmaHandleClose(int *h)
{
    if (*h == 1) {
        *h = 0;
        return 0;
    }
    return -1;
}


int strlen(const char *s)
{
    int n = 0;

    while (*s++)
        n++;
    return n;
}
