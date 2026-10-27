/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlTan(int);
float screenProject(int a4, int a5, Stk3 s);

float screenProject(int a4, int a5, Stk3 s)
{
    float t4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    int t10;
    float u11;
    float u13;
    float u14;
    float u15;
    int t16;
    float u17;
    int stk[16];

    stk[5] = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t4 = nlTan(((int)((((*(float *)0x8C287A04) * (*(float *)0x8C089F00)) / (*(float *)0x8C089F08)) + (*(float *)0x8C089F0C)) & 0xFFFF));
    u5 = *(float *)0x8C089F18;
    u6 = *(float *)0x8C089F1C;
    *(float *)0x8C302070 = (((u5 / t4) * u6) / (1.0f + 1.0f));
    u7 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
    u8 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
    u9 = (((u5 / t4) * u6) / (1.0f + 1.0f));
    t10 = *(int *)(((int)stk + 8));
    u11 = (-u8);
    if (!(0.0f > u8)) {
        u11 = u8;
    }
    *(unsigned int *)((t10 + 0x0)) = (int)((u7 * u9) / u11);
    u13 = *(float *)0x8C302070;
    u14 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
    u15 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
    t16 = *(int *)(((int)stk + 4));
    u17 = (-u15);
    if (!(0.0f > u15)) {
        u17 = u15;
    }
    *(unsigned int *)((t16 + 0x0)) = (int)((u14 * u13) / u17);
    return ((u7 * u9) / u11);
}
