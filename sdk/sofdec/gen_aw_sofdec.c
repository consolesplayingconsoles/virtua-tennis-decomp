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


void SJUNI_GetChunk(int a4, int a5, int a6, int a7)
{
    int t3;
    int t31;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a6;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        *(unsigned int *)(((int)stk + 8)) = (SJUNI_Lock());
        t3 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
        if (t3 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x10)) = *(struct mv2 *)((t3 + 0x8)); }
            if ((int)(*(int *)(((int)stk + 24))) <= (int)(*(int *)(((int)stk + 4)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 4) + 0x10)); }
                *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = (*(int *)((t3 + 0x0)));
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x14)));
                *(unsigned int *)((a4 + 0x14)) = t3;
            } else {
                if ((*(signed char *)((a4 + 0x5))) == 1) {
                    SJ_SplitChunk((((int)stk + 4) + 0x10), (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8));
                    { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 4) + 0x10)); }
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t3 + 0x8)) = *(struct mv2 *)((((int)stk + 4) + 0x8)); }
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    *(unsigned int *)((a7 + 0x4)) = 0x0;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        }
        SJUNI_Unlock(a4, (*(int *)(((int)stk + 8))));
    } else {
        if ((*(int *)((a4 + 0x28))) != 0) {
            t31 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
}

int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t4;
    int t14;
    int t21;
    int stk[9];

    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    *(unsigned char *)((a10 + 0x0)) = (((*(signed char *)((a4 + 0x9))) & 0x3) + 0x1);
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)(*(short *)((a4 + 0x2A)));
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x8)));
    t4 = *(signed char *)(((int)stk + 4));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if (((unsigned char)t4 == 2) || ((unsigned char)t4 == 3)) {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                *(unsigned int *)((a12 + 0x0)) = ((*(int *)(((a4 + 0xC) + 0x0))) << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            *(unsigned int *)((a12 + 0x0)) = (*(int *)(((a4 + 0xC) + 0x0)));
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t14 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t14 + (unsigned int)0x0)) + ((((int)0x0 > (int)t14)) ? 1u : 0u))) >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t21 = *(int *)(((a4 + 0xC) + 0x0));
    *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t21 + (unsigned int)0x0)) + ((((int)0x0 > (int)t21)) ? 1u : 0u))) >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}


int FUN_8c1f1906(int a4, int a5, int a6, int a7)
{
    int t1;

    adxf_purge_all(a4, a5, a6, a7);
    *(unsigned int *)0xFF00001C = ((a4 & 0xFFFFF7FF) | 0x800);
    t1 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = ((t1 & 0xFFFFFFF7) | 0x8);
    return ((t1 & 0xFFFFFFF7) | 0x8);
}


