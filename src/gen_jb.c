/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int hudBarDrawAlt(Stk3, Stk1, float, float);
int hudCallNumPut(int, Stk3, float, float);
extern int sprPutCropV();
int hudCallAdvDraw(int a4, float f4, float f5);
int hudCallGameDraw(int a4, float f4, float f5);

int hudCallAdvDraw(int a4, float f4, float f5)
{
    int t1;
    int t4;
    int t6;
    int t11;
    int t18;
    int t24;
    int t38;
    float u40;
    int t43;
    int t44;
    float u47;
    int t15;
    int t55;
    int t27;
    int t51;
    int stk[29];

    *(unsigned int *)(((int)stk + 28)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12), (f4 * 0.5f), f5);
    *(float *)(((((int)stk + 28) + 0x1C) + 0x8)) = 0.00499999989f;
    t1 = *(int *)(((int)stk + 28));
    t4 = 0xC;
    if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x8))) != 0) {
    } else {
        t4 = (*(int *)((((t1 * 0x38) + 0x8C343264) + 0x4)));
    }
    t6 = *(int *)0x8C287ADC;
    if (t6 == 4) {
        t11 = 0xC;
        if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x78))) != 0) {
        } else {
            t11 = (*(int *)((((t1 * 0x38) + 0x8C343264) + 0x74)));
        }
        t15 = t11;
    }
    if (t6 == 2) {
        if (t4 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 56.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t18 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AA40, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 69.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t4 + 0x1), *(Stk3 *)(((int)stk + 4)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t27 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AAE0, 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5));
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 44.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t24 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AA40, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 65.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t27 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
        }
        t55 = t27;
    } else {
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 83.0f);
        *(float *)(((int)stk + 32)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 151.0f);
        *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 14.0f);
        if ((t4 != 12) || (t15 != 12)) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 9.0f);
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 4.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
        t38 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AA40, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
        *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) - 10.0f);
        u40 = *(float *)(((((int)stk + 28) + 0x10) + 0x0));
        if (t4 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u40;
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = (u40 + 7.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t4 + 0x1), *(Stk3 *)(((int)stk + 16)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t43 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AAE0, 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5);
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u40;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t44 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
        }
        u47 = *(float *)(((int)stk + 32));
        if (t15 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u47;
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = (u47 + 7.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t15 + 0x1), *(Stk3 *)(((int)stk + 16)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t51 = 0x410;
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u47;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t51 = ((((t15 << 2) + t15) << 2) << 2);
        }
        t55 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((t51 + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5));
    }
    return t55;
}

int hudCallGameDraw(int a4, float f4, float f5)
{
    int t1;
    int t4;
    int t6;
    int t11;
    int t18;
    int t24;
    int t38;
    float u39;
    int t42;
    int t43;
    float u46;
    int t15;
    int t54;
    int t27;
    int t50;
    int stk[29];

    *(unsigned int *)(((int)stk + 28)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x1C)) = *(struct mv3 *)(0x8C10DB10); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
    hudBarDrawAlt(*(Stk3 *)(((int)stk + 16)), *(Stk1 *)((int)stk + 16 + 12), (f4 * 0.5f), f5);
    *(float *)(((((int)stk + 28) + 0x1C) + 0x8)) = 0.00999999978f;
    t1 = *(int *)(((int)stk + 28));
    t4 = 0xC;
    if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x8))) != 0) {
    } else {
        t4 = (*(int *)((((t1 * 0x38) + 0x8C343264) + 0x4)));
    }
    t6 = *(int *)0x8C287ADC;
    if (t6 == 4) {
        t11 = 0xC;
        if ((*(int *)((((t1 * 0x38) + 0x8C343264) + 0x78))) != 0) {
        } else {
            t11 = (*(int *)((((t1 * 0x38) + 0x8C343264) + 0x74)));
        }
        t15 = t11;
    }
    if (t6 == 2) {
        if (t4 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 47.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t18 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33A9A0, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 81.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t4 + 0x1), *(Stk3 *)(((int)stk + 4)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t27 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AAE0, 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5));
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 33.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t24 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33A9A0, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 82.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t27 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5));
        }
        t54 = t27;
    } else {
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 83.0f);
        *(float *)(((int)stk + 32)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 151.0f);
        *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 4.0f);
        if ((t4 != 12) || (t15 != 12)) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 6.0f);
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + 9.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
        t38 = ((int (*)(int, int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33A9A0, 0x1, 0xC, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
        u39 = *(float *)(((((int)stk + 28) + 0x10) + 0x0));
        if (t4 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u39;
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = (u39 + 7.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t4 + 0x1), *(Stk3 *)(((int)stk + 16)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t42 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))(0x8C33AAE0, 0x1, *(Stk3 *)(((int)stk + 4)), f4, 1.0f, f5);
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u39;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t43 = ((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((((((t4 << 2) + t4) << 2) << 2) + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5);
        }
        u46 = *(float *)(((int)stk + 32));
        if (t15 != 12) {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u46;
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = (u46 + 7.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            hudCallNumPut((t15 + 0x1), *(Stk3 *)(((int)stk + 16)), f4, f5);
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x1C) + 0x0))) + 25.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t50 = 0x410;
        } else {
            *(float *)(((((int)stk + 28) + 0x1C) + 0x0)) = u46;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x1C)); }
            t50 = ((((t15 << 2) + t15) << 2) << 2);
        }
        t54 = (((int (*)(int, int, Stk3, float, float, float))(sprPutCropV))((t50 + 0x8C33A6D0), 0x1, *(Stk3 *)(((int)stk + 16)), f4, 1.0f, f5));
    }
    return t54;
}
