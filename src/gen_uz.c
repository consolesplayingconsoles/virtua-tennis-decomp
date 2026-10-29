/* Straight-line functions with calls and guards (batch gen_uz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int phraseBigWordPut();
Stk3 vecMake(float, float, float);
int hudCallWordsDraw(int a4, int a5, float f4);

int hudCallWordsDraw(int a4, int a5, float f4)
{
    int stk[15];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_3 = a4;
    v0_0 = a5;
    w0_1 = f4;
    v0_2 = (v0_0);
    v0_1 = (((int)stk + 20));
    w0_2 = (270.0f);
    w0_0 = (1.0f);
    w0_3 = (0.0500000007f);
    w0_1 = (w0_1);
    if ((v0_3 != 0)) goto L_8C098BC8;
    v0_3 = v0_1;
    *(int *)((int)stk + 16) = v0_3;
    *(Stk3 *)(v0_3) = vecMake(342.0f, w0_2, w0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, Stk3, float))(phraseBigWordPut))(0x9, *(Stk3 *)(((int)stk + 4)), w0_1);
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) - 90.0f);
    if ((v0_2 != 0)) goto L_8C098B50;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x1, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098B50:;
    if ((v0_2 != 1)) goto L_8C098B6C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x3, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098B6C:;
    if ((v0_2 != 2)) goto L_8C098B88;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x5, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098B88:;
    if ((v0_2 != 3)) goto L_8C098BA4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_2 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x7, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098BA4:;
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) + 147.0f);
    *(float *)((v0_1 + 0x4)) = ((*(float *)((v0_1 + 0x4))) + w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = (0xB);
    w0_1 = (w0_1);
    L_8C098C86:;
    return (((int (*)(int, int, Stk3, float))(phraseBigWordPut))(v0_3, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1));
    L_8C098BC8:;
    v0_3 = v0_1;
    *(int *)((int)stk + 16) = v0_3;
    *(Stk3 *)(v0_3) = vecMake(346.0f, w0_2, w0_3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, Stk3, float))(phraseBigWordPut))(0x0, *(Stk3 *)(((int)stk + 4)), w0_1);
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) - 103.0f);
    if ((v0_2 != 0)) goto L_8C098C10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x2, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098C10:;
    if ((v0_2 != 1)) goto L_8C098C2C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x4, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098C2C:;
    if ((v0_2 != 2)) goto L_8C098C48;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x6, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098C48:;
    if ((v0_2 != 3)) goto L_8C098C64;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_2 = ((int (*)(int, int, Stk3, float))(phraseBigWordPut))(0x8, v0_0, *(Stk3 *)(((int)stk + 8)), w0_1);
    L_8C098C64:;
    *(float *)((v0_1 + 0x0)) = ((*(float *)((v0_1 + 0x0))) + 173.0f);
    *(float *)((v0_1 + 0x4)) = ((*(float *)((v0_1 + 0x4))) + w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_1); }
    v0_3 = (0xA);
    w0_1 = (w0_1);
    goto L_8C098C86;
}
