/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c02f2f2(void);
int FUN_8c08a876(int, int);
int FUN_8c0ec110(float);
int FUN_8c0f1f20(int, int, int);
int FUN_8c0f2010(int, int, int);
int FUN_8c0f2e60(int, int, int, int);
int FUN_8c0f3e80(int, int, int);
int FUN_8c0f8942(float);
extern void _builtin_prefetch(void *);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int nlObjPut(int);
int nlSpriteFreeTextureOnce_Sub(int, int, int, int);
int nlSpriteLoadTextureOnce_Sub(int, int, int, int);
int vmsfs_c_dispatch(int);
int FUN_8c0cbb38(int a4);
int FUN_0c17277c(int a4);
int FUN_0c1727d0(int a4);
int FUN_8c013448(int a4);
int FUN_8c0a7dfe(void);
int FUN_8c0d5662(int a4);
int FUN_8c0dfbf6(int a4);
int FUN_8c0ec100(void);
void nlsndStreamSetHdVol(int a4, int a5, int a6);
void FUN_8c0fce20(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_8c1ef39c(int a4, int a5);
int FUN_8c1ef3b0(int a4, int a5);
int FUN_8c1ef3c4(int a4, int a5);
int FUN_8c1ef3d8(int a4, int a5);
int FUN_8c1ef3ec(int a4, int a5);
int FUN_8c1ef414(int a4, int a5);
int FUN_8c1ef428(int a4, int a5);
void ADXSJD_SetOutSj(int a4, int a5, int a6);
int FUN_8c016ef8(void);
float FUN_8c089b3a(float f4, float f5, float f6);
int FUN_8c08b464(void);
int FUN_8c1ef4a0(int a4, int a5, int a6);
int FUN_8c1ef4c8(int a4, int a5, int a6);
int FUN_8c1f8a40(int a4);
int FUN_8c207290(int a4, int a5, int a6);
int FUN_8c2072a4(int a4, int a5, int a6);
int FUN_8c2072b8(int a4, int a5, int a6);
int FUN_8c2072cc(int a4, int a5, int a6);
int FUN_8c08e038(int a4);
int FUN_0c074680(void);
int FUN_8c02f2ec(void);
int FUN_0c075410(int a4, int a5);
int FUN_8c0f1ff0(int a4);
int FUN_8c0f2160(int a4);
int nlsndVersion(void);
int FUN_8c1e6a78(void);
int FUN_8c1e8fa0(int a4, int a5);
int ADXRNA_GetNumRoom(void);
int FUN_8c1f0a1e(int a4);
void _kmyiDefaultPALEXTCallbackFunc(int a4);
int FUN_8c200dd8(void);
void FUN_8c0892ec(void);
void FUN_8c0bd14e(void);
int FUN_8c0c4cf0(void);
void FUN_8c0ce532(void);
void FUN_8c0d0c68(void);
void FUN_8c0d2ec8(void);
void FUN_8c0d2ecc(void);
void FUN_8c0d63e8(void);
void FUN_8c0d902c(void);
int FUN_8c0eaf10(void);
void FUN_8c0eebaa(int a4);
int FUN_8c0f2d40(int a4, int a5, int a6);
int FUN_8c0f3dc0(int a4, int a5, int a6);
int nlSpriteSetGarbagedTextureOnce(int a4, int a5);
int nlSpriteFreeTextureOnce(int a4, int a5, int a6);
int FUN_8c0f82a0(void);
void FUN_8c0f8930(void);
void FUN_8c1e2998(int a4);
void ADXRNA_ClearBuf(void);
void ADXRNA_SetPcmType(void);
void ADXRNA_SetTotalNumSmpl(void);
void ADXRNA_SetWavFname(void);
void FUN_8c1f0a7a(void);
void ADXSTM_EntryErrFunc(void);
void FUN_8c1f15cc(void);
void FUN_8c1f1bf8(void);
int mwRnaSetupSnd(void);
void mwlRnaClearBuf(void);
int mwRnaDiscardData(void);
void kmyiDefaultCallback(void);
void FUN_8c20010c(void);
int kmyInitializeRenderPacket(void);
int FUN_8c0f8940(void);
int vmsfs_c_fiber7(void);

int FUN_8c0cbb38(int a4)
{
    int t0;

    t0 = *(int *)(((a4 << 2) + 0x8C1D112C));
    return nlObjPut(t0);
}

int FUN_0c17277c(int a4)
{
    int t0;

    t0 = *(int *)0xA05F688C;
    *(unsigned int *)((a4 + 0x0)) = ((((t0 & 1) == 0)) ? 1 : 0);
    return 0x0;
}

int FUN_0c1727d0(int a4)
{
    int t0;

    t0 = *(int *)0xA05F688C;
    *(unsigned int *)((a4 + 0x0)) = ((((t0 & 16) == 0)) ? 1 : 0);
    return 0x0;
}

int FUN_8c013448(int a4)
{
    int t0;

    t0 = *(int *)0x8C2871B0;
    return (((t0 == a4)) ? 1 : 0);
}

int FUN_8c0a7dfe(void)
{
    int t0;

    t0 = *(int *)0x8C34326C;
    return (((t0 == 0)) ? 1 : 0);
}

int FUN_8c0d5662(int a4)
{
    int t0;

    t0 = *(int *)(((a4 << 2) + 0x8C1D338C));
    *(unsigned int *)0xCB4D7B8 = t0;
    return 0x8C1D338C;
}

int FUN_8c0dfbf6(int a4)
{
    return ((a4 * 0x4C) + 0x8C40C6B0);
}

int FUN_8c0ec100(void)
{
    return ((int (*)(int))(0x8C1E2F60))(0x8C454FC0);
}

void nlsndStreamSetHdVol(int a4, int a5, int a6)
{
    *(unsigned char *)((((((short)a5 << 2) + a4) + 0x31) + 0x0)) = a6;
}

void FUN_8c0fce20(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int FUN_8c1ef39c(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_8c1ef3b0(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_8c1ef3c4(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_8c1ef3d8(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_8c1ef3ec(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}

int FUN_8c1ef414(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}

int FUN_8c1ef428(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x7);
}

void ADXSJD_SetOutSj(int a4, int a5, int a6)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0xC)) + 0x0)) = a6;
}

