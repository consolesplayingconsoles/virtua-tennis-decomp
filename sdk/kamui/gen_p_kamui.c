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


int kmyWritePaletteDMA(void)
{
    return 0xEEEE;
}


int SearchUsed(int a4, int a5)
{
    int t0;
    int t3;
    int t4;
    int t12;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0x8C20C9E0;
    if ((unsigned int)a4 < (unsigned int)t0) {
        *(unsigned short *)((a5 + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a5 + 0x0)) = 0x1;
    }
    t3 = *(short *)((a5 + 0x0));
    t4 = *(int *)((((t3 << 2) << 2) + 0x8C20C9EC));
    t12 = 0x0;
    if (t4 != 0) {
        t5 = t4;
        t6 = 0x0;
        for (;;) {
            t7 = *(int *)((t5 + 0xC));
            if (t7 == a4) {
                t6 = t5;
                t5 = 0x0;
            } else {
                t8 = *(int *)((t5 + 0x8));
                t5 = t8;
            }
            if (t5 == 0) {
                break;
            }
        }
        t12 = t6;
    }
    return t12;
}


