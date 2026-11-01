/* Straight-line functions with calls and guards (batch gen_ww): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int strmCallPair(int);
int umpCallFirstServeDelayed(int);
int umpCallSecondServeDelayed(int);
void umpCallServeNo(int a4);

void umpCallServeNo(int a4)
{
    if ((*(int *)0x8C421F60) == 0) {
        if ((*(int *)0x8C334408) == 0) {
            umpCallFirstServeDelayed(a4);
            strmCallPair(0x1);
        }
        if ((*(int *)0x8C334408) == 1) {
            umpCallSecondServeDelayed(a4);
            strmCallPair(0x2);
    return;
        }
        return;
    }
}
