/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int camGetPos(Stk4);
float courtDistScale(Stk3, Stk3);
int nlLineSetDiv(float);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
Stk3 vecMake(float, float, float);
int courtDrawStageModels(void);

int courtDrawStageModels(void)
{
    float u4;
    float u8;
    int t12;
    float t17;
    int t21;
    float t26;
    int t30;
    float t35;
    int t39;
    float t44;
    int t48;
    int t1;
    int t6;
    int stk[48];

    u4 = 0.00499999989f;
    if (((*(int *)0x8C287B44) == 5) && (t1 = *(int *)0x8C421F60, t1 == 0)) {
        u4 = 0.100000001f;
    }
    u8 = u4;
    if (((*(int *)0x8C1891E8) == 4) && (t6 = *(int *)0x8C287B44, t6 == 3)) {
        u8 = 0.100000001f;
    }
    *(int *)((int)stk + 116) = (((int)stk + 120) + 0xC);
    camGetPos(*(Stk4 *)((int)stk + 116));
    nlPushMatrix(0x0);
    nlTranslate(0.0f, u8, 0.0f);
    t12 = *(int *)0x8C1891E8;
    nlObjPut((*(int *)((((((t12 << 1) + t12) << 2) + 0x8C189C94) + 0x0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(int *)((int)stk + 112) = (((int)stk + 116) + 0x4);
    *(Stk3 *)((((int)stk + 116) + 0x4)) = vecMake(0.0f, 0.0f, 63.5f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((((int)stk + 116) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 120) + 0xC)); }
    t17 = courtDistScale(*(Stk3 *)(((int)stk + 88)), *(Stk3 *)(((int)stk + 100)));
    nlTranslate(0.0f, u8, 63.5f);
    nlScale(1.0f, 1.0f, t17);
    nlLineSetDiv(t17);
    t21 = *(int *)0x8C1891E8;
    nlObjPut((*(int *)((((((t21 << 1) + t21) << 2) + 0x8C189C94) + 0x4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(int *)((int)stk + 84) = (((int)stk + 116) + 0x4);
    *(Stk3 *)((((int)stk + 116) + 0x4)) = vecMake(0.0f, 0.0f, -63.5f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 116) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 120) + 0xC)); }
    t26 = courtDistScale(*(Stk3 *)(((int)stk + 60)), *(Stk3 *)(((int)stk + 72)));
    nlTranslate(0.0f, u8, -63.5f);
    nlLineSetDiv(t26);
    nlScale(1.0f, 1.0f, t26);
    t30 = *(int *)0x8C1891E8;
    nlObjPut((*(int *)((((((t30 << 1) + t30) << 2) + 0x8C189C94) + 0x4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(int *)((int)stk + 56) = (((int)stk + 116) + 0x4);
    *(Stk3 *)((((int)stk + 116) + 0x4)) = vecMake(0.0f, 0.0f, 118.349998f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 116) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 120) + 0xC)); }
    t35 = courtDistScale(*(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
    nlTranslate(0.0f, u8, 118.349998f);
    nlLineSetDiv(t35);
    nlScale(1.0f, 1.0f, t35);
    t39 = *(int *)0x8C1891E8;
    nlObjPut((*(int *)((((((t39 << 1) + t39) << 2) + 0x8C189C94) + 0x8))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(int *)((int)stk + 28) = (((int)stk + 116) + 0x4);
    *(Stk3 *)((((int)stk + 116) + 0x4)) = vecMake(0.0f, 0.0f, -118.349998f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 116) + 0x4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 120) + 0xC)); }
    t44 = courtDistScale(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    nlTranslate(0.0f, u8, -118.349998f);
    nlLineSetDiv(t44);
    nlScale(1.0f, 1.0f, t44);
    t48 = *(int *)0x8C1891E8;
    nlObjPut((*(int *)((((((t48 << 1) + t48) << 2) + 0x8C189C94) + 0x8))));
    return (nlPopMatrix(0x1));
}
