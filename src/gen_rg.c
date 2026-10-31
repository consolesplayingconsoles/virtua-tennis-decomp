/* Straight-line functions with calls and guards (batch gen_rg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblSignalPut(int, int, int, int, float);
int cpuDblSignalDraw(int a4, int a5, int a6, int a7, float f4);

int cpuDblSignalDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t8;
    int t11;
    int t20;
    int t29;
    int t33;
    int t38;
    int stk[11];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F3;
    float F15;
    int T_;
    R6 = a6;
    *(unsigned int *)(((int)stk + 4)) = 0x8C287ACC;
    R11 = (0x21C);
    R12 = (0x3);
    R13 = (0x8C287D84);
    R8 = (0x78);
    R9 = (0x0);
    F15 = (180.0f);
    L_8C05D306:;
    t8 = *(int *)((((*(int *)(((0xB5C + R13) + 0x0))) << 2) + ((*(int *)(((int)stk + 4))) + 0x14)));
    R0 = (t8);
    if ((t8 != 2)) goto L_8C05D3DC;
    t11 = *(int *)((R13 + 0xB5C));
    R0 = (t11);
    R14 = (((t11 * 0x160) + 0x8C2FC69C));
    R5 = ((*(short *)((((t11 * 0x160) + 0x8C2FC69C) + 0x144))));
    if (((int)t11 < 0)) goto L_8C05D35C;
    R0 = ((R0 & 0x1));
    L_8C05D366:;
    t20 = (*(int *)0x8C287C60) != 0;
    R0 = ((cpuDblSignalPut(((R0 * R11) + 0x30), R5, R6, a7, f4)));
    if (t20) goto L_8C05D3DC;
    R0 = (0x146);
    if (((*(signed char *)((R14 + 0x146))) == 0)) goto L_8C05D3DC;
    if (((*(short *)((R14 + 0x144))) != (((*(signed char *)((R14 + 0x12B))) - 1) * R8))) goto L_8C05D394;
    *(unsigned char *)((R14 + 0x146)) = R9;
    L_8C05D394:;
    t29 = *(signed char *)(((0x146 + R14) + 0x0));
    *(unsigned short *)((R14 + 0x144)) = ((*(short *)((R14 + 0x144))) + (((t29 << 2) + t29) << 1));
    R0 = (0x144);
    if ((!(_builtin_fabsf((float)(*(short *)((R14 + 0x144)))) > F15))) goto L_8C05D3DC;
    t33 = *(short *)(((R0 + R14) + 0x0));
    R4 = (t33);
    if (((int)t33 <= 0)) goto L_8C05D3C6;
    R2 = (0x1);
    L_8C05D3D0:;
    *(unsigned short *)((R14 + R0)) = ((*(short *)((R14 + R0))) - ((short)R2 * (short)0x168));
    L_8C05D3DC:;
    t38 = (int)(R12 - 1) >= 0;
    R12 = ((R12 - 1));
    R13 = ((R13 + 0xD78));
    if (t38) goto L_8C05D306;
    return R0;
    L_8C05D3C6:;
    if (((int)R4 >= 0)) goto L_8C05D3CE;
    R2 = (0xFFFFFFFF);
    goto L_8C05D3D0;
    L_8C05D3CE:;
    R2 = (0x0);
    goto L_8C05D3D0;
    L_8C05D35C:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C05D366;
}
