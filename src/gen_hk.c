/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int nlUnitVector(int);
int abs(int);
int camWorldToView(Stk4);
int effBounceDustSpawn(Stk3, float, float);
int evBallMarkSpawn(int, Stk3);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateV(int, int);
int nlUnitMatrix(void);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int set_event(int, int);
int vecAdd(int, int, int, int, int);
float vecLength(Stk4);
Stk3 vecMake(float, float, float);
int vecScale(int, int, int, int, int, float, float, float, float, float, float, float);
int vecSub(Stk4, Stk3);
void segPlaneHit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int ballMarkCheck(void);
void effBounceDustCheck(int a4, float f4, float f5);
void footMarkCheck(int a4, int a5);
int screenSphereVisibleRaised(Stk3 s, float f4);
int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int screenSegVisible(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);

void segPlaneHit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u17;
    float u19;
    float u21;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    int stk[45];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    stk[34] = a12;
    stk[35] = a13;
    stk[36] = a14;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(a4); }
    *(int *)((int)stk + 32) = (((int)stk + 60) + 0x18);
    vecSub(*(Stk4 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 48)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((a4 + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(a4); }
    *(int *)((int)stk + 4) = (((int)stk + 32) + 0x28);
    vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
    u2 = *(float *)(((((int)stk + 32) + 0x28) + 0x0));
    u3 = *(float *)(((((int)stk + 60) + 0x18) + 0x4));
    u4 = *(float *)(((((int)stk + 32) + 0x28) + 0x8));
    u5 = *(float *)(((((int)stk + 60) + 0x18) + 0x8));
    u6 = *(float *)(((((int)stk + 60) + 0x18) + 0x0));
    u7 = *(float *)(((((int)stk + 32) + 0x28) + 0x4));
    u8 = *(float *)(((a4 + 0xC) + 0x0));
    u9 = *(float *)(((a4 + 0xC) + 0x4));
    u10 = ((u3 * u4) - (u5 * u7));
    u11 = ((u5 * u2) - (u6 * u4));
    u12 = *(float *)(((a4 + 0xC) + 0x8));
    u13 = ((u6 * u7) - (u3 * u2));
    u17 = ((((u5 * u2) - (u6 * u4))) * (*(float *)(((((int)stk + 60) + 0x4C) + 0x4))));
    u17 = u17 + (*(float *)(((((int)stk + 60) + 0x4C) + 0x0))) * ((u3 * u4) - (u5 * u7));
    u19 = u17;
    u19 = u19 + (*(float *)(((((int)stk + 60) + 0x4C) + 0x8))) * ((u6 * u7) - (u3 * u2));
    if (u19 > (*(float *)0x8C089B78)) {
        u21 = *(float *)(((((int)stk + 60) + 0x40) + 0x0));
        u22 = ((u3 * u4) - (u5 * u7));
        u23 = *(float *)(((((int)stk + 60) + 0x40) + 0x4));
        u24 = ((u5 * u2) - (u6 * u4));
        u25 = *(float *)(((((int)stk + 60) + 0x40) + 0x8));
        u26 = ((u6 * u7) - (u3 * u2));
        if (!(0.0f > (((((-(u22 * u21)) - (u24 * u23)) - (u26 * u25)) - (((-(u8 * u10)) - (u9 * u11)) - (u12 * u13))) / u19)) && !((((((-(u22 * u21)) - (u24 * u23)) - (u26 * u25)) - (((-(u8 * u10)) - (u9 * u11)) - (u12 * u13))) / u19) > 1.0f)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x40)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 60) + 0x4C)); }
            vecScale(0x0, 0x0, 0x0, 0x0, (0xC + ((int)stk + 24)), (((((-(u22 * u21)) - (u24 * u23)) - (u26 * u25)) - (((-(u8 * u10)) - (u9 * u11)) - (u12 * u13))) / u19), ((((-(u22 * u21)) - (u24 * u23)) - (u26 * u25)) - (((-(u8 * u10)) - (u9 * u11)) - (u12 * u13))), (u24 * u23), u19, (((-(u8 * u10)) - (u9 * u11)) - (u12 * u13)), (u6 * u7), u2);
            vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 36) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(((int)stk + 60)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(0x8C1016D4); }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a8) = *(struct mv3 *)(0x8C1016D4); }
    }
}

