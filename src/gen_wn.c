/* Straight-line functions with calls and guards (batch gen_wn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[16]; } Stk16;
int set_event(int, int);
int hudImpactSpawn(int a4, Stk16 s, float f4);

int hudImpactSpawn(int a4, Stk16 s, float f4)
{
    int stk[28];
    register int t0;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    stk[7] = s.w[3];
    stk[8] = s.w[4];
    stk[9] = s.w[5];
    stk[10] = s.w[6];
    stk[11] = s.w[7];
    stk[12] = s.w[8];
    stk[13] = s.w[9];
    stk[14] = s.w[10];
    stk[15] = s.w[11];
    stk[16] = s.w[12];
    stk[17] = s.w[13];
    stk[18] = s.w[14];
    stk[19] = s.w[15];
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = set_event(0x64, 0x8C086182);
    if ((*(int *)0x8C287ADC) == 4) {
        *(unsigned int *)((t0 + 0x14)) = 0x1;
    } else {
        *(unsigned int *)((t0 + 0x14)) = 0x5;
    }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((t0 + 0x18)) = *(struct mv16 *)((((int)stk + 4) + 0xC)); }
    *(float *)((t0 + 0x58)) = (*(float *)(((int)stk + 8)));
    *(float *)((t0 + 0x5C)) = (*(float *)0x8C086430);
    *(unsigned int *)((t0 + 0x60)) = (*(int *)(((int)stk + 4)));
    return 0x60;
}
