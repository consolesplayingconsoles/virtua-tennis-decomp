/* Straight-line functions with calls and guards (batch gen_st): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int stageSelNameDraw(int, int, int, Stk3);
Stk3 vecMake(float, float, float);
int sseleGridDraw(int a4, int a5, int a6, int a7);

int sseleGridDraw(int a4, int a5, int a6, int a7)
{
    int stk[19];

    int R1;
    int R2;
    int R3;
    int R9;
    float F3;
    float F4;
    float F5;
    float F6;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_6;
    float w0_0;
    float w0_1;
    v0_0 = a4;
    v0_0 = a5;
    v0_0 = a6;
    v0_0 = a7;
    v0_0 = ((((int)stk + 20) + 0x4));
    v0_1 = (0x0);
    v0_2 = (0x0);
    v0_3 = (0x1);
    w0_0 = (5.0f);
    L_8C0C17DA:;
    *(unsigned int *)(((int)stk + 20)) = (v0_2 << 2);
    v0_4 = (v0_1);
    w0_1 = ((float)((v0_2 * 0x78) + 0x20));
    L_8C0C17F0:;
    if ((v0_2 != (*(int *)0x8C37B764))) goto L_8C0C18B0;
    if ((v0_4 != (*(int *)0x8C37B768))) goto L_8C0C18B0;
    v0_5 = (v0_3);
    L_8C0C18B2:;
    v0_6 = v0_0;
    *(int *)((int)stk + 16) = v0_6;
    *(Stk3 *)(v0_6) = vecMake(w0_1, (float)((v0_4 * 0x52) + 0x12B), w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(v0_0); }
    v0_6 = (int)(v0_4 + 0x1) >= (int)0x2;
    v0_5 = ((stageSelNameDraw((*(int *)((((((v0_4 << 2) + v0_4) + v0_2) << 2) + 0x8C12333C))), v0_5, (*(int *)(((((((v0_4 << 2) + v0_4) << 2) + 0x8C1AC160) + (*(int *)(((int)stk + 20)))) + 0x0))), *(Stk3 *)(((int)stk + 4)))));
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_8C0C1912;
    goto L_8C0C17F0;
    L_8C0C1912:;
    v0_4 = (int)(v0_2 + 0x1) >= (int)0x5;
    v0_2 = ((v0_2 + 0x1));
    if (v0_4) goto L_8C0C191E;
    goto L_8C0C17DA;
    L_8C0C191E:;
    return v0_5;
    L_8C0C18B0:;
    v0_5 = (v0_1);
    goto L_8C0C18B2;
}
