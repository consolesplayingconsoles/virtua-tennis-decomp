/* The NAOMI library's common textures (libnaomi: nlLoadTextureMem, nlSetTextureParameter, nlCreateTextureParam), the layer
   under nlObjPutLoadTexture. Names from the SDK's libnaomi (its name offsets, laid so that nlSetTextureParameter falls at
   0C073E00, meet the names already known here). A surface is 60 bytes (15 words) in the table at *gNlTextureSurfaces: Kamui's surface
   at +0 (filled by kmCreateTextureSurface), +40 kmCreateTextureSurface's result (not 0: the surface failed), +48 the TSP bits
   (the texture's U and V size) and +52 the texture control word that nlCreateTextureParam works out for it. */

extern int *gNlTextureSurfaces;
extern int gNlDummyTextureSurface[];
extern int gNlTextureSurfaceCount;
#define LOAD_BITS       (*(unsigned int **)0x0C2AEC88)   /* nl_texture_loadbit: a set bit, a surface index in use */
#define LOAD_WORDS      (*(int *)0x0C14A63C)             /* its length in words */

int kmCreateTextureSurface(int *s, int w, int h, int type);
void kmLoadTexture(int *s, int data, int a, int b);
void nlCreateTextureParamA(int *s);
void kmFreeTexture(int *s);


/* A record's TSP and texture control word (p[2], p[3]) from surface i: the TSP keeps all but its U and V size. */
void nlSetTextureParameter(int *polygonParameters, int textureIndex)
{
    int *textureSurface = gNlTextureSurfaces + textureIndex * 15;

    polygonParameters[2] = (polygonParameters[2] & -64) | textureSurface[12];
    polygonParameters[3] = textureSurface[13];
}
