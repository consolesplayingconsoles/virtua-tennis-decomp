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
int FUN_0c079f80(int a, int b, int i, int *pi, int z);
void kmSetCheapShadowMode(void);
void nlObjPutMvSetMode(int mode);
void FUN_0c07aad0(int a);
void nlstripSetVertexContext(void *a);
void FUN_0c080ae0(int a, int b, int c);


void nlRenderTextureInit(int size, int count)
{
    int *p = (int *)((size + 31) & -32);

    g_0c2b31bc[0] = (int)p;
    if (count < 0)
        count = 0;
    g_0c2b31bc[1] = count;
    g_0c2b31bc[2] = -1;
    for (; count > 0; count--) {
        p[0] = -1;
        p[1] = -1;
        p += 4;
    }
}
