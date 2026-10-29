/* Straight-line functions with calls and guards (batch gen_ow): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
void titleObjTrailPut(int a4, int a5);

void titleObjTrailPut(int a4, int a5)
{
    int t35;
    int t37;
    int t47;
    int stk[34];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x3C)) = *(struct mv6 *)(0x8C127810); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 4) + 0x24)) = *(struct mv6 *)(0x8C127828); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x1C)) = *(struct mv2 *)(0x8C127840); }
    R12 = (0xA);
    R13 = (0x0);
    F12 = (((float)R4 / (float)R5));
    F13 = ((-1.0f));
    F14 = (0.100000001f);
    L_8C0E98EA:;
    nlSubVector3op(((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)), ((((int)stk + 4) + 0x3C) + (((R13 << 1) + R13) << 2)), ((((int)stk + 4) + 0x24) + (((R13 << 1) + R13) << 2)));
    nlScaleVector(((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)), ((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)), F12);
    nlAddVector(((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)), ((((int)stk + 4) + 0x24) + (((R13 << 1) + R13) << 2)));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)) + 0x0))), (*(float *)((((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)) + 0x4))), (*(float *)((((((int)stk + 4) + 0x4) + (((R13 << 1) + R13) << 2)) + 0x8))));
    nlObjPut((*(int *)((((R13 << 2) + (((int)stk + 4) + 0x1C)) + 0x0))));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 4)) = ((R13 << 2) + (((int)stk + 4) + 0x1C));
    R11 = (((R13 * 0x78) + 0x8C42409C));
    R14 = (0x0);
    R8 = ((((R13 << 1) + R13) << 2));
    L_8C0E9962:;
    R9 = ((((R14 << 1) + R14) << 2));
    if (((*(float *)((((((R14 << 1) + R14) << 2) + R11) + 0x4))) == F13)) goto L_8C0E99C4;
    R0 = (R14);
    if (((int)R14 < 0)) goto L_8C0E9982;
    R0 = ((R0 & 0x1));
    L_8C0E998C:;
    if ((R0 == 0)) goto L_8C0E99C4;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)(((R9 + R11) + 0x0))), (*(float *)(((R9 + R11) + 0x4))), (*(float *)(((R9 + R11) + 0x8))));
    nlObjPutTrnsl((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), ((float)(R12 - R14) * F14));
    nlPopMatrix(0x1);
    L_8C0E99C4:;
    t35 = (int)(R14 + 0x1) < (int)R12;
    R14 = ((R14 + 0x1));
    if (t35) goto L_8C0E9962;
    t37 = *(int *)0x8C20D15C;
    R0 = (t37);
    R4 = (t37);
    if (((int)t37 < 0)) goto L_8C0E99D8;
    R0 = ((R0 & 0x1));
    L_8C0E99E2:;
    if ((R0 != 0)) goto L_8C0E99F0;
    if (((int)R4 < (int)((*(int *)0x8C1DC6AC) + 0x1E))) goto L_8C0E9A84;
    L_8C0E99F0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x6C)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x60)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x60)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x54)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x54)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x48)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x48)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x3C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x3C)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x30)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x30)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x24)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0x18)) = *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((R13 * 0x78) + 0x8C42409C) + 0xC)) = *(struct mv3 *)(((R13 * 0x78) + 0x8C42409C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R13 * 0x78) + 0x8C42409C)) = *(struct mv3 *)(((((int)stk + 4) + 0x4) + R8)); }
    R14 = (((R13 * 0x78) + 0x8C42409C));
    R4 = ((((R13 * 0x78) + 0x8C42409C) + 0xC));
    L_8C0E9A84:;
    t47 = (int)(R13 + 0x1) >= (int)0x2;
    R13 = ((R13 + 0x1));
    if (t47) goto L_8C0E9A90;
    goto L_8C0E98EA;
    L_8C0E9A90:;
    return;
    L_8C0E99D8:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0E99E2;
    L_8C0E9982:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0E998C;
}
