/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int camInit(void);
int charaTexFree(int);
int fadeScreenStart(int, int, int, int, int, int);
int muneSlotLoad(int, int);
int muneSlotReset(int, int);
int nlInitEvent(void);
int nlWaitVSync(void);
int sceneTwoPlayerSetup(void);
int strmVoiceQueueReset(void);
int FUN_8c08dc70(void);

int FUN_8c08dc70(void)
{
    int stk[10];
    register int t5;
    register int t6;
    register int t46;
    register int t13;
    register int t18;

    nlInitEvent();
    camInit();
    if ((*(int *)0x8C287ADC) == 2) {
        t5 = 0x8C287D84;
        t6 = 0x0;
        for (;;) {
            if ((*(int *)((t6 + 0x8C287AE0))) == 1) {
                charaTexFree((*(int *)((t5 + 0xC58))));
            }
            t6 = (t6 + 0x4);
            t5 = (t5 + 0xD78);
            if ((unsigned int)t6 >= (unsigned int)0x10) {
                break;
            }
        }
    } else {
        if (((*(int *)0x8C34326C) != 0) && (t13 = *(int *)0x8C3432DC, t13 != 0)) {
            charaTexFree((*(int *)0x8C2889DC));
            t18 = 0x2748;
        } else {
            charaTexFree((*(int *)0x8C289754));
            t18 = 0x34C0;
        }
        charaTexFree((*(int *)((0x8C287D84 + t18))));
    }
    if ((*(int *)0x8C287ADC) == 2) {
        *(unsigned int *)0x8C343248 = 0x10;
    } else {
        *(unsigned int *)0x8C34324C = 0x10;
        *(unsigned int *)0x8C343250 = 0x11;
    }
    muneSlotReset(0x0, 0x10);
    for (;;) {
        if ((*(int *)0x8C1AFAA4) != 0) {
            break;
        }
        muneSlotLoad(0x0, 0x10);
        nlWaitVSync();
    }
    if ((*(int *)0x8C287ADC) == 4) {
        muneSlotReset(0x1, 0x11);
        for (;;) {
            if ((*(int *)0x8C1AFAA8) != 0) {
                break;
            }
            muneSlotLoad(0x1, 0x11);
            nlWaitVSync();
        }
    }
    *(unsigned int *)0x8C32DDB0 = 0x0;
    *(unsigned int *)0x8C301970 = 0x1;
    *(unsigned int *)0x8C1826F4 = 0x0;
    *(unsigned int *)0x8C3343C4 = 0x0;
    *(unsigned int *)0x8C3343C0 = 0x0;
    strmVoiceQueueReset();
    *(unsigned int *)0x8C287C60 = 0x0;
    fadeScreenStart(0x2, 0x1, 0x5, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    t46 = sceneTwoPlayerSetup();
    *(unsigned int *)0x8C20D150 = ((*(int *)0x8C20D150) + 0x1);
    return t46;
}
