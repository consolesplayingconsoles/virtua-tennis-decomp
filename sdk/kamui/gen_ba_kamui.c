/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[29]; } Stk29;
int ADXT_GetStat(int);
int colliObjEntry(int);
int crowdFrameTcw(void);
extern int fadeQuadDrawB();
int kyakuPolyLoad(void);
int lightStagePreset(void);
int motionAdvanceSimple(int);
int motionBackup(int);
float motionGetFrame(int);
int motionIsEnd(int);
int motionRootFirst(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int mtxGetWorldPos(int, int, int, int, int);
int ndbBuildIndex(void);
int ndbKeyEqual(int, int);
int ndbPack(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlLoadMatrix(int, float, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
int primVertexSet(int, int, int, int, int, Stk3);
int selCursorPos(int, int, int, int, int);
int sndFxReset(void);
int sndStagePackLoad(int);
int stageCrowdTexLoad(void);
int stagePolyLoad(void);
int stageSelNameDraw(int, int, Stk3);
int strmBgmPlay(int);
int strmVoicePlay(int, int);
int strmVoiceQueueAdd(int);
int strmVoiceVolRestore(void);
int umpCheerTimed(int);
int umpirePose(int);
int vecAdd(int, int, int, int, int, Stk3, Stk3);
int vecDiv(int, int, int, int, int, float, float);
int vecMake(int, int, int, int, int, float, float, float);
int ndbEditInput(int a4);
void bodyGroundFriction(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
void winTriPartsPut(int a4, int a5, int a6, int a7, float f4, float f5);
int markerDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int umpireExec(void);
int stageLoadTimedStep(void);
int staffLookAtBall(int a4, int a5, int a6, int a7);
int primSprDrawScaleAlpha(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int selCursorInit(int a4);
int resultBoxDraw(int a4, int a5, int a6, int a7);
int sseleGridDraw(int a4, int a5, int a6, int a7);
int kmiWriteFBRegister(Stk29 s);
void crowdAnimModel(int a4, int a5, int a6, int a7);
void strmCallScore(int a4, int a5, int a6, int a7);
float nlLUDecomp(int a4, int a5, float f4, float f5);
int advInit(void);
int circuitDrawMatchIcon(void);
int primSprDraw(int a4, int a5, int a6, int a7);


int kmiWriteFBRegister(Stk29 s)
{
    int t9;
    int t10;
    int t11;
    int stk[40];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    stk[7] = s.w[4];
    stk[8] = s.w[5];
    stk[9] = s.w[6];
    stk[10] = s.w[7];
    stk[11] = s.w[8];
    stk[12] = s.w[9];
    stk[13] = s.w[10];
    stk[14] = s.w[11];
    stk[15] = s.w[12];
    stk[16] = s.w[13];
    stk[17] = s.w[14];
    stk[18] = s.w[15];
    stk[19] = s.w[16];
    stk[20] = s.w[17];
    stk[21] = s.w[18];
    stk[22] = s.w[19];
    stk[23] = s.w[20];
    stk[24] = s.w[21];
    stk[25] = s.w[22];
    stk[26] = s.w[23];
    stk[27] = s.w[24];
    stk[28] = s.w[25];
    stk[29] = s.w[26];
    stk[30] = s.w[27];
    stk[31] = s.w[28];
    *(unsigned int *)0x8C45EE38 = (((*(int *)(((((int)stk + 4) + 0x8) + 0x58))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x54))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE3C = (((*(int *)(((((int)stk + 4) + 0x8) + 0x60))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x5C))) & 0x7FF) << 16));
    *(unsigned int *)0x8C45EE40 = ((((*(int *)(((((int)stk + 4) + 0x8) + 0x48))) & 0xF) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x4C))) & 0x1F) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x50))) & 0xF) << 8) << 1));
    *(unsigned int *)0x8C45EEAC = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    *(unsigned int *)0x8C45EEB0 = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t9 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)(*(int *)0x8C45EEA8) > 0) {
        *(unsigned int *)0x8C45EE44 = (((t10 & 0x3FF) | ((((t11 - (*(int *)0x8C45EEA8)) & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    } else {
        *(unsigned int *)0x8C45EE44 = (((t10 & 0x3FF) | (((t11 & 0x3FF) << 8) << 2)) | ((((t9 & 0x3FF) << 16) << 2) << 2));
    }
    *(unsigned int *)0x8C45EE80 = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    *(unsigned int *)0x8C45EE84 = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    *(unsigned int *)0x8C45EE48 = ((*(int *)(((((int)stk + 4) + 0x8) + 0x44))) & 0x1FF);
    *(unsigned int *)0x8C45EE50 = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    *(unsigned int *)0x8C45EE4C = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & (*(int *)(((((int)stk + 4) + 0x8) + 0x40)))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & (*(int *)(((((int)stk + 4) + 0x8) + 0x68)))) << 16)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x64))) & 0x1) << 22)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x6C))) & 0x1) << 23));
    return 0x6C;
}


