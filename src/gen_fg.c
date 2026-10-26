/* Straight-line functions with calls and guards (batch gen_fg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int countryNamePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int hudNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int countryNamePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t28;
    int t21;
    int t22;
    int t25;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    t28 = a4;
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 27.0f);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 30.0f);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 21.0f);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 40.0f);
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 39.0f);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 7.0f);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) - 1.0f);
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 11.0f);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 6.0f);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 37.0f);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 32.0f);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 23.0f);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 25.0f);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 30.0f);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 18.0f);
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 37.0f);
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 14.0f);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + 45.0f);
            }
                break;
        }
        if ((int)a4 < (int)0x8) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t21 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t25 = (((((t21 << 2) + t21) << 2) << 2) + 0x8C339CD0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
            t22 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t25 = (((((t22 << 2) + t22) << 2) << 2) + 0x8C338600);
        }
        t28 = (sprPutAtAlpha(t25, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t28;
}

int hudNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t4;
    int t0;
    int t1;
    int t7;
    int t17;
    int t9;
    int t10;
    int t11;
    int t13;
    int t43;
    int t29;
    int stk[29];

    stk[18] = a8;
    stk[19] = a9;
    stk[20] = a10;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x2710)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 16) + 0x38)); }
        t4 = 0x0;
        if ((int)a4 > 0) {
            t0 = a4;
            t1 = 0x0;
            for (;;) {
                t0 = ((int)((int)t0 / (int)0xA));
                t1 = (t1 + 0x1);
                if ((int)t0 <= 0) {
                    break;
                }
            }
            t4 = t1;
        }
        if (a4 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 16)); }
            t7 = *(int *)(((a4 << 2) + 0x8C10F948));
            t29 = (sprPutAtAlpha((((((t7 << 2) + t7) << 2) << 2) + 0x8C33B940), 0x0, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
        } else {
            t17 = 0x8C098498;
            if ((int)t4 > 0) {
                t9 = 0x0;
                t10 = a4;
                for (;;) {
                    t11 = (int)((int)t10 % (int)0xA);
                    t10 = ((int)((int)t10 / (int)0xA));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 16)); }
                    t13 = *(int *)(((t11 << 2) + 0x8C10F948));
                    sprPutAtAlpha((((((t13 << 2) + t13) << 2) << 2) + 0x8C33B940), 0x0, a6, a7, *(Stk3 *)(((int)stk + 4)), f4);
                    t9 = (t9 + 0x1);
                    *(float *)((((int)stk + 16) + 0x0)) = ((*(float *)((((int)stk + 16) + 0x0))) - 15.0f);
                    *(float *)((((int)stk + 16) + 0x8)) = ((*(float *)((((int)stk + 16) + 0x8))) - 0.00999999978f);
                    if ((int)t9 >= (int)t4) {
                        break;
                    }
                }
                t17 = 0x8;
            }
            t29 = t17;
        }
        t43 = t29;
    }
    return t43;
}
