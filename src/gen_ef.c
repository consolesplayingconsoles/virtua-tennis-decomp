/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void colliObjInit(int a4, int a5, int a6, int a7, int a8, float f4);

void colliObjInit(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[41];

    stk[32] = a8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(a4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(0x8C1016D4); }
    *(float *)((((int)stk + 4) + 0x3C)) = f4;
    *(unsigned int *)((((int)stk + 4) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 4) + 0x34)) = 0xFFFFFFFF;
    *(unsigned int *)((((int)stk + 4) + 0x30)) = 0xFFFFFFFF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x50)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x44)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x60)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x6C)) = *(struct mv3 *)(0x8C1016D4); }
    *(float *)((((int)stk + 4) + 0x5C)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x40)) = 1.0f;
    t1 = ((int)stk + 4);
    t2 = (((int)stk + 4) + 120);
    t3 = (*(int *)(((((int)stk + 4) + 0x7C) + 0x0)));
    for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)t2 < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
}
