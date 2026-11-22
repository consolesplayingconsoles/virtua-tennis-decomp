/* Straight-line functions with calls and guards (batch gen_na): generated from the code and checked by tests. Calls are
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
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
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
int gameMatchSetup(void);
int gameModeSet(int, int, int);
int hudMatchDraw(void);
int hudWordFlagDraw(void);
int lightUpdate(int);
int matchFrame(void);
int matchSceneExec(void);
int menuListExec(int, int, int, int);
int miniReset(void);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlInitEvent(void);
int nlRenderTextureBegin(int);
int nlRenderTextureEnd(void);
int nlsndSystemControl(int, int, int);
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
int FUN_8c0368c2(void);
int FUN_8c032e32(void);
int miniStart(void);
int circuitStageStart(void);


int FUN_8c0368c2(void)
{
    register int t0;

    t0 = *(int *)0x8C2FBE1C;
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x4)) = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4)));
    t0 = *(int *)0x8C2FBE1C;
    *(unsigned int *)0x8C1891E8 = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8)));
    t0 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t0 + 0x0)) = ((((struct o40_int *)((((*(int *)((t0 + 0x4))) * 0x64) + 0x8C10BB08)))->v));
    t0 = *(int *)0x8C2FBEF0;
    (((struct o40_uint *)(t0))->v) = ((((struct o44_int *)((0x8C10BB08 + ((*(int *)((t0 + 0x4))) * 0x64))))->v));
    *(unsigned int *)0x8C287ADC = 0x2;
    (((struct o0_uint *)0x8C20D154)->v) = 0x6;
    (((struct o4_uint *)0x8C20D154)->v) = 0x4;
    return gameMatchSetup();
}

int FUN_8c032e32(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0x8C2FBE1C)->v);
    t1 = *(int *)0x8C2FBC50;
    (((struct o4_uint *)0x8C2FBE1C)->v) = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x4)));
    *(unsigned int *)0x8C1891E8 = (*(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x8)));
    t0 = (((struct o4_int *)0x8C2FBE1C)->v);
    *(unsigned int *)0x8C287ADC = ((((((((*(int *)((0x8C108E9C + ((((t0 << 2) << 2) + t0) << 2)))) & 2) == 0)) ? 1 : 0) ^ 0x1) << 1) + 0x2);
    (((struct o0_uint *)0x8C20D154)->v) = 0x6;
    (((struct o4_uint *)0x8C20D154)->v) = 0x4;
    return gameMatchSetup();
}

int miniStart(void)
{
    nlInitEvent();
    miniReset();
    *(unsigned int *)0x8C2FBEEC = 0x0;
    return FUN_8c0368c2();
}

int circuitStageStart(void)
{
    *(unsigned int *)0x8C2FBE9C = 0x0;
    return FUN_8c032e32();
}
