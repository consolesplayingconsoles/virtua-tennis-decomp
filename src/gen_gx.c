/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan(float);
float nlCos(int);
int nlMultiMatrix(int);
float nlSin(int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int nlPerspective(int a4, float f4, float f5, float f6);

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int t0;
    float t1;
    float u2;
    int t4;
    float t5;
    int t7;
    int t9;
    int t20;
    float t16;
    float t24;
    float u25;
    float u26;
    float u28;
    float u30;
    float u33;
    float u34;
    float u35;
    float t37;
    float u40;
    float t41;
    float t43;
    float t44;
    float t45;
    float u48;
    int stk[34];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    t1 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 4)) = (1.0f / t1);
    u2 = *(float *)(((int)stk + 12));
    if ((*(float *)0x8C1DCA1C) != 0.0f) {
        t4 = nlArcTan((u2 / (1.0f / t1)));
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = nlTan(t4);
        t7 = nlArcTan((t5 * ((*(float *)0x8C1DCA1C) + 1.0f)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t7)));
    } else {
        t9 = nlArcTan((u2 / (1.0f / t1)));
        *(float *)(((int)stk + 24)) = (1.0f / (nlCos(t9)));
    }
    t20 = (t0 >> 1);
    if ((*(float *)0x8C1DCA20) != 0.0f) {
        t16 = nlTan((t0 >> 1));
        t20 = (nlArcTan((t16 * ((*(float *)0x8C1DCA20) + 1.0f))));
    }
    t24 = nlCos(t20);
    *(float *)0x8C1DCA1C = 0.0f;
    *(float *)0x8C1DCA20 = 0.0f;
    u25 = *(float *)(((int)stk + 4));
    u26 = *(float *)(((int)stk + 12));
    *(float *)(((int)stk + 20)) = (u25 / u26);
    u28 = ((u25 / u26) * (*(float *)(((int)stk + 24))));
    *(float *)0x8C1DC9EC = (u28 * 0.5f);
    u30 = ((*(float *)(((int)stk + 4))) * (1.0f / t24));
    *(float *)0x8C1DC9F0 = (u30 * 0.5f);
    *(float *)0x8C450B10 = ((*(float *)0x8C1DCA24) * (*(float *)0x8C1DC9EC));
    u33 = *(float *)0x8C1DC9F0;
    u34 = *(float *)0x8C1DCA28;
    *(float *)0x8C450B14 = (u34 * u33);
    u35 = *(float *)0x8C450B10;
    if (u35 > (u34 * u33)) {
        *(float *)0x8C1DC9F4 = u35;
    } else {
        *(float *)0x8C1DC9F4 = (u34 * u33);
    }
    t37 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 16)) = (float)(nlArcTan((t37 * (*(float *)(((int)stk + 12))))));
    *(float *)0x8C450AE4 = 0.0f;
    *(float *)0x8C450AD4 = 0.0f;
    *(float *)0x8C450B00 = 0.0f;
    *(float *)0x8C450AF0 = 0.0f;
    u40 = *(float *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 8)) = (int)u40;
    t41 = nlCos((int)u40);
    *(float *)0x8C450AD0 = t41;
    *(float *)0x8C450AE0 = (-t41);
    t43 = nlSin((*(int *)(((int)stk + 8))));
    *(float *)0x8C450AE8 = t43;
    *(float *)0x8C450AD8 = t43;
    t44 = nlCos((t0 >> 1));
    *(float *)0x8C450AF4 = t44;
    *(float *)0x8C450B04 = (-t44);
    t45 = nlSin((t0 >> 1));
    *(float *)0x8C450B08 = t45;
    *(float *)0x8C450AF8 = t45;
    *(float *)0x8C450AEC = 0.0f;
    *(float *)0x8C450ADC = 0.0f;
    *(float *)0x8C450B0C = 0.0f;
    *(float *)0x8C450AFC = 0.0f;
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 72)) = (-1.0f);
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)(((int)stk + 80)) = 0.0f;
    u48 = (f5 * f6);
    *(float *)(((int)stk + 84)) = ((u48 * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)0x8C458E3C = f5;
    *(float *)0x8C458E40 = f6;
    *(float *)0x8C458E44 = (1.0f / f5);
    *(float *)0x8C458DBC = f5;
    *(float *)0x8C458DA4 = (-f5);
    *(float *)0x8C458DC0 = f6;
    *(float *)0x8C458DB8 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x18));
    return (nl_set_cnv_proj_pers());
}
