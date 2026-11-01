/* Straight-line functions with calls and guards (batch gen_aan): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ballWallStop(int);
int effBounceDustCheck(int, int, int, int, float, float);
int miniPopupSpawn(Stk4);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int padVibRequest(int, int, int, int, int, int);
int shadowBallDraw(Stk3);
float vecDistXZ(Stk3, Stk3);
float vecLengthXZ(Stk3, Stk1);
Stk3 vecMake(float, float, float);
int FUN_8c03a068(int a4);

int FUN_8c03a068(int a4)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R11;
    register float F0;
    register float F2;
    register float F4;
    register float F5;
    register float F6;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = (0x60);
    v0_0 = (v0_2);
    if (((int)(*(int *)((v0_2 + 0x60))) <= (int)0x1)) goto L_8C03A0CC;
    v0_1 = ((nlCloseEvent(v0_0)));
    L_8C03A358:;
    return v0_1;
    L_8C03A0CC:;
    w0_0 = (1.0f);
    if (((*(int *)0x8C287C60) != 0)) goto L_8C03A182;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x20)) = *(struct mv3 *)((v0_0 + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x14)) = *(struct mv3 *)((v0_0 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x48)) = *(struct mv3 *)((v0_0 + 0x38)); }
    *(float *)((v0_0 + 0x4C)) = ((*(float *)((v0_0 + 0x4C))) - ((*(float *)(((0x84 + v0_0) + 0x0))) * (*(float *)0x8C23D204)));
    w0_1 = (w0_0 - ((*(float *)0x8C23D204) * 0.00999999978f));
    *(float *)((v0_0 + 0x48)) = ((*(float *)((v0_0 + 0x48))) * w0_1);
    w0_1 = (w0_0 - ((*(float *)0x8C23D204) * 0.00999999978f));
    *(float *)((v0_0 + 0x50)) = ((*(float *)((v0_0 + 0x50))) * w0_1);
    nlScaleVector(((int)stk + 28), (v0_0 + 0x48), (*(float *)0x8C23D204));
    nlAddVector((v0_0 + 0x20), ((int)stk + 28));
    if (((*(int *)0x8C287C60) != 0)) goto L_8C03A182;
    if ((!(0.349999994f > (*(float *)((v0_0 + 0x24)))))) goto L_8C03A182;
    *(unsigned int *)((v0_0 + 0x60)) = ((*(int *)((v0_0 + 0x60))) + 0x1);
    *(float *)((v0_0 + 0x24)) = 0.349999994f;
    w0_1 = (*(float *)((v0_0 + 0x4C)));
    w0_1 *= -0.899999976f;
    *(float *)((v0_0 + 0x4C)) = w0_1;
    FPUL_ = (0xBF666666);
    L_8C03A182:;
    v0_1 = (0x24);
    v0_1 = (((18.0f > (*(float *)((v0_0 + 0x24))))));
    if (!((v0_1))) goto L_8C03A2D2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C28886C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_0 + 0x20)); }
    v0_2 = 5.0f > (vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
    v0_1 = (0x8C03A260);
    if (v0_2) goto L_8C03A1C4;
    goto L_8C03A2D2;
    L_8C03A2D2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x2C)) = *(struct mv3 *)((v0_0 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x38)) = *(struct mv3 *)((v0_0 + 0x48)); }
    ballWallStop((v0_0 + 0x14));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_0 + 0x2C))), (*(float *)((v0_0 + 0x30))), (*(float *)((v0_0 + 0x34))));
    nlObjPutSetFadeColor(w0_0, 0.0f, 0.0f);
    nlObjPut(0xC505BB0);
    nlObjPutSetFadeColor(w0_0, w0_0, w0_0);
    nlPopMatrix(0x1);
    if (((int)(*(int *)((v0_0 + 0x60))) >= (int)0x5)) goto L_8C03A350;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_0 + 0x2C)); }
    shadowBallDraw(*(Stk3 *)(((int)stk + 16)));
    L_8C03A350:;
    v0_1 = ((effBounceDustCheck((v0_0 + 0x14), R5, R6, R7, F4, F5)));
    goto L_8C03A358;
    L_8C03A1C4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_0 + 0x48)); }
    w0_1 = vecLengthXZ(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C288A78); }
    v0_2 = !((vecLengthXZ(*(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12))) > w0_1);
    v0_1 = (0x8C016020);
    v0_1 = (0x8C287D84);
    w0_1 = (w0_1);
    if (v0_2) goto L_8C03A20A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xCF4 + v0_1)); }
    w0_1 = ((vecLengthXZ(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12))));
    L_8C03A20A:;
    nlSubVector3op(((int)stk + 28), (v0_0 + 0x20), (0xAE8 + v0_1));
    nlScaleUnitVector(((int)stk + 28), ((int)stk + 28), w0_1);
    *(float *)((v0_0 + 0x48)) = (*(float *)(((int)stk + 28)));
    w0_1 = ((*(float *)(((int)stk + 36))));
    *(float *)((v0_0 + 0x50)) = w0_1;
    if (((*(int *)0x8C2FBFD8) != 0)) goto L_8C03A29E;
    v0_2 = (0x8C2FBF54);
    R5 = (0x8C2FBF54);
    R6 = (0x8C2FBFD4);
    R7 = (0x0);
    if (((unsigned int)0x8C2FBF54 >= (unsigned int)0x8C2FBFD4)) goto L_8C03A29E;
    L_8C03A28C:;
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_8C03A296;
    *(unsigned int *)((R5 + 0x0)) = R7;
    L_8C03A29E:;
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)((v0_1 + 0xAE8))), 20.0f, (*(float *)((v0_1 + 0xAF0))));
    miniPopupSpawn(*(Stk4 *)((int)stk + 16));
    *(int *)((int)stk + 12) = 0x1E;
    *(int *)((int)stk + 8) = 0xA;
    v0_1 = ((padVibRequest((*(int *)((v0_1 + 0xB64))), 0x7, 0xF, 0x0, 0xA, 0x1E)));
    goto L_8C03A2D2;
    L_8C03A296:;
    v0_3 = (unsigned int)(v0_2 + 0x4) < (unsigned int)R6;
    v0_2 = ((v0_2 + 0x4));
    R5 = ((R5 + 0x4));
    if (v0_3) goto L_8C03A28C;
    goto L_8C03A29E;
}
