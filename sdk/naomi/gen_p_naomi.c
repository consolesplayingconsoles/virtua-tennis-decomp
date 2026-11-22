/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_EntrySte(int, int, int, int);
int ADXPD_Start(int);
int nlAddVector3op(int, int, int);
int set_event2(int, int);
int vecMake(float, float, float);
int padLcdLine(int, int, int, int);
int padLcdProject(int, int);
int sprTexLoad(int);
int sprSet163Setup(int);
int sprSet173Setup(int);
int strmVoicePlay(int, int);
int sprListPut(int, int, int, float, float, float);
int syCachePurgeAll(void);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern void _builtin_st_ext(float (*)[4]);
int fileLoadCloseSlot(int);
int fileLoadPollSlot(int);
int fileLoadStartSlot(int, int, int, int);
int kmyiInitializeDriverObject(int, int);
int memset(int, int, int);
int mwlRnaExecSvrHndl(int);
int nlArcTan(float);
int nlCalcPoint(int, int);
int nlLength(int, int);
int nlLoadMatrix(int);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlsndSeqRequest(int);
int ovLockCs_8c200114(int);
int ovUnlockCs_8c20012c(int);
int set_event(int, int);
void _lsfts(int a4, int a5, int a6);
int titleSprBlinkPut(float f4);
int nlSetPaletteMap(int a4, int a5);
int nlArcSin(float f4);
int nlLineCalcFogA(int a4);
int kmytex_FBAllocEntry(void);
int mtxGetPos(int a4, int a5, int a6);
int evSprAnimStart(int a4, int a5, float f4);
int commonViewInit(void);
int nlSysMetricsInit(void);
int nlChgModelPolyAttrOn(int a4);
int kmSetFogTable(int a4);
int mwRnaExecServer(void);
int vecDistXZf(float f4, float f5, float f6, float f7);
int sprCellInit(int a4, int a5);
int padDirAny(int a4);
int strmCallName(int a4);
int SJUNI_GetNumData(int a4, int a5);
int uniformSlotReset(int a4, int a5);
int evCrowdClapStart(void);
int ambDimStart(int a4);
int exprPlayC(int a4, int a5);
int nlSysSetDirectListTypeLatency2V(int a4);
void syCacheFinish_P2_(void);
int entrySetSlot(int a4, int a5, int a6, int a7);
float nlMultiMatrixRevOrder(int a4);
int nlPopMatrix(int a4);
int nlsndStreamStart(int a4);
int SJMEM_PutChunk(int a4, int a5, int a6);
int kmyWritePaletteDMA(void);
int syG2DmaSuspend(int a4);
int dbgMenuSetValue(int a4, int a5, int a6);
int emotKeyCopy(int a4, int a5, int a6);
int sprSet115Load(void);
int seNetHit(void);
int _add(int a4, int a5, int a6);
int _pd_peripheral_set_null(int a4);
int kmSetColorClampValue(int a4, int a5, int a6, int a7, int a8, int a9);
int ADXAMP_Init(void);
void padLcdLineTo3D(int a4);
void nlQuickInvertMatrix(void);
void camGetPos(int a4, int a5, int a6, int a7, int a8);
int kmyInitializeDriver(void);
int syIntAdrChk_getchar(void);
int shadowVolExtrude(int a4, int a5);
float nlFloor(float f4);
void nlLoadRechangeMatrix(int a4);
int SearchUsed(int a4, int a5);
int get_data(int a4);
int dbgMenuSetTitle(int a4, int a5, int a6);
int sys_init(void);
int ADXB_EvokeExpandSte(int a4, int a5);
int dbgMenuDrawPage(void);
int sprSet163Load(int a4);
int sprSet173Load(int a4);
int resCautionRead(int a4);
float nlMultiMatrixRevOrder8(int a4);
float nlLineClipPoint(int a4, int a5, int a6);
int _pd_peripheral_error(int a4, int a5, int a6);


int nlSysMetricsInit(void)
{
    int t0;
    float u1;

    _builtin_set_imask(0xE);
    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (0xFFFFFFFE & t0);
    *(unsigned char *)0xFFD80000 = 0x1;
    *(unsigned short *)0xFFD80010 = 0x2;
    *(unsigned int *)0xFFD80008 = 0xFFFFFFFF;
    *(unsigned int *)0xFFD8000C = 0xFFFFFFFF;
    *(unsigned char *)0xFFD80004 = (t0 | 0x1);
    u1 = *(float *)0x8C0EBD2C;
    *(float *)0x8C424490 = u1;
    _builtin_set_imask(0x0);
    *(unsigned int *)0x8C44F4AC = 0x1E;
    return 0x1E;
}


