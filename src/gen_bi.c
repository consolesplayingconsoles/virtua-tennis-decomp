/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXERR_EntryErrFunc(int, int);
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

int sysInit(void)
{
    int t2;
    float u3;
    int t15;
    int t7;
    int t50;
    int t52;

    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFFFFFFC));
    *(unsigned int *)0x8C40C5C4 = 0x0;
    _builtin_set_imask(0xE);
    syHwInit();
    t2 = syCblCheck();
    *(unsigned int *)0x8C23D200 = 0x0;
    u3 = 1.0f;
    u3 = u3 + 0.200000003f * (float)(((t2 == 2)) ? 1 : 0);
    *(float *)0x8C23D204 = u3;
    *(float *)0x8C23D208 = u3;
    *(float *)0x8C23D204 = 1.0f;
    *(float *)0x8C23D208 = 1.0f;
    *(float *)0x8C23D20C = 1.33333337f;
    t15 = 0x0;
    if (t2 != 1) {
        t7 = 0x9;
        if (t2 != 2) {
        } else {
            *(unsigned int *)0x8C23D200 = 0x1;
            nlSetPalExtMode(0x1);
            t7 = 0x1A;
        }
        t15 = t7;
    }
    nlInitLibraryDC(t15, 0x80, 0x1);
    *(unsigned int *)0x8C20D124 = 0x0;
    _builtin_set_imask(0xE);
    syHwInit2();
    *(unsigned int *)0x8C40C5C8 = (gdFsInit(0xC, 0x8C2808C0, 0x15E, 0x8C281D88));
    gdFsEntryErrFuncAll(0x8C010DC8, 0x0);
    ADXT_Init();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x1);
    ADXERR_EntryErrFunc(0x8C0E92AA, 0x0);
    *(unsigned int *)0x8C423BD4 = 0x0;
    nlInitInterruptDC();
    nlSetIntrFunction(0x1, 0x8C010DA8);
    _builtin_set_imask(0x0);
    padInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x2);
    sysInitGraphics();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x20);
    BupInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x8);
    syRtcInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x10);
    *(unsigned int *)0x8C20D1A8 = 0x8C20D1AC;
    nlInitHeapMemory(0x8C20D1AC, 0x20000);
    *(unsigned int *)0x8C22D1C8 = 0x8C22D1CC;
    nlInitHeapMemory2(0x8C22D1CC, 0x10000);
    nlInitEvent();
    eepromCfgInit();
    *(unsigned int *)0x8C40C5C4 = ((*(int *)0x8C40C5C4) | 0x4);
    sndFadeFlagsClear();
    *(unsigned int *)0x8C20D14C = 0x7;
    *(unsigned int *)0x8C20D150 = 0x0;
    *(unsigned int *)0x8C20D198 = 0x0;
    *(unsigned int *)0x8C20D19C = 0x0;
    *(unsigned int *)0x8C20D15C = 0x0;
    dbgLockClear();
    fileLoadReset();
    motFileInit();
    camSceneInit();
    t50 = (dbgHookNop());
    if (0x0 != 0) {
        t50 = (sysVideoSelect());
    }
    t52 = 0x8C287C74;
    for (;;) {
        *(unsigned int *)((t52 + 0x0)) = 0x1;
        t52 = (t52 + 0x4);
        if ((unsigned int)t52 >= (unsigned int)0x8C287CB4) {
            break;
        }
    }
    return t50;
}

int hudFont2DigitPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    int t0;
    int t2;
    int t9;
    int t31;
    int t34;
    int t50;
    int t67;
    int t61;
    int t53;
    int t43;
    int t37;
    int t25;
    int t21;
    int t17;
    int t13;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    if (a4 != 2) {
        if (a4 != 0) {
            if (a4 != 1) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 == 5) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            t0 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EBE0, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4);
                            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 68.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            t2 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EC30, *(Stk3 *)((((int)stk + 28) + 0x18)), f4);
                            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 59.0f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                            t25 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EC80, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                        } else {
                            if (a4 == 6) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                t21 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EAA0, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                            } else {
                                if (a4 == 7) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                    t17 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EB40, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                                } else {
                                    if (a4 == 8) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                        t13 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EAF0, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                                    } else {
                                        t9 = a4;
                                        if (a4 == 9) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                                            t9 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EB90, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                                        }
                                        t13 = t9;
                                    }
                                    t17 = t13;
                                }
                                t21 = t17;
                            }
                            t25 = t21;
                        }
                        t37 = t25;
                    } else {
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 83.0f);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 6.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        t31 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33EF50, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - 44.0f);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 19.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        t34 = ((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EFA0, *(Stk3 *)((((int)stk + 28) + 0x18)), f4);
                        *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 92.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                        t37 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33EFF0, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                    }
                    t43 = t37;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                    t43 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33E820, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
                }
                t53 = t43;
            } else {
                *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) - 7.0f);
                *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) + 5.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                t50 = ((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33E8C0, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4);
                *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + 19.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
                t53 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C33E910, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
            }
            t61 = t53;
        } else {
            *(float *)(((((int)stk + 28) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x0))) - (1.0f + 1.0f));
            *(float *)(((((int)stk + 28) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x18) + 0x4))) + (1.0f + 1.0f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
            t61 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33E960, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
        }
        t67 = t61;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x18)); }
        t67 = (((int (*)(int, int, int, int, Stk3, float))(sprPutAtAlpha))(0x8C33E870, a5, a6, a7, *(Stk3 *)((((int)stk + 28) + 0x18)), f4));
    }
    return t67;
}

