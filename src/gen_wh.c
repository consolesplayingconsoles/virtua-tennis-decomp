/* Straight-line functions with calls and guards (batch gen_wh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
int camWorldToView(Stk4);
int screenOutcodeMargin(int, int, int);
int screenProject(int, int, Stk3);
int screenSegVisible(int a4, Stk6 s);

int screenSegVisible(int a4, Stk6 s)
{
    int stk[40];
    register int t7;
    register int t11;

    stk[26] = s.w[0];
    stk[27] = s.w[1];
    stk[28] = s.w[2];
    stk[29] = s.w[3];
    stk[30] = s.w[4];
    stk[31] = s.w[5];
    *(unsigned int *)(((int)stk + 76)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 60) + 0x2C)); }
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x14);
    *(int *)((int)stk + 44) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 44)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 32) + 0x24), (((int)stk + 32) + 0x28), *(Stk3 *)(((int)stk + 32)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x54)); }
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x14);
    *(int *)((int)stk + 16) = (((int)stk + 60) + 0x14);
    camWorldToView(*(Stk4 *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 60) + 0x14)); }
    screenProject((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x3C), *(Stk3 *)(((int)stk + 4)));
    t7 = screenOutcodeMargin((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 76))));
    t11 = screenOutcodeMargin((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 76))));
    return (((((unsigned short)t7 & (unsigned short)t11) == 0)) ? 1 : 0);
}
