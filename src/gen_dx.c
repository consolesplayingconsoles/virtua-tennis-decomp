/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_get_deviceinfo(int);
int kdGetDeviceInfo(int a4);

int kdGetDeviceInfo(int a4)
{
    return (mpdrv_get_deviceinfo(a4));
}
