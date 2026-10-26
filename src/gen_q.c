/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int shadowVolBuildPoint(int);
int nl_action_PixelClipping(void);
int kmRender(int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(void);
int kmEndScene(int);
int kmSetFogVertexColor(void);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
extern int nlPushMatrix();
float nlTan(int);
int nlWaitVSync(void);
int kmSetBackGroundPlane(int a4, int a5);
int shadowVolPutPoint(int a4, float f4, float f5, float f6, float f7);
int nlSetFogVertexColor(int a4);
float nlCot(int a4);
float nlRoundOff(float f4);
int nlsndCheckPackReloadError(int a4, int a5);
int kmtex_TextureSize_VQ(int a4);

int nlWaitVSync(void)
{
    int t3;
    int t4;
    int t9;
    int t10;
    int t16;
    int t17;
    int t19;
    int t18;

    kmEndPass();
    nl_action_PixelClipping();
    kmRender(0x0);
    t3 = *(int *)0x8C1DC8A0;
    if (t3 != 0) {
        t4 = ((int (*)(void))(t3))();
    }
    kmEndScene(0x8C42420C);
    t9 = *(int *)0x8C1DC8A4;
    if (t9 != 0) {
        t10 = ((int (*)(void))(t9))();
    }
    kmBeginScene(0x8C42420C);
    kmBeginPass(0x8C454FC0);
    t16 = *(int *)0x8C454FC0;
    *(unsigned int *)0x8C42445C = t16;
    t17 = *(int *)0x8C1DC8A8;
    t19 = 0x8C1DC8A8;
    if (t17 != 0) {
        t18 = ((int (*)(void))(t17))();
        t19 = t18;
    }
    return t19;
}

int kmSetBackGroundPlane(int a4, int a5)
{
    int t0;
    int t1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)0x8C471E18;
    *(unsigned int *)0x8C471E18 = (t0 | 0x1);
    t1 = *(int *)((a4 + 0x0));
    u2 = *(float *)((t1 + 0xC));
    *(float *)0x8C471E28 = u2;
    t3 = *(int *)((a4 + 0x4));
    t4 = *(int *)((a4 + 0x8));
    t5 = *(int *)(((a5 << 2) + 0x8C20C6D8));
    t6 = *(int *)((a4 + 0x0));
    t7 = ((int (*)(int, int, int, int))(t5))(0x8C4607EC, t6, t3, t4);
    t8 = 0x0;
    for (;;) {
        t9 = *(int *)(((0x8C471E20 + t8) + 0x0));
        t10 = (0x8C471E20 + t8);
        t8 = (t8 + 0x4);
        *(unsigned int *)((t10 + 0x0)) = (t9 | 0x1);
        if ((unsigned int)t8 >= (unsigned int)0x8) {
            break;
        }
    }
    t11 = *(int *)0x8C471E18;
    *(unsigned int *)0x8C471E18 = (t11 & 0xFFFFFFFE);
    return t7;
}

int shadowVolPutPoint(int a4, float f4, float f5, float f6, float f7)
{
    int t0;
    int t1;

    t0 = ((int (*)(int, float, float, float, float))(nlPushMatrix))(0x0, f4, f5, f6, f7);
    *(float *)0x8C2859D8 = f4;
    *(float *)0x8C2859E8 = f5;
    *(float *)0x8C2859EC = f6;
    *(float *)0x8C2859F0 = f7;
    t1 = ((int (*)(int))(nlPushMatrix))(0x0);
    nlInvertMatrix(0x0);
    nlCalcPoint(0x8C2859E8, 0x8C2859E8);
    nlPopMatrix(0x1);
    shadowVolBuildPoint(a4);
    return nlPopMatrix(0x1);
}


float nlCot(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = nlTan((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

float nlRoundOff(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                return (float)(int)(f4 < 0.0f ? -f4 : f4);
            }
            return (float)(-(int)(f4 < 0.0f ? -f4 : f4));
        }
        return f4;
    }
    return f4;
}


