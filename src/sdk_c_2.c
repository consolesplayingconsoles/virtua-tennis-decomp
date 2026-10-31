/* Small NAOMI library (nl*) and runtime functions: texture and palette loading, trig helpers, object/triangle
   put attributes, interrupt priority, sound stream and DMA handles, strlen. */

extern float _builtin_sqrtf(float);
/* the 12-byte struct copy in nlObjPutSetFadeColor compiles to a call of this runtime helper */
extern void _quick_odd_mvn(void);

typedef struct { float x, y, z; } Vector3f;
typedef struct { short w, h; int data; int pal; } NlTextureDescriptor;

extern NlTextureDescriptor g_0c0d6264;
extern char g_0c2aec8c[];
extern char *gNlPaletteTable;
extern unsigned int gNlPrintFlags;
extern int g_0c2b31bc[3];
extern Vector3f gNlObjectFadeColor;
extern Vector3f gNlObjectFadeColorCopy;
extern signed char g_0c14a9c0[][4];
extern float g_0c2b76d4[2];
extern char g_0c14aaf0[];

void kmCreateTextureSurface(void *s, int w, int h, int fmt);
void kmLoadTexture(void *s, int data, int a, int b);
void nlCreateTextureParamA(void *s);
void kmSetBorderColor(unsigned int c);
float nlSin(int a);
float nlLog(float x);
void nlSetPaletteData(int a, int b, int c);
void nlUnitVector(float *v);
void nlRotateAxe(float *v, int a);
int nlObjPutLoadTextureOnce_Sub(int a, int b, int i, int *pi, int z);
void kmSetCheapShadowMode(void);
void nlObjPutMvSetMode(int mode);
void FUN_0c07aad0(int a);
void nlstripSetVertexContext(void *a);
void FUN_0c080ae0(int a, int b, int c);


void nlReloadPalette(int paletteIndex, int paletteData)
{
    char *paletteEntry = gNlPaletteTable + paletteIndex * 8;

    if (*(short *)(paletteEntry + 4)) {
        nlSetPaletteData(*(short *)paletteEntry << 4, paletteData, *(unsigned char *)(paletteEntry + 3) << 4);
    }
}


void setBorderColor(unsigned int c)
{
    kmSetBorderColor(c | 0xFF000000);
}


float nlCosec(int a)
{
    a = a & 0xFFFF;
    if (a == 0 || a == 0x8000)
        return 3.4028235e38f;
    return 1.0f / nlSin(a);
}


void nlPrnIndentOn(void)
{
    gNlPrintFlags |= 1;
}


void nlRotate(float *axis, int angle)
{
    struct { int a; float axis[3]; } rotationArgs;

    rotationArgs.a = angle;
    rotationArgs.axis[0] = axis[0];
    rotationArgs.axis[1] = axis[1];
    rotationArgs.axis[2] = axis[2];
    nlUnitVector(rotationArgs.axis);
    nlRotateAxe(rotationArgs.axis, rotationArgs.a);
}


float nlScalor(float *vector)
{
    return _builtin_sqrtf(vector[0] * vector[0] + vector[1] * vector[1] + vector[2] * vector[2]);
}


void nlObjPutSetFadeColor(float red, float green, float blue)
{
    gNlObjectFadeColor.x = red;
    gNlObjectFadeColor.y = green;
    gNlObjectFadeColor.z = blue;
    gNlObjectFadeColorCopy = gNlObjectFadeColor;
}


void nlSpriteGetImaginaryScreenSize(float *w, float *h)
{
    *w = g_0c2b76d4[0];
    *h = g_0c2b76d4[1];
}


int nlsndG2DmaHandleClose(int *h)
{
    if (*h == 1) {
        *h = 0;
        return 0;
    }
    return -1;
}


int strlen(const char *s)
{
    int n = 0;

    while (*s++)
        n++;
    return n;
}
