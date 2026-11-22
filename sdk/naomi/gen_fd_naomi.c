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


int nlRenderTextureSet(int a4, int a5, int a6, int a7)
{
    return (nlRenderTextureSet_Sub(a4, a5, a6, a7, 0x1));
}
