/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int ADXT_ExecServer(void);
int resetBackColorZ(int, int, int);
int SJUNI_Reset(int);
int advPeriOff(void);
int ambLevelReset(void);
int commonViewInit(void);
int courtPropsInit(void);
int crowdInit(void);
int crowdSetup(int);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuSetValue(int, int, int);
int emotFaceVtxGet(int, int, int);
float emotRetOne(void);
int fadeScreenStart(int, int, int, int, int, int);
int fileLoadClose(void);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int kmiFLWCTRLEORCallBackFunc(int, int, int, int);
int kmyCreateRegionArray(int);
int kmyResetRenderer(void);
int mainCheckDrive(void);
int matchPropStart(void);
int motionAdvance(int);
int motionRootAtFrame(int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent2(int);
int nlInitEvent(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int restart_t404(void);
int resultFlagsClear(void);
int sceneObjPutInit(void);
int seSystemApply(void);
int shadowNullCb(void);
int shadowVolPutDirA(void);
int sndFadeFlagsClear(void);
int sndSeDecide(void);
int sprAdvInit(void);
int sprPutAlpha(int, float);
int staffMorphInit(void);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int strmExec(void);
int thunk_nlObjPutMvInit(int);
int thunk_nlSprPut(int);
int titleSprLoad(void);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int umpCallSpareA(void);
int umpCallSpareB(void);
typedef struct { int w[3]; } Stk3;
int vecAdd(int, int, int, int, int, Stk3, Stk3);
int vecDiv(int, int, int, int, int, float);
int FUN_8c0e426a(int a4);
int FUN_8c08d78c(int a4);
int FUN_8c0bdf26(int a4, int a5);
int FUN_8c0b5f78(int a4);
int SJUNI_Create(int a4, int a5, int a6);
void kmiFLWCTRLCheckTimeOut(int a4, int a5, int a6, int a7);
int adxt_start_sj(int a4, int a5);
int matchSceneInit(void);
int FUN_8c08b24c(int a4);
int FUN_8c08b218(int a4);
void FUN_8c0843e8(int a4);
void FUN_8c084302(int a4);
int FUN_8c010da8(void);

int FUN_8c0e426a(int a4)
{
    int stk[10];
    register int t6;
    register int t27;
    register int t54;
    register int t59;
    register int t55;
    register int t75;
    register int t81;
    register int t82;
    int t84;
    register int t85;
    register int t86;
    register int t40;
    register int t10;
    register int t15;
    register int t34;
    register int t21;
    register int t50;
    register int t56;
    register int t69;
    int t76;
    register int t83;
    register int t95;
    register int t96;
    register int t97;
    int t98;

    *(int *)((int)stk + 32) = a4;
    nlInitEvent();
    sndFadeFlagsClear();
    *(unsigned int *)0x8C20D150 = 0x1;
    *(unsigned int *)0x8C20D15C = 0x0;
    *(unsigned int *)0x8C421F60 = 0x1;
    *(unsigned int *)0x8C38BA78 = 0x1;
    *(unsigned int *)0x8C38BA74 = 0x1;
    *(unsigned int *)0x8C38BA70 = 0x1;
    seSystemApply();
    *(unsigned int *)0x8C185410 = 0x0;
    sceneObjPutInit();
    sprAdvInit();
    advPeriOff();
    t6 = *(int *)0x8C20D15C;
    if ((int)t6 < (int)0xF) {
        if (t6 == 0) {
            *(unsigned int *)0x8C421F60 = 0x1;
            *(unsigned int *)0x8C1D8638 = 0x0;
            commonViewInit();
            fadeScreenStart(0x3, 0x0, 0x10, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        } else {
            t10 = 0xF;
        }
        if ((*(int *)0x8C20D15C) == 14) {
            resetBackColorZ(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        } else {
            t15 = t10;
        }
        t40 = t15;
    } else {
        if (1 && ((int)t6 < (int)0x1E)) {
            sprPutAlpha(0x8C40C5D4, ((float)(t6 - 15) / 15.0f));
        } else {
            t27 = 0xF;
            if ((int)t6 >= (int)0x1E) {
                if (!((float)t6 > 330.0f)) {
                    thunk_nlSprPut(0x8C40C5D4);
                } else {
                    t21 = 0xF;
                }
                t27 = t21;
            }
            t34 = t27;
        }
        t40 = t34;
    }
    if ((float)(*(int *)0x8C20D15C) == 310.0f) {
        fileLoadClose();
        fileLoadStart(0x8CA80000, 0x8C126EE8, 0x0);
        fadeScreenStart(0x3, 0x1, 0x15, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    } else {
        t50 = t40;
    }
    t54 = *(int *)0x8C20D15C;
    t59 = t54;
    if ((float)t54 > 310.0f) {
        t55 = fileLoadPoll(t50);
        if (t55 == 1) {
            *(unsigned int *)0x8C1D8638 = 0x1;
            t56 = 0x8C1D8638;
        }
        t59 = t56;
    }
    if ((float)(*(int *)0x8C20D15C) == 329.0f) {
        resetBackColorZ(0xFF000000, 0xFF000000, 0xFF000000);
    } else {
        t69 = t59;
    }
    t75 = *(int *)0x8C20D15C;
    if (((float)t75 > 330.0f) && (t76 = *(int *)0x8C1D8638, t76 != 0)) {
        nlSetCommonTextureOffset(0x0);
        nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8D);
        stageFreeAll();
        stageTexSetGarbagedAll();
        t81 = titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
        *(unsigned int *)0x8C20D150 = 0x2;
        *(unsigned int *)0x8C20D15C = 0x0;
        return t81;
    }
    if ((310.0f > (float)t75) && ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8)) {
        t82 = 0x8C0E4438;
        t84 = t69;
        t85 = 0x8C29B898;
        for (;;) {
            t86 = *(int *)((t85 + 0x0));
            t85 = (t85 + 0x4);
            if (((*(int *)((t86 + 0x10))) & 0x8) != 0) {
                t84 = (*(int *)((t86 + 0x8)));
                if (((t84 & 0x200) != 0) && ((t95 = *(int *)((t86 + 0x8)), t83 = t95, t96 = ((t84 & 0x200) == 0), t84 = 0x400, (t83 & t84) != 0) && ((t97 = *(int *)((t86 + 0x8)), t82 = t97, (t82 & 2) != 0) && (t98 = *(int *)((t86 + 0x8)), t82 = t98, (t82 & 5) != 0)))) {
                    if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                        t84 = (*(int *)0x8C20D15C);
                        t84 = (t84 + 0x1);
                        *(unsigned int *)0x8C20D15C = t84;
                        return t82;
                    }
                    continue;
                }
                t82 = (*(int *)0x8C20D150);
                if (t82 != 3) {
                    break;
                }
                if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                    t84 = (*(int *)0x8C20D15C);
                    t84 = (t84 + 0x1);
                    *(unsigned int *)0x8C20D15C = t84;
                    return t82;
                }
                continue;
            }
            if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                t84 = (*(int *)0x8C20D15C);
                t84 = (t84 + 0x1);
                *(unsigned int *)0x8C20D15C = t84;
                return t82;
            }
        }
        nlInitEvent();
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        sndSeDecide();
        *(unsigned int *)0x8C421F74 = 0x0;
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C421F68 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C1D8278 = 0x1;
        titleSprLoad();
        fileLoadClose();
        nlSetCommonTextureOffset(0x0);
        return nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8D);
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return 0x8C0E4438;
}

