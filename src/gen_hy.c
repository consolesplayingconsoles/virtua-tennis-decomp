/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int send_message_in_current_mode(void);
int syIntAdrChk_dumpline(int, int);
int syIntAdrChk_finish(void);
int syIntAdrChk_getchar(void);
int syIntAdrChk_init(void);
int syIntAdrChk_printh(int);
int syIntChkDump(int a4, int a5);
void restart_t404(void);
int atcomResetBlackList(void);

int syIntChkDump(int a4, int a5)
{
    int t0;
    int t16;
    int t56;
    int t57;
    int t76;
    int stk[12];

    *(unsigned short *)(((int)stk + 4)) = a4;
    t0 = *(short *)(((int)stk + 4));
    if (((unsigned short)t0 != 0x300) && (((unsigned short)t0 != 0x340) && (((unsigned short)t0 != 0x380) && ((unsigned short)t0 != 0x3C0)))) {
        return (unsigned short)t0;
    }
    *(unsigned int *)0x8C4747CC = a5;
    *(unsigned int *)(((int)stk + 12)) = (syIntAdrChk_init());
    send_message_in_current_mode();
    syIntAdrChk_dumpline(0x8C20B638, 0xA);
    syIntAdrChk_dumpline(0x8C20B644, 0x12);
    syIntAdrChk_dumpline(0x8C20B650, 0x1A);
    syIntAdrChk_dumpline(0x8C20B65C, 0x22);
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0xA8))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0xAC))));
    syIntAdrChk_dumpline(0x8C20B67C, 0x2D);
    t16 = *(int *)0x8C4747CC;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((t16 + 0xF0) + 0x0)));
    *(unsigned int *)(((t16 + 0xF0) + 0x0)) = (*(int *)(((*(int *)0x8C4747CC) + 0x4)));
    syIntAdrChk_dumpline(0x8C20B68C, 0x35);
    *(unsigned int *)((0xF0 + (*(int *)0x8C4747CC))) = (*(int *)(((int)stk + 8)));
    syIntAdrChk_dumpline(0x8C20B698, 0x2);
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)((0xF0 + (*(int *)0x8C4747CC)))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0xF4))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0xF8))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0xFC))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0x0))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0x100))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0x104))));
    send_message_in_current_mode();
    syIntAdrChk_printh((*(int *)(((*(int *)0x8C4747CC) + 0x108))));
    t56 = 0x0;
    for (;;) {
        t57 = ((~(((~t56) + 0x1) & 0x3)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0x3);
        }
        if (t57 == 0) {
            send_message_in_current_mode();
        }
        syIntAdrChk_printh((*(int *)((((t56 << 2) + 0x8C20B500) + 0x0))));
        send_message_in_current_mode();
        syIntAdrChk_printh((*(int *)(((*(int *)((((t56 << 2) + 0x8C20B500) + 0x0))) + 0x0))));
        send_message_in_current_mode();
        t56 = (t56 + 0x1);
        if ((int)t56 >= (int)0x45) {
            break;
        }
    }
    send_message_in_current_mode();
    *(volatile int *)(((int)stk + 12));
    
    send_message_in_current_mode();
    for (;;) {
        t76 = syIntAdrChk_getchar();
        if ((signed char)t76 == 13) {
            break;
        }
    }
    *(unsigned int *)0xFF000024 = (unsigned short)(*(short *)(((int)stk + 4)));
    return syIntAdrChk_finish();
}

void restart_t404(void)
{
    *(unsigned int *)0x8C1891E8 = (*(int *)0x8C1891F0);
}

int atcomResetBlackList(void)
{
    return nlsndSeqRequest(0xAA9);
}
