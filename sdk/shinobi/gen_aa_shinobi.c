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


void ovUnlockCs_8c20012c(int a4)
{
    _builtin_set_imask(((unsigned int)((((*(int *)((a4 + 0x0))) & 0xF) << 2) << 2) >> 4));
}


void copyBytes(int sourceAddress, int destinationAddress, int byteCount)
{
    if ((int)byteCount <= 0) {
        return;
    }
    for (; (int)byteCount > 0; byteCount--) {        /* the loop at 0x8C1FF1E8 */
        *(unsigned char *)destinationAddress = *(unsigned char *)sourceAddress;
        sourceAddress = sourceAddress + 1;
        destinationAddress = destinationAddress + 1;
    }
}


