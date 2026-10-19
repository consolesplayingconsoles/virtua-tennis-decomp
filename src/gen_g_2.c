/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXRNA_GetNumData(int, int, int, int);
int ADXRNA_SetPlaySw(int, int);
int nlObjPutSetFadeColor(int, int, int, int, float, float, float);
int nlSprPut(int, int, float);


void adxt_stat_decend(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0xC));
    t1 = ADXRNA_GetNumData(t0, a5, a6, a7);
    if (!((int)t1 > 0)) {
        t2 = *(int *)((a4 + 0xC));
        ADXRNA_SetPlaySw(t2, 0x0);
        *(unsigned char *)((a4 + 0x1)) = 0x5;
        }
}
