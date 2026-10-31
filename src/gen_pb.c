/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char g_0c2aedc4[];
extern char g_0c2b8cbc[];

void nlVtxBufScanInit(void);

void nlVtxBufScanInit(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    t1 = 0x5;
    t2 = (int)g_0c2aedc4;
    t3 = (*(int *)(int)g_0c2b8cbc);
    for (;;) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t1 = (t1 - 1);
        *(unsigned int *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x4);
        if (t1 == 0) {
            break;
        }
    }
}
