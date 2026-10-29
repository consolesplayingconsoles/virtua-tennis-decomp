/* Straight-line functions with calls and guards (batch gen_pj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int camProject(int, int, Stk3);
int camWorldToView(Stk4);
int set_event(int, int);
int miniPointPopSpawn(int a4, int a5, int a6, Stk3 s);

int miniPointPopSpawn(int a4, int a5, int a6, Stk3 s)
{
    int t1;
    int t27;
    int t6;
    int t18;
    int t23;
    int t24;
    int t25;
    int stk[27];

    stk[16] = s.w[0];
    stk[17] = s.w[1];
    stk[18] = s.w[2];
    *(unsigned int *)(((int)stk + 40)) = a4;
    t1 = *(int *)(((*(int *)0x8C2FBEF0) + 0x20));
    t27 = t1;
    if ((t1 == 1) || (t1 == 2)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x20)); }
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x18);
        *(int *)((int)stk + 16) = (((int)stk + 20) + 0x18);
        camWorldToView(*(Stk4 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x1C)); }
        camProject((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x1C), *(Stk3 *)(((int)stk + 4)));
        *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 320.0f);
        *(float *)(((int)stk + 32)) = (240.0f - (*(float *)(((int)stk + 32))));
        t6 = set_event(0x2C, 0x8C03B892);
        *(float *)((t6 + 0x14)) = (*(float *)(((int)stk + 36)));
        if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x0))) == 3) {
            *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + 48.0f);
        }
        *(float *)((t6 + 0x18)) = (*(float *)(((int)stk + 32)));
        *(float *)((t6 + 0x1C)) = 0.5f;
        *(unsigned int *)((t6 + 0x24)) = 0x46;
        *(unsigned int *)0x8C2FC0C8 = ((*(int *)0x8C2FC0C8) + 0x1);
        t18 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
        if (t18 != 3) {
            if (t18 == 1) {
                *(unsigned int *)0x8C2FC0C8 = 0x1;
            }
        } else {
            *(unsigned int *)0x8C2FC0C8 = 0x1;
        }
        t23 = *(int *)0x8C2FC0C8;
        *(unsigned int *)((t6 + 0x28)) = t23;
        t24 = *(int *)(((int)stk + 40));
        *(unsigned int *)((t6 + 0x20)) = (t24 * t23);
        t25 = *(int *)0x8C2FBEF0;
        *(unsigned int *)((t25 + 0x38)) = ((*(int *)((t25 + 0x38))) + (t24 * t23));
        t27 = t18;
    }
    return t27;
}
