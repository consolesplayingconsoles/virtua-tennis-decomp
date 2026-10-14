/* Small SDK functions, batch g: this game's own builds of library functions that differ from Crazy Taxi's.
   Behaviour-checked only. */

extern int g_0c2b31bc[3];
extern int gRenderTextureReady;
extern float nlSinf(float x);

/* As Crazy Taxi's, then it also sets the ready flag that sits just before the table. */
void nlRenderTextureInit(int size, int count)
{
    int *p = (int *)((size + 31) & -32);

    g_0c2b31bc[0] = (int)p;
    if (count < 0)
        count = 0;
    g_0c2b31bc[1] = count;
    g_0c2b31bc[2] = -1;
    for (; count > 0; count--) {
        p[0] = -1;
        p[1] = -1;
        p += 4;
    }
    gRenderTextureReady = 1;
}

/* As Crazy Taxi's, but this build's constant is 1.5707964f (0x3FC90FDB), one bit above the other game's. */
float nlCosf(float x)
{
    float a = x;
    if (a < 0.0f)
        a = -a;
    return nlSinf(1.5707964f - a);
}
