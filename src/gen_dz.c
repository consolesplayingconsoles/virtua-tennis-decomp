/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mtxGetPos(int, int, int);
int nlLoadMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlTanf(float);
int nlTranslate(float, float, float);
float padLcdProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

float padLcdProject(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float u9;
    float u10;
    float t13;
    float u14;
    float t17;
    float u18;
    float u23;
    float u24;
    float u25;
    float u27;
    float u28;
    float u29;
    int stk[20];

    stk[9] = a8;
    stk[10] = a9;
    stk[11] = a10;
    *(unsigned int *)(((int)stk + 4)) = a4;
    nlPushMatrix(0x0);
    nlLoadMatrix((*(int *)(((int)stk + 4))));
    nlTranslate((*(float *)(((((int)stk + 4) + 0x20) + 0x0))), (*(float *)(((((int)stk + 4) + 0x20) + 0x4))), (*(float *)(((((int)stk + 4) + 0x20) + 0x8))));
    mtxGetPos((((int)stk + 4) + 0x20), ((((int)stk + 4) + 0x20) + 0x4), ((((int)stk + 4) + 0x20) + 0x8));
    nlPopMatrix(0x1);
    u9 = *(float *)0x8C03009C;
    u10 = *(float *)0x8C0300A0;
    t13 = nlTanf((((*(float *)0x8C287A04) * (*(float *)0x8C0300A4)) / u10));
    u14 = *(float *)0x8C0300B0;
    t17 = nlTanf((((*(float *)0x8C287A04) * (*(float *)0x8C0300B4)) / u10));
    u18 = *(float *)(((((int)stk + 4) + 0x20) + 0x8));
    if ((u18 > (*(float *)0x8C0300B8)) && (1.0f > u18)) {
        *(float *)(((((int)stk + 4) + 0x20) + 0x8)) = 1.0f;
    }
    u23 = *(float *)(((((int)stk + 4) + 0x20) + 0x8));
    u24 = *(float *)(((((int)stk + 4) + 0x20) + 0x0));
    u25 = (-u23);
    if (!(0.0f > u23)) {
        u25 = u23;
    }
    *(float *)((a5 + 0x0)) = (((u24 * (u9 / t13)) / u25) + u9);
    u27 = *(float *)(((((int)stk + 4) + 0x20) + 0x4));
    u28 = *(float *)(((((int)stk + 4) + 0x20) + 0x8));
    u29 = (-u28);
    if (!(0.0f > u28)) {
        u29 = u28;
    }
    *(float *)((a5 + 0x4)) = ((-((u27 * (u14 / t17)) / u29)) + u14);
    *(float *)((a5 + 0x8)) = (*(float *)(((((int)stk + 4) + 0x20) + 0x8)));
    return t17;
}
