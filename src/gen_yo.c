/* Straight-line functions with calls and guards (batch gen_yo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int, float);
int hudPanelDraw(int, int, float);
int nlCloseEvent(int);
int resTitleLoadInit(void);
int resTitleLoadStep(void);
int strmBgmPlay(int, int, int, int);
int FUN_8c0e9394(void);
int FUN_8c0da8aa(int a4, int a5, int a6, int a7);

int FUN_8c0e9394(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(int *)0x8C20D15C) == 0) {
        resTitleLoadInit();
        *(unsigned int *)0x8C1DC6C8 = 0x0;
        *(unsigned int *)0x8C1DC6C4 = 0x0;
        *(unsigned int *)0x8C287D5C = 0x0;
        t0 = 0x8C42409C;
        for (;;) {
            t1 = t0;
            t2 = 0x0;
            for (;;) {
                t2 = (t2 + 0x1);
                *(float *)((t1 + 0x4)) = (-1.0f);
                t1 = (t1 + 0xC);
                if ((int)t2 >= (int)0xA) {
                    break;
                }
            }
            t0 = (t0 + 0x78);
            if ((unsigned int)t0 >= (unsigned int)0x8C42418C) {
                break;
            }
        }
        t0 = (FUN_8c0eaf00(0x4D4D4D, 0x4D4D4D, 0x4D4D4D, (-1.0f)));
    }
    if ((*(int *)0x8C1DC6C4) == 0) {
        t1 = resTitleLoadStep();
        if (t1 != 0) {
            *(unsigned int *)0x8C1DC6C4 = 0x1;
        }
        *(unsigned int *)0x8C287D5C = 0x0;
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t2 = t1;
    } else {
        *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x3);
        *(unsigned int *)0x8C20D15C = 0x0;
        t2 = t0;
    }
    return t2;
}

int FUN_8c0da8aa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x24));
    t1 = *(int *)((a4 + 0x20));
    t2 = (t0 - t1);
    if ((t0 - t1) == 15) {
        t2 = (strmBgmPlay(0x13, a5, a6, a7));
    }
    t0 = t2;
    if ((int)((*(int *)((a4 + 0x24))) - (*(int *)((a4 + 0x20)))) > (int)0xA) {
        t0 = (hudPanelDraw((*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x1C))), (*(float *)((a4 + 0x18)))));
    }
    t1 = *(int *)((a4 + 0x20));
    *(unsigned int *)((a4 + 0x20)) = (t1 - 1);
    if ((int)(t1 - 1) < 0) {
        hudPanelDraw(0x2, 0x0, 0.0f);
        return nlCloseEvent(a4);
    }
    return t0;
}
