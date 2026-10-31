/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
int cacheOcbiRange(int, int);
int entryCountJoined(void);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int hudFadeInStart(int, int, int, int, int);
int kmyGetDMAHANDLE(int);
int kmyGetInterruptLevel(void);
int kmyIsEnabledASyncCopy(void);
int kmyMemCopy(int, int, int);
int kmyQueryFinishDMA(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetTextureDMA(int, int, int, int);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSetCurrent(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int nlsndPackFreeBG(int);
int nlsndPackLoadBG(int, int, int);
int nlsndPackLoadStatus(void);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int phraseBigWordPut(int, Stk3);
int selCursorInit(int);
int selCursorReset(int, int);
int selSlot0FlagClear(void);
int serveGetServer(void);
int set_event2(int, int);
int sndJingleA1(void);
int sprMatchFree(void);
extern int sprPutAtAlpha();
int sprSet173FreeAll(void);
float sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int vecMake(int, int, int, int, int, float, float, float);
int crowdDrawMember(int a4, int a5);
int nlsndInit(int a4, int a5);
int sndStagePackLoad(int a4, int a5, int a6, int a7);
int ndbEditFields(int a4);
int kmyCopyToTextureRom(int a4, int a5, int a6, int a7);
int countryNameTagPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int matchNextSetup(int a4);
float circuitNumDraw(int a4, int a5, int a6, float f4, float f5, float f6);
void ballBoyRunSteer(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int entryPortJoin(int a4);
int hudCallWordsDraw(int a4, int a5, int a6, int a7, float f4);
int cpuDblRecoverPosC(int a4, int a5, int a6);
void dbgMenuDrawPage(void);



int sndStagePackLoad(int a4, int a5, int a6, int a7)
{
    int t7;
    int t10;
    int t20;
    int t34;
    int t86;
    int t87;

    if (a4 == 0) {
        *(unsigned int *)0x8C1D2BDC = 0x0;
        *(unsigned int *)0x8C38BAB0 = (nlsndPackFreeBG(0x5));
    } else {
        if ((*(int *)0x8C1D2BDC) != 99) {
            t7 = *(int *)0x8C1D2BDC;
            if (t7 != 0) {
                if (t7 != 1) {
                    if (t7 == 2) {
                        t10 = fileLoadPoll(a4, a5, a6, a7);
                        if (t10 == 1) {
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                            *(unsigned int *)0x8C38BAB0 = (nlsndPackLoadBG(0x8C880000, 0x5, 0x2000));
                        }
                    } else {
                        if (t7 == 3) {
                            if ((*(int *)0x8C38BAB0) == -3) {
                                *(unsigned int *)0x8C1D2BDC = 0x0;
                                *(unsigned int *)0x8C38BAB0 = (nlsndPackFreeBG(0x5));
                            }
                            t20 = nlsndPackLoadStatus();
                            *(unsigned int *)0x8C1D2BE0 = t20;
                            if (t20 == 0) {
                                nlsndSystemControl(0x5, 0x10A0, (*(int *)0x8C38BA64));
                                *(unsigned int *)0x8C1D2BDC = 0x63;
                            }
                        }
                    }
                } else {
                    t34 = *(int *)0x8C1891E8;
                    if (t34 != 0) {
                        if ((t34 != 1) && (t34 != 2)) {
                            if (t34 != 3) {
                                if (t34 != 4) {
                                    if (t34 == 5) {
                                        fileLoadStart(0x8C880000, 0x8C125C9C, 0x0);
                                        *(unsigned int *)0x8C402C04 = 0x1;
                                        *(unsigned int *)0x8C402C08 = 0x0;
                                    } else {
                                        if (t34 != 6) {
                                            if (t34 == 7) {
                                                fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                                                *(unsigned int *)0x8C402C04 = 0x1;
                                                *(unsigned int *)0x8C402C08 = 0x2;
                                            } else {
                                                if (t34 == 8) {
                                                    fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                                                    *(unsigned int *)0x8C402C04 = 0x0;
                                                    *(unsigned int *)0x8C402C08 = 0x3;
                                                } else {
                                                    if (t34 == 9) {
                                                        fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                                                        *(unsigned int *)0x8C402C04 = 0x1;
                                                        *(unsigned int *)0x8C402C08 = 0x1;
                                                    } else {
                                                        fileLoadStart(0x8C880000, 0x8C125C9C, 0x0);
                                                        *(unsigned int *)0x8C402C04 = 0x0;
                                                        *(unsigned int *)0x8C402C08 = 0x0;
                                                    }
                                                }
                                            }
                                        } else {
                                            fileLoadStart(0x8C880000, 0x8C125C9C, 0x0);
                                            *(unsigned int *)0x8C402C04 = 0x0;
                                            *(unsigned int *)0x8C402C08 = 0x0;
                                        }
                                    }
                                } else {
                                    fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                                    *(unsigned int *)0x8C402C04 = 0x0;
                                    *(unsigned int *)0x8C402C08 = 0x3;
                                }
                            } else {
                                fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                                *(unsigned int *)0x8C402C04 = 0x1;
                                *(unsigned int *)0x8C402C08 = 0x2;
                            }
                        } else {
                            fileLoadStart(0x8C880000, 0x8C125C9C, 0x0);
                            *(unsigned int *)0x8C402C04 = 0x0;
                            *(unsigned int *)0x8C402C08 = 0x0;
                        }
                    } else {
                        fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                        *(unsigned int *)0x8C402C04 = 0x1;
                        *(unsigned int *)0x8C402C08 = 0x1;
                    }
                    *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                }
            } else {
                t86 = nlsndPackLoadStatus();
                *(unsigned int *)0x8C1D2BE0 = t86;
                if ((t86 != 0) && (t87 = *(int *)0x8C38BAB0, t87 != -2)) {
                } else {
                    cacheOcbiRange(0x8C880000, 0x100000);
                    *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                }
            }
        }
    }
    return (*(int *)0x8C1D2BDC);
}

int ndbEditFields(int a4)
{
    register int t1;
    register int t94;
    register int t98;
    register int t103;
    register int t108;
    register int t122;
    register int t123;
    register int t124;
    register int t125;
    register int t15;
    register int t20;
    register int t25;
    register int t31;
    register int t45;
    register int t50;
    register int t55;
    register int t61;
    register int t71;
    register int t77;
    register int t95;
    register int t99;
    register int t104;
    register int t109;

    t1 = *(int *)(((*(int *)0x8C29B89C) + 0x8));
    if ((t1 & 5) != 0) {
        if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 16) != 0) && (t15 = *(signed char *)((a4 + 0x1)), (int)(unsigned char)t15 > 0)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) - 1);
        }
        if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 32) != 0) && (t20 = *(signed char *)((a4 + 0x1)), (int)(unsigned char)t20 < (int)0x3)) {
            *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) + 0x1);
        }
        if (((0x40 & (*(int *)(((*(int *)0x8C29B89C) + 0x10)))) != 0) && (t25 = *(signed char *)((a4 + 0x0)), (int)(unsigned char)t25 > 0)) {
            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) - 1);
        }
        if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 0x80) != 0) && (t31 = *(signed char *)((a4 + 0x0)), (int)(unsigned char)t31 < (int)0x3)) {
            *(unsigned char *)((a4 + 0x0)) = ((*(signed char *)((a4 + 0x0))) + 0x1);
        }
    } else {
        if ((t1 & 2) != 0) {
            if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 32) != 0) && (t45 = *(signed char *)((a4 + 0x3)), (int)(unsigned char)t45 > 0)) {
                *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) - 1);
            }
            if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 16) != 0) && (t50 = *(signed char *)((a4 + 0x3)), (int)(unsigned char)t50 < (int)0x3)) {
                *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
            }
            if (((0x40 & (*(int *)(((*(int *)0x8C29B89C) + 0x10)))) != 0) && (t55 = *(signed char *)((a4 + 0x2)), (int)t55 > (int)0xFFFFFFFD)) {
                *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) - 1);
            }
            if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 0x80) != 0) && (t61 = *(signed char *)((a4 + 0x2)), (int)t61 < (int)0x3)) {
                *(unsigned char *)((a4 + 0x2)) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            }
        } else {
            if (((*(int *)(((*(int *)0x8C29B89C) + 0x8))) & 0x400) != 0) {
                if (((0x40 & (*(int *)(((*(int *)0x8C29B89C) + 0x10)))) != 0) && (t71 = *(signed char *)((a4 + 0x4)), (int)t71 > (int)0xFFFFFFFD)) {
                    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) - 1);
                }
                if ((((*(int *)(((*(int *)0x8C29B89C) + 0x10))) & 0x80) != 0) && (t77 = *(signed char *)((a4 + 0x4)), (int)t77 < (int)0x3)) {
                    *(unsigned char *)((a4 + 0x4)) = ((*(signed char *)((a4 + 0x4))) + 0x1);
                }
            }
        }
    }
    if (((*(int *)(((*(int *)(int)padPeri) + 0x10))) & 2) != 0) {
        *(unsigned char *)((a4 + 0x7)) = ((-(*(signed char *)((a4 + 0x7)))) + 0x1);
    } else {
        t94 = padDirRepeat(0x0, 0x20);
        if ((t94 != 0) && (t95 = *(signed char *)((a4 + 0x6)), (int)(unsigned char)t95 > 0)) {
            *(unsigned char *)((a4 + 0x6)) = ((*(signed char *)((a4 + 0x6))) - 1);
        }
        t98 = padDirRepeat(0x0, 0x10);
        if ((t98 != 0) && (t99 = *(signed char *)((a4 + 0x6)), (int)(unsigned char)t99 < (int)0x7)) {
            *(unsigned char *)((a4 + 0x6)) = ((*(signed char *)((a4 + 0x6))) + 0x1);
        }
        t103 = padDirRepeat(0x0, 0x40);
        if ((t103 != 0) && (t104 = *(signed char *)((a4 + 0x5)), (int)t104 > (int)0xFFFFFFF9)) {
            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) - 1);
        }
        t108 = padDirRepeat(0x0, 0x80);
        if ((t108 != 0) && (t109 = *(signed char *)((a4 + 0x5)), (int)t109 < (int)0x7)) {
            *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
        }
    }
    *(unsigned int *)0x8C301944 = 0x0;
    t122 = *(signed char *)((a4 + 0x4));
    *(unsigned int *)0x8C301944 = (0x0 | (t122 + 0x3));
    t123 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)0x8C301944 = ((0x0 | (t122 + 0x3)) | (((unsigned char)t123 << 2) << 1));
    t124 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)0x8C301944 = (((0x0 | (t122 + 0x3)) | (((unsigned char)t123 << 2) << 1)) | ((((t124 + 0x3) << 2) << 2) << 1));
    t125 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)0x8C301944 = ((((0x0 | (t122 + 0x3)) | (((unsigned char)t123 << 2) << 1)) | ((((t124 + 0x3) << 2) << 2) << 1)) | ((unsigned char)t125 << 8));
    *(unsigned int *)0x8C301944 = (((((0x0 | (t122 + 0x3)) | (((unsigned char)t123 << 2) << 1)) | ((((t124 + 0x3) << 2) << 2) << 1)) | ((unsigned char)t125 << 8)) | (((unsigned char)(*(signed char *)((a4 + 0x0))) << 8) << 2));
    return ((unsigned char)t125 << 8);
}




