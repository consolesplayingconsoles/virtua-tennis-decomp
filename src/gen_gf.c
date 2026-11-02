/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[7]; } Stk7;
int ambEventStart(int, int, int, int, int, int);
int courtFraTexLoad(void);
int entryCountJoined(void);
int entryIsVersus(void);
int fadeScreenStart(int, int, int, int, int, int);
int matchSceneInit(void);
int matchStageSlot(void);
int ndbLoadWaitStart(void);
int nlsndSystemControl(int, int, int);
int scoreInit(void);
int set_event(int, int);
int sprSet173FreeAll(void);
int matchSceneSetup(int a4, int a5);
float cameraBlendVector240(Stk7 s);
float cameraBlendFloat240(float f4, float f5);


float cameraBlendVector240(Stk7 stackArgs)
{
    float blendDuration;
    int xWeight;
    float weightedX;
    int yWeight;
    float weightedY;
    int zWeight;
    float weightedZ;
    int stackWords[21];
    int R1004;
    int R1024;

    R1004 = *(int *)((int)stackWords + 4);
    R1024 = *(int *)((int)stackWords + 24);

    R1024 = stackArgs.w[0];
    stackWords[7] = stackArgs.w[1];
    stackWords[8] = stackArgs.w[2];
    stackWords[9] = stackArgs.w[3];
    stackWords[10] = stackArgs.w[4];
    stackWords[11] = stackArgs.w[5];
    stackWords[12] = stackArgs.w[6];
    blendDuration = *(float *)0x8C02A00C;
    xWeight = *(int *)0x8C287B4C;
    R1004 = xWeight;
    weightedX = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x0))) * (float)((-xWeight) + 0xF0));
    weightedX = weightedX + (float)xWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x0)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x0)) = (weightedX / blendDuration);
    yWeight = *(int *)0x8C287B4C;
    R1004 = yWeight;
    weightedY = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x4))) * (float)((-yWeight) + 0xF0));
    weightedY = weightedY + (float)yWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x4)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x4)) = (weightedY / blendDuration);
    zWeight = *(int *)0x8C287B4C;
    R1004 = zWeight;
    weightedZ = ((*(float *)(((((int)stackWords + 4) + 0x24) + 0x8))) * (float)((-zWeight) + 0xF0));
    weightedZ = weightedZ + (float)zWeight * (*(float *)(((((int)stackWords + 4) + 0x18) + 0x8)));
    *(float *)(((((int)stackWords + 4) + 0x4) + 0x8)) = (weightedZ / blendDuration);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(stackArgs.w[0]) = *(struct mv3 *)((((int)stackWords + 4) + 0x4)); }
    return (float)zWeight;
}

float cameraBlendFloat240(float startValue, float endValue)
{
    int blendWeight;
    float weightedSum;

    blendWeight = *(int *)0x8C287B4C;
    weightedSum = (endValue * (float)((-blendWeight) + 0xF0));
    weightedSum = weightedSum + (float)blendWeight * startValue;
    return (weightedSum / 240.0f);
}
