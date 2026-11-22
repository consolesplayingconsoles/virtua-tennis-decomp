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


void buFindExecFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5);
    if (!(t0 == 0)) {
        return;
        }
    vmsfs_xfind(a4, a5);
}

int buIsExistFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5);
    if (!(t0 == 0)) {
        return -1;
        }
    vmsfs_fisexist(a4, a5);
    return -1;
}


int vmsfs_setretry(int a4)
{
    *(unsigned int *)0x8C46215C = a4;
    return a4;
}


