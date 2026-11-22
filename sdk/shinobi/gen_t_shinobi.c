/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int ADXB_GetNumChan(int);
int ADXB_GetPcmBuf(int);
int SJRBF_GetBufPtr(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int abs(int);
int camProject(int, int, Stk3);
void camWorldToView(Stk4);
int crowdAnimModel(int, int);
int kmyConnectInterrupt(int, int, int);
int kmyZeroMemory(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int nlsndSeqRequest(int);
int primSprDrawOfs(int, int, int, int, Stk3);
int screenProject(int, int, Stk3);
int set_event(int, int);
int set_event2(int, int);
int sprInitRectF(int, int, int, int, int, int);
extern int sprPutAt();
int sprPutAtAlpha(int, Stk3, float);
int sprSet173Free(int);
int syMmuAddEntry(int, int, int);
void FBSortQueue(int a4, int a5);
int nlsndIcsControl(int a4, int a5, int a6);
int kmyInitDMADevice(void);
int screenSphereVisible(Stk4 s, float f4);
int logoADraw(int a4, int a5, int a6, int a7, Stk4 p);
int sySqInit(void);
int hudRankSprInit(void);
int kmiSetFBSurfaceDesc(int a4);
int menuTextNumPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int stageSelSprInit2(void);
int sprRecInit(int a4, int a5, int a6, int a7, int a8);
int trigger(void);
int logoBDrawRot(int a4, int a5, int a6, int a7, Stk4 p);
int stageSelSprInit3(void);
int nlsndSystemControl(int a4, int a5, int a6);
int playerSetReceiveFlag(int a4, int a5);
int resSpGetFree(int a4, int a5);
int nlSearchPalette(int a4, int a5);
int adxsjd_get_wr(int a4, int a5, int a6, int a7);
int miniPopupSpawn(Stk4 s);
int hudSlideShow(int a4);
int crowdModelUpdate(int a4);


int sySqInit(void)
{
    int t0;
    int t12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t11;

    t0 = *(int *)0xFF000010;
    t12 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t1 = (t0 & 0x1);
        t2 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0xC000000 + t4) >= (unsigned int)0xD000000) {
                break;
            }
            t1 = (syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4));
            t2 = (0x8C461B18 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t1;
        }
        t6 = t1;
        t7 = t2;
        t8 = 0x0;
        t9 = 0x0;
        for (;;) {
            if ((unsigned int)(0x10000000 + t9) >= (unsigned int)0x10800000) {
                break;
            }
            t6 = (syMmuAddEntry((0x10000000 + t9), (0xE1000000 + t9), 0x4));
            t7 = (0x8C461B58 + (t8 << 2));
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x100000);
            *(unsigned int *)((t7 + 0x0)) = t6;
        }
        t11 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0x8C461B78 = t11;
        t12 = t11;
    }
    return t12;
}


