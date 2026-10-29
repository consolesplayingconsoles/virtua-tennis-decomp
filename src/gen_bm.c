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


int _fmtout_intcnv(int a4, int a5, int a6, int a7)
{
    int t33;
    int t38;
    int t46;
    int t48;
    int t58;
    int t63;
    int t67;
    int t96;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0FECD8:;
    *(unsigned char *)((R5 + 0x0)) = 0x0;
    R0 = (R6);
    R10 = (R5);
    R9 = (0x0);
    if ((R6 == 88)) goto L_8C0FED16;
    goto L_8C0FECF6;
    L_8C0FECF6:;
    if ((R0 == 100)) goto L_8C0FED0E;
    goto L_8C0FECFA;
    L_8C0FECFA:;
    if ((R0 == 105)) goto L_8C0FED0E;
    goto L_8C0FECFE;
    L_8C0FECFE:;
    if ((R0 == 111)) goto L_8C0FED12;
    goto L_8C0FED02;
    L_8C0FED02:;
    if ((R0 == 117)) goto L_8C0FED0E;
    goto L_8C0FED06;
    L_8C0FED06:;
    if ((R0 == 120)) goto L_8C0FED16;
    goto L_8C0FED0A;
    L_8C0FED0A:;
    goto L_8C0FED18;
    L_8C0FED18:;
    if ((R6 == 100)) goto L_8C0FED24;
    goto L_8C0FED1E;
    L_8C0FED1E:;
    if ((R6 != 105)) goto L_8C0FED2C;
    goto L_8C0FED24;
    L_8C0FED24:;
    if (((int)R4 >= 0)) goto L_8C0FED2C;
    goto L_8C0FED28;
    L_8C0FED28:;
    R12 = ((-R4));
    goto L_8C0FED2E;
    L_8C0FED2E:;
    R11 = (R9);
    R13 = (R9);
    R14 = ((((int)stk + 4) + 0x4));
    if ((R12 != 0)) goto L_8C0FED4A;
    goto L_8C0FED3A;
    L_8C0FED3A:;
    if (((*(int *)((R7 + 0x8))) == 0)) goto L_8C0FED4A;
    goto L_8C0FED40;
    L_8C0FED40:;
    *(unsigned char *)((R14 + 0x0)) = 0x30;
    R13 = (0x1);
    goto L_8C0FEDA4;
    L_8C0FEDA4:;
    if ((((*(signed char *)((R7 + 0x0))) & 4) == 0)) goto L_8C0FEDDA;
    goto L_8C0FEDAA;
    L_8C0FEDAA:;
    R0 = (R6);
    if ((R6 == 88)) goto L_8C0FEDCA;
    goto L_8C0FEDB0;
    L_8C0FEDB0:;
    if ((R0 == 111)) goto L_8C0FEDBC;
    goto L_8C0FEDB4;
    L_8C0FEDB4:;
    if ((R0 == 120)) goto L_8C0FEDCA;
    goto L_8C0FEDB8;
    L_8C0FEDB8:;
    goto L_8C0FEDDA;
    L_8C0FEDDA:;
    *(unsigned int *)(((int)stk + 4)) = R13;
    R11 = ((R11 + R13));
    if ((R6 == 100)) goto L_8C0FEDEA;
    goto L_8C0FEDE4;
    L_8C0FEDE4:;
    if ((R6 != 105)) goto L_8C0FEE1C;
    goto L_8C0FEDEA;
    L_8C0FEDEA:;
    if (((*(int *)((R7 + 0x8))) != 0)) goto L_8C0FEDF4;
    goto L_8C0FEDF0;
    L_8C0FEDF0:;
    if ((R4 == 0)) goto L_8C0FEE1C;
    goto L_8C0FEDF4;
    L_8C0FEDF4:;
    if (((int)R4 < 0)) goto L_8C0FEE14;
    goto L_8C0FEDF8;
    L_8C0FEDF8:;
    t33 = *(signed char *)((R7 + 0x0));
    R0 = (t33);
    if (((t33 & 8) == 0)) goto L_8C0FEE06;
    goto L_8C0FEDFE;
    L_8C0FEDFE:;
    *(unsigned char *)((R5 + 0x0)) = 0x2B;
    R11 = ((R11 + 0x1));
    goto L_8C0FEE1A;
    L_8C0FEE1A:;
    R5 = ((R5 + 0x1));
    goto L_8C0FEE1C;
    L_8C0FEE1C:;
    t38 = *(signed char *)((R10 + 0x0));
    R13 = (t38);
    R4 = ((R10 + 0x1));
    if ((t38 == 43)) goto L_8C0FEE34;
    goto L_8C0FEE28;
    L_8C0FEE28:;
    if ((R13 == 45)) goto L_8C0FEE34;
    goto L_8C0FEE2E;
    L_8C0FEE2E:;
    if ((R13 != 32)) goto L_8C0FEE38;
    goto L_8C0FEE34;
    L_8C0FEE34:;
    *(unsigned int *)((R7 + 0x14)) = R4;
    goto L_8C0FEE5E;
    L_8C0FEE5E:;
    if (((int)(*(int *)((R7 + 0x8))) <= (int)R11)) goto L_8C0FEE6E;
    goto L_8C0FEE64;
    L_8C0FEE64:;
    t46 = *(int *)((R7 + 0x8));
    *(unsigned int *)((R7 + 0x20)) = (t46 - R11);
    R4 = (t46);
    goto L_8C0FEE72;
    L_8C0FEE72:;
    t48 = *(signed char *)((R10 + 0x0));
    R0 = (t48);
    R6 = (t48);
    if ((t48 == 43)) goto L_8C0FEE86;
    goto L_8C0FEE7A;
    L_8C0FEE7A:;
    R0 = (R6);
    if ((R6 == 45)) goto L_8C0FEE86;
    goto L_8C0FEE80;
    L_8C0FEE80:;
    R0 = (R6);
    if ((R6 != 32)) goto L_8C0FEEA0;
    goto L_8C0FEE86;
    L_8C0FEE86:;
    if (((int)(*(int *)((R7 + 0x4))) <= (int)R4)) goto L_8C0FEEAE;
    goto L_8C0FEE8C;
    L_8C0FEE8C:;
    t58 = *(signed char *)((R7 + 0x1));
    R0 = (t58);
    if ((t58 != 48)) goto L_8C0FEEA0;
    goto L_8C0FEE92;
    L_8C0FEE92:;
    *(unsigned int *)((R7 + 0x20)) = ((*(int *)((R7 + 0x20))) + ((*(int *)((R7 + 0x4))) - R4));
    *(unsigned int *)((R7 + 0x28)) = R9;
    goto L_8C0FEEB0;
    L_8C0FEEB0:;
    t63 = *(int *)(((int)stk + 4));
    R4 = ((t63 - 1));
    if (((int)(t63 - 1) < 0)) goto L_8C0FEEC6;
    goto L_8C0FEEB8;
    L_8C0FEEB8:;
    *(unsigned char *)((R5 + 0x0)) = (*(signed char *)((R14 + R4)));
    t67 = (int)(R4 - 1) >= 0;
    R0 = (R4);
    R4 = ((R4 - 1));
    R5 = ((R5 + 0x1));
    if (t67) goto L_8C0FEEB8;
    goto L_8C0FEEC6;
    L_8C0FEEC6:;
    *(unsigned char *)((R5 + 0x0)) = R9;
    return R0;
    L_8C0FEEA0:;
    if (((int)(*(int *)((R7 + 0x4))) <= (int)R4)) goto L_8C0FEEAE;
    goto L_8C0FEEA6;
    L_8C0FEEA6:;
    *(unsigned int *)((R7 + 0x28)) = ((*(int *)((R7 + 0x4))) - R4);
    goto L_8C0FEEB0;
    L_8C0FEEAE:;
    *(unsigned int *)((R7 + 0x28)) = R9;
    goto L_8C0FEEB0;
    L_8C0FEE6E:;
    *(unsigned int *)((R7 + 0x20)) = R9;
    R4 = (R11);
    goto L_8C0FEE72;
    L_8C0FEE38:;
    if ((((*(signed char *)((R7 + 0x0))) & 4) == 0)) goto L_8C0FEE5C;
    goto L_8C0FEE3E;
    L_8C0FEE3E:;
    R0 = (R6);
    if ((R6 == 88)) goto L_8C0FEE50;
    goto L_8C0FEE44;
    L_8C0FEE44:;
    if ((R0 == 111)) goto L_8C0FEE58;
    goto L_8C0FEE48;
    L_8C0FEE48:;
    if ((R0 == 120)) goto L_8C0FEE50;
    goto L_8C0FEE4C;
    L_8C0FEE4C:;
    goto L_8C0FEE5E;
    L_8C0FEE50:;
    *(unsigned int *)((R7 + 0x14)) = (R10 + 0x2);
    goto L_8C0FEE5E;
    L_8C0FEE58:;
    *(unsigned int *)((R7 + 0x14)) = R4;
    goto L_8C0FEE5E;
    L_8C0FEE5C:;
    *(unsigned int *)((R7 + 0x14)) = R10;
    goto L_8C0FEE5E;
    L_8C0FEE06:;
    if (((R0 & 16) == 0)) goto L_8C0FEE1C;
    goto L_8C0FEE0A;
    L_8C0FEE0A:;
    *(unsigned char *)((R5 + 0x0)) = 0x20;
    R11 = ((R11 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_8C0FEE1C;
    L_8C0FEE14:;
    *(unsigned char *)((R5 + 0x0)) = 0x2D;
    R11 = ((R11 + 0x1));
    goto L_8C0FEE1A;
    L_8C0FEDCA:;
    if ((R4 == 0)) goto L_8C0FEDDA;
    goto L_8C0FEDCE;
    L_8C0FEDCE:;
    *(unsigned char *)((R5 + 0x0)) = 0x30;
    *(unsigned char *)(((R5 + 0x1) + 0x0)) = R6;
    R11 = (0x2);
    R5 = (((R5 + 0x1) + 0x1));
    goto L_8C0FEDDA;
    L_8C0FEDBC:;
    if ((R4 == 0)) goto L_8C0FEDDA;
    goto L_8C0FEDC0;
    L_8C0FEDC0:;
    *(unsigned char *)((R14 + R13)) = 0x30;
    R13 = ((R13 + 0x1));
    goto L_8C0FEDDA;
    L_8C0FED4A:;
    if (((unsigned int)R12 <= (unsigned int)0x0)) goto L_8C0FEDA4;
    goto L_8C0FED50;
    L_8C0FED50:;
    *(unsigned int *)(((int)stk + 4)) = (R13 + R14);
    *(unsigned char *)(((R13 + R14) + 0x0)) = ((int)((unsigned int)R12 % (unsigned int)R8));
    if (((int)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))) > (int)0x9)) goto L_8C0FED78;
    goto L_8C0FED6C;
    L_8C0FED6C:;
    *(unsigned char *)((R14 + R13)) = ((*(signed char *)((R14 + R13))) + 0x30);
    goto L_8C0FED92;
    L_8C0FED92:;
    t96 = (int)((unsigned int)R12 / (unsigned int)R8);
    R12 = (t96);
    R13 = ((R13 + 0x1));
    if (((unsigned int)t96 > (unsigned int)0x0)) goto L_8C0FED50;
    goto L_8C0FEDA4;
    L_8C0FED78:;
    *(unsigned int *)(((int)stk + 4)) = (R13 + R14);
    R1 = ((R13 + R14));
    if ((R6 != 120)) goto L_8C0FED8C;
    goto L_8C0FED84;
    L_8C0FED84:;
    *(unsigned char *)((R1 + 0x0)) = ((*(signed char *)((R1 + 0x0))) + 0x57);
    goto L_8C0FED92;
    L_8C0FED8C:;
    *(unsigned char *)((R1 + 0x0)) = ((*(signed char *)((R1 + 0x0))) + 0x37);
    goto L_8C0FED92;
    L_8C0FED2C:;
    R12 = (R4);
    goto L_8C0FED2E;
    L_8C0FED16:;
    R8 = (0x10);
    goto L_8C0FED18;
    L_8C0FED0E:;
    R8 = (0xA);
    goto L_8C0FED18;
    L_8C0FED12:;
    R8 = (0x8);
    goto L_8C0FED18;
}

