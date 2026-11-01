/* Straight-line functions with calls and guards (batch gen_wg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void padLcdPixel(int a4, int a5, int a6, int a7);

void padLcdPixel(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((int)a5 >= 0) && (((int)a5 <= (int)0x2F) && (((int)a6 >= 0) && ((int)a6 <= (int)0x1F)))) {
        if (a7 != 0) {
            t0 = a5;
            if ((int)a5 < 0) {
                t0 = (a5 + 0x7);
            }
            t1 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
            if ((int)a5 >= 0) {
                t1 = (a5 & 0x7);
            }
            t2 = (((int)0x1 << (int)t1) | (*(signed char *)((((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1))) + 0x0))));
            t1 = ((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1)));
        } else {
            t0 = a5;
            if ((int)a5 < 0) {
                t0 = (a5 + 0x7);
            }
            t3 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
            if ((int)a5 >= 0) {
                t3 = (a5 & 0x7);
            }
            t2 = ((~((int)0x1 << (int)t3)) & (*(signed char *)((((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1))) + 0x0))));
            t1 = ((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1)));
        }
        *(unsigned char *)((t1 + 0x0)) = t2;
    }
}
