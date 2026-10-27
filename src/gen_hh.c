/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int hudBarDrawAlt(Stk3, Stk3, float, float);
int hudCallNumPut(int, Stk3, float, float);
int primSprSetSize(int, float, float);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int sprPutCropV(int, int, Stk3, float, float, float);
int shopItemTblInit(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);
int panelMenuItemPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int hudCallDeuceDraw(int a4, float f4, float f5);

int shopItemTblInit(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t3;
    int t7;
    int t8;
    int t4;
    int stk[263];

    stk[254] = a8;
    *(float *)(((int)stk + 16)) = f6;
    t0 = 0x0;
    for (;;) {
        t1 = (t0 + a4);
        t3 = (t0 + (((int)stk + 16) + 0x4));
        for (;;) { t4 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)(((t0 + a4) + 108)) < (unsigned int)t1) break; *(unsigned int *)t3 = t4; t3 = (t3 + 4); }
        t0 = (t0 + 0x6C);
        if ((unsigned int)t0 >= (unsigned int)0x3CC) {
            break;
        }
    }
    t7 = (((int)stk + 16) + 0x4);
    t8 = (((int)stk + 16) + 0x4);
    for (;;) {
        *(float *)(((t7 + 0xC) + 0x18)) = 0.0f;
        *(float *)(((t7 + 0xC) + 0x0)) = 0.0f;
        *(float *)((((t7 + 0x6C) + 0xC) + 0x18)) = 4.0f;
        *(float *)((((t7 + 0x6C) + 0xC) + 0x0)) = 4.0f;
        *(float *)(((t7 + 0xC) + 0x48)) = 4.0f;
        *(float *)(((t7 + 0xC) + 0x30)) = 4.0f;
        *(float *)((((t7 + 0xD8) + 0xC) + 0x18)) = (f4 + 4.0f);
        *(float *)((((t7 + 0xD8) + 0xC) + 0x0)) = (f4 + 4.0f);
        *(float *)((((t7 + 0x6C) + 0xC) + 0x48)) = (f4 + 4.0f);
        *(float *)((((t7 + 0x6C) + 0xC) + 0x30)) = (f4 + 4.0f);
        *(float *)((((t7 + 0xD8) + 0xC) + 0x48)) = (f4 + 8.0f);
        *(float *)((((t7 + 0xD8) + 0xC) + 0x30)) = (f4 + 8.0f);
        *(float *)(((t8 + 0xC) + 0x34)) = 0.0f;
        *(float *)(((t8 + 0xC) + 0x4)) = 0.0f;
        *(float *)((((t8 + 0x144) + 0xC) + 0x34)) = 4.0f;
        *(float *)((((t8 + 0x144) + 0xC) + 0x4)) = 4.0f;
        *(float *)(((t8 + 0xC) + 0x4C)) = 4.0f;
        *(float *)(((t8 + 0xC) + 0x1C)) = 4.0f;
        *(float *)((((t8 + 0x288) + 0xC) + 0x34)) = (f5 + 4.0f);
        *(float *)((((t8 + 0x288) + 0xC) + 0x4)) = (f5 + 4.0f);
        *(float *)((((t8 + 0x144) + 0xC) + 0x4C)) = (f5 + 4.0f);
        *(float *)((((t8 + 0x144) + 0xC) + 0x1C)) = (f5 + 4.0f);
        *(float *)((((t8 + 0x288) + 0xC) + 0x4C)) = (f5 + 8.0f);
        t7 = (t7 + 0x144);
        *(float *)((((t8 + 0x288) + 0xC) + 0x1C)) = (f5 + 8.0f);
        t8 = (t8 + 0x6C);
        if ((unsigned int)t7 >= (unsigned int)((((int)stk + 16) + 0x4) + 0x3CC)) {
            break;
        }
    }
    *(float *)(((0x3E8 + ((int)stk + 16)) + 0x0)) = ((*(float *)(((0x3E8 + ((int)stk + 16)) + 0x0))) - (float)(int)((f4 + 8.0f) / (1.0f + 1.0f)));
    *(float *)(((0x3E8 + ((int)stk + 16)) + 0x4)) = ((*(float *)(((0x3E8 + ((int)stk + 16)) + 0x4))) - (float)(int)((f5 + 8.0f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x3E8 + ((int)stk + 16))); }
    return (sprListPut((((int)stk + 16) + 0x4), 0x9, 0x0, *(Stk3 *)(((int)stk + 4)), (*(float *)(((int)stk + 16))), 1.0f, 1.0f));
}

int panelMenuItemPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t11;
    int t22;
    int t23;
    int stk[30];

    stk[19] = a8;
    stk[20] = a9;
    stk[21] = a10;
    *(float *)(((((int)stk + 28) + 0x30) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x4))) + 7.0f);
    if (a4 != 0) {
        t11 = a4;
        if (a4 != 1) {
        } else {
            *(float *)(((((int)stk + 28) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x0))) + 33.0f);
            *(float *)(((((int)stk + 28) + 0x30) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x4))) + 3.0f);
            *(unsigned int *)0x8C34050C = 0x300;
            primSprSetSize(0x8C3404E4, 0.449999988f, 0.449999988f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            sprPutAtAlpha(0x8C3404E4, *(Stk3 *)(((int)stk + 16)), f4);
            primSprSetSize(0x8C3404E4, 1.0f, 1.0f);
            *(float *)(((((int)stk + 28) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x0))) + 115.0f);
            *(float *)(((((int)stk + 28) + 0x30) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x4))) + -8.0f);
            *(unsigned int *)0x8C34064C = 0x300;
            primSprSetSize(0x8C340624, 0.449999988f, 0.449999988f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
            sprPutAtAlpha(0x8C340624, *(Stk3 *)(((int)stk + 4)), f4);
            t11 = (primSprSetSize(0x8C340624, 1.0f, 1.0f));
        }
        t23 = t11;
    } else {
        *(unsigned int *)0x8C3404BC = 0x300;
        *(float *)(((((int)stk + 28) + 0x30) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x0))) + 51.0f);
        *(float *)(((((int)stk + 28) + 0x30) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x30) + 0x4))) + 3.0f);
        primSprSetSize(0x8C340494, 0.449999988f, 0.449999988f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x30)); }
        sprPutAtAlpha(0x8C340494, *(Stk3 *)(((int)stk + 16)), f4);
        t22 = primSprSetSize(0x8C340494, 1.0f, 1.0f);
        *(unsigned int *)0x8C3404BC = 0x0;
        t23 = t22;
    }
    return t23;
}

int hudCallDeuceDraw(int a4, float f4, float f5)
{
    int t0;
    float u4;
    int t14;
    int stk[21];

    t0 = a4;
    if ((int)a4 > (int)0x63) {
        t0 = 0x63;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C099ECC)), f5);
    u4 = *(float *)0x8C099ED4;
    if ((int)t0 < (int)0x2) {
        *(float *)(((((int)stk + 28) + 0xC) + 0x8)) = u4;
        *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + (*(float *)0x8C099ED8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
        t14 = (sprPutCropV(0x8C33DC90, 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5));
    } else {
        *(float *)(((((int)stk + 28) + 0xC) + 0x8)) = u4;
        *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + (*(float *)0x8C099EE0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
        sprPutCropV(0x8C33DC90, 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
        *(float *)((((int)stk + 28) + 0x0)) = ((*(float *)((((int)stk + 28) + 0x0))) + (*(float *)0x8C099EE4));
        *(float *)((((int)stk + 28) + 0x8)) = u4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 28)); }
        t14 = (hudCallNumPut(t0, *(Stk3 *)(((int)stk + 4)), f4, f5));
    }
    return t14;
}
