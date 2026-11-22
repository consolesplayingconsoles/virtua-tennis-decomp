/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bcd2bin(int);
int ndbSum16Check(int, int);
int kmyGetFrameBufferSize(int);
int memset(int, int, int);
int nlObjPut(int);


void ADXF_Init(void)
{
    memset(0x8C46BF64, 0x0, 0x300);
    memset(0x8C46C264, 0x0, 0x400);
    memset(0x8C46C668, 0xFF, 0x1000);
    memset(0x8C46D668, 0x0, 0x20);
    *(unsigned int *)0x8C46D688 = 0x0;
    *(unsigned int *)0x8C46C664 = 0x0;
}

