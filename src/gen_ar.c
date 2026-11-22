/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXPD_GetStat(int);
int resetBackColorZ(int, int, int, float);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int _rnd(int, int);
int bcd2bin(int);
int bcdtime2fad(int);
int buIsFormat(int);
int cameraCalcPoint(int, int, int, int, int, Stk3);
float cpuAimDistRate(int, int, int, int, int, float, float);
int cpuDblSignalPut(int, int, int, int, float);
int cpuShotRange(int, int, int, int, int);
int crcchk(int, int, int, int);
int eepromGetMatch(void);
int fileLoadSync(int, int, int);
int gdFsCreateDirhn(int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetGdDcf(void);
extern int get_fat();
int get_vmstime(int, int);
int kmFreeTexture(int);
int kmyMemCopy(int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memmove(int, int, int);
int memset(int, int, int);
int motionSet(int, int, int, int, int, int, float);
int nlArcTan(float);
int nlCalcPoint(int, int);
extern int nlCommonTextureClearTextureIndex();
int nlFreePalette(int, int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSpriteClearSpriteIndex(int);
int nlSpriteLoadTextureOnce(int, int, int);
int nlTranslate(float, float, float);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndSeqRequest(int);
int search_fat(int, int);
int search_fat_dir(int, int);
int search_fat_free_xross(int);
int serveGetServer(void);
int set_fat(int, int, int);
int vecAnglesTo(int, int, Stk3);
int vmsfs_diskfree(int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat(int);
int write_sys(int);
int write_dir(int a4, int a5, int a6, int a7);
int nlsndStreamStop(int a4);
int crowdInitAlt(void);
int kmytex_GetSmallVQprofile(int a4, int a5);
float nlObjPutCheapEnvMap(int a4);
int nldispstripTexOfsSub(int a4, int a5);
int _power(int a4, int a5, int a6);
float cpuSglAimScore(int a4, int a5);
float cpuSglAimScore2(int a4, int a5);
int FBfree(int a4, int a5);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int nlSpriteFreeTextureOnce_Sub(int a4, int a5, int a6, int a7);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int gdDecSubcode(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAiff16(int a4, int a5, int a6, int a7);
int miniPlayerInput(int a4);
float cameraFovForSize(float f4);
int cpuDblSignalDraw(int a4, int a5, int a6, int a7, float f4);
int initSprLoad(float f4);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_getinfo(int a4, int a5);
void matchCheckTiebreak(int a4, int a5, int a6, int a7);


int crowdInitAlt(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t15;
    int t20;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1E0)) = t0;
        t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0xF);
        }
        *(unsigned int *)(((0x1E4 + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = t1;
        t4 = (int)((int)(nlRand()) / (int)0x3E8);
        t5 = ((~(((~t4) + 0x1) & 0xF)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0xF);
        }
        *(unsigned int *)(((0x1EC + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = t5;
        *(unsigned int *)(((0x1E8 + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0)) = ((int)((int)((int)((int)((int)((int)(nlRand()) / (int)0x64)) % (int)0xF)) % (int)(*(int *)((((((*(int *)(((0x1EC + ((t0 * 0x1F4) + 0x8C344A08)) + 0x0))) << 2) << 2) + 0x8C188EC4) + 0x4)))));
        *(unsigned int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1F0)) = 0x64;
        t15 = *(int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1E4));
        t20 = motionSet(((t0 * 0x1F4) + 0x8C344A08), (*(int *)((((((*(int *)((((t0 * 0x1F4) + 0x8C344A08) + 0x1EC))) << 2) << 2) + 0x8C188EC4) + 0x0))), 0x1, 0x12764C, ((*(int *)((((((t15 << 1) + t15) << 2) << 2) + 0x8C11F530)))), ((*(int *)0x8C2873D0)), 1.0f);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2D) {
            break;
        }
    }
    return t20;
}


int miniPlayerInput(int a4)
{
    int t1;
    int t12;
    int t17;
    int t26;
    int t28;
    float u29;
    int t34;
    int t39;
    int t40;
    int t46;
    int t54;
    int stk[1];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R9;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    R4 = a4;
    L_8C037600:;
    t1 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    R0 = (t1);
    R5 = (0x8C2FBEF0);
    R6 = (0x0);
    if ((t1 == 3)) goto L_8C037624;
    goto L_8C03760C;
    L_8C03760C:;
    if ((R0 == 4)) goto L_8C0376FC;
    goto L_8C037610;
    L_8C037610:;
    if ((R0 == 0)) goto L_8C037640;
    goto L_8C037614;
    L_8C037614:;
    if ((R0 == 5)) goto L_8C037646;
    goto L_8C037618;
    L_8C037618:;
    if ((R0 == 6)) goto L_8C037640;
    goto L_8C03761C;
    L_8C03761C:;
    if ((R0 == 7)) goto L_8C0376FC;
    goto L_8C037620;
    L_8C037620:;
    goto L_8C037718;
    L_8C037718:;
    return R0;
    L_8C0376FC:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    goto L_8C037700;
    L_8C037700:;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    t12 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t12);
    if ((t12 != 3)) goto L_8C037718;
    goto L_8C03770C;
    L_8C03770C:;
    *(unsigned short *)((R4 + 0xD44)) = 0x3;
    *(unsigned short *)((R4 + 0xD46)) = 0x20;
    R0 = (0xD46);
    goto L_8C037718;
    L_8C037640:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    goto L_8C037700;
    L_8C037646:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    t17 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t17);
    if ((t17 != 3)) goto L_8C03765C;
    goto L_8C037656;
    L_8C037656:;
    *(unsigned short *)((R4 + 0xD44)) = 0x1;
    R0 = (0xD44);
    goto L_8C03765C;
    L_8C03765C:;
    R6 = (0x8C23D204);
    R7 = (0x8C10B980);
    F4 = (1.0f);
    if (((*(float *)0x8C23D204) != 1.0f)) goto L_8C03769E;
    goto L_8C037668;
    L_8C037668:;
    t26 = *(int *)0x8C2FBEF0;
    t28 = *(int *)((t26 + 0x24));
    u29 = *(float *)(((((t28 << 2) + t28) << 2) + 0x8C10B984));
    R0 = (0x8C10B984);
    F1 = ((u29 + 97.0f));
    if (((float)(*(int *)((t26 + 0x18))) != (u29 + 97.0f))) goto L_8C03769E;
    goto L_8C03768A;
    L_8C03768A:;
    t34 = *(int *)(((*(int *)((R5 + 0x0))) + 0x24));
    *(unsigned short *)((R4 + 0xD44)) = (*(int *)((((((t34 << 2) + t34) << 2) + R7) + 0x8)));
    R0 = (0xD44);
    goto L_8C03769E;
    L_8C03769E:;
    if ((!((*(float *)((R6 + 0x0))) > F4))) goto L_8C037718;
    goto L_8C0376A4;
    L_8C0376A4:;
    t39 = *(int *)0x8C2FBEF0;
    t40 = *(int *)((t39 + 0x24));
    R0 = (0x8C10B984);
    if (((*(int *)((t39 + 0x18))) != ((int)((*(float *)(((((t40 << 2) + t40) << 2) + 0x8C10B984))) / 1.20000005f) + 0x52))) goto L_8C037718;
    goto L_8C0376CA;
    L_8C0376CA:;
    t46 = *(int *)(((*(int *)((R5 + 0x0))) + 0x24));
    *(unsigned short *)((R4 + 0xD44)) = (*(int *)(((R7 + (((t46 << 2) + t46) << 2)) + 0x8)));
    R0 = (0xD44);
    goto L_8C037718;
    L_8C037624:;
    *(unsigned short *)((R4 + 0xD44)) = R6;
    *(unsigned short *)((R4 + 0xD46)) = R6;
    R0 = (0xD46);
    if (((int)(*(int *)(((*(int *)((R5 + 0x0))) + 0x10))) <= 0)) goto L_8C037718;
    goto L_8C037634;
    L_8C037634:;
    t54 = *(int *)(((*(int *)((R5 + 0x0))) + 0x18));
    R0 = (t54);
    if ((t54 == 3)) goto L_8C03770C;
    goto L_8C03763C;
    L_8C03763C:;
    goto L_8C037718;
}


int initSprLoad(float f4)
{
    float u4;
    float u5;

    resetBackColorZ(0xFFFFFF, 0xFFFFFF, 0xFFFFFF, f4);
    fileLoadSync(0x8CA80000, 0x8C124DFC, 0x0);
    nlSetCommonTextureOffset(0x0);
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8A);
    *(unsigned int *)0x8C37EA2C = 0x8A;
    *(unsigned int *)0x8C37EA54 = 0x0;
    u4 = *(float *)0x8C0C724C;
    *(float *)0x8C37EA30 = u4;
    u5 = *(float *)0x8C0C7250;
    *(float *)0x8C37EA34 = u5;
    *(float *)0x8C37EA38 = (*(float *)0x8C0C7254);
    *(float *)0x8C37EA44 = 0.0f;
    *(float *)0x8C37EA48 = 0.0f;
    *(float *)0x8C37EA4C = 1.0f;
    *(float *)0x8C37EA50 = 1.0f;
    *(float *)0x8C37EA58 = 1.0f;
    *(float *)0x8C37EA3C = 1.0f;
    *(float *)0x8C37EA40 = 1.0f;
    *(unsigned int *)0x8C37EA5C = 0xFFFFFFFF;
    *(unsigned int *)0x8C37EA60 = 0xA;
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8B);
    *(unsigned int *)0x8C37E9DC = 0x8B;
    *(unsigned int *)0x8C37EA04 = 0x0;
    *(float *)0x8C37E9E0 = u4;
    *(float *)0x8C37E9E4 = u5;
    *(float *)0x8C37E9E8 = (*(float *)0x8C0C7254);
    *(float *)0x8C37E9F4 = 0.0f;
    *(float *)0x8C37E9F8 = 0.0f;
    *(float *)0x8C37E9FC = 1.0f;
    *(float *)0x8C37EA00 = 1.0f;
    *(float *)0x8C37EA08 = 1.0f;
    *(float *)0x8C37E9EC = 1.0f;
    *(float *)0x8C37E9F0 = 1.0f;
    *(unsigned int *)0x8C37EA0C = 0xFFFFFFFF;
    *(unsigned int *)0x8C37EA10 = 0xA;
    nlSpriteLoadTextureOnce(0x8C18281C, 0x0, 0x8C);
    *(unsigned int *)0x8C37E98C = 0x8C;
    *(unsigned int *)0x8C37E9B4 = 0x0;
    *(float *)0x8C37E990 = u4;
    *(float *)0x8C37E994 = u5;
    *(float *)0x8C37E998 = (*(float *)0x8C0C7254);
    *(float *)0x8C37E9A4 = 0.0f;
    *(float *)0x8C37E9A8 = 0.0f;
    *(float *)0x8C37E9AC = 1.0f;
    *(float *)0x8C37E9B0 = 1.0f;
    *(float *)0x8C37E9B8 = 1.0f;
    *(float *)0x8C37E99C = 1.0f;
    *(float *)0x8C37E9A0 = 1.0f;
    *(unsigned int *)0x8C37E9BC = 0xFFFFFFFF;
    *(unsigned int *)0x8C37E9C0 = 0xA;
    return 0x14;
}


