/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
extern float _builtin_sqrtf(float);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camGetPos(int, ...);
int camMoveBegin(float, float);
int camSetEye(void);
int camSetOrbit(int, int, float);
int camSetTarget(void);
int camSetupView(void);
int endPlayerPut(int, int);
int entryDrawStripes(void);
int entryGridDrawCursors(int, int, Stk3);
int evFlashStart(float);
int evNoticeStart(int, int, int, float);
int fadeScreenDraw(float, float);
int hudFlagPut(int, Stk3, float);
int hudFontNumPut(int, float);
int lightOverrideAmbient(int, int);
int lightUpdate(int);
int logoADraw(Stk3, Stk1);
int logoBDraw(Stk3, Stk1);
int logoWaveDraw(int, float);
int markerHitSpawn(int, Stk3);
float mathLerp(float, float, float);
float mathLineY(float, float, float, float, float);
int menuTextMsgPut(int, float);
int motionAdvance(int);
int motionBackup(int);
float motionGetFrame(int);
extern int nlArcTan2();
int nlExecuteEvent(int, int);
int nlGetMatrix(int);
int nlLineSetDiv(float);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
float nlRandom(void);
int nlRenderTextureBegin(int, float);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetTrnslMode(int, int);
float nlSin(int);
float nlTan(int);
int nlTranslate(float, float, float);
int panelLogoSwingDraw(Stk3, float);
int panelMenuItemPut(int, float);
int primPanelDraw(Stk1);
int selCursorPos(int, int, int, int, int);
int set_event(int, int);
int shadowLightMatrixAng(int, int);
int sndEndingCheer(int, int, int, int, int, int);
int sprListPut(int, int, int, float, float, float);
int staffShadowPart(int);
int strmBgmPlay(int, int, int);
int strmVoicePlay(int, int);
int strmVoiceQueueAdd(int);
int sunPut(int, int, int, float);
int uiBarStretchPut(int, int, float);
float vecLength(Stk4);
Stk3 vecMake(float, float, float);
int vecSub(Stk5);
int staffShadowMulti(int a4, int a5);
int entryGridDraw(int a4, int a5, float f4);
int endingSceneDraw(int a4, int a5, int a6, int a7, float f4);
int miniResultStart(int a4, int a5);
int strmCallMatchIntro(int a4);

