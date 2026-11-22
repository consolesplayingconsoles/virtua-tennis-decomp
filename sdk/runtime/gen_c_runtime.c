/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);


int abs(int a4)
{
    if (((int)a4 > 0)) {
        return a4;
        }
    return (-a4);
}