float nlMultiMatrixRevOrder(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
    u4 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u5 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u7 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u8 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u9 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u11 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u12 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u13 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u15 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    u16[0] = u0;
    u16[1] = u1;
    u16[2] = u2;
    u16[3] = u3;
    u16[4] = u4;
    u16[5] = u5;
    u16[6] = u6;
    u16[7] = u7;
    u16[8] = u8;
    u16[9] = u9;
    u16[10] = u10;
    u16[11] = u11;
    u16[12] = u12;
    u16[13] = u13;
    u16[14] = u14;
    u16[15] = u15;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u0;
    u19[1] = u1;
    u19[2] = u2;
    u19[3] = u3;
    u19[4] = u4;
    u19[5] = u5;
    u19[6] = u6;
    u19[7] = u7;
    u19[8] = u8;
    u19[9] = u9;
    u19[10] = u10;
    u19[11] = u11;
    u19[12] = u12;
    u19[13] = u13;
    u19[14] = u14;
    u19[15] = u15;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u0;
    u21[1] = u1;
    u21[2] = u2;
    u21[3] = u3;
    u21[4] = u4;
    u21[5] = u5;
    u21[6] = u6;
    u21[7] = u7;
    u21[8] = u8;
    u21[9] = u9;
    u21[10] = u10;
    u21[11] = u11;
    u21[12] = u12;
    u21[13] = u13;
    u21[14] = u14;
    u21[15] = u15;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u0;
    u23[1] = u1;
    u23[2] = u2;
    u23[3] = u3;
    u23[4] = u4;
    u23[5] = u5;
    u23[6] = u6;
    u23[7] = u7;
    u23[8] = u8;
    u23[9] = u9;
    u23[10] = u10;
    u23[11] = u11;
    u23[12] = u12;
    u23[13] = u13;
    u23[14] = u14;
    u23[15] = u15;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u0;
}

