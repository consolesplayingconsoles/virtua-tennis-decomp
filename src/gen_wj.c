/* Straight-line functions with calls and guards (batch gen_wj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ballWallStop(int);
int colliObjEntry(int);
int effBounceDustCheck(int, int, int, int, float, float);
extern int miniPointPopSpawn();
int miniSetModel(int, int);
int netHitBall(int, int, int, int, int, int, int, int, int, int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotate(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int shadowBallDraw(Stk3);
extern float vecDistXZ();
float vecLength(Stk3);
Stk3 vecMake(float, float, float);
int FUN_8c038b24(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_8c038b24(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[37];

    register int R2;
    register int R3;
    register int R5;
    register float F0;
    register float F1;
    register float F4;
    register float F5;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_7 = a4;
    v0_0 = a6;
    v0_1 = a7;
    w0_0 = f6;
    v0_4 = (0x0);
    v0_5 = (0x1);
    v0_2 = (0x8C2FBEF0);
    v0_3 = (v0_7);
    v0_6 = (0x8C01604A);
    w0_1 = (0.0f);
    if (((*(int *)0x8C287C60) == 0)) goto L_8C038B56;
    L_8C038E6A:;
    v0_7 = (0xD8);
    w0_0 = (5.0f);
    if (((v0_5 & (*(int *)((v0_3 + 0xD8)))) == 0)) goto L_8C038EE6;
    *(unsigned int *)((v0_3 + v0_7)) = ((*(int *)((v0_3 + v0_7))) & 0xFFFFFFFE);
    nlAddVector3op((v0_3 + 0x2C), (v0_3 + 0x20), (0xB8 + v0_3));
    nlAddVector3op((v0_3 + 0x38), (v0_3 + 0x48), (0xF0 + v0_3));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x38)); }
    v0_5 = !((vecLength(*(Stk3 *)(((int)stk + 20)))) > w0_0);
    if (v0_5) goto L_8C038EC6;
    v0_7 = ((nlScaleUnitVector((v0_3 + 0x38), (v0_3 + 0x38), w0_0)));
    L_8C038EC6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x20)) = *(struct mv3 *)((v0_3 + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x48)) = *(struct mv3 *)((v0_3 + 0x38)); }
    *(float *)((v0_3 + 0x44)) = w0_1;
    v0_7 = (0x44);
    L_8C038EE6:;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C038FAE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x20)) = *(struct mv3 *)((v0_3 + 0x2C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x14)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x48)) = *(struct mv3 *)((v0_3 + 0x38)); }
    v0_7 = (0x4C);
    v0_6 = (0x8C23D204);
    w0_2 = ((*(float *)(((0x84 + v0_3) + 0x0))));
    w0_3 = ((*(float *)0x8C23D204));
    *(float *)((v0_3 + v0_7)) = ((*(float *)((v0_3 + v0_7))) - (w0_2 * w0_3));
    w0_2 = (1.0f - ((*(float *)((v0_6 + 0x0))) * 0.00999999978f));
    *(float *)((v0_3 + 0x48)) = ((*(float *)((v0_3 + 0x48))) * w0_2);
    w0_2 = (1.0f - ((*(float *)((v0_6 + 0x0))) * 0.00999999978f));
    *(float *)((v0_3 + 0x50)) = ((*(float *)((v0_3 + 0x50))) * w0_2);
    nlScaleVector((((int)stk + 32) + 0x14), (v0_3 + 0x48), (*(float *)((v0_6 + 0x0))));
    nlAddVector((v0_3 + 0x20), (((int)stk + 32) + 0x14));
    L_8C038FAE:;
    *(unsigned int *)((v0_3 + 0x118)) = v0_4;
    v0_7 = (0x118);
    if (!(((*(int *)0x8C287C60) == 0))) goto L_8C03913E;
    v0_7 = (0x24);
    if ((0.349999994f > (*(float *)((v0_3 + 0x24))))) goto L_8C038FCE;
    goto L_8C03913E;
    L_8C03913E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x2C)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x38)) = *(struct mv3 *)((v0_3 + 0x48)); }
    netHitBall((v0_3 + 0x14), R5, v0_0, v0_1, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
    ballWallStop((v0_3 + 0x14));
    if (((int)(*(int *)((v0_3 + 0x60))) >= (int)0x5)) goto L_8C0391A2;
    colliObjEntry((0xA0 + v0_3));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xA0 + v0_3)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAC + v0_3)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE4 + v0_3)) = *(struct mv3 *)((v0_3 + 0x48)); }
    L_8C0391A2:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((v0_3 + 0x2C))), (*(float *)((v0_3 + 0x30))), (*(float *)((v0_3 + 0x34))));
    nlObjPut(0xC505BB0);
    nlPopMatrix(0x1);
    if (((int)(*(int *)((v0_3 + 0x60))) >= (int)0x5)) goto L_8C0391E6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x2C)); }
    shadowBallDraw(*(Stk3 *)(((int)stk + 20)));
    L_8C0391E6:;
    return (effBounceDustCheck((v0_3 + 0x14), R5, v0_0, v0_1, F4, F5));
    L_8C038FCE:;
    *(unsigned int *)((v0_3 + 0x60)) = ((*(int *)((v0_3 + 0x60))) + 0x1);
    *(unsigned int *)((v0_3 + 0x118)) = 0x1;
    *(float *)((v0_3 + 0x24)) = 0.349999994f;
    w0_2 = (*(float *)((v0_3 + 0x4C)));
    w0_2 *= -0.699999988f;
    *(float *)((v0_3 + 0x4C)) = w0_2;
    *(float *)((v0_3 + 0x48)) = ((*(float *)((v0_3 + 0x48))) * 0.899999976f);
    *(float *)((v0_3 + 0x50)) = ((*(float *)((v0_3 + 0x50))) * 0.899999976f);
    v0_5 = *(int *)(((*(int *)((v0_2 + 0x0))) + 0x20));
    v0_7 = (v0_5);
    v0_8 = (0xBF333333);
    FPUL_ = (0xBF333333);
    if ((v0_5 == 1)) goto L_8C039012;
    goto L_8C03913E;
    L_8C039012:;
    v0_5 = *(int *)(((*(int *)((v0_2 + 0x0))) + 0x0));
    v0_7 = (v0_5);
    if ((v0_5 == 3)) goto L_8C03901E;
    goto L_8C03913E;
    L_8C03901E:;
    v0_5 = *(int *)((v0_3 + 0x60));
    v0_7 = (v0_5);
    if ((v0_5 == 1)) goto L_8C03902A;
    goto L_8C03913E;
    L_8C03902A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x20)); }
    *(Stk3 *)(((int)stk + 8)) = vecMake(w0_1, w0_1, -90.0f);
    w0_1 = ((float (*)(Stk4))(vecDistXZ))(*(Stk4 *)((int)stk + 8));
    F4 = (w0_1);
    if ((!(w0_1 > 35.0f))) goto L_8C039064;
    nlsndSeqRequest(0x1902A9);
    v0_6 = (v0_4);
    L_8C0390F4:;
    *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)((v0_3 + 0x20))), ((*(float *)((v0_3 + 0x24))) + w0_0), (*(float *)((v0_3 + 0x28))));
    v0_4 = ((int (*)(int, Stk3))(miniPointPopSpawn))(v0_6, *(Stk3 *)((int)stk + 20));
    v0_5 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_5 + 0xC)) = ((*(int *)((v0_5 + 0xC))) + v0_6);
    v0_7 = (v0_4);
    if (((*(int *)(((*(int *)((v0_2 + 0x0))) + 0x10))) != 0)) goto L_8C039132;
    if (((*(int *)0x8C287AF8) != 0)) goto L_8C039132;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x20)) = 0x2;
    L_8C039132:;
    if ((v0_6 == 0)) goto L_8C03913E;
    v0_7 = ((nlsndSeqRequest(0xB02A9)));
    goto L_8C03913E;
    L_8C039064:;
    if ((!(F4 > 25.0f))) goto L_8C039074;
    v0_6 = (0x32);
    v0_7 = (0x0);
    R5 = (0x3C);
    L_8C039082:;
    miniSetModel(v0_7, R5);
    goto L_8C0390F4;
    L_8C039074:;
    if ((!(F4 > 15.0f))) goto L_8C0390CC;
    v0_6 = (0x96);
    v0_7 = (0x1);
    R5 = (0x3C);
    goto L_8C039082;
    L_8C0390CC:;
    if ((!(F4 > w0_0))) goto L_8C0390DA;
    v0_6 = (0xFA);
    v0_7 = (0x2);
    R5 = (0x3C);
    L_8C0390F0:;
    miniSetModel(v0_7, R5);
    goto L_8C0390F4;
    L_8C0390DA:;
    *(unsigned int *)0x8C2FBFD4 = ((*(int *)0x8C2FBFD4) + 0x1);
    nlsndSeqRequest(0x1702A9);
    v0_6 = (0x1F4);
    v0_7 = (0x3);
    R5 = (0x3C);
    goto L_8C0390F0;
    L_8C038B56:;
    if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 4)) goto L_8C038B64;
    goto L_8C038E6A;
    L_8C038B64:;
    v0_7 = (v0_4);
    w0_2 = (9.5f);
    w0_0 = (20.0f);
    L_8C038B6E:;
    *(unsigned int *)(((int)stk + 36)) = v0_4;
    *(unsigned int *)(((int)stk + 32)) = ((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4);
    w0_3 = *(float *)((((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4) + 0x8));
    w0_4 = *(float *)((((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4) + 0x0));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x14);
    *(Stk3 *)((((int)stk + 32) + 0x14)) = vecMake(w0_4, w0_1, (w0_3 + -8.60000038f));
    v0_6 = *(int *)(((int)stk + 32));
    w0_3 = *(float *)((v0_6 + 0x8));
    w0_4 = *(float *)((v0_6 + 0x0));
    *(int *)((int)stk + 24) = (((int)stk + 28) + 0xC);
    *(Stk3 *)((((int)stk + 28) + 0xC)) = vecMake(w0_4, w0_1, (w0_3 + 8.60000038f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    *(float *)(((int)stk + 28)) = (((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_3 + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
    w0_3 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    *(float *)(((int)stk + 28)) = (((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 8)), *(Stk3 *)(((int)stk + 20))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_3 + 0x20)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
    v0_8 = !(w0_2 > (*(float *)((v0_3 + 0x18))));
    v0_6 = (v0_4);
    F12 = ((F12 + w0_3));
    F4 = (((*(float *)(((int)stk + 28))) + (((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))))));
    if (v0_8) goto L_8C038C94;
    w0_3 = (20.0f);
    if ((!(F12 > 20.0f))) goto L_8C038C94;
    if ((!(w0_2 > (*(float *)((v0_3 + 0x24)))))) goto L_8C038C94;
    if ((!(w0_3 > F4))) goto L_8C038C94;
    v0_6 = (v0_5);
    L_8C038CAA:;
    if ((!(w0_0 > F12))) goto L_8C038CBC;
    if ((!(w0_0 > F4))) goto L_8C038CBC;
    if (((*(int *)((v0_3 + 0x118))) != 1)) goto L_8C038CBC;
    v0_6 = (0x3);
    L_8C038CBC:;
    if ((v0_6 == 1)) goto L_8C038CC8;
    if ((v0_6 != 2)) goto L_8C038D40;
    L_8C038CC8:;
    *(unsigned int *)(((int)stk + 32)) = ((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4);
    w0_3 = *(float *)((((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4) + 0x8));
    w0_4 = *(float *)((((((v0_7 << 1) + v0_7) << 2) + 0x8C2FC0D4) + 0x0));
    w0_5 = *(float *)((v0_3 + 0x18));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x38);
    *(Stk3 *)((((int)stk + 32) + 0x38)) = vecMake(w0_4, w0_5, w0_3);
    nlSubVector3op((((int)stk + 32) + 0x2C), (v0_3 + 0x14), (((int)stk + 32) + 0x38));
    nlPushUnitMatrix();
    nlRotate((((int)stk + 32) + 0x2C), 0x8000);
    nlCalcPoint((v0_3 + 0x38), (v0_3 + 0x38));
    nlPopMatrix(0x1);
    nlScaleVector((v0_3 + 0x38), (v0_3 + 0x38), -0.5f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x2C)) = *(struct mv3 *)((v0_3 + 0x14)); }
    v0_8 = ((v0_3 + 0x2C));
    L_8C038D40:;
    if ((v0_6 != 3)) goto L_8C038D5A;
    *(unsigned int *)((v0_3 + 0x118)) = 0x2;
    *(float *)((v0_3 + 0x3C)) = ((*(float *)((v0_3 + 0x3C))) * 0.5f);
    v0_8 = (0x3F000000);
    FPUL_ = (0x3F000000);
    L_8C038D5A:;
    if (((int)v0_6 <= (int)v0_5)) goto L_8C038E2E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x38)); }
    v0_8 = !((vecLength(*(Stk3 *)(((int)stk + 20)))) > 0.5f);
    if (v0_8) goto L_8C038E2E;
    if (((*(int *)(((*(int *)0x8C2FBEF0) + 0x20))) != 1)) goto L_8C038E2E;
    v0_8 = ((v0_7 << 2));
    if (((*(int *)(((v0_7 << 2) + 0x8C2FBEF4))) != 0)) goto L_8C038E2E;
    nlsndSeqRequest(0xE02A9);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x20)); }
    v0_8 = ((int (*)(int, int, int, Stk3))(miniPointPopSpawn))(0x12C, R5, v0_0, *(Stk3 *)(((int)stk + 20)));
    *(unsigned int *)(((v0_7 << 2) + 0x8C2FBEF4)) = v0_5;
    *(float *)(((v0_7 << 2) + 0x8C2FBF34)) = -100.0f;
    v0_8 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_8 + 0xC)) = ((*(int *)((v0_8 + 0xC))) + 0x1);
    *(unsigned int *)(((int)stk + 36)) = v0_5;
    FPUL_ = (0xC2C80000);
    if (((*(int *)(((*(int *)((v0_2 + 0x0))) + 0xC))) != 8)) goto L_8C038E2E;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x10)) = v0_4;
    *(unsigned int *)(((*(int *)((v0_2 + 0x0))) + 0x20)) = 0x2;
    L_8C038E2E:;
    if ((v0_6 == 0)) goto L_8C038E56;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((v0_3 + 0x38)); }
    v0_6 = !((vecLength(*(Stk3 *)(((int)stk + 20)))) > 1.0f);
    if (v0_6) goto L_8C038E56;
    nlsndSeqRequest(0x2002A9);
    L_8C038E56:;
    if (((*(int *)(((int)stk + 36))) == 0)) goto L_8C038E5E;
    v0_7 = (0x8);
    L_8C038E5E:;
    v0_6 = (int)(v0_7 + 0x1) >= (int)0x8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_6) goto L_8C038E6A;
    goto L_8C038B6E;
    L_8C038C94:;
    if ((!(w0_0 > F12))) goto L_8C038CBC;
    if ((!(9.5f > (*(float *)((v0_3 + 0x24)))))) goto L_8C038CAA;
    if ((!(F4 > w0_0))) goto L_8C038CAA;
    v0_6 = (0x2);
    goto L_8C038CAA;
}
