/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int VQFBfree(int, int, int, int, int, int, int, int, int);
int colliObjInit(int, int, int, int, int, float);
int kmytex_GetSmallVQprofile(int, int);
int nlRenderTextureSet_Sub(int, int, int, int, int);
int padLcdLine(int, int, int, int);
int padLcdProject(int, int, int, int, Stk3);
int panelBodyPut(Stk3, float);
int panelPartAPut(Stk3, float);
int panelPartBPut(Stk3, float);
int panelPartCPut(Stk3, float);
int panelTopPut(int, int, int, int, Stk3, float);
int sprInitRectF(int, int, int, int, int, int);
int sprPutAtAlpha(int, int, int, int, Stk3, float);
int staffShadowFlat(int, int, int, int, Stk3);
int staffShadowMulti(int, int);
int panelDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int panelDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int panelDrawC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int decoGaugeFramePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
void staffShadowPut(int a4, int a5, int a6, int a7);
void padLcdLineTo3D(int a4, int a5, int a6, int a7);
int decoPairPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
void decoSprPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int kmyFreeSmallVQArea(int a4, int a5);
int hudLabelPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int panelMenuSprInitA(void);
int panelMenuSprInitB(void);
int numPutSprite(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int panelWordPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int phraseBigWordPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int sprSet173Put(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int sprSet192PutA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int menuIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int ballColliInit(int a4, int a5, int a6, int a7);
int panelLogoPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int hudBannerSubPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int hudSignLastPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4);
int nlRenderTextureSet(int a4, int a5, int a6, int a7);


int kmyFreeSmallVQArea(int a4, int a5)
{
    int t3;
    int t5;
    int stk[14];

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    kmytex_GetSmallVQprofile((((int)stk + 24) + 0x8), (*(int *)(((int)stk + 28))));
    t3 = *(int *)(((((int)stk + 24) + 0x8) + 0x4));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = t3;
    t5 = *(int *)(((((int)stk + 24) + 0x8) + 0xC));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x8)));
    *(unsigned int *)(((int)stk + 16)) = t5;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((((int)stk + 24) + 0x8) + 0x10)));
    return (VQFBfree((*(int *)(((int)stk + 24))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16)));
}


