/* Straight-line functions with calls and guards (batch gen_ng): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ambEventStart(int, int, int, int, int, int);
int courtFraTexLoad(void);
int entryCountJoined(void);
int entryIsVersus(void);
int fadeScreenStart(int, int, int, int, int, int);
int matchSceneInit(void);
int matchStageSlot(void);
int ndbLoadWaitStart(void);
int nlsndSystemControl(int, int, int);
int scoreInit(void);
int set_event(int, int);
int sprSet173FreeAll(void);
int matchSceneSetup(void);

int matchSceneSetup(void)
{
    int stk[10];
    register int t1;
    register int t2;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t33;
    register int t34;
    register int t36;
    register int t37;
    register int t39;
    register int t52;
    register int t56;
    register int t67;
    register int t23;
    register int t24;
    int t25;
    register int t38;
    int t82;

    ndbLoadWaitStart();
    *(unsigned int *)0x8C181754 = 0x1;
    t1 = 0x8C185298;
    t2 = 0x8C301BA4;
    for (;;) {
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t1 + 0x0)))) != 0) {
            *(unsigned int *)((t2 + 0x0)) = 0x1;
        }
        t1 = (t1 + 0x2);
        t2 = (t2 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C301BB4;
    t6 = 0x0;
    t7 = 0x8C301BB4;
    t8 = 0x8C301BB4;
    t9 = 0x0;
    for (;;) {
        t11 = *(short *)((((t9 << 1) + 0x8C185298) + 0x0));
        t9 = (t9 + 0x1);
        if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)t11) == 0) {
            *(unsigned int *)((t8 + 0x0)) = (*(int *)(((0x8C343264 + t6) + 0x0)));
        } else {
            *(unsigned int *)((t7 + 0x0)) = 0xFFFFFFFF;
        }
        t6 = (t6 + 0x38);
        t7 = (t7 + 0x4);
        t8 = (t8 + 0x4);
        if ((int)t9 >= (int)0x4) {
            break;
        }
    }
    sprSet173FreeAll();
    *(unsigned int *)0x8C181750 = 0x1;
    *(unsigned int *)0x8C181760 = 0x0;
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C301B90 = (entryIsVersus());
    if ((*(int *)0x8C287D5C) == 1) {
        *(unsigned int *)0x8C301B90 = 0x1;
    }
    *(unsigned int *)0x8C181638 = 0x0;
    if (((*(int *)0x8C1891E8) != 2) && ((t23 = *(int *)0x8C1891E8, t23 != 3) && ((t24 = *(int *)0x8C1891E8, t24 != 9) && (t25 = *(int *)0x8C1891E8, t25 != 5)))) {
    } else {
        ambEventStart(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    nlsndSystemControl(0x0, 0x10A0, (*(int *)0x8C38BA64));
    scoreInit();
    t33 = set_event(0x38, 0x8C08509A);
    *(unsigned int *)((t33 + 0x14)) = 0x78;
    *(float *)((t33 + 0x18)) = 0.0f;
    *(unsigned int *)((t33 + 0x30)) = 0x0;
    *(unsigned int *)((t33 + 0x34)) = 0x0;
    *(unsigned int *)0x8C181758 = 0x0;
    *(unsigned int *)0x8C185410 = 0x0;
    t34 = 0x18;
    t36 = 0x8C185410;
    t37 = 0x0;
    t39 = t38;
    for (;;) {
        if ((int)t37 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t36 = 0x8C287ACC;
        t36 = (t36 + 0x14);
        if (((*(int *)((((t37 << 2) + t36) + 0x0)))) != 0) {
            t34 = 0xC58;
            t39 = (t37 * 0xD78);
            t39 = (t39 + 0x8C287D84);
            t39 = (*(int *)((t39 + t34)));
        }
        t37 = (t37 + 0x1);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        if ((*(int *)0x8C34326C) == 0) {
            t52 = *(int *)0x8C343268;
            *(unsigned int *)((t33 + 0x1C)) = t52;
            *(unsigned int *)0x8C301B9C = t52;
        } else {
            *(unsigned int *)((t33 + 0x1C)) = 0x4;
            *(unsigned int *)0x8C301B9C = 0x4;
            *(unsigned int *)0x8C343264 = t39;
        }
        if ((*(int *)0x8C3432A4) == 0) {
            t56 = *(int *)0x8C3432A0;
            *(unsigned int *)((t33 + 0x20)) = t56;
            *(unsigned int *)0x8C301BA0 = t56;
        } else {
            *(unsigned int *)((t33 + 0x20)) = 0x4;
            *(unsigned int *)0x8C301BA0 = 0x4;
            *(unsigned int *)0x8C34329C = t39;
        }
    }
    t67 = entryCountJoined();
    if (t67 == 2) {
        *(unsigned int *)0x8C185294 = 0x1;
    } else {
        *(unsigned int *)0x8C185294 = 0x0;
    }
    *(unsigned int *)0x8C301B98 = (*(int *)0x8C343264);
    *(unsigned int *)0x8C301B94 = (*(int *)0x8C34329C);
    if ((*(int *)0x8C1891E8) == 0) {
        courtFraTexLoad();
    }
    *(unsigned int *)((t33 + 0x2C)) = (matchStageSlot());
    if (((*(int *)0x8C287D5C) != 2) && (t82 = *(int *)0x8C287D5C, t82 != 3)) {
        fadeScreenStart(0x2, 0x1, 0xA, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    }
    *(volatile int *)0x8C1891E8;
    return matchSceneInit();
}
