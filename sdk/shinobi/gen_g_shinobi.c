/* Straight-line functions with calls and guards (batch gen_g): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Pause(int, int);
int ADXT_Stop(int);
int motionBackup(void);
int motionSetSpeed(int, float);
int sprTexFree(int);
int stageLoadInit(int);
int emotKeyCopy(int, int, int);
int nlSetCommonTextureOffset(int);
int nlObjPutFreeTextureOnce(void);
int kmFreeTexture(int);
int kmiWriteRegister(int, int);
int mpdrv_memset_l(int, int, int);
int nlCommonTextureClearTextureIndex(int);
int nlObjPutLoadTexture(int, int);
int nlScaleVector(int, int, float);
int nlSpriteFreeTextureOnce(void);


int syG2DmaResume(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0x8C20CA24;
    t2 = *(int *)((t1 + 0x0));
    *(unsigned int *)((((((t0 << 2) << 2) << 1) + t2) + 0x1C)) = 0x0;
    return 0x0;
}
