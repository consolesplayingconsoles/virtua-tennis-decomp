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


int kmyRegisterBGPlane(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)0x8C470D30 = ((t1 & 0xFFC30000) | ((t0 & 0xF) << 22));
    *(unsigned int *)0x8C470D34 = (*(int *)((a4 + 0x8)));
    *(unsigned int *)0x8C470D38 = (*(int *)((a4 + 0xC)));
    *(unsigned int *)0x8C470D3C = (*(int *)((a4 + 0x10)));
    *(unsigned int *)0x8C470D40 = (*(int *)((a4 + 0x14)));
    *(unsigned int *)0x8C470D44 = (*(int *)(((a4 + 0x18) + 0x0)));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        *(unsigned int *)0x8C470D48 = (*(int *)((a4 + 0x1C)));
        t2 = 0x7;
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            *(unsigned int *)0x8C470D4C = (*(int *)((a4 + 0x20)));
            t2 = 0x8;
        }
        *(unsigned int *)((((t2 << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x24)));
        t3 = (t2 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t2 + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x28)));
            t3 = ((t2 + 0x1) + 0x1);
        }
        t2 = t3;
    } else {
        *(unsigned int *)0x8C470D48 = (*(int *)((a4 + 0x24)));
        t2 = 0x7;
    }
    *(unsigned int *)((((t2 << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x2C)));
    *(unsigned int *)(((((t2 + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x30)));
    *(unsigned int *)((((((t2 + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)(((a4 + 0x34) + 0x0)));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        *(unsigned int *)(((((((t2 + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x38)));
        t3 = ((((t2 + 0x1) + 0x1) + 0x1) + 0x1);
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            *(unsigned int *)((((((((t2 + 0x1) + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x3C)));
            t3 = (((((t2 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        *(unsigned int *)((((t3 << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x40)));
        t4 = (t3 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t3 + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x44)));
            t4 = ((t3 + 0x1) + 0x1);
        }
        t3 = t4;
    } else {
        *(unsigned int *)(((((((t2 + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x40)));
        t3 = ((((t2 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    *(unsigned int *)((((t3 << 2) + 0x8C470D30) + 0x0)) = (*(int *)(((a4 + 0x48) + 0x0)));
    *(unsigned int *)(((((t3 + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)(((a4 + 0x4C) + 0x0)));
    *(unsigned int *)((((((t3 + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)(((a4 + 0x50) + 0x0)));
    if ((((unsigned int)((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) >> 1) & 0x1) != 0) {
        *(unsigned int *)(((((((t3 + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)(((a4 + 0x54) + 0x0)));
        t2 = ((((t3 + 0x1) + 0x1) + 0x1) + 0x1);
        if ((((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 22) & 0x1) == 0) {
            *(unsigned int *)((((((((t3 + 0x1) + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x58)));
            t2 = (((((t3 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
        }
        *(unsigned int *)((((t2 << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x5C)));
        t4 = (t2 + 0x1);
        if ((((unsigned int)((unsigned int)((t1 & 0xFFC30000) | ((t0 & 0xF) << 22)) >> 16) >> 8) & 0x1) != 0) {
            *(unsigned int *)(((((t2 + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x60)));
            t4 = ((t2 + 0x1) + 0x1);
        }
        t0 = t4;
    } else {
        *(unsigned int *)(((((((t3 + 0x1) + 0x1) + 0x1) << 2) + 0x8C470D30) + 0x0)) = (*(int *)((a4 + 0x5C)));
        t0 = ((((t3 + 0x1) + 0x1) + 0x1) + 0x1);
    }
    *(unsigned int *)0x8C470D2C = (t0 << 2);
    return 0x0;
}


int kmiInitVertexBufferDesc(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x24));
    *(unsigned int *)0x8C45F004 = 0x0;
    *(unsigned int *)0x8C45F000 = 0x0;
    *(unsigned int *)0x8C45EFFC = 0x0;
    *(unsigned int *)0x8C45F008 = 0x0;
    *(unsigned int *)0x8C45EFF8 = 0x0;
    *(unsigned int *)0x8C45F010 = 0x0;
    *(unsigned int *)((t0 + 0x0)) = 0x8C45F074;
    *(unsigned int *)((t0 + 0x10)) = 0x8C45F074;
    *(unsigned int *)((t0 + 0x4)) = 0x8C45F020;
    *(unsigned int *)((t0 + 0x8)) = 0x8C45EFF8;
    *(unsigned int *)((t0 + 0xC)) = 0x8C45F114;
    *(unsigned int *)((t0 + 0x18)) = (a4 + 0x38);
    return 0x0;
}


