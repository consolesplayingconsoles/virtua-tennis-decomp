/* Ported from crazy-taxi-decomp (src/sdk_a.c) by scripts/port_equiv.py: only the functions the destination has. */
/* NAOMI library and Katana glue, small functions (batch a). */

extern float _builtin_sqrtf(float);

extern void kmGetFreeTextureMem(int *a, int *b);
extern void nlInitPalette(int a, int b);
extern void kmSetPaletteMode(int m);
extern void nlFogTableSet(float *t);   /* the NAOMI library's stub that jumps to kmSetFogTable */
extern void nlPushMatrix(int a);
extern void FUN_0c07b220(int a);
extern void FUN_0c077ee0(void *a);
extern void FUN_0c07b340(void *a);
extern int FUN_0c07dcf0(void *a, int b, int c, int d);
extern void nlstripSetVertexContext(void *a);
extern void FUN_0c080ae0(void *a, int b, void *c);
extern int FUN_0c080990(void *a, void *b);
extern void FUN_0c080d70(void *a, void *b);

extern char gPaletteMode;
extern int gPaletteModeTable[];
extern short g_0c2b7bc4;
extern int g_0c2b7bd8;
extern unsigned int g_0c2af118;
extern char g_0c2b34a8[];
extern int g_0c2b75b8[];
extern char g_0c14aab4[];
extern char g_0c14ab2c[];


void nlFreePaletteAll(void)
{
    nlInitPalette(g_0c2b7bd8, g_0c2b7bc4);
}


float nlInvertSqrt(float x)
{
    if (x == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / _builtin_sqrtf(x);
}


void nlPrintTileClipMode(int mode)
{
    g_0c2af118 = (g_0c2af118 & 0xfffcffff) | (mode << 16);
}


void nlFogTableOff(void)
{
    float t[128];
    int i;

    for (i = 0; i < 128; i++)
        t[i] = 0.0f;
    nlFogTableSet(t);
}


void nlOuterProduct(float *a, float *b, float *out)
{
    out[2] = a[0] * b[1] - a[1] * b[0];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[0] = a[1] * b[2] - a[2] * b[1];
}


void nlObjPut(int *obj)
{
    if (!(obj[1] & 2))
        FUN_0c07b220(obj[1]);
    nlPushMatrix(0);
    FUN_0c077ee0(g_0c2b34a8);
    FUN_0c07b340(obj);
}


char *nlsndStreamGetHdInfo(char *p, int *out)
{
    *out = (unsigned char)p[7] << 4;
    return p;
}


void nlsndStreamSetHdGain(char *p, int g)
{
    int i;

    for (i = 0; i < 4; i++)
        p[48 + 4 * i] = (char)g;
}
