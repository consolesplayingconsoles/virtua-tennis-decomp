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

int cpuDblAimAddLv16(int a4, int a5)
{
    int stk[34];

    int R9;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    v0_5 = a4;
    v0_7 = a5;
    v0_8 = *(int *)((v0_5 + 0xB5C));
    *(unsigned int *)(((int)stk + 52)) = ((((v0_8 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    w0_0 = *(float *)((((((v0_8 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    v0_6 = (0xAF0);
    v0_0 = (v0_7);
    v0_2 = (((v0_8 * 0x160) + 0x8C2FC69C));
    v0_4 = (((((v0_8 + 0x1) & 0x3) * 0xD78) + 0x8C287D84));
    v0_1 = (v0_5);
    v0_3 = (((((v0_8 + 0x3) & 0x3) * 0xD78) + 0x8C287D84));
    v0_5 = (v0_8);
    v0_7 = (0x8C287D84);
    v0_5 = (0xD78);
    v0_5 = (0x3);
    w0_6 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C078CD4;
    w0_3 = (w0_6);
    L_8C078CD8:;
    w0_0 = *(float *)((v0_3 + v0_6));
    w0_5 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C078CE4;
    w0_7 = (w0_5);
    L_8C078CE8:;
    if ((!(w0_3 > w0_7))) goto L_8C078CF2;
    v0_5 = v0_4;
    v0_6 = v0_4;
    v0_4 = (v0_3);
    v0_3 = v0_5;
    v0_5 = v0_6;
    L_8C078CF2:;
    w0_1 = *(float *)((v0_1 + 0xB9C));
    R9 = ((((int)stk + 52) + 0x18));
    w0_0 = (54.8499985f);
    w0_3 = (0.0f);
    w0_5 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C078D08;
    v0_6 = (0x1);
    L_8C078D12:;
    *(float *)((R9 + 0x0)) = (((float)v0_6 * w0_0) - w0_5);
    *(float *)((R9 + 0x4)) = 0.0f;
    w0_2 = *(float *)((v0_1 + 0xB00));
    w0_1 = (118.849998f);
    w0_3 = (0.0f);
    w0_5 = (w0_2);
    FPUL_ = (v0_6);
    if ((!(w0_2 > 0.0f))) goto L_8C078D34;
    v0_6 = (0x1);
    L_8C078D3E:;
    *(float *)((R9 + 0x8)) = (((float)v0_6 * w0_1) - (*(float *)((v0_1 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(R9); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + v0_1)); }
    w0_3 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)((v0_4 + 0xAF0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R9); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_1)); }
    w0_2 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)((v0_3 + 0xAF0))));
    w0_6 = *(float *)((v0_1 + 0xB9C));
    v0_5 = (0x8C041C58);
    R9 = (0x100);
    w0_5 = (w0_2);
    w0_4 = (w0_3);
    w0_2 = (w0_2);
    w0_3 = (0.0f);
    w0_5 = (w0_6);
    if ((!(w0_6 > 0.0f))) goto L_8C078DAA;
    v0_5 = (0x1);
    L_8C078DB4:;
    w0_7 = *(float *)((v0_4 + 0xAE8));
    w0_3 = (0.0f);
    w0_6 = (w0_7);
    if ((!(w0_7 > 0.0f))) goto L_8C078DC2;
    v0_6 = (0x1);
    L_8C078DEE:;
    if (!((v0_5 != v0_6))) goto L_8C07908E;
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C078E00;
    v0_5 = (0x1);
    goto L_8C078E0A;
    L_8C07908E:;
    w0_6 = *(float *)((v0_4 + 0xAE8));
    v0_6 = (0xAE8);
    w0_3 = (0.0f);
    w0_5 = (w0_6);
    if ((!(w0_6 > 0.0f))) goto L_8C07909C;
    v0_5 = (0x1);
    L_8C0790BE:;
    w0_5 = *(float *)((v0_3 + v0_6));
    w0_3 = (0.0f);
    w0_6 = (w0_5);
    if ((!(w0_5 > 0.0f))) goto L_8C0790CA;
    v0_6 = (0x1);
    L_8C0790D4:;
    if ((v0_5 == v0_6)) goto L_8C0790DC;
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_8 = *(float *)((v0_4 + 0xAE8));
    w0_3 = (0.0f);
    w0_5 = (w0_7);
    w0_6 = ((w0_7 - w0_8));
    if ((!((w0_7 - w0_8) > 0.0f))) goto L_8C079310;
    v0_5 = (0x1);
    L_8C07931A:;
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C079324;
    v0_6 = (0x1);
    L_8C07932E:;
    if (!((v0_5 == v0_6))) goto L_8C0794C8;
    w0_6 = *(float *)((v0_3 + 0xAE8));
    w0_7 = ((w0_5 - w0_6));
    w0_3 = (0.0f);
    if ((!((w0_5 - w0_6) > 0.0f))) goto L_8C079348;
    v0_5 = (0x1);
    goto L_8C079352;
    L_8C0794C8:;
    return v0_0;
    L_8C079352:;
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C07935C;
    v0_7 = (0x1);
    L_8C079376:;
    if ((v0_5 == v0_7)) goto L_8C07937E;
    goto L_8C0794C8;
    L_8C07937E:;
    w0_3 = *(float *)((v0_1 + 0xB9C));
    w0_5 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C07938C;
    w0_3 = (w0_5);
    L_8C079390:;
    if ((w0_3 > 27.4249992f)) goto L_8C07939C;
    goto L_8C0794C8;
    L_8C07939C:;
    v0_6 = *(int *)((v0_4 + 0xB60));
    v0_5 = ((v0_6 & R9));
    if (((v0_6 & R9) == 0)) goto L_8C0793D8;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C0793B8;
    w0_3 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C0793C0:;
    v0_6 = *(short *)((v0_2 + 0x118));
    w0_6 = 13.0f;
    w0_6 = w0_6 + 0.100000001f * (float)v0_6;
    w0_5 = (0.100000001f);
    w0_5 = (w0_3);
    FPUL_ = (v0_6);
    if ((w0_3 > w0_6)) goto L_8C07940E;
    L_8C0793D8:;
    if ((v0_5 != 0)) goto L_8C0794C8;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C0793EE;
    w0_3 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C0793F6:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_4 = 13.0f;
    w0_4 = w0_4 + 0.5f * (float)v0_4;
    w0_5 = (0.5f);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((!(w0_3 > w0_4))) goto L_8C0794C8;
    L_8C07940E:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) == 0)) goto L_8C079460;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C079440;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C079448:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_5 = *(float *)0x8C079558;
    w0_4 = (*(float *)0x8C079554);
    w0_4 = w0_4 + w0_5 * (float)v0_4;
    w0_5 = (w0_5);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((w0_3 > w0_4)) goto L_8C07949A;
    L_8C079460:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) != 0)) goto L_8C0794C8;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C07947A;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C079482:;
    v0_2 = *(short *)((v0_2 + 0x118));
    w0_4 = *(float *)0x8C07955C;
    w0_2 = (*(float *)0x8C079554);
    w0_2 = w0_2 + w0_4 * (float)v0_2;
    w0_5 = (w0_4);
    w0_5 = (w0_3);
    FPUL_ = (v0_2);
    if ((!(w0_3 > w0_2))) goto L_8C0794C8;
    L_8C07949A:;
    w0_4 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (w0_4);
    w0_3 = (0.0f);
    w0_6 = (((*(float *)((v0_1 + 0xB00))) * w0_1));
    if ((!(w0_4 > 0.0f))) goto L_8C0794AE;
    v0_6 = (0x1);
    L_8C0794B8:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    goto L_8C0794C8;
    L_8C0794AE:;
    if ((!(w0_3 > w0_2))) goto L_8C0794B6;
    v0_6 = (0xFFFFFFFF);
    goto L_8C0794B8;
    L_8C0794B6:;
    v0_6 = (0x0);
    goto L_8C0794B8;
    L_8C07947A:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C079482;
    L_8C079440:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C079448;
    L_8C0793EE:;
    w0_3 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C0793F6;
    L_8C0793B8:;
    w0_3 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C0793C0;
    L_8C07938C:;
    w0_3 = ((-w0_5));
    goto L_8C079390;
    L_8C07935C:;
    if ((!(w0_3 > w0_5))) goto L_8C079374;
    v0_7 = (0xFFFFFFFF);
    goto L_8C079376;
    L_8C079374:;
    v0_7 = (0x0);
    goto L_8C079376;
    L_8C079348:;
    if ((!(w0_3 > w0_7))) goto L_8C079350;
    v0_5 = (0xFFFFFFFF);
    goto L_8C079352;
    L_8C079350:;
    v0_5 = (0x0);
    goto L_8C079352;
    L_8C079324:;
    if ((!(w0_3 > w0_5))) goto L_8C07932C;
    v0_6 = (0xFFFFFFFF);
    goto L_8C07932E;
    L_8C07932C:;
    v0_6 = (0x0);
    goto L_8C07932E;
    L_8C079310:;
    if ((!(w0_3 > w0_6))) goto L_8C079318;
    v0_5 = (0xFFFFFFFF);
    goto L_8C07931A;
    L_8C079318:;
    v0_5 = (0x0);
    goto L_8C07931A;
    L_8C0790DC:;
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_8 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
    w0_3 = (0.0f);
    w0_5 = (w0_7);
    w0_6 = ((w0_8 - w0_7));
    if ((!((w0_8 - w0_7) > 0.0f))) goto L_8C0790F2;
    v0_5 = (0x1);
    L_8C0790FC:;
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C079106;
    v0_6 = (0x1);
    L_8C079110:;
    if ((v0_5 != (-v0_6))) goto L_8C07918E;
    w0_6 = *(float *)((v0_1 + 0xB00));
    w0_3 = *(float *)((v0_1 + 0xB9C));
    *(float *)(((int)stk + 68)) = w0_3;
    w0_5 = (0.0f);
    w0_6 = ((w0_6 * 59.4249992f));
    if ((!(w0_3 > 0.0f))) goto L_8C079132;
    v0_6 = (0x1);
    L_8C079140:;
    cpuAimPointSet(v0_0, 0x1, ((float)(-v0_6) * w0_0), w0_6);
    w0_6 = *(float *)((v0_1 + 0xB00));
    w0_3 = *(float *)((v0_1 + 0xB9C));
    *(float *)(((int)stk + 56)) = w0_3;
    v0_0 = ((v0_0 + 0x1));
    w0_5 = (0.0f);
    w0_6 = ((w0_6 * 11.8850002f));
    if ((!(w0_3 > 0.0f))) goto L_8C07916E;
    v0_6 = (0x1);
    L_8C07917C:;
    cpuAimPointSet(v0_0, 0x1, ((float)(-v0_6) * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    L_8C07918E:;
    w0_3 = *(float *)((v0_1 + 0xB9C));
    w0_5 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C0791AC;
    w0_7 = (w0_5);
    L_8C0791B0:;
    if ((w0_7 > 38.3949966f)) goto L_8C0791BC;
    goto L_8C0794C8;
    L_8C0791BC:;
    v0_6 = *(int *)((v0_4 + 0xB60));
    v0_5 = ((v0_6 & R9));
    if (((v0_6 & R9) == 0)) goto L_8C0791F8;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C0791D8;
    w0_7 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C0791E0:;
    v0_6 = *(short *)((v0_2 + 0x118));
    w0_3 = 10.0f;
    w0_3 = w0_3 + 0.100000001f * (float)v0_6;
    w0_5 = (0.100000001f);
    w0_5 = (w0_7);
    FPUL_ = (v0_6);
    if ((w0_7 > w0_3)) goto L_8C079236;
    L_8C0791F8:;
    if ((v0_5 == 0)) goto L_8C079200;
    goto L_8C0794C8;
    L_8C079200:;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C079212;
    w0_3 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C07921A:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_4 = 10.0f;
    w0_4 = w0_4 + 0.5f * (float)v0_4;
    w0_5 = (0.5f);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((w0_3 > w0_4)) goto L_8C079236;
    goto L_8C0794C8;
    L_8C079236:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) == 0)) goto L_8C079270;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C079250;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C079258:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_4 = 10.0f;
    w0_4 = w0_4 + 0.100000001f * (float)v0_4;
    w0_5 = (0.100000001f);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((w0_3 > w0_4)) goto L_8C0792C8;
    L_8C079270:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) == 0)) goto L_8C07927C;
    goto L_8C0794C8;
    L_8C07927C:;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C0792A4;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C0792AC:;
    v0_2 = *(short *)((v0_2 + 0x118));
    w0_2 = 10.0f;
    w0_2 = w0_2 + 0.5f * (float)v0_2;
    w0_5 = (0.5f);
    w0_5 = (w0_3);
    FPUL_ = (v0_2);
    if ((w0_3 > w0_2)) goto L_8C0792C8;
    goto L_8C0794C8;
    L_8C0792C8:;
    w0_4 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (w0_4);
    w0_3 = (0.0f);
    w0_6 = (((*(float *)((v0_1 + 0xB00))) * w0_1));
    if ((!(w0_4 > 0.0f))) goto L_8C0792DC;
    v0_6 = (0x1);
    L_8C0792E6:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    goto L_8C0794C8;
    L_8C0792DC:;
    if ((!(w0_3 > w0_2))) goto L_8C0792E4;
    v0_6 = (0xFFFFFFFF);
    goto L_8C0792E6;
    L_8C0792E4:;
    v0_6 = (0x0);
    goto L_8C0792E6;
    L_8C0792A4:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C0792AC;
    L_8C079250:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C079258;
    L_8C079212:;
    w0_3 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C07921A;
    L_8C0791D8:;
    w0_7 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C0791E0;
    L_8C0791AC:;
    w0_7 = ((-w0_5));
    goto L_8C0791B0;
    L_8C07916E:;
    if ((!(w0_5 > (*(float *)(((int)stk + 56)))))) goto L_8C07917A;
    v0_6 = (0xFFFFFFFF);
    goto L_8C07917C;
    L_8C07917A:;
    v0_6 = (0x0);
    goto L_8C07917C;
    L_8C079132:;
    if ((!(w0_5 > (*(float *)(((int)stk + 68)))))) goto L_8C07913E;
    v0_6 = (0xFFFFFFFF);
    goto L_8C079140;
    L_8C07913E:;
    v0_6 = (0x0);
    goto L_8C079140;
    L_8C079106:;
    if ((!(w0_3 > w0_5))) goto L_8C07910E;
    v0_6 = (0xFFFFFFFF);
    goto L_8C079110;
    L_8C07910E:;
    v0_6 = (0x0);
    goto L_8C079110;
    L_8C0790F2:;
    if ((!(w0_3 > w0_6))) goto L_8C0790FA;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0790FC;
    L_8C0790FA:;
    v0_5 = (0x0);
    goto L_8C0790FC;
    L_8C0790CA:;
    if ((!(w0_3 > w0_6))) goto L_8C0790D2;
    v0_6 = (0xFFFFFFFF);
    goto L_8C0790D4;
    L_8C0790D2:;
    v0_6 = (0x0);
    goto L_8C0790D4;
    L_8C07909C:;
    if ((!(w0_3 > w0_5))) goto L_8C0790BC;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0790BE;
    L_8C0790BC:;
    v0_5 = (0x0);
    goto L_8C0790BE;
    L_8C078E0A:;
    w0_5 = *(float *)((v0_3 + 0xAE8));
    w0_7 = (w0_5);
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C078E18;
    v0_7 = (0x1);
    L_8C078E22:;
    if ((v0_5 != v0_7)) goto L_8C078E2A;
    goto L_8C07908E;
    L_8C078E2A:;
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_8 = *(float *)(((*(int *)(((int)stk + 52))) + 0xB9C));
    w0_3 = (0.0f);
    w0_5 = (w0_7);
    w0_6 = ((w0_8 - w0_7));
    if ((!((w0_8 - w0_7) > 0.0f))) goto L_8C078E3E;
    v0_6 = (0x1);
    L_8C078E48:;
    w0_3 = (0.0f);
    if ((!(w0_5 > 0.0f))) goto L_8C078E52;
    v0_7 = (0x1);
    L_8C078E5C:;
    if ((v0_6 != v0_7)) goto L_8C078EDA;
    w0_5 = *(float *)((v0_1 + 0xB00));
    w0_3 = *(float *)((v0_1 + 0xB9C));
    *(float *)(((int)stk + 72)) = w0_3;
    w0_7 = (0.0f);
    w0_6 = ((w0_5 * w0_1));
    if ((!(w0_3 > 0.0f))) goto L_8C078E78;
    v0_6 = (0x1);
    L_8C078E86:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    w0_6 = *(float *)((v0_1 + 0xB00));
    w0_3 = *(float *)((v0_1 + 0xB9C));
    *(float *)(((int)stk + 64)) = w0_3;
    v0_0 = ((v0_0 + 0x1));
    w0_5 = (0.0f);
    w0_6 = ((w0_6 * 11.8850002f));
    if ((!(w0_3 > 0.0f))) goto L_8C078EBC;
    v0_6 = (0x1);
    L_8C078ECA:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    L_8C078EDA:;
    w0_3 = *(float *)((v0_1 + 0xB9C));
    w0_5 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C078EE8;
    w0_7 = (w0_5);
    L_8C078EEC:;
    if ((!(w0_7 > 21.9400005f))) goto L_8C078F2A;
    w0_6 = *(float *)((v0_1 + 0xB00));
    w0_3 = *(float *)((v0_1 + 0xB9C));
    *(float *)(((int)stk + 60)) = w0_3;
    w0_5 = (0.0f);
    w0_6 = ((w0_6 * w0_1));
    if ((!(w0_3 > 0.0f))) goto L_8C078F0C;
    v0_6 = (0x1);
    L_8C078F1A:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    L_8C078F2A:;
    w0_3 = *(float *)((v0_1 + 0xAF0));
    w0_5 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C078F38;
    w0_7 = (w0_5);
    L_8C078F3C:;
    if ((59.4249992f > w0_7)) goto L_8C078F48;
    goto L_8C0794C8;
    L_8C078F48:;
    v0_6 = *(int *)((v0_4 + 0xB60));
    v0_5 = ((v0_6 & R9));
    if (((v0_6 & R9) == 0)) goto L_8C078F84;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C078F64;
    w0_7 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C078F6C:;
    v0_6 = *(short *)((v0_2 + 0x118));
    w0_3 = 20.0f;
    w0_3 = w0_3 + 0.100000001f * (float)v0_6;
    w0_5 = (0.100000001f);
    w0_5 = (w0_7);
    FPUL_ = (v0_6);
    if ((w0_7 > w0_3)) goto L_8C078FE0;
    L_8C078F84:;
    if ((v0_5 == 0)) goto L_8C078F8C;
    goto L_8C0794C8;
    L_8C078F8C:;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_4 + 0xAE8))) - w0_4))) goto L_8C078FBC;
    w0_3 = (((*(float *)((v0_4 + v0_6))) - w0_4));
    L_8C078FC4:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_4 = 20.0f;
    w0_4 = w0_4 + 0.5f * (float)v0_4;
    w0_5 = (0.5f);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((w0_3 > w0_4)) goto L_8C078FE0;
    goto L_8C0794C8;
    L_8C078FE0:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) == 0)) goto L_8C07901A;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C078FFA;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C079002:;
    v0_4 = *(short *)((v0_2 + 0x118));
    w0_4 = 20.0f;
    w0_4 = w0_4 + 0.100000001f * (float)v0_4;
    w0_5 = (0.100000001f);
    w0_5 = (w0_3);
    FPUL_ = (v0_4);
    if ((w0_3 > w0_4)) goto L_8C07905C;
    L_8C07901A:;
    if ((((*(int *)((v0_3 + 0xB60))) & R9) == 0)) goto L_8C079026;
    goto L_8C0794C8;
    L_8C079026:;
    v0_6 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_3 + 0xAE8))) - w0_2))) goto L_8C079038;
    w0_3 = (((*(float *)((v0_3 + v0_6))) - w0_2));
    L_8C079040:;
    v0_2 = *(short *)((v0_2 + 0x118));
    w0_2 = 20.0f;
    w0_2 = w0_2 + 0.5f * (float)v0_2;
    w0_5 = (0.5f);
    w0_5 = (w0_3);
    FPUL_ = (v0_2);
    if ((w0_3 > w0_2)) goto L_8C07905C;
    goto L_8C0794C8;
    L_8C07905C:;
    w0_4 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (w0_4);
    w0_3 = (0.0f);
    w0_6 = (((*(float *)((v0_1 + 0xB00))) * w0_1));
    if ((!(w0_4 > 0.0f))) goto L_8C079070;
    v0_6 = (0x1);
    L_8C07907A:;
    cpuAimPointSet(v0_0, 0x1, ((float)v0_6 * w0_0), w0_6);
    v0_0 = ((v0_0 + 0x1));
    goto L_8C0794C8;
    L_8C079070:;
    if ((!(w0_3 > w0_2))) goto L_8C079078;
    v0_6 = (0xFFFFFFFF);
    goto L_8C07907A;
    L_8C079078:;
    v0_6 = (0x0);
    goto L_8C07907A;
    L_8C079038:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C079040;
    L_8C078FFA:;
    w0_3 = (((-(*(float *)((v0_3 + v0_6)))) + w0_2));
    goto L_8C079002;
    L_8C078FBC:;
    w0_3 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C078FC4;
    L_8C078F64:;
    w0_7 = (((-(*(float *)((v0_4 + v0_6)))) + w0_4));
    goto L_8C078F6C;
    L_8C078F38:;
    w0_7 = ((-w0_5));
    goto L_8C078F3C;
    L_8C078F0C:;
    if ((!(w0_5 > (*(float *)(((int)stk + 60)))))) goto L_8C078F18;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078F1A;
    L_8C078F18:;
    v0_6 = (0x0);
    goto L_8C078F1A;
    L_8C078EE8:;
    w0_7 = ((-w0_5));
    goto L_8C078EEC;
    L_8C078EBC:;
    if ((!(w0_5 > (*(float *)(((int)stk + 64)))))) goto L_8C078EC8;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078ECA;
    L_8C078EC8:;
    v0_6 = (0x0);
    goto L_8C078ECA;
    L_8C078E78:;
    if ((!(w0_7 > (*(float *)(((int)stk + 72)))))) goto L_8C078E84;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078E86;
    L_8C078E84:;
    v0_6 = (0x0);
    goto L_8C078E86;
    L_8C078E52:;
    if ((!(w0_3 > w0_5))) goto L_8C078E5A;
    v0_7 = (0xFFFFFFFF);
    goto L_8C078E5C;
    L_8C078E5A:;
    v0_7 = (0x0);
    goto L_8C078E5C;
    L_8C078E3E:;
    if ((!(w0_3 > w0_6))) goto L_8C078E46;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078E48;
    L_8C078E46:;
    v0_6 = (0x0);
    goto L_8C078E48;
    L_8C078E18:;
    if ((!(w0_3 > w0_7))) goto L_8C078E20;
    v0_7 = (0xFFFFFFFF);
    goto L_8C078E22;
    L_8C078E20:;
    v0_7 = (0x0);
    goto L_8C078E22;
    L_8C078E00:;
    if ((!(w0_3 > w0_5))) goto L_8C078E08;
    v0_5 = (0xFFFFFFFF);
    goto L_8C078E0A;
    L_8C078E08:;
    v0_5 = (0x0);
    goto L_8C078E0A;
    L_8C078DC2:;
    if ((!(w0_3 > w0_6))) goto L_8C078DEC;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078DEE;
    L_8C078DEC:;
    v0_6 = (0x0);
    goto L_8C078DEE;
    L_8C078DAA:;
    if ((!(w0_3 > w0_5))) goto L_8C078DB2;
    v0_5 = (0xFFFFFFFF);
    goto L_8C078DB4;
    L_8C078DB2:;
    v0_5 = (0x0);
    goto L_8C078DB4;
    L_8C078D34:;
    if ((!(w0_3 > w0_5))) goto L_8C078D3C;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078D3E;
    L_8C078D3C:;
    v0_6 = (0x0);
    goto L_8C078D3E;
    L_8C078D08:;
    if ((!(w0_3 > w0_5))) goto L_8C078D10;
    v0_6 = (0xFFFFFFFF);
    goto L_8C078D12;
    L_8C078D10:;
    v0_6 = (0x0);
    goto L_8C078D12;
    L_8C078CE4:;
    w0_7 = ((-w0_5));
    goto L_8C078CE8;
    L_8C078CD4:;
    w0_3 = ((-w0_6));
    goto L_8C078CD8;
}