int cpuDblAimAddCorners(int a4, int a5)
{
    int t0;
    float u1;
    int t4;
    int t2;
    float u6;
    int t9;
    int t7;
    float u12;
    float u13;
    int t16;
    int t14;
    float u19;
    float u20;
    int t23;
    int t21;
    float u26;
    int t29;
    int t27;
    float u31;
    int t34;
    int t32;
    float u36;
    float u37;
    int t40;
    int t38;
    float u43;
    float u44;
    int t47;
    int t45;
    float u49;
    float u50;
    int t53;
    int t51;
    float u56;
    float u57;
    int t60;
    int t58;
    float u68;
    int t69;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    t4 = 0x1;
    if (u1 > 0.0f) {
    } else {
        t2 = 0x0;
        if (0.0f > u1) {
            t2 = 0xFFFFFFFF;
        }
        t4 = t2;
    }
    u6 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
    t9 = 0x1;
    if (u6 > 0.0f) {
    } else {
        t7 = 0x0;
        if (0.0f > u6) {
            t7 = 0xFFFFFFFF;
        }
        t9 = t7;
    }
    if (t4 != t9) {
        u12 = *(float *)((a4 + 0xB00));
        u13 = *(float *)((a4 + 0xB9C));
        t16 = 0x1;
        if (u13 > 0.0f) {
        } else {
            t14 = 0x0;
            if (0.0f > u13) {
                t14 = 0xFFFFFFFF;
            }
            t16 = t14;
        }
        cpuAimPointSet(a5, 0x1, ((float)t16 * 54.8499985f), (u12 * 118.849998f));
        u19 = *(float *)((a4 + 0xB00));
        u20 = *(float *)((a4 + 0xB9C));
        t23 = 0x1;
        if (u20 > 0.0f) {
        } else {
            t21 = 0x0;
            if (0.0f > u20) {
                t21 = 0xFFFFFFFF;
            }
            t23 = t21;
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t23 * 54.8499985f), (u19 * 59.4249992f));
    } else {
        u26 = *(float *)((a4 + 0xB9C));
        t29 = 0x1;
        if (u26 > 0.0f) {
        } else {
            t27 = 0x0;
            if (0.0f > u26) {
                t27 = 0xFFFFFFFF;
            }
            t29 = t27;
        }
        u31 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t34 = 0x1;
        if (u31 > 0.0f) {
        } else {
            t32 = 0x0;
            if (0.0f > u31) {
                t32 = 0xFFFFFFFF;
            }
            t34 = t32;
        }
        if (t29 != t34) {
            u36 = *(float *)((a4 + 0xB00));
            u37 = *(float *)((a4 + 0xB9C));
            t40 = 0x1;
            if (u37 > 0.0f) {
            } else {
                t38 = 0x0;
                if (0.0f > u37) {
                    t38 = 0xFFFFFFFF;
                }
                t40 = t38;
            }
            cpuAimPointSet(a5, 0x1, ((float)t40 * 54.8499985f), (u36 * 118.849998f));
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
            u68 = (u43 * 59.4249992f);
            t69 = t47;
        } else {
            u49 = *(float *)((a4 + 0xB00));
            u50 = *(float *)((a4 + 0xB9C));
            t53 = 0x1;
            if (u50 > 0.0f) {
            } else {
                t51 = 0x0;
                if (0.0f > u50) {
                    t51 = 0xFFFFFFFF;
                }
                t53 = t51;
            }
            cpuAimPointSet(a5, 0x1, ((float)(-t53) * 54.8499985f), (u49 * 59.4249992f));
            u56 = *(float *)((a4 + 0xB00));
            u57 = *(float *)((a4 + 0xB9C));
            t60 = 0x1;
            if (u57 > 0.0f) {
            } else {
                t58 = 0x0;
                if (0.0f > u57) {
                    t58 = 0xFFFFFFFF;
                }
                t60 = t58;
            }
            u68 = (u56 * 11.8850002f);
            t69 = (-t60);
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t69 * 54.8499985f), u68);
    }
    return ((a5 + 0x1) + 0x1);
}

