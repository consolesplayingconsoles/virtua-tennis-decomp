/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int decoWaveDraw(int, int, int, int, Stk3);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int nlsndInit(int, int);
int nlsndPackLoadBG(int, int, int);
int nlsndPackLoadStatus(int);
int nlsndStreamInit(int, int, int);
int primSprDrawScale(int, int, int, int, float, float);
int sndFxReset(void);
extern int sprPutAt();
int strmInit(void);
int menuTextMsgPutB(int a4, int a5, int a6, int a7, float f4);
int sndLoadStep(int a4, int a5, int a6, int a7);
void windowFrameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int menuTextMsgPutB(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u10;
    int t7;
    float u8;
    float u9;
    float u11;
    int t297;
    int t298;
    int t300;
    int t301;
    float u302;
    int t291;
    int t292;
    int t294;
    int t295;
    float u296;
    int stk[120];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x19C + ((int)stk + 16))) = *(struct mv3 *)((0x1D0 + ((int)stk + 16))); }
    *(unsigned int *)(((int)stk + 20)) = 0x8C33533C;
    *(unsigned int *)(((int)stk + 40)) = 0x8C1849C8;
    *(unsigned int *)(((int)stk + 24)) = 0x8C1849D8;
    *(unsigned int *)(((int)stk + 16)) = 0x8C3353DC;
    *(unsigned int *)(((int)stk + 28)) = 0x8C1849E8;
    *(unsigned int *)(((int)stk + 32)) = 0x8C33542C;
    *(unsigned int *)(((int)stk + 36)) = 0x8C1849F8;
    *(unsigned int *)(((int)stk + 44)) = 0x8C33547C;
    *(unsigned int *)(((int)stk + 424)) = 0x8C184A18;
    *(unsigned int *)(((int)stk + 420)) = 0x8C33551C;
    *(unsigned int *)(((int)stk + 416)) = 0x8C184A28;
    *(unsigned int *)(((int)stk + 412)) = 0x8C33556C;
    *(unsigned int *)(((int)stk + 408)) = 0x8C184A38;
    *(unsigned int *)(((int)stk + 404)) = 0x8C3355BC;
    *(unsigned int *)(((int)stk + 400)) = 0x8C184A48;
    *(unsigned int *)(((int)stk + 396)) = 0x8C33560C;
    *(unsigned int *)(((int)stk + 392)) = 0x8C184A58;
    *(unsigned int *)(((int)stk + 388)) = 0x8C33565C;
    *(unsigned int *)(((int)stk + 384)) = 0x8C184A68;
    *(unsigned int *)(((int)stk + 380)) = 0x8C3356AC;
    *(unsigned int *)(((int)stk + 376)) = 0x8C184A78;
    *(unsigned int *)(((int)stk + 372)) = 0x8C3356FC;
    *(unsigned int *)(((int)stk + 368)) = 0x8C184A88;
    *(unsigned int *)(((int)stk + 364)) = 0x8C33574C;
    *(unsigned int *)(((int)stk + 360)) = 0x8C184A98;
    *(unsigned int *)(((int)stk + 356)) = 0x8C33579C;
    *(unsigned int *)(((int)stk + 352)) = 0x8C184AA8;
    *(unsigned int *)(((int)stk + 348)) = 0x8C3357EC;
    *(unsigned int *)(((int)stk + 344)) = 0x8C184AB8;
    *(unsigned int *)(((int)stk + 340)) = 0x8C33583C;
    *(unsigned int *)(((int)stk + 336)) = 0x8C184AC8;
    *(unsigned int *)(((int)stk + 332)) = 0x8C33588C;
    *(unsigned int *)(((int)stk + 328)) = 0x8C184AD8;
    *(unsigned int *)(((int)stk + 324)) = 0x8C3358DC;
    *(unsigned int *)(((int)stk + 320)) = 0x8C184AE8;
    *(unsigned int *)(((int)stk + 316)) = 0x8C33592C;
    *(unsigned int *)(((int)stk + 312)) = 0x8C184AF8;
    *(unsigned int *)(((int)stk + 308)) = 0x8C33597C;
    *(unsigned int *)(((int)stk + 304)) = 0x8C184B08;
    *(unsigned int *)(((int)stk + 300)) = 0x8C3359CC;
    *(unsigned int *)(((int)stk + 296)) = 0x8C184B18;
    *(unsigned int *)(((int)stk + 292)) = 0x8C335A1C;
    *(unsigned int *)(((int)stk + 288)) = 0x8C184B28;
    *(unsigned int *)(((int)stk + 284)) = 0x8C335A6C;
    *(unsigned int *)(((int)stk + 280)) = 0x8C184B38;
    *(unsigned int *)(((int)stk + 276)) = 0x8C335ABC;
    *(unsigned int *)(((int)stk + 272)) = 0x8C184B48;
    *(unsigned int *)(((int)stk + 268)) = 0x8C335B0C;
    *(unsigned int *)(((int)stk + 264)) = 0x8C184B58;
    *(unsigned int *)(((int)stk + 260)) = 0x8C335B5C;
    *(unsigned int *)(((int)stk + 256)) = 0x8C184B68;
    *(unsigned int *)(((int)stk + 252)) = 0x8C335BAC;
    *(unsigned int *)(((int)stk + 248)) = 0x8C184B78;
    *(unsigned int *)(((int)stk + 244)) = 0x8C335BFC;
    *(unsigned int *)(((int)stk + 240)) = 0x8C184B88;
    *(unsigned int *)(((int)stk + 236)) = 0x8C335C4C;
    *(unsigned int *)(((int)stk + 232)) = 0x8C184B98;
    *(unsigned int *)(((int)stk + 228)) = 0x8C335C9C;
    *(unsigned int *)(((int)stk + 224)) = 0x8C184BA8;
    *(unsigned int *)(((int)stk + 220)) = 0x8C335CEC;
    *(unsigned int *)(((int)stk + 216)) = 0x8C184BB8;
    *(unsigned int *)(((int)stk + 212)) = 0x8C335D3C;
    *(unsigned int *)(((int)stk + 208)) = 0x8C184BC8;
    *(unsigned int *)(((int)stk + 204)) = 0x8C335D8C;
    *(unsigned int *)(((int)stk + 200)) = 0x8C184BD8;
    *(unsigned int *)(((int)stk + 196)) = 0x8C335DDC;
    *(unsigned int *)(((int)stk + 192)) = 0x8C184BE8;
    *(unsigned int *)(((int)stk + 188)) = 0x8C335E2C;
    *(unsigned int *)(((int)stk + 184)) = 0x8C184BF8;
    *(unsigned int *)(((int)stk + 180)) = 0x8C335E7C;
    *(unsigned int *)(((int)stk + 176)) = 0x8C184C08;
    *(unsigned int *)(((int)stk + 172)) = 0x8C335ECC;
    *(unsigned int *)(((int)stk + 168)) = 0x8C184C18;
    *(unsigned int *)(((int)stk + 164)) = 0x8C335F1C;
    *(unsigned int *)(((int)stk + 160)) = 0x8C184C28;
    *(unsigned int *)(((int)stk + 156)) = 0x8C335F6C;
    *(unsigned int *)(((int)stk + 152)) = 0x8C184C38;
    *(unsigned int *)(((int)stk + 148)) = 0x8C335FBC;
    *(unsigned int *)(((int)stk + 144)) = 0x8C184C48;
    *(unsigned int *)(((int)stk + 140)) = 0x8C33600C;
    *(unsigned int *)(((int)stk + 136)) = 0x8C184C58;
    *(unsigned int *)(((int)stk + 132)) = 0x8C33605C;
    *(unsigned int *)(((int)stk + 128)) = 0x8C184C68;
    *(unsigned int *)(((int)stk + 124)) = 0x8C3360AC;
    *(unsigned int *)(((int)stk + 120)) = 0x8C184C78;
    *(unsigned int *)(((int)stk + 116)) = 0x8C3360FC;
    *(unsigned int *)(((int)stk + 112)) = 0x8C184C88;
    *(unsigned int *)(((int)stk + 108)) = 0x8C33614C;
    *(unsigned int *)(((int)stk + 104)) = 0x8C184C98;
    *(unsigned int *)(((int)stk + 100)) = 0x8C33619C;
    *(unsigned int *)(((int)stk + 96)) = 0x8C184CA8;
    *(unsigned int *)(((int)stk + 92)) = 0x8C3361EC;
    *(unsigned int *)(((int)stk + 88)) = 0x8C184CB8;
    *(unsigned int *)(((int)stk + 84)) = 0x8C33623C;
    *(unsigned int *)(((int)stk + 80)) = 0x8C184CC8;
    *(unsigned int *)(((int)stk + 76)) = 0x8C33628C;
    *(unsigned int *)(((int)stk + 72)) = 0x8C184CD8;
    *(unsigned int *)(((int)stk + 68)) = 0x8C3362DC;
    *(unsigned int *)(((int)stk + 64)) = 0x8C184CE8;
    *(unsigned int *)(((int)stk + 60)) = 0x8C33632C;
    *(unsigned int *)(((int)stk + 56)) = 0x8C184CF8;
    *(unsigned int *)(((int)stk + 52)) = 0x8C33637C;
    *(unsigned int *)(((int)stk + 48)) = 0x8C184D08;
    t0 = 0x40;
    t1 = 0x1310;
    t2 = 0x3D8;
    t3 = 0x8C184D08;
    t4 = 0x8C33637C;
    t5 = a4;
    u10 = f4;
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            t7 = 0x100;
            t0 = (*(signed char *)((t5 + 0x0)));
            u11 = 1.0f;
            t0 = (t0 - 46);
            t1 = 0x4D;
            if ((unsigned int)t0 >= (unsigned int)t1) {
                t0 = 0x8C094EF4;
                u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                u10 = (*(float *)((t0 + 0x0)));
                u9 = (u9 + u10);
                *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                t297 = t1;
                t298 = t2;
                t300 = t3;
                t301 = t4;
                u302 = u10;
            } else {
                t0 = (t0 << 1);
                t1 = t0;
                switch (t1) {
                    case 0:
                    {
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        t0 = 0xC;
                        u9 = (u9 + u11);
                        t2 = (0x1D0 + ((int)stk + 16));
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 52)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 48))) + 0x0)));
                        t2 = (int)u9;
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 2:
                    case 4:
                    case 6:
                    case 8:
                    case 10:
                    case 12:
                    case 14:
                    case 16:
                    case 18:
                    case 20:
                    case 22:
                    case 24:
                    case 26:
                    case 28:
                    case 30:
                    case 32:
                    case 34:
                    case 36:
                    case 90:
                    case 92:
                    case 94:
                    case 96:
                    case 98:
                    case 100:
                    {
                        t0 = 0x8C094EF4;
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u10 = (*(float *)((t0 + 0x0)));
                        u9 = (u9 + u10);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                        t291 = t1;
                        t292 = t2;
                        t294 = t3;
                        t295 = t4;
                        u296 = u10;
                    }
                        break;
                    case 38:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 20)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u9 = (*(float *)(((*(int *)(((int)stk + 40))) + 0x0)));
                        u10 = 1.0f;
                        u10 = (u10 + u10);
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (u8 + u9);
                        u9 = u8;
                        u9 = (u9 - u10);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                        t292 = t2;
                        u296 = u10;
                    }
                        break;
                    case 40:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = 0x8C33538C;
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t2 = (*(int *)(((int)stk + 24)));
                        u9 = (*(float *)((t2 + 0x0)));
                        u9 = (float)((int)u9 - 2);
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 42:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 16)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 28))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 44:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 32)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 36))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 46:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 44)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)0x8C184A08);
                        u9 = (float)((int)u9 - 2);
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                    }
                        break;
                    case 48:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = 0x8C3354CC;
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x198;
                        t2 = (*(int *)((((int)stk + 16) + t0)));
                        u9 = (*(float *)((t2 + 0x0)));
                        u9 = (float)((int)u9 - 2);
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 50:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x1A0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x190;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 52:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x198;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x188;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 54:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x190;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x180;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 56:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x188;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x178;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 58:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x180;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x170;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 60:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x178;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x168;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 62:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x170;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x160;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 64:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x168;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x158;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 66:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x160;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x150;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 68:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x158;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x148;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 70:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x150;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x140;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 72:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x148;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x138;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 74:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x140;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x130;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 76:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x138;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x128;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 78:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x130;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x120;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 80:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x128;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x118;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 82:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x120;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x110;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 84:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x118;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x108;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 86:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x110;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x100;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 88:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x108;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xF8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 102:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x100;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xF0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 104:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xF8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xE8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 106:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xF0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xE0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 108:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xE8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xD8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 110:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xE0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xD0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 112:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xD8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xC8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 114:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xD0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xC0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 116:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xC8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xB8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 118:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xC0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xB0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 120:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xB8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xA8;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 122:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xB0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0xA0;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 124:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xA8;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x98;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 126:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0xA0;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x90;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 128:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x98;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x88;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 130:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x90;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x80;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 132:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x88;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x78;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 134:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t0 = 0x80;
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x70;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 136:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x78;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x68;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (u8 + u9);
                        u9 = u8;
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        u9 = (u9 - u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                        t292 = t2;
                    }
                        break;
                    case 138:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x70;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x60;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (u8 + u9);
                        u9 = u8;
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        u9 = (u9 - u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
                        t292 = t2;
                    }
                        break;
                    case 140:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x68;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x58;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 142:
                    {
                        t0 = 0x4;
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + t0)));
                        t2 = (0x1D0 + ((int)stk + 16));
                        u9 = (u9 + u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + t0)) = u9;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x60;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x50;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        t0 = 0x4;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u9 = (float)t2;
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + t0)));
                        u9 = (u9 - u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + t0)) = u9;
                        t292 = t2;
                    }
                        break;
                    case 144:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x58;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x48;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 146:
                    {
                        t0 = 0x4;
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + t0)));
                        t2 = (0x1D0 + ((int)stk + 16));
                        u9 = (u9 + u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + t0)) = u9;
                        t0 = 0xC;
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x50;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        t0 = 0x40;
                        u9 = (*(float *)(((*(int *)((((int)stk + 16) + t0))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 4);
                        t0 = 0x4;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u9 = (float)t2;
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + t0)));
                        u9 = (u9 - u11);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + t0)) = u9;
                        t292 = t2;
                    }
                        break;
                    case 148:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x48;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 72))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    case 150:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        t0 = 0x40;
                        u10 = f4;
                        t3 = (*(int *)((((int)stk + 4) + t0)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 64))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                    default:
                    {
                        t0 = 0xC;
                        t2 = (0x1D0 + ((int)stk + 16));
                        t1 = ((int)stk + 4);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)(t2); }
                        t4 = t7;
                        u10 = f4;
                        t3 = (*(int *)(((int)stk + 60)));
                        t0 = (primSprDrawScale(t3, t4, t7, a7, u10, f4));
                        u9 = (*(float *)(((*(int *)(((int)stk + 56))) + 0x0)));
                        t2 = (int)u9;
                        t2 = (t2 - 2);
                        u9 = (float)t2;
                        u8 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
                        u8 = (u8 + u9);
                        *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u8;
                        t292 = t2;
                    }
                        break;
                }
                t297 = t291;
                t298 = t292;
                t300 = t294;
                t301 = t295;
                u302 = u296;
            }
            u10 = u302;
            t0 = 0x8C094EF8;
            t1 = t297;
            t2 = t298;
            t3 = t300;
            t4 = t301;
            u9 = (*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)));
            u10 = (*(float *)((t0 + 0x0)));
            t5 = (t5 + 0x1);
            u9 = (u9 - u10);
            *(float *)(((0x1D0 + ((int)stk + 16)) + 0x0)) = u9;
            continue;
        }
        break;
    }
    return (int)((*(float *)(((0x1D0 + ((int)stk + 16)) + 0x0))) - (*(float *)(((int)stk + 428))));
}

