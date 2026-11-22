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


float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int t0;
    float u5;
    float u6;
    int t8;
    int t9;
    int t10;
    int t11;
    float u14;
    float u15;
    float u16;
    float u17;
    float u19;
    float u20;
    float u18;
    float u24;
    float u25;
    float u22;
    float u23;
    float u12;
    float u13;
    int stk[12];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x4)) = *(struct mv8 *)(0x8C127E84); }
    t0 = *(int *)((a4 + 0x34));
    u5 = 1.0f;
    u6 = 1.0f;
    if ((t0 & 15) == 0) {
    } else {
        *(unsigned int *)(((int)stk + 4)) = t0;
        u5 = (float)(t0 & 0x3);
        u6 = (float)((((*(int *)(((int)stk + 4))) >> 1) >> 1) & 0x3);
    }
    t8 = 0x4;
    t9 = a5;
    t10 = a6;
    t11 = (((int)stk + 4) + 0x4);
    for (;;) {
        u14 = *(float *)((t11 + 0x0));
        t11 = (t11 + 0x4);
        u15 = *(float *)((t11 + 0x0));
        t11 = (t11 + 0x4);
        u16 = *(float *)((a4 + 0x4));
        u17 = *(float *)((a4 + 0x8));
        u19 = u16;
        u20 = u17;
        if ((u14 - u5) != 0.0f) {
            u13 = (f4 * f6);
            u13 = (u13 * (u14 - u5));
            u12 = (u14 - u5);
            u18 = u16;
            u18 = u18 + u12 * (f4 * f7);
            u13 = (-u13);
            u19 = u18;
            u20 = (u17 + u13);
        }
        u24 = u19;
        u25 = u20;
        if ((u15 - u6) != 0.0f) {
            u12 = (u15 - u6);
            u22 = u20;
            u22 = u22 + u12 * (f5 * f7);
            u23 = u19;
            u23 = u23 + u12 * (f5 * f6);
            u24 = u23;
            u25 = u22;
        }
        t8 = (t8 - 1);
        *(float *)((t9 + 0x0)) = u24;
        *(float *)((t10 + 0x0)) = u25;
        t10 = (t10 + 0x4);
        t9 = (t9 + 0x4);
        if (t8 == 0) {
            break;
        }
    }
    return u12;
}


int nlInitPrint(void)
{
    int t1;
    int t3;
    float u5;
    int stk[3];

    *(unsigned int *)0x8C44F954 = 0x0;
    *(unsigned int *)0x8C44F958 = 0x0;
    *(unsigned int *)0x8C44F964 = 0x0;
    *(unsigned int *)0x8C44F99C = 0xFFFFFFFF;
    *(unsigned short *)0x8C44F998 = 0x8;
    *(unsigned int *)0x8C44F95C = 0x8;
    *(unsigned int *)0x8C44F960 = 0x8;
    *(unsigned int *)0x8C44F950 = 0x0;
    *(float *)0x8C44F9A0 = 0.0f;
    *(float *)0x8C44F9A4 = 1.0f;
    *(float *)0x8C44F9A8 = (*(float *)0x8C0ED8F4);
    t1 = 0x0;
    for (;;) {
        t3 = (t1 << 1);
        u5 = (float)t1;
        t1 = (t1 + 0x1);
        *(float *)(((int)stk + 4)) = (u5 * (*(float *)0x8C44F9A8));
        *(unsigned short *)(((t3 + 0x8C44F9E4) + 0x0)) = (*(short *)((((int)stk + 4) + 0x2)));
        if ((int)t1 >= (int)0x101) {
            break;
        }
    }
    kmCreateTextureSurface(0x8C44F9C4, 0x8, 0x400, 0x902);
    kmLoadTexture(0x8C44F9C4, (*(int *)0x8C1DC8D4));
    return (nlPrintInitFontTexture());
}