int FUN_8c08d78c(int a4)
{
    int stk[29];
    register int t2;
    register float u3;
    register int t4;
    register int t6;
    register int t7;
    register float u11;
    register int t17;
    register int t31;
    register float u32;
    register int t33;
    register int t35;
    register int t36;
    register float u40;
    register int t46;
    register int t73;
    register int t75;
    register int t81;

    motionAdvance((*(int *)((a4 + 0x30))));
    t2 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 44)) = t2;
    u3 = *(float *)((t2 + 0xC));
    t4 = *(int *)(((int)stk + 44));
    *(int *)((int)stk + 40) = (((int)stk + 44) + 0x28);
    motionRootAtFrame(t4, (int)u3, 0x0, 0x0, (((int)stk + 44) + 0x28));
    t6 = *(int *)((a4 + 0x30));
    t7 = *(int *)((t6 + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x1C)) = *(struct mv3 *)((((((t7 << 1) + t7) << 2) << 2) + (t6 + 0x60))); }
    nlPushUnitMatrix();
    *(float *)(((int)stk + 76)) = 0.0f;
    nlCalcPoint((((int)stk + 44) + 0x1C), (((int)stk + 44) + 0x28));
    nlPopMatrix(0x1);
    u11 = *(float *)(((int)stk + 92));
    if (u11 > 0.0f) {
        *(float *)(((int)stk + 92)) = (-u11);
    }
    nlAddVector(((*(int *)((a4 + 0x30))) + 0xAE8), (((int)stk + 44) + 0x28));
    nlPushMatrix(0x0);
    t17 = *(int *)((a4 + 0x30));
    nlTranslate((*(float *)((t17 + 0xAE8))), (*(float *)((t17 + 0xAEC))), (*(float *)((t17 + 0xAF0))));
    nlRotateAY(0x8000);
    playerPut((*(int *)((a4 + 0x30))), 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
    *(volatile int *)((a4 + 0x30));
    shadowNullCb();
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 4) {
        motionAdvance((*(int *)((a4 + 0x34))));
        t31 = *(int *)((a4 + 0x34));
        *(unsigned int *)(((int)stk + 44)) = t31;
        u32 = *(float *)((t31 + 0xC));
        t33 = *(int *)(((int)stk + 44));
        *(int *)((int)stk + 40) = (((int)stk + 44) + 0x10);
        motionRootAtFrame(t33, (int)u32, 0x0, 0x0, (((int)stk + 44) + 0x10));
        t35 = *(int *)((a4 + 0x34));
        t36 = *(int *)((t35 + 0x48));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0x4)) = *(struct mv3 *)((((((t36 << 1) + t36) << 2) << 2) + (t35 + 0x60))); }
        nlPushUnitMatrix();
        *(float *)(((int)stk + 52)) = 0.0f;
        nlCalcPoint((((int)stk + 44) + 0x4), (((int)stk + 44) + 0x10));
        nlPopMatrix(0x1);
        u40 = *(float *)(((int)stk + 68));
        if (u40 > 0.0f) {
            *(float *)(((int)stk + 68)) = (-u40);
        }
        nlAddVector(((*(int *)((a4 + 0x34))) + 0xAE8), (((int)stk + 44) + 0x10));
        nlPushMatrix(0x0);
        t46 = *(int *)((a4 + 0x34));
        nlTranslate((*(float *)((t46 + 0xAE8))), (*(float *)((t46 + 0xAEC))), (*(float *)((t46 + 0xAF0))));
        nlRotateAY(0x8000);
        playerPut((*(int *)((a4 + 0x34))), 0x0, 0x0, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4), *(int *)((int)stk + 44 + 8), *(int *)((int)stk + 44 + 12), *(int *)((int)stk + 44 + 16), *(int *)((int)stk + 44 + 20), *(int *)((int)stk + 44 + 24), *(int *)((int)stk + 44 + 28));
        *(volatile int *)((a4 + 0x34));
        shadowNullCb();
        nlPopMatrix(0x1);
    }
    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C32DDA4) = *(struct mv3 *)(((*(int *)((a4 + 0x30))) + 0xAF4)); }
    if ((*(int *)0x8C287ADC) == 4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0xAF4 + (*(int *)((a4 + 0x34))))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((*(int *)((a4 + 0x30))) + 0xAF4)); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecAdd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(Stk3 *)((int)stk + 8), *(Stk3 *)((int)stk + 20));
        *(int *)((int)stk + 28) = 0x8C32DDA4;
        vecDiv(0x0, 0x0, 0x0, 0x0, 0x8C32DDA4, (1.0f + 1.0f));
    }
    t73 = *(int *)((a4 + 0x24));
    t75 = t73;
    if (t73 == 90) {
        t75 = (fadeScreenStart(0x3, 0x1, 0x1F, 0x0, *(int *)((int)stk + 44), *(int *)((int)stk + 44 + 4)));
    }
    t81 = t75;
    if ((int)(*(int *)((a4 + 0x24))) >= (int)0x78) {
        *(unsigned int *)0x8C30196C = 0x0;
        *(unsigned int *)0x8C185410 = 0x0;
        *(unsigned int *)0x8C20D14C = 0x2;
        *(unsigned int *)0x8C20D150 = 0x0;
        *(unsigned int *)0x8C301970 = 0x0;
        t81 = 0x8C20D14C;
    }
    return t81;
}

