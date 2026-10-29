/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int BupDrawWarning(int, int, int);
int FUN_8c0eaf00(int, int, int, float);
int buGetDiskInfo(int, int);
int buGetFileInfo(int, int, int);
int cpuAimPointSet(int, int, float, float);
int cpuSglAimLv09(int, int);
int cpuSglAimScore(int, int);
int cpuSglPickLv07(int, int);
int cpuShotTargetSet(int, float, float);
int entryClearJoined(void);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entryPortLeave(int, int, Stk4);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeDraw(void);
int fadeStart(int);
int fileLoadClose(void);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int mainCheckReset(void);
int msgWinStep(int, int, int, int, int, int);
int ndbGetTargets(int, int, int);
int nlDispStripTrnsl(int, int);
int nlInitEvent(void);
int nlRand(void);
int nlWaitVSync(void);
int pdExecPeripheralServer(void);
int primSprDrawOfs(int, int, int, int, Stk3);
int primSprDrawScaleOfs(int, int, int, int, Stk3, float, float);
int primVertexSet(int, int, int, int, int);
int resCautionReset(int);
int selGridClear(void);
int selInitB(void);
int sprStartLoad(void);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int thunk_FUN_8c1e0150(int, int);
int uniformTexRestore(int);
int vecMake(int, int, int, int, int, float, float, float);
int stageSelMarkDraw(Stk4 s);
int cpuSglAimPickNet(int a4);
int _fmtout_intcnv(int a4, int a5, int a6, int a7);
int cpuDblAimAddCorners(int a4, int a5);
int cpuDblAimAddCorners2(int a4, int a5);
int menuDimScreen(int a4, int a5, int a6, int a7);
int playerHumanPressed(int a4);
int stageSoftReset(float f4);
int cpuShotAimCheck(int a4);
int BupCardWarning(int a4);

int stageSelMarkDraw(Stk4 s)
{
    int stk[52];

    stk[40] = s.w[0];
    stk[41] = s.w[1];
    stk[42] = s.w[2];
    stk[43] = s.w[3];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawOfs(0x8C341484, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x0)) = ((*(float *)((((int)stk + 100) + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawScaleOfs(0x8C3415C4, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)), 236.0f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x4)) = ((*(float *)((((int)stk + 100) + 0x4))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawScaleOfs(0x8C3416B4, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)), 1.0f, 175.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x0)) = ((*(float *)((((int)stk + 100) + 0x0))) + 246.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawOfs(0x8C341524, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x0)) = ((*(float *)((((int)stk + 100) + 0x0))) + 246.0f);
    *(float *)((((int)stk + 100) + 0x4)) = ((*(float *)((((int)stk + 100) + 0x4))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawScaleOfs(0x8C341664, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)), 1.0f, 175.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x0)) = ((*(float *)((((int)stk + 100) + 0x0))) + 246.0f);
    *(float *)((((int)stk + 100) + 0x4)) = ((*(float *)((((int)stk + 100) + 0x4))) + 185.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawOfs(0x8C341574, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x4)) = ((*(float *)((((int)stk + 100) + 0x4))) + 185.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 100)); }
    primSprDrawOfs(0x8C3414D4, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 100) + 0x3C)); }
    *(float *)((((int)stk + 100) + 0x0)) = ((*(float *)((((int)stk + 100) + 0x0))) + 10.0f);
    *(float *)((((int)stk + 100) + 0x4)) = ((*(float *)((((int)stk + 100) + 0x4))) + 185.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 100)); }
    return (primSprDrawScaleOfs(0x8C341614, 0x100, 0x100, 0x969600, *(Stk3 *)(((int)stk + 100)), 236.0f, 1.0f));
}






