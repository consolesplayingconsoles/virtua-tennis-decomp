/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int mtxGetPos(int, int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
void camWorldToView(Stk4 s);

void camWorldToView(Stk4 s)
{
    int stk[15];
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    R1012 = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287938);
    nlTranslate((*(float *)(((((int)stk + 4) + 0xC) + 0x0))), (*(float *)(((((int)stk + 4) + 0xC) + 0x4))), (*(float *)(((((int)stk + 4) + 0xC) + 0x8))));
    mtxGetPos((((int)stk + 4) + 0xC), ((((int)stk + 4) + 0xC) + 0x4), ((((int)stk + 4) + 0xC) + 0x8));
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
}
