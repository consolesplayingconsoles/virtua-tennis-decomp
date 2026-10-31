/* Straight-line functions with calls and guards (batch gen_sz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuOppLineX(int a4);

float cpuOppLineX(int a4)
{
    int t0;
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;

    t0 = *(int *)((a4 + 0xB5C));
    u0 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u1 = (-u0);
    if (!(0.0f > u0)) {
        u1 = u0;
    }
    if (u1 > (*(float *)0x8C287B40)) {
        u0 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u1 = ((float)((u0 > 0.0f) - (0.0f > u0)) * (*(float *)0x8C287B40));
    } else {
        u1 = (*(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    }
    u0 = *(float *)((a4 + 0xAE8));
    u2 = *(float *)((a4 + 0xAF0));
    u3 = *(float *)(((((0x3 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u4 = *(float *)((a4 + 0xAF0));
    u5 = *(float *)((a4 + 0xAE8));
    u6 = (u5 - (((u0 - u1) / (u2 - u3)) * u4));
    u6 = u6 + 118.849998f * (((u0 - u1) / (u2 - u3)) * (*(float *)((a4 + 0xB00))));
    u7 = (-u6);
    if (!(0.0f > u6)) {
        u7 = u6;
    }
    u8 = 0.0f;
    if ((u7 > (*(float *)0x8C287B40)) && (((u0 - u1) / (u2 - u3)) != 0.0f)) {
        u8 = ((((float)((u6 > 0.0f) - (0.0f > u6)) * (*(float *)0x8C287B40)) - (u5 - (((u0 - u1) / (u2 - u3)) * u4))) / ((u0 - u1) / (u2 - u3)));
    }
    t0 = *(int *)((a4 + 0xB5C));
    u7 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u9 = (-u7);
    if (!(0.0f > u7)) {
        u9 = u7;
    }
    if (u9 > (*(float *)0x8C287B40)) {
        u7 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u9 = ((float)((u7 > 0.0f) - (0.0f > u7)) * (*(float *)0x8C287B40));
    } else {
        u9 = (*(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAE8)));
    }
    u7 = *(float *)((a4 + 0xAE8));
    u10 = *(float *)((a4 + 0xAF0));
    u11 = *(float *)(((((0x3 & (t0 + 0x3)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u12 = *(float *)((a4 + 0xAF0));
    u13 = *(float *)((a4 + 0xAE8));
    u14 = (u13 - (((u7 - u9) / (u10 - u11)) * u12));
    u14 = u14 + 118.849998f * (((u7 - u9) / (u10 - u11)) * (*(float *)((a4 + 0xB00))));
    u15 = (-u14);
    if (!(0.0f > u14)) {
        u15 = u14;
    }
    u16 = 0.0f;
    if ((u15 > (*(float *)0x8C287B40)) && (((u7 - u9) / (u10 - u11)) != 0.0f)) {
        u16 = ((((float)((u14 > 0.0f) - (0.0f > u14)) * (*(float *)0x8C287B40)) - (u13 - (((u7 - u9) / (u10 - u11)) * u12))) / ((u7 - u9) / (u10 - u11)));
    }
    u15 = *(float *)0x8C0813F0;
    u17 = ((u13 - (((u7 - u9) / (u10 - u11)) * u12)) - (u5 - (((u0 - u1) / (u2 - u3)) * u4)));
    if (!(0.0f > ((u5 - (((u0 - u1) / (u2 - u3)) * u4)) - (u13 - (((u7 - u9) / (u10 - u11)) * u12))))) {
        u17 = ((u5 - (((u0 - u1) / (u2 - u3)) * u4)) - (u13 - (((u7 - u9) / (u10 - u11)) * u12)));
    }
    u0 = (u14 - u6);
    if (!(0.0f > (u6 - u14))) {
        u0 = (u6 - u14);
    }
    u1 = *(float *)0x8C0813F4;
    u2 = *(float *)0x8C287B40;
    if (!(0.0f > (u6 - ((float)((u6 > 0.0f) - (0.0f > u6)) * u2)))) {
        u3 = (u6 - ((float)((u6 > 0.0f) - (0.0f > u6)) * u2));
    } else {
        u4 = (-u6);
        u4 = u4 + u2 * (float)((u6 > 0.0f) - (0.0f > u6));
        u3 = u4;
    }
    u4 = (u3 * u8);
    if (!(0.0f > (u14 - ((float)((u14 > 0.0f) - (0.0f > u14)) * u2)))) {
        u3 = (u14 - ((float)((u14 > 0.0f) - (0.0f > u14)) * u2));
    } else {
        u5 = (-u14);
        u5 = u5 + u2 * (float)((u14 > 0.0f) - (0.0f > u14));
        u3 = u5;
    }
    u2 = (u3 * u16);
    return (((((u17 + u0) * u1) - (u4 * u15)) - (u2 * u15)) / (*(float *)0x8C0813F8));
}