int nlPopMatrix(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    float u8;
    float u9;
    float u11;
    float u12;
    float u14;
    float u15;
    float u17;
    float u18;
    float u20;
    float u21;
    float u23;
    float u24;
    float u26;
    float u27;
    float u29;
    float u30;
    float u10[16];
    float u13[16];
    float u16[16];
    float u19[16];
    float u22[16];
    float u25[16];
    float u28[16];
    float u31[16];

    t0 = a4;
    if ((int)a4 <= 0) {
        t0 = 0x1;
    }
    t2 = *(short *)0x8C45085C;
    t3 = *(short *)0x8C45085E;
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = *(int *)0x8C450860;
    *(unsigned short *)0x8C45085C = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0x8C450864 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    u8 = *(float *)(((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0));
    u9 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u10);
    u10[0] = u9;
    u10[1] = u8;
    _builtin_ld_ext((float (*)[4])u10);
    u11 = *(float *)((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0));
    u12 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u13);
    u13[2] = u12;
    u13[3] = u11;
    _builtin_ld_ext((float (*)[4])u13);
    u14 = *(float *)(((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u16);
    u16[4] = u15;
    u16[5] = u14;
    _builtin_ld_ext((float (*)[4])u16);
    u17 = *(float *)((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0));
    u18 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u19);
    u19[6] = u18;
    u19[7] = u17;
    _builtin_ld_ext((float (*)[4])u19);
    u20 = *(float *)(((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u21 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u22);
    u22[8] = u21;
    u22[9] = u20;
    _builtin_ld_ext((float (*)[4])u22);
    u23 = *(float *)((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u24 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u25);
    u25[10] = u24;
    u25[11] = u23;
    _builtin_ld_ext((float (*)[4])u25);
    u26 = *(float *)(((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u27 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u28);
    u28[12] = u27;
    u28[13] = u26;
    _builtin_ld_ext((float (*)[4])u28);
    u29 = *(float *)((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u30 = *(float *)(((((((((((t6 + ((unsigned int)(t4 << 8) >> 2)) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u31);
    u31[14] = u30;
    u31[15] = u29;
    _builtin_ld_ext((float (*)[4])u31);
    return ((((int)t2 >= (int)t0)) ? 1 : 0);
}

int nlsndStreamStart(int a4)
{
    int t0;
    int t8;
    int t1;
    int t3;

    t0 = *(signed char *)((0x8C454CF4 + ((short)a4 * (short)0x1C)));
    t8 = t0;
    if (t0 == 1) {
        t1 = *(signed char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1));
        t3 = t1;
        if (t1 == 0) {
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x1A1));
            *(unsigned char *)(((((short)a4 * (short)0x1C) + 0x8C454CF4) + 0x1)) = 0x1;
            t3 = 0x1;
        }
        t8 = t3;
    }
    return t8;
}


float nlFloor(float f4)
{
    float u0;
    float a;
    int t4;

    u0 = *(float *)0x8C0ED0E8;
    a = (f4 < 0.0f ? -f4 : f4);
    if (u0 > a) {
        t4 = (int)a;
        if (0.0f > f4) {
            if ((a - (float)t4) == 0.0f) {
                return f4;
            }
            return (float)(-1 - t4);
        }
        return (float)t4;
    }
    return f4;
}


float nlMultiMatrixRevOrder8(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];
    float u17[4];
    float u18[16];
    float u19[16];
    float u20[4];
    float u21[16];
    float u22[4];
    float u23[16];
    float u24[4];
    float u25[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x0) + 4));
    u2 = *(float *)(((a4 + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u4 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u5 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u6 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u7 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u9 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u11 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u13 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u15 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u16[0] = u1;
    u16[1] = u0;
    u16[2] = u3;
    u16[3] = u2;
    u16[4] = u5;
    u16[5] = u4;
    u16[6] = u7;
    u16[7] = u6;
    u16[8] = u9;
    u16[9] = u8;
    u16[10] = u11;
    u16[11] = u10;
    u16[12] = u13;
    u16[13] = u12;
    u16[14] = u15;
    u16[15] = u14;
    _builtin_st_ext((float (*)[4])u18);
    u17[0] = u18[0];
    u17[1] = u18[1];
    u17[2] = u18[2];
    u17[3] = u18[3];
    _builtin_ld_ext((float (*)[4])u16);
    _builtin_ftrv(u17, u17);
    u19[0] = u1;
    u19[1] = u0;
    u19[2] = u3;
    u19[3] = u2;
    u19[4] = u5;
    u19[5] = u4;
    u19[6] = u7;
    u19[7] = u6;
    u19[8] = u9;
    u19[9] = u8;
    u19[10] = u11;
    u19[11] = u10;
    u19[12] = u13;
    u19[13] = u12;
    u19[14] = u15;
    u19[15] = u14;
    u20[0] = u18[4];
    u20[1] = u18[5];
    u20[2] = u18[6];
    u20[3] = u18[7];
    _builtin_ld_ext((float (*)[4])u19);
    _builtin_ftrv(u20, u20);
    u21[0] = u1;
    u21[1] = u0;
    u21[2] = u3;
    u21[3] = u2;
    u21[4] = u5;
    u21[5] = u4;
    u21[6] = u7;
    u21[7] = u6;
    u21[8] = u9;
    u21[9] = u8;
    u21[10] = u11;
    u21[11] = u10;
    u21[12] = u13;
    u21[13] = u12;
    u21[14] = u15;
    u21[15] = u14;
    u22[0] = u18[8];
    u22[1] = u18[9];
    u22[2] = u18[10];
    u22[3] = u18[11];
    _builtin_ld_ext((float (*)[4])u21);
    _builtin_ftrv(u22, u22);
    u23[0] = u1;
    u23[1] = u0;
    u23[2] = u3;
    u23[3] = u2;
    u23[4] = u5;
    u23[5] = u4;
    u23[6] = u7;
    u23[7] = u6;
    u23[8] = u9;
    u23[9] = u8;
    u23[10] = u11;
    u23[11] = u10;
    u23[12] = u13;
    u23[13] = u12;
    u23[14] = u15;
    u23[15] = u14;
    u24[0] = u18[12];
    u24[1] = u18[13];
    u24[2] = u18[14];
    u24[3] = u18[15];
    _builtin_ld_ext((float (*)[4])u23);
    _builtin_ftrv(u24, u24);
    _builtin_st_ext((float (*)[4])u25);
    u25[0] = u17[0];
    u25[1] = u17[1];
    u25[2] = u17[2];
    u25[3] = u17[3];
    u25[4] = u20[0];
    u25[5] = u20[1];
    u25[6] = u20[2];
    u25[7] = u20[3];
    u25[8] = u22[0];
    u25[9] = u22[1];
    u25[10] = u22[2];
    u25[11] = u22[3];
    u25[12] = u24[0];
    u25[13] = u24[1];
    u25[14] = u24[2];
    u25[15] = u24[3];
    _builtin_ld_ext((float (*)[4])u25);
    return u1;
}

float nlLineClipPoint(int a4, int a5, int a6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)0x8C458E3C;
    u2 = *(float *)((a5 + 0x8));
    *(float *)((a6 + 0x8)) = u1;
    u3 = *(float *)((a4 + 0x0));
    u4 = *(float *)((a5 + 0x0));
    *(float *)((a6 + 0x0)) = (u3 + ((u1 - u0) / (u2 - u0)) * (u4 - u3));
    u5 = *(float *)((a5 + 0x4));
    u6 = *(float *)((a4 + 0x4));
    *(float *)((a6 + 0x4)) = (u6 + ((u1 - u0) / (u2 - u0)) * (u5 - u6));
    return ((u1 - u0) / (u2 - u0));
}


void nlLoadRechangeMatrix(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16[16];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u3 = *(float *)((((a4 + 0x4) + 0x8) + 0x0));
    u4 = *(float *)(((((a4 + 0x4) + 0x8) + 0x4) + 0x0));
    u5 = *(float *)((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u6 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u7 = *(float *)(((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u8 = *(float *)((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u9 = *(float *)(((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u10 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u11 = *(float *)((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u12 = *(float *)(((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
    u13 = *(float *)((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
    u14 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    u15 = *(float *)(((((((((((((a4 + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
    _builtin_st_ext((float (*)[4])u16);
    u16[0] = u3;
    u16[1] = u0;
    u16[2] = u1;
    u16[3] = (-u2);
    u16[4] = u7;
    u16[5] = u4;
    u16[6] = u5;
    u16[7] = (-u6);
    u16[8] = u11;
    u16[9] = u8;
    u16[10] = u9;
    u16[11] = (-u10);
    u16[12] = u15;
    u16[13] = u12;
    u16[14] = u13;
    u16[15] = (-u14);
    _builtin_ld_ext((float (*)[4])u16);
}

