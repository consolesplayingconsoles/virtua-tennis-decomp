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


int kmSetBackGroundRenderState(int a4)
{
    float u4;
    float u6;
    float u8;
    float u10;
    float u12;
    float u14;
    float u16;
    float u18;
    float u20;
    float u22;
    float u24;
    float u26;
    float u28;
    float u30;
    float u32;
    float u34;

    *(unsigned int *)0x8C4607EC = (*(int *)((a4 + 0x90)));
    *(unsigned int *)0x8C4607F0 = (*(int *)((a4 + 0x94)));
    *(unsigned int *)0x8C4607F4 = (*(int *)((a4 + 0x98)));
    *(unsigned int *)0x8C4607F8 = (*(int *)((a4 + 0x9C)));
    u4 = *(float *)((a4 + 0x70));
    u6 = (u4 * 255.0f);
    if (!(2.14748365e+09f > (u4 * 255.0f))) {
        u6 = ((u4 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u8 = *(float *)((a4 + 0x74));
    u10 = (u8 * 255.0f);
    if (!(2.14748365e+09f > (u8 * 255.0f))) {
        u10 = ((u8 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u12 = *(float *)((a4 + 0x78));
    u14 = (u12 * 255.0f);
    if (!(2.14748365e+09f > (u12 * 255.0f))) {
        u14 = ((u12 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u16 = *(float *)((a4 + 0x7C));
    u18 = (u16 * 255.0f);
    if (!(2.14748365e+09f > (u16 * 255.0f))) {
        u18 = ((u16 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(unsigned int *)0x8C4607FC = (((((((int)u6 & 0xFF) << 16) << 8) | (((int)u10 & 0xFF) << 16)) | (((int)u14 & 0xFF) << 8)) | ((int)u18 & 0xFF));
    u20 = *(float *)((a4 + 0x80));
    u22 = (u20 * 255.0f);
    if (!(2.14748365e+09f > (u20 * 255.0f))) {
        u22 = ((u20 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u24 = *(float *)((a4 + 0x84));
    u26 = (u24 * 255.0f);
    if (!(2.14748365e+09f > (u24 * 255.0f))) {
        u26 = ((u24 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u28 = *(float *)((a4 + 0x88));
    u30 = (u28 * 255.0f);
    if (!(2.14748365e+09f > (u28 * 255.0f))) {
        u30 = ((u28 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    u32 = *(float *)((a4 + 0x8C));
    u34 = (u32 * 255.0f);
    if (!(2.14748365e+09f > (u32 * 255.0f))) {
        u34 = ((u32 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(unsigned int *)0x8C460800 = (((((((int)u22 & 0xFF) << 16) << 8) | (((int)u26 & 0xFF) << 16)) | (((int)u30 & 0xFF) << 8)) | ((int)u34 & 0xFF));
    return 0x0;
}


