/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXERR_EntryErrFunc(int, int);
int thunk_ADXERR_EntryErrFunc(int, int);
int ADXT_Init(void);
int BupInit(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int _slow_strcmp1(int, int);
int buCalcBackupFileSize(int, int, int);
int buGetDiskInfo(int, int);
int buGetLastError(int);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int, int, int);
int buStat(int);
int camSceneInit(void);
int charaTexFree(int);
int cpuAimPointSet(int, int, float, float);
int cpuShotRange(int, int, int, int, int);
int dbgHookNop(void);
int dbgLockClear(void);
int eepromCfgInit(void);
int fileLoadReset(void);
int gdFsEntryErrFuncAll(int, int);
int gdFsInit(int, int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int modelSwapMaterial(int, int, int);
int motFileInit(void);
int msgWinSet(int, int);
int mtxGetAngles(int);
int nlArcTan2(float, float);
float nlCos(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlInitHeapMemory2(int, int);
int nlInitInterruptDC(void);
int nlInitLibraryDC(int, int, int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlSetIntrFunction(int, int);
int nlSetPalExtMode(int);
float nlSin(int);
int nlTranslate(float, float, float);
int padInit(void);
int padLcdClear(int);
int padLcdMessage(int);
int padVmsBeep(int, int);
int selCellClear(int);
int sndFadeFlagsClear(void);
extern int sprPutAtAlpha();
int syCblCheck(void);
int syHwInit(void);
int syHwInit2(void);
int syRtcGetDate(int);
int syRtcInit(void);
int sysInitGraphics(void);
int sysVideoSelect(void);
int uniformTexLoad(int, int, int);
int uniformTexRestore(int);
int vecMake(int, int, int, int, int, float, float, float);
int sysInit(void);
int hudFont2DigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int BupSaveFile(int a4, int a5, int a6, int a7);
float cpuReachPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int entryPortLeave(int a4, int a5, int a6);
int cpuDblAimAddRange(int a4, int a5);
int cpuDblAimAddRange2(int a4, int a5);
int uniformPreviewPut(int a4, int a5);
int sunPut(int a4, int a5, int a6, float f4);
float nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9);





float cpuReachPoint(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int t8;
    int t4;
    int t11;
    float u12;
    float u13;
    float u16;
    int t19;
    int t20;
    int t23;
    int t25;
    float u27;
    float u28;
    float u29;
    int t30;
    int t34;
    int t35;
    int t36;
    float u37;
    float u38;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    float t72;
    float u73;
    float u74;
    int t77;
    int t78;
    int t79;
    float u80;
    float u82;
    float u83;
    float u84;
    float u89;
    float u95;
    int t96;
    int t2;
    int t3;
    int t51;
    int t52;
    float u53;
    float u54;
    float u56;
    float u57;
    int t58;
    int t41;
    int t42;
    float u43;
    float u44;
    float u45;
    float u46;
    int t47;
    int t75;
    int t76;
    float u81;
    int stk[18];

    t0 = *(int *)((a4 + 0xB5C));
    t8 = a6;
    if ((((*(int *)((a4 + 0xB60))) & 0x100) == 0) && ((t2 = *(int *)((a4 + 0xC5C)), (int)t2 < (int)0x9) || (t3 = *(int *)((a4 + 0xC5C)), (int)t3 > (int)0xC))) {
    } else {
        t4 = (a6 - 15);
        if ((int)(a6 - 15) < (int)0x1) {
            t4 = 0x1;
        }
        t8 = t4;
    }
    t11 = *(int *)((a4 + 0xC58));
    *(unsigned int *)(((int)stk + 20)) = ((t11 * 0x6C) + 0x8C102424);
    *(unsigned int *)(((int)stk + 16)) = 0x8C102424;
    u12 = *(float *)(((((t11 * 0x6C) + 0x8C102424) + 0x28) + 0x4));
    u13 = *(float *)0x8C102450;
    *(float *)(((int)stk + 8)) = ((*(float *)(((((t11 * 0x6C) + 0x8C102424) + 0x28) + 0x0))) / (*(float *)0x8C10244C));
    u16 = *(float *)((a4 + 0xB00));
    t19 = nlArcTan2((u16 * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30)))), (-(u16 * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28))))));
    t20 = ((~(((~(((int)t19 >> 12) + 0x1)) + 0x1) & 0xF)) + 0x1);
    if ((int)(((int)t19 >> 12) + 0x1) >= 0) {
        t20 = ((((int)t19 >> 12) + 0x1) & 0xF);
    }
    t23 = (int)((unsigned int)((int)((unsigned int)t20 + (unsigned int)0x0)) + ((((int)0x0 > (int)t20)) ? 1u : 0u));
    t25 = ((~(((~((-(t23 >> 1)) + 0xA)) + 0x1) & 0x7)) + 0x1);
    if ((int)((-(t23 >> 1)) + 0xA) >= 0) {
        t25 = (((-(t23 >> 1)) + 0xA) & 0x7);
    }
    u27 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
    u28 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
    u29 = (u28 * u28);
    u29 = u29 + u27 * u27;
    t30 = (int)(_builtin_sqrtf(u29) * 4.0f);
    if ((int)(int)(_builtin_sqrtf(u29) * 4.0f) > (int)0x3) {
        t30 = 0x3;
    }
    if (t30 == 0) {
        t51 = (*(int *)((((t25 << 2) + 0x8C181540) + 0x4)));
        t52 = (*(int *)0x8C181540);
        u53 = (1.0f - (_builtin_sqrtf(u29) * 4.0f));
        u54 = (1.0f - ((0.25f - _builtin_sqrtf(u29)) * 4.0f));
        u56 = _builtin_sqrtf(u29);
        u57 = ((0.25f - _builtin_sqrtf(u29)) * 4.0f);
        t58 = (int)(_builtin_sqrtf(u29) * 4.0f);
    } else {
        if (t30 == 3) {
            t34 = *(int *)((0x8C181540 + ((t25 + 0x11) << 2)));
            t41 = t34;
            t42 = t34;
            u43 = (1.0f - ((_builtin_sqrtf(u29) + -0.75f) * 4.0f));
            u44 = (1.0f - ((1.0f - _builtin_sqrtf(u29)) * 4.0f));
            u45 = ((1.0f - _builtin_sqrtf(u29)) * 4.0f);
            u46 = -0.75f;
            t47 = (int)(_builtin_sqrtf(u29) * 4.0f);
        } else {
            t35 = *(int *)((0x8C181540 + ((((((t30 - 1) << 2) << 1) + t25) + 0x1) << 2)));
            t36 = *(int *)((0x8C181540 + (((((t30 << 2) << 1) + t25) + 0x1) << 2)));
            u37 = (_builtin_sqrtf(u29) - ((float)t30 * 0.25f));
            u38 = (((float)(t30 + 0x1) * 0.25f) - _builtin_sqrtf(u29));
            t41 = t36;
            t42 = t35;
            u43 = (1.0f - (u37 * 4.0f));
            u44 = (1.0f - (u38 * 4.0f));
            u45 = (u37 * 4.0f);
            u46 = (u38 * 4.0f);
            t47 = (t30 + 0x1);
        }
        t51 = t41;
        t52 = t42;
        u53 = u43;
        u54 = u44;
        u56 = u46;
        u57 = 0.25f;
        t58 = t47;
    }
    t60 = (t8 + 0x1);
    if ((int)(t8 + 0x1) > (int)0x50) {
        t60 = 0x50;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t62 = t51;
    t63 = t52;
    t64 = a5;
    for (;;) {
        t65 = *(int *)(((int)stk + 4));
        t66 = *(int *)((t63 + 0x0));
        t67 = *(int *)((t62 + 0x0));
        *(unsigned int *)(((int)stk + 12)) = ((((t65 << 8) << 2) << 2) << 1);
        *(float *)((t64 + 0x0)) = (*(float *)&a8 - ((((*(float *)((a4 + 0xB00))) * (nlSin(((((t65 << 8) << 2) << 2) << 1))))) * 10.0f));
        t72 = nlCos((*(int *)(((int)stk + 12))));
        u73 = *(float *)((a4 + 0xB00));
        u74 = *(float *)&a10;
        u74 = u74 + 10.0f * (u73 * t72);
        *(float *)((t64 + 0x8)) = u74;
        t77 = t60;
        t78 = t66;
        t79 = t67;
        u80 = 10.0f;
        u82 = u74;
        u83 = (u73 * t72);
        u84 = f4;
        for (;;) {
            if (t77 == 0) {
                break;
            }
            t76 = 0x4;
            u80 = (*(float *)((t78 + 0x0)));
            t76 = (t76 + t78);
            u84 = (*(float *)((a4 + 0xB00)));
            t77 = (t77 - 1);
            u82 = (*(float *)((t79 + 0x0)));
            u83 = u84;
            u83 = (u83 * u80);
            u81 = u84;
            u81 = (u81 * u82);
            t75 = 0xB00;
            u82 = (*(float *)((t64 + 0x0)));
            u83 = (u83 * u53);
            t75 = (t75 + a4);
            u81 = (u81 * u54);
            u80 = (u12 / u13);
            u83 = (-u83);
            u83 = (u83 - u81);
            u89 = u82;
            u89 = u89 + u80 * u83;
            u82 = u89;
            *(float *)((t64 + 0x0)) = u82;
            u84 = (*(float *)((t75 + 0x0)));
            t75 = 0x4;
            u80 = (*(float *)((t76 + 0x0)));
            t75 = (t75 + t79);
            u83 = u84;
            u83 = (u83 * u80);
            u82 = (*(float *)((t75 + 0x0)));
            u81 = u84;
            u83 = (u83 * u53);
            u83 = (-u83);
            u81 = (u81 * u82);
            t75 = ((int)stk + 4);
            t75 = (t75 + 0x4);
            u82 = (*(float *)((t64 + 0x8)));
            u80 = (*(float *)((t75 + 0x0)));
            t79 = (t79 + 0x8);
            t78 = (t78 + 0x8);
            u81 = (u81 * u54);
            u83 = (u83 - u81);
            u95 = u82;
            u95 = u95 + u80 * u83;
            u82 = u95;
            *(float *)((t64 + 0x8)) = u82;
        }
        t96 = *(int *)(((int)stk + 4));
        t62 = (t62 + 0x4);
        t64 = (t64 + 0xC);
        t63 = (t63 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = (t96 + 0x1);
        if ((int)(t96 + 0x1) >= (int)0x8) {
            break;
        }
    }
    return u80;
}

int entryPortLeave(int a4, int a5, int a6)
{
    int t1;
    int t78;
    int t4;
    int t66;
    int t6;
    int t54;
    int t8;
    int t9;
    int t53;

    *(unsigned int *)0x8C18175C = (*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0)));
    t1 = *(int *)0x8C287D5C;
    t78 = t1;
    if (t1 != 1) {
        t4 = *(short *)(((a4 << 1) + 0x8C185298));
        t66 = (a4 << 2);
        if (((*(int *)((0x8C181628 + (a4 << 2)))) == 0) || (a5 != 0)) {
            t6 = *(short *)0x8C343262;
            *(unsigned short *)0x8C343262 = (t6 & (~t4));
            t54 = (t6 & (~t4));
            if (a5 == 0) {
            } else {
                *(unsigned int *)(((0x8C343764 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343784 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343804 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
                *(unsigned int *)((0x8C181628 + (a4 << 2))) = 0x0;
                if ((*(int *)0x8C287ADC) == 4) {
                    t8 = 0x8C185438;
                    t9 = 0x8C343ADC;
                    for (;;) {
                        if ((*(int *)((t8 + 0x0))) == (*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x4)))) {
                            *(unsigned int *)((t9 + 0x0)) = 0x0;
                        }
                        t8 = (t8 + 0x4);
                        t9 = (t9 + 0x4);
                        if ((unsigned int)t8 >= (unsigned int)0x8C185448) {
                            break;
                        }
                    }
                }
                *(unsigned int *)(((a4 << 2) + 0x8C185428)) = 0xFFFFFFFF;
                charaTexFree((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0))));
                if ((*(int *)(((((*(int *)(((a4 << 2) + 0x8C3437C4))) * 0x38) + 0x8C343264) + 0x30))) != -1) {
                    uniformTexRestore((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))));
                }
                selCellClear((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0))));
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
                *(unsigned short *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x30)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x34)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x8)) = 0x1;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x4)) = 0xFFFFFFFF;
                *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x28)) = 0x0;
                if ((int)(*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C))) > 0) {
                    *(unsigned int *)((((*(int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C))) << 2) + 0x8C343ADC)) = 0x0;
                    *(unsigned int *)(((((*(int *)(((0x8C3437C4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
                }
                *(unsigned int *)(((0x8C343724 + (a4 << 2)) + 0x0)) = 0x0;
                *(unsigned int *)(((0x8C343744 + (a4 << 2)) + 0x0)) = 0x0;
                t53 = 0x0;
                for (;;) {
                    *(unsigned int *)((t53 + (0x8C343424 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    *(unsigned int *)((t53 + (0x8C343524 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    *(unsigned int *)((t53 + (0x8C343624 + (((a4 << 2) << 2) << 1)))) = 0xFFFFFFFF;
                    t53 = (t53 + 0x4);
                    if ((unsigned int)t53 >= (unsigned int)0x20) {
                        break;
                    }
                }
                t54 = (0x8C343624 + (((a4 << 2) << 2) << 1));
            }
            t66 = t54;
        }
        t78 = t66;
    }
    return t78;
}

int cpuDblAimAddRange(int a4, int a5)
{
    float u1;
    float u2;
    float u3;
    float u6;
    float u7;
    int t10;
    int t8;
    float u13;
    float u14;
    int t17;
    int t15;
    float u22;
    float u23;
    int t26;
    int t24;
    float u29;
    float u30;
    int t33;
    int t31;
    float u38;
    float u39;
    float u41;
    float u43;
    float u44;
    int t47;
    int t45;
    float u50;
    float u51;
    int t54;
    int t52;
    float u57;
    float u58;
    int t61;
    int t59;
    float u66;
    float u67;
    int t70;
    int t68;
    float u73;
    float u74;
    int t77;
    int t75;
    int t88;
    int t83;
    int stk[21];

    cpuShotRange(a4, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), ((int)stk + 8));
    u1 = *(float *)(((int)stk + 40));
    u2 = *(float *)((a4 + 0xBB0));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    if (!(59.4249992f > u3)) {
        u6 = *(float *)((a4 + 0xB00));
        u7 = *(float *)((a4 + 0xB9C));
        t10 = 0x1;
        if (u7 > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > u7) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        cpuAimPointSet(a5, 0x1, ((float)t10 * 54.8499985f), (u6 * 118.849998f));
        u13 = *(float *)((a4 + 0xB00));
        u14 = *(float *)((a4 + 0xB9C));
        t17 = 0x1;
        if (u14 > 0.0f) {
        } else {
            t15 = 0x0;
            if (0.0f > u14) {
                t15 = 0xFFFFFFFF;
            }
            t17 = t15;
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t17) * 54.8499985f), (u13 * 118.849998f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
        u22 = *(float *)((a4 + 0xBB0));
        u23 = *(float *)((a4 + 0xB9C));
        t26 = 0x1;
        if (u23 > 0.0f) {
        } else {
            t24 = 0x0;
            if (0.0f > u23) {
                t24 = 0xFFFFFFFF;
            }
            t26 = t24;
        }
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t26 * 54.8499985f), u22);
        u29 = *(float *)((a4 + 0xBB0));
        u30 = *(float *)((a4 + 0xB9C));
        t33 = 0x1;
        if (u30 > 0.0f) {
        } else {
            t31 = 0x0;
            if (0.0f > u30) {
                t31 = 0xFFFFFFFF;
            }
            t33 = t31;
        }
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t33) * 54.8499985f), u29);
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
        t88 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u38 = *(float *)((a4 + 0xBB0));
        u39 = (-u38);
        if (!(0.0f > u38)) {
            u39 = u38;
        }
        u41 = (-u1);
        if (!(0.0f > u1)) {
            u41 = u1;
        }
        if ((u39 * 0.400000006f) > u41) {
            u43 = *(float *)((a4 + 0xB00));
            u44 = *(float *)((a4 + 0xB9C));
            t47 = 0x1;
            if (u44 > 0.0f) {
            } else {
                t45 = 0x0;
                if (0.0f > u44) {
                    t45 = 0xFFFFFFFF;
                }
                t47 = t45;
            }
            cpuAimPointSet(a5, 0x2, ((float)t47 * 54.8499985f), (u43 * 118.849998f));
            t83 = (a5 + 0x1);
        } else {
            u50 = *(float *)((a4 + 0xB00));
            u51 = *(float *)((a4 + 0xB9C));
            t54 = 0x1;
            if (u51 > 0.0f) {
            } else {
                t52 = 0x0;
                if (0.0f > u51) {
                    t52 = 0xFFFFFFFF;
                }
                t54 = t52;
            }
            cpuAimPointSet(a5, 0x1, ((float)t54 * 54.8499985f), (u50 * 118.849998f));
            u57 = *(float *)((a4 + 0xB00));
            u58 = *(float *)((a4 + 0xB9C));
            t61 = 0x1;
            if (u58 > 0.0f) {
            } else {
                t59 = 0x0;
                if (0.0f > u58) {
                    t59 = 0xFFFFFFFF;
                }
                t61 = t59;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t61) * 54.8499985f), (u57 * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u66 = *(float *)((a4 + 0xBB0));
            u67 = *(float *)((a4 + 0xB9C));
            t70 = 0x1;
            if (u67 > 0.0f) {
            } else {
                t68 = 0x0;
                if (0.0f > u67) {
                    t68 = 0xFFFFFFFF;
                }
                t70 = t68;
            }
            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t70 * 54.8499985f), u66);
            u73 = *(float *)((a4 + 0xBB0));
            u74 = *(float *)((a4 + 0xB9C));
            t77 = 0x1;
            if (u74 > 0.0f) {
            } else {
                t75 = 0x0;
                if (0.0f > u74) {
                    t75 = 0xFFFFFFFF;
                }
                t77 = t75;
            }
            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t77) * 54.8499985f), u73);
            cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
            t83 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        t88 = t83;
    }
    return t88;
}

