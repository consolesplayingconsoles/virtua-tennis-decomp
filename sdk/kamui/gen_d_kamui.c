/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bcd2bin(int);
int ndbSum16Check(int, int);
int kmyGetFrameBufferSize(int);
int memset(int, int, int);
int nlObjPut(int);


int kmiWriteRegister(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0xA05F8000) + 0x0)) = a5;
    return 0x1;
}


int kmiCalculateWorkSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)0x8C45F7C0 = t0;
    t1 = *(int *)0x8C45EFDC;
    t2 = kmyGetFrameBufferSize(t1);
    t3 = *(int *)((a4 + 0xC));
    *(unsigned int *)0x8C45F7C8 = (t2 * ((t3 + 0x1) & 0xFFFFFFFE));
    t4 = *(int *)0x8C45F7C8;
    t5 = *(int *)0x8C45F7C0;
    t6 = *(int *)0x8C45F7BC;
    if (((unsigned int)(t5 + t4) >= (unsigned int)t6)) {
        t7 = *(int *)0x8C45F7C8;
        t8 = *(int *)0x8C45F7BC;
        *(unsigned int *)0x8C45F7C0 = ((t8 - t7) + 0xFFFC0000);
        }
    t12 = *(int *)0x8C45F7C8;
    t13 = *(int *)0x8C45F7BC;
    t14 = *(int *)0x8C45F7C0;
    *(unsigned int *)0x8C45F7C4 = ((t13 - t12) - t14);
    return 0x0;
}
