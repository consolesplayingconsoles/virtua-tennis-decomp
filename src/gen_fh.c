/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int cursorBoxPut();
float nlCos(int);
int sprPutAtAlpha(int, float);
Stk3 vecMake(float, float, float);
int panelLogoSwingDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int panelLogoSwingDraw(Stk3 s, float f4);

int panelLogoSwingDraw2(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    float u1;
    float t5;
    int t17;
    int t23;
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    *(unsigned int *)(((int)stk + 20)) = a4;
    u1 = 0.5f;
    if (a4 != 0) {
        u1 = 1.0f;
    }
    *(unsigned short *)0x8C340492 = ((*(short *)0x8C340492) + 0x200);
    t5 = nlCos((unsigned short)(*(short *)0x8C340492));
    if (!(0.0f > t5)) {
        nlCos((unsigned short)(*(short *)0x8C340492));
    } else {
        nlCos((unsigned short)(*(short *)0x8C340492));
    }
    *(volatile float *)0x8C09C444;
    *(volatile float *)0x8C09C448;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x20)); }
    t17 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 8)));
    if ((*(int *)(((int)stk + 20))) != 0) {
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x20) + 0x0))), (*(float *)(((((int)stk + 20) + 0x20) + 0x4))), ((*(float *)(((((int)stk + 20) + 0x20) + 0x8))) + (*(float *)0x8C09C454)));
        t23 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x20) + 0x0))) + (*(float *)0x8C09C464)), ((*(float *)(((((int)stk + 20) + 0x20) + 0x4))) + (*(float *)0x8C09C460)), ((*(float *)(((((int)stk + 20) + 0x20) + 0x8))) + (*(float *)0x8C09C45C)));
    return (sprPutAtAlpha(0x8C340440, u1));
}

int panelLogoSwingDraw(Stk3 s, float f4)
{
    float t2;
    int t14;
    int t19;
    int stk[23];

    stk[12] = s.w[0];
    stk[13] = s.w[1];
    stk[14] = s.w[2];
    *(float *)(((int)stk + 20)) = f4;
    *(unsigned short *)0x8C340490 = ((*(short *)0x8C340490) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C340490));
    if (!(0.0f > t2)) {
        nlCos((unsigned short)(*(short *)0x8C340490));
    } else {
        nlCos((unsigned short)(*(short *)0x8C340490));
    }
    *(volatile float *)0x8C09C2F4;
    *(volatile float *)0x8C09C2F8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x1C)); }
    t14 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)(((int)stk + 8)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x1C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x1C) + 0x4))), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x8))) + (*(float *)0x8C09C304)));
    t19 = ((int (*)(int))(cursorBoxPut))(0x1);
    *(Stk3 *)(((int)stk + 8)) = vecMake(((*(float *)(((((int)stk + 20) + 0x1C) + 0x0))) + (*(float *)0x8C09C314)), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x4))) + (*(float *)0x8C09C310)), ((*(float *)(((((int)stk + 20) + 0x1C) + 0x8))) + (*(float *)0x8C09C30C)));
    return (sprPutAtAlpha(0x8C340440, (*(float *)(((int)stk + 20)))));
}
