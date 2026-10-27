/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bodyInit(int, int, int, int, int, int, float, float);
int bodyPlacePoints(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
void bodyCreate(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5);

void bodyCreate(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5)
{
    int t1;
    int t14;
    int t15;
    int t16;
    int t17;
    int stk[254];

    stk[241] = a8;
    stk[242] = a9;
    stk[243] = a10;
    stk[244] = a11;
    stk[245] = a12;
    *(unsigned int *)(((int)stk + 20)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x328 + ((int)stk + 20))) = *(struct mv3 *)((0x3B4 + ((int)stk + 20))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x340 + ((int)stk + 20))) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x334 + ((int)stk + 20))) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)(((int)stk + 936)) = a4;
    *(unsigned int *)(((int)stk + 944)) = (*(int *)(((int)stk + 20)));
    *(float *)(((int)stk + 940)) = 0.0f;
    *(unsigned int *)(((int)stk + 948)) = a6;
    *(float *)(((int)stk + 864)) = 0.163333341f;
    *(float *)(((int)stk + 868)) = 0.5f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((0x328 + ((int)stk + 20))); }
    t1 = *(int *)(((int)stk + 20));
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    bodyInit(t1, 0x8C1016D4, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), f4, f5);
    *(unsigned int *)(((int)stk + 952)) = 0x0;
    nlPushUnitMatrix();
    nlRotateAY((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((0x3D0 + ((int)stk + 4)) + 0x4))));
    nlGetMatrix((0x364 + ((int)stk + 4)));
    nlPopMatrix(0x1);
    bodyPlacePoints((((int)stk + 4) + 0x14));
    t14 = (((int)stk + 4) + 0x14);
    t15 = ((((int)stk + 4) + 0x14) + 932);
    t16 = (*(int *)(((0x3C0 + ((int)stk + 4)) + 0x0)));
    for (;;) { t17 = *(int *)t14; t14 = (t14 + 4); if ((unsigned int)t15 < (unsigned int)t14) break; *(unsigned int *)t16 = t17; t16 = (t16 + 4); }
}
