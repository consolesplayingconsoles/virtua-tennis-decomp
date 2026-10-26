/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
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
int nlRenderTextureSet_Sub(void);
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
int vecDist(Stk4 s);
int vecDot(Stk4 s);
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
int nlRenderTextureSet_Stride(void);
void nlGetTranslate(int a4);
void nlSetTranslate(int a4);
void nlTranslate(float f4, float f5, float f6);
int nlObjPutSetLightDirectionV(int a4);
int nlSpriteFreeTextureOnceGI(int a4, int a5, int a6);
void nlsndStreamContinue(void);
void FUN_8c1ff1ee(int a4, int a5, int a6);
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

float nlRandom(void)
{
    int t0;

    t0 = nlRand();
    return ((float)t0 * (*(float *)0x8C0ED314));
}

void SJMEM_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void SJRBF_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void SJUNI_Unlock(int a4, int a5)
{
    _builtin_set_imask(((unsigned int)(((a5 & 0xF) << 2) << 2) >> 4));
}

void ovUnlockCs_8c20012c(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}

int vecDist(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    return (nlLength((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10)));
}

int vecDot(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    return (nlInnerProduct((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10)));
}

int cpuInitPoint(void)
{
    if ((*(int *)0x8C287ADC) == 2) {
        return ((int (*)(void))(0x8C041FD0))();
    }
    return ((int (*)(void))(0x8C056AAA))();
}


int kmyInitializeCallback(void)
{
    int t0;

    *(unsigned int *)0x8C470A0C = 0x8C1F5AC8;
    t0 = *(int *)0x8C4743EC;
    return ((int (*)(int, int, int))(t0))(0x8C4743D8, 0x8C470A00, 0x8C470A18);
}

int kmyInitializeInterrupt(void)
{
    int t0;

    *(unsigned int *)0x8C470CE4 = 0x8C1F5D80;
    t0 = *(int *)0x8C4743EC;
    return ((int (*)(int, int, int))(t0))(0x8C4743D8, 0x8C470CD8, 0x8C470AA0);
}

int fileLoadStartSlotOfs(int a4, int a5, int a6, int a7, int a8)
{
    return fileLoadStartSlot((a4 + a7), a5, a6, a8);
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

int vecLength(Stk4 s)
{
    int stk[14];

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    return (nlScalor((((int)stk + 4) + 0x4)));
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


int nlRenderTextureSet_Stride(void)
{
    return (nlRenderTextureSet_Sub());
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

void FUN_8c1ff1ee(int a4, int a5, int a6)
{
    if ((int)a6 <= 0) {
        return;
    }
    ((int (*)(int, int, int))(0x8C1FF1E8))(a4, a5, (a6 - 1));
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