int staffShadowMulti(int a4, int a5)
{
    int t20;
    int t21;
    float u22;
    float u23;
    float u25;
    float u29;
    int t35;
    int t36;
    int t40;
    int t41;
    float t45;
    int t58;
    float u59;
    int t63;
    float t68;
    float t72;
    float t74;
    float t79;
    float t83;
    float t85;
    int t104;
    float t107;
    float t208;
    float t212;
    float t214;
    float t219;
    float t223;
    float t225;
    int t233;
    int t234;
    int stk[57];

    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 44)) = 0x8C125638;
    *(unsigned short *)(((0x80 + ((int)stk + 44)) + 0x0)) = (((int (*)(int, int, float, float))(nlArcTan2))(a4, a5, ((*(float *)((a4 + 0x5A4))) - (*(float *)0x8C125638)), ((*(float *)0x8C125640) - (*(float *)((a4 + 0x5AC))))));
    *(unsigned int *)(((int)stk + 44)) = 0x8C125644;
    *(unsigned short *)(((0x82 + ((int)stk + 44)) + 0x0)) = (-(((int (*)(float, float))(nlArcTan2))(((*(float *)0x8C125644) - (*(float *)((a4 + 0x5A4)))), ((*(float *)0x8C12564C) - (*(float *)((a4 + 0x5AC)))))));
    *(unsigned int *)(((int)stk + 44)) = 0x8C125650;
    *(unsigned short *)(((0x84 + ((int)stk + 44)) + 0x0)) = ((-(((int (*)(float, float))(nlArcTan2))(((*(float *)((a4 + 0x5A4))) - (*(float *)0x8C125650)), ((*(float *)((a4 + 0x5AC))) - (*(float *)0x8C125658))))) + 0x8000);
    *(unsigned int *)(((int)stk + 44)) = 0x8C12565C;
    *(unsigned short *)(((0x86 + ((int)stk + 44)) + 0x0)) = ((((int (*)(float, float))(nlArcTan2))(((*(float *)0x8C12565C) - (*(float *)((a4 + 0x5A4)))), ((*(float *)((a4 + 0x5AC))) - (*(float *)0x8C125664)))) + 0x8000);
    *(unsigned int *)(((int)stk + 44)) = 0x8C125638;
    *(unsigned int *)(((int)stk + 48)) = 0x8C125638;
    t20 = (0x0 + (((int)stk + 44) + 0x78));
    t21 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 52)) = (t21 << 2);
        *(unsigned int *)(((int)stk + 64)) = ((t21 << 2) + (((int)stk + 44) + 0x68));
        u22 = *(float *)((a4 + 0x5A4));
        u23 = *(float *)((((((t21 << 1) + t21) << 2) + 0x8C125638) + 0x0));
        *(float *)(((int)stk + 40)) = (u22 - u23);
        u25 = *(float *)((a4 + 0x5AC));
        u29 = ((u25 - (*(float *)((((((t21 << 1) + t21) << 2) + 0x8C125638) + 0x8)))) * (u25 - (*(float *)(((*(int *)(((int)stk + 48))) + 0x8)))));
        u29 = u29 + (u22 - (*(float *)((((((t21 << 1) + t21) << 2) + 0x8C125638) + 0x0)))) * (u22 - u23);
        *(float *)((((t21 << 2) + (((int)stk + 44) + 0x68)) + 0x0)) = _builtin_sqrtf(u29);
        *(unsigned short *)((t20 + 0x0)) = (((int (*)(int, float, float))(nlArcTan2))(0x8C125638, ((*(float *)(((*(int *)(((int)stk + 44))) + 0x4))) + -17.5f), (*(float *)(((*(int *)(((int)stk + 64))) + 0x0)))));
        t35 = *(int *)(((int)stk + 52));
        *(int *)((int)stk + 40) = (t35 + (((int)stk + 44) + 0x58));
        t36 = *(short *)((t20 + 0x0));
        t20 = (t20 + 0x2);
        t21 = (t21 + 0x1);
        *(float *)(((t35 + (((int)stk + 44) + 0x58)) + 0x0)) = (1.75f / (nlTan((unsigned short)t36)));
        *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0xC);
        *(unsigned int *)(((int)stk + 48)) = ((*(int *)(((int)stk + 48))) + 0xC);
        if ((int)t21 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    t40 = *(int *)(((int)stk + 56));
    for (;;) {
        *(unsigned int *)(((int)stk + 48)) = 0x0;
        t41 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 56)) = (t41 << 2);
        if (1.60000002f > (*(float *)((((t41 << 2) + (((int)stk + 44) + 0x58)) + 0x0)))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((0x5A4 + a4)); }
            camGetPos(((int)stk + 8));
            *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
            vecSub(*(Stk5 *)((int)stk + 4));
            t45 = vecLength(*(Stk4 *)((int)stk + 32));
            if (465.0f > t45) {
                *(unsigned int *)(((int)stk + 48)) = 0x1;
            }
        }
        nlPushUnitMatrix();
        nlLoadMatrix(0x8C287938);
        t58 = *(int *)(((int)stk + 44));
        u59 = *(float *)((a4 + 0x5AC));
        *(float *)(((int)stk + 60)) = ((float)t58 * 0.0500000007f);
        nlTranslate((*(float *)((a4 + 0x5A4))), (((((float)t58 * 0.0500000007f) + (*(float *)((a4 + 0x5A8)))) + ((float)t40 * 0.100000001f)) + 0.420000017f), u59);
        t63 = *(int *)(((int)stk + 44));
        nlRotateAY((-(unsigned short)(*(short *)((((0x80 + ((int)stk + 44)) + (t63 << 1)) + 0x0)))));
        if ((*(int *)(((int)stk + 48))) != 0) {
            *(unsigned int *)(((int)stk + 52)) = ((t63 << 1) + (((int)stk + 44) + 0x78));
            t68 = nlTan((unsigned short)(*(short *)((((t63 << 1) + (((int)stk + 44) + 0x78)) + 0x0))));
            nlScale(0.800000012f, 1.0f, (t68 * 0.75f));
            t72 = nlTan((unsigned short)(*(short *)(((*(int *)(((int)stk + 52))) + 0x0))));
            if ((t72 * 0.75f) > 1.0f) {
                t74 = nlTan((unsigned short)(*(short *)(((((int)stk + 44) + 0x78) + (t63 << 1)))));
                nlLineSetDiv((t74 * 0.75f));
            }
        } else {
            *(unsigned int *)(((int)stk + 52)) = ((t63 << 1) + (((int)stk + 44) + 0x78));
            t79 = nlTan((unsigned short)(*(short *)((((t63 << 1) + (((int)stk + 44) + 0x78)) + 0x0))));
            nlScale(0.5f, 1.0f, (t79 * 0.5f));
            t83 = nlTan((unsigned short)(*(short *)(((*(int *)(((int)stk + 52))) + 0x0))));
            if ((t83 * 0.5f) > 1.0f) {
                t85 = nlTan((unsigned short)(*(short *)(((((int)stk + 44) + 0x78) + (t63 << 1)))));
                nlLineSetDiv((t85 * 0.5f));
            }
        }
        nlObjPut(0xC5B1E20);
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        nlLoadMatrix(0x8C287938);
        nlTranslate((*(float *)((a4 + 0x5A4))), ((((*(float *)(((int)stk + 60))) + (*(float *)((a4 + 0x5A8)))) + ((float)t40 * 0.100000001f)) + 0.430000007f), (*(float *)((a4 + 0x5AC))));
        nlPushMatrix(0x0);
        nlQuickInvertMatrix();
        nlGetMatrix((((int)stk + 44) + 0x18));
        nlPopMatrix(0x1);
        t104 = *(short *)((((0x80 + ((int)stk + 44)) + (t63 << 1)) + 0x0));
        *(int *)((int)stk + 40) = (-t104);
        t107 = mathLineY(0.680000007f, 6400.0f, (1.0f + 1.0f), 12544.0f, (*(float *)((((*(int *)(((int)stk + 56))) + (((int)stk + 40) + 0x5C)) + 0x0))));
        shadowLightMatrixAng((0x4000 + (int)t107), (-t104));
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix((0x1E4 + a4));
        staffShadowPart(0x0);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x40));
        staffShadowPart(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x40));
        staffShadowPart(0x1);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x80));
        staffShadowPart(0x2);
        nlPopMatrix(0x1);
        if ((*(int *)(((int)stk + 48))) != 0) {
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0xC0));
            staffShadowPart(0x3);
            nlPopMatrix(0x1);
        }
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x100));
        staffShadowPart(0x4);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x140));
        staffShadowPart(0x5);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x180));
        staffShadowPart(0x6);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlMultiMatrix((((int)stk + 44) + 0x18));
        nlMultiMatrix(((0x1E4 + a4) + 0x1C0));
        staffShadowPart(0x7);
        nlPopMatrix(0x1);
        if ((*(int *)(((int)stk + 48))) != 0) {
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x200));
            staffShadowPart(0x8);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x240));
            staffShadowPart(0x9);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x280));
            staffShadowPart(0xA);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x2C0));
            staffShadowPart(0xB);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x300));
            staffShadowPart(0xC);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x340));
            staffShadowPart(0xD);
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlMultiMatrix((((int)stk + 44) + 0x18));
            nlMultiMatrix(((0x1E4 + a4) + 0x380));
            staffShadowPart(0xE);
            nlPopMatrix(0x1);
        }
        nlPushUnitMatrix();
        nlLoadMatrix(0x8C287938);
        nlTranslate((*(float *)((a4 + 0x5A4))), ((((*(float *)(((int)stk + 60))) + (*(float *)((a4 + 0x5A8)))) + ((float)t40 * 0.100000001f)) + 0.439999998f), (*(float *)((a4 + 0x5AC))));
        nlRotateAY((-(unsigned short)(*(short *)((((0x80 + ((int)stk + 44)) + (t63 << 1)) + 0x0)))));
        if ((*(int *)(((int)stk + 48))) != 0) {
            *(unsigned int *)(((int)stk + 48)) = ((t63 << 1) + (((int)stk + 44) + 0x78));
            t208 = nlTan((unsigned short)(*(short *)((((t63 << 1) + (((int)stk + 44) + 0x78)) + 0x0))));
            nlScale(1.0f, 1.0f, (t208 * 0.75f));
            t212 = nlTan((unsigned short)(*(short *)(((*(int *)(((int)stk + 48))) + 0x0))));
            if ((t212 * 0.75f) > 1.0f) {
                t214 = nlTan((unsigned short)(*(short *)(((((int)stk + 44) + 0x78) + (t63 << 1)))));
                nlLineSetDiv((t214 * 0.75f));
            }
        } else {
            *(unsigned int *)(((int)stk + 48)) = ((t63 << 1) + (((int)stk + 44) + 0x78));
            t219 = nlTan((unsigned short)(*(short *)((((t63 << 1) + (((int)stk + 44) + 0x78)) + 0x0))));
            nlScale(0.5f, 1.0f, (t219 * 0.5f));
            t223 = nlTan((unsigned short)(*(short *)(((*(int *)(((int)stk + 48))) + 0x0))));
            if ((t223 * 0.5f) > 1.0f) {
                t225 = nlTan((unsigned short)(*(short *)(((((int)stk + 44) + 0x78) + (t63 << 1)))));
                nlLineSetDiv((float)((((t225 * 0.5f) > 1.0f)) ? 1 : 0));
            }
        }
        nlObjPut(0xC5B1BD8);
        nlPopMatrix(0x1);
        t233 = nlPopMatrix(0x1);
        t234 = *(int *)(((int)stk + 44));
        *(unsigned int *)(((int)stk + 44)) = (t234 + 0x1);
        if ((int)(t234 + 0x1) < (int)0x4) continue;
        break;
    }
    return t233;
}

