/* Straight-line functions with calls and guards (batch gen_wy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int staffMorphCapture(int, int);
int staffMorphInit(void);

int staffMorphInit(void)
{
    register int t0;
    register int t4;

    t0 = *(int *)0x8C1891E8;
    t4 = t0;
    if (t0 == 2) {
        *(unsigned int *)0x8C1D0194 = (staffMorphCapture(0xC880640, 0x0));
        staffMorphCapture(0xC880640, 0x8C38AED0);
        t4 = (staffMorphCapture(0xC880960, 0x8C38B308));
    }
    return t4;
}
