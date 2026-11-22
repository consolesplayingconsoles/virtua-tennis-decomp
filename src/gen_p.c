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


int evSprAnimStart(int a4, int a5, float f4)
{
    int t0;
    float u1;
    float u2;
    float u3;

    t0 = set_event2(0x24, 0x8C0D9F74);
    u1 = *(float *)0x8C0DA2E8;
    u2 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x18)) = (int)((f4 * u1) / u2);
    u3 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((f4 * u1) / u3);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x20)) = a5;
    return 0x8;
}

int commonViewInit(void)
{
    *(unsigned int *)0x8C40C5D4 = 0x8B;
    *(unsigned int *)0x8C40C5FC = 0x0;
    *(float *)0x8C40C5D8 = 320.0f;
    *(float *)0x8C40C5DC = 240.0f;
    *(float *)0x8C40C5E0 = 1.0f;
    *(float *)0x8C40C5E4 = 1.0f;
    *(float *)0x8C40C5E8 = 1.0f;
    *(float *)0x8C40C5EC = 0.0f;
    *(float *)0x8C40C5F0 = 0.0f;
    *(float *)0x8C40C5F4 = 1.0f;
    *(float *)0x8C40C5F8 = 1.0f;
    *(float *)0x8C40C600 = 1.0f;
    *(unsigned int *)0x8C40C604 = 0xFFFFFFFF;
    *(unsigned int *)0x8C40C608 = 0xA;
    return 0x2C;
}


int sprCellInit(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 320.0f;
    *(float *)((a4 + 0x8)) = 240.0f;
    *(float *)((a4 + 0xC)) = 1.0f;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 1.0f;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x10)) = 1.0f;
    *(float *)((a4 + 0x14)) = 1.0f;
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return 0x2C;
}

int padDirAny(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0x8C29B898));
    t1 = *(int *)((t0 + 0x8));
    if ((t1 & 0x10) == 0) {
        if ((0x20 & t1) == 0) {
            if ((0x40 & t1) == 0) {
                if ((0x80 & t1) == 0) {
                    t2 = *(int *)((t0 + 0x10));
                    if ((t2 & 0x10) == 0) {
                        t3 = *(int *)((t0 + 0x10));
                        if ((t3 & 32) == 0) {
                            t4 = *(int *)((t0 + 0x10));
                            if ((t4 & 64) == 0) {
                                t5 = *(int *)((t0 + 0x10));
                                if ((t5 & 128) != 0) {
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int strmCallName(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xC58));
    if ((int)t0 <= (int)0x11) {
        t1 = *(int *)0x8C1891E8;
        t2 = *(int *)((0x8C1D4770 + (t1 << 2)));
        t3 = *(int *)(((0xC58 + ((a4 * 0xD78) + 0x8C287D84)) + 0x0));
        t4 = *(int *)((((t3 << 2) + (0x8C125FB8 + (((((t2 << 2) << 1) + t2) << 2) << 1))) + 0x0));
        return strmVoicePlay(0x9, t4);
    }
    return 0xC58;
}


int uniformSlotReset(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)(((a4 << 2) + 0x8C3438D8)) = 0x1;
    t0 = 0x0;
    t1 = ((a4 * 0x70) + 0x8C1AF8A4);
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((int)t0 >= (int)0x1C) {
            break;
        }
    }
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x8)) = a5;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0xC)) = 0x0;
    *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DA58) + 0x10)) = 0x1;
    return 0x1C;
}


int ambDimStart(int a4)
{
    int t0;

    t0 = set_event(0x1C, 0x8C08785E);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    *(float *)((t0 + 0x18)) = 90.0f;
    *(unsigned int *)0x8C301BD8 = (0x41A + a4);
    *(unsigned int *)0x8C301BDC = (0x460 + a4);
    *(unsigned int *)0x8C301BE0 = (0x4B0 + a4);
    *(unsigned int *)0x8C301BE4 = (a4 + 0x53C);
    return 0x18;
}

