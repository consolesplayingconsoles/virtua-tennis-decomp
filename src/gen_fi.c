/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int colliObjInit(int, int, int, int, int, float);
int cpuDebugLine(int, Stk3, float);
int cpuDebugLine2(int, float);
int ndbKeyEqual(int, int);
int nlAddVector(int, int);
int nlLocate(int, int);
float nlScalor(int);
int nlsndSeqRequest(int);
int seBallSpeed(int, int, int, int, int, int, int, int, int, int);
int set_event(int, int);
int sprPutAtAlpha(int, int, int, int, Stk3, float);
Stk3 vecMake(float, float, float);
int ndbEditDrawMatches(int a4);
int miniLobTargetSpawn(int a4);
void seShotHit2(int a4, int a5);
int menuTextNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int ndbEditDrawMatches(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    float u14;
    float u18;
    float u19;
    float u25;
    int t27;
    float u29;
    int t5;
    int t33;
    int stk[26];

    *(unsigned int *)(((int)stk + 40)) = a4;
    t0 = *(int *)0x8C301938;
    nlLocate(0xA, 0x14);
    *(unsigned int *)0x8C301948 = 0x0;
    t2 = 0x8C082500;
    t3 = 0x0;
    t4 = t0;
    t6 = 0x8CA80000;
    for (;;) {
        if (t4 == 0) {
            break;
        }
        t2 = (ndbKeyEqual((*(int *)(((int)stk + 40))), t6));
        if (t2 != 0) {
            t2 = (*(signed char *)((t6 + 0x5)));
            t3 = t2;
            t2 = 0x8C082630;
            *(float *)(((((int)stk + 40) + 0x4) + 0x0)) = ((float)t3 * (*(float *)((t2 + 0x0))));
            t2 = (*(signed char *)((t6 + 0x7)));
            t3 = (unsigned char)t2;
            t2 = 0x4;
            u14 = 0.200000003f;
            u14 = u14 + 0.100000001f * (float)t3;
            *(float *)(((((int)stk + 40) + 0x4) + t2)) = u14;
            t2 = (*(signed char *)((t6 + 0x6)));
            t3 = (unsigned char)t2;
            t2 = 0x8C082634;
            u18 = *(float *)((t2 + 0x0));
            t2 = 0x8C082638;
            u19 = *(float *)((t2 + 0x0));
            t2 = 0x8;
            *(float *)(((((int)stk + 40) + 0x4) + t2)) = ((-(((float)t3 * u18) / u19)) + -10.0f);
            t2 = (*(signed char *)((t6 + 0x7)));
            if (t2 == 0) {
                t5 = 0x800000A0;
            } else {
                t5 = 0x80A00000;
            }
            t3 = 0x8C0F7DAC;
            t2 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x4)); }
            t2 = 0xAF0;
            u25 = *(float *)((0x8C287D84 + t2));
            t2 = (*(signed char *)((t6 + 0x7)));
            t3 = (unsigned char)t2;
            t2 = 0xAE8;
            t27 = t3;
            t3 = 0x8C015EEA;
            u29 = 0.200000003f;
            u29 = u29 + 0.100000001f * (float)t27;
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)((0x8C287D84 + t2))), u29, u25);
            t2 = (cpuDebugLine2(t5, 1.0f));
            t3 = 0x8C0F7DAC;
            t2 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x4)); }
            t2 = (cpuDebugLine(t5, *(Stk3 *)(((int)stk + 4)), 1.0f));
            t3 = (*(int *)0x8C301948);
            t3 = (t3 + 0x1);
            *(unsigned int *)0x8C301948 = t3;
            t33 = t3;
        }
        t4 = (t4 - 1);
        t3 = t33;
        t6 = (t6 + 0x8);
    }
    return t2;
}

