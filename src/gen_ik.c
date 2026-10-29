/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuDebugLine(int, Stk3, float);
int cpuDebugLine2(int, float);
Stk3 vecMake(float, float, float);
int kmProcessVertexRenderState(int a4, int a5, int a6, int a7);
int ndbEditShowEntry(int a4);


int ndbEditShowEntry(int a4)
{
    int t7;
    float u20;
    int stk[34];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 40) + 0x1C)) = *(struct mv8 *)(0x8C10DA68); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 40) + 0xC)) = *(struct mv4 *)(0x8C10DA88); }
    *(float *)0x8C28886C = (*(float *)(((((unsigned char)(*(signed char *)((a4 + 0x0))) << 2) + (((int)stk + 40) + 0x1C)) + 0xC)));
    *(float *)0x8C288874 = (*(float *)(((((int)stk + 40) + 0xC) + ((unsigned char)(*(signed char *)((a4 + 0x1))) << 2))));
    *(float *)((((int)stk + 40) + 0x0)) = ((float)(*(signed char *)((a4 + 0x5))) * 5.87857151f);
    *(float *)((((int)stk + 40) + 0x4)) = 0.00999999978f;
    *(float *)((((int)stk + 40) + 0x8)) = ((-(((float)(unsigned char)(*(signed char *)((a4 + 0x6))) * 108.849998f) / 7.0f)) + -10.0f);
    t7 = 0xFFFF0000;
    if ((*(signed char *)((a4 + 0x7))) == 0) {
        t7 = 0xFF0000FF;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C28886C), 0.00999999978f, (*(float *)0x8C288874));
    cpuDebugLine2(t7, (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    cpuDebugLine(t7, *(Stk3 *)(((int)stk + 4)), (1.0f + 1.0f));
    *(float *)0x8C2895E4 = (*(float *)((((((int)stk + 40) + 0x1C) + ((*(signed char *)((a4 + 0x2))) << 2)) + 0xC)));
    *(float *)0x8C2895EC = (-(*(float *)(((((int)stk + 40) + 0xC) + ((unsigned char)(*(signed char *)((a4 + 0x3))) << 2)))));
    u20 = (*(float *)0x8C2895E4);
    u20 = u20 + (*(float *)0x8C0824D8) * (float)(*(signed char *)((a4 + 0x4)));
    *(float *)((((int)stk + 40) + 0x0)) = u20;
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C2895EC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C2895E4), (*(float *)0x8C0824DC), (*(float *)0x8C2895EC));
    cpuDebugLine2(0xFFFF00FF, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (cpuDebugLine(0xFFFF00FF, *(Stk3 *)(((int)stk + 4)), 1.0f));
}
