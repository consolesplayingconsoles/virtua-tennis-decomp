/* Straight-line functions with calls and guards (batch gen_ym): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int);
int fadeScreenStart(int, int, int, int, int, int);
int hudPanelDraw(int, int, float);
int nlExecuteEvent(int);
int strmBgmPlay(int);
int FUN_8c0d65bc(void);

int FUN_8c0d65bc(void)
{
    int stk[6];
    register int t12;
    register int t27;
    register int t17;
    register int t23;
    register int t29;

    if ((*(int *)0x8C20D15C) == 0) {
        hudPanelDraw(0x2, 0x0, 0.0f);
        FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF);
    }
    if ((*(int *)0x8C20D15C) == 75) {
        strmBgmPlay(0x13);
    }
    t12 = *(int *)0x8C20D15C;
    if (((int)t12 > (int)0x46) && ((int)t12 < (int)0x118)) {
        hudPanelDraw(0x1, 0x1, 240.0f);
    } else {
        t17 = t12;
    }
    if ((*(int *)0x8C20D15C) == 0xFB) {
        fadeScreenStart(0x3, 0x0, 0x1E, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    } else {
        t23 = t17;
    }
    if ((*(int *)0x8C20D15C) == 0x118) {
        hudPanelDraw(0x2, 0x0, 0.0f);
        *(unsigned int *)0x8C20D150 = 0x3;
        *(unsigned int *)0x8C407FD4 = 0x1;
        *(unsigned int *)0x8C20D15C = 0x0;
        t29 = 0x8C407FD4;
    } else {
        t27 = nlExecuteEvent(t23);
        *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
        t29 = t27;
    }
    return t29;
}
