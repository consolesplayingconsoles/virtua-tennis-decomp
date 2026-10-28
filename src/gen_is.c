/* Straight-line functions with calls and guards (batch gen_is): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int emotFaceVtxGet(int, int, int);
int emotFaceReset(int a4);

int emotFaceReset(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;
    int t8;
    int t17;
    int t5;

    t0 = *(int *)(((a4 << 2) + 0x8C1AA4BC));
    t2 = (emotFaceVtxGet(a4, 0x0, 0x0));
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        t6 = emotFaceVtxGet(a4, t4, 0x0);
        if (t6 == -1) {
            break;
        }
        t5 = t0;
        t5 = (t5 + ((emotFaceVtxGet(a4, t4, 0x1)) << 2));
        t8 = emotFaceVtxGet(a4, t4, 0x0);
        if (t2 != t8) {
            t3 = (t3 + 0x3);
        }
        *(float *)((t5 + 0x0)) = (*(float *)((((*(int *)((((a4 << 2) + 0x8C1AA504) + 0x0))) + (((t3 << 1) + t3) << 2)) + 0x0)));
        *(unsigned int *)((t5 + 0x0)) = ((*(int *)((t5 + 0x0))) | 0x1);
        t5 = (t5 + 0x4);
        *(float *)((t5 + 0x0)) = (*(float *)((((*(int *)((((a4 << 2) + 0x8C1AA504) + 0x0))) + (((t3 << 1) + t3) << 2)) + 0x4)));
        t5 = (t5 + 0x4);
        *(float *)((t5 + 0x0)) = (*(float *)((((((t3 << 1) + t3) << 2) + (*(int *)((((a4 << 2) + 0x8C1AA504) + 0x0)))) + 0x8)));
        t17 = emotFaceVtxGet(a4, t4, 0x0);
        t4 = (t4 + 0x1);
        t2 = t17;
    }
    return t6;
}
