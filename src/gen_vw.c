/* Straight-line functions with calls and guards (batch gen_vw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int decoSwingDraw(int, int, Stk3, float);
int primSprSetSize(int, float, float);
int sprPutAtAlpha(int, Stk3, float);
Stk3 vecMake(float, float, float);
int decoHeaderDrawB(int a4, int a5, Stk3 s);

int decoHeaderDrawB(int a4, int a5, Stk3 s)
{
    int stk[50];
    register float u0;
    register float u1;
    register float u2;

    stk[39] = s.w[0];
    stk[40] = s.w[1];
    stk[41] = s.w[2];
    *(unsigned int *)(((int)stk + 108)) = a4;
    *(unsigned int *)(((int)stk + 112)) = a5;
    u0 = *(float *)(((((int)stk + 104) + 0x34) + 0x8));
    u1 = *(float *)(((((int)stk + 104) + 0x34) + 0x4));
    u2 = *(float *)(((((int)stk + 104) + 0x34) + 0x0));
    *(int *)((int)stk + 100) = (((int)stk + 104) + 0xC);
    *(Stk3 *)((((int)stk + 104) + 0xC)) = vecMake((u2 + -17.0f), (u1 + 21.0f), (u0 + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 100) + 0x10)); }
    sprPutAtAlpha(0x8C341D58, *(Stk3 *)(((int)stk + 88)), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C342028, *(Stk3 *)(((int)stk + 76)), 0.349999994f);
    *(unsigned int *)(((int)stk + 104)) = 0x8C342078;
    primSprSetSize(0x8C342078, 1.0f, 20.0f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 20.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha((*(int *)(((int)stk + 104))), *(Stk3 *)(((int)stk + 64)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C3420C8, *(Stk3 *)(((int)stk + 52)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C342118, *(Stk3 *)(((int)stk + 40)), 0.349999994f);
    *(unsigned int *)(((int)stk + 104)) = 0x8C342168;
    primSprSetSize(0x8C342168, 1.0f, 46.0f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 46.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha((*(int *)(((int)stk + 104))), *(Stk3 *)(((int)stk + 28)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C3421B8, *(Stk3 *)(((int)stk + 16)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x8)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x8))) - 0.00999999978f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    return (decoSwingDraw((*(int *)(((int)stk + 108))), (*(int *)(((int)stk + 112))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}