int miniOnEvent(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[20];

    register int R3;
    int R11;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_3 = a4;
    v0_7 = a5;
    v0_4 = a7;
    w0_4 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_2 = *(int *)0x8C2FBEF0;
    R11 = (v0_7);
    v0_0 = (0x8C291F24);
    v0_1 = (0x8C2FBEF0);
    v0_7 = (0x8C287ACC);
    v0_8 = (v0_2);
    if (((*(int *)((v0_2 + 0x20))) == 1)) goto L_8C03774A;
    L_8C037CCA:;
    return 0x0;
    L_8C03774A:;
    v0_9 = (v0_3);
    v0_4 = (0xD78);
    v0_2 = (0x0);
    v0_5 = (0x8C287D84);
    v0_6 = (0x2);
    if ((v0_3 != 0)) goto L_8C03775C;
    goto L_8C037CCA;
    L_8C03775C:;
    if ((v0_9 == 1)) goto L_8C037780;
    if ((v0_9 != 2)) goto L_8C037768;
    goto L_8C037CCA;
    L_8C037768:;
    if ((v0_9 == 3)) goto L_8C0377DC;
    if ((v0_9 != 5)) goto L_8C037774;
    *(unsigned int *)0x8C2FC0C8 = v0_2;
    R11 = (0x8C02638C);
    v0_6 = (0x8C02414C);
    w0_0 = (-118.849998f);
    w0_1 = (0.0f);
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 3)) goto L_8C037A22;
    if (((int)(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) <= 0)) goto L_8C037A08;
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + v0_4);
    *(unsigned int *)(((0xB60 + (v0_5 + v0_4)) + 0x0)) = ((*(int *)(((0xB60 + (v0_5 + v0_4)) + 0x0))) | 0x40000);
    *(unsigned int *)(((0xD40 + (*(int *)(((int)stk + 12)))) + 0x0)) = v0_6;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = v0_2;
    v0_3 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0xAE8 + v0_3);
    *(Stk3 *)((0xAE8 + v0_3)) = vecMake(w0_1, w0_1, w0_0);
    L_8C037A08:;
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x18)) = v0_2;
    L_8C037A22:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 1)) goto L_8C037A40;
    if (((*(int *)((v0_0 + 0x50))) != 1)) goto L_8C037A40;
    *(float *)((v0_0 + 0x28)) = ((*(float *)((v0_0 + 0x28))) * 0.800000012f);
    FPUL_ = (0x3F4CCCCD);
    L_8C037A40:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 4)) goto L_8C037A94;
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + v0_4);
    *(unsigned int *)(((v0_5 + v0_4) + 0xB60)) = ((*(int *)(((v0_5 + v0_4) + 0xB60))) | 0x40000);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = v0_6;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = v0_2;
    v0_3 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0xAE8 + v0_3);
    *(Stk3 *)((0xAE8 + v0_3)) = vecMake(w0_1, w0_1, -50.0f);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x18)) = v0_2;
    L_8C037A94:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 0)) goto L_8C037AE8;
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + v0_4);
    *(unsigned int *)(((v0_5 + v0_4) + 0xB60)) = ((*(int *)(((v0_5 + v0_4) + 0xB60))) | 0x40000);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = v0_6;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = v0_2;
    v0_3 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0xAE8 + v0_3);
    *(Stk3 *)((0xAE8 + v0_3)) = vecMake(w0_1, w0_1, -79.2333298f);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x18)) = v0_2;
    L_8C037AE8:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 6)) goto L_8C037B6E;
    *(unsigned int *)(((int)stk + 12)) = (v0_5 + v0_4);
    v0_9 = (0xB60);
    v0_3 = ((*(int *)(((v0_5 + v0_4) + 0xB60))));
    v0_7 = (0x40000);
    v0_5 = ((v0_5 + v0_4));
    *(unsigned int *)((v0_5 + v0_9)) = (v0_3 | v0_7);
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xD40)) = v0_6;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0xB68)) = v0_2;
    v0_3 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (0xAE8 + v0_3);
    *(Stk3 *)((0xAE8 + v0_3)) = vecMake(w0_1, w0_1, w0_0);
    miniBallObjSpawn();
    ballInit(0x8C291F24);
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) & 0xFFFFFFF7);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x18)) = v0_2;
    L_8C037B6E:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) == 7)) goto L_8C037B7A;
    goto L_8C037CCA;
    L_8C037B7A:;
    miniBallObjSpawn();
    L_8C037B7E:;
    miniLaunchBall();
    goto L_8C037CCA;
    L_8C037774:;
    if ((v0_9 != 6)) goto L_8C03777C;
    if (((*(int *)((v0_8 + 0x0))) == 2)) goto L_8C037B92;
    goto L_8C037CCA;
    L_8C037B92:;
    R11 = (0x8C2FBF54);
    v0_0 = (0x8C2FBF7C);
    v0_3 = (0x8C2FBF54);
    v0_8 = (0x8C2FBF54);
    v0_4 = (v0_2);
    L_8C037BAA:;
    if (((unsigned int)v0_3 < (unsigned int)v0_0)) goto L_8C037BA0;
    v0_0 = *(int *)((v0_7 + 0x60));
    v0_3 = (v0_0);
    if (((int)v0_0 > 0)) goto L_8C037BBA;
    goto L_8C037CCA;
    L_8C037BBA:;
    if ((v0_4 == 10)) goto L_8C037BCA;
    if (((int)v0_3 < (int)0xF0)) goto L_8C037BCA;
    goto L_8C037CCA;
    L_8C037BCA:;
    v0_0 = ((v0_8 + 0x28));
    v0_3 = (v0_8);
    v0_4 = (v0_2);
    L_8C037BDE:;
    if (((unsigned int)v0_3 < (unsigned int)v0_0)) goto L_8C037BD4;
    if ((v0_4 == 0)) goto L_8C037BEE;
    if (((*(int *)((v0_7 + 0x60))) != 60)) goto L_8C037CCA;
    L_8C037BEE:;
    *(unsigned int *)((v0_7 + 0x60)) = 0x3C;
    v0_0 = (v0_2);
    v0_3 = (R11);
    v0_7 = ((0x80 + R11));
    L_8C037C22:;
    if (((unsigned int)v0_3 < (unsigned int)v0_7)) goto L_8C037C18;
    *(unsigned int *)((0x8C2FC134 + (((-(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10)))) + 0xB) << 2))) = v0_0;
    R11 = (0x200);
    v0_3 = (0x8C2FC134);
    if ((((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x8))) & 0x200) == 0)) goto L_8C037C5A;
    v0_4 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x10));
    *(unsigned int *)((v0_3 + (((-v0_4) + 0xB) << 2))) = ((*(int *)((v0_3 + (((-v0_4) + 0xB) << 2)))) - (*(int *)((((((-v0_4) + 0xA) << 2) + v0_3) + 0x0))));
    L_8C037C5A:;
    miniBowlingScore();
    if ((v0_0 != 10)) goto L_8C037C76;
    if ((((*(int *)(((*(int *)0x8C2FBEF0) + 0x8))) & 0x200) != 0)) goto L_8C037C76;
    v0_3 = (0x1);
    L_8C037C78:;
    miniMessageSpawn((v0_3 + v0_0));
    if ((((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x8))) & R11) != 0)) goto L_8C037CA2;
    if ((v0_0 != 10)) goto L_8C037CA2;
    if (((int)(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) <= (int)0x3)) goto L_8C037CA2;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_3 + 0x10)) = ((*(int *)((v0_3 + 0x10))) - 1);
    serveNextPoint();
    L_8C037CA2:;
    v0_4 = *(int *)((v0_1 + 0x0));
    v0_3 = (v0_4);
    if (((int)(*(int *)((v0_4 + 0x10))) <= 0)) goto L_8C037CB0;
    *(unsigned int *)((v0_3 + 0x10)) = ((*(int *)((v0_3 + 0x10))) - 1);
    L_8C037CB0:;
    v0_4 = *(int *)((v0_1 + 0x0));
    v0_3 = (v0_4);
    if (((R11 & (*(int *)((v0_4 + 0x8)))) == 0)) goto L_8C037CC6;
    if (((*(int *)((v0_3 + 0x10))) != 1)) goto L_8C037CC6;
    if (((int)v0_0 >= (int)0xA)) goto L_8C037CC6;
    *(unsigned int *)((v0_3 + 0x10)) = v0_2;
    L_8C037CC6:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_6;
    goto L_8C037CCA;
    L_8C037C76:;
    v0_3 = (0x0);
    goto L_8C037C78;
    L_8C037C18:;
    v0_4 = (*(int *)((v0_3 + 0x0))) != 1;
    v0_3 = ((v0_3 + 0x4));
    if (v0_4) goto L_8C037C22;
    v0_0 = ((v0_0 + 0x1));
    goto L_8C037C22;
    L_8C037BD4:;
    v0_5 = (*(int *)((v0_3 + 0x0))) != 2;
    v0_3 = ((v0_3 + 0x4));
    if (v0_5) goto L_8C037BDE;
    v0_4 = ((v0_4 + 0x1));
    goto L_8C037BDE;
    L_8C037BA0:;
    v0_5 = (*(int *)((v0_3 + 0x0))) != 1;
    v0_3 = ((v0_3 + 0x4));
    if (v0_5) goto L_8C037BAA;
    v0_4 = ((v0_4 + 0x1));
    goto L_8C037BAA;
    L_8C03777C:;
    goto L_8C037CCA;
    L_8C0377DC:;
    v0_6 = (0x8C0ED2B0);
    w0_0 = (0.699999988f);
    if (((*(int *)((v0_8 + 0x0))) != 3)) goto L_8C037866;
    w0_2 = nlRandom();
    *(float *)(((int)stk + 8)) = (float)(((int)(w0_2 * (1.0f + 1.0f)) << 1) - 1);
    v0_3 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x40));
    *(float *)(((int)stk + 4)) = (float)(v0_3 + 0x3);
    w0_1 = ((nlRandom()) * 0.400000006f);
    w0_1 = w0_1 + 0.100000001f * (float)(v0_3 + 0x3);
    w0_2 = (float)(((int)(w0_2 * (1.0f + 1.0f)) << 1) - 1);
    *(float *)((R11 + 0xB90)) = (w0_2 * w0_1);
    w0_1 = -0.300000012f;
    w0_1 = w0_1 + 1.20000005f * (nlRandom());
    *(float *)((R11 + 0xB98)) = w0_1;
    *(unsigned int *)((v0_0 + 0x50)) = v0_2;
    v0_3 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x40));
    w0_1 = ((-((float)v0_3 * 0.100000001f)) + 1.20000005f);
    *(float *)((v0_0 + 0x28)) = (w0_1 * w0_0);
    w0_4 = (1.20000005f);
    FPUL_ = (v0_3);
    if (((int)(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) <= 0)) goto L_8C037866;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_3 + 0x10)) = ((*(int *)((v0_3 + 0x10))) - 1);
    L_8C037866:;
    w0_1 = (1.0f);
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 1)) goto L_8C037878;
    *(unsigned int *)((v0_0 + 0x50)) = v0_2;
    *(float *)((v0_0 + 0x28)) = w0_1;
    L_8C037878:;
    w0_3 = (-0.5f);
    w0_2 = (0.5f);
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 4)) goto L_8C0378A4;
    w0_4 = w0_3;
    w0_4 = w0_4 + w0_1 * (nlRandom());
    *(float *)((R11 + 0xB90)) = w0_4;
    *(float *)((R11 + 0xB98)) = w0_2;
    *(unsigned int *)((v0_0 + 0x50)) = v0_2;
    *(float *)((v0_0 + 0x28)) = w0_0;
    w0_4 = (w0_1);
    L_8C0378A4:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 0)) goto L_8C0378DA;
    w0_4 = w0_3;
    w0_4 = w0_4 + w0_1 * (nlRandom());
    *(float *)((R11 + 0xB90)) = w0_4;
    w0_4 = -0.25f;
    w0_4 = w0_4 + w0_2 * (nlRandom());
    *(float *)((R11 + 0xB98)) = w0_4;
    *(unsigned int *)((v0_0 + 0x50)) = 0x1;
    *(float *)((v0_0 + 0x28)) = 1.68000007f;
    w0_4 = (w0_2);
    L_8C0378DA:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 5)) goto L_8C037980;
    *(unsigned int *)(((int)stk + 16)) = (v0_5 + v0_4);
    w0_5 = *(float *)(((v0_5 + v0_4) + 0xAE8));
    v0_3 = (0x8C10B980);
    w0_6 = (0.0f);
    w0_4 = (w0_5);
    if ((!(w0_5 > 0.0f))) goto L_8C0378F6;
    v0_7 = (0x1);
    L_8C037932:;
    v0_4 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x24));
    *(float *)((R11 + 0xB90)) = ((float)(-v0_7) * (*(float *)((((((v0_4 << 2) + v0_4) << 2) + v0_3) + 0xC))));
    v0_4 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x24));
    *(float *)((R11 + 0xB98)) = (-(*(float *)(((v0_3 + (((v0_4 << 2) + v0_4) << 2)) + 0x10))));
    v0_3 = ((v0_3 + (((v0_4 << 2) + v0_4) << 2)));
    FPUL_ = ((-v0_7));
    if (((int)(*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) <= 0)) goto L_8C037978;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_3 + 0x10)) = ((*(int *)((v0_3 + 0x10))) - 1);
    L_8C037978:;
    *(unsigned int *)0x8C2FBFD4 = (*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10)));
    L_8C037980:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) == 6)) goto L_8C03798C;
    goto L_8C037CCA;
    L_8C03798C:;
    w0_3 = w0_3;
    w0_3 = w0_3 + w0_1 * (nlRandom());
    *(float *)((R11 + 0xB90)) = w0_3;
    *(float *)((R11 + 0xB98)) = w0_2;
    *(unsigned int *)((v0_0 + 0x50)) = v0_2;
    *(float *)((v0_0 + 0x28)) = w0_0;
    w0_4 = (w0_1);
    goto L_8C037CCA;
    L_8C0378F6:;
    if ((!(w0_6 > w0_4))) goto L_8C037930;
    v0_7 = (0xFFFFFFFF);
    goto L_8C037932;
    L_8C037930:;
    v0_7 = (0x0);
    goto L_8C037932;
    L_8C037780:;
    if (((*(int *)((v0_8 + 0x0))) != 2)) goto L_8C03778C;
    *(unsigned int *)((v0_7 + 0x60)) = 0x12C;
    L_8C03778C:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 3)) goto L_8C0377A0;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) != 0)) goto L_8C0377A0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_6;
    L_8C0377A0:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 5)) goto L_8C0377B4;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x10))) != 0)) goto L_8C0377B4;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_6;
    L_8C0377B4:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x0))) != 7)) goto L_8C0377C0;
    goto L_8C037B7E;
    L_8C0377C0:;
    goto L_8C037CCA;
}

