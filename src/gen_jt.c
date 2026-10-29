/* Straight-line functions with calls and guards (batch gen_jt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int circuitStatsCalc(void);

int circuitStatsCalc(void)
{
    int t0;
    int t6;
    int t19;
    int t34;
    float u37;
    float u38;
    int t40;
    float u43;
    int t46;
    float u48;
    int t51;
    float u53;
    float u55;
    int t57;
    float u60;

    t0 = *(int *)0x8C2FBCB0;
    if (t0 != 0) {
        *(float *)0x8C2FBCDC = ((float)(*(int *)0x8C2FBCB4) / (float)t0);
    } else {
        *(float *)0x8C2FBCDC = 0.0f;
    }
    t6 = *(int *)0x8C2FBCA8;
    if (t6 != 0) {
        *(float *)0x8C2FBCE0 = ((float)(*(int *)0x8C2FBCBC) / (float)t6);
        *(float *)0x8C2FBCE8 = ((float)(*(int *)0x8C2FBCC4) / (float)(*(int *)0x8C2FBCA8));
        *(float *)0x8C2FBCF0 = ((float)(*(int *)0x8C2FBCCC) / (float)(*(int *)0x8C2FBCA8));
        *(float *)0x8C2FBCF8 = ((float)(*(int *)0x8C2FBCD4) / (float)(*(int *)0x8C2FBCA8));
    } else {
        *(float *)0x8C2FBCE0 = 0.0f;
        *(float *)0x8C2FBCE8 = 0.0f;
        *(float *)0x8C2FBCF0 = 0.0f;
        *(float *)0x8C2FBCF8 = 0.0f;
    }
    t19 = *(int *)0x8C2FBCAC;
    if (t19 != 0) {
        *(float *)0x8C2FBCE4 = ((float)(*(int *)0x8C2FBCC0) / (float)t19);
        *(float *)0x8C2FBCEC = ((float)(*(int *)0x8C2FBCC8) / (float)(*(int *)0x8C2FBCAC));
        *(float *)0x8C2FBCF4 = ((float)(*(int *)0x8C2FBCD0) / (float)(*(int *)0x8C2FBCAC));
        *(float *)0x8C2FBCFC = ((float)(*(int *)0x8C2FBCD8) / (float)(*(int *)0x8C2FBCAC));
    } else {
        *(float *)0x8C2FBCE4 = 0.0f;
        *(float *)0x8C2FBCEC = 0.0f;
        *(float *)0x8C2FBCF4 = 0.0f;
        *(float *)0x8C2FBCFC = 0.0f;
    }
    t34 = *(int *)0x8C1891E8;
    u37 = (*(float *)0x8C2FBCDC);
    u37 = u37 + 0.100000001f * (float)(*(int *)0x8C2FBCB8);
    u38 = ((float)(*(int *)0x8C2FBD00) * u37);
    *(unsigned int *)0x8C2FBD04 = (int)(u38 * (float)(*(int *)(((((((t34 << 1) + t34) << 2) << 1) + 0x8C1094A0) + 0x0))));
    t40 = *(int *)0x8C1891E8;
    u43 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCE4));
    *(unsigned int *)0x8C2FBD08 = (int)(u43 * (float)(*(int *)(((((((t40 << 1) + t40) << 2) << 1) + 0x8C1094A0) + 0x4))));
    t46 = *(int *)0x8C1891E8;
    u48 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCEC));
    *(unsigned int *)0x8C2FBD0C = (int)(u48 * (float)(*(int *)(((((((t46 << 1) + t46) << 2) << 1) + 0x8C1094A0) + 0x8))));
    t51 = *(int *)0x8C1891E8;
    u53 = (*(float *)0x8C2FBCF4);
    u53 = u53 + 0.0700000003f * (float)(*(int *)0x8C2FBCCC);
    u55 = ((float)(*(int *)0x8C2FBD00) * u53);
    *(unsigned int *)0x8C2FBD10 = (int)(u55 * (float)(*(int *)(((((((t51 << 1) + t51) << 2) << 1) + 0x8C1094A0) + 0xC))));
    t57 = *(int *)0x8C1891E8;
    u60 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCFC));
    *(unsigned int *)0x8C2FBD14 = (int)(u60 * (float)(*(int *)(((((((t57 << 1) + t57) << 2) << 1) + 0x8C1094A0) + 0x10))));
    *(unsigned int *)0x8C2FBD18 = (((((*(int *)0x8C2FBD04) + (*(int *)0x8C2FBD08)) + (*(int *)0x8C2FBD0C)) + (*(int *)0x8C2FBD10)) + (*(int *)0x8C2FBD14));
    return 0x70;
}
