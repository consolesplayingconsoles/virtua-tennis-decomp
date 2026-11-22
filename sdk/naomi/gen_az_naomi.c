/* Straight-line functions with calls and guards (batch gen_az): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int ADXF_LoadPartition(int, int, int, int);
int resetBackColorZ(int, int, int);
int VQAllocEntry(void);
int VQEnQueueTop(int, int);
extern float _builtin_sqrtf(float);
int cpuChasePlan(int, int, int, int, int, int, int, int, int, int, int, int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmytex_GetfreememEx(int, int);
int kmytex_TXalloc(int, int, int, int);
int kmytex_TXalloc2(int, int, int, int);
int kmytex_VQFreeEntry(int);
int memmove(int, int, int);
int motionBackup(int);
int motionIsEnd(int);
int motionSetSpeed(int, float);
int motionSwitch(int, int, int, int, float);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlDispStripTexOfs(int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
extern int nlDispStripTrnsl();
int nlInitEvent(void);
float nlLength(int, int);
int nlLoadDummyTexture(void);
int nlObjPut(int);
int nlObjPutSetLightDirectionF(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSetWindowSize(float, float, float, float);
extern int nlSubVector();
int nlSysBeginPass(void);
int nlSysBeginScene(void);
int nlSysEndPass(void);
int nlSysEndScene(void);
int nlSysRender(int);
int nlTranslate(float, float, float);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsnd_PL_WaitRequest(void);
int padRepeatInit(void);
int pdGetPeripheralInfo(int);
int pdVibMxStart(int, int);
int pdVibMxStop(int);
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
float rndRangef(float);
int shotCheckNet(int, int, float);
extern int sprPutAt();
int strmBgmPlay(int);
float vecDistXZf(float, float, float, float);
int vecFromYaw(int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
void shotAim(int a4);
int padVibExec(void);
int circuitDrawBar(float f4);
int winPartsPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int rankDrawCharaIcon(int a4, int a5, float f4, float f5, float f6);
int shopInit(void);
int VQalloc(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int cpuSglChase(int a4, int a5, int a6, int a7);
int endingFlyObjPut(int a4, int a5, int a6, int a7);
int hudRankIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int afsLoadPartitions(void);
void netJudgeUpdate(int a4);
int nlsndPackLoadStatus(int a4);
int fadeQuadDrawB(int a4, int a5, int a6, int a7, float f4);
int nlChangeDisplayMode(int a4, int a5);


int nlsndPackLoadStatus(int a4)
{
    int t1;
    int t204;
    int t9;
    int t2;
    int t5;
    int t14;
    int t18;
    int t32;
    int t33;
    int t49;
    int t51;
    int t53;
    int t62;
    int t60;
    int t82;
    int t147;
    int t83;
    int t86;
    int t90;
    int t104;
    int t105;
    int t121;
    int t123;
    int t125;
    int t134;
    int t132;
    int t161;
    int t166;
    int t178;
    int t191;
    int t192;
    int t197;
    int t184;
    int t154;
    int t75;
    int t68;
    int t25;
    int t140;
    int t97;

    t1 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
    t204 = 0xFFFFFFFF;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        t9 = (unsigned char)t1;
                        if ((unsigned char)t1 == 5) {
                            t2 = nlsndG2Read(0xA08000B4);
                            t5 = 0x1;
                            if (t2 != 0) {
                            } else {
                                nlsndG2Write(0x0, 0xA08000B0);
                                *(unsigned int *)(((*(int *)0x8C454CE8) + 0x0)) = 0x0;
                                t5 = 0x0;
                            }
                            t9 = t5;
                        }
                        t75 = t9;
                    } else {
                        t14 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
                        if ((t14 & 0x7F00) == 0) {
                            t18 = *(int *)0x8C454CE8;
                            if ((unsigned int)(*(int *)((t18 + 0xC))) < (unsigned int)((*(int *)((t18 + 0x4))) << 2)) {
                                t25 = ((unsigned int)(*(int *)(((*(int *)0x8C454CE8) + 0xC))) >> 2);
                            } else {
                                t25 = (*(int *)(((*(int *)0x8C454CE8) + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)(((*(int *)0x8C454CE8) + 0x14))), (*(int *)(((*(int *)0x8C454CE8) + 0x18))), t25);
                            t32 = *(int *)0x8C454CE8;
                            t33 = *(int *)((t32 + 0xC));
                            *(unsigned int *)((t32 + 0xC)) = (t33 - (t25 << 2));
                            if ((t33 - (t25 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0x8C454CE8) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0x8C454CE8) + 0x8))), ((*(int *)(((*(int *)0x8C454CE8) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t49 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t49 + 0x0)) = ((*(int *)((t49 + 0x0))) + 0x1);
                            } else {
                                t51 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t51 + 0x18)) = ((*(int *)((t51 + 0x18))) + (t25 << 2));
                                t53 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t53 + 0x14)) = ((*(int *)((t53 + 0x14))) + (t25 << 2));
                            }
                            t68 = 0x1;
                        } else {
                            t62 = 0x0;
                            if ((t14 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t60 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t60 + 0x0)) = ((*(int *)((t60 + 0x0))) + 0x1);
                                t62 = 0x1;
                            }
                            t68 = t62;
                        }
                        t75 = t68;
                    }
                    t154 = t75;
                } else {
                    t82 = nlsndBlockMoveStatus();
                    t147 = 0x1;
                    if (t82 == 0) {
                        t83 = *(int *)0x8C454CE8;
                        *(unsigned int *)((t83 + 0x0)) = ((*(int *)((t83 + 0x0))) + 0x1);
                        t86 = *(int *)(((*(int *)0x8C454CE8) + 0x0));
                        if ((t86 & 0x7F00) == 0) {
                            t90 = *(int *)0x8C454CE8;
                            if ((unsigned int)(*(int *)((t90 + 0xC))) < (unsigned int)((*(int *)((t90 + 0x4))) << 2)) {
                                t97 = ((unsigned int)(*(int *)(((*(int *)0x8C454CE8) + 0xC))) >> 2);
                            } else {
                                t97 = (*(int *)(((*(int *)0x8C454CE8) + 0x4)));
                            }
                            nlsndG2WriteN((*(int *)(((*(int *)0x8C454CE8) + 0x14))), (*(int *)(((*(int *)0x8C454CE8) + 0x18))), t97);
                            t104 = *(int *)0x8C454CE8;
                            t105 = *(int *)((t104 + 0xC));
                            *(unsigned int *)((t104 + 0xC)) = (t105 - (t97 << 2));
                            if ((t105 - (t97 << 2)) == 0) {
                                if (((*(int *)(((*(int *)0x8C454CE8) + 0x0))) & 0x8000) != 0) {
                                    nlsndG2Write((*(int *)(((*(int *)0x8C454CE8) + 0x8))), ((*(int *)(((*(int *)0x8C454CE8) + 0x1C))) + 0x8));
                                }
                                nlsndG2Write(0x1, 0xA08000B0);
                                t121 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t121 + 0x0)) = ((*(int *)((t121 + 0x0))) + 0x1);
                            } else {
                                t123 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t123 + 0x18)) = ((*(int *)((t123 + 0x18))) + (t97 << 2));
                                t125 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t125 + 0x14)) = ((*(int *)((t125 + 0x14))) + (t97 << 2));
                            }
                            t140 = 0x1;
                        } else {
                            t134 = 0x0;
                            if ((t86 & 0x7F00) == 0x100) {
                                nlsndG2Write(0x1, 0xA08000B0);
                                t132 = *(int *)0x8C454CE8;
                                *(unsigned int *)((t132 + 0x0)) = ((*(int *)((t132 + 0x0))) + 0x1);
                                t134 = 0x1;
                            }
                            t140 = t134;
                        }
                        t147 = t140;
                    }
                    t154 = t147;
                }
                t184 = t154;
            } else {
                t161 = nlsndG2Read(0xA08000B4);
                if (t161 == 0) {
                } else {
                    if ((*(int *)(((*(int *)0x8C454CE8) + 0x10))) != 0) {
                        t166 = *(int *)0x8C454CE8;
                        nlsndBlockMove((*(int *)(((*(int *)0x8C454CE8) + 0x18))), ((*(int *)((t166 + 0x18))) + (*(int *)((t166 + 0x8)))), (*(int *)(((*(int *)0x8C454CE8) + 0x10))));
                    }
                    t178 = *(int *)0x8C454CE8;
                    *(unsigned int *)((t178 + 0x0)) = ((*(int *)((t178 + 0x0))) + 0x1);
                }
                t184 = 0x1;
            }
            t197 = t184;
        } else {
            t191 = nlsnd_PL_WaitRequest();
            if (t191 != 0) {
            } else {
                t192 = *(int *)0x8C454CE8;
                *(unsigned int *)((t192 + 0x0)) = ((*(int *)((t192 + 0x0))) + 0x1);
            }
            t197 = 0x1;
        }
        t204 = t197;
    }
    return t204;
}


