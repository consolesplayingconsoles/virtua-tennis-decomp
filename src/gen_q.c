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