int exprPlayC(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)(((((a5 + 0x4B) * 0x270) + 0x8C34B4F4) + 0x268)) = 0x0;
    *(unsigned int *)(((((a5 + 0x4B) * 0x270) + 0x8C34B4F4) + 0x26C)) = 0x0;
    t0 = set_event(0x20, 0x8C0891EC);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    t1 = *(int *)((a4 + 0xC58));
    *(unsigned int *)((t0 + 0x1C)) = t1;
    *(unsigned int *)((t0 + 0x18)) = (a5 + 0x4B);
    return 0xC58;
}


int entrySetSlot(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x0)) = a5;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x4)) = a7;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x8)) = a6;
    *(unsigned int *)(((0x8C343264 + (a4 * 0x38)) + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((((a4 * 0x38) + 0x8C343264) + 0x34)) = 0xFFFFFFFF;
    *(unsigned int *)((((a4 << 2) + 0x8C343724) + 0x0)) = 0x0;
    return ((a4 * 0x38) + 0x8C343264);
}


int emotKeyCopy(int a4, int a5, int a6)
{
    int t0;
    float u1;
    int t2;

    t0 = *(int *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x0));
    u1 = *(float *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x8));
    t2 = *(int *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x4));
    *(unsigned int *)(((a4 + (((a6 << 1) + a6) << 2)) + 0x0)) = t0;
    *(float *)(((a4 + (((a6 << 1) + a6) << 2)) + 0x8)) = u1;
    *(unsigned int *)((((((a6 << 1) + a6) << 2) + a4) + 0x4)) = t2;
    return 0x8;
}

int sprSet115Load(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED0C;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124808;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            sprTexLoad(t3);
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)0x7) {
                break;
            }
        }
        t5 = *(int *)0x8C1AED0C;
        *(unsigned int *)0x8C1AED0C = (t5 + 0x1);
    }
    return ((int (*)(void))(0x8C0C4BF0))();
}


int dbgMenuSetTitle(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = a5;
    t1 = ((a4 * 0x1F0) + 0x8C286030);
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x9) {
            break;
        }
    }
    t4 = a6;
    if ((int)a6 > (int)0x14) {
        t4 = 0x14;
    }
    *(unsigned int *)((((a4 * 0x1F0) + 0x8C285E4C) + 0x1E0)) = t4;
    return 0x1E0;
}


int sprSet163Load(int a4)
{
    int t0;
    int t4;
    int t1;

    t0 = *(int *)(((a4 << 2) + 0x8C1AED20));
    t4 = 0x8C1AED20;
    if (t0 == 0) {
        t1 = *(int *)(((a4 << 2) + 0x8C124884));
        sprTexLoad(t1);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED20)) = 0x1;
        sprSet163Setup(a4);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED48)) = 0x1;
        t4 = 0x8C1AED48;
    }
    return t4;
}

int sprSet173Load(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)(((a4 << 2) + 0x8C1AED70));
    if (t0 == 0) {
        t1 = *(int *)(((a4 << 2) + 0x8C1248CC));
        sprTexLoad(t1);
        *(unsigned int *)(((a4 << 2) + 0x8C1AED70)) = 0x1;
        return sprSet173Setup(a4);
    }
    return 0x8C1AED70;
}

int resCautionRead(int a4)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C34A368;
    if (t0 == 0) {
        *(unsigned int *)0x8C34A368 = 0x1;
        fileLoadCloseSlot(0x4);
        t2 = *(int *)(((a4 << 2) + 0x8C1DC5CC));
        fileLoadStartSlot(0xCBE0000, t2, 0x0, 0x4);
    }
    return fileLoadPollSlot(0x4);
}


int seNetHit(void)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t5;

    t0 = *(int *)0x8C38BA70;
    if (t0 != 0) {
        t1 = *(int *)0x8C38BA74;
        if (t1 != 0) {
            u2 = *(float *)0x8C291F60;
            u3 = (-u2);
            if (!(0.0f > u2)) {
                u3 = u2;
            }
            t5 = 0x301A9;
            if (!(0.200000003f > u3)) {
                t5 = 0x101A9;
            }
            return nlsndSeqRequest(t5);
        }
        return 0;
    }
    return 0;
}


