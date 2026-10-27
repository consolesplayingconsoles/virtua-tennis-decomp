/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int markerHitSpawn(int a4, Stk3 s);

int markerHitSpawn(int a4, Stk3 s)
{
    int t0;
    int stk[14];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = set_event(0x2C, 0x8C088DD2);
    *(unsigned int *)((t0 + 0x18)) = (*(int *)(((int)stk + 4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x1C)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    *(unsigned int *)((t0 + 0x14)) = 0x3;
    *(float *)((t0 + 0x28)) = 1.0f;
    return 0x28;
}
