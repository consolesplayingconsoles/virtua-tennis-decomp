/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int screenQuadPut(int, float);
int sprSheetPut(int, float, float, float, float);
int sprSheetSet(int);
int uiScanlinesPut(float);
int circuitDrawFrame(void);

int circuitDrawFrame(void)
{
    int t8;
    int stk[15];

    sprSheetSet(0x8C1082C0);
    sprSheetPut(0x0, 30.0f, 32.0f, 51.0f, 1.0f);
    sprSheetSet(0x8C1082E4);
    *(unsigned int *)(((int)stk + 4)) = 0x8C287658;
    *(float *)0x8C287668 = ((*(float *)0x8C287668) * 280.0f);
    sprSheetPut(0x0, 0.0f, 0.0f, 51.0999985f, 0.5f);
    sprSheetSet(0x8C108308);
    sprSheetPut(0x0, 280.0f, 0.0f, 51.0999985f, 0.5f);
    sprSheetSet(0x8C10832C);
    t8 = *(int *)(((int)stk + 4));
    *(float *)((t8 + 0x10)) = ((*(float *)((t8 + 0x10))) * 640.0f);
    sprSheetPut(0x0, 0.0f, 360.0f, 51.0999985f, 0.5f);
    uiScanlinesPut(499.0f);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = 0xFF000000;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = 0xFF000000;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = 0xFF00BABA;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = 0xFF00BABA;
    return (screenQuadPut((((int)stk + 4) + 0x4), 640.0f));
}
