/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXAMP_Destroy(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXPD_GetStat(int);
int ADXPD_SetCoef(int, int, int);
int ADXRNA_Destroy(int);
int ADXSJD_Destroy(int);
int ADXSTM_Close(int);
int ADXT_Stop(int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoExADPCM2(int, int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int BupLoadFile(int, int, int, int);
int resetBackColorZ(int, int, int);
int SJ_SplitChunk(int, int, int, int);
extern void _builtin_prefetch(void *);
int _rsfts(int, int, int);
int _sub(int, int, int, int);
int _umemcmp(int, int, int);
int buIsFormat(int);
int cacheOcbiRange(int, int);
int check_fat_xross(int, int);
int check_file_correct(int, int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int emotKeysDefault(void);
int entryCountJoined(void);
int entryInit(void);
int fileLoadPollSlot(int, float);
int fileLoadStartSlot(int, int, int, int);
int fogSetPreset(int, int);
int get_fat(int, int);
int kmyMemCopy(int, int, int);
int lightSet(int, int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionSetSpeed(int, float);
int mwRnaErrCallFunc(int, ...);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCalcPoint4(int, int);
int nlCreateVertexBuffer(int, int, int, int);
int nlDispStripInit(void);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlFreeCommonTextureAll(void);
int nlInitCommonTexture(int, int, int);
int nlInitMatrix(int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlMatrixMode(int);
int nlMultiMatrix8(int);
int nlMultiPushedMatrix(void);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPrintSetZ(float);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlRenderTextureInit(int, int);
int nlScaleVector(int, int, float);
int nlSetTrnslMode(int, int);
int nlSysMetricsInit(void);
int nlSysSetDirectListTypeLatency2V(int);
int nlSysSetTextureSize(int);
int nlSysSetVertexBufferBaseAddress(int);
int nlSysUseLatency2V(void);
int nlUnitMatrix(void);
int nlWaitVSync(void);
int nlsndPackFreeBG(int);
int nlsndPackLoadBG(int, int, int);
int nlsndPackLoadStatus(void);
int nlsndSystemControl(int, int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int selCursorReset(int);
int selSlot0FlagClear(void);
int setBorderColor(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int sprInitPos(int, int, Stk3);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAtAlpha();
float vecDistXZ(Stk3, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int _its(int a4, int a5, int a6);
int vmsfs_diskfree(int a4, int a5);
int vmsfs_fsettime(int a4, int a5, int a6);
int ballBoyIdleExec(int a4, int a5);
int kmSetBackGroundRenderState(int a4);
int emotVmuLoad(int a4);
int sndPack4Load(int a4, float f4);
int nldispstripTexSub(int a4, int a5);
int vmsfs_fopen(int a4, int a5, int a6);
int ADXB_ExecOneAu16(int a4, int a5, int a6, int a7);
float zoneListSample(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
void sprListPut(int a4, int a5, int a6, Stk3 p, float f4, float f5, float f6);
int windowFrameInit(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
void selCursorPos(int a4, int a5, int a6, int a7, int a8);
int sseleSlotEntry(int a4);
int nlSingleLineSub(int a4, int a5, int a6, int a7);
int sysInitGraphics(void);
int bgTilesInit(int a4, int a5, int a6, int a7);
int panelBodyPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int panelPartBPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
void ADXT_Destroy(int a4);
int vmsfs_xwrite1(int a4, int a5);
int ADXB_ExecOneAiff8(int a4, int a5, int a6, int a7);
int hudBgTileInit(int a4, int a5, int a6, int a7);
int panelPartCPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int mwlRnaAddWrPos(int a4);


int nldispstripTexSub(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t11;
    int t12;
    int t41;
    int t14;
    int t15;
    int t16;
    int t34;
    int t36;
    int t38;
    int t27;
    float u28;
    int stk[20];

    t0 = *(int *)0x8C454FC8;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + (*(int *)0x8C454FC0)));
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmyMemCopy(((t4 & 0x3FFFFFF) | 0xE0000000), (*(int *)0x8C454FC4), t3);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 4))));
    if (t3 == 64) {
        _builtin_prefetch((void *)((*(int *)(((int)stk + 4))) + 0x20));
    }
    t11 = *(int *)0x8C454FC0;
    t12 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t12 + t11)) = ((*(int *)((t12 + t11))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    t41 = t11;
    if ((int)a4 > 0) {
        t14 = t12;
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t14;
            }
            if ((*(int *)0x8C454F3C) != 0) {
                t14 = 0x8C0EEC80;
                nlCalcPoint(t16, (((int)stk + 4) + 0xC));
                u28 = (*(float *)(((int)stk + 24)));
            } else {
                *(float *)(((int)stk + 16)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 20)) = (*(float *)((t16 + 0x4)));
                t27 = t14;
                u28 = (*(float *)((t16 + 0x8)));
            }
            t14 = t27;
            *(float *)(((int)stk + 24)) = (1.0f / u28);
            *(float *)(((int)stk + 28)) = (*(float *)((t16 + 0xC)));
            *(float *)(((int)stk + 32)) = (*(float *)((t16 + 0x10)));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 36)) = t14;
            t34 = *(int *)(((*(int *)0x8C454FC8) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + (*(int *)0x8C454FC0)));
            t14 = t36;
            t14 = ((unsigned int)t14 >> 16);
            t14 = ((unsigned int)t14 >> 8);
            *(unsigned int *)0xFF00003C = t14;
            *(unsigned int *)0xFF000038 = t14;
            t14 = 0x8C1E28E0;
            kmyMemCopy(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = *(int *)0x8C454FC0;
            t15 = (t15 - 1);
            t14 = (*(int *)(((int)stk + 4)));
            *(unsigned int *)((t14 + t38)) = ((*(int *)((t14 + t38))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t41 = t38;
    }
    return t41;
}


int nlSingleLineSub(int a4, int a5, int a6, int a7)
{
    int t15;
    int t16;
    float u17;
    float u20;
    float u23;
    float u24;
    float u27;
    float u30;
    int t32;
    int t33;
    int t34;
    int stk[15];

    *(unsigned int *)(((int)stk + 48)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (nlLineSendHeader(a7));
    nlPushMatrix(0x8C1DCAB8);
    nlMultiMatrix8((*(int *)0x8C450888));
    if ((0x2 & a7) != 0) {
        nlMultiMatrix8((*(int *)0x8C45087C));
    }
    nlMultiPushedMatrix();
    nlCalcPoint4((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x1C));
    nlCalcPoint4((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t15 = nlLineClipNear((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
    if (t15 != 0) {
        t16 = nlLineCalcColor((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC));
        if (t16 == 0) {
            return 0x0;
        }
        u17 = *(float *)(((int)stk + 40));
        u20 = (*(float *)0x8C454C48);
        u20 = u20 + (1.0f / u17) * (*(float *)(((int)stk + 32)));
        *(float *)(((int)stk + 32)) = u20;
        u23 = (*(float *)0x8C454C4C);
        u23 = u23 + (1.0f / u17) * (*(float *)(((int)stk + 36)));
        *(float *)(((int)stk + 36)) = u23;
        u24 = *(float *)(((int)stk + 24));
        u27 = (*(float *)0x8C454C48);
        u27 = u27 + (1.0f / u24) * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 16)) = u27;
        u30 = (*(float *)0x8C454C4C);
        u30 = u30 + (1.0f / u24) * (*(float *)(((int)stk + 20)));
        *(float *)(((int)stk + 20)) = u30;
        t32 = nlLineDrawThick((*(int *)(((int)stk + 12))), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x2C));
        t33 = *(int *)0x8C42445C;
        t34 = t33;
        if ((a7 & 0x1) != 0) {
            t34 = (t33 + 0x8);
        }
        *(unsigned int *)((t34 + 0x0)) = (((*(int *)((t34 + 0x0))) & 0xFC000000) | (t32 & 0x3FFFFFF));
        return 0x1;
    }
    return 0x0;
}


