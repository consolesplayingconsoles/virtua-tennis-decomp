/* Straight-line functions with calls and guards (batch gen_pp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPut(int);
int nlObjPutSetLightDirectionF(float, float, float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
Stk3 vecMake(float, float, float);
int endingFlyObjPut(int a4);

int endingFlyObjPut(int a4)
{
    float u3;
    float u4;
    float u6;
    float u19;
    float u20;
    int stk[11];

    if ((int)(*(int *)0x8C402CA0) <= (int)0x78) {
        *(float *)((a4 + 0x38)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) * 0.99000001f);
        u3 = *(float *)((a4 + 0x34));
        *(float *)(((int)stk + 8)) = (u3 - (((float)(*(int *)0x8C402CA0) / 120.0f) * u3));
        u4 = *(float *)((a4 + 0x3C));
        *(float *)((a4 + 0x3C)) = (u4 * 0.99000001f);
        u6 = (u4 * 0.99000001f);
        *(float *)(((int)stk + 16)) = ((u4 * 0.99000001f) - (((float)(*(int *)0x8C402CA0) / 120.0f) * u6));
    } else {
        *(int *)((int)stk + 4) = ((int)stk + 8);
        *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 0.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((int)stk + 8)); }
    }
    nlScaleVector(((int)stk + 8), ((int)stk + 8), (*(float *)0x8C23D204));
    u19 = *(float *)((a4 + 0x24));
    u20 = *(float *)((a4 + 0x2C));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
    *(Stk3 *)((((int)stk + 8) + 0xC)) = vecMake(u20, 0.0f, (-u19));
    *(unsigned short *)((a4 + 0x86)) = ((*(short *)((a4 + 0x86))) + (int)(((nlLength((a4 + 0xC), a4)) / 3.14159274f) * 65536.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4) = *(struct mv3 *)((a4 + 0xC)); }
    nlAddVector((a4 + 0xC), (((int)stk + 4) + 0x4));
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xC))), (*(float *)((a4 + 0x10))), (*(float *)((a4 + 0x14))));
    nlRotate((((int)stk + 4) + 0x10), ((unsigned short)(*(short *)((a4 + 0x86))) + 0x8000));
    nlRotateAX(0xFFFFE200);
    nlRotateAY(0x2800);
    nlObjPut(0xCB40000);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xC))), ((*(float *)((a4 + 0x10))) + (-1.0f)), (*(float *)((a4 + 0x14))));
    nlRotate((((int)stk + 4) + 0x10), ((-(unsigned short)(*(short *)((a4 + 0x86)))) - 32768));
    nlRotateAX(0x1E00);
    nlRotateAY(0x2800);
    nlObjPutSetLightDirectionF((*(float *)0x8C38B834), (-(*(float *)0x8C38B838)), (*(float *)0x8C38B83C));
    nlObjPut(0xCB46AD8);
    nlObjPutSetLightDirectionV(0x8C38B834);
    return (nlPopMatrix(0x1));
}
