/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int set_event(int, int);
int evCrowdClapStart(int a4);

int evCrowdClapStart(int a4)
{
    int stk[2];

    int R1;
    int R2;
    int R3;
    int R5;
    float F2;
    float F3;
    int T_;
    int v0_0;
    int v0_1;
    v0_0 = a4;
    if (((*(int *)0x8C20D14C) != 6)) goto L_8C0D93EE;
    v0_1 = *(int *)0x8C287D5C;
    v0_0 = (v0_1);
    if ((v0_1 == 3)) goto L_8C0D941A;
    L_8C0D93EE:;
    v0_1 = *(int *)0x8C40C284;
    v0_0 = (v0_1);
    if ((v0_1 == 1)) goto L_8C0D941A;
    v0_0 = set_event(0x18, 0x8C0D9308);
    *(unsigned int *)0x8C40C27C = v0_0;
    *(unsigned int *)0x8C40C284 = 0x1;
    *(unsigned int *)((v0_0 + 0x14)) = (int)(20.0f / (*(float *)0x8C23D204));
    v0_0 = (v0_0);
    L_8C0D941A:;
    return v0_0;
}
