/* Straight-line functions with calls and guards (batch gen_od): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int colliObjInit(int, int, int, int, int, float);
int nlAddVector(int, int);
int set_event(int, int);
int miniLobTargetSpawn(int a4);

int miniLobTargetSpawn(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register float u14;
    register int t18;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = set_event(0x118, 0x8C039788);
    *(unsigned int *)((t0 + 0x110)) = 0x0;
    t1 = *(int *)0x8C2FBEF0;
    t2 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x28)) = ((int)((int)((*(int *)((t1 + 0x28))) + 0x1) % (int)((*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x58))) * (*(int *)((((t2 * 0x64) + 0x8C10BB08) + 0x5C))))));
    t7 = *(int *)0x8C2FBEF0;
    t8 = *(int *)(((int)stk + 8));
    t10 = *(int *)((t7 + 0x28));
    t11 = *(int *)(((0x8C10BB08 + ((*(int *)((t7 + 0x4))) * 0x64)) + 0x60));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t8 << 1) + t8) << 2) + 0x8C2FC0D4)) = *(struct mv3 *)((t11 + (t10 * 0x1C))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x104 + t0)) = *(struct mv3 *)((t11 + (t10 * 0x1C))); }
    *(float *)((t0 + 0x114)) = 0.0f;
    t12 = *(int *)0x8C10C700;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)((0x104 + t0)); }
    nlAddVector((((int)stk + 8) + 0x4), t12);
    u14 = *(float *)((t12 + 0xC));
    *(int *)((int)stk + 4) = (0x14 + t0);
    colliObjInit((((int)stk + 8) + 0x4), 0x0, 0x0, 0x0, (0x14 + t0), u14);
    *(unsigned int *)((t0 + 0x44)) = ((*(int *)(((int)stk + 8))) + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x38)) = *(struct mv3 *)((((int)stk + 4) + 0x8)); }
    *(float *)((t0 + 0x70)) = (*(float *)((t12 + 0x10)));
    t18 = *(int *)(((t0 + 0x14) + 0x38));
    *(unsigned int *)(((t0 + 0x14) + 0x38)) = (t18 | 0x4);
    return (t18 | 0x4);
}
