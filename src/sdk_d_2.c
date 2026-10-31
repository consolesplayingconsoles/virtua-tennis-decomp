/* Small SDK (nl library) functions: texture and font settings, tri-put attributes, vector helpers, string compare. */

extern int gNlDummyTextureSurface[];
extern int gNlFontTextureAddress;
extern int gNlFontWidth;
extern int gNlFontHeight;
extern float gNlObjectFadeColor[];
extern unsigned int *gNlSpriteIndexBitmap;
extern short gNlPaletteCount;

void nlReloadPalette(int index);
int kmfGetInternalSystemMetrics(char *p);
float nlSinf(float x);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void nlTranslate(float x, float y, float z);
void nlObjPutLoadTexture(int *p, int tex);
void kmSetCheapShadowMode(int mode);
void nlFreePalette(int index);


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
