/* Straight-line functions with calls and guards (batch gen_dg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camGetAngles(int, int, int);
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
int stageJpnCourtDraw(int);
int stageJpnScoreboardDraw(void);
int FUN_8c0c37fe(void);

int FUN_8c0c37fe(void)
{
    int t9;
    int t33;
    int t36;
    int t38;
    int t43;
    int t69;
    int stk[68];

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
    *(unsigned int *)(((int)stk + 36)) = 0x8C287ACC;
    stageJpnScoreboardDraw();
    R12 = ((((int)stk + 28) + 0xC));
    R13 = (0x1);
    R5 = (0xC8);
    if (((*(int *)0x8C34B148) != 0)) goto L_8C0C383A;
    R0 = (0x0);
    R6 = (0x8C124058);
    L_8C0C382C:;
    *(unsigned int *)((R12 + R0)) = (*(int *)((R6 + R0)));
    t9 = (unsigned int)(R0 + 0x4) < (unsigned int)R5;
    R0 = ((R0 + 0x4));
    if (t9) goto L_8C0C382C;
    R14 = (R13);
    L_8C0C3870:;
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), R6);
    stageJpnScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlPushMatrix(0x0);
    nlObjPut(0xC890B50);
    nlPopMatrix(0x1);
    nlSetCommonTextureOffset(0xF00);
    stageJpnCourtDraw(R14);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C123D08));
    nlPopMatrix(0x1);
    R11 = (0x8C0EFCD0);
    R14 = (R13);
    R8 = (0x8C0F25B0);
    L_8C0C38BA:;
    R10 = ((R14 << 2));
    if (((*(int *)((R12 + (R14 << 2)))) != 0)) goto L_8C0C38CA;
    *(unsigned int *)((R10 + 0x8C37B930)) = 0x0;
    R0 = (0x8C37B930);
    L_8C0C39EA:;
    t33 = (int)(R14 + 0x1) >= (int)0x2F;
    R14 = ((R14 + 0x1));
    if (t33) goto L_8C0C39F6;
    goto L_8C0C38BA;
    L_8C0C39F6:;
    return R0;
    L_8C0C38CA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((((R14 << 1) + R14) << 2) << 2) + 0x8C1AD3A0) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((R14 << 1) + R14) << 2) << 2) + 0x8C1AD3A0)); }
    t36 = (screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) != 0;
    R9 = ((((((R14 << 1) + R14) << 2) << 2) + 0x8C1AD3A0));
    if (t36) goto L_8C0C3928;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R9 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R9 + 0x18)); }
    t38 = screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    R0 = (t38);
    if ((t38 == 0)) goto L_8C0C39EA;
    L_8C0C3928:;
    t43 = courtAngleInSector((*(short *)(((R14 << 1) + 0x8C123FF8))), (*(short *)(((int)stk + 28))));
    R0 = (t43);
    if ((t43 == 0)) goto L_8C0C39EA;
    *(unsigned int *)((R10 + 0x8C37B930)) = R13;
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)(*(short *)(((0x8C123D08 + ((R14 << 2) << 1)) + 0x4))));
    nlObjPut((*(int *)(((0x8C123D08 + ((R14 << 2) << 1)) + 0x0))));
    nlPopMatrix(0x1);
    R0 = (0x8C123E80);
    R9 = (((R14 << 2) << 1));
    if (((*(int *)((((R14 << 2) << 1) + 0x8C123E80))) == 0)) goto L_8C0C39EA;
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)(*(short *)(((0x8C123E80 + R9) + 0x4))));
    crowdAnimModel((*(int *)(((0x8C123E80 + R9) + 0x0))), R14, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
    nlObjPutLoadTexture((*(int *)(((0x8C123E80 + R9) + 0x0))), 0x8C13293C);
    nlObjPut((*(int *)(((0x8C123E80 + R9) + 0x0))));
    R0 = ((nlPopMatrix(0x1)));
    goto L_8C0C39EA;
    L_8C0C383A:;
    R0 = (R12);
    R6 = ((R12 + R5));
    L_8C0C3840:;
    *(unsigned int *)((R0 + 0x0)) = R13;
    t69 = (unsigned int)(R0 + 0x4) < (unsigned int)R6;
    R0 = ((R0 + 0x4));
    if (t69) goto L_8C0C3840;
    R14 = (0x0);
    goto L_8C0C3870;
}
