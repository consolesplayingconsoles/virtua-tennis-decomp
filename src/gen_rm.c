/* Straight-line functions with calls and guards (batch gen_rm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdFsGetDirEnt(int, int, int, int);
int gdFsLockDir(int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int gdFsLoadDirG(int a4, int a5);

int gdFsLoadDirG(int a4, int a5)
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
    int t9;
    int t10;
    int t11;
    int t12;

    t4 = *(int *)0x8C20C204;
    t5 = a5;
    if (a5 == 0) {
        t5 = (*(int *)((t4 + 0x10)));
    }
    t6 = *(signed char *)((a4 + 0x0));
    t7 = *(int *)0x8C45A138;
    if ((t6 != 47) && (t6 != 92)) {
        t6 = gdFsSearchName(a4, (*(int *)((t4 + 0x10))), 0x0);
        t8 = 0xFFFFFFF8;
        if (t6 != 0) {
            t9 = *(int *)(((*(int *)0x8C20C204) + 0x10));
            t10 = 0xFFFFFFF5;
            if (((unsigned char)(*(signed char *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x8))) & 2) == 0) {
            } else {
                t11 = *(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x0));
                t12 = gdFsGetDirEnt(((*(int *)0x8C20C204) + 0x40), (t11 + 0x96), t5, (*(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x4))));
                if (((*(short *)(((*(int *)0x8C45A138) + 0x0))) == 1) && ((t0 = *(int *)0x8C45A138, t1 = *(int *)((t0 + 0x4)), t1 == (t11 + 0x96)) && ((t12 == 0) || (t12 == -12)))) {
                    gdFsLockDir(t5);
                }
                t10 = t12;
            }
            t8 = t10;
        }
        t0 = t8;
    } else {
        if ((*(short *)((t7 + 0x0))) == 1) {
            t1 = (gdFsSearchPath_dds(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4, (0x8 + t7)));
        } else {
            t1 = (gdFsSearchPath(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4));
        }
        t4 = 0xFFFFFFF8;
        if (t1 != 0) {
            t6 = gdFsGetDirEnt(((*(int *)0x8C20C204) + 0x40), (0x96 + t1), t5, 0x800);
            if (((*(short *)(((*(int *)0x8C45A138) + 0x0))) == 1) && ((t2 = *(int *)0x8C45A138, t3 = *(int *)((t2 + 0x4)), t3 == (0x96 + t1)) && ((t6 == 0) || (t6 == -12)))) {
                gdFsLockDir(t5);
            }
            t4 = t6;
        }
        t0 = t4;
    }
    return t0;
}
