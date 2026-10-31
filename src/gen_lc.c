/* Straight-line functions with calls and guards (batch gen_lc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int colliObjInit(int, int, int, int, int, float);
int nlAddVector(int, int);
float nlRandom(void);
int set_event(int, int);
float miniEp2TargetSpawn(int a4);

float miniEp2TargetSpawn(int a4)
{
    int stk[16];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R11;
    register int R13;
    register float F3;
    register float F4;
    register float F12;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_0 = a4;
    v0_2 = set_event(0x118, 0x8C03AA92);
    v0_1 = *(int *)0x8C2FBEF0;
    v0_3 = *(int *)((v0_1 + 0x4));
    *(unsigned int *)((v0_1 + 0x28)) = ((int)((int)((*(int *)((v0_1 + 0x28))) + 0x1) % (int)((*(int *)((((v0_3 * 0x64) + 0x8C10BB08) + 0x58))) * (*(int *)((((v0_3 * 0x64) + 0x8C10BB08) + 0x5C))))));
    v0_1 = *(int *)0x8C2FBEF0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + v0_2)) = *(struct mv3 *)(((*(int *)(((0x8C10BB08 + ((*(int *)((v0_1 + 0x4))) * 0x64)) + 0x60))) + ((*(int *)((v0_1 + 0x28))) * 0x1C))); }
    w0_0 = nlRandom();
    *(unsigned short *)((v0_2 + 0x110)) = (int)(w0_0 * 65536.0f);
    *(unsigned int *)((v0_2 + 0x114)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((v0_0 << 1) + v0_0) << 2) + 0x8C2FC058)) = *(struct mv3 *)((0x104 + v0_2)); }
    *(unsigned short *)(((0x8C2FC094 + (v0_0 << 1)) + 0x0)) = 0x0;
    *(unsigned int *)(((v0_0 << 2) + 0x8C2FC0A0)) = 0x0;
    *(unsigned int *)(((v0_0 << 2) + 0x8C2FC0B4)) = 0x0;
    R1008 = 0x8C10C788;
    R1012 = (*(int *)0x8C10C790);
    R1016 = (v0_0 + 0x2);
    v0_4 = (0x8C2FC0B4);
    v0_0 = (0x4);
    v0_1 = (0x0);
    v0_2 = (v0_2);
    v0_3 = (0x8C0F0520);
    v0_3 = (0x78);
    w0_0 = ((w0_0 * 65536.0f));
    L_8C03AA76:;
    if (((int)v0_1 < (int)(*(int *)(((R1008) + 0xC))))) goto L_8C03AA00;
    return w0_0;
    L_8C03AA00:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((0x104 + v0_2)); }
    v0_4 = R1012;
    nlAddVector((((int)stk + 8) + 0xC), ((((v0_1 << 2) + v0_1) << 2) + v0_4));
    w0_1 = *(float *)((((((v0_1 << 2) + v0_1) << 2) + v0_4) + 0xC));
    R1004 = ((v0_2 + 0x14) + (v0_1 * v0_3));
    colliObjInit((((int)stk + 8) + 0xC), 0x0, 0x0, 0x0, ((v0_2 + 0x14) + (v0_1 * v0_3)), w0_1);
    *(unsigned int *)((((v0_2 + 0x14) + (v0_1 * v0_3)) + 0x30)) = (R1016);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((v0_2 + 0x14) + (v0_1 * v0_3)) + 0x24)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
    *(float *)((((v0_2 + 0x14) + (v0_1 * v0_3)) + 0x5C)) = (*(float *)((((((v0_1 << 2) + v0_1) << 2) + v0_4) + 0x10)));
    *(unsigned int *)((((v0_2 + 0x14) + (v0_1 * v0_3)) + 0x38)) = ((*(int *)((((v0_2 + 0x14) + (v0_1 * v0_3)) + 0x38))) | v0_0);
    v0_4 = (0x5C);
    v0_1 = ((v0_1 + 0x1));
    goto L_8C03AA76;
}