int entryGridDraw(int a4, int a5, float f4)
{
    int t0;
    int t10;
    float u115;
    float t31;
    float u34;
    int t35;
    int t37;
    int t38;
    int t39;
    int t40;
    float u41;
    float u42;
    float u43;
    int t120;
    int t121;
    int t122;
    int t123;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    float u139;
    int t164;
    int t165;
    int t168;
    int t144;
    float t153;
    float t156;
    int t160;
    int t173;
    int t177;
    int t19;
    int t15;
    int t56;
    float u57;
    float u58;
    float u59;
    int t119;
    int t163;
    int t166;
    int t167;
    int t169;
    int t161;
    int stk[65];

    t0 = *(int *)0x8C287B3C;
    *(unsigned int *)(((int)stk + 32)) = (t0 & 0x400);
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFBFF);
    if ((t0 & 0x400) != 0) {
        nlRenderTextureBegin(0x0, f4);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C343DB4); }
    logoADraw(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C343DC0); }
    logoBDraw(*(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12));
    t10 = *(int *)0x8C287D5C;
    if (t10 == 0) {
        *(Stk3 *)(((int)stk + 16)) = vecMake(452.0f, 41.0f, 0.100000001f);
        panelMenuItemPut(0x0, 1.0f);
    } else {
        if (t10 == 1) {
            *(Stk3 *)(((int)stk + 16)) = vecMake(420.0f, 41.0f, 0.100000001f);
            panelMenuItemPut(0x1, 1.0f);
        } else {
            t15 = t10;
        }
        t19 = t15;
    }
    logoWaveDraw(t19, 1400.0f);
    lightUpdate(0x0);
    camSetOrbit(0x600, 0x8000, 255.0f);
    *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, -2.0f, 0.0f);
    camSetEye();
    *(Stk3 *)(((int)stk + 16)) = vecMake(0.0f, 212.0f, 438.0f);
    camSetTarget();
    camMoveBegin(1.0f, 1.0f);
    *(float *)0x8C287A04 = 1.0f;
    camSetupView();
    camExec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    u115 = 41.0f;
    if ((*(int *)0x8C1855E4) != 0) {
    } else {
        { struct mv12 { int w[12]; }; *(struct mv12 *)((((int)stk + 28) + 0xC)) = *(struct mv12 *)(0x8C110EB0); }
        t31 = nlSin((unsigned short)(*(short *)0x8C185614));
        *(float *)0x8C343F1C = t31;
        *(float *)(((int)stk + 36)) = t31;
        *(unsigned short *)0x8C185614 = ((*(short *)0x8C185614) + 0x300);
        nlSetTrnslMode(0x1, 0x1);
        u34 = *(float *)(((int)stk + 36));
        t35 = *(int *)0x8C287ADC;
        if (t35 == 4) {
            *(unsigned int *)(((int)stk + 28)) = 0x8C343AEC;
            t37 = t35;
            t38 = 0x8C343AEC;
            t39 = (((int)stk + 28) + 0xC);
            t40 = 0x8C343ADC;
            u41 = 50.0f;
            u42 = (u34 + 11.0f);
            u43 = 11.0f;
            for (;;) {
                if ((unsigned int)t40 >= (unsigned int)(*(int *)(((int)stk + 28)))) {
                    break;
                }
                if ((*(int *)((t40 + 0x0))) != 0) {
                    t38 = 0x0;
                    t37 = (nlPushMatrix(t38));
                    t37 = 0x4;
                    t37 = (nlTranslate(((*(float *)((t39 + 0x0))) / 80.0f), ((*(float *)((t39 + t37))) / 80.0f), 0.0f));
                    t38 = 0x3200;
                    t37 = (nlRotateAX(t38));
                    t37 = (nlScale(((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f)));
                    t38 = 0xC5EC1F0;
                    t37 = (nlObjPut(t38));
                    t38 = 0x1;
                    t37 = (nlPopMatrix(t38));
                } else {
                    t56 = t38;
                    u57 = u41;
                    u58 = u42;
                    u59 = u43;
                }
                u41 = u57;
                u42 = u58;
                u43 = u59;
                t40 = (t40 + 0x4);
                t38 = t56;
                t39 = (t39 + 0xC);
            }
        } else {
            if ((*(int *)0x8C343ADC) != 0) {
                nlPushMatrix(0x0);
                *(unsigned int *)(((int)stk + 28)) = (((int)stk + 28) + 0xC);
                nlTranslate(((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) / 80.0f), ((*(float *)(((((int)stk + 28) + 0xC) + 0x4))) / 80.0f), 0.0f);
                nlRotateAX(0x3200);
                nlScale(((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f));
                nlObjPut(0xC5EC1F0);
                nlPopMatrix(0x1);
            }
            if ((*(int *)0x8C343AE8) != 0) {
                nlPushMatrix(0x0);
                *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 28) + 0xC) + 0x24);
                nlTranslate(((*(float *)((((((int)stk + 28) + 0xC) + 0x24) + 0x0))) / 80.0f), ((*(float *)((((((int)stk + 28) + 0xC) + 0x24) + 0x4))) / 80.0f), 0.0f);
                nlRotateAX(0x3200);
                nlScale(((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f), ((u34 + 11.0f) / 50.0f));
                nlObjPut(0xC5EC1F0);
                nlPopMatrix(0x1);
            }
        }
        nlSetTrnslMode(0x4, 0x5);
        u115 = 80.0f;
    }
    entryDrawStripes();
    *(Stk3 *)(((int)stk + 16)) = vecMake(398.0f, 133.0f, 500.0f);
    primPanelDraw(*(Stk1 *)((int)stk + 16));
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 28) + 0x2C)) = *(struct mv4 *)(0x8C110EE0); }
    t120 = 0x0;
    for (;;) {
        if ((int)t120 >= (int)0x4) {
            break;
        }
        t121 = 0x8C0F7C74;
        t122 = 0x0;
        t123 = 0xFFFFFFFF;
        for (;;) {
            if ((int)t122 >= (int)0x4) {
                break;
            }
            t119 = t122;
            t119 = (t119 << 2);
            t121 = (*(int *)((0x8C185428 + t119)));
            if (t121 == t120) {
                t123 = t122;
            }
            t122 = (t122 + 0x1);
        }
        t119 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t120 << 1) + t120) << 2) + 0x8C185458)); }
        t119 = (entryGridDrawCursors(t120, t123, *(Stk3 *)(((int)stk + 16))));
        t119 = t120;
        t119 = (t119 << 2);
        t120 = (t120 + 0x1);
        *(unsigned int *)(((((int)stk + 28) + 0x2C) + t119)) = 0x1;
    }
    t128 = t119;
    t129 = (((int)stk + 28) + 0x2C);
    t130 = 0x8C110EE0;
    t131 = 0x8C0F7C74;
    t132 = a4;
    t133 = a5;
    t134 = 0x8C185428;
    t135 = 0xFFFFFFFF;
    t136 = 0x1;
    t137 = 0x0;
    t138 = 0x0;
    u139 = u115;
    for (;;) {
        if ((int)t138 >= (int)0x4) {
            break;
        }
        t128 = t138;
        if ((int)t128 >= 0) {
            t128 = (t128 & 0x1);
        } else {
            t128 = (~t128);
            t128 = (t128 + 0x1);
            t128 = (t128 & 0x1);
            t128 = (~t128);
            t128 = (t128 + 0x1);
        }
        t132 = 0x8C185298;
        t131 = t138;
        t133 = 0x8C343258;
        t131 = (t131 << 1);
        t131 = (t131 + t132);
        t128 = (*(short *)((t133 + 0xA)));
        t130 = (*(short *)((t131 + 0x0)));
        t128 = (unsigned short)t128;
        t130 = (unsigned short)t130;
        t164 = t136;
        t165 = t137;
        t168 = t132;
        if ((t128 & t130) != 0) {
            t135 = t138;
            t131 = t138;
            t135 = (t135 << 1);
            t137 = 0x88;
            t135 = (t135 + t131);
            t130 = 0x8C0A9768;
            t135 = (t135 << 2);
            t132 = t138;
            *(unsigned int *)(((int)stk + 28)) = t135;
            t137 = (t137 + ((int)stk + 28));
            t135 = (t135 + t137);
            t144 = t135;
            *(int *)((int)stk + 24) = t144;
            t128 = (selCursorPos(t132, t133, 0x0, 0x0, t144));
            t128 = 0x8C0AC6C4;
            t137 = (*(int *)(((int)stk + 28)));
            u139 = (*(float *)((t128 + 0x0)));
            t134 = 0x8C343B1C;
            t136 = 0x8C089B3A;
            t137 = (t137 + t134);
            t128 = 0x4;
            *(float *)((t137 + 0x0)) = (mathLerp((*(float *)((t137 + 0x0))), (*(float *)((t135 + 0x0))), u139));
            t153 = mathLerp((*(float *)((t137 + t128))), (*(float *)((t135 + t128))), u139);
            t128 = 0x4;
            *(float *)((t137 + t128)) = t153;
            t128 = 0x8;
            t156 = mathLerp((*(float *)((t137 + t128))), (*(float *)((t135 + t128))), u139);
            t128 = 0x8;
            t132 = 0x8C343AEC;
            *(float *)((t137 + t128)) = t156;
            t128 = t138;
            t128 = (t128 << 2);
            t128 = (*(int *)((t132 + t128)));
            t128 = (t128 << 2);
            t128 = (*(int *)(((((int)stk + 28) + 0x2C) + t128)));
            t160 = t137;
            if (t128 == 1) {
                t130 = t138;
                t130 = (t130 << 1);
                t131 = t138;
                t130 = (t130 + t131);
                t131 = 0x8C0F7DAC;
                t128 = 0xC;
                t137 = 0x8C088E28;
                t130 = (t130 << 2);
                t130 = (t130 + t134);
                t129 = ((int)stk + 16);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t129) = *(struct mv3 *)(t130); }
                t132 = t138;
                t128 = (markerHitSpawn(t132, *(Stk3 *)((int)stk + 16)));
                t160 = 0x8C088E28;
            } else {
                t161 = t132;
            }
            t164 = 0x8C089B3A;
            t165 = t160;
            t168 = t161;
        } else {
            t163 = t129;
            t166 = t130;
            t167 = t131;
            t169 = t133;
        }
        t129 = t163;
        t136 = t164;
        t137 = t165;
        t138 = (t138 + 0x1);
        t130 = t166;
        t131 = t167;
        t132 = t168;
        t133 = t169;
    }
    nlExecuteEvent(t132, t133);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C343D98); }
    t173 = *(int *)(((int)stk + 32));
    t177 = (panelLogoSwingDraw(*(Stk3 *)(((int)stk + 16)), 1.0f));
    if (t173 != 0) {
        nlRenderTextureEnd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16));
        t177 = (fadeScreenDraw(1.0f, (*(float *)0x8C0AC6E4)));
    }
    return t177;
}

int endingSceneDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    float u40;
    float u41;
    int t2;
    float u10;
    float u5;
    float u6;
    float u15;
    float u17;
    int t55;
    float t76;
    float u83;
    float u84;
    float u86;
    float u87;
    float t101;
    float u30;
    float u31;
    float u20;
    float u21;
    int t75;
    int stk[16];

    t0 = *(int *)0x8C402CAC;
    u40 = 0.0f;
    u41 = 1.0f;
    if (t0 == 0) {
    } else {
        t2 = *(int *)0x8C402CA0;
        if (t0 == 1) {
            u10 = 1.0f;
            if ((int)t2 >= (int)(((*(int *)((0x8C1D3718 + (t0 << 2)))) * 0x3C) - 60)) {
                u5 = (float)((t2 - ((*(int *)((0x8C1D3718 + (t0 << 2)))) * 0x3C)) + 0x3C);
                u6 = ((-(u5 * 0.0199999996f)) + 1.0f);
                if (0.0f > ((-(u5 * 0.0199999996f)) + 1.0f)) {
                    u6 = 0.0f;
                }
                u10 = u6;
            }
            u30 = 0.0f;
            u31 = u10;
        } else {
            if (t0 == 2) {
                u15 = ((float)(t2 - 30) * 0.0199999996f);
                if (0.0f > ((float)(t2 - 30) * 0.0199999996f)) {
                    u15 = 0.0f;
                }
                u17 = u15;
                if (u15 > 1.0f) {
                    u17 = 1.0f;
                }
                u20 = u17;
                u21 = 0.0f;
            }
            u30 = u20;
            u31 = u21;
        }
        u40 = u30;
        u41 = u31;
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(85.0f, 240.0f, 0.0500000007f);
    sprListPut(0x8C1D375C, 0x2, 0x0, u40, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(160.0f, 325.0f, 0.100000001f);
    sprListPut(0x8C1D3ABC, 0x3, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(30.0f, 320.0f, 0.5f);
    uiBarStretchPut(0x8C1D3834, 0x5D, u41);
    *(float *)(((int)stk + 20)) = u41;
    if (u41 > 0.699999988f) {
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) * 0.699999988f);
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(129.0f, 320.0f, 0.5f);
    uiBarStretchPut(0x8C1D3978, 0x1DD, (*(float *)(((int)stk + 20))));
    *(Stk3 *)(((int)stk + 8)) = vecMake(135.0f, 360.0f, 0.100000001f);
    t55 = *(int *)(((*(int *)0x8C402CB4) + 0xC58));
    *(unsigned int *)(((int)stk + 24)) = (((t55 << 1) << 2) + 0x8C125E08);
    sprListPut((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))), (*(int *)(((((t55 << 1) << 2) + 0x8C125E08) + 0x4))), 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(33.0f, 320.0f, 1.5f);
    sprListPut(0x8C1D3C00, 0x1, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(155.0f, 405.0f, 0.100000001f);
    sprListPut(0x8C1D468C, 0x2, 0x0, u41, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(505.0f, 355.0f, 0.100000001f);
    hudFlagPut((*(int *)(((*(int *)0x8C402CB4) + 0xC58))), *(Stk3 *)((int)stk + 8), u41);
    *(Stk3 *)(((int)stk + 8)) = vecMake(555.0f, 405.0f, 0.100000001f);
    hudFontNumPut((*(int *)0x8C2FBC58), u41);
    *(Stk3 *)(((int)stk + 8)) = vecMake(505.0f, 400.0f, 0.100000001f);
    menuTextMsgPut((*(int *)((((*(int *)(((*(int *)0x8C402CB4) + 0xC58))) << 2) + 0x8C1D36F8))), u41);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 10.0f, 0.0f);
    nlRotateAY(0x4000);
    if (((*(int *)0x8C402CAC) == 2) && (t75 = *(int *)0x8C402CA0, (int)t75 >= (int)0x19A)) {
    } else {
        t76 = nlRandom();
        if ((int)(t76 * 3.0f) == 1) {
            evFlashStart(100.0f);
            sndEndingCheer(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
        }
        u83 = *(float *)0x8C40C2C8;
        u84 = u83;
        if (u83 > 255.0f) {
            u84 = 255.0f;
        }
        u86 = *(float *)0x8C38B7FC;
        u87 = u84;
        if (u86 > u84) {
            u87 = u86;
        }
        lightOverrideAmbient(0x0, (int)u87);
    }
    motionBackup((*(int *)0x8C402CB4));
    motionAdvance((*(int *)0x8C402CB4));
    endPlayerPut((*(int *)0x8C402CB4), 0x0);
    t101 = motionGetFrame((*(int *)0x8C402CB4));
    *(unsigned int *)0x8C407FB0 = (int)t101;
    sunPut(((*(int *)0x8C2873EC) + 0x1CAA8), (int)t101, 0xCB400F8, 1.0f);
    return nlPopMatrix(0x1);
}

int miniResultStart(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t23;
    int t24;
    int t35;
    int t42;
    int t48;
    int t54;
    int t60;
    int t66;
    int t70;
    int stk[7];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R13;
    int R14;
    float F4;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 8)) = R4;
    *(unsigned int *)(((int)stk + 4)) = R5;
    t0 = set_event(0x2C, 0x8C03B430);
    *(unsigned int *)((t0 + 0x14)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((t0 + 0x24)) = 0x3C;
    t2 = *(int *)(((int)stk + 8));
    *(unsigned int *)((t0 + 0x1C)) = t2;
    *(unsigned int *)0x8C2FBC58 = ((*(int *)0x8C2FBC58) + t2);
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
    t5 = *(int *)0x8C2FBEF0;
    t6 = *(int *)((t5 + 0x0));
    R0 = (t6);
    R13 = (0x8C0DA8FC);
    R14 = (0x270F);
    R4 = (t5);
    F15 = (360.0f);
    if ((t6 == 2)) goto L_8C03B294;
    if ((R0 == 4)) goto L_8C03B2B8;
    if ((R0 == 5)) goto L_8C03B2E8;
    if ((R0 == 3)) goto L_8C03B33C;
    if ((R0 == 0)) goto L_8C03B360;
    if ((R0 != 6)) goto L_8C03B280;
    if (((*(int *)((R4 + 0x40))) != 2)) goto L_8C03B3F2;
    if (((int)(*(int *)((R4 + 0x3C))) < (int)0x258)) goto L_8C03B3F2;
    t23 = (evNoticeStart(0x0, 0x1C, R14, F15)) == 0;
    if (t23) goto L_8C03B3F2;
    L_8C03B3EC:;
    *(unsigned int *)0x8C2FBFDC = 0x1;
    L_8C03B3F2:;
    t24 = *(int *)0x8C2FBFDC;
    R0 = (t24);
    if ((t24 != 0)) goto L_8C03B414;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C03B406;
    L_8C03B408:;
    return strmBgmPlay(R4, R5, R6);
    L_8C03B406:;
    goto L_8C03B408;
    L_8C03B414:;
    return R0;
    L_8C03B280:;
    if ((R0 != 7)) goto L_8C03B288;
    if (((*(int *)((R4 + 0x40))) != 2)) goto L_8C03B3F2;
    if (((int)(*(int *)((R4 + 0x3C))) < (int)0x384)) goto L_8C03B3F2;
    t35 = (evNoticeStart(0x0, 0x18, R14, F15)) == 0;
    if (t35) goto L_8C03B3F2;
    goto L_8C03B3EC;
    L_8C03B288:;
    if ((R0 != 1)) goto L_8C03B290;
    if (((*(int *)((R4 + 0x40))) != 2)) goto L_8C03B3F2;
    if (((int)(*(int *)((R4 + 0x3C))) < (int)0x12C)) goto L_8C03B3F2;
    t42 = (evNoticeStart(0x0, 0x16, R14, F15)) == 0;
    if (t42) goto L_8C03B3F2;
    goto L_8C03B3EC;
    L_8C03B290:;
    goto L_8C03B3F2;
    L_8C03B360:;
    if (((*(int *)((R4 + 0x40))) != 2)) goto L_8C03B3F2;
    if (((int)(*(int *)((R4 + 0x3C))) < (int)0x258)) goto L_8C03B3F2;
    t48 = (evNoticeStart(0x0, 0x19, R14, F15)) == 0;
    if (t48) goto L_8C03B3F2;
    goto L_8C03B3EC;
    L_8C03B33C:;
    if (((*(int *)((R4 + 0x40))) != 2)) goto L_8C03B3F2;
    if (((int)(*(int *)((R4 + 0x38))) < (int)0x1B58)) goto L_8C03B3F2;
    t54 = (evNoticeStart(0x0, 0x17, R14, F15)) != 0;
    if (t54) goto L_8C03B3EC;
    goto L_8C03B3F2;
    L_8C03B2E8:;
    if (((*(int *)((R4 + 0x40))) == 2)) goto L_8C03B2F4;
    goto L_8C03B3F2;
    L_8C03B2F4:;
    if (((int)(*(int *)((R4 + 0x10))) >= (int)0x8)) goto L_8C03B300;
    goto L_8C03B3F2;
    L_8C03B300:;
    t60 = (evNoticeStart(0x0, 0x15, R14, F15)) == 0;
    if (t60) goto L_8C03B3F2;
    goto L_8C03B3EC;
    L_8C03B2B8:;
    if (((*(int *)((R4 + 0x40))) == 2)) goto L_8C03B2C4;
    goto L_8C03B3F2;
    L_8C03B2C4:;
    if (((int)(*(int *)((R4 + 0x3C))) >= (int)0x258)) goto L_8C03B2D0;
    goto L_8C03B3F2;
    L_8C03B2D0:;
    t66 = (evNoticeStart(0x0, 0x1A, R14, F15)) != 0;
    if (t66) goto L_8C03B2E4;
    goto L_8C03B3F2;
    L_8C03B2E4:;
    goto L_8C03B3EC;
    L_8C03B294:;
    if (((int)(*(int *)((R4 + 0x38))) >= (int)0xBB8)) goto L_8C03B2A0;
    goto L_8C03B3F2;
    L_8C03B2A0:;
    t70 = (evNoticeStart(0x0, 0x1B, R14, F15)) == 0;
    if (t70) goto L_8C03B2B4;
    goto L_8C03B3EC;
    L_8C03B2B4:;
    goto L_8C03B3F2;
}

int strmCallMatchIntro(int a4)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t9;
    int t13;
    int t16;
    int t10;

    if ((int)(*(int *)((((a4 * 0xD78) + 0x8C287D84) + 0xC58))) <= (int)0x11) {
        t1 = *(int *)0x8C1891E8;
        t2 = *(int *)((((t1 << 2) + 0x8C1D4770) + 0x0));
        t4 = *(int *)((((*(int *)(((0xC58 + ((a4 * 0xD78) + 0x8C287D84)) + 0x0))) << 2) + ((((((t2 << 2) << 1) + t2) << 2) << 1) + 0x8C126168)));
        if (t4 != -1) {
            t5 = *(int *)((((t1 << 2) + 0x8C1D4770) + 0x0));
            strmVoicePlay(0x9, (*(int *)((((*(int *)(((0xC58 + ((a4 * 0xD78) + 0x8C287D84)) + 0x0))) << 2) + ((((((t5 << 2) << 1) + t5) << 2) << 1) + 0x8C126168)))));
            t9 = *(int *)0x8C287ADC;
            if (t9 != 2) {
                t13 = 0x2;
                if (a4 == 0) {
                } else {
                    if (a4 == 1) {
                        t10 = 0x3;
                    }
                    t13 = t10;
                }
                t16 = *(int *)((0x8C1D4770 + ((*(int *)0x8C1891E8) << 2)));
                return strmVoiceQueueAdd((*(int *)(((((*(int *)(((0xC58 + ((t13 * 0xD78) + 0x8C287D84)) + 0x0))) << 2) + (0x8C125EE0 + (((((t16 << 2) << 1) + t16) << 2) << 1))) + 0x0))));
            }
            return t9;
        }
        return t4;
    }
    return 0xC58;
}
