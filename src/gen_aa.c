/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[3]; } Stk3;
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadStartSlot(int, int, int, int);
int motionBoneOffset(int);
int motionRootRaw(void);
int motionRotateRaw(int);
int nlInnerProduct(int, int);
int nlLength(int, int);
float nlLog(float);
int nlMakeModelProjectMatrix_objput(void);
int nlObjPut(int);
int nlObjPutMvSub(int, int);
int nlObjPutSetLightDirectionF(float, float, float);
int nlRand(void);
int nlRenderTextureSet_Sub(int, int, int, int, int);
int nlScalor(int);
int nlSpriteFreeTextureOnce_Sub(int, int, int, int);
void motionBackup(int a4);
int vecLengthXZ(Stk4 s);
int perfMark(void);
int cpuAimPointSet(int a4, int a5, float f4, float f5);
float mathLineY(float f4, float f5, float f6, float f7, float f8);
float nlRandom(void);
void SJMEM_Unlock(int a4, int a5);
void SJRBF_Unlock(int a4, int a5);
void SJUNI_Unlock(int a4, int a5);
void ovUnlockCs_8c20012c(int a4);
int vecDist(Stk3 a, Stk3 b);
int vecDot(Stk3 a, Stk3 b);
int cpuInitPoint(void);
int nlSetFatalErrorMode(int a4);
int kmyInitializeCallback(void);
int kmyInitializeInterrupt(void);
int fileLoadStartSlotOfs(int a4, int a5, int a6, int a7, int a8);
int nlObjPutMvClosedVolume(int a4);
int nlObjPutMvOpenedVolume(int a4);
int vecLength(Stk4 s);
int fadeReset(void);
int circuitTaskSetB(int a4, int a5);
float nlLog10(float f4);
float nlLog2(float f4);
int nlRenderTextureSet(void);
int nlRenderTextureSet_Stride(int, int, int, int);
void nlGetTranslate(int a4);
void nlSetTranslate(int a4);
void nlTranslate(float f4, float f5, float f6);
int nlObjPutSetLightDirectionV(int a4);
int nlSpriteFreeTextureOnceGI(int a4, int a5, int a6);
void nlsndStreamContinue(void);
void copyBytes(int a4, int a5, int a6);
float lerpf(float f4, float f5, float f6);
int motionRootBoneRaw(int a4, int a5);
int motionBoneRaw(int a4);
int shadowPartPut(int a4);
int staffShadowPart(int a4);

void motionBackup(int a4)
{
    int t0;
    int t2;
    int t3;

    t0 = a4;
    t2 = 0x8C2871D8;
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((a4 + 480)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    *(unsigned int *)0x8C2873C4 = 0x0;
}

int vecLengthXZ(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    return (nlScalor((((int)stk + 4) + 0x4)));
}


int cpuAimPointSet(int a4, int a5, float f4, float f5)
{
    *(float *)((((((a4 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)) = f4;
    *(float *)((((((a4 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)) = f5;
    *(unsigned char *)((((((a4 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = a5;
    return a5;
}

float mathLineY(float f4, float f5, float f6, float f7, float f8)
{
    return (((f8 * ((f7 - f5) / (f6 - f4))) - (f4 * ((f7 - f5) / (f6 - f4)))) + f5);
}


int vecDist(Stk3 a, Stk3 b)
{
    return (nlLength((int)&a, (int)&b));
}

int vecDot(Stk3 a, Stk3 b)
{
    return (nlInnerProduct((int)&a, (int)&b));
}


int fileLoadStartSlotOfs(int a4, int a5, int a6, int a7, int a8)
{
    return fileLoadStartSlot((a4 + a7), a5, a6, a8);
}


int fadeReset(void)
{
    *(unsigned int *)0x8C1389FC = 0x0;
    *(float *)0x8C287D64 = (*(float *)0x8C01B2D8);
    return 0x8C01B2D8;
}

int circuitTaskSetB(int a4, int a5)
{
    *(unsigned int *)((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD30)) = a5;
    return 0x8C2FBD30;
}


float lerpf(float f4, float f5, float f6)
{
    float u0;

    u0 = (f5 * f6);
    u0 = u0 + f4 * (1.0f - f6);
    return u0;
}

int motionRootBoneRaw(int a4, int a5)
{
    motionRootRaw();
    return motionRotateRaw(a5);
}

int motionBoneRaw(int a4)
{
    motionBoneOffset(a4);
    return motionRotateRaw(a4);
}

int shadowPartPut(int a4)
{
    return nlObjPut((*(int *)(((a4 << 2) + 0x8C18256C))));
}

int staffShadowPart(int a4)
{
    return nlObjPut((*(int *)(((a4 << 2) + 0x8C1D10A0))));
}
