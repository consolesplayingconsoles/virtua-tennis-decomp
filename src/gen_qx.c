/* Straight-line functions with calls and guards (batch gen_qx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmyMemCopy(int, int, int);
void kmGetSystemMetrics(int a4);

void kmGetSystemMetrics(int a4)
{
    int t0;
    int t1;
    int t2;

    if (((*(int *)((a4 + 0x0))) & 1) != 0) {
        kmyMemCopy((a4 + 0x68), 0x8C45F6F4, 0xA0);
        kmyMemCopy((0x108 + a4), 0x8C45F818, 0xA0);
    }
    if (((*(int *)((a4 + 0x0))) & 2) != 0) {
        t0 = (a4 + 0x4);
        t1 = ((*(int *)0x8C45F8FC) - 1);
        for (;;) {
            t1 = (t1 & 0x7);
            t2 = *(int *)((((t1 << 2) + 0x8C45F8D8) + 0x0));
            t1 = (t1 - 1);
            *(unsigned int *)((t0 + 0x0)) = ((int)((unsigned int)((((t2 << 2) << 2) << 2) << 1) / (unsigned int)0x64));
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)(a4 + 0x24)) {
                break;
            }
        }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)(((0x8C45F8B8 + t0) + 0x0));
            t2 = ((a4 + 0x24) + t0);
            t0 = (t0 + 0x4);
            *(unsigned int *)((t2 + 0x0)) = t1;
            if ((unsigned int)t0 >= (unsigned int)0x20) {
                break;
            }
        }
    }
    if (((*(int *)((a4 + 0x0))) & 4) != 0) {
        *(unsigned int *)((a4 + 0x50)) = (*(int *)0x8C45F7F8);
        *(unsigned int *)((a4 + 0x54)) = (*(int *)0x8C45F7FC);
        *(unsigned int *)((a4 + 0x44)) = (*(int *)0x8C45F7F0);
        *(unsigned int *)((a4 + 0x48)) = 0x0;
        *(unsigned int *)((a4 + 0x4C)) = (*(int *)0x8C45F7F4);
    }
    if (((*(int *)((a4 + 0x0))) & 16) != 0) {
        *(unsigned int *)((a4 + 0x58)) = ((*(int *)0x8C45F810) - (*(int *)0x8C45F800));
        *(unsigned int *)((a4 + 0x5C)) = ((((*(int *)0x8C45F814) - (*(int *)0x8C45F800)) & 0xFFFFF) << 2);
        *(unsigned int *)((a4 + 0x64)) = ((*(int *)0x8C45F808) - (*(int *)0x8C45F800));
        *(unsigned int *)((a4 + 0x60)) = ((*(int *)0x8C45F80C) - (*(int *)0x8C45F800));
    }
    if (((*(int *)((a4 + 0x0))) & 8) != 0) {
        *(unsigned int *)((a4 + 0x1A8)) = (*(int *)0x8C4607C4);
        *(unsigned int *)((a4 + 0x1AC)) = (*(int *)0x8C4607CC);
    }
}
