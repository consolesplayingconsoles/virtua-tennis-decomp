/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
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
    int stk[49];

    register int R2;
    register int R3;
    register int R5;
    register int R9;
    register int R11;
    register float F0;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    w0_0 = f4;
    v0_2 = (0x8C421F60);
    v0_0 = (v0_1);
    if (((*(int *)0x8C421F60) == 0)) goto L_8C023270;
    if ((((*(int *)0x8C295DDC) & 32) == 0)) goto L_8C023270;
    *(int *)((int)stk + 48) = (0xC + v0_0);
    *(Stk3 *)((0xC + v0_0)) = vecMake(0.0f, 10.0f, 0.0f);
    L_8C0234D8:;
    return;
    L_8C023270:;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C0232A8;
    v0_4 = *(int *)((v0_0 + 0x54));
    v0_3 = (v0_4);
    if (((v0_4 & 8) != 0)) goto L_8C0232A8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0) = *(struct mv3 *)((v0_0 + 0xC)); }
    *(float *)((v0_0 + 0x30)) = ((*(float *)((v0_0 + 0x30))) + 1.0f);
    if (((*(int *)0x8C287D5C) != 3)) goto L_8C0232A4;
    ballColliSync();
    L_8C0232A4:;
    ballMove(v0_0, R5, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    L_8C0232A8:;
    *(unsigned short *)(((0x84 + v0_0) + 0x0)) = (nlArcTan2(v0_1, R5, (*(float *)((v0_0 + 0x34))), (*(float *)((v0_0 + 0x3C)))));
    v0_1 = *(int *)0x8C20D19C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((v0_0 + 0x34)); }
    w0_0 = ((float)(-v0_1) * (vecLength(*(Stk3 *)(((int)stk + 40)), *(Stk1 *)((int)stk + 40 + 12))));
    *(unsigned short *)((v0_0 + 0x86)) = (int)((w0_0 * 65536.0f) / 21.0f);
    v0_1 = ambLevelGet();
    nlScaleVector(((int)stk + 52), 0x8C38B834, ((float)v0_1 / 100.0f));
    nlObjPutSetLightDirectionV(((int)stk + 52));
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_8C023322;
    v0_1 = *(int *)0x8C287B44;
    v0_3 = (v0_1);
    if ((v0_1 != 7)) goto L_8C023322;
    goto L_8C0234D8;
    L_8C023322:;
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_8C0233A6;
    if (((*(int *)0x8C287B44) == 9)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 5)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 6)) goto L_8C02338C;
    if (((*(int *)0x8C287B44) == 10)) goto L_8C02338C;
    v0_2 = (0x1);
    L_8C02338E:;
    v0_4 = *(int *)0x8C287B3C;
    v0_3 = ((((((v0_4 & 0x800) == 0)) ? 1 : 0) ^ 0x1));
    if (((v0_2 ^ (((((v0_4 & 0x800) == 0)) ? 1 : 0) ^ 0x1)) != 0)) goto L_8C0233A6;
    goto L_8C0234D8;
    L_8C0233A6:;
    v0_2 = (0x8C0EFD20);
    v0_2 = (0x8C0EFCD0);
    if ((((*(int *)((v0_0 + 0x54))) & 8) != 0)) goto L_8C0233CA;
    if ((v0_1 != 0)) goto L_8C0233BE;
    if (((*(int *)0x8C287B44) != 0)) goto L_8C0233CA;
    L_8C0233BE:;
    if ((v0_1 == 0)) goto L_8C023430;
    if (((*(int *)0x8C295DF0) == 0)) goto L_8C023430;
    L_8C0233CA:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_0 + 0xC))), (*(float *)((v0_0 + 0x10))), (*(float *)((v0_0 + 0x14))));
    nlRotateAY((unsigned short)(*(short *)((v0_0 + 0x84))));
    nlRotateAX((unsigned short)(*(short *)((v0_0 + 0x86))));
    nlObjPut(0xC5053E0);
    nlPopMatrix(0x1);
    L_8C0234AE:;
    nlObjPutSetLightDirectionV(0x8C38B834);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((v0_0 + 0xC)); }
    shadowBallDraw(*(Stk3 *)(((int)stk + 40)));
    effBounceDustCheck(v0_0, 0x0, 0x0, 0x0, *(int *)((int)stk + 52), *(int *)((int)stk + 52 + 4), *(int *)((int)stk + 52 + 8), *(int *)((int)stk + 52 + 12), *(int *)((int)stk + 52 + 16), *(int *)((int)stk + 52 + 20), *(int *)((int)stk + 52 + 24), *(int *)((int)stk + 52 + 28));
    v0_3 = ((effServeSpeedCalc(v0_0)));
    goto L_8C0234D8;
    L_8C023430:;
    nlPushMatrix(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(v0_0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((v0_0 + 0xC)); }
    sceneVecStub(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_0 + 0xC))), (*(float *)((v0_0 + 0x10))), (*(float *)((v0_0 + 0x14))));
    nlRotateAY((unsigned short)(*(short *)((v0_0 + 0x84))));
    nlRotateAX((unsigned short)(*(short *)((v0_0 + 0x86))));
    nlObjPut(0xC505BB0);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_0 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_0); }
    effBallTrailSpawn(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    goto L_8C0234AE;
    L_8C02338C:;
    v0_2 = (0x0);
    goto L_8C02338E;
}
