/* Straight-line functions with calls and guards (batch gen_sb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];

int cpuGiveUpCheck(int a4);

int cpuGiveUpCheck(int a4)
{
    int stk[1];

    int R1;
    int R2;
    int T_;
    int v0_0;
    int v0_1;
    int v0_2;
    int v0_3;
    float w0_0;
    float w0_1;
    float w0_2;
    float w0_3;
    v0_1 = a4;
    v0_2 = (0x8C38B934);
    v0_0 = ((((*(int *)((v0_1 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    v0_3 = ((int)Ball);
    if (((*(int *)0x8C38B934) == 0)) goto L_8C03DB4C;
    v0_2 = (0xB6);
    if (((*(signed char *)((v0_0 + 0xB6))) != 0)) goto L_8C03DB4C;
    w0_2 = *(float *)((v0_1 + 0xAF0));
    v0_2 = (0xAF0);
    w0_0 = (0.0f);
    w0_1 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C03DAE4;
    w0_1 = ((*(float *)((v0_1 + v0_2))));
    L_8C03DAE6:;
    w0_2 = *(float *)((v0_3 + 0x6C));
    v0_2 = (0x6C);
    w0_3 = (w0_2);
    if ((w0_0 > w0_2)) goto L_8C03DAF2;
    w0_3 = ((*(float *)((v0_3 + v0_2))));
    L_8C03DAF4:;
    if ((w0_1 > w0_3)) goto L_8C03DB00;
    v0_2 = (0xC50);
    if (((int)(*(int *)((v0_1 + 0xC50))) <= 0)) goto L_8C03DB4C;
    L_8C03DB00:;
    v0_2 = (0x4);
    if ((((*(int *)((v0_1 + 0xB60))) & 0x100) == 0)) goto L_8C03DB10;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3;
    L_8C03DB10:;
    *(unsigned int *)((v0_1 + 0xA24)) = v0_2;
    *(unsigned char *)((v0_0 + 0xAE)) = 0x0;
    *(unsigned char *)((v0_0 + 0xAF)) = 0x0;
    *(unsigned char *)((v0_0 + 0xB0)) = 0x0;
    *(unsigned char *)((v0_0 + 0xB1)) = 0x0;
    *(float *)((v0_0 + 0x0)) = 0.0f;
    *(unsigned char *)((v0_0 + 0xB6)) = 0x1;
    *(float *)((v0_0 + 0xC)) = ((*(float *)((v0_0 + 0xC))) + 50.0f);
    v0_2 = (0xC);
    w0_0 = (100.0f);
    if ((!((*(float *)((v0_0 + 0xC))) > 100.0f))) goto L_8C03DB4C;
    *(float *)((v0_0 + v0_2)) = w0_0;
    L_8C03DB4C:;
    return v0_2;
    L_8C03DAF2:;
    w0_3 = ((-w0_3));
    goto L_8C03DAF4;
    L_8C03DAE4:;
    w0_1 = ((-w0_1));
    goto L_8C03DAE6;
}
