/* Small SDK (nl library) functions: texture surface tables, triangle/object put attributes, matrix helpers,
   sprite and sound stream setup, memset. */

extern int *gNlTextureSurfaces;
extern int gNlTextureSurfaceCount;
extern int g_0c2b317c;
extern int g_0c2b3184;
extern int g_0c2af364;
extern int g_0c14a7b8;
extern char g_0c2b3390[];
extern float gNlGlobalAmbience;
extern float gNlObjectGlobalAmbience;
extern void (*g_0c14a9a8[])(int);
extern float gNlSpriteInverseScreenSize[2];
extern float gNlSpriteScreenSize[2];
extern char gNlSoundStreamHeaderTemplate[];
extern int gNlG2DmaHandles[];
extern char g_0c14aadc[];
extern char *gNlPaletteTable;

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


void nlInitTextureSurface(int *surfaceTable, int surfaceCount)
{
    int surfaceIndex;

    gNlTextureSurfaces = surfaceTable;
    gNlTextureSurfaceCount = surfaceCount;
    g_0c2b317c = 0;
    g_0c2b3184 = 0;
    for (surfaceIndex = 0; surfaceIndex < surfaceCount; surfaceIndex++) {
        surfaceTable[10] = -1;
        surfaceTable[11] = 0;
        surfaceTable[14] = -1;
        surfaceTable += 15;
    }
}


int nlGetPaletteID(int paletteIndex)
{
    return *(short *)(gNlPaletteTable + paletteIndex * 8);
}


int nlPushUnitMatrix(void)
{
    int matrixIndex = nlPushMatrix(0);

    nlUnitMatrix();
    return matrixIndex;
}


void nlScaleUnitVector(float *destination, float *source, float scale)
{
    float lengthScale = scale / nlScalor(source);

    destination[0] = source[0] * lengthScale;
    destination[1] = source[1] * lengthScale;
    destination[2] = source[2] * lengthScale;
}


void nlObjPutSetGlobalAmbience(float ambience)
{
    gNlGlobalAmbience = ambience;
    gNlObjectGlobalAmbience = ambience;
}


void nlSpriteSetImaginaryScreenSize(float width, float height)
{
    gNlSpriteInverseScreenSize[0] = 1.0f / width;
    gNlSpriteInverseScreenSize[1] = 1.0f / height;
    gNlSpriteScreenSize[0] = width;
    gNlSpriteScreenSize[1] = height;
}


void nlsndStreamGenerateHdInfo(char *header)
{
    int byteIndex;

    for (byteIndex = 0; byteIndex < 64; byteIndex++)
        header[byteIndex] = gNlSoundStreamHeaderTemplate[byteIndex];
}


int *nlsndG2DmaHandleOpen(void)
{
    int handleIndex;
    int *handle = gNlG2DmaHandles;

    for (handleIndex = 0; handleIndex < 16; handleIndex++) {
        if (handle[0] == 0) {
            handle[0] = 1;
            return handle;
        }
        handle += 4;
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
