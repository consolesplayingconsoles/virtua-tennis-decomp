/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int nlLineSetThickness(float);
int nlSingleLine(int, int, int);
int cpuDebugLine2(int a4, Stk4 s, float f4);

int cpuDebugLine2(int a4, Stk4 s, float f4)
{
    int stk[15];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    stk[6] = s.w[3];
    *(unsigned int *)(((int)stk + 4)) = a4;
    nlLineSetThickness(f4);
    nlSingleLine((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (*(int *)(((int)stk + 4))));
    return (nlLineSetThickness(1.0f));
}
