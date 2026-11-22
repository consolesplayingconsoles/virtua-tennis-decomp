/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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


