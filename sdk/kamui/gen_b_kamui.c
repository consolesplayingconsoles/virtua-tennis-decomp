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


int kmyGetInterruptLevel(void)
{
    return (*(int *)0x8C470AA4);
}

void kmiWriteDispModeRegisters(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;

    t0 = *(int *)0x8C45EE38;
    kmiWriteRegister(0x68, t0);
    t2 = *(int *)0x8C45EE3C;
    kmiWriteRegister(0x6C, t2);
    t4 = *(int *)0x8C45EE44;
    kmiWriteRegister(0x5C, t4);
    t6 = *(int *)0x8C45EE48;
    kmiWriteRegister(0x4C, t6);
    t8 = *(int *)0x8C45EE80;
    kmiWriteRegister(0x118, t8);
    t10 = *(int *)0x8C45EE84;
    kmiWriteRegister(0xF4, t10);
    t12 = *(int *)0x8C45EE50;
    kmiWriteRegister(0x48, t12);
    t14 = *(int *)0x8C45EE4C;
    kmiWriteRegister(0x44, (t14 & 0xFFFFFFFE));
    t16 = *(int *)0x8C45EE88;
    kmiWriteRegister(0xE8, (t16 | 0x8));
}

void kmyResetRenderer(void)
{
    kmiWriteRegister(0x8, 0x2);
    kmiWriteRegister(0x8, 0x0);
}