int playerHumanPressed(int a4)
{
    register int t3;
    register int t4;
    register int t5;
    register int t22;
    register int t16;
    register int t45;
    register int t25;
    register int t39;
    register int t28;
    register int t33;
    register int t103;
    register int t48;
    register int t69;
    register int t51;
    register int t64;
    register int t54;
    register int t59;
    register int t98;
    register int t72;
    register int t93;
    register int t75;
    register int t88;
    register int t78;
    register int t83;
    register int t113;
    register int t1;
    register int t2;
    register int t7;
    register int t8;
    register int t9;

    if ((int)a4 < 0) {
        t3 = 0x0;
        t4 = 0x0;
        t5 = 0x8C287D84;
        for (;;) {
            if (((*(int *)(((0x8C287AE0 + t3) + 0x0))) == 0) && (t1 = 0xB64, t7 = *(int *)((t5 + t1)), t1 = 0x8C29B898, t8 = *(int *)(((t7 << 2) + t1)), t9 = *(int *)((t8 + 0x10)), t2 = t9, (t2 & 0x607) != 0)) {
                t4 = 0x1;
            }
            t3 = (t3 + 0x4);
            t5 = (t5 + 0xD78);
            if ((unsigned int)t3 >= (unsigned int)0x10) {
                break;
            }
        }
        t113 = t4;
    } else {
        t22 = 0x0;
        if ((*(int *)(((0x8C287AE0 + (a4 << 2)) + 0x0))) == 0) {
            t16 = 0x0;
            if (((*(int *)(((*(int *)((((*(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xB64))) << 2) + 0x8C29B898))) + 0x10))) & 0x607) != 0) {
                t16 = 0x1;
            }
            t22 = t16;
        }
        t45 = t22;
        if ((*(int *)(((a4 << 2) + 0x8C287AE0))) != 0) {
            t25 = ((~(((~(a4 + 0x2)) + 0x1) & 0x3)) + 0x1);
            if ((int)(a4 + 0x2) >= 0) {
                t25 = ((a4 + 0x2) & 0x3);
            }
            t39 = t22;
            if ((*(int *)((0x8C287AE0 + (t25 << 2)))) == 0) {
                t28 = ((~(((~(a4 + 0x2)) + 0x1) & 0x3)) + 0x1);
                if ((int)(a4 + 0x2) >= 0) {
                    t28 = ((a4 + 0x2) & 0x3);
                }
                t33 = t22;
                if (((*(int *)(((*(int *)((((*(int *)((0xB64 + ((t28 * 0xD78) + 0x8C287D84)))) << 2) + 0x8C29B898))) + 0x10))) & 0x607) != 0) {
                    t33 = 0x1;
                }
                t39 = t33;
            }
            t45 = t39;
        }
        t103 = t45;
        if ((*(int *)(((a4 << 2) + 0x8C287AE0))) == 0) {
        } else {
            t48 = ((~(((~(a4 + 0x2)) + 0x1) & 0x3)) + 0x1);
            if ((int)(a4 + 0x2) >= 0) {
                t48 = ((a4 + 0x2) & 0x3);
            }
            t69 = t45;
            if ((*(int *)((0x8C287AE0 + (t48 << 2)))) != 0) {
                t51 = ((~(((~(a4 + 0x1)) + 0x1) & 0x3)) + 0x1);
                if ((int)(a4 + 0x1) >= 0) {
                    t51 = ((a4 + 0x1) & 0x3);
                }
                t64 = t45;
                if ((*(int *)((0x8C287AE0 + (t51 << 2)))) == 0) {
                    t54 = ((~(((~(a4 + 0x1)) + 0x1) & 0x3)) + 0x1);
                    if ((int)(a4 + 0x1) >= 0) {
                        t54 = ((a4 + 0x1) & 0x3);
                    }
                    t59 = t45;
                    if (((*(int *)(((*(int *)(((0x8C29B898 + ((*(int *)((0xB64 + ((t54 * 0xD78) + 0x8C287D84)))) << 2)) + 0x0))) + 0x10))) & 0x607) != 0) {
                        t59 = 0x1;
                    }
                    t64 = t59;
                }
                t69 = t64;
            }
            t98 = t69;
            if ((*(int *)(((a4 << 2) + 0x8C287AE0))) != 0) {
                t72 = ((~(((~(a4 + 0x2)) + 0x1) & 0x3)) + 0x1);
                if ((int)(a4 + 0x2) >= 0) {
                    t72 = ((a4 + 0x2) & 0x3);
                }
                t93 = t69;
                if ((*(int *)((0x8C287AE0 + (t72 << 2)))) != 0) {
                    t75 = ((~(((~(a4 + 0x3)) + 0x1) & 0x3)) + 0x1);
                    if ((int)(a4 + 0x3) >= 0) {
                        t75 = ((a4 + 0x3) & 0x3);
                    }
                    t88 = t69;
                    if ((*(int *)((0x8C287AE0 + (t75 << 2)))) == 0) {
                        t78 = ((~(((~(a4 + 0x3)) + 0x1) & 0x3)) + 0x1);
                        if ((int)(a4 + 0x3) >= 0) {
                            t78 = ((a4 + 0x3) & 0x3);
                        }
                        t83 = t69;
                        if (((*(int *)(((*(int *)(((0x8C29B898 + ((*(int *)((0xB64 + ((t78 * 0xD78) + 0x8C287D84)))) << 2)) + 0x0))) + 0x10))) & 0x607) != 0) {
                            t83 = 0x1;
                        }
                        t88 = t83;
                    }
                    t93 = t88;
                }
                t98 = t93;
            }
            t103 = t98;
        }
        t113 = t103;
    }
    return t113;
}

