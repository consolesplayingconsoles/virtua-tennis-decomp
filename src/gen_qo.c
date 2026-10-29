/* Straight-line functions with calls and guards (batch gen_qo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlAddVector(int, int);
int nlScaleVector(int, int, float);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
Stk3 vecMake(float, float, float);
void bodyGroundFriction(int a4, int a5, int a6, int a7, int a8, float f4, float f5);

void bodyGroundFriction(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    int stk[37];

    stk[28] = a8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x18)) = *(struct mv3 *)(0x8C1016D4); }
    t0 = (((int)stk + 32) + 0x18);
    t1 = 0x8C1016D4;
    t2 = a4;
    t3 = 0x0;
    t4 = 0x0;
    u0 = f4;
    u1 = f5;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0x30C)))) {
            break;
        }
        t1 = t4;
        t0 = a4;
        u1 = f4;
        t0 = (t0 + 0xC);
        u2 = 0.0f;
        *(unsigned int *)(((int)stk + 36)) = ((((t4 << 1) + t1) << 2) + t0);
        u0 = (*(float *)((((((t4 << 1) + t1) << 2) + t0) + 0x4)));
        u1 = (u1 - u0);
        if (!(u2 > u1)) {
            u2 = u1;
        } else {
            u2 = (-f4);
            u2 = (u2 + u0);
        }
        u3 = (*(float *)((a4 + 0x310)));
        if (u3 > u2) {
            t5 = t4;
            t5 = (t5 << 1);
            t5 = (t5 + t4);
            t5 = (t5 << 2);
            *(unsigned int *)(((int)stk + 40)) = t5;
            t6 = a4;
            t1 = 0x8C015EEA;
            t5 = (t5 + (0x18C + a4));
            t6 = (t6 + 0xC);
            u0 = (*(float *)((t5 + 0x0)));
            u1 = 0.0f;
            t6 = (t6 + (*(int *)(((int)stk + 40))));
            u2 = (*(float *)((t6 + 0x8)));
            u4 = ((*(float *)((t5 + 0x8))) - u2);
            u2 = (*(float *)((t6 + 0x0)));
            u0 = (u0 - u2);
            *(int *)((int)stk + 28) = (((int)stk + 32) + 0xC);
            *(Stk3 *)((((int)stk + 32) + 0xC)) = vecMake(u0, u1, u4);
            u2 = (*(float *)(((((int)stk + 32) + 0xC) + 0x0)));
            u3 = (*(float *)(((int)stk + 56)));
            t3 = (t3 + 0x1);
            u3 = (u3 + u2);
            *(float *)(((int)stk + 56)) = u3;
            u2 = (*(float *)(((((int)stk + 32) + 0xC) + 0x8)));
            u3 = (*(float *)(((int)stk + 64)));
            u3 = (u3 + u2);
            *(float *)(((int)stk + 64)) = u3;
        } else {
            t5 = t0;
            t6 = t1;
            t7 = t2;
            u2 = u0;
            u3 = u1;
        }
        u0 = u2;
        u1 = u3;
        t0 = t5;
        t4 = (t4 + 0x1);
        t1 = t6;
        t2 = t7;
    }
    if (t3 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x24);
        vecDiv(t2, a5, a6, a7, *(int *)((int)stk + 16), (float)t3);
    }
    nlScaleVector(a4, a4, (*(float *)((a4 + 0x314))));
    nlAddVector((((int)stk + 32) + 0x18), a4);
    *(float *)((a4 + 0x4)) = 0.0f;
    t0 = t3;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x30C)))) {
            break;
        }
        t0 = t1;
        t2 = 0x18C;
        t0 = (t0 << 1);
        t0 = (t0 + t1);
        t2 = (t2 + a4);
        t0 = (t0 << 2);
        t2 = (t2 + t0);
        *(unsigned int *)(((int)stk + 32)) = t2;
        t2 = ((int)stk + 20);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
        t2 = ((int)stk + 8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(((a4 + 0xC) + t0)); }
        t3 = (*(int *)(((int)stk + 32)));
        *(int *)((int)stk + 4) = t3;
        vecAdd(0x0, 0x0, 0x0, 0x0, t3);
        t2 = (*(int *)(((int)stk + 32)));
        t1 = (t1 + 0x1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 32) + 0x50) + 0x0)))) = *(struct mv3 *)((((int)stk + 32) + 0x18)); }
}
