/* Straight-line functions with calls and guards (batch gen_gz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int sprPutAtAlpha(int, Stk3, float);
int phrasePut(int a4, Stk3 s, float f4);

int phrasePut(int a4, Stk3 s, float f4)
{
    int t27;
    int t20;
    int stk[22];

    stk[11] = s.w[0];
    stk[12] = s.w[1];
    stk[13] = s.w[2];
    t27 = a4;
    if ((unsigned int)a4 >= (unsigned int)0x12) {
    } else {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -28.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C338D80;
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -27.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C338F10;
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -31.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339050;
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -22.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C338E70;
            }
                break;
            case 8:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -52.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C3390A0;
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -26.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C338FB0;
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -43.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339780;
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -37.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339820;
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -34.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339140;
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -31.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C3391E0;
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -28.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339280;
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -42.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339320;
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -27.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C3393C0;
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -27.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339460;
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -21.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339550;
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -25.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339690;
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -37.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                sprPutAtAlpha(0x8C3397D0, *(Stk3 *)(((int)stk + 4)), f4);
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + 37.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C339870;
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 16) + 0x1C) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x1C) + 0x0))) + -19.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
                t20 = 0x8C3394B0;
            }
                break;
        }
        t27 = (sprPutAtAlpha(t20, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t27;
}
