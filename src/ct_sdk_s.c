/* Ported from crazy-taxi-decomp (src/sdk_s.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small functions (batch s): Kamui callback and buffer setters, a bus status test, a delay loop, a BCD decode, and
   three small game sequences. */

int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void Voice_ShutUp(int i);
void FUN_0c051556(void);
void selectDrawDriver(int d);


/* A busy-wait of 50000 steps. */
void adxf_wait_1ms(void)
{
    volatile int n = 0xC350;

    do
        n--;
    while (n);
}


/* A packed decimal byte (two digits) as a number. */
int FUN_0c15f4c8(signed char c)
{
    return ((c & 0xF0) >> 4) * 10 + (c & 15);
}