int sndLoadStep(int a4, int a5, int a6, int a7)
{
    int t5;
    int t6;
    int t13;
    int t19;
    int t25;
    int t31;
    int t38;
    int t44;
    int t51;
    int t57;
    int t64;
    int t70;
    int t77;
    int t83;
    int stk[9];

    if (a4 == 0) {
        *(unsigned int *)0x8C1D2BDC = 0x0;
        fileLoadStart(0x8C880000, 0x8C125BAC, 0x0);
    } else {
        if ((*(int *)0x8C1D2BDC) == 99) {
        } else {
            t5 = *(int *)0x8C1D2BDC;
            if ((unsigned int)t5 >= (unsigned int)0xD) {
            } else {
                switch ((t5 << 1)) {
                    case 0:
                    {
                        t6 = fileLoadPoll(a4, a5, a6, a7);
                        if (t6 != 1) {
                        } else {
                            nlsndInit(0x8C880000, 0x0);
                            fileLoadStart(0x8C880000, 0x8C125BB8, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 2:
                    {
                        t13 = fileLoadPoll(a4, a5, a6, a7);
                        if (t13 != 1) {
                        } else {
                            *(unsigned int *)0x8C38BA9C = (nlsndPackLoadBG(0x8C880000, 0x0, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 4:
                    {
                        t19 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t19;
                        if (t19 != 0) {
                        } else {
                            fileLoadStart(0x8C880000, 0x8C125BC4, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 6:
                    {
                        t25 = fileLoadPoll(a4, a5, a6, a7);
                        if (t25 != 1) {
                        } else {
                            *(unsigned int *)0x8C38BAA0 = (nlsndPackLoadBG(0x8C880000, 0x1, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 8:
                    {
                        t31 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t31;
                        if (t31 != 0) {
                        } else {
                            fileLoadStart(0x8C880000, 0x8C125BD0, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 10:
                    {
                        t38 = fileLoadPoll(a4, a5, a6, a7);
                        if (t38 == 1) {
                            *(unsigned int *)0x8C38BAA4 = (nlsndPackLoadBG(0x8C880000, 0x2, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 12:
                    {
                        t44 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t44;
                        if (t44 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BDC, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 14:
                    {
                        t51 = fileLoadPoll(a4, a5, a6, a7);
                        if (t51 == 1) {
                            *(unsigned int *)0x8C38BAA8 = (nlsndPackLoadBG(0x8C880000, 0x3, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 16:
                    {
                        t57 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t57;
                        if (t57 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BE8, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 18:
                    {
                        t64 = fileLoadPoll(a4, a5, a6, a7);
                        if (t64 == 1) {
                            *(unsigned int *)0x8C38BAAC = (nlsndPackLoadBG(0x8C880000, 0x4, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 20:
                    {
                        t70 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t70;
                        if (t70 == 0) {
                            fileLoadStart(0x8C880000, 0x8C125BF4, 0x0);
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    case 22:
                    {
                        t77 = fileLoadPoll(a4, a5, a6, a7);
                        if (t77 == 1) {
                            *(unsigned int *)0x8C38BAB0 = (nlsndPackLoadBG(0x8C880000, 0x5, 0x2000));
                            *(unsigned int *)0x8C1D2BDC = ((*(int *)0x8C1D2BDC) + 0x1);
                        }
                    }
                        break;
                    default:
                    {
                        t83 = nlsndPackLoadStatus(a4);
                        *(unsigned int *)0x8C1D2BE0 = t83;
                        if (t83 == 0) {
                            sndFxReset();
                            nlsndStreamInit(0x2, 0x2, 0x0);
                            strmInit();
                            *(unsigned int *)0x8C1D2BDC = 0x63;
                        }
                    }
                        break;
                }
            }
        }
    }
    return (*(int *)0x8C1D2BDC);
}

void windowFrameDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u3;
    int t14;
    int t40;
    int t57;
    int t59;
    int t61;
    int t64;
    int t81;
    int t94;
    int t96;
    int t98;
    int t102;
    int t116;
    int t129;
    int t131;
    int t133;
    int t137;
    int t151;
    int t164;
    int t166;
    int t168;
    int t172;
    int t177;
    int t182;
    int t184;
    int t186;
    int t191;
    int t208;
    int t223;
    int t225;
    int t227;
    int t232;
    int t249;
    int t264;
    int t266;
    int t268;
    int t273;
    int t290;
    int t305;
    int t307;
    int t309;
    int t314;
    int t331;
    int t345;
    int t347;
    int t349;
    int t353;
    int t367;
    int stk[42];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C096C00:;
    *(unsigned int *)(((int)stk + 44)) = R5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x8)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 40) + 0x14)) = *(struct mv3 *)((((int)stk + 40) + 0x50)); }
    *(float *)(((((int)stk + 40) + 0x14) + 0x4)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x4))) - 18.0f);
    *(float *)(((((int)stk + 40) + 0x14) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x14) + 0x0))) + 7.0f);
    *(float *)(((((int)stk + 40) + 0x8) + 0x0)) = ((*(float *)(((((int)stk + 40) + 0x8) + 0x0))) + 28.0f);
    u3 = *(float *)(((((int)stk + 40) + 0x8) + 0x4));
    *(float *)(((((int)stk + 40) + 0x8) + 0x4)) = (u3 - 16.0f);
    R1 = (0x41800000);
    R11 = (0x0);
    R12 = ((((int)stk + 40) + 0x50));
    R14 = ((((int)stk + 40) + 0x14));
    R8 = (0x0);
    R9 = ((((int)stk + 40) + 0x8));
    F0 = ((u3 - 16.0f));
    F1 = (16.0f);
    F14 = (7.0f);
    if (((int)R6 >= (int)0x4)) goto L_8C096CDA;
    goto L_8C096C74;
    L_8C096C74:;
    t14 = *(int *)(((((R6 << 2) << 1) + 0x8C343B4C) + 0x4));
    R1 = (t14);
    R13 = ((((R6 << 2) << 1) + 0x8C343B4C));
    R5 = (0x1);
    R7 = (0x2);
    if ((t14 != 0)) goto L_8C096CA0;
    goto L_8C096C88;
    L_8C096C88:;
    if (((*(int *)0x8C1852C0) != 1)) goto L_8C096CA0;
    goto L_8C096C90;
    L_8C096C90:;
    R0 = ((*(int *)((R13 + 0x0))));
    if (((*(int *)((R13 + 0x0))) != 0)) goto L_8C096C9A;
    goto L_8C096C98;
    L_8C096C98:;
    R11 = (R5);
    goto L_8C096C9A;
    L_8C096C9A:;
    if ((R0 != 7)) goto L_8C096CA0;
    goto L_8C096C9E;
    L_8C096C9E:;
    R11 = (R7);
    goto L_8C096CA0;
    L_8C096CA0:;
    if (((*(int *)((R13 + 0x4))) != 1)) goto L_8C096CBE;
    goto L_8C096CA6;
    L_8C096CA6:;
    if (((*(int *)0x8C1852E4) != 1)) goto L_8C096CBE;
    goto L_8C096CAE;
    L_8C096CAE:;
    R0 = ((*(int *)((R13 + 0x0))));
    if (((*(int *)((R13 + 0x0))) != 0)) goto L_8C096CB8;
    goto L_8C096CB6;
    L_8C096CB6:;
    R11 = (R5);
    goto L_8C096CB8;
    L_8C096CB8:;
    if ((R0 != 7)) goto L_8C096CBE;
    goto L_8C096CBC;
    L_8C096CBC:;
    R11 = (R7);
    goto L_8C096CBE;
    L_8C096CBE:;
    t40 = *(int *)((R13 + 0x4));
    if (((*(int *)((((*(int *)((R13 + 0x0))) << 2) + (((((t40 << 2) << 1) + t40) << 2) + 0x8C1853C0)))) != 3)) goto L_8C096CDA;
    goto L_8C096CD8;
    L_8C096CD8:;
    R11 = (R8);
    goto L_8C096CDA;
    L_8C096CDA:;
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C096CE4;
    goto L_8C096CE2;
    L_8C096CE2:;
    R11 = (R8);
    goto L_8C096CE4;
    L_8C096CE4:;
    *(unsigned int *)(((int)stk + 40)) = 0x8C33C570;
    R0 = (R4);
    R10 = (0x8C0A5A92);
    R13 = (0x8C33C570);
    F12 = (12.0f);
    F13 = (69.0f);
    F15 = (19.0f);
    if ((R4 == 0)) goto L_8C096D7C;
    goto L_8C096CFC;
    L_8C096CFC:;
    if ((R0 != 1)) goto L_8C096D04;
    goto L_8C096D00;
    L_8C096D00:;
    goto L_8C096EFC;
    L_8C096EFC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t57 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0xF0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t59 = ((int (*)(int, Stk3))(sprPutAt))((0x140 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t61 = ((int (*)(int, Stk3))(sprPutAt))((0x190 + R13), *(Stk3 *)(R12));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C096FF0;
    goto L_8C096F56;
    L_8C096F56:;
    *(unsigned int *)((R13 + 0x528)) = R8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    t64 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x6E0 + R13), R5, R6, R7, *(Stk3 *)(R9));
    if ((R11 != 0)) goto L_8C096F86;
    goto L_8C096F74;
    L_8C096F74:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x500);
    goto L_8C097088;
    L_8C097088:;
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((R4 + R13), R5, R6, R7, *(Stk3 *)(R14))));
    goto L_8C097B02;
    L_8C097B02:;
    return;
    L_8C096F86:;
    if ((R11 != 1)) goto L_8C096FAA;
    goto L_8C096F8C;
    L_8C096F8C:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C096FC6;
    L_8C096FC6:;
    R0 = ((decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14))));
    goto L_8C097B02;
    L_8C096FAA:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C096FC6;
    L_8C096FF0:;
    *(unsigned int *)((R13 + 0x528)) = 0x8000;
    if ((R11 != 0)) goto L_8C097026;
    goto L_8C096FFA;
    L_8C096FFA:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t81 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x500 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09706C;
    L_8C09706C:;
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 50.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R4 = (0x6E0);
    goto L_8C097088;
    L_8C097026:;
    if ((R11 != 1)) goto L_8C09704A;
    goto L_8C09702C;
    L_8C09702C:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097066;
    L_8C097066:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09706C;
    L_8C09704A:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097066;
    L_8C096D04:;
    if ((R0 != 2)) goto L_8C096D0C;
    goto L_8C096D08;
    L_8C096D08:;
    goto L_8C097092;
    L_8C097092:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t94 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0x2D0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t96 = ((int (*)(int, Stk3))(sprPutAt))((0x320 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t98 = ((int (*)(int, Stk3))(sprPutAt))((0x370 + R13), *(Stk3 *)(R12));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C097180;
    goto L_8C0970EC;
    L_8C0970EC:;
    *(unsigned int *)((R13 + 0x5C8)) = R8;
    if ((R11 != 0)) goto L_8C097138;
    goto L_8C0970F4;
    L_8C0970F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t102 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5A0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09720E;
    L_8C09720E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x730 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C097138:;
    if ((R11 != 1)) goto L_8C09715C;
    goto L_8C09713E;
    L_8C09713E:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097178;
    L_8C097178:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09720E;
    L_8C09715C:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097178;
    L_8C097180:;
    *(unsigned int *)((R13 + 0x5C8)) = 0x8000;
    if ((R11 != 0)) goto L_8C0971B6;
    goto L_8C09718A;
    L_8C09718A:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t116 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5A0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097200;
    L_8C097200:;
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 50.0f);
    R1 = (0x42480000);
    goto L_8C09720E;
    L_8C0971B6:;
    if ((R11 != 1)) goto L_8C0971DE;
    goto L_8C0971BC;
    L_8C0971BC:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 3.0f);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0971FA;
    L_8C0971FA:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097200;
    L_8C0971DE:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0971FA;
    L_8C096D0C:;
    if ((R0 != 3)) goto L_8C096D14;
    goto L_8C096D10;
    L_8C096D10:;
    goto L_8C097244;
    L_8C097244:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t129 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0x3C0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t131 = ((int (*)(int, Stk3))(sprPutAt))((0x410 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t133 = ((int (*)(int, Stk3))(sprPutAt))((0x460 + R13), *(Stk3 *)(R12));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C097306;
    goto L_8C09729E;
    L_8C09729E:;
    *(unsigned int *)((R13 + 0x618)) = R8;
    if ((R11 != 0)) goto L_8C0972BE;
    goto L_8C0972A6;
    L_8C0972A6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t137 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5F0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0973B4;
    L_8C0973B4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x780 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C0972BE:;
    if ((R11 != 1)) goto L_8C0972E2;
    goto L_8C0972C4;
    L_8C0972C4:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0972FE;
    L_8C0972FE:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0973B4;
    L_8C0972E2:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0972FE;
    L_8C097306:;
    *(unsigned int *)((R13 + 0x618)) = 0x8000;
    if ((R11 != 0)) goto L_8C09733C;
    goto L_8C097310;
    L_8C097310:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t151 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5F0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0973A6;
    L_8C0973A6:;
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 50.0f);
    R1 = (0x42480000);
    goto L_8C0973B4;
    L_8C09733C:;
    if ((R11 != 1)) goto L_8C097384;
    goto L_8C097342;
    L_8C097342:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0973A0;
    L_8C0973A0:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0973A6;
    L_8C097384:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0973A0;
    L_8C096D14:;
    if ((R0 != 4)) goto L_8C096D1C;
    goto L_8C096D18;
    L_8C096D18:;
    goto L_8C0973CC;
    L_8C0973CC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t164 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0x1E0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t166 = ((int (*)(int, Stk3))(sprPutAt))((0x230 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t168 = ((int (*)(int, Stk3))(sprPutAt))((0x280 + R13), *(Stk3 *)(R12));
    R12 = ((0x550 + R13));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C097442;
    goto L_8C09742A;
    L_8C09742A:;
    *(unsigned int *)((R12 + 0x28)) = R8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t172 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R12, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09747C;
    L_8C09747C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x640 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C097442:;
    *(unsigned int *)((R12 + 0x28)) = 0x8000;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t177 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(R12, R5, R6, R7, *(Stk3 *)(R14));
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 50.0f);
    R1 = (0x42480000);
    goto L_8C09747C;
    L_8C096D1C:;
    if ((R0 != 5)) goto L_8C096D24;
    goto L_8C096D20;
    L_8C096D20:;
    goto L_8C0974BC;
    L_8C0974BC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t182 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((*(int *)(((int)stk + 40))), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t184 = ((int (*)(int, Stk3))(sprPutAt))((R13 + 0x50), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t186 = ((int (*)(int, Stk3))(sprPutAt))((0xA0 + R13), *(Stk3 *)(R12));
    R4 = ((0x4B0 + R13));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C097584;
    goto L_8C097516;
    L_8C097516:;
    *(unsigned int *)((R4 + 0x28)) = R8;
    if ((R11 != 0)) goto L_8C097534;
    goto L_8C09751C;
    L_8C09751C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t191 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x4B0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09757A;
    L_8C09757A:;
    R0 = (0x4);
    F2 = (((*(float *)((R9 + 0x4))) - 1.0f));
    goto L_8C097626;
    L_8C097626:;
    *(float *)((R9 + R0)) = F2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x7D0 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C097534:;
    if ((R11 != 1)) goto L_8C097558;
    goto L_8C09753A;
    L_8C09753A:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097574;
    L_8C097574:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09757A;
    L_8C097558:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097574;
    L_8C097584:;
    *(unsigned int *)((R4 + 0x28)) = 0x8000;
    if ((R11 != 0)) goto L_8C0975B8;
    goto L_8C09758C;
    L_8C09758C:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t208 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x4B0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09761A;
    L_8C09761A:;
    R0 = (0x4);
    R1 = (0x42480000);
    F2 = (((*(float *)((R9 + 0x4))) + 50.0f));
    goto L_8C097626;
    L_8C0975B8:;
    if ((R11 != 1)) goto L_8C0975F8;
    goto L_8C0975BE;
    L_8C0975BE:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097614;
    L_8C097614:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09761A;
    L_8C0975F8:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097614;
    L_8C096D24:;
    if ((R0 != 6)) goto L_8C096D2C;
    goto L_8C096D28;
    L_8C096D28:;
    goto L_8C097640;
    L_8C097640:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t223 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0xF0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t225 = ((int (*)(int, Stk3))(sprPutAt))((0x140 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t227 = ((int (*)(int, Stk3))(sprPutAt))((0x190 + R13), *(Stk3 *)(R12));
    R4 = ((0x500 + R13));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C09772C;
    goto L_8C09769E;
    L_8C09769E:;
    *(unsigned int *)((R4 + 0x28)) = R8;
    if ((R11 != 0)) goto L_8C0976BC;
    goto L_8C0976A4;
    L_8C0976A4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t232 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x500 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097702;
    L_8C097702:;
    R0 = (0x4);
    F2 = (((*(float *)((R9 + 0x4))) - 1.0f));
    goto L_8C0977B2;
    L_8C0977B2:;
    *(float *)((R9 + R0)) = F2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x820 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C0976BC:;
    if ((R11 != 1)) goto L_8C0976E0;
    goto L_8C0976C2;
    L_8C0976C2:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0976FC;
    L_8C0976FC:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097702;
    L_8C0976E0:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0976FC;
    L_8C09772C:;
    *(unsigned int *)((R4 + 0x28)) = 0x8000;
    if ((R11 != 0)) goto L_8C097760;
    goto L_8C097734;
    L_8C097734:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t249 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x500 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0977A6;
    L_8C0977A6:;
    R0 = (0x4);
    R1 = (0x42480000);
    F2 = (((*(float *)((R9 + 0x4))) + 50.0f));
    goto L_8C0977B2;
    L_8C097760:;
    if ((R11 != 1)) goto L_8C097784;
    goto L_8C097766;
    L_8C097766:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0977A0;
    L_8C0977A0:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0977A6;
    L_8C097784:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0977A0;
    L_8C096D2C:;
    if ((R0 != 7)) goto L_8C096D34;
    goto L_8C096D30;
    L_8C096D30:;
    goto L_8C0977CC;
    L_8C0977CC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t264 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0x2D0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t266 = ((int (*)(int, Stk3))(sprPutAt))((0x320 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t268 = ((int (*)(int, Stk3))(sprPutAt))((0x370 + R13), *(Stk3 *)(R12));
    R4 = ((0x5A0 + R13));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C0978C0;
    goto L_8C09782A;
    L_8C09782A:;
    *(unsigned int *)((R4 + 0x28)) = R8;
    if ((R11 != 0)) goto L_8C097870;
    goto L_8C097830;
    L_8C097830:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t273 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5A0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0978B6;
    L_8C0978B6:;
    R0 = (0x4);
    F2 = (((*(float *)((R9 + 0x4))) - 1.0f));
    goto L_8C097946;
    L_8C097946:;
    *(float *)((R9 + R0)) = F2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x870 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C097870:;
    if ((R11 != 1)) goto L_8C097894;
    goto L_8C097876;
    L_8C097876:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C0978B0;
    L_8C0978B0:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C0978B6;
    L_8C097894:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C0978B0;
    L_8C0978C0:;
    *(unsigned int *)((R4 + 0x28)) = 0x8000;
    if ((R11 != 0)) goto L_8C0978F4;
    goto L_8C0978C8;
    L_8C0978C8:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t290 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5A0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09793A;
    L_8C09793A:;
    R0 = (0x4);
    R1 = (0x42480000);
    F2 = (((*(float *)((R9 + 0x4))) + 50.0f));
    goto L_8C097946;
    L_8C0978F4:;
    if ((R11 != 1)) goto L_8C097918;
    goto L_8C0978FA;
    L_8C0978FA:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097934;
    L_8C097934:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C09793A;
    L_8C097918:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097934;
    L_8C096D34:;
    if ((R0 != 8)) goto L_8C096D3C;
    goto L_8C096D38;
    L_8C096D38:;
    goto L_8C097978;
    L_8C097978:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t305 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))(((*(int *)(((int)stk + 40))) + 0x3C0), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t307 = ((int (*)(int, Stk3))(sprPutAt))((0x410 + R13), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t309 = ((int (*)(int, Stk3))(sprPutAt))((0x460 + R13), *(Stk3 *)(R12));
    R4 = ((0x5F0 + R13));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C097A44;
    goto L_8C0979D6;
    L_8C0979D6:;
    *(unsigned int *)((R4 + 0x28)) = R8;
    if ((R11 != 0)) goto L_8C0979F4;
    goto L_8C0979DC;
    L_8C0979DC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t314 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5F0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097A3A;
    L_8C097A3A:;
    R0 = (0x4);
    F2 = (((*(float *)((R9 + 0x4))) - 1.0f));
    goto L_8C097AEA;
    L_8C097AEA:;
    *(float *)((R9 + R0)) = F2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x8C0 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C0979F4:;
    if ((R11 != 1)) goto L_8C097A18;
    goto L_8C0979FA;
    L_8C0979FA:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097A34;
    L_8C097A34:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097A3A;
    L_8C097A18:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097A34;
    L_8C097A44:;
    *(unsigned int *)((R4 + 0x28)) = 0x8000;
    if ((R11 != 0)) goto L_8C097A78;
    goto L_8C097A4C;
    L_8C097A4C:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t331 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x5F0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097ADE;
    L_8C097ADE:;
    R0 = (0x4);
    R1 = (0x42480000);
    F2 = (((*(float *)((R9 + 0x4))) + 50.0f));
    goto L_8C097AEA;
    L_8C097A78:;
    if ((R11 != 1)) goto L_8C097ABC;
    goto L_8C097A7E;
    L_8C097A7E:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C097AD8;
    L_8C097AD8:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C097ADE;
    L_8C097ABC:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C097AD8;
    L_8C096D3C:;
    goto L_8C097B02;
    L_8C096D7C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R12); }
    t345 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((*(int *)(((int)stk + 40))), R5, R6, R7, *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 10.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    t347 = ((int (*)(int, Stk3))(sprPutAt))((R13 + 0x50), *(Stk3 *)(R12));
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 57.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R12); }
    t349 = ((int (*)(int, Stk3))(sprPutAt))((0xA0 + R13), *(Stk3 *)(R12));
    if (((*(int *)(((int)stk + 44))) == 0)) goto L_8C096E3A;
    goto L_8C096DD2;
    L_8C096DD2:;
    *(unsigned int *)((R13 + 0x4D8)) = R8;
    if ((R11 != 0)) goto L_8C096DF2;
    goto L_8C096DDA;
    L_8C096DDA:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t353 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x4B0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C096EE4;
    L_8C096EE4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R9); }
    R0 = ((((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x690 + R13), R5, R6, R7, *(Stk3 *)(R9))));
    goto L_8C097B02;
    L_8C096DF2:;
    if ((R11 != 1)) goto L_8C096E16;
    goto L_8C096DF8;
    L_8C096DF8:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C096E32;
    L_8C096E32:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C096EE4;
    L_8C096E16:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C096E32;
    L_8C096E3A:;
    if ((R11 != 0)) goto L_8C096E70;
    goto L_8C096E3E;
    L_8C096E3E:;
    *(unsigned int *)(((0x4B0 + R13) + 0x28)) = 0x8000;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 67.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    t367 = ((int (*)(int, int, int, int, Stk3))(sprPutAt))((0x4B0 + R13), R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C096ED6;
    L_8C096ED6:;
    *(float *)((R9 + 0x4)) = ((*(float *)((R9 + 0x4))) + 50.0f);
    R1 = (0x42480000);
    goto L_8C096EE4;
    L_8C096E70:;
    if ((R11 != 1)) goto L_8C096EB4;
    goto L_8C096E76;
    L_8C096E76:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F14);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x0);
    goto L_8C096ED0;
    L_8C096ED0:;
    decoWaveDraw(R4, R5, R6, R7, *(Stk3 *)(R14));
    goto L_8C096ED6;
    L_8C096EB4:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F12);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F13);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(R14); }
    R4 = (0x1);
    goto L_8C096ED0;
}
