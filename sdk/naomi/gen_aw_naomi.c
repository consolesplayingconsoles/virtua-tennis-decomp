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


int nlRenderTextureBegin(int a4)
{
    int t1;
    int t23;
    int t8;
    int t13;
    int t14;

    t1 = *(int *)0x8C44FBEC;
    if ((int)(*(int *)0x8C44FBF4) >= 0) {
        *(unsigned int *)0x8C44FBF4 = 0xFFFFFFFF;
        nlSetWindowSize((*(float *)0x8C44FBF8), (*(float *)0x8C44FBFC), (*(float *)0x8C44FC00), (*(float *)0x8C44FC04));
        t8 = (nl_cancel_PixelClipping());
    }
    if (((unsigned int)a4 <= (unsigned int)(*(int *)0x8C44FBF0)) && ((t13 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0)), (int)t13 >= 0) && (t14 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x4)), (int)t14 >= 0))) {
        *(unsigned int *)0x8C44FBF4 = a4;
        *(float *)0x8C44FBF8 = (*(float *)0x8C450B20);
        *(float *)0x8C44FBFC = (*(float *)0x8C450B24);
        *(float *)0x8C44FC00 = (*(float *)0x8C450B18);
        *(float *)0x8C44FC04 = (*(float *)0x8C450B1C);
        nlSetWindowSize(0.0f, 0.0f, (float)(*(short *)(((t1 + ((a4 << 2) << 2)) + 0xC))), (float)(*(short *)(((t1 + ((a4 << 2) << 2)) + 0xE))));
        nl_cancel_PixelClipping();
        t23 = *(signed char *)0x8C450858;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        return nlMatrixMode(t23);
    }
    return t8;
}


