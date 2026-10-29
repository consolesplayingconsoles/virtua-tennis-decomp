/* Straight-line functions with calls and guards (batch gen_y): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CopyExtraBufMono(int, int, int, int);
int ADXB_CopyExtraBufSte(int, int, int, int);
int ADXB_EvokeExpandMono(int, int, int, int);
int ADXB_EvokeExpandSte(int, int, int, int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Close(int);
int ADXPD_GetNumBlk(int, int);
int ADXRNA_GetTime(int, int, int);
int ADXSTM_GetCurOfst(int, int);
int ADXT_SetOutVol(int, int);
int CalcShadow4Normal(int, int);
int FUN_0c02e1ce(int);
int FUN_0c02e282(int);
int FUN_0c02e458(int);
int FUN_0c038ee6(void);
int FUN_0c038eec(int);
int FUN_0c03b544(int, int);
int FUN_0c03b698(int);
int FUN_0c03bea0(int, int, int);
int FUN_0c03c792(int, int, int, int);
int FUN_0c03ce68(int, int, int, int, int, int, float, float);
int FUN_0c040cea(int, int);
int FUN_0c0525fc(int, int, int, int);
int FUN_0c0526a0(void);
int FUN_0c052c9e(void);
int FUN_0c05317e(void);
int FUN_0c0533ba(void);
int FUN_0c0534ec(int, int, int, int);
int FUN_0c0545ac(int, int);
int FUN_0c054698(void);
int FUN_0c054ffe(void);
int FUN_0c0551c6(int, int);
int FUN_0c0552b0(void);
int FUN_0c057728(int, int, int);
int FUN_0c059110(void);
int FUN_0c0591ea(int, int, int);
int FUN_0c059254(void);
int FUN_0c05b11c(void);
int FUN_0c05cdb4(void);
int FUN_0c05ce38(void);
int FUN_0c05fd70(int);
int nlPrintInitFontTexture(void);
int FUN_0c077590(int, int, int);
int FUN_0c077df0(int);
int FUN_0c07e820(int, int, int);
int FUN_0c07e880(int);
int FUN_0c07e8a0(int, int);
int FUN_0c07e960(int, int, int, int);
int FUN_0c07f5c0(int);
int FUN_0c07ff20(int, int, int);
int FUN_0c080190(int, int, int);
int FUN_0c080270(int, int, int);
int FUN_0c0802b0(int, int);
int FUN_0c0813e0(int, int, int);
int FUN_0c085dfc(int, int, int);
int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int FUN_0c1534e8(int, int, int);
int FUN_0c1534fc(int, int, int);
int FUN_0c156742(int, int, int);
int FUN_0c156934(int, int, int, int, int, int);
int FUN_0c15887e(int, int, int);
int FUN_0c15888e(int);
int FUN_0c159ae0(void);
int FUN_0c15c3c8(int, int, int, int);
int FUN_0c16883e(int);
int FUN_0c168856(int);
int FUN_0c16887a(int, int, int);
int FUN_0c168e10(int);
int FUN_0c170820(int, int);
int FUN_0c170834(int, int, int);
int fmMngClearBuf(int, int);
int FUN_0c1709a6(int);
int FUN_0c172c3c(int, int, int, int, int);
int GetCollision2D(int, int, float);
int GetMenuMode(int);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int adxf_CloseSjStm(int);
int adxf_CreateAdxFs(void);
int adxf_SetAfsFileInfo(int, int, int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxf_SetFileInfo(int, int);
int buGetFileInfo(int, int, int);
int buIsFormat(int);
int buIsReady(int);
int buStat(int);
int camSetAngles(int, int, int, int);
int camSetMode(int);
int check_file_correct(int, int);
int check_isopen(int, int);
int direntry(int, int);
int extRand(int);
int gdc_StopStreamSongAll(void);
int get_fat(int, int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
int kmCreateFrameBufferSurface(int, int, int, int, int);
int kmCreateTABuffer(int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmCreateVertexBuffer(int, int, int, int, int);
int kmLoadTexture(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiFBinit(void);
int kmiInitInterrupt(void);
int kmiInitializeDevice(void);
int kmiInitializeFog(void);
int kmiInitializeTA(void);
int kmiReadRegister(int);
int kmiSetTAEnvironment(int, int, int, int, int, int);
int kmiTXalloc(int, int);
int kmiVQFBfree(int);
int kmiVQalloc(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int memset(int, int, int, int);
int mwlRnaStartCopy(int, int, int, int, int);
int nlLoadDummyTexture(void);
int nlMultiMatrix8(int);
int nlOuterProduct(int, int, int);
int nlPerspective(int, float, float, float);
int nlPuts(int);
int nlUnitMatrix(void);
int nlsndStreamChgFx(int, int, int);
int nlsndStreamSetHdFx(int, int, int);
int nlsndStreamSetHdGain(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int open_file_handle(int);
int pdVibIsReady(int, int, int, int);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int setTechnicalBonus(int, int, int, int);
int set_event(int, int);
int set_vmstime(int, int);
int setjmp(int);
int thunk_FUN_0c170880(int, int, int);
int vmsfs_c_getstate(int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int, int, int, int);


int pdVibSetStopTime(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t21;
    int t8;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t19;
    int t20;
    int stk[16];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 24));
    t1 = pdVibIsReady(t0, a5, a6, a7);
    t21 = 0xFFFFFFFE;
    if (t1 != 0) {
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x10)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0xC)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x8)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x4)) = 0x0;
        *(unsigned int *)(((((int)stk + 16) + 0xC) + 0x0)) = 0x0;
        t8 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t2 = 0x0;
            t3 = 0x0;
            do {
                t4 = *(int *)(((int)stk + 20));
                t3 = (t3 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = (t4 + 0x1);
                t5 = *(signed char *)((((t4 + 0x1) - 1) + 0x0));
                t2 = (t2 | (((int)(unsigned char)t5 >= 0) ? (0x1 << ((unsigned char)t5 & 31)) : ((-(int)(unsigned char)t5 & 31) ? ((int)0x1 >> (-(int)(unsigned char)t5 & 31)) : ((int)0x1 >> 31))));
            } while ((unsigned int)t3 < (unsigned int)a7);
            t8 = t2;
        }
        *(unsigned char *)(((((int)stk + 16) + 0xC) + 0x0)) = ((unsigned int)(unsigned short)t8 >> 8);
        *(unsigned char *)((((((int)stk + 16) + 0xC) + 0x1) + 0x0)) = t8;
        if ((unsigned int)0x0 < (unsigned int)a7) {
            t10 = 0x0;
            t11 = (((((int)stk + 16) + 0xC) + 0x1) + 0x1);
            do {
                t12 = *(int *)(((int)stk + 16));
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = (t12 + 0x1);
                t13 = *(signed char *)((((t12 + 0x1) - 1) + 0x0));
                *(unsigned char *)((t11 + 0x0)) = t13;
                t11 = (t11 + 0x1);
            } while ((unsigned int)t10 < (unsigned int)a7);
        }
        *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(a7 + 0x5) >> 2);
        t18 = *(int *)(((int)stk + 24));
        t19 = kdSetBlockWrite(t18, 0x100, 0x0, 0x0, 0x0, (((int)stk + 16) + 0xC), ((unsigned int)(a7 + 0x5) >> 2));
        t20 = 0x0;
        if ((int)t19 < 0) {
            t20 = 0xFFFFFFFF;
        }
        t21 = t20;
    }
    return t21;
}


int ADXF_Open(int a4, int a5)
{
    int t2;
    int t8;
    int t3;
    int t6;

    adxf_SetCmdHstry(0x1, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetFileInfo(t2, a4);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x1, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}


int ADXF_OpenAfs(int a4, int a5)
{
    int t2;
    int t8;
    int t3;
    int t6;

    adxf_SetCmdHstry(0x2, 0x0, a4, a5, 0xFFFFFFFF);
    ADXCRS_Lock();
    t2 = adxf_CreateAdxFs();
    t8 = t2;
    if (t2 != 0) {
        t3 = adxf_SetAfsFileInfo(t2, a4, a5);
        t6 = t2;
        if ((int)t3 < 0) {
            ADXF_Close(t2);
            t6 = 0x0;
        }
        t8 = t6;
    }
    ADXCRS_Unlock();
    adxf_SetCmdHstry(0x2, 0x1, a4, a5, 0xFFFFFFFF);
    return t8;
}


int adxf_ExecOne(int a4)
{
    int t0;
    int t15;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t10;
    int t7;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int stk[4];

    t0 = *(signed char *)((a4 + 0x1));
    t15 = t0;
    if (t0 == 2) {
        t1 = *(int *)((a4 + 0x4));
        t2 = FUN_0c168e10(t1);
        *(unsigned char *)((a4 + 0x1)) = t2;
        t3 = *(int *)((a4 + 0x4));
        ADXSTM_GetCurOfst(t3, ((int)stk + 4));
        t5 = *(int *)(((int)stk + 4));
        *(unsigned int *)((a4 + 0x24)) = t5;
        t6 = *(signed char *)((a4 + 0x1));
        if (t6 != 3) {
            t10 = t6;
            if (t6 == 4) {
                t7 = *(int *)((a4 + 0x18));
                t8 = *(int *)((a4 + 0x24));
                *(unsigned int *)((a4 + 0x18)) = (t7 + t8);
                t9 = adxf_CloseSjStm(a4);
                t10 = t9;
            }
            t14 = t10;
        } else {
            t11 = *(int *)((a4 + 0x18));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a4 + 0x18)) = (t11 + t12);
            t13 = adxf_CloseSjStm(a4);
            t14 = t13;
        }
        t15 = t14;
    }
    return t15;
}


int vmsfs_scanfile(int a4, int a5, int a6)
{
    int t0;
    int t13;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[18];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = search_dir(a4, a5, (((int)stk + 4) + 0x4));
    t13 = 0xFFFFFF05;
    if ((int)t0 >= 0) {
        t1 = direntry(a4, t0);
        t2 = *(int *)(((int)stk + 20));
        *(unsigned short *)((a6 + 0x0)) = t2;
        t3 = t1;
        t4 = a4;
        t5 = t2;
        t6 = (a6 + 0x2);
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)(((int)stk + 48));
            if ((int)t7 >= (int)t8) break;
            t4 = a4;
            t9 = get_fat(t4, t5);
            t3 = t9;
            t4 = (unsigned short)t3;
            t5 = t4;
            *(unsigned short *)((t6 + 0x0)) = t5;
            t7 = (t7 + 0x1);
            t6 = (t6 + 0x2);
        }
        t10 = *(int *)(((int)stk + 4));
        t11 = check_file_correct(a4, t10);
        t12 = t0;
        if ((int)t11 < 0) {
            t12 = t11;
        }
        t13 = t12;
    }
    return t13;
}


void ADX_DecodeInfo(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;

    if ((int)a5 < (int)0x10) {
        return;
    }
    t0 = *(short *)((a4 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
        return;
    }
    t1 = *(short *)((a4 + 0x2));
    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFFFFFF00)) + 0x4);
    t2 = *(signed char *)((a4 + 0x4));
    *(unsigned char *)((a7 + 0x0)) = t2;
    t3 = *(signed char *)((a4 + 0x5));
    *(unsigned char *)((a9 + 0x0)) = t3;
    t4 = *(signed char *)((a4 + 0x6));
    *(unsigned char *)((a8 + 0x0)) = t4;
    t5 = *(signed char *)((a4 + 0x7));
    *(unsigned char *)((a10 + 0x0)) = t5;
    t6 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t6 >> 16) >> 8) | (((int)t6 >> 8) & 0xFF00)) | ((t6 << 8) & 0xFF0000)) | ((t6 << 16) << 8));
    t7 = *(int *)((a4 + 0xC));
    *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t7 >> 16) >> 8) | (((int)t7 >> 8) & 0xFF00)) | ((t7 << 8) & 0xFF0000)) | ((t7 << 16) << 8));
    t8 = *(signed char *)((a9 + 0x0));
    t9 = *(signed char *)((a8 + 0x0));
    t10 = (int)((int)(((t8 - 2) << 2) << 1) / (int)t9);
    *(unsigned int *)((a13 + 0x0)) = t10;
}


void mwlRnaAddFlshPos(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)((a4 + 0x58));
    t1 = *(int *)((a4 + 0x50));
    t2 = *(int *)((a4 + 0x28));
    t3 = (int)((int)(t1 + t0) % (int)t2);
    *(unsigned int *)(((0x50 + a4) + 0x0)) = t3;
    t4 = *(int *)(((0x58 + a4) + 0x0));
    t5 = *(int *)((a4 + 0x54));
    *(unsigned int *)((a4 + 0x54)) = (t5 + t4);
    *(unsigned int *)((a4 + 0x58)) = 0x0;
}


void ADXB_EntryData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t1 = *(signed char *)((a4 + 0xF));
        t2 = (int)((int)a6 / (int)t1);
        t7 = t2;
    } else {
        *(unsigned int *)((a4 + 0x50)) = a5;
        t3 = *(signed char *)((a4 + 0xD));
        t4 = t3;
        if ((int)t3 < 0) {
            t4 = (t3 + 0x7);
        }
        t5 = *(signed char *)((a4 + 0xE));
        t6 = (int)((int)a6 / (int)((((t4 >> 1) >> 1) >> 1) * t5));
        t7 = t6;
    }
    *(unsigned int *)(((0x54 + a4) + 0x0)) = t7;
    *(unsigned int *)((a4 + 0x84)) = 0x0;
    *(unsigned int *)((a4 + 0xA0)) = 0x0;
    *(unsigned int *)((a4 + 0xA4)) = 0x0;
}


int ADXB_EvokeDecode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t14;
    int t11;
    int t12;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)(((a4 + 0x50) + 0x4));
    t1 = *(int *)(((a4 + 0x50) + 0x8));
    t2 = (int)((int)t0 / (int)t1);
    t3 = *(int *)(((a4 + 0x50) + 0x28));
    t4 = *(int *)(((a4 + 0x50) + 0x10));
    t5 = *(int *)(((a4 + 0x50) + 0x20));
    t6 = *(int *)(((a4 + 0x50) + 0x24));
    t7 = *(int *)(((a4 + 0x50) + 0x18));
    t8 = (int)((int)((t3 + t4) - 1) / (int)t4);
    t9 = (int)((int)((t3 + t4) - 1) % (int)t4);
    t10 = (int)((int)(((t7 - t5) + t4) - 1) / (int)t4);
    t14 = t10;
    if ((int)t8 < (int)t10) {
        t11 = *(int *)(((a4 + 0x50) + 0x18));
        t12 = t10;
        if ((int)(((t10 * t4) - ((t4 - t9) - 1)) + t5) < (int)t11) {
            t12 = (t10 + 0x1);
        }
        t14 = t12;
    }
    t15 = t6;
    if ((int)t3 < (int)t6) {
        t15 = (t6 + ((t4 - t9) - 1));
    }
    t16 = (int)((int)t15 / (int)t4);
    t17 = t2;
    if ((int)t2 > (int)t16) {
        t17 = t16;
    }
    t18 = t17;
    if ((int)t17 > (int)t8) {
        t18 = t8;
    }
    t19 = *(int *)(((a4 + 0x50) + 0x8));
    t20 = t18;
    if ((int)t18 > (int)t14) {
        t20 = t14;
    }
    if (t19 == 2) {
        return ADXB_EvokeExpandSte(a4, t20, t16, t14);
    }
    return ADXB_EvokeExpandMono(a4, t20, t16, t14);
}


int ADXB_EndDecode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;

    t0 = *(int *)(((a4 + 0x50) + 0x10));
    t1 = *(int *)(((a4 + 0x50) + 0xC));
    t2 = *(int *)(((a4 + 0x50) + 0x28));
    t3 = *(int *)((a4 + 0x40));
    t4 = *(int *)(((a4 + 0x50) + 0x20));
    t5 = *(int *)(((a4 + 0x50) + 0x14));
    t6 = *(int *)((a4 + 0x44));
    t7 = (int)((int)((t0 + t2) - 1) / (int)t0);
    t8 = (int)((int)((t0 + t2) - 1) % (int)t0);
    t9 = *(int *)((a4 + 0x8));
    t10 = ADXPD_GetNumBlk(t9, ((t0 + t2) - 1));
    t11 = *(int *)(((a4 + 0x50) + 0x8));
    t12 = (int)((int)(t0 * t10) / (int)t11);
    t13 = t12;
    if ((int)t7 <= (int)t10) {
        t13 = (t12 - ((t0 - t8) - 1));
    }
    *(unsigned int *)((a4 + 0xA0)) = t13;
    *(unsigned int *)((a4 + 0xA4)) = (t1 * t10);
    if ((int)(t4 + t13) >= (int)t3) {
        t14 = *(int *)(((a4 + 0x50) + 0x8));
        if (t14 == 2) {
            return ADXB_CopyExtraBufSte(t5, t3, t6, ((t4 + t13) - t3));
        }
        return ADXB_CopyExtraBufMono(t5, t3, t6, ((t4 + t13) - t3));
    }
    return 0xA4;
}


int mwSbSetVol(int a4, int a5)
{
    int t5;
    int t3;
    int t0;
    int t2;
    int t1;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;

    *(unsigned int *)((a4 + 0x3C)) = a5;
    t5 = 0x0;
    if ((int)a5 > (int)0xFFFFFC41) {
        t3 = 0x7F;
        if ((int)a5 < 0) {
            t0 = (int)((int)(((a5 << 8) - a5) - 128) / (int)0xFFFFFC41);
            t2 = 0x7F;
            if ((int)(0x7F - (t0 << 1)) <= (int)0x7F) {
                t1 = (0x7F - (t0 << 1));
                if ((int)(0x7F - (t0 << 1)) < 0) {
                    t1 = 0x0;
                }
                t2 = t1;
            }
            t3 = t2;
        }
        t5 = t3;
    }
    t8 = *(int *)((a4 + 0x18));
    if (t8 == 0) {
        t9 = *(int *)((a4 + 0x1C));
        t10 = *(int *)((t9 + 0x4));
        FUN_0c07ff20(t10, 0x0, t5);
        t12 = *(int *)((a4 + 0x1C));
        t13 = *(int *)((t12 + 0x4));
        return FUN_0c07ff20(t13, 0x1, t5);
    }
    t14 = *(short *)((a4 + 0x6));
    FUN_0c080190(t14, 0x0, t5);
    t16 = *(short *)((a4 + 0x6));
    return FUN_0c080190(t16, 0x1, t5);
}


int mwlSbSetFx(int a4, int a5, int a6)
{
    int t4;
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;
    int t8;

    *(unsigned int *)((a4 + 0x48)) = a5;
    *(unsigned int *)((a4 + 0x4C)) = a6;
    t4 = 0x0;
    if ((int)a6 >= (int)0xFFFFFFD6) {
        t2 = 0xF;
        if ((int)a6 < 0) {
            t0 = (int)((int)a6 / (int)0x3);
            t2 = (t0 + 0xF);
        }
        t4 = t2;
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdFx(t7, a5, t4);
    }
    t8 = *(short *)((a4 + 0x6));
    return nlsndStreamChgFx(t8, a5, t4);
}


int mwlSbSetPitch(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;

    t0 = a5;
    if ((int)a5 >= (int)0x3F) {
        t0 = 0x3F;
    }
    t1 = t0;
    if ((int)t0 <= (int)0xFFFFFFC0) {
        t1 = 0xFFFFFFC0;
    }
    *(unsigned int *)((a4 + 0x50)) = t1;
    t2 = a6;
    if ((int)a6 >= (int)0x63) {
        t2 = 0x63;
    }
    t3 = t2;
    if ((int)t2 <= (int)0xFFFFFF9D) {
        t3 = 0xFFFFFF9D;
    }
    *(unsigned int *)((a4 + 0x54)) = t3;
    t4 = (int)((int)(((t3 << 2) << 2) << 2) / (int)0x64);
    t5 = *(short *)((a4 + 0x6));
    FUN_0c080270(t5, t1, t3);
    t7 = *(short *)((a4 + 0x6));
    return FUN_0c0802b0(t7, t4);
}


int mwlSbSetGain(int a4, int a5)
{
    int t3;
    int t4;
    int t1;
    int t2;
    int t0;
    int t5;
    int t6;
    int t7;

    *(unsigned int *)((a4 + 0x5C)) = a5;
    t3 = 0x5C;
    t4 = 0x0;
    if ((int)a5 >= (int)0xFFFFFFD6) {
        t1 = 0x5C;
        t2 = 0xF;
        if ((int)a5 < 0) {
            t0 = (int)((int)a5 / (int)0x3);
            t1 = t0;
            t2 = (t0 + 0xF);
        }
        t3 = t1;
        t4 = t2;
    }
    t5 = *(int *)((a4 + 0x18));
    if (t5 == 0) {
        t6 = *(int *)((a4 + 0x1C));
        t7 = *(int *)((t6 + 0x4));
        return nlsndStreamSetHdGain(t7, t4);
    }
    return t3;
}




void ADXPD_EntrySte(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x14)) = 0x2;
        *(unsigned int *)((a4 + 0x18)) = a5;
        *(unsigned int *)((a4 + 0x1C)) = a6;
        *(unsigned int *)((a4 + 0x20)) = a7;
        *(unsigned int *)((a4 + 0x24)) = a8;
        return;
    }
}
