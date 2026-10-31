/* Straight-line functions with calls and guards (batch gen_yi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int, Stk3, float);
int charaTexFree(int);
int dbgMenuInit(void);
int nlInitEvent(void);
int nlsndSeqRequest(int);
int nlsndSystemControl(int, int, int);
int sprMatchFree(void);
int sprSet173FreeAll(void);
int strmBgmFadeOut(int, int);
int FUN_8c0d59d8(float f4);

int FUN_8c0d59d8(float f4)
{
    int stk[12];
    register int t5;
    register int t8;
    register int t9;
    register int t10;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t6;
    register int t7;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C125E48); }
    FUN_8c0eaf00(0xFFFFFF, 0xFFFFFF, 0xFFFFFF, *(Stk3 *)(((int)stk + 4)), f4);
    nlInitEvent();
    dbgMenuInit();
    *(unsigned int *)0x8C402CA0 = 0x0;
    *(float *)0x8C402CA4 = 0.0f;
    *(unsigned int *)0x8C402CAC = 0x0;
    *(unsigned int *)0x8C402CA8 = 0xFFFFFFFF;
    *(unsigned int *)0x8C40C1C0 = 0x0;
    *(float *)0x8C40C2EC = (-1.0f);
    *(unsigned int *)0x8C1D3724 = 0x0;
    sprSet173FreeAll();
    t5 = (sprMatchFree());
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        t10 = *(int *)0x8C287ADC;
        if ((int)t8 >= (int)t10) {
            break;
        }
        t7 = 0x8C287ACC;
        t7 = (t7 + 0x14);
        t6 = (*(int *)((((t8 << 2) + t7) + 0x0)));
        if (t6 != 0) {
            t7 = 0xC58;
            t5 = t9;
            t5 = (t5 << 2);
            t9 = (t9 + 0x1);
            t7 = (t7 + ((t8 * 0xD78) + 0x8C287D84));
            t7 = (*(int *)((t7 + 0x0)));
            *(unsigned int *)((((int)stk + 4) + t5)) = t7;
        }
        t8 = (t8 + 0x1);
    }
    t17 = t6;
    t18 = t7;
    t19 = t10;
    t20 = ((int)stk + 4);
    t21 = 0x8C287ACC;
    t22 = 0xD78;
    t23 = ((int)stk + 4);
    t24 = ((int)stk + 4);
    for (;;) {
        if ((*(int *)((t24 + 0x0))) != -1) {
            t20 = (*(int *)((t23 + 0x0)));
            charaTexFree(t20);
        } else {
            t29 = t17;
            t30 = t18;
            t31 = t19;
            t32 = t20;
            t33 = t21;
            t34 = t22;
        }
        t17 = t29;
        t24 = (t24 + 0x4);
        t18 = t30;
        t19 = t31;
        t20 = t32;
        t21 = t33;
        t22 = t34;
        t23 = (t23 + 0x4);
        if ((unsigned int)t24 >= (unsigned int)(((int)stk + 4) + 0xC)) {
            break;
        }
    }
    nlsndSystemControl(0x1, 0x1300A0, 0x0);
    *(unsigned int *)0x8C29466C = 0x0;
    *(unsigned int *)0x8C294668 = 0x0;
    strmBgmFadeOut(0x1, 0x0);
    *(unsigned int *)0x8C402CB4 = 0x8C287D84;
    *(unsigned int *)0x8C288A98 = 0x3;
    *(unsigned int *)0x8C288A94 = 0x3;
    *(float *)(((*(int *)0x8C402CB4) + 0xC90)) = 0.0f;
    *(float *)(((*(int *)0x8C402CB4) + 0xB18)) = 0.0f;
    *(unsigned int *)0x8C20D15C = 0x0;
    *(unsigned int *)0x8C407FB0 = 0x0;
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    *(unsigned int *)0x8C407FD0 = 0x0;
    return (nlsndSeqRequest(0x203A9));
}
