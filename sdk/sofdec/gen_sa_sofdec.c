/* Straight-line functions with calls and guards (batch gen_sa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int abs(int);
int adxb_DecodeInfoAiffSub(int, int, int, int, int);
int ballInit(int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int close_file_handle(int);
int cpuAimPointSet(int, int, float, float);
float cpuLineXAtZ(Stk3, Stk3, float);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int, int, int);
int memcmp(int, int, int);
int miniBallObjSpawn(void);
int miniBowlingScore(void);
int miniLaunchBall(void);
int miniMessageSpawn(int);
int mpdrv_memset_l(int, int, int);
int nlArcTan2(int, int, float, float);
int nlLocate(int, int);
int nlRand(void);
float nlRandom(void);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int serveNextPoint(void);
int set_vmstime(int, int);
Stk3 vecMake(float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int cpuDblAimAddLv16(int a4, int a5);
int miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int cpuReachRange(int a4, int a5, float f4, float f5, float f6);
int cpuSglAimLv17(int a4, int a5, int a6, float f4, float f5);
int kmyRegisterBGPlane(int a4);
int vmsfs_fclose(int a4, int a5);
int vmsfs_xcreate(int a4, int a5, int a6, int a7);
int vmsfs_fcreate(int a4, int a5, int a6, int a7);
int ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int check_caps(int a4);
int ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
float nlLog(float f4);
int ADX_DecodeInfoExADPCM2(int a4, int a5, int a6);
int make_header(int a4, int a5);
int _rsfts(int a4, int a5, int a6);
int mpdrv_clear_deviceinfo(int a4);
int fmMngNum2Bit(int a4, int a5, int a6);
int _lsfts(int a4, int a5, int a6);
int kmiInitVertexBufferDesc(int a4);
int angDiff(int a4, int a5);
int ndbKeyEqual(int a4, int a5);
int rankNameMatch(int a4, int a5, int a6, int a7);
int ADXB_CheckAiff(int a4);
int ADXB_CheckWav(int a4);
int ADXB_CheckAu(int a4);
int gdFsCheckMedia(int a4);
int unlockTestW2(int a4);
int resTitleLoadInit(void);
int selSlot0FlagSet(void);
float emotRetOne(void);


int ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    register int t0;

    if ((int)a5 < (int)0x10) {
        return 0xFFFFFFFF;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
        return 0xFFFFFFFE;
    }
    t0 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFFFFFF00)) + 0x4);
    *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a4 + 0x4)));
    *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a4 + 0x6)));
    *(unsigned char *)((a10 + 0x0)) = (*(signed char *)((a4 + 0x7)));
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8));
    t0 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t0 >> 16) >> 8) | (((int)t0 >> 8) & 0xFF00)) | ((t0 << 8) & 0xFF0000)) | ((t0 << 16) << 8));
    *(unsigned int *)((a13 + 0x0)) = ((int)((int)((((*(signed char *)((a9 + 0x0))) - 2) << 2) << 1) / (int)(*(signed char *)((a8 + 0x0)))));
    return 0x0;
}


int ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int stk[10];
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t12;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 32)) = a7;
    if ((int)a5 < (int)0x1000) {
        *(unsigned short *)(((*(int *)(((int)stk + 28))) + 0x0)) = 0x0;
        return 0xFFFFFFFF;
    }
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0xC);
    t2 = adxb_DecodeInfoAiffSub((*(int *)(((int)stk + 24))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 24));
        *(unsigned short *)(((*(int *)(((int)stk + 28))) + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return 0xFFFFFFFF;
        }
        *(unsigned int *)((a11 + 0x0)) = (*(int *)(((int)stk + 8)));
        *(unsigned char *)((a10 + 0x0)) = (*(int *)(((int)stk + 12)));
        *(unsigned char *)((a8 + 0x0)) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)((a12 + 0x0)) = (*(int *)(((int)stk + 20)));
        *(unsigned char *)(((*(int *)(((int)stk + 32))) + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int ADX_DecodeInfoExADPCM2(int a4, int a5, int a6)
{
    register int t0;

    if ((int)a5 >= (int)0x12) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
            return 0xFFFFFFFE;
        }
        t0 = *(short *)((a4 + 0x2));
        if ((int)((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFF00)) < (int)0xE) {
            return 0xFFFFFFFF;
        }
        t0 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a6 + 0x0)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFFFFFF00));
        return 0x0;
    }
    return 0xFFFFFFFF;
}


int ADXB_CheckAiff(int a4)
{
    register int t0;

    t0 = memcmp(a4, 0x8C20B974, 0x4);
    if (t0 == 0) {
        t0 = memcmp((a4 + 0x8), 0x8C20B97C, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckWav(int a4)
{
    register int t0;

    t0 = memcmp(a4, 0x8C20B998, 0x4);
    if (t0 == 0) {
        t0 = memcmp((a4 + 0x8), 0x8C20B9A8, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int ADXB_CheckAu(int a4)
{
    register int t0;

    t0 = memcmp(a4, 0x8C20B984, 0x4);
    if (t0 != 0) {
        t0 = memcmp(a4, 0x8C20B98C, 0x4);
        if (t0 == 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}