int ballMarkCheck(void)
{
    float t2;
    float u3;
    int t34;
    int t28;
    int t5;
    int t22;
    int t12;
    float u15;
    int t40;
    int stk[28];

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((int)Ball); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(0x8C291F30); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
        t2 = vecLength(*(Stk4 *)((int)stk + 32));
        u3 = *(float *)0x8C291F34;
        t34 = 0x8C084F90;
        if (0.400000006f > u3) {
            t28 = 0x8C084F94;
            if (t2 > 1.5f) {
                t5 = abs((int)(u3 - (*(float *)0x8C291F28)));
                t22 = 0x8C084F9C;
                if ((float)t5 > 0.5f) {
                    *(Stk3 *)((((int)stk + 44) + 0xC)) = vecMake((*(float *)0x8C291F30), 0.0f, (*(float *)0x8C291F38));
                    *(Stk3 *)((((int)stk + 40) + 0x4)) = vecMake((*(float *)(int)Ball), 0.0f, (*(float *)0x8C291F2C));
                    *(Stk3 *)((((int)stk + 36) + 0x20)) = vecMake(0.0f, 0.0f, 1.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0xC)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x24)); }
                    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x48);
                    vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
                    nlUnitVector((((int)stk + 44) + 0x24));
                    t12 = set_event(0x6C, 0x8C084CBC);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t12 + 0x14)) = *(struct mv3 *)(0x8C291F30); }
                    *(unsigned int *)((t12 + 0x24)) = 0x258;
                    u15 = 0.699999988f;
                    if ((*(int *)0x8C1891E8) == 2) {
                        u15 = 0.5f;
                    }
                    *(float *)((t12 + 0x28)) = u15;
                    nlPushMatrix(0x0);
                    nlUnitMatrix();
                    nlRotateV((((int)stk + 44) + 0x18), (((int)stk + 44) + 0x24));
                    nlGetMatrix((t12 + 0x2C));
                    t22 = (nlPopMatrix(0x1));
                }
                t28 = t22;
            }
            t34 = t28;
        }
        t40 = t34;
    }
    return t40;
}

void effBounceDustCheck(int a4, float f4, float f5)
{
    float t2;
    float u3;
    float u9;
    int stk[22];

    if ((*(int *)0x8C287C60) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 44) + 0xC)) = *(struct mv3 *)((a4 + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(a4); }
        *(float *)(((((int)stk + 44) + 0xC) + 0x4)) = 0.0f;
        *(float *)((((int)stk + 44) + 0x4)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((int)stk + 44)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 44) + 0xC)); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
        t2 = vecLength(*(Stk4 *)((int)stk + 32));
        u3 = *(float *)((a4 + 0x10));
        if (((*(float *)0x8C082F0C) > u3) && (t2 > 1.0f)) {
            if (!(0.0f > (u3 - (*(float *)((a4 + 0x4)))))) {
                u9 = (u3 - (*(float *)((a4 + 0x4))));
            } else {
                u9 = ((-u3) + (*(float *)((a4 + 0x4))));
            }
            if (u9 > (*(float *)0x8C082F10)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((a4 + 0xC)); }
                effBounceDustSpawn(*(Stk3 *)(((int)stk + 32)), u3, t2);
                *(float *)0x8C1816A0 = ((*(float *)((a4 + 0x10))) - (*(float *)((a4 + 0x4))));
            }
        }
    }
}

