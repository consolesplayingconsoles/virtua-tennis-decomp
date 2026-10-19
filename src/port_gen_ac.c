/* Ported from crazy-taxi-decomp (src/gen_ac.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int Drv_Init(void);
int Drv_StartAction(int, int, int);
int ExecArrow(int, float);
float FUN_0c0217b4(int, float, float);
float FUN_0c02187a(float);
int FUN_0c03006a(int, int);
int FUN_0c030914(void);
int FUN_0c03b674(int);
int FUN_0c03bf42(int);
int FUN_0c03bf76(int);
int FUN_0c040b98(int);
int FUN_0c041016(int, int);
int FUN_0c0418b8(int);
int FUN_0c04d1ac(int);
int FUN_0c0577dc(void);
int FUN_0c05ecae(int);
int FUN_0c060dfc(void);
int FUN_0c071104(int);
int FUN_0c0713d8(int);
int FUN_0c071a7c(int, int);
int FUN_0c072e36(void);
int FUN_0c077210(int, int);
int FUN_0c0813e0(int, int, int);
int FcvStoreBuffer(int, int, float);
int GetRotVec(int);
int InitArrow(int, int, int);
int IsBoyFriend(int, int);
int KillColliObj(int);
int PcarInit(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int SetCameraPosVelocity(int);
int SetObjFly(int);
int Sound_Init(int);
int Sound_Request(int, int);
int Start_Fog(int);
int courseCarType(int, int, int, int);
int courseStatusGet(int, int, int, int);
int frameFlip(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetGame(void);
int gdc_StopStreamSongAll(void);
float getNearLineIndex(int, int, int, int, int);
int humanDraw(int, int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int, int, int, int);
int kmSetVertexRenderState(int);
int kmUnloadDevice(void);
int loadCity(int, int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int nlCloseEvent(int);
int nlCommonTextureClearTextureIndex(int, int, int);
float nlCos(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlLineBlendFunc(int, int, int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlMalloc(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushMatrix(int);
int nlRand(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int, int);
int pfSize(float, float);
int psgFaceTaxi(int);
int psgPutShadow(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int rinRandomSeed(int);
int setObjGroupOpen(int);
int setObjPlace(int, int);
int set_event(int, int);
int stopingCarSpawn(int, int);


float nlSec(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0x4000) {
        if ((unsigned short)a4 == 0xC000) {
            return 3.40282347e+38f;
        }
        t0 = nlCos((unsigned short)a4);
        return (1.0f / t0);
    }
    return 3.40282347e+38f;
}
