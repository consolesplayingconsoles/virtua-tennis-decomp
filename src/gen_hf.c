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
    int t8;
    int t12;
    int t13;
    int t14;
    int t15;
    int t30;
    float u32;
    float u33;
    int t34;
    int t35;
    int t37;
    int t38;
    int t41;
    int t43;
    int t45;
    int t47;
    int t10;
    int t11;
    int t27;
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

int selModelSpawn(int a4, int a5)
{
    int t0;
    int t9;
    int t32;
    int t52;
    int t46;
    int t12;
    int t36;

    if (a5 == 1) {
        t0 = *(int *)(((0x8C343264 + (a4 * 0x38)) + 0x4));
        *(unsigned int *)(((t0 << 2) + 0x8C343878)) = 0x2;
        *(float *)(((t0 << 2) + 0x8C3438C8)) = 1.0f;
        *(unsigned int *)(((0x8C343898 + (t0 << 2)) + 0x0)) = (*(int *)(((t0 << 2) + 0x8C3438A8)));
    }
    t9 = set_event(0x64, 0x8C0A8CEC);
    *(unsigned int *)((t9 + 0x4C)) = a5;
    *(unsigned int *)((t9 + 0x28)) = 0x16;
    *(unsigned int *)((t9 + 0x3C)) = 0x0;
    *(unsigned int *)((t9 + 0x2C)) = ((nlRand()) & 0x1);
    *(unsigned int *)((t9 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((t9 + 0x34)) = 0x0;
    *(unsigned int *)((t9 + 0x38)) = 0x0;
    *(unsigned int *)((t9 + 0x54)) = 0x0;
    *(unsigned int *)((t9 + 0x60)) = 0xFFFFFFFF;
    *(unsigned int *)((t9 + 0x50)) = 0xFFFFFFFF;
    if ((*(int *)0x8C287ADC) == 2) {
        if (a4 == 0) {
            *(Stk3 *)((0x1C + t9)) = vecMake(-18.0f, -2.0f, -24.0f);
            t12 = 0x1B00;
        } else {
            *(Stk3 *)((0x1C + t9)) = vecMake(18.0f, -2.0f, -24.0f);
            t12 = 0xE500;
        }
        *(unsigned short *)((t9 + 0x48)) = t12;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t9 + 0x1C)) = *(struct mv3 *)(((((a4 << 1) + a4) << 2) + 0x8C110CFC)); }
        *(unsigned short *)((t9 + 0x48)) = (*(int *)(((a4 << 2) + 0x8C110D2C)));
    }
    *(unsigned int *)((t9 + 0x18)) = a4;
    *(unsigned int *)((t9 + 0x5C)) = ((a4 * 0xD78) + 0x8C287D84);
    *(unsigned int *)((((a4 * 0xD78) + 0x8C287D84) + 0xB5C)) = a4;
    *(unsigned int *)(((*(int *)((t9 + 0x5C))) + 0xC58)) = 0x0;
    if (a5 == 1) {
        *(unsigned int *)(((*(int *)((t9 + 0x5C))) + 0xC58)) = (*(int *)(((0x8C343264 + (a4 * 0x38)) + 0x0)));
    }
    playerInit((*(int *)((t9 + 0x5C))), (*(int *)((t9 + 0x18))));
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    t32 = *(int *)((t9 + 0x5C));
    *(Stk3 *)((0xAF4 + t32)) = vecMake(0.0f, 0.0f, 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + t32)) = *(struct mv3 *)((0xAF4 + t32)); }
    *(float *)(((*(int *)((t9 + 0x5C))) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)((t9 + 0x5C))) + 0xB18)) = 0.0f;
    if (((*(int *)(((0x8C343264 + (a4 * 0x38)) + 0x8))) != 0) && (t36 = *(int *)0x8C287ADC, t36 == 2)) {
        *(unsigned int *)((((a4 * 0x38) + 0x8C343264) + 0x4)) = (selSideCheck());
    }
    t52 = 0x4C;
    if ((*(int *)((t9 + 0x4C))) != 0) {
        *(unsigned int *)((t9 + 0x54)) = 0x1;
        *(unsigned int *)((t9 + 0x28)) = 0x19;
        t46 = *(int *)((t9 + 0x5C));
        t52 = (motionSet(t46, 0x10D2D8, 0x1, 0x12755C, ((*(int *)((((*(int *)((t46 + 0xC58))) * 0x6C) + 0x8C102424)))), ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204)));
    }
    return t52;
}

