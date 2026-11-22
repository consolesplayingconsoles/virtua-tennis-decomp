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


void ADXF_GetNumReqSct(int a4, int a5)
{
    int t1;
    int t2;

    if ((a4 == 0)) {
        ADXERR_CallErrFunc(0x8C20A158, a5);
        *(unsigned int *)((a5 + 0x0)) = 0x0;
        return;
        }
    t1 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a5 + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x20));
}


