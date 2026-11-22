/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int ADXT_ExecServer(void);
int resetBackColorZ(int, int, int);
int SJUNI_Reset(int);
int advPeriOff(void);
int ambLevelReset(void);
int commonViewInit(void);
int courtPropsInit(void);
int crowdInit(void);
int crowdSetup(int);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuSetValue(int, int, int);
int emotFaceVtxGet(int, int, int);
float emotRetOne(void);
int fadeScreenStart(int, int, int, int, int, int);
int fileLoadClose(void);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int kmiFLWCTRLEORCallBackFunc(int, int, int, int);
int kmyCreateRegionArray(int);
int kmyResetRenderer(void);
int mainCheckDrive(void);
int matchPropStart(void);
int motionAdvance(int);
int motionRootAtFrame(int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent2(int);
int nlInitEvent(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int restart_t404(void);
int resultFlagsClear(void);
int sceneObjPutInit(void);
int seSystemApply(void);
int shadowNullCb(void);
int shadowVolPutDirA(void);
int sndFadeFlagsClear(void);
int sndSeDecide(void);
int sprAdvInit(void);
int sprPutAlpha(int, float);
int staffMorphInit(void);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int strmExec(void);
int thunk_nlObjPutMvInit(int);
int thunk_nlSprPut(int);
int titleSprLoad(void);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int umpCallSpareA(void);
int umpCallSpareB(void);
typedef struct { int w[3]; } Stk3;
int vecAdd(int, int, int, int, int, Stk3, Stk3);
int vecDiv(int, int, int, int, int, float);
int FUN_8c0e426a(int a4);
int FUN_8c08d78c(int a4);
int FUN_8c0bdf26(int a4, int a5);
int FUN_8c0b5f78(int a4);
int SJUNI_Create(int a4, int a5, int a6);
void kmiFLWCTRLCheckTimeOut(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int matchSceneInit(void);
int FUN_8c08b24c(int a4);
int FUN_8c08b218(int a4);
void FUN_8c0843e8(int a4);
void FUN_8c084302(int a4);
int FUN_8c010da8(void);


void kmiFLWCTRLCheckTimeOut(int a4, int a5, int a6, int a7)
{
    register int t7;

    if ((*(int *)0x8C4607B4) != 0) {
        *(unsigned int *)0x8C4607DC = ((*(int *)0x8C4607DC) - 1);
        if ((*(int *)0x8C4607DC) == 0) {
            *(unsigned int *)0x8C45F7F4 = ((*(int *)0x8C45F7F4) + 0x1);
            kmiFLWCTRLEORCallBackFunc(a4, a5, a6, a7);
            kmyResetRenderer();
            if ((*(int *)0x8C45F7F0) != 1) {
                t7 = 0x0;
                for (;;) {
                    kmyCreateRegionArray((*(int *)(((0x8C45F79C + t7) + 0x0))));
                    t7 = (t7 + 0x4);
                    if ((unsigned int)t7 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            *(unsigned int *)0x8C4607DC = (*(int *)0x8C45F7F0);
        }
    }
}


