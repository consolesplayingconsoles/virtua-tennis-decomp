/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gFrameBufferReadControl[];
extern char gNlPrintTileClipFlags[];

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

void angDiff(int a4, int a5)
{
    abs(((unsigned short)a4 - (unsigned short)a5), a5);
    
    
    
}

void thunk_fadeScreenDraw(void)
{
    fadeScreenDraw();
}


void ambLevelGet(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C1891E8;
    if (!(t0 == 2)) {
        if ((t0 == 3)) {
        t1 = *(int *)0x8C301BE8;
        return;
        }
        }
    t2 = *(int *)0x8C301BE8;
}


void sprPutAlpha(int a4, float f4)
{
    *(float *)((a4 + 0x2C)) = f4;
    nlSprPut(a4, f4);
}

void nlPrintInitFontTexture(void)
{
    *(unsigned int *)(int)gNlPrintTileClipFlags = 0xA2000009;
    *(unsigned int *)0x8C44F9B0 = 0x80000000;
    *(unsigned int *)0x8C44F9B4 = 0x949004C7;
    nlPrintSetGarbagedTexture();
    *(unsigned int *)0x8C44F9BC = 0xFFFFFFFF;
    *(unsigned int *)0x8C44F9C0 = 0x0;
}

void buFindExecFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5);
    if (!(t0 == 0)) {
        return;
        }
    vmsfs_xfind(a4, a5);
}

void buIsExistFile(int a4, int a5)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5);
    if (!(t0 == 0)) {
        return;
        }
    vmsfs_fisexist(a4, a5);
}

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

void vmsfs_setretry(int a4)
{
    *(unsigned int *)0x8C46215C = a4;
}

void kmyGetInterruptLevel(void)
{
    int t0;

    t0 = *(int *)0x8C470AA4;
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
    t14 = *(int *)(int)gFrameBufferReadControl;
    kmiWriteRegister(0x44, (t14 & 0xFFFFFFFE));
    t16 = *(int *)0x8C45EE88;
    kmiWriteRegister(0xE8, (t16 | 0x8));
}

void kmyResetRenderer(void)
{
    kmiWriteRegister(0x8, 0x2);
    kmiWriteRegister(0x8, 0x0);
}
