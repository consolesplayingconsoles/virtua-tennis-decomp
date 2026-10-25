/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[12]; } Stk12;
float nlInnerProduct(int, int);
int nlOuterProduct(int, int, int);
int cpuInTriangle(Stk12 s);

int cpuInTriangle(Stk12 s)
{
    float u15;
    float t16;
    int t24;
    float t17;
    int t21;
    float t18;
    int t19;
    int stk[42];

    stk[22] = s.w[0];
    stk[23] = s.w[1];
    stk[24] = s.w[2];
    stk[25] = s.w[3];
    stk[26] = s.w[4];
    stk[27] = s.w[5];
    stk[28] = s.w[6];
    stk[29] = s.w[7];
    stk[30] = s.w[8];
    stk[31] = s.w[9];
    stk[32] = s.w[10];
    stk[33] = s.w[11];
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 64)) = ((*(float *)(((((int)stk + 4) + 0x54) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x0))));
    *(float *)(((int)stk + 72)) = ((*(float *)(((((int)stk + 4) + 0x54) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x8))));
    *(float *)(((int)stk + 52)) = ((*(float *)(((((int)stk + 4) + 0x60) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x0))));
    *(float *)(((int)stk + 60)) = ((*(float *)(((((int)stk + 4) + 0x60) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x8))));
    *(float *)(((int)stk + 40)) = ((*(float *)(((((int)stk + 4) + 0x6C) + 0x0))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x0))));
    *(float *)(((int)stk + 48)) = ((*(float *)(((((int)stk + 4) + 0x6C) + 0x8))) - (*(float *)(((((int)stk + 4) + 0x78) + 0x8))));
    nlOuterProduct((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x18));
    nlOuterProduct((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24), (((int)stk + 4) + 0xC));
    nlOuterProduct((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x3C), ((int)stk + 4));
    u15 = *(float *)0x8C0801C0;
    t16 = nlInnerProduct((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
    t24 = 0x0;
    if (!(u15 > t16)) {
        t17 = nlInnerProduct((((int)stk + 4) + 0x18), ((int)stk + 4));
        t21 = 0x0;
        if (!(u15 > t17)) {
            t18 = nlInnerProduct((((int)stk + 4) + 0xC), ((int)stk + 4));
            t19 = 0x1;
            if (u15 > t18) {
                t19 = 0x0;
            }
            t21 = t19;
        }
        t24 = t21;
    }
    return t24;
}
