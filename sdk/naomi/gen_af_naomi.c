/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int buIsFormat(int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int get_vmstime(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDMAValue(int, int);
int kmySetTADMA(int, int, int, int, int, int);
int kmyZeroMemory(int, int);
int kmyiCheckNativeHandle(int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int set_file_info(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int stageTexLoad(void);
int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7);
int nlsndStreamGetParam(int a4, int a5, int a6, int a7);
int kmyGetDisplayParametersInfo(int a4, int a5, int a6);
int kmyGetDMAHANDLE(int a4);
int kmySetVirticalFilterMode(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int nlPushMatrix(int a4);
int nlSetIntrPriority(int a4, int a5);
void nlLoadMatrix33on44(int a4);
int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8);


int nlPushMatrix(int a4)
{
    int t0;
    int t1;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u22;
    float u23;
    float u24;
    float u25;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u37;
    float u2[16];
    float u4[16];
    float u21[16];
    float u38[16];

    t0 = *(int *)0x8C450864;
    t1 = *(int *)0x8C45085C;
    _builtin_st_ext((float (*)[4])u2);
    *(float *)((((t0 + 0x40) - 0x8) + 0x0)) = u2[15];
    *(float *)(((((t0 + 0x40) - 0x8) + 0x0) + 4)) = u2[14];
    *(float *)(((((t0 + 0x40) - 0x8) - 0x8) + 0x0)) = u2[13];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) + 0x0) + 4)) = u2[12];
    *(float *)((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[11];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[10];
    *(float *)(((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[9];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[8];
    *(float *)((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[7];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[6];
    *(float *)(((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[5];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[4];
    *(float *)((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[3];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[2];
    *(float *)(((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0)) = u2[1];
    *(float *)((((((((((((t0 + 0x40) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u2[0];
    *(unsigned int *)0x8C450864 = (t0 + 0x40);
    
    *(unsigned short *)0x8C45085C = ((short)t1 + 0x1);
    if (a4 == 0) {
        _builtin_st_ext((float (*)[4])u4);
        u4[0] = u2[0];
        u4[1] = u2[1];
        u4[2] = u2[2];
        u4[3] = u2[3];
        u4[4] = u2[4];
        u4[5] = u2[5];
        u4[6] = u2[6];
        u4[7] = u2[7];
        u4[8] = u2[8];
        u4[9] = u2[9];
        u4[10] = u2[10];
        u4[11] = u2[11];
        u4[12] = u2[12];
        u4[13] = u2[13];
        u4[14] = u2[14];
        u4[15] = u2[15];
        _builtin_ld_ext((float (*)[4])u4);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    _builtin_prefetch((void *)a4);
    if ((a4 & 0x4) != 0) {
        u5 = *(float *)((a4 + 0x0));
        u6 = *(float *)(((a4 + 0x4) + 0x0));
        u7 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
        u8 = *(float *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
        u9 = *(float *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u10 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u11 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u12 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u13 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u14 = *(float *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u15 = *(float *)((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u16 = *(float *)(((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u17 = *(float *)((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u18 = *(float *)(((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u19 = *(float *)((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        u20 = *(float *)(((((((((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        _builtin_st_ext((float (*)[4])u21);
        u21[0] = u5;
        u21[1] = u6;
        u21[2] = u7;
        u21[3] = u8;
        u21[4] = u9;
        u21[5] = u10;
        u21[6] = u11;
        u21[7] = u12;
        u21[8] = u13;
        u21[9] = u14;
        u21[10] = u15;
        u21[11] = u16;
        u21[12] = u17;
        u21[13] = u18;
        u21[14] = u19;
        u21[15] = u20;
        _builtin_ld_ext((float (*)[4])u21);
        return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
    }
    u22 = *(float *)((a4 + 0x0));
    u23 = *(float *)(((a4 + 0x0) + 4));
    u24 = *(float *)(((a4 + 0x8) + 0x0));
    u25 = *(float *)((((a4 + 0x8) + 0x0) + 4));
    u26 = *(float *)((((a4 + 0x8) + 0x8) + 0x0));
    u27 = *(float *)(((((a4 + 0x8) + 0x8) + 0x0) + 4));
    u28 = *(float *)(((((a4 + 0x8) + 0x8) + 0x8) + 0x0));
    u29 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u30 = *(float *)((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u31 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u32 = *(float *)(((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u33 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u34 = *(float *)((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u35 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u36 = *(float *)(((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0));
    u37 = *(float *)((((((((((a4 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_st_ext((float (*)[4])u38);
    u38[0] = u23;
    u38[1] = u22;
    u38[2] = u25;
    u38[3] = u24;
    u38[4] = u27;
    u38[5] = u26;
    u38[6] = u29;
    u38[7] = u28;
    u38[8] = u31;
    u38[9] = u30;
    u38[10] = u33;
    u38[11] = u32;
    u38[12] = u35;
    u38[13] = u34;
    u38[14] = u37;
    u38[15] = u36;
    _builtin_ld_ext((float (*)[4])u38);
    return ((((int)(short)((((unsigned int)t1) << 16) | (((unsigned int)t1) >> 16)) > (int)(short)t1)) ? 1 : 0);
}

int nlSetIntrPriority(int a4, int a5)
{
    int t1;
    int t3;

    if (((int)a4 <= (int)0xC) && (((int)a5 >= 0) && ((int)a5 <= (int)0xF))) {
        _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
        t1 = *(signed char *)((((a4 << 2) + 0x8C1DCBE4) + 0x0));
        t3 = *(signed char *)((((a4 << 2) + 0x8C1DCBE4) + 0x1));
        *(unsigned short *)(((0xFFD00004 + t1) + 0x0)) = (((~(*(short *)((((a4 << 2) + 0x8C1DCBE4) + 0x2)))) & (*(short *)(((0xFFD00004 + t1) + 0x0)))) | (((int)t3 >= 0) ? (a5 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)a5 >> (-(int)t3 & 31)) : ((int)a5 >> 31))));
        *(volatile short *)(((0xFFD00004 + t1) + 0x0));
        _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF));
        return 0x1;
    }
    return 0x0;
}


void nlLoadMatrix33on44(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9[16];

    if (a4 == 0) {
    } else {
        u0 = *(float *)((a4 + 0x0));
        u1 = *(float *)(((a4 + 0x4) + 0x0));
        u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
        u3 = *(float *)(((((a4 + 0x4) + 0x4) + 0x8) + 0x0));
        u4 = *(float *)((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
        u5 = *(float *)(((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
        u6 = *(float *)((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x0));
        u7 = *(float *)(((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x0));
        u8 = *(float *)((((((((((a4 + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x8) + 0x4) + 0x4) + 0x0));
        _builtin_st_ext((float (*)[4])u9);
        u9[0] = u0;
        u9[1] = u1;
        u9[2] = u2;
        u9[3] = 0.0f;
        u9[4] = u3;
        u9[5] = u4;
        u9[6] = u5;
        u9[7] = 0.0f;
        u9[8] = u6;
        u9[9] = u7;
        u9[10] = u8;
        u9[11] = 0.0f;
        _builtin_ld_ext((float (*)[4])u9);
    }
}

