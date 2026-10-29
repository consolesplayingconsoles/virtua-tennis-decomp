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
