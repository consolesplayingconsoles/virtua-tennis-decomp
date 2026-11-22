/* Straight-line functions with calls and guards (batch gen_se): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetFogTable(int a4);

int kmSetFogTable(int a4)
{
    int t1;
    int t2;
    int t4;

    t1 = ((int)((*(float *)((a4 + 0x1FC))) * 255.0f) & 0xFF);
    t2 = 0x80;
    for (;;) {
        t2 = (t2 - 1);
        t4 = t1;
        t1 = (int)((*(float *)((a4 + (t2 << 2)))) * 255.0f);
        t1 = (t1 & 0xFF);
        *(unsigned int *)(((t2 << 2) + 0x8C4707EC)) = (unsigned short)((t1 << 8) | t4);
        if (t2 == 0) {
            break;
        }
    }
    *(unsigned int *)0x8C4709EC = ((*(int *)0x8C4709EC) | 0x4);
    return 0x0;
}
