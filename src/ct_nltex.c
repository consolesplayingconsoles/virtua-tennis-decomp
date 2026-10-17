/* Ported from crazy-taxi-decomp (src/nltex.c) by scripts/port_equiv.py: only the functions the destination has. */
/* The NAOMI library's common textures (libnaomi: nlLoadTextureMem, nlSetTextureParameter, nlCreateTextureParam), the layer
   under nlObjPutLoadTexture. Names from the SDK's libnaomi (its name offsets, laid so that nlSetTextureParameter falls at
   0C073E00, meet the names already known here). A surface is 60 bytes (15 words) in the table at *g_0c2b29c0: Kamui's surface
   at +0 (filled by kmCreateTextureSurface), +40 kmCreateTextureSurface's result (not 0: the surface failed), +48 the TSP bits
   (the texture's U and V size) and +52 the texture control word that nlCreateTextureParam works out for it. */

extern int *g_0c2b29c0;
extern int g_0c2b317c;
extern int g_0c2aec8c[];
extern int (*g_0c14a640)(short *thd);
extern int g_0c2b29c4;
extern int g_0c2b3184;
#define LOAD_BITS       (*(unsigned int **)0x0C2AEC88)   /* nl_texture_loadbit: a set bit, a surface index in use */
#define LOAD_WORDS      (*(int *)0x0C14A63C)             /* its length in words */

int kmCreateTextureSurface(int *s, int w, int h, int type);
void kmLoadTexture(int *s, int data, int a, int b);
void nlCreateTextureParamA(int *s);
void kmFreeTexture(int *s);


/* A record's TSP and texture control word (p[2], p[3]) from surface i: the TSP keeps all but its U and V size. */
void nlSetTextureParameter(int *p, int i)
{
    int *s = g_0c2b29c0 + i * 15;

    p[2] = (p[2] & -64) | s[12];
    p[3] = s[13];
}
