typedef struct { int w[5]; } Stk5;
/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int _rnd(int, int);
int ballColliInit(int, int, int, int);
int cameraCalcPoint(int, int, int, int, int, Stk3);
int countryNamePutB(int, Stk3, Stk1, float);
int cpuBallPredict(int, int, int, int, float, float, float);
int cpuDblMoodUpdate(float);
int cpuDblPartnerSignal(void);
int cpuDblThinkAll(float);
int cpuMeterInput(int, int, int, float, float);
int cpuPadHistory(int, int, int, int, int, int);
int cursorBoxPut(int, Stk3, float, float, float);
int decoPairPut(int, int, int, int, int, int, int, float);
int hudProfileDraw(int, Stk3);
int hudScoreIconPut(int, Stk3, float);
int iconSlotPutB(int, Stk3, float, float);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmProcessVertexRenderState(int, int, int, int);
int kmRender(int);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int menuDimScreen(int, int, int, int);
int menuListDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int nlArcTan(float);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlSin(int);
int nlTranslate(float, float, float);
int nl_action_PixelClipping(void);
int primRectDirX(int, int, int, int, Stk3, Stk1);
int primRectDirY(int, int, int, int, Stk3, Stk1);
int sndSeDecide(void);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAt(int, int, int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int stageSelNameDraw(int, int, int, Stk3);
int unlockCountW0(void);
int vecAnglesTo(int, int, Stk3, Stk3);
Stk3 vecMake(float, float, float);
int selCharInfoDraw(int a4, int a5, int a6, int a7, int a8);
int menuListExec(int a4, int a5, int a6, int a7);
void cpuDblInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int decoWaveDraw(int a4, Stk2 s);
int sseleGridDraw(void);
int panelLogoSwingDraw2(int a4, Stk3 s);
int _power(int a4, int a5, int a6);
float cameraFovForSize(float f4);
int panelLogoSwingDraw(Stk3 s, float f4);
int rectFrameDraw(int a4, Stk5 p, float f4);
int circuitDrawPrompt(void);
int ballInit(int a4);
int nlSysInitStripContextVtx(int a4, int a5, int a6, int a7);
int nlSysInitStripContextBG(int a4, int a5, int a6, int a7);
int nlstripSetVertexContext(int a4, int a5, int a6, int a7);
int nlWaitVSync(void);
int hudScoreIconPutFull(int a4, Stk3 s);


int nlSysInitStripContextVtx(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x0;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x3;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState(a4, 0x4, 0x1, a7);
    return kmSetVertexRenderState(0x8C454FC0, a4);
}

int nlSysInitStripContextBG(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x1;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState(a4, 0x1, 0x4, a7);
    return kmSetBackGroundRenderState(a4);
}

int nlstripSetVertexContext(int a4, int a5, int a6, int a7)
{
    int t13;
    int t15;
    int t18;
    int t20;

    *(unsigned int *)(((*(int *)0x8C458C10) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x8)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0xC)) = (*(int *)(((a4 + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x20)) = (*(int *)((((a4 + 0x4) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x44)) = (*(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0x8C458C10) + 0x40)) = (*(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0)));
    kmProcessVertexRenderState((*(int *)0x8C458C10), a5, a6, a7);
    t13 = *(int *)0x8C458C10;
    *(unsigned int *)((t13 + 0x90)) = ((*(int *)((t13 + 0x90))) & 0xFFFCFF3F);
    t15 = *(int *)0x8C458C10;
    *(unsigned int *)((t15 + 0x90)) = ((*(int *)((t15 + 0x90))) | (*(int *)0x8C458E04));
    t18 = *(int *)0x8C458C10;
    *(unsigned int *)((t18 + 0x98)) = ((*(int *)((t18 + 0x98))) & 0x31FF0FF);
    t20 = *(int *)0x8C458C10;
    *(unsigned int *)(((t20 + 0x98) + 0x0)) = ((*(int *)(((t20 + 0x98) + 0x0))) | (((((*(int *)0x8C424418) ^ 0xFC) << 16) << 8) | (*(int *)0x8C458E08)));
    return kmSetVertexRenderState(0x8C454FC0, (*(int *)0x8C458C10));
}

int nlWaitVSync(void)
{
    int t3;
    int t4;
    int t9;
    int t10;
    int t17;
    int t19;

    kmEndPass(0x8C454FC0);
    nl_action_PixelClipping();
    kmRender(0x0);
    t3 = *(int *)0x8C1DC8A0;
    if (t3 != 0) {
        t4 = ((int (*)(void))(t3))();
    }
    kmEndScene(0x8C42420C);
    t9 = *(int *)0x8C1DC8A4;
    if (t9 != 0) {
        t10 = ((int (*)(void))(t9))();
    }
    kmBeginScene(0x8C42420C);
    kmBeginPass(0x8C454FC0);
    *(unsigned int *)0x8C42445C = (*(int *)0x8C454FC0);
    t17 = *(int *)0x8C1DC8A8;
    t19 = 0x8C1DC8A8;
    if (t17 != 0) {
        t19 = (((int (*)(void))(t17))());
    }
    return t19;
}