int adxt_stat_decinfo(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t11;
    int t13;
    int t21;
    int t29;
    int t41;
    int t55;
    int t56;
    int t58;
    int t77;
    int t78;
    int t17;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXSJD_GetStat(t0);
    if (t1 != 2) {
        return t1;
    }
    t2 = ADXSJD_GetNumChan(t0);
    if ((int)t2 > (int)(*(signed char *)((a4 + 0x3)))) {
        ADXERR_CallErrFunc(0x8C20AB38, (t2), ((*(signed char *)((a4 + 0x3)))));
        return ADXT_Stop(a4);
    }
    t8 = ADXSJD_GetSfreq(t0);
    t9 = ADXSJD_GetNumLoop(t0);
    if ((int)t9 > 0) {
        t11 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
        t17 = ((t11 << 1) + t11);
    } else {
        t13 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
        t17 = (((int)((unsigned int)((int)((unsigned int)((t13 << 1) + t13) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t13 << 1) + t13))) ? 1u : 0u))) >> 1);
    }
    *(unsigned int *)(((0x48 + a4) + 0x0)) = t17;
    t21 = ADXSJD_GetBlkSmpl(t0);
    *(unsigned int *)(((0x48 + a4) + 0x0)) = (((int)((int)((*(int *)((a4 + 0x48))) + (t21 << 1)) / (int)(t21 << 1))) * (t21 << 1));
    ADXSJD_SetMaxDecSmpl(t0, (*(int *)((a4 + 0x48))));
    if ((int)t9 > 0) {
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        } else {
            t29 = ADXSJD_GetLpEndOfst(t0);
            *(unsigned int *)((a4 + 0x50)) = (0x800 - ((int)((int)t29 % (int)0x800)));
            *(unsigned int *)(((0x50 + a4) + 0x0)) = ((int)((int)(*(int *)(((0x50 + a4) + 0x0))) % (int)0x800));
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), ((int)((int)((0x800 + t29) - 1) / (int)0x800)));
            ADXSTM_EntryEosFunc((*(int *)((a4 + 0x8))), 0x8C1F1110, a4);
        }
        t41 = ADXSJD_GetLpEndPos(t0);
        ADXSJD_SetTrapNumSmpl(t0, t41);
        ADXSJD_SetTrapDtLen(t0, 0x0);
        ADXSJD_SetTrapCnt(t0, 0x0);
        ADXSJD_EntryTrapFunc(t0, 0x8C1F1044, a4);
    } else {
        if ((*(int *)((a4 + 0x8))) != 0) {
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
        }
    }
    t55 = ADXSJD_GetSfreq(t0);
    t56 = ADXSJD_GetNumChan(t0);
    ADXSJD_GetTotalNumSmpl(t0);
    t58 = ADXSJD_GetOutBps(t0);
    ADXRNA_SetBitPerSmpl((*(int *)((a4 + 0xC))), t58);
    ADXRNA_SetSfreq((*(int *)((a4 + 0xC))), t55);
    ADXRNA_SetNumChan((*(int *)((a4 + 0xC))), t56);
    *(volatile int *)((a4 + 0xC));
    ADXRNA_SetTotalNumSmpl();
    ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), (*(short *)((a4 + 0x40))));
    adxt_set_outpan(a4);
    if ((*(int *)((a4 + 0x74))) != 0) {
        ADXAMP_SetSfreq((*(int *)((a4 + 0x74))), t55);
    }
    t77 = ADXSJD_GetFormat(t0);
    if (t77 == 2) {
        t78 = ADXSJD_GetSpsdInfo(t0);
        ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t78);
    }
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    return 0x2;
}
