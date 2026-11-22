/* Straight-line functions with calls and guards (batch gen_c): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmyiCheckNativeHandle(int, int, int, int);
int memset(int, int, int, int);


void nlSetCommonTextureOffset(int textureOffset)
{
    *(unsigned int *)0x8C458DCC = textureOffset;
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


