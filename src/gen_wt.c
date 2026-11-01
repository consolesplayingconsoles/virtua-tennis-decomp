/* Straight-line functions with calls and guards (batch gen_wt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int set_event(int, int);
void effServeSpeedShow(int a4, int a5);

void effServeSpeedShow(int a4, int a5)
{
    register int t8;

    *(unsigned int *)0x8C181700 = ((*(int *)0x8C181700) + 0x1);
    if ((*(int *)0x8C421F60) == 0) {
        if ((*(int *)0x8C287D5C) != 3) {
            if ((*(int *)0x8C20D150) != 11) {
                *(unsigned int *)0x8C181614 = ((*(int *)0x8C181614) + 0x1);
                t8 = set_event(0x38, 0x8C083310);
                *(unsigned int *)((t8 + 0x14)) = 0x0;
                *(float *)((t8 + 0x1C)) = 0.0f;
                *(unsigned int *)((t8 + 0x2C)) = 0x5A;
                *(unsigned int *)((t8 + 0x30)) = 0x0;
                *(unsigned int *)((t8 + 0x18)) = 0x0;
                *(unsigned int *)((t8 + 0x34)) = 0x0;
                *(unsigned int *)0x8C334420 = a4;
            }
        }
    }
}
