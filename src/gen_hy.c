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


void restart_t404(void)
{
    *(unsigned int *)0x8C1891E8 = (*(int *)0x8C1891F0);
}

int atcomResetBlackList(void)
{
    return nlsndSeqRequest(0xAA9);
}
