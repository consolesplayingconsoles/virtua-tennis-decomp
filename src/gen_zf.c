/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int modelGetSize(int, int, int, int);
int nlMalloc(int);
int FUN_8c08a936(int a4, int a5, int a6, int a7);

int FUN_8c08a936(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = modelGetSize(a4, a5, a6, a7);
    t1 = nlMalloc(t0);
    t2 = t0;
    if ((int)t0 < 0) {
        t2 = (t0 + 0x3);
    }
    if ((int)((t2 >> 1) >> 1) > 0) {
        t0 = 0x0;
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            *(unsigned int *)((t1 + t0)) = (*(int *)((a4 + t0)));
            t0 = (t0 + 0x4);
            if ((int)t3 >= (int)((t2 >> 1) >> 1)) {
                break;
            }
        }
    }
    return t1;
}
