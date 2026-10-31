/* Straight-line functions with calls and guards (batch gen_yp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXT_ExecServer(void);
int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int FUN_8c0eaf00(int, int, int, float);
int buSetCompleteCallback(int);
int buSetProgressCallback(int);
int camInit(void);
int camSceneInit(void);
int camSetupView(void);
int cpuAimPointSet(int, int, float, float);
int cpuSglAimAddLv12(int, int, int, int, float, float, float, float, float, float, float);
int cpuSglAimAddLv21(int, int);
int crowdCheerStop(void);
int dbgLinePut(int, int, int, int, float, float, float, float, float);
int dbgMenuAddPage(int, int, int, int, int, int, int);
int dbgMenuExec(void);
int dbgMenuGetSelect(void);
int dbgMenuGetValue(int, int);
int dbgMenuInit(void);
int dbgMenuIsPage(int);
int dbgMenuSetValue(int, int, int);
int deformModelRestore(int);
int eepromDriveSelect(int);
int emotKeysInit(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int frameHookNop(void);
int latticeBind(int, int, int);
int lightExec(void);
int lineJudgeInit(void);
int mainCheckDrive(void);
int mainSoftReset(int);
int matchSceneExec(void);
int modelGetVertsInt(int, int);
int motionSetSpeed(int, float);
int nlArcSin(float);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlCloseEvent2(int);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlSprPut(int, int, int, int);
int nlWaitVSync(void);
int nlsndGetPackInfo(int, int);
int nlsndSeqRequest(int);
int padExec(void);
int padVibStopAll(void);
int pdExecPeripheralServer(void);
int screenFramePut(int, int, int, int, float);
int screenSphereVisible(Stk3, float);
int set_event(int, int);
int set_event2(int, int);
int shadowLightMatrix(float);
int shadowPartPutProj(int);
int shadowVolPutDirA(void);
int sndFadeFlagsClear(void);
int sprInitPos(int, int);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int sprTexFree(int);
int stageLoadEnding(void);
int strmCallScore(int, int, int, int, int, int, int, int, int, int, int, int);
int strmExec(void);
extern int thunk_FUN_8c0f41f0();
int umpCallAdvName(int);
int umpCallDeuce(int);
int umpCallGame(int);
int umpCallGameName(int);
int umpCallMatchPoint(void);
int umpCallScore(void);
int umpCallScoreB(int, int);
int umpCallSecondServe(void);
int umpCallSpareA(void);
int umpCallSpareB(void);
Stk3 vecMake(float, float, float);
int FUN_8c017b3c(float f4);
int FUN_8c0d6d54(int a4, int a5);
int FUN_8c08d520(float f4);
void FUN_8c08e3a6(int a4, int a5);
int FUN_8c01355a(int a4);
int FUN_8c088e98(int a4, int a5, int a6, int a7);
int FUN_8c0828f8(int a4);
int FUN_8c088f2e(int a4);
int FUN_8c0c4c84(void);
int FUN_8c0cfc5a(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int FUN_8c0d28e4(void);
void FUN_8c0df874(int a4);
void FUN_8c088660(int a4);
int FUN_8c0c5176(void);
int FUN_8c0c56c2(void);
int FUN_8c0cbbf0(void);
int FUN_8c083558(int a4);
int FUN_8c08a46c(int a4, int a5);
int FUN_8c016f98(int a4, int a5, int a6, float f4);
int FUN_8c0b5cd4(int a4, int a5);
int FUN_8c0bd078(int a4, int a5, int a6, float f4, float f5);
void FUN_8c08382c(int a4, int a5, int a6, int a7);
int FUN_8c08627a(int a4, int a5, int a6, int a7);
int FUN_8c08b24c(int a4);
int FUN_8c0d6ddc(int a4);
int FUN_8c0170ae(int a4);
int FUN_8c08359c(int a4);
int FUN_8c01361a(int a4);
int FUN_8c08b218(int a4);
void FUN_8c08b430(Stk1 s, float f4);
int FUN_8c084b9c(int a4, int a5, int a6, int a7, int a8);
int FUN_8c017a7c(int a4, int a5, int a6, int a7);
int FUN_8c084aec(int a4);
int FUN_8c08d238(int a4, int a5);
int FUN_8c054ab2(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_8c089bc6(int a4, int a5, Stk3 s);
int FUN_8c08ece0(int a4, Stk3 s, float f4);
int FUN_8c0d9504(int a4);
void FUN_8c084214(int a4);
void FUN_8c084102(int a4);
void FUN_8c0843e8(int a4);
void FUN_8c084b3c(int a4);
void FUN_8c0849e8(int a4);
void FUN_8c088ee4(int a4);
int FUN_8c0bd628(void);
int FUN_8c0cdef6(int a4);
int FUN_8c0d989c(int a4);
void FUN_8c083d9c(int a4);
void FUN_8c084934(int a4);
int FUN_8c04afc2(int a4, int a5);
void FUN_8c084612(int a4);
void FUN_8c084764(int a4);
int FUN_8c08dedc(void);
int FUN_8c0b5b00(void);
void FUN_8c083ff2(int a4);
void FUN_8c083f24(int a4);
void FUN_8c084302(int a4);
int FUN_8c0d0c34(void);
int FUN_8c0c4cce(int a4, int a5, int a6, int a7);
int FUN_8c0da7ae(int a4);
int FUN_8c010da8(void);
int FUN_8c08df8c(void);
int FUN_8c0dd78c(void);
int FUN_8c08e040(void);
void FUN_8c0849b6(int a4);
int FUN_8c08e022(void);
int FUN_8c0dfc8a(int a4, int a5, int a6, int a7);
int FUN_8c01218c(void);
int FUN_8c010dc8(void);
int FUN_8c030364(void);
int FUN_8c08d75c(void);
int FUN_8c08deb0(void);
int FUN_8c0a6678(void);
int FUN_8c0c5b74(int a4, int a5);
int FUN_8c0c5b86(int a4, int a5, int a6);
int FUN_8c0d3718(void);
int FUN_8c0dfc08(void);
int FUN_8c0e4258(void);
void FUN_8c0e92aa(void);
int FUN_8c010bb0(void);
int FUN_8c010bc2(void);
int FUN_8c010bb6(void);
int FUN_8c010bbc(void);
void FUN_8c0862b4(int a4);
void FUN_8c08e620(void);
void FUN_8c08e626(void);
void FUN_8c097b1e(void);
int FUN_8c0b0662(void);
int FUN_8c0b186e(void);

int FUN_8c017b3c(float f4)
{
    int stk[12];
    register int t3;

    for (;;) {
        pdExecPeripheralServer();
        nlLocate(0xA, 0x14);
        *(float *)(((int)stk + 8)) = f4;
        *(int *)((int)stk + 4) = 0x8C1016EC;
        nlPrintf(0x8C1016EC, f4);
        t3 = nlWaitVSync();
        if (((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 0x400) != 0) {
            break;
        }
    }
    return t3;
}

int FUN_8c0d6d54(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned int *)0x8C40C230 = 0x3;
    *(unsigned int *)0x8C40C23C = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t1 = (t1 + 0x1);
            *(unsigned int *)(((0x8C40C240 + t0) + 0x0)) = (*(int *)((a4 + t0)));
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a5) {
                break;
            }
        }
    }
    *(unsigned int *)((((a5 << 2) + 0x8C40C240) + 0x0)) = 0xFFFFFFFF;
    return ADXT_StartAfs((*(int *)0x8C38BA98), (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D47B8))), (*(int *)(((((*(int *)0x8C40C23C) << 2) + 0x8C40C240) + 0x0))));
}

int FUN_8c08d520(float f4)
{
    FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF, f4);
    camInit();
    nlInitEvent();
    sndFadeFlagsClear();
    *(float *)0x8C32DD9C = 1.0f;
    *(float *)0x8C32DDA0 = 0.0f;
    *(volatile short *)0x8C343262;
    *(unsigned int *)0x8C32DD98 = 0x0;
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return stageLoadEnding();
}

void FUN_8c08e3a6(int a4, int a5)
{
    
}

int FUN_8c01355a(int a4)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t9;

    t1 = dbgMenuIsPage((*(int *)((a4 + 0x14))));
    if (t1 != 0) {
        t2 = dbgMenuGetSelect();
        if (t2 != -1) {
            t3 = dbgMenuGetSelect();
            t5 = dbgMenuGetValue((*(int *)((a4 + 0x14))), t3);
            if (t5 != 0) {
                t6 = dbgMenuGetSelect();
                dbgMenuAddPage((*(int *)((0x8C101348 + (((t6 << 1) + t6) << 2)))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
                t9 = dbgMenuGetSelect();
                return dbgMenuSetValue((*(int *)((a4 + 0x14))), t9, 0x0);
            }
            return t5;
        }
        return t2;
    }
    return t1;
}

int FUN_8c088e98(int a4, int a5, int a6, int a7)
{
    register int t8;
    register int t9;

    if ((*(int *)((a4 + 0x14))) == 0) {
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x400);
    }
    t8 = screenFramePut(0x0, 0x0, a6, a7, ((float)((-(*(int *)((a4 + 0x14)))) + 0x3C) / (*(float *)0x8C088F9C)));
    t9 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t9 + 0x1);
    if ((int)t9 > (int)0x3C) {
        return nlCloseEvent(a4);
    }
    return t8;
}

int FUN_8c0828f8(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)0x8C287B44) != 7) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    }
    if (((int)(*(int *)((a4 + 0x14))) > (int)0x14) && (t0 = *(int *)0x8C34A1F8, t0 == 0)) {
        nlCloseEvent(a4);
        *(unsigned int *)0x8C301970 = 0x0;
    }
    t0 = *(int *)((a4 + 0x14));
    t1 = t0;
    if ((int)t0 > (int)0x78) {
        t0 = nlCloseEvent(a4);
        *(unsigned int *)0x8C301970 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_8c088f2e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    u0 = *(float *)0x8C088FB8;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x18) + (t0 << 2)) + 0x0)) = ((*(int *)((a4 + 0x14))) * t0);
        t1 = ((t0 << 2) + (a4 + 0x40));
        t2 = t0;
        t0 = (t0 + 0x1);
        u1 = ((float)(*(int *)((a4 + 0x14))) * (float)t2);
        *(float *)((t1 + 0x0)) = (u1 * u0);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t0 - 1);
    if ((int)t0 < 0) {
        return nlCloseEvent(a4);
    }
    return 0x8C088FB8;
}

int FUN_8c0c4c84(void)
{
    int stk[8];
    register float u0;
    register float u1;

    u0 = *(float *)0x8C0C4D88;
    u1 = *(float *)0x8C0C4D8C;
    *(Stk3 *)(((int)stk + 8)) = vecMake(u1, (*(float *)0x8C0C4D90), u0);
    sprInitPos(0x8C37BB88, 0x10D);
    *(Stk3 *)(((int)stk + 8)) = vecMake(u1, (*(float *)0x8C0C4DA0), u0);
    return (sprInitPos(0x8C37BC28, 0x10E));
}

int FUN_8c0cfc5a(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int stk[13];

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    *(float *)((a4 + 0x4)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)(((((int)stk + 4) + 0x4) + 0x8)));
    *(float *)((a4 + 0x2C)) = f5;
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(float *)((a4 + 0x10)) = (f4 * ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))));
    *(float *)((a4 + 0x14)) = (f4 * ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))));
    return (nlSprPut(a4, a5, (((int)stk + 4) + 0x4), a7));
}

int FUN_8c0d28e4(void)
{
    register int t1;
    register int t3;
    register int t5;

    nlPrintf(0x8C125C80);
    t1 = 0x0;
    for (;;) {
        t3 = (nlsndGetPackInfo(t1, 0x10A0));
        t5 = nlPrintf(0x8C125C8C, (t1), t3);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    return t5;
}

void FUN_8c0df874(int a4)
{
    for (;;) {
        if (((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 0x8) != 0) {
            break;
        }
        eepromDriveSelect(a4);
        if (a4 != 0) {
            pdExecPeripheralServer();
            padExec();
            nlWaitVSync();
            continue;
        }
        break;
    }
}

void FUN_8c088660(int a4)
{
    register int t0;

    if ((*(int *)0x8C287C60) == 0) {
        t0 = *(int *)((a4 + 0x14));
        *(unsigned int *)((a4 + 0x14)) = (t0 + 0x1);
        if (((int)((int)(t0 + 0x1) % (int)0x3)) == 0) {
            t0 = *(int *)((a4 + 0x18));
            *(unsigned int *)((0x8C18176C + (t0 << 2))) = ((*(int *)((0x8C18176C + (t0 << 2)))) + (*(int *)((a4 + 0x1C))));
            t0 = *(int *)((0x8C18176C + ((*(int *)((a4 + 0x18))) << 2)));
            if ((t0 != 0) && (t0 != 8)) {
                return;
            }
            nlCloseEvent(a4);
    return;
        }
        return;
    }
}

int FUN_8c0c5176(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(int *)0x8C1AED18) != 0) {
        t0 = 0x0;
        t1 = 0x8C12477C;
        for (;;) {
            *(unsigned int *)0x8C1AED1C = ((*(int *)0x8C1AED1C) - 1);
            t3 = *(int *)((t1 + 0x0));
            t1 = (t1 + 0x4);
            t2 = sprTexFree(t3);
            t0 = (t0 + 0x1);
            if ((unsigned int)t0 >= (unsigned int)0x23) {
                break;
            }
        }
        *(unsigned int *)0x8C1AED18 = ((*(int *)0x8C1AED18) - 1);
        t0 = t2;
    }
    return t0;
}

int FUN_8c0c56c2(void)
{
    nlLocate(0x41, 0x1B);
    nlPrintf(0x8C124934, ((*(int *)0x8C1AED00)));
    nlPrintf(0x8C124944, ((*(int *)0x8C1AED08)));
    nlPrintf(0x8C124954, ((*(int *)0x8C1AED18)));
    return (nlPrintf(0x8C124964, ((*(int *)0x8C287C50))));
}

int FUN_8c0cbbf0(void)
{
    register int t1;
    register int t2;

    lineJudgeInit();
    t1 = 0x8C37F77C;
    for (;;) {
        *(unsigned int *)((t1 + 0x5C4)) = 0xFFFFFFFF;
        t2 = motionSetSpeed((t1 + 0x4), 0.0f);
        t1 = (t1 + 0x654);
        if ((unsigned int)t1 >= (unsigned int)0x8C383070) {
            break;
        }
    }
    return t2;
}

int FUN_8c083558(int a4)
{
    register int t0;
    register int t1;

    nlPushMatrix(0x0);
    nlLoadMatrix((a4 + 0x14));
    shadowPartPutProj((*(int *)((a4 + 0x54))));
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x58));
    *(unsigned int *)((a4 + 0x58)) = (t0 - 1);
    t1 = 0x58;
    if ((t0 - 1) == 0) {
        t0 = nlCloseEvent(a4);
        *(unsigned int *)0x8C181618 = ((*(int *)0x8C181618) - 1);
        t1 = t0;
    }
    return t1;
}

int FUN_8c08a46c(int a4, int a5)
{
    int stk[9];
    register float u0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    u0 = *(float *)0x8C08A518;
    t1 = 0x8C08A518;
    t2 = a5;
    t3 = a5;
    t4 = a4;
    for (;;) {
        t2 = (t2 - 0x1);
        if (t2 == 0) {
            break;
        }
        t1 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t4); }
        t1 = (screenSphereVisible(*(Stk3 *)(((int)stk + 4)), u0));
        if (t1 == 0) {
            t3 = (t3 - 1);
        }
        t4 = (t4 + 0xC);
    }
    return ((((int)t3 > 0)) ? 1 : 0);
}

int FUN_8c016f98(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = set_event(0x54, 0x8C0170AE);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = a5;
    *(unsigned int *)((t0 + 0x1C)) = a6;
    *(float *)((t0 + 0x24)) = f4;
    *(unsigned int *)((t0 + 0x20)) = 0x0;
    *(unsigned int *)((t0 + 0x28)) = 0xFFFFFFFF;
    *(unsigned int *)((t0 + 0x2C)) = 0x8;
    *(unsigned int *)((t0 + 0x30)) = 0x0;
    return t0;
}

int FUN_8c0b5cd4(int a4, int a5)
{
    register int t8;

    fileLoadStart(a4, a5, 0x0);
    if ((*(int *)0x8C34A1F0) == 1) {
        frameHookNop();
        t8 = (nlWaitVSync());
    } else {
        fileLoadPoll();
        frameHookNop();
        nlWaitVSync();
        t8 = (*(int *)0x8C34A1F0);
    }
    return t8;
}

int FUN_8c0bd078(int a4, int a5, int a6, float f4, float f5)
{
    register int t4;
    register float u1;

    t4 = 0x264;
    if ((int)a5 <= (int)(*(int *)((a4 + 0x264)))) {
        u1 = *(float *)((((((a5 << 1) + a5) << 2) + a4) + 0x8));
        *(float *)((((((a5 << 1) + a5) << 2) + a4) + 0x8)) = f4;
        if (!(1.0f > (*(float *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x8))))) {
            *(float *)(((a4 + (((a5 << 1) + a5) << 2)) + 0x8)) = u1;
        }
        t4 = 0x8;
    }
    return t4;
}

void FUN_8c08382c(int a4, int a5, int a6, int a7)
{
    register int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = 0x8C287D84;
        for (;;) {
            if (((*(int *)((t1 + 0xB60))) & 0x40000) != 0) {
                if ((*(int *)((t1 + 0xB68))) == 5) {
                    *(unsigned int *)((a4 + 0x88)) = 0x1;
                }
            }
            t1 = (t1 + 0xD78);
            if ((unsigned int)t1 >= (unsigned int)0x8C289874) {
                break;
            }
        }
    }
}

int FUN_8c08627a(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;

    t0 = *(int *)((a4 + 0x70));
    *(unsigned int *)((a4 + 0x70)) = (t0 - 1);
    if (t0 == 0) {
        return nlCloseEvent2(a4);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x64)); }
    return (sprPutAt((a4 + 0x14), a5, a6, a7, *(Stk3 *)(((int)stk + 4))));
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

int FUN_8c0d6ddc(int a4)
{
    int stk[11];

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x4)) = *(struct mv8 *)(0x8C125EB0); }
    ADXT_SetOutVol((*(int *)0x8C38BA98), 0x0);
    return (ADXT_StartAfs((*(int *)0x8C38BA98), 0x6, (*(int *)(((((*(int *)(((int)stk + 4))) << 2) + (((int)stk + 4) + 0x4)) + 0x0)))));
}

int FUN_8c0170ae(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        return nlCloseEvent(a4);
    }
    t0 = *(int *)((a4 + 0x30));
    if (t0 != 0) {
        *(volatile int *)0x8C20D198;
        t1 = ((int)((int)(t0 << 1) / (int)0x3));
    }
    return t1;
}

int FUN_8c08359c(int a4)
{
    register int t0;

    t0 = set_event(0x5C, 0x8C083558);
    nlGetMatrix((t0 + 0x14));
    *(unsigned int *)((t0 + 0x54)) = a4;
    *(unsigned int *)((t0 + 0x58)) = 0x2;
    *(unsigned int *)0x8C181618 = ((*(int *)0x8C181618) + 0x1);
    return 0x58;
}

int FUN_8c01361a(int a4)
{
    register int t1;
    register int t3;

    t1 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x0);
    t3 = dbgMenuGetValue((*(int *)((a4 + 0x14))), 0x1);
    if ((t1 == 0) && (t3 == 0)) {
        return t3;
    }
    return mainSoftReset(0x1);
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

void FUN_8c08b430(Stk1 s, float f4)
{
    int stk[28];

    stk[19] = s.w[0];
    *(float *)(((int)stk + 4)) = f4;
    nlPushUnitMatrix();
    shadowLightMatrix((*(float *)(((int)stk + 4))));
    nlGetMatrix((((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((*(int *)(((((int)stk + 4) + 0x48) + 0x0)))) = *(struct mv16 *)((((int)stk + 4) + 0x4)); }
}

int FUN_8c084b9c(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;

    t0 = set_event2(0x28, 0x8C084B3C);
    *(unsigned int *)((t0 + 0x24)) = a4;
    *(unsigned int *)((t0 + 0x14)) = a5;
    *(unsigned int *)((t0 + 0x18)) = a6;
    *(unsigned int *)((t0 + 0x1C)) = a7;
    *(unsigned int *)((t0 + 0x20)) = a8;
    return t0;
}

int FUN_8c017a7c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)((a4 + 0x2C));
    *(unsigned int *)((a4 + 0x2C)) = (t0 - 1);
    if ((int)(t0 - 1) < 0) {
        return nlCloseEvent(a4);
    }
    return dbgLinePut((*(int *)((a4 + 0x28))), a5, a6, a7, (*(float *)((a4 + 0x14))), (*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))), (*(float *)((a4 + 0x20))), (*(float *)((a4 + 0x24))));
}

int FUN_8c084aec(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x14));
    if ((int)(t0 & 0x4) < (int)0x2) {
        *(float *)(((*(int *)((a4 + 0x18))) + 0x0)) = 1.0f;
        t1 = (t0 & 0x4);
    } else {
        *(float *)(((*(int *)((a4 + 0x18))) + 0x0)) = (*(float *)0x8C084B90);
        t1 = 0x8C084B90;
    }
    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t0 - 1);
    if (t0 == 0) {
        *(float *)(((*(int *)((a4 + 0x18))) + 0x0)) = 1.0f;
        return nlCloseEvent2(a4);
    }
    return t1;
}

int FUN_8c08d238(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = nlCalcPoint((a4 + t0), (a5 + t0));
        t0 = (t0 + 0xC);
        if ((unsigned int)t0 >= (unsigned int)0x60) {
            break;
        }
    }
    return t1;
}

int FUN_8c054ab2(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;

    if (((*(int *)((a4 + 0xC58))) != 2) && (t0 = *(int *)((a4 + 0xC6C)), t0 == 0)) {
        t0 = (cpuSglAimAddLv21(a4, a5));
    } else {
        t0 = (cpuSglAimAddLv12(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10));
    }
    return (a5 + t0);
}

int FUN_8c089bc6(int a4, int a5, Stk3 s)
{
    int stk[18];
    register float u1;
    register float u2;
    register float u3;

    stk[7] = s.w[0];
    stk[8] = s.w[1];
    stk[9] = s.w[2];
    nlLocate(a4, a5);
    u1 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
    *(float *)(((int)stk + 16)) = u1;
    u2 = *(float *)(((((int)stk + 20) + 0x8) + 0x4));
    *(float *)(((int)stk + 12)) = u2;
    u3 = *(float *)(((((int)stk + 20) + 0x8) + 0x0));
    *(float *)(((int)stk + 8)) = u3;
    *(int *)((int)stk + 4) = 0x8C10DB80;
    return (nlPrintf(0x8C10DB80, u3, u2, u1));
}

int FUN_8c08ece0(int a4, Stk3 s, float f4)
{
    int stk[17];
    register int t0;

    stk[6] = s.w[0];
    stk[7] = s.w[1];
    stk[8] = s.w[2];
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C3349D4), *(Stk3 *)(((int)stk + 4)), f4));
}

int FUN_8c0d9504(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = nlsndSeqRequest((*(int *)((a4 + 0x18))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    t2 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t2 - 1);
    if (((int)(t2 - 1) >= 0) && (t3 = *(int *)((a4 + 0x14)), t3 != 0)) {
        return t1;
    }
    return nlCloseEvent(a4);
}

void FUN_8c084214(int a4)
{
    register int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = *(int *)((a4 + 0x1C));
        *(unsigned int *)((a4 + 0x1C)) = (t1 - 1);
        if (t1 == 0) {
            umpCallAdvName((*(int *)((a4 + 0x14))));
            nlCloseEvent2(a4);
    return;
        }
        return;
    }
}

void FUN_8c084102(int a4)
{
    register int t1;

    if ((*(int *)0x8C421F60) == 0) {
        t1 = *(int *)((a4 + 0x1C));
        *(unsigned int *)((a4 + 0x1C)) = (t1 - 1);
        if (t1 == 0) {
            umpCallGameName((*(int *)((a4 + 0x14))));
            nlCloseEvent2(a4);
    return;
        }
        return;
    }
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

void FUN_8c084b3c(int a4)
{
    int stk[3];
    register int t0;

    t0 = *(int *)((a4 + 0x24));
    *(unsigned int *)((a4 + 0x24)) = (t0 - 1);
    if (t0 == 0) {
        strmCallScore((*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c0849e8(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t0 - 1);
    if (t0 == 0) {
        crowdCheerStop();
        nlCloseEvent(a4);
    return;
    }
}

void FUN_8c088ee4(int a4)
{
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    }
    if ((int)(*(int *)((a4 + 0x14))) > (int)(*(int *)((a4 + 0x18)))) {
        nlCloseEvent(a4);
        crowdCheerStop();
    return;
    }
}

int FUN_8c0bd628(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    t1 = 0x8C34B4F4;
    for (;;) {
        t2 = emotKeysInit(t1);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x270);
        if ((unsigned int)t0 >= (unsigned int)0x42) {
            break;
        }
    }
    return t2;
}

int FUN_8c0cdef6(int a4)
{
    int stk[21];
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetMatrix((((int)stk + 4) + 0x4));
    t1 = *(int *)(((int)stk + 4));
    t3 = nlArcSin((-(*(float *)(((int)stk + 44)))));
    *(unsigned int *)((t1 + 0x0)) = t3;
    return t3;
}

int FUN_8c0d989c(int a4)
{
    register int t0;

    t0 = set_event2(0x18, 0x8C0D9812);
    *(unsigned int *)((t0 + 0x14)) = (int)((float)a4 / (*(float *)0x8C23D204));
    return t0;
}

void FUN_8c083d9c(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallMatchPoint();
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c084934(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallSecondServe();
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c04afc2(int a4, int a5)
{
    cpuAimPointSet(((a5 + 0x1) - 1), 0x1, 0.0f, 0.0f);
    return (a5 + 0x1);
}

void FUN_8c084612(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        *(volatile int *)((a4 + 0x18));
        *(volatile int *)((a4 + 0x14));
        umpCallScore();
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c084764(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallScoreB((*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c08dedc(void)
{
    register int t3;

    nlInitEvent();
    sndFadeFlagsClear();
    dbgMenuInit();
    t3 = camSceneInit();
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return t3;
}

int FUN_8c0b5b00(void)
{
    register int t1;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        t1 = fileLoadStart(0x8CA30000, 0x8C11FBC8, 0x0);
        if (t1 == 0) {
            *(unsigned int *)0x8C34A1EC = 0x0;
        }
    }
    return fileLoadPoll();
}

void FUN_8c083ff2(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallGame((*(int *)((a4 + 0x14))));
        nlCloseEvent2(a4);
    return;
    }
}

void FUN_8c083f24(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        umpCallDeuce((*(int *)((a4 + 0x14))));
        nlCloseEvent2(a4);
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

int FUN_8c0d0c34(void)
{
    register int t1;
    register int t4;

    if ((*(float *)0x8C1D1360) > 0.0f) {
        t1 = camSetupView();
        *(float *)0x8C1D1360 = ((*(float *)0x8C1D1360) - (*(float *)0x8C1D1364));
        t4 = t1;
    }
    return t4;
}

int FUN_8c0c4cce(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_8c0f41f0))(0x8C37BB88, a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C37BBD8);
    return (((int (*)(int))(thunk_FUN_8c0f41f0))(0x8C37BC28));
}

int FUN_8c0da7ae(int a4)
{
    register int t0;

    t0 = set_event(0x1C, 0x8C0DA726);
    *(unsigned int *)((t0 + 0x14)) = (a4 + 0x3);
    *(unsigned int *)((t0 + 0x18)) = a4;
    return t0;
}

int FUN_8c010da8(void)
{
    *(unsigned int *)0x8C20D124 = ((*(int *)0x8C20D124) + 0x1);
    strmExec();
    ADXT_ExecServer();
    mainCheckDrive();
    return 0x0;
}

int FUN_8c08df8c(void)
{
    camSetupView();
    lightExec();
    matchSceneExec();
    nlExecuteEvent();
    return dbgMenuExec();
}

int FUN_8c0dd78c(void)
{
    register int t2;

    t2 = ((int (*)(void))((*(int *)((((*(int *)0x8C20D150) << 2) + 0x8C126594)))))();
    nlExecuteEvent();
    return nlExecuteEvent2();
}

int FUN_8c08e040(void)
{
    deformModelRestore(0xC5E57F8);
    deformModelRestore(0xC5E6BA8);
    deformModelRestore(0xC5E7F58);
    return deformModelRestore(0xC5EAE20);
}

void FUN_8c0849b6(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)((a4 + 0x14)) = (t0 - 1);
    if (t0 == 0) {
        *(unsigned int *)0x8C33441C = 0x0;
        nlCloseEvent2(a4);
    return;
    }
}

int FUN_8c08e022(void)
{
    latticeBind(0xC5EAE20, 0x8C1826FC, 0x8C32DE64);
    return modelGetVertsInt(0xC5EAE20, 0x8C3311F4);
}

int FUN_8c0dfc8a(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x8)) = a6;
    *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0xC)) = a7;
    *(unsigned int *)((((a4 * 0x4C) + 0x8C40C6B0) + 0x10)) = a5;
    return 0x0;
}

int FUN_8c01218c(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C10132C));
    return ((int (*)(void))(t1))();
}

int FUN_8c010dc8(void)
{
    if ((*(int *)0x8C12C5A0) == 0) {
        *(unsigned int *)0x8C12C5A0 = 0x3;
    }
    return padVibStopAll();
}

int FUN_8c030364(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C108250));
    return ((int (*)(void))(t1))();
}

int FUN_8c08d75c(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C10DFB4));
    return ((int (*)(void))(t1))();
}

int FUN_8c08deb0(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C10DFCC));
    return ((int (*)(void))(t1))();
}

int FUN_8c0a6678(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C110A3C));
    return ((int (*)(void))(t1))();
}

int FUN_8c0c5b74(int a4, int a5)
{
    return nlObjPut((a4 + a5));
}

int FUN_8c0c5b86(int a4, int a5, int a6)
{
    return nlObjPutLoadTexture((a4 + a6), a5);
}

int FUN_8c0d3718(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C125CD4));
    return ((int (*)(void))(t1))();
}

int FUN_8c0dfc08(void)
{
    buSetCompleteCallback(0x8C0DFC1A);
    return buSetProgressCallback(0x8C0DFC8A);
}

int FUN_8c0e4258(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0x8C20D150) << 2) + 0x8C126ECC));
    return ((int (*)(void))(t1))();
}

void FUN_8c0e92aa(void)
{
    *(unsigned int *)0x8C423BD4 = ((*(int *)0x8C423BD4) + 0x1);
}

int FUN_8c010bb0(void)
{
    return (*(int *)0x8C23D1EC);
}

int FUN_8c010bc2(void)
{
    return (*(int *)0x8C23D1F0);
}

int FUN_8c010bb6(void)
{
    return (*(int *)0x8C23D1E8);
}

int FUN_8c010bbc(void)
{
    return (*(int *)0x8C23D1F4);
}

void FUN_8c0862b4(int a4)
{
    *(unsigned int *)0x8C181764 = a4;
}

void FUN_8c08e620(void)
{
    
}

void FUN_8c08e626(void)
{
    
}

void FUN_8c097b1e(void)
{
    
}

int FUN_8c0b0662(void)
{
    return (*(int *)0x8C343DD4);
}

int FUN_8c0b186e(void)
{
    return (*(int *)0x8C343FE8);
}
