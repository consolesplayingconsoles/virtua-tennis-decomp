/* Straight-line functions with calls and guards (batch gen_wq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ndbKeyEqual(int a4, int a5);

void ndbKeyEqual(int a4, int a5)
{
    if ((*(signed char *)((a4 + 0x0))) == (*(signed char *)((a5 + 0x0)))) {
        if ((*(signed char *)((a4 + 0x1))) == (*(signed char *)((a5 + 0x1)))) {
            if ((*(signed char *)((a4 + 0x2))) == (*(signed char *)((a5 + 0x2)))) {
                if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)((a5 + 0x3)))) {
                    if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((a5 + 0x4)))) {
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
}
