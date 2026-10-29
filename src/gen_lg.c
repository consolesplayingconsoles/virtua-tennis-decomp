/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int colliObjInit(int, int, int, int, int, float);
int nlAddVector(int, int);
float nlRandom(void);
int set_event(int, int);
float miniEp2TargetSpawn(int a4);

float miniEp2TargetSpawn(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    float t11;
    int t23;
    float u25;
    int stk[16];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F4;
    float F12;
    float F13;
    int T_;
    R4 = a4;
    t0 = set_event(0x118, 0x8C03AA92);
    t1 = *(int *)0x8C2FBEF0;
    t2 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x28)) = ((int)((int)((*(int *)((t1 + 0x28))) + 0x1) % (int)((*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x58))) * (*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x5C))))));
    t7 = *(int *)0x8C2FBEF0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + t0)) = *(struct mv3 *)(((*(int *)(((0x8C10BB08 + ((*(int *)((t7 + 0x4))) * 0x64)) + 0x60))) + ((*(int *)((t7 + 0x28))) * 0x1C))); }
    t11 = nlRandom();
    *(unsigned short *)((t0 + 0x110)) = (int)(t11 * 65536.0f);
    *(unsigned int *)((t0 + 0x114)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((R4 << 1) + R4) << 2) + 0x8C2FC058)) = *(struct mv3 *)((0x104 + t0)); }
    *(unsigned short *)(((0x8C2FC094 + (R4 << 1)) + 0x0)) = 0x0;
    *(unsigned int *)(((R4 << 2) + 0x8C2FC0A0)) = 0x0;
    *(unsigned int *)(((R4 << 2) + 0x8C2FC0B4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x8C10C788;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)0x8C10C790);
    *(unsigned int *)(((int)stk + 16)) = (R4 + 0x2);
    R0 = (0x8C2FC0B4);
    R10 = (0x4);
    R12 = (0x0);
    R14 = (t0);
    R8 = (0x8C0F0520);
    R9 = (0x78);
    F0 = ((t11 * 65536.0f));
    L_8C03AA76:;
    if (((int)R12 < (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0xC))))) goto L_8C03AA00;
    return F0;
    L_8C03AA00:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((0x104 + R14)); }
    t23 = *(int *)(((int)stk + 12));
    nlAddVector((((int)stk + 8) + 0xC), ((((R12 << 2) + R12) << 2) + t23));
    u25 = *(float *)((((((R12 << 2) + R12) << 2) + t23) + 0xC));
    *(int *)((int)stk + 4) = ((R14 + 0x14) + (R12 * R9));
    colliObjInit((((int)stk + 8) + 0xC), 0x0, 0x0, 0x0, ((R14 + 0x14) + (R12 * R9)), u25);
    *(unsigned int *)((((R14 + 0x14) + (R12 * R9)) + 0x30)) = (*(int *)(((int)stk + 16)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R14 + 0x14) + (R12 * R9)) + 0x24)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
    *(float *)((((R14 + 0x14) + (R12 * R9)) + 0x5C)) = (*(float *)((((((R12 << 2) + R12) << 2) + t23) + 0x10)));
    *(unsigned int *)((((R14 + 0x14) + (R12 * R9)) + 0x38)) = ((*(int *)((((R14 + 0x14) + (R12 * R9)) + 0x38))) | R10);
    R0 = (0x5C);
    R12 = ((R12 + 0x1));
    goto L_8C03AA76;
}
