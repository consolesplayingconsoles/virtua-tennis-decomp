/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ballInit(int);
int buGetDiskInfo(int, int);
int camProject(int, int, Stk3);
int camWorldToView(int, ...);
int circuitNumDraw(int, int, int, float, float, float);
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, Stk3, float, float);
int cpuSglAimScoreAngle(int, int);
int decoGaugeBarPut(int, int, int, Stk3);
int decoGaugeFramePut(int, int, Stk3);
int decoNumDraw(int, int, int, int, Stk3, float);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int fadeDraw(void);
int fadeStart(int);
int mainCheckReset(void);
int miniBallCopySpawn(void);
int miniEffectSpawn(Stk4);
int miniLaunchBall(void);
int motionBoneRaw(int);
int motionRootBoneRaw(int, int);
int motionSetCurrent(int);
int msgWinFramePut(int, int, int, int, int, int, int, int, int, int, int, int);
int msgWinPut(int, int);
int msgWinStep(int, int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlLineSetDiv(float);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSprPut(int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSeqRequest(int);
int padExec(void);
int padLcdMessage(int);
int pdExecPeripheralServer(void);
int pdTmrAlarm(int);
int primSprSetSize(int, float, float);
int resCautionReset(int);
int serveGetServer(void);
int shotAim(int, float);
int sklDrawNodeOne(int);
int sprCellInit(int, int);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int staffLookAtBall(int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int BupFailDialog(int a4);
int decoHeaderDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4);
int ballBoyPoseIdle(int a4);
void playerDrawMarker(int a4);
void dbgVdEdit(void);
int courtUsaDrawExtras(int a4);
float cpuSglAimRateOpp(int a4, int a5);
int circuitDrawStatus(void);
int endingSprAnimStep(int a4, int a5, int a6);
float cpuAimDistRate(int a4, int a5, int a6, int a7, int a8);
int miniLaunchAimed(int a4);



int ballBoyPoseIdle(int a4)
{
    int t58;
    int t95;
    int t102;
    int t109;
    int t103;
    int t104;
    int t106;
    int t108;
    int t78;
    int stk[14];

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D0670)));
    motionSetCurrent((a4 + 0x4));
    motionRootBoneRaw(0x0, 0x2);
    nlGetMatrix(((0x1E4 + a4) + 0x80));
    nlPushMatrix(0x0);
    motionBoneRaw(0x6);
    nlGetMatrix(((0x1E4 + a4) + 0x180));
    motionBoneRaw(0x4);
    nlGetMatrix(((0x1E4 + a4) + 0x100));
    motionBoneRaw(0x0);
    nlGetMatrix((0x1E4 + a4));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0x7);
    nlGetMatrix(((0x1E4 + a4) + 0x1C0));
    motionBoneRaw(0x5);
    nlGetMatrix(((0x1E4 + a4) + 0x140));
    motionBoneRaw(0x1);
    nlGetMatrix(((0x1E4 + a4) + 0x40));
    nlPopMatrix(0x1);
    motionBoneRaw(0x8);
    nlGetMatrix(((0x1E4 + a4) + 0x200));
    nlPushMatrix(0x0);
    motionBoneRaw(0xB);
    nlGetMatrix(((0x1E4 + a4) + 0x2C0));
    motionBoneRaw(0xC);
    nlGetMatrix(((0x1E4 + a4) + 0x300));
    motionBoneRaw(0x9);
    nlGetMatrix(((0x1E4 + a4) + 0x240));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBoneRaw(0xD);
    nlGetMatrix(((0x1E4 + a4) + 0x340));
    motionBoneRaw(0xE);
    nlGetMatrix(((0x1E4 + a4) + 0x380));
    motionBoneRaw(0xA);
    nlGetMatrix(((0x1E4 + a4) + 0x280));
    nlPopMatrix(0x1);
    motionBoneRaw(0x3);
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPushUnitMatrix();
    nlLoadMatrix(((0x1E4 + a4) + 0xC0));
    staffLookAtBall((*(short *)((a4 + 0x5BC))), (0x5CC + a4), (*(int *)((a4 + 0x5C8))));
    nlGetMatrix(((0x1E4 + a4) + 0xC0));
    nlPopMatrix(0x1);
    if ((*(int *)0x8C20D14C) == 3) {
        nlPushUnitMatrix();
        nlLoadMatrix(((0x1E4 + a4) + 0xC0));
        nlRotateAY(0xFFFFC000);
        nlGetMatrix(((0x1E4 + a4) + 0xC0));
        nlPopMatrix(0x1);
    }
    nlPushMatrix(0x0);
    t58 = 0x0;
    for (;;) {
        nlLoadMatrix(((((t58 << 2) << 2) << 2) + (0x1E4 + a4)));
        *(unsigned int *)(((int)stk + 8)) = (t58 << 2);
        if ((*(int *)0x8C38B768) != 0) {
            nlGetMatrix(((*(int *)(((t58 << 2) + (*(int *)(((int)stk + 4)))))) + 0xC0));
        }
        if ((*(int *)0x8C38B768) == 0) {
            nlObjPut((*(int *)(((*(int *)((((*(int *)0x8C1891E8) << 2) + 0x8C1D03F0))) + (*(int *)(((int)stk + 8)))))));
        }
        if ((t58 == 3) && (t78 = *(int *)0x8C1891E8, t78 == 2)) {
            if ((*(int *)0x8C38B768) != 0) {
                nlScale(1.0f, 1.09809995f, 1.12950003f);
            }
            nlRotateAY(0x4000);
            if ((*(int *)0x8C38B768) != 0) {
                nlLineSetDiv(1.12950003f);
            }
            t95 = 0xC880320;
            if ((*(int *)((a4 + 0x0))) == 0) {
                t95 = 0xC880000;
            }
            nlObjPut(t95);
        }
        t58 = (t58 + 0x1);
        if ((int)t58 >= (int)0xF) {
            break;
        }
    }
    t102 = *(int *)0x8C38B768;
    t109 = (nlPopMatrix(0x1));
    if (t102 != 0) {
        t103 = *(int *)(((int)stk + 4));
        t104 = t103;
        for (;;) {
            nlPushMatrix(0x0);
            t106 = *(int *)((t104 + 0x0));
            t104 = (t104 + 0x4);
            sklDrawNodeOne(t106);
            t108 = nlPopMatrix(0x1);
            if ((unsigned int)t104 >= (unsigned int)(t103 + 0x3C)) {
                break;
            }
        }
        t109 = t108;
    }
    return t109;
}


