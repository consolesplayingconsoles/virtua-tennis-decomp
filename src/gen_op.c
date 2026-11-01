/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int set_event(int, int);
void effHitFlashSpawn(int a4, Stk3 s, float f4);

void effHitFlashSpawn(int a4, Stk3 s, float f4)
{
    int t4;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    float F2;
    float F3;
    float F4;
    int T_;
    float R1004;
    R1004 = *(float *)((int)stk + 4);
    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    R4 = a4;
    F4 = f4;
    R1004 = F4;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C082EF4;
    if (((*(int *)0x8C421F60) != 0)) goto L_8C082EF4;
    t4 = set_event(0x2C, 0x8C082DCA);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    *(float *)((t4 + 0x20)) = 1.0f;
    *(unsigned int *)((t4 + 0x24)) = 0x0;
    *(float *)((t4 + 0x28)) = ((R1004) / 1.5f);
    *(unsigned int *)0x8C18160C = ((*(int *)0x8C18160C) + 0x1);
    R0 = (0x28);
    L_8C082EF4:;
}
