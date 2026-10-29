/* Straight-line functions with calls and guards (batch gen_os): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int entryCountJoined(void);
int selCursorReset(int, int);
int selSlot0FlagClear(void);
int sseleSlotEntry(int a4);

int sseleSlotEntry(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    *(unsigned int *)(((0x8C3437E4 + (a4 << 2)) + 0x0)) = 0x0;
    *(unsigned int *)(((0x8C343824 + (a4 << 2)) + 0x0)) = 0x1;
    *(unsigned short *)0x8C343260 = ((*(short *)0x8C343260) | (*(short *)(((a4 << 1) + 0x8C185298))));
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
    *(unsigned short *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)(((0x8C3437A4 + (a4 << 2)) + 0x0))) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
    if ((*(int *)(((((*(int *)((((a4 << 2) + 0x8C3437A4) + 0x0))) * 0x38) + 0x8C343264) + 0x8))) == 0) {
        selCursorReset(a4, 0x8C343258);
    }
    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        t1 = entryCountJoined();
        if (t1 == 1) {
            t2 = *(int *)0x8C287ADC;
            t3 = t2;
            if (t2 == 2) {
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x18)) = 0x1;
                *(unsigned short *)(((0x14 + (((selSlot0FlagClear()) * 0x38) + 0x8C343264)) + 0x0)) = 0x0;
                *(unsigned int *)(((((selSlot0FlagClear()) * 0x38) + 0x8C343264) + 0x2C)) = 0xFFFFFFFF;
                t2 = selSlot0FlagClear();
                *(unsigned int *)((((t2 * 0x38) + 0x8C343264) + 0x0)) = 0xFFFFFFFF;
                t3 = ((t2 * 0x38) + 0x8C343264);
            }
            return t3;
        }
        return t1;
    }
    return t0;
}
