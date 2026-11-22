/* Straight-line functions with calls and guards (batch gen_oy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlLineDrawThick(int a4, int a5, int a6, int a7);

int nlLineDrawThick(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = *(float *)((a5 + 0x4));
    u3 = *(float *)((a6 + 0x4));
    u4 = *(float *)0x8C1DCAA4;
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + (u0 - u1) * (u0 - u1);
    if (u5 == 0.0f) {
        t0 = a6;
        if (!((*(float *)((a5 + 0x8))) > (*(float *)((a6 + 0x8))))) {
            t0 = a5;
        }
        nlLineSendQuadE(a4, t0, a7, (u4 * 0.5f));
        t0 = (a4 + 0x80);
    } else {
        u6 = *(float *)0x8C1DCAA0;
        u7 = (u4 * 0.5f);
        u4 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        u8 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        t1 = (int)((1.0f / u6) * (u0 - u1));
        if ((int)(int)((1.0f / u6) * (u0 - u1)) < 0) {
            t1 = (-(int)((1.0f / u6) * (u0 - u1)));
        }
        t2 = (int)((1.0f / u6) * (u2 - u3));
        if ((int)(int)((1.0f / u6) * (u2 - u3)) < 0) {
            t2 = (-(int)((1.0f / u6) * (u2 - u3)));
        }
        t3 = t2;
        if ((int)t1 < (int)t2) {
            t3 = t1;
        }
        *(float *)((a5 + 0x8)) = (1.0f / (*(float *)((a5 + 0x8))));
        *(float *)((a6 + 0x8)) = (1.0f / (*(float *)((a6 + 0x8))));
        if ((int)t3 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = a4;
        } else {
            *(float *)0x8C454C58 = ((1.0f / (float)t3) * (u0 - u1));
            *(float *)0x8C454C5C = ((1.0f / (float)t3) * (u2 - u3));
            *(float *)0x8C454C60 = (((*(float *)((a5 + 0x8))) - (*(float *)((a6 + 0x8)))) * (1.0f / (float)t3));
            *(float *)0x8C454C64 = (*(float *)((a6 + 0x0)));
            *(float *)0x8C454C70 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
            *(float *)0x8C454C68 = (*(float *)((a6 + 0x4)));
            *(float *)0x8C454C74 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C6C = (*(float *)((a6 + 0x8)));
            *(float *)0x8C454C78 = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
            nlLineSendQuadD(a4, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t2 = (a4 + 0x80);
            if ((int)0x1 < (int)(t3 - 1)) {
                t4 = 0x1;
                t5 = (a4 + 0x80);
                for (;;) {
                    *(float *)0x8C454C64 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
                    *(float *)0x8C454C70 = ((*(float *)0x8C454C70) + (*(float *)0x8C454C58));
                    *(float *)0x8C454C68 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
                    *(float *)0x8C454C74 = ((*(float *)0x8C454C74) + (*(float *)0x8C454C5C));
                    *(float *)0x8C454C6C = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
                    *(float *)0x8C454C78 = ((*(float *)0x8C454C78) + (*(float *)0x8C454C60));
                    nlLineSendQuadC(t5, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x80);
                    if ((int)t4 >= (int)(t3 - 1)) {
                        break;
                    }
                }
                t2 = t5;
            }
            *(float *)0x8C454C64 = ((*(float *)0x8C454C64) + (*(float *)0x8C454C58));
            *(float *)0x8C454C70 = ((*(float *)0x8C454C70) + (*(float *)0x8C454C58));
            *(float *)0x8C454C68 = ((*(float *)0x8C454C68) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C74 = ((*(float *)0x8C454C74) + (*(float *)0x8C454C5C));
            *(float *)0x8C454C6C = ((*(float *)0x8C454C6C) + (*(float *)0x8C454C60));
            *(float *)0x8C454C78 = ((*(float *)0x8C454C78) + (*(float *)0x8C454C60));
            nlLineSendQuadB(t2, 0x8C454C70, 0x8C454C64, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = t2;
        }
        t0 = (t1 + 0x80);
    }
    return t0;
}
