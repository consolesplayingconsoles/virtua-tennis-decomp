/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdSetSetCondition(int, int, int, int);
int pdTmrIsReady(int);
int pdTmrAlarm(int a4, int a5);

int pdTmrAlarm(int a4, int a5)
{
    int t0;
    int t6;
    int stk[5];

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = pdTmrIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)((a5 + 0x0)));
    *(unsigned char *)(((((int)stk + 4) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x1)));
    *(unsigned char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x2)));
    *(unsigned char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0)) = (*(signed char *)((a5 + 0x3)));
    t6 = kdSetSetCondition((*(int *)(((int)stk + 8))), 0x8, ((int)stk + 4), 0x1);
    if ((int)t6 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}