int cpuReachRange(int a4, int a5, float f4, float f5, float f6)
{
    int stk[19];
    register int t0;
    register float u1;
    register float u6;
    register float u7;
    register float u8;
    register int t9;
    register int t10;
    register int t13;
    register int t15;
    register float u17;
    register float u18;
    register float u19;
    register int t20;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register float u27;
    register float u28;
    register float u51;
    register float u52;
    register float u58;
    register float u60;
    register int t62;
    register int t63;
    register float u65;
    register float u66;
    register float u73;
    register float u79;
    register float u80;
    register float u81;
    register float u82;
    register float u84;
    register float u85;
    register float u92;
    register float u93;
    register int t100;
    register int t101;
    register int t102;
    register float u105;
    register float u106;
    register float u107;
    register float u108;
    register float u113;
    register float u116;
    register float u118;
    register float u120;
    register float u121;
    register float u125;
    register float u127;
    register float u133;
    register float u134;
    register int t40;
    register int t41;
    register float u46;
    register float u47;
    register float u48;
    register int t49;
    register int t30;
    register int t31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register float u36;
    register int t37;
    register int t99;
    register float u103;
    register float u104;
    int t144;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((a4 + 0xAE8));
    if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
    } else {
        *(float *)(((int)stk + 16)) = ((*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x2C))) / (*(float *)0x8C102450));
        u6 = *(float *)((a4 + 0xB00));
        u7 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u8 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        t9 = nlArcTan2(a4, a5, (u6 * u8), (-(u6 * u7)));
        t10 = ((~(((~(((int)t9 >> 12) + 0x1)) + 0x1) & 0xF)) + 0x1);
        if ((int)(((int)t9 >> 12) + 0x1) >= 0) {
            t10 = ((((int)t9 >> 12) + 0x1) & 0xF);
        }
        t13 = (int)((unsigned int)((int)((unsigned int)t10 + (unsigned int)0x0)) + ((((int)0x0 > (int)t10)) ? 1u : 0u));
        t15 = ((~(((~((-(t13 >> 1)) + 0xA)) + 0x1) & 0x7)) + 0x1);
        if ((int)((-(t13 >> 1)) + 0xA) >= 0) {
            t15 = (((-(t13 >> 1)) + 0xA) & 0x7);
        }
        u17 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u18 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        u19 = (u18 * u18);
        u19 = u19 + u17 * u17;
        t20 = (int)(_builtin_sqrtf(u19) * 4.0f);
        if ((int)(int)(_builtin_sqrtf(u19) * 4.0f) > (int)0x3) {
            t20 = 0x3;
        }
        if (t20 == 0) {
            t22 = *(int *)0x8C181540;
            t23 = *(int *)((((t15 << 2) + 0x8C181540) + 0x4));
            *(float *)(((int)stk + 20)) = (1.0f - (_builtin_sqrtf(u19) * 4.0f));
            *(float *)(((int)stk + 24)) = (1.0f - ((0.25f - _builtin_sqrtf(u19)) * 4.0f));
            t40 = t23;
            t41 = t22;
            u46 = (1.0f - (_builtin_sqrtf(u19) * 4.0f));
            u47 = (1.0f - ((0.25f - _builtin_sqrtf(u19)) * 4.0f));
            u48 = ((0.25f - _builtin_sqrtf(u19)) * 4.0f);
            t49 = (int)(_builtin_sqrtf(u19) * 4.0f);
        } else {
            if (t20 == 3) {
                t24 = *(int *)((0x8C181540 + ((t15 + 0x11) << 2)));
                *(float *)(((int)stk + 20)) = (1.0f - ((_builtin_sqrtf(u19) + -0.75f) * 4.0f));
                *(float *)(((int)stk + 24)) = (1.0f - ((1.0f - _builtin_sqrtf(u19)) * 4.0f));
                t30 = t24;
                t31 = t24;
                u32 = (1.0f - ((1.0f - _builtin_sqrtf(u19)) * 4.0f));
                u33 = (1.0f - ((_builtin_sqrtf(u19) + -0.75f) * 4.0f));
                u34 = ((1.0f - _builtin_sqrtf(u19)) * 4.0f);
                u35 = -0.75f;
                u36 = 1.0f;
                t37 = (int)(_builtin_sqrtf(u19) * 4.0f);
            } else {
                t25 = *(int *)((0x8C181540 + ((((((t20 - 1) << 2) << 1) + t15) + 0x1) << 2)));
                t26 = *(int *)((0x8C181540 + (((((t20 << 2) << 1) + t15) + 0x1) << 2)));
                u27 = (_builtin_sqrtf(u19) - ((float)t20 * 0.25f));
                *(float *)(((int)stk + 20)) = (1.0f - (u27 * 4.0f));
                u28 = (((float)(t20 + 0x1) * 0.25f) - _builtin_sqrtf(u19));
                *(float *)(((int)stk + 24)) = (1.0f - (u28 * 4.0f));
                t30 = t26;
                t31 = t25;
                u32 = u17;
                u34 = (u28 * 4.0f);
                u35 = (1.0f - (u27 * 4.0f));
                u36 = (1.0f - (u28 * 4.0f));
                t37 = (t20 + 0x1);
            }
            t40 = t30;
            t41 = t31;
            u46 = u35;
            u47 = u36;
            u48 = 0.25f;
            t49 = t37;
        }
        u51 = *(float *)((a4 + 0xB9C));
        u52 = *(float *)((a4 + 0xAE8));
        u58 = *(float *)((a4 + 0xB90));
        u60 = 4.0f;
        u60 = u60 + (1.0f + 1.0f) * ((*(float *)((a4 + 0xB00))) * (float)(((u51 - u52) > 0.0f) - (0.0f > (u51 - u52))));
        t62 = *(int *)(((t40 + ((int)u60 << 2)) + 0x0));
        t63 = *(int *)(((t41 + ((int)u60 << 2)) + 0x0));
        *(float *)(((int)stk + 12)) = (*(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + ((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x20)) + 0x0)));
        u65 = *(float *)0x8C287B40;
        u66 = (-(u51 / u65));
        if (!(0.0f > (u51 / u65))) {
            u66 = (u51 / u65);
        }
        u73 = (u51 / u65);
        if (u66 > 0.949999988f) {
            u73 = ((float)(((u51 / u65) > 0.0f) - (0.0f > (u51 / u65))) * 0.949999988f);
        }
        u79 = *(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + ((0x8C102424 + ((*(int *)((a4 + 0xC58))) * 0x6C)) + 0x20)) + 0x0));
        u80 = 0.300000012f;
        u80 = u80 + 3.29999995f * u79;
        *(float *)(((int)stk + 4)) = u80;
        u81 = *(float *)((a4 + 0xBA4));
        u82 = (-u81);
        if (!(0.0f > u81)) {
            u82 = u81;
        }
        u84 = *(float *)0x8C291F84;
        u85 = (-u84);
        if (!(0.0f > u84)) {
            u85 = u84;
        }
        if ((u85 + 5.0f) > u82) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 1.25f);
        }
        u92 = *(float *)((a4 + 0xAE8));
        u93 = *(float *)((a4 + 0xB9C));
        *(float *)(((int)stk + 8)) = ((float)(((u93 - u92) > 0.0f) - (0.0f > (u93 - u92))) * 0.949999988f);
        nlLocate(0x14, 0x19);
        t100 = t62;
        t101 = t63;
        t102 = 0x0;
        u105 = u1;
        u106 = u58;
        for (;;) {
            u107 = *(float *)((a4 + 0xB9C));
            u108 = (u107 - u105);
            if (!(0.0f > (u107 - u105))) {
            } else {
                u104 = u107;
                u104 = (-u104);
                u108 = (u104 + u105);
            }
            if (!(u108 > 15.0f)) {
                *(float *)((a5 + 0x0)) = u106;
                *(float *)((a5 + 0x4)) = (*(float *)((a4 + 0xB94)));
                *(float *)((a5 + 0x8)) = (*(float *)((a4 + 0xB98)));
                return t102;
            }
            u103 = (*(float *)((t101 + 0x0)));
            u113 = *(float *)((a4 + 0xB00));
            u104 = (*(float *)((t100 + 0x0)));
            u116 = (u113 * u103);
            u103 = (*(float *)(((int)stk + 20)));
            u118 = (u113 * u104);
            u104 = (*(float *)(((int)stk + 24)));
            u120 = (u116 * u103);
            u103 = (*(float *)(((int)stk + 16)));
            u121 = u105;
            u121 = u121 + u103 * ((-u120) - (u118 * u104));
            u105 = u121;
            u103 = (*(float *)(((int)stk + 12)));
            u125 = u106;
            u125 = u125 + u103 * ((*(float *)(((int)stk + 8))) - u106);
            u106 = u125;
            u127 = (u73 - u106);
            if (!(0.0f > (u106 - u73))) {
                u127 = (u106 - u73);
            }
            u104 = (*(float *)(((int)stk + 4)));
            if (u104 > u127) {
                u103 = (*(float *)(((int)stk + 4)));
                u106 = u73;
                u133 = u106;
                u133 = u133 + u103 * (*(float *)((a4 + 0xB00)));
                u106 = u133;
                u104 = 0.0f;
                u134 = (-u106);
                if (!(u104 > u106)) {
                    u134 = u106;
                }
                if (u134 > 0.949999988f) {
                    if (u106 > 0.0f) {
                        t99 = 0x1;
                    } else {
                        if (0.0f > u106) {
                            t99 = 0xFFFFFFFF;
                        } else {
                            t99 = 0x0;
                        }
                    }
                    u106 = (float)t99;
                    u106 = (u106 * 0.949999988f);
                }
            }
            t102 = (t102 + 0x1);
            t101 = (t101 + 0x8);
            t100 = (t100 + 0x8);
            if (((int)t102 <= (int)0x64) && (t144 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)), t99 = t144, (int)t102 <= (int)t99)) continue;
            break;
        }
        *(float *)((a5 + 0x0)) = u106;
        *(float *)((a5 + 0x4)) = (*(float *)((a4 + 0xB94)));
        *(float *)((a5 + 0x8)) = (*(float *)((a4 + 0xB98)));
    }
    return 0xFFFFFFFF;
}

