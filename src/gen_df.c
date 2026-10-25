/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_c_dispatch(int, int, int);
int vmsfs_c_fiber6(int a4, int a5, int a6);

int vmsfs_c_fiber6(int a4, int a5, int a6)
{
    return vmsfs_c_dispatch(0x6, a5, a6);
}
