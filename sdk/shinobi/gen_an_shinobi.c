typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXRNA_GetTime(int, int, int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetTotalNumSmpl(int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int check_cache(int);
int nlChangeDisplayMode(int, int);
int nlExp(float);
int nlInitPrint(void);
float nlLog(float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPrintSetZ(float);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlSetPalExtMode(int);
int nlTranslate(float, float, float);
int nlsndG2WriteN(int, int, int);
int nlsndSeqRequest(int);
int rankDrawGlyph(int, int, int, int, Stk3, float, float);
int sprInitRectF(int, int, int, int, int, int);
int vmsfs_c_progress(int, int, int, int);
void ballBoyPropPut(int a4);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
void sysSetVideoMode(int a4);
int nlSearchPalette(int a4, int a5);
int nlLineCalcFogA(int a4);
int ndbPack(int a4, int a5, int a6);
int syIntAdrChk_putchar(int a4, int a5);
int scoreBoardSync(void);
int kmiConvertUVnum(int a4);
int ADXT_GetTime(int a4, int a5, int a6);
int hudFlagInit(void);
int rankDrawString(int a4, int a5, int a6, int a7, Stk4 p);
void nlPow(float f4, float f5);
int nlsndFxControl(int a4, int a5, int a6);
float cpuStickNudge(int a4, float f4);
int nlsndStreamSetHdInfo(int a4, int a5);
int kmyUseAnotherList(int a4, int a5);
int nlSpriteGetNextSpriteIndex(void);
int vmsfs_mount2(int a4);
int kmtex_GetTextureLevel(int a4, int a5);
int nlArcTan(float f4);
int nlsndStreamOpen(int a4);
int kmyiSetScreenSize(int a4);
void perfPrint(void);
void dbgMenuDrawTitles(void);
int padDirOn(int a4, int a5);
int nlLocate(int a4, int a5);


int syIntAdrChk_putchar(int a4, int a5)
{
    int t0;
    int t8;
    int t4;
    int t7;
    int t16;
    int t18;
    int t21;
    int t22;

    t0 = *(int *)0x8C47647C;
    if (t0 != 0) {
        t8 = t0;
        if (t0 == 1) {
            for (;;) {
                if (((unsigned char)(*(signed char *)((((*(int *)0x8C476474) + 0x10) + 0x0))) & 0x80) == 0x80) {
                    break;
                }
            }
            *(unsigned char *)((((*(int *)0x8C476474) + 0xC) + 0x0)) = a4;
            t4 = *(int *)0x8C476474;
            *(unsigned char *)(((t4 + 0x10) + 0x0)) = ((*(signed char *)(((t4 + 0x10) + 0x0))) & 0x7F);
            for (;;) {
                t7 = *(signed char *)((((*(int *)0x8C476474) + 0x10) + 0x0));
                if (((unsigned char)t7 & 0x4) == 4) {
                    break;
                }
            }
            t8 = ((unsigned char)t7 & 0x4);
        }
        t22 = t8;
    } else {
        for (;;) {
            if (((unsigned short)(*(short *)(((*(int *)0x8C476478) + 0x10))) & 0x20) == 32) {
                break;
            }
        }
        *(unsigned char *)((((*(int *)0x8C476478) + 0xC) + 0x0)) = a4;
        t16 = *(int *)0x8C476478;
        *(unsigned short *)(((t16 + 0x10) + 0x0)) = ((*(short *)(((t16 + 0x10) + 0x0))) & 0xFFDF);
        t18 = *(int *)0x8C476478;
        *(unsigned short *)(((t18 + 0x10) + 0x0)) = ((*(short *)(((t18 + 0x10) + 0x0))) & 0xFFBF);
        for (;;) {
            t21 = *(short *)(((*(int *)0x8C476478) + 0x10));
            if (((unsigned short)t21 & 0x40) == 64) {
                break;
            }
        }
        t22 = ((unsigned short)t21 & 0x40);
    }
    return t22;
}


int vmsfs_mount2(int a4)
{
    int t1;
    int t3;
    int t4;

    if ((*(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
    t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = (*(int *)((((((t1 << 2) + t1) << 2) << 2) + 0x8C20C750)));
    t3 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x30));
    t4 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x34));
    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = (t3 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x8C462180) + 0x8))), ((t3 + 0x1) - 1), t4);
    return check_cache(a4);
}


