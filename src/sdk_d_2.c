/* Small SDK (nl library) functions: texture and font settings, tri-put attributes, vector helpers, string compare. */

extern int gNlDummyTextureSurface[];
extern int gNlFontTextureAddress;
extern int gNlFontWidth;
extern int gNlFontHeight;
extern float gNlObjectFadeColor[];
extern unsigned int g_0c14aa70;
extern unsigned int *gNlSpriteIndexBitmap;
extern int g_0c14a834[];
extern int g_0c14a644;
extern short gNlPaletteCount;
extern char g_0c2aedd8[];
extern char g_0c14ab04[];

void nlReloadPalette(int index);
int kmfGetInternalSystemMetrics(char *p);
float nlSinf(float x);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void nlTranslate(float x, float y, float z);
void nlObjPutLoadTexture(int *p, int tex);
void kmSetCheapShadowMode(int mode);
void nlFreePalette(int index);
int FUN_0c080990(char *a, int b);
void FUN_0c080c50(int a, int b);
int FUN_0c088738(char *a, char *b);


void nlSetDummyTextureParameter(int *polygonParameters)
{
    polygonParameters[2] = (polygonParameters[2] & -64) | gNlDummyTextureSurface[12];
    polygonParameters[3] = (polygonParameters[3] & 0xF8000000) | gNlDummyTextureSurface[13];
}


void nlReloadPalette8888(int index)
{
    nlReloadPalette(index);
}


void nlSetFontSize(int width, int height)
{
    gNlFontWidth = width;
    gNlFontHeight = height;
}


void nlTranslateV(float *v)
{
    nlTranslate(v[0], v[1], v[2]);
}


void nlSubVector(float *a, float *b)
{
    a[0] = a[0] - b[0];
    a[1] = a[1] - b[1];
    a[2] = a[2] - b[2];
}


void nlSpriteClearSpriteIndex(int spriteIndex)
{
    gNlSpriteIndexBitmap[spriteIndex >> 5] &= ~(1 << (spriteIndex & 31));
}
