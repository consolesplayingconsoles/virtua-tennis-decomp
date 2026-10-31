/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char gNlSoundStreams[];
extern char g_0c2aedbc[];
extern char g_0c2b31dc[];
extern char g_0c2b7bdc[];
extern char g_0c2b92e8[];
extern char g_0c2fd440[];
extern char g_0c2fd444[];
extern char padPeri[];

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

void _lsfts(int a4, int a5, int a6)
{
    int t11;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if ((short)(0x8 - a6) != 0) {
        t11 = 0x0;
        if ((int)(a5 - 1) >= 0) {
            t0 = (a4 + (a5 - 1));
            t1 = (a5 - 1);
            t2 = 0x0;
            for (;;) {
                t3 = *(signed char *)((t0 + 0x0));
                t4 = *(signed char *)((t0 + 0x0));
                t1 = (t1 - 1);
                *(unsigned char *)((t0 + 0x0)) = (((int)(short)a6 >= 0) ? (t3 << ((short)a6 & 31)) : ((-(int)(short)a6 & 31) ? ((unsigned int)t3 >> (-(int)(short)a6 & 31)) : 0));
                t5 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t5 | t2);
                t2 = (unsigned char)(t4 & (((int)(short)(0x8 - a6) >= 0) ? (0xFF << ((short)(0x8 - a6) & 31)) : ((-(int)(short)(0x8 - a6) & 31) ? ((int)0xFF >> (-(int)(short)(0x8 - a6) & 31)) : ((int)0xFF >> 31))));
                t2 = (((int)(-(short)(0x8 - a6)) >= 0) ? (t2 << ((-(short)(0x8 - a6)) & 31)) : ((-(int)(-(short)(0x8 - a6)) & 31) ? ((unsigned int)t2 >> (-(int)(-(short)(0x8 - a6)) & 31)) : 0));
                t0 = (t0 - 1);
                if ((int)t1 < 0) {
                    break;
                }
            }
            t11 = t2;
        }
        if ((unsigned char)t11 != 0) {
            return;
        }
        return;
    }
}







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
    *(float *)(int)g_0c2aedbc = u1;
    _builtin_set_imask(0x0);
    *(unsigned int *)0x8C44F4AC = 0x1E;
    return 0x1E;
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

    t0 = *(int *)(((a4 << 2) + (int)padPeri));
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

    t0 = *(int *)((((a4 * 0xD78) + (int)Player) + 0xC58));
    if ((int)t0 <= (int)0x11) {
        t1 = *(int *)0x8C1891E8;
        t2 = *(int *)((0x8C1D4770 + (t1 << 2)));
        t3 = *(int *)(((0xC58 + ((a4 * 0xD78) + (int)Player)) + 0x0));
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
    t2 = *(short *)(int)g_0c2b31dc;
    t3 = *(short *)0x8C45085E;
    t4 = (t2 - t0);
    if ((int)t2 < (int)t0) {
        t4 = 0x0;
    }
    t6 = *(int *)0x8C450860;
    *(unsigned short *)(int)g_0c2b31dc = t4;
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

    t0 = *(signed char *)(((int)gNlSoundStreams + ((short)a4 * (short)0x1C)));
    t8 = t0;
    if (t0 == 1) {
        t1 = *(signed char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1));
        t3 = t1;
        if (t1 == 0) {
            nlsndSeqRequest((((((short)a4 << 8) << 2) << 2) + 0x1A1));
            *(unsigned char *)(((((short)a4 * (short)0x1C) + (int)gNlSoundStreams) + 0x1)) = 0x1;
            t3 = 0x1;
        }
        t8 = t3;
    }
    return t8;
}


int kmyWritePaletteDMA(void)
{
    return 0xEEEE;
}

int syG2DmaSuspend(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0x8C20CA24;
    t3 = *(int *)((t2 + 0x0));
    *(unsigned int *)((((((t1 << 2) << 2) << 1) + t3) + 0x1C)) = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
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


int _add(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    if ((int)(a6 - 1) >= 0) {
        t0 = (a4 + (a6 - 1));
        t1 = (a5 + (a6 - 1));
        t2 = (a6 - 1);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t3);
            t6 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t3) / (int)0x100);
            t2 = (t2 - 1);
            t3 = t6;
            t1 = (t1 - 1);
            t0 = (t0 - 1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t8 = t6;
    }
    return t8;
}

int _pd_peripheral_set_null(int a4)
{
    int t0;

    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    t0 = *(int *)(int)g_0c2b92e8;
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        *(unsigned int *)((a4 + 0x14)) = 0x0;
    } else {
        *(unsigned int *)((a4 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        *(unsigned int *)((a4 + 0x10)) = 0xFFFFFFFF;
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x18)) = 0x0;
    *(unsigned short *)((a4 + 0x1A)) = 0x0;
    *(unsigned short *)((a4 + 0x22)) = 0x0;
    *(unsigned short *)((a4 + 0x20)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x8C20967C;
    return 0x0;
}







int syIntAdrChk_getchar(void)
{
    int t0;
    int t1;
    int t2;
    int t9;
    int t10;
    int t11;
    int t16;
    int t7;
    int t3;

    t0 = *(int *)(int)g_0c2fd444;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t1 = *(int *)0x8C476474;
            t2 = *(signed char *)(((t1 + 0x1C) + 0x0));
            if (((unsigned char)t2 & 0x4) == 4) {
                t3 = 0xD;
            }
            t7 = t3;
        }
        t16 = t7;
    } else {
        t9 = *(int *)(int)g_0c2fd440;
        for (;;) {
            t10 = *(short *)((t9 + 0x1C));
            if ((unsigned char)t10 != 0) {
                break;
            }
        }
        t11 = *(signed char *)(((t9 + 0x14) + 0x0));
        t16 = t11;
    }
    return t16;
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
    u1 = *(float *)(int)g_0c2b7bdc;
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

int _pd_peripheral_error(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a6 + 0x4));
    if ((unsigned char)t0 != 0xFC) {
        if ((unsigned char)t0 != 0xFF) {
            if ((unsigned char)t0 != 8) {
                if ((unsigned char)t0 != 5) {
                    if ((unsigned char)t0 != 6) {
                        if ((unsigned char)t0 != 0) {
                            return 0xFF000000;
                        }
                        return 0x0;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0xFF0000FC;
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


