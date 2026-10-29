/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlScaleVector(int, int, float);
float shotCheckNet(int a4, int a5, float f4, float f5, float f6);

float shotCheckNet(int a4, int a5, float f4, float f5, float f6)
{
    int stk[23];
    register int t0;
    register float u3;
    register float u8;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u19;
    register float u24;
    register float u27;
    register int t50;
    register float u52;
    register float u59;
    register float u101;
    register float u80;
    register float u17;
    register int t35;
    register int t36;
    register int t39;
    register float u55;
    register float u66;
    register float u67;

    t0 = *(int *)((a4 + 0xC5C));
    if (((*(int *)((((((t0 << 1) + t0) << 2) << 1) + 0x8C105FE0))) & 0x40000) == 0) {
        u3 = *(float *)((a5 + 0x20));
        u8 = *(float *)((a5 + 0x2C));
        if (((u3 > 0.0f) - (0.0f > u3)) == ((u8 > 0.0f) - (0.0f > u8))) {
        } else {
            *(float *)(((int)stk + 8)) = 11.75f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x20)) = *(struct mv3 *)((a5 + 0x18)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x14)) = *(struct mv3 *)((a5 + 0x24)); }
            *(float *)(((int)stk + 28)) = f4;
            t13 = (((int)stk + 4) + 0x14);
            t14 = (a5 + 0x24);
            t15 = 0x0;
            t16 = 0x0;
            for (;;) {
                if ((t16 == 0) && ((int)t15 < (int)0x12C)) {
                    *(float *)(((int)stk + 4)) = (*(float *)(((int)stk + 44)));
                    u19 = *(float *)0x8C23D204;
                    if (u19 > 1.0f) {
                        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - ((*(float *)((a5 + 0x70))) * u19));
                        u24 = (1.0f - ((*(float *)0x8C23D204) * 0.00999999978f));
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) * u24);
                        u27 = (1.0f - ((*(float *)0x8C23D204) * 0.00999999978f));
                        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) * u27);
                        nlScaleVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (*(float *)0x8C23D204));
                        t39 = (((int)stk + 4) + 0x8);
                    } else {
                        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - (*(float *)((a5 + 0x70))));
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) * 0.99000001f);
                        *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) * 0.99000001f);
                        t35 = t13;
                        t36 = t14;
                        t39 = (((int)stk + 4) + 0x14);
                    }
                    t13 = t35;
                    t14 = t36;
                    nlAddVector((((int)stk + 4) + 0x20), t39);
                    u17 = (*(float *)(((int)stk + 44)));
                    t50 = (u17 > 0.0f) - (0.0f > u17);
                    u52 = *(float *)((a5 + 0x20));
                    if (u52 > 0.0f) {
                        t13 = 0x1;
                    } else {
                        if (0.0f > u52) {
                            t13 = 0xFFFFFFFF;
                        } else {
                            t13 = 0x0;
                        }
                    }
                    if ((t50 != t13) && (u55 = *(float *)(((int)stk + 40)), 0.349999994f > u55)) {
                        t16 = 0x1;
                    }
                    u59 = *(float *)(((int)stk + 4));
                    if (u59 > 0.0f) {
                        t14 = 0x1;
                    } else {
                        if (0.0f > u59) {
                            t14 = 0xFFFFFFFF;
                        } else {
                            t14 = 0x0;
                        }
                    }
                    if ((t14 != ((u17 > 0.0f) - (0.0f > u17))) && (u66 = *(float *)(((int)stk + 8)), u67 = *(float *)(((int)stk + 40)), u66 > u67)) {
                        break;
                    }
                    t15 = (t15 + 0x1);
                    continue;
                }
                return u17;
            }
            u80 = u17;
        }
        u101 = u80;
    }
    return u101;
}
