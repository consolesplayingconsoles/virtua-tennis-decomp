/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int vsprintf(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int nlLoadMatrix8(void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short gNlPaletteAllocationBitmap[];
extern float gNlObjectFadeColorCopy[];
extern int gNlObjectModifierModeBits;


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