int cpuDblAimAddCorners2(int a4, int a5)
{
    int t0;
    float u1;
    int t4;
    int t2;
    float u6;
    int t9;
    int t7;
    float u12;
    int t15;
    int t13;
    float u17;
    int t20;
    int t18;
    float u22;
    float u23;
    int t26;
    int t24;
    float u29;
    float u30;
    int t33;
    int t31;
    float u35;
    float u36;
    int t39;
    int t37;
    float u42;
    float u43;
    float u44;
    int t47;
    int t45;
    float u59;
    float u60;
    int t63;
    int t61;
    float u66;
    float u67;
    int t70;
    int t68;
    float u55;
    int t56;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    t4 = 0x1;
    if (u1 > 0.0f) {
    } else {
        t2 = 0x0;
        if (0.0f > u1) {
            t2 = 0xFFFFFFFF;
        }
        t4 = t2;
    }
    u6 = *(float *)(((0x8C287D84 + (((t0 + 0x3) & 0x3) * 0xD78)) + 0xAE8));
    t9 = 0x1;
    if (u6 > 0.0f) {
    } else {
        t7 = 0x0;
        if (0.0f > u6) {
            t7 = 0xFFFFFFFF;
        }
        t9 = t7;
    }
    if (t4 == t9) {
        u12 = *(float *)((a4 + 0xB9C));
        t15 = 0x1;
        if (u12 > 0.0f) {
        } else {
            t13 = 0x0;
            if (0.0f > u12) {
                t13 = 0xFFFFFFFF;
            }
            t15 = t13;
        }
        u17 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        t20 = 0x1;
        if (u17 > 0.0f) {
        } else {
            t18 = 0x0;
            if (0.0f > u17) {
                t18 = 0xFFFFFFFF;
            }
            t20 = t18;
        }
        if (t15 != t20) {
            u22 = *(float *)((a4 + 0xB00));
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
            cpuAimPointSet(a5, 0x1, ((float)t26 * 54.8499985f), (u22 * 118.849998f));
            u29 = *(float *)((a4 + 0xB00));
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
            u55 = (u29 * 59.4249992f);
            t56 = t33;
        } else {
            u35 = *(float *)((a4 + 0xB00));
            u36 = *(float *)((a4 + 0xB9C));
            t39 = 0x1;
            if (u36 > 0.0f) {
            } else {
                t37 = 0x0;
                if (0.0f > u36) {
                    t37 = 0xFFFFFFFF;
                }
                t39 = t37;
            }
            cpuAimPointSet(a5, 0x1, ((float)(-t39) * 54.8499985f), (u35 * 59.4249992f));
            u42 = *(float *)0x8C07DCDC;
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
            u55 = (u43 * u42);
            t56 = (-t47);
        }
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t56 * 54.8499985f), u55);
    } else {
        u59 = *(float *)((a4 + 0xB00));
        u60 = *(float *)((a4 + 0xB9C));
        t63 = 0x1;
        if (u60 > 0.0f) {
        } else {
            t61 = 0x0;
            if (0.0f > u60) {
                t61 = 0xFFFFFFFF;
            }
            t63 = t61;
        }
        cpuAimPointSet(a5, 0x1, ((float)t63 * 54.8499985f), (u59 * 118.849998f));
        u66 = *(float *)((a4 + 0xB00));
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
        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t70 * 54.8499985f), (u66 * 59.4249992f));
    }
    return ((a5 + 0x1) + 0x1);
}


