/* Straight-line functions with calls and guards (batch gen_wx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblInput(int, int, int, int, float, float, float);
int cpuSglInput(int, int, int, int, float, float, float);
int playerCpuInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int playerCpuInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    if ((*(int *)0x8C287ADC) == 2) {
        return cpuSglInput(a4, a5, a6, a7, f4, f5, f6);
    }
    return cpuDblInput(a4, a5, a6, a7, f4, f5, f6);
}
