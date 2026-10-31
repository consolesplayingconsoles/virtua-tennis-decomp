/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char buFbrServers[];
extern char gAdxStreamFileHandles[];
extern char gBuFiberScheduler[];
extern char gNlCommonTextureOffset[];
extern char gVmsFileCommandStates[];

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);

void advReset(void)
{
    *(unsigned int *)0x8C295DDC = 0x0;
    *(unsigned int *)0x8C295DE0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C295DE4 = 0xFFFFFFFF;
    *(unsigned int *)0x8C29B27C = 0xFFFFFFFF;
    *(unsigned int *)0x8C29B280 = 0xFFFFFFFF;
    *(unsigned int *)0x8C29B284 = 0x0;
    *(unsigned int *)0x8C29B28C = 0x0;
    *(unsigned int *)0x8C29B288 = 0x3E8;
}

void lightSet(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0x8C38B82C = (unsigned short)a4;
    *(unsigned int *)0x8C38B824 = (unsigned short)a4;
    *(unsigned int *)0x8C38B830 = (unsigned short)a5;
    *(unsigned int *)0x8C38B828 = (unsigned short)a5;
    *(float *)0x8C38B844 = (float)a6;
    *(float *)0x8C38B840 = (float)a6;
    *(float *)0x8C38B800 = (float)a7;
    *(float *)0x8C38B7FC = (float)a7;
    *(float *)0x8C38B820 = 1.0f;
    *(float *)0x8C38B81C = 1.0f;
    *(float *)0x8C38B818 = 1.0f;
    *(float *)0x8C38B810 = 1.0f;
    *(float *)0x8C38B80C = 1.0f;
    *(float *)0x8C38B808 = 1.0f;
    *(unsigned int *)0x8C38B848 = 0x0;
}

void strmScoreReset(void)
{
    *(unsigned int *)0x8C1D4B4C = 0x0;
    *(unsigned int *)0x8C1D4B48 = 0x0;
    *(unsigned int *)0x8C1D476C = 0x0;
}

void nlSetCommonTextureOffset(int textureOffset)
{
    *(unsigned int *)(int)gNlCommonTextureOffset = textureOffset;
}

void nlPrintSetGarbagedTexture(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C44F9DC;
    t1 = *(int *)0x8C44F9CC;
    t2 = *(int *)0x8C44F9E0;
    *(unsigned int *)0x8C44F9B8 = (((t0 | t1) & 0xFF800000) | ((unsigned int)((unsigned int)t2 >> 2) >> 1));
}

void nlPrintColor(int a4)
{
    *(unsigned int *)0x8C44F9BC = a4;
}

int abs(int a4)
{
    if (((int)a4 > 0)) {
        return a4;
        }
    return (-a4);
}

void syCfgInit(int a4)
{
    if ((a4 == 0)) {
        return;
        }
    *(unsigned int *)0x8C20C240 = a4;
}

void ADXT_SetReloadSct(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x3E)) = a5;
}

void ADXT_SetAutoRcvr(int a4, int a5)
{
    *(unsigned char *)((a4 + 0x6D)) = a5;
}

void kmSetPixelClipping(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)0x8C45F7CC = a4;
    *(unsigned int *)0x8C45F7D4 = a6;
    *(unsigned int *)0x8C45F7D0 = a5;
    *(unsigned int *)0x8C45F7D8 = a7;
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0x8C461E98 = a4;
}

void vmsfs_c_exit(int a4, int a5, int a6, int a7)
{
    memset((int)gVmsFileCommandStates, 0x0, 0x400, a7);
}

void ADXCRS_Init(void)
{
    *(unsigned int *)0x8C20C894 = 0x0;
}

void ADXSTM_Init(int a4, int a5, int a6, int a7)
{
    memset((int)gAdxStreamFileHandles, 0x0, 0xC80, a7);
}

int kmySetupTA(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t19;

    t0 = kmyiCheckNativeHandle(a4, a5, a6, a7);
    
    if ((t0 == 0)) {
        t19 = 0xEEEE;
        } else {
        *(unsigned int *)((a4 + 0x10)) = 0x0;
        kmiWriteRegister(0x8, 0x1);
        kmiWriteRegister(0x8, 0x0);
        t3 = *(int *)(((a4 + 0x18) + 0x20));
        kmiWriteRegister(0x13C, t3);
        t5 = *(int *)(((a4 + 0x18) + 0x30));
        kmiWriteRegister(0x140, t5);
        t7 = *(int *)(((a4 + 0x18) + 0x10));
        kmiWriteRegister(0x124, t7);
        t9 = *(int *)(((a4 + 0x18) + 0x8));
        kmiWriteRegister(0x128, t9);
        t11 = *(int *)(((a4 + 0x18) + 0x18));
        kmiWriteRegister(0x12C, t11);
        t13 = *(int *)(((a4 + 0x18) + 0x14));
        kmiWriteRegister(0x130, t13);
        t15 = *(int *)(((a4 + 0x18) + 0x1C));
        kmiWriteRegister(0x164, t15);
        kmiWriteRegister(0x144, 0x80000000);
        kmiReadRegister(0x144);
        t19 = 0x0;
        }
    return t19;
}

void buFbrInit(int a4, int a5, int a6, int a7)
{
    memset((int)buFbrServers, 0x0, 0x1AF8, a7);
    *(unsigned int *)(int)gBuFiberScheduler = 0x0;
    *(unsigned int *)0x8C4762CC = 0x0;
    *(unsigned int *)0x8C4762D0 = 0x0;
}