int playerHumanPressed(int a4)
{
    int t3;
    int t4;
    int t5;
    int t22;
    int t16;
    int t45;
    int t25;
    int t39;
    int t28;
    int t33;
    int t103;
    int t48;
    int t69;
    int t51;
    int t64;
    int t54;
    int t59;
    int t98;
    int t72;
    int t93;
    int t75;
    int t88;
    int t78;
    int t83;
    int t113;
    int t1;
    int t2;
    int t7;
    int t8;
    int t9;

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

int cpuShotAimCheck(int a4)
{
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u14;
    int t10;
    int t8;
    float u18;
    float u19;
    int t20;
    float u22;
    float u25;
    float u33;
    float u35;
    int t39;
    int t37;
    float u42;
    int t43;
    int t44;
    float u45;
    float u46;
    float u47;
    int t48;
    float u50;
    int t53;
    int t51;
    int t57;
    int t55;

    t1 = *(short *)((((*(int *)((a4 + 0xB5C))) * 0x160) + 0x8C2FC7B4));
    if ((int)(t1 - 5) < (int)0x1) {
        return 0x1;
    }
    u2 = *(float *)((a4 + 0xB90));
    u3 = *(float *)0x8C287B40;
    u4 = *(float *)((a4 + 0xA28));
    u5 = *(float *)((a4 + 0xB9C));
    u6 = (-(u5 / u3));
    if (!(0.0f > (u5 / u3))) {
        u6 = (u5 / u3);
    }
    u14 = (u5 / u3);
    if (u6 > 0.949999988f) {
        t10 = 0x1;
        if ((u5 / u3) > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > (u5 / u3)) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        u14 = ((float)t10 * 0.949999988f);
    }
    u18 = *(float *)0x8C23D204;
    u19 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((a4 + 0xC58))) * 0x6C))) + 0x0));
    t20 = *(int *)((a4 + 0xC5C));
    u22 = 0.300000012f;
    u22 = u22 + 3.29999995f * (u19 * u18);
    u25 = u22;
    if (((*(int *)((((((t20 << 1) + t20) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) {
        u25 = (u22 * 1.25f);
    }
    u33 = u25;
    if (((((((*(int *)((a4 + 0xC6C))) + (*(int *)((a4 + 0xD4C)))) & 0x1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + a4) + 0x0))) - u14) * (*(float *)(((0xB00 + a4) + 0x0)))))) ? 1 : 0)) {
        u33 = (u25 * 0.800000012f);
    }
    u35 = (u14 - u4);
    if (!(0.0f > (u4 - u14))) {
        u35 = (u4 - u14);
    }
    if (!(u33 > u35)) {
        t39 = 0x1;
        if ((u4 - u2) > 0.0f) {
        } else {
            t37 = 0x0;
            if (0.0f > (u4 - u2)) {
                t37 = 0xFFFFFFFF;
            }
            t39 = t37;
        }
        u42 = ((*(float *)((a4 + 0xB00))) * (float)t39);
        t43 = (((((0x80 & (int)((-(u42 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) ^ 0x1);
        t44 = (t1 - 5);
        u45 = 3.29999995f;
        u46 = ((-(u42 * 32.0f)) + 96.0f);
        u47 = u2;
        for (;;) {
            t48 = (t44 == 0);
            t44 = (t44 - 1);
            if (t48) {
                break;
            }
            t43 = 0xB00;
            u46 = (float)((-(((((0x40 & (int)((-(u42 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) - 1)) - (((((0x80 & (int)((-(u42 * 32.0f)) + 96.0f)) == 0)) ? 1 : 0) ^ 0x1));
            u45 = (*(float *)((a4 + t43)));
            u46 = (u46 * u45);
            u45 = (u19 * u18);
            u46 = (u46 * 0.949999988f);
            u46 = (u46 - u47);
            u50 = u47;
            u50 = u50 + u45 * u46;
            u47 = u50;
        }
        t53 = 0x1;
        if ((u2 - u47) > 0.0f) {
        } else {
            t51 = 0x0;
            if (0.0f > (u2 - u47)) {
                t51 = 0xFFFFFFFF;
            }
            t53 = t51;
        }
        t57 = 0x1;
        if ((u47 - u4) > 0.0f) {
        } else {
            t55 = 0x0;
            if (0.0f > (u47 - u4)) {
                t55 = 0xFFFFFFFF;
            }
            t57 = t55;
        }
        if (t53 == (-t57)) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

