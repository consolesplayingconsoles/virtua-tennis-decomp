/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[13]; } Stk13;
int ADXAMP_ExecHndl(int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int evBallMarkSpawn(int, Stk3);
int kmytex_GetfreememEx(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int memmove(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaGetTransSw(int);
int mwlRnaAddFlshPos(int);
int mwlRnaAddWrPos(int);
int nlMatrixMode(int);
float nlRandom(void);
int nlSetWindowSize(float, float, float, float);
int nl_cancel_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int set_event(int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int syChainMasterHandler(int, int, int, int);
float vecLength(void);
int vecSub(int, int, ...);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);
int vmsfs_c_setvolume(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_sys(int);
float lineJudgeWakeAll(void);
void SJUNI_PutChunk(int a4, int a5, int a6);
int syChainClx1Handler(int a4, int a5, int a6, int a7);
void vecLineCrossXZ(Stk13 s, float f4, float f5, float f6, float f7, float f8, float f9);
int nlRenderTextureBegin(int a4);
void footMarkCheck(int a4, int a5);
float effBallTrailSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6);
int buFormatDisk(int a4, int a5, int a6, int a7, int a8);
int vmsfs_setvolume(int a4, int a5);
int kmytex_GetSmallVQprofile(int a4, int a5);
int SJRBF_UngetChunk(int a4, int a5, int a6);
int SJRBF_PutChunk(int a4, int a5, int a6);
int hudNumberDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmyAllocateArea(int a4, int a5, int a6);
int mwRnaAdjustBuf(int a4);
float advFovKey(float f4, float f5);
int numPutDigits(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int ADXAMP_ExecServer(void);


float effBallTrailSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6)
{
    int t46;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    int t11;
    float u14;
    float u54;
    float u39;
    float u25;
    int stk[19];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    stk[8] = a11;
    stk[9] = a12;
    stk[10] = a13;
    if ((*(int *)0x8C287C60) == 0) {
        t46 = 0;
        if ((*(int *)0x8C37EA7C) != 1) {
            u3 = *(float *)(((((int)stk + 4) + 0x1C) + 0x4));
            u4 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
            u5 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
            u6 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
            u7 = *(float *)(((((int)stk + 4) + 0x1C) + 0x8));
            u8 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
            u9 = ((u4 - u3) * (u4 - u3));
            u9 = u9 + (u6 - u5) * (u6 - u5);
            u10 = u9;
            u10 = u10 + (u8 - u7) * (u8 - u7);
            if (_builtin_sqrtf(u10) > (1.0f + 1.0f)) {
                t11 = set_event(0x84, 0x8C082974);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x20)) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t11 + 0x2C)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
                u14 = *(float *)0x8C082BB0;
                *(float *)((t11 + 0x14)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x0))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)))) * u14);
                *(float *)((t11 + 0x18)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x4))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)))) * u14);
                *(float *)((t11 + 0x1C)) = (((*(float *)(((((int)stk + 4) + 0x10) + 0x8))) + (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)))) * u14);
                *(float *)((t11 + 0x78)) = _builtin_sqrtf(u10);
                *(float *)((t11 + 0x7C)) = 1.0f;
                *(unsigned int *)((t11 + 0x80)) = 0x3;
                *(unsigned int *)0x8C181600 = ((*(int *)0x8C181600) + 0x1);
            } else {
                u25 = (u8 - u7);
            }
            u39 = u25;
            _builtin_sqrtf(u10);
            t46 = ((_builtin_sqrtf(u10) > (1.0f + 1.0f)));
        } else {
            t46 = (1);
        }
        u54 = u39;
    }
    return u54;
}


int hudNumberDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u6;
    int stk[41];

    stk[29] = a8;
    stk[30] = a9;
    stk[31] = a10;
    stk[32] = a11;
    *(unsigned int *)(((int)stk + 40)) = a4;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 40) + 0x8)) = *(struct mv10 *)(0x8C125AD4); }
    *(unsigned int *)(((int)stk + 44)) = ((int)((int)(*(int *)(((int)stk + 40))) / (int)0xA));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    sprListPut((*(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 44))) << 2)))), 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f);
    u6 = *(float *)0x8C0D1814;
    *(float *)(((((int)stk + 40) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x4C) + 0x0))) + u6);
    *(unsigned int *)(((int)stk + 40)) = ((int)((int)(*(int *)(((int)stk + 40))) % (int)0xA));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    sprListPut((*(int *)(((((int)stk + 40) + 0x8) + ((*(int *)(((int)stk + 40))) << 2)))), 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f);
    *(float *)(((((int)stk + 40) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x4C) + 0x0))) + u6);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x4C)); }
    return (sprListPut(0x8C1D1FD4, 0x1, 0x0, *(Stk3 *)((((int)stk + 40) + 0x4C)), f4, 1.0f, 1.0f));
}


float advFovKey(float f4, float f5)
{
    int t1;
    int t2;
    int t3;
    int t22;
    int t23;
    float u24;
    float u26;
    int t0;
    float u4;
    float u32;

    t1 = 0x0;
    t2 = 0xFFFFFFFF;
    t3 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 1) + t1) << 2) + 0x8C1588D4) + 0x0))) == (*(int *)0x8C295DF4)) {
            t0 = t1;
            t0 = (t0 << 1);
            t0 = (t0 + t1);
            t0 = (t0 << 2);
            t0 = (t0 + 0x8C1588D4);
            u4 = (float)(*(int *)((t0 + 0x4)));
            if (!(u4 > f4)) {
                t3 = t1;
            } else {
                t0 = t2;
                if (t0 == -1) {
                    u4 = (float)(*(int *)((((((t1 << 1) + t1) << 2) + 0x8C1588D4) + 0x4)));
                    if (!(f4 > u4)) {
                        t2 = t1;
                    }
                }
            }
        }
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x1C) {
            break;
        }
    }
    if (t2 != -1) {
        t22 = *(int *)((((((t3 << 1) + t3) << 2) + 0x8C1588D4) + 0x4));
        t23 = *(int *)((((((t2 << 1) + t2) << 2) + 0x8C1588D4) + 0x4));
        u24 = *(float *)((((((t3 << 1) + t3) << 2) + 0x8C1588D4) + 0x8));
        u26 = u24;
        u26 = u26 + ((f4 - (float)t22) / (float)(t23 - t22)) * ((*(float *)((((((t2 << 1) + t2) << 2) + 0x8C1588D4) + 0x8))) - u24);
        *(float *)0x8C287A04 = u26;
        u32 = ((f4 - (float)t22) / (float)(t23 - t22));
    }
    return u32;
}