void dbgVdEdit(void)
{
    
}

int courtUsaDrawExtras(int a4)
{
    int t101;
    int t5;
    int t33;

    if ((*(int *)0x8C287ADC) != 2) {
        nlObjPut(0xC8DE1C8);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t5 = (*(int *)0x8C18B1E4);
        } else {
            t5 = (*(int *)0x8C18B1E0);
        }
        t101 = (nlObjPut(t5));
    } else {
        nlObjPut(0xC8BAB28);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18B1C4));
            nlObjPut((*(int *)0x8C18B1CC));
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 190.0f);
            nlObjPut((*(int *)0x8C18B1D4));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -63.5f);
            t33 = 0x8C18B1DC;
        } else {
            nlObjPut((*(int *)0x8C18B1C0));
            nlObjPut((*(int *)0x8C18B1C8));
            nlPushMatrix(0x0);
            nlTranslate(0.0f, 0.0f, 190.0f);
            nlObjPut((*(int *)0x8C18B1D0));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlTranslate(100.0f, 0.0f, -63.5f);
            t33 = 0x8C18B1D8;
        }
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 63.5f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, -118.0f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(100.0f, 0.0f, 118.0f);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-40.5999985f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(0.0f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(40.5999985f, 0.0f, -197.199997f);
        nlRotateAY(0x4000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-40.5999985f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(0.0f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(40.5999985f, 0.0f, 197.199997f);
        nlRotateAY(0xFFFFC000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, -118.0f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t33 + 0x0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate(-100.0f, 0.0f, 118.0f);
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((t33 + 0x0))));
        t101 = (nlPopMatrix(0x1));
    }
    return t101;
}


