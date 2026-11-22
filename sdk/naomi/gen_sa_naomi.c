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


float nlLog(float f4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    if (!(0.0f > f4) && (f4 != 0.0f)) {
        u0 = *(float *)0x8C0ED208;
        u1 = f4;
        u2 = 0.0f;
        if (!((1.0f + 1.0f) > f4)) {
            u3 = f4;
            u4 = 0.0f;
            for (;;) {
                u3 = (u3 / (1.0f + 1.0f));
                u4 = (u4 + u0);
                if ((1.0f + 1.0f) > u3) {
                    break;
                }
            }
            u1 = u3;
            u2 = u4;
        }
        u3 = u1;
        u4 = u2;
        if (1.0f > u1) {
            u5 = u1;
            u1 = u2;
            for (;;) {
                u5 = (u5 * (1.0f + 1.0f));
                u1 = (u1 - u0);
                if (!(1.0f > u5)) {
                    break;
                }
            }
            u3 = u5;
            u4 = u1;
        }
        t0 = 0x1;
        u0 = (((u3 + (-1.0f)) / (u3 + 1.0f)) * (1.0f + 1.0f));
        u1 = u4;
        for (;;) {
            u2 = (((u3 + (-1.0f)) / (u3 + 1.0f)) * ((u3 + (-1.0f)) / (u3 + 1.0f)));
            u4 = u0;
            u0 = (u0 * u2);
            u2 = u1;
            u1 = (u1 + (u4 / (float)t0));
            t0 = (t0 + 0x2);
            if (u1 == u2) {
                break;
            }
        }
        return u1;
    }
    return 0.0f;
}


