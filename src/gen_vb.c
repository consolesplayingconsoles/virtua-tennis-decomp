/* Straight-line functions with calls and guards (batch gen_vb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int sklDrawNodeOne(int);
int staffShadowFlat(int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
int advDrawFigure(int a4);

int advDrawFigure(int a4)
{
    int stk[254];
    register int t69;
    register int t71;

    motionSetCurrent(a4);
    motionRootBone(0x0, 0x2, 0x0, 0x0, *(int *)((int)stk + 20));
    nlGetMatrix(((*(int *)0x8C158BAC) + 0xC0));
    nlGetMatrix((0x80 + ((int)stk + 20)));
    nlPushMatrix(0x0);
    motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BBC) + 0xC0));
    nlGetMatrix((0x180 + ((int)stk + 20)));
    motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB4) + 0xC0));
    nlGetMatrix((0x100 + ((int)stk + 20)));
    motionBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BA4) + 0xC0));
    nlGetMatrix(((int)stk + 20));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC0) + 0xC0));
    nlGetMatrix((0x1C0 + ((int)stk + 20)));
    motionBone(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB8) + 0xC0));
    nlGetMatrix((0x140 + ((int)stk + 20)));
    motionBone(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BA8) + 0xC0));
    nlGetMatrix((((int)stk + 20) + 0x40));
    nlPopMatrix(0x1);
    motionBone(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC4) + 0xC0));
    nlGetMatrix((0x200 + ((int)stk + 20)));
    nlPushMatrix(0x0);
    motionBone(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD0) + 0xC0));
    nlGetMatrix((0x2C0 + ((int)stk + 20)));
    motionBone(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD4) + 0xC0));
    nlGetMatrix((0x300 + ((int)stk + 20)));
    motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC8) + 0xC0));
    nlGetMatrix((0x240 + ((int)stk + 20)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD8) + 0xC0));
    nlGetMatrix((0x340 + ((int)stk + 20)));
    motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BDC) + 0xC0));
    nlGetMatrix((0x380 + ((int)stk + 20)));
    motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BCC) + 0xC0));
    nlGetMatrix((0x280 + ((int)stk + 20)));
    nlPopMatrix(0x1);
    motionBone(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB0) + 0xC0));
    nlGetMatrix((0xC0 + ((int)stk + 20)));
    t69 = 0x8C158BA4;
    for (;;) {
        nlPushMatrix(0x0);
        t71 = *(int *)((t69 + 0x0));
        t69 = (t69 + 0x4);
        sklDrawNodeOne(t71);
        nlPopMatrix(0x1);
        if ((unsigned int)t69 >= (unsigned int)0x8C158BE0) {
            break;
        }
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 0.0f);
    return (staffShadowFlat(((int)stk + 20), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8)));
}
