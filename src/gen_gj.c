/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camGetAngles(int, int);
int courtAngleInSector(int, int);
int courtDrawStageModels(int, int, int, int, int, int, int, int, int, int, int, int);
int crowdAnimModel(int, int, int, int, int, int, int, int, int, int);
int nlLineSetDiv(float);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetCommonTextureOffset(int);
int nlTranslate(float, float, float);
int screenSegVisible(int, int, int, int, int, int, int, int, int, int, int, int);
int stageSweCourtDraw(int);
int stageSweScoreboardDraw(void);
int FUN_8c0c2a7a(void);
int FUN_8c0c4784(void);
int FUN_8c0c47f8(void);
int FUN_8c0c48c2(void);
int FUN_8c0c4936(void);
int FUN_8c0c49f8(void);
int FUN_8c0c4a6c(void);
int FUN_8c0c46da(void);
int FUN_8c0c486c(void);

int FUN_8c0c2a7a(void)
{
    int t1;
    int t3;
    int t24;
    int t27;
    int t28;
    int t31;
    int t69;
    float u113;
    int t5;
    int t22;
    int t23;
    int t106;
    int t101;
    int t63;
    int t58;
    int t53;
    int t96;
    int t91;
    int stk[60];

    if ((*(int *)0x8C34B148) == 0) {
        t1 = 0x0;
        for (;;) {
            *(unsigned int *)(((((int)stk + 28) + 0xC) + t1)) = (*(int *)((0x8C123710 + t1)));
            t1 = (t1 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0xA0) {
                break;
            }
        }
        t5 = 0x1;
    } else {
        t3 = (((int)stk + 28) + 0xC);
        for (;;) {
            *(unsigned int *)((t3 + 0x0)) = 0x1;
            t3 = (t3 + 0x4);
            if ((unsigned int)t3 >= (unsigned int)((((int)stk + 28) + 0xC) + 0xA0)) {
                break;
            }
        }
        t5 = 0x0;
    }
    stageSweScoreboardDraw();
    camGetAngles((((int)stk + 28) + 0x8), (((int)stk + 28) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 36))), (*(short *)(((int)stk + 32))), 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20), *(int *)((int)stk + 28 + 24), *(int *)((int)stk + 28 + 28));
    stageSweCourtDraw(t5);
    nlPushMatrix(0x0);
    nlObjPut(0xC890CA8);
    nlPopMatrix(0x1);
    nlSetCommonTextureOffset(0xF00);
    nlPushMatrix(0x0);
    nlObjPut((*(int *)0x8C123504));
    nlPopMatrix(0x1);
    t24 = 0x1;
    for (;;) {
        *(unsigned int *)(((int)stk + 28)) = (t24 << 2);
        if ((*(int *)((((t24 << 2) + (((int)stk + 28) + 0xC)) + 0x0))) == 0) {
            *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x8C37B7F0)) = 0x0;
            t106 = t22;
        } else {
            t23 = t24;
            t23 = (t23 << 1);
            t23 = (t23 + t24);
            t23 = (t23 << 2);
            t23 = (t23 << 2);
            t23 = (t23 + 0x8C1AC380);
            t22 = ((int)stk + 16);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)((t23 + 0xC)); }
            t22 = ((int)stk + 4);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)(t23); }
            t27 = screenSegVisible(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t27 == 0) {
                t22 = ((int)stk + 16);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)((t23 + 0x24)); }
                t22 = ((int)stk + 4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t22) = *(struct mv3 *)((t23 + 0x18)); }
                t28 = screenSegVisible(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                if (t28 != 0) {
                    t31 = courtAngleInSector((*(short *)(((t24 << 1) + 0x8C1236D4))), (*(short *)(((int)stk + 32))));
                    if (t31 != 0) {
                        *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x8C37B7F0)) = 0x1;
                        nlPushMatrix(0x0);
                        t23 = t24;
                        t23 = (t23 << 2);
                        t23 = (t23 << 1);
                        *(unsigned int *)(((int)stk + 28)) = t23;
                        t23 = (t23 + 0x8C123504);
                        nlRotateAY((-(unsigned short)(*(short *)((t23 + 0x4)))));
                        nlObjPut((*(int *)((t23 + 0x0))));
                        nlPopMatrix(0x1);
                        t22 = (*(int *)((((*(int *)(((int)stk + 28))) + 0x8C1235EC) + 0x0)));
                        if (t22 != 0) {
                            nlPushMatrix(0x0);
                            t23 = (*(int *)(((int)stk + 28)));
                            t23 = (t23 + 0x8C1235EC);
                            nlRotateAY((-(unsigned short)(*(short *)((t23 + 0x4)))));
                            crowdAnimModel((*(int *)((t23 + 0x0))), t24, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                            nlObjPutLoadTexture((*(int *)((t23 + 0x0))), 0x8C13293C);
                            nlObjPut((*(int *)((t23 + 0x0))));
                            nlPopMatrix(0x1);
                        } else {
                            t53 = t22;
                        }
                        t58 = t53;
                    }
                    t63 = t58;
                }
                t101 = t63;
            } else {
                t69 = courtAngleInSector((*(short *)(((t24 << 1) + 0x8C1236D4))), (*(short *)(((int)stk + 32))));
                if (t69 != 0) {
                    *(unsigned int *)(((*(int *)(((int)stk + 28))) + 0x8C37B7F0)) = 0x1;
                    nlPushMatrix(0x0);
                    t23 = t24;
                    t23 = (t23 << 2);
                    t23 = (t23 << 1);
                    *(unsigned int *)(((int)stk + 28)) = t23;
                    t23 = (t23 + 0x8C123504);
                    nlRotateAY((-(unsigned short)(*(short *)((t23 + 0x4)))));
                    nlObjPut((*(int *)((t23 + 0x0))));
                    nlPopMatrix(0x1);
                    t22 = (*(int *)((((*(int *)(((int)stk + 28))) + 0x8C1235EC) + 0x0)));
                    if (t22 != 0) {
                        nlPushMatrix(0x0);
                        t23 = (*(int *)(((int)stk + 28)));
                        t23 = (t23 + 0x8C1235EC);
                        nlRotateAY((-(unsigned short)(*(short *)((t23 + 0x4)))));
                        crowdAnimModel((*(int *)((t23 + 0x0))), t24, 0x0, 0x0, *(int *)((int)stk + 28), *(int *)((int)stk + 28 + 4), *(int *)((int)stk + 28 + 8), *(int *)((int)stk + 28 + 12), *(int *)((int)stk + 28 + 16), *(int *)((int)stk + 28 + 20));
                        nlObjPutLoadTexture((*(int *)((t23 + 0x0))), 0x8C13293C);
                        nlObjPut((*(int *)((t23 + 0x0))));
                        nlPopMatrix(0x1);
                    } else {
                        t91 = t22;
                    }
                    t96 = t91;
                }
                t101 = t96;
            }
            t106 = t101;
        }
        t22 = t106;
        t24 = (t24 + 0x1);
        if ((int)t24 < (int)0x1D) continue;
        break;
    }
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C2D7C), 0.0f);
    u113 = *(float *)0x8C0C2D84;
    nlScale(1.0f, 1.0f, u113);
    nlLineSetDiv(u113);
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c4784(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECB4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECBC) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5208C0);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c47f8(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECBC;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECC4) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5208C0);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c48c2(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECCC;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECD8) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5209B8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c4936(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECD8;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECE4) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlObjPut(0xC5207C8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c49f8(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECE4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECEC) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C4AF8), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C4B00));
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c4a6c(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECEC;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECF4) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlObjPut(0xC5207C8);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c46da(void)
{
    int t0;
    int t1;
    int stk[8];

    t0 = 0x8C1AECA8;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        nlObjPut(t1);
        if ((unsigned int)t0 >= (unsigned int)0x8C1AECB4) {
            break;
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    return (nlPopMatrix(0x1));
}

int FUN_8c0c486c(void)
{
    int t3;
    int t4;
    int stk[8];

    if ((*(int *)0x8C34B148) == 0) {
        nlObjPut((*(int *)0x8C1AECC4));
    } else {
        t3 = 0x8C1AECC4;
        for (;;) {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPut(t4);
            if ((unsigned int)t3 >= (unsigned int)0x8C1AECCC) {
                break;
            }
        }
    }
    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    return (nlObjPut(0xC5189E0));
}
