/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
float cpuSglAimScore(int, int);
int cpuShotTargetSet(int, float, float);
int entryAnyAtRound5(void);
int entryCountJoined(void);
int entryGetColorId(int, Stk3);
int entryIsVersus(int, int, int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int lightUpdate(void);
int matchCheckTiebreak(int, int);
int menuTextMsgPut(int, Stk3, float);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetCurrent(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlsndSeqRequest(int);
int playerInit(int, int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
int selCharInfoDraw(int, int);
int selModelSpawn(int, int);
int set_event(int, int);
int sklDrawNodeOne(int);
int staffInitAll(void);
int staffLookAtBall(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
float cpuSglPickLv07(int a4, int a5, float f4, float f5);
void sndCrowdBallReact(int a4, int a5, int a6, int a7, float f4, float f5);
int matchSetupPlayers(void);
int sceneTwoPlayerSetup(int a4, int a5, int a6);
int menuItemTextPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int fadeQuadDraw(int a4, int a5, int a6, float f4, float f5);
int seFootSlide(int a4, int a5, int a6, float f4, float f5);
int umpirePose(int a4);
int netJudgePose(int a4);
int entryCharaSelDraw(void);
void ADXF_Ocbi(int a4, int a5);


void ADXF_Ocbi(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        _builtin_set_imask(((*(unsigned short *)(((int)stk + 4))) & 0xF)); /* the P2 tail's end: the caches need nothing on the host */
    return;
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}


