/* An interrupt handler written by hand (SHC #pragma interrupt: the compiler saves what it uses and ends with rte). */

#pragma interrupt(FUN_8c1fc7d0)
void FUN_8c1fc7d0(void);

void FUN_8c1fc7d0(void)
{
    ((void (*)(int, int))0xAC004000)(0x200, 3);
}
