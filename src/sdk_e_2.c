/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int FUN_0c085dfc(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int FUN_0c077b50(void *m);
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
extern float g_0c14a958[];
extern int g_0c2b356c;
extern int g_0c2b77dc[];
extern int g_0c2b76fc;
extern int g_0c2b7940;
extern char g_0c14ab18[];


void nlInitPalette(char *table, int count)
{
    char *p;
    short *q;
    unsigned int n;

    *(char **)(gPaletteDirty + 24) = table;
    *(short *)(gPaletteDirty + 4) = count;
    p = table;
    n = count;
    while (n != 0) {
        *(short *)(p + 6) = -1;
        *(short *)p = -1;
        *(char *)(p + 2) = -1;
        *(short *)(p + 4) = 0;
        *(char *)(p + 3) = 0;
        p += 8;
        n--;
    }
    for (q = g_0c2aecc8; q < g_0c2aecc8 + 4; q++)
        *q = 0;
}


float nlInvertAbsSqrt(float x)
{
    if (x == 0.0f)
        return 3.4028234663852886e+38f;
    return 1.0f / nlAbsSqrt(x);
}


void nlGetAverageVector(float *a, float *b, float *out, float w1, float w2)
{
    float x, y, z;

    x = a[0] * w1;
    y = a[1] * w1;
    z = a[2] * w1;
    out[0] = x + w2 * b[0];
    out[1] = y + w2 * b[1];
    out[2] = z + w2 * b[2];
}


void nlObjPutMvSetMode(int mode)
{
    if (mode != 2)
        mode = 1;
    g_0c2b356c = mode << 29;
}


int nlObjPutSetReplaceTextureDirName(char *p, void *name)
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
