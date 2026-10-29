/* Straight-line functions with calls and guards (batch gen_ay): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
    int t1;
    int t94;
    int t98;
    int t103;
    int t108;
    int t122;
    int t123;
    int t124;
    int t125;
    int t15;
    int t20;
    int t25;
    int t31;
    int t45;
    int t50;
    int t55;
    int t61;
    int t71;
    int t77;
    int t95;
    int t99;
    int t104;
    int t109;

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
    if (((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 2) != 0) {
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


int entryPortJoin(int a4)
{
    int t2;
    int t11;
    int t12;
    int t13;
    int t14;
    int t25;
    int t27;

    *(unsigned int *)(((0x8C3437A4 + (a4 << 2)) + 0x0)) = (entryCountJoined());
    if ((*(int *)0x8C287ADC) == 2) {
        t2 = entryCountJoined();
        if ((int)t2 > 0) {
            *(unsigned int *)(((0x8C3437A4 + (a4 << 2)) + 0x0)) = (selSlot0FlagClear());
        }
    }
    *(unsigned short *)0x8C343260 = ((*(short *)0x8C343260) | (*(short *)((((a4 << 1) + 0x8C185298) + 0x0))));
    t11 = *(short *)0x8C343262;
    t12 = *(short *)((((a4 << 1) + 0x8C185298) + 0x0));
    *(unsigned short *)0x8C343262 = (t11 | t12);
    *(unsigned int *)(((0x8C343724 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343744 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343764 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343784 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C3437E4 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
    t13 = (t11 | t12);
    t14 = 0x0;
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)0x20) {
            break;
        }
        t13 = 0x1CC;
        t13 = (t13 + 0x8C343258);
        t13 = (t13 + (((a4 << 2) << 2) << 1));
        *(unsigned int *)((t14 + t13)) = 0xFFFFFFFF;
        t13 = 0x2CC;
        t13 = (t13 + 0x8C343258);
        t13 = (t13 + (((a4 << 2) << 2) << 1));
        *(unsigned int *)((t14 + t13)) = 0xFFFFFFFF;
        t13 = 0x3CC;
        t13 = (t13 + 0x8C343258);
        t13 = (t13 + (((a4 << 2) << 2) << 1));
        *(unsigned int *)((t14 + t13)) = 0xFFFFFFFF;
        t14 = (t14 + 0x4);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        *(unsigned int *)(((0x8C3437C4 + (a4 << 2)) + 0x0)) = (*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0)));
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x4)) = a4;
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x8)) = 0x0;
        *(unsigned short *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x30)) = 0xFFFFFFFF;
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x34)) = 0xFFFFFFFF;
        *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
        t25 = *(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0));
        *(unsigned int *)((((t25 * 0x38) + 0x8C343264) + 0x28)) = 0x0;
        selCursorReset(a4, ((t25 * 0x38) + 0x8C343264));
        t27 = *(int *)0x8C287D5C;
        if (t27 == 1) {
            return selCursorInit(a4);
        }
        return t27;
    }
    return selCursorInit(a4);
}

int hudCallWordsDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t50;
    int stk[15];

    if (a4 == 0) {
        vecMake(a4, a5, a6, a7, ((int)stk + 20), 342.0f, 270.0f, 0.0500000007f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 20)); }
        phraseBigWordPut(0x9, *(Stk3 *)(((int)stk + 20)));
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 90.0f);
        if (a5 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x1, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x3, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x5, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 3) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x7, *(Stk3 *)(((int)stk + 20)));
        }
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) + 147.0f);
        *(float *)((((int)stk + 20) + 0x4)) = ((*(float *)((((int)stk + 20) + 0x4))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
        t50 = 0xB;
    } else {
        vecMake(a4, a5, a6, a7, ((int)stk + 20), 346.0f, 270.0f, 0.0500000007f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 20)); }
        phraseBigWordPut(0x0, *(Stk3 *)(((int)stk + 20)));
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 103.0f);
        if (a5 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x2, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x4, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x6, *(Stk3 *)(((int)stk + 20)));
        }
        if (a5 == 3) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x8, *(Stk3 *)(((int)stk + 20)));
        }
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) + 173.0f);
        *(float *)((((int)stk + 20) + 0x4)) = ((*(float *)((((int)stk + 20) + 0x4))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
        t50 = 0xA;
    }
    return (phraseBigWordPut(t50, *(Stk3 *)(((int)stk + 20))));
}

int cpuDblRecoverPosC(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t5;
    int t23;
    int t24;
    int t39;
    int t52;
    int t41;
    int t42;
    int t78;
    int t13;
    int t65;
    int t32;
    int t47;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x140))) == 0) {
        t4 = *(int *)((a4 + 0xB5C));
        t5 = serveGetServer();
        if (t4 == t5) {
            *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
            *(float *)((a6 + 0x0)) = (-((((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f)))) * 118.849998f));
            t13 = 0x8C06F250;
        } else {
            *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
            *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
            t13 = 0xAF0;
        }
        t78 = t13;
    } else {
        if ((unsigned char)(*(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)))) == 1) {
            *(unsigned char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C))) = ((short)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * (short)0xFFFFFFFF);
            t23 = *(int *)((a4 + 0xB5C));
            t24 = serveGetServer();
            if (t23 == t24) {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (-((((*(float *)((a4 + 0xB00))) * (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f)))) * 118.849998f));
                t32 = 0x8C06F250;
            } else {
                *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 16.4549999f);
                *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                t32 = 0xAF0;
            }
            t65 = t32;
        } else {
            t39 = *(signed char *)((0x140 + ((t0 * 0x160) + 0x8C2FC69C)));
            t52 = (unsigned char)t39;
            if ((unsigned char)t39 == 2) {
                *(unsigned char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C))) = ((short)(*(signed char *)((0x13D + ((t0 * 0x160) + 0x8C2FC69C)))) * (short)0xFFFFFFFF);
                t41 = *(int *)((a4 + 0xB5C));
                t42 = serveGetServer();
                if (t41 == t42) {
                    *(float *)((a5 + 0x0)) = ((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * 38.3949966f);
                    *(float *)((a6 + 0x0)) = (-((*(float *)((a4 + 0xB00))) * 83.1949997f));
                    t47 = 0xB00;
                } else {
                    *(float *)((a5 + 0x0)) = (*(float *)((a4 + 0xAE8)));
                    *(float *)((a6 + 0x0)) = (*(float *)((a4 + 0xAF0)));
                    t47 = 0xAF0;
                }
                t52 = t47;
            }
            t65 = t52;
        }
        t78 = t65;
    }
    return t78;
}

void dbgMenuDrawPage(void)
{
    
}
