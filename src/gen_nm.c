/* Straight-line functions with calls and guards (batch gen_nm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int ambLevelGet(void);
int ballColliSync(void);
int ballMove(int, int, int, int, int, int, int, int, int, int, int, int);
int effBallTrailSpawn(Stk3, Stk3);
int effBounceDustCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int effServeSpeedCalc(int);
int nlArcTan2(int, int, float, float);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int sceneVecStub(Stk3, Stk3);
int shadowBallDraw(Stk3);
float vecLength(Stk3, Stk1);
Stk3 vecMake(float, float, float);
void ballExec(int a4, float f4);

void ballExec(int a4, float f4)
{
    int t8;
    int t19;
    float u21;
    int t22;
    int t27;
    int t30;
    int t42;
    int stk[49];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R9;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F15;
    int T_;
    R4 = a4;
    F4 = f4;
    R13 = (0x8C421F60);
    R14 = (R4);
    if (((*(int *)0x8C421F60) == 0)) goto L_8C023270;
    if ((((*(int *)0x8C295DDC) & 32) == 0)) goto L_8C023270;
    *(int *)((int)stk + 48) = (0xC + R14);
    *(Stk3 *)((0xC + R14)) = vecMake(0.0f, 10.0f, 0.0f);
    L_8C0234D8:;
    return;
    L_8C023270:;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C0232A8;
    t8 = *(int *)((R14 + 0x54));
    R0 = (t8);
    if (((t8 & 8) != 0)) goto L_8C0232A8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R14) = *(struct mv3 *)((R14 + 0xC)); }
    *(float *)((R14 + 0x30)) = ((*(float *)((R14 + 0x30))) + 1.0f);
    if (((*(int *)0x8C287D5C) != 3)) goto L_8C0232A4;
    ballColliSync();
    L_8C0232A4:;
    ballMove(R14, R5, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    L_8C0232A8:;
    *(unsigned short *)(((0x84 + R14) + 0x0)) = (nlArcTan2(R4, R5, (*(float *)((R14 + 0x34))), (*(float *)((R14 + 0x3C)))));
    t19 = *(int *)0x8C20D19C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((R14 + 0x34)); }
    u21 = ((float)(-t19) * (vecLength(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12))));
    *(unsigned short *)((R14 + 0x86)) = (int)((u21 * 65536.0f) / 21.0f);
    t22 = ambLevelGet();
    nlScaleVector(((int)stk + 52), 0x8C38B834, ((float)t22 / 100.0f));
    nlObjPutSetLightDirectionV(((int)stk + 52));
    if (((*(int *)((R13 + 0x0))) != 0)) goto L_8C023322;
    t27 = *(int *)0x8C287B44;
    R0 = (t27);
    if ((t27 != 7)) goto L_8C023322;
    goto L_8C0234D8;
    L_8C023322:;
    t30 = *(int *)((R13 + 0x0));
    R4 = (t30);
    if ((t30 != 0)) goto L_8C0233A6;
    if (((*(int *)0x8C287B44) == 9)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 5)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 6)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 10)) goto L_8C02338C;
    R1 = (0x1);
    L_8C02338E:;
    t42 = *(int *)0x8C287B3C;
    R0 = ((((((t42 & 0x800) == 0)) ? 1 : 0) ^ 0x1));
    if (((R1 ^ (((((t42 & 0x800) == 0)) ? 1 : 0) ^ 0x1)) != 0)) goto L_8C0233A6;
    goto L_8C0234D8;
    L_8C0233A6:;
    R12 = (0x8C0EFD20);
    R13 = (0x8C0EFCD0);
    if ((((*(int *)((R14 + 0x54))) & 8) != 0)) goto L_8C0233CA;
    if ((R4 != 0)) goto L_8C0233BE;
    if (((*(int *)0x8C287B44) != 0)) goto L_8C0233CA;
    L_8C0233BE:;
    if ((R4 == 0)) goto L_8C023430;
    if (((*(int *)0x8C295DF0) == 0)) goto L_8C023430;
    L_8C0233CA:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((R14 + 0xC))), (*(float *)((R14 + 0x10))), (*(float *)((R14 + 0x14))));
    nlRotateAY((unsigned short)(*(short *)((R14 + 0x84))));
    nlRotateAX((unsigned short)(*(short *)((R14 + 0x86))));
    nlObjPut(0xC5053E0);
    nlPopMatrix(0x1);
    L_8C0234AE:;
    nlObjPutSetLightDirectionV(0x8C38B834);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((R14 + 0xC)); }
    shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
    effBounceDustCheck(R14, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    R0 = ((effServeSpeedCalc(R14)));
    goto L_8C0234D8;
    L_8C023430:;
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(R14); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((R14 + 0xC)); }
    sceneVecStub(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((R14 + 0xC))), (*(float *)((R14 + 0x10))), (*(float *)((R14 + 0x14))));
    nlRotateAY((unsigned short)(*(short *)((R14 + 0x84))));
    nlRotateAX((unsigned short)(*(short *)((R14 + 0x86))));
    nlObjPut(0xC505BB0);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R14 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    goto L_8C0234AE;
    L_8C02338C:;
    R1 = (0x0);
    goto L_8C02338E;
}
