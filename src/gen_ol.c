/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTrnsl(int, int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
extern int sprListPut();
int sprPutCentered(int, int, int, int, int, float, float);
int sprRecInit(int, int, int, int, int);
int sprRecPutRotated(int, int, int, int);
Stk3 vecMake(float, float, float);
int shopDrawMenu(int a4);

int shopDrawMenu(int a4)
{
    int t2;
    int t3;
    int t16;
    int t22;
    float u26;
    int t29;
    int t33;
    int stk[196];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F5;
    float F6;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x278 + ((int)stk + 84))) = *(struct mv5 *)(0x8C12706C); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((0x238 + ((int)stk + 84))) = *(struct mv16 *)(0x8C127080); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((0x1F8 + ((int)stk + 84))) = *(struct mv16 *)(0x8C1270C0); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((0x1C8 + ((int)stk + 84))) = *(struct mv12 *)(0x8C127100); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 84) + 0x68)) = *(struct mv8 *)(0x8C127130); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 84) + 0x48)) = *(struct mv8 *)(0x8C127150); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 84) + 0x40)) = *(struct mv2 *)(0x8C127170); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 84) + 0x28)) = *(struct mv6 *)(0x8C127178); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 84) + 0x10)) = *(struct mv6 *)(0x8C127190); }
    nlDispStripTrnsl(0x4, (0x238 + ((int)stk + 84)));
    nlDispStripTrnsl(0x4, (0x1F8 + ((int)stk + 84)));
    *(Stk3 *)(((int)stk + 72)) = vecMake(296.0f, 0.0f, 70.0f);
    t2 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9CE4, 0x1, 0x0, 0.699999988f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 72)) = vecMake(30.0f, 30.0f, 65.0f);
    t3 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9D50, 0x1, 0x0, 1.0f, 1.0f, 1.0f);
    *(unsigned int *)(((int)stk + 84)) = (0x88 + ((int)stk + 84));
    R10 = ((((int)stk + 84) + 0x40));
    R11 = ((0x1C8 + ((int)stk + 84)));
    R12 = ((0x278 + ((int)stk + 84)));
    R13 = ((0x128 + ((int)stk + 84)));
    R14 = ((((int)stk + 84) + 0x68));
    R8 = (0x8C0DE088);
    R9 = (0x107);
    F12 = (65.0f);
    F14 = (0.0f);
    F15 = (1.0f);
    L_8C0E75F8:;
    *(int *)((int)stk + 80) = 0x0;
    sprRecInit(R13, R9, R14, R10, 0x0);
    t16 = (unsigned int)(R14 + 0x10) < (unsigned int)(*(int *)(((int)stk + 84)));
    R13 = ((R13 + 0x50));
    R14 = ((R14 + 0x10));
    if (t16) goto L_8C0E75F8;
    sprRecPutRotated((0x128 + ((int)stk + 84)), 0x2, (((int)stk + 84) + 0x28), 0xFFFFFD00);
    *(int *)((int)stk + 80) = (((int)stk + 84) + 0x4);
    *(Stk3 *)((((int)stk + 84) + 0x4)) = vecMake(240.0f, 40.0f, F12);
    R13 = (0x8C4220A4);
    R14 = ((((int)stk + 84) + 0x4));
    t22 = *(int *)((R13 + 0x0));
    *(unsigned int *)((R12 + (t22 << 2))) = ((*(int *)((R12 + (t22 << 2)))) + 0xD8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)(R14); }
    u26 = *(float *)(((*(int *)((R12 + ((*(int *)((R13 + 0x0))) << 2)))) + 0x54));
    *(int *)((int)stk + 64) = (R14);
    sprPutCentered(R4, R5, R6, R7, *(int *)((int)stk + 64), u26, F14);
    t29 = *(int *)((R13 + 0x0));
    *(unsigned int *)((R12 + (t29 << 2))) = ((*(int *)((R12 + (t29 << 2)))) - 0xD8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(R14); }
    t33 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)((R12 + ((*(int *)((R13 + 0x0))) << 2)))), 0x3, 0x0, *(Stk3 *)(((int)stk + 52)), F15, F15, F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((R11 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R11); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R11 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R11 + 0x18)); }
    return (primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
}
