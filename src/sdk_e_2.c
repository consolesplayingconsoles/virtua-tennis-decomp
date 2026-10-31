/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int vsprintf(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int nlLoadMatrix8(void *m);
extern int FUN_0c077290(int n, void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int FUN_0c080990(void *a, int b);
extern int FUN_0c080c50(int a, int b);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short g_0c2aecc8[];
extern char g_0c2af368[];
extern float g_0c14a7bc;
extern char g_0c2b31dc[];
extern float gNlObjectFadeColorCopy[];
extern int g_0c2b356c;
extern int g_0c2b77dc[];
extern int g_0c2b76fc;
extern int g_0c2b7940;
extern char g_0c14ab18[];


void nlInitPalette(char *paletteTable, int paletteCount)
{
    char *paletteEntry;
    short *counter;
    unsigned int remainingEntries;

    *(char **)(gPaletteDirty + 24) = paletteTable;
    *(short *)(gPaletteDirty + 4) = paletteCount;
    paletteEntry = paletteTable;
    remainingEntries = paletteCount;
    while (remainingEntries != 0) {
        *(short *)(paletteEntry + 6) = -1;
        *(short *)paletteEntry = -1;
        *(char *)(paletteEntry + 2) = -1;
        *(short *)(paletteEntry + 4) = 0;
        *(char *)(paletteEntry + 3) = 0;
        paletteEntry += 8;
        remainingEntries--;
    }
    for (counter = g_0c2aecc8; counter < g_0c2aecc8 + 4; counter++)
        *counter = 0;
}


float nlInvertAbsSqrt(float value)
{
    if (value == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / nlAbsSqrt(value);
}


void nlGetAverageVector(float *first, float *second, float *destination, float firstWeight, float secondWeight)
{
    float weightedX, weightedY, weightedZ;

    weightedX = first[0] * firstWeight;
    weightedY = first[1] * firstWeight;
    weightedZ = first[2] * firstWeight;
    destination[0] = weightedX + secondWeight * second[0];
    destination[1] = weightedY + secondWeight * second[1];
    destination[2] = weightedZ + secondWeight * second[2];
}


void nlObjPutMvSetMode(int modifierMode)
{
    if (modifierMode != 2)
        modifierMode = 1;
    g_0c2b356c = modifierMode << 29;
}


int nlSpriteLoadTextureList(char *p, void *name)
{
    int i, acc;
    char *e;

    acc = 0;
    i = 0;
    for (e = p; *(int *)(e + 4) != -1; e += 16) {
        acc |= nlSpriteLoadTextureOnce_Sub(p, name, i, 0);
        i++;
    }
    return acc;
}


void nlsndStreamSetHdFx(char *p, short a, short b)
{
    int i, v;

    v = (a << 4) | b;
    for (i = 0; i < 4; i++)
        p[51 + i * 4] = v;
}


char *strncpy(char *dst, char *src, unsigned int n)
{
    char *d;
    unsigned int i;

    d = dst;
    i = 0;
    while (i < n && *src != 0) {
        *d++ = *src++;
        i++;
    }
    while (i < n) {
        *d++ = 0;
        i++;
    }
    return dst;
}
