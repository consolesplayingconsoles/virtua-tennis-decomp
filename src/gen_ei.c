/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gAdxErrorCallback[];
extern char gAdxErrorCallbackArgument[];
extern char gAdxErrorMessageBuffer[];

typedef struct { int w[3]; } Stk3;
int vsprintf(int, int, int);
int ADXERR_CallErrFunc(Stk3 s);

int ADXERR_CallErrFunc(Stk3 s)
{
    int t0;
    int t3;
    int t6;
    int stk[14];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = *(int *)(int)gAdxErrorCallback;
    t6 = (vsprintf((int)gAdxErrorMessageBuffer, s.w[0], t0));
    if (t3 != 0) {
        t6 = (((int (*)(int, int))(t3))((*(int *)(int)gAdxErrorCallbackArgument), (int)gAdxErrorMessageBuffer));
    }
    return t6;
}
