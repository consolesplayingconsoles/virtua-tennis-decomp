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

int crowdDrawMember(int a4, int a5)
{
    int t1;
    int t9;
    int t12;
    int t7;
    int stk[12];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((a4 * 0x1F4) + 0x8C344A08) + 0x1E4)));
    t1 = *(int *)((((a4 * 0x1F4) + 0x8C344A08) + 0x1EC));
    if ((*(int *)0x8C20D14C) == 3) {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((0x8C11FA60 + ((t1 << 2) << 1)) + 0x0)));
        t7 = (0x8C11FA60 + ((t1 << 2) << 1));
    } else {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((0x8C11F980 + ((t1 << 2) << 1)) + 0x0)));
        t7 = (0x8C11F980 + ((t1 << 2) << 1));
    }
    t9 = *(int *)((t7 + 0x4));
    motionSetCurrent(((a4 * 0x1F4) + 0x8C344A08));
    motionRootBoneRaw(0x0, 0x5);
    t12 = *(int *)(((int)stk + 12));
    nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x14))));
    if ((*(int *)(((int)stk + 4))) == 0) {
        nlPushMatrix(0x0);
        motionBoneRaw(0x4);
        *(unsigned int *)(((int)stk + 4)) = (((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530);
        nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x10))));
        motionBoneRaw(0x2);
        nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0x8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        motionBoneRaw(0x3);
        nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))));
        motionBoneRaw(0x1);
        nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0x4))));
        nlPopMatrix(0x1);
    } else {
        if ((*(int *)(((int)stk + 4))) == 1) {
            nlPushMatrix(0x0);
            motionBoneRaw(0x4);
            *(unsigned int *)(((int)stk + 4)) = (((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530);
            nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x10))));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            motionBoneRaw(0x3);
            nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))));
            nlPopMatrix(0x1);
        }
    }
    nlPushMatrix(0x0);
    motionBoneRaw(0xA);
    *(unsigned int *)(((int)stk + 4)) = (((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530);
    nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x28))));
    motionBoneRaw(0xB);
    nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0x2C))));
    motionBoneRaw(0x7);
    if (t9 == 1) {
        nlRotateAY(0xD500);
        nlRotateAX(0x3800);
    }
    nlObjPut((*(int *)((((t9 << 2) << 1) + 0x8C188FC8))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x8);
    *(unsigned int *)(((int)stk + 4)) = (((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530);
    nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x20))));
    motionBoneRaw(0x9);
    nlObjPut((*(int *)(((*(int *)(((int)stk + 4))) + 0x24))));
    motionBoneRaw(0x6);
    if ((*(int *)(((int)stk + 8))) == 1) {
        nlRotateAY(0xAD00);
        nlRotateAX(0x5600);
    }
    nlObjPut((*(int *)(((((*(int *)(((int)stk + 8))) << 2) << 1) + 0x8C188FC4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x0);
    nlObjPut((*(int *)(((((((t12 << 1) + t12) << 2) << 2) + 0x8C11F530) + 0x0))));
    return (nlPopMatrix(0x1));
}

int nlsndInit(int a4, int a5)
{
    int t0;
    int t73;
    int t1;
    int t4;
    int t6;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t22;
    int t23;
    int t24;
    int t51;
    int t26;
    int t29;
    int t31;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t47;
    int t48;
    int t49;
    int t62;

    t0 = nlsndG2Read((0xC4 + a4));
    *(unsigned int *)0x8C454CF0 = t0;
    t73 = 0xFFFFFFFF;
    if ((unsigned int)t0 >= (unsigned int)0x6F4) {
        if (a5 == 0) {
            *(unsigned int *)0x8C454CB8 = 0x200000;
            t1 = nlsndG2Read(0xA0702C00);
            nlsndG2Write((0x1 | (t1 & 0xFFFE)), 0xA0702C00);
            nlsndG2Write(a5, 0xA0702800);
            t4 = nlsndG2Read(0xA0702C00);
            nlsndG2Write((0x1 | (t4 & 0xFFFE)), 0xA0702C00);
            t6 = nlsndG2Read((a4 + 0x54));
            nlsndG2WriteN(a4, 0xA0800000, ((unsigned int)t6 >> 2));
            nlsndG2Write(a5, 0xA0800050);
            t10 = 0x8;
            t11 = 0xA0800060;
            for (;;) {
                if (t10 == 0) {
                    break;
                }
                nlsndG2Write(0xFFFFFFFF, t11);
                t10 = (t10 - 1);
                t11 = (t11 + 0x4);
            }
            t13 = nlsndG2Read(0xA0702C00);
            t14 = nlsndG2Write((t13 & 0xFFFE), 0xA0702C00);
            t15 = 0x8C454DD4;
            for (;;) {
                if ((unsigned int)t15 >= (unsigned int)0x8C454E34) {
                    break;
                }
                *(unsigned int *)((t15 + 0x0)) = 0xFFFFFFFF;
                *(unsigned int *)((t15 + 0x4)) = 0x0;
                *(unsigned int *)((t15 + 0x8)) = 0x0;
                t15 = (t15 + 0xC);
            }
            t16 = t14;
            t17 = 0x8C454CF4;
            t18 = 0x8C454CF4;
            for (;;) {
                if ((unsigned int)t17 >= (unsigned int)0x8C454DD4) {
                    break;
                }
                t18 = t17;
                t16 = 0x0;
                t18 = (t18 + 0x4);
                *(unsigned char *)((t17 + 0x0)) = 0xFFFFFFFF;
                *(unsigned char *)((t17 + 0x1)) = t16;
                t17 = (t17 + 0x1C);
                *(unsigned int *)((t18 + 0x4)) = 0xFFFFFFFF;
                *(unsigned int *)((t18 + 0x0)) = 0xFFFFFFFF;
            }
            *(unsigned int *)0x8C454CB0 = ((*(int *)((a4 + 0x84))) + 0xA0800000);
            *(unsigned int *)0x8C454CB4 = ((*(int *)((a4 + 0x80))) + 0xA0800010);
            *(unsigned int *)0x8C454CAC = (0xA0800000 + (*(int *)((a4 + 0xC8))));
            *(unsigned int *)0x8C454CA8 = 0xA0800400;
            *(unsigned int *)0x8C454CBC = 0x0;
            *(unsigned int *)0x8C454CA4 = 0x0;
            *(unsigned int *)0x8C454CE8 = 0x8C454CC4;
            *(unsigned int *)0x8C454CC4 = 0x0;
            t22 = 0x0;
            for (;;) {
                t23 = nlsndG2Read(0xA080005C);
                if (t23 == 0) {
                    t22 = (t22 + 0x1);
                    if ((int)t22 >= (int)0x400000) {
                        break;
                    }
                    continue;
                }
                t24 = nlsndG2Read(0xA070289C);
                nlsndG2Write((t24 & 0x7F7), 0xA070289C);
                return 0x0;
            }
            t62 = 0xFFFFFF00;
        } else {
            t51 = 0xFFFFFFFE;
            if (a5 == 0x200) {
                *(unsigned int *)0x8C454CB8 = 0x800000;
                t26 = nlsndG2Read(0xA0702C00);
                nlsndG2Write((0x1 | (t26 & 0xFFFE)), 0xA0702C00);
                nlsndG2Write(a5, 0xA0702800);
                t29 = nlsndG2Read(0xA0702C00);
                nlsndG2Write((0x1 | (t29 & 0xFFFE)), 0xA0702C00);
                t31 = nlsndG2Read((a4 + 0x54));
                nlsndG2WriteN(a4, 0xA0800000, ((unsigned int)t31 >> 2));
                nlsndG2Write(a5, 0xA0800050);
                t35 = 0x8;
                t36 = 0xA0800060;
                for (;;) {
                    if (t35 == 0) {
                        break;
                    }
                    nlsndG2Write(0xFFFFFFFF, t36);
                    t35 = (t35 - 1);
                    t36 = (t36 + 0x4);
                }
                t38 = nlsndG2Read(0xA0702C00);
                t39 = nlsndG2Write((t38 & 0xFFFE), 0xA0702C00);
                t40 = 0x8C454DD4;
                for (;;) {
                    if ((unsigned int)t40 >= (unsigned int)0x8C454E34) {
                        break;
                    }
                    *(unsigned int *)((t40 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned int *)((t40 + 0x4)) = 0x0;
                    *(unsigned int *)((t40 + 0x8)) = 0x0;
                    t40 = (t40 + 0xC);
                }
                t41 = t39;
                t42 = 0x8C454CF4;
                t43 = 0x8C454CF4;
                for (;;) {
                    if ((unsigned int)t42 >= (unsigned int)0x8C454DD4) {
                        break;
                    }
                    t43 = t42;
                    t41 = 0x0;
                    t43 = (t43 + 0x4);
                    *(unsigned char *)((t42 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned char *)((t42 + 0x1)) = t41;
                    t42 = (t42 + 0x1C);
                    *(unsigned int *)((t43 + 0x4)) = 0xFFFFFFFF;
                    *(unsigned int *)((t43 + 0x0)) = 0xFFFFFFFF;
                }
                *(unsigned int *)0x8C454CB0 = ((*(int *)((a4 + 0x84))) + 0xA0800000);
                *(unsigned int *)0x8C454CB4 = ((*(int *)((a4 + 0x80))) + 0xA0800010);
                *(unsigned int *)0x8C454CAC = (0xA0800000 + (*(int *)((a4 + 0xC8))));
                *(unsigned int *)0x8C454CA8 = 0xA0800400;
                *(unsigned int *)0x8C454CBC = 0x0;
                *(unsigned int *)0x8C454CA4 = 0x0;
                *(unsigned int *)0x8C454CE8 = 0x8C454CC4;
                *(unsigned int *)0x8C454CC4 = 0x0;
                t47 = 0x0;
                for (;;) {
                    t48 = nlsndG2Read(0xA080005C);
                    if (t48 == 0) {
                        t47 = (t47 + 0x1);
                        if ((int)t47 >= (int)0x400000) {
                            break;
                        }
                        continue;
                    }
                    t49 = nlsndG2Read(0xA070289C);
                    nlsndG2Write((t49 & 0x7F7), 0xA070289C);
                    return 0x0;
                }
                t51 = 0xFFFFFF00;
            }
            t62 = t51;
        }
        t73 = t62;
    }
    return t73;
}

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

int kmyCopyToTextureRom(int a4, int a5, int a6, int a7)
{
    int t144;
    int t0;
    int t3;
    int t5;
    int t8;
    int t12;
    int t16;
    int t19;
    int t21;
    int t24;
    int t25;
    int t30;
    int t36;
    int t37;
    int t38;
    int t50;
    int t52;
    int t59;
    int t65;
    int t66;
    int t67;
    int t95;
    int t96;
    int t97;

    t144 = 0xEEEE;
    if (a6 == 0) {
    } else {
        t0 = _builtin_get_imask();
        if ((*(int *)0x8C454FAC) == 1) {
            if (((0x1F & a4) == 0) && (((0x1F & a5) == 0) && (t0 == 0))) {
                t3 = ((int (*)(int, int, int, int))((*(int *)0x8C454FB0)))(a5, (a4 + 0xA4000000), (0xFFFFFFE0 & a6), 0x0);
            } else {
                t5 = ((int (*)(int, int, int, int))((*(int *)0x8C454FB4)))(a5, (a4 + 0xA4000000), (0xFFFFFFE0 & a6), a7);
            }
        } else {
            if ((0x1F & a4) != 0) {
                kmyMemCopy((a4 + 0xA4000000), a5, a6);
                if (a7 != 0) {
                    t8 = ((int (*)(int))(a7))(0x0);
                }
            } else {
                if ((0x1F & a5) != 0) {
                    kmyMemCopy((a4 + 0xA4000000), a5, a6);
                    if (a7 != 0) {
                        t12 = ((int (*)(int))(a7))(0x0);
                    }
                } else {
                    if (t0 != 0) {
                        kmyMemCopy((a4 + 0xA4000000), a5, a6);
                        if (a7 != 0) {
                            t16 = ((int (*)(int))(a7))(0x0);
                        }
                    } else {
                        t19 = kmyIsEnabledASyncCopy();
                        if (t19 == 0) {
                            kmyMemCopy((a4 + 0xA4000000), a5, a6);
                            if (a7 != 0) {
                                t21 = ((int (*)(int))(a7))(0x0);
                            }
                        } else {
                            if ((0xFFFFFFE0 & a6) != 0) {
                                t24 = kmyGetInterruptLevel();
                                if (t24 == 0) {
                                    for (;;) {
                                        t25 = kmyGetDMAHANDLE(0x1);
                                        if (t25 != 0) {
                                            break;
                                        }
                                    }
                                    kmySetTextureDMA(t25, a4, a5, (0xFFFFFFE0 & a6));
                                    if (a7 != 0) {
                                        kmySetDMACallback(t25, a7);
                                    }
                                    t30 = kmyRequestDMA(t25);
                                    *(unsigned int *)0x8C470D24 = t30;
                                    if ((0x1F & a6) != 0) {
                                        kmyMemCopy(((a4 + (0xFFFFFFE0 & a6)) + 0xA4000000), (a5 + (0xFFFFFFE0 & a6)), (0x1F & a6));
                                    }
                                    if (a7 == 0) {
                                        t36 = kmyGetInterruptLevel();
                                        if (t36 == 0) {
                                            t37 = kmyIsEnabledASyncCopy();
                                            if (t37 == 0) {
                                                for (;;) {
                                                    t38 = kmyQueryFinishDMA(t30);
                                                    if (t38 == 0x101) {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t50 = kmyGetDMAHANDLE(0x1);
                                    if (t50 == 0) {
                                        kmyMemCopy((a4 + 0xA4000000), a5, a6);
                                        if (a7 != 0) {
                                            t52 = ((int (*)(int))(a7))(0x0);
                                        }
                                    } else {
                                        kmySetTextureDMA(t50, a4, a5, (0xFFFFFFE0 & a6));
                                        if (a7 != 0) {
                                            kmySetDMACallback(t50, a7);
                                        }
                                        t59 = kmyRequestDMA(t50);
                                        *(unsigned int *)0x8C470D24 = t59;
                                        if ((0x1F & a6) != 0) {
                                            kmyMemCopy(((a4 + (0xFFFFFFE0 & a6)) + 0xA4000000), (a5 + (0xFFFFFFE0 & a6)), (0x1F & a6));
                                        }
                                        if (a7 == 0) {
                                            t65 = kmyGetInterruptLevel();
                                            if (t65 == 0) {
                                                t66 = kmyIsEnabledASyncCopy();
                                                if (t66 == 0) {
                                                    for (;;) {
                                                        t67 = kmyQueryFinishDMA(t59);
                                                        if (t67 == 0x101) {
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x1F & a6) != 0) {
                                    kmyMemCopy(((a4 + (0xFFFFFFE0 & a6)) + 0xA4000000), (a5 + (0xFFFFFFE0 & a6)), (0x1F & a6));
                                }
                                if (a7 == 0) {
                                    t95 = kmyGetInterruptLevel();
                                    if (t95 == 0) {
                                        t96 = kmyIsEnabledASyncCopy();
                                        if (t96 == 0) {
                                            for (;;) {
                                                t97 = kmyQueryFinishDMA(t0);
                                                if (t97 == 0x101) {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        t144 = 0x0;
    }
    return t144;
}

int countryNameTagPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t44;
    int t21;
    int t22;
    int t24;
    int t26;
    int t27;
    int t40;
    int t42;
    int stk[27];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    stk[18] = a11;
    t44 = a4;
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 20.0f);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 26.0f);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 17.0f);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 22.0f);
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 24.0f);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 3.0f);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) - 1.0f);
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 8.0f);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 3.0f);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 35.0f);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 29.0f);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 21.0f);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 23.0f);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 28.0f);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 13.0f);
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 6.0f);
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 12.0f);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 37.0f);
            }
                break;
        }
        if ((int)a4 < (int)0x8) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t21 = *(int *)((0x8C10EECC + (a4 << 2)));
            t22 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t21 << 2) + t21) << 2) << 2) + 0x8C339CD0), a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x20)), f4);
            *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 22.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t24 = *(int *)(((a4 << 2) + 0x8C10EE84));
            t42 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))((((((t24 << 2) + t24) << 2) << 2) + 0x8C339CD0), *(Stk3 *)((((int)stk + 28) + 0x20)), f4));
        } else {
            if ((int)a4 < (int)0x10) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
                t26 = *(int *)((0x8C10EECC + (a4 << 2)));
                t27 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))((((((t26 << 2) + t26) << 2) << 2) + 0x8C338600), a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x20)), f4);
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 22.0f);
            }
            if ((int)a4 >= (int)0x10) {
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 13.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t40 = *(int *)(((a4 << 2) + 0x8C10EE84));
            t42 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))((((((t40 << 2) + t40) << 2) << 2) + 0x8C338600), *(Stk3 *)((((int)stk + 28) + 0x20)), f4));
        }
        t44 = t42;
    }
    return t44;
}

