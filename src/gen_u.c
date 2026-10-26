/* Straight-line functions with calls and guards (batch gen_u): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[12]; } Stk12;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxb_DecodeInfoAuSub(int, int, int, int, int, int, int);
int camGetAngles(int, int);
int camGetPos(int, ...);
int charaTexFree(int);
int charaTexLoad(int, int);
int fileLoadCloseSlot(int);
int hudBarDraw(Stk3, float, float);
int kmyRequestCallback(int, int, int, int);
int memset(int, int, int);
float motionGetFrame(int);
int motionSetFrame(int, float);
int motionSwitch(int, int, int, int, float);
int msgWinFramePut(int, Stk12);
extern int msgWinPut();
int muneTexLoad(int, int, int);
int nlInvertMatrix(int);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlPrintf(int, ...);
float nlTanf(float);
int nlUnitMatrix(void);
int nlsndSeqRequest(int);
int pdTmrAlarm(int);
int resCautionTexFree(int);
int set_event(int, int);
int setjmp(int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int vecMake(int, int, int, int, float, float, float);
int winPartsPut(int, int, int, int, Stk3, float, float);
int winTriPartsPut(int, int, int, int, Stk3, float, float);
int msgWinStep(int a4, int a5, int a6, int a7);
int sndPlayerDiveLand(int a4);
int shopDrawCount(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int kmiFLWCTRLEORCallBackFunc(void);
int commonSprInit(int a4, int a5);
int ADX_DecodeInfoAu(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int muneSlotLoad(int a4, int a5);
int nlSpriteF2ARGB(float f4, float f5, float f6, float f7);
int kmiFLWCTRLCheckVBufOverflow(int a4, int a5, int a6, int a7);
void evBallMarkSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int emotDebugPrint(int a4);
int sseleBarDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int lineJudgeIdleAll(void);
int kmyGetFrameBufferHandle(int a4);
int camSetupView(void);
int sprInitRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int scoreBoardSync(void);
int hudCallMsgDrawD830(float f4, float f5);
int hudCallMsgDrawD8d0(float f4, float f5);
int hudFontSprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudFont2SprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int buFbrCreateServer(int a4);
int circuitDrawPicture(void);
int ndbPack(int a4, int a5, int a6);
int bgSprInitRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudCallMsgDrawDa10(float f4, float f5);
int hudCallMsgDrawD9c0(float f4, float f5);
int hudCallMsgDrawD970(float f4, float f5);



int shopDrawCount(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4)
{
    float u1;
    int t2;
    int t3;
    int t5;
    int t8;
    int stk[38];

    stk[26] = a8;
    stk[27] = a9;
    stk[28] = a10;
    stk[29] = a11;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 16) + 0x4)) = *(struct mv10 *)(0x8C12723C); }
    *(unsigned int *)(((int)stk + 16)) = ((int)((int)a4 / (int)0xA));
    u1 = *(float *)0x8C0E8704;
    t2 = (int)((int)a4 % (int)0xA);
    t3 = 0x0;
    for (;;) {
        t5 = t2;
        if (t3 == 0) {
            t5 = (*(int *)(((int)stk + 16)));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x58)); }
        t8 = sprListPut((*(int *)(((((int)stk + 16) + 0x4) + (t5 << 2)))), 0x1, 0x0, *(Stk3 *)((((int)stk + 16) + 0x58)), 1.0f, 1.0f, f4);
        t3 = (t3 + 0x1);
        *(float *)(((((int)stk + 16) + 0x58) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x58) + 0x0))) + u1);
        if ((int)t3 >= (int)0x2) {
            break;
        }
    }
    return t8;
}


int commonSprInit(int a4, int a5)
{
    int t15;

    *(unsigned int *)((a4 + 0x0)) = (*(int *)(((a5 << 2) + 0x8C1B1DA4)));
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = (*(float *)0x8C0C7024);
    *(float *)((a4 + 0x18)) = ((*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x8))) / (*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x0))));
    *(float *)((a4 + 0x1C)) = ((*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0xC))) / (*(float *)(((((a5 * 0x1C) + 0x8C1B1DF0) + 0x4) + 0x0))));
    *(float *)((a4 + 0x20)) = ((*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x10))) / (*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x0))));
    *(float *)((a4 + 0x24)) = ((*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x14))) / (*(float *)(((((a5 * 0x1C) + 0x8C1B1DF0) + 0x4) + 0x0))));
    *(float *)((a4 + 0x10)) = (((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))) * 1.0f);
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    if ((*(float *)((((a5 * 0x1C) + 0x8C1B1DF0) + 0x18))) == 1.0f) {
        *(unsigned int *)((a4 + 0x34)) = 0xA;
        t15 = 0x18;
    } else {
        *(unsigned int *)((a4 + 0x34)) = 0x5;
        t15 = 0x5;
    }
    return t15;
}


int muneSlotLoad(int a4, int a5)
{
    int t19;
    int t9;
    int t14;
    int t12;
    int t29;
    int t1;

    if (((*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x4))) != a5) && (t1 = *(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8)), t1 != -1)) {
        fileLoadCloseSlot(a4);
    }
    t19 = 0x8C1AFA64;
    if ((*(int *)(((a5 << 2) + 0x8C1AFA64))) == 0) {
        *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8)) = a5;
        t9 = muneTexLoad(a5, (*(int *)(((a4 << 2) + 0x8C124AE0))), a4);
        t14 = t9;
        if (t9 == 1) {
            *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x0)) = (*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8)));
            t12 = charaTexLoad((*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8))), a4);
            *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0xC)) = ((*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0xC))) + 0x1);
            *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x8)) = 0xFFFFFFFF;
            t14 = t12;
        }
        t19 = t14;
    }
    t29 = t19;
    if (a5 != (*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x4)))) {
        t29 = (charaTexFree((*(int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x4)))));
    }
    *(unsigned int *)(((((a4 << 2) << 2) + 0x8C37DAAC) + 0x4)) = a5;
    return t29;
}


int kmiFLWCTRLCheckVBufOverflow(int a4, int a5, int a6, int a7)
{
    int t10;
    int t11;
    int t3;
    int t4;
    int t5;
    int t17;
    int t18;
    int t19;

    if ((*(int *)0x8C45F794) != 0) {
        t17 = (*(int *)(((a7 << 2) + (0x8C45F6F4 + (((a6 << 2) + a6) << 2)))));
        t18 = (*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2)))));
        t19 = a7;
    } else {
        t10 = 0x0;
        t11 = (0xE4 + a5);
        if ((unsigned int)0x0 < (unsigned int)a6) {
            t3 = 0x0;
            t4 = 0x0;
            t5 = (0xE4 + a5);
            for (;;) {
                t3 = (t3 + 0x1);
                t4 = (t4 + (*(int *)((t5 + (a7 << 2)))));
                t5 = (t5 + 0x14);
                if ((unsigned int)t3 >= (unsigned int)a6) {
                    break;
                }
            }
            t10 = t4;
            t11 = t5;
        }
        t17 = ((*(int *)(((0x8C45F6F4 + (a7 << 2)) + 0x0))) - t10);
        t18 = ((*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2))))) + t10);
        t19 = t11;
    }
    if ((unsigned int)t18 > (unsigned int)(*(int *)(((a7 << 2) + (0x8C45F818 + (((a6 << 2) + a6) << 2)))))) {
        *(unsigned int *)(((a7 << 2) + (0x8C45F818 + (((a6 << 2) + a6) << 2)))) = t18;
    }
    if ((unsigned int)t17 < (unsigned int)(*(int *)(((a7 << 2) + ((0xE4 + a5) + (((a6 << 2) + a6) << 2)))))) {
        *(unsigned int *)0x8C45F920 = 0x2;
        kmyRequestCallback(0x8, a5, t18, t19);
    }
    return 0x0;
}

void evBallMarkSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t2;
    int t8;
    int t11;
    int t17;
    int t26;
    float u28;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R14;
    float F2;
    float F3;
    int T_;
    stk[4] = a8;
    stk[5] = a9;
    stk[6] = a10;
    stk[7] = a11;
    R4 = a4;
    R5 = a5;
    L_8C0DA242:;
    *(unsigned int *)(((int)stk + 4)) = R4;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C0DA2D4;
    goto L_8C0DA252;
    L_8C0DA252:;
    t2 = *(int *)0x8C20D14C;
    R0 = (t2);
    R4 = (t2);
    if ((t2 == 1)) goto L_8C0DA2D4;
    goto L_8C0DA25C;
    L_8C0DA25C:;
    R0 = (R4);
    if ((R4 != 6)) goto L_8C0DA26A;
    goto L_8C0DA262;
    L_8C0DA262:;
    t8 = *(int *)0x8C20D150;
    R0 = (t8);
    if ((t8 != 1)) goto L_8C0DA2D4;
    goto L_8C0DA26A;
    L_8C0DA26A:;
    t11 = *(int *)0x8C1891E8;
    R4 = (t11);
    if (((int)t11 > (int)0x9)) goto L_8C0DA2D4;
    goto L_8C0DA274;
    L_8C0DA274:;
    R0 = (0x8C1D5664);
    if (((*(int *)(((R4 << 2) + 0x8C1D5664))) == 0)) goto L_8C0DA2D4;
    goto L_8C0DA27E;
    L_8C0DA27E:;
    t17 = *(int *)0x8C287B3C;
    R4 = (t17);
    if (((0x40 & t17) != 0)) goto L_8C0DA2D4;
    goto L_8C0DA288;
    L_8C0DA288:;
    if (((R4 & 0x8) != 0)) goto L_8C0DA2D4;
    goto L_8C0DA28E;
    L_8C0DA28E:;
    if (((int)(*(int *)0x8C287B2C) > 0)) goto L_8C0DA2D4;
    goto L_8C0DA296;
    L_8C0DA296:;
    R14 = (0x8C1D568C);
    if (((int)(*(int *)0x8C1D568C) >= (int)0x64)) goto L_8C0DA2D4;
    goto L_8C0DA2A0;
    L_8C0DA2A0:;
    t26 = set_event(0x2C, 0x8C0DA1BC);
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    u28 = *(float *)0x8C23D204;
    *(unsigned int *)((t26 + 0x28)) = (int)(600.0f / u28);
    *(unsigned int *)((t26 + 0x24)) = (int)(600.0f / u28);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t26 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(unsigned int *)((t26 + 0x20)) = (*(int *)(((int)stk + 4)));
    goto L_8C0DA2D4;
    L_8C0DA2D4:;
}

int emotDebugPrint(int a4)
{
    int t0;
    int t21;
    int t2;
    int t13;
    float u15;
    int t12;
    int stk[15];

    *(unsigned int *)(((int)stk + 32)) = a4;
    t0 = *(int *)0x8C301C10;
    t21 = t0;
    if (t0 == 77) {
        nlLocate(0xF, 0xA);
        t2 = *(int *)(((int)stk + 32));
        *(unsigned int *)(((int)stk + 28)) = (t2 * 0x270);
        nlPrintf(0x8C123218, ((*(int *)((((t2 * 0x270) + 0x8C34B4F4) + 0x26C)))));
        nlPrintf(0x8C123228, ((*(int *)((((t2 * 0x270) + 0x8C34B4F4) + 0x264)))));
        nlPrintf(0x8C123234, ((*(int *)((((t2 * 0x270) + 0x8C34B4F4) + 0x264)))));
        t13 = 0x0;
        for (;;) {
            if ((int)t13 >= (int)(*(int *)((((t2 * 0x270) + 0x8C34B4F4) + 0x264)))) {
                break;
            }
            t12 = t13;
            t12 = (t12 << 1);
            t12 = (t12 + t13);
            t12 = (t12 << 2);
            t12 = (t12 + ((t2 * 0x270) + 0x8C34B4F4));
            u15 = *(float *)((t12 + 0x8));
            *(float *)(((int)stk + 24)) = u15;
            nlPrintf(0x8C123240, ((*(int *)((t12 + 0x0)))), ((*(int *)((t12 + 0x4)))), u15);
            t13 = (t13 + 0x1);
        }
        t21 = 0x264;
    }
    return t21;
}


int lineJudgeIdleAll(void)
{
    int t0;
    int t9;
    float u8;

    t0 = 0x0;
    for (;;) {
        if ((t0 != 1) && (t0 != 4)) {
            motionSwitch((((t0 * 0x654) + 0x8C37F77C) + 0x4), (*(int *)0x8C124E18), 0x0, (*(int *)0x8C2873D4), 0.0f);
            u8 = 129.0f;
        } else {
            motionSwitch((((t0 * 0x654) + 0x8C37F77C) + 0x4), (*(int *)0x8C124E24), 0x0, (*(int *)0x8C2873D4), 0.0f);
            u8 = 79.0f;
        }
        t9 = motionSetFrame((((t0 * 0x654) + 0x8C37F77C) + 0x4), u8);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t9;
}


int camSetupView(void)
{
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(((int)((((*(float *)0x8C287A04) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF), (*(float *)0x8C23D20C), 0.300000012f, 3000.0f);
    *(float *)0x8C287A10 = (320.0f / (nlTanf((((*(float *)0x8C287A04) * 1.04457951f) / 90.0f))));
    nlMatrixMode(0x1);
    nlLoadMatrix(0x8C2878F8);
    { struct mv16 { int w[16]; }; *(struct mv16 *)(0x8C287978) = *(struct mv16 *)(0x8C2878F8); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)(0x8C287938) = *(struct mv16 *)(0x8C2878F8); }
    nlInvertMatrix(0x8C287978);
    camGetPos(0x8C2879F8);
    return camGetAngles(0x8C287A44, 0x8C287A46);
}

int sprInitRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = (*(float *)0x8C08E994);
    *(float *)((a4 + 0x18)) = ((float)(*(int *)(((((a9 << 2) << 2) + a6) + 0x0))) / (float)a7);
    *(float *)((a4 + 0x1C)) = ((float)(*(int *)(((((a9 << 2) << 2) + a6) + 0x4))) / (float)a8);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((float)(*(int *)(((((a9 << 2) << 2) + a6) + 0x8))) / (float)a7));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((float)(*(int *)(((((a9 << 2) << 2) + a6) + 0xC))) / (float)a8));
    *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18))));
    *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C))));
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = a10;
    return 0x2C;
}


int hudCallMsgDrawD830(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 40)), (f4 * (*(float *)0x8C09A3A4)), f5);
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C09A3AC);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A3BC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33D830, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A3C4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33D880, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5));
}

int hudCallMsgDrawD8d0(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 40)), (f4 * (*(float *)0x8C09A3A4)), f5);
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C09A3AC);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A3CC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33D8D0, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A3D4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33D880, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5));
}

int hudFontSprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u4;
    int stk[13];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    *(unsigned int *)((a4 + 0x0)) = 0x1B;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)((((int)stk + 4) + 0x8)));
    u4 = *(float *)0x8C09A890;
    *(float *)((a4 + 0x18)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FBA0) + 0x0))) / u4);
    *(float *)((a4 + 0x1C)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FBA0) + 0x4))) / u4);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FBA0) + 0x8))) / u4));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FBA0) + 0xC))) / u4));
    *(float *)((a4 + 0x10)) = (((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))) * 1.0f);
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x5;
    return 0x2C;
}

int hudFont2SprSet(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u4;
    int stk[13];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)((((int)stk + 4) + 0x8)));
    u4 = *(float *)0x8C09ACE4;
    *(float *)((a4 + 0x18)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FD40) + 0x0))) / u4);
    *(float *)((a4 + 0x1C)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FD40) + 0x4))) / u4);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FD40) + 0x8))) / u4));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10FD40) + 0xC))) / u4));
    *(float *)((a4 + 0x10)) = (((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))) * 1.0f);
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0x5;
    return 0x2C;
}

int buFbrCreateServer(int a4)
{
    int t0;
    int t1;
    int t2;
    int t10;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = 0x0;
    t2 = 0x8C4747D0;
    for (;;) {
        if ((*(int *)((t2 + 0x0))) != 0) {
            t1 = (t1 + 0x1);
            t2 = (t2 + 0xD7C);
            if ((int)t1 >= (int)0x2) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 2) {
        t10 = 0x0;
    } else {
        *(unsigned int *)((t2 + 0x208)) = a4;
        *(unsigned int *)((t2 + 0x20C)) = 0x0;
        *(unsigned int *)((t2 + 0x204)) = 0x0;
        memset((0x210 + t2), 0x0, 0xB68);
        memset((0x104 + t2), 0x0, 0x100);
        setjmp((0x104 + t2));
        *(unsigned int *)((t2 + 0x0)) = 0x1;
        *(unsigned int *)0x8C4762D0 = ((*(int *)0x8C4762D0) + 0x1);
        t10 = t2;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t10;
}

int circuitDrawPicture(void)
{
    float u5;
    float u6;
    float u7;
    float u15;
    int t18;

    sprSheetSet(0x8C1098D8);
    *(unsigned int *)0x8C287658 = (*(int *)((0x8C124974 + ((*(int *)0x8C2FBE78) << 2))));
    *(unsigned int *)0x8C2876A8 = (*(int *)((0x8C124974 + ((*(int *)0x8C2FBE78) << 2))));
    u5 = *(float *)0x8C0342A0;
    u6 = *(float *)0x8C0342A4;
    u7 = *(float *)0x8C0342A8;
    sprSheetPut(0x0, u5, u7, u6, (*(float *)0x8C2FBE8C));
    sprSheetSet(0x8C1098FC);
    *(unsigned int *)0x8C287658 = (*(int *)((0x8C124974 + ((*(int *)0x8C2FBE78) << 2))));
    *(unsigned int *)0x8C287680 = 0xC000;
    u15 = *(float *)0x8C2FBE8C;
    t18 = (sprSheetPut(0x0, u5, u7, u6, (*(float *)0x8C2FBE8C)));
    if (1.0f > u15) {
        *(float *)0x8C2FBE8C = ((*(float *)0x8C2FBE8C) + (*(float *)0x8C0342BC));
        t18 = 0x8C0342BC;
    }
    return t18;
}


int bgSprInitRect(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u4;
    int stk[13];

    stk[1] = a8;
    stk[2] = a9;
    stk[3] = a10;
    stk[4] = a11;
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = (*(float *)((((int)stk + 4) + 0x0)));
    *(float *)((a4 + 0x8)) = (*(float *)((((int)stk + 4) + 0x4)));
    *(float *)((a4 + 0xC)) = (*(float *)((((int)stk + 4) + 0x8)));
    u4 = *(float *)0x8C098370;
    *(float *)((a4 + 0x18)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10F808) + 0x0))) / u4);
    *(float *)((a4 + 0x1C)) = ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10F808) + 0x4))) / u4);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10F808) + 0x8))) / u4));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((float)(*(int *)(((((a5 << 2) << 2) + 0x8C10F808) + 0xC))) / u4));
    *(float *)((a4 + 0x10)) = (((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18)))) * 1.0f);
    *(float *)((a4 + 0x14)) = (((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C)))) * 1.0f);
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0xB;
    return 0x2C;
}

int hudCallMsgDrawDa10(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 40)), (f4 * 0.5f), f5);
    *(float *)((((int)stk + 40) + 0x8)) = 0.00499999989f;
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + 42.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33DA10, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + 72.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33D880, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5));
}

int hudCallMsgDrawD9c0(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 40)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A654));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33D9C0, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A660));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33D920, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5));
}

int hudCallMsgDrawD970(float f4, float f5)
{
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    hudBarDraw(*(Stk3 *)(((int)stk + 40)), (f4 * (*(float *)0x8C09A64C)), f5);
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C09A650);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A668));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((int)stk + 40)); }
    sprPutCropV(0x8C33D970, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5);
    *(float *)((((int)stk + 40) + 0x0)) = ((*(float *)((((int)stk + 40) + 0x0))) + (*(float *)0x8C09A670));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (sprPutCropV(0x8C33D920, 0x0, *(Stk3 *)(((int)stk + 40)), f4, 1.0f, f5));
}

int msgWinStep(int a4, int a5, int a6, int a7)
{
    int t6;
    int t7;
    int t18;
    int stk[20];

    if ((int)(*(int *)0x8C423BD4) >= (int)0x1) {
        vecMake(a4, a5, a6, a7, (*(float *)0x8C0D182C), (*(float *)0x8C0D1828), (*(float *)0x8C0D1824));
        t6 = ((int (*)(int, int))(msgWinPut))(0x1, 0x1);
    } else {
        t7 = *(int *)0x8C1D1760;
        if (t7 == 1) {
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x0)) = (*(signed char *)0x8C125AFC);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x1)) = (*(signed char *)0x8C125AFD);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x2)) = (*(signed char *)0x8C125AFE);
            *(unsigned char *)(((((int)stk + 20) + 0x2C) + 0x3)) = (*(signed char *)0x8C125AFF);
            resCautionTexFree((*(int *)0x8C1D175C));
            *(unsigned int *)0x8C1D175C = 0xFFFFFFFF;
            pdTmrAlarm(0x1);
            *(unsigned int *)0x8C1D1760 = ((*(int *)0x8C1D1760) - 1);
        } else {
            if ((int)t7 <= 0) {
                *(unsigned int *)0x8C1D175C = 0xFFFFFFFF;
            } else {
                { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 20)) = *(struct mv12 *)(0x8C125B00); }
                msgWinFramePut(((int)stk + 20), *(Stk12 *)(0x8C125B00));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0x8C38BA54); }
                t18 = ((int (*)(int, int, Stk3))(msgWinPut))((*(int *)0x8C1D175C), 0x0, *(Stk3 *)(0x8C38BA54));
                *(unsigned int *)0x8C1D1760 = ((*(int *)0x8C1D1760) - 1);
            }
        }
    }
    return 0x0;
}

int sseleBarDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int stk[27];

    stk[15] = a8;
    stk[16] = a9;
    stk[17] = a10;
    stk[18] = a11;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1AC314;
    *(float *)0x8C1AC2CC = f4;
    *(float *)0x8C1AC290 = f4;
    *(float *)0x8C1AC278 = f4;
    *(float *)0x8C1AC368 = f4;
    *(float *)0x8C1AC350 = f4;
    *(float *)0x8C1AC2FC = (f4 + 90.0f);
    *(float *)0x8C1AC2E4 = (f4 + 90.0f);
    *(float *)0x8C1AC2A8 = (f4 + 90.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x1C)); }
    winTriPartsPut(0x8C1AC26C, 0x2, (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), *(Stk3 *)((((int)stk + 32) + 0x1C)), f6, f5);
    *(volatile int *)(((int)stk + 36));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x2C)); }
    return (winPartsPut(0x8C1AC314, 0x8C1AC26C, 0x1, (*(int *)(((int)stk + 32))), *(Stk3 *)((((int)stk + 16) + 0x2C)), f6, f5));
}

