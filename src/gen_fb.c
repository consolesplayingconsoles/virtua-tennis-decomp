/* Straight-line functions with calls and guards (batch gen_fb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestSave(int, int, int, int);
int arcadeNextMatch(void);
int arcadeNextStage(int, int, int, int, int, int);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int ballInit(int);
int cpuInitPoint(void);
int entryAnyAtRound5(void);
int entryCountJoined(void);
int evCrowdPointStart(int);
int evPackFade(int, int, int);
int fadeStart(int);
int gameMatchSetup(void);
int hudDoubleFaultPanel(int);
int hudFaultPanel(int);
int hudLetPanel(void);
int hudPointPanelShow(int);
int hudScoreShow(int, int, int);
int matchCheckTiebreak(void);
int matchGetCpuRank(void);
int matchPointWon(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
extern int miniOnEvent();
int miniRoundStart(void);
int netHitReset(void);
int netTouchFlag(int);
int pauseExec(int, int);
int playerInit(int, int);
int playerStartReactions(int, int);
int resultFlagSet(int);
int scorePressure(void);
int selCursorReset(int, int);
int selSlot0FlagClear(void);
int serveGetPos(int, int, int, int, int);
int serveGetServer(void);
int sndSeStage(void);
int stageSoftReset(void);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int umpCallDoubleFault(void);
int umpCallFault(int, int, int, int, int, int, int, int);
int umpCallLet(int, int, int, int, int, int, int);
int umpCallOut(int, int, int, int, int, int, int);
int matchExec(int a4, int a5, int a6, float f4, float f5);
int sseleSlotEntry(int a4);


int sseleSlotEntry(int a4)
{
    int t17;
    int t18;
    int t19;
    int t24;
    int t23;

    *(unsigned int *)(((0x8C3437E4 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
    *(unsigned short *)0x8C343260 = ((*(short *)0x8C343260) | (*(short *)(((a4 << 1) + 0x8C185298))));
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
    *(unsigned short *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
    if ((*(int *)(((((*(int *)((((a4 << 2) + 0x8C3437A4) + 0x0))) * 0x38) + 0x8C343264) + 0x8))) == 0) {
        selCursorReset(a4, 0x8C343258);
    }
    t17 = *(int *)0x8C287ADC;
    if (t17 == 2) {
        t18 = entryCountJoined();
        if (t18 == 1) {
            t19 = *(int *)0x8C287ADC;
            t24 = t19;
            if (t19 == 2) {
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
                *(unsigned short *)(((0x14 + (((selSlot0FlagClear()) * 0x38) + 0x8C343264)) + 0x0)) = 0x0;
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
                t23 = selSlot0FlagClear();
                *(unsigned int *)((((t23 * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
                t24 = ((t23 * 0x38) + 0x8C343264);
            }
            return t24;
        }
        return t18;
    }
    return t17;
}
