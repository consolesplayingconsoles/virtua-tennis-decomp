/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[13]; } Stk13;
void vecLineCrossXZ(Stk13 s, float f4, float f5, float f6, float f7, float f8, float f9);

void vecLineCrossXZ(Stk13 s, float f4, float f5, float f6, float f7, float f8, float f9)
{
    float u0;
    float u1;
    float u12;
    float u13;
    float u16;
    float u17;
    float u20;
    float u38;
    float u51;
    float u2;
    float u3;
    float u14;
    float u15;
    float u47;
    float u48;
    float u49;
    int stk[26];
    int R1020;
    int R1040;
    int R1052;
    int R1064;

    R1020 = *(int *)((int)stk + 20);
    R1040 = *(int *)((int)stk + 40);
    R1052 = *(int *)((int)stk + 52);
    R1064 = *(int *)((int)stk + 64);

    R1020 = s.w[0];
    stk[6] = s.w[1];
    stk[7] = s.w[2];
    stk[8] = s.w[3];
    stk[9] = s.w[4];
    R1040 = s.w[5];
    stk[11] = s.w[6];
    stk[12] = s.w[7];
    R1052 = s.w[8];
    stk[14] = s.w[9];
    stk[15] = s.w[10];
    R1064 = s.w[11];
    stk[17] = s.w[12];
    u0 = *(float *)(((((int)stk + 4) + 0x14) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0x2C) + 0x0));
    if ((u0 == u1) && (u2 = *(float *)(((((int)stk + 4) + 0x14) + 0x8)), u3 = *(float *)(((((int)stk + 4) + 0x2C) + 0x8)), u2 == u3)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
        return;
    }
    u12 = *(float *)(((((int)stk + 4) + 0x20) + 0x0));
    u13 = *(float *)(((((int)stk + 4) + 0x38) + 0x0));
    if ((u12 == u13) && (u14 = *(float *)(((((int)stk + 4) + 0x20) + 0x8)), u15 = *(float *)(((((int)stk + 4) + 0x38) + 0x8)), u14 == u15)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)((((int)stk + 4) + 0x14)); }
        return;
    }
    if (u12 == 0.0f) {
        *(float *)((((int)stk + 4) + 0x0)) = u0;
    } else {
        if (u13 == 0.0f) {
            *(float *)((((int)stk + 4) + 0x0)) = u1;
        } else {
            u16 = *(float *)(((((int)stk + 4) + 0x38) + 0x8));
            u17 = *(float *)(((((int)stk + 4) + 0x20) + 0x8));
            u20 = ((-(*(float *)(((((int)stk + 4) + 0x14) + 0x8)))) + (*(float *)(((((int)stk + 4) + 0x2C) + 0x8))));
            u20 = u20 + u0 * (u17 / u12);
            *(float *)((((int)stk + 4) + 0x0)) = ((u20 - ((u16 / u13) * u1)) / ((u17 / u12) - (u16 / u13)));
        }
    }
    *(float *)((((int)stk + 4) + 0x4)) = 0.0f;
    u38 = *(float *)((((int)stk + 4) + 0x0));
    if ((*(float *)(((((int)stk + 4) + 0x20) + 0x0))) == 0.0f) {
        u47 = ((*(float *)(((((int)stk + 4) + 0x38) + 0x8))) / (*(float *)(((((int)stk + 4) + 0x38) + 0x0))));
        u48 = (*(float *)(((((int)stk + 4) + 0x2C) + 0x8)));
        u49 = (u38 - (*(float *)(((((int)stk + 4) + 0x2C) + 0x0))));
    } else {
        u47 = ((*(float *)(((((int)stk + 4) + 0x20) + 0x8))) / (*(float *)(((((int)stk + 4) + 0x20) + 0x0))));
        u48 = (*(float *)(((((int)stk + 4) + 0x14) + 0x8)));
        u49 = (u38 - (*(float *)(((((int)stk + 4) + 0x14) + 0x0))));
    }
    u51 = u48;
    u51 = u51 + u47 * u49;
    *(float *)((((int)stk + 4) + 0x8)) = u51;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(s.w[0]) = *(struct mv3 *)(((int)stk + 4)); }
}
