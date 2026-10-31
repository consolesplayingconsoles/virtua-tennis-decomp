/* Straight-line functions with calls and guards (batch gen_wk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPut(int);
int courtWinDrawSign(int a4);

int courtWinDrawSign(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)0x8C287ADC) == 2) {
        nlObjPut(0xC9377A8);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            nlObjPut((*(int *)0x8C18C33C));
            t0 = (*(int *)0x8C18C344);
        } else {
            nlObjPut((*(int *)0x8C18C338));
            t0 = (*(int *)0x8C18C340);
        }
        t1 = (nlObjPut(t0));
    } else {
        nlObjPut(0xC9541F0);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t0 = (*(int *)0x8C18C34C);
        } else {
            t0 = (*(int *)0x8C18C348);
        }
        t1 = (nlObjPut(t0));
    }
    return t1;
}
