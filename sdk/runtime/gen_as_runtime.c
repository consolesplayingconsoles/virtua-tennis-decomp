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

int _its(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    int t24;
    int t28;
    int t32;
    int t33;
    int t25;
    int stk[20];
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    R1016 = a5;
    R1004 = a6;
    R1028 = 0x1;
    t0 = R1016;
    t1 = R1004;
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t2 = memmove((((int)stk + 4) + 0x24), a4, 0x8);
    t3 = R1004;
    R1008 = (t3 - 1);
    R1024 = ((((t3 - 1) << 2) << 1) + 0x8C12C320);
    R1020 = ((R1008) + 0x1);
    t5 = t2;
    t6 = (t1 + t0);
    for (;;) {
        if ((int)(R1008) < 0) {
            return t5;
        }
        t5 = 0x5;
        t5 = ((int)((int)(R1020) / (int)t5));
        t5 = (t5 + 0x1);
        t5 = (t5 << 1);
        t12 = (0x8 - t5);
        t13 = (0x8 - (0x8 - t5));
        t5 = (memmove(((0x8 - t5) + (((int)stk + 4) + 0x1C)), ((R1024) + (0x8 - t5)), (0x8 - (0x8 - t5))));
        R1012 = 0x0;
        R1004 = 0x0;
        t14 = 0x8;
        for (;;) {
            t5 = (_umemcmp((t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13));
            if ((int)t5 >= 0) {
                t5 = (_sub(0x0, (t12 + (((int)stk + 4) + 0x24)), (t12 + (((int)stk + 4) + 0x1C)), t13));
                R1028 = t5;
                R1012 = ((R1012) + t14);
            }
            t14 = ((int)((unsigned int)((int)((unsigned int)t14 + (unsigned int)0x0)) + ((((int)0x0 > (int)t14)) ? 1u : 0u)));
            t14 = (t14 >> 1);
            if (t14 != 0) {
                t5 = (_rsfts((t12 + (((int)stk + 4) + 0x1C)), t13, 0x1));
                t24 = R1004;
                R1004 = (t24 + 0x1);
                if ((int)(t24 + 0x1) >= (int)0x4) {
                    t25 = (t24 + 0x1); break;
                }
                continue;
            }
            break;
        }
        t28 = R1012;
        if ((R1028) == 0) {
            break;
        }
        *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
        t6 = (t6 - 0x1);
        R1008 = ((R1008) - 1);
        R1024 = ((R1024) - 8);
        R1020 = ((R1020) - 1);
    }
    *(unsigned char *)(((t6 - 0x1) + 0x0)) = (t28 + 0x30);
    t32 = t25;
    t33 = (t6 - 0x1);
    for (;;) {
        t33 = (t33 - 1);
        if ((unsigned int)t33 < (unsigned int)(R1016)) {
            break;
        }
        t32 = 0x30;
        *(unsigned char *)((t33 + 0x0)) = t32;
    }
    return t5;
}


