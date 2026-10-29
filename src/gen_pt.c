/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camGetAngles(int, int, int, int);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int screenSegVisible(int, int, int, Stk3, Stk3);
int stageRusCourtDraw(int);
int stageRusScoreboardDraw(void);
int FUN_8c0c3e62(int a4, int a5, int a6, int a7);

int FUN_8c0c3e62(int a4, int a5, int a6, int a7)
{
    int t8;
    int t29;
    int t32;
    int t34;
    int t39;
    int t65;
    int stk[57];

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
    int T_;
    R12 = ((((int)stk + 28) + 0x8));
    R13 = (0x1);
    R5 = (0xA0);
    if (((*(int *)0x8C34B148) != 0)) goto L_8C0C3E9A;
    R0 = (0x0);
    R6 = (0x8C124374);
    L_8C0C3E8C:;
    *(unsigned int *)((R12 + R0)) = (*(int *)((R6 + R0)));
    t8 = (unsigned int)(R0 + 0x4) < (unsigned int)R5;
    R0 = ((R0 + 0x4));
    if (t8) goto L_8C0C3E8C;
    R14 = (R13);
    L_8C0C3ED0:;
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), R6, a7);
    stageRusScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlSetCommonTextureOffset(0xF00);
    stageRusCourtDraw(R14);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C1241B0));
    nlPopMatrix(0x1);
    R14 = (R13);
    R8 = (0x8C0EFD20);
    R9 = (0x8C0EFCD0);
    L_8C0C3F0A:;
    R11 = ((R14 << 2));
    if (((*(int *)((R12 + (R14 << 2)))) != 0)) goto L_8C0C3F1A;
    *(unsigned int *)((R11 + 0x8C37BA20)) = 0x0;
    R0 = (0x8C37BA20);
    L_8C0C403A:;
    t29 = (int)(R14 + 0x1) >= (int)0x19;
    R14 = ((R14 + 0x1));
    if (t29) goto L_8C0C4046;
    goto L_8C0C3F0A;
    L_8C0C4046:;
    return R0;
    L_8C0C3F1A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((((R14 << 1) + R14) << 2) << 2) + 0x8C1ADDA8) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((R14 << 1) + R14) << 2) << 2) + 0x8C1ADDA8)); }
    t32 = (screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) != 0;
    R10 = ((((((R14 << 1) + R14) << 2) << 2) + 0x8C1ADDA8));
    if (t32) goto L_8C0C3F78;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R10 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R10 + 0x18)); }
    t34 = screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    R0 = (t34);
    if ((t34 == 0)) goto L_8C0C403A;
    L_8C0C3F78:;
    t39 = courtAngleInSector((*(short *)(((R14 << 1) + 0x8C124340))), (*(short *)(((int)stk + 28))));
    R0 = (t39);
    if ((t39 == 0)) goto L_8C0C403A;
    *(unsigned int *)((R11 + 0x8C37BA20)) = R13;
    nlPushMatrix(0x0);
    nlRotateAY((-(unsigned short)(*(short *)(((0x8C1241B0 + ((R14 << 2) << 1)) + 0x4)))));
    nlObjPut((*(int *)(((0x8C1241B0 + ((R14 << 2) << 1)) + 0x0))));
    nlPopMatrix(0x1);
    R0 = (0x8C124278);
    R10 = (((R14 << 2) << 1));
    if (((*(int *)((((R14 << 2) << 1) + 0x8C124278))) == 0)) goto L_8C0C403A;
    nlPushMatrix(0x0);
    nlRotateAY((-(unsigned short)(*(short *)(((0x8C124278 + R10) + 0x4)))));
    crowdAnimModel((*(int *)(((0x8C124278 + R10) + 0x0))), R14, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
    nlObjPutLoadTexture((*(int *)(((0x8C124278 + R10) + 0x0))), 0x8C13293C);
    nlObjPut((*(int *)(((0x8C124278 + R10) + 0x0))));
    R0 = ((nlPopMatrix(0x1)));
    goto L_8C0C403A;
    L_8C0C3E9A:;
    R0 = (R12);
    R6 = ((R12 + R5));
    L_8C0C3EA0:;
    *(unsigned int *)((R0 + 0x0)) = R13;
    t65 = (unsigned int)(R0 + 0x4) < (unsigned int)R6;
    R0 = ((R0 + 0x4));
    if (t65) goto L_8C0C3EA0;
    R14 = (0x0);
    goto L_8C0C3ED0;
}
