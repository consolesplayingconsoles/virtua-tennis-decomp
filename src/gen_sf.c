/* Straight-line functions with calls and guards (batch gen_sf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmyiInitializeDriverObject(int, int);
int kmyInitializeDriver(void);

int kmyInitializeDriver(void)
{
    int t0;

    kmyiInitializeDriverObject(0x8C4743D8, 0x8C4743F0);
    *(unsigned int *)0x8C45EE20 = 0x8C1F78A6;
    t0 = ((int (*)(int, int, int))((*(int *)0x8C4743EC)))(0x8C4743D8, 0x8C45EE14, 0x8C45EE2C);
    *(unsigned int *)0x8C470D00 = 0x8C1F85B2;
    t0 = ((int (*)(int, int, int))((*(int *)0x8C4743EC)))(0x8C4743D8, 0x8C470CF4, 0x8C470D0C);
    return 0x0;
}
