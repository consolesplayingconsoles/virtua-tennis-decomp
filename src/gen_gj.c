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
