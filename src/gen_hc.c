/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cursorBoxPut(int, Stk3, float, float, float);
int menuIconPut(int, Stk3, float);
float nlCos(int);
int primSprDraw(int, int, int, int, Stk3);
Stk3 vecMake(float, float, float);
int menuItemDraw1(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int menuItemDraw1(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float t2;
    float u10;
    float u13;
    float u14;
    float t31;
    float t39;
    int t40;
    int t41;
    float u78;
    float u88;
    int t98;
    float u8;
    int t49;
    int t59;
    int stk[35];

    stk[24] = a8;
    stk[25] = a9;
    stk[26] = a10;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned short *)0x8C334D96 = ((*(short *)0x8C334D96) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D96));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C334D96)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C334D96))));
    }
    u10 = u8;
    if (!(u8 > 0.200000003f)) {
        u10 = 0.200000003f;
    }
    u13 = 0.0f;
    u14 = 0.5f;
    if (a5 != 0) {
        u13 = u10;
        u14 = 1.0f;
    }
    *(Stk3 *)((((int)stk + 32) + 0x4)) = vecMake(((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 46.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
    menuIconPut(0x1, *(Stk3 *)(((int)stk + 16)), u14);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 120.0f, u14);
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 20), u13, 120.0f, 1.0f);
    }
    *(float *)(((((int)stk + 32) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 32) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 32) + 0x40) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) - 0.00100000005f);
    t31 = nlCos((unsigned short)(*(short *)0x8C1846B2));
    if (t31 > 0.0f) {
        *(unsigned short *)0x8C1846B2 = ((*(short *)0x8C1846B2) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846B2 = ((*(short *)0x8C1846B2) + 0x600);
    }
    t39 = nlCos((unsigned short)(*(short *)0x8C1846B4));
    t40 = *(short *)0x8C1846B4;
    t41 = 0x600;
    if (0.0f > t39) {
        t41 = 0x1400;
    }
    *(unsigned short *)0x8C1846B4 = (t40 + t41);
    *(Stk3 *)((((int)stk + 32) + 0x4)) = vecMake(((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 39.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 6.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if ((*(int *)(((int)stk + 32))) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t49 = ((((0xFF & (int)(u14 * 255.0f)) << 16) << 8) | 0xFFFF00);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t49 = ((((0xFF & (int)(u14 * 128.0f)) << 16) << 8) | 0xFFFFFF);
    }
    primSprDraw(0x8C3344D4, 0x80, 0x80, t49, *(Stk3 *)(((int)stk + 20)));
    *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x4) + 0x0))) + 44.0f);
    if ((*(int *)(((int)stk + 32))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t59 = ((((0xFF & (int)(u14 * 255.0f)) << 16) << 8) | 0xFFFF00);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t59 = ((((0xFF & (int)(u14 * 128.0f)) << 16) << 8) | 0xFFFFFF);
    }
    primSprDraw(0x8C334524, 0x80, 0x80, t59, *(Stk3 *)(((int)stk + 20)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 8)), 1.0f, 120.0f, u14);
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        cursorBoxPut(0x1, *(Stk3 *)((int)stk + 20), u13, 120.0f, 1.0f);
    }
    *(Stk3 *)((((int)stk + 32) + 0x4)) = vecMake(((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u78 = (*(float *)(((((int)stk + 32) + 0x4) + 0x0)));
        u78 = u78 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B4)));
        *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = u78;
    }
    *(Stk3 *)((((int)stk + 32) + 0x4)) = vecMake(((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 122.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u88 = (*(float *)(((((int)stk + 32) + 0x4) + 0x0)));
        u88 = u88 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B2)));
        *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = u88;
    }
    *(float *)(((((int)stk + 32) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x4) + 0x4))) + 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    t98 = (cursorBoxPut(0x0, *(Stk3 *)(((int)stk + 20)), 1.0f, 120.0f, u14));
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        t98 = (cursorBoxPut(0x1, *(Stk3 *)((int)stk + 20), u13, 120.0f, 1.0f));
    }
    return t98;
}