float cpuShotRangeFix(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u14;
    int t10;
    int t8;
    float u16;
    float u17;
    float u18;
    float u20;
    float u21;
    int t24;
    float u26;
    float u32;
    float u34;
    int t35;
    int t36;
    int t37;
    float u38;
    float u39;
    float u40;
    float u41;
    float u42;
    float u43;
    float u44;
    float u45;
    int t46;
    float u48;
    float u51;
    float u61;
    float u74;
    float u76;
    float u77;
    float u78;
    float u79;
    float u80;
    float u81;
    float u82;
    float u83;
    float u86;
    float u88;
    float u90;
    float u91;

    u2 = *(float *)0x8C23D204;
    u3 = *(float *)0x8C287B40;
    u4 = *(float *)((a4 + 0xB9C));
    u5 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    u6 = (-(u4 / u3));
    if (!(0.0f > (u4 / u3))) {
        u6 = (u4 / u3);
    }
    u14 = (u4 / u3);
    if (u6 > 0.949999988f) {
        t10 = 0x1;
        if ((u4 / u3) > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > (u4 / u3)) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        u14 = ((float)t10 * 0.949999988f);
    }
    u16 = *(float *)((a4 + 0xBA4));
    u17 = 0.300000012f;
    u17 = u17 + 3.29999995f * (u5 * u2);
    u18 = (-u16);
    if (!(0.0f > u16)) {
        u18 = u16;
    }
    u20 = *(float *)0x8C291F84;
    u21 = (-u20);
    if (!(0.0f > u20)) {
        u21 = u20;
    }
    t24 = 0x0;
    u26 = u17;
    if ((u21 + 5.0f) > u18) {
        t24 = 0x1;
        u26 = (u17 * 1.25f);
    }
    u32 = u26;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u14) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u32 = (u26 * 0.800000012f);
    }
    u34 = 0.5f;
    u34 = u34 + 0.400000006f * (float)t24;
    t35 = 0x8C0806E8;
    t36 = (0xB00 + a4);
    t37 = a5;
    u38 = 0.400000006f;
    u39 = 5.0f;
    u40 = u34;
    u41 = (float)t24;
    u42 = *(float *)&a8;
    u43 = *(float *)&a8;
    u44 = *(float *)&a10;
    u45 = *(float *)&a10;
    for (;;) {
        t46 = (t37 == 0);
        t37 = (t37 - 1);
        if (t46) {
            break;
        }
        t35 = 0xB00;
        u38 = (u5 * u2);
        u41 = (*(float *)((a4 + t35)));
        u40 = 0.0f;
        u41 = (u41 * 0.949999988f);
        u41 = (u41 - u42);
        u48 = u42;
        u48 = u48 + u38 * u41;
        u42 = u48;
        u39 = u42;
        u39 = (u39 - u14);
        if (!(u40 > u39)) {
            u41 = u39;
        } else {
            u41 = u14;
            u41 = (u41 - u42);
        }
        if (u32 > u41) {
            u41 = (*(float *)((a4 + t35)));
            u42 = u14;
            u38 = u32;
            u51 = u42;
            u51 = u51 + u38 * u41;
            u42 = u51;
            u40 = 0.0f;
            if (!(u40 > u42)) {
                u41 = u42;
            } else {
                u41 = u42;
                u41 = (-u41);
            }
            if (u41 > 0.949999988f) {
                u41 = 0.0f;
                if (u42 > u41) {
                    t36 = 0x1;
                } else {
                    if (u41 > u42) {
                        t36 = 0xFFFFFFFF;
                    } else {
                        t36 = 0x0;
                    }
                }
                u41 = (float)t36;
                u42 = u41;
                u42 = (u42 * 0.949999988f);
            }
        }
        t35 = 0xB00;
        u38 = (u5 * u2);
        u41 = (*(float *)((a4 + t35)));
        u40 = 0.0f;
        u41 = (u41 * 0.949999988f);
        u41 = (-u41);
        u41 = (u41 - u43);
        u61 = u43;
        u61 = u61 + u38 * u41;
        u43 = u61;
        u39 = u43;
        u39 = (u39 - u14);
        if (!(u40 > u39)) {
            u41 = u39;
        } else {
            u41 = u14;
            u41 = (u41 - u43);
        }
        if (u32 > u41) {
            u41 = (*(float *)((a4 + t35)));
            u43 = u14;
            u41 = (u41 * u32);
            u40 = 0.0f;
            u43 = (u43 - u41);
            if (!(u40 > u43)) {
                u41 = u43;
            } else {
                u41 = u43;
                u41 = (-u41);
            }
            if (u41 > 0.949999988f) {
                u41 = 0.0f;
                if (u43 > u41) {
                    t36 = 0x1;
                } else {
                    if (u41 > u43) {
                        t36 = 0xFFFFFFFF;
                    } else {
                        t36 = 0x0;
                    }
                }
                u41 = (float)t36;
                u43 = u41;
                u43 = (u43 * 0.949999988f);
            }
        }
        t35 = 0xB00;
        u38 = 1.60000002f;
        u39 = (*(float *)((a4 + t35)));
        u41 = u39;
        u41 = (u41 * 0.800000012f);
        u41 = (u41 - u45);
        u41 = (u41 * ((u5 * u2)));
        u74 = u45;
        u74 = u74 + u38 * u41;
        u45 = u74;
        u38 = u34;
        u39 = (u39 * u38);
        u38 = 1.60000002f;
        u39 = (-u39);
        u39 = (u39 - u44);
        u39 = (u39 * ((u5 * u2)));
        u76 = u44;
        u76 = u76 + u38 * u39;
        u44 = u76;
    }
    u77 = *(float *)((a4 + 0xB00));
    u78 = 1.0f;
    u78 = u78 + u77 * u45;
    u79 = 1.0f;
    u79 = u79 + u77 * u44;
    u80 = ((u77 * 118.849998f) / (1.0f + 1.0f));
    u81 = ((u77 * 118.849998f) / (1.0f + 1.0f));
    u82 = (u3 * u42);
    u83 = (u3 * u43);
    if ((u3 * u42) > (u3 * u43)) {
        u82 = (u3 * u43);
        u83 = (u3 * u42);
    }
    u86 = (-(u80 * u78));
    if (!(0.0f > (u80 * u78))) {
        u86 = (u80 * u78);
    }
    u88 = (-(u81 * u79));
    if (!(0.0f > (u81 * u79))) {
        u88 = (u81 * u79);
    }
    *(float *)((a6 + 0x0)) = u82;
    u90 = (u80 * u78);
    u91 = (u81 * u79);
    if (u86 > u88) {
        u90 = (u81 * u79);
        u91 = (u80 * u78);
    }
    *(float *)((a6 + 0x8)) = u90;
    *(float *)((a7 + 0x0)) = u83;
    *(float *)((a7 + 0x8)) = u91;
    return u77;
}

