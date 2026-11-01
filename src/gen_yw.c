/* Straight-line functions with calls and guards (batch gen_yw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int resetBackColorZ(int, int, int, float);
int resCautionShow(int);
int thunk_nlSprPut(int);
int FUN_8c0d10a8(int a4, float f4);

int FUN_8c0d10a8(int a4, float f4)
{
    resetBackColorZ(0x0, 0x0, 0x0, f4);
    if ((*(int *)(((a4 << 2) + 0x8C1DC590))) == 0) {
        return resCautionShow(a4);
    }
    if ((int)(*(int *)0x8C38BA50) >= (int)0xF) {
        return thunk_nlSprPut((((((a4 << 2) + a4) << 2) << 2) + 0x8C423BD8));
    }
    return 0x8C1DC590;
}
