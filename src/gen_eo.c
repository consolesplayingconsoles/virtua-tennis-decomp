/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vecMake(int, int, int, int, int, float, float, float);
int motionRootAtFrame(int a4, int a5, int a6, int a7, int a8);
int motionRootFirst(int a4, int a5, int a6, int a7, int a8);

int motionRootAtFrame(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    float u3;
    int t5;
    int t6;

    t1 = *(int *)((a4 + 0x54));
    u3 = *(float *)((((*(int *)((a4 + 0x20))) + 0xC) + 0x0));
    t5 = *(int *)(((*(int *)((a4 + 0x20))) + 0x4));
    t6 = *(int *)(((*(int *)((a4 + 0x20))) + 0x10));
    return (vecMake(a4, ((((int)((float)a5 * u3) * t6) << 1) + (((int)((float)a5 * u3) * t6) << 2)), a6, a7, a8, (((float)(*(short *)((((t1 + t5) + ((((int)((float)a5 * u3) * t6) << 1) + (((int)((float)a5 * u3) * t6) << 2))) + 0x0))) * u3) / (*(float *)((((*(int *)((a4 + 0x20))) + 0x14) + 0x0)))), 0.0f, (((float)(-(*(short *)((((t1 + t5) + ((((int)((float)a5 * u3) * t6) << 1) + (((int)((float)a5 * u3) * t6) << 2))) + 0x4)))) * u3) / (*(float *)((((*(int *)((a4 + 0x20))) + 0x1C) + 0x0))))));
}

int motionRootFirst(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    float u7;

    t1 = *(int *)((a4 + 0x54));
    t2 = *(int *)(((*(int *)((a4 + 0x20))) + 0x4));
    u7 = *(float *)((((*(int *)((a4 + 0x20))) + 0xC) + 0x0));
    return (vecMake(a4, a5, a6, a7, a8, (((float)(*(short *)(((t1 + t2) + 0x0))) * u7) / (*(float *)((((*(int *)((a4 + 0x20))) + 0x14) + 0x0)))), 0.0f, (((float)(-(*(short *)(((t1 + t2) + 0x4)))) * u7) / (*(float *)((((*(int *)((a4 + 0x20))) + 0x1C) + 0x0))))));
}
