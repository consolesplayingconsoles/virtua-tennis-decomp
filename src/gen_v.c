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
int hudSignSprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudBarDrawAlt(Stk4 s, float f4, float f5);
int hudBannerInit(void);
int hudBarDraw(Stk4 s, float f4, float f5);
int entryGridMove(int a4, int a5);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int nlsndStreamSetHdInfo(int a4, int a5);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int sprInitRectF(int a4, int a5, int a6, int a7, int a8, int a9);
int logoBDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int panelLogoInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int panelWidePut(Stk4 s, float f4);
int sprSet192Setup(void);
int buInit(int a4, int a5, int a6, int a7);
int mainExitToBios(void);
int cpuStickNudge(int a4);
int hudBannerPut(Stk4 s, float f4);
int adxt_RcvrReplay(int a4);
int syIntAdrChk_putchar(int a4, int a5);
int hudFramePutNarrow(Stk4 s, float f4);
int panelPartAPut(Stk4 s, float f4);
int ADXSTMF_Create(int a4, int a5, int a6, int a7);
int mwRnaSetNumChan(int a4, int a5);
int SJRBF_IsGetChunk(int a4, int a5, int a6, int a7);
int markerShowStart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int stageSelFramePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int nlInitPrint(void);
int _pow10(int a4, int a5, int a6);

int strmVoiceSetVol(int a4)
{
    float u0;
    float t3;
    float u4;

    if ((int)(a4 + 0x2F) >= (int)0x30) {
        u0 = *(float *)0x8C0D7794;
        *(unsigned int *)0x8C40C274 = (int)((float)(a4 + 0x2F) * u0);
        t3 = nlLog10((((float)(int)((float)(a4 + 0x2F) * u0)) * (*(float *)0x8C0D779C)));
        u4 = *(float *)0x8C0D77A4;
        *(unsigned int *)0x8C38BA6C = (int)(t3 * u4);
        ADXT_SetOutVol((*(int *)0x8C38BA98), (int)(t3 * u4));
        *(unsigned int *)0x8C38BA64 = (int)((float)((((((a4 + 0x2F) << 2) << 2) << 2) << 1) - (a4 + 0x2F)) / (*(float *)0x8C0D77B0));
    } else {
        ADXT_SetOutVol((*(int *)0x8C38BA98), 0xFFFFFC19);
        *(unsigned int *)0x8C38BA6C = 0xFFFFFC19;
        *(unsigned int *)0x8C38BA64 = 0x0;
    }
    return nlsndSystemControl(0x8, 0x10A0, (*(int *)0x8C38BA64));
}

void motFileRequest(int a4, int a5)
{
    int t1;
    int t4;
    int t5;
    int t2;

    if ((*(int *)0x8C28758C) != 0) {
        t1 = 0x8C2873F8;
        for (;;) {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
            t1 = (t1 + 0x28);
            if ((unsigned int)t1 >= (unsigned int)0x8C287588) {
                break;
            }
        }
        *(unsigned int *)0x8C287594 = 0x0;
        *(unsigned int *)0x8C28758C = 0x0;
        t2 = 0x8C287588;
    }
    t4 = 0x0;
    t5 = t2;
    for (;;) {
        if ((*(int *)(((((((t4 << 2) + t4) << 2) << 1) + 0x8C2873F8) + 0x0))) != a4) {
            if ((*(int *)(((((((t4 << 2) + t4) << 2) << 1) + 0x8C2873F8) + 0x0))) == 0) {
                t5 = t4;
                t4 = 0xA;
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0xA) {
                break;
            }
            continue;
        }
        return;
    }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((((t5 << 2) + t5) << 2) << 1) + 0x8C2873F8)) = *(struct mv10 *)((((((a4 << 2) + a4) << 2) << 1) + 0x8C101534)); }
    *(unsigned int *)0x8C287594 = ((*(int *)0x8C287594) + 0x1);
}

float screenProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float t4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    int t10;
    float u11;
    float u13;
    float u14;
    float u15;
    int t16;
    float u17;
    int stk[17];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    stk[8] = a11;
    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t4 = nlTan(((int)((((*(float *)0x8C287A04) * (*(float *)0x8C089F00)) / (*(float *)0x8C089F08)) + (*(float *)0x8C089F0C)) & 0xFFFF));
    u5 = *(float *)0x8C089F18;
    u6 = *(float *)0x8C089F1C;
    *(float *)0x8C302070 = (((u5 / t4) * u6) / (1.0f + 1.0f));
    u7 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
    u8 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
    u9 = (((u5 / t4) * u6) / (1.0f + 1.0f));
    t10 = *(int *)(((int)stk + 8));
    u11 = (-u8);
    if (!(0.0f > u8)) {
        u11 = u8;
    }
    *(unsigned int *)((t10 + 0x0)) = (int)((u7 * u9) / u11);
    u13 = *(float *)0x8C302070;
    u14 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
    u15 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
    t16 = *(int *)(((int)stk + 4));
    u17 = (-u15);
    if (!(0.0f > u15)) {
        u17 = u15;
    }
    *(unsigned int *)((t16 + 0x0)) = (int)((u14 * u13) / u17);
    return ((u7 * u9) / u11);
}

int hudSignSprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u4;
    int stk[13];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    *(unsigned int *)((a4 + 0x0)) = 0x20;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)((((int)stk + 4) + 0x8)));
    u4 = *(float *)0x8C09B52C;
    *(float *)((a4 + 0x18)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FFB8) + 0x0))) / u4);
    *(float *)((a4 + 0x1C)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FFB8) + 0x4))) / u4);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FFB8) + 0x8))) / u4));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FFB8) + 0xC))) / u4));
    *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18))));
    *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C))));
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x5;
    return 0x2C;
}

int hudBarDrawAlt(Stk4 s, float f4, float f5)
{
    int stk[28];

    stk[16] = s.w[0];
    stk[17] = s.w[1];
    stk[18] = s.w[2];
    stk[19] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    sprPutCropV(0x8C33DF10, 0x1, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5);
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x18) + 0x0))) + 15.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    sprPutCropV(0x8C33DF60, 0x1, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5);
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x18) + 0x0))) + 190.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    return (sprPutCropV(0x8C33DFB0, 0x1, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5));
}

int hudBannerInit(void)
{
    float u3;
    float u5;

    *(unsigned int *)0x8C33D790 = 0xE;
    *(unsigned int *)0x8C33D7B8 = 0x0;
    *(float *)0x8C33D794 = (*(float *)0x8C099208);
    *(float *)0x8C33D798 = (*(float *)0x8C09920C);
    *(float *)0x8C33D79C = (*(float *)0x8C099210);
    u3 = *(float *)0x8C099214;
    *(float *)0x8C33D7A8 = ((*(float *)0x8C10F970) / u3);
    u5 = *(float *)0x8C09921C;
    *(float *)0x8C33D7AC = ((*(float *)0x8C10F974) / u5);
    *(float *)0x8C33D7B0 = ((*(float *)0x8C33D7A8) + ((*(float *)0x8C10F978) / u3));
    *(float *)0x8C33D7B4 = ((*(float *)0x8C33D7AC) + ((*(float *)0x8C10F97C) / u5));
    *(float *)0x8C33D7A0 = (((*(float *)0x8C33D7B0) - (*(float *)0x8C33D7A8)) * 1.0f);
    *(float *)0x8C33D7A4 = (((*(float *)0x8C33D7B4) - (*(float *)0x8C33D7AC)) * 1.0f);
    *(float *)0x8C33D7BC = 1.0f;
    *(unsigned int *)0x8C33D7C0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C33D7C4 = 0x5;
    return ((int (*)(int, int, float, float))(0x8C09914A))(0x8C33D790, 0x8C10F970, 1.0f, u3);
}