int cpuSglAimLv17(int a4, int a5, int a6, float f4, float f5)
{
    int stk[24];

    register int R2;
    register float F0;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_4 = a4;
    v0_2 = a5;
    v0_0 = a6;
    w0_4 = f4;
    w0_0 = f5;
    v0_5 = *(int *)((v0_4 + 0xC58));
    v0_3 = (v0_5);
    v0_0 = (v0_4);
    v0_1 = (0x8C041C58);
    v0_1 = (0x8C0ED290);
    v0_1 = (0x32);
    v0_2 = (v0_2);
    v0_4 = ((((*(int *)((v0_4 + 0xB5C))) * 0x160) + 0x8C2FC69C));
    v0_6 = (0x8C0ED2B0);
    w0_3 = ((1.0f + 1.0f));
    w0_2 = (11.8850002f);
    w0_0 = (32.920002f);
    w0_1 = (118.849998f);
    if ((v0_5 == 8)) goto L_8C04F338;
    if ((v0_3 == 13)) goto L_8C04F338;
    if ((v0_3 == 14)) goto L_8C04F338;
    if ((v0_3 == 11)) goto L_8C04F36E;
    if ((v0_3 == 9)) goto L_8C04F3EC;
    if ((v0_3 != 12)) goto L_8C04F31C;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F458;
    L_8C04F632:;
    return v0_2;
    L_8C04F458:;
    w0_4 = (-1.0f);
    w0_4 = w0_4 + w0_3 * (nlRandom());
    *(float *)(((int)stk + 12)) = (w0_4 * w0_0);
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C04F476;
    v0_3 = ((v0_3 & 0x1));
    L_8C04F480:;
    if ((v0_3 == 0)) goto L_8C04F48A;
    *(float *)(((int)stk + 28)) = w0_1;
    L_8C04F48E:;
    cpuAimPointSet(v0_2, 0x1, (*(float *)(((int)stk + 12))), ((*(float *)((v0_0 + 0xB00))) * (*(float *)(((int)stk + 28)))));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F458;
    goto L_8C04F632;
    L_8C04F48A:;
    *(float *)(((int)stk + 28)) = w0_2;
    goto L_8C04F48E;
    L_8C04F476:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_8C04F480;
    L_8C04F31C:;
    if ((v0_3 != 15)) goto L_8C04F324;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F4BC;
    goto L_8C04F632;
    L_8C04F4BC:;
    v0_4 = (0x5);
    L_8C04F4BE:;
    w0_4 = (-1.0f);
    w0_4 = w0_4 + w0_3 * (nlRandom());
    *(float *)(((int)stk + 20)) = (w0_4 * w0_0);
    v0_3 = ((int)((int)(nlRand()) % (int)v0_4)) == 0;
    if (v0_3) goto L_8C04F4E6;
    *(float *)(((int)stk + 36)) = w0_1;
    L_8C04F4EA:;
    cpuAimPointSet(v0_2, 0x1, (*(float *)(((int)stk + 20))), ((*(float *)((v0_0 + 0xB00))) * (*(float *)(((int)stk + 36)))));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F4BE;
    goto L_8C04F632;
    L_8C04F4E6:;
    *(float *)(((int)stk + 36)) = w0_2;
    goto L_8C04F4EA;
    L_8C04F324:;
    if ((v0_3 != 10)) goto L_8C04F32C;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F510;
    goto L_8C04F632;
    L_8C04F510:;
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C04F51C;
    v0_3 = ((v0_3 & 0x1));
    L_8C04F526:;
    w0_3 = (((float)((v0_3 << 1) - 1) * w0_0));
    w0_5 = (0.0f);
    FPUL_ = (((v0_3 << 1) - 1));
    if ((!(((float)((v0_3 << 1) - 1) * w0_0) > 0.0f))) goto L_8C04F53C;
    v0_3 = (0x1);
    L_8C04F546:;
    w0_6 = *(float *)((v0_0 + 0xB9C));
    w0_5 = (0.0f);
    w0_4 = (w0_6);
    if ((!(w0_6 > 0.0f))) goto L_8C04F554;
    v0_4 = (0x1);
    L_8C04F55E:;
    if ((v0_3 == v0_4)) goto L_8C04F5A8;
    v0_3 = ((int)((int)(nlRand()) % (int)0xA)) == 0;
    if (v0_3) goto L_8C04F57C;
    *(float *)(((int)stk + 44)) = 59.4249992f;
    L_8C04F5C2:;
    cpuAimPointSet(v0_2, 0x1, w0_3, ((*(float *)((v0_0 + 0xB00))) * (*(float *)(((int)stk + 44)))));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F510;
    goto L_8C04F632;
    L_8C04F57C:;
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C04F588;
    v0_3 = ((v0_3 & 0x1));
    L_8C04F592:;
    if ((v0_3 != 0)) goto L_8C04F5B8;
    L_8C04F5BE:;
    *(float *)(((int)stk + 44)) = w0_2;
    goto L_8C04F5C2;
    L_8C04F5B8:;
    *(float *)(((int)stk + 44)) = w0_1;
    goto L_8C04F5C2;
    L_8C04F588:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_8C04F592;
    L_8C04F5A8:;
    v0_3 = ((int)((int)(nlRand()) % (int)0x3)) == 0;
    if (v0_3) goto L_8C04F5BE;
    goto L_8C04F5B8;
    L_8C04F554:;
    if ((!(w0_5 > w0_4))) goto L_8C04F55C;
    v0_4 = (0xFFFFFFFF);
    goto L_8C04F55E;
    L_8C04F55C:;
    v0_4 = (0x0);
    goto L_8C04F55E;
    L_8C04F53C:;
    if ((!(w0_5 > w0_3))) goto L_8C04F544;
    v0_3 = (0xFFFFFFFF);
    goto L_8C04F546;
    L_8C04F544:;
    v0_3 = (0x0);
    goto L_8C04F546;
    L_8C04F51C:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_8C04F526;
    L_8C04F32C:;
    if ((v0_3 != 17)) goto L_8C04F334;
    if (((int)v0_2 >= (int)v0_1)) goto L_8C04F632;
    L_8C04F5E2:;
    w0_4 = (-1.0f);
    w0_4 = w0_4 + w0_3 * (nlRandom());
    *(float *)(((int)stk + 16)) = (w0_4 * w0_0);
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C04F600;
    v0_3 = ((v0_3 & 0x1));
    L_8C04F60A:;
    if ((v0_3 == 0)) goto L_8C04F614;
    *(float *)(((int)stk + 32)) = w0_1;
    L_8C04F618:;
    cpuAimPointSet(v0_2, 0x1, (*(float *)(((int)stk + 16))), ((*(float *)((v0_0 + 0xB00))) * (*(float *)(((int)stk + 32)))));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F5E2;
    goto L_8C04F632;
    L_8C04F614:;
    *(float *)(((int)stk + 32)) = w0_2;
    goto L_8C04F618;
    L_8C04F600:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_8C04F60A;
    L_8C04F334:;
    goto L_8C04F632;
    L_8C04F3EC:;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F3F4;
    goto L_8C04F632;
    L_8C04F3F4:;
    v0_5 = nlRand();
    v0_3 = (v0_5);
    if (((int)v0_5 < 0)) goto L_8C04F400;
    v0_3 = ((v0_3 & 0x1));
    L_8C04F40A:;
    *(float *)(((int)stk + 40)) = ((float)((v0_3 << 1) - 1) * w0_0);
    FPUL_ = (((v0_3 << 1) - 1));
    if (((*(signed char *)((v0_4 + 0x12B))) != 2)) goto L_8C04F434;
    v0_3 = ((int)((int)(nlRand()) % (int)0x6)) == 0;
    if (v0_3) goto L_8C04F434;
    w0_3 = (w0_2);
    L_8C04F436:;
    cpuAimPointSet(v0_2, 0x1, (*(float *)(((int)stk + 40))), ((*(float *)((v0_0 + 0xB00))) * w0_3));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F3F4;
    goto L_8C04F632;
    L_8C04F434:;
    w0_3 = (w0_1);
    goto L_8C04F436;
    L_8C04F400:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_8C04F40A;
    L_8C04F36E:;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F376;
    goto L_8C04F632;
    L_8C04F376:;
    w0_4 = (-1.0f);
    w0_4 = w0_4 + w0_3 * (nlRandom());
    *(float *)(((int)stk + 4)) = (w0_4 * w0_0);
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_8C04F392;
    v0_3 = ((v0_3 & 0x3));
    L_8C04F39C:;
    if ((v0_3 == 0)) goto L_8C04F3CC;
    *(float *)(((int)stk + 24)) = w0_1;
    L_8C04F3D0:;
    cpuAimPointSet(v0_2, 0x1, (*(float *)(((int)stk + 4))), ((*(float *)((v0_0 + 0xB00))) * (*(float *)(((int)stk + 24)))));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F376;
    goto L_8C04F632;
    L_8C04F3CC:;
    *(float *)(((int)stk + 24)) = w0_2;
    goto L_8C04F3D0;
    L_8C04F392:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x3)) + 0x1));
    goto L_8C04F39C;
    L_8C04F338:;
    if (((int)v0_2 < (int)v0_1)) goto L_8C04F340;
    goto L_8C04F632;
    L_8C04F340:;
    w0_2 = (-1.0f);
    w0_2 = w0_2 + w0_3 * (nlRandom());
    *(float *)(((int)stk + 8)) = w0_1;
    cpuAimPointSet(v0_2, 0x1, (w0_2 * w0_0), ((*(float *)((v0_0 + 0xB00))) * w0_1));
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_8C04F340;
    goto L_8C04F632;
}

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

