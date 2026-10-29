/* Straight-line functions with calls and guards (batch gen_rn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int sprCellInit(int, int);
void sprSheetSet(int a4);

void sprSheetSet(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)0x8C287654 = a4;
    t0 = *(int *)((a4 + 0x10));
    t1 = t0;
    if ((int)t0 > (int)0x8) {
        t1 = 0x8;
    }
    t0 = 0x8C287658;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x50);
        if ((unsigned int)t0 >= (unsigned int)0x8C2878D8) {
            break;
        }
    }
    if ((int)t1 > 0) {
        t0 = 0x0;
        t2 = 0x8C2878D8;
        t3 = 0x0;
        t4 = 0x8C287658;
        for (;;) {
            sprCellInit(t4, (*(int *)((a4 + 0x0))));
            *(float *)((t4 + 0x18)) = ((float)(*(int *)((((*(int *)((a4 + 0xC))) + t3) + 0x0))) / (float)(*(int *)((a4 + 0x4))));
            *(float *)((t4 + 0x1C)) = ((float)(*(int *)((((*(int *)((a4 + 0xC))) + t3) + 0x4))) / (float)(*(int *)((a4 + 0x8))));
            *(float *)((t4 + 0x20)) = ((float)(*(int *)((((*(int *)((a4 + 0xC))) + t3) + 0x8))) / (float)(*(int *)((a4 + 0x4))));
            *(float *)((t4 + 0x24)) = ((float)(*(int *)((((*(int *)((a4 + 0xC))) + t3) + 0xC))) / (float)(*(int *)((a4 + 0x8))));
            t5 = *(int *)((a4 + 0xC));
            *(float *)((t4 + 0x10)) = ((float)((*(int *)(((t5 + t3) + 0x8))) - (*(int *)(((t5 + t3) + 0x0)))) / (float)(*(int *)((a4 + 0x4))));
            t5 = *(int *)((a4 + 0xC));
            t6 = *(int *)(((t5 + t3) + 0xC));
            t7 = *(int *)(((t5 + t3) + 0x4));
            t0 = (t0 + 0x1);
            t3 = (t3 + 0x10);
            *(float *)((t4 + 0x14)) = ((float)(t6 - t7) / (float)(*(int *)((a4 + 0x8))));
            *(float *)((t2 + 0x0)) = 0.0f;
            t2 = (t2 + 0x4);
            t4 = (t4 + 0x50);
            if ((int)t0 >= (int)t1) {
                break;
            }
        }
    }
}