int cpuDblAimAddRange2(int a4, int a5)
{
    float u1;
    float u2;
    float u3;
    float u6;
    float u7;
    int t10;
    int t8;
    float u13;
    float u14;
    int t17;
    int t15;
    float u22;
    float u23;
    int t26;
    int t24;
    float u29;
    float u30;
    int t33;
    int t31;
    float u38;
    float u39;
    float u41;
    float u43;
    float u44;
    int t47;
    int t45;
    float u50;
    float u51;
    int t54;
    int t52;
    float u57;
    float u58;
    int t61;
    int t59;
    float u66;
    float u67;
    int t70;
    int t68;
    float u73;
    float u74;
    int t77;
    int t75;
    int t88;
    int t83;
    int stk[21];

    cpuShotRange(a4, (((int)stk + 4) + 0x28), (((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10), ((int)stk + 8));
    u1 = *(float *)(((int)stk + 40));
    u2 = *(float *)((a4 + 0xBB0));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    if (!(59.4249992f > u3)) {
        u6 = *(float *)((a4 + 0xB00));
        u7 = *(float *)((a4 + 0xB9C));
        t10 = 0x1;
        if (u7 > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > u7) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        cpuAimPointSet(a5, 0x1, ((float)t10 * 54.8499985f), (u6 * 118.849998f));
        u13 = *(float *)((a4 + 0xB00));
        u14 = *(float *)((a4 + 0xB9C));
        t17 = 0x1;
        if (u14 > 0.0f) {
        } else {
            t15 = 0x0;
            if (0.0f > u14) {
                t15 = 0xFFFFFFFF;
            }
            t17 = t15;
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t17) * 54.8499985f), (u13 * 118.849998f));
        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
        u22 = *(float *)((a4 + 0xBB0));
        u23 = *(float *)((a4 + 0xB9C));
        t26 = 0x1;
        if (u23 > 0.0f) {
        } else {
            t24 = 0x0;
            if (0.0f > u23) {
                t24 = 0xFFFFFFFF;
            }
            t26 = t24;
        }
        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t26 * 54.8499985f), u22);
        u29 = *(float *)((a4 + 0xBB0));
        u30 = *(float *)((a4 + 0xB9C));
        t33 = 0x1;
        if (u30 > 0.0f) {
        } else {
            t31 = 0x0;
            if (0.0f > u30) {
                t31 = 0xFFFFFFFF;
            }
            t33 = t31;
        }
        cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t33) * 54.8499985f), u29);
        cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
        t88 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
    } else {
        u38 = *(float *)((a4 + 0xBB0));
        u39 = (-u38);
        if (!(0.0f > u38)) {
            u39 = u38;
        }
        u41 = (-u1);
        if (!(0.0f > u1)) {
            u41 = u1;
        }
        if ((u39 * 0.400000006f) > u41) {
            u43 = *(float *)((a4 + 0xB00));
            u44 = *(float *)((a4 + 0xB9C));
            t47 = 0x1;
            if (u44 > 0.0f) {
            } else {
                t45 = 0x0;
                if (0.0f > u44) {
                    t45 = 0xFFFFFFFF;
                }
                t47 = t45;
            }
            cpuAimPointSet(a5, 0x2, ((float)t47 * 54.8499985f), (u43 * 118.849998f));
            t83 = (a5 + 0x1);
        } else {
            u50 = *(float *)((a4 + 0xB00));
            u51 = *(float *)((a4 + 0xB9C));
            t54 = 0x1;
            if (u51 > 0.0f) {
            } else {
                t52 = 0x0;
                if (0.0f > u51) {
                    t52 = 0xFFFFFFFF;
                }
                t54 = t52;
            }
            cpuAimPointSet(a5, 0x1, ((float)t54 * 54.8499985f), (u50 * 118.849998f));
            u57 = *(float *)((a4 + 0xB00));
            u58 = *(float *)((a4 + 0xB9C));
            t61 = 0x1;
            if (u58 > 0.0f) {
            } else {
                t59 = 0x0;
                if (0.0f > u58) {
                    t59 = 0xFFFFFFFF;
                }
                t61 = t59;
            }
            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(-t61) * 54.8499985f), (u57 * 118.849998f));
            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            u66 = *(float *)((a4 + 0xBB0));
            u67 = *(float *)((a4 + 0xB9C));
            t70 = 0x1;
            if (u67 > 0.0f) {
            } else {
                t68 = 0x0;
                if (0.0f > u67) {
                    t68 = 0xFFFFFFFF;
                }
                t70 = t68;
            }
            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)t70 * 54.8499985f), u66);
            u73 = *(float *)((a4 + 0xBB0));
            u74 = *(float *)((a4 + 0xB9C));
            t77 = 0x1;
            if (u74 > 0.0f) {
            } else {
                t75 = 0x0;
                if (0.0f > u74) {
                    t75 = 0xFFFFFFFF;
                }
                t77 = t75;
            }
            cpuAimPointSet(((((a5 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t77) * 54.8499985f), u73);
            cpuAimPointSet((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1), 0x1, 0.0f, (*(float *)((a4 + 0xBB0))));
            t83 = ((((((a5 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        t88 = t83;
    }
    return t88;
}


int sunPut(int a4, int a5, int a6, float f4)
{
    int t1;
    float u2;
    int t3;
    float u4;
    float u6;
    float u7;
    int t22;
    int t24;
    int t25;
    int t47;
    int t48;
    int t28;
    int t35;
    int t51;
    int t59;
    int stk[14];

    t1 = (int)((int)a5 % (int)(*(int *)((a4 + 0x0))));
    u2 = *(float *)0x8C40C2C8;
    t3 = *(int *)((((t1 << 2) + a4) + 0x4));
    u4 = u2;
    if (u2 > 255.0f) {
        u4 = 255.0f;
    }
    u6 = *(float *)0x8C38B7FC;
    u7 = u4;
    if (u6 > u4) {
        u7 = u6;
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((t3 + a4) + 0x8))), (*(float *)(((t3 + a4) + 0xC))), (-(*(float *)(((t3 + a4) + 0x10)))));
    nlRotateAZ((-(*(short *)(((t3 + a4) + 0x6)))));
    nlRotateAY((*(short *)(((t3 + a4) + 0x4))));
    nlRotateAX((*(short *)(((t3 + a4) + 0x2))));
    if ((a6 != 0xCB4F8B0) && (a6 != 0xCB400F8)) {
    } else {
        nlPushMatrix(0x0);
        mtxGetAngles(((int)stk + 4));
        t22 = *(short *)(((int)stk + 4));
        if (t1 == 0) {
            *(unsigned int *)0x8C38BA1C = (unsigned short)t22;
            *(unsigned int *)0x8C38BA18 = (unsigned short)t22;
            t24 = *(short *)(((int)stk + 6));
            *(unsigned int *)0x8C38BA24 = (unsigned short)t24;
            *(unsigned int *)0x8C38BA20 = (unsigned short)t24;
        } else {
            t25 = *(int *)0x8C38BA1C;
            if ((int)(unsigned short)t22 > (int)t25) {
                if ((int)((unsigned short)t22 - t25) > (int)0x8000) {
                    t28 = ((*(int *)0x8C38BA18) - (int)((float)(0x10000 - ((unsigned short)t22 - t25)) * 1.0f));
                } else {
                    t28 = ((*(int *)0x8C38BA18) + (int)((float)((unsigned short)t22 - t25) * 1.0f));
                }
                *(unsigned int *)0x8C38BA18 = t28;
            } else {
                if ((int)(t25 - (unsigned short)t22) > (int)0x8000) {
                    t35 = ((*(int *)0x8C38BA18) + (int)((float)(0x10000 - (t25 - (unsigned short)t22)) * 1.0f));
                } else {
                    t35 = ((*(int *)0x8C38BA18) - (int)((float)(t25 - (unsigned short)t22) * 1.0f));
                }
                *(unsigned int *)0x8C38BA18 = t35;
            }
            t47 = *(short *)(((int)stk + 6));
            t48 = *(int *)0x8C38BA24;
            if ((int)(unsigned short)t47 > (int)t48) {
                if ((int)((unsigned short)t47 - t48) > (int)0x8000) {
                    t51 = ((*(int *)0x8C38BA20) - (int)((float)(0x10000 - ((unsigned short)t47 - t48)) * 1.0f));
                } else {
                    t51 = ((*(int *)0x8C38BA20) + (int)((float)((unsigned short)t47 - t48) * 1.0f));
                }
                *(unsigned int *)0x8C38BA20 = t51;
            } else {
                if ((int)(t48 - (unsigned short)t47) > (int)0x8000) {
                    t59 = ((*(int *)0x8C38BA20) + (int)((float)(0x10000 - (t48 - (unsigned short)t47)) * 1.0f));
                } else {
                    t59 = ((*(int *)0x8C38BA20) - (int)((float)(t48 - (unsigned short)t47) * 1.0f));
                }
                *(unsigned int *)0x8C38BA20 = t59;
            }
        }
        nlRotateAX((*(int *)0x8C38BA18));
        nlRotateAY((*(int *)0x8C38BA20));
        nlObjPutCheapEnvMap(a6);
        *(unsigned int *)0x8C38BA1C = (unsigned short)(*(short *)(((int)stk + 4)));
        *(unsigned int *)0x8C38BA24 = (unsigned short)(*(short *)(((int)stk + 6)));
        nlPopMatrix(0x1);
    }
    if (f4 != 1.0f) {
        nlScale(f4, f4, f4);
    }
    nlObjPutSetGlobalAmbience((u7 / 255.0f));
    nlObjPutSetSaturate(((float)(*(int *)0x8C301BF4) / 255.0f), ((float)(*(int *)0x8C301BF8) / 255.0f));
    nlObjPut(a6);
    if (a6 == 0xCB400F8) {
        nlObjPut(0xCB687F0);
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    nlObjPutSetGlobalAmbience(((*(float *)0x8C38B7FC) / 255.0f));
    return (nlPopMatrix(0x1));
}

float nlCreateVertexBuffer_multi_pass(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t15;
    int t11;
    int t5;
    int t8;
    int t29;
    int t33;
    int t6;
    float u60;

    t15 = (((((a5 + a6) + a7) + a8) + a9) + ((((a5 + a6) + a7) + a8) + a9));
    if ((*(int *)0x8C42440C) == 3) {
    } else {
        t11 = (((a6 + a7) + a8) + a9);
        if ((*(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC))) == 0) {
        } else {
            t5 = *(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC));
            t8 = (((a5 + a6) + a8) + a9);
            if (t5 == 2) {
            } else {
                if (t5 == 4) {
                    t6 = (((a5 + a6) + a7) + a8);
                }
                t8 = t6;
            }
            t11 = t8;
        }
        t15 = t11;
    }
    *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x8)) = (t15 << 2);
    if (a4 == 0) {
        *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x4)) = (*(int *)0x8C424238);
    } else {
        *(unsigned int *)(((0x8C424244 + (a4 * 0x38)) + 0x4)) = ((*(int *)(((((a4 - 1) * 0x38) + 0x8C424244) + 0x4))) + (*(int *)(((((a4 - 1) * 0x38) + 0x8C424244) + 0x8))));
    }
    if ((*(int *)0x8C42440C) == 3) {
        t29 = (int)((unsigned int)((int)((unsigned int)t15 + (unsigned int)0x0)) + ((((int)0x0 > (int)t15)) ? 1u : 0u));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)(t29 >> 1));
        *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)(t29 >> 1));
    } else {
        if ((*(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC))) == 0) {
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = 0.0f;
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
            *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)t15);
        } else {
            t33 = *(int *)(((0x8C424244 + (a4 * 0x38)) + 0xC));
            if (t33 == 2) {
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = 0.0f;
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
                *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = (((float)a9 * 100.0f) / (float)t15);
            } else {
                if (t33 == 4) {
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x10)) = (((float)a5 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x14)) = (((float)a6 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x18)) = (((float)a7 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x1C)) = (((float)a8 * 100.0f) / (float)t15);
                    *(float *)(((0x8C424244 + (a4 * 0x38)) + 0x20)) = 0.0f;
                }
            }
        }
        u60 = (float)t15;
    }
    return u60;
}

