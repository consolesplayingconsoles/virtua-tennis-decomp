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


int adxsjd_get_wr(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t8;
    int t11;
    int t12;
    int t13;
    int t1;

    t0 = *(int *)((a4 + 0xC));
    t2 = 0x0;
    for (;;) {
        t4 = ADXB_GetNumChan((*(int *)((a4 + 0x4))));
        if ((int)t2 >= (int)t4) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        t1 = (t1 + (a4 + 0xC));
        t1 = (*(int *)((t1 + 0x0)));
        t8 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, 0x4000, (((t2 << 2) << 1) + (a4 + 0x1C)));
        t2 = (t2 + 0x1);
    }
    *(unsigned int *)((a5 + 0x0)) = ((unsigned int)((*(int *)((a4 + 0x1C))) - (SJRBF_GetBufPtr(t0))) >> 1);
    t11 = *(int *)((a4 + 0x20));
    t12 = *(int *)((a4 + 0x38));
    t13 = t12;
    if ((int)((unsigned int)t11 >> 1) < (int)t12) {
        t13 = ((unsigned int)t11 >> 1);
    }
    *(unsigned int *)((a6 + 0x0)) = t13;
    if ((int)(*(int *)((a4 + 0x3C))) >= 0) {
        *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x3C))) - (*(int *)((a4 + 0x40))));
    } else {
        *(unsigned int *)((a7 + 0x0)) = 0x1FFFFFFF;
    }
    return ADXB_GetPcmBuf((*(int *)((a4 + 0x4))));
}


