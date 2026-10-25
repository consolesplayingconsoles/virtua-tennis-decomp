/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int sprInitRectF(int a4, int a5, int a6, int a7, int a8, int a9);

int sprInitRectF(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(float *)((a4 + 0x4)) = 0.0f;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = (*(float *)0x8C08E994);
    *(float *)((a4 + 0x18)) = ((*(float *)(((((a9 << 2) << 2) + a6) + 0x0))) / (float)a7);
    *(float *)((a4 + 0x1C)) = ((*(float *)(((((a9 << 2) << 2) + a6) + 0x4))) / (float)a8);
    *(float *)((a4 + 0x20)) = ((*(float *)((a4 + 0x18))) + ((*(float *)(((((a9 << 2) << 2) + a6) + 0x8))) / (float)a7));
    *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x1C))) + ((*(float *)(((((a9 << 2) << 2) + a6) + 0xC))) / (float)a8));
    *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x20))) - (*(float *)((a4 + 0x18))));
    *(float *)((a4 + 0x14)) = ((*(float *)((a4 + 0x24))) - (*(float *)((a4 + 0x1C))));
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0xA;
    return 0x2C;
}
