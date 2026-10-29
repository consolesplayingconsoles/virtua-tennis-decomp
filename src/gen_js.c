/* Straight-line functions with calls and guards (batch gen_js): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuQuadPut(int, int, int, int, int, int, int, int, int);
float nlCos(int);
int nlDispStripTexOfs(int, int, int);
float nlPow(int, int, int, int, float, float);
float nlTan(int);
int rectFrameDraw(int, float);
Stk3 vecMake(float, float, float);
int cpuDblSignalPut(int a4, int a5, int a6, int a7);

int cpuDblSignalPut(int a4, int a5, int a6, int a7)
{
    register float t1;
    register float u2;
    register float u6;
    register float u8;
    register int t11;
    register int t12;
    register float t13;
    register float t17;
    register int t20;
    register int t21;
    register float u22;
    register float u24;
    register float u27;
    register float u28;
    register int t60;
    register int t39;
    register float t40;
    register float t44;
    register int t47;
    register int t48;
    register float u49;
    register float u51;
    register float u54;
    register float u55;
    register int t85;
    register int t67;
    register float t68;
    register float t70;
    register int t72;
    register int t73;
    register float u74;
    register float u76;
    register float u79;
    register float u80;
    int stk[63];

    *(unsigned int *)(((int)stk + 32)) = a4;
    t1 = nlPow(a4, a5, a6, a7, (*(float *)((0x8C3343AC + (((((int)a4 > (int)0x100)) ? 1 : 0) << 2)))), 0.400000006f);
    u2 = (t1 * 255.0f);
    if (!(2.14748365e+09f > (t1 * 255.0f))) {
        u2 = ((t1 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(unsigned int *)(((int)stk + 36)) = (((int)u2 << 16) << 8);
    u6 = *(float *)(((((((int)(*(int *)(((int)stk + 32))) > (int)0x100)) ? 1 : 0) << 2) + 0x8C3343AC));
    u8 = (u6 * 255.0f);
    if (!(2.14748365e+09f > (u6 * 255.0f))) {
        u8 = ((u6 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
    }
    *(float *)(((((int)stk + 32) + 0x58) + 0x4)) = 102.0f;
    *(float *)(((((int)stk + 32) + 0x3C) + 0x4)) = 102.0f;
    *(float *)(((0x90 + ((int)stk + 32)) + 0x4)) = 114.0f;
    *(float *)(((((int)stk + 32) + 0x74) + 0x4)) = 114.0f;
    *(float *)(((0x90 + ((int)stk + 32)) + 0x8)) = 0.49000001f;
    *(float *)(((((int)stk + 32) + 0x74) + 0x8)) = 0.49000001f;
    *(float *)(((((int)stk + 32) + 0x58) + 0x8)) = 0.49000001f;
    *(float *)(((((int)stk + 32) + 0x3C) + 0x8)) = 0.49000001f;
    *(float *)(((((int)stk + 32) + 0x74) + 0xC)) = 0.0f;
    *(float *)(((((int)stk + 32) + 0x3C) + 0xC)) = 0.0f;
    *(float *)(((0x90 + ((int)stk + 32)) + 0xC)) = 1.0f;
    *(float *)(((((int)stk + 32) + 0x58) + 0xC)) = 1.0f;
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 36))) + 0xFFFFFF);
    t11 = *(int *)(((int)stk + 32));
    if (((int)a5 >= (int)0xFFFFFFE2) && ((int)a5 <= (int)0x96)) {
    } else {
        t12 = (int)((int)((((((a5 + 0x78) << 8) << 2) << 2) << 2) << 1) / (int)0xB4);
        *(unsigned int *)(((int)stk + 32)) = (unsigned short)t12;
        t13 = nlCos((unsigned short)t12);
        *(float *)(((int)stk + 28)) = t13;
        *(float *)(((int)stk + 64)) = (t13 * (((nlTan((*(int *)(((int)stk + 32))))) / 1.73199999f) + 1.0f));
        t17 = nlCos((*(int *)(((int)stk + 32))));
        *(float *)(((int)stk + 28)) = t17;
        *(float *)(((int)stk + 52)) = (t17 * ((-((nlTan((*(int *)(((int)stk + 32))))) / 1.73199999f)) + 1.0f));
        t20 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((((int)stk + 32) + 0x58) + 0x14)) = t20;
        *(unsigned int *)(((((int)stk + 32) + 0x3C) + 0x14)) = t20;
        t21 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((0x90 + ((int)stk + 32)) + 0x14)) = (t21 + 0xEE00);
        *(unsigned int *)(((((int)stk + 32) + 0x74) + 0x14)) = (t21 + 0xEE00);
        u22 = *(float *)(((int)stk + 64));
        *(float *)(((((int)stk + 32) + 0x74) + 0x0)) = ((float)t11 - (u22 * 32.0f));
        *(float *)(((((int)stk + 32) + 0x3C) + 0x0)) = ((float)t11 - (u22 * 32.0f));
        u24 = (float)t11;
        u24 = u24 + (*(float *)(((int)stk + 52))) * 32.0f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x0)) = u24;
        *(float *)(((((int)stk + 32) + 0x58) + 0x0)) = u24;
        *(float *)(((((int)stk + 32) + 0x58) + 0x10)) = 1.0f;
        *(float *)(((((int)stk + 32) + 0x3C) + 0x10)) = 1.0f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x10)) = 0.8125f;
        *(float *)(((((int)stk + 32) + 0x74) + 0x10)) = 0.8125f;
        nlDispStripTexOfs(0x4, (((int)stk + 32) + 0x3C), 0x69);
        u27 = (float)t11;
        u27 = u27 + (*(float *)(((int)stk + 52))) * 35.0f;
        *(float *)(((int)stk + 84)) = u27;
        *(Stk3 *)(((int)stk + 20)) = vecMake(u27, 116.0f, 0.479999989f);
        u28 = *(float *)(((int)stk + 64));
        *(float *)(((int)stk + 80)) = ((float)t11 - (u28 * 35.0f));
        *(Stk3 *)(((int)stk + 8)) = vecMake(((float)t11 - (u28 * 35.0f)), 100.0f, 0.479999989f);
        rectFrameDraw((0xFFFFFF + (((int)u8 << 16) << 8)), 1.0f);
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((int)stk + 84))), 116.0f, 0.5f);
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 80))), 100.0f, 0.5f);
        cpuQuadPut((((unsigned int)(((int)u8 << 16) << 8) >> 1) & 0xFF000000), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    }
    t60 = 0x8C05D758;
    if (!(90.0f > _builtin_fabsf((float)a5))) {
        _builtin_fabsf((float)a5);
    } else {
        t39 = (int)((int)(((((a5 << 8) << 2) << 2) << 2) << 1) / (int)0xB4);
        *(unsigned int *)(((int)stk + 32)) = (unsigned short)t39;
        t40 = nlCos((unsigned short)t39);
        *(float *)(((int)stk + 28)) = t40;
        *(float *)(((int)stk + 44)) = (t40 * (((nlTan((*(int *)(((int)stk + 32))))) / 1.73199999f) + 1.0f));
        t44 = nlCos((*(int *)(((int)stk + 32))));
        *(float *)(((int)stk + 28)) = t44;
        *(float *)(((int)stk + 48)) = (t44 * ((-((nlTan((*(int *)(((int)stk + 32))))) / 1.73199999f)) + 1.0f));
        t47 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((((int)stk + 32) + 0x58) + 0x14)) = t47;
        *(unsigned int *)(((((int)stk + 32) + 0x3C) + 0x14)) = t47;
        t48 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((0x90 + ((int)stk + 32)) + 0x14)) = (t48 + 0xEEEE00);
        *(unsigned int *)(((((int)stk + 32) + 0x74) + 0x14)) = (t48 + 0xEEEE00);
        u49 = *(float *)(((int)stk + 44));
        *(float *)(((((int)stk + 32) + 0x74) + 0x0)) = ((float)t11 - (u49 * 32.0f));
        *(float *)(((((int)stk + 32) + 0x3C) + 0x0)) = ((float)t11 - (u49 * 32.0f));
        u51 = (float)t11;
        u51 = u51 + (*(float *)(((int)stk + 48))) * 32.0f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x0)) = u51;
        *(float *)(((((int)stk + 32) + 0x58) + 0x0)) = u51;
        *(float *)(((((int)stk + 32) + 0x58) + 0x10)) = 0.796875f;
        *(float *)(((((int)stk + 32) + 0x3C) + 0x10)) = 0.796875f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x10)) = 0.609375f;
        *(float *)(((((int)stk + 32) + 0x74) + 0x10)) = 0.609375f;
        nlDispStripTexOfs(0x4, (((int)stk + 32) + 0x3C), 0x69);
        u54 = (float)t11;
        u54 = u54 + (*(float *)(((int)stk + 48))) * 35.0f;
        *(float *)(((int)stk + 76)) = u54;
        *(Stk3 *)(((int)stk + 20)) = vecMake(u54, 116.0f, 0.479999989f);
        u55 = *(float *)(((int)stk + 44));
        *(float *)(((int)stk + 72)) = ((float)t11 - (u55 * 35.0f));
        *(Stk3 *)(((int)stk + 8)) = vecMake(((float)t11 - (u55 * 35.0f)), 100.0f, 0.479999989f);
        rectFrameDraw((0xFFFFFF + (((int)u8 << 16) << 8)), 1.0f);
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((int)stk + 76))), 116.0f, 0.5f);
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 72))), 100.0f, 0.5f);
        t60 = (cpuQuadPut((((unsigned int)(((int)u8 << 16) << 8) >> 1) & 0xFF000000), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16)));
    }
    t85 = t60;
    if (((int)a5 <= (int)0x1E) && ((int)a5 >= (int)0xFFFFFF6A)) {
    } else {
        t67 = (int)((int)((((((a5 - 120) << 8) << 2) << 2) << 2) << 1) / (int)0xB4);
        t68 = nlCos((unsigned short)t67);
        *(float *)(((int)stk + 28)) = t68;
        *(float *)(((int)stk + 56)) = (t68 * (((nlTan((unsigned short)t67)) / 1.73199999f) + 1.0f));
        t70 = nlCos((unsigned short)t67);
        *(float *)(((int)stk + 28)) = t70;
        *(float *)(((int)stk + 60)) = (t70 * ((-((nlTan((unsigned short)t67)) / 1.73199999f)) + 1.0f));
        t72 = *(int *)(((int)stk + 40));
        *(unsigned int *)(((((int)stk + 32) + 0x58) + 0x14)) = t72;
        *(unsigned int *)(((((int)stk + 32) + 0x3C) + 0x14)) = t72;
        t73 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((0x90 + ((int)stk + 32)) + 0x14)) = (t73 + 0xE00000);
        *(unsigned int *)(((((int)stk + 32) + 0x74) + 0x14)) = (t73 + 0xE00000);
        u74 = *(float *)(((int)stk + 56));
        *(float *)(((((int)stk + 32) + 0x74) + 0x0)) = ((float)t11 - (u74 * 32.0f));
        *(float *)(((((int)stk + 32) + 0x3C) + 0x0)) = ((float)t11 - (u74 * 32.0f));
        u76 = (float)t11;
        u76 = u76 + (*(float *)(((int)stk + 60))) * 32.0f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x0)) = u76;
        *(float *)(((((int)stk + 32) + 0x58) + 0x0)) = u76;
        *(float *)(((((int)stk + 32) + 0x58) + 0x10)) = 0.59375f;
        *(float *)(((((int)stk + 32) + 0x3C) + 0x10)) = 0.59375f;
        *(float *)(((0x90 + ((int)stk + 32)) + 0x10)) = 0.40625f;
        *(float *)(((((int)stk + 32) + 0x74) + 0x10)) = 0.40625f;
        nlDispStripTexOfs(0x4, (((int)stk + 32) + 0x3C), 0x69);
        u79 = (float)t11;
        u79 = u79 + (*(float *)(((int)stk + 60))) * 35.0f;
        *(float *)(((int)stk + 68)) = u79;
        *(Stk3 *)(((int)stk + 20)) = vecMake(u79, 116.0f, 0.479999989f);
        u80 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 88)) = ((float)t11 - (u80 * 35.0f));
        *(Stk3 *)(((int)stk + 8)) = vecMake(((float)t11 - (u80 * 35.0f)), 100.0f, 0.479999989f);
        rectFrameDraw((0xFFFFFF + (((int)u8 << 16) << 8)), 1.0f);
        *(Stk3 *)(((int)stk + 20)) = vecMake((*(float *)(((int)stk + 68))), 116.0f, 0.5f);
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((int)stk + 88))), 100.0f, 0.5f);
        t85 = (cpuQuadPut((0xFF000000 & ((unsigned int)(((int)u8 << 16) << 8) >> 1)), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16)));
    }
    return t85;
}
