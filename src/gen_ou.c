/* Straight-line functions with calls and guards (batch gen_ou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_8c0126d6(void);
int advExec(void);
int camSetupView(void);
int cameraExec(int);
int colliObjResolve(void);
int dbgMenuExec(void);
int entryFirstPortFlag(void);
int entryIsVersus(void);
int fadeCaptureBegin(void);
int fadeCaptureEnd(int);
int hudMatchDraw(void);
int hudWordFlagDraw(void);
int lightUpdate(int);
int matchFrame(void);
int matchSceneExec(void);
int nlExecuteEvent(void);
int nlExecuteEvent2(void);
int nlRenderTextureBegin(int);
int nlRenderTextureEnd(void);
int perfMark(void);
int perfPrint(void);
int screenFramePut(int, int, float);
int screenPlanePut(void);
int stageLoadBegin(int);
int stageLoadBeginLong(void);
int stageLoadStep(void);
int stageLoadTexStep2(void);
int FUN_8c0123e8(float f4);

int FUN_8c0123e8(float f4)
{
    int stk[9];
    int t0;
    register int t22;
    register int t23;
    register int t24;
    register int t32;
    register int t39;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register float u105;
    register int t5;
    float u8;
    int t18;
    int t51;
    int t64;

    *(unsigned int *)0x8C38BA14 = 0x0;
    t0 = (((struct o0_int *)0x8C287B3C)->v);
    if ((0x80000 & t0) != 0) {
        fadeCaptureBegin();
        (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFF7FFFF);
        t5 = 0x0;
        u8 = 0.0f;
    } else {
        t5 = ((0x200000 & t0) | (0x400 & t0));
        u8 = ((((struct o0_float *)0x8C287C3C)->v));
    }
    (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) & 0xFFFFFBFF);
    if (t5 != 0) {
        nlRenderTextureBegin(0x0);
    }
    if ((((((struct o14_int *)0x8C287C3C)->v)) == 0x96) && (t18 = *(int *)0x8C287D5C, t18 != 1)) {
        if ((*(int *)0x8C287ADC) == 4) {
            t22 = entryIsVersus();
            if (t22 == 0) {
                t23 = entryFirstPortFlag();
                if (t23 == 0) {
                    t24 = entryIsVersus();
                    if (t24 == 0) {
                        stageLoadBegin(0x1);
                    } else {
                        stageLoadBeginLong();
                    }
                } else {
                    stageLoadBeginLong();
                }
            } else {
                t32 = entryIsVersus();
                if (t32 == 0) {
                    stageLoadBegin(0x1);
                } else {
                    stageLoadBeginLong();
                }
            }
        } else {
            t39 = entryIsVersus();
            if (t39 == 0) {
                stageLoadBegin(0x1);
            } else {
                stageLoadBeginLong();
            }
        }
    }
    if (((int)((((struct o14_int *)0x8C287C3C)->v)) > (int)0x1) && (t51 = *(int *)0x8C287D5C, t51 != 1)) {
        (((struct o14_uint *)0x8C287C3C)->v) = (((((struct o14_int *)0x8C287C3C)->v)) - 1);
        if ((*(int *)0x8C287ADC) == 4) {
            t58 = entryIsVersus();
            if (t58 == 0) {
                t59 = entryFirstPortFlag();
                if (t59 == 0) {
                    t60 = entryIsVersus();
                    if (t60 == 0) {
                        return stageLoadStep();
                    }
                    return stageLoadTexStep2();
                }
                return stageLoadTexStep2();
            }
            t61 = entryIsVersus();
            if (t61 == 0) {
                return stageLoadStep();
            }
            return stageLoadTexStep2();
        }
        t62 = entryIsVersus();
        if (t62 == 0) {
            return stageLoadStep();
        }
        return stageLoadTexStep2();
    }
    t63 = *(int *)0x8C287D5C;
    if ((t63 != 2) && ((t63 != 3) && (t64 = (((struct o14_int *)0x8C287C3C)->v), t64 == 1))) {
        (((struct o14_uint *)0x8C287C3C)->v) = 0x0;
        (((struct o8_uint *)0x8C287B3C)->v) = 0x7;
        (((struct oC_uint *)0x8C287B3C)->v) = 0xFFFFFFFF;
        (((struct o0_uint *)0x8C287B3C)->v) = (((((struct o0_int *)0x8C287B3C)->v)) | 0x800);
        (((struct o10_uint *)0x8C287B3C)->v) = 0xF0;
        return cameraExec(((((struct o8_int *)0x8C287B3C)->v)));
    }
    camSetupView();
    lightUpdate(0x0);
    perfMark();
    matchSceneExec();
    perfPrint();
    matchFrame();
    nlExecuteEvent();
    colliObjResolve();
    if ((*(int *)0x8C421F60) != 0) {
        advExec();
    }
    if (t5 != 0) {
        if (1.0f > u8) {
            screenFramePut(0x0, 0x0, u8);
        }
        if (t5 != 0) {
            nlRenderTextureEnd();
            screenPlanePut();
        }
    }
    fadeCaptureEnd(0x0);
    dbgMenuExec();
    nlExecuteEvent2();
    hudMatchDraw();
    hudWordFlagDraw();
    if ((t5 == 0) && (u8 != 0.0f)) {
        (((struct oC_float *)0x8C287C3C)->v) = 1.0f;
        u105 = u8;
        if (!((*(float *)0x8C01278C) > u8)) {
            u105 = 1.0f;
        }
        screenFramePut(0x1, 0x0, u105);
    }
    return FUN_8c0126d6();
}
