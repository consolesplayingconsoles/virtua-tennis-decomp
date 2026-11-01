/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern void _builtin_prefetch(void *);
int ballBoyReset(int, int, int, int, int, int, int, int, int);
int colliObjInit(int, int, int, int, int, float);
int hudScoreIconPut(int, Stk3, float);
int kmiFLWCTRLCheckVBufOverflow(int, int, int, int);
int kmyGetDMAHANDLE(int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetTADMA(int, int, int, int, int);
int motionAdvanceSimple(int);
int motionSet(int, int, int, int, int, int, float);
int phrasePut(int, int, int, int, Stk3, int, float, float);
int sprPutAtAlpha(int, Stk3, float);
int sprPutScaledAlpha(int, int, int, int, Stk3, int, float, float);
Stk3 vecMake(float, float, float);
int kmiFLWCTRLFinalizePass(int a4);
int ballBoyInit(void);
int hudPlayerPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);
int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5);



int hudPlayerPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    float u10;
    int stk[41];
    int R1068;
    int R1072;

    R1068 = *(int *)((int)stk + 68);
    R1072 = *(int *)((int)stk + 72);

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    R1068 = a4;
    R1072 = a5;
    *(float *)(((int)stk + 64)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 64) + 0x18)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    *(float *)(((((int)stk + 64) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x0))) + 109.0f);
    *(float *)(((((int)stk + 64) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x4))) - 8.0f);
    *(float *)(((((int)stk + 64) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 64) + 0x18) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 64) + 0x18)); }
    phrasePut((R1072), a5, a6, a7, *(Stk3 *)(((int)stk + 52)), *(int *)((int)stk + 52 + 12), (f5 * 1.0f), f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 52) + 0x18)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    *(float *)(((((int)stk + 52) + 0x18) + 0x0)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x0))) + 9.0f);
    *(float *)(((((int)stk + 52) + 0x18) + 0x4)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x4))) - 5.0f);
    *(float *)(((((int)stk + 52) + 0x18) + 0x8)) = ((*(float *)(((((int)stk + 52) + 0x18) + 0x8))) - 0.00100000005f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
    hudScoreIconPut((R1068), *(Stk3 *)(((int)stk + 40)), f5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    u10 = *(float *)(((int)stk + 64));
    sprPutAtAlpha(0x8C33A360, *(Stk3 *)(((int)stk + 28)), (u10 * f5));
    *(float *)(((((int)stk + 64) + 0x38) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x38) + 0x0))) + 85.0f);
    *(float *)0x8C33A3C0 = (((*(float *)0x8C33A3D0) - (*(float *)0x8C33A3C8)) * 160.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    sprPutAtAlpha(0x8C33A3B0, *(Stk3 *)(((int)stk + 16)), (u10 * f5));
    *(float *)(((((int)stk + 64) + 0x38) + 0x0)) = ((*(float *)(((((int)stk + 64) + 0x38) + 0x0))) + 85.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 64) + 0x38)); }
    return (sprPutAtAlpha(0x8C33A400, *(Stk3 *)(((int)stk + 4)), (u10 * f5)));
}

int iconSlotPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t6;
    int t4;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    t6 = 0x8C1AED70;
    if ((*(int *)(((a4 << 2) + 0x8C1AED70))) != 0) {
        *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C0901A4));
        *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 78.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t4 = *(int *)(((int)stk + 16));
        t6 = (sprPutScaledAlpha((((((t4 << 2) + t4) << 2) << 2) + 0x8C37C2BC), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), f4, f5));
    }
    return t6;
}

int iconSlotPutB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4, float f5)
{
    int t3;
    int stk[18];

    stk[7] = a8;
    stk[8] = a9;
    stk[9] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    *(float *)(((((int)stk + 16) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x0))) + (*(float *)0x8C0901A4));
    *(float *)(((((int)stk + 16) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0xC) + 0x4))) + 78.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
    t3 = *(int *)(((int)stk + 16));
    return (sprPutScaledAlpha((((((t3 << 2) + t3) << 2) << 2) + 0x8C37CF10), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), *(int *)((int)stk + 4 + 12), f4, f5));
}
