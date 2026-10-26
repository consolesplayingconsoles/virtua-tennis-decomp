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

int panelDrawA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 28)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartAPut(*(Stk3 *)(((int)stk + 4)), f4));
}

int panelDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 28)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartBPut(*(Stk3 *)(((int)stk + 4)), f4));
}

int panelDrawC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[24];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelTopPut(a4, a5, a6, a7, *(Stk3 *)(((int)stk + 28)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 43.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    panelBodyPut(*(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 40) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0xC) + 0x4))) + 144.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 40) + 0xC)); }
    return (panelPartCPut(*(Stk3 *)(((int)stk + 4)), f4));
}

int decoGaugeFramePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int t2;
    int t4;
    int stk[19];

    stk[8] = a8;
    stk[9] = a9;
    stk[10] = a10;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    if ((int)a5 < 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t0 = *(int *)(((int)stk + 20));
        t4 = (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C3422A8), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
        t2 = *(int *)(((int)stk + 16));
        t4 = (sprPutAtAlpha(((((((t2 << 2) + t2) << 2) << 2) + 0x8C3422A8) + 0x5A0), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
    }
    return t4;
}

void staffShadowPut(int a4, int a5, int a6, int a7)
{
    int t0;
    int stk[6];

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        if ((t0 != 1) && ((t0 != 4) && ((t0 != 8) && (t0 != 7)))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x5A4 + a4)); }
            staffShadowFlat((0x1E4 + a4), a5, a6, a7, *(Stk3 *)(((int)stk + 4)));
            return;
        }
        staffShadowMulti(a4, a5);
    return;
    }
}

void padLcdLineTo3D(int a4, int a5, int a6, int a7)
{
    int stk[12];

    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    padLcdProject(0x8C2FBC04, (((int)stk + 4) + 0x10), a6, a7, *(Stk3 *)(((int)stk + 4)));
    padLcdLine((*(int *)0x8C2FBC44), 0x8C2FBBF8, (((int)stk + 4) + 0x10), 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2FBBF8) = *(struct mv3 *)((((int)stk + 4) + 0x10)); }
}

int decoPairPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
        t0 = 0x7D0;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
        t0 = 0x820;
    }
    return (sprPutAtAlpha((t0 + 0x8C341A38), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

void decoSprPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    if ((int)a4 <= (int)0x1C) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
        t0 = *(int *)(((int)stk + 16));
        sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C341A38), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4);
    }
}

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

int hudLabelPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t1;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t1 = *(int *)((((*(int *)(((int)stk + 16))) << 2) + 0x8C10FF30));
    return (sprPutAtAlpha((((((t1 << 2) + t1) << 2) << 2) + 0x8C33ECD0), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int panelMenuSprInitA(void)
{
    int t0;
    int stk[8];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 12)) = *(struct mv4 *)(0x8C1102F8); }
    t0 = sprInitRectF(0x8C3403F0, 0x7C, (((int)stk + 4) + 0x8), 0x10, 0x10, 0x0);
    *(unsigned int *)0x8C340424 = 0x1005;
    return t0;
}

int panelMenuSprInitB(void)
{
    int t0;
    int stk[8];

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 12)) = *(struct mv4 *)(0x8C110308); }
    t0 = sprInitRectF(0x8C340440, 0x1E, (((int)stk + 4) + 0x8), 0x20, 0x20, 0x0);
    *(unsigned int *)0x8C340474 = 0x5;
    return t0;
}

int numPutSprite(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C3373BC), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int panelWordPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C337DE0), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int phraseBigWordPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C338240), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int sprSet173Put(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C37C2BC), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int sprSet192PutA(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C37CF10), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int menuIconPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int t0;
    int stk[17];

    stk[6] = a8;
    stk[7] = a9;
    stk[8] = a10;
    *(unsigned int *)(((int)stk + 16)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    t0 = *(int *)(((int)stk + 16));
    return (sprPutAtAlpha((((((t0 << 2) + t0) << 2) << 2) + 0x8C334434), a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int ballColliInit(int a4, int a5, int a6, int a7)
{
    int t1;

    colliObjInit(0x8C291F30, a5, a6, a7, 0x8C2FBFE0, (1.0f + 1.0f));
    *(unsigned int *)0x8C2FC010 = 0x1;
    t1 = *(int *)0x8C2FC018;
    *(unsigned int *)0x8C2FC018 = (t1 | 0x4);
    return (t1 | 0x4);
}

int panelLogoPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[16];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C337C50, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int hudBannerSubPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[16];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C33D7E0, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int hudSignLastPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, float f4)
{
    int stk[16];

    stk[5] = a8;
    stk[6] = a9;
    stk[7] = a10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
    return (sprPutAtAlpha(0x8C33FA90, a5, a6, a7, *(Stk3 *)(((int)stk + 4)), f4));
}

int nlRenderTextureSet(int a4, int a5, int a6, int a7)
{
    return (nlRenderTextureSet_Sub(a4, a5, a6, a7, 0x1));
}
