/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bcd2bin(int);
int ndbSum16Check(int, int);
int kmyGetFrameBufferSize(int);
int memset(int, int, int);
int nlObjPut(int);

int ndbIsValid(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = ndbSum16Check(0x8CA80000, 0x54);
    t1 = ndbSum16Check(0x8CA88000, 0x98);
    t2 = ndbSum16Check(0x8CA90000, 0x2C);
    t3 = ndbSum16Check(0x8CA98000, 0x10);
    t4 = ndbSum16Check(0x8CA9E620, 0x95);
    return (((((0x1 * t0) * t1) * t2) * t3) * t4);
}

int stageEspCourtDraw(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    
    
    if ((t0 == 2)) {
        nlObjPut(0xC8D57B0);
        nlObjPut(0xC5189E0);
    
    
        if (!(a4 == 0)) {
        t3 = *(int *)0x8C1AEB74;
        nlObjPut(t3);
        t5 = *(int *)0x8C1AEB7C;
        t10 = t5;
        } else {
        t6 = *(int *)0x8C1AEB70;
        nlObjPut(t6);
        t8 = *(int *)0x8C1AEB78;
        t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
        } else {
        nlObjPut(0xC8F8AD0);
        nlObjPut(0xC51E510);
    
        if (!(0x8C1AEB70 == 0)) {
        t14 = *(int *)0x8C1AEB84;
        t16 = t14;
        } else {
        t15 = *(int *)0x8C1AEB80;
        t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
        }
    return t18;
}

void kmiWriteRegister(int a4, int a5)
{
    *(unsigned int *)(((a4 + 0xA05F8000) + 0x0)) = a5;
}

void ADXF_Init(void)
{
    memset(0x8C46BF64, 0x0, 0x300);
    memset(0x8C46C264, 0x0, 0x400);
    memset(0x8C46C668, 0xFF, 0x1000);
    memset(0x8C46D668, 0x0, 0x20);
    *(unsigned int *)0x8C46D688 = 0x0;
    *(unsigned int *)0x8C46C664 = 0x0;
}

void kmiCalculateWorkSize(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0x14));
    *(unsigned int *)0x8C45F7C0 = t0;
    t1 = *(int *)0x8C45EFDC;
    t2 = kmyGetFrameBufferSize(t1);
    t3 = *(int *)((a4 + 0xC));
    *(unsigned int *)0x8C45F7C8 = (t2 * ((t3 + 0x1) & 0xFFFFFFFE));
    t4 = *(int *)0x8C45F7C8;
    t5 = *(int *)0x8C45F7C0;
    t6 = *(int *)0x8C45F7BC;
    if (((unsigned int)(t5 + t4) >= (unsigned int)t6)) {
        t7 = *(int *)0x8C45F7C8;
        t8 = *(int *)0x8C45F7BC;
        *(unsigned int *)0x8C45F7C0 = ((t8 - t7) + 0xFFFC0000);
        }
    t12 = *(int *)0x8C45F7C8;
    t13 = *(int *)0x8C45F7BC;
    t14 = *(int *)0x8C45F7C0;
    *(unsigned int *)0x8C45F7C4 = ((t13 - t12) - t14);
}
