typedef struct { int w[4]; } Stk4;
/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int camGetAngles(int, int);
int camGetPos(int, ...);
int charaTexFree(int);
int charaTexLoad(int, int);
int fileLoadCloseSlot(int);
int hudBarDraw(Stk3, float, float);
int kmyRequestCallback(int, int, int, int);
int memset(int, int, int);
float motionGetFrame(int);
int motionSetFrame(int, float);
int motionSwitch(int, int, int, int, float);
int msgWinFramePut(int, Stk12);
extern int msgWinPut();
int muneTexLoad(int, int, int);
int nlInvertMatrix(int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlPrintf(int, ...);
float nlTanf(float);
int nlUnitMatrix(void);
int nlsndSeqRequest(int);
int pdTmrAlarm(int);
int resCautionTexFree(int);
int set_event(int, int);
int setjmp(int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int vecMake(int, int, int, int, float, float, float);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int msgWinStep(int a4, int a5, int a6, int a7);
int sndPlayerDiveLand(int a4);
int shopDrawCount(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmiFLWCTRLEORCallBackFunc(void);
int commonSprInit(int a4, int a5);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int muneSlotLoad(int a4, int a5);
int nlSpriteF2ARGB(float f4, float f5, float f6, float f7);
int kmiFLWCTRLCheckVBufOverflow(int a4, int a5, int a6, int a7);
void evBallMarkSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int emotDebugPrint(int a4);
int sseleBarDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int lineJudgeIdleAll(void);
int kmyGetFrameBufferHandle(int a4);
int camSetupView(void);
int sprInitRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int scoreBoardSync(void);
int hudCallMsgDrawD830(float f4, float f5);
int hudCallMsgDrawD8d0(float f4, float f5);
int hudFontSprSet(int a4, int a5, int a6, int a7, Stk4 p);
int hudFont2SprSet(int a4, int a5, int a6, int a7, Stk4 p);
int buFbrCreateServer(int a4);
int circuitDrawPicture(void);
int ndbPack(int a4, int a5, int a6);
int bgSprInitRect(int a4, int a5, int a6, int a7, Stk4 p);
int hudCallMsgDrawDa10(float f4, float f5);
int hudCallMsgDrawD9c0(float f4, float f5);
int hudCallMsgDrawD970(float f4, float f5);


int kmiFLWCTRLCheckVBufOverflow(int a4, int a5, int a6, int a7)
{
    int t10;
    int t11;
    int t3;
    int t4;
    int t5;
    int t17;
    int t18;
    int t19;

    if ((*(int *)0x8C45F794) != 0) {
        t17 = (*(int *)(((a7 << 2) + (0x8C45F6F4 + (((a6 << 2) + a6) << 2)))));
        t18 = (*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2)))));
        t19 = a7;
    } else {
        t10 = 0x0;
        t11 = (0xE4 + a5);
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t3 = 0x0;
            t4 = 0x0;
            t5 = (0xE4 + a5);
            for (;;) {
                t3 = (t3 + 0x1);
                t4 = (t4 + (*(int *)((t5 + (a7 << 2)))));
                t5 = (t5 + 0x14);
                if ((unsigned int)t3 >= (unsigned int)a6) {
                    break;
                }
            }
            t10 = t4;
            t11 = t5;
        }
        t17 = ((*(int *)(((0x8C45F6F4 + (a7 << 2)) + 0x0))) - t10);
        t18 = ((*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2))))) + t10);
        t19 = t11;
    }
    if ((unsigned int)t18 > (unsigned int)(*(int *)(((a7 << 2) + (0x8C45F818 + (((a6 << 2) + a6) << 2)))))) {
        *(unsigned int *)(((a7 << 2) + (0x8C45F818 + (((a6 << 2) + a6) << 2)))) = t18;
    }
    if ((unsigned int)t17 < (unsigned int)(*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2)))))) {
        *(unsigned int *)0x8C45F920 = 0x2;
        kmyRequestCallback(0x8, a5, t18, t19);
    }
    return 0x0;
}


