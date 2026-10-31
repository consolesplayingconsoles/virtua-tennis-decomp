/* Straight-line functions with calls and guards (batch gen_wc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[6]; } Stk6;
int vecAnglesTo(int, int, Stk6);
Stk3 vecMake(float, float, float);
int lightAimFromMatrix(void);

int lightAimFromMatrix(void)
{
    int stk[13];
    register int t0;
    register int t7;
    register int t5;
    register int t6;

    t0 = *(int *)0x8C1891E8;
    t7 = t0;
    if ((t0 != 4) && ((t0 != 1) && ((t0 != 8) && ((t0 != 7) && ((t0 != 10) && (t0 != 14)))))) {
    } else {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)0x8C287918), (*(float *)0x8C28791C), (*(float *)0x8C287920));
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 0.0f);
        vecAnglesTo((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18), *(Stk6 *)((int)stk + 8));
        t5 = *(short *)(((int)stk + 36));
        *(unsigned short *)(((int)stk + 36)) = (-t5);
        t6 = *(short *)(((int)stk + 32));
        *(unsigned short *)(((int)stk + 32)) = (-t6);
        *(unsigned int *)0x8C38B828 = (unsigned short)(-t6);
        t7 = (-t5);
    }
    return t7;
}
