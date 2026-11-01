/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int set_event(int, int);
void evBallMarkSpawn(int a4, Stk3 s);

void evBallMarkSpawn(int a4, Stk3 s)
{
    int stk[15];
    int t17;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    v0_0 = a4;
    R1004 = v0_0;
    if (((*(int *)0x8C287C60) != 0)) goto L_8C0DA2D4;
    v0_2 = *(int *)0x8C20D14C;
    v0_1 = (v0_2);
    v0_0 = (v0_2);
    if ((v0_2 == 1)) goto L_8C0DA2D4;
    v0_1 = (v0_0);
    if ((v0_0 != 6)) goto L_8C0DA26A;
    v0_0 = *(int *)0x8C20D150;
    v0_1 = (v0_0);
    if ((v0_0 != 1)) goto L_8C0DA2D4;
    L_8C0DA26A:;
    v0_1 = *(int *)0x8C1891E8;
    v0_0 = (v0_1);
    if (((int)v0_1 > (int)0x9)) goto L_8C0DA2D4;
    v0_1 = (0x8C1D5664);
    if (((*(int *)(((v0_0 << 2) + 0x8C1D5664))) == 0)) goto L_8C0DA2D4;
    t17 = *(int *)0x8C287B3C;
    v0_0 = (t17);
    if (((0x40 & t17) != 0)) goto L_8C0DA2D4;
    if (((v0_0 & 0x8) != 0)) goto L_8C0DA2D4;
    if (((int)(*(int *)0x8C287B2C) > 0)) goto L_8C0DA2D4;
    v0_1 = (0x8C1D568C);
    if (((int)(*(int *)0x8C1D568C) >= (int)0x64)) goto L_8C0DA2D4;
    v0_0 = set_event(0x2C, 0x8C0DA1BC);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) + 0x1);
    w0_0 = *(float *)0x8C23D204;
    *(unsigned int *)((v0_0 + 0x28)) = (int)(600.0f / w0_0);
    *(unsigned int *)((v0_0 + 0x24)) = (int)(600.0f / w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x14)) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    *(unsigned int *)((v0_0 + 0x20)) = (R1004);
    L_8C0DA2D4:;
}
