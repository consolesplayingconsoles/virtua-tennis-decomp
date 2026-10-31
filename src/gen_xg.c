/* Straight-line functions with calls and guards (batch gen_xg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void unlockTestW1(int a4);

void unlockTestW1(int a4)
{
    if ((((int)0x1 << (int)a4) & (*(int *)0x8C40C30C)) != 0) {
        return;
    }
}
