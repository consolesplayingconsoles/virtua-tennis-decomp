/* Ported from crazy-taxi-decomp (src/sdk_a.c) by scripts/port_equiv.py: only the functions the destination has. */
/* NAOMI library and Katana glue, small functions (batch a). */

extern float _builtin_sqrtf(float);

extern void kmGetFreeTextureMem(int *a, int *b);
extern void nlInitPalette(int a, int b);
extern void kmSetPaletteMode(int m);
extern void g_0c076b40(float *t); /* the nl-side kmSetFogTable stub; functions.txt has two functions of that name */
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


void nlFogTableOff(void)
{
    float t[128];
    int i;

    for (i = 0; i < 128; i++)
        t[i] = 0.0f;
    g_0c076b40(t);
}
