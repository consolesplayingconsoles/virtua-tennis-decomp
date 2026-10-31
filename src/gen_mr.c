/* Straight-line functions with calls and guards (batch gen_mr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char g_0c2fac14[];
extern char g_0c2faf54[];

int mwlSbAlloc(void);

int mwlSbAlloc(void)
{
    int t0;
    int t1;
    int t6;

    if ((unsigned int)(int)g_0c2fac14 < (unsigned int)(int)g_0c2faf54) {
        t0 = (int)g_0c2fac14;
        t1 = (int)g_0c2fac14;
        for (;;) {
            if ((*(signed char *)((t0 + 0x4))) == 0) {
                break;
            }
            t0 = (t0 + 0x68);
            t1 = (t1 + 0x68);
            if ((unsigned int)t0 >= (unsigned int)(int)g_0c2faf54) {
                return 0x0;
            }
        }
        t6 = t1;
    } else {
        t6 = 0x0;
    }
    return t6;
}