float circuitNumDraw(int a4, int a5, int a6, float f4, float f5, float f6)
{
    float u23;
    float t17;
    int t28;
    int t29;
    int t30;
    float u31;
    int t32;
    float t43;
    float u58;
    float u53;
    float t49;
    float u72;
    float u67;
    float t63;
    float u84;
    float u94;
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    u23 = f4;
    if (((*(int *)(((int)stk + 4))) & 18) != 0) {
        *(unsigned int *)(((int)stk + 8)) = ((int)((int)a4 % (int)0xA));
        if (((*(int *)(((int)stk + 4))) & 16) != 0) {
            nlObjPutSetFadeColor(0.678431392f, 1.0f, 0.0f);
        }
        sprSheetSet((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C159C30))));
        t17 = sprSheetPut(0x2007, f4, f5, f6, (*(float *)0x8C2FBE14));
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
        u23 = t17;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x8C287658;
    t28 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 24)) = (0x8 & t28);
    *(unsigned int *)(((int)stk + 28)) = (0x40 & t28);
    *(unsigned int *)(((int)stk + 20)) = (0x4 & t28);
    t29 = 0x0;
    t30 = a4;
    u31 = u23;
    for (;;) {
        t32 = (int)((int)t30 % (int)0xA);
        *(unsigned int *)(((int)stk + 8)) = t32;
        sprSheetSet((*(int *)(((t32 << 2) + (*(int *)(((int)stk + 12)))))));
        if ((*(int *)0x8C2FBE18) != 0) {
            *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(int *)0x8C2FBE18);
        }
        t43 = sprSheetPut(0x2007, u31, f5, f6, (*(float *)0x8C2FBE14));
        u31 = t43;
        t30 = ((int)((int)t30 / (int)0xA));
        t29 = (t29 + 0x1);
        u58 = t43;
        if (((*(int *)(((int)stk + 24))) != 0) && ((int)t30 >= (int)0x1)) {
            u53 = t43;
            if (((int)((int)t29 % (int)0x3)) == 0) {
                sprSheetSet(0x8C1097CC);
                t49 = sprSheetPut(0x2007, u31, f5, f6, (*(float *)0x8C2FBE14));
                u31 = t49;
                u53 = t49;
            }
            u58 = u53;
        }
        u72 = u58;
        if (((*(int *)(((int)stk + 28))) != 0) && ((int)t30 >= (int)0x1)) {
            u67 = u58;
            if (((int)((int)t29 % (int)0x3)) == 0) {
                sprSheetSet(0x8C108E00);
                t63 = sprSheetPut(0x2007, u31, f5, f6, (*(float *)0x8C2FBE14));
                u31 = t63;
                u67 = t63;
            }
            u72 = u67;
        }
        if ((int)t30 >= (int)0x1) continue;
        if (((*(int *)(((int)stk + 20))) != 0) && ((int)t29 < (int)0x2)) continue;
        break;
    }
    u84 = u72;
    if (((*(int *)(((int)stk + 4))) & 1) != 0) {
        sprSheetSet(0x8C1097A8);
        u84 = (sprSheetPut(0x2007, u31, f5, f6, (*(float *)0x8C2FBE14)));
    }
    u94 = u84;
    if (((*(int *)(((int)stk + 4))) & 32) != 0) {
        sprSheetSet(0x8C108DDC);
        u94 = (sprSheetPut(0x2007, u31, f5, f6, (*(float *)0x8C2FBE14)));
    }
    *(float *)0x8C2FBE14 = 1.0f;
    *(unsigned int *)0x8C2FBE18 = 0x0;
    return u94;
}





void dbgMenuDrawPage(void)
{
    
}
