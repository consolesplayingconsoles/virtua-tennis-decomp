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


int kmyAllocateArea(int a4, int a5, int a6)
{
    int t0;
    int t21;
    int t5;
    int t19;
    int t12;
    int t16;
    int stk[11];

    t0 = 0x0;
    if ((a4 & 0x2) != 0) {
        t0 = 0x2;
    }
    if ((*(int *)0x8C20C9C8) == 1) {
        if ((a4 & 0x1) != 0) {
            t5 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
        } else {
            t5 = (kmytex_TXalloc(t0, a5, a6, 0x0));
        }
        t21 = t5;
    } else {
        kmytex_GetfreememEx(((int)stk + 4), (((int)stk + 4) + 0x4));
        if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)(*(int *)(((int)stk + 8)))) {
            if ((a4 & 0x1) != 0) {
                t12 = (kmytex_TXalloc2(t0, a5, a6, 0x1));
            } else {
                t12 = (kmytex_TXalloc(t0, a5, a6, 0x1));
            }
            t19 = t12;
        } else {
            if ((a4 & 0x1) != 0) {
                t16 = (kmytex_TXalloc2(t0, a5, a6, 0x0));
            } else {
                t16 = (kmytex_TXalloc(t0, a5, a6, 0x0));
            }
            t19 = t16;
        }
        t21 = t19;
    }
    return t21;
}


