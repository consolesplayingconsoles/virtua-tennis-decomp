typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
int resetBackColorZ(int, int, int, float);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int, int);
extern float _builtin_sqrtf(float);
int adxf_purge_all(int, int, int, int);
int buIsFormat(int);
int camViewToWorld(int, int, int, int, int, Stk3);
int fadeScreenDraw(float, float);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int get_fat(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int memset(int, int, int);
float motionGetFrame(int);
int nlArcCos(float);
int nlArcTan2(float, float);
int nlDispStripTrnsl(int, int);
float nlInnerProduct(int, int);
int nlLineSetThickness(float);
int nlMatrixMode(int);
int nlOuterProduct(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlSingleLine(int, int, int);
int nlWaitVSync(void);
int nl_cancel_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
int nlsndSeqRequest(int);
int padVibRequest(int, int, int, int, int, int);
int plPic2SeleLoad(void);
int primVertexSet(int, int, int, int, int, Stk3);
int set_event2(int, int);
int sprAdvLoad(void);
int sprSet192Load(void);
int vecAnglesTo(int, int, Stk3, Stk3);
float vecDist(Stk3, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
void staffMorphBlend(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int cpuInTriangle(Stk12 s);
int nlRenderTextureBegin(int a4);
int vmsfs_sysdiskfree(int a4);
int ikSolve2Bone(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int dbgLinePut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
void umpCallScoreB(int a4, int a5);
int primRectInc(int a4, int a5, int a6, int a7, Stk4 p);
void sndPlayerDiveLand(int a4);
int rankInsert2(void);
int _rnd(int a4, int a5);
void SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int primRectIncGradX(int a4, int a5, int a6, int a7, Stk4 p);
int trigger(int a4, int a5);
int FUN_8c1f1906(int a4, int a5, int a6, int a7);
float camMoveBegin(float f4, float f5);
int ndbBuildIndex(int a4, int a5, int a6, int a7);
int stageLoadSelectSprites(float f4);


int vmsfs_sysdiskfree(int a4)
{
    int t42;
    int t1;
    int t3;
    int t25;
    int t5;
    int t17;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t33;
    int t4;

    t42 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) != 0) {
        t1 = vmsio_isready(a4);
        if (t1 == 0) {
            vmsfs_unmount(a4);
            t33 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t25 = 0xFFFFFF01;
            if ((t3 != 0) && (t4 = *(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x8)), t4 != 0)) {
                t5 = buIsFormat(a4);
                t17 = 0xFFFFFF03;
                if ((int)t5 < 0) {
                } else {
                    t6 = t5;
                    t7 = 0x0;
                    t8 = 0x0;
                    for (;;) {
                        t9 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                        t10 = *(int *)((t9 + 0x2C));
                        t11 = *(int *)((t9 + 0x10));
                        if ((int)t8 >= (int)(((int)((unsigned int)((int)((unsigned int)(t11 * (t10 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t11 * (t10 + 0x1)))) ? 1u : 0u))) >> 1)) {
                            break;
                        }
                        t6 = (get_fat(a4, t8));
                        t6 = (unsigned short)t6;
                        t8 = (t8 + 0x1);
                        if (t6 == 0xFFFC) {
                            t7 = (t7 + 0x1);
                        }
                    }
                    t17 = t7;
                }
                t25 = t17;
            }
            t33 = t25;
        }
        t42 = t33;
    }
    return t42;
}


int trigger(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t6;
    int t5;
    int t15;
    int t16;
    int stk[11];


    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)(((*(int *)0x8C47317C) + 0xFB0)));
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        if (((((int)t6 >= 0) ? (0x1 << (t6 & 31)) : ((-(int)t6 & 31) ? ((int)0x1 >> (-(int)t6 & 31)) : ((int)0x1 >> 31))) & (unsigned char)(*(signed char *)(((int)stk + 4)))) != 0) {
            t3 = 0x8C20A81C;
            t3 = (t3 + t6);
            (*(int *)((int)stk + 8)) = t3;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDevice(t3));
            t3 = ((*(int *)((int)stk + 8)));
            t5 = t2;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDeviceInfo(t3));
            t3 = t2;
            t2 = t6;
            *(unsigned char *)((0x8C462154 + t2)) = (*(signed char *)((0x8C462158 + t2)));
            if ((((*(int *)((t3 + 0x0))) & 0x80) != 0) && ((t15 = *(signed char *)((t5 + 0x2)), t2 = t15, t2 == 0) && (t16 = *(signed char *)((t5 + 0x4)), t2 = t16, t2 = (unsigned char)t2, t2 == 8))) {
                t3 = (*(int *)((t5 + 0x8)));
                t2 = (*(signed char *)((t3 + 0x8)));
                t2 = (t2 & 0x4);
                t3 = t2;
                t2 = t6;
                *(unsigned char *)((0x8C462158 + t2)) = t3;
                t4 = (*(signed char *)((0x8C462154 + t2)));
                t4 = (t4 ^ t3);
                t3 = (unsigned char)t3;
                if ((t3 == 0) && (t4 = (unsigned char)t4, t4 != 0)) {
                    break;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t6 = (t6 + 0x1);
            continue;
        }
        t6 = (t6 + 0x1);
    }
    return (t6 + 0x1);
}