int FUN_8c0bdf26(int a4, int a5)
{
    int stk[22];
    register float t1;
    register float t4;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t14;
    register int t17;
    register int t18;
    register int t20;
    register int t21;
    register float u24;
    register float u26;
    register int t28;
    register int t29;
    register int t31;
    register int t32;
    register float u35;
    register float u37;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register float u45;
    register float u47;
    register int t48;

    *(unsigned int *)(((int)stk + 4)) = ((a5 * 0x270) + 0x8C34B4F4);
    *(volatile int *)((((a5 * 0x270) + 0x8C34B4F4) + 0x26C));
    t1 = emotRetOne();
    *(volatile int *)(((*(int *)(((int)stk + 4))) + 0x26C));
    t4 = emotRetOne();
    *(unsigned int *)(((int)stk + 16)) = (a4 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((a4 << 2) + 0x8C1AA4BC)));
    *(unsigned int *)(((int)stk + 12)) = (emotFaceVtxGet(a4, 0x0, 0x0));
    *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0)) = 0x0;
    *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)) = 0x0;
    *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 16))) + 0x8C1AA504);
    t8 = 0x0;
    t9 = 0x0;
    t10 = a5;
    for (;;) {
        t11 = emotFaceVtxGet(a4, t8, 0x0);
        if (t11 != -1) {
            t10 = (*(int *)(((int)stk + 8)));
            t10 = (t10 + ((emotFaceVtxGet(a4, t8, 0x1)) << 2));
            t14 = emotFaceVtxGet(a4, t8, 0x0);
            if ((*(int *)(((int)stk + 12))) != t14) {
                t9 = (t9 + 0x3);
            }
            *(unsigned int *)(((((int)stk + 4) + 0x1C) + 0x0)) = t9;
            *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0)) = (t9 + 0x1);
            *(unsigned int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0)) = (t9 + 0x2);
            t17 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
            t18 = *(int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0));
            t20 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
            t21 = *(int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0));
            u24 = ((*(float *)((((((t18 << 1) + t18) << 2) + t20) + 0x0))) * t1);
            u24 = u24 + ((1.0f - t1) - t4) * (*(float *)((((((t17 << 1) + t17) << 2) + t20) + 0x0)));
            u26 = u24;
            u26 = u26 + t4 * (*(float *)((((((t21 << 1) + t21) << 2) + t20) + 0x0)));
            *(float *)((t10 + 0x0)) = u26;
            *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) | 0x1);
            t28 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
            t10 = (t10 + 0x4);
            t29 = *(int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0));
            t31 = *(int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0));
            t32 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
            u35 = ((*(float *)((((((t29 << 1) + t29) << 2) + t32) + 0x4))) * t1);
            u35 = u35 + ((1.0f - t1) - t4) * (*(float *)((((((t28 << 1) + t28) << 2) + t32) + 0x4)));
            u37 = u35;
            u37 = u37 + t4 * (*(float *)((((((t31 << 1) + t31) << 2) + t32) + 0x4)));
            *(float *)((t10 + 0x0)) = u37;
            t10 = (t10 + 0x4);
            t38 = *(int *)(((((int)stk + 4) + 0x1C) + 0x0));
            t39 = *(int *)((((((int)stk + 4) + 0x1C) + 0x4) + 0x0));
            t41 = *(int *)((((((int)stk + 4) + 0x1C) + 0x8) + 0x0));
            t42 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
            u45 = ((*(float *)((((((t39 << 1) + t39) << 2) + t42) + 0x8))) * t1);
            u45 = u45 + ((1.0f - t1) - t4) * (*(float *)((((((t38 << 1) + t38) << 2) + t42) + 0x8)));
            u47 = u45;
            u47 = u47 + t4 * (*(float *)((((((t41 << 1) + t41) << 2) + t42) + 0x8)));
            *(float *)((t10 + 0x0)) = u47;
            t48 = emotFaceVtxGet(a4, t8, 0x0);
            t8 = (t8 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = t48;
            continue;
        }
        break;
    }
    return t11;
}