int vmsfs_fclose(int a4, int a5)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_5 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_8C1EC53E;
    v0_0 = (0xFFFFFF00);
    L_8C1EC67A:;
    return v0_0;
    L_8C1EC53E:;
    v0_4 = (0x8C464598);
    v0_3 = (0x148);
    v0_1 = (0x0);
    if (!(((*(signed char *)(((((*(int *)((v0_0 + 0x28))) * 0x148) + 0x8C464598) + 0x2))) != 0))) goto L_8C1EC672;
    v0_2 = (vmsio_ismount((*(int *)((v0_0 + 0x28))))) != 0;
    if (v0_2) goto L_8C1EC564;
    goto L_8C1EC672;
    L_8C1EC672:;
    close_file_handle(v0_0);
    v0_0 = (v0_1);
    goto L_8C1EC67A;
    L_8C1EC564:;
    if (((*(signed char *)(((((*(int *)((v0_0 + 0x28))) * v0_3) + v0_4) + 0x8))) != 0)) goto L_8C1EC576;
    goto L_8C1EC672;
    L_8C1EC576:;
    v0_2 = (vmsio_isready((*(int *)((v0_0 + 0x28))))) != 0;
    if (v0_2) goto L_8C1EC588;
    vmsfs_unmount((*(int *)((v0_0 + 0x28))));
    goto L_8C1EC672;
    L_8C1EC588:;
    v0_2 = (int)(buIsFormat((*(int *)((v0_0 + 0x28))))) < 0;
    if (v0_2) goto L_8C1EC672;
    v0_2 = ((*(int *)((v0_0 + 0x28))));
    if (((*(int *)((v0_0 + 0x4))) == 0)) goto L_8C1EC670;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C1EC5BC;
    *(unsigned int *)((((v0_2 * v0_3) + v0_4) + 0x30)) = 0x1;
    v0_1 = *(int *)((((v0_2 * v0_3) + v0_4) + 0x4));
    *(unsigned int *)((((v0_2 * v0_3) + v0_4) + 0x34)) = (*(int *)((((((v0_1 << 2) + v0_1) << 2) << 2) + 0x8C20C75C)));
    v0_4 = (((v0_2 * v0_3) + v0_4));
    L_8C1EC5BC:;
    v0_3 = (*(int *)((v0_0 + 0x8))) != 1;
    v0_1 = ((direntry(v0_2, (*(int *)((v0_0 + 0x2C))))));
    if (v0_3) goto L_8C1EC5F8;
    v0_4 = (0xCC);
    L_8C1EC5FA:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_0 + 0x1)));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x2, (*(int *)((v0_0 + 0x38))));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x18, (*(int *)((v0_0 + 0x30))));
    v0_3 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(v0_1, 0x1A, (*(short *)((v0_0 + 0x2))));
    v0_3 = ((v0_1 + 0x10));
    v0_4 = ((v0_1 + 0x4));
    v0_5 = ((v0_0 + 0x10));
    L_8C1EC63C:;
    if (((unsigned int)v0_4 < (unsigned int)v0_3)) goto L_8C1EC636;
    v0_4 = (v0_3);
    v0_5 = ((v0_0 + 0x20));
    v0_1 = ((v0_1 + 0x18));
    L_8C1EC652:;
    if (((unsigned int)v0_4 < (unsigned int)v0_1)) goto L_8C1EC64C;
    direntry_dirty(v0_2, (*(int *)((v0_0 + 0x2C))));
    v0_3 = write_dir(v0_2);
    v0_1 = (v0_3);
    if (((int)v0_3 < 0)) goto L_8C1EC672;
    write_fat(v0_2);
    L_8C1EC670:;
    v0_1 = (0x0);
    goto L_8C1EC672;
    L_8C1EC64C:;
    *(unsigned char *)((v0_4 + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    goto L_8C1EC652;
    L_8C1EC636:;
    *(unsigned char *)((v0_4 + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_4 = ((v0_4 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    goto L_8C1EC63C;
    L_8C1EC5F8:;
    v0_4 = (0x33);
    goto L_8C1EC5FA;
}

int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int stk[22];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_1 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 16)) = (v0_2 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((v0_2 * 0x148) + 0x8C464598);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (v0_2);
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2))) == 0)) goto L_8C1EC214;
    v0_5 = (vmsio_isready(v0_2)) != 0;
    if (v0_5) goto L_8C1EC1FE;
    vmsfs_unmount(v0_2);
    L_8C1EC214:;
    v0_0 = (0xFFFFFF01);
    L_8C1EC30E:;
    return v0_0;
    L_8C1EC1FE:;
    v0_5 = (vmsio_ismount(v0_2)) == 0;
    if (v0_5) goto L_8C1EC214;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) + 0x8C464598) + 0x8))) != 0)) goto L_8C1EC21A;
    goto L_8C1EC214;
    L_8C1EC21A:;
    v0_5 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_5) goto L_8C1EC22A;
    v0_0 = (0xFFFFFF03);
    goto L_8C1EC30E;
    L_8C1EC22A:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x38))) == 0)) goto L_8C1EC2B0;
    v0_5 = (int)(check_isopen()) < 0;
    if (v0_5) goto L_8C1EC2B0;
    v0_5 = (int)(search_dir(v0_2, v0_1, (((int)stk + 4) + 0x10))) < 0;
    if (v0_5) goto L_8C1EC280;
    v0_0 = (0xFFFFFF06);
    goto L_8C1EC30E;
    L_8C1EC280:;
    v0_5 = (int)(search_exec_file(v0_2, (((int)stk + 4) + 0x10))) < 0;
    if (v0_5) goto L_8C1EC294;
    v0_0 = (0xFFFFFF09);
    goto L_8C1EC30E;
    L_8C1EC294:;
    v0_3 = (unsigned short)(get_fat(v0_2, 0x0, v0_3, v0_4)) != 0xFFFC;
    if (v0_3) goto L_8C1EC2B0;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_8C1EC2B0;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_8C1EC2D0;
    v0_0 = (0xFFFFFF07);
    goto L_8C1EC30E;
    L_8C1EC2B0:;
    v0_0 = (0xFFFFFF08);
    goto L_8C1EC30E;
    L_8C1EC2D0:;
    *(unsigned int *)((v0_4 + 0x8)) = 0x1;
    *(unsigned int *)((v0_4 + 0x4)) = 0x2;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = 0x1;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_2 = ((v0_4 + 0x10));
    L_8C1EC2F6:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_8C1EC2F0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_8C1EC30E;
    L_8C1EC2F0:;
    *(unsigned char *)((v0_2 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x1));
    goto L_8C1EC2F6;
}

int vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int stk[20];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_3 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    if (((*(signed char *)(((v0_3 * 0x148) + 0x8C46459A))) == 0)) goto L_8C1EC372;
    v0_3 = (vmsio_isready(v0_2)) != 0;
    if (v0_3) goto L_8C1EC35A;
    vmsfs_unmount(v0_2);
    L_8C1EC372:;
    v0_0 = (0xFFFFFF01);
    L_8C1EC456:;
    return v0_0;
    L_8C1EC35A:;
    v0_3 = (vmsio_ismount(v0_2)) == 0;
    if (v0_3) goto L_8C1EC372;
    if (((*(signed char *)(((v0_2 * 0x148) + 0x8C4645A0))) != 0)) goto L_8C1EC3B4;
    goto L_8C1EC372;
    L_8C1EC3B4:;
    v0_3 = (int)(buIsFormat(v0_2)) >= 0;
    if (v0_3) goto L_8C1EC3C4;
    v0_0 = (0xFFFFFF03);
    goto L_8C1EC456;
    L_8C1EC3C4:;
    v0_3 = (int)(check_isopen()) < 0;
    if (v0_3) goto L_8C1EC3FC;
    v0_3 = (int)(search_dir(v0_2, v0_1, (((int)stk + 4) + 0x8))) < 0;
    if (v0_3) goto L_8C1EC3F0;
    v0_4 = clear_file(v0_2, v0_1);
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_8C1EC3F0;
    v0_0 = (v0_3);
    goto L_8C1EC456;
    L_8C1EC3F0:;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_8C1EC3FC;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_8C1EC41C;
    v0_0 = (0xFFFFFF07);
    goto L_8C1EC456;
    L_8C1EC3FC:;
    v0_0 = (0xFFFFFF08);
    goto L_8C1EC456;
    L_8C1EC41C:;
    *(unsigned int *)((v0_4 + 0x8)) = v0_0;
    *(unsigned int *)((v0_4 + 0x4)) = 0x1;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = v0_0;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_3 = ((v0_4 + 0x10));
    L_8C1EC43E:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_8C1EC438;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_8C1EC456;
    L_8C1EC438:;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((v0_3 + 0x1));
    goto L_8C1EC43E;
}

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

