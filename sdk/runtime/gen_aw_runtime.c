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


int _rnd(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t22;
    int t6;
    int t17;
    int t13;
    int t38;
    int t26;
    int t27;
    int t30;
    int t35;
    int t8;
    int t9;
    int stk[7];

    t0 = (int)((int)a5 / (int)0x8);
    t1 = (int)((int)a5 % (int)0x8);
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31)));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1);
    *(unsigned char *)(((int)stk + 8)) = ((unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1) >> 1);
    t2 = (int)((int)(a5 - 1) / (int)0x8);
    t3 = (int)((int)(a5 - 1) % (int)0x8);
    t22 = 0x0;
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (*(int *)(((int)stk + 4)))) != 0) {
        t6 = *(signed char *)(((t0 + a4) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)t6;
        t17 = 0x1;
        if ((((unsigned char)t6 & (*(int *)(((int)stk + 12)))) == 0) && (t8 = *(signed char *)(((int)stk + 8)), t9 = *(int *)(((int)stk + 4)), ((unsigned char)t8 & t9) == 0)) {
            t13 = 0x0;
            if (((unsigned char)(*(signed char *)(((t2 + a4) + 0x0))) & (unsigned char)(((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)))) != 0) {
                t13 = 0x1;
            }
            t17 = t13;
        }
        t22 = t17;
    }
    t38 = 0x0;
    if (t22 == 1) {
        t26 = (t2 + a4);
        t27 = (((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)));
        for (;;) {
            if ((((unsigned char)(*(signed char *)((t26 + 0x0))) & (unsigned char)t27) != 0) && ((unsigned int)t26 >= (unsigned int)a4)) {
                t30 = (~t27);
                t27 = (t27 << 1);
                *(unsigned char *)((t26 + 0x0)) = ((*(signed char *)((t26 + 0x0))) & t30);
                if ((unsigned char)t27 == 0) {
                    t27 = 0x1;
                    t26 = (t26 - 1);
                }
                continue;
            }
            break;
        }
        t35 = 0x1;
        if ((unsigned int)t26 >= (unsigned int)a4) {
            *(unsigned char *)((t26 + 0x0)) = ((*(signed char *)((t26 + 0x0))) | t27);
            t35 = 0x0;
        }
        t38 = t35;
    }
    return t38;
}