int FUN_8c0b5f78(int a4)
{
    register int t0;
    register int t1;

    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x0;
        *(unsigned short *)0x8C287A38 = 0xDC00;
        *(unsigned short *)0x8C287A3C = 0xDC00;
        *(unsigned short *)0x8C287A3A = 0xDC00;
        *(unsigned short *)0x8C287A3E = 0xDC00;
        *(unsigned int *)0x8C287A40 = 0x1;
        thunk_nlObjPutMvInit(0x80);
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x1;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        thunk_nlObjPutMvInit(0xE6);
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x2;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x3;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t0 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t0, 0x0);
        restart_t404();
    }
    t0 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
    if (t0 == 1) {
        *(unsigned int *)0x8C1891EC = (*(int *)0x8C1891E8);
        *(unsigned int *)0x8C1891F4 = (*(int *)0x8C1891F0);
        *(unsigned int *)0x8C1891F0 = 0x4;
        *(unsigned short *)0x8C287A38 = 0x9C00;
        *(unsigned short *)0x8C287A3C = 0x9C00;
        *(unsigned short *)0x8C287A3A = 0x9600;
        *(unsigned short *)0x8C287A3E = 0x9600;
        *(unsigned int *)0x8C287A40 = 0x1;
        t1 = dbgMenuGetSelect();
        dbgMenuSetValue((*(int *)((a4 + 0x14))), t1, 0x0);
        return restart_t404();
    }
    return t0;
}

