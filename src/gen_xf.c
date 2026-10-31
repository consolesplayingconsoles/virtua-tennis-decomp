/* Straight-line functions with calls and guards (batch gen_xf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void unlockTestW0(int a4);

void unlockTestW0(int a4)
{
    if ((int)a4 >= 0) {
        if ((((int)0x1 << (int)a4) & (*(int *)0x8C40C308)) != 0) {
            return;
        }
        return;
    }
}
