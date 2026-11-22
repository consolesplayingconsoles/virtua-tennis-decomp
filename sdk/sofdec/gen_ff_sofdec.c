/* Straight-line functions with calls and guards (batch gen_ff): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[16]; } Stk16;
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(Stk3);
int ADXF_Ocbi(int, int);
int ADXT_GetStat(int);
int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int ADXT_Stop(int);
int BupFailDialog(int);
int BupLoadFile(int, int, int, int);
int BupRequestSave(int, int, int, int);
int SJRBF_Create(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_read_sj32(int, int, int, int, int, int, int, int, int, int, int, int);
int angLerp(int, int, float);
int bodyCreate(int, int);
int colliObjEntry(int);
int colliObjInit(int, int, int, int, int, float);
int hudBarDrawAlt(Stk3, float, float);
int hudCallNumPut(int, Stk3, float, float);
int lineJudgePose(int);
int lineJudgeShadowPut(int, int);
int memmove(int, int, int);
int motionAdvanceSimple(int);
int nlAddVector(int, int);
int nlDispStripTrnsl(int, int, Stk16);
int nlGetAverageVector(int, int, int, float, float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int padLcdClear(int);
int screenSphereVisible(Stk3, float);
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int strmBgmPlay(int);
int strmBgmSetVol(int, int, int, int, int, int, int);
int strmSetStereo(int);
int strmVoiceSetVol(int);
int syCfgGetSoundMode(int);
int thunk_buIsExistFile(int, int);
int unlockApplyW1(void);
int unlockApplyW2(void);
Stk3 vecMake(float, float, float);
int lineJudgeDraw(void);
int strmExec(void);
int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int btnGuideDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int circuitDrawGameIcon(void);
int hudCallTieBreakDraw(int a4, int a5, float f4, float f5);
int ADXF_ReadNw32(int a4, int a5, int a6);
int eepromBootLoad(int a4);
int objListPutLerp(int a4, int a5, float f4);


int ADXF_ReadNw32(int a4, int a5, int a6)
{
    int t42;
    int t17;
    int t37;
    int t28;
    int t31;
    int t62;
    int t57;
    int t52;
    int t47;
    int t39;
    int stk[8];

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
        t62 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
            t57 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                t52 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                    t47 = 0xFFFFFFFD;
                } else {
                    t42 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            ADXERR_CallErrFunc(*(Stk3 *)((int)stk + 8));
                            t39 = 0xFFFFFFFF;
                        } else {
                            *(unsigned int *)(((int)stk + 8)) = (((a5 << 8) << 2) << 1);
                            t17 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t37 = 0xFFFFFFFE;
                            if (t17 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((int)stk + 8)));
                                if ((*(int *)0x8C46C664) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                                }
                                ADXCRS_Lock();
                                t28 = adxf_read_sj32(a4, a5, t17, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
                                *(unsigned int *)(((int)stk + 8)) = t28;
                                if ((int)t28 <= 0) {
                                    t31 = ((int (*)(int))((*(int *)(((*(int *)((t17 + 0x0))) + 0xC)))))(t17);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t17;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                                t37 = (*(int *)(((int)stk + 8)));
                            }
                            t39 = t37;
                        }
                        t42 = t39;
                    }
                    t47 = t42;
                }
                t52 = t47;
            }
            t57 = t52;
        }
        t62 = t57;
    }
    return t62;
}