int check_caps(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;

    t10 = *(int *)((a4 + 0x1C));
    t11 = *(int *)((t10 + 0x0));
    if (((int)t11 >= (int)0x1) && (((int)t11 <= (int)0x7FF) && ((t0 = *(int *)((t10 + 0x0)), t1 = *(int *)((t10 + 0x8)), t0 == t1) && ((t2 = *(int *)((t10 + 0xC)), (int)t2 >= 0) && ((t3 = *(int *)((t10 + 0x0)), (int)t2 < (int)t3) && ((t4 = *(int *)((t10 + 0x14)), (int)t4 >= 0) && ((t5 = *(int *)((t10 + 0x0)), (int)t4 < (int)t5) && ((t6 = *(int *)((t10 + 0x34)), (int)t6 >= 0) && ((t7 = *(int *)((t10 + 0x0)), (int)t6 <= (int)t7) && ((t8 = *(int *)((t10 + 0x38)), (int)t8 >= 0) && (t9 = *(int *)((t10 + 0x0)), (int)t8 <= (int)t9))))))))))) {
        if ((*(int *)(((*(int *)0x8C464594) + 0x8))) == 0) {
            if ((int)(*(short *)((a4 + 0x10))) >= (int)(*(int *)((t10 + 0x10)))) {
                if ((int)(*(short *)((a4 + 0x12))) >= (int)(*(int *)((t10 + 0x18)))) {
                    t0 = *(int *)((t10 + 0x0));
                    if (t0 != 0xFF) {
                        if (t0 != 0x1FF) {
                            if (t0 != 0x3FF) {
                                if (t0 != 0x7FF) {
                                    return 0xFFFFFFFF;
                                }
                                *(unsigned int *)((a4 + 0x4)) = 0x3;
                                return 0x0;
                            }
                            *(unsigned int *)((a4 + 0x4)) = 0x2;
                            return 0x0;
                        }
                        *(unsigned int *)((a4 + 0x4)) = 0x1;
                        return 0x0;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x0;
                    return 0x0;
                }
                return 0xFFFFFFFF;
            }
            return 0xFFFFFFFF;
        }
        t0 = *(int *)((t10 + 0x0));
        if (t0 != 0xFF) {
            if (t0 != 0x1FF) {
                if (t0 != 0x3FF) {
                    if (t0 != 0x7FF) {
                        return 0xFFFFFFFF;
                    }
                    *(unsigned int *)((a4 + 0x4)) = 0x3;
                    return 0x0;
                }
                *(unsigned int *)((a4 + 0x4)) = 0x2;
                return 0x0;
            }
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            return 0x0;
        }
        *(unsigned int *)((a4 + 0x4)) = 0x0;
        return 0x0;
    }
    return 0xFFFFFFFF;
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

int make_header(int a4, int a5)
{
    int stk[2];
    register int t13;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a5 + 0x0)));
    if ((*(int *)((0x10C4 + (*(int *)0x8C47317C)))) == 1) {
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)((((int)stk + 4) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)(((((int)stk + 4) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0)));
    } else {
        *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((((int)stk + 4) + 0x0)));
        *(unsigned char *)((a4 + 0x9)) = (*(signed char *)(((((int)stk + 4) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xA)) = (*(signed char *)((((((int)stk + 4) + 0x1) + 0x1) + 0x0)));
        *(unsigned char *)((a4 + 0xB)) = (*(signed char *)(((((((int)stk + 4) + 0x1) + 0x1) + 0x1) + 0x0)));
    }
    t13 = *(signed char *)((a4 + 0x8));
    if ((unsigned char)t13 == 0xFF) {
        *(unsigned int *)((a4 + 0x14)) = 0xFFFFFFFF;
    } else {
        if ((int)(unsigned char)t13 < (int)0xE0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = (*(int *)(((a5 + 0x4) + 0x0)));
        }
    }
    return 0x0;
}

