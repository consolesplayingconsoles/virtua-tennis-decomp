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


