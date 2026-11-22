/* Straight-line functions with calls and guards (batch gen_hz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syIntAdrChk_putchar(int, int, int, int);
void send_message_in_current_mode(int a4, int a5, int a6, int a7);

void send_message_in_current_mode(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;

    t1 = a4;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) == 0) {
            break;
        }
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        syIntAdrChk_putchar(t3, a5, a6, a7);
    }
}
