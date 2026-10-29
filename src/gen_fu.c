/* Straight-line functions with calls and guards (batch gen_fu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int decoHeaderDraw(int, int, int, int, float);
int entryCountJoined(void);
extern int getID_Color();
int logoBDrawRot(int, Stk3);
int nlsndSeqRequest(int);
int padDirAny(int);
int padDirRepeat(int, int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
int primRect(int, int, int, int, int, int, int, int);
int primRectFrame(int, int, int, int, Stk3);
extern int primRectIncGradY();
int selCursorDraw(int, int, int, float, float);
int selCursorInputC(int, int, int, int, int, int, int, int, int);
int selModelSpawn(int, int);
int selPanelDraw(int, float, float);
extern int selSlot0FlagClear();
int sndSeCursor(void);
int unlockCountW0(void);
int vecAdd(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int winDrawA(int, int, Stk3, float, float, float);
int selPortsExec(int a4, int a5);
int primPanelDraw(Stk1 s);


int primPanelDraw(Stk1 s)
{
    float u0;
    int t54;
    int t61;
    int t75;
    int t76;
    int t78;
    int stk[74];

    stk[65] = s.w[0];
    *(unsigned int *)(((int)stk + 128)) = 0xE3;
    u0 = *(float *)0x8C18D2D0;
    *(float *)0x8C18D2DC = (float)(int)(u0 * 0.600000024f);
    *(float *)(((0x84 + ((int)stk + 128)) + 0x0)) = ((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + (float)(int)(u0 * 0.600000024f));
    *(Stk3 *)((((int)stk + 128) + 0x10)) = vecMake(-5.0f, -17.0f, 500.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 124) + 0x14)); }
    winDrawA(0xFFE31800, 0x2, *(Stk3 *)(((int)stk + 112)), 361.0f, 1.0f, 0.78125f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((0x84 + ((int)stk + 128))); }
    primRectFrame(0x9A, (*(int *)(((int)stk + 128))), 0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 100)));
    *(unsigned int *)(((int)stk + 128)) = 0x64000000;
    *(Stk3 *)(((int)stk + 116)) = vecMake((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), 501.0f);
    primRect(0x9A, 0xE5, (*(int *)(((int)stk + 128))), 0x0, *(int *)((int)stk + 116), *(int *)((int)stk + 116 + 4), *(int *)((int)stk + 116 + 8), *(int *)((int)stk + 116 + 12));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 229.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 84)), *(Stk3 *)(((int)stk + 96)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x4))), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 229.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x8))) + (-1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -20.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -134.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 104)), *(Stk3 *)(((int)stk + 116)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -77.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 52.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -77.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 176.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 72)), *(Stk3 *)(((int)stk + 84)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + 15.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 113.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(((*(float *)(((0x84 + ((int)stk + 128)) + 0x0))) + -169.0f), ((*(float *)(((0x84 + ((int)stk + 128)) + 0x4))) + 113.0f), (*(float *)(((0x84 + ((int)stk + 128)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x5, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(640.0f, 73.0f, 400.0f);
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(0.0f, 73.0f, 400.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x3, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(640.0f, 416.0f, 400.0f);
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(0.0f, 416.0f, 400.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineH(0x1, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 100)), *(Stk3 *)(((int)stk + 112)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 100) + 0x20)) = *(struct mv3 *)(0x8C122D14); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 100) + 0x20)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 100) + 0x20));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 100) + 0x20)); }
    t54 = ((int (*)(int, int, int, int, Stk3))(primRectIncGradY))(0x240, 0x156, 0xA4000078, 0xA4000078, *(Stk3 *)(((int)stk + 60)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(30.0f, 76.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x58));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(30.0f, 417.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x50));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 104)), *(Stk3 *)(((int)stk + 116)));
    *(Stk3 *)((((int)stk + 116) + 0x58)) = vecMake(605.0f, 76.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 116) + 0x58));
    *(Stk3 *)((((int)stk + 112) + 0x50)) = vecMake(605.0f, 417.0f, 529.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(0x8C18D2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 112) + 0x50));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 112) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 116) + 0x58)); }
    primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 116)) = vecMake(641.0f, 418.0f, 420.0f);
    t61 = ((int (*)(int, int, int, int, int, int, int, int))(primRectIncGradY))(0x297, 0x23, 0xA4E31800, 0xA4E31800, *(int *)((int)stk + 116), *(int *)((int)stk + 116 + 4), *(int *)((int)stk + 116 + 8), *(int *)((int)stk + 116 + 12));
    *(float *)0x8C18D2E0 = ((*(float *)0x8C18D2E0) - 1.0f);
    *(float *)0x8C18D2E4 = ((*(float *)0x8C18D2E4) - 1.0f);
    *(float *)0x8C18D2E8 = ((*(float *)0x8C18D2E8) - 1.0f);
    if (-360.0f > (*(float *)0x8C18D2E0)) {
        *(float *)0x8C18D2E0 = 640.0f;
    }
    if (-360.0f > (*(float *)0x8C18D2E4)) {
        *(float *)0x8C18D2E4 = 640.0f;
    }
    if (-360.0f > (*(float *)0x8C18D2E8)) {
        *(float *)0x8C18D2E8 = 640.0f;
    }
    *(Stk3 *)((((int)stk + 128) + 0x34)) = vecMake((*(float *)0x8C18D2E0), 423.0f, 400.100006f);
    *(Stk3 *)((((int)stk + 124) + 0x2C)) = vecMake((*(float *)0x8C18D2E4), 423.0f, 400.100006f);
    *(Stk3 *)((((int)stk + 120) + 0x24)) = vecMake((*(float *)0x8C18D2E8), 423.0f, 400.100006f);
    *(volatile float *)0x8C18D2D0;
    t75 = *(int *)0x8C20D198;
    t76 = ((~(((~t75) + 0x1) & 0x3F)) + 0x1);
    if ((int)t75 >= 0) {
        t76 = (t75 & 0x3F);
    }
    t78 = 0xFFC88C00;
    if ((int)t76 < (int)0x20) {
        t78 = 0xFF008D8D;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 116)) = *(struct mv3 *)((((int)stk + 128) + 0x34)); }
    logoBDrawRot(t78, *(Stk3 *)(((int)stk + 116)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 104)) = *(struct mv3 *)((((int)stk + 116) + 0x34)); }
    logoBDrawRot(t78, *(Stk3 *)(((int)stk + 104)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 92)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    return (logoBDrawRot(t78, *(Stk3 *)(((int)stk + 92))));
}


