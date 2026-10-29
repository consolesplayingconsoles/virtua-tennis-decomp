/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int decoWaveDraw(int, int, int, int, Stk3);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int nlsndInit(int, int);
int nlsndPackLoadBG(int, int, int);
int nlsndPackLoadStatus(int);
int nlsndStreamInit(int, int, int);
int primSprDrawScale(int, int, int, int, float, float);
int sndFxReset(void);
extern int sprPutAt();
int strmInit(void);
int menuTextMsgPutB(int a4, int a5, int a6, int a7, float f4);
int sndLoadStep(int a4, int a5, int a6, int a7);
void windowFrameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);


int sndLoadStep(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t13;
    int t19;
    int t25;
    int t31;
    int t38;
    int t44;
    int t51;
    int t57;
    int t64;
    int t70;
    int t77;
    int t83;
    int stk[9];

    if (a4 == 0) {
        *(unsigned int *)0x8C1D2BDC = 0x0;
        fileLoadStart(0x8C880000, 0x8C125BAC, 0x0);
    } else {
        if ((*(int *)0x8C1D2BDC) == 99) {
        } else {
            t5 = *(int *)0x8C1D2BDC;
            if ((unsigned int)t5 >= (unsigned int)0xD) {
            } else {
                switch ((t5 << 1)) {
                    case 0:
                    {
                        t6 = fileLoadPoll(a4, a5, a6, a7);
                        if (t6 != 1) {
                        } else {
                            nlsndInit(0x8C880000, 0x0);
                            fileLoadStart(0x8C880000, 0x8C125BB8, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 2:
                    {
                        t13 = fileLoadPoll(a4, a5, a6, a7);
                        if (t13 != 1) {
                        } else {
                            *(unsigned int *)0x8C38BA9C = (nlsndPackLoadBG(0x8C880000, 0x0, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 4:
                    {
                        t19 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t19;
                        if (t19 != 0) {
                        } else {
                            fileLoadStart(0x8C880000, 0x8C125BC4, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 6:
                    {
                        t25 = fileLoadPoll(a4, a5, a6, a7);
                        if (t25 != 1) {
                        } else {
                            *(unsigned int *)0x8C38BAA0 = (nlsndPackLoadBG(0x8C880000, 0x1, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 8:
                    {
                        t31 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t31;
                        if (t31 != 0) {
                        } else {
                            fileLoadStart(0x8C880000, 0x8C125BD0, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 10:
                    {
                        t38 = fileLoadPoll(a4, a5, a6, a7);
                        if (t38 == 1) {
                            *(unsigned int *)0x8C38BAA4 = (nlsndPackLoadBG(0x8C880000, 0x2, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 12:
                    {
                        t44 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t44;
                        if (t44 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BDC, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 14:
                    {
                        t51 = fileLoadPoll(a4, a5, a6, a7);
                        if (t51 == 1) {
                            *(unsigned int *)0x8C38BAA8 = (nlsndPackLoadBG(0x8C880000, 0x3, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 16:
                    {
                        t57 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t57;
                        if (t57 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BE8, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 18:
                    {
                        t64 = fileLoadPoll(a4, a5, a6, a7);
                        if (t64 == 1) {
                            *(unsigned int *)0x8C38BAAC = (nlsndPackLoadBG(0x8C880000, 0x4, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 20:
                    {
                        t70 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t70;
                        if (t70 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 22:
                    {
                        t77 = fileLoadPoll(a4, a5, a6, a7);
                        if (t77 == 1) {
                            *(unsigned int *)0x8C38BAB0 = (nlsndPackLoadBG(0x8C880000, 0x5, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    default:
                    {
                        t83 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t83;
                        if (t83 == 0) {
                            sndFxReset();
                            nlsndStreamInit(0x2, 0x2, 0x0);
                            strmInit();
                            *(unsigned int *)0x8C1D2BDC = 0x63;
                        }
                    }
                        break;
                }
            }
        }
    }
    return (*(int *)0x8C1D2BDC);
}


