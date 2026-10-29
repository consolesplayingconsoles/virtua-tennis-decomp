/* Straight-line functions with calls and guards (batch gen_pl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int countryNameTagPut(int a4, Stk3 s, float f4);

int countryNameTagPut(int a4, Stk3 s, float f4)
{
    int t44;
    int t21;
    int t24;
    int t26;
    int t40;
    int t42;
    int stk[26];

    stk[15] = s.w[0];
    stk[16] = s.w[1];
    stk[17] = s.w[2];
    t44 = a4;
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 20.0f);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 26.0f);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 17.0f);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 22.0f);
            }
                break;
            case 8:
            {
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 24.0f);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 3.0f);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) - 1.0f);
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 8.0f);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 3.0f);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 35.0f);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 29.0f);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 21.0f);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 23.0f);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 28.0f);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 13.0f);
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 6.0f);
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 12.0f);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 28) + 0x20) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x0))) + 37.0f);
            }
                break;
        }
        if ((int)a4 < (int)0x8) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t21 = *(int *)((0x8C10EECC + (a4 << 2)));
            sprPutAtAlpha((((((t21 << 2) + t21) << 2) << 2) + 0x8C339CD0), *(Stk3 *)(((int)stk + 16)), f4);
            *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 22.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t24 = *(int *)(((a4 << 2) + 0x8C10EE84));
            t42 = (sprPutAtAlpha((((((t24 << 2) + t24) << 2) << 2) + 0x8C339CD0), *(Stk3 *)(((int)stk + 4)), f4));
        } else {
            if ((int)a4 < (int)0x10) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
                t26 = *(int *)((0x8C10EECC + (a4 << 2)));
                sprPutAtAlpha((((((t26 << 2) + t26) << 2) << 2) + 0x8C338600), *(Stk3 *)(((int)stk + 16)), f4);
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 22.0f);
            }
            if ((int)a4 >= (int)0x10) {
                *(float *)(((((int)stk + 28) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0x20) + 0x4))) + 13.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x20)); }
            t40 = *(int *)(((a4 << 2) + 0x8C10EE84));
            t42 = (sprPutAtAlpha((((((t40 << 2) + t40) << 2) << 2) + 0x8C338600), *(Stk3 *)(((int)stk + 16)), f4));
        }
        t44 = t42;
    }
    return t44;
}
