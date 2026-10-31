/* Straight-line functions with calls and guards (batch gen_xi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int fadeScreenDraw(int, int, int, int, float, float);
int sprInitPos(int, int, Stk3);
int thunk_FUN_8c0f41f0(int);
Stk3 vecMake(float, float, float);
int fadeDraw(int a4, int a5, int a6, int a7, float f4, float f5);
int texPicPut(float f4);
int thunk_FUN_8c0bcda0(int a4, int a5, int a6, int a7, float f4, float f5);

int fadeDraw(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(int *)0x8C1389FC;
    if (t0 != 0) {
        u0 = *(float *)0x8C287D64;
        if (t0 == 2) {
            t1 = *(int *)0x8C287D7C;
            if (t1 == 0) {
                *(unsigned int *)0x8C1389FC = 0x0;
                t2 = t0;
            } else {
                u1 = *(float *)0x8C287D80;
                t3 = t1;
                if ((float)t1 > u1) {
                    t3 = (int)u1;
                }
                thunk_FUN_8c0bcda0(t1, 0x8C1389FC, a6, a7, ((float)t3 / u1), u0);
                t1 = *(int *)0x8C287C60;
                *(unsigned int *)0x8C287D7C = ((*(int *)0x8C287D7C) - (((t1 == 0)) ? 1 : 0));
                t2 = (((t1 == 0)) ? 1 : 0);
            }
            t1 = t2;
        } else {
            thunk_FUN_8c0bcda0(t0, 0x8C1389FC, a6, a7, 1.0f, u0);
            t0 = *(int *)0x8C287C60;
            *(unsigned int *)0x8C287D7C = ((*(int *)0x8C287D7C) - (((t0 == 0)) ? 1 : 0));
            t1 = (((t0 == 0)) ? 1 : 0);
        }
        t0 = t1;
    }
    return t0;
}

int texPicPut(float f4)
{
    int stk[10];

    *(float *)(((int)stk + 20)) = f4;
    *(int *)((int)stk + 16) = (((int)stk + 20) + 0x4);
    *(Stk3 *)((((int)stk + 20) + 0x4)) = vecMake(320.0f, 240.0f, 9.99999975e-05f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    sprInitPos(0x8C340714, 0x21, *(Stk3 *)(((int)stk + 4)));
    *(float *)0x8C340740 = (*(float *)(((int)stk + 20)));
    *(float *)0x8C340724 = 40.0f;
    *(float *)0x8C340728 = 30.0f;
    return (thunk_FUN_8c0f41f0(0x8C340714));
}

int thunk_FUN_8c0bcda0(int a4, int a5, int a6, int a7, float f4, float f5)
{
    return fadeScreenDraw(a4, a5, a6, a7, f4, f5);
}
