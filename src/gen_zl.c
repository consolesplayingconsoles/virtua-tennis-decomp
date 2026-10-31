/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int mwSbSetBitPerSmpl(int, int);
int mwSbSetExPrm(int, int, int, int, int, int, int, int, int, int, int, int);
int mwSbSetNumChan(int, int);
int mwSbSetPan(int, int, int, int, int, int, int);
int mwSbSetSfreq(int, int);
int mwSbSetVol(int, int, int, int, int, int, int);
int nlsndStreamGenerateHdInfo(int);
int nlsndStreamSetHdInfo(int, int);
int nlsndStreamStart(int);
int FUN_8c200548(int a4);

int FUN_8c200548(int a4)
{
    int stk[4];
    register int t30;
    register int t36;

    if ((*(signed char *)((a4 + 0x5))) == 0) {
        nlsndStreamGenerateHdInfo((*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))));
        mwSbSetSfreq(a4, (*(int *)((a4 + 0x14))));
        mwSbSetBitPerSmpl(a4, (*(int *)((a4 + 0x10))));
        mwSbSetNumChan(a4, (*(int *)((a4 + 0xC))));
        mwSbSetVol(a4, (*(int *)((a4 + 0x3C))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
        mwSbSetPan(a4, 0x0, (*(int *)(((a4 + 0x40) + 0x0))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
        mwSbSetPan(a4, 0x1, (*(int *)((a4 + 0x44))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8));
        mwSbSetExPrm(a4, 0x0, (*(int *)((a4 + 0x48))), (*(int *)((a4 + 0x4C))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        mwSbSetExPrm(a4, 0x1, (*(int *)((a4 + 0x50))), (*(int *)((a4 + 0x54))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        mwSbSetExPrm(a4, 0x3, (*(short *)((a4 + 0x58))), (*(short *)((a4 + 0x5A))), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        mwSbSetExPrm(a4, 0x2, (*(int *)((a4 + 0x5C))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    }
    t30 = 0x2710;
    for (;;) {
        t30 = (t30 - 0x1);
        if (t30 == 0) {
            break;
        }
    }
    nlsndStreamSetHdInfo((*(short *)((a4 + 0x6))), (*(int *)(((*(int *)((a4 + 0x1C))) + 0x4))));
    t36 = nlsndStreamStart((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x18)) = 0x1;
    return t36;
}
