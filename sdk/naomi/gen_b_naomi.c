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


void nlPrintInitFontTexture(void)
{
    *(unsigned int *)0x8C44F9AC = 0xA2000009;
    *(unsigned int *)0x8C44F9B0 = 0x80000000;
    *(unsigned int *)0x8C44F9B4 = 0x949004C7;
    nlPrintSetGarbagedTexture();
    *(unsigned int *)0x8C44F9BC = 0xFFFFFFFF;
    *(unsigned int *)0x8C44F9C0 = 0x0;
}


