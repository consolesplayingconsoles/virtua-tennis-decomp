/* Straight-line functions with calls and guards (batch gen_hx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int primRectFrame();
extern int primRectInc();
int sprPutAtAlpha(int, Stk3, float);
Stk3 vecMake(float, float, float);
int infoWinDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int infoWinDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t1;
    int t5;
    int t7;
    int t12;
    int t17;
    int t24;
    int t27;
    int t32;
    int t33;
    int t34;
    float u36;
    float u42;
    float u19;
    float u35;
    int stk[37];

    stk[26] = a8;
    stk[27] = a9;
    stk[28] = a10;
    *(unsigned int *)(((int)stk + 32)) = a5;
    t1 = *(int *)0x8C287C64;
    *(float *)(((((int)stk + 28) + 0x4C) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x4C) + 0x8))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0x10)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
    *(float *)(((((int)stk + 28) + 0x10) + 0x8)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x8))) + 0.100000001f);
    *(unsigned int *)(((int)stk + 40)) = (((((int)(f4 * 255.0f) & 0xFF) << 16) << 8) | 0xFFFFFF);
    *(unsigned int *)(((int)stk + 36)) = ((((int)(f4 * 180.0f) & 0xFF) << 16) << 8);
    if ((*(int *)(((int)stk + 32))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
        t5 = ((int (*)(int, int, int, int, Stk3))(primRectFrame))(0x34, 0xF, 0x1, (*(int *)(((int)stk + 40))), *(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t7 = ((int (*)(int, int, int, Stk3))(primRectInc))(0x34, 0xF, (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)));
    } else {
        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + (-1.0f)), (*(float *)(((((int)stk + 28) + 0x4C) + 0x4))), (*(float *)(((((int)stk + 28) + 0x4C) + 0x8))));
        t12 = ((int (*)(int, int, int, int))(primRectFrame))(0x34, 0xF, 0x1, (*(int *)(((int)stk + 40))));
        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + (-1.0f)), (*(float *)(((((int)stk + 28) + 0x10) + 0x4))), (*(float *)(((((int)stk + 28) + 0x10) + 0x8))));
        t17 = ((int (*)(int, int, int, int, int, int, int, int))(primRectInc))(0x34, 0xF, (*(int *)(((int)stk + 36))), 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12));
        u19 = (-1.0f);
    }
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + -26.0f), ((*(float *)(((((int)stk + 28) + 0x4C) + 0x4))) + 8.0f), 0.150000006f);
    t24 = *(int *)(((int)stk + 32));
    t27 = (sprPutAtAlpha(0x8C33A680, *(Stk3 *)((int)stk + 16), f4));
    if (t24 != 0) {
        *(float *)(((((int)stk + 28) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + -36.0f);
        *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + -35.0f);
        t27 = 0x8C09F124;
    }
    *(unsigned int *)(((int)stk + 28)) = 0x8C33A630;
    t32 = t27;
    t33 = t1;
    t34 = a4;
    u36 = u19;
    for (;;) {
        if (t33 == 0) {
            break;
        }
        t32 = 0x8C09F244;
        u36 = (*(float *)((t32 + 0x0)));
        t32 = 0x8C09F248;
        u42 = *(float *)((t32 + 0x0));
        if ((*(int *)(((int)stk + 32))) == 0) {
            *(float *)(((((int)stk + 28) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + u42);
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) + u42);
            if (t34 != 0) {
                t32 = 0x8C09F24C;
                u35 = (*(float *)((t32 + 0x0)));
                t32 = 0x4;
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + u35), ((*(float *)(((((int)stk + 28) + 0x4C) + t32))) + u36), 0.150000006f);
                t32 = (sprPutAtAlpha((*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), f4));
                t34 = (t34 - 1);
            }
        } else {
            *(float *)(((((int)stk + 28) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) - u42);
            *(float *)(((((int)stk + 28) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x10) + 0x0))) - u42);
            if (t34 != 0) {
                t32 = 0x8C09F250;
                u35 = (*(float *)((t32 + 0x0)));
                t32 = 0x4;
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((((int)stk + 28) + 0x4C) + 0x0))) + u35), ((*(float *)(((((int)stk + 28) + 0x4C) + t32))) + u36), 0.150000006f);
                t32 = (sprPutAtAlpha((*(int *)(((int)stk + 28))), *(Stk3 *)((int)stk + 16), f4));
                t34 = (t34 - 1);
            }
        }
        t32 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x4C)); }
        t32 = (((int (*)(int, int, int, int, Stk3))(primRectFrame))(0x11, 0xF, 0x1, (*(int *)(((int)stk + 40))), *(Stk3 *)(((int)stk + 16))));
        t32 = 0xC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x10)); }
        t32 = (((int (*)(int, int, int, Stk3))(primRectInc))(0x11, 0xF, (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4))));
        t33 = (t33 - 1);
    }
    return t32;
}
