/* Straight-line functions with calls and guards (batch gen_qa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bodyCreate(int, int, int, int, int, int, int, int, int, float, float);
int colliObjInit(int, int, int, int, int, float);
int nlAddVector(int, int);
int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t6;
    register int t7;
    register int t8;
    register float u9;
    register int t10;
    register int t12;
    register int t13;
    register int t18;
    register int t22;
    register int t27;
    register int t30;
    register float u32;
    int stk[33];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int R14;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    stk[22] = a8;
    stk[23] = a9;
    stk[24] = a10;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 28)) = R5;
    *(unsigned short *)(((((int)stk + 28) + 0x14) + 0x4)) = 0x0;
    *(unsigned short *)(((((int)stk + 28) + 0x14) + 0x2)) = 0x0;
    *(unsigned short *)(((((int)stk + 28) + 0x14) + 0x0)) = 0x0;
    *(unsigned char *)((((int)stk + 20) + 0x0)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x0)));
    *(unsigned char *)((((int)stk + 20) + 0x1)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x1)));
    *(unsigned char *)((((int)stk + 20) + 0x2)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x2)));
    *(unsigned char *)((((int)stk + 20) + 0x3)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x3)));
    *(unsigned char *)((((int)stk + 20) + 0x4)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x4)));
    *(unsigned char *)((((int)stk + 20) + 0x5)) = (*(signed char *)(((((int)stk + 28) + 0x14) + 0x5)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x44)); }
    t6 = *(int *)((R4 + 0x14));
    t7 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x0));
    t8 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x10));
    u9 = *(float *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x1C));
    t10 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x4));
    *(int *)((int)stk + 4) = (0x18 + R4);
    bodyCreate(t7, t10, t8, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), u9, 0.800000012f);
    t12 = *(int *)((R4 + 0x14));
    t13 = *(int *)(((((((t12 << 2) << 1) + t12) << 2) + 0x8C10C6B0) + 0x20));
    R0 = (t13);
    R11 = (0x8C10C6B0);
    R14 = (R4);
    if (((t13 & 2) == 0)) goto L_8C037EBA;
    t18 = *(int *)((R14 + 0x14));
    *(float *)((R14 + 0x3AC)) = (*(float *)(((*(int *)(((((((t18 << 2) << 1) + t18) << 2) + R11) + 0x0))) + 0x4)));
    *(unsigned int *)((R14 + 0x3B0)) = 0x1;
    *(unsigned int *)((R14 + 0x324)) = 0x1;
    R0 = (0x324);
    L_8C037EBA:;
    t22 = *(int *)((R14 + 0x14));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((((((t22 << 2) << 1) + t22) << 2) + R11) + 0x8)));
    R12 = (0x0);
    R8 = (0x78);
    R9 = (0x4);
    L_8C037F4C:;
    t27 = *(int *)((R14 + 0x14));
    if (((int)R12 < (int)(*(int *)(((((((t27 << 2) << 1) + t27) << 2) + R11) + 0xC))))) goto L_8C037ED4;
    return R0;
    L_8C037ED4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x8)) = *(struct mv3 *)((0x33C + R14)); }
    t30 = *(int *)(((int)stk + 32));
    nlAddVector((((int)stk + 28) + 0x8), ((((R12 << 2) + R12) << 2) + t30));
    u32 = *(float *)((((((R12 << 2) + R12) << 2) + t30) + 0xC));
    *(int *)((int)stk + 24) = ((0x3BC + R14) + (R12 * R8));
    colliObjInit((((int)stk + 28) + 0x8), 0x0, 0x0, 0x0, ((0x3BC + R14) + (R12 * R8)), u32);
    *(unsigned int *)((((0x3BC + R14) + (R12 * R8)) + 0x30)) = (*(int *)(((int)stk + 28)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((0x3BC + R14) + (R12 * R8)) + 0x24)) = *(struct mv3 *)((((int)stk + 28) + 0x8)); }
    *(float *)((((0x3BC + R14) + (R12 * R8)) + 0x5C)) = (*(float *)((((((R12 << 2) + R12) << 2) + t30) + 0x10)));
    *(unsigned int *)((((0x3BC + R14) + (R12 * R8)) + 0x38)) = ((*(int *)((((0x3BC + R14) + (R12 * R8)) + 0x38))) | R9);
    R0 = (0x5C);
    R12 = ((R12 + 0x1));
    goto L_8C037F4C;
}

