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


float nlCosf(float x)
{
    float a = x;
    if (a < 0.0f)
        a = -a;
    return nlSinf(1.5707964f - a);
}
