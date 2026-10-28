/* Straight-line functions with calls and guards (batch gen_ja): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int circuitDrawBar(float);
int circuitNumDraw(int, int, int, float, float, float);
int nlDispStripTrnsl(int, int);
int primLineH(int, int, int, int, int, int, int, int, int, int);
int primLineV(int, int, int, int, int, int, int, int, int, int);
int primRectInc(int, int, int, int, int, int, int, int);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
Stk3 vecMake(float, float, float);
int circuitDrawMatchInfo(void);

int circuitDrawMatchInfo(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t8;
    int t52;
    int t54;
    int t61;
    int t63;
    int t66;
    int t71;
    float u88;
    int t91;
    int stk[40];

    *(unsigned int *)(((int)stk + 44)) = 0x0;
    t0 = *(int *)0x8C2FBE1C;
    t1 = *(int *)0x8C2FBC50;
    t2 = *(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x4));
    t4 = 0x0;
    if (((*(int *)(((((((t2 << 2) << 2) + t2) << 2) + 0x8C108E5C) + 0x40))) & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 44)) = 0x1;
        t4 = 0xFFFFFFE8;
    }
    t6 = *(int *)(((((((t0 << 2) + t0) << 2) << 1) + t1) + 0x4));
    t8 = 0x8C109CE8;
    if (((*(int *)((0x40 + (((((t6 << 2) << 2) + t6) << 2) + 0x8C108E5C)))) & 2) != 0) {
        t8 = 0x8C109D0C;
    }
    sprSheetSet(t8);
    sprSheetPut(0x0, 100.0f, 95.0f, 0.0700000003f, (*(float *)0x8C2FBE90));
    sprSheetSet(0x8C109CC4);
    sprSheetPut(0x0, 310.0f, 132.0f, 0.0700000003f, (*(float *)0x8C2FBE90));
    sprSheetSet(0x8C109B3C);
    sprSheetPut(0x0, 236.0f, (float)(0xCC + t4), 0.0700000003f, (*(float *)0x8C2FBE90));
    { struct mv16 { int w[16]; }; *(struct mv16 *)((((int)stk + 32) + 0x10)) = *(struct mv16 *)(0x8C10A190); }
    *(float *)(((((int)stk + 32) + 0x10) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x10) + 0x4))) + (float)t4);
    *(float *)((((((int)stk + 32) + 0x10) + 0x10) + 0x4)) = ((*(float *)((((((int)stk + 32) + 0x10) + 0x10) + 0x4))) + (float)t4);
    *(float *)((((((int)stk + 32) + 0x10) + 0x20) + 0x4)) = ((*(float *)((((((int)stk + 32) + 0x10) + 0x20) + 0x4))) + (float)t4);
    *(float *)((((((int)stk + 32) + 0x10) + 0x30) + 0x4)) = ((*(float *)((((((int)stk + 32) + 0x10) + 0x30) + 0x4))) + (float)t4);
    *(unsigned int *)(((((int)stk + 32) + 0x10) + 0xC)) = (((*(int *)(((((int)stk + 32) + 0x10) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 192.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 32) + 0x10) + 0x10) + 0xC)) = (((*(int *)((((((int)stk + 32) + 0x10) + 0x10) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 192.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 32) + 0x10) + 0x20) + 0xC)) = (((*(int *)((((((int)stk + 32) + 0x10) + 0x20) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 192.0f) << 16) << 8));
    *(unsigned int *)((((((int)stk + 32) + 0x10) + 0x30) + 0xC)) = (((*(int *)((((((int)stk + 32) + 0x10) + 0x30) + 0xC))) & 0xFFFFFF) | (((int)((*(float *)0x8C2FBE90) * 192.0f) << 16) << 8));
    nlDispStripTrnsl(0x4, (((int)stk + 32) + 0x10));
    *(float *)(((int)stk + 32)) = (float)(0xC8 + t4);
    *(Stk3 *)(((int)stk + 20)) = vecMake(540.0f, (float)(0xC8 + t4), 0.0799999982f);
    primRectInc(0x1B8, 0x25, ((((int)((*(float *)0x8C2FBE90) * 192.0f) << 16) << 8) | 0xFF3600), 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12));
    *(Stk3 *)(((int)stk + 20)) = vecMake(540.0f, (*(float *)(((int)stk + 32))), 0.0700000003f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(100.0f, (*(float *)(((int)stk + 32))), 0.0700000003f);
    primLineH(0x2, ((((int)((*(float *)0x8C2FBE90) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(float *)(((int)stk + 40)) = (float)(0xED + t4);
    *(Stk3 *)(((int)stk + 20)) = vecMake(540.0f, (float)(0xED + t4), 0.0700000003f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(100.0f, (*(float *)(((int)stk + 40))), 0.0700000003f);
    primLineH(0x2, ((((int)((*(float *)0x8C2FBE90) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(float *)(((int)stk + 36)) = (float)(0x181 + t4);
    *(Stk3 *)(((int)stk + 20)) = vecMake(540.0f, (float)(0x181 + t4), 0.0700000003f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(100.0f, (*(float *)(((int)stk + 36))), 0.0700000003f);
    primLineH(0x2, ((((int)((*(float *)0x8C2FBE90) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(100.0f, (*(float *)(((int)stk + 36))), 0.0700000003f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(100.0f, (*(float *)(((int)stk + 32))), 0.0700000003f);
    primLineV(0x2, ((((int)((*(float *)0x8C2FBE90) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    *(Stk3 *)(((int)stk + 20)) = vecMake(540.0f, (*(float *)(((int)stk + 36))), 0.0700000003f);
    *(Stk3 *)(((int)stk + 8)) = vecMake(540.0f, (*(float *)(((int)stk + 32))), 0.0700000003f);
    primLineV(0x2, ((((int)((*(float *)0x8C2FBE90) * 255.0f) << 16) << 8) | 0xFFFFFF), 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20));
    t52 = *(int *)0x8C2FBE1C;
    t54 = *(int *)(((((((t52 << 2) + t52) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8));
    sprSheetSet((*(int *)((((*(int *)((((((t54 << 1) + t54) << 2) << 1) + 0x8C1094B4))) << 2) + 0x8C159C90))));
    sprSheetPut(0x0, 207.0f, (float)(t4 + 0x111), 0.0700000003f, (*(float *)0x8C2FBE90));
    *(float *)0x8C2FBE14 = (*(float *)0x8C2FBE90);
    t61 = *(int *)0x8C2FBE1C;
    t63 = *(int *)(((((((t61 << 2) + t61) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4));
    circuitNumDraw(((*(int *)((((((t63 << 2) << 2) + t63) << 2) + 0x8C108E7C))) + 0x1), 0x0, 0x8C159CA0, 396.0f, 132.0f, 0.0700000003f);
    t66 = *(int *)0x8C2FBE1C;
    sprSheetSet((*(int *)((((*(int *)(((((((t66 << 2) + t66) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8))) << 2) + 0x8C159CC8))));
    t71 = *(int *)0x8C2FBE1C;
    sprSheetPut(0x0, (float)((*(int *)((((*(int *)(((((((t71 << 2) + t71) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x8))) << 2) + 0x8C10A168))) + 0xB4), 96.0f, 0.0700000003f, (*(float *)0x8C2FBE90));
    if ((*(int *)(((int)stk + 44))) == 0) {
        sprSheetSet(0x8C109F7C);
        sprSheetPut(0x0, (*(float *)0x8C03486C), (*(float *)0x8C034868), 0.0700000003f, (*(float *)0x8C2FBE90));
    }
    u88 = *(float *)0x8C2FBE90;
    t91 = (circuitDrawBar((*(float *)0x8C2FBE90)));
    if (1.0f > u88) {
        *(float *)0x8C2FBE90 = ((*(float *)0x8C2FBE90) + (*(float *)0x8C034870));
        t91 = 0x8C034870;
    }
    return t91;
}
