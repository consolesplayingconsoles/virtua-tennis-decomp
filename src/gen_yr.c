/* Straight-line functions with calls and guards (batch gen_yr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int afsLoadPartitions(void);
int camGetAngles(int, int, int, int);
int fileLoadSync(int, int, int);
int mathLineY(float, float, float, float, float);
int nlCloseEvent(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlsndInit(int, int);
int nlsndPackLoad(int, int);
int nlsndStreamInit(int, int, int);
int sndFxReset(void);
int strmInit(void);
int FUN_8c03ce4c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4);
int FUN_8c0d267c(void);
int FUN_8c0d9b54(int a4, int a5, int a6, int a7);
int FUN_8c0b6994(float f4);
void FUN_8c0c4bf0(void);

int FUN_8c03ce4c(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4)
{
    int stk[19];
    register int t0;
    register int t5;
    register int t10;
    register int t12;
    register float u20;
    register float u4;

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    stk[8] = a11;
    stk[9] = a12;
    stk[10] = a13;
    t0 = *(int *)((a5 + 0x0));
    if ((int)(*(int *)(((((a4 - t0) << 2) + 0x8C2FC310) + 0x0))) < (int)0x10) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((*(int *)(((((a4 - t0) << 2) + 0x8C2FC310) + 0x0))) * 0x1C) + (((a4 - (*(int *)((a5 + 0x0)))) * 0x1C0) + 0x8C2FC31C))) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
        u4 = 0.0f;
        *(float *)(((int)stk + 36)) = u4;
        t5 = *(int *)((a5 + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((((*(int *)((0x8C2FC310 + ((a4 - t5) << 2)))) * 0x1C) + (((a4 - t5) * 0x1C0) + 0x8C2FC31C)) + 0xC)) = *(struct mv3 *)((((int)stk + 4) + 0x1C)); }
        *(float *)(((((*(int *)((0x8C2FC310 + ((a4 - (*(int *)((a5 + 0x0)))) << 2)))) * 0x1C) + (((a4 - (*(int *)((a5 + 0x0)))) * 0x1C0) + 0x8C2FC31C)) + 0x18)) = f4;
        t10 = *(int *)((a5 + 0x0));
        *(unsigned int *)((0x8C2FC310 + ((a4 - t10) << 2))) = ((*(int *)((0x8C2FC310 + ((a4 - t10) << 2)))) + 0x1);
        t12 = ((a4 - t10) << 2);
        u20 = u4;
    } else {
        u20 = *(float *)&a12;
    }
    return t12;
}

int FUN_8c0d267c(void)
{
    fileLoadSync(0x8C880000, 0x8C125BAC, 0x0);
    nlsndInit(0x8C880000, 0x0);
    fileLoadSync(0x8C880000, 0x8C125BB8, 0x0);
    *(unsigned int *)0x8C38BA9C = (nlsndPackLoad(0x8C880000, 0x0));
    fileLoadSync(0x8C880000, 0x8C125BC4, 0x0);
    *(unsigned int *)0x8C38BAA0 = (nlsndPackLoad(0x8C880000, 0x1));
    fileLoadSync(0x8C880000, 0x8C125BD0, 0x0);
    *(unsigned int *)0x8C38BAA4 = (nlsndPackLoad(0x8C880000, 0x2));
    fileLoadSync(0x8C880000, 0x8C125BDC, 0x0);
    *(unsigned int *)0x8C38BAA8 = (nlsndPackLoad(0x8C880000, 0x3));
    fileLoadSync(0x8C880000, 0x8C125BE8, 0x0);
    *(unsigned int *)0x8C38BAAC = (nlsndPackLoad(0x8C880000, 0x4));
    fileLoadSync(0x8C880000, 0x8C125BF4, 0x0);
    *(unsigned int *)0x8C38BAB0 = (nlsndPackLoad(0x8C880000, 0x5));
    sndFxReset();
    nlsndStreamInit(0x2, 0x2, 0x0);
    strmInit();
    return afsLoadPartitions();
}

int FUN_8c0d9b54(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t15;

    camGetAngles(((int)stk + 4), (((int)stk + 4) + 0x4), a6, a7);
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x18))), (*(float *)((a4 + 0x1C))), (*(float *)((a4 + 0x20))));
    nlRotateAY((unsigned short)(*(short *)(((int)stk + 8))));
    nlRotateAX((unsigned short)(*(short *)(((int)stk + 4))));
    nlObjPut((*(int *)((((*(int *)((a4 + 0x14))) << 2) + 0x8C1D4DA4))));
    nlPopMatrix(0x1);
    if (((int)(*(int *)((a4 + 0x14))) > 0) && (t15 = *(int *)0x8C407FCC, t15 != 1)) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
        return t15;
    }
    return (nlCloseEvent(a4));
}

int FUN_8c0b6994(float f4)
{
    register float u0;

    u0 = *(float *)0x8C0B6A4C;
    if (f4 > u0) {
        *(volatile float *)0x8C0B6A50;
        return 0x8C0B6A50;
    }
    return mathLineY(0.0f, 0.0f, u0, (*(float *)0x8C0B6A50), f4);
}

void FUN_8c0c4bf0(void)
{
    
}
