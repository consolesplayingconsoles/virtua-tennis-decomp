/* Ported from crazy-taxi-decomp (src/sdk_e.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int FUN_0c085dfc(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int FUN_0c077b50(void *m);
extern int FUN_0c077290(int n, void *m);
extern int FUN_0c07d860(void *p, void *name, int i, int z);
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


int nlObjPutSetReplaceTextureDirName(char *p, void *name)
{
    int i, acc;
    char *e;

    acc = 0;
    i = 0;
    for (e = p; *(int *)(e + 4) != -1; e += 16) {
        acc |= FUN_0c07d860(p, name, i, 0);
        i++;
    }
    return acc;
}