void matchCheckTiebreak(int a4, int a5, int a6, int a7)
{
    int t14;
    int t24;
    int t27;
    int t32;
    int t25;
    float u44;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
    } else {
        if ((*(int *)0x8C287D5C) == 0) {
            *(unsigned int *)0x8C287C64 = (unsigned char)(eepromGetMatch());
        } else {
            *(unsigned int *)0x8C287C64 = (*(int *)0x8C287C6C);
        }
        if ((*(int *)0x8C287C70) != 0) {
            t14 = *(int *)0x8C287C6C;
            if ((int)(*(int *)0x8C287B00) >= (int)(t14 - 1)) {
                if ((int)(*(int *)0x8C287B04) >= (int)(t14 - 1)) {
                    *(unsigned int *)0x8C287C64 = (t14 + 0x1);
                }
            }
            t24 = *(int *)0x8C287C6C;
            if (((*(int *)0x8C287B00) == t24) && (t25 = *(int *)0x8C287B04, t25 == t24)) {
                *(unsigned int *)0x8C287C64 = (t24 + 0x1);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x4000);
                *(unsigned int *)0x8C1D4A40 = 0x1;
                t27 = serveGetServer();
                if (((int)t27 >= 0) && ((int)t27 <= (int)0x3)) {
                    *(unsigned int *)(((t27 << 2) + 0x8C38BA84)) = 0x0;
                }
                t32 = *(int *)0x8C185408;
                if ((*(int *)0x8C287ADC) == 2) {
                    if (t32 == 1) {
                        *(unsigned int *)0x8C287D74 = 0x8C1019A4;
                    } else {
                        *(unsigned int *)0x8C287D74 = 0x8C101AC4;
                    }
                    *(unsigned int *)0x8C287D78 = 0x8C102218;
                    u44 = 41.1500015f;
                } else {
                    if (((t32 - 1) & 0x1) == 0) {
                        *(unsigned int *)0x8C287D74 = 0x8C101D64;
                    } else {
                        *(unsigned int *)0x8C287D74 = 0x8C101FA4;
                    }
                    *(unsigned int *)0x8C287D78 = 0x8C102250;
                    u44 = 54.8499985f;
                }
                *(float *)0x8C287B40 = u44;
                *(unsigned int *)0x8C287B30 = (*(int *)(((*(int *)0x8C287D78) + 0x0)));
                *(unsigned int *)0x8C287B38 = 0x1;
                *(unsigned int *)0x8C287B34 = 0x1;
            }
        }
    }
}