int BupSaveFile(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t6;
    int t8;
    int t10;
    int t12;
    int t20;
    int t24;
    int t29;
    int t31;
    int t32;
    int t56;
    int t58;
    int t66;
    int t70;
    int t75;
    int t77;
    int t78;
    int t109;
    int t111;
    int t113;
    int t115;
    int t123;
    int t127;
    int t132;
    int t134;
    int t135;
    int t159;
    int t161;
    int t169;
    int t173;
    int t178;
    int t180;
    int t181;
    int t205;
    int t102;
    int t96;
    int t50;
    int t16;
    int t17;
    int t47;
    int t43;
    int t40;
    int t62;
    int t63;
    int t93;
    int t89;
    int t86;
    int t199;
    int t153;
    int t119;
    int t120;
    int t150;
    int t146;
    int t143;
    int t165;
    int t166;
    int t196;
    int t192;
    int t189;
    int stk[46];

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    if ((*(signed char *)0x8C40C62F) == 0) {
        t1 = _slow_strcmp1(a5, 0x8C126BA4);
        if (t1 == 0) {
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)0x4) {
                    break;
                }
                padLcdClear(t3);
                t3 = (t3 + 0x1);
            }
            t102 = 0x0;
        } else {
            if ((*(signed char *)0x8C40C630) == 0) {
                t6 = _slow_strcmp1(a5, 0x8C126BA4);
                if (t6 == 0) {
                    t8 = 0x0;
                    for (;;) {
                        if ((int)t8 >= (int)0x4) {
                            break;
                        }
                        padLcdClear(t8);
                        t8 = (t8 + 0x1);
                    }
                    t50 = 0x0;
                } else {
                    t10 = *(int *)0x8C40C628;
                    *(unsigned int *)(((int)stk + 20)) = ((t10 * 0x4C) + 0x8C40C6B0);
                    t12 = buGetDiskInfo((*(int *)0x8C40C628), (((t10 * 0x4C) + 0x8C40C6B0) + 0x14));
                    padVmsBeep(0x0, 0xF4);
                    memset((((int)stk + 20) + 0x20), 0x0, 0x60);
                    _slow_strcmp1(a5, 0x8C126BA4);
                    for (t16 = 0; ; t16++) { *(unsigned char *)((((int)stk + 20) + 0x20) + t16) = *(unsigned char *)(0x8C126AC0 + t16); if (*(unsigned char *)(0x8C126AC0 + t16) == 0) break; }
                    for (t17 = 0; ; t17++) { *(unsigned char *)((((int)stk + 20) + 0x32) + t17) = *(unsigned char *)(0x8C126AD4 + t17); if (*(unsigned char *)(0x8C126AD4 + t17) == 0) break; }
                    memmove((((int)stk + 20) + 0x54), 0x8C1D7528, 0x10);
                    *(unsigned int *)(((int)stk + 120)) = 0x8C1D753C;
                    *(unsigned int *)(((int)stk + 124)) = 0x8C1D755C;
                    *(unsigned short *)(((int)stk + 128)) = 0x1;
                    *(unsigned short *)(((int)stk + 130)) = 0x14;
                    *(unsigned int *)(((int)stk + 132)) = 0x0;
                    *(unsigned short *)(((int)stk + 136)) = 0x0;
                    *(unsigned int *)(((int)stk + 140)) = (*(int *)(((int)stk + 24)));
                    t20 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 144)) = t20;
                    buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 128))), (unsigned short)(*(short *)(((int)stk + 136))), t20);
                    *(unsigned int *)0x8C421E1C = 0x8C41BA14;
                    if (0x8C41BA14 != 0) {
                        t24 = buMakeBackupFileImage(0x8C41BA14, (((int)stk + 20) + 0x20));
                        *(unsigned int *)(((int)stk + 20)) = t24;
                        if ((int)t24 <= 0) {
                            *(unsigned int *)0x8C287C60 = 0x1;
                            padLcdMessage(0xA);
                            t43 = 0xFFFF0000;
                        } else {
                            syRtcGetDate((((int)stk + 20) + 0xC));
                            { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 20) + 0x18)) = *(struct mvb8 *)((((int)stk + 20) + 0xC)); }
                            t29 = buSaveFile(a4, a5, (*(int *)0x8C421E1C), (*(int *)(((int)stk + 20))), (((int)stk + 16) + 0x1C), 0x80000000);
                            if (t29 != 0) {
                                *(unsigned int *)0x8C287C60 = 0x1;
                                padLcdMessage(0xA);
                                t40 = t29;
                            } else {
                                for (;;) {
                                    t31 = buStat(a4);
                                    if (t31 != -1) {
                                        t32 = buGetLastError(a4);
                                        if (t32 != 0) {
                                            padLcdMessage(0xA);
                                            padVmsBeep(0x0, 0x0);
                                            return t32;
                                        }
                                        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
                                        msgWinSet(0x6, 0x0);
                                        padLcdMessage(0xD);
                                        memmove(0x8C40C6A8, (((int)stk + 20) + 0x18), 0x8);
                                        padVmsBeep(0x0, 0x0);
                                        return t32;
                                    }
                                    if (t12 == 0xFFFFFF01) {
                                        break;
                                    }
                                }
                                t40 = 0xFFFFFF9D;
                            }
                            t43 = t40;
                        }
                        t47 = t43;
                    } else {
                        padLcdMessage(0xA);
                        t47 = 0xFFFF0000;
                    }
                    t50 = t47;
                }
                t96 = t50;
            } else {
                t56 = *(int *)0x8C40C628;
                *(unsigned int *)(((int)stk + 20)) = ((t56 * 0x4C) + 0x8C40C6B0);
                t58 = buGetDiskInfo((*(int *)0x8C40C628), (((t56 * 0x4C) + 0x8C40C6B0) + 0x14));
                padVmsBeep(0x0, 0xF4);
                memset((((int)stk + 20) + 0x20), 0x0, 0x60);
                _slow_strcmp1(a5, 0x8C126BA4);
                for (t62 = 0; ; t62++) { *(unsigned char *)((((int)stk + 20) + 0x20) + t62) = *(unsigned char *)(0x8C126AC0 + t62); if (*(unsigned char *)(0x8C126AC0 + t62) == 0) break; }
                for (t63 = 0; ; t63++) { *(unsigned char *)((((int)stk + 20) + 0x32) + t63) = *(unsigned char *)(0x8C126AD4 + t63); if (*(unsigned char *)(0x8C126AD4 + t63) == 0) break; }
                memmove((((int)stk + 20) + 0x54), 0x8C1D7528, 0x10);
                *(unsigned int *)(((int)stk + 120)) = 0x8C1D753C;
                *(unsigned int *)(((int)stk + 124)) = 0x8C1D755C;
                *(unsigned short *)(((int)stk + 128)) = 0x1;
                *(unsigned short *)(((int)stk + 130)) = 0x14;
                *(unsigned int *)(((int)stk + 132)) = 0x0;
                *(unsigned short *)(((int)stk + 136)) = 0x0;
                *(unsigned int *)(((int)stk + 140)) = (*(int *)(((int)stk + 24)));
                t66 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 144)) = t66;
                buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 128))), (unsigned short)(*(short *)(((int)stk + 136))), t66);
                *(unsigned int *)0x8C421E1C = 0x8C41BA14;
                if (0x8C41BA14 != 0) {
                    t70 = buMakeBackupFileImage(0x8C41BA14, (((int)stk + 20) + 0x20));
                    *(unsigned int *)(((int)stk + 20)) = t70;
                    if ((int)t70 <= 0) {
                        *(unsigned int *)0x8C287C60 = 0x1;
                        padLcdMessage(0xA);
                        t89 = 0xFFFF0000;
                    } else {
                        syRtcGetDate((((int)stk + 20) + 0xC));
                        { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 20) + 0x18)) = *(struct mvb8 *)((((int)stk + 20) + 0xC)); }
                        t75 = buSaveFile(a4, a5, (*(int *)0x8C421E1C), (*(int *)(((int)stk + 20))), (((int)stk + 16) + 0x1C), 0x80000000);
                        if (t75 != 0) {
                            *(unsigned int *)0x8C287C60 = 0x1;
                            padLcdMessage(0xA);
                            t86 = t75;
                        } else {
                            for (;;) {
                                t77 = buStat(a4);
                                if (t77 != -1) {
                                    t78 = buGetLastError(a4);
                                    if (t78 != 0) {
                                        padLcdMessage(0xA);
                                        padVmsBeep(0x0, 0x0);
                                        return t78;
                                    }
                                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
                                    msgWinSet(0x6, 0x0);
                                    padLcdMessage(0xD);
                                    memmove(0x8C40C6A8, (((int)stk + 20) + 0x18), 0x8);
                                    padVmsBeep(0x0, 0x0);
                                    return t78;
                                }
                                if (t58 == 0xFFFFFF01) {
                                    break;
                                }
                            }
                            t86 = 0xFFFFFF9D;
                        }
                        t89 = t86;
                    }
                    t93 = t89;
                } else {
                    padLcdMessage(0xA);
                    t93 = 0xFFFF0000;
                }
                t96 = t93;
            }
            t102 = t96;
        }
        t205 = t102;
    } else {
        if ((*(signed char *)0x8C40C630) == 0) {
            t109 = _slow_strcmp1(a5, 0x8C126BA4);
            if (t109 == 0) {
                t111 = 0x0;
                for (;;) {
                    if ((int)t111 >= (int)0x4) {
                        break;
                    }
                    padLcdClear(t111);
                    t111 = (t111 + 0x1);
                }
                t153 = 0x0;
            } else {
                t113 = *(int *)0x8C40C628;
                *(unsigned int *)(((int)stk + 20)) = ((t113 * 0x4C) + 0x8C40C6B0);
                t115 = buGetDiskInfo((*(int *)0x8C40C628), (((t113 * 0x4C) + 0x8C40C6B0) + 0x14));
                padVmsBeep(0x0, 0xF4);
                memset((((int)stk + 20) + 0x20), 0x0, 0x60);
                _slow_strcmp1(a5, 0x8C126BA4);
                for (t119 = 0; ; t119++) { *(unsigned char *)((((int)stk + 20) + 0x20) + t119) = *(unsigned char *)(0x8C126AC0 + t119); if (*(unsigned char *)(0x8C126AC0 + t119) == 0) break; }
                for (t120 = 0; ; t120++) { *(unsigned char *)((((int)stk + 20) + 0x32) + t120) = *(unsigned char *)(0x8C126AD4 + t120); if (*(unsigned char *)(0x8C126AD4 + t120) == 0) break; }
                memmove((((int)stk + 20) + 0x54), 0x8C1D7528, 0x10);
                *(unsigned int *)(((int)stk + 120)) = 0x8C1D753C;
                *(unsigned int *)(((int)stk + 124)) = 0x8C1D755C;
                *(unsigned short *)(((int)stk + 128)) = 0x1;
                *(unsigned short *)(((int)stk + 130)) = 0x14;
                *(unsigned int *)(((int)stk + 132)) = 0x0;
                *(unsigned short *)(((int)stk + 136)) = 0x0;
                *(unsigned int *)(((int)stk + 140)) = (*(int *)(((int)stk + 24)));
                t123 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 144)) = t123;
                buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 128))), (unsigned short)(*(short *)(((int)stk + 136))), t123);
                *(unsigned int *)0x8C421E1C = 0x8C41BA14;
                if (0x8C41BA14 != 0) {
                    t127 = buMakeBackupFileImage(0x8C41BA14, (((int)stk + 20) + 0x20));
                    *(unsigned int *)(((int)stk + 20)) = t127;
                    if ((int)t127 <= 0) {
                        *(unsigned int *)0x8C287C60 = 0x1;
                        padLcdMessage(0xA);
                        t146 = 0xFFFF0000;
                    } else {
                        syRtcGetDate((((int)stk + 20) + 0xC));
                        { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 20) + 0x18)) = *(struct mvb8 *)((((int)stk + 20) + 0xC)); }
                        t132 = buSaveFile(a4, a5, (*(int *)0x8C421E1C), (*(int *)(((int)stk + 20))), (((int)stk + 16) + 0x1C), 0x80000000);
                        if (t132 != 0) {
                            *(unsigned int *)0x8C287C60 = 0x1;
                            padLcdMessage(0xA);
                            t143 = t132;
                        } else {
                            for (;;) {
                                t134 = buStat(a4);
                                if (t134 != -1) {
                                    t135 = buGetLastError(a4);
                                    if (t135 != 0) {
                                        padLcdMessage(0xA);
                                        padVmsBeep(0x0, 0x0);
                                        return t135;
                                    }
                                    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
                                    msgWinSet(0x6, 0x0);
                                    padLcdMessage(0xD);
                                    memmove(0x8C40C6A8, (((int)stk + 20) + 0x18), 0x8);
                                    padVmsBeep(0x0, 0x0);
                                    return t135;
                                }
                                if (t115 == 0xFFFFFF01) {
                                    break;
                                }
                            }
                            t143 = 0xFFFFFF9D;
                        }
                        t146 = t143;
                    }
                    t150 = t146;
                } else {
                    padLcdMessage(0xA);
                    t150 = 0xFFFF0000;
                }
                t153 = t150;
            }
            t199 = t153;
        } else {
            t159 = *(int *)0x8C40C628;
            *(unsigned int *)(((int)stk + 20)) = ((t159 * 0x4C) + 0x8C40C6B0);
            t161 = buGetDiskInfo((*(int *)0x8C40C628), (((t159 * 0x4C) + 0x8C40C6B0) + 0x14));
            padVmsBeep(0x0, 0xF4);
            memset((((int)stk + 20) + 0x20), 0x0, 0x60);
            _slow_strcmp1(a5, 0x8C126BA4);
            for (t165 = 0; ; t165++) { *(unsigned char *)((((int)stk + 20) + 0x20) + t165) = *(unsigned char *)(0x8C126AC0 + t165); if (*(unsigned char *)(0x8C126AC0 + t165) == 0) break; }
            for (t166 = 0; ; t166++) { *(unsigned char *)((((int)stk + 20) + 0x32) + t166) = *(unsigned char *)(0x8C126AD4 + t166); if (*(unsigned char *)(0x8C126AD4 + t166) == 0) break; }
            memmove((((int)stk + 20) + 0x54), 0x8C1D7528, 0x10);
            *(unsigned int *)(((int)stk + 120)) = 0x8C1D753C;
            *(unsigned int *)(((int)stk + 124)) = 0x8C1D755C;
            *(unsigned short *)(((int)stk + 128)) = 0x1;
            *(unsigned short *)(((int)stk + 130)) = 0x14;
            *(unsigned int *)(((int)stk + 132)) = 0x0;
            *(unsigned short *)(((int)stk + 136)) = 0x0;
            *(unsigned int *)(((int)stk + 140)) = (*(int *)(((int)stk + 24)));
            t169 = *(int *)(((int)stk + 28));
            *(unsigned int *)(((int)stk + 144)) = t169;
            buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 128))), (unsigned short)(*(short *)(((int)stk + 136))), t169);
            *(unsigned int *)0x8C421E1C = 0x8C41BA14;
            if (0x8C41BA14 != 0) {
                t173 = buMakeBackupFileImage(0x8C41BA14, (((int)stk + 20) + 0x20));
                *(unsigned int *)(((int)stk + 20)) = t173;
                if ((int)t173 <= 0) {
                    *(unsigned int *)0x8C287C60 = 0x1;
                    padLcdMessage(0xA);
                    t192 = 0xFFFF0000;
                } else {
                    syRtcGetDate((((int)stk + 20) + 0xC));
                    { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 20) + 0x18)) = *(struct mvb8 *)((((int)stk + 20) + 0xC)); }
                    t178 = buSaveFile(a4, a5, (*(int *)0x8C421E1C), (*(int *)(((int)stk + 20))), (((int)stk + 16) + 0x1C), 0x80000000);
                    if (t178 != 0) {
                        *(unsigned int *)0x8C287C60 = 0x1;
                        padLcdMessage(0xA);
                        t189 = t178;
                    } else {
                        for (;;) {
                            t180 = buStat(a4);
                            if (t180 != -1) {
                                t181 = buGetLastError(a4);
                                if (t181 != 0) {
                                    padLcdMessage(0xA);
                                    padVmsBeep(0x0, 0x0);
                                    return t181;
                                }
                                vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
                                msgWinSet(0x6, 0x0);
                                padLcdMessage(0xD);
                                memmove(0x8C40C6A8, (((int)stk + 20) + 0x18), 0x8);
                                padVmsBeep(0x0, 0x0);
                                return t181;
                            }
                            if (t161 == 0xFFFFFF01) {
                                break;
                            }
                        }
                        t189 = 0xFFFFFF9D;
                    }
                    t192 = t189;
                }
                t196 = t192;
            } else {
                padLcdMessage(0xA);
                t196 = 0xFFFF0000;
            }
            t199 = t196;
        }
        t205 = t199;
    }
    return t205;
}

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

