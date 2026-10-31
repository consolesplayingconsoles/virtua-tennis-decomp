/* Straight-line functions with calls and guards (batch gen_nz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
int gameModeSet(int, int, int);
int menuDimScreen(int);
int menuResultDraw(int, int, int, float);
int nlsndSystemControl(int, int, int);
int padDirRepeat(int, int);
int resultFlagsClear(void);
int sndSeCursor(void);
int sndSeDecide(void);
int sprListPut(int, int, int, Stk3, float, float, float);
int strmBgmPlay(int);
int strmScoreReset(void);
int strmVoiceQueueReset(void);
int menuResultExec(int a4);

int menuResultExec(int a4)
{
    int t1;
    int t5;
    int t7;
    int t19;
    int t29;
    int t40;
    int t42;
    float u50;
    float u51;
    float u52;
    int t53;
    float u54;
    int t89;
    int t69;
    int t73;
    int t94;
    int t4;
    int t6;
    int t24;
    int t20;
    int t21;
    int t22;
    int t30;
    int t36;
    int t38;
    int t62;
    int t67;
    int t87;
    int t79;
    int stk[35];

    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)0x8C287C60 = 0x1;
        *(unsigned int *)0x8C1D1368 = 0x0;
        *(unsigned int *)0x8C40C280 = 0x0;
        *(unsigned int *)0x8C40C284 = 0x0;
        t1 = 0x1;
        for (;;) {
            nlsndSystemControl(t1, 0x1300A0, 0x0);
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) {
                break;
            }
        }
        t94 = (strmVoiceQueueReset());
    } else {
        t5 = a4;
        t7 = 0x0;
        for (;;) {
            if ((*(int *)(((t7 << 2) + 0x8C287AE0))) == 0) {
                t5 = 0xD78;
                t5 = (t7 * t5);
                t5 = (t5 + (int)Player);
                *(unsigned int *)(((int)stk + 20)) = t5;
                t5 = (*(int *)((t5 + 0xB64)));
                t6 = (padDirRepeat(t5, 0x10));
                t5 = (*(int *)(((int)stk + 20)));
                t5 = (*(int *)((t5 + 0xB64)));
                *(unsigned int *)(((int)stk + 16)) = (padDirRepeat(t5, 0x20));
                t5 = (*(int *)(((int)stk + 20)));
                t5 = (*(int *)((t5 + 0xB64)));
                t5 = (t5 << 2);
                t5 = (*(int *)((t5 + (int)padPeri)));
                *(unsigned int *)(((int)stk + 28)) = t5;
                t5 = (*(int *)((t5 + 0x10)));
                t19 = (t5 & 0x8);
                t5 = (t5 & 0x5);
                *(unsigned int *)(((int)stk + 24)) = t19;
                *(unsigned int *)(((int)stk + 20)) = t5;
                if ((t6 == 0) && ((t20 = *(int *)(((int)stk + 16)), t4 = t20, t4 == 0) && ((t19 == 0) && (t21 = *(int *)(((int)stk + 20)), t4 = t21, t4 == 0)))) {
                    t22 = t4;
                } else {
                    t7 = 0x4;
                }
                t24 = t22;
            } else {
                t24 = t4;
            }
            t4 = t24;
            t7 = (t7 + 0x1);
            if ((int)t7 >= (int)0x4) {
                break;
            }
        }
        t29 = *(int *)0x8C1D1368;
        if ((((int)t29 < (int)0x2) && (t30 = *(int *)(((int)stk + 16)), t30 != 0)) || (((int)t29 > 0) && (t6 != 0))) {
            sndSeCursor();
        } else {
            t36 = t29;
        }
        t40 = 0x0;
        if (((int)(*(int *)0x8C1D1368) < (int)0x2) && (t38 = *(int *)(((int)stk + 16)), t38 != 0)) {
            t40 = 0x1;
        }
        t42 = 0x0;
        if (((int)(*(int *)0x8C1D1368) > 0) && (t6 != 0)) {
            t42 = 0x1;
        }
        *(unsigned int *)0x8C1D1368 = ((*(int *)0x8C1D1368) + (t40 - t42));
        menuDimScreen(t36);
        menuResultDraw((*(int *)0x8C1D1368), 0x3, 0x1, 0.0f);
        *(float *)(((((int)stk + 16) + 0x28) + 0x0)) = (*(float *)0x8C0D1020);
        *(float *)(((((int)stk + 16) + 0x28) + 0xC)) = (*(float *)0x8C0D1024);
        *(float *)(((((int)stk + 16) + 0x28) + 0x18)) = (*(float *)0x8C0D1028);
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x0)) = 0x8C1D1764;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = 0x1;
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x4)) = 0x8C1D17D0;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = 0x2;
        *(unsigned int *)(((((int)stk + 16) + 0x1C) + 0x8)) = 0x8C1D18A8;
        *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = 0x2;
        u50 = *(float *)0x8C0D1038;
        u51 = *(float *)0x8C0D103C;
        u52 = *(float *)0x8C0D1040;
        t53 = 0x0;
        for (;;) {
            u54 = u52;
            u54 = u54 + u50 * (float)t53;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28)) + 0x4)) = u54;
            *(float *)((((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28)) + 0x8)) = u51;
            *(unsigned int *)(((int)stk + 16)) = ((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28));
            if (t53 == (*(int *)0x8C1D1368)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))); }
                t62 = (sprListPut((*(int *)(((((int)stk + 16) + 0x1C) + (t53 << 2)))), (*(int *)(((((int)stk + 16) + 0x10) + (t53 << 2)))), 0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 1.0f));
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((((t53 << 1) + t53) << 2) + (((int)stk + 16) + 0x28))); }
                t62 = (sprListPut((*(int *)(((((int)stk + 16) + 0x1C) + (t53 << 2)))), (*(int *)(((((int)stk + 16) + 0x10) + (t53 << 2)))), 0x0, *(Stk3 *)(((int)stk + 4)), 1.0f, 1.0f, 0.400000006f));
            }
            t53 = (t53 + 0x1);
            if ((int)t53 >= (int)0x3) {
                break;
            }
        }
        *(unsigned int *)0x8C1D136C = 0x0;
        t89 = t62;
        if (((*(int *)(((int)stk + 24))) == 0) && (t67 = *(int *)(((int)stk + 20)), t67 == 0)) {
        } else {
            *(unsigned int *)0x8C287C60 = 0x0;
            strmScoreReset();
            t69 = *(int *)0x8C1D1368;
            if (t69 != 0) {
                if (t69 != 1) {
                    t73 = t69;
                    if (t69 != 2) {
                    } else {
                        sndSeDecide();
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                        t73 = (gameModeSet(0x0, 0x3, 0x0));
                    }
                    t79 = t73;
                } else {
                    *(unsigned int *)0x8C188EA8 = 0x1;
                    *(unsigned int *)0x8C188EAC = 0x0;
                    sndSeDecide();
                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                    gameModeSet(0x1, 0x4, 0x0);
                    t79 = (strmBgmPlay(0x2));
                }
                t87 = t79;
            } else {
                sndSeDecide();
                *(unsigned int *)0x8C20D14C = 0x2;
                *(unsigned int *)0x8C20D150 = 0x2;
                *(unsigned int *)0x8C1D136C = 0x1;
                *(unsigned int *)0x8C185408 = (*(int *)0x8C18540C);
                if ((*(int *)0x8C287ADC) == 4) {
                    *(unsigned int *)0x8C185408 = 0x1;
                }
                t87 = (resultFlagsClear());
            }
            t89 = t87;
        }
        t94 = t89;
    }
    return t94;
}