int matchNextSetup(int a4)
{
    int t9;
    int t10;
    int t35;
    int t37;
    int t38;
    int t40;
    int t41;
    int t56;
    int t68;
    int t1;
    int t39;

    if (((*(int *)0x8C287D5C) == 0) && (t1 = *(int *)0x8C287ADC, t1 == 4)) {
        *(unsigned int *)0x8C185288 = 0x1;
    }
    *(unsigned int *)0x8C295DAC = 0x0;
    sprSet173FreeAll();
    if (a4 == 0) {
        sprMatchFree();
    }
    if (a4 == 1) {
        t9 = 0x8C185298;
        t10 = 0x8C181628;
        for (;;) {
            if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t9 + 0x0)))) != 0) {
                *(unsigned int *)((t10 + 0x0)) = 0x1;
            }
            t9 = (t9 + 0x2);
            t10 = (t10 + 0x4);
            if ((unsigned int)t9 >= (unsigned int)0x8C1852A0) {
                break;
            }
        }
    }
    if ((*(int *)0x8C181638) != 0) {
        if ((*(int *)0x8C301B9C) == 0) {
            *(unsigned int *)0x8C343784 = ((*(int *)0x8C343784) + (*(int *)0x8C287B04));
        }
        if ((*(int *)0x8C301BA0) == 1) {
            *(unsigned int *)0x8C343788 = ((*(int *)0x8C343788) + (*(int *)0x8C287B00));
        }
        if ((*(int *)0x8C185294) == 0) {
            t35 = *(int *)0x8C287AF0;
            t37 = (int)((int)((*(int *)(((((t35 & 0x1) << 2) + 0x8C287AD0) + 0x0))) + 0x1) % (int)0x6);
            *(unsigned int *)(((((t35 & 0x1) << 2) + 0x8C287AD0) + 0x0)) = t37;
            t38 = t37;
            t40 = 0x8C185294;
            t41 = 0x0;
            for (;;) {
                if ((int)t41 >= (int)(*(int *)0x8C287ADC)) {
                    break;
                }
                t40 = 0x8C287ACC;
                t40 = (t40 + 0x14);
                t39 = (*(int *)((((t41 << 2) + t40) + 0x0)));
                if (t39 != 0) {
                    t39 = 0xC58;
                    t38 = (t41 * 0xD78);
                    t38 = (t38 + 0x8C287D84);
                    t38 = (*(int *)((t39 + t38)));
                    t38 = (t38 << 2);
                    *(unsigned int *)((0x8C287C74 + t38)) = 0x0;
                }
                t41 = (t41 + 0x1);
            }
        }
        t56 = *(int *)0x8C287AF4;
        *(unsigned int *)(((((((t56 & 0x1) << 2) << 1) + (t56 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
        *(unsigned int *)((((((*(int *)0x8C287AF4) & 0x1) << 2) + 0x8C287AD0) + 0x0)) = 0x0;
        *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
        *(unsigned int *)0x8C343254 = 0xFFFFFFFF;
    }
    *(unsigned int *)0x8C287C60 = 0x1;
    sndJingleA1();
    *(unsigned int *)0x8C38BA70 = 0x0;
    *(unsigned int *)0x8C30196C = 0x1;
    *(unsigned int *)0x8C301BEC = 0x1;
    t68 = set_event2(0x38, 0x8C087FF4);
    *(unsigned int *)((t68 + 0x20)) = 0x78;
    vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t68), 200.0f, 240.0f, 0.00999999978f);
    *(unsigned int *)((t68 + 0x24)) = (int)(*(float *)0x8C287A04);
    *(unsigned int *)((t68 + 0x28)) = a4;
    *(unsigned int *)((t68 + 0x2C)) = 0x0;
    *(unsigned int *)((t68 + 0x30)) = 0x0;
    *(unsigned int *)((t68 + 0x34)) = 0x0;
    *(unsigned int *)0x8C185410 = 0x1;
    return (hudFadeInStart(0x8C33D790, 0x200, 0x80, 0x10, 0x6D));
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

void ballBoyRunSteer(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t5;
    int t6;
    int t8;
    int t12;
    int t14;
    int t10;
    int t18;
    int t20;
    int t16;
    int t21;
    int t23;
    int t29;
    int t27;
    int t25;
    int t32;
    int t57;
    int t46;
    int t43;
    int t50;
    int t48;
    int t74;
    float u80;
    float u82;
    float u85;
    int t88;
    int t86;
    int t22;
    int t61;
    int t53;
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a5;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        if ((*(int *)((a4 + 0x5D4))) == 0) {
        } else {
            t5 = nlArcTan2((*(float *)&a8 - (*(float *)((a4 + 0x5A4)))), (*(float *)&a10 - (*(float *)((a4 + 0x5AC)))));
            t6 = *(int *)((a4 + 0x4C));
            *(float *)(((((((t6 << 1) + t6) << 2) << 2) + (a4 + 0x64)) + 0x4)) = 0.0f;
            t8 = *(short *)((a4 + 0x5BC));
            if ((*(int *)(((int)stk + 4))) != 0) {
                t12 = (a4 + 0x64);
                t14 = 0x0;
                if (((int)t5 >= 0) && ((int)t5 <= (int)0x4000)) {
                    t10 = 0x0;
                    if (((int)(unsigned short)t8 >= (int)0xC000) && ((int)(unsigned short)t8 <= (int)0xFFFF)) {
                        t10 = 0x10000;
                    }
                    t12 = 0xC000;
                    t14 = t10;
                }
                t18 = t12;
                t20 = 0x0;
                if (((int)(unsigned short)t8 >= 0) && ((int)(unsigned short)t8 <= (int)0x4000)) {
                    t16 = 0x0;
                    if (((int)t5 >= (int)0xC000) && ((int)t5 <= (int)0xFFFF)) {
                        t16 = 0x10000;
                    }
                    t18 = 0xC000;
                    t20 = t16;
                }
                t21 = *(int *)((a4 + 0x5DC));
                *(unsigned int *)(((int)stk + 4)) = t21;
                if ((t21 != 5) && (t22 = *(int *)(((int)stk + 4)), t22 != 4)) {
                    t23 = (-(((t14 + t5) - t20) - (unsigned short)t8));
                    if ((int)(((t14 + t5) - t20) - (unsigned short)t8) >= 0) {
                        t23 = (((t14 + t5) - t20) - (unsigned short)t8);
                    }
                    t29 = t5;
                    if ((int)t23 > (int)0x500) {
                        t27 = 0x1;
                        if ((int)(((t14 + t5) - t20) - (unsigned short)t8) > 0) {
                        } else {
                            t25 = 0x0;
                            if ((int)(((t14 + t5) - t20) - (unsigned short)t8) < 0) {
                                t25 = 0xFFFFFFFF;
                            }
                            t27 = t25;
                        }
                        t29 = ((((t27 << 2) + t27) << 8) + (unsigned short)t8);
                    }
                    t61 = t29;
                } else {
                    t32 = (-(((t14 + t5) - t20) - (unsigned short)t8));
                    if ((int)(((t14 + t5) - t20) - (unsigned short)t8) >= 0) {
                        t32 = (((t14 + t5) - t20) - (unsigned short)t8);
                    }
                    t57 = t5;
                    if ((int)t32 > (int)0x500) {
                        if ((*(int *)((a4 + 0x5C4))) != 9) {
                            t46 = ((unsigned short)t8 + 0x500);
                            if ((*(int *)((a4 + 0x5C4))) == 8) {
                            } else {
                                t43 = t18;
                                if ((*(int *)((a4 + 0x5C4))) == 7) {
                                    t43 = ((unsigned short)t8 - 0x500);
                                }
                                t46 = t43;
                            }
                            t53 = t46;
                        } else {
                            t50 = 0x1;
                            if ((int)(((t14 + t5) - t20) - (unsigned short)t8) > 0) {
                            } else {
                                t48 = 0x0;
                                if ((int)(((t14 + t5) - t20) - (unsigned short)t8) < 0) {
                                    t48 = 0xFFFFFFFF;
                                }
                                t50 = t48;
                            }
                            t53 = ((((t50 << 2) + t50) << 8) + (unsigned short)t8);
                        }
                        t57 = t53;
                    }
                    t61 = t57;
                }
                *(unsigned short *)((a4 + 0x5BC)) = t61;
            }
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0x5BC))));
            t74 = *(int *)((a4 + 0x4C));
            nlCalcPoint((((((t74 << 1) + t74) << 2) << 2) + (a4 + 0x64)), (((int)stk + 4) + 0x4));
            nlPopMatrix(0x1);
            nlAddVector((0x5A4 + a4), (((int)stk + 4) + 0x4));
            if (((*(int *)0x8C295DDC) & 32) == 0) {
                u80 = *(float *)((a4 + 0x5AC));
                u82 = (-u80);
                if (!(0.0f > u80)) {
                    u82 = (*(float *)((a4 + 0x5AC)));
                }
                if (5.0f > u82) {
                    u85 = *(float *)((a4 + 0x5AC));
                    t88 = 0x1;
                    if (u85 > 0.0f) {
                    } else {
                        t86 = 0x0;
                        if (0.0f > u85) {
                            t86 = 0xFFFFFFFF;
                        }
                        t88 = t86;
                    }
                    *(float *)((a4 + 0x5AC)) = ((float)t88 * 5.0f);
                }
            }
        }
    }
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
