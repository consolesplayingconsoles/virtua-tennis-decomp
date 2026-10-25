/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int sprPutCropV(int, int, Stk3, float, float, float);
int hudBarDraw(Stk1 s, float f4, float f5);

int hudBarDraw(Stk1 s, float f4, float f5)
{
    int stk[25];

    stk[16] = s.w[0];
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    sprPutCropV(0x8C33DE20, 0x0, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5);
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x18) + 0x0))) + (*(float *)0x8C09B3E8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    sprPutCropV(0x8C33DE70, 0x0, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5);
    *(float *)(((((int)stk + 40) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x18) + 0x0))) + (*(float *)0x8C09B3D8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0x18)); }
    return (sprPutCropV(0x8C33DEC0, 0x0, *(Stk3 *)((((int)stk + 40) + 0x18)), f4, 1.0f, f5));
}
