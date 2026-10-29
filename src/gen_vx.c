/* Straight-line functions with calls and guards (batch gen_vx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int primSprDrawScaleAlpha(int, int, int, int, Stk3, float, float, float);
int countryNamePutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);

int countryNamePutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[21];
    register int t27;
    register int t20;
    register int t21;
    register int t24;

    stk[10] = a8;
    stk[11] = a9;
    stk[12] = a10;
    t27 = a4;
    if ((unsigned int)a4 < (unsigned int)0x12) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -35.0f);
            }
                break;
            case 2:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -31.0f);
            }
                break;
            case 4:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -36.0f);
            }
                break;
            case 6:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -26.0f);
            }
                break;
            case 8:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -48.0f);
            }
                break;
            case 10:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -25.0f);
            }
                break;
            case 12:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -45.0f);
            }
                break;
            case 14:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -41.0f);
            }
                break;
            case 16:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -50.0f);
            }
                break;
            case 18:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -28.0f);
            }
                break;
            case 20:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -28.0f);
            }
                break;
            case 22:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -36.0f);
            }
                break;
            case 24:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -32.0f);
            }
                break;
            case 26:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -28.0f);
            }
                break;
            case 28:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -40.0f);
            }
                break;
            case 30:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -26.0f);
            }
                break;
            case 32:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -39.0f);
            }
                break;
            default:
            {
                *(float *)(((((int)stk + 16) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x18) + 0x0))) + -16.0f);
            }
                break;
        }
        if ((int)a4 < (int)0x8) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
            t20 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t24 = (((((t20 << 2) + t20) << 2) << 2) + 0x8C339CD0);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x18)); }
            t21 = *(int *)((((a4 << 2) + 0x8C10EE84) + 0x0));
            t24 = (((((t21 << 2) + t21) << 2) << 2) + 0x8C338600);
        }
        t27 = (primSprDrawScaleAlpha(t24, 0x100, 0x100, a7, *(Stk3 *)(((int)stk + 4)), 0.78125f, 0.78125f, f4));
    }
    return t27;
}
