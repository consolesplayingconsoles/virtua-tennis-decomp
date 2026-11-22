/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int advExec(void);
int camSetupView(void);
int cameraExec(int);
int colliObjResolve(void);
int dbgMenuExec(void);
int entryFirstPortFlag(void);
int entryIsVersus(void);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeReset(void);
int gameModeSet(int, int, int);
int gdFsExecServerG(void);
int hudMatchDraw(void);
int hudWordFlagDraw(void);
int lightUpdate(int);
int matchFrame(void);
int matchSceneExec(void);
int menuListExec(int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlFastInvertMatrix(void);
int nlMakeModelViewProjectMatrix_objput(void);
int nlObjPutMvSub(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRenderTextureBegin(int);
int nlRenderTextureEnd(void);
int nldispstripSub(int, int, int);
int nldispstripTexOfsSub(int, int);
int nldispstripTexSub(int, int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContext(int, int, int, int);
int nlstripSetVertexContextTex(int, int);
int padDirRepeat(int, int);
int padPauseOnUnplug(int);
int padUnplugCheck(void);
int padVibStopAll(void);
int perfMark(void);
int perfPrint(void);
int screenFramePut(int, int, float);
int screenPlanePut(void);
int sndSeCancel(void);
int sndSeCursor(void);
int sndSeDecide(void);
int stageLoadBegin(int);
int stageLoadBeginLong(void);
int stageLoadStep(void);
int stageLoadTexStep2(void);
int strmBgmPlay(int);
int strmControl(int, int);
int strmVoiceQueueReset(void);
int FUN_8c0123e8(float f4);
int FUN_8c0ee910(void);
int FUN_8c0f7170(int a4, int a5, int a6);
int FUN_8c0f71d0(int a4, int a5, int a6);
int FUN_8c0f70c0(int a4, int a5, int a6, int a7);
int FUN_8c0f7150(int a4, int a5, int a6, int a7);
int FUN_8c0f22d0(int a4);
int FUN_8c0f22f0(int a4);
int FUN_8c1dd6ac(int a4, int a5, int a6, int a7);


int FUN_8c1dd6ac(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x20));
    if (t0 != 1) {
        return gdFsExecServerG();
    }
    return t0;
}
