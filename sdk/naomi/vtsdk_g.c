/* Small SDK functions, batch g: this game's own builds of library functions that differ from the common ones.
   Behaviour-checked only. */

extern int gNlRenderTextureTableState[3];
extern int gRenderTextureReady;
extern float nlSinf(float x);

/* As the common build, then it also sets the ready flag that sits just before the table. */
void nlRenderTextureInit(int tableAddress, int entryCount)
{
    int *entry = (int *)((tableAddress + 31) & -32);

    gNlRenderTextureTableState[0] = (int)entry;
    if (entryCount < 0)
        entryCount = 0;
    gNlRenderTextureTableState[1] = entryCount;
    gNlRenderTextureTableState[2] = -1;
    for (; entryCount > 0; entryCount--) {
        entry[0] = -1;
        entry[1] = -1;
        entry += 4;
    }
    gRenderTextureReady = 1;
}

/* As the common build, but this build's constant is 1.5707964f (0x3FC90FDB), one bit above it. */
float nlCosf(float x)
{
    float a = x;
    if (a < 0.0f)
        a = -a;
    return nlSinf(1.5707964f - a);
}
