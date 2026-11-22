/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXSTM_GetCurOfst(int, int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADXSTM_Stop(int);
int adxf_CloseSjStm(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int colliObjInit(int, int, int, int, int, float);
int entryClearJoined(void);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entryPortLeave(int, int);
int hudBarDraw(Stk3, float, float);
int hudNumPut(int, Stk3, float);
int nlDispStripTrnsl(int, int, Stk16);
int nlLength(int, int);
int nlSetCommonTextureOffset(int);
int nlSingleLine(int, int, int, Stk3);
int nlSpriteFreeTexture(int, int);
int nlSpriteLoadTextureList(int, int);
int nlSpriteSetGarbagedTexture(int);
int rankDrawTbl1(Stk4);
int rankDrawTbl2(int, int, int, int, int, int, int, int, int, int, int, int);
int selGridClear(void);
int set_event(int, int);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int uniformTexRestore(int, Stk4);
Stk3 vecMake(float, float, float);
int uiScanlinesPut(float f4);
int sseleScanlines(void);
int entryRejoinPorts(void);
int adxf_SetFileInfo(int a4, int a5);
int ADXF_Stop(int a4);
int hudCallMsgDrawDab0(float f4, float f5);
int hudPointsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int menuTextLetterPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int optionBarPut(Stk3 s);
int courtColliInit(int a4, int a5, int a6, int a7);
int hudCallMsgDrawDa60(float f4, float f5);
int hudCallMsgDrawDb50(float f4, float f5);
int hudCallMsgDrawDb00(float f4, float f5);
int hudImpactSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, float f4);
int optionQuadPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int rankDraw(void);
int stageSelIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int vecDistXZf(float f4, float f5, float f6, float f7);
int cpuDebugBallLine(void);
int sprTexLoad(int a4);
int sprTexFree(int a4);
void panelDigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int sprTexRestore(int a4);


int adxf_SetFileInfo(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t18;
    int t13;
    int t9;
    int stk[9];

    t0 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
    if ((int)t0 < 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
        t18 = t0;
    } else {
        t2 = ADXSTM_GetFsizeSct(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
            t13 = t2;
        } else {
            t4 = ADXSTM_GetFsizeByte(a5, ((int)stk + 4));
            if ((int)t4 < 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 4));
                t9 = t4;
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 12)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 4)));
                t9 = 0x0;
            }
            t13 = t9;
        }
        t18 = t13;
    }
    return t18;
}

int ADXF_Stop(int a4)
{
    int stk[5];

    adxf_SetCmdHstry(0x5, 0x0, a4, 0xFFFFFFFF, 0xFFFFFFFF);
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
        return 0xFFFFFFFD;
    }
    if ((*(signed char *)((a4 + 0x1))) != 1) {
        if ((*(signed char *)((a4 + 0x1))) == 3) {
            *(unsigned char *)((a4 + 0x1)) = 0x1;
            return (*(int *)((a4 + 0x18)));
        }
        if ((*(int *)((a4 + 0x4))) == 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
            return 0xFFFFFFFF;
        }
        ADXCRS_Lock();
        ADXSTM_Stop((*(int *)((a4 + 0x4))));
        ADXSTM_GetCurOfst((*(int *)((a4 + 0x4))), ((int)stk + 8));
        *(unsigned int *)((a4 + 0x24)) = (*(int *)(((int)stk + 8)));
        adxf_CloseSjStm(a4);
        *(unsigned char *)((a4 + 0x1)) = 0x1;
        ADXCRS_Unlock();
        adxf_SetCmdHstry(0x5, 0x1, a4, 0xFFFFFFFF, 0xFFFFFFFF);
        return (*(int *)((a4 + 0x18)));
    }
    return (*(int *)((a4 + 0x18)));
}


