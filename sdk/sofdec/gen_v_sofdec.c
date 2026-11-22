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


int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t5;
    int t10;

    t0 = *(int *)((a4 + 0x10));
    t5 = nlsndG2DmaRequest((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0))) + ((int)((int)(a6 * t0) / (int)0x8))), ((int)((int)(a8 * t0) / (int)0x8)));
    if ((int)t5 < 0) {
        if (t5 == -1) {
            return (mwRnaErrCallFunc(0x8C20B354));
        }
        if (t5 == -2) {
            return (mwRnaErrCallFunc(0x8C20B384));
        }
        if (t5 == -3) {
            return (mwRnaErrCallFunc(0x8C20B3C4));
        }
        t10 = t5;
        if (t5 == -4) {
            t10 = (mwRnaErrCallFunc(0x8C20B404));
        }
        return t10;
    }
    return t5;
}


int adxt_RcvrReplay(int a4)
{
    int t10;
    int t13;
    int t18;
    int t24;
    int t17;

    ADXCRS_Lock();
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x0);
    ADXRNA_SetPlaySw((*(int *)((a4 + 0xC))), 0x0);
    ADXSJD_Stop((*(int *)((a4 + 0x4))));
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Stop((*(int *)((a4 + 0x8))));
        t10 = *(int *)((a4 + 0x14));
        t13 = ((int (*)(int))((*(int *)(((*(int *)((t10 + 0x0))) + 0x14)))))(t10);
    }
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t17 = t18;
        t17 = (t17 << 2);
        t17 = (t17 + (a4 + 0x18));
        t17 = (*(int *)((t17 + 0x0)));
        t24 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x14)))))(t17);
        t18 = (t18 + 0x1);
    }
    if ((*(int *)((a4 + 0x8))) != 0) {
        ADXSTM_Seek((*(int *)((a4 + 0x8))), 0x0);
        ADXSTM_Start((*(int *)((a4 + 0x8))));
    }
    adxt_start_sj(a4, (*(int *)((a4 + 0x14))));
    return ADXCRS_Unlock();
}


int ADXSTMF_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t7;
    int t9;
    int t13;
    int t14;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t0 * 0x64) + 0x8C46B2E4) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 32) {
        t14 = 0x0;
    } else {
        *(unsigned char *)((((t0 * 0x64) + 0x8C46B2E4) + 0x1)) = 0x1;
        *(unsigned char *)((((t0 * 0x64) + 0x8C46B2E4) + 0x2)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x4)) = a7;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x8)) = a4;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0xC)) = 0x0;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x10)) = a5;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x14)) = a6;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x2C)) = 0x20;
        t7 = *(int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x14));
        t9 = (t7 + 0x7FF);
        if ((int)(t7 + 0x7FF) < 0) {
            t9 = ((t7 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x30)) = ((int)t9 >> 11);
        *(unsigned char *)((((t0 * 0x64) + 0x8C46B2E4) + 0x0)) = 0x1;
        t13 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((a7 + 0x0))) + 0x24)))))(a7, 0x0, a6, 0x1);
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x18)) = t13;
        *(unsigned int *)((((t0 * 0x64) + 0x8C46B2E4) + 0x1C)) = t13;
        t14 = ((t0 * 0x64) + 0x8C46B2E4);
    }
    return t14;
}


int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t34;
    int t47;
    int t39;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t10 = *(int *)((a4 + 0x20));
        t11 = *(int *)((a4 + 0x14));
        t12 = *(int *)((a4 + 0x24));
        t13 = *(int *)((a4 + 0x10));
        t14 = ((t10 - t11) + t12);
        if ((int)t13 < (int)((t10 - t11) + t12)) {
            t14 = t13;
        }
        t16 = a6;
        if ((int)t14 < (int)a6) {
            t16 = t14;
        }
        t47 = t16;
    } else {
        if (a5 == 1) {
            t23 = *(int *)((a4 + 0x20));
            t24 = *(int *)((a4 + 0x18));
            t25 = *(int *)((a4 + 0x24));
            t26 = *(int *)((a4 + 0xC));
            t27 = ((t23 - t24) + t25);
            if ((int)t26 < (int)((t23 - t24) + t25)) {
                t27 = t26;
            }
            t29 = a6;
            if ((int)t27 < (int)a6) {
                t29 = t27;
            }
            t39 = t29;
        } else {
            if ((*(int *)((a4 + 0x28))) != 0) {
                t34 = ((int (*)(int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD);
            }
            t39 = 0x0;
        }
        t47 = t39;
    }
    *(unsigned int *)((a7 + 0x0)) = t47;
    SJRBF_Unlock(a4, t0);
    return (((t47 == a6)) ? 1 : 0);
}


