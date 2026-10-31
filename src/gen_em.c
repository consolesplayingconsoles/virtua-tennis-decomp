/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlResetBackColorZ(int, int, int, float);
int resCautionShow(int);
int sprPutAt(int, Stk3);
int msgWinPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int msgWinPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t16;
    int t8;
    int t9;
    int t10;
    int t12;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(unsigned int *)(((int)stk + 16)) = a5;
    nlResetBackColorZ(0x0, 0x0, 0x0, f4);
    if ((*(int *)(((a4 << 2) + 0x8C1DC590))) == 0) {
        t16 = (resCautionShow(a4));
    } else {
        if ((((int)(*(int *)0x8C38BA50) >= (int)0xF) && (t8 = *(int *)0x8C1DC648, t8 == 0)) || ((t9 = *(int *)(((int)stk + 16)), t9 == 1) && (t10 = *(int *)0x8C1DC648, t10 == 0))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t12 = (sprPutAt((((((a4 << 2) + a4) << 2) << 2) + 0x8C423BD8), *(Stk3 *)(((int)stk + 4))));
        } else {
            t12 = t9;
        }
        t16 = t12;
    }
    return t16;
}
