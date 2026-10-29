/* Straight-line functions with calls and guards (batch gen_bn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupRequestSave(int, int, int, int);
int ballInit(int);
int circuitApplyResult(void);
int entryAssignSlotIds(void);
int entryCountJoined(void);
int entryFirstPortFlag(void);
int entryIsVersus(int, int, int);
int entryPortAtRound5Clean(int);
extern int entryPortLeave();
int fadeStart(int);
int matchSetSlowMotion(int, float);
int memmove(int, int, int);
int miniBallObjSpawn(void);
int miniBowlingDraw(void);
int miniBowlingScore(void);
int miniDrawModels(void);
int miniHudDraw(void);
int miniLaunchAimed(int);
int miniLaunchBall(void);
int miniMessageSpawn(int);
int miniPlacePlayers(void);
int miniResultStart(int, int, int, int, int, int, int, int, int);
int miniStart(void);
int miniWallTargetsHit(int);
float nlRandom(void);
int nlsndSeqRequest(int);
int playerStartReactions(int, int);
int serveNextPoint(void);
int set_event(int, int);
int strmBgmFadeOut(int, int);
int strmVoiceQueueReset(void);
int vecMake(int, int, int, int, int, float, float, float);
int miniExec(void);
int cpuShotAimStick(int a4);
void miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
void dbgMenuExec(void);
int resultExec(void);




void dbgMenuExec(void)
{
    
}

