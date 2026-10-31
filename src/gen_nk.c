/* Straight-line functions with calls and guards (batch gen_nk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char colliObjCount[];
extern char colliObjList[];

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int bodyLinePerp(Stk4, Stk3, Stk3);
int bodyRaySphere(Stk4, Stk3, Stk3, float, float);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
int nlOuterProduct(int, int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
float vecDist(Stk3, Stk3);
float vecLength(Stk3, Stk1);
float colliObjResolve(void);

float colliObjResolve(void)
{
    int t9;
    int t10;
    int t14;
    int t26;
    float t31;
    float u39;
    float u40;
    float u41;
    float u42;
    float t49;
    float u53;
    float u54;
    float t63;
    float u67;
    float t70;
    float t74;
    float u77;
    int stk[52];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F14;
    float F15;
    int T_;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    R10 = (0x8C0F0690);
    R11 = (0x8C0F0700);
    R8 = (0x8C0F0520);
    R9 = (0x8C016010);
    F15 = ((1.0f + 1.0f));
    L_8C03C112:;
    if (((int)(*(int *)(((int)stk + 68))) >= (int)(*(int *)(int)colliObjCount))) goto L_8C03C120;
    t9 = *(int *)((((*(int *)(((int)stk + 68))) << 2) + (int)colliObjList));
    t10 = *(int *)((t9 + 0x38));
    R14 = (t9);
    R4 = (t10);
    if (!(((0x2 & t10) == 0))) goto L_8C03C10C;
    if (((0x8 & R4) == 0)) goto L_8C03BE7C;
    goto L_8C03C10C;
    L_8C03C10C:;
    t14 = *(int *)(((int)stk + 68));
    *(unsigned int *)(((int)stk + 68)) = (t14 + 0x1);
    R0 = ((t14 + 0x1));
    goto L_8C03C112;
    L_8C03BE7C:;
    R12 = (0x0);
    L_8C03C100:;
    if (((int)R12 >= (int)(*(int *)(int)colliObjCount))) goto L_8C03C10C;
    R13 = ((*(int *)(((R12 << 2) + (int)colliObjList))));
    if (!(((*(int *)(((int)stk + 68))) != R12))) goto L_8C03C0FE;
    t26 = *(int *)((R13 + 0x30));
    R1 = (t26);
    if (((*(int *)((R14 + 0x30))) != t26)) goto L_8C03BEC2;
    goto L_8C03C0FE;
    L_8C03C0FE:;
    R12 = ((R12 + 0x1));
    goto L_8C03C100;
    L_8C03BEC2:;
    if ((((*(int *)((R13 + 0x38))) & 8) == 0)) goto L_8C03BECC;
    goto L_8C03C0FE;
    L_8C03BECC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((R13 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((R14 + 0xC)); }
    t31 = vecDist(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
    F0 = (t31);
    F4 = (t31);
    if ((((*(float *)((R14 + 0x3C))) + (*(float *)((R13 + 0x3C)))) > t31)) goto L_8C03BF02;
    goto L_8C03C0FE;
    L_8C03BF02:;
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) | 0x1);
    *(unsigned int *)((R14 + 0x34)) = (*(int *)((R13 + 0x30)));
    u39 = *(float *)((R13 + 0x3C));
    u40 = *(float *)((R14 + 0x3C));
    u41 = *(float *)((R13 + 0x5C));
    u42 = *(float *)((R14 + 0x5C));
    nlSubVector3op((((int)stk + 68) + 0x58), (R14 + 0xC), (R13 + 0xC));
    nlScaleUnitVector((((int)stk + 68) + 0x58), (((int)stk + 68) + 0x58), (((u40 + u39) - F4) * (u41 / (u42 + u41))));
    nlAddVector((R14 + 0x18), (((int)stk + 68) + 0x58));
    if ((((*(int *)((R14 + 0x38))) & 4) != 0)) goto L_8C03BF56;
    goto L_8C03C0FE;
    L_8C03BF56:;
    nlSubVector3op((((int)stk + 68) + 0x4C), (R13 + 0x44), (R14 + 0x44));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 68) + 0x34)) = *(struct mv3 *)((((int)stk + 68) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x34)); }
    t49 = vecLength(*(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12));
    F0 = (t49);
    if ((t49 != 0.0f)) goto L_8C03BF90;
    goto L_8C03C0FE;
    L_8C03BF90:;
    nlVoidUnitVector((((int)stk + 68) + 0x34));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((R13 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((R14 + 0xC)); }
    u53 = *(float *)((R14 + 0x3C));
    u54 = *(float *)((R13 + 0x3C));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x4C);
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x4C);
    bodyRaySphere(*(Stk4 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)), u53, u54);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x5C)); }
    *(float *)((R14 + 0x40)) = ((vecDist(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) - (*(float *)((R13 + 0x3C))));
    if ((!((*(float *)((R14 + 0x3C))) > (*(float *)((R14 + 0x40)))))) goto L_8C03C010;
    *(float *)((R14 + 0x40)) = (*(float *)((R14 + 0x3C)));
    L_8C03C010:;
    nlSubVector3op((((int)stk + 68) + 0x28), R14, (((int)stk + 68) + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x28)); }
    t63 = vecLength(*(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12));
    F0 = (t63);
    if ((t63 == 0.0f)) goto L_8C03C0FE;
    nlVoidUnitVector((((int)stk + 68) + 0x28));
    u67 = *(float *)((R13 + 0x5C));
    nlScaleVector((((int)stk + 68) + 0x40), (((int)stk + 68) + 0x4C), ((u67 * F15) / ((*(float *)((R14 + 0x5C))) + u67)));
    t70 = nlInnerProduct((((int)stk + 68) + 0x34), (((int)stk + 68) + 0x28));
    F0 = (t70);
    F14 = (t70);
    if ((!(t70 > 0.0f))) goto L_8C03C0FE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x40)); }
    t74 = vecLength(*(Stk3 *)(((int)stk + 56)), *(Stk1 *)((int)stk + 56 + 12));
    nlScaleVector((((int)stk + 68) + 0x40), (((int)stk + 68) + 0x28), (F14 * t74));
    nlAddVector((R14 + 0x50), (((int)stk + 68) + 0x40));
    u77 = *(float *)((R13 + 0x5C));
    nlScaleVector((((int)stk + 68) + 0x4C), (((int)stk + 68) + 0x4C), ((u77 * F15) / ((*(float *)((R14 + 0x5C))) + u77)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((R13 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(R14); }
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x64);
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x64);
    bodyLinePerp(*(Stk4 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
    nlOuterProduct((((int)stk + 68) + 0x40), (((int)stk + 68) + 0x4C), (((int)stk + 68) + 0x1C));
    nlAddVector((R14 + 0x60), (((int)stk + 68) + 0x1C));
    goto L_8C03C0FE;
    L_8C03C120:;
    *(unsigned int *)(int)colliObjCount = 0x0;
    return F0;
}
