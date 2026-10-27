/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetBackGroundPlane(int, int);
int nlSetBackColorZ(int a4, int a5, int a6, float f4);

int nlSetBackColorZ(int a4, int a5, int a6, float f4)
{
    int t0;
    int t2;
    int stk[30];

    *(unsigned int *)0x8C1DC894 = a4;
    *(unsigned int *)0x8C1DC898 = a5;
    *(unsigned int *)0x8C1DC89C = a6;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = 0xE0000000;
    *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0xC) + 0xC)) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = *(short *)0x8C458DD8;
    t2 = (short)t0;
    if ((*(short *)0x8C458DDE) != 0) {
        t2 = ((short)t0 << 1);
    }
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x4)) = (float)t2;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0x8)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0xC) + 0x20) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x20) + 0x18)) = a5;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x0)) = 0xF0000000;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x4)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0x8)) = (float)(*(short *)0x8C458DDA);
    *(float *)((((((int)stk + 4) + 0xC) + 0x40) + 0xC)) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = (((int)stk + 4) + 0xC);
    *(unsigned int *)((((int)stk + 4) + 0x4)) = ((((int)stk + 4) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 4) + 0x8)) = ((((int)stk + 4) + 0xC) + 0x40);
    return (kmSetBackGroundPlane(((int)stk + 4), 0x0));
}
