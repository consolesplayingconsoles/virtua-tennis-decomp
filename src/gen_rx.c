/* Straight-line functions with calls and guards (batch gen_rx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
void bodyInit(int a4, Stk2 s, float f4, float f5);

void bodyInit(int a4, Stk2 s, float f4, float f5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[214];

    stk[204] = s.w[0];
    stk[205] = s.w[1];
    *(unsigned int *)((((int)stk + 4) + 0x30C)) = a4;
    *(float *)((((int)stk + 4) + 0x310)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
    *(float *)((((int)stk + 4) + 0x314)) = f5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x318 + ((int)stk + 4))) = *(struct mv3 *)(0x8C1016D4); }
    t1 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x18C + ((int)stk + 4)) + t1)) = *(struct mv3 *)((0x330 + ((int)stk + 4))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 4) + 0xC) + t1)) = *(struct mv3 *)((0x330 + ((int)stk + 4))); }
        t1 = (t1 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)0x180) {
            break;
        }
    }
    t1 = ((int)stk + 4);
    t2 = (((int)stk + 4) + 804);
    t3 = (*(int *)(((0x32C + ((int)stk + 4)) + 0x0)));
    for (;;) { t0 = *(int *)t1; t1 = (t1 + 4); if ((unsigned int)t2 < (unsigned int)t1) break; *(unsigned int *)t3 = t0; t3 = (t3 + 4); }
}