int entryGridMove(int a4, int a5)
{
    int t5;
    int t9;
    int stk[18];

    { struct mv16 { int w[16]; }; *(struct mv16 *)(((int)stk + 4)) = *(struct mv16 *)(0x8C110D9C); }
    if ((int)(*(int *)0x8C343ADC) >= (int)0x4) {
        if ((int)(*(int *)0x8C343AE8) >= (int)0x4) {
            if ((a4 == 1) && (a5 == 2)) {
                return 0x2;
            }
            if ((a4 == 2) && (a5 == 3)) {
                return 0x1;
            }
            return (*(int *)(((a5 << 2) + (((a4 << 2) << 2) + ((int)stk + 4)))));
        }
        if (((int)(*(int *)0x8C343AE0) >= (int)0x4) && (t5 = *(int *)0x8C343AE4, (int)t5 >= (int)0x4)) {
            if ((a4 == 0) && (a5 == 0)) {
                return 0x3;
            }
            if ((a4 == 3) && (a5 == 1)) {
                return 0x0;
            }
            return (*(int *)(((a5 << 2) + (((a4 << 2) << 2) + ((int)stk + 4)))));
        }
        return (*(int *)(((a5 << 2) + (((a4 << 2) << 2) + ((int)stk + 4)))));
    }
    if (((int)(*(int *)0x8C343AE0) >= (int)0x4) && (t9 = *(int *)0x8C343AE4, (int)t9 >= (int)0x4)) {
        if ((a4 == 0) && (a5 == 0)) {
            return 0x3;
        }
        if ((a4 == 3) && (a5 == 1)) {
            return 0x0;
        }
        return (*(int *)(((a5 << 2) + (((a4 << 2) << 2) + ((int)stk + 4)))));
    }
    return (*(int *)(((a5 << 2) + (((a4 << 2) << 2) + ((int)stk + 4)))));
}

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


int logoBDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t2;
    int t4;
    int stk[27];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    stk[18] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x8)); }
    t0 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C334EDC, a5, a6, a7, *(Stk3 *)((((int)stk + 52) + 0x8)));
    *(float *)(((((int)stk + 52) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x8) + 0x0))) + 245.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x8)); }
    t2 = ((int (*)(int, Stk3))(sprPutAt))(0x8C334E3C, *(Stk3 *)((((int)stk + 52) + 0x8)));
    *(float *)(((((int)stk + 52) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x8) + 0x0))) + -128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x8)); }
    t4 = ((int (*)(int, Stk3))(sprPutAt))(0x8C334E8C, *(Stk3 *)((((int)stk + 52) + 0x8)));
    *(float *)(((((int)stk + 52) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x8) + 0x0))) + 165.0f);
    *(float *)(((((int)stk + 52) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 52) + 0x8) + 0x4))) + 3.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x8)); }
    return (((int (*)(int, Stk3))(sprPutAt))(0x8C334984, *(Stk3 *)((((int)stk + 52) + 0x8))));
}

int panelLogoInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u4;
    float u5;
    int stk[13];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    *(unsigned int *)((a4 + 0x0)) = 0xB;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)((((int)stk + 4) + 0x8)));
    u4 = *(float *)0x8C090C38;
    *(float *)((a4 + 0x18)) = ((*(float *)(((((a5 << 2) << 2) + 0x8C10E664) + 0x0))) / u4);
    u5 = *(float *)0x8C090C40;
    *(float *)((a4 + 0x1C)) = ((*(float *)(((((a5 << 2) << 2) + 0x8C10E664) + 0x4))) / u5);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((*(float *)(((((a5 << 2) << 2) + 0x8C10E664) + 0x8))) / u4));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((*(float *)(((((a5 << 2) << 2) + 0x8C10E664) + 0xC))) / u5));
    *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18))));
    *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C))));
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x5;
    return 0x2C;
}

