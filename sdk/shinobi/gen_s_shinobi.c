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


int syChainClx1Handler(int a4, int a5, int a6, int a7)
{
    int t50;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t39;
    int t30;
    int t9;
    int t11;
    int t12;
    int t24;
    int t25;
    int t26;
    int t27;

    t50 = ((int)(short)a4 >> 4);
    if (((int)(short)a4 >> 4) != 50) {
        if (((int)(short)a4 >> 4) != 54) {
            t39 = ((int)(short)a4 >> 4);
        } else {
            _builtin_set_imask(0x4);
            t1 = *(int *)0xA05F6900;
            t2 = *(int *)0xA05F6920;
            if (((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2) != 0) {
                t3 = 0xA05F6900;
                t4 = 0xFFFFFF0F;
                t5 = t2;
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    if ((((int)t7 >= 0) ? (0x1 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)0x1 >> (-(int)t7 & 31)) : ((int)0x1 >> 31))) == 0x80) {
                        break;
                    }
                    t5 = 0x1;
                    t5 = (((int)t7 >= 0) ? (t5 << (t7 & 31)) : ((-(int)t7 & 31) ? ((int)t5 >> (-(int)t7 & 31)) : ((int)t5 >> 31)));
                    if ((t5 & ((unsigned int)((unsigned int)((unsigned int)(t1 & t2) >> 8) >> 2) >> 2)) != 0) {
                        t6 = t7;
                        t6 = (t6 << 2);
                        t6 = (t6 << 2);
                        t6 = (t6 << 1);
                        t6 = (t6 + 0xA00);
                        t3 = (syChainMasterHandler(t6, a5, a6, a7));
                    } else {
                        t9 = t4;
                        t11 = t5;
                        t12 = t6;
                    }
                    t4 = t9;
                    t7 = (t7 + 0x1);
                    t5 = t11;
                    t6 = t12;
                }
                t30 = t3;
            } else {
                t15 = *(int *)0xA05F6904;
                t16 = *(int *)0xA05F6924;
                t17 = 0xA05F6924;
                t18 = 0xA05F6904;
                t19 = t16;
                t20 = 0x0;
                t21 = 0x0;
                for (;;) {
                    if ((((int)t21 >= 0) ? (0x1 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)0x1 >> (-(int)t21 & 31)) : ((int)0x1 >> 31))) == 16) {
                        break;
                    }
                    t18 = 0x1;
                    t18 = (((int)t21 >= 0) ? (t18 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)t18 >> (-(int)t21 & 31)) : ((int)t18 >> 31)));
                    if ((t18 & (t15 & t16)) != 0) {
                        t20 = t21;
                        t20 = (t20 << 2);
                        t20 = (t20 << 2);
                        t20 = (t20 << 1);
                        t20 = (t20 + 0xB00);
                        syChainMasterHandler(t20, a5, a6, a7);
                    } else {
                        t24 = t17;
                        t25 = t18;
                        t26 = t19;
                        t27 = t20;
                    }
                    t17 = t24;
                    t21 = (t21 + 0x1);
                    t18 = t25;
                    t19 = t26;
                    t20 = t27;
                }
                t30 = (((int)t21 >= 0) ? (0x1 << (t21 & 31)) : ((-(int)t21 & 31) ? ((int)0x1 >> (-(int)t21 & 31)) : ((int)0x1 >> 31)));
            }
            t39 = t30;
        }
        t50 = t39;
    }
    return t50;
}


int buFormatDisk(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = vmsfs_c_getstate(a4);
    if (t0 != 0) {
        return 0xFFFFFFFF;
    }
    vmsfs_c_setfunc(a4, 0x3);
    vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, 0x0);
    vmsfs_c_setvolume(a4, a5);
    vmsfs_c_settime(a4, a7);
    return 0x0;
}

int vmsfs_setvolume(int a4, int a5)
{
    int t1;
    int t3;
    int t6;
    int t8;
    int t9;
    int t13;
    int t14;
    int t4;
    int t5;
    int t11;
    int stk[6];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = a5;
    R1008 = (a4 * 0x148);
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            return 0xFFFFFF01;
        }
        t3 = vmsio_ismount(a4);
        if ((t3 != 0) && (t4 = R1008, t5 = *(signed char *)(((t4 + 0x8C464598) + 0x8)), t5 != 0)) {
            t6 = buIsFormat(a4);
            if ((int)t6 < 0) {
                return 0xFFFFFF03;
            }
            t8 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x10);
            t9 = 0x0;
            for (;;) {
                if ((int)t9 >= (int)0x20) {
                    break;
                }
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x1);
            }
            t13 = ((*(int *)((((a4 * 0x148) + 0x8C464598) + 0x20))) + 0x10);
            t14 = 0x0;
            for (;;) {
                if ((int)t14 >= (int)0x20) {
                    break;
                }
                t11 = (R1004);
                t14 = (t14 + 0x1);
                t11 = (t11 + 0x1);
                R1004 = t11;
                t11 = (t11 - 1);
                *(unsigned char *)((t13 + 0x0)) = ((*(signed char *)((t11 + 0x0))));
                t13 = (t13 + 0x1);
            }
            return write_sys(a4);
        }
        return 0xFFFFFF01;
    }
    return 0xFFFFFF01;
}


