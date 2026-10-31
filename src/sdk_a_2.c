/* NAOMI library and Katana glue, small functions (batch a). */

extern float _builtin_sqrtf(float);

extern void kmGetFreeTextureMem(int *a, int *b);
extern void nlInitPalette(int a, int b);
extern void kmSetPaletteMode(int m);
extern void nlFogTableSet(float *t);   /* the NAOMI library's stub that jumps to kmSetFogTable */
extern void nlPushMatrix(int a);
extern void nlInvLightVector(int a);
extern void nlMultiMatrixRevOrder8(void *a);
extern void nlobjput_sub(void *a);
extern int FUN_0c07dcf0(void *a, int b, int c, int d);
extern void nlstripSetVertexContext(void *a);
extern void FUN_0c080ae0(void *a, int b, void *c);
extern int FUN_0c080990(void *a, void *b);
extern void FUN_0c080d70(void *a, void *b);

extern char gPaletteMode;
extern int gPaletteModeTable[];
extern short gNlPaletteCount;
extern int gNlPaletteTable;
extern unsigned int gNlPrintTileClipFlags;
extern char g_0c2b34a8[];
extern int g_0c2b75b8[];
extern char g_0c14aab4[];
extern char g_0c14ab2c[];


void nlFreePaletteAll(void)
{
    nlInitPalette(gNlPaletteTable, gNlPaletteCount);
}


float nlInvertSqrt(float value)
{
    if (value == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / _builtin_sqrtf(value);
}


void nlPrintTileClipMode(int clipMode)
{
    gNlPrintTileClipFlags = (gNlPrintTileClipFlags & 0xfffcffff) | (clipMode << 16);
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
        nlInvLightVector(obj[1]);
    nlPushMatrix(0);
    nlMultiMatrixRevOrder8(g_0c2b34a8);
    nlobjput_sub(obj);
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
