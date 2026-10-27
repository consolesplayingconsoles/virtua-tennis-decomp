/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mwRnaErrCallFunc(int, ...);
int mwRnaSetFx(int a4, int a5, int a6);

int mwRnaSetFx(int a4, int a5, int a6)
{
    int t3;
    int t1;
    int t5;
    int t8;
    int t12;
    int t10;

    if (a4 == 0) {
        t12 = (mwRnaErrCallFunc(0x8C20AC30));
    } else {
        if (((int)a5 >= 0) && ((int)a5 <= (int)0x10)) {
            t3 = 0xFFFFFFD3;
            if ((int)a6 < (int)0xFFFFFFD3) {
            } else {
                t1 = a6;
                if ((int)a6 > 0) {
                    t1 = 0x0;
                }
                t3 = t1;
            }
            t5 = *(int *)((a4 + 0x38));
            t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t5 + 0x0))) + 0x44)))))(t5, 0x0, a5, t3);
            *(unsigned int *)((a4 + 0x6C)) = a5;
            *(unsigned int *)((a4 + 0x70)) = t3;
            t10 = 0x70;
        } else {
            t10 = (mwRnaErrCallFunc(0x8C20AD08));
        }
        t12 = t10;
    }
    return t12;
}