int uniformPreviewPut(int a4, int a5)
{
    int t7;
    int t25;
    int t29;
    int t32;
    int t33;
    int t34;
    int t40;
    int t41;
    int t42;
    int t64;
    int t65;
    int t66;
    int t67;
    int t122;
    int t2;
    int t92;
    int t93;
    int t94;
    int stk[415];

    if ((*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0xC))) != 0) {
        *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x0)) = a5;
        t2 = a5;
    } else {
        t2 = (*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x0)));
    }
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x8)));
    *(unsigned int *)(((int)stk + 24)) = (a5 << 2);
    if (t2 == (*(int *)(((int)stk + 12)))) {
    } else {
        t7 = uniformTexLoad(a5, ((*(int *)(((a4 << 2) + 0x8C124AE0))) + 0x40000), a4);
        if (t7 != 1) {
        } else {
            *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x8)) = a5;
            *(unsigned int *)(((a4 << 2) + 0x8C37DBBC)) = 0x1;
            *(unsigned int *)(((*(int *)(((int)stk + 24))) + 0x8C37DB44)) = 0x1;
            if ((*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x4))) != -1) {
                *(unsigned int *)((((*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x4))) << 2) + 0x8C37DB44)) = 0x0;
            }
            *(unsigned int *)(((int)stk + 4)) = ((((a4 << 2) + a4) << 2) + 0x8C37DAF4);
            *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0x4)) = a5;
            nlSetCommonTextureOffset((*(int *)(((a4 << 2) + 0x8C124DE0))));
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))) != 0) {
                nlObjPutFreeTextureOnce((*(int *)((0x8C1B1D8C + (a4 << 2)))));
            }
            t25 = 0x0;
            for (;;) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)((t25 + (0x338 + ((int)stk + 4)))) = *(struct mv4 *)(((*(int *)((((a4 << 2) + 0x8C1B1B2C) + 0x0))) + t25)); }
                t25 = (t25 + 0x10);
                if ((unsigned int)t25 >= (unsigned int)0x50) {
                    break;
                }
            }
            t29 = ((0x338 + ((int)stk + 4)) + 0x50);
            for (;;) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)(t29) = *(struct mv4 *)((*(int *)((((a4 << 2) + 0x8C1B1B2C) + 0x0)))); }
                t29 = (t29 + 0x10);
                if ((unsigned int)t29 >= (unsigned int)(0x1B0 + (0x338 + ((int)stk + 4)))) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (0x1F0 + (0x338 + ((int)stk + 4)));
            t32 = *(int *)(((int)stk + 24));
            t33 = (0x1B0 + (0x338 + ((int)stk + 4)));
            t34 = 0x0;
            for (;;) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)(t33) = *(struct mv4 *)(((*(int *)(((t32 + 0x8C1B1B3C) + 0x0))) + t34)); }
                *(unsigned int *)((t33 + 0x8)) = ((*(int *)((t33 + 0x8))) + ((*(int *)(((0x8C124AE0 + (a4 << 2)) + 0x0))) + 0x40000));
                t33 = (t33 + 0x10);
                t34 = (t34 + 0x10);
                if ((unsigned int)t33 >= (unsigned int)(*(int *)(((int)stk + 4)))) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 20)) = 0x8C1B1BFC;
            if ((*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0xC))) == 0) {
                t40 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 4)) = ((((a5 << 2) + a5) << 2) + t40);
                t41 = *(int *)((((((a5 << 2) + a5) << 2) + t40) + 0x0));
                *(unsigned int *)(((int)stk + 12)) = (0x8C1B1BAC + (((a4 << 2) + a4) << 2));
                t42 = *(int *)(((0x8C1B1BAC + (((a4 << 2) + a4) << 2)) + 0x0));
                *(unsigned int *)(((int)stk + 8)) = ((a4 << 2) + 0x8C1B1D8C);
                modelSwapMaterial((*(int *)((((a4 << 2) + 0x8C1B1D8C) + 0x0))), t42, t41);
                modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x4))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x4))));
                modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 12))) + 0x8))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x8))));
                t92 = (*(int *)(((int)stk + 8)));
                t93 = (*(int *)(((*(int *)(((int)stk + 12))) + 0xC)));
                t94 = (*(int *)(((*(int *)(((int)stk + 4))) + 0xC)));
            } else {
                t64 = *(int *)(((int)stk + 20));
                *(unsigned int *)(((int)stk + 8)) = ((((a5 << 2) + a5) << 2) + t64);
                t65 = *(int *)(((int)stk + 12));
                t66 = *(int *)((((((a5 << 2) + a5) << 2) + t64) + 0x0));
                *(unsigned int *)(((int)stk + 16)) = ((((t65 << 2) + t65) << 2) + t64);
                t67 = *(int *)((((((t65 << 2) + t65) << 2) + t64) + 0x0));
                *(unsigned int *)(((int)stk + 4)) = ((a4 << 2) + 0x8C1B1D8C);
                modelSwapMaterial((*(int *)((((a4 << 2) + 0x8C1B1D8C) + 0x0))), t67, t66);
                modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x4))), (*(int *)(((*(int *)(((int)stk + 8))) + 0x4))));
                modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)(((int)stk + 16))) + 0x8))), (*(int *)(((*(int *)(((int)stk + 8))) + 0x8))));
                t92 = (*(int *)(((int)stk + 4)));
                t93 = (*(int *)(((*(int *)(((int)stk + 16))) + 0xC)));
                t94 = (*(int *)(((*(int *)(((int)stk + 8))) + 0xC)));
            }
            modelSwapMaterial((*(int *)((t92 + 0x0))), t93, t94);
            nlSetCommonTextureOffset((*(int *)(((a4 << 2) + 0x8C124DE0))));
            nlObjPutLoadTexture((*(int *)((0x8C1B1D8C + (a4 << 2)))), (0x338 + ((int)stk + 4)));
            *(unsigned int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0xC)) = ((*(int *)((((((a4 << 2) + a4) << 2) + 0x8C37DAF4) + 0xC))) + 0x1);
        }
    }
    t122 = 0x0;
    if ((int)(*(int *)(((*(int *)(((int)stk + 24))) + 0x8C37DB44))) >= (int)0x1) {
        nlObjPut((*(int *)((0x8C1B1D8C + (a4 << 2)))));
        t122 = 0x1;
    }
    return t122;
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
