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

void FBSortQueue(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t11;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t36;
    int t37;
    int t29;
    int t30;
    int t31;
    int t16;
    int t17;
    int t18;
    int t20;
    int t41;
    int t42;
    int t45;
    int stk[10];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    if ((*(int *)((a4 + 0x0))) != 0) {
        t1 = *(int *)((a4 + 0x0));
        t2 = t1;
        t3 = 0x0;
        t4 = t1;
        for (;;) {
            t6 = *(int *)((t4 + 0xC));
            if ((unsigned int)(*(int *)((t2 + 0xC))) > (unsigned int)t6) {
                t4 = t2;
            }
            t2 = (*(int *)((t2 + 0x8)));
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t11 = *(int *)((a5 + 0x0));
            if (t11 != t4) {
                kmytex_FBDeQueueEntry(a4, a5, t4);
                kmytex_FBEnQueueEntry(a5, t4, (*(int *)((a5 + 0x0))));
            } else {
                t16 = t11;
                t17 = 0x1;
                t18 = t6;
                t20 = a5;
            }
            R1004 = 0x0;
            if ((int)(t3 - 2) > 0) {
                t23 = t16;
                t24 = t17;
                t25 = t18;
                t26 = t20;
                t27 = (t3 - 2);
                for (;;) {
                    t28 = *(int *)((a4 + 0x0));
                    t36 = t28;
                    t37 = t28;
                    if ((int)t27 > 0) {
                        t29 = 0x0;
                        t30 = t28;
                        t31 = t28;
                        for (;;) {
                            t31 = (*(int *)((t31 + 0x8)));
                            t25 = (*(int *)((t30 + 0xC)));
                            t24 = (*(int *)((t31 + 0xC)));
                            t29 = (t29 + 0x1);
                            if ((unsigned int)t24 > (unsigned int)t25) {
                                t30 = t31;
                            }
                            if ((int)t29 >= (int)t27) {
                                break;
                            }
                        }
                        t36 = t30;
                        t37 = t31;
                    }
                    if (t37 != t36) {
                        t25 = 0x8C1F9350;
                        t26 = a5;
                        kmytex_FBDeQueueEntry(a4, t26, t36);
                        t24 = 0x8C1F9334;
                        t26 = t36;
                        kmytex_FBEnQueueEntry(a5, t26, t37);
                    } else {
                        t41 = t23;
                        t42 = t24;
                        t45 = t26;
                    }
                    t23 = t41;
                    t24 = t42;
                    t25 = (R1004);
                    t26 = t45;
                    t27 = (t27 - 1);
                    t25 = (t25 + 0x1);
                    R1004 = t25;
                    if ((int)t25 >= (int)(t3 - 2)) {
                        break;
                    }
                }
            }
        }
    }
}


int kmyInitDMADevice(void)
{
    int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)0x8C4709FC = 0x8C203420;
    kmyZeroMemory(0x8C203420, 0x1840);
    *(unsigned int *)0x8C203420 = 0x1840;
    *(unsigned int *)0x8C203424 = 0x1;
    kmyConnectInterrupt(0x11, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x12, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x13, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x19, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x18, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x17, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x16, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x15, 0x8C202FA0, 0x0);
    kmyConnectInterrupt(0x1C, 0x8C203248, 0x0);
    kmyConnectInterrupt(0x1B, 0x8C203248, 0x0);
    *(unsigned int *)0xA05F6884 = 0x0;
    *(unsigned int *)0xA05F6888 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}