int stageSoftReset(float f4)
{
    int t5;
    int t17;
    int t18;
    int t22;
    int t27;
    int t33;
    int t42;
    int t52;
    int t34;
    int t61;
    int t43;
    int stk[15];

    { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 4) + 0x10)) = *(struct mvb8 *)(0x8C1111D2); }
    *(unsigned int *)0x8C185410 = 0x0;
    FUN_8c0eaf00(0x0, 0x0, 0x0, f4);
    nlInitEvent();
    fileLoadClose();
    stageFreeAll();
    stageTexSetGarbagedAll();
    t5 = 0x0;
    for (;;) {
        if ((*(int *)((((t5 * 0x38) + 0x8C343264) + 0x30))) != -1) {
            uniformTexRestore(t5);
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x4) {
            break;
        }
    }
    if ((*(int *)0x8C188EA8) == 0) {
        selGridClear();
        entryInit();
        t34 = (entryClearJoined());
    } else {
        { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C1111DC); }
        t17 = (((int)stk + 4) + 0x10);
        t18 = ((int)stk + 4);
        for (;;) {
            if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t17 + 0x0)))) != 0) {
                *(unsigned int *)((t18 + 0x0)) = 0x1;
            }
            t17 = (t17 + 0x2);
            t18 = (t18 + 0x4);
            if ((unsigned int)t17 >= (unsigned int)((((int)stk + 4) + 0x10) + 0x8)) {
                break;
            }
        }
        t22 = 0x0;
        for (;;) {
            entryPortLeave(t22, 0x1, *(Stk4 *)(0x8C1111DC));
            t22 = (t22 + 0x1);
            if ((int)t22 >= (int)0x4) {
                break;
            }
        }
        selGridClear();
        entryInit();
        entryClearJoined();
        t27 = 0x0;
        for (;;) {
            if ((*(int *)((((int)stk + 4) + (t27 << 2)))) != 0) {
                entryPortJoin(t27, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12));
            }
            t27 = (t27 + 0x1);
            if ((int)t27 >= (int)0x4) {
                break;
            }
        }
        t33 = selInitB();
        *(unsigned int *)0x8C188EA8 = 0x0;
        t34 = t33;
    }
    if ((*(int *)0x8C1D1278) != 0) {
        *(unsigned int *)0x8C1D1278 = 0x0;
        t61 = t34;
    } else {
        t42 = *(int *)0x8C20D14C;
        t52 = t42;
        if ((t42 != 6) && (t43 = *(int *)0x8C188EAC, t43 != 0)) {
            *(unsigned int *)0x8C34A1EC = 0x0;
            fileLoadStart(0x8CA80000, 0x8C1111EC, 0x0);
            for (;;) {
                if ((*(int *)0x8C34A1F0) == 1) {
                    break;
                }
                fileLoadPoll();
                frameHookNop();
                msgWinStep(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                fadeDraw();
                nlWaitVSync();
            }
            t52 = (sprStartLoad());
        }
        *(unsigned int *)0x8C188EAC = 0x1;
        t61 = t52;
    }
    return t61;
}





