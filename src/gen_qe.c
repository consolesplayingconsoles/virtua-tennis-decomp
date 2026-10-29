/* Straight-line functions with calls and guards (batch gen_qe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cursorBoxPut(int, Stk3, float, float, float);
int menuIconPut(int, Stk3, float);
int menuIconPutRot(int, int, Stk3);
float nlCos(int);
Stk3 vecMake(float, float, float);
int menuItemDraw2(int a4, int a5, Stk3 s);

int menuItemDraw2(int a4, int a5, Stk3 s)
{
    int stk[36];
    register float t2;
    register float u10;
    register float u15;
    register float u16;
    register float u17;
    register float u27;
    register int t28;
    register float u29;
    register float u30;
    register float u41;
    register float u42;
    register float u51;
    register float u52;
    register float u61;
    register float u62;
    register float t72;
    register float t80;
    register int t81;
    register int t82;
    register float u91;
    register float u92;
    register float u93;
    register float u97;
    register float u102;
    register float u109;
    register float u110;
    register float u111;
    register float u115;
    register int t124;
    register float u121;
    register float u8;
    register float u12;
    register float u13;

    stk[25] = s.w[0];
    stk[26] = s.w[1];
    stk[27] = s.w[2];
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned short *)0x8C334D9A = ((*(short *)0x8C334D9A) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D9A));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C334D9A)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C334D9A))));
    }
    u10 = u8;
    if (!(u8 > 0.200000003f)) {
        u10 = 0.200000003f;
    }
    if (a5 != 0) {
        *(float *)(((int)stk + 36)) = 1.0f;
        u12 = u10;
        u13 = 1.0f;
    } else {
        *(float *)(((int)stk + 36)) = 0.5f;
        u12 = 0.0f;
        u13 = 0.5f;
    }
    u15 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u16 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    u17 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u15 + 30.0f), (u17 + 5.0f), (u16 + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
    menuIconPut(0xC, *(Stk3 *)(((int)stk + 16)), u13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 120.0f, u13);
    *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
    cursorBoxPut(0x1, *(Stk3 *)((int)stk + 20), u12, 120.0f, 1.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 32) + 0x44) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) - 0.00100000005f);
    u27 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    t28 = *(int *)(((int)stk + 32));
    if (t28 != 0) {
        if (t28 != 1) {
            if (t28 != 2) {
                if (t28 != 3) {
                } else {
                    u29 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
                    u30 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
                    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
                    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u29 + 35.0f), (u27 + 5.0f), (u30 + -0.00100000005f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0xF, *(Stk3 *)(((int)stk + 16)), u13);
                    *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x0))) + 40.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                    menuIconPut(0x10, *(Stk3 *)(((int)stk + 20)), u13);
                }
            } else {
                u41 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
                u42 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
                *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
                *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u41 + 56.0f), (u27 + 5.0f), (u42 + -0.00100000005f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
                menuIconPut(0x10, *(Stk3 *)(((int)stk + 20)), u13);
            }
        } else {
            u51 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
            u52 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
            *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
            *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u51 + 45.0f), (u27 + 5.0f), (u52 + -0.00100000005f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
            menuIconPut(0xE, *(Stk3 *)(((int)stk + 16)), u13);
        }
    } else {
        u61 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
        u62 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
        *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u61 + 57.0f), (u27 + 5.0f), (u62 + -0.00100000005f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        menuIconPut(0xD, *(Stk3 *)(((int)stk + 16)), u13);
    }
    t72 = nlCos((unsigned short)(*(short *)0x8C1846B6));
    if (t72 > 0.0f) {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846B6 = ((*(short *)0x8C1846B6) + 0x600);
    }
    t80 = nlCos((unsigned short)(*(short *)0x8C1846B8));
    t81 = *(short *)0x8C1846B8;
    t82 = 0x600;
    if (0.0f > t80) {
        t82 = 0x1400;
    }
    *(unsigned short *)0x8C1846B8 = (t81 + t82);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x44)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 20)), 1.0f, 120.0f, u13);
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x44) + 0x0))), (*(float *)(((((int)stk + 32) + 0x44) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x44) + 0x8))) + -9.99999975e-05f));
        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 20), u12, 120.0f, 1.0f);
    }
    u91 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u92 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    u93 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u91 + 10.0f), (u93 + 4.0f), (u92 + -0.00100000005f));
    if (a5 != 0) {
        u97 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u97 = u97 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B8)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u97;
    }
    if ((int)(*(int *)(((int)stk + 32))) > 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u102 = 57.0f;
        u102 = u102 + 195.0f * u12;
        menuIconPutRot(0x7, ((((0xFF & (int)u102) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 20)));
    }
    u109 = *(float *)(((((int)stk + 32) + 0x44) + 0x0));
    u110 = *(float *)(((((int)stk + 32) + 0x44) + 0x8));
    u111 = *(float *)(((((int)stk + 32) + 0x44) + 0x4));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x8);
    *(Stk3 *)((((int)stk + 32) + 0x8)) = vecMake((u109 + 120.0f), (u111 + 4.0f), (u110 + -0.00100000005f));
    if (a5 != 0) {
        u115 = (*(float *)(((((int)stk + 32) + 0x8) + 0x0)));
        u115 = u115 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B6)));
        *(float *)(((((int)stk + 32) + 0x8) + 0x0)) = u115;
    }
    *(float *)(((((int)stk + 32) + 0x8) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x8) + 0x4))) + 0.0f);
    t124 = 0x4;
    if ((int)(*(int *)(((int)stk + 32))) < (int)0x3) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x8)); }
        u121 = 57.0f;
        u121 = u121 + 195.0f * u12;
        t124 = (menuIconPutRot(0x8, ((((0xFF & (int)u121) << 16) | ((((int)((*(float *)(((int)stk + 36))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 20))));
    }
    return t124;
}
