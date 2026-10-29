/* Straight-line functions with calls and guards (batch gen_pf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int camGetAngles(int, int, int, int);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int nlLineSetDiv(float);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int screenSegVisible(int, int, int, Stk3, Stk3);
int stageEspCourtDraw(int);
int stageEspScoreboardDraw(void);
int FUN_8c0c44b6(int a4, int a5, int a6, int a7);

int FUN_8c0c44b6(int a4, int a5, int a6, int a7)
{
    int t8;
    int t32;
    int t35;
    int t39;
    int t52;
    float u57;
    int t64;
    int stk[59];

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
    float F4;
    float F5;
    float F6;
    float F14;
    float F15;
    int T_;
    R11 = ((((int)stk + 28) + 0x8));
    R14 = (0x1);
    R5 = (0xA0);
    if (((*(int *)0x8C34B148) != 0)) goto L_8C0C44F4;
    R4 = (0x0);
    R6 = (0x8C1244EC);
    L_8C0C44E4:;
    t8 = (unsigned int)(R4 + 0x4) < (unsigned int)R5;
    *(unsigned int *)((R11 + R4)) = (*(int *)((R6 + R4)));
    R4 = ((R4 + 0x4));
    if (t8) goto L_8C0C44E4;
    R13 = (R14);
    L_8C0C452C:;
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), R6, a7);
    stageEspScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlPushMatrix(0x0);
    nlObjPut(0xC97BD08);
    nlPopMatrix(0x1);
    nlSetCommonTextureOffset(0xF00);
    stageEspCourtDraw(R13);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C1AEA50));
    nlPopMatrix(0x1);
    R10 = (0x8C0F25B0);
    R12 = (R14);
    R8 = (0x8C08A0C0);
    L_8C0C457A:;
    R13 = ((R12 << 2));
    if (((*(int *)((R11 + (R12 << 2)))) == 0)) goto L_8C0C4678;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((((R12 << 1) + R12) << 2) << 2) + 0x8C1AE390) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((R12 << 1) + R12) << 2) << 2) + 0x8C1AE390)); }
    t32 = (screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) != 0;
    R9 = ((((((R12 << 1) + R12) << 2) << 2) + 0x8C1AE390));
    if (t32) goto L_8C0C45E0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R9 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R9 + 0x18)); }
    t35 = (screenSegVisible(0x0, R5, R6, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) == 0;
    if (t35) goto L_8C0C467E;
    L_8C0C45E0:;
    t39 = (courtAngleInSector((*(short *)(((R12 << 1) + 0x8C1244A4))), (*(short *)(((int)stk + 28))))) == 0;
    if (t39) goto L_8C0C467E;
    *(unsigned int *)((R13 + 0x8C37BAC0)) = R14;
    nlObjPut((*(int *)((R13 + 0x8C1AEA50))));
    if (((*(int *)((R13 + 0x8C1AEAE0))) == 0)) goto L_8C0C467E;
    nlPushMatrix(0x0);
    crowdAnimModel((*(int *)(((0x8C1AEAE0 + R13) + 0x0))), R12, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
    nlObjPutLoadTexture((*(int *)(((0x8C1AEAE0 + R13) + 0x0))), 0x8C13293C);
    nlObjPut((*(int *)(((0x8C1AEAE0 + R13) + 0x0))));
    nlPopMatrix(0x1);
    L_8C0C467E:;
    t52 = (int)(R12 + 0x1) >= (int)0x24;
    R12 = ((R12 + 0x1));
    if (t52) goto L_8C0C468A;
    goto L_8C0C457A;
    L_8C0C468A:;
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C4754), 0.0f);
    u57 = *(float *)0x8C0C475C;
    nlScale(1.0f, 1.0f, u57);
    nlLineSetDiv(u57);
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
    L_8C0C4678:;
    *(unsigned int *)((R13 + 0x8C37BAC0)) = 0x0;
    goto L_8C0C467E;
    L_8C0C44F4:;
    R4 = (R11);
    R6 = ((R11 + R5));
    L_8C0C44FA:;
    *(unsigned int *)((R4 + 0x0)) = R14;
    t64 = (unsigned int)(R4 + 0x4) < (unsigned int)R6;
    R4 = ((R4 + 0x4));
    if (t64) goto L_8C0C44FA;
    R13 = (0x0);
    goto L_8C0C452C;
}
