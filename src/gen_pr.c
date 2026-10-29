/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlFogDensityF(float);
int nlFogTableColor(int);
void fogApply(int a4);

void fogApply(int a4)
{
    nlFogTableColor(((((unsigned char)(*(int *)((a4 + 0x0))) << 16) | ((unsigned char)(*(int *)((a4 + 0x4))) << 8)) | (unsigned char)(*(int *)((a4 + 0x8)))));
    nlFogDensityF((*(float *)((a4 + 0xC))));
}