int panelWidePut(Stk4 s, float f4)
{
    float u2;
    int stk[30];

    stk[18] = s.w[0];
    stk[19] = s.w[1];
    stk[20] = s.w[2];
    stk[21] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x14)); }
    sprPutAtAlpha(0x8C337CA0, *(Stk3 *)((((int)stk + 52) + 0x14)), f4);
    u2 = *(float *)0x8C090DC0;
    *(float *)(((((int)stk + 52) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x14) + 0x0))) + u2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x14)); }
    sprPutAtAlpha(0x8C337CF0, *(Stk3 *)((((int)stk + 52) + 0x14)), f4);
    *(float *)(((((int)stk + 52) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x14) + 0x0))) + u2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x14)); }
    sprPutAtAlpha(0x8C337D40, *(Stk3 *)((((int)stk + 52) + 0x14)), f4);
    *(float *)(((((int)stk + 52) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x14) + 0x0))) + u2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x14)); }
    return (sprPutAtAlpha(0x8C337D90, *(Stk3 *)((((int)stk + 52) + 0x14)), f4));
}


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

int mainExitToBios(void)
{
    int t1;
    int t4;
    int t5;

    fileLoadClose();
    t1 = 0x0;
    for (;;) {
        fileLoadCloseSlot(t1);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    t4 = buStat((*(int *)0x8C40C628));
    if (t4 != -1) {
        if ((unsigned int)0x8C40C634 < (unsigned int)0x8C40C698) {
            t5 = 0x8C40C634;
            for (;;) {
                if ((*(int *)((t5 + 0x0))) == 0) {
                    t5 = (t5 + 0x14);
                    if ((unsigned int)t5 >= (unsigned int)0x8C40C698) {
                        break;
                    }
                    continue;
                }
                return t4;
            }
            _builtin_set_imask(0xE);
            ADXT_Finish();
            syCfgExit();
            buExit();
            syRtcFinish();
            pdExitPeripheral();
            nlExitSystem();
            syHwFinish();
            return syBtExit();
        }
        _builtin_set_imask(0xE);
        ADXT_Finish();
        syCfgExit();
        buExit();
        syRtcFinish();
        pdExitPeripheral();
        nlExitSystem();
        syHwFinish();
        return syBtExit();
    }
    return t4;
}


int hudBannerPut(Stk4 s, float f4)
{
    int stk[17];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    stk[8] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C33D790, *(Stk3 *)((((int)stk + 16) + 0x4)), f4));
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


int hudFramePutNarrow(Stk4 s, float f4)
{
    int stk[26];

    stk[14] = s.w[0];
    stk[15] = s.w[1];
    stk[16] = s.w[2];
    stk[17] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x10)); }
    sprPutAtAlpha(0x8C33A540, *(Stk3 *)((((int)stk + 40) + 0x10)), f4);
    *(float *)(((((int)stk + 40) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x10) + 0x0))) + 52.0f);
    *(float *)0x8C33A5A0 = (((*(float *)0x8C33A5B0) - (*(float *)0x8C33A5A8)) * 93.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x10)); }
    sprPutAtAlpha(0x8C33A590, *(Stk3 *)((((int)stk + 40) + 0x10)), f4);
    *(float *)(((((int)stk + 40) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x10) + 0x0))) + 51.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x10)); }
    return (sprPutAtAlpha(0x8C33A5E0, *(Stk3 *)((((int)stk + 40) + 0x10)), f4));
}

int panelPartAPut(Stk4 s, float f4)
{
    int stk[27];

    stk[15] = s.w[0];
    stk[16] = s.w[1];
    stk[17] = s.w[2];
    stk[18] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    sprPutAtAlpha(0x8C340120, *(Stk3 *)((((int)stk + 40) + 0x14)), f4);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 18.0f);
    *(float *)0x8C340180 = (((*(float *)0x8C340190) - (*(float *)0x8C340188)) * 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    sprPutAtAlpha(0x8C340170, *(Stk3 *)((((int)stk + 40) + 0x14)), f4);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 534.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x14)); }
    return (sprPutAtAlpha(0x8C3401C0, *(Stk3 *)((((int)stk + 40) + 0x14)), f4));
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