int miniLobTargetSpawn(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t18;
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = set_event(0x118, 0x8C039788);
    *(unsigned int *)((t0 + 0x110)) = 0x0;
    t1 = *(int *)0x8C2FBEF0;
    t2 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x28)) = ((int)((int)((*(int *)((t1 + 0x28))) + 0x1) % (int)((*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x58))) * (*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x5C))))));
    t7 = *(int *)0x8C2FBEF0;
    t8 = *(int *)(((int)stk + 8));
    t10 = *(int *)((t7 + 0x28));
    t11 = *(int *)(((0x8C10BB08 + ((*(int *)((t7 + 0x4))) * 0x64)) + 0x60));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t8 << 1) + t8) << 2) + 0x8C2FC0D4)) = *(struct mv3 *)((t11 + (t10 * 0x1C))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + t0)) = *(struct mv3 *)((t11 + (t10 * 0x1C))); }
    *(float *)((t0 + 0x114)) = 0.0f;
    t12 = *(int *)0x8C10C700;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)((0x104 + t0)); }
    nlAddVector((((int)stk + 8) + 0x4), t12);
    colliObjInit((((int)stk + 8) + 0x4), 0x0, 0x0, 0x0, (0x14 + t0), (*(float *)((t12 + 0xC))));
    *(unsigned int *)((t0 + 0x44)) = ((*(int *)(((int)stk + 8))) + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    *(float *)((t0 + 0x70)) = (*(float *)((t12 + 0x10)));
    t18 = *(int *)(((t0 + 0x14) + 0x38));
    *(unsigned int *)(((t0 + 0x14) + 0x38)) = (t18 | 0x4);
    return (t18 | 0x4);
}

void seShotHit2(int a4, int a5)
{
    float u7;
    int t10;
    int t8;
    int t13;
    float t16;
    int t29;
    float u31;
    float u32;
    int t1;
    int t21;
    int t36;
    int t41;
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    if (((*(int *)0x8C38BA70) != 0) && (t1 = *(int *)0x8C38BA74, t1 != 0)) {
        u7 = *(float *)(((*(int *)(((int)stk + 8))) + 0xAF0));
        t10 = 0x1;
        if (u7 > 0.0f) {
        } else {
            t8 = 0x0;
            if (0.0f > u7) {
                t8 = 0xFFFFFFFF;
            }
            t10 = t8;
        }
        t13 = 0x0;
        if ((*(int *)0x8C402C0C) != t10) {
            t13 = 0x1;
        }
        t16 = nlScalor(((*(int *)(((int)stk + 4))) + 0x24));
        if (t16 > 4.0f) {
            if (t13 == 0) {
                t21 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x4)));
            } else {
                t21 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x24)));
            }
            nlsndSeqRequest(t21);
        }
        seBallSpeed(0x0, (*(int *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
        t29 = *(int *)0x8C402C04;
        u31 = *(float *)(((*(int *)(((int)stk + 4))) + 0x2C));
        u32 = (-u31);
        if (!(0.0f > u31)) {
            u32 = u31;
        }
        if (4.0f > u32) {
            if (t13 == 0) {
                t36 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0xC)));
            } else {
                t36 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x2C)));
            }
            nlsndSeqRequest(t36);
        } else {
            if (t13 == 0) {
                t41 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x10)));
            } else {
                t41 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x30)));
            }
            nlsndSeqRequest(t41);
        }
    }
}

int menuTextNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int t2;
    int t5;
    int t8;
    int t12;
    int t3;
    int t4;
    float u6;
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
        t0 = *(int *)0x8C10EF2C;
        t12 = (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
    } else {
        t2 = 0x8C092F70;
        t5 = a4;
        for (;;) {
            if (t5 == 0) {
                break;
            }
            t2 = 0xA;
            t2 = ((int)((int)t5 % (int)t2));
            t4 = t2;
            t3 = 0x8C0F7DAC;
            t2 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x24)); }
            t2 = t4;
            t2 = (t2 << 2);
            t8 = *(int *)((0x8C10EF2C + t2));
            t3 = t8;
            t2 = (sprPutAtAlpha((((((t8 << 2) + t3) << 2) << 2) + 0x8C33506C), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
            t3 = 0x8C0F7A50;
            t5 = (t5 - t4);
            t2 = 0xA;
            t2 = ((int)((int)t5 / (int)t2));
            u6 = (*(float *)(((((int)stk + 16) + 0x24) + 0x0)));
            t5 = t2;
            u6 = (u6 - 17.0f);
            *(float *)(((((int)stk + 16) + 0x24) + 0x0)) = u6;
        }
        t12 = t2;
    }
    return t12;
}
