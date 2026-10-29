/* Straight-line functions with calls and guards (batch gen_ro): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void circuitRateStep(int a4, int a5, int a6, int a7);

void circuitRateStep(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(int *)0x8C287C60) == 0) {
        t0 = *(signed char *)0x8C2FBC80;
        *(float *)0x8C2FBC74 = ((*(float *)0x8C2FBC74) - (((*(float *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C1081D8) + 0x0))) - (*(float *)(((0x4 + (((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C1081D8)) + 0x0)))) / (float)((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C1081D8) + 0x8))) * 0xE10)));
        t0 = *(signed char *)0x8C2FBC80;
        if ((*(float *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C1081D8) + 0x4))) > (*(float *)0x8C2FBC74)) {
            t0 = *(signed char *)0x8C2FBC80;
            *(float *)0x8C2FBC74 = (*(float *)(((0x8C1081D8 + ((((unsigned char)t0 << 1) + (unsigned char)t0) << 2)) + 0x4)));
        }
        t0 = *(signed char *)0x8C2FBC81;
        *(float *)0x8C2FBC78 = ((*(float *)0x8C2FBC78) - (((*(float *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C108214) + 0x0))) - (*(float *)(((0x4 + (((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C108214)) + 0x0)))) / (float)((*(int *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C108214) + 0x8))) * 0xE10)));
        t0 = *(signed char *)0x8C2FBC81;
        if ((*(float *)(((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) + 0x8C108214) + 0x4))) > (*(float *)0x8C2FBC78)) {
            t0 = *(signed char *)0x8C2FBC81;
            *(float *)0x8C2FBC78 = (*(float *)(((0x8C108214 + ((((unsigned char)t0 << 1) + (unsigned char)t0) << 2)) + 0x4)));
        }
    }
}
