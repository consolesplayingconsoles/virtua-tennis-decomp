/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);


int syCfgInit(int a4)
{
    if ((a4 == 0)) {
        return -1;
        }
    *(unsigned int *)0x8C20C240 = a4;
    return 0x0;
}


void kdSetGunCallback(int a4)
{
    *(unsigned int *)0x8C461E98 = a4;
}

int vmsfs_c_exit(int a4, int a5, int a6, int a7)
{
    memset(0x8C462180, 0x0, 0x400, a7);
    return 0x0;
}


void buFbrInit(int a4, int a5, int a6, int a7)
{
    memset(0x8C4747D0, 0x0, 0x1AF8, a7);
    *(unsigned int *)0x8C4762C8 = 0x0;
    *(unsigned int *)0x8C4762CC = 0x0;
    *(unsigned int *)0x8C4762D0 = 0x0;
}
