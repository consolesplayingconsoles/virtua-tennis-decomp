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


int kmyWriteFogTable(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C4709EC;
    if ((t0 & 4) != 0) {
        t1 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t1 & 0xFFFFFFFB);
        t2 = 0x200;
        t3 = 0x0;
        do {
            t4 = *(int *)((t3 + 0x8C4707EC));
            kmiWriteRegister(t2, t4);
            t3 = (t3 + 0x4);
            t2 = (t2 + 0x4);
        } while ((unsigned int)t3 < (unsigned int)0x200);
    }
    return 0x78;
}

int kmyiInitializeNativeBuffer(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)((a4 + 0x88));
    t1 = *(int *)0x8C45EE80;
    *(unsigned int *)((t0 + 0x28)) = t1;
    t2 = *(int *)((a4 + 0x88));
    t3 = *(int *)0x8C45EE84;
    *(unsigned int *)((t2 + 0x24)) = t3;
    *(unsigned int *)((a4 + 0x1C)) = a6;
    *(unsigned int *)((a4 + 0x18)) = a5;
    t4 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t4 + 0x1C)) = a7;
    if (a7 != 0) {
        t5 = *(int *)((a4 + 0x88));
        t6 = *(int *)((t5 + 0x24));
        *(unsigned int *)((t5 + 0x24)) = (t6 | 0x10000);
    }
    return 0x0;
}


