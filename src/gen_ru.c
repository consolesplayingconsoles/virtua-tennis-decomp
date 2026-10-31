/* Straight-line functions with calls and guards (batch gen_ru): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char g_0c2f4c9c[];

int memset(int, int, int);
int ADXAMP_Init(void);

int ADXAMP_Init(void)
{
    int t2;

    if ((*(int *)0x8C20C890) == 0) {
        t2 = (memset((int)g_0c2f4c9c, 0x0, 0x180));
    }
    *(unsigned int *)0x8C20C890 = ((*(int *)0x8C20C890) + 0x1);
    return t2;
}