int SJUNI_Create(int a4, int a5, int a6)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46FBD4) + 0x4))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x40) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 64) {
        return 0x0;
    }
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x5)) = a4;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x0)) = 0x8C20C92C;
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x5)) = a4;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x8)) = 0x8C20ADAC;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0xC)) = a5;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x10)) = ((unsigned int)((unsigned int)a6 >> 2) >> 2);
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x28)) = 0x8C1F383A;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x2C)) = (0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2));
    SJUNI_Reset((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)));
    return (0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2));
}

void kmiFLWCTRLCheckTimeOut(int a4, int a5, int a6, int a7)
{
    register int t7;

    if ((*(int *)0x8C4607B4) != 0) {
        *(unsigned int *)0x8C4607DC = ((*(int *)0x8C4607DC) - 1);
        if ((*(int *)0x8C4607DC) == 0) {
            *(unsigned int *)0x8C45F7F4 = ((*(int *)0x8C45F7F4) + 0x1);
            kmiFLWCTRLEORCallBackFunc(a4, a5, a6, a7);
            kmyResetRenderer();
            if ((*(int *)0x8C45F7F0) != 1) {
                t7 = 0x0;
                for (;;) {
                    kmyCreateRegionArray((*(int *)(((0x8C45F79C + t7) + 0x0))));
                    t7 = (t7 + 0x4);
                    if ((unsigned int)t7 >= (unsigned int)0x8) {
                        break;
                    }
                }
            }
            *(unsigned int *)0x8C4607DC = (*(int *)0x8C45F7F0);
        }
    }
}

int adxt_start_sj(int a4, int a5)
{
    register int t1;
    register int t6;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (a4 + 0x18));
        t0 = (*(int *)((t0 + 0x0)));
        t6 = ((int (*)(int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0, a5);
        t1 = (t1 + 0x1);
    }
    ADXSJD_SetInSj((*(int *)((a4 + 0x4))), a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    ADXSJD_Start((*(int *)((a4 + 0x4))));
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned char *)((a4 + 0x71)) = 0x0;
    return 0x71;
}

int matchSceneInit(void)
{
    *(unsigned int *)0x8C18D2B8 = 0x0;
    if ((*(int *)0x8C1891E8) == 2) {
        staffMorphInit();
    }
    if ((*(int *)0x8C1891E8) == 4) {
        matchPropStart();
    }
    resultFlagsClear();
    crowdSetup((*(int *)0x8C1891E8));
    crowdInit();
    courtPropsInit();
    return ambLevelReset();
}

int FUN_8c08b24c(int a4)
{
    nlPushMatrix(0x0);
    *(volatile float *)0x8C287A24;
    *(volatile float *)0x8C287A20;
    *(volatile float *)0x8C08B314;
    *(volatile float *)0x8C287A1C;
    *(volatile int *)(((a4 << 2) + 0x8C18256C));
    shadowVolPutDirA();
    return nlPopMatrix(0x1);
}

int FUN_8c08b218(int a4)
{
    nlPushMatrix(0x0);
    *(volatile float *)0x8C287A24;
    *(volatile float *)0x8C287A20;
    *(volatile float *)0x8C287A1C;
    *(volatile float *)0x8C08B314;
    shadowVolPutDirA();
    return nlPopMatrix(0x1);
}

void FUN_8c0843e8(int a4)
{
    register int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = *(int *)((a4 + 0x1C));
        *(unsigned int *)((a4 + 0x1C)) = (t1 - 1);
        if (t1 == 0) {
            *(volatile int *)((a4 + 0x14));
            umpCallSpareB();
            nlCloseEvent2(a4);
    return;
        }
        return;
    }
}

void FUN_8c084302(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        *(volatile int *)((a4 + 0x14));
        umpCallSpareA();
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c010da8(void)
{
    *(unsigned int *)0x8C20D124 = ((*(int *)0x8C20D124) + 0x1);
    strmExec();
    ADXT_ExecServer();
    mainCheckDrive();
    return 0x0;
}