int circuitDrawStatus(void)
{
    int t8;
    int t41;
    float u65;
    float u67;
    float u68;
    float u73;
    float u78;
    float u26;

    sprSheetSet(0x8C108A5C);
    *(float *)0x8C2876B8 = ((*(float *)0x8C2876B8) * 188.0f);
    sprSheetPut(0x0, 414.0f, 272.0f, 52.0999985f, 0.699999988f);
    sprSheetSet(0x8C108A80);
    sprSheetPut(0x0, 607.0f, 272.0f, 52.0999985f, 0.699999988f);
    sprSheetSet((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C159B78))));
    t8 = *(signed char *)0x8C2FBC7C;
    if (((unsigned char)t8 == 4) || ((unsigned char)t8 == 6)) {
        *(float *)0x8C2878DC = 4.0f;
    }
    sprSheetPut(0x7, (float)(0x19E + (*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7C) << 2) + 0x8C108B24)))), 275.0f, 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 0.454901963f, 0.0f);
    sprSheetSet(0x8C108AC8);
    sprSheetPut(0x2000, 420.0f, 297.0f, 52.0f, 1.0f);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    if ((unsigned char)(*(signed char *)0x8C2FBC7D) != 0xFF) {
        sprSheetSet((*(int *)(((((unsigned char)(*(signed char *)0x8C2FBC7D) - 8) << 2) + 0x8C159BC0))));
        u26 = 297.0f;
    } else {
        sprSheetSet(0x8C108A28);
        u26 = (*(float *)0x8C031474);
    }
    sprSheetPut(0x2007, 608.0f, u26, 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    circuitNumDraw((*(int *)0x8C2FBC58), 0x60, 0x8C159BE0, (*(float *)0x8C031480), (*(float *)0x8C03147C), 52.0f);
    nlObjPutSetFadeColor((*(float *)0x8C031488), 1.0f, 0.0f);
    sprSheetSet(0x8C108AA4);
    sprSheetPut(0x2000, (*(float *)0x8C031494), (*(float *)0x8C031490), 52.0f, 1.0f);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    t41 = *(int *)0x8C2FBE68;
    *(unsigned int *)0x8C2FBE68 = (t41 - 1);
    if ((int)(t41 - 1) >= 0) {
        if ((int)((int)((int)(*(int *)0x8C20D198) % (int)0x1E)) < (int)0x14) {
            circuitNumDraw((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x10, 0x8C159C08, (*(float *)0x8C0314B0), (*(float *)0x8C0314AC), 52.0f);
        }
    } else {
        circuitNumDraw((*(int *)((((unsigned char)(*(signed char *)0x8C2FBC7F) << 2) + 0x8C10817C))), 0x10, 0x8C159C08, (*(float *)0x8C0314B0), (*(float *)0x8C0314AC), 52.0f);
    }
    sprSheetSet(0x8C108AEC);
    u65 = *(float *)0x8C0314B8;
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * u65);
    u67 = *(float *)0x8C0314C0;
    u68 = *(float *)0x8C0314C4;
    sprSheetPut(0x0, (*(float *)0x8C0314CC), (*(float *)0x8C0314C8), u67, u68);
    sprSheetSet(0x8C108B10);
    u73 = *(float *)0x8C0314D4;
    sprSheetPut(0x0, u73, (*(float *)0x8C0314C8), u67, u68);
    sprSheetSet(0x8C108AEC);
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * u65);
    u78 = *(float *)0x8C0314D8;
    sprSheetPut(0x0, (*(float *)0x8C0314CC), u78, u67, u68);
    sprSheetSet(0x8C108B10);
    return (sprSheetPut(0x0, u73, u78, u67, u68));
}