int _rsfts(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t6;

    if ((short)(0x8 - a6) != 0) {
        if ((int)a5 > 0) {
            t0 = a4;
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t4 = *(signed char *)((t0 + 0x0));
                t2 = (t2 + 0x1);
                *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x0))) << (int)(-(short)a6));
                t6 = ((*(signed char *)((t0 + 0x0))) | t1);
                t1 = (unsigned char)(t4 & ((int)0xFF << (int)(-(short)(0x8 - a6))));
                *(unsigned char *)((t0 + 0x0)) = t6;
                t1 = ((unsigned int)t1 << (int)(short)(0x8 - a6));
                t0 = (t0 + 0x1);
                if ((int)t2 >= (int)a5) {
                    break;
                }
            }
            return (((unsigned char)t1) != 0);
        }
        return 0;
    }
    return 0;
}

int mpdrv_clear_deviceinfo(int a4)
{
    register int t1;

    mpdrv_memset_l(a4, 0x0, 0x1E);
    *(unsigned char *)(((a4 + 0x14) + 0x0)) = 0x28;
    *(unsigned char *)((a4 + 0x15)) = 0x6E;
    *(unsigned char *)((a4 + 0x16)) = 0x6F;
    *(unsigned char *)((a4 + 0x17)) = 0x6E;
    *(unsigned char *)((a4 + 0x18)) = 0x65;
    *(unsigned char *)((a4 + 0x19)) = 0x29;
    t1 = (a4 + 0x1A);
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x20;
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)(a4 + 0x33)) {
            break;
        }
    }
    *(unsigned char *)((a4 + 0x33)) = 0x0;
    return 0x0;
}

int fmMngNum2Bit(int a4, int a5, int a6)
{
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t0;

    t1 = (((a6 << 2) << 2) << 2);
    t3 = a4;
    t4 = a5;
    t5 = a6;
    for (;;) {
        if ((int)t1 <= 0) {
            break;
        }
        if ((int)t3 >= (int)0x8) {
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            t4 = (t4 + 0x1);
            t3 = (t3 - 8);
        } else {
            if ((int)t3 > 0) {
                t0 = 0x8;
                for (;;) {
                    t5 = (t5 << 1);
                    if ((int)t3 > 0) {
                        t3 = (t3 - 1);
                    } else {
                        t5 = (t5 | (0x1));
                    }
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = t5;
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0xFFFFFFFF;
            }
            t4 = (t4 + 0x1);
        }
        t1 = (t1 - 1);
    }
    return 0x0;
}

int _lsfts(int a4, int a5, int a6)
{
    register int t11;
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    if ((short)(0x8 - a6) != 0) {
        t11 = 0x0;
        if ((int)(a5 - 1) >= 0) {
            t0 = (a4 + (a5 - 1));
            t1 = (a5 - 1);
            t2 = 0x0;
            for (;;) {
                t4 = *(signed char *)((t0 + 0x0));
                t1 = (t1 - 1);
                *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(*(signed char *)((t0 + 0x0))) << (int)(short)a6);
                *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | t2);
                t2 = (unsigned char)(t4 & ((int)0xFF << (int)(short)(0x8 - a6)));
                t2 = ((unsigned int)t2 << (int)(-(short)(0x8 - a6)));
                t0 = (t0 - 1);
                if ((int)t1 < 0) {
                    break;
                }
            }
            t11 = t2;
        }
        if ((unsigned char)t11 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0;
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

int angDiff(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = abs(((unsigned short)a4 - (unsigned short)a5));
    t1 = (a4 - a5);
    if (((int)t0 >= (int)0x8000) && ((int)(unsigned short)a4 > (int)(unsigned short)a5)) {
        t1 = (-(unsigned short)(a5 - a4));
    }
    return t1;
}

int ndbKeyEqual(int a4, int a5)
{
    if ((*(signed char *)((a4 + 0x0))) == (*(signed char *)((a5 + 0x0)))) {
        if ((*(signed char *)((a4 + 0x1))) == (*(signed char *)((a5 + 0x1)))) {
            if ((*(signed char *)((a4 + 0x2))) == (*(signed char *)((a5 + 0x2)))) {
                if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)((a5 + 0x3)))) {
                    if ((*(signed char *)((a4 + 0x4))) != (*(signed char *)((a5 + 0x4)))) {
                        return 0x0;
                    }
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int rankNameMatch(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t5 = a4;
    t6 = a5;
    t7 = 0x3;
    t8 = a7;
    for (;;) {
        t9 = (t7 == 0);
        t7 = (t7 - 1);
        if (!t9 && (t0 = *(signed char *)((t6 + 0x0)), t1 = t0, t1 != 0)) {
            t9 = (*(signed char *)((t6 + 0x0)));
            t8 = t9;
            if ((t9 != 95) && (t2 = *(signed char *)((t5 + 0x0)), t2 != t8)) {
                t9 = 0x0;
                return t9;
            }
            t6 = (t6 + 0x1);
            t5 = (t5 + 0x1);
            continue;
        }
        break;
    }
    if (((int)t7 >= 0) && (t3 = *(signed char *)((t6 + 0x0)), t4 = *(signed char *)((t5 + 0x0)), t4 != t3)) {
        return 0x0;
    }
    return 0x1;
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

int gdFsCheckMedia(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0x8C209614;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return 0x1;
        }
    }
    return 0x0;
}

int unlockTestW2(int a4)
{
    if ((int)a4 >= (int)0x5) {
        if ((((int)0x1 << (int)a4) & (*(int *)0x8C40C310)) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int resTitleLoadInit(void)
{
    *(unsigned int *)0x8C343FF4 = 0x0;
    *(unsigned int *)0x8C343FE8 = 0x0;
    *(unsigned int *)0x8C287C50 = 0x3E8;
    *(unsigned int *)0x8C301970 = 0x1;
    return 0x0;
}

int selSlot0FlagSet(void)
{
    if ((*(int *)0x8C34326C) != 0) {
        return 0x1;
    }
    return 0x0;
}

float emotRetOne(void)
{
    return 1.0f;
}
