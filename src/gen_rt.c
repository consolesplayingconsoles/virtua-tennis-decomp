/* Straight-line functions with calls and guards (batch gen_rt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(int, int);
int ADXCRS_Unlock(void);
int ADXAMP_Create(int a4, int a5, int a6);

int ADXAMP_Create(int a4, int a5, int a6)
{
    int stk[8];

    int R1;
    int R2;
    int R3;
    float F4;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_6;
    float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_3 = (v0_0);
    v0_5 = (0x8C46ABA4);
    v0_4 = (0x0);
    v0_2 = (0x0);
    v0_0 = (0x8);
    L_8C1EFAAC:;
    if (((*(signed char *)(((((((v0_2 << 1) + v0_2) << 2) << 2) + v0_5) + 0x0))) == 0)) goto L_8C1EFAC6;
    v0_6 = (int)(v0_2 + 0x1) < (int)v0_0;
    v0_2 = ((v0_2 + 0x1));
    if (v0_6) goto L_8C1EFAAC;
    L_8C1EFAC6:;
    if ((v0_2 != 8)) goto L_8C1EFAD0;
    v0_0 = (0x0);
    L_8C1EFB38:;
    return v0_0;
    L_8C1EFAD0:;
    ADXCRS_Lock(v0_0, v0_1);
    *(unsigned char *)(((((((v0_2 << 1) + v0_2) << 2) << 2) + v0_5) + 0x2)) = v0_3;
    v0_2 = ((((((v0_2 << 1) + v0_2) << 2) << 2) + v0_5));
    v0_0 = (v0_4);
    v0_1 = (v0_4);
    if (((int)v0_3 <= 0)) goto L_8C1EFB16;
    L_8C1EFAEE:;
    *(unsigned int *)((((v0_2 + 0x4) + v0_0) + 0x0)) = (*(int *)((v0_0 + (*(int *)(((int)stk + 4))))));
    *(unsigned int *)((((v0_2 + 0xC) + v0_0) + 0x0)) = (*(int *)((v0_0 + (*(int *)(((int)stk + 8))))));
    *(unsigned int *)((((v0_2 + 0x14) + v0_0) + 0x0)) = v0_4;
    v0_5 = (int)(v0_1 + 0x1) < (int)v0_3;
    v0_0 = ((v0_0 + 0x4));
    v0_1 = ((v0_1 + 0x1));
    if (v0_5) goto L_8C1EFAEE;
    L_8C1EFB16:;
    *(unsigned char *)((v0_2 + 0x1)) = v0_4;
    *(unsigned int *)((v0_2 + 0x2C)) = v0_4;
    *(unsigned int *)((v0_2 + 0x1C)) = v0_3;
    *(unsigned int *)((v0_2 + 0x20)) = 0xAC44;
    w0_0 = *(float *)0x8C1EFB94;
    *(float *)((v0_2 + 0x24)) = w0_0;
    *(float *)((v0_2 + 0x28)) = w0_0;
    *(unsigned char *)((v0_2 + 0x0)) = 0x1;
    ADXCRS_Unlock();
    v0_0 = (v0_2);
    goto L_8C1EFB38;
}