int markerShowStart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t0;
    int t2;
    int stk[18];

    stk[3] = a8;
    stk[4] = a9;
    stk[5] = a10;
    stk[6] = a11;
    stk[7] = a12;
    stk[8] = a13;
    stk[9] = a14;
    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = set_event2(0x4C, 0x8C088C3E);
    t2 = *(int *)((((*(int *)(((int)stk + 4))) << 2) + 0x8C10DB38));
    *(unsigned int *)((t0 + 0x48)) = (((((t2 << 2) + t2) << 2) << 2) + 0x8C33ECD0);
    *(float *)(((((((t2 << 2) + t2) << 2) << 2) + 0x8C33ECD0) + 0x4)) = (*(float *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(float *)(((*(int *)((t0 + 0x48))) + 0x8)) = (*(float *)(((((int)stk + 4) + 0x8) + 0x4)));
    *(float *)(((*(int *)((t0 + 0x48))) + 0xC)) = (*(float *)(((((int)stk + 4) + 0x8) + 0x8)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x30)) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x3C)) = *(struct mv3 *)((((int)stk + 4) + 0x20)); }
    *(unsigned int *)((t0 + 0x2C)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((t0 + 0x18)) = 0x14;
    *(unsigned int *)((t0 + 0x1C)) = 0x28;
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    *(float *)((t0 + 0x20)) = 1.0f;
    return 0x20;
}

int stageSelFramePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t0;
    int t2;
    int t4;
    int stk[32];

    stk[20] = a8;
    stk[21] = a9;
    stk[22] = a10;
    stk[23] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
    t0 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(0x8C340AD4, a5, a6, a7, *(Stk3 *)((((int)stk + 52) + 0x1C)));
    *(float *)(((((int)stk + 52) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x1C) + 0x0))) + 128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
    t2 = ((int (*)(int, Stk3))(sprPutAt))(0x8C340B24, *(Stk3 *)((((int)stk + 52) + 0x1C)));
    *(float *)(((((int)stk + 52) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x1C) + 0x0))) + 23.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
    t4 = ((int (*)(int, Stk3))(sprPutAt))(0x8C340BC4, *(Stk3 *)((((int)stk + 52) + 0x1C)));
    *(float *)(((((int)stk + 52) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x1C) + 0x0))) + 128.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 52) + 0x1C)); }
    return (((int (*)(int, Stk3))(sprPutAt))(0x8C340B74, *(Stk3 *)((((int)stk + 52) + 0x1C))));
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

int _pow10(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t8;
    int t9;
    int t3;
    int stk[10];

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned short *)((a5 + 0x0)) = (a4 + 0x3F);
    _pow5(a4, (((int)stk + 4) + 0x8));
    memset((*(int *)(((int)stk + 4))), 0x0, 0x8);
    t4 = 0x0;
    t5 = (((int)stk + 4) + 0x8);
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            break;
        }
        t3 = (*(short *)((a5 + 0x0)));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t3 = (t3 - 8);
        *(unsigned short *)((a5 + 0x0)) = t3;
    }
    t8 = 0x80;
    t9 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)((t5 + 0x0))) & (unsigned char)t8) != 0) {
            break;
        }
        t8 = (unsigned char)t8;
        t9 = (t9 + 0x1);
        t8 = ((unsigned int)t8 >> 1);
    }
    *(unsigned int *)(((int)stk + 8)) = (0x8 - t4);
    _lsfts(t5, (0x8 - t4), t9);
    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) - t9);
    return (memmove((*(int *)(((int)stk + 4))), t5, (*(int *)(((int)stk + 8)))));
}


