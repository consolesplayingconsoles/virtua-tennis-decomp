/* Straight-line functions with calls and guards (batch gen_of): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int lightPlayerApply(int);
int lightRestore(int, int, int, int, int, int, int, int, int, int, int);
int nlCalcPoint(int, int);
int nlLoadMatrix(int);
int nlObjPut(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutSetSaturate(float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int playerDrawNodeFacing(int, int, int, int, int, int);
int sklDrawNode(int);
Stk3 vecMake(float, float, float);
int playerDrawModel(int a4);

int playerDrawModel(int a4)
{
    int t0;
    int t28;
    int t33;
    int t39;
    int t49;
    int t25;
    int t26;
    int t62;
    int t75;
    int t88;
    int t89;
    int stk[17];

    t0 = *(int *)((a4 + 0x38));
    *(unsigned int *)(((int)stk + 8)) = (0xD34 + a4);
    nlObjPutSetSaturate((*(float *)(((0xD34 + a4) + 0x0))), (*(float *)(((0xD34 + a4) + 0x4))));
    *(float *)((a4 + 0xD34)) = 0.78039217f;
    *(float *)((a4 + 0xD38)) = 0.388235301f;
    lightPlayerApply((*(int *)((a4 + 0xB5C))));
    if ((unsigned short)(*(short *)((a4 + 0xD3C))) != 0x3E7) {
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0xD3E))));
        nlRotateAX((unsigned short)(*(short *)((a4 + 0xD3C))));
        *(int *)((int)stk + 4) = (((int)stk + 8) + 0x4);
        *(Stk3 *)((((int)stk + 8) + 0x4)) = vecMake(0.0f, 0.0f, 1.0f);
        nlCalcPoint((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x4));
        nlPopMatrix(0x1);
        nlObjPutSetLightDirectionV((((int)stk + 8) + 0x4));
        *(unsigned short *)((a4 + 0xD3C)) = 0x3E7;
    }
    if ((*(int *)((a4 + 0xC58))) == 16) {
        playerDrawNodeFacing((*(int *)(((t0 + 0x28) + 0x0))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
    } else {
        sklDrawNode((*(int *)(((t0 + 0x28) + 0x0))));
    }
    t28 = 0x1;
    if (((*(int *)0x8C287ADC) == 4) && ((t25 = *(int *)0x8C287B44, t25 == 0) && (t26 = *(int *)0x8C287B3C, (t26 & 0x800) == 0))) {
        t28 = 0x0;
    }
    nlLoadMatrix(((*(int *)((t0 + 0x38))) + 0xC0));
    t33 = *(int *)((a4 + 0xD10));
    *(unsigned int *)(((int)stk + 8)) = ((t33 + 0x1) * t28);
    nlObjPut((*(int *)(((((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x44) + (((t33 + 0x1) * t28) << 2)) + 0x0))));
    nlLoadMatrix(((*(int *)((t0 + 0x3C))) + 0xC0));
    t39 = *(int *)((a4 + 0xD14));
    *(unsigned int *)(((int)stk + 8)) = ((t39 + 0x1) * t28);
    nlObjPut((*(int *)(((((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x44) + (((t39 + 0x1) * t28) << 2)) + 0x14))));
    if (((*(int *)0x8C287B3C) & 64) == 0) {
        t49 = 0xFFFFFFFF;
        if ((int)(*(int *)(((((*(int *)((a4 + 0xB5C))) * 0x38) + 0x8C343264) + 0x30))) < (int)0x14) {
        } else {
            t49 = ((*(int *)(((((*(int *)((a4 + 0xB5C))) * 0x38) + 0x8C343264) + 0x30))) - 20);
        }
        *(unsigned int *)((a4 + 0xD6C)) = t49;
    }
    if (((*(int *)0x8C20D14C) == 6) && (t62 = *(int *)0x8C20D150, t62 == 5)) {
    } else {
        nlLoadMatrix(((0x1E0 + a4) + 0x2C0));
        if ((*(int *)((a4 + 0xD4C))) != 0) {
            nlScale(1.0f, (-1.0f), 1.0f);
        }
        if ((*(int *)((a4 + 0xD6C))) == -1) {
            if (t28 != 0) {
                t75 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x8)));
            } else {
                t75 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0xC)));
            }
            nlObjPut(t75);
        } else {
            if ((*(int *)((a4 + 0xD6C))) == 6) {
                nlTranslate(0.0f, (*(float *)0x8C01DECC), (*(float *)0x8C01DEC8));
            }
            if (t28 != 0) {
                t88 = 0x8C157548;
                t89 = ((*(int *)((a4 + 0xD6C))) << 2);
            } else {
                t88 = 0x8C157568;
                t89 = ((*(int *)((a4 + 0xD6C))) << 2);
            }
            nlObjPut((*(int *)((t89 + t88))));
        }
    }
    nlObjPutSetSaturate((-1.0f), (-1.0f));
    lightRestore((*(int *)((a4 + 0xB5C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
    return (nlObjPutSetLightDirectionV(0x8C38B834));
}
