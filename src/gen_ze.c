/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int FUN_8c0b0274(void);

int FUN_8c0b0274(void)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 4)) = *(struct mv4 *)(0x8C110FCC); }
    t0 = *(int *)0x8C185630;
    *(unsigned int *)0x8C185630 = (t0 + 0x1);
    *(unsigned short *)0x8C343262 = 0x0;
    t1 = 0x0;
    t2 = (t0 + 0x1);
    t3 = 0x8C110FCC;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t3 = (t4 * 0x38);
        t3 = (t3 + 0x8C343264);
        t2 = (*(int *)((t3 + 0x8)));
        if (t2 == 0) {
            t1 = t4;
            t1 = (t1 << 1);
            t8 = *(short *)((0x8C185298 + t1));
            t1 = (*(short *)0x8C343262);
            t1 = (t1 | t8);
            *(unsigned short *)0x8C343262 = t1;
        }
        t4 = (t4 + 0x1);
    }
    t13 = *(int *)0x8C287ADC;
    if (t13 == 4) {
        t14 = 0x0;
        t15 = ((int)stk + 4);
        for (;;) {
            t16 = *(int *)((t15 + 0x0));
            t15 = (t15 + 0x4);
            t17 = (0x8C343264 + t14);
            t14 = (t14 + 0x38);
            *(unsigned int *)((t17 + 0x1C)) = t16;
            if ((unsigned int)t14 >= (unsigned int)0xE0) {
                break;
            }
        }
    }
    *(unsigned int *)0x8C343728 = 0x0;
    *(unsigned int *)0x8C343724 = 0x0;
    *(unsigned int *)0x8C343748 = 0x0;
    *(unsigned int *)0x8C343744 = 0x0;
    return t13;
}
