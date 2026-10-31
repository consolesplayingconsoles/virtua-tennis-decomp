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
int stageSweDraw(void);
int stage11Draw(void);
int stage12Draw(void);
int stage13Draw(void);
int stage15Draw(void);
int stage16Draw(void);
int stage17Draw(void);
int stage10Draw(void);
int stage14Draw(void);


int stage11Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECB4;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECBC) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5208C0);
    return (nlPopMatrix(0x1));
}

int stage12Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECBC;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECC4) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5208C0);
    return (nlPopMatrix(0x1));
}

int stage13Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECCC;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECD8) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C49C4), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C49CC));
    nlObjPut(0xC5209B8);
    return (nlPopMatrix(0x1));
}

int stage15Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECD8;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECE4) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlObjPut(0xC5207C8);
    return (nlPopMatrix(0x1));
}

int stage16Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECE4;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECEC) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (*(float *)0x8C0C4AF8), 0.0f);
    nlScale(1.0f, 1.0f, (*(float *)0x8C0C4B00));
    nlObjPut(0xC5201F8);
    return (nlPopMatrix(0x1));
}

int stage17Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECEC;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECF4) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    nlObjPut(0xC5207C8);
    return (nlPopMatrix(0x1));
}

int stage10Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    modelCursor = 0x8C1AECA8;
    for (;;) {
        modelAddress = *(int *)((modelCursor + 0x0));
        modelCursor = (modelCursor + 0x4);
        nlObjPut(modelAddress);
        if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECB4) {
            break;
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    nlObjPut(0xC5189E0);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0299999993f, 0.0f);
    nlScale(1.0f, 1.0f, 1.20000005f);
    return (nlPopMatrix(0x1));
}

int stage14Draw(void)
{
    int modelCursor;
    int modelAddress;
    int cameraAngleStack[8];

    if ((*(int *)0x8C34B148) == 0) {
        nlObjPut((*(int *)0x8C1AECC4));
    } else {
        modelCursor = 0x8C1AECC4;
        for (;;) {
            modelAddress = *(int *)((modelCursor + 0x0));
            modelCursor = (modelCursor + 0x4);
            nlObjPut(modelAddress);
            if ((unsigned int)modelCursor >= (unsigned int)0x8C1AECCC) {
                break;
            }
        }
    }
    camGetAngles(((int)cameraAngleStack + 4), (((int)cameraAngleStack + 4) + 0x4));
    courtDrawStageModels((*(short *)(((int)cameraAngleStack + 4))), (*(short *)(((int)cameraAngleStack + 8))), 0x0, 0x0, *(int *)((int)cameraAngleStack + 4), *(int *)((int)cameraAngleStack + 4 + 4), *(int *)((int)cameraAngleStack + 4 + 8), *(int *)((int)cameraAngleStack + 4 + 12), *(int *)((int)cameraAngleStack + 4 + 16), *(int *)((int)cameraAngleStack + 4 + 20), *(int *)((int)cameraAngleStack + 4 + 24), *(int *)((int)cameraAngleStack + 4 + 28));
    return (nlObjPut(0xC5189E0));
}