void footMarkCheck(int a4, int a5)
{
    int t1;
    int t2;
    float t4;
    int t10;
    int stk[15];

    *(unsigned int *)(((int)stk + 44)) = a5;
    if ((int)(*(int *)0x8C287ADC) <= (int)0x2) {
        t1 = *(int *)(((int)stk + 44));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((0xAB8 + a4) + (((t1 << 1) + t1) << 2))); }
        t2 = *(int *)((a4 + 0xB5C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((0x8C38B8D4 + ((((t2 << 1) + t2) << 2) << 1)) + (((t1 << 1) + t1) << 2))); }
        *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
        vecSub(*(Stk4 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 20)));
        t4 = vecLength(*(Stk4 *)((int)stk + 32));
        if (t4 > (*(float *)0x8C0CDF3C)) {
            if ((*(float *)0x8C0CDF40) > (*(float *)((((0xAB8 + a4) + (((t1 << 1) + t1) << 2)) + 0x4)))) {
                t10 = *(int *)((a4 + 0xB5C));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((((((t10 << 1) + t10) << 2) << 1) + 0x8C38B8D4) + (((t1 << 1) + t1) << 2))) = *(struct mv3 *)(((0xAB8 + a4) + (((t1 << 1) + t1) << 2))); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((0xAB8 + a4) + (((t1 << 1) + t1) << 2))); }
                evBallMarkSpawn(0x4000, *(Stk3 *)(((int)stk + 32)));
            }
        }
    }
}

int screenSphereVisibleRaised(Stk3 s, float f4)
{
    int t25;
    int t5;
    float u6;
    float u7;
    float u8;
    int t18;
    int t11;
    float u12;
    float u13;
    float u14;
    int t16;
    int stk[24];

    stk[13] = s.w[0];
    stk[14] = s.w[1];
    stk[15] = s.w[2];
    *(float *)(((int)stk + 56)) = ((*(float *)&s.w[1] + 10.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x8);
    camWorldToView(*(Stk4 *)(((int)stk + 4)));
    t25 = 0x0;
    if (f4 > (*(float *)(((((int)stk + 20) + 0x8) + 0x8)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x8)); }
        screenProject((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x10), *(Stk3 *)(((int)stk + 8)));
        t5 = abs((*(int *)(((int)stk + 20))));
        u6 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
        u7 = *(float *)0x8C287A10;
        u8 = (-u6);
        if (!(0.0f > u6)) {
            u8 = u6;
        }
        t18 = 0x0;
        if ((((u7 * f4) / u8) + 320.0f) > (float)t5) {
            t11 = abs((*(int *)(((int)stk + 24))));
            u12 = *(float *)(((((int)stk + 20) + 0x8) + 0x8));
            u13 = *(float *)0x8C287A10;
            u14 = (-u12);
            if (!(0.0f > u12)) {
                u14 = u12;
            }
            t16 = 0x0;
            if ((((u13 * f4) / u14) + 240.0f) > (float)t11) {
                t16 = 0x1;
            }
            t18 = t16;
        }
        t25 = t18;
    }
    return t25;
}

int screenSegVisibleRaised(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    float u0;
    int t10;
    int t14;
    int stk[41];

    stk[27] = a8;
    stk[28] = a9;
    stk[29] = a10;
    stk[30] = a11;
    stk[31] = a12;
    stk[32] = a13;
    *(unsigned int *)(((int)stk + 76)) = a4;
    u0 = *(float *)0x8C08A2B8;
    *(float *)(((int)stk + 112)) = ((*(float *)&a9 + u0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x30)); }
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 44)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 32) + 0x24), (((int)stk + 32) + 0x28), *(Stk3 *)(((int)stk + 32)));
    *(float *)(((int)stk + 124)) = ((*(float *)&a12 + u0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x58)); }
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x3C), *(Stk3 *)(((int)stk + 4)));
    t10 = screenOutcodeMargin((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 76))));
    t14 = screenOutcodeMargin((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 76))));
    return (((((unsigned short)t10 & (unsigned short)t14) == 0)) ? 1 : 0);
}

int screenSegVisible(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t7;
    int t11;
    int stk[40];

    stk[26] = a8;
    stk[27] = a9;
    stk[28] = a10;
    stk[29] = a11;
    stk[30] = a12;
    stk[31] = a13;
    *(unsigned int *)(((int)stk + 76)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x2C)); }
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 44)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 32) + 0x24), (((int)stk + 32) + 0x28), *(Stk3 *)(((int)stk + 32)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x54)); }
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x3C), *(Stk3 *)(((int)stk + 4)));
    t7 = screenOutcodeMargin((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 76))));
    t11 = screenOutcodeMargin((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 76))));
    return (((((unsigned short)t7 & (unsigned short)t11) == 0)) ? 1 : 0);
}
