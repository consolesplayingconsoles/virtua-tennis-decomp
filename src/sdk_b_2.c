/* Small SDK (nl library) functions: texture surface tables, triangle/object put attributes, matrix helpers,
   sprite and sound stream setup, memset. */

extern int *g_0c2b29c0;
extern int g_0c2b29c4;
extern int g_0c2b317c;
extern int g_0c2b3184;
extern int g_0c2af364;
extern int g_0c14a7b8;
extern char g_0c2b3390[];
extern float g_0c14a910;
extern float g_0c2b316c;
extern void (*g_0c14a9a8[])(int);
extern float g_0c2b76cc[2];
extern float g_0c2b76d4[2];
extern char g_0c0d68d9[];
extern int g_0c2b783c[];
extern char g_0c14aadc[];
extern char *g_0c2b7bd8;

extern int nlPushMatrix(void *m);
extern void nlUnitMatrix();
extern void nlPopMatrix(int n);
extern float nlFloor(float x);
extern float nlLog(float x);
extern float nlScalor(float *v);
extern void FUN_0c0771b0(int a, int b);
extern void nlstripSetVertexContext(void *ctx);
extern void FUN_0c080ae0(int a, int b, int c);
extern void kmRender();
extern void kmFlipFrameBuffer();
extern void kmSetFogDensity(int w);


void nlInitTextureSurface(int *tbl, int n)
{
    int i;

    g_0c2b29c0 = tbl;
    g_0c2b29c4 = n;
    g_0c2b317c = 0;
    g_0c2b3184 = 0;
    for (i = 0; i < n; i++) {
        tbl[10] = -1;
        tbl[11] = 0;
        tbl[14] = -1;
        tbl += 15;
    }
}


int nlGetPaletteID(int id)
{
    return *(short *)(g_0c2b7bd8 + id * 8);
}


int nlPushUnitMatrix(void)
{
    int m = nlPushMatrix(0);

    nlUnitMatrix();
    return m;
}


void nlScaleUnitVector(float *dst, float *src, float s)
{
    float k = s / nlScalor(src);

    dst[0] = src[0] * k;
    dst[1] = src[1] * k;
    dst[2] = src[2] * k;
}


void nlObjPutSetGlobalAmbience(float a)
{
    g_0c14a910 = a;
    g_0c2b316c = a;
}


void nlSpriteSetImaginaryScreenSize(float w, float h)
{
    g_0c2b76cc[0] = 1.0f / w;
    g_0c2b76cc[1] = 1.0f / h;
    g_0c2b76d4[0] = w;
    g_0c2b76d4[1] = h;
}


void nlsndStreamGenerateHdInfo(char *dst)
{
    int i;

    for (i = 0; i < 64; i++)
        dst[i] = g_0c0d68d9[i];
}


int *nlsndG2DmaHandleOpen(void)
{
    int i;
    int *p = g_0c2b783c;

    for (i = 0; i < 16; i++) {
        if (p[0] == 0) {
            p[0] = 1;
            return p;
        }
        p += 4;
    }
    return 0;
}


void *memset(void *dst, int val, unsigned int n)
{
    unsigned int i;
    char *p = (char *)dst;

    for (i = 0; i < n; i++)
        *p++ = (char)val;
    return dst;
}
