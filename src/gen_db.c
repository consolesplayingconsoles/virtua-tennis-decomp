/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudRankIconPut(int, Stk3, Stk1);
int sprPutAt(int, Stk3);
int standBgDraw(int, int, int, int);
int standPanelDraw(int, int, int, int, Stk3, int, int);
int standTableDraw(int, int, int, int, int, int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
int standDraw(int a4, int a5);

int standDraw(int a4, int a5)
{
    int stk[50];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t26;
    register int t28;
    register int t31;
    register int t33;
    register int t0;
    register int t1;
    register int t11;
    register int t8;
    register int t40;
    register int t34;
    register int t35;
    register int t36;

    t2 = 0x8C185198;
    t3 = (((int)stk + 32) + 0x4);
    t4 = 0x0;
    t5 = (((int)stk + 32) + 0x4);
    for (;;) {
        if (a4 == 0) {
            *(unsigned int *)(((((int)stk + 32) + 0x4) + (t4 << 2))) = 0x1;
            t11 = t1;
        } else {
            t0 = (*(int *)((t2 + 0x0)));
            t1 = 0x8C0F7BAC;
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t0;
            t7 = (int)((int)t0 % (int)0x1A);
            t0 = t7;
            *(unsigned int *)((t2 + 0x0)) = t7;
            if ((int)t0 < (int)0x14) {
                *(unsigned int *)((t5 + 0x0)) = 0x1;
                t8 = 0x8C0F7BAC;
            } else {
                t1 = 0x0;
                *(unsigned int *)((t3 + 0x0)) = t1;
                t8 = t1;
            }
            t11 = t8;
        }
        t1 = t11;
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x4);
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        if ((int)t4 >= (int)0x5) {
            break;
        }
    }
    standBgDraw(t2, 0x1, t3, t4);
    standTableDraw(a4, 0x0, a5, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
    *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(98.0f, 20.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F680, *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 100.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    sprPutAt(0x8C33F6D0, *(Stk3 *)(((int)stk + 4)));
    if ((*(int *)0x8C287ADC) == 2) {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33F720, *(Stk3 *)(((int)stk + 16)));
    } else {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(312.0f, 30.0f, 0.100000001f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33FB30, *(Stk3 *)(((int)stk + 16)));
        *(float *)(((((int)stk + 32) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x2C) + 0x0))) + 147.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
        sprPutAt(0x8C33E7D0, *(Stk3 *)(((int)stk + 4)));
    }
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
    *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(42.0f, 410.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
    hudRankIconPut(a4, *(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12));
    t26 = 0x0;
    for (;;) {
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x2C);
        *(Stk3 *)((((int)stk + 32) + 0x2C)) = vecMake(218.0f, (float)(0x162 - (((t26 << 2) << 2) << 2)), 0.100000001f);
        *(unsigned int *)(((int)stk + 32)) = ((t26 << 2) + (((int)stk + 32) + 0x4));
        if ((int)t26 < (int)a4) {
            t28 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
            *(int *)((int)stk + 28) = t28;
            *(int *)((int)stk + 24) = a5;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
            t40 = (standPanelDraw(t26, 0x0, 0x1, 0x1, *(Stk3 *)(((int)stk + 12)), a5, t28));
        } else {
            if (t26 == a4) {
                t31 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
                *(int *)((int)stk + 28) = t31;
                *(int *)((int)stk + 24) = a5;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t34 = t31;
                t35 = 0x1;
                t36 = 0x1;
            } else {
                t33 = (*(int *)((((t26 << 2) + (((int)stk + 32) + 0x4)) + 0x0)));
                *(int *)((int)stk + 28) = t33;
                *(int *)((int)stk + 24) = a5;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 32) + 0x2C)); }
                t34 = t33;
                t35 = 0x0;
                t36 = 0x0;
            }
            t40 = (standPanelDraw(t26, t35, t36, 0x0, *(Stk3 *)(((int)stk + 12)), a5, t34));
        }
        t26 = (t26 + 0x1);
        if ((int)t26 >= (int)0x5) {
            break;
        }
    }
    return t40;
}
