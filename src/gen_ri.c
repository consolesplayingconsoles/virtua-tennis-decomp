/* Straight-line functions with calls and guards (batch gen_ri): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gVertexBufferLockState[];

void kmiFLWCTRLCheckFinishPacket(int a4);

void kmiFLWCTRLCheckFinishPacket(int a4)
{
    int t6;
    int t16;
    int t24;
    int t27;
    int t34;
    int t36;
    int t44;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int T_;
    R4 = a4;
    if (((*(int *)((R4 + 0x14))) != (*(int *)((R4 + 0x18))))) goto L_8C1FA9C4;
    R5 = (0x1);
    if (((*(int *)((R4 + 0x1C))) == -1)) goto L_8C1FA93C;
    t6 = *(int *)((R4 + 0x1C));
    R6 = (t6);
    if (((unsigned int)t6 >= (unsigned int)(*(int *)0x8C45F934))) goto L_8C1FA93C;
    R7 = ((((int)R6 >= 0) ? (R5 << (R6 & 31)) : ((-(int)R6 & 31) ? ((int)R5 >> (-(int)R6 & 31)) : ((int)R5 >> 31))));
    if (((*(int *)0x8C45F958) == 0)) goto L_8C1FA932;
    *(unsigned int *)0x8C45F94C = ((*(int *)0x8C45F94C) | R7);
    L_8C1FA93C:;
    if (((*(int *)((R4 + 0x20))) == -1)) goto L_8C1FA96E;
    t16 = *(int *)((R4 + 0x20));
    R7 = (t16);
    if (((unsigned int)t16 >= (unsigned int)(*(int *)0x8C45F938))) goto L_8C1FA96E;
    R6 = ((((int)R7 >= 0) ? (R5 << (R7 & 31)) : ((-(int)R7 & 31) ? ((int)R5 >> (-(int)R7 & 31)) : ((int)R5 >> 31))));
    if (((*(int *)0x8C45F95C) == 0)) goto L_8C1FA964;
    *(unsigned int *)0x8C45F950 = ((*(int *)0x8C45F950) | R6);
    L_8C1FA96E:;
    t24 = *(int *)((R4 + 0x24));
    R0 = (t24);
    if ((t24 == -1)) goto L_8C1FA9A0;
    t27 = *(int *)((R4 + 0x24));
    R6 = (t27);
    if (((unsigned int)t27 >= (unsigned int)(*(int *)0x8C45F93C))) goto L_8C1FA9A0;
    R7 = ((((int)R6 >= 0) ? (R5 << (R6 & 31)) : ((-(int)R6 & 31) ? ((int)R5 >> (-(int)R6 & 31)) : ((int)R5 >> 31))));
    if (((*(int *)0x8C45F960) == 0)) goto L_8C1FA996;
    t34 = *(int *)0x8C45F954;
    *(unsigned int *)0x8C45F954 = (t34 | R7);
    R0 = ((t34 | R7));
    L_8C1FA9A0:;
    *(unsigned int *)((R4 + 0x0)) = 0x0;
    t36 = *(int *)((R4 + 0xC));
    R4 = ((*(int *)((R4 + 0x10))));
    R5 = (t36);
    R6 = (0x0);
    if ((t36 == 0)) goto L_8C1FA9BA;
    if ((R4 == 0)) goto L_8C1FA9B6;
    *(unsigned int *)((R5 + 0x10)) = R4;
    *(unsigned int *)((R4 + 0xC)) = R5;
    L_8C1FA9C0:;
    return;
    L_8C1FA9B6:;
    *(unsigned int *)((R5 + 0x10)) = R6;
    goto L_8C1FA9C0;
    L_8C1FA9BA:;
    if ((R4 == 0)) goto L_8C1FA9C0;
    *(unsigned int *)((R4 + 0xC)) = R6;
    goto L_8C1FA9C0;
    L_8C1FA996:;
    t44 = *(int *)0x8C45F948;
    *(unsigned int *)0x8C45F948 = (t44 & (~R7));
    R0 = ((t44 & (~R7)));
    goto L_8C1FA9A0;
    L_8C1FA964:;
    *(unsigned int *)0x8C45F944 = ((*(int *)0x8C45F944) & (~R6));
    goto L_8C1FA96E;
    L_8C1FA932:;
    *(unsigned int *)(int)gVertexBufferLockState = ((*(int *)(int)gVertexBufferLockState) & (~R7));
    goto L_8C1FA93C;
    L_8C1FA9C4:;
}
