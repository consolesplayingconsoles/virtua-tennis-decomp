typedef struct { int w[9]; } Stk9;
/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXRNA_SetPlaySw(int, int);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_Stop(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Start(int);
int ADXSTM_Stop(int);
int ADXT_Finish(void);
int ADXT_SetOutVol(int, int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _lsfts(int, int, int);
int _pow5(int, int);
int adxt_start_sj(int, int);
int buExit(void);
int buStat(int);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int kdSetHandler(int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetOutPan(int, int, int);
int nlExitSystem(void);
float nlLog10(float);
int nlPrintInitFontTexture(void);
float nlTan(int);
int nlsndG2DmaRequest(int, int, int, int);
int nlsndG2WriteN(int, int, int);
int nlsndSystemControl(int, int, int);
int pdExitPeripheral(void);
int set_event2(int, int);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int syBtExit(void);
int syCfgExit(void);
int syHwFinish(void);
int syRtcFinish(void);
int vmsfs_c_init(int);
int vmsfs_init(int, int, int);
int strmVoiceSetVol(int a4);
void motFileRequest(int a4, int a5);
float screenProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudSignSprSet(int a4, int a5, int a6, int a7, Stk4 p);
int hudBarDrawAlt(Stk4 s, float f4, float f5);
int hudBannerInit(void);
int hudBarDraw(Stk4 s, float f4, float f5);
int entryGridMove(int a4, int a5);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int nlsndStreamSetHdInfo(int a4, int a5);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int sprInitRectF(int a4, int a5, int a6, int a7, int a8, int a9);
int logoBDraw(int a4, int a5, int a6, int a7, Stk4 p);
int panelLogoInit(int a4, int a5, int a6, int a7, Stk4 p);
int panelWidePut(Stk4 p, float f4);
int sprSet192Setup(void);
int buInit(int a4, int a5, int a6, int a7);
int mainExitToBios(void);
int cpuStickNudge(int a4);
int hudBannerPut(Stk4 p, float f4);
int adxt_RcvrReplay(int a4);
int syIntAdrChk_putchar(int a4, int a5);
int hudFramePutNarrow(Stk4 p, float f4);
int panelPartAPut(Stk4 p, float f4);
int ADXSTMF_Create(int a4, int a5, int a6, int a7);
int mwRnaSetNumChan(int a4, int a5);
int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7);
int markerShowStart(int a4, int a5, int a6, int a7, Stk9 p);
int stageSelFramePut(int a4, int a5, int a6, int a7, Stk4 p);
int nlInitPrint(void);
int _pow10(int a4, int a5, int a6);


int buInit(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x8C45AD10 = a5;
    *(unsigned int *)0x8C45AD0C = a6;
    *(unsigned int *)0x8C45ACFC = 0x0;
    *(unsigned int *)0x8C45AD00 = 0x0;
    *(unsigned int *)0x8C45AD04 = 0x0;
    *(unsigned int *)0x8C45AD08 = 0x0;
    vmsfs_c_init(a5);
    t2 = vmsfs_init(a4, a5, a6);
    kdSetHandler((*(int *)0x8C209A94), 0x8C1DFA70);
    if ((t2 == 0) && (a7 != 0)) {
        t5 = ((int (*)(void))(a7))();
    }
    *(unsigned int *)0x8C20C21C = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}