int FUN_8c016ef8(void)
{
    float u0;

    u0 = *(float *)0x8C016FF4;
    *(float *)0x8C287A04 = u0;
    return 0x8C016FF4;
}

float FUN_8c089b3a(float f4, float f5, float f6)
{
    return (f4 + f6 * (f5 - f4));
}

int FUN_8c08b464(void)
{
    return 0xFFFFFEC0;
}

int FUN_8c1ef4a0(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_8c1ef4c8(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_8c1f8a40(int a4)
{
    return (((0x8C4743FC == a4)) ? 1 : 0);
}

int FUN_8c207290(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_8c2072a4(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_8c2072b8(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_8c2072cc(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_8c08e038(int a4)
{
    return FUN_8c08a876(a4, 0x8C3311F4);
}

int FUN_0c074680(void)
{
    float u0;

    u0 = *(float *)0x8C0EAF28;
    return FUN_8c0ec110(u0);
}

int FUN_8c02f2ec(void)
{
    *(unsigned int *)0x8C29BBBC = 0x0;
    return FUN_8c02f2f2();
}

int FUN_0c075410(int a4, int a5)
{
    return (a4 - a5);
}

int FUN_8c0f1ff0(int a4)
{
    return FUN_8c0f1f20(a4, 0x0, 0x0);
}

int FUN_8c0f2160(int a4)
{
    return FUN_8c0f2010(a4, 0x0, 0x0);
}

int nlsndVersion(void)
{
    return 0x8C127EA4;
}

int FUN_8c1e6a78(void)
{
    return 0x8C20A6B0;
}

int FUN_8c1e8fa0(int a4, int a5)
{
    return (a5 - a4);
}

int ADXRNA_GetNumRoom(void)
{
    return 0x7FFFFFFF;
}

int FUN_8c1f0a1e(int a4)
{
    return (a4 + 0x58);
}

void _kmyiDefaultPALEXTCallbackFunc(int a4)
{
    *(unsigned int *)((a4 + 0x4)) = 0x1;
}

int FUN_8c200dd8(void)
{
    return 0x8C20CA50;
}

void FUN_8c0892ec(void)
{
    
}

void FUN_8c0bd14e(void)
{
    
}

int FUN_8c0c4cf0(void)
{
    return ((int (*)(void))(0x8C0C4C84))();
}

void FUN_8c0ce532(void)
{
    
}

void FUN_8c0d0c68(void)
{
    
}

void FUN_8c0d2ec8(void)
{
    
}

void FUN_8c0d2ecc(void)
{
    
}

void FUN_8c0d63e8(void)
{
    
}

void FUN_8c0d902c(void)
{
    
}

int FUN_8c0eaf10(void)
{
    return 0x1;
}

void FUN_8c0eebaa(int a4)
{
    _builtin_prefetch((void *)a4);
}

int FUN_8c0f2d40(int a4, int a5, int a6)
{
    return FUN_8c0f2e60(a4, a5, a6, 0x0);
}

int FUN_8c0f3dc0(int a4, int a5, int a6)
{
    return nlSpriteLoadTextureOnce_Sub(a4, a5, a6, 0x0);
}

int nlSpriteSetGarbagedTextureOnce(int a4, int a5)
{
    return FUN_8c0f3e80(a4, a5, 0x0);
}

int nlSpriteFreeTextureOnce(int a4, int a5, int a6)
{
    return nlSpriteFreeTextureOnce_Sub(a4, a5, a6, 0x0);
}

int FUN_8c0f82a0(void)
{
    return 0x0;
}

void FUN_8c0f8930(void)
{
    
}

void FUN_8c1e2998(int a4)
{
    iaOcbwb((void *)a4);
}

void ADXRNA_ClearBuf(void)
{
    
}

void ADXRNA_SetPcmType(void)
{
    
}

void ADXRNA_SetTotalNumSmpl(void)
{
    
}

void ADXRNA_SetWavFname(void)
{
    
}

void FUN_8c1f0a7a(void)
{
    
}

void ADXSTM_EntryErrFunc(void)
{
    
}

void FUN_8c1f15cc(void)
{
    
}

void FUN_8c1f1bf8(void)
{
    
}

int mwRnaSetupSnd(void)
{
    return ((int (*)(void))(0x8C1F1CEE))();
}

void mwlRnaClearBuf(void)
{
    
}

int mwRnaDiscardData(void)
{
    return 0x0;
}

void kmyiDefaultCallback(void)
{
    
}

void FUN_8c20010c(void)
{
    
}

int kmyInitializeRenderPacket(void)
{
    return 0x0;
}

int FUN_8c0f8940(void)
{
    return FUN_8c0f8942(1.0f);
}

int vmsfs_c_fiber7(void)
{
    return vmsfs_c_dispatch(0x7);
}
