/* Straight-line functions with calls and guards (batch gen_ye): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int circuitMenuCursor(int, int);
int circuitTaskSetA(int, int);
int circuitTaskTrim(int);
int cpuAimPointSet(int, int, float, float);
int cpuDblAimAddCorners(int, int);
int cpuDblAimAddCourt(int, int);
int cpuDblAimAddDeep(int, int);
extern int cpuDblAimAddRandom();
int cpuDblAimAddRange(int, int, float, float);
float cpuDblPathCross(int, int, int, int, Stk3, Stk3);
int cpuDblRecoverPosB(int, int, int);
float cpuDistXZ(int, int);
float cpuEdgeX(int, Stk3, float);
int cpuInRange(Stk3, Stk3, Stk3);
float cpuOppLineX(int);
extern int cpuSegCrossXZ();
int cpuSglAimAddGrid(int, int);
int cpuSglAimAddLv12(int, int);
int cpuSglAimAddOpen(int, int, float);
int cpuSglAimAddRange(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglAimAddSides(int, int);
float cpuSglAimScore2(int, int, float, float, float, float, float, float, float);
int cpuSglAimTable(int, int);
int cpuShotTargetSet(int, float, float);
int dbgMenuGetValue(int, int);
int dbgMenuSetValue(int, int, int);
int fadeCaptureBegin(float);
int fadeCaptureEnd(int);
int fadeStart(int);
int menuListDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int motionAdvance(int);
int motionChange(int, int, int, int, int, float);
int ndbGetTargets(int, int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int primRectInc(int, int, int, int, int, int, int, int);
int serveGetReceiver(void);
int serveGetServer(void);
int sndSe05_09(void);
int sndSeCancel(void);
int sndSeDecide(void);
int sprSet330Free(void);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageLoadWtcMain(void);
int stageLoadWtcSprites(void);
int titleSprBlinkPut(float);
Stk3 vecMake(float, float, float);
int FUN_8c080a4c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6, float f7, float f8);
int FUN_8c033044(int a4, int a5, int a6);
int FUN_8c013b28(int a4);
float FUN_8c047f58(int a4, float f4, float f5);
int FUN_8c04d450(int a4, int a5);
float FUN_8c05fedc(int a4);
float FUN_8c04ded0(int a4, int a5, float f4, float f5, float f6);
int FUN_8c05e822(int a4);
int FUN_8c074ad0(int a4, int a5);
float FUN_8c072d66(int a4, int a5);
int FUN_8c055ee2(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
void FUN_8c033e2e(int a4, float f4);
float FUN_8c05f81c(int a4, float f4, float f5);
int FUN_8c04b668(int a4, int a5);
int FUN_8c0609a4(int a4);
int FUN_8c04adec(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_8c0794e6(int a4, int a5);
int FUN_8c060814(int a4);

int FUN_8c080a4c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5, float f6, float f7, float f8)
{
    int stk[41];
    register int t2;
    register int t3;
    register int t4;
    register int t10;
    register int t11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register int t16;
    register int t29;
    register float u30;
    register float u31;
    register float u32;
    register float u33;
    register int t34;
    register float u41;
    register int t46;

    *(float *)(((((int)stk + 88) + 0xC) + 0x0)) = ((*(float *)((a4 + 0xAE8))) - *(float *)&a8);
    *(float *)(((((int)stk + 88) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 88) + 0xC) + 0x8)) = ((*(float *)((a4 + 0xAF0))) - *(float *)&a10);
    if (0x1 != 0) {
        t2 = 0x1;
        t3 = a5;
        for (;;) {
            t4 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x7);
            }
            *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((t3 + 0x0))) - (*(float *)((((((t4 << 1) + t4) << 2) + a5) + 0x0)))), 0.0f, ((*(float *)((t3 + 0x8))) - (*(float *)((((((t4 << 1) + t4) << 2) + a5) + 0x8)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t3); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAE8 + a4)); }
            t10 = ((int (*)(int, Stk3, Stk3, Stk3, Stk3))(cpuSegCrossXZ))((((int)stk + 40) + 0x48), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x48)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t4 << 1) + t4) << 2) + a5)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t3); }
            t11 = cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if (t11 != 0) {
                break;
            }
            t2 = (t2 + 0x1);
            t3 = (t3 + 0xC);
            if ((int)t2 >= (int)0x9) {
                t2 = ((int)stk + 88);
                t3 = a5;
                *(float *)((t2 + 0x0)) = 1.0f;
                *(float *)((t2 + 0x8)) = 0.0f;
                *(float *)((t2 + 0x4)) = 0.0f;
                u12 = f4;
                u13 = f5;
                u14 = f6;
                u15 = 9999.90039f;
                for (;;) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(t2); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t3); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAE8 + a4)); }
                    t16 = ((int (*)(int, Stk3, Stk3, Stk3, Stk3, float, float, float))(cpuSegCrossXZ))((((int)stk + 40) + 0x48), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)), u12, u13, u14);
                    u14 = (*(float *)((t3 + 0x0)));
                    u12 = (*(float *)(((int)stk + 112)));
                    u13 = u12;
                    u13 = (u13 - u14);
                    if (!(0.0f > u13)) {
                        u12 = u13;
                    } else {
                        u12 = (-u12);
                        u12 = (u12 + u14);
                    }
                    t3 = (t3 + 0xC);
                    if (u15 > u12) {
                        u15 = u12;
                    }
                    if ((unsigned int)t3 >= (unsigned int)(a5 + 0x60)) {
                        break;
                    }
                }
                if (!(0.0f > *(float *)&a10)) {
                    return (int)(u15 * ((((-*(float *)&a10) + (*(float *)0x8C080CBC)) / (*(float *)0x8C080CC0)) + (*(float *)0x8C080CC4)));
                }
                return (int)(u15 * ((((-(-*(float *)&a10)) + (*(float *)0x8C080CBC)) / (*(float *)0x8C080CC0)) + (*(float *)0x8C080CC4)));
            }
        }
        t46 = 0x0;
    } else {
        *(float *)((((int)stk + 88) + 0x0)) = 1.0f;
        *(float *)((((int)stk + 88) + 0x8)) = 0.0f;
        *(float *)((((int)stk + 88) + 0x4)) = 0.0f;
        t29 = a5;
        u30 = f4;
        u31 = f5;
        u32 = f6;
        u33 = 9999.90039f;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 88)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t29); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAE8 + a4)); }
            t34 = ((int (*)(int, int, int, int, Stk3, Stk3, Stk3, Stk3, float, float, float, float, float))(cpuSegCrossXZ))((((int)stk + 40) + 0x48), a5, a6, a7, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)(((int)stk + 76)), u30, u31, u32, f7, f8);
            u32 = (*(float *)((t29 + 0x0)));
            u30 = (*(float *)(((int)stk + 112)));
            u31 = u30;
            u31 = (u31 - u32);
            if (!(0.0f > u31)) {
                u30 = u31;
            } else {
                u30 = (-u30);
                u30 = (u30 + u32);
            }
            t29 = (t29 + 0xC);
            if (u33 > u30) {
                u33 = u30;
            }
            if ((unsigned int)t29 >= (unsigned int)(a5 + 0x60)) {
                break;
            }
        }
        u41 = (-*(float *)&a10);
        if (!(0.0f > *(float *)&a10)) {
            u41 = *(float *)&a10;
        }
        t46 = (int)(u33 * ((((-u41) + (*(float *)0x8C080CBC)) / (*(float *)0x8C080CC0)) + (*(float *)0x8C080CC4)));
        *(volatile float *)&a10;
    }
    return t46;
}

int FUN_8c033044(int a4, int a5, int a6)
{
    int stk[7];
    register int t127;
    register int t4;
    register int t31;
    register int t14;
    register int t23;
    register int t27;
    register int t98;
    register float u131;
    register int t35;
    register int t11;
    register int t12;
    register int t19;
    register int t20;
    register int t119;
    register int t58;
    register int t59;
    register int t60;
    register int t77;
    register int t79;
    register int t80;
    register int t81;
    register int t91;
    register int t100;
    register int t101;
    register int t102;
    register int t112;

    t127 = a6;
    if ((*(int *)0x8C2FBE0C) == a4) {
        *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0xC)) = (circuitMenuCursor((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0xC))), 0x2));
        t4 = *(int *)0x8C2FBE1C;
        t31 = 0x0;
        if ((*(int *)0x8C2FBE78) == t4) {
            t14 = 0x0;
            if (((*(int *)(((*(int *)0x8C2FBC50) + ((((t4 << 2) + t4) << 2) << 1)))) == 1) && ((t11 = *(int *)0x8C2FBE70, t11 == 2) && (t12 = *(int *)0x8C2FBE80, t12 != -1))) {
                t14 = 0x1;
            }
            t23 = t14;
            if (((*(int *)(((((((t4 << 2) + t4) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x0))) == 0) && ((t19 = *(int *)0x8C2FBE70, t19 == 1) && (t20 = *(int *)0x8C2FBE7C, t20 != -1))) {
                t23 = 0x1;
            }
            t27 = t23;
            if ((*(int *)(((*(int *)0x8C2FBC50) + ((((t4 << 2) + t4) << 2) << 1)))) == 2) {
                t27 = 0x1;
            }
            t31 = t27;
            t35 = 0x8C2FBC50;
        }
        if (t31 != 0) {
            t98 = t35;
            if ((*(int *)0x8C2FBE10) == 0) {
                if ((((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C421F70) << 2)))) + 0x10))) & 5) == 0) && (t58 = *(int *)0x8C421F70, t59 = *(int *)((0x8C29B898 + (t58 << 2))), t60 = *(int *)((t59 + 0x10)), (t60 & 8) == 0)) {
                    t77 = t35;
                } else {
                    if ((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0xC))) == 0) {
                        circuitTaskSetA(a4, 0x1);
                        sndSeDecide();
                    } else {
                        circuitTaskSetA(a4, 0x0);
                        sndSeCancel();
                    }
                    circuitTaskTrim(a4);
                }
                if (((*(int *)0x8C2FBE10) == 0) && (t79 = *(int *)0x8C421F70, t80 = *(int *)((0x8C29B898 + (t79 << 2))), t81 = *(int *)((t80 + 0x10)), (t81 & 2) != 0)) {
                    circuitTaskSetA(a4, 0x0);
                    circuitTaskTrim(a4);
                    sndSeCancel();
                } else {
                    t91 = t77;
                }
                t98 = t91;
            }
            t119 = t98;
        } else {
            if (((*(int *)0x8C2FBE10) == 0) && (t100 = *(int *)0x8C421F70, t101 = *(int *)((0x8C29B898 + (t100 << 2))), t102 = *(int *)((t101 + 0x10)), (t102 & 2) != 0)) {
                circuitTaskSetA(a4, 0x0);
                circuitTaskTrim(a4);
                sndSeCancel();
            } else {
                t112 = t35;
            }
            t119 = t112;
        }
        t127 = t119;
    }
    menuListDraw((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0xC))), 0x0, t127, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    sprSheetSet(0x8C109444);
    u131 = *(float *)0x8C033458;
    sprSheetPut(0x0, (*(float *)0x8C033464), (*(float *)0x8C033460), u131, 1.0f);
    sprSheetSet(0x8C109468);
    sprSheetPut(0x0, (*(float *)0x8C033470), (*(float *)0x8C03346C), u131, 1.0f);
    sprSheetSet(0x8C10948C);
    return (sprSheetPut(0x0, (*(float *)0x8C03347C), (*(float *)0x8C033478), u131, 1.0f));
}

int FUN_8c013b28(int a4)
{
    int stk[17];
    register int t1;
    register int t9;
    register float u19;
    register int t21;
    register int t24;
    register int t26;
    register int t29;
    register float u30;
    register int t33;
    register int t36;
    register int t38;
    register int t43;
    register int t45;
    register int t47;
    register int t49;
    register int t51;
    register int t53;
    register int t56;
    register int t59;
    register int t62;

    t1 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    if (t1 == -1) {
        return t1;
    }
    if (((*(int *)(((*(int *)((0x8C29B898 + ((*(int *)0x8C285E48) << 2)))) + 0x10))) & 5) != 0) {
        t9 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
        dbgMenuSetValue((*(int *)((a4 + 0x14))), 0x0, (t9 + 0x1));
        dbgMenuSetValue((*(int *)((a4 + 0x14))), 0x1, 0x1);
    }
    nlLocate(0xA, 0x14);
    u19 = *(float *)((a4 + 0x1C));
    *(int *)((int)stk + 48) = (int)u19;
    t21 = (*(int *)((a4 + 0x30)));
    *(int *)((int)stk + 44) = t21;
    *(int *)((int)stk + 40) = 0x8C1014C0;
    nlPrintf(0x8C1014C0, t21, (int)u19);
    t24 = (*(int *)((a4 + 0x60)));
    *(int *)((int)stk + 36) = t24;
    t26 = (*(int *)((a4 + 0x5C)));
    *(int *)((int)stk + 32) = t26;
    *(int *)((int)stk + 28) = 0x8C1014D0;
    nlPrintf(0x8C1014D0, t26, t24);
    t29 = (*(int *)((a4 + 0x48)));
    *(int *)((int)stk + 24) = t29;
    u30 = *(float *)((a4 + 0x24));
    *(float *)(((int)stk + 20)) = u30;
    *(int *)((int)stk + 16) = 0x8C1014E8;
    nlPrintf(0x8C1014E8, u30, t29);
    t33 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 12) = t33;
    t36 = (dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x2));
    *(int *)((int)stk + 8) = t36;
    t38 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    motionChange((a4 + 0x18), (*(int *)((0x8C10144C + (((t38 << 1) + t38) << 2)))), t36, 0x1, t33, 1.0f);
    *(float *)(((a4 + 0x18) + 0xB14)) = 0.0f;
    *(float *)(((a4 + 0x18) + 0xB18)) = 0.0f;
    nlPushMatrix(0x0);
    t43 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
    *(float *)(((int)stk + 8)) = (float)t43;
    t45 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
    *(float *)(((int)stk + 4)) = (float)t45;
    t47 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
    *(int *)((int)stk + 8) = (0xB00 + a4);
    *(Stk3 *)((0xB00 + a4)) = vecMake((float)t47, (float)t45, (float)t43);
    t49 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x5);
    *(float *)(((int)stk + 48)) = (float)t49;
    t51 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x4);
    *(float *)(((int)stk + 44)) = (float)t51;
    t53 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x3);
    nlTranslate((float)t53, (float)t51, (float)t49);
    t56 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x6);
    nlRotateAY((t56 << 8));
    t59 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x7);
    nlRotateAX((t59 << 8));
    t62 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x8);
    nlRotateAZ((t62 << 8));
    motionAdvance((a4 + 0x18));
    playerPut((a4 + 0x18), 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    return nlPopMatrix(0x1);
}

float FUN_8c047f58(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
                u0 = nlRandom();
                u1 = *(float *)0x8C291F7C;
                u2 = (((-((float)t1 * 0.300000012f)) - (u0 * 0.100000001f)) + 1.0f);
                u3 = ((*(float *)((a4 + 0xB00))) * u2);
                u2 = (-u1);
                if (!(0.0f > u1)) {
                    u2 = u1;
                }
                u1 = 0.0f;
                if (12.3450012f > u2) {
                } else {
                    u2 = *(float *)0x8C291F7C;
                    u4 = (-u2);
                    if (!(0.0f > u2)) {
                        u4 = u2;
                    }
                    if (28.8050003f > u4) {
                        u2 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u4 = ((float)((u2 > 0.0f) - (0.0f > u2)) * 26.7474995f);
                    } else {
                        u4 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                    }
                    u1 = u4;
                }
                u2 = (u0 * 0.100000001f);
                u0 = u1;
                u1 = (-(u3 * 118.849998f));
            } else {
                u3 = *(float *)0x8C0481A4;
                u4 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B));
                u5 = nlRandom();
                u6 = *(float *)0x8C0481AC;
                u7 = (((-((float)t1 * 0.300000012f)) - (u5 * u6)) + 1.0f);
                u8 = ((*(float *)((a4 + 0xB00))) * u7);
                u2 = (u5 * u6);
                u0 = (u4 * u3);
                u1 = (-(u8 * 118.849998f));
            }
            u3 = *(float *)0x8C0481B0;
            u4 = (-u0);
            if (!(0.0f > u0)) {
                u4 = u0;
            }
            u5 = u0;
            if (u4 > u3) {
                u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u3);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c04d450(int a4, int a5)
{
    int stk[7];
    register int t0;
    register float t2;
    register int t9;
    register float u11;
    register float u12;
    register float u15;
    register float u16;
    register int t18;
    register int t19;
    register int t21;
    register int t22;
    register int t27;
    register int t24;
    register int t31;
    register int t41;
    register int t42;
    register int t45;
    register int t46;
    register int t72;
    register float u74;
    register float u75;
    register float u78;
    register float u79;
    register int t81;
    register int t82;
    register int t84;
    register int t85;
    register int t90;
    register int t87;
    register int t94;
    register int t104;
    register int t105;
    register int t108;
    register int t109;
    register int t128;
    register int t65;
    register int t5;
    register int t6;
    register int t61;
    register int t57;
    register int t39;
    register int t35;
    register int t54;
    register int t51;
    register int t68;
    register int t69;
    register int t124;
    register int t120;
    register int t102;
    register int t98;
    register int t117;
    register int t114;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
        t2 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
        if (10.0f > t2) {
            t65 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
        } else {
            if ((((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) && ((t5 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t5 >= (int)0x9) && (t6 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t6 <= (int)0xC))) {
                t9 = ndbGetTargets(a4, a5, 0x3);
                t61 = ((a5 + t9) + (ndbGetTargets(a4, (a5 + t9), 0x5)));
            } else {
                u11 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
                u12 = (-u11);
                if (!(0.0f > u11)) {
                    u12 = u11;
                }
                if (64.0f > u12) {
                    u15 = *(float *)((a4 + 0xB9C));
                    u16 = (-u15);
                    if (!(0.0f > u15)) {
                        u16 = u15;
                    }
                    if (!(16.460001f > u16)) {
                        t18 = nlRand();
                        t19 = ((~(((~t18) + 0x1) & 0x3)) + 0x1);
                        if ((int)t18 >= 0) {
                            t19 = (t18 & 0x3);
                        }
                        if (t19 != 0) {
                            t21 = nlRand();
                            t22 = ((~(((~t21) + 0x1) & 0x1)) + 0x1);
                            if ((int)t21 >= 0) {
                                t22 = (t21 & 0x1);
                            }
                            t27 = a5;
                            if (t22 != 0) {
                                t24 = ndbGetTargets(a4, a5, 0x4);
                                t27 = ((a5 + t24) + (ndbGetTargets(a4, (a5 + t24), 0x8)));
                            }
                            t31 = t27;
                            if (t27 != 0) {
                            } else {
                                t31 = (cpuSglAimTable(a4, t27));
                            }
                            t35 = t31;
                        } else {
                            t35 = (ndbGetTargets(a4, a5, 0x9));
                        }
                        t39 = t35;
                    } else {
                        t39 = (ndbGetTargets(a4, a5, 0x9));
                    }
                    t57 = t39;
                } else {
                    t41 = nlRand();
                    t42 = ((~(((~t41) + 0x1) & 0x1)) + 0x1);
                    if ((int)t41 >= 0) {
                        t42 = (t41 & 0x1);
                    }
                    if (t42 != 0) {
                        t54 = (cpuSglAimTable(a4, a5));
                    } else {
                        t45 = nlRand();
                        t46 = ((~(((~t45) + 0x1) & 0x1)) + 0x1);
                        if ((int)t45 >= 0) {
                            t46 = (t45 & 0x1);
                        }
                        if (t46 != 0) {
                            t51 = (ndbGetTargets(a4, a5, 0x9));
                        } else {
                            t51 = (a5 + (cpuSglAimAddLv12(a4, a5)));
                        }
                        t54 = t51;
                    }
                    t57 = t54;
                }
                t61 = t57;
            }
            t65 = t61;
        }
        t128 = t65;
    } else {
        if ((((*(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB60))) & 0x100) != 0) && ((t68 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t68 >= (int)0x9) && (t69 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xC5C)), (int)t69 <= (int)0xC))) {
            t72 = ndbGetTargets(a4, a5, 0x3);
            t124 = ((a5 + t72) + (ndbGetTargets(a4, (a5 + t72), 0x5)));
        } else {
            u74 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u75 = (-u74);
            if (!(0.0f > u74)) {
                u75 = u74;
            }
            if (64.0f > u75) {
                u78 = *(float *)((a4 + 0xB9C));
                u79 = (-u78);
                if (!(0.0f > u78)) {
                    u79 = u78;
                }
                if (!(16.460001f > u79)) {
                    t81 = nlRand();
                    t82 = ((~(((~t81) + 0x1) & 0x3)) + 0x1);
                    if ((int)t81 >= 0) {
                        t82 = (t81 & 0x3);
                    }
                    if (t82 != 0) {
                        t84 = nlRand();
                        t85 = ((~(((~t84) + 0x1) & 0x1)) + 0x1);
                        if ((int)t84 >= 0) {
                            t85 = (t84 & 0x1);
                        }
                        t90 = a5;
                        if (t85 != 0) {
                            t87 = ndbGetTargets(a4, a5, 0x4);
                            t90 = ((a5 + t87) + (ndbGetTargets(a4, (a5 + t87), 0x8)));
                        }
                        t94 = t90;
                        if (t90 != 0) {
                        } else {
                            t94 = (cpuSglAimTable(a4, t90));
                        }
                        t98 = t94;
                    } else {
                        t98 = (ndbGetTargets(a4, a5, 0x9));
                    }
                    t102 = t98;
                } else {
                    t102 = (ndbGetTargets(a4, a5, 0x9));
                }
                t120 = t102;
            } else {
                t104 = nlRand();
                t105 = ((~(((~t104) + 0x1) & 0x1)) + 0x1);
                if ((int)t104 >= 0) {
                    t105 = (t104 & 0x1);
                }
                if (t105 != 0) {
                    t117 = (cpuSglAimTable(a4, a5));
                } else {
                    t108 = nlRand();
                    t109 = ((~(((~t108) + 0x1) & 0x1)) + 0x1);
                    if ((int)t108 >= 0) {
                        t109 = (t108 & 0x1);
                    }
                    if (t109 != 0) {
                        t114 = (ndbGetTargets(a4, a5, 0x9));
                    } else {
                        t114 = (a5 + (cpuSglAimAddLv12(a4, a5)));
                    }
                    t117 = t114;
                }
                t120 = t117;
            }
            t124 = t120;
        }
        t128 = t124;
    }
    return t128;
}

float FUN_8c05fedc(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register float u6;
    register int t9;
    register float u11;
    register float u13;
    register float u14;
    register float u20;
    register float u24;
    register float u25;
    register float u37;
    register float u43;
    register float u61;
    register float u69;
    register float u30;
    register float u34;
    register float u35;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 4)) = 0x8C291F24;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u34 = (*(float *)((a4 + 0xAE8)));
        u35 = (*(float *)((a4 + 0xAF0)));
    } else {
        t5 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
        *(unsigned char *)(((int)stk + 4)) = t5;
        u6 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
        t9 = (u6 > 0.0f) - (0.0f > u6);
        u11 = (-u6);
        if (!(0.0f > u6)) {
            u11 = u6;
        }
        u13 = ((float)t9 * u11);
        u14 = (u13 * 0.600000024f);
        u14 = u14 + 32.9099998f * (float)t5;
        u20 = u14;
        if (((u14 > 0.0f) - (0.0f > u14)) != (*(signed char *)(((int)stk + 4)))) {
            u20 = 0.0f;
        }
        u24 = ((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
        u25 = ((*(float *)((a4 + 0xB00))) * u24);
        u30 = (u25 * 118.849998f);
        u34 = u20;
        u35 = (-(u25 * 118.849998f));
    }
    u37 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
    if (((u37 > 0.0f) - (0.0f > u37)) != (*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)))) {
        u43 = (-u37);
        if (!(0.0f > u37)) {
            u43 = u37;
        }
        if (u43 > 15.0f) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
            *(unsigned char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)) = ((short)(*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D))) * (short)0xFFFFFFFF);
        }
    }
    u61 = (-u34);
    if (!(0.0f > u34)) {
        u61 = u34;
    }
    u69 = u34;
    if (u61 > 38.3949966f) {
        u69 = ((float)((u34 > 0.0f) - (0.0f > u34)) * 38.3949966f);
    }
    *(unsigned int *)((a4 + 0xA24)) = 0x0;
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
    *(float *)((a4 + 0xA34)) = u69;
    *(float *)((a4 + 0xA3C)) = u35;
    return u30;
}

float FUN_8c04ded0(int a4, int a5, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)0x8C291F7C;
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (!(43.7324982f > u1)) {
        *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
    } else {
        u0 = *(float *)0x8C291F84;
        u1 = (-u0);
        if (!(0.0f > u0)) {
            u1 = (*(float *)0x8C291F84);
        }
        if (!(125.31749f > u1)) {
            *(unsigned short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        } else {
            t2 = (int)((int)(nlRand()) % (int)a5);
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0x0)));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0x8)));
            *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)));
            if ((unsigned char)(*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC))) == 3) {
                *(unsigned char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)) = 0x1;
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)(((0x8C2FCC6C + (((t2 << 2) << 2) << 1)) + 0xC)));
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
            u1 = (-u0);
            if (!(0.0f > u0)) {
                u1 = u0;
            }
            u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
            u2 = (-1.0f);
            u2 = u2 + (1.0f + 1.0f) * (u1 / (*(float *)0x8C04E0E8));
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / (*(float *)0x8C287B40)), u2);
            u0 = 0.0f;
            if ((*(int *)0x8C291F74) == 5) {
                u0 = 1.0f;
            }
            u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u2 = *(float *)0x8C04E0F8;
            u3 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
            u4 = u0;
            u4 = u4 + u2 * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / (*(float *)0x8C04E0F4))) + 1.0f));
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u3 - 10.0f);
            u0 = *(float *)0x8C04E100;
            if (u0 > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = u0;
            }
            if ((u4 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u4 - (*(float *)0x8C291F54));
            } else {
                *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
            }
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x0;
            *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            u0 = u2;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c05e822(int a4)
{
    int stk[17];
    register int t0;
    register int t1;
    register int t48;
    register float u16;
    register float u17;
    register float u18;
    register float u20;
    register int t22;
    register int t23;
    register float t27;
    register float u30;
    register float u31;
    register int t10;
    register float u40;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 36)) = 0x8C2FC69C;
    t48 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((((*(int *)0x8C291F78) & 4) != 0) && (t10 = *(signed char *)(((0x8C2FC69C + (t0 * 0x160)) + 0x13F)), (unsigned char)t10 == 1)) {
            cpuDblRecoverPosB(a4, (((int)stk + 28) + 0x4), ((int)stk + 28));
        } else {
            u16 = *(float *)(((((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u17 = *(float *)(((0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)) + 0xAF0));
            u18 = (-u16);
            if (!(0.0f > u16)) {
                u18 = u16;
            }
            u20 = (-u17);
            if (!(0.0f > u17)) {
                u20 = u17;
            }
            t22 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            t23 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
            if (u20 > u18) {
                t22 = (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78));
                t23 = (((((-t0) + 0x3) & 0x3) * 0xD78) + 0x8C287D84);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C291F48); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C291F3C); }
            t27 = cpuDblPathCross(((((*(int *)((t23 + 0xB5C))) * 0x160) + (*(int *)(((int)stk + 36)))) + 0xB8), (0x8C287D84 + (((t1 + 0x2) & 0x3) * 0xD78)), (t0 * 0x160), 0x3, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            u30 = ((-((float)(*(signed char *)(((0x8C2FC69C + (t0 * 0x160)) + 0x12B))) * 0.300000012f)) + 1.0f);
            u31 = ((*(float *)((a4 + 0xB00))) * u30);
            *(float *)(((int)stk + 28)) = (-(u31 * 118.849998f));
            if (10.0f > t27) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t23)); }
                u40 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 28)))));
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB9C + t22)); }
                u40 = (cpuEdgeX(((((*(float *)((a4 + 0xAE8))) > (*(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))))) ? 1 : 0), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 28)))));
            }
            *(float *)(((int)stk + 32)) = u40;
        }
        *(unsigned int *)((a4 + 0xA24)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB1)) = 0x0;
        *(unsigned char *)(((0x8C2FC69C + (t0 * 0x160)) + 0xB0)) = 0x0;
        *(float *)((a4 + 0xA34)) = (*(float *)(((int)stk + 32)));
        *(float *)((a4 + 0xA3C)) = (*(float *)(((int)stk + 28)));
        t48 = 0xA3C;
    }
    return t48;
}

int FUN_8c074ad0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = (int)((int)(nlRand()) % (int)a5);
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
    *(unsigned char *)(((0x13C + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x138));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    u0 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x130));
    u2 = (-1.0f);
    u2 = u2 + (1.0f + 1.0f) * (u1 / 118.849998f);
    cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u0) / 54.8499985f), u2);
    *(unsigned char *)(((0x1D + ((t1 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t2 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
    t2 = nlRand();
    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x1);
    }
    t2 = *(int *)0x8C2FCC1C;
    u0 = (float)(t3 + 0x19);
    if ((*(int *)0x8C291F74) == 5) {
        u0 = ((float)(t3 + 0x19) + (float)(0x14 - t2));
    }
    u1 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    u2 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC));
    u3 = u0;
    u3 = u3 + 0.5f * (((float)(*(short *)((((t1 * 0x160) + 0x8C2FC69C) + 0x118))) + (*(float *)0x8C291F54)) * ((-(u1 / 100.0f)) + 1.0f));
    *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = (u2 - (float)(0x5A - ((t2 << 2) + t2)));
    if (-200.0f > (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)))) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0xC)) = -200.0f;
    }
    u0 = u3;
    if (((*(int *)0x8C291F78) & 4) != 0) {
        u1 = *(float *)((0x8C288A14 + ((serveGetServer()) * 0xD78)));
        u2 = u3;
        if (u1 > 1.0f) {
            u2 = (u3 + (float)((int)((int)(nlRand()) % (int)0x5)));
        }
        u0 = u2;
    }
    if ((u0 > (*(float *)0x8C291F54)) && (t0 = *(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB6)), t0 == 0)) {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = (u0 - (*(float *)0x8C291F54));
    } else {
        *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x4)) = 1.0f;
    }
    *(unsigned int *)((a4 + 0xA24)) = 0x1;
    return 0xA24;
}

float FUN_8c072d66(int a4, int a5)
{
    int stk[8];

    register int R1;
    register int R6;
    register int R7;
    register int R8;
    register float F0;
    register float F4;
    register float F5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = *(int *)((v0_4 + 0xB5C));
    *(unsigned int *)(((int)stk + 4)) = ((((v0_1 + 0x1) & 0x3) * 0xD78) + 0x8C287D84);
    v0_2 = (((((v0_1 + 0x2) & 0x3) * 0xD78) + 0x8C287D84));
    v0_3 = (((((v0_1 + 0x3) & 0x3) * 0xD78) + 0x8C287D84));
    v0_0 = (v0_0);
    v0_1 = (v0_4);
    v0_4 = (0x8C291F24);
    if ((((*(int *)0x8C291F78) & 4) == 0)) goto L_8C072DBE;
    v0_4 = ((cpuDblAimAddCourt(v0_1, v0_0)));
    L_8C072EB8:;
    v0_0 = ((v0_0 + v0_4));
    L_8C072EF8:;
    return F0;
    L_8C072DBE:;
    if ((((*(int *)((v0_1 + 0xB60))) & 4) == 0)) goto L_8C072DE4;
    v0_4 = !(10.0f > (cpuDistXZ((0xAE8 + v0_1), (0xBA8 + v0_1))));
    if (v0_4) goto L_8C072DE4;
    v0_4 = ((cpuDblAimAddRange(v0_1, v0_0, F4, F5)));
    goto L_8C072EB8;
    L_8C072DE4:;
    w0_1 = *(float *)((v0_1 + 0xB9C));
    w0_0 = (0.0f);
    F5 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C072DF2;
    v0_4 = (0x1);
    L_8C072DFC:;
    w0_1 = *(float *)((v0_2 + 0xA34));
    w0_0 = (0.0f);
    F4 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C072E0A;
    v0_5 = (0x1);
    L_8C072E3E:;
    if ((v0_4 != v0_5)) goto L_8C072E6C;
    w0_1 = (0.0f);
    if ((0.0f > F5)) goto L_8C072E4E;
    w0_0 = (F5);
    L_8C072E52:;
    if ((w0_1 > F4)) goto L_8C072E5A;
    w0_1 = (F4);
    L_8C072E5E:;
    if ((!(w0_1 > w0_0))) goto L_8C072E6C;
    v0_4 = ((((int (*)(int, int, float, float))(cpuDblAimAddRandom))(v0_1, v0_0, F4, F5)));
    goto L_8C072EB8;
    L_8C072E6C:;
    v0_4 = !(0.150000006f > (cpuOppLineX(v0_1)));
    if (v0_4) goto L_8C072E84;
    v0_4 = ((cpuDblAimAddCorners(v0_1, v0_0)));
    goto L_8C072EB8;
    L_8C072E84:;
    w0_0 = *(float *)(((*(int *)(((int)stk + 4))) + 0xAF0));
    v0_4 = (0xAF0);
    F4 = (w0_0);
    F5 = (47.5400009f);
    if ((0.0f > w0_0)) goto L_8C072E98;
    w0_1 = (F4);
    L_8C072E9C:;
    if ((F5 > w0_1)) goto L_8C072EB2;
    w0_1 = *(float *)((v0_3 + v0_4));
    w0_0 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C072EAC;
    w0_0 = ((*(float *)((v0_3 + v0_4))));
    L_8C072EAE:;
    if (!((!(F5 > w0_0)))) goto L_8C072EB2;
    w0_0 = *(float *)((v0_2 + 0xAE8));
    w0_2 = *(float *)((v0_1 + 0xAE8));
    w0_3 = ((w0_0 - w0_2));
    w0_1 = (0.0f);
    F5 = (((*(float *)((v0_1 + 0xB00))) * 118.849998f));
    if ((!((w0_0 - w0_2) > 0.0f))) goto L_8C072ED8;
    v0_5 = (0x1);
    goto L_8C072EE2;
    L_8C072EB2:;
    v0_4 = ((cpuDblAimAddDeep(v0_1, v0_0)));
    goto L_8C072EB8;
    L_8C072EE2:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_5 * 54.8499985f), F5);
    v0_0 = ((v0_0 + 0x1));
    goto L_8C072EF8;
    L_8C072ED8:;
    if ((!(w0_1 > w0_3))) goto L_8C072EE0;
    v0_5 = (0xFFFFFFFF);
    goto L_8C072EE2;
    L_8C072EE0:;
    v0_5 = (0x0);
    goto L_8C072EE2;
    L_8C072EAC:;
    w0_0 = ((-w0_0));
    goto L_8C072EAE;
    L_8C072E98:;
    w0_1 = ((-F4));
    goto L_8C072E9C;
    L_8C072E5A:;
    w0_1 = ((-F4));
    goto L_8C072E5E;
    L_8C072E4E:;
    w0_0 = ((-F5));
    goto L_8C072E52;
    L_8C072E0A:;
    if ((!(w0_0 > F4))) goto L_8C072E3C;
    v0_5 = (0xFFFFFFFF);
    goto L_8C072E3E;
    L_8C072E3C:;
    v0_5 = (0x0);
    goto L_8C072E3E;
    L_8C072DF2:;
    if ((!(w0_0 > F5))) goto L_8C072DFA;
    v0_4 = (0xFFFFFFFF);
    goto L_8C072DFC;
    L_8C072DFA:;
    v0_4 = (0x0);
    goto L_8C072DFC;
}

int FUN_8c055ee2(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[11];
    register int t0;
    register float u1;
    register float u2;
    register float u5;
    register float u7;
    register float t9;
    register float t10;
    register int t12;
    register int t13;
    register int t14;
    register float u15;
    register int t16;
    register int t44;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t28;
    register float u53;
    register float u54;
    register float u56;
    register float u59;
    register int t76;
    register int t62;
    register int t20;
    register int t33;
    register int t34;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)0x8C291F7C;
    u2 = (-u1);
    if (!(0.0f > u1)) {
        u2 = u1;
    }
    if (!(43.7324982f > u2)) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
        t76 = 0x4;
    } else {
        u5 = *(float *)0x8C291F84;
        u7 = (-u5);
        if (!(0.0f > u5)) {
            u7 = (*(float *)0x8C291F84);
        }
        if (!(125.31749f > u7)) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)) = 0x0;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            t62 = 0x4;
        } else {
            t9 = cpuSglAimScore2(a4, a5, u1, f5, f6, f7, f8, f9, f10);
            t10 = nlRandom();
            t12 = 0x8C2FCC6C;
            t13 = 0x0;
            t14 = a5;
            u15 = t9;
            for (;;) {
                t16 = (t14 == 0);
                t14 = (t14 - 1);
                if (t16) {
                    break;
                }
                u15 = (*(float *)((t12 + (0x1C))));
                t12 = (t12 + 0x20);
                if (!(u15 > (t10 * t9))) {
                    t13 = (t13 + 0x1);
                }
            }
            *(unsigned int *)(((int)stk + 4)) = 0x8C2FCC6C;
            t44 = 0x0;
            if ((int)a5 > 0) {
                t21 = t12;
                t22 = 0x8C2FCC6C;
                t23 = 0x0;
                t24 = 0x0;
                for (;;) {
                    if (!((*(float *)(((*(int *)(((int)stk + 4))) + 0x1C))) > (t10 * t9))) {
                        t20 = 0x8C0F7BAC;
                        t28 = (int)((int)(nlRand()) % (int)t13);
                        if (t28 == 0) {
                            t23 = t24;
                        }
                    } else {
                        t33 = t21;
                        t34 = t22;
                    }
                    t20 = (*(int *)(((int)stk + 4)));
                    t21 = t33;
                    t22 = t34;
                    t24 = (t24 + 0x1);
                    t20 = (t20 + 0x20);
                    *(unsigned int *)(((int)stk + 4)) = t20;
                    if ((int)t24 >= (int)a5) {
                        break;
                    }
                }
                t44 = t23;
            }
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130)) = (*(float *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x0)));
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138)) = (*(float *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0x8)));
            *(unsigned char *)(((0x13C + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            if ((unsigned char)(*(signed char *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC))) == 3) {
                *(unsigned char *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)) = 0x1;
                *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12A)) = 0x1;
            }
            *(unsigned char *)(((0x1D + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (*(signed char *)((((((t44 << 2) << 2) << 1) + 0x8C2FCC6C) + 0xC)));
            u53 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x138));
            u54 = (-u53);
            if (!(0.0f > u53)) {
                u54 = u53;
            }
            u56 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x130));
            u59 = (-1.0f);
            u59 = u59 + (1.0f + 1.0f) * (u54 / 118.849998f);
            cpuShotTargetSet(a4, (((*(float *)((a4 + 0xB00))) * u56) / (*(float *)0x8C287B40)), u59);
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x4)) = 0.0f;
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = (unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1D)));
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129)) = 0x5;
            *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x8)) = 0.0f;
            *(unsigned int *)((a4 + 0xA24)) = 0x1;
            t62 = 0xA24;
        }
        t76 = t62;
    }
    return t76;
}

void FUN_8c033e2e(int a4, float f4)
{
    int stk[12];
    register int t41;
    register int t4;
    register int t35;
    register int t22;
    register int t23;
    register int t24;

    if ((*(int *)0x8C2FBE0C) != a4) {
        return;
    }
    if (((*(int *)0x8C2FBE88) != -1) && (t4 = *(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4)), (int)t4 < (int)0x3C)) {
        *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4)) = ((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) + 0x1);
    }
    t41 = 0x0;
    if ((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) == 60) {
        if ((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))) == 0) {
            *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8)) = 0x1;
            fadeCaptureBegin(f4);
            t35 = 0x1;
        } else {
            if (((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) == 60) && (t22 = *(int *)0x8C421F70, t23 = *(int *)((0x8C29B898 + (t22 << 2))), t24 = *(int *)((t23 + 0x10)), (t24 & 8) != 0)) {
                sndSe05_09();
                fadeStart(0x3C);
                circuitTaskTrim(a4);
            }
            t35 = 0x0;
        }
        t41 = t35;
    }
    if ((int)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8))) < (int)0x2) {
        sprSheetSet(0x8C109880);
        sprSheetPut(0x0, 18.0f, 42.0f, 0.800000012f, ((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) / 60.0f));
        sprSheetSet(0x8C1098A4);
        *(unsigned int *)0x8C287680 = 0x4000;
        sprSheetPut(0x0, 530.0f, 438.0f, 0.800000012f, ((float)(*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) / 60.0f));
        *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 0.0f, 0.899999976f);
        primRectInc(0x280, 0x1E0, 0xFF000000, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12));
    }
    fadeCaptureEnd(0x0);
    if (t41 != 0) {
        sprSet330Free();
        *(unsigned int *)0x8C2FBE88 = 0xFFFFFFFF;
        stageLoadWtcMain();
        stageLoadWtcSprites();
        *(unsigned int *)0x8C2FBE98 = 0x1;
        *(unsigned int *)0x8C2FBE6C = 0x0;
        *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x8)) = 0x2;
    }
    if ((*(int *)(((((((a4 << 1) + a4) << 2) << 1) + 0x8C2FBD1C) + 0x4))) == 60) {
        titleSprBlinkPut(436.0f);
    return;
    }
}

float FUN_8c05f81c(int a4, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = (*(float *)((a4 + 0xAE8)));
                u1 = (*(float *)((a4 + 0xAF0)));
            } else {
                u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                if (((u2 > 0.0f) - (0.0f > u2)) != (*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)))) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D)) = ((short)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D))) * (short)0xFFFFFFFF);
                    *(unsigned char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D)) = ((short)(*(signed char *)(((0x8C2FC69C + (t1 * 0x160)) + 0x13D))) * (short)0xFFFFFFFF);
                }
                t1 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x13D));
                u2 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
                t2 = (u2 > 0.0f) - (0.0f > u2);
                u3 = (-u2);
                if (!(0.0f > u2)) {
                    u3 = u2;
                }
                u2 = ((float)t2 * u3);
                u3 = (u2 * 0.5f);
                u3 = u3 + 27.4249992f * (float)(signed char)t1;
                u2 = u3;
                if (((u3 > 0.0f) - (0.0f > u3)) != (signed char)t1) {
                    u2 = 0.0f;
                }
                u3 = *(float *)((a4 + 0xB00));
                u4 = *(float *)0x8C05FA50;
                u5 = (((-((float)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12B))) * (*(float *)0x8C05FA44))) - ((nlRandom()) * (*(float *)0x8C05FA4C))) + 1.0f);
                u6 = (u3 * u5);
                u3 = u4;
                u0 = u2;
                u1 = (-(u6 * u4));
            }
            u2 = *(float *)0x8C05FA54;
            u4 = (-u0);
            if (!(0.0f > u0)) {
                u4 = u0;
            }
            u5 = u0;
            if (u4 > u2) {
                u5 = ((float)((u0 > 0.0f) - (0.0f > u0)) * u2);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u5;
            *(float *)((a4 + 0xA3C)) = u1;
            u0 = u3;
        }
        u1 = u0;
    }
    return u1;
}

int FUN_8c04b668(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t1;
    register float u4;
    register float u5;
    register float u10;
    register float u11;
    register float u12;
    register float u15;
    register float u23;
    register float t43;
    register float u45;
    register float u46;
    register float u48;
    register float u51;
    register int t55;
    register float u65;
    register int t69;
    register float u81;
    register float u82;
    register float u84;
    register float u87;
    register int t91;
    register float u107;
    register int t111;
    register float u33;
    register float u27;
    register int t130;
    register int t127;
    register int t79;
    register int t76;
    register int t63;
    register float u59;
    register float u72;
    register int t124;
    register int t105;
    register float u101;
    register float u120;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u4 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u5 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    u5 = u5 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u4;
    u10 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
    u11 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0)));
    u11 = u11 + (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))) * u10;
    u12 = (-u11);
    if (!(0.0f > u11)) {
        u12 = u11;
    }
    if (u12 > 118.849998f) {
        u33 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u15 = (-u11);
        if (!(0.0f > u11)) {
            u15 = u11;
        }
        if (!(8.2300005f > u15)) {
            u23 = u11;
            if ((float)((u11 > 0.0f) - (0.0f > u11)) == (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB00)))) {
                u23 = ((*(float *)((a4 + 0xB00))) * 8.2300005f);
            }
            u27 = u23;
        } else {
            u27 = ((*(float *)((a4 + 0xB00))) * 8.2300005f);
        }
        u33 = u27;
    }
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t130 = (a5 + (cpuSglAimAddGrid(a4, a5)));
    } else {
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            t43 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
            if (10.0f > t43) {
                t79 = (a5 + (cpuSglAimAddRange(a4, a5, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28))));
            } else {
                u45 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
                u46 = (-u45);
                if (!(0.0f > u45)) {
                    u46 = u45;
                }
                if (u46 > 0.200000003f) {
                    u48 = (-u33);
                    if (!(0.0f > u33)) {
                        u48 = u33;
                    }
                    if (47.5400009f > u48) {
                        t63 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    } else {
                        u51 = (-u33);
                        if (!(0.0f > u33)) {
                            u51 = u33;
                        }
                        t55 = a5;
                        if (47.5400009f > u51) {
                            t55 = (a5 + (cpuSglAimAddSides(a4, a5)));
                        } else {
                            u59 = u45;
                        }
                        t63 = (t55 + (cpuSglAimAddOpen(a4, t55, u59)));
                    }
                    t76 = t63;
                } else {
                    u65 = (-u33);
                    if (!(0.0f > u33)) {
                        u65 = u33;
                    }
                    t69 = a5;
                    if (47.5400009f > u65) {
                        t69 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    } else {
                        u72 = u45;
                    }
                    t76 = (t69 + (cpuSglAimAddOpen(a4, t69, u72)));
                }
                t79 = t76;
            }
            t127 = t79;
        } else {
            u81 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x30));
            u82 = (-u81);
            if (!(0.0f > u81)) {
                u82 = u81;
            }
            if (u82 > 0.200000003f) {
                u84 = (-u33);
                if (!(0.0f > u33)) {
                    u84 = u33;
                }
                if (47.5400009f > u84) {
                    t105 = (a5 + (cpuSglAimAddSides(a4, a5)));
                } else {
                    u87 = (-u33);
                    if (!(0.0f > u33)) {
                        u87 = u33;
                    }
                    t91 = a5;
                    if (47.5400009f > u87) {
                        t91 = (a5 + (cpuSglAimAddSides(a4, a5)));
                    } else {
                        u101 = u81;
                    }
                    t105 = (t91 + (cpuSglAimAddOpen(a4, t91, u101)));
                }
                t124 = t105;
            } else {
                u107 = (-u33);
                if (!(0.0f > u33)) {
                    u107 = u33;
                }
                t111 = a5;
                if (47.5400009f > u107) {
                    t111 = (a5 + (cpuSglAimAddSides(a4, a5)));
                } else {
                    u120 = u81;
                }
                t124 = (t111 + (cpuSglAimAddOpen(a4, t111, u120)));
            }
            t127 = t124;
        }
        t130 = t127;
    }
    return t130;
}

int FUN_8c0609a4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((((((t0 + 0x1) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
        if ((*(int *)(((((((*(int *)((a4 + 0xB5C))) + 0x3) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x1);
            }
            if (t2 == 0) {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            } else {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            }
            t2 = t1;
        } else {
            t1 = (int)((int)(nlRand()) % (int)0x5);
            if (t1 != 0) {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            } else {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        if ((*(int *)(((((((*(int *)((a4 + 0xB5C))) + 0x3) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            t2 = (int)((int)(nlRand()) % (int)0x5);
            if (t2 != 0) {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            } else {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            }
            t3 = t2;
        } else {
            t2 = nlRand();
            t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x1);
            }
            if (t4 != 0) {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            } else {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            }
            t3 = t2;
        }
        t1 = t3;
    }
    *(unsigned char *)(((0x13E + ((((t0 + 0x2) & 0x3) * 0x160) + 0x8C2FC69C)) + 0x0)) = (t1 & 0x3);
    *(unsigned char *)(((0x13E + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (t1 & 0x3);
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t1 = serveGetReceiver();
        t2 = t1;
        if (t1 != (*(int *)(((0xB5C + a4) + 0x0)))) {
        } else {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
            t2 = 0x12E;
        }
        t1 = t2;
    } else {
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((-u0) + u1);
        if (!(0.0f > (u0 - u1))) {
            u2 = (u0 - u1);
        }
        u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
        u3 = ((-u0) + u1);
        if (!(0.0f > (u0 - u1))) {
            u3 = (u0 - u1);
        }
        t2 = 0xB9C;
        if (u3 > u2) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
            t2 = 0x12E;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_8c04adec(int a4, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    t3 = 0xA24;
    if ((*(int *)((a4 + 0xA24))) == 0) {
    } else {
        t4 = 0xA24;
        if ((*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x0))) > 0.0f) {
        } else {
            if (((*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) == 2) && (t0 = *(signed char *)((0x12B + (0x8C2FC69C + (t2 * 0x160)))), t0 == 2)) {
                *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B)) = 0x0;
            }
            if (((*(int *)0x8C291F78) & 4) != 0) {
                u0 = *(float *)0x8C291F7C;
                u1 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u2 = ((*(float *)((a4 + 0xB00))) * u1);
                u1 = (-u0);
                if (!(0.0f > u0)) {
                    u1 = u0;
                }
                u0 = 0.0f;
                if (12.3450012f > u1) {
                } else {
                    u1 = *(float *)0x8C291F7C;
                    u3 = (-u1);
                    if (!(0.0f > u1)) {
                        u3 = u1;
                    }
                    if (28.8050003f > u3) {
                        u1 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                        u3 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 26.7474995f);
                    } else {
                        u3 = (*(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C)));
                    }
                    u0 = u3;
                }
                u1 = u0;
                u0 = (-(u2 * 118.849998f));
            } else {
                u2 = *(float *)(((((0x1 & (t1 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB9C));
                u3 = ((-((float)(*(signed char *)((((t1 * 0x160) + 0x8C2FC69C) + 0x12B))) * 0.300000012f)) + 1.0f);
                u4 = ((*(float *)((a4 + 0xB00))) * u3);
                u1 = (u2 * 0.5f);
                u0 = (-(u4 * 118.849998f));
            }
            u2 = (-u1);
            if (!(0.0f > u1)) {
                u2 = u1;
            }
            u3 = u1;
            if (u2 > 32.920002f) {
                u3 = ((float)((u1 > 0.0f) - (0.0f > u1)) * 32.920002f);
            }
            *(unsigned int *)((a4 + 0xA24)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB1)) = 0x0;
            *(unsigned char *)((((t1 * 0x160) + 0x8C2FC69C) + 0xB0)) = 0x0;
            *(float *)((a4 + 0xA34)) = u3;
            *(float *)((a4 + 0xA3C)) = u0;
            t4 = 0xA3C;
        }
        t3 = t4;
    }
    return t3;
}

int FUN_8c0794e6(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u1 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
    if (((u0 > 0.0f) - (0.0f > u0)) == ((u1 > 0.0f) - (0.0f > u1))) {
        u1 = *(float *)((a4 + 0xAE8));
        if (((u1 > 0.0f) - (0.0f > u1)) != ((u0 > 0.0f) - (0.0f > u0))) {
            t0 = a5;
            u1 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        } else {
            cpuAimPointSet(a5, 0x1, ((float)(-((u0 > 0.0f) - (0.0f > u0))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t0 = (a5 + 0x1);
            u1 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
            t1 = (-((u0 > 0.0f) - (0.0f > u0)));
        }
        cpuAimPointSet(t0, 0x1, ((float)t1 * 54.8499985f), u1);
        t1 = (t0 + 0x1);
    } else {
        u0 = *(float *)((a4 + 0xAE8));
        cpuAimPointSet(a5, 0x1, ((float)((u0 > 0.0f) - (0.0f > u0)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
        t1 = (a5 + 0x1);
    }
    return t1;
}

int FUN_8c060814(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(int *)((a4 + 0xB5C));
    if ((*(int *)((((((t0 + 0x1) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
        if ((*(int *)(((((((*(int *)((a4 + 0xB5C))) + 0x3) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            t1 = nlRand();
            t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x1);
            }
            if (t2 == 0) {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            } else {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            }
            t2 = t1;
        } else {
            t1 = (int)((int)(nlRand()) % (int)0x64);
            if (t1 != 0) {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            } else {
                t1 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        if ((*(int *)(((((((*(int *)((a4 + 0xB5C))) + 0x3) & 0x3) << 2) + 0x8C287AE0) + 0x0))) == 0) {
            t2 = (int)((int)(nlRand()) % (int)0x64);
            if (t2 != 0) {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            } else {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            }
            t3 = t2;
        } else {
            t2 = nlRand();
            t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t4 = (t2 & 0x1);
            }
            if (t4 != 0) {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x1);
            } else {
                t2 = ((*(signed char *)((a4 + 0xB5C))) + 0x3);
            }
            t3 = t2;
        }
        t1 = t3;
    }
    *(unsigned char *)(((0x13E + ((((t0 + 0x2) & 0x3) * 0x160) + 0x8C2FC69C)) + 0x0)) = (t1 & 0x3);
    *(unsigned char *)(((0x13E + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = (t1 & 0x3);
    if (((*(int *)0x8C291F78) & 4) != 0) {
        t1 = serveGetReceiver();
        t2 = t1;
        if (t1 != (*(int *)(((0xB5C + a4) + 0x0)))) {
        } else {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
            t2 = 0x12E;
        }
        t1 = t2;
    } else {
        u0 = *(float *)((a4 + 0xAE8));
        u1 = *(float *)((a4 + 0xB9C));
        u2 = ((-u0) + u1);
        if (!(0.0f > (u0 - u1))) {
            u2 = (u0 - u1);
        }
        u0 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u1 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB9C));
        u3 = ((-u0) + u1);
        if (!(0.0f > (u0 - u1))) {
            u3 = (u0 - u1);
        }
        t2 = 0xB9C;
        if (u3 > u2) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)) = 0x1;
            t2 = 0x12E;
        }
        t1 = t2;
    }
    return t1;
}
