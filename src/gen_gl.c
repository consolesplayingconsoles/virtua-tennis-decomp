/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
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
int screenSegVisible(int, Stk3, Stk3);
int stageJpnCourtDraw(int);
int stageJpnScoreboardDraw(void);
int FUN_8c0c37fe(void);

int FUN_8c0c37fe(void)
{
    int t2;
    int t4;
    int t25;
    int t27;
    int t28;
    int t57;
    int t31;
    int t53;
    int t49;
    int t63;
    int t85;
    int t81;
    int t6;
    int t8;
    int t23;
    int t24;
    int t93;
    int t89;
    int stk[68];

    *(unsigned int *)(((int)stk + 36)) = 0x8C287ACC;
    stageJpnScoreboardDraw();
    if ((*(int *)0x8C34B148) == 0) {
        t2 = 0x0;
        for (;;) {
            *(unsigned int *)(((((int)stk + 28) + 0xC) + t2)) = (*(int *)((0x8C124058 + t2)));
            t2 = (t2 + 0x4);
            if ((unsigned int)t2 >= (unsigned int)0xC8) {
                break;
            }
        }
        t6 = 0x1;
        t8 = 0x8C124058;
    } else {
        t4 = (((int)stk + 28) + 0xC);
        for (;;) {
            *(unsigned int *)((t4 + 0x0)) = 0x1;
            t4 = (t4 + 0x4);
            if ((unsigned int)t4 >= (unsigned int)((((int)stk + 28) + 0xC) + 0xC8)) {
                break;
            }
        }
        t6 = 0x0;
        t8 = ((((int)stk + 28) + 0xC) + 0xC8);
    }
    camGetAngles((((int)stk + 28) + 0x4), ((int)stk + 28), t8);
    stageJpnScoreboardDraw();
    courtDrawStageModels((*(short *)(((int)stk + 32))), (*(short *)(((int)stk + 28))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    nlPushMatrix(0x0);
    nlObjPut(0xC890B50);
    nlPopMatrix(0x1);
    nlSetCommonTextureOffset(0xF00);
    stageJpnCourtDraw(t6);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C123D08));
    nlPopMatrix(0x1);
    t25 = 0x1;
    for (;;) {
        if ((*(int *)(((((int)stk + 28) + 0xC) + (t25 << 2)))) == 0) {
            *(unsigned int *)(((t25 << 2) + 0x8C37B930)) = 0x0;
            t93 = 0x8C37B930;
        } else {
            t24 = t25;
            t24 = (t24 << 1);
            t24 = (t24 + t25);
            t23 = 0x8C1AD3A0;
            t24 = (t24 << 2);
            t24 = (t24 << 2);
            t24 = (t24 + t23);
            t23 = t24;
            t23 = (t23 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t23); }
            t23 = t24;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t23); }
            t23 = 0x8C08A0C0;
            t27 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (t27 == 0) {
                t23 = t24;
                t23 = (t23 + 0x24);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(t23); }
                t23 = t24;
                t23 = (t23 + 0x18);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t23); }
                t28 = screenSegVisible(0x0, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
                t57 = t28;
                if (t28 != 0) {
                    t31 = courtAngleInSector((*(short *)(((t25 << 1) + 0x8C123FF8))), (*(short *)(((int)stk + 28))));
                    t53 = t31;
                    if (t31 != 0) {
                        *(unsigned int *)(((t25 << 2) + 0x8C37B930)) = 0x1;
                        nlPushMatrix(0x0);
                        t24 = t25;
                        t24 = (t24 << 2);
                        t24 = (t24 << 1);
                        nlRotateAY((unsigned short)(*(short *)(((0x8C123D08 + t24) + 0x4))));
                        nlObjPut((*(int *)(((0x8C123D08 + t24) + 0x0))));
                        nlPopMatrix(0x1);
                        t23 = (*(int *)((t24 + 0x8C123E80)));
                        t49 = 0x8C123E80;
                        if (t23 != 0) {
                            nlPushMatrix(0x0);
                            nlRotateAY((unsigned short)(*(short *)(((0x8C123E80 + t24) + 0x4))));
                            t23 = 0x8C08CEB6;
                            crowdAnimModel((*(int *)(((0x8C123E80 + t24) + 0x0))), t25, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)(((0x8C123E80 + t24) + 0x0))), 0x8C13293C);
                            nlObjPut((*(int *)(((0x8C123E80 + t24) + 0x0))));
                            t49 = (nlPopMatrix(0x1));
                        }
                        t53 = t49;
                    }
                    t57 = t53;
                }
                t89 = t57;
            } else {
                t63 = courtAngleInSector((*(short *)(((t25 << 1) + 0x8C123FF8))), (*(short *)(((int)stk + 28))));
                t85 = t63;
                if (t63 != 0) {
                    *(unsigned int *)(((t25 << 2) + 0x8C37B930)) = 0x1;
                    nlPushMatrix(0x0);
                    t24 = t25;
                    t24 = (t24 << 2);
                    t24 = (t24 << 1);
                    nlRotateAY((unsigned short)(*(short *)(((0x8C123D08 + t24) + 0x4))));
                    nlObjPut((*(int *)(((0x8C123D08 + t24) + 0x0))));
                    nlPopMatrix(0x1);
                    t23 = (*(int *)((t24 + 0x8C123E80)));
                    t81 = 0x8C123E80;
                    if (t23 != 0) {
                        nlPushMatrix(0x0);
                        nlRotateAY((unsigned short)(*(short *)(((0x8C123E80 + t24) + 0x4))));
                        crowdAnimModel((*(int *)(((0x8C123E80 + t24) + 0x0))), t25, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)(((0x8C123E80 + t24) + 0x0))), 0x8C13293C);
                        nlObjPut((*(int *)(((0x8C123E80 + t24) + 0x0))));
                        t81 = (nlPopMatrix(0x1));
                    }
                    t85 = t81;
                }
                t89 = t85;
            }
            t93 = t89;
        }
        t23 = 0x2F;
        t25 = (t25 + 0x1);
        if ((int)t25 < (int)t23) continue;
        break;
    }
    return t93;
}
