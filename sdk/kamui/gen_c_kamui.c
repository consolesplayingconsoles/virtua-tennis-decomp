/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);


int kmSetPixelClipping(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0x8C45F7CC = a4;
    *(unsigned int *)0x8C45F7D4 = a6;
    *(unsigned int *)0x8C45F7D0 = a5;
    *(unsigned int *)0x8C45F7D8 = a7;
    return 0x0;
}


int kmySetupTA(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t19;

    t0 = kmyiCheckNativeHandle(a4, a5, a6, a7);
    
    if ((t0 == 0)) {
        t19 = 0xEEEE;
        } else {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        kmiWriteRegister(0x8, 0x1);
        kmiWriteRegister(0x8, 0x0);
        t3 = *(int *)(((a4 + 0x18) + 0x20));
        kmiWriteRegister(0x13C, t3);
        t5 = *(int *)(((a4 + 0x18) + 0x30));
        kmiWriteRegister(0x140, t5);
        t7 = *(int *)(((a4 + 0x18) + 0x10));
        kmiWriteRegister(0x124, t7);
        t9 = *(int *)(((a4 + 0x18) + 0x8));
        kmiWriteRegister(0x128, t9);
        t11 = *(int *)(((a4 + 0x18) + 0x18));
        kmiWriteRegister(0x12C, t11);
        t13 = *(int *)(((a4 + 0x18) + 0x14));
        kmiWriteRegister(0x130, t13);
        t15 = *(int *)(((a4 + 0x18) + 0x1C));
        kmiWriteRegister(0x164, t15);
        kmiWriteRegister(0x144, 0x80000000);
        kmiReadRegister(0x144);
        t19 = 0x0;
        }
    return t19;
}

