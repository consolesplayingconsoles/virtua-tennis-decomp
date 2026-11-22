/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);


void ADXT_SetReloadSct(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x3E)) = a5;
}

void ADXT_SetAutoRcvr(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x6D)) = a5;
}


void ADXCRS_Init(void)
{
    *(unsigned int *)0x8C20C894 = 0x0;
}

int ADXSTM_Init(int a4, int a5, int a6, int a7)
{
    memset(0x8C46B2E4, 0x0, 0xC80, a7);
    return 0x1;
}


