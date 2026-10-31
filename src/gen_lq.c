/* Straight-line functions with calls and guards (batch gen_lq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
int hudFadeInStart(int, int, int, int, int);
int set_event2(int, int);
int sndJingleA1(void);
int sprMatchFree(void);
int sprSet173FreeAll(void);
Stk3 vecMake(float, float, float);
int matchNextSetup(int a4);

int matchNextSetup(int a4)
{
    int t9;
    int t10;
    int t35;
    int t37;
    int t38;
    int t40;
    int t41;
    int t56;
    int t68;
    int t1;
    int t39;

    if (((*(int *)0x8C287D5C) == 0) && (t1 = *(int *)0x8C287ADC, t1 == 4)) {
        *(unsigned int *)0x8C185288 = 0x1;
    }
    *(unsigned int *)0x8C295DAC = 0x0;
    sprSet173FreeAll();
    if (a4 == 0) {
        sprMatchFree();
    }
    if (a4 == 1) {
        t9 = 0x8C185298;
        t10 = 0x8C181628;
        for (;;) {
            if (((unsigned short)(*(short *)0x8C343262) & (unsigned short)(*(short *)((t9 + 0x0)))) != 0) {
                *(unsigned int *)((t10 + 0x0)) = 0x1;
            }
            t9 = (t9 + 0x2);
            t10 = (t10 + 0x4);
            if ((unsigned int)t9 >= (unsigned int)0x8C1852A0) {
                break;
            }
        }
    }
    if ((*(int *)0x8C181638) != 0) {
        if ((*(int *)0x8C301B9C) == 0) {
            *(unsigned int *)0x8C343784 = ((*(int *)0x8C343784) + (*(int *)0x8C287B04));
        }
        if ((*(int *)0x8C301BA0) == 1) {
            *(unsigned int *)0x8C343788 = ((*(int *)0x8C343788) + (*(int *)0x8C287B00));
        }
        if ((*(int *)0x8C185294) == 0) {
            t35 = *(int *)0x8C287AF0;
            t37 = (int)((int)((*(int *)(((((t35 & 0x1) << 2) + 0x8C287AD0) + 0x0))) + 0x1) % (int)0x6);
            *(unsigned int *)(((((t35 & 0x1) << 2) + 0x8C287AD0) + 0x0)) = t37;
            t38 = t37;
            t40 = 0x8C185294;
            t41 = 0x0;
            for (;;) {
                if ((int)t41 >= (int)(*(int *)0x8C287ADC)) {
                    break;
                }
                t40 = 0x8C287ACC;
                t40 = (t40 + 0x14);
                t39 = (*(int *)((((t41 << 2) + t40) + 0x0)));
                if (t39 != 0) {
                    t39 = 0xC58;
                    t38 = (t41 * 0xD78);
                    t38 = (t38 + (int)Player);
                    t38 = (*(int *)((t39 + t38)));
                    t38 = (t38 << 2);
                    *(unsigned int *)((0x8C287C74 + t38)) = 0x0;
                }
                t41 = (t41 + 0x1);
            }
        }
        t56 = *(int *)0x8C287AF4;
        *(unsigned int *)(((((((t56 & 0x1) << 2) << 1) + (t56 & 0x1)) << 2) + 0x8C287B8C)) = 0x0;
        *(unsigned int *)((((((*(int *)0x8C287AF4) & 0x1) << 2) + 0x8C287AD0) + 0x0)) = 0x0;
        *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
        *(unsigned int *)0x8C343254 = 0xFFFFFFFF;
    }
    *(unsigned int *)0x8C287C60 = 0x1;
    sndJingleA1();
    *(unsigned int *)0x8C38BA70 = 0x0;
    *(unsigned int *)0x8C30196C = 0x1;
    *(unsigned int *)0x8C301BEC = 0x1;
    t68 = set_event2(0x38, 0x8C087FF4);
    *(unsigned int *)((t68 + 0x20)) = 0x78;
    *(Stk3 *)((0x14 + t68)) = vecMake(200.0f, 240.0f, 0.00999999978f);
    *(unsigned int *)((t68 + 0x24)) = (int)(*(float *)0x8C287A04);
    *(unsigned int *)((t68 + 0x28)) = a4;
    *(unsigned int *)((t68 + 0x2C)) = 0x0;
    *(unsigned int *)((t68 + 0x30)) = 0x0;
    *(unsigned int *)((t68 + 0x34)) = 0x0;
    *(unsigned int *)0x8C185410 = 0x1;
    return (hudFadeInStart(0x8C33D790, 0x200, 0x80, 0x10, 0x6D));
}
