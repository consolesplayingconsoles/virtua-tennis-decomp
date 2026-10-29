/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ADXAMP_SetSfreq(int, int);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_SetBitPerSmpl(int, int);
int ADXRNA_SetNumChan(int, int);
int ADXRNA_SetOutVol(int, int);
int ADXRNA_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXRNA_SetTotalNumSmpl(void);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetFormat(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetNumLoop(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_GetStat(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(int);
int adxt_set_outpan(int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
int entryGetColorId(int, Stk3);
int hudFontNumPut(int, Stk3, float);
int lightUpdate(int, int);
int memset(int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlRand(void);
int playerInit(int, int);
int rankDrawCharaIcon(int, int, Stk3);
int rankDrawString(int, int, Stk3);
int selCharInfoDraw(int, int);
int selSideCheck(void);
int set_event(int, int);
Stk3 vecMake(float, float, float);
int rankDrawTbl2(Stk1 s);
int entryCharaSelDraw(int a4, int a5);
int selModelSpawn(int a4, int a5);
int adxt_stat_decinfo(int a4);


int entryCharaSelDraw(int a4, int a5)
{
    register int t8;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t30;
    register float u32;
    register float u33;
    register int t34;
    register int t35;
    register int t37;
    register int t38;
    register int t41;
    register int t43;
    register int t45;
    register int t47;
    register int t10;
    int t11;
    register int t27;
    int stk[41];

    *(unsigned int *)0x8C34386C = ((*(int *)0x8C34386C) + 0x1);
    lightUpdate(0x0, a5);
    camSetOrbit(0x600, 0x8000, 255.0f);
    *(Stk3 *)(((int)stk + 40)) = vecMake(0.0f, 12.0f, 0.0f);
    camSetEye();
    *(Stk3 *)(((int)stk + 40)) = vecMake(0.0f, 77.0f, 295.0f);
    camSetTarget();
    camMoveBegin(1.0f, 1.0f);
    *(float *)0x8C287A04 = 7.0f;
    camSetupView();
    t8 = (camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28)));
    t12 = 0x8C185298;
    t13 = 0x0;
    t14 = 0x8C185298;
    t15 = 0x0;
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)0x8C1852A0) {
            break;
        }
        t11 = (*(short *)((t14 + 0x0)));
        t8 = (*(short *)0x8C343262);
        t11 = (unsigned short)t11;
        t8 = (unsigned short)t8;
        t30 = t12;
        if ((t8 & t11) != 0) {
            t8 = 0x56C;
            t11 = 0x8C343258;
            t11 = (t11 + 0xC);
            t8 = (t8 + 0x8C343258);
            t8 = (*(int *)((t13 + t8)));
            t8 = (t8 * 0x38);
            t8 = (t8 + t11);
            t8 = (*(int *)((t8 + 0x18)));
            if (t8 == 1) {
                t12 = 0x56C;
                t11 = 0x8C0A94FC;
                t12 = (t12 + 0x8C343258);
                t12 = (t12 + t15);
                t12 = (*(int *)((t12 + 0x0)));
                t8 = (selModelSpawn(t12, 0x0));
                t10 = 0x56C;
                t10 = (t10 + 0x8C343258);
                t10 = (t10 + t15);
                t11 = (*(int *)((t10 + 0x0)));
                t10 = 0x8C343258;
                t10 = (t10 + 0xC);
                t11 = (t11 * 0x38);
                t11 = (t11 + t10);
                *(unsigned int *)((t11 + 0x18)) = (0x0);
            } else {
                t27 = t12;
            }
            t30 = t27;
        }
        t14 = (t14 + 0x2);
        t12 = t30;
        t13 = (t13 + 0x4);
        t15 = (t15 + 0x4);
    }
    *(unsigned int *)(((int)stk + 52)) = (((int)stk + 52) + 0x4);
    u32 = *(float *)0x8C0AE040;
    u33 = *(float *)0x8C0AE044;
    t34 = 0x10;
    t35 = (((int)stk + 52) + 0x4);
    for (;;) {
        if ((unsigned int)t35 >= (unsigned int)((((int)stk + 52) + 0x4) + 0x18)) {
            break;
        }
        *(Stk3 *)((t35)) = vecMake((float)t34, u33, u32);
        t35 = (t35 + 0xC);
        t34 = (t34 + 0x92);
    }
    t37 = 0x150;
    t38 = ((((int)stk + 52) + 0x4) + 0x18);
    for (;;) {
        if ((unsigned int)t38 >= (unsigned int)((((int)stk + 52) + 0x4) + 0x30)) {
            break;
        }
        *(Stk3 *)((t38)) = vecMake((float)t37, u33, u32);
        t38 = (t38 + 0xC);
        t37 = (t37 + 0x92);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
    t41 = entryGetColorId(0x0, *(Stk3 *)(((int)stk + 40)));
    selCharInfoDraw(0x0, t41);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0xC)); }
    t43 = entryGetColorId(0x2, *(Stk3 *)(((int)stk + 28)));
    selCharInfoDraw(0x2, t43);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0x18)); }
    t45 = entryGetColorId(0x1, *(Stk3 *)(((int)stk + 16)));
    selCharInfoDraw(0x1, t45);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((int)stk + 52) + 0x4) + 0x24)); }
    t47 = entryGetColorId(0x3, *(Stk3 *)(((int)stk + 4)));
    return (selCharInfoDraw(0x3, t47));
}


