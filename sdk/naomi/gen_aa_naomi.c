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


float nlRandom(void)
{
    int t0;

    t0 = nlRand();
    return ((float)t0 * (*(float *)0x8C0ED314));
}


int nlObjPutMvClosedVolume(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return nlObjPutMvSub(a4, 0x0);
}

int nlObjPutMvOpenedVolume(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return nlObjPutMvSub(a4, 0xFFFFFFFF);
}


float nlLog10(float f4)
{
    float t0;

    t0 = nlLog(f4);
    return (t0 / (*(float *)0x8C0ED20C));
}

float nlLog2(float f4)
{
    float t0;

    t0 = nlLog(f4);
    return (t0 / (*(float *)0x8C0ED208));
}


int nlRenderTextureSet_Stride(int a4, int a5, int a6, int a7)
{
    return (nlRenderTextureSet_Sub(a4, a5, a6, a7, 0x0));
}

void nlGetTranslate(int a4)
{
    float u0[16];
    float u1[16];

    _builtin_st_ext((float (*)[4])u0);
    *(float *)((((a4 + 0xC) - 0x4) + 0x0)) = u0[14];
    *(float *)(((((a4 + 0xC) - 0x4) - 0x4) + 0x0)) = u0[13];
    *(float *)((((((a4 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0[12];
    _builtin_st_ext((float (*)[4])u1);
    u1[0] = u0[0];
    u1[1] = u0[1];
    u1[2] = u0[2];
    u1[3] = u0[3];
    u1[4] = u0[4];
    u1[5] = u0[5];
    u1[6] = u0[6];
    u1[7] = u0[7];
    u1[8] = u0[8];
    u1[9] = u0[9];
    u1[10] = u0[10];
    u1[11] = u0[11];
    u1[12] = u0[12];
    u1[13] = u0[13];
    u1[14] = u0[14];
    u1[15] = u0[15];
    _builtin_ld_ext((float (*)[4])u1);
}

void nlSetTranslate(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    _builtin_st_ext((float (*)[4])u3);
    u3[12] = u0;
    u3[13] = u1;
    u3[14] = u2;
    _builtin_ld_ext((float (*)[4])u3);
}

void nlTranslate(float f4, float f5, float f6)
{
    float u0[4];
    float u1[16];
    float u2[16];

    u0[0] = f4;
    u0[1] = f5;
    u0[2] = f6;
    u0[3] = 1.0f;
    _builtin_ftrv(u0, u0);
    _builtin_st_ext((float (*)[4])u1);
    u1[12] = u0[0];
    u1[13] = u0[1];
    _builtin_ld_ext((float (*)[4])u1);
    _builtin_st_ext((float (*)[4])u2);
    u2[14] = u0[2];
    u2[15] = u0[3];
    _builtin_ld_ext((float (*)[4])u2);
}

int nlObjPutSetLightDirectionV(int a4)
{
    return nlObjPutSetLightDirectionF((*(float *)((a4 + 0x0))), (*(float *)((a4 + 0x4))), (*(float *)((a4 + 0x8))));
}

int nlSpriteFreeTextureOnceGI(int a4, int a5, int a6)
{
    return nlSpriteFreeTextureOnce_Sub(a4, a5, a6, 0x1);
}

void nlsndStreamContinue(void)
{
    
}


