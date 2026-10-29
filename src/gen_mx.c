/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int circuitStatsCalc(void);

int circuitStatsCalc(void)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(int *)0x8C2FBCB0;
    if (t0 != 0) {
        *(float *)0x8C2FBCDC = ((float)(*(int *)0x8C2FBCB4) / (float)t0);
    } else {
        *(float *)0x8C2FBCDC = 0.0f;
    }
    t0 = *(int *)0x8C2FBCA8;
    if (t0 != 0) {
        *(float *)0x8C2FBCE0 = ((float)(*(int *)0x8C2FBCBC) / (float)t0);
        *(float *)0x8C2FBCE8 = ((float)(*(int *)0x8C2FBCC4) / (float)(*(int *)0x8C2FBCA8));
        *(float *)0x8C2FBCF0 = ((float)(*(int *)0x8C2FBCCC) / (float)(*(int *)0x8C2FBCA8));
        *(float *)0x8C2FBCF8 = ((float)(*(int *)0x8C2FBCD4) / (float)(*(int *)0x8C2FBCA8));
    } else {
        *(float *)0x8C2FBCE0 = 0.0f;
        *(float *)0x8C2FBCE8 = 0.0f;
        *(float *)0x8C2FBCF0 = 0.0f;
        *(float *)0x8C2FBCF8 = 0.0f;
    }
    t0 = *(int *)0x8C2FBCAC;
    if (t0 != 0) {
        *(float *)0x8C2FBCE4 = ((float)(*(int *)0x8C2FBCC0) / (float)t0);
        *(float *)0x8C2FBCEC = ((float)(*(int *)0x8C2FBCC8) / (float)(*(int *)0x8C2FBCAC));
        *(float *)0x8C2FBCF4 = ((float)(*(int *)0x8C2FBCD0) / (float)(*(int *)0x8C2FBCAC));
        *(float *)0x8C2FBCFC = ((float)(*(int *)0x8C2FBCD8) / (float)(*(int *)0x8C2FBCAC));
    } else {
        *(float *)0x8C2FBCE4 = 0.0f;
        *(float *)0x8C2FBCEC = 0.0f;
        *(float *)0x8C2FBCF4 = 0.0f;
        *(float *)0x8C2FBCFC = 0.0f;
    }
    t0 = *(int *)0x8C1891E8;
    u0 = (*(float *)0x8C2FBCDC);
    u0 = u0 + 0.100000001f * (float)(*(int *)0x8C2FBCB8);
    u1 = ((float)(*(int *)0x8C2FBD00) * u0);
    *(unsigned int *)0x8C2FBD04 = (int)(u1 * (float)(*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0x8C1094A0) + 0x0))));
    t0 = *(int *)0x8C1891E8;
    u0 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCE4));
    *(unsigned int *)0x8C2FBD08 = (int)(u0 * (float)(*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0x8C1094A0) + 0x4))));
    t0 = *(int *)0x8C1891E8;
    u0 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCEC));
    *(unsigned int *)0x8C2FBD0C = (int)(u0 * (float)(*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0x8C1094A0) + 0x8))));
    t0 = *(int *)0x8C1891E8;
    u0 = (*(float *)0x8C2FBCF4);
    u0 = u0 + 0.0700000003f * (float)(*(int *)0x8C2FBCCC);
    u1 = ((float)(*(int *)0x8C2FBD00) * u0);
    *(unsigned int *)0x8C2FBD10 = (int)(u1 * (float)(*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0x8C1094A0) + 0xC))));
    t0 = *(int *)0x8C1891E8;
    u0 = ((float)(*(int *)0x8C2FBD00) * (*(float *)0x8C2FBCFC));
    *(unsigned int *)0x8C2FBD14 = (int)(u0 * (float)(*(int *)(((((((t0 << 1) + t0) << 2) << 1) + 0x8C1094A0) + 0x10))));
    *(unsigned int *)0x8C2FBD18 = (((((*(int *)0x8C2FBD04) + (*(int *)0x8C2FBD08)) + (*(int *)0x8C2FBD0C)) + (*(int *)0x8C2FBD10)) + (*(int *)0x8C2FBD14));
    return 0x70;
}
