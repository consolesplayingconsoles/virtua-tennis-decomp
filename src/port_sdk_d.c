/* Ported from crazy-taxi-decomp (src/sdk_d.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small SDK (nl library) functions: texture and font settings, tri-put attributes, vector helpers, string compare. */

extern int g_0c2aec8c[];
extern int g_0c14a7c0;
extern int g_0c2af0c8;
extern int g_0c2af0cc;
extern float g_0c14a948[];
extern unsigned int g_0c14aa70;
extern unsigned int *g_0c2b76c4;
extern int g_0c14a834[];
extern int g_0c14a644;
extern short g_0c2b7bc4;
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


void nlSetDummyTextureParameter(int *p)
{
    p[2] = (p[2] & -64) | g_0c2aec8c[12];
    p[3] = (p[3] & 0xF8000000) | g_0c2aec8c[13];
}


void nlReloadPalette8888(int index)
{
    nlReloadPalette(index);
}


void nlSetFontSize(int w, int h)
{
    g_0c2af0c8 = w;
    g_0c2af0cc = h;
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


void nlSpriteClearSpriteIndex(int i)
{
    g_0c2b76c4[i >> 5] &= ~(1 << (i & 31));
}
