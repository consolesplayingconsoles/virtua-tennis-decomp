/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
float cpuDistXZ(int, int);
int cpuLineCrossXZ(int, int, int, int, Stk3, Stk3, Stk3, float, float);
int cpuSglAimRateOpp3(int a4, int a5);

int cpuSglAimRateOpp3(int a4, int a5)
{
    int stk[26];
    int t0;
    int t2;
    float u7;
    float u9;
    float u10;
    float u18;
    float u22;
    float u24;
    float u25;
    float u28;
    float u34;
    float u40;
    float u88;
    float u59;
    float u60;
    float t62;
    float t63;
    float u65;
    float t66;
    float t67;
    int t69;
    float u72;
    float u53;
    float u47;
    float u78;

    t0 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xB5C));
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0xB9C))));
    *(float *)(((((int)stk + 40) + 0x18) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 40) + 0x18) + 0x8)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0xBA4))));
    u7 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x28));
    u9 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAE8)));
    u9 = u9 + 0.800000012f * (u7 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u10 = (-u9);
    if (!(0.0f > u9)) {
        u10 = u9;
    }
    u18 = u9;
    if (u10 > 34.9775009f) {
        u18 = ((float)((u9 > 0.0f) - (0.0f > u9)) * 34.9775009f);
    }
    u22 = *(float *)((((t2 * 0x160) + 0x8C2FC69C) + 0x30));
    u24 = (*(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + (int)Player) + 0xAF0)));
    u24 = u24 + 0.800000012f * (u22 * (float)(*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118))));
    u25 = (-u24);
    if (!(0.0f > u24)) {
        u25 = u24;
    }
    if (u25 > 118.849998f) {
        u53 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
    } else {
        u28 = (-u24);
        if (!(0.0f > u24)) {
            u28 = u24;
        }
        if (!(23.7700005f > u28)) {
            u34 = *(float *)((a4 + 0xB00));
            u40 = u24;
            if (((u24 > 0.0f) - (0.0f > u24)) != ((u34 > 0.0f) - (0.0f > u34))) {
                u40 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
            }
            u47 = u40;
        } else {
            u47 = ((*(float *)((a4 + 0xB00))) * 23.7700005f);
        }
        u53 = u47;
    }
    *(float *)(((int)stk + 52)) = u18;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = u53;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
    cpuLineCrossXZ((((int)stk + 4) + 0x24), ((t2 * 0x160) + 0x8C2FC69C), ((t0 * 0x160) + 0x8C2FC69C), 0x8C2FC69C, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), u53, u18);
    u88 = 0.0f;
    if ((unsigned char)(*(signed char *)((a5 + 0xC))) == 1) {
        u59 = *(float *)((a5 + 0x8));
        u60 = (-u59);
        if (!(0.0f > u59)) {
            u60 = u59;
        }
        if (u60 > 64.0f) {
            t62 = cpuDistXZ((((int)stk + 40) + 0xC), ((int)stk + 40));
            t63 = cpuDistXZ(((int)stk + 40), (0xB9C + a4));
            u65 = (((t62 / t63) * (cpuDistXZ(a5, (0xB9C + a4)))) / 41.1500015f);
            u78 = (u65 * 5.0f);
        } else {
            t66 = cpuDistXZ((((int)stk + 40) + 0xC), ((int)stk + 40));
            t67 = cpuDistXZ(((int)stk + 40), (0xB9C + a4));
            t69 = *(int *)0x8C1891E8;
            u72 = ((((t66 / t67) * (cpuDistXZ(a5, (0xB9C + a4)))) / 118.849998f) / ((*(float *)(((((t69 << 2) << 1) + 0x8C10D41C) + 0x0))) * (*(float *)(((((t69 << 2) << 1) + 0x8C10D41C) + 0x4)))));
            u78 = (u72 * 20.0f);
        }
        u88 = u78;
    }
    *(float *)((a5 + 0x1C)) = u88;
    return 0x1C;
}
