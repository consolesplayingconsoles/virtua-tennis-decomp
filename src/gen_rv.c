/* Straight-line functions with calls and guards (batch gen_rv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
int SJMEM_PutChunk(int a4, int a5, int a6);

int SJMEM_PutChunk(int a4, int a5, int a6)
{
    int t0;
    int t4;

    t0 = SJMEM_Lock();
    if ((a5 != 0) && (a5 != 1)) {
        *(unsigned int *)((a6 + 0x4)) = 0x0;
        *(unsigned int *)((a6 + 0x0)) = 0x0;
        if ((*(int *)((a4 + 0x1C))) != 0) {
            t4 = ((int (*)(int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD);
        }
    }
    return SJMEM_Unlock(a4, t0);
}
