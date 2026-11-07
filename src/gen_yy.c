/* Straight-line functions with calls and guards (batch gen_yy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRotateXSC_L(float, float);
int nlRotateYSC_L(float, float);
int nlRotateZSC(float, float);
int nlRotateZSC_L(float, float);
float nlCosf(float);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
float nlSinf(float);
int FUN_8c0f0240(float f4);
int FUN_8c0f0280(float f4);
int FUN_8c0f02a0(float f4);
int FUN_8c0f02c0(float f4);
int FUN_8c0f19b0(float f4, float f5, float f6, float f7, float f8, float f9);

int FUN_8c0f0240(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateXSC_L(t1, t0);
}

int FUN_8c0f0280(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateYSC_L(t1, t0);
}

int FUN_8c0f02a0(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateZSC(t1, t0);
}

int FUN_8c0f02c0(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateZSC_L(t1, t0);
}

int FUN_8c0f19b0(float f4, float f5, float f6, float f7, float f8, float f9)
{
    nlLoadMatrix(0x8C450A90, f4, f5, f6, f7, f8, f9);
    return nlMultiMatrix(0x8C450A50);
}
