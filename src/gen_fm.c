/* Straight-line functions with calls and guards (batch gen_fm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int cursorBoxPut();
int menuIconPut(int, Stk3, float);
int menuIconPutRot(int, int, Stk3);
float nlCos(int);
float nlSin(int);
int primSprDraw(int, int, int, int, Stk3);
Stk3 vecMake(float, float, float);
int menuItemDraw0(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int menuItemDraw0(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float t2;
    float u10;
    int t19;
    int t23;
    float t30;
    float t38;
    int t39;
    int t40;
    float u48;
    float u53;
    float u72;
    int t80;
    int t84;
    float u88;
    int t92;
    int t101;
    int t126;
    float u8;
    float u12;
    float u13;
    int stk[49];

    stk[38] = a8;
    stk[39] = a9;
    stk[40] = a10;
    *(unsigned int *)(((int)stk + 48)) = a4;
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 48) + 0x14)) = *(struct mv6 *)(0x8C10E3C0); }
    *(unsigned short *)0x8C334D94 = ((*(short *)0x8C334D94) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D94));
    if (!(0.0f > t2)) {
        u8 = (nlCos((unsigned short)(*(short *)0x8C334D94)));
    } else {
        u8 = (-(nlCos((unsigned short)(*(short *)0x8C334D94))));
    }
    u10 = u8;
    if (!(u8 > 0.200000003f)) {
        u10 = 0.200000003f;
    }
    if (a5 != 0) {
        *(float *)(((int)stk + 52)) = 1.0f;
        u12 = u10;
        u13 = 1.0f;
    } else {
        *(float *)(((int)stk + 52)) = 0.5f;
        u12 = 0.0f;
        u13 = 0.5f;
    }
    *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 22.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
    menuIconPut(0x4, *(Stk3 *)(((int)stk + 32)), u13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 48) + 0x68)); }
    t19 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 20)));
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 36)) = vecMake((*(float *)(((((int)stk + 48) + 0x68) + 0x0))), (*(float *)(((((int)stk + 48) + 0x68) + 0x4))), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -9.99999975e-05f));
        t23 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    *(float *)(((((int)stk + 48) + 0x68) + 0x4)) = ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 48) + 0x68) + 0x0)) = ((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 48) + 0x68) + 0x8)) = ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) - 0.00100000005f);
    t30 = nlCos((unsigned short)(*(short *)0x8C1846AC));
    if (t30 > 0.0f) {
        *(unsigned short *)0x8C1846AC = ((*(short *)0x8C1846AC) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846AC = ((*(short *)0x8C1846AC) + 0x600);
    }
    t38 = nlCos((unsigned short)(*(short *)0x8C1846AE));
    t39 = *(short *)0x8C1846AE;
    t40 = 0x600;
    if (0.0f > t38) {
        t40 = 0x1400;
    }
    *(unsigned short *)0x8C1846AE = (t39 + t40);
    *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u48 = (*(float *)(((((int)stk + 48) + 0x2C) + 0x0)));
        u48 = u48 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846AE)));
        *(float *)(((((int)stk + 48) + 0x2C) + 0x0)) = u48;
    }
    if ((int)(*(int *)(((int)stk + 48))) > 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        u53 = 57.0f;
        u53 = u53 + 195.0f * u12;
        menuIconPutRot(0x7, (((((int)u53 & 0xFF) << 16) | ((((int)((*(float *)(((int)stk + 52))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 36)));
    }
    *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 122.5f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        *(float *)(((((int)stk + 48) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 48) + 0x2C) + 0x0))) - ((nlCos((unsigned short)(*(short *)0x8C1846AE))) * 1.0f));
    }
    *(float *)(((((int)stk + 48) + 0x2C) + 0x4)) = ((*(float *)(((((int)stk + 48) + 0x2C) + 0x4))) + 0.0f);
    if ((int)(*(int *)(((int)stk + 48))) < (int)0x6) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        u72 = 57.0f;
        u72 = u72 + 195.0f * u12;
        menuIconPutRot(0x8, (((((int)u72 & 0xFF) << 16) | ((((int)((*(float *)(((int)stk + 52))) * 255.0f) & 0xFF) << 16) << 8)) | 0xEC00), *(Stk3 *)(((int)stk + 36)));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 48) + 0x68)); }
    t80 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 36)));
    if (a5 != 0) {
        *(Stk3 *)(((int)stk + 36)) = vecMake((*(float *)(((((int)stk + 48) + 0x68) + 0x0))), (*(float *)(((((int)stk + 48) + 0x68) + 0x4))), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -9.99999975e-05f));
        t84 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    if ((int)(*(int *)(((int)stk + 48))) < (int)0x6) {
        u88 = *(float *)(((((int)stk + 48) + 0x68) + 0x8));
        *(float *)(((((int)stk + 48) + 0x68) + 0x8)) = (u88 - 0.00100000005f);
        *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 30.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 4.0f), (u88 - 0.00100000005f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        t92 = *(int *)(((((*(int *)(((int)stk + 48))) << 2) + (((int)stk + 32) + 0x24)) + 0x0));
        primSprDraw((((((t92 << 2) + t92) << 2) << 2) + 0x8C3349D4), 0x40, 0x40, (((((int)(u13 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFF00), *(Stk3 *)(((int)stk + 32)));
        *(float *)(((((int)stk + 48) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 48) + 0x2C) + 0x0))) + 17.0f);
        *(float *)(((((int)stk + 48) + 0x2C) + 0x4)) = ((*(float *)(((((int)stk + 48) + 0x2C) + 0x4))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        menuIconPut(0xB, *(Stk3 *)(((int)stk + 20)), u13);
    }
    t101 = *(int *)(((int)stk + 48));
    t126 = t101;
    if (t101 != 6) {
    } else {
        *(unsigned int *)(((int)stk + 48)) = (((int)stk + 48) + 0xC);
        *(float *)(((((int)stk + 48) + 0xC) + 0x0)) = (((nlSin((unsigned short)(*(short *)0x8C1846B0))) + 1.0f) / (1.0f + 1.0f));
        *(unsigned int *)(((int)stk + 56)) = (((int)stk + 48) + 0x10);
        *(float *)(((((int)stk + 48) + 0x10) + 0x0)) = (((nlSin(((unsigned short)(*(short *)0x8C1846B0) + 0x8000))) + 1.0f) / (1.0f + 1.0f));
        *(unsigned short *)0x8C1846B0 = ((*(short *)0x8C1846B0) + 0x100);
        *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 53.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -0.00999999978f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        primSprDraw(0x8C3349D4, 0x40, 0x40, (((((int)((((*(float *)(((*(int *)(((int)stk + 48))) + 0x0))) * u13)) * 255.0f) & 0xFF) << 16) << 8) | 0xFFFF00), *(Stk3 *)(((int)stk + 32)));
        *(float *)(((((int)stk + 48) + 0x2C) + 0x0)) = ((*(float *)(((((int)stk + 48) + 0x2C) + 0x0))) + 13.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        primSprDraw(0x8C334CF4, 0x40, 0x40, (((((int)((((*(float *)(((*(int *)(((int)stk + 48))) + 0x0))) * u13)) * 255.0f) & 0xFF) << 16) << 8) | 0xFFFF00), *(Stk3 *)(((int)stk + 20)));
        *(Stk3 *)((((int)stk + 48) + 0x2C)) = vecMake(((*(float *)(((((int)stk + 48) + 0x68) + 0x0))) + 29.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x4))) + 6.0f), ((*(float *)(((((int)stk + 48) + 0x68) + 0x8))) + -0.00100000005f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 48) + 0x2C)); }
        t126 = (primSprDraw(0x8C3345C4, 0x80, 0x80, (((((int)((((*(float *)(((*(int *)(((int)stk + 56))) + 0x0))) * u13)) * 255.0f) & 0xFF) << 16) << 8) | 0xFFFF00), *(Stk3 *)(((int)stk + 4))));
    }
    return t126;
}
