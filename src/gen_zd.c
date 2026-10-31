/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int nlCalcPoint(int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAZ(int);
int FUN_8c0de3cc(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6);

int FUN_8c0de3cc(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6)
{
    int stk[58];
    register int t39;
    register int t1;
    register int t7;
    register float u12;
    register float u19;
    register float u20;
    register float u21;
    register float u23;
    register float u24;
    register float u25;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;

    stk[49] = a8;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t39 = 0xFFFFFF6C;
    if ((*(int *)(((int)stk + 20))) != 0) {
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)(int)(f6 * 255.0f);
        *(unsigned int *)(((int)stk + 24)) = (((unsigned char)(int)(f4 * 255.0f) << 16) << 8);
        t1 = 0x8C0DE434;
        t7 = a4;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 12))) >= (int)(*(int *)(((int)stk + 20)))) {
                break;
            }
            t4 = (((int)stk + 4) + 0x24);
            t8 = (((int)stk + 4) + 0x24);
            t3 = 0x0;
            t5 = (((int)stk + 4) + 0x24);
            for (;;) {
                t6 = t3;
                t6 = (t6 << 1);
                t6 = (t6 + t3);
                t2 = t7;
                t6 = (t6 << 2);
                t2 = (t2 + 0xC);
                t6 = (t6 << 1);
                t2 = (t2 + t6);
                t1 = 0x18;
                *(float *)((((int)stk + 4) + t1)) = (f5 * (*(float *)((t2 + 0x0))));
                t1 = 0x4;
                u12 = *(float *)((((t7 + 0xC) + t6) + t1));
                t1 = 0x1C;
                *(float *)((((int)stk + 4) + t1)) = (f5 * u12);
                t1 = 0x20;
                *(float *)((((int)stk + 4) + t1)) = 0.0f;
                t1 = (nlPushUnitMatrix());
                t1 = (nlRotateAZ((*(int *)(((int)stk + 16)))));
                t2 = 0x8C0EEC80;
                t1 = (nlCalcPoint((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18)));
                t1 = (nlPopMatrix(0x1));
                t1 = 0x18;
                u19 = *(float *)((((int)stk + 4) + t1));
                t1 = 0x4;
                *(float *)((t8 + 0x0)) = (u19 + (*(float *)(((0xC0 + ((int)stk + 4)) + 0x0))));
                u20 = *(float *)(((0xC0 + ((int)stk + 4)) + t1));
                t1 = 0x1C;
                u21 = *(float *)((((int)stk + 4) + t1));
                t1 = 0x4;
                *(float *)((t8 + t1)) = (u21 + u20);
                t1 = 0x8;
                *(float *)((t8 + t1)) = (*(float *)(((0xC0 + ((int)stk + 4)) + t1)));
                t1 = 0x4;
                u23 = *(float *)((t7 + t1));
                t1 = 0xC;
                u24 = *(float *)((((t7 + 0xC) + t6) + t1));
                t6 = (t6 + (t7 + 0xC));
                *(float *)((t8 + t1)) = (u24 / u23);
                t1 = 0x8;
                u25 = *(float *)((t7 + t1));
                t1 = 0x10;
                *(float *)((t8 + t1)) = ((-((*(float *)((t6 + t1))) / u25)) + 1.0f);
                t2 = (*(int *)(((int)stk + 24)));
                *(unsigned int *)((t8 + 0x14)) = (((((*(int *)(((int)stk + 4))) << 16) | t2) | ((*(int *)(((int)stk + 4))) << 8)) | (*(int *)(((int)stk + 4))));
                t2 = (*(int *)(((int)stk + 8)));
                t3 = (t3 + 0x1);
                if (t2 != 0) {
                    t2 = (*(int *)(((int)stk + 8)));
                    *(unsigned int *)((t4 + 0x18)) = t2;
                } else {
                    *(unsigned int *)((t5 + 0x18)) = 0x0;
                }
                t5 = (t5 + 0x1C);
                t4 = (t4 + 0x1C);
                t8 = (t8 + 0x1C);
                if ((int)t3 >= (int)0x4) {
                    break;
                }
            }
            t1 = (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 4) + 0x24), (*(int *)((t7 + 0x0)))));
            t2 = (*(int *)(((int)stk + 12)));
            t7 = (t7 + 0x6C);
            t2 = (t2 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = t2;
        }
        t39 = t1;
    }
    return t39;
}
