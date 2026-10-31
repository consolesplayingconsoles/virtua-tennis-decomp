/* Straight-line functions with calls and guards (batch gen_qv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gRenderPacketVBlankWaitPending[];

int kmiFLWCTRLStartRenderEntry(int);
void kmiGuaranteeFFModeProcessOver(int a4, int a5);

void kmiGuaranteeFFModeProcessOver(int a4, int a5)
{
    int t9;
    int t28;
    int t38;
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
    R5 = a5;
    if (((*(int *)(int)gRenderPacketVBlankWaitPending) != 0)) goto L_8C1FAFEC;
    L_8C1FB0DE:;
    return;
    L_8C1FAFEC:;
    if ((R4 != 0)) goto L_8C1FAFF4;
    goto L_8C1FB0DE;
    L_8C1FAFF4:;
    R4 = (0x1);
    R6 = (0xFFFFFFFF);
    if ((R5 == 0)) goto L_8C1FB03E;
    if (((*(int *)0x8C4607BC) == 0)) goto L_8C1FB0DE;
    t9 = *(int *)(((*(int *)0x8C4607BC) + 0x20));
    R0 = (0x8C45F938);
    R7 = (t9);
    if (((unsigned int)t9 >= (unsigned int)(*(int *)0x8C45F938))) goto L_8C1FB034;
    R5 = ((((int)R7 >= 0) ? (R4 << (R7 & 31)) : ((-(int)R7 & 31) ? ((int)R4 >> (-(int)R7 & 31)) : ((int)R4 >> 31))));
    if (((*(int *)0x8C45F95C) == 0)) goto L_8C1FB02A;
    *(unsigned int *)0x8C45F950 = ((*(int *)0x8C45F950) | R5);
    L_8C1FB034:;
    *(unsigned int *)(((*(int *)0x8C4607BC) + 0x20)) = R6;
    goto L_8C1FB0DE;
    L_8C1FB02A:;
    *(unsigned int *)0x8C45F944 = ((*(int *)0x8C45F944) & (~R5));
    goto L_8C1FB034;
    L_8C1FB03E:;
    if (((*(int *)0x8C4607B4) != 0)) goto L_8C1FB0DE;
    if (((*(int *)0x8C4607B8) == 0)) goto L_8C1FB0DE;
    if (((*(int *)(((*(int *)0x8C4607B8) + 0x24))) == -1)) goto L_8C1FB08E;
    t28 = *(int *)(((*(int *)0x8C4607B8) + 0x24));
    R5 = (t28);
    if (((unsigned int)t28 >= (unsigned int)(*(int *)0x8C45F93C))) goto L_8C1FB088;
    R7 = ((((int)R5 >= 0) ? (R4 << (R5 & 31)) : ((-(int)R5 & 31) ? ((int)R4 >> (-(int)R5 & 31)) : ((int)R4 >> 31))));
    if (((*(int *)0x8C45F960) == 0)) goto L_8C1FB07E;
    *(unsigned int *)0x8C45F954 = ((*(int *)0x8C45F954) | R7);
    L_8C1FB088:;
    *(unsigned int *)(((*(int *)0x8C4607B8) + 0x24)) = R6;
    L_8C1FB08E:;
    t38 = *(int *)(((*(int *)0x8C4607B8) + 0x28));
    R5 = (((0x1 & (t38 + 0x1)) + 0x2));
    R7 = (((0x1 & (t38 + 0x1)) + 0x2));
    if (((unsigned int)((0x1 & (t38 + 0x1)) + 0x2) >= (unsigned int)(*(int *)0x8C45F93C))) goto L_8C1FB0C8;
    R1 = ((((int)R7 >= 0) ? (R4 << (R7 & 31)) : ((-(int)R7 & 31) ? ((int)R4 >> (-(int)R7 & 31)) : ((int)R4 >> 31))));
    if (((*(int *)0x8C45F960) == 0)) goto L_8C1FB0BE;
    *(unsigned int *)0x8C45F954 = ((*(int *)0x8C45F954) | R1);
    L_8C1FB0C8:;
    *(unsigned int *)0x8C4607C4 = R6;
    *(unsigned int *)(((*(int *)0x8C4607B8) + 0x28)) = R5;
    *(unsigned int *)0x8C4607C0 = 0x0;
    kmiFLWCTRLStartRenderEntry((*(int *)0x8C4607B8));
    return;
    L_8C1FB0BE:;
    *(unsigned int *)0x8C45F948 = ((*(int *)0x8C45F948) & (~R1));
    goto L_8C1FB0C8;
    L_8C1FB07E:;
    *(unsigned int *)0x8C45F948 = ((*(int *)0x8C45F948) & (~R7));
    goto L_8C1FB088;
}
