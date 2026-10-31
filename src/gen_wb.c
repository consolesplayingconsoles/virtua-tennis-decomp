/* Straight-line functions with calls and guards (batch gen_wb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lineJudgeShadowPart(int);
int nlGetMatrix(int);
int nlLoadMatrix(int);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int lineJudgeShadowPut(int a4, int a5, float f4, float f5, float f6);

int lineJudgeShadowPut(int a4, int a5, float f4, float f5, float f6)
{
    int stk[12];

    register int R2;
    register int R3;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_0 = a5;
    w0_0 = f4;
    w0_0 = f5;
    w0_0 = f6;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_1 = (0x8C0EFCD0);
    v0_1 = (0x8C0EF910);
    v0_1 = (0x8C0EFD20);
    v0_1 = (0x0);
    v0_0 = (v0_0);
    v0_2 = (0xF);
    w0_0 = ((-1.0f));
    w0_1 = (1.0f);
    L_8C0CBAB6:;
    if (((*(int *)0x8C38B768) != 0)) goto L_8C0CBAD4;
    if ((v0_1 == 0)) goto L_8C0CBAD4;
    if ((v0_1 == 1)) goto L_8C0CBAD4;
    if ((v0_1 == 4)) goto L_8C0CBAD4;
    v0_3 = (v0_1);
    if ((v0_1 != 5)) goto L_8C0CBB1A;
    L_8C0CBAD4:;
    nlPushMatrix(0x0);
    nlScale(w0_1, w0_0, w0_1);
    nlMultiMatrix(0x8C287978);
    nlMultiMatrix((((*(int *)(((int)stk + 4))) + 0x1E4) + (((v0_1 << 2) << 2) << 2)));
    nlGetMatrix((v0_0 + (((v0_1 << 2) << 2) << 2)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlLoadMatrix((v0_0 + (((v0_1 << 2) << 2) << 2)));
    lineJudgeShadowPart(v0_1);
    v0_3 = ((nlPopMatrix(0x1)));
    L_8C0CBB1A:;
    v0_4 = (int)(v0_1 + 0x1) < (int)v0_2;
    v0_1 = ((v0_1 + 0x1));
    if (v0_4) goto L_8C0CBAB6;
    return v0_3;
}
