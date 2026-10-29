/* Straight-line functions with calls and guards (batch gen_vy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int _pd_peripheral_set_data(int a4, int a5, int a6);

int _pd_peripheral_set_data(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a5 + 0x8));
    t1 = *(signed char *)(((t0 + 0x8) + 0x1));
    t2 = *(signed char *)(((t0 + 0x8) + 0x0));
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) >= (unsigned int)(*(signed char *)0x8C45A6B0)) {
        *(unsigned char *)(((0x8C45A6B2 + a6) + 0x0)) = 0x1;
        t3 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) <= (unsigned int)(*(signed char *)0x8C45A6B1)) {
            *(unsigned char *)(((0x8C45A6B2 + a6) + 0x0)) = 0x0;
            t4 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) | 0x20000);
        } else {
            t5 = (((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000);
            if ((*(signed char *)(((0x8C45A6B2 + a6) + 0x0))) != 0) {
                t5 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
            }
            t4 = t5;
        }
        t3 = t4;
    }
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) >= (unsigned int)(*(signed char *)0x8C45A6B0)) {
        *(unsigned char *)(((0x8C45A6CA + a6) + 0x0)) = 0x1;
        t1 = (t3 & 0xFFFEFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) <= (unsigned int)(*(signed char *)0x8C45A6B1)) {
            *(unsigned char *)(((0x8C45A6CA + a6) + 0x0)) = 0x0;
            t2 = (t3 | 0x10000);
        } else {
            t4 = t3;
            if ((*(signed char *)(((0x8C45A6CA + a6) + 0x0))) != 0) {
                t4 = (t3 & 0xFFFEFFFF);
            }
            t2 = t4;
        }
        t1 = t2;
    }
    t2 = t1;
    if ((*(int *)0x8C45A6AC) == 0) {
        t2 = (t1 ^ 0xFFFFFFFF);
    }
    *(unsigned int *)((a4 + 0x8)) = t2;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        t1 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x18)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x20000) != 0) {
        t1 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x1A)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x40000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x4))) - 128);
    }
    *(unsigned short *)((a4 + 0x1C)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x80000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x5))) - 128);
    }
    *(unsigned short *)((a4 + 0x1E)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x6))) - 128);
    }
    *(unsigned short *)((a4 + 0x20)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x200000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x7))) - 128);
    }
    *(unsigned short *)((a4 + 0x22)) = t1;
    return 0x22;
}
