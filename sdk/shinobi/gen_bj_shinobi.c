/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int cpuAimPointSet(int, int, float, float);
int hudRankIconPut(int, Stk3);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
int motionBackup(int);
int motionChange(int, int, int, int, int, float);
int motionSetFrame(int, float);
int motionSetSpeed(int, float);
int nlArcTan(float);
float nlCos(int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRotateAY(int);
float nlSin(int);
float nlTan(int);
int nlTranslate(float, float, float);
int nl_requset_PixelClipping(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int serveGetReceiver(void);
int serveGetServer(void);
int sprListPutGrad(int, int, int, int, Stk3, float, float);
int sprPutAt(int, Stk3);
int staffMorphReset(void);
int standBgDraw(int, int, int, int);
int standPanelDraw(int, int, int, int, Stk3);
int standTableDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int nlPerspective(int a4, float f4, float f5, float f6);
int rankDrawGlyph(int a4, int a5, int a6);
int stageSegaCourtDraw(int a4);
int standDraw(int a4, int a5);
int cpuDblAimAddRandom(int a4, int a5, float f4, float f5, float f6, float f7);
int nlSetPixelClipping(float f4, float f5, float f6, float f7);
void syCacheOCBI(int a4, int a5);
void syCacheOCBP(int a4, int a5);
int ballBoyRecall(int a4);
int cpuDblTacticPos(int a4, int a5);


void syCacheOCBI(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        _builtin_set_imask(((*(unsigned short *)(((int)stk + 4))) & 0xF)); /* the P2 tail's end: the caches need nothing on the host */
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

void syCacheOCBP(int a4, int a5)
{
    int t1;
    int t2;
    int stk[6];

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        _builtin_set_imask(((*(unsigned short *)(((int)stk + 4))) & 0xF)); /* the P2 tail's end: the caches need nothing on the host */
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}


