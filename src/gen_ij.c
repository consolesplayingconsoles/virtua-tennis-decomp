/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int menuDimScreen(int, int, int, int);
int menuListDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int nlDispStripTexOfs(int, int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int menuListExec(int a4, int a5, int a6, int a7);
int rankDrawCharaIcon(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);


int rankDrawCharaIcon(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t10;
    float u25;
    float u26;
    int t15;
    float u47;
    float u48;
    float u49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u54;
    int t55;
    int t3;
    int t38;
    float u44;
    float u45;
    int t29;
    float u34;
    float u35;
    int t21;
    int stk[59];

    stk[50] = a8;
    t0 = 0x8C126BDC;
    t2 = ((int)stk + 4);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C126BDC + 72)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = *(int *)((((int)stk + 4) + (a4 << 2)));
    if ((int)t4 < (int)0x6) {
        t5 = ((~(((~t4) + 0x1) & 0x1)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x1);
        }
        t38 = 0x9B;
        u44 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
        u45 = (((float)t5 * 32.0f) / 64.0f);
    } else {
        if (1 && ((int)t4 < (int)0xC)) {
            t10 = ((~(((~(t4 - 6)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t4 - 6) >= 0) {
                t10 = ((t4 - 6) & 0x1);
            }
            t29 = 0x9C;
            u34 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 6) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 6))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
            u35 = (((float)t10 * 32.0f) / 64.0f);
        } else {
            u25 = f5;
            u26 = f6;
            if ((int)t4 >= (int)0xC) {
                t15 = ((~(((~(t4 - 12)) + 0x1) & 0x1)) + 0x1);
                if ((int)(t4 - 12) >= 0) {
                    t15 = ((t4 - 12) & 0x1);
                }
                t21 = 0x9D;
                u25 = (1.0f - (((float)(((int)((unsigned int)((int)((unsigned int)(t4 - 12) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t4 - 12))) ? 1u : 0u))) >> 1) * 21.0f) / 64.0f));
                u26 = (((float)t15 * 32.0f) / 64.0f);
            }
            t29 = t21;
            u34 = u25;
            u35 = u26;
        }
        t38 = t29;
        u44 = u34;
        u45 = u35;
    }
    u47 = *(float *)0x8C0E13BC;
    u48 = *(float *)0x8C0E13C0;
    u49 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x8));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x8)) = u49;
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x8)) = u49;
    *(float *)(((((int)stk + 4) + 0x48) + 0x8)) = u49;
    u50 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x0)) = u50;
    *(float *)(((((int)stk + 4) + 0x48) + 0x0)) = u50;
    u51 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x0));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x0)) = (u51 + 32.0f);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x0)) = (u51 + 32.0f);
    u52 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x4)) = u52;
    *(float *)(((((int)stk + 4) + 0x48) + 0x4)) = u52;
    u53 = *(float *)0x8C0E13C4;
    u54 = *(float *)(((0xC4 + ((int)stk + 4)) + 0x4));
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x4)) = (u54 + u53);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0xC)) = u45;
    *(float *)(((((int)stk + 4) + 0x48) + 0xC)) = u45;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0xC)) = (u45 + u47);
    *(float *)((((((int)stk + 4) + 0x48) + 0x1C) + 0x10)) = u44;
    *(float *)(((((int)stk + 4) + 0x48) + 0x10)) = u44;
    *(float *)((((((int)stk + 4) + 0x48) + 0x54) + 0x10)) = (u44 + u48);
    *(float *)((((((int)stk + 4) + 0x48) + 0x38) + 0x10)) = (u44 + u48);
    t55 = (((int)stk + 4) + 0x48);
    for (;;) {
        if ((unsigned int)t55 >= (unsigned int)((((int)stk + 4) + 0x48) + 0x70)) {
            break;
        }
        *(unsigned int *)((t55 + 0x14)) = ((0xFF000000 & a5) | 0xFFFFFF);
        *(unsigned int *)((t55 + 0x18)) = 0x0;
        t55 = (t55 + 0x1C);
    }
    return (nlDispStripTexOfs(0x4, (((int)stk + 4) + 0x48), t38));
}
