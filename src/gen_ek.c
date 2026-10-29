/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int angleLerp(int, int, float);
int colliObjEntry(int);
int effFootDust(int, int, int, int, int, int, int, int, int);
int kmBlankScreen(int);
int kmiFLWCTRLGetFBLockStatus(int);
int kmiSetupRender(int, int);
int kmyGenerateRegionArray(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyIsDisplayOddField(void);
int kmyResetRenderer(void);
int kmySetDitherMode(int, int);
int kmySetFlickerFilterMode(int, int);
int kmySetPixelClippingX(int, int, int);
int kmySetPixelClippingY(int, int, int);
int kmySetRegionArrayCallback(int, int);
int kmySetVirticalFilterMode(int, int);
int kmyStartRender(int, int);
int kmyStartRenderTexture(int, int, int);
int kmyUpdateFogParameter(void);
int kmyUpdatePalette(void);
float lerpf(float, float, float);
int motionAngleBlend(int, int);
int motionRootAtFrame(int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int perfPrint(void);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int shadowPlayerDraw(int, int, int, int, int, int);
int motionRoot(int a4);
int motionRotate(int a4);
int motionRotate2(int a4);
int playerExec(int a4, int a5, int a6, int a7);
int kmiFLWCTRLStartRenderEntry(int a4);




int playerExec(int a4, int a5, int a6, int a7)
{
    int t21;
    int t36;
    float u99;
    float u101;
    int t131;
    float u14;
    int t22;
    int t81;
    int t96;
    int stk[155];

    if (((*(int *)0x8C295DDC) & 32) != 0) {
        motionRootAtFrame(a4, (int)(*(float *)((a4 + 0xC))), a6, a7, (((int)stk + 8) + 0x28));
        if ((float)(int)(*(float *)((a4 + 0xC))) > (*(float *)0x8C23D204)) {
            nlScaleVector((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28), (*(float *)((a4 + 0x14))));
        }
        if (((*(int *)0x8C287C60) == 0) && (u14 = *(float *)((a4 + 0x14)), u14 != 0.0f)) {
            nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
        }
        *(unsigned short *)((a4 + 0xB06)) = 0x0;
    } else {
        t21 = *(int *)((a4 + 0xB60));
        if (((0x400 & t21) == 0) && (((0x40 & t21) == 0) || (t22 = *(int *)((a4 + 0xC98)), (int)t22 < (int)0xD))) {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
            nlRotateAY((*(short *)((a4 + 0xB06))));
            motionSetCurrent(a4);
            motionRootBone(0x0, 0x5, 0x0, 0x0, *(int *)((int)stk + 8));
            nlPopMatrix(0x1);
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0xB06))));
            t36 = *(int *)((a4 + 0x48));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)((((((t36 << 1) + t36) << 2) << 2) + (a4 + 0x60))); }
            *(float *)(((int)stk + 40)) = 0.0f;
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) * (-1.0f));
            }
            nlCalcPoint((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x28));
            nlPopMatrix(0x1);
            if ((*(int *)0x8C287C60) == 0) {
                nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
            }
        } else {
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0xB06))));
            motionRootAtFrame(a4, (int)(*(float *)((a4 + 0xC))), 0x0, 0x0, (((int)stk + 8) + 0x28));
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) * (-1.0f));
            }
            nlCalcPoint((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28));
            nlPopMatrix(0x1);
            nlScaleVector((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28), (*(float *)((a4 + 0x14))));
            if ((*(int *)0x8C287C60) == 0) {
                nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCF4 + a4)) = *(struct mv3 *)((((int)stk + 8) + 0x28)); }
    }
    if ((*(int *)0x8C287D5C) != 3) {
        if ((((*(int *)((a4 + 0xA78))) & 1) != 0) && (t81 = *(int *)((a4 + 0xD40)), t81 == 0x8C01DE1A)) {
            *(float *)((a4 + 0xA5C)) = 0.0f;
            nlAddVector((0xAE8 + a4), (0xA58 + a4));
        }
        colliObjEntry((0xA40 + a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xA4C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    }
    if ((((*(int *)0x8C295DDC) & 32) == 0) && (t96 = *(int *)0x8C287B3C, (t96 & 64) == 0)) {
        u99 = *(float *)((a4 + 0xAF0));
        u101 = (-u99);
        if (!(0.0f > u99)) {
            u101 = (*(float *)((a4 + 0xAF0)));
        }
        if ((*(float *)0x8C025D24) > u101) {
            *(float *)((a4 + 0xAF0)) = (-((*(float *)((a4 + 0xB00))) * (*(float *)0x8C025D24)));
        }
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
    nlRotateAY((*(short *)((a4 + 0xB06))));
    *(unsigned int *)(((int)stk + 8)) = (playerPut(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 8))) != 0) {
        shadowPlayerDraw(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
        effFootDust(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    }
    t131 = 0xB5C;
    if ((*(int *)((a4 + 0xB5C))) == 0) {
        t131 = (perfPrint());
    }
    return t131;
}

