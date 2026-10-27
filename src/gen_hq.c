/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bodyCreate(int, int, int, int, int, int, int, int, int, float, float);
int colliObjInit(int, int, int, int, int, float);
int nlAddVector(int, int);
int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int miniTargetInit(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t6;
    int t7;
    int t8;
    float u9;
    int t10;
    int t12;
    int t13;
    int t17;
    int t14;
    float u16;
    int t24;
    int t26;
    int t27;
    int t29;
    int t30;
    float u31;
    int t32;
    float u36;
    int t21;
    float u22;
    int t28;
    int stk[33];

    stk[22] = a8;
    stk[23] = a9;
    stk[24] = a10;
    *(unsigned int *)(((int)stk + 28)) = a5;
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
    t6 = *(int *)((a4 + 0x14));
    t7 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x0));
    t8 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x10));
    u9 = *(float *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x1C));
    t10 = *(int *)(((((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0) + 0x4));
    *(int *)((int)stk + 4) = (0x18 + a4);
    bodyCreate(t7, t10, t8, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), u9, 0.800000012f);
    t12 = *(int *)((a4 + 0x14));
    t13 = *(int *)(((((((t12 << 2) << 1) + t12) << 2) + 0x8C10C6B0) + 0x20));
    t17 = t13;
    if ((t13 & 2) != 0) {
        t14 = *(int *)((a4 + 0x14));
        u16 = *(float *)(((*(int *)(((((((t14 << 2) << 1) + t14) << 2) + 0x8C10C6B0) + 0x0))) + 0x4));
        *(float *)((a4 + 0x3AC)) = u16;
        *(unsigned int *)((a4 + 0x3B0)) = 0x1;
        *(unsigned int *)((a4 + 0x324)) = 0x1;
        t17 = 0x324;
        t21 = 0x1;
        u22 = u16;
    }
    t24 = *(int *)((a4 + 0x14));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((((((t24 << 2) << 1) + t24) << 2) + 0x8C10C6B0) + 0x8)));
    t26 = t17;
    t27 = t21;
    t29 = 0x0;
    t30 = (((((t6 << 2) << 1) + t6) << 2) + 0x8C10C6B0);
    u31 = u22;
    for (;;) {
        t32 = *(int *)((a4 + 0x14));
        if ((int)t29 >= (int)(*(int *)(((((((t32 << 2) << 1) + t32) << 2) + 0x8C10C6B0) + 0xC)))) {
            break;
        }
        t26 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x8)) = *(struct mv3 *)((0x33C + a4)); }
        t28 = t29;
        t28 = (t28 << 2);
        t28 = (t28 + t29);
        t28 = (t28 << 2);
        t27 = ((int)stk + 28);
        t28 = (t28 + (*(int *)(((int)stk + 32))));
        t27 = (t27 + 0x8);
        t26 = (nlAddVector(t27, t28));
        t26 = 0xC;
        u36 = *(float *)((t28 + t26));
        t27 = ((int)stk + 28);
        t30 = (t29 * 0x78);
        t27 = (t27 + 0x8);
        *(int *)((int)stk + 24) = ((0x3BC + a4) + t30);
        t26 = (colliObjInit(t27, 0x0, 0x0, 0x0, ((0x3BC + a4) + t30), u36));
        *(unsigned int *)((((0x3BC + a4) + t30) + 0x30)) = (*(int *)(((int)stk + 28)));
        t26 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((0x3BC + a4) + t30) + 0x24)) = *(struct mv3 *)((((int)stk + 28) + 0x8)); }
        t27 = 0x3BC;
        t26 = 0x10;
        t29 = (t29 + 0x1);
        t27 = (t27 + a4);
        u31 = (*(float *)((t28 + t26)));
        t27 = (t27 + t30);
        t26 = 0x5C;
        *(float *)((((0x3BC + a4) + t30) + t26)) = u31;
        *(unsigned int *)((t27 + 0x38)) = ((*(int *)((t27 + 0x38))) | 0x4);
    }
    return t26;
}
