/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, int);
int abs(int, int);
int fadeScreenDraw(void);
int _quick_mvn(void);
int kmiWriteRegister(int, int);
int nlFogDensityF(float);
int nlFogTableColor(int);
int nlPrintSetGarbagedTexture(void);
int nlSprPut(int, float);
int set_event(int, int);
int vmsfs_c_getstate(int, int);
int vmsfs_fisexist(int, int);
int vmsfs_xfind(int, int);


int ambLevelGet(void)
{
    int t0;

    t0 = *(int *)0x8C1891E8;
    if ((t0 == 2) || (t0 == 3)) {
        return (*(int *)0x8C301BE8);
    }
    return 0x64;
}


void sprPutAlpha(int a4, float f4)
{
    *(float *)((a4 + 0x2C)) = f4;
    nlSprPut(a4, f4);
}


