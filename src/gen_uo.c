/* Straight-line functions with calls and guards (batch gen_uo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int fadeQuadDrawB(int, int, int, float);
int markerDraw(int a4, Stk3 s, float f4);

int markerDraw(int a4, Stk3 s, float f4)
{
    int stk[19];
    register int t18;
    register float u14;
    register float u35;
    register int t66;
    register int t56;
    register int t44;
    register int t28;

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    t18 = a4;
                    if (a4 != 4) {
                    } else {
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - 59.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - 9.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) + 83.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 6.0f);
                        *(float *)0x8C33EF54 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                        *(float *)0x8C33EF58 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EF5C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        fadeQuadDrawB(0x100, 0x100, 0x8C33EF50, f4);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - 44.0f);
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 19.0f);
                        *(float *)0x8C33EFA4 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                        *(float *)0x8C33EFA8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EFAC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        fadeQuadDrawB(0x100, 0x100, 0x8C33EFA0, f4);
                        u14 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
                        *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (u14 + 92.0f);
                        *(float *)0x8C33EFF4 = (u14 + 92.0f);
                        *(float *)0x8C33EFF8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                        *(float *)0x8C33EFFC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                        t18 = (fadeQuadDrawB(0x100, 0x100, 0x8C33EFF0, f4));
                    }
                    t28 = t18;
                } else {
                    *(float *)0x8C33E824 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                    *(float *)0x8C33E828 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                    *(float *)0x8C33E82C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                    t28 = (fadeQuadDrawB(0x100, 0x100, 0x8C33E820, f4));
                }
                t44 = t28;
            } else {
                *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) - 7.0f);
                u35 = *(float *)(((((int)stk + 4) + 0x1C) + 0x0));
                *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = (u35 + 5.0f);
                *(float *)0x8C33E8C4 = (u35 + 5.0f);
                *(float *)0x8C33E8C8 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                *(float *)0x8C33E8CC = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                fadeQuadDrawB(0x100, 0x100, 0x8C33E8C0, f4);
                *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + 19.0f);
                *(float *)0x8C33E914 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
                *(float *)0x8C33E918 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
                *(float *)0x8C33E91C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
                t44 = (fadeQuadDrawB(0x100, 0x100, 0x8C33E910, f4));
            }
            t56 = t44;
        } else {
            *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x0))) - (1.0f + 1.0f));
            *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x1C) + 0x4))) + (1.0f + 1.0f));
            *(float *)0x8C33E964 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
            *(float *)0x8C33E968 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
            *(float *)0x8C33E96C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
            t56 = (fadeQuadDrawB(0x100, 0x100, 0x8C33E960, f4));
        }
        t66 = t56;
    } else {
        *(float *)0x8C33E874 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x0)));
        *(float *)0x8C33E878 = (*(float *)(((((int)stk + 4) + 0x1C) + 0x4)));
        *(float *)0x8C33E87C = (*(float *)(((((int)stk + 4) + 0x1C) + 0x8)));
        t66 = (fadeQuadDrawB(0x100, 0x100, 0x8C33E870, f4));
    }
    return t66;
}
