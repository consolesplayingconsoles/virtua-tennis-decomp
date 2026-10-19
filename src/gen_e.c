/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CheckAu(int);
int ADXB_CheckSpsd(void);
int ADXB_CheckWav(int);
int ADXB_Create(int, int, int, int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_EntryGetWrFunc(int, int, int);
int ADXB_ExecOneAdx(int);
int ADXB_ExecOneAiff(int);
int ADXB_ExecOneAu(int);
int ADXB_ExecOneSpsd(int);
int ADXB_ExecOneWav(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_ExecServer(void);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
int ADXF_Stop(int);
int ADXPD_Create(void);
int ADXRNA_ExecServer(void);
int ADXSJD_ExecHndl(int);
int ADXSJD_ExecServer(void);
int ADXSTM_ExecServer(void);
int ADXT_GetStat(int);
int ADX_DecodeMonoFloat(int, int, int, int, int, int);
int ADX_DecodeSteFloat(int, int, int, int, int, int, int, int);
int ADX_GetCoefficient(int, int, int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c14d2fa(int);
int FUN_0c15f998(int);
int FUN_0c1614de(void);
int FUN_0c17088c(int, int, int);
int FUN_0c170908(int, int, int);
int FUN_8c0103b8(void);
int FUN_8c010466(void);
int FUN_8c01069a(int);
int FUN_8c0108a6(void);
int FUN_8c010976(int, int);
int FUN_8c010afa(int);
int FUN_8c01205a(void);
int FUN_8c013394(int, int, int);
int FUN_8c0133ca(int, int, int, int, int, int, int);
int FUN_8c014c34(void);
int FUN_8c015b7e(int, float);
int FUN_8c015eea(float, float, float);
float FUN_8c016036(void);
int FUN_8c0160e6(int, int, int);
int FUN_8c0161e8(int, int);
int FUN_8c0165ec(void);
int FUN_8c0176bc(int, int);
int FUN_8c01a5d6(void);
int FUN_8c01b250(void);
int FUN_8c02f3ae(void);
int FUN_8c02f59e(int);
int FUN_8c02f62e(int);
int FUN_8c02f63a(int);
int FUN_8c02fb22(void);
int FUN_8c02ff90(int, int);
int FUN_8c03001e(void);
int FUN_8c032acc(void);
int FUN_8c036978(void);
int FUN_8c037e1c(int, int);
int FUN_8c03992c(int, int);
int FUN_8c03ce22(void);
int FUN_8c041e50(void);
int FUN_8c04264a(void);
int FUN_8c042920(int);
int FUN_8c05689c(void);
int FUN_8c0573f0(void);
int FUN_8c07ffea(void);
int FUN_8c081cfc(void);
int FUN_8c082884(void);
int FUN_8c083c38(void);
int FUN_8c084436(void);
int FUN_8c0847e8(void);
int FUN_8c08487e(int);
int FUN_8c08495c(int);
int FUN_8c084c26(int, int, int);
int FUN_8c0855b6(void);
int FUN_8c087d02(void);
int FUN_8c088a16(void);
int FUN_8c08cdec(void);
int FUN_8c08e654(int);
int FUN_8c08e694(int);
int FUN_8c08e718(int, int, int, int, int, int);
int FUN_8c08e7a4(int, int, int, int, int, int, int);
int FUN_8c08e840(int);
int FUN_8c08e944(int);
int FUN_8c08eac6(int, int, int);
int FUN_8c090af0(int, int);
int FUN_8c098262(int, int);
int FUN_8c098384(int, float);
int FUN_8c098538(float);
int FUN_8c09a720(int, int);
int FUN_8c09ac08(int, int);
int FUN_8c09b3ec(int, int);
int FUN_8c09f1d2(void);
int FUN_8c0a94fc(int, int);
int FUN_8c0ab234(int);
int FUN_8c0b0152(void);
int FUN_8c0b0bbc(void);
int FUN_8c0b1968(void);
int FUN_8c0b1c54(void);
int FUN_8c0b1e36(void);
int FUN_8c0b1f5a(void);
int FUN_8c0b2b54(void);
int FUN_8c0b2ca8(void);
int FUN_8c0b2cee(void);
int FUN_8c0b3090(void);
int FUN_8c0b34a4(void);
int FUN_8c0b5662(int, int, int);
int FUN_8c0b5a92(void);
int FUN_8c0b5ab4(void);
int FUN_8c0b5ad6(void);
int FUN_8c0b5b26(void);
int FUN_8c0b5b40(void);
int FUN_8c0b5b66(void);
int FUN_8c0b5b8c(void);
int FUN_8c0b6230(void);
int FUN_8c0baa88(void);
int FUN_8c0bac18(int, int, int, int);
int FUN_8c0bced0(int);
int FUN_8c0be222(int);
int FUN_8c0c4b18(void);
int FUN_8c0c4b62(void);
int FUN_8c0c4bbe(void);
int FUN_8c0c4cf0(void);
int FUN_8c0c4cf4(void);
int FUN_8c0c4d08(void);
int FUN_8c0c4de8(void);
int FUN_8c0c4e70(void);
int FUN_8c0c4ef2(void);
int FUN_8c0c4f38(void);
int FUN_8c0c4f72(void);
int FUN_8c0c4fe6(void);
int FUN_8c0c508e(void);
int FUN_8c0c50c4(void);
int FUN_8c0c50fa(void);
int FUN_8c0c52ba(int);
int FUN_8c0c52e2(void);
int FUN_8c0c5460(int);
int FUN_8c0c5516(void);
int FUN_8c0c5532(int);
int FUN_8c0c572c(int);
int FUN_8c0c5750(void);
int FUN_8c0c57c4(int);
int FUN_8c0c57e8(void);
int FUN_8c0c58b4(void);
int FUN_8c0c591a(void);
int FUN_8c0c599c(void);
int FUN_8c0c5b00(void);
int FUN_8c0c5c32(int);
int FUN_8c0c5d80(int);
int FUN_8c0c5ddc(void);
int FUN_8c0c64dc(void);
int FUN_8c0c6530(void);
int FUN_8c0c6cb0(void);
int FUN_8c0c6d7a(int, int);
int FUN_8c0c6e18(void);
int FUN_8c0c6e4a(int, int, int);
int FUN_8c0c926c(void);
int FUN_8c0c968c(void);
int FUN_8c0ca2c0(int);
int FUN_8c0ca5a8(void);
int FUN_8c0ca740(void);
int FUN_8c0caed4(void);
int FUN_8c0cb0e0(int);
int FUN_8c0cb8de(void);
int FUN_8c0cbb38(int);
int FUN_8c0cbf88(int, int, int, int);
int FUN_8c0cec24(int, int);
int FUN_8c0d0a98(int, int);
int FUN_8c0d0c68(void);
int FUN_8c0d129c(int, int, float);
int FUN_8c0d1744(void);
int FUN_8c0d28b4(void);
int FUN_8c0d28be(void);
int FUN_8c0d2ba6(int);
int FUN_8c0d3308(void);
int FUN_8c0d339a(void);
int FUN_8c0d33ba(void);
int FUN_8c0d33d0(void);
int FUN_8c0d5344(int, int, int);
int FUN_8c0d6746(int);
int FUN_8c0d677a(void);
int FUN_8c0d6818(int);
int FUN_8c0d684c(void);
int FUN_8c0d6890(void);
int FUN_8c0d6c12(int);
int FUN_8c0d6cc0(void);
int FUN_8c0d6e16(int, int);
int FUN_8c0d6f40(int);
int FUN_8c0d74a8(int, int);
int FUN_8c0d7a9c(int);
int FUN_8c0d7b34(void);
int FUN_8c0d7e98(void);
int FUN_8c0d9682(int, int, int);
int FUN_8c0de088(int, int, int, float, float, float);
int FUN_8c0df91e(void);
int FUN_8c0df924(void);
int FUN_8c0e0710(int, int, int, int);
int FUN_8c0e0876(void);
int FUN_8c0e412a(void);
int FUN_8c0e628c(void);
int FUN_8c0e62e0(void);
int FUN_8c0e89c0(void);
int FUN_8c0e8a1c(void);
int FUN_8c0e8a3a(void);
int FUN_8c0e8a58(void);
int FUN_8c0e8a76(void);
int FUN_8c0e8aba(void);
int FUN_8c0e8b74(void);
int FUN_8c0e8bb0(void);
int FUN_8c0e8bf4(void);
int FUN_8c0e8cec(void);
int FUN_8c0e8d0a(void);
int FUN_8c0e8d46(void);
int FUN_8c0e8d56(void);
int FUN_8c0e8d9a(void);
int FUN_8c0e8dde(void);
int FUN_8c0e8dfc(void);
int FUN_8c0e8f3c(int);
int FUN_8c0e8ffe(int);
int FUN_8c0e90bc(void);
int FUN_8c0ea094(int, int);
int FUN_8c0ea2a0(int);
int FUN_8c0eaba0(void);
int FUN_8c0ef060(int, int, int);
int FUN_8c0ef9b0(int);
int FUN_8c0f1ff0(void);
int FUN_8c0f2160(void);
int FUN_8c0f3dc0(void);
int FUN_8c0f70a0(int);
int FUN_8c0f7130(int);
int FUN_8c0f7cf0(void);
int FUN_8c1e28e0(int, int, int);
int FUN_8c1e4b74(int, int, int, int);
int FUN_8c1e8fa0(int, int);
int FUN_8c1f0982(int);
int FUN_8c1f098e(int);
int FUN_8c1f09be(int);
int FUN_8c1f1808(int);
int FUN_8c1f56c0(void);
int FUN_8c1f5e60(int);
int FUN_8c1f8a40(void);
int FUN_8c1fc2f0(int);
int FUN_8c1fc374(int);
int FUN_8c1fc3f6(int);
int FUN_8c1fc49c(int);
int FUN_8c205b00(int);
int FUN_8c2072b8(void);
int FUN_8c20731c(int, int, int, int, int);
int FUN_8c2075fe(int);
int FUN_8c208e6c(int);
int SJMEM_Reset(int);
int SJRBF_GetBufPtr(int);
int SJRBF_GetBufSize(int);
int SJRBF_GetXtrSize(int);
int SJRBF_Reset(int);
int SJUNI_Reset(int);
int adxf_ExecOne(int);
int adxf_SetCmdHstry(int, int, int, int, int);
int adxpd_error(void);
int adxsjd_clear(int);
int adxstmf_stat_exec(int);
int buAnalyzeBackupFileImage(int, int);
int buExitForce(void);
int buGetDiskInfo(int, int);
int buGetFileSize(int, int);
int buGetLastError(void);
int buLoadFile(int, int, int, int);
int buStat(void);
int colliObjEntry(int);
int fileLoadStart(int);
int fmcalccrc(int, int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsGetDrvStat(void);
int gdFsReqDrvStat(void);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int gdFsStopRd(int);
int get_data(int);
int kdGetDeviceInfo(void);
int kmBlankScreen(int);
int kmProcessVertexRenderState(void);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int, int);
int kmWaitVBlank(void);
int kmiFLWCTRLCheckFreeNBuf(void);
int kmiFLWCTRLEORCallBackFunc(void);
int kmiFLWCTRLFindTopQueue(void);
int kmiFLWCTRLLaunchPacket(int, int, int, int);
int kmiFLWCTRLRotateReadyQueue(void);
int kmiInitFBControl(void);
int kmiQueryFinishAllPacket(void);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyCreateRegionArray(void);
int kmyFreeArea(int);
int kmyGetDMAValue(int);
int kmyGetNativeBufferStatus(int);
int kmyGetRenderPacket(int, int);
int kmyMoveParameterBoundary(int, int, int);
int kmyRegisterBGPlane(int);
int kmyRequestCallback(int);
int kmyResetRenderer(void);
int kmyResetTA(void);
int kmySetBorderColor(int);
int kmySetDisplayFrameBuffer(int, int);
int kmyWriteFogTable(void);
int kmyiCheckNativeHandle(int);
int kmyiInitializeNativeBuffer(int, int, int, int);
int make_header(int, int);
int memcpy2(int, int, int);
int memmove(int, int, int);
int memset(int, int, int);
int motionAdvanceSimple(int);
int motionRoot(void);
int motionRoot2(void);
int motionRotate(void);
int motionRotate2(void);
int motionSwitch(int, int, int, int, float);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
float nlFloor(float);
int nlGetMatrix(int);
int nlInvLightVector(void);
int nlLoadMatrix(int);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutLoadTexture(int, int);
int nlObjPutMvInit(void);
int nlObjPutSetVtxColorMode(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlRand(void);
int nlRenderTextureBegin(int);
int nlRenderTextureFree(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int);
int nlSetTextureParameter(int);
int nlSpriteFreeTextureOnce(void);
int nlSpriteSetGarbagedTextureOnce(void);
int nlSubVector(int, int);
int nlTranslate(float, float, float);
int nldispstripTexOfsSub(int, int);
int nldispstripTexSub(int, int);
int nlobjput_sub_trnsl(int);
int nlsndG2Read(int);
int nlsndPackFree(void);
int nlsndPackLoad(int, int);
int nlsndSeqRequest(int);
int nlsndStreamSetHdBitSize(int, int);
int nlsndStreamSetHdOctFns(int, int, int);
int nlsndSystemControl(int, int, int);
int nlstripSetVertexContextTex(int, int);
int ovLibDeleteTbl(int);
int ovLibEntryTbl(int);
int padDirOn(int, int);
int pdVmsLcdWrite1(int, int);
int set_event(int, int);
int stageTexLoad(void);
int strncmp(int, int, int);
int syBtCfgSet(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaResume(int);
int syG2DmaSuspend(int);
int syMmuDeleteEntry(int);
int thunk_FUN_8c09e55a(void);
int thunk_FUN_8c0f2210(void);
int thunk_FUN_8c0f41f0(void);
int thunk_FUN_8c1e0150(void);
int thunk_FUN_8c1ff1ee(void);
int vmsfs_c_getstate(int);

void FUN_8c010350(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C29B898;
    do {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t2 = *(int *)((t1 + 0x8));
        if ((t2 & 0x4) != 0) {
            if ((0x2 & t2) != 0) {
                if ((0x400 & t2) != 0) {
                    if ((0x200 & t2) != 0) {
                        t3 = *(int *)((t1 + 0x10));
                        if ((t3 & 8) != 0) {
                            t4 = *(int *)0x8C20D14C;
                            if (t4 != 7) {
                                if (t4 == 0) {
                                    t5 = *(int *)0x8C421F60;
                                    if (t5 != 0) {
                                        FUN_8c010466();
                                    } else {
                                        FUN_8c0103b8();
                                    }
                                } else {
                                    FUN_8c0103b8();
                                }
                            } else {
                                FUN_8c010466();
                            }
                        }
                    }
                }
            }
        }
    } while ((unsigned int)t0 < (unsigned int)0x8C29B8A8);
}

int FUN_8c010564(void)
{
    int t0;
    int t5;
    int t6;
    int t7;

    t0 = gdFsGetDrvStat();
    if (t0 != 6) {
        if (t0 == 0) {
            gdFsReqDrvStat();
        }
    } else {
        gdFsReqDrvStat();
    }
    t5 = *(int *)0x8C12C5A0;
    if ((int)t5 > 0) {
        t6 = *(int *)0x8C12C5A0;
        *(unsigned int *)0x8C12C5A0 = (t6 - 1);
    }
    t7 = *(int *)0x8C12C5A0;
    if (t7 == 1) {
        return FUN_8c010466();
    }
    return t7;
}

int FUN_8c01069a(int a4)
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
    int t14;
    int t15;
    int t16;
    int t19;
    int t23;
    int t24;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x8) {
        t0 = 0x8;
    }
    t1 = *(int *)0x8C23D1E4;
    t2 = t1;
    for (;;) {
        if (t2 == 0) {
            return t2;
        }
        t3 = *(int *)((t2 + 0x0));
        if ((unsigned int)t3 >= (unsigned int)((t0 + 0x3) & 0xFFFFFFFC)) break;
        t4 = *(int *)((t2 + 0x8));
        t2 = t4;
    }
    t5 = *(int *)((t2 + 0x0));
    if ((unsigned int)t5 >= (unsigned int)(((t0 + 0x3) & 0xFFFFFFFC) + 0x10)) {
        t6 = *(int *)((t2 + 0x0));
        *(unsigned int *)((t2 + 0x0)) = (t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8));
        *(unsigned int *)((((t2 + 0x4) + (t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8))) + 0x0)) = ((t6 - (((t0 + 0x3) & 0xFFFFFFFC) + 0x8)) + 0x4);
        t7 = *(int *)((t2 + 0x0));
        t23 = ((t0 + 0x3) & 0xFFFFFFFC);
        t24 = ((t7 + t2) + 0x8);
    } else {
        t8 = *(int *)((t2 + 0x4));
        if (t8 == 0) {
            t9 = *(int *)((t2 + 0x8));
            *(unsigned int *)0x8C23D1E4 = t9;
        } else {
            t10 = *(int *)((t2 + 0x8));
            t11 = *(int *)((t2 + 0x4));
            *(unsigned int *)((t11 + 0x8)) = t10;
        }
        t14 = *(int *)((t2 + 0x8));
        if (t14 != 0) {
            t15 = *(int *)((t2 + 0x4));
            t16 = *(int *)((t2 + 0x8));
            *(unsigned int *)((t16 + 0x4)) = t15;
        }
        t19 = *(int *)((t2 + 0x0));
        t23 = t19;
        t24 = t2;
    }
    *(unsigned int *)((t24 + 0x0)) = (-t23);
    *(unsigned int *)((((t24 + 0x4) + t23) + 0x0)) = (0xFFFFFFFC - t23);
    *(unsigned int *)((t24 + 0x4)) = 0x0;
    return (t24 + 0x4);
}

void FUN_8c0107f0(int a4)
{
    int t0;
    int t40;
    int t41;
    int t1;
    int t18;
    int t19;
    int t2;
    int t14;
    int t15;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t20;
    int t39;
    int t21;
    int t36;
    int t22;
    int t23;
    int t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t42;
    int t43;
    int t44;

    if (a4 != 0) {
        t0 = *(int *)(((a4 - 4) + 0x0));
        t40 = (a4 - 4);
        t41 = t0;
        if ((int)t0 < 0) {
            t1 = *(int *)0x8C23D1DC;
            t18 = (a4 - 4);
            t19 = (-t0);
            if ((a4 - 4) != t1) {
                t2 = *(int *)((((a4 - 4) - 4) + 0x0));
                t14 = (a4 - 4);
                t15 = (-t0);
                if ((int)t2 >= 0) {
                    t3 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                    if (t3 == 0) {
                        t4 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        *(unsigned int *)0x8C23D1E4 = t4;
                    } else {
                        t5 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        t6 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                        *(unsigned int *)((t6 + 0x8)) = t5;
                    }
                    t8 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                    if (t8 != 0) {
                        t9 = *(int *)(((((a4 - 4) - t2) - 4) + 0x4));
                        t10 = *(int *)(((((a4 - 4) - t2) - 4) + 0x8));
                        *(unsigned int *)((t10 + 0x4)) = t9;
                    }
                    t14 = (((a4 - 4) - t2) - 4);
                    t15 = ((-t0) + (t2 + 0x4));
                }
                t18 = t14;
                t19 = t15;
            }
            t20 = *(int *)0x8C23D1E0;
            t39 = t19;
            if (((t18 + 0x4) + t19) != t20) {
                t21 = *(int *)((((t18 + 0x8) + t19) + 0x0));
                t36 = t19;
                if ((int)t21 >= 0) {
                    t22 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                    if (t22 == 0) {
                        t23 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        *(unsigned int *)0x8C23D1E4 = t23;
                    } else {
                        t24 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        t25 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                        *(unsigned int *)((t25 + 0x8)) = t24;
                    }
                    t28 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                    if (t28 != 0) {
                        t29 = *(int *)((((t18 + 0x8) + t19) + 0x4));
                        t30 = *(int *)((((t18 + 0x8) + t19) + 0x8));
                        *(unsigned int *)((t30 + 0x4)) = t29;
                    }
                    t36 = (t19 + (t21 + 0x8));
                }
                t39 = t36;
            }
            t40 = t18;
            t41 = t39;
        }
        *(unsigned int *)((t40 + 0x0)) = t41;
        *(unsigned int *)((((t40 + 0x4) + t41) + 0x0)) = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x4)) = 0x0;
        t42 = *(int *)0x8C23D1E4;
        *(unsigned int *)((t40 + 0x8)) = t42;
        t43 = *(int *)0x8C23D1E4;
        if (t43 != 0) {
            t44 = *(int *)0x8C23D1E4;
            *(unsigned int *)((t44 + 0x4)) = t40;
        }
        *(unsigned int *)0x8C23D1E4 = t40;
    }
}

int FUN_8c010976(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = a4;
    if ((unsigned int)a4 < (unsigned int)0x14) {
        t0 = 0x14;
    }
    t1 = FUN_8c01069a(t0);
    if (t1 != 0) {
        t2 = *(int *)0x8C23D1D0;
        if (t2 == 0) {
            *(unsigned int *)0x8C23D1CC = t1;
        } else {
            *(unsigned int *)((t2 + 0x8)) = t1;
        }
        t3 = *(int *)0x8C23D1D0;
        *(unsigned int *)((t1 + 0x4)) = t3;
        *(unsigned int *)((t1 + 0x8)) = 0x0;
        *(unsigned int *)((t1 + 0xC)) = a5;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x8C100ED0;
        *(unsigned int *)0x8C23D1D0 = t1;
        t4 = *(int *)0x8C23D1F4;
        *(unsigned int *)0x8C23D1F4 = (t4 + 0x1);
    }
    return t1;
}

int FUN_8c012144(void)
{
    return FUN_8c01205a();
}

int FUN_8c0135c4(int a4)
{
    int t0;

    t0 = set_event(0x18, 0x8C01361A);
    *(unsigned int *)((t0 + 0x14)) = a4;
    FUN_8c0133ca(a4, 0x0, 0x8C1013EC, 0x0, 0x0, 0x1, 0x1);
    FUN_8c0133ca(a4, 0x1, 0x8C1013F4, 0x0, 0x0, 0x1, 0x1);
    return FUN_8c013394(a4, 0x8C1013FC, 0x2);
}

void motionSetCurrent(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x34));
    t1 = *(int *)((a4 + 0x58));
    t2 = *(int *)((t0 + 0x10));
    *(unsigned int *)0x8C2873B8 = (t1 + t2);
    *(unsigned int *)0x8C2871D4 = a4;
    *(unsigned int *)0x8C2873C0 = 0x0;
}

int motionRootAuto(void)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)0x8C2871D4;
    t1 = *(int *)((t0 + 0x44));
    if (t1 != 0) {
        u2 = *(float *)((t0 + 0x4));
        if (u2 == 0.0f) {
            return motionRoot();
        }
        return motionRoot2();
    }
    return motionRoot();
}

int motionRotateAuto(void)
{
    int t0;
    int t1;
    float u2;

    t0 = *(int *)0x8C2871D4;
    t1 = *(int *)((t0 + 0x44));
    if (t1 != 0) {
        u2 = *(float *)((t0 + 0x4));
        if (u2 == 0.0f) {
            return motionRotate();
        }
        return motionRotate2();
    }
    return motionRotate();
}

int FUN_8c015b84(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C2873CC + t0)) = 0x0;
        *(unsigned int *)((0x8C287598 + t0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x28);
    t1 = 0x8C2873F8;
    do {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x28);
    } while ((unsigned int)t1 < (unsigned int)0x8C287588);
    *(unsigned int *)0x8C287594 = 0x0;
    *(unsigned int *)0x8C28758C = 0x0;
    return t1;
}

void motFileLoadBegin(void)
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
    int stk[13];

    t0 = *(int *)0x8C287594;
    if (t0 != 0) {
        t1 = *(int *)0x8C28758C;
        if (t1 == 0) {
            *(unsigned int *)0x8C287588 = 0xCC00000;
            t2 = 0x0;
            do {
                t3 = t2;
                t2 = (t2 + 0x4);
                *(unsigned int *)((0x8C287598 + t3)) = 0x0;
                *(unsigned int *)(((((int)stk + 4) + 0x4) + t3)) = 0x0;
            } while ((unsigned int)t2 < (unsigned int)0x28);
            *(unsigned int *)(((int)stk + 4)) = 0x8C2873F8;
            t4 = t3;
            t5 = 0x8C2873F8;
            t6 = 0x8C2873F8;
            do {
                t7 = *(int *)((t5 + 0x0));
                if (t7 != 0) {
                    t8 = *(int *)((t6 + 0x0));
                    t4 = t8;
                    t4 = (t4 << 2);
                    *(unsigned int *)(((((int)stk + 4) + 0x4) + t4)) = 0x1;
                }
                t5 = (t5 + 0x28);
                t6 = (t6 + 0x28);
            } while ((unsigned int)t5 < (unsigned int)0x8C287588);
            t9 = (((int)stk + 4) + 0x4);
            t10 = 0x8C2873CC;
            do {
                t11 = *(int *)((t9 + 0x0));
                if (t11 == 0) {
                    *(unsigned int *)((t10 + 0x0)) = 0x0;
                }
                t9 = (t9 + 0x4);
                t10 = (t10 + 0x4);
            } while ((unsigned int)t9 < (unsigned int)((((int)stk + 4) + 0x4) + 0x28));
            *(unsigned int *)0x8C28758C = 0x1;
            *(unsigned int *)0x8C287590 = 0x0;
            *(unsigned int *)0x8C287594 = 0x0;
        }
    }
}

void FUN_8c015f0c(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int stk[2];

    nlAddVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void FUN_8c015f2c(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int stk[2];

    nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void FUN_8c015f4c(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int stk[2];

    nlScaleVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void FUN_8c01607c(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t2;
    int t3;
    int stk[2];

    nlOuterProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
    t1 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t3;
}

void FUN_8c016174(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int stk[1];

    u0 = *(float *)((((int)stk + 4) + 0x0));
    u1 = *(float *)0x8C287A10;
    u2 = *(float *)((((int)stk + 4) + 0x8));
    u3 = (-u2);
    if (!(0.0f > u2)) {
        u3 = u2;
    }
    *(float *)((a4 + 0x0)) = ((u0 * u1) / u3);
    u4 = *(float *)((((int)stk + 4) + 0x4));
    u5 = *(float *)0x8C287A10;
    u6 = *(float *)((((int)stk + 4) + 0x8));
    u7 = (-u6);
    if (!(0.0f > u6)) {
        u7 = u6;
    }
    *(float *)((a5 + 0x0)) = ((u4 * u5) / u7);
}

void FUN_8c0161b4(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    int t5;
    int t6;
    int stk[2];

    nlPushMatrix(0x0);
    nlLoadMatrix(0x8C287978);
    nlCalcPoint((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8));
    nlPopMatrix(0x1);
    t4 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void FUN_8c01631c(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    float u8;
    int t11;
    int t12;
    int t13;
    int stk[9];

    *(float *)(((int)stk + 28)) = f4;
    t0 = *(int *)(((((int)stk + 28) + 0x18) + 0x8));
    *(unsigned int *)((((int)stk + 16) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 28) + 0x18) + 0x4));
    *(unsigned int *)((((int)stk + 16) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 28) + 0x18) + 0x0));
    *(unsigned int *)((((int)stk + 16) + 0x0)) = t2;
    t3 = *(int *)(((((int)stk + 16) + 0x18) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t3;
    t4 = *(int *)(((((int)stk + 16) + 0x18) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t4;
    t5 = *(int *)(((((int)stk + 16) + 0x18) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t5;
    t6 = FUN_8c016036();
    if (t6 != 0.0f) {
        nlSubVector((((int)stk + 28) + 0x18), (((int)stk + 28) + 0xC));
        u8 = *(float *)(((int)stk + 28));
        nlScaleUnitVector((((int)stk + 28) + 0x18), (((int)stk + 28) + 0x18), u8);
        nlAddVector((((int)stk + 28) + 0xC), (((int)stk + 28) + 0x18));
    }
    t11 = *(int *)(((((int)stk + 28) + 0xC) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t11;
    t12 = *(int *)(((((int)stk + 28) + 0xC) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t12;
    t13 = *(int *)(((((int)stk + 28) + 0xC) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t13;
}

void FUN_8c016af0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[2];

    t0 = *(int *)0x8C287640;
    if (t0 == 0) {
        t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)0x8C287604 = t1;
        t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)0x8C287600 = t2;
        t3 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)0x8C2875FC = t3;
    }
}

int FUN_8c016b10(void)
{
    int t0;
    int t4;
    int t1;
    int t2;
    int t3;
    int stk[2];

    t0 = *(int *)0x8C287640;
    t4 = 0x80;
    if (t0 == 0) {
        t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
        *(unsigned int *)0x8C2875F8 = t1;
        t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
        *(unsigned int *)0x8C2875F4 = t2;
        t3 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
        *(unsigned int *)0x8C2875F0 = t3;
        *(unsigned int *)0x8C287634 = 0x1;
        t4 = 0x74;
    }
    return t4;
}

void FUN_8c016b56(void)
{
    int t0;
    int t1;
    int t2;
    int stk[2];

    t0 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
    *(unsigned int *)0x8C287610 = t0;
    t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
    *(unsigned int *)0x8C28760C = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    *(unsigned int *)0x8C287608 = t2;
}

int FUN_8c016b6a(float f4, float f5)
{
    int t0;
    int t28;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    float u26;
    float u27;
    int stk[17];

    *(float *)(((int)stk + 56)) = f4;
    *(float *)(((int)stk + 52)) = f5;
    t0 = *(int *)0x8C287640;
    t28 = 0x80;
    if (t0 == 0) {
        t1 = *(int *)0x8C287634;
        if (t1 != 0) {
            t2 = *(int *)0x8C2875D4;
            *(unsigned int *)((((int)stk + 40) + 0x8)) = t2;
            t3 = *(int *)0x8C2875D0;
            *(unsigned int *)((((int)stk + 40) + 0x4)) = t3;
            t4 = *(int *)0x8C2875CC;
            *(unsigned int *)((((int)stk + 40) + 0x0)) = t4;
            t5 = *(int *)0x8C2875C8;
            *(unsigned int *)((((int)stk + 28) + 0x8)) = t5;
            t6 = *(int *)0x8C2875C4;
            *(unsigned int *)((((int)stk + 28) + 0x4)) = t6;
            t7 = *(int *)0x8C2875C0;
            *(unsigned int *)((((int)stk + 28) + 0x0)) = t7;
            FUN_8c0161e8(0x8C287648, 0x8C28764A);
            t9 = *(int *)0x8C2875D4;
            *(unsigned int *)((((int)stk + 16) + 0x8)) = t9;
            t10 = *(int *)0x8C2875D0;
            *(unsigned int *)((((int)stk + 16) + 0x4)) = t10;
            t11 = *(int *)0x8C2875CC;
            *(unsigned int *)((((int)stk + 16) + 0x0)) = t11;
            t12 = *(int *)0x8C2875C8;
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t12;
            t13 = *(int *)0x8C2875C4;
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t13;
            t14 = *(int *)0x8C2875C0;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t14;
            t15 = FUN_8c016036();
            *(float *)0x8C287628 = t15;
        }
        t17 = *(int *)0x8C2875C8;
        *(unsigned int *)0x8C2875E0 = t17;
        t18 = *(int *)0x8C2875C4;
        *(unsigned int *)0x8C2875DC = t18;
        t19 = *(int *)0x8C2875C0;
        *(unsigned int *)0x8C2875D8 = t19;
        t20 = *(int *)0x8C2875D4;
        *(unsigned int *)0x8C2875EC = t20;
        t21 = *(int *)0x8C2875D0;
        *(unsigned int *)0x8C2875E8 = t21;
        t22 = *(int *)0x8C2875CC;
        *(unsigned int *)0x8C2875E4 = t22;
        t23 = *(short *)0x8C287648;
        *(unsigned short *)0x8C287644 = t23;
        t24 = *(short *)0x8C28764A;
        *(unsigned short *)0x8C287646 = t24;
        u25 = *(float *)0x8C287628;
        *(float *)0x8C287624 = u25;
        u26 = *(float *)(((int)stk + 56));
        *(float *)0x8C287614 = u26;
        u27 = *(float *)(((int)stk + 52));
        *(float *)0x8C287618 = u27;
        *(unsigned int *)0x8C28763C = 0x0;
        *(unsigned int *)0x8C287638 = 0x0;
        *(float *)0x8C287620 = 0.0f;
        *(float *)0x8C28761C = 0.0f;
        t28 = 0x5C;
    }
    return t28;
}

int FUN_8c016c40(float f4, float f5)
{
    int t0;
    int t34;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    float u31;
    float u32;
    float u33;
    int stk[17];

    *(float *)(((int)stk + 56)) = f4;
    *(float *)(((int)stk + 52)) = f5;
    t0 = *(int *)0x8C287640;
    t34 = 0x80;
    if (t0 == 0) {
        t1 = *(int *)0x8C287634;
        if (t1 != 0) {
            t2 = *(int *)0x8C2875D4;
            *(unsigned int *)((((int)stk + 40) + 0x8)) = t2;
            t3 = *(int *)0x8C2875D0;
            *(unsigned int *)((((int)stk + 40) + 0x4)) = t3;
            t4 = *(int *)0x8C2875CC;
            *(unsigned int *)((((int)stk + 40) + 0x0)) = t4;
            t5 = *(int *)0x8C2875C8;
            *(unsigned int *)((((int)stk + 28) + 0x8)) = t5;
            t6 = *(int *)0x8C2875C4;
            *(unsigned int *)((((int)stk + 28) + 0x4)) = t6;
            t7 = *(int *)0x8C2875C0;
            *(unsigned int *)((((int)stk + 28) + 0x0)) = t7;
            FUN_8c0161e8(0x8C287648, 0x8C28764A);
            t9 = *(int *)0x8C2875D4;
            *(unsigned int *)((((int)stk + 16) + 0x8)) = t9;
            t10 = *(int *)0x8C2875D0;
            *(unsigned int *)((((int)stk + 16) + 0x4)) = t10;
            t11 = *(int *)0x8C2875CC;
            *(unsigned int *)((((int)stk + 16) + 0x0)) = t11;
            t12 = *(int *)0x8C2875C8;
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t12;
            t13 = *(int *)0x8C2875C4;
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t13;
            t14 = *(int *)0x8C2875C0;
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t14;
            t15 = FUN_8c016036();
            *(float *)0x8C287628 = t15;
        }
        t17 = *(int *)0x8C2875F8;
        *(unsigned int *)0x8C2875C8 = t17;
        t18 = *(int *)0x8C2875F4;
        *(unsigned int *)0x8C2875C4 = t18;
        t19 = *(int *)0x8C2875F0;
        *(unsigned int *)0x8C2875C0 = t19;
        t20 = *(int *)0x8C2875F8;
        *(unsigned int *)0x8C2875E0 = t20;
        t21 = *(int *)0x8C2875F4;
        *(unsigned int *)0x8C2875DC = t21;
        t22 = *(int *)0x8C2875F0;
        *(unsigned int *)0x8C2875D8 = t22;
        t23 = *(int *)0x8C287604;
        *(unsigned int *)0x8C2875D4 = t23;
        t24 = *(int *)0x8C287600;
        *(unsigned int *)0x8C2875D0 = t24;
        t25 = *(int *)0x8C2875FC;
        *(unsigned int *)0x8C2875CC = t25;
        t26 = *(int *)0x8C287604;
        *(unsigned int *)0x8C2875EC = t26;
        t27 = *(int *)0x8C287600;
        *(unsigned int *)0x8C2875E8 = t27;
        t28 = *(int *)0x8C2875FC;
        *(unsigned int *)0x8C2875E4 = t28;
        t29 = *(short *)0x8C287648;
        *(unsigned short *)0x8C287644 = t29;
        t30 = *(short *)0x8C28764A;
        *(unsigned short *)0x8C287646 = t30;
        u31 = *(float *)0x8C287628;
        *(float *)0x8C287624 = u31;
        u32 = *(float *)(((int)stk + 56));
        *(float *)0x8C287614 = u32;
        u33 = *(float *)(((int)stk + 52));
        *(float *)0x8C287618 = u33;
        *(unsigned int *)0x8C28763C = 0x0;
        *(unsigned int *)0x8C287638 = 0x0;
        *(float *)0x8C287620 = 0.0f;
        *(float *)0x8C28761C = 0.0f;
        t34 = 0x5C;
    }
    return t34;
}

int FUN_8c017060(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = set_event(0x54, 0x8C0170AE);
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = a5;
    *(unsigned int *)((t0 + 0x1C)) = a7;
    t1 = (t0 + 0x34);
    t2 = a6;
    do {
        t3 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = t3;
        t1 = (t1 + 0x1);
    } while ((unsigned int)t1 < (unsigned int)(t0 + 0x54));
    *(unsigned int *)((t0 + 0x20)) = 0x1;
    *(unsigned int *)((t0 + 0x28)) = 0xFFFFFFFF;
    *(unsigned int *)((t0 + 0x2C)) = 0x8;
    *(unsigned int *)((t0 + 0x30)) = 0x0;
    return t0;
}

int FUN_8c0171b8(int a4, int a5, int a6, int a7, int a8)
{
    int t1;

    if ((unsigned short)a4 != 0xFFFF) {
        *(unsigned int *)0x8C38B82C = (unsigned short)a4;
    }
    if ((unsigned short)a5 != 0xFFFF) {
        *(unsigned int *)0x8C38B830 = (unsigned short)a5;
    }
    if (a6 != -1) {
        *(float *)0x8C38B844 = (float)a6;
    }
    t1 = a7;
    if (a7 != -1) {
        *(float *)0x8C38B800 = (float)a7;
        t1 = 0x4;
    }
    *(unsigned int *)0x8C287A40 = a8;
    return t1;
}

void FUN_8c017718(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;

    *(unsigned int *)0x8C287654 = a4;
    t0 = *(int *)((a4 + 0x10));
    t1 = t0;
    if ((int)t0 > (int)0x8) {
        t1 = 0x8;
    }
    t2 = 0x8C287658;
    do {
        *(unsigned int *)((t2 + 0x0)) = 0xFFFFFFFF;
        t2 = (t2 + 0x50);
    } while ((unsigned int)t2 < (unsigned int)0x8C2878D8);
    if ((int)t1 > 0) {
        t3 = 0x0;
        t4 = 0x8C2878D8;
        t5 = 0x0;
        t6 = 0x8C287658;
        do {
            t7 = *(int *)((a4 + 0x0));
            FUN_8c0176bc(t6, t7);
            t9 = *(int *)((a4 + 0xC));
            t10 = *(int *)(((t9 + t5) + 0x0));
            t11 = *(int *)((a4 + 0x4));
            *(float *)((t6 + 0x18)) = ((float)t10 / (float)t11);
            t12 = *(int *)((a4 + 0xC));
            t13 = *(int *)(((t12 + t5) + 0x4));
            t14 = *(int *)((a4 + 0x8));
            *(float *)((t6 + 0x1C)) = ((float)t13 / (float)t14);
            t15 = *(int *)((a4 + 0xC));
            t16 = *(int *)(((t15 + t5) + 0x8));
            t17 = *(int *)((a4 + 0x4));
            *(float *)((t6 + 0x20)) = ((float)t16 / (float)t17);
            t18 = *(int *)((a4 + 0xC));
            t19 = *(int *)(((t18 + t5) + 0xC));
            t20 = *(int *)((a4 + 0x8));
            *(float *)((t6 + 0x24)) = ((float)t19 / (float)t20);
            t21 = *(int *)((a4 + 0xC));
            t22 = *(int *)(((t21 + t5) + 0x8));
            t23 = *(int *)(((t21 + t5) + 0x0));
            t24 = *(int *)((a4 + 0x4));
            *(float *)((t6 + 0x10)) = ((float)(t22 - t23) / (float)t24);
            t25 = *(int *)((a4 + 0xC));
            t26 = *(int *)(((t25 + t5) + 0xC));
            t27 = *(int *)(((t25 + t5) + 0x4));
            t28 = *(int *)((a4 + 0x8));
            t3 = (t3 + 0x1);
            t5 = (t5 + 0x10);
            *(float *)((t6 + 0x14)) = ((float)(t26 - t27) / (float)t28);
            *(float *)((t4 + 0x0)) = 0.0f;
            t4 = (t4 + 0x4);
            t6 = (t6 + 0x50);
        } while ((int)t3 < (int)t1);
    }
}

void FUN_8c017a22(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    int t0;

    t0 = set_event(0x30, 0x8C017A7C);
    *(float *)((t0 + 0x14)) = f4;
    *(float *)((t0 + 0x18)) = f5;
    *(float *)((t0 + 0x1C)) = f6;
    *(float *)((t0 + 0x20)) = f7;
    *(unsigned int *)((t0 + 0x2C)) = a5;
    *(unsigned int *)((t0 + 0x28)) = a4;
    *(float *)((t0 + 0x24)) = f8;
}

int FUN_8c017ef8(void)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t4;
    int t6;
    int t5;
    int t7;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 3) {
        t1 = *(int *)0x8C2FBEB4;
        t3 = 0x2;
        if ((int)t1 >= (int)0x3) {
            t2 = 0x1;
            if ((int)t1 >= (int)0x6) {
                t2 = 0x0;
            }
            t3 = t2;
        }
        t7 = t3;
    } else {
        t4 = *(int *)0x8C287B84;
        t6 = 0x2;
        if ((int)t4 >= (int)0x3) {
            t5 = 0x0;
            if ((int)t4 < (int)0x6) {
                t5 = 0x1;
            }
            t6 = t5;
        }
        t7 = t6;
    }
    return t7;
}

int FUN_8c018a24(int a4)
{
    int t9;

    *(unsigned int *)0x8C287C4C = a4;
    FUN_8c013394(a4, 0x8C1022D0, 0x9);
    FUN_8c0133ca(a4, 0x0, 0x8C1022DC, 0x0, 0x0, 0x1, 0x1);
    FUN_8c0133ca(a4, 0x1, 0x8C1022E4, 0xFFFFFFFF, 0xFFFFFFFF, 0xB, 0x1);
    FUN_8c0133ca(a4, 0x2, 0x8C1022EC, 0x0, 0x0, 0x3C, 0x1);
    FUN_8c0133ca(a4, 0x3, 0x8C1022F4, 0x0, 0x0, 0x3, 0x1);
    FUN_8c0133ca(a4, 0x4, 0x8C1022FC, 0x0, 0x0, 0x1, 0x0);
    FUN_8c0133ca(a4, 0x5, 0x8C102304, 0x0, 0x0, 0x64, 0x1);
    FUN_8c0133ca(a4, 0x6, 0x8C10230C, 0x0, 0x0, 0x3E8, 0x1);
    FUN_8c0133ca(a4, 0x7, 0x8C102314, 0x1, 0x0, 0x1, 0x1);
    t9 = FUN_8c0133ca(a4, 0x8, 0x8C10231C, 0x0, 0x0, 0x1, 0x1);
    return t9;
}

void FUN_8c0191b0(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0x8C287B88 = 0x0;
    t0 = 0x0;
    do {
        *(unsigned int *)(((0x8C287B8C + t0) + 0x8)) = 0x0;
        *(unsigned int *)(((0x8C287B8C + t0) + 0xC)) = 0x0;
        *(unsigned int *)(((0x8C287B8C + t0) + 0x10)) = 0x0;
        *(float *)(((0x8C287B8C + t0) + 0x14)) = 0.0f;
        *(unsigned int *)(((0x8C287B8C + t0) + 0x18)) = 0x0;
        t1 = (0x8C287B8C + t0);
        t2 = (0x8C287B8C + t0);
        t0 = (t0 + 0x24);
        *(unsigned int *)((t2 + 0x1C)) = 0x0;
        *(unsigned int *)((t1 + 0x20)) = 0x0;
    } while ((unsigned int)t0 < (unsigned int)0x90);
}

void FUN_8c01a550(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0x8C287B30;
    t1 = *(int *)0x8C287B34;
    *(unsigned int *)0x8C287B38 = (t1 + t0);
    t2 = *(int *)0x8C287D78;
    t3 = *(int *)((t2 + ((t1 + t0) << 2)));
    if (t3 == -1) {
        *(unsigned int *)0x8C287B38 = 0x0;
    }
    t6 = *(int *)0x8C287B38;
    t7 = *(int *)0x8C287D78;
    t8 = *(int *)(((t6 << 2) + t7));
    *(unsigned int *)0x8C287B30 = t8;
    t9 = *(int *)0x8C287B38;
    *(unsigned int *)0x8C287B38 = (t9 + 0x1);
    *(unsigned int *)0x8C287B34 = (t9 + 0x1);
}

void FUN_8c01a592(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)((((a4 << 2) + ((((((t2 << 1) + t2) << 2) << 1) + t3) + 0x8)) + 0x0));
    t5 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t5;
    t6 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t6;
    t7 = *(int *)(((0x8C101704 + (((t4 << 1) + t4) << 2)) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t7;
}

int FUN_8c01a5d6(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)((t3 + ((((t2 << 1) + t2) << 2) << 1)));
    return t4;
}

int FUN_8c01a5f6(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287B38;
    t1 = *(int *)0x8C287D78;
    t2 = *(int *)((t1 + (t0 << 2)));
    t3 = *(int *)0x8C287D74;
    t4 = *(int *)(((((((t2 << 1) + t2) << 2) << 1) + t3) + 0x4));
    return t4;
}

int FUN_8c01b1d0(void)
{
    int t0;

    t0 = *(int *)0x8C1389FC;
    if (t0 != 1) {
        *(unsigned int *)0x8C1389FC = 0x1;
        return nlRenderTextureBegin(0x0);
    }
    return t0;
}

float FUN_8c01b2f4(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1891E8;
    t1 = *(int *)((((t0 << 2) << 1) + 0x8C1D11BC));
    return (float)(t1 - 10);
}

void FUN_8c029874(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C287B44;
        if (t1 != 10) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)0x8C1891E8;
                t5 = *(int *)((((t4 * 0x124) + 0x8C106314) + 0x20));
                if ((int)t3 >= (int)t5) break;
                colliObjEntry(((t3 * 0x78) + 0x8C29562C));
                t3 = (t3 + 0x1);
            }
        }
    }
}

int FUN_8c029aac(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x8C102424;
    do {
        t1 = *(int *)((t0 + 0x0));
        t2 = 0x0;
        do {
            t3 = *(int *)((((t2 << 2) + t1) + 0x0));
            if (t3 != 0) {
                t4 = *(int *)((((t2 << 2) + t1) + 0x0));
                *(unsigned int *)((t4 + 0x0)) = t2;
            }
            t2 = (t2 + 0x1);
        } while ((int)t2 < (int)0x21);
        t0 = (t0 + 0x6C);
    } while ((unsigned int)t0 < (unsigned int)0x8C102BBC);
    return t1;
}

void FUN_8c029af4(int a4)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x4)) = 0xFFFFFFFF;
    *(float *)((a4 + 0x8)) = 0.0f;
    *(float *)((a4 + 0xC)) = 0.0f;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    t0 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x14) + 0x8)) = t0;
    t1 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x14) + 0x4)) = t1;
    t2 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x14) + 0x0)) = t2;
}

void FUN_8c02d94c(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    float u3;
    float u4;
    float u5;
    int t9;
    int t10;
    int t11;
    int stk[4];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 4));
    nlLoadMatrix(t1);
    u3 = *(float *)(((((int)stk + 4) + 0x10) + 0x8));
    u4 = *(float *)(((((int)stk + 4) + 0x10) + 0x4));
    u5 = *(float *)(((((int)stk + 4) + 0x10) + 0x0));
    nlTranslate(u5, u4, u3);
    FUN_8c0160e6((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x10) + 0x4), ((((int)stk + 4) + 0x10) + 0x8));
    nlPopMatrix(0x1);
    t9 = *(int *)(((((int)stk + 4) + 0x10) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t9;
    t10 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t11;
}

void FUN_8c02d998(int a4, int a5, int a6, int a7, int a8)
{
    int t1;
    int t6;
    int t7;
    int t8;
    int stk[3];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 4));
    nlLoadMatrix(t1);
    nlQuickInvertMatrix();
    nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
    nlPopMatrix(0x1);
    t6 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t6;
    t7 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t7;
    t8 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t8;
}

int FUN_8c02f2a0(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;

    FUN_8c02f3ae();
    t1 = *(int *)0x8C1D175C;
    if (t1 == -1) {
        t2 = *(int *)0x8C29BBC0;
        if (t2 == 0) {
            t3 = *(int *)0x8C20D198;
            t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0x1);
            }
            if (t4 != 0) {
                FUN_8c02fb22();
            }
        } else {
            FUN_8c02fb22();
        }
        t9 = *(int *)0x8C20D198;
        t10 = (int)((int)t9 % (int)0x3C);
        if (t10 == 0) {
            FUN_8c02ff90(0x0, 0x0);
        }
    }
    return FUN_8c03001e();
}

void plaInitHdlTbl(void)
{
    int t0;

    t0 = 0x8C29B8A8;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C29B8B8);
}

int FUN_8c02f59e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t7;
    int t8;
    int t4;
    int t5;
    int t6;

    if (a4 != 11) {
        if (a4 == 12) {
            return FUN_8c02f62e(a4);
        }
        t0 = 0x2;
        t1 = 0x8C294658;
        t2 = 0x8C29B8A8;
        do {
            t3 = a4;
            if (a4 == 2) {
                t3 = t0;
            }
            t7 = a4;
            t8 = t3;
            if (a4 == 19) {
                t4 = *(int *)0x8C287AF0;
                t5 = *(int *)((t1 + 0x0));
                t6 = t3;
                if ((t4 & 0x1) != (t5 & 0x1)) {
                    t6 = 0x9;
                }
                t7 = (t5 & 0x1);
                t8 = t6;
            }
            t0 = (t0 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = t8;
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x4);
        } while ((int)t0 < (int)0x6);
        return t7;
    }
    return FUN_8c02f62e(a4);
}

void FUN_8c02f5f8(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = ((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8);
    t1 = 0x0;
    do {
        t2 = t0;
        t3 = 0x0;
        do {
            t3 = (t3 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
            t2 = (t2 + 0x1);
        } while ((int)t3 < (int)0x6);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x6);
    } while ((int)t1 < (int)0x20);
}

int FUN_8c02fb22(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        FUN_8c02f63a(t0);
        t2 = *(int *)((0x8C159AF0 + (t0 << 2)));
        t3 = pdVmsLcdWrite1(t2, ((((((t0 << 1) + t0) << 2) << 2) << 2) + 0x8C29B8B8));
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
    return t3;
}

void FUN_8c02fb68(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;

    if ((int)a5 >= 0) {
        if ((int)a5 <= (int)0x2F) {
            if ((int)a6 >= 0) {
                if ((int)a6 <= (int)0x1F) {
                    if (a7 != 0) {
                        t0 = a5;
                        if ((int)a5 < 0) {
                            t0 = (a5 + 0x7);
                        }
                        t1 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
                        if ((int)a5 >= 0) {
                            t1 = (a5 & 0x7);
                        }
                        t2 = *(signed char *)((((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1))) + 0x0));
                        t7 = ((((int)t1 >= 0) ? (0x1 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x1 >> (-(int)t1 & 31)) : ((int)0x1 >> 31))) | t2);
                        t9 = ((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t0 >> 1) >> 1) >> 1)));
                    } else {
                        t3 = a5;
                        if ((int)a5 < 0) {
                            t3 = (a5 + 0x7);
                        }
                        t4 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
                        if ((int)a5 >= 0) {
                            t4 = (a5 & 0x7);
                        }
                        t5 = *(signed char *)((((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t3 >> 1) >> 1) >> 1))) + 0x0));
                        t7 = ((~(((int)t4 >= 0) ? (0x1 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x1 >> (-(int)t4 & 31)) : ((int)0x1 >> 31)))) & t5);
                        t9 = ((((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + (((0x1F - a6) << 1) + ((0x1F - a6) << 2))) + (0x5 - (((t3 >> 1) >> 1) >> 1)));
                    }
                    *(unsigned char *)((t9 + 0x0)) = t7;
                }
            }
        }
    }
}

void FUN_8c02fc16(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C29B8B8;
    t1 = 0x0;
    do {
        t2 = (t1 << 2);
        t3 = 0x0;
        do {
            if ((int)(a6 + t3) >= 0) {
                t2 = 0x6;
                if ((int)(a6 + t3) < (int)t2) {
                    t2 = ((((((a5 << 1) + a5) << 2) << 2) << 2) + 0x8C158BF0);
                    t2 = (t2 + ((t1 << 1) + (t1 << 2)));
                    t2 = (t2 + (a6 + t3));
                    t4 = *(signed char *)((t2 + 0x0));
                    t2 = t4;
                    t5 = *(signed char *)((t3 + (((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + ((t1 << 1) + (t1 << 2)))));
                    t0 = t5;
                    t0 = (t0 | t2);
                    *(unsigned char *)((t3 + (((((((a4 << 1) + a4) << 2) << 2) << 2) + 0x8C29B8B8) + ((t1 << 1) + (t1 << 2))))) = t0;
                }
            }
            t3 = (t3 + 0x1);
        } while ((int)t3 < (int)0x6);
        t1 = (t1 + 0x1);
    } while ((int)t1 < (int)0x20);
}

void FUN_8c02ffea(void)
{
    int t0;
    int t1;
    int t2;

    *(unsigned int *)0x8C29B894 = 0x14;
    *(unsigned int *)0x8C29B890 = 0x8;
    t0 = 0x8C29B850;
    do {
        t1 = t0;
        t2 = 0x0;
        do {
            t2 = (t2 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = 0x64;
            t1 = (t1 + 0x4);
        } while ((int)t2 < (int)0x4);
        t0 = (t0 + 0x10);
    } while ((unsigned int)t0 < (unsigned int)0x8C29B890);
}

int FUN_8c03001e(void)
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

    t0 = 0x0;
    do {
        t1 = (((t0 << 2) << 2) + 0x8C29B850);
        t2 = 0x0;
        t3 = (((t0 << 2) << 2) + 0x8C29B850);
        t4 = (((t0 << 2) << 2) + 0x8C29B850);
        do {
            t5 = *(int *)(((t2 << 2) + 0x8C159B00));
            t6 = padDirOn(t0, t5);
            if (t6 == 0) {
                *(unsigned int *)((t1 + 0x0)) = 0x64;
            }
            t7 = *(int *)((t4 + 0x0));
            t2 = (t2 + 0x1);
            if ((int)t7 < (int)0x64) {
                t8 = *(int *)((t3 + 0x0));
                *(unsigned int *)((t3 + 0x0)) = (t8 - 1);
            }
            t4 = (t4 + 0x4);
            t3 = (t3 + 0x4);
            t1 = (t1 + 0x4);
        } while ((int)t2 < (int)0x4);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
    return t6;
}

int FUN_8c0300e0(int a4, int a5)
{
    int t3;
    int t2;
    int t1;
    int t0;
    int t28;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t13;
    int t16;
    int t19;
    int t22;
    int t20;
    int t27;
    int t24;
    int t18;

    t3 = 0x0;
    if (a5 != 16) {
        t2 = 0x1;
        if (a5 != 32) {
            t1 = 0x2;
            if (a5 != 64) {
                t0 = 0x3;
                if (a5 != 0x80) {
                    t0 = 0xFFFFFFFF;
                }
                t1 = t0;
            }
            t2 = t1;
        }
        t3 = t2;
    }
    t28 = 0x0;
    if (t3 != -1) {
        t4 = *(int *)(((((a4 << 2) << 2) + 0x8C29B850) + (t3 << 2)));
        if (t4 == 100) {
            t5 = padDirOn(a4, a5);
            if (t5 != 0) {
                t6 = *(int *)0x8C29B894;
                *(unsigned int *)((((t3 << 2) + (0x8C29B850 + ((a4 << 2) << 2))) + 0x0)) = t6;
            }
            t27 = t5;
        } else {
            t9 = *(int *)((((((a4 << 2) << 2) + 0x8C29B850) + (t3 << 2)) + 0x0));
            if ((int)t9 < 0) {
                t10 = *(int *)0x8C29B890;
                t11 = (int)((int)t9 % (int)t10);
                if (t11 != 0) {
                    t12 = *(int *)0x8C29B894;
                    t15 = 0x0;
                    if (t9 == t12) {
                        t13 = padDirOn(a4, a5);
                        t15 = t13;
                    }
                    t18 = t15;
                } else {
                    t16 = padDirOn(a4, a5);
                    t18 = t16;
                }
                t24 = t18;
            } else {
                t19 = *(int *)0x8C29B894;
                t22 = 0x0;
                if (t9 == t19) {
                    t20 = padDirOn(a4, a5);
                    t22 = t20;
                }
                t24 = t22;
            }
            t27 = t24;
        }
        t28 = t27;
    }
    return t28;
}

void FUN_8c032eec(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C2FBE0C;
    if ((int)t0 < (int)0x9) {
        t1 = *(int *)0x8C2FBE0C;
        *(unsigned int *)0x8C2FBE0C = (t1 + 0x1);
        t2 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t2 << 1) + t2) << 2) << 1) + 0x8C2FBD1C) + 0x0)) = a4;
        t3 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t3 << 1) + t3) << 2) << 1) + 0x8C2FBD1C) + 0x4)) = a5;
        t4 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t4 << 1) + t4) << 2) << 1) + 0x8C2FBD1C) + 0x8)) = a6;
        t5 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t5 << 1) + t5) << 2) << 1) + 0x8C2FBD1C) + 0xC)) = 0x0;
        t6 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t6 << 1) + t6) << 2) << 1) + 0x8C2FBD1C) + 0x10)) = 0xFFFFFFFF;
        t7 = *(int *)0x8C2FBE0C;
        *(unsigned int *)(((((((t7 << 1) + t7) << 2) << 1) + 0x8C2FBD1C) + 0x14)) = 0x0;
        *(unsigned int *)0x8C2FBE10 = 0x1;
    }
}

void FUN_8c033206(void)
{
    int t0;
    int t1;

    *(unsigned int *)0x8C2FBCA8 = 0x0;
    *(unsigned int *)0x8C2FBCAC = 0x0;
    *(unsigned int *)0x8C2FBCB0 = 0x0;
    *(unsigned int *)0x8C2FBCB4 = 0x0;
    *(unsigned int *)0x8C2FBCB8 = 0x0;
    *(unsigned int *)0x8C2FBCBC = 0x0;
    *(unsigned int *)0x8C2FBCC0 = 0x0;
    *(unsigned int *)0x8C2FBCC4 = 0x0;
    *(unsigned int *)0x8C2FBCC8 = 0x0;
    *(unsigned int *)0x8C2FBCCC = 0x0;
    *(unsigned int *)0x8C2FBCD0 = 0x0;
    *(unsigned int *)0x8C2FBCD4 = 0x0;
    *(unsigned int *)0x8C2FBCD8 = 0x0;
    t0 = *(int *)0x8C2FBE20;
    t1 = *(int *)((((((t0 << 2) << 2) + t0) << 2) + 0x8C108E84));
    *(unsigned int *)0x8C2FBD00 = t1;
    *(unsigned int *)0x8C2FBD18 = 0x0;
}

void FUN_8c033654(void)
{
    int t0;
    int t1;
    float u2;
    int t3;
    float u4;
    float u5;
    int t6;
    float u7;
    float u8;
    int t9;
    float u10;
    int t15;
    float u16;
    int t17;
    float u18;
    float u19;
    int t20;
    float u21;
    float u22;
    int t23;
    float u24;

    t0 = *(int *)0x8C287C60;
    if (t0 == 0) {
        t1 = *(signed char *)0x8C2FBC80;
        u2 = *(float *)0x8C2FBC74;
        t3 = *(int *)(((((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) + 0x8C1081D8) + 0x8));
        u4 = *(float *)(((0x4 + (((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) + 0x8C1081D8)) + 0x0));
        u5 = *(float *)(((((((unsigned char)t1 << 1) + (unsigned char)t1) << 2) + 0x8C1081D8) + 0x0));
        *(float *)0x8C2FBC74 = (u2 - ((u5 - u4) / (float)(t3 * 0xE10)));
        t6 = *(signed char *)0x8C2FBC80;
        u7 = *(float *)(((((((unsigned char)t6 << 1) + (unsigned char)t6) << 2) + 0x8C1081D8) + 0x4));
        u8 = *(float *)0x8C2FBC74;
        if (u7 > u8) {
            t9 = *(signed char *)0x8C2FBC80;
            u10 = *(float *)(((0x8C1081D8 + ((((unsigned char)t9 << 1) + (unsigned char)t9) << 2)) + 0x4));
            *(float *)0x8C2FBC74 = u10;
        }
        t15 = *(signed char *)0x8C2FBC81;
        u16 = *(float *)0x8C2FBC78;
        t17 = *(int *)(((((((unsigned char)t15 << 1) + (unsigned char)t15) << 2) + 0x8C108214) + 0x8));
        u18 = *(float *)(((((((unsigned char)t15 << 1) + (unsigned char)t15) << 2) + 0x8C108214) + 0x0));
        u19 = *(float *)(((0x4 + (((((unsigned char)t15 << 1) + (unsigned char)t15) << 2) + 0x8C108214)) + 0x0));
        *(float *)0x8C2FBC78 = (u16 - ((u18 - u19) / (float)(t17 * 0xE10)));
        t20 = *(signed char *)0x8C2FBC81;
        u21 = *(float *)(((((((unsigned char)t20 << 1) + (unsigned char)t20) << 2) + 0x8C108214) + 0x4));
        u22 = *(float *)0x8C2FBC78;
        if (u21 > u22) {
            t23 = *(signed char *)0x8C2FBC81;
            u24 = *(float *)(((0x8C108214 + ((((unsigned char)t23 << 1) + (unsigned char)t23) << 2)) + 0x4));
            *(float *)0x8C2FBC78 = u24;
        }
    }
}

int FUN_8c0368ae(void)
{
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

    FUN_8c0108a6();
    FUN_8c036978();
    *(unsigned int *)0x8C2FBEEC = 0x0;
    t2 = *(int *)0x8C2FBE1C;
    t3 = *(int *)0x8C2FBC50;
    t4 = *(int *)0x8C2FBEF0;
    t5 = *(int *)(((((((t2 << 2) + t2) << 2) << 1) + t3) + 0x4));
    *(unsigned int *)((t4 + 0x4)) = t5;
    t6 = *(int *)0x8C2FBE1C;
    t7 = *(int *)0x8C2FBC50;
    t8 = *(int *)(((((((t6 << 2) + t6) << 2) << 1) + t7) + 0x8));
    *(unsigned int *)0x8C1891E8 = t8;
    t9 = *(int *)0x8C2FBEF0;
    t10 = *(int *)((t9 + 0x4));
    t11 = *(int *)((((t10 * 0x64) + 0x8C10BB08) + 0x40));
    *(unsigned int *)((t9 + 0x0)) = t11;
    t12 = *(int *)0x8C2FBEF0;
    t13 = *(int *)((t12 + 0x4));
    t14 = *(int *)(((0x8C10BB08 + (t13 * 0x64)) + 0x44));
    *(unsigned int *)((t12 + 0x40)) = t14;
    *(unsigned int *)0x8C287ADC = 0x2;
    *(unsigned int *)0x8C20D154 = 0x6;
    *(unsigned int *)0x8C20D158 = 0x4;
    return FUN_8c032acc();
}

int FUN_8c036978(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    *(unsigned int *)0x8C2FBEF0 = 0x8C2FBEA8;
    *(unsigned int *)0x8C2FBEA8 = 0x0;
    t0 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t0 + 0x8)) = 0x0;
    t1 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t1 + 0xC)) = 0x0;
    t2 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t2 + 0x10)) = 0x0;
    t3 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t3 + 0x18)) = 0x0;
    t4 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t4 + 0x1C)) = 0x0;
    t5 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t5 + 0x20)) = 0x0;
    t6 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t6 + 0x3C)) = 0x0;
    *(unsigned int *)0x8C2FC0C8 = 0x0;
    *(unsigned int *)0x8C2FBFD4 = 0x0;
    *(unsigned int *)0x8C2FBFD8 = 0x0;
    *(unsigned int *)0x8C2FC0CC = 0x0;
    *(unsigned int *)0x8C2FC0D0 = 0x0;
    *(unsigned int *)0x8C2FBFDC = 0x0;
    FUN_8c03992c(0x0, 0x0);
    t8 = FUN_8c03ce22();
    *(unsigned int *)0x8C185408 = 0x1;
    return t8;
}

void ballColliSync(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;

    t0 = *(int *)0x8C2FC018;
    if ((t0 & 1) != 0) {
        FUN_0c078a70(0x8C291F3C, 0x8C291F30, 0x8C2FBFF8);
        FUN_0c078a70(0x8C291F48, 0x8C291F58, 0x8C2FC030);
        t3 = *(int *)0x8C291F44;
        *(unsigned int *)0x8C291F38 = t3;
        t4 = *(int *)0x8C291F40;
        *(unsigned int *)0x8C291F34 = t4;
        t5 = *(int *)0x8C291F3C;
        *(unsigned int *)0x8C291F30 = t5;
        t6 = *(int *)0x8C291F50;
        *(unsigned int *)0x8C291F60 = t6;
        t7 = *(int *)0x8C291F4C;
        *(unsigned int *)0x8C291F5C = t7;
        t8 = *(int *)0x8C291F48;
        *(unsigned int *)0x8C291F58 = t8;
        *(float *)0x8C291F54 = 0.0f;
    }
    t10 = *(int *)0x8C287AF8;
    if (t10 == 0) {
        colliObjEntry(0x8C2FBFE0);
        t12 = *(int *)0x8C291F38;
        *(unsigned int *)0x8C2FBFE8 = t12;
        t13 = *(int *)0x8C291F34;
        *(unsigned int *)0x8C2FBFE4 = t13;
        t14 = *(int *)0x8C291F30;
        *(unsigned int *)0x8C2FBFE0 = t14;
        t15 = *(int *)0x8C291F38;
        *(unsigned int *)0x8C2FBFF4 = t15;
        t16 = *(int *)0x8C291F34;
        *(unsigned int *)0x8C2FBFF0 = t16;
        t17 = *(int *)0x8C291F30;
        *(unsigned int *)0x8C2FBFEC = t17;
        t18 = *(int *)0x8C291F60;
        *(unsigned int *)0x8C2FC02C = t18;
        t19 = *(int *)0x8C291F5C;
        *(unsigned int *)0x8C2FC028 = t19;
        t20 = *(int *)0x8C291F58;
        *(unsigned int *)0x8C2FC024 = t20;
    }
}

int FUN_8c037dbe(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int stk[12];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = set_event(0x528, 0x8C037F98);
    t1 = *(int *)(((int)stk + 20));
    *(unsigned int *)((t0 + 0x14)) = t1;
    *(unsigned int *)((t0 + 0x524)) = 0x0;
    t2 = *(int *)(((((int)stk + 16) + 0x20) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t2;
    t3 = *(int *)(((((int)stk + 16) + 0x20) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t3;
    t4 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t4;
    t5 = *(int *)(((int)stk + 16));
    t6 = FUN_8c037e1c(t0, t5);
    return t6;
}

int FUN_8c039628(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C2FBEF4 + t0)) = 0x0;
        *(float *)((0x8C2FBF14 + t0)) = 0.0f;
        *(float *)((0x8C2FBF34 + t0)) = 0.0f;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x20);
    return t0;
}

int FUN_8c039a18(void)
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
    int t15;
    int t16;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t41;
    int t42;
    int t43;
    int t45;
    int t46;
    int t47;

    t0 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t0 + 0xC)) = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    do {
        t3 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x0));
        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t3;
        if ((int)t2 < (int)0x7) {
            if ((0x1 & t2) == 0) {
                t4 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x0));
                if (t4 == 10) {
                    t5 = *(int *)((0x8C2FC160 + (t2 << 2)));
                    t1 = t5;
                    t6 = *(int *)(((((t2 << 2) + 0x8C2FC134) + 0x8) + 0x0));
                    t1 = (t1 + t6);
                    *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    t7 = *(int *)(((((t2 << 2) + 0x8C2FC134) + 0x8) + 0x0));
                    if (t7 == 10) {
                        if ((int)t2 < (int)0x7) {
                            if ((int)t2 < (int)0x5) {
                                t8 = *(int *)((0x8C2FC160 + (t2 << 2)));
                                t1 = t8;
                                t9 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x10));
                                t1 = (t1 + t9);
                            } else {
                                t10 = *(int *)((0x8C2FC160 + (t2 << 2)));
                                t1 = t10;
                                t11 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0xC));
                                t1 = (t1 + t11);
                            }
                            *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                        }
                    } else {
                        t15 = *(int *)((0x8C2FC160 + (t2 << 2)));
                        t1 = t15;
                        t16 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0xC));
                        t1 = (t1 + t16);
                        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    }
                }
            }
        }
        if ((int)t2 < (int)0x8) {
            if ((0x1 & t2) != 0) {
                t28 = *(int *)(((t2 << 2) + 0x8C2FC134));
                t1 = t28;
                t29 = *(int *)((((t2 - 1) << 2) + 0x8C2FC134));
                if ((t29 + t1) == 10) {
                    t30 = *(int *)(((t2 << 2) + 0x8C2FC134));
                    if (t30 != 0) {
                        t31 = *(int *)((0x8C2FC160 + (t2 << 2)));
                        t1 = t31;
                        t32 = *(int *)((((t2 << 2) + 0x8C2FC134) + 0x4));
                        t1 = (t1 + t32);
                        *(unsigned int *)((0x8C2FC160 + (t2 << 2))) = t1;
                    }
                }
            }
        }
        t41 = *(int *)0x8C2FBEF0;
        t42 = *(int *)((0x8C2FC160 + (t2 << 2)));
        t1 = t42;
        t43 = (t2 << 2);
        t2 = (t2 + 0x1);
        t45 = *(int *)((t41 + 0xC));
        *(unsigned int *)((t41 + 0xC)) = (t45 + t1);
    } while ((int)t2 < (int)0xB);
    t46 = *(int *)0x8C2FBEF0;
    t47 = *(int *)((t46 + 0xC));
    *(unsigned int *)((t46 + 0x38)) = (((t47 << 2) + t47) << 2);
    return t43;
}

int FUN_8c03b4d2(int a4)
{
    int t0;
    int t2;
    int t1;

    t0 = set_event(0x1C, 0x8C03B502);
    t2 = a4;
    if (a4 == 11) {
        t1 = nlsndSeqRequest(0x1702A9);
        t2 = t1;
    }
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = 0x78;
    return t2;
}

int FUN_8c03bc20(float f4, float f5, float f6, float f7)
{
    int t2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int t8;
    float u9;
    float u10;
    float u11;
    int t13;
    int stk[52];

    FUN_8c0f7cf0();
    FUN_8c0f7cf0();
    t2 = 0x0;
    do {
        u3 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0)) = (u3 * f6);
        u4 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4)) = (u4 * f7);
        u5 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0)) = (u5 + f4);
        u6 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4)) = (u6 + f5);
        u7 = *(float *)(((t2 + ((int)stk + 4)) + 0x0));
        t8 = (t2 + ((int)stk + 4));
        t2 = (t2 + 0x10);
        *(float *)((t8 + 0x0)) = (u7 * f6);
        u9 = *(float *)((t8 + 0x4));
        *(float *)((t8 + 0x4)) = (u9 * f7);
        u10 = *(float *)((t8 + 0x0));
        *(float *)((t8 + 0x0)) = (u10 + f4);
        u11 = *(float *)((t8 + 0x4));
        *(float *)((t8 + 0x4)) = (u11 + f5);
    } while ((unsigned int)t2 < (unsigned int)0x60);
    FUN_8c0f7130(0x6);
    t13 = FUN_8c0f7130(0x6);
    return t13;
}

int FUN_8c03bca6(float f4, float f5, float f6, float f7)
{
    int t2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int t8;
    float u9;
    float u10;
    float u11;
    int t13;
    int stk[52];

    FUN_8c0f7cf0();
    FUN_8c0f7cf0();
    t2 = 0x0;
    do {
        u3 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0)) = (u3 * f6);
        u4 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4)) = (u4 * f7);
        u5 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x0)) = (u5 + f4);
        u6 = *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4));
        *(float *)(((t2 + (((int)stk + 4) + 0x60)) + 0x4)) = (u6 + f5);
        u7 = *(float *)(((t2 + ((int)stk + 4)) + 0x0));
        t8 = (t2 + ((int)stk + 4));
        t2 = (t2 + 0x10);
        *(float *)((t8 + 0x0)) = (u7 * f6);
        u9 = *(float *)((t8 + 0x4));
        *(float *)((t8 + 0x4)) = (u9 * f7);
        u10 = *(float *)((t8 + 0x0));
        *(float *)((t8 + 0x0)) = (u10 + f4);
        u11 = *(float *)((t8 + 0x4));
        *(float *)((t8 + 0x4)) = (u11 + f5);
    } while ((unsigned int)t2 < (unsigned int)0x60);
    FUN_8c0f7130(0x6);
    t13 = FUN_8c0f7130(0x6);
    return t13;
}

int colliObjInit(int a4, float f4)
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
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int stk[32];

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t3;
    t4 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t4;
    t5 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t5;
    t6 = *(int *)0x8C1016DC;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = t6;
    t7 = *(int *)0x8C1016D8;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t7;
    t8 = *(int *)0x8C1016D4;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t8;
    *(float *)((((int)stk + 4) + 0x3C)) = f4;
    *(unsigned int *)((((int)stk + 4) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 4) + 0x34)) = 0xFFFFFFFF;
    *(unsigned int *)((((int)stk + 4) + 0x30)) = 0xFFFFFFFF;
    t9 = *(int *)0x8C1016DC;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x8)) = t9;
    t10 = *(int *)0x8C1016D8;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x4)) = t10;
    t11 = *(int *)0x8C1016D4;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = t11;
    t12 = *(int *)0x8C1016DC;
    *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x8)) = t12;
    t13 = *(int *)0x8C1016D8;
    *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x4)) = t13;
    t14 = *(int *)0x8C1016D4;
    *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = t14;
    t15 = *(int *)0x8C1016DC;
    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x8)) = t15;
    t16 = *(int *)0x8C1016D8;
    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x4)) = t16;
    t17 = *(int *)0x8C1016D4;
    *(unsigned int *)(((((int)stk + 4) + 0x60) + 0x0)) = t17;
    t18 = *(int *)0x8C1016DC;
    *(unsigned int *)(((((int)stk + 4) + 0x6C) + 0x8)) = t18;
    t19 = *(int *)0x8C1016D8;
    *(unsigned int *)(((((int)stk + 4) + 0x6C) + 0x4)) = t19;
    t20 = *(int *)0x8C1016D4;
    *(unsigned int *)(((((int)stk + 4) + 0x6C) + 0x0)) = t20;
    *(float *)((((int)stk + 4) + 0x5C)) = 1.0f;
    *(float *)((((int)stk + 4) + 0x40)) = 1.0f;
    t21 = *(int *)(((((int)stk + 4) + 0x7C) + 0x0));
    t22 = FUN_8c0f7cf0();
    return t22;
}

int colliObjEntry(int a4)
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
    int t15;
    int t14;

    t0 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t0;
    t1 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x18) + 0x4)) = t1;
    t2 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = t2;
    t3 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x50) + 0x8)) = t3;
    t4 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x50) + 0x4)) = t4;
    t5 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x50) + 0x0)) = t5;
    t6 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x60) + 0x8)) = t6;
    t7 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x60) + 0x4)) = t7;
    t8 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x60) + 0x0)) = t8;
    t9 = *(int *)0x8C1016DC;
    *(unsigned int *)(((a4 + 0x6C) + 0x8)) = t9;
    t10 = *(int *)0x8C1016D8;
    *(unsigned int *)(((a4 + 0x6C) + 0x4)) = t10;
    t11 = *(int *)0x8C1016D4;
    *(unsigned int *)(((a4 + 0x6C) + 0x0)) = t11;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(float *)((a4 + 0x40)) = 1.0f;
    t12 = *(int *)((a4 + 0x38));
    *(unsigned int *)((a4 + 0x38)) = (t12 & 0xFFFFFFFE);
    t13 = *(int *)0x8C2FC20C;
    t15 = t13;
    if (t13 != 64) {
        *(unsigned int *)(((t13 << 2) + 0x8C2FC210)) = a4;
        t14 = *(int *)0x8C2FC20C;
        *(unsigned int *)0x8C2FC20C = (t14 + 0x1);
        t15 = 0x8C2FC210;
    }
    return t15;
}

int FUN_8c03d030(void)
{
    int t0;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        return FUN_8c041e50();
    }
    return FUN_8c05689c();
}

int playerCpuInput(void)
{
    int t0;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        return FUN_8c04264a();
    }
    return FUN_8c0573f0();
}

int FUN_8c0428ac(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t4;
    int t5;
    int t7;
    int t6;

    t0 = 0x8C2FC69C;
    t1 = 0x1;
    t2 = 0x8C287D84;
    do {
        t3 = *(signed char *)((t0 + 0x128));
        t8 = 0x128;
        if (t3 == 0) {
            t4 = *(int *)((t2 + 0xB5C));
            t5 = *(int *)((((t4 << 2) + 0x8C287AE0) + 0x0));
            t7 = 0xB5C;
            if (t5 != 0) {
                t6 = FUN_8c042920(t2);
                t7 = t6;
            }
            t8 = t7;
        }
        t1 = (t1 - 1);
        t2 = (t2 + 0xD78);
        t0 = (t0 + 0x160);
    } while ((int)t1 >= 0);
    return t8;
}

int FUN_8c042b64(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t19;
    int t35;
    int t20;
    int t21;
    int t22;
    int t28;
    int t23;
    int t24;
    int t25;
    int t27;
    int t26;
    int t31;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xB60));
    if ((t1 & 0x400) == 0) {
        t2 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC));
        if (t2 == 0) {
            t3 = *(int *)((a4 + 0xC5C));
            if ((int)t3 >= (int)0x9) {
                t4 = *(int *)((a4 + 0xC5C));
                if ((int)t4 <= (int)0xC) {
                    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC)) = 0x1;
                }
            }
        }
    }
    t19 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC));
    t35 = (unsigned char)t19;
    if ((unsigned char)t19 == 1) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        t20 = *(int *)((a4 + 0xB60));
        if ((t20 & 0x100) == 0) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC)) = 0x2;
            t31 = 0xAC;
        } else {
            t21 = *(int *)0x8C2FCC1C;
            t22 = *(int *)((((t21 << 2) + 0x8C159EEC) + 0x0));
            t28 = 0xB60;
            if (t22 != 0) {
                t23 = *(int *)0x8C20D19C;
                t24 = *(int *)((((t21 << 2) + 0x8C159EEC) + 0x0));
                t25 = (int)((int)t23 % (int)t24);
                t27 = t25;
                if (t25 == 0) {
                    t26 = ((~(((~t23) + 0x1) & 0x1)) + 0x1);
                    if ((int)t23 >= 0) {
                        t26 = (t23 & 0x1);
                    }
                    *(unsigned short *)(((0x20 + ((t0 * 0x160) + 0x8C2FC69C)) + 0x0)) = ((((t26 << 2) << 2) << 2) + 0x40);
                    t27 = ((((t26 << 2) << 2) << 2) + 0x40);
                }
                t28 = t27;
            }
            t31 = t28;
        }
        t35 = t31;
    }
    return t35;
}

int FUN_8c07fe70(int a4, int a5)
{
    int t16;
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
    int t15;
    int stk[20];

    t16 = 0x0;
    if (0x1 != 0) {
        t0 = a5;
        t1 = 0x1;
        for (;;) {
            t2 = *(int *)(((((int)stk + 52) + 0x1C) + 0x8));
            *(unsigned int *)((((int)stk + 40) + 0x8)) = t2;
            t3 = *(int *)(((((int)stk + 52) + 0x1C) + 0x4));
            *(unsigned int *)((((int)stk + 40) + 0x4)) = t3;
            t4 = *(int *)(((((int)stk + 52) + 0x1C) + 0x0));
            *(unsigned int *)((((int)stk + 40) + 0x0)) = t4;
            t5 = *(int *)(((0xAE8 + a4) + 0x8));
            *(unsigned int *)((((int)stk + 28) + 0x8)) = t5;
            t6 = *(int *)(((0xAE8 + a4) + 0x4));
            *(unsigned int *)((((int)stk + 28) + 0x4)) = t6;
            t7 = *(int *)(((0xAE8 + a4) + 0x0));
            *(unsigned int *)((((int)stk + 28) + 0x0)) = t7;
            t8 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
            if ((int)t1 >= 0) {
                t8 = (t1 & 0x7);
            }
            t9 = *(int *)((((((t8 << 1) + t8) << 2) + a5) + 0x8));
            *(unsigned int *)((((int)stk + 16) + 0x8)) = t9;
            t10 = *(int *)((((((t8 << 1) + t8) << 2) + a5) + 0x4));
            *(unsigned int *)((((int)stk + 16) + 0x4)) = t10;
            t11 = *(int *)((((((t8 << 1) + t8) << 2) + a5) + 0x0));
            *(unsigned int *)((((int)stk + 16) + 0x0)) = t11;
            t12 = *(int *)((t0 + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t12;
            t13 = *(int *)((t0 + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t13;
            t14 = *(int *)((t0 + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t14;
            t15 = FUN_8c07ffea();
            if ((signed char)t15 != 0) break;
            t1 = (t1 + 0x1);
            t0 = (t0 + 0xC);
            if ((int)t1 >= (int)0x9) {
                return 0x0;
            }
        }
        t16 = 0x1;
    }
    return t16;
}

int FUN_8c0826aa(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t6;
    int t8;
    int t7;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t19;
    int t16;
    int t18;
    int t17;
    int t20;
    int t11;
    int t21;

    t0 = *(int *)0x8C20D14C;
    if (t0 == 6) {
        t1 = *(int *)0x8C2FCC20;
        if ((int)t1 < (int)0x2) {
            *(unsigned int *)0x8C181750 = 0x1;
            return 0x8C2FCC20;
        }
        t2 = *(int *)0x8C185410;
        if (t2 != 0) {
            *(unsigned int *)0x8C181750 = 0x1;
            *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
            return 0x8C2FCC20;
        }
        t3 = *(int *)0x8C30195C;
        t4 = *(int *)0x8C287ACC;
        if (t3 == t4) {
            t5 = *(int *)0x8C301958;
            t9 = t5;
            if ((int)t5 <= 0) {
                t6 = FUN_8c082884();
                t8 = t6;
                if (t6 == 0) {
                    t7 = set_event(0x18, 0x8C082716);
                    *(unsigned int *)0x8C301958 = 0x1;
                    *(unsigned int *)((t7 + 0x14)) = 0x0;
                    t8 = t7;
                }
                t9 = t8;
            }
            t11 = t9;
        } else {
            t10 = set_event(0x18, 0x8C082716);
            *(unsigned int *)0x8C301958 = 0x1;
            *(unsigned int *)((t10 + 0x14)) = 0x0;
            t11 = t10;
        }
        return t11;
    }
    t12 = *(int *)0x8C185410;
    if (t12 != 0) {
        *(unsigned int *)0x8C181750 = 0x1;
        *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
        return t0;
    }
    t13 = *(int *)0x8C30195C;
    t14 = *(int *)0x8C287ACC;
    if (t13 == t14) {
        t15 = *(int *)0x8C301958;
        t19 = t15;
        if ((int)t15 <= 0) {
            t16 = FUN_8c082884();
            t18 = t16;
            if (t16 == 0) {
                t17 = set_event(0x18, 0x8C082716);
                *(unsigned int *)0x8C301958 = 0x1;
                *(unsigned int *)((t17 + 0x14)) = 0x0;
                t18 = t17;
            }
            t19 = t18;
        }
        t21 = t19;
    } else {
        t20 = set_event(0x18, 0x8C082716);
        *(unsigned int *)0x8C301958 = 0x1;
        *(unsigned int *)((t20 + 0x14)) = 0x0;
        t21 = t20;
    }
    return t21;
}

int FUN_8c082770(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C185410;
    if (t0 != 0) {
        *(unsigned int *)0x8C301958 = 0xFFFFFFFF;
        *(unsigned int *)0x8C181750 = 0x1;
        *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
        return 0x8C181750;
    }
    t1 = set_event(0x18, 0x8C0827B2);
    *(unsigned int *)0x8C301958 = 0x3;
    *(unsigned int *)((t1 + 0x14)) = 0x0;
    *(unsigned int *)0x8C181750 = 0x1;
    return FUN_8c081cfc();
}

int FUN_8c082942(void)
{
    int t0;

    t0 = set_event(0x18, 0x8C0828F8);
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    *(unsigned int *)0x8C301970 = 0x1;
    return t0;
}

void FUN_8c083478(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C181700;
    *(unsigned int *)0x8C181700 = (t0 + 0x1);
    t1 = *(int *)0x8C421F60;
    if (t1 == 0) {
        t2 = *(int *)0x8C287D5C;
        if (t2 != 3) {
            t3 = *(int *)0x8C20D150;
            if (t3 != 11) {
                t4 = *(int *)0x8C181614;
                *(unsigned int *)0x8C181614 = (t4 + 0x1);
                t5 = set_event(0x38, 0x8C083310);
                *(unsigned int *)((t5 + 0x14)) = 0x0;
                *(float *)((t5 + 0x1C)) = 0.0f;
                *(unsigned int *)((t5 + 0x2C)) = 0x5A;
                *(unsigned int *)((t5 + 0x30)) = 0x0;
                *(unsigned int *)((t5 + 0x18)) = 0x0;
                *(unsigned int *)((t5 + 0x34)) = 0x0;
                *(unsigned int *)0x8C334420 = a4;
            }
        }
    }
}

int FUN_8c083608(void)
{
    int t0;

    t0 = set_event(0x298, 0x8C0835D2);
    *(unsigned int *)((t0 + 0x14)) = 0x1;
    return t0;
}

int FUN_8c083cb0(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        FUN_8c083c38();
        return FUN_8c010afa(a4);
    }
    return 0;
}

void FUN_8c083cd8(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = FUN_8c010976(0x20, 0x8C083CB0);
        *(unsigned int *)((t1 + 0x1C)) = a4;
    }
}

void FUN_8c083dc4(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = FUN_8c010976(0x20, 0x8C083D9C);
        *(unsigned int *)((t1 + 0x1C)) = a4;
    }
}

void FUN_8c083f48(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = FUN_8c010976(0x20, 0x8C083F24);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned int *)((t1 + 0x14)) = a5;
    }
}

void FUN_8c084048(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = FUN_8c010976(0x20, 0x8C083FF2);
        *(unsigned int *)((t1 + 0x1C)) = a4;
        *(unsigned int *)((t1 + 0x14)) = a5;
    }
}

int FUN_8c08412e(int a4, int a5)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084102);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int FUN_8c084240(int a4, int a5)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084214);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int FUN_8c084326(int a4, int a5)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084302);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int FUN_8c084414(int a4, int a5)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C0843E8);
    *(unsigned int *)((t0 + 0x1C)) = a5;
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int FUN_8c0844a4(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        FUN_8c084436();
        return FUN_8c010afa(a4);
    }
    return 0;
}

int FUN_8c0844cc(int a4)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C0844A4);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}

int FUN_8c084638(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084612);
    *(unsigned int *)((t0 + 0x1C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a4;
    *(unsigned int *)((t0 + 0x18)) = a5;
    return t0;
}

int FUN_8c08478a(int a4, int a5, int a6)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084764);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    *(unsigned int *)((t0 + 0x14)) = a5;
    *(unsigned int *)((t0 + 0x18)) = a6;
    return t0;
}

int FUN_8c084856(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if (t0 == 0) {
        FUN_8c0847e8();
        return FUN_8c010afa(a4);
    }
    return 0;
}

int FUN_8c08487e(int a4)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084856);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}

int FUN_8c08495c(int a4)
{
    int t0;

    t0 = FUN_8c010976(0x20, 0x8C084934);
    *(unsigned int *)((t0 + 0x1C)) = a4;
    return t0;
}

int FUN_8c084978(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C334408;
        if (t1 == 0) {
            FUN_8c08487e(a4);
            FUN_8c0d7a9c(0x1);
        }
        t4 = *(int *)0x8C334408;
        if (t4 == 1) {
            FUN_8c08495c(a4);
            return FUN_8c0d7a9c(0x2);
        }
        return t4;
    }
    return 0;
}

int FUN_8c0849ce(void)
{
    int t0;

    t0 = FUN_8c010976(0x18, 0x8C0849B6);
    *(unsigned int *)((t0 + 0x14)) = 0x82;
    *(unsigned int *)0x8C33441C = 0x1;
    return t0;
}

int FUN_8c084acc(void)
{
    int t0;

    t0 = FUN_8c010976(0x18, 0x8C084A64);
    *(unsigned int *)0x8C1850A0 = 0x1;
    *(float *)0x8C1850A4 = 0.0f;
    *(unsigned int *)((t0 + 0x14)) = 0x96;
    return t0;
}

int FUN_8c084b1c(int a4)
{
    int t0;

    t0 = FUN_8c010976(0x1C, 0x8C084AEC);
    *(unsigned int *)((t0 + 0x14)) = 0x1E;
    *(unsigned int *)((t0 + 0x18)) = a4;
    return t0;
}

void FUN_8c085070(int a4)
{
    int t0;

    t0 = set_event(0xC0, 0x8C084FCC);
    *(unsigned int *)((t0 + 0x14)) = 0x64;
    *(unsigned int *)((t0 + 0xB8)) = a4;
    *(float *)((t0 + 0xBC)) = 0.0f;
}

void FUN_8c086168(void)
{
    int t0;

    t0 = FUN_8c010976(0x1C, 0x8C0860C4);
    *(unsigned int *)((t0 + 0x14)) = 0x8C;
    *(float *)((t0 + 0x18)) = 0.0f;
}

void FUN_8c086588(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C287D5C;
        if (t1 != 3) {
            t2 = FUN_8c010976(0x48, 0x8C086486);
            if (a4 == 0) {
                *(unsigned int *)((t2 + 0x14)) = 0xB4;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x78;
            }
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t4 = *(int *)0x8C287C64;
            t5 = *(int *)0x8C287B00;
            if (t5 != t4) {
                t6 = *(int *)0x8C287B04;
                t7 = *(int *)0x8C287C64;
                if (t6 == t7) {
                    *(unsigned int *)((t2 + 0x14)) = 0x3C;
                }
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x3C;
            }
        }
    }
}

int FUN_8c08670c(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C08660C);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

int FUN_8c086854(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C086754);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

int FUN_8c0869be(void)
{
    int t0;
    int t9;
    int t1;
    int t6;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C287D5C;
    t9 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t6 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C08688C);
            *(unsigned int *)((t2 + 0x14)) = 0xB4;
            *(unsigned int *)((t2 + 0x18)) = 0x3C;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x1C)) = 0x0;
            t3 = *(int *)0x8C334408;
            if (t3 == 0) {
                *(unsigned int *)((t2 + 0x28)) = 0x1;
                t4 = 0x24;
            } else {
                *(unsigned int *)((t2 + 0x28)) = 0x2;
                t4 = 0x2;
            }
            t6 = t4;
        }
        t9 = t6;
    }
    return t9;
}

int FUN_8c086b40(int a4)
{
    int t0;
    int t6;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t6 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C086A34);
            *(unsigned int *)((t2 + 0x14)) = a4;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t6 = t3;
    }
    return t6;
}

int FUN_8c086c90(int a4)
{
    int t0;
    int t15;
    int t1;
    int t11;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;

    t0 = *(int *)0x8C287D5C;
    t15 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t11 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C086B90);
            if (a4 == 0) {
                *(unsigned int *)((t2 + 0x14)) = 0xB4;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x78;
            }
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t4 = *(int *)0x8C287C64;
            t5 = *(int *)0x8C287B00;
            if (t5 != t4) {
                t6 = *(int *)0x8C287B04;
                t7 = *(int *)0x8C287C64;
                if (t6 == t7) {
                    *(unsigned int *)((t2 + 0x14)) = 0x3C;
                }
                t9 = t7;
            } else {
                *(unsigned int *)((t2 + 0x14)) = 0x3C;
                t9 = 0x24;
            }
            t11 = t9;
        }
        t15 = t11;
    }
    return t15;
}

int FUN_8c086e14(void)
{
    int t0;
    int t7;
    int t1;
    int t6;
    int t2;
    int t4;
    int t3;

    t0 = *(int *)0x8C287B3C;
    t7 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t6 = t1;
        if (t1 != 3) {
            t2 = *(int *)0x8C421F60;
            t4 = t1;
            if (t2 == 0) {
                t3 = FUN_8c010976(0x48, 0x8C086D14);
                *(unsigned int *)((t3 + 0x14)) = 0x78;
                *(unsigned int *)((t3 + 0x18)) = 0x0;
                *(float *)((t3 + 0x20)) = 0.0f;
                *(float *)((t3 + 0x24)) = 1.0f;
                *(unsigned int *)((t3 + 0x3C)) = 0x0;
                t4 = 0x24;
            }
            t6 = t4;
        }
        t7 = t6;
    }
    return t7;
}

int FUN_8c086f60(void)
{
    int t0;
    int t7;
    int t1;
    int t6;
    int t2;
    int t4;
    int t3;

    t0 = *(int *)0x8C287B3C;
    t7 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t6 = t1;
        if (t1 != 3) {
            t2 = *(int *)0x8C421F60;
            t4 = t1;
            if (t2 == 0) {
                t3 = FUN_8c010976(0x48, 0x8C086E68);
                *(unsigned int *)((t3 + 0x14)) = 0x5A;
                *(unsigned int *)((t3 + 0x18)) = 0x0;
                *(float *)((t3 + 0x20)) = 0.0f;
                *(float *)((t3 + 0x24)) = 1.0f;
                *(unsigned int *)((t3 + 0x3C)) = 0x0;
                t4 = 0x24;
            }
            t6 = t4;
        }
        t7 = t6;
    }
    return t7;
}

int FUN_8c0870c6(void)
{
    int t0;
    int t4;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287B3C;
    t4 = t0;
    if ((t0 & 1) == 0) {
        t1 = *(int *)0x8C287D5C;
        t3 = t1;
        if (t1 != 3) {
            t2 = FUN_8c010976(0x48, 0x8C086FA0);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t4 = t3;
    }
    return t4;
}

int FUN_8c087224(void)
{
    int t0;
    int t5;
    int t1;
    int t3;
    int t2;

    t0 = *(int *)0x8C287D5C;
    t5 = t0;
    if (t0 != 3) {
        t1 = *(int *)0x8C421F60;
        t3 = t0;
        if (t1 == 0) {
            t2 = FUN_8c010976(0x48, 0x8C087124);
            *(unsigned int *)((t2 + 0x14)) = 0x78;
            *(unsigned int *)((t2 + 0x18)) = 0x0;
            *(float *)((t2 + 0x20)) = 0.0f;
            *(float *)((t2 + 0x24)) = 1.0f;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            t3 = 0x24;
        }
        t5 = t3;
    }
    return t5;
}

void FUN_8c087e3a(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = FUN_8c010976(0x40, 0x8C087D94);
    *(unsigned int *)((t0 + 0x3C)) = a4;
    *(unsigned int *)((t0 + 0x28)) = a5;
    *(unsigned int *)((t0 + 0x2C)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a7;
    *(unsigned int *)((t0 + 0x1C)) = a8;
    *(float *)((t0 + 0x20)) = 0.0f;
    *(float *)((t0 + 0x24)) = 0.0f;
    *(unsigned short *)((t0 + 0x30)) = 0x0;
    *(unsigned int *)((t0 + 0x38)) = 0x0;
}

int FUN_8c088f0e(int a4)
{
    int t0;

    t0 = set_event(0x1C, 0x8C088EE4);
    *(unsigned int *)((t0 + 0x18)) = a4;
    *(unsigned int *)((t0 + 0x14)) = 0x0;
    return t0;
}

int FUN_8c088f78(int a4)
{
    int t0;

    t0 = set_event(0x68, 0x8C088F2E);
    *(unsigned int *)((t0 + 0x14)) = a4;
    return t0;
}

int FUN_8c089cf6(int a4, int a5, int a6)
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
    int t12;

    t0 = FUN_8c0ea2a0(a6);
    t1 = t0;
    t2 = (a4 + 0x18);
    do {
        t3 = *(int *)((t2 + 0x0));
        if ((int)t3 < 0) {
            *(unsigned int *)((t2 + 0x20)) = a5;
            t2 = (t2 + 0x50);
        }
        t4 = *(int *)((t2 + 0x0));
        if ((int)t4 > 0) {
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t6 = 0x1;
            if ((t5 & 0x8) != 0) {
                t6 = 0x3;
            }
            t7 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t1 = 0x0;
            t8 = t4;
            t9 = a5;
            while ((int)t1 < (int)t7) {
                t9 = 0x0;
                if ((int)t6 > 0) {
                    do {
                        t10 = *(int *)((t2 + 0x0));
                        t8 = t10;
                        t9 = (t9 + 0x1);
                        if ((t8 & 0x1) != 0) {
                            t2 = (t2 + 0x20);
                        } else {
                            t2 = (t2 + 0x8);
                        }
                    } while ((int)t9 < (int)t6);
                }
                t1 = (t1 + 0x1);
            }
        }
        t12 = *(int *)((t2 + 0x0));
    } while (t12 != 0);
    return t1;
}

void FUN_8c089d6c(int a4, int a5, int a6)
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
    int t13;

    t0 = (a4 + 0x18);
    do {
        t1 = *(int *)((t0 + 0x0));
        if ((int)t1 < 0) {
            t2 = *(int *)((t0 + 0x20));
            if (t2 == a5) {
                *(unsigned int *)((t0 + 0x20)) = a6;
            }
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = 0x0;
            t8 = t3;
            while ((int)t7 < (int)t6) {
                if ((int)t5 > 0) {
                    t9 = 0x0;
                    do {
                        t10 = *(int *)((t0 + 0x0));
                        t8 = t10;
                        t9 = (t9 + 0x1);
                        if ((t8 & 0x1) != 0) {
                            t0 = (t0 + 0x20);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t9 < (int)t5);
                }
                t7 = (t7 + 0x1);
            }
        }
        t13 = *(int *)((t0 + 0x0));
    } while (t13 != 0);
}

int FUN_8c08a750(int a4, int a5)
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
    float u10;
    int t11;
    float u12;
    int t13;
    float u14;
    int t15;
    int t17;

    t0 = (a4 + 0x18);
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        if ((int)t2 < 0) {
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = t4;
            t8 = 0x0;
            while ((int)t8 < (int)t6) {
                t7 = 0x0;
                if ((int)t5 > 0) {
                    do {
                        t9 = *(int *)((t0 + 0x0));
                        t7 = (t7 + 0x1);
                        if ((t9 & 0x1) != 0) {
                            u10 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t11 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t11)) = (int)u10;
                            u12 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t13 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t13)) = (int)u12;
                            u14 = *(float *)((t0 + 0x0));
                            t0 = (t0 + 0x4);
                            t15 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(unsigned int *)((a5 + t15)) = (int)u14;
                            t0 = (t0 + 0x14);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t7 < (int)t5);
                }
                t8 = (t8 + 0x1);
            }
        }
        t17 = *(int *)((t0 + 0x0));
    } while (t17 != 0);
    *(unsigned int *)((a5 + (t1 << 2))) = t1;
    return (t1 << 2);
}

void FUN_8c08a876(int a4, int a5)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;

    t0 = (a4 + 0x18);
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x0));
        if ((int)t2 < 0) {
            t0 = (t0 + 0x50);
        }
        t3 = *(int *)((t0 + 0x0));
        if ((int)t3 > 0) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = 0x1;
            if ((t4 & 0x8) != 0) {
                t5 = 0x3;
            }
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = t4;
            t8 = 0x0;
            while ((int)t8 < (int)t6) {
                t7 = 0x0;
                if ((int)t5 > 0) {
                    do {
                        t9 = *(int *)((t0 + 0x0));
                        t7 = (t7 + 0x1);
                        if ((t9 & 0x1) != 0) {
                            t10 = *(int *)((a5 + (t1 << 2)));
                            t1 = (t1 + 0x1);
                            t12 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(float *)((t0 + 0x0)) = (float)t10;
                            t0 = (t0 + 0x4);
                            t13 = *(int *)((a5 + t12));
                            t14 = (t1 << 2);
                            t1 = (t1 + 0x1);
                            *(float *)((t0 + 0x0)) = (float)t13;
                            t0 = (t0 + 0x4);
                            t15 = *(int *)((a5 + t14));
                            *(float *)((t0 + 0x0)) = (float)t15;
                            t0 = (t0 + 0x18);
                        } else {
                            t0 = (t0 + 0x8);
                        }
                    } while ((int)t7 < (int)t5);
                }
                t8 = (t8 + 0x1);
            }
        }
        t17 = *(int *)((t0 + 0x0));
    } while (t17 != 0);
}

int FUN_8c08a910(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (a4 + 0x18);
    t1 = 0x18;
    t2 = a6;
    t3 = a7;
    for (;;) {
        t4 = *(int *)((t0 + 0x0));
        if (t4 == 0) break;
        t2 = t0;
        t5 = *(int *)((t2 + 0x4C));
        t3 = t5;
        t0 = (t0 + 0x50);
        t1 = (t1 + 0x50);
        t0 = (t0 + t3);
        t1 = (t1 + t3);
    }
    return (t1 + 0x8);
}

int FUN_8c08b080(void)
{
    float u3;
    float u4;
    float u5;
    int t6;
    int stk[18];

    nlPushUnitMatrix();
    nlGetMatrix(((int)stk + 4));
    nlPopMatrix(0x1);
    u3 = *(float *)(((((int)stk + 4) + 0x44) + 0x0));
    *(float *)(((int)stk + 20)) = u3;
    u4 = *(float *)(((((int)stk + 4) + 0x44) + 0x4));
    *(float *)(((int)stk + 24)) = (u4 + 1.0f);
    u5 = *(float *)(((((int)stk + 4) + 0x44) + 0x8));
    *(float *)(((int)stk + 28)) = u5;
    t6 = nlMultiMatrix(((int)stk + 4));
    return t6;
}

int thunk_FUN_8c0f2210(void)
{
    return nlObjPutMvInit();
}

int FUN_8c08ce9c(void)
{
    int t0;
    int t1;
    int t2;
    int stk[1];

    t0 = *(int *)((((int)stk + 4) + 0x0));
    t1 = *(int *)((((int)stk + 4) + 0xC));
    t2 = *(int *)(((t1 << 2) + (((((t0 << 2) << 1) + t0) << 2) + 0x8C10DDE0)));
    return t2;
}

void FUN_8c08d4dc(void)
{
    int t0;
    int t1;
    int t2;
    int stk[30];

    t0 = *(int *)0x8C10DFB0;
    *(unsigned int *)(((((int)stk + 4) + 0x64) + 0x8)) = t0;
    t1 = *(int *)0x8C10DFAC;
    *(unsigned int *)(((((int)stk + 4) + 0x64) + 0x4)) = t1;
    t2 = *(int *)0x8C10DFA8;
    *(unsigned int *)(((((int)stk + 4) + 0x64) + 0x0)) = t2;
}

int FUN_8c08dec2(void)
{
    int t1;

    nlObjPutSetVtxColorMode(0x1);
    t1 = thunk_FUN_8c0f2210();
    *(unsigned int *)0x8C30196C = 0x0;
    return t1;
}

void FUN_8c08e6d4(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    int stk[1];

    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    u0 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)((a4 + 0x4)) = u0;
    u1 = *(float *)((((int)stk + 4) + 0x4));
    *(float *)((a4 + 0x8)) = u1;
    u2 = *(float *)((((int)stk + 4) + 0x8));
    *(float *)((a4 + 0xC)) = u2;
    *(float *)((a4 + 0x10)) = 1.0f;
    *(float *)((a4 + 0x14)) = 1.0f;
    *(float *)((a4 + 0x18)) = 0.0f;
    *(float *)((a4 + 0x1C)) = 0.0f;
    *(float *)((a4 + 0x20)) = 1.0f;
    *(float *)((a4 + 0x24)) = 1.0f;
    *(float *)((a4 + 0x2C)) = 1.0f;
    *(unsigned int *)((a4 + 0x30)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0x34)) = 0xA;
}

void FUN_8c08ea2a(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t9;
    int t10;
    int t11;
    float u13;
    float u14;
    float u15;
    int stk[12];

    u0 = *(float *)((a4 + 0x18));
    *(float *)(((int)stk + 20)) = u0;
    u1 = *(float *)((a4 + 0x20));
    *(float *)(((int)stk + 16)) = u1;
    u2 = *(float *)((a4 + 0x1C));
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x10));
    *(float *)(((int)stk + 24)) = u4;
    u5 = *(float *)((a4 + 0x14));
    if (a5 == 0) {
        *(float *)((a4 + 0x24)) = ((f6 * u5) + u2);
        *(float *)((a4 + 0x14)) = (f6 * u5);
    }
    if (a5 == 1) {
        *(float *)((a4 + 0x1C)) = ((u2 - (f6 * u5)) + u5);
        *(float *)((a4 + 0x14)) = (f6 * u5);
    }
    t9 = *(int *)(((((int)stk + 16) + 0x20) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t9;
    t10 = *(int *)(((((int)stk + 16) + 0x20) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
    t11 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
    FUN_8c08e944(a4);
    u13 = *(float *)(((int)stk + 20));
    *(float *)((a4 + 0x18)) = u13;
    *(float *)((a4 + 0x1C)) = u2;
    u14 = *(float *)(((int)stk + 16));
    *(float *)((a4 + 0x20)) = u14;
    *(float *)((a4 + 0x24)) = u3;
    u15 = *(float *)(((int)stk + 24));
    *(float *)((a4 + 0x10)) = u15;
    *(float *)((a4 + 0x14)) = u5;
}

int FUN_8c08eb7c(void)
{
    int t1;
    int t2;
    int t3;
    int stk[83];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C334434), 0x85, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C334434);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0x12);
    return t2;
}

int FUN_8c08ebe6(void)
{
    int t1;
    int t2;
    int t3;
    int stk[59];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C3349D4), 0x84, ((int)stk + 12), 0x40, 0x40, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C3349D4);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0xC);
    return t2;
}

int FUN_8c08ec50(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C334434));
    return t4;
}

int FUN_8c08ec7e(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[7];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = *(int *)(((int)stk + 20));
    t5 = FUN_8c0bac18((((((t3 << 2) + t3) << 2) << 2) + 0x8C334434), 0x80, 0x80, t4);
    return t5;
}

int FUN_8c08fcd4(void)
{
    int t1;
    int t2;
    int t3;
    int stk[31];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C334EDC), 0x87, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C334EDC);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0x5);
    return t2;
}

int FUN_8c09027e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C3373BC));
    return t4;
}

void FUN_8c090408(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = 0x0;
    do {
        t1 = 0x0;
        do {
            t2 = (0x8C3343C8 + t1);
            t1 = (t1 + 0x14);
            *(unsigned int *)(((t0 << 2) + t2)) = 0x0;
        } while ((unsigned int)t1 < (unsigned int)0x28);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x6);
    *(unsigned int *)0x8C3343BC = 0x0;
    *(unsigned int *)0x8C3343B8 = 0x0;
    *(unsigned int *)0x8C3343C4 = 0x0;
    *(unsigned int *)0x8C3343C0 = 0x0;
    *(unsigned int *)0x8C334400 = 0x0;
    *(unsigned int *)0x8C334404 = 0x0;
    *(unsigned int *)0x8C334408 = 0x0;
    *(float *)0x8C33440C = 0.0f;
    *(unsigned int *)0x8C334410 = 0x0;
    *(unsigned int *)0x8C334414 = 0x0;
    *(unsigned int *)0x8C334418 = 0x0;
    FUN_8c0d7e98();
    t5 = 0x0;
    do {
        t6 = *(int *)((((t5 * 0xD78) + 0x8C287D84) + 0xC58));
        *(unsigned int *)(((0x8C3343F0 + (t5 << 2)) + 0x0)) = t6;
        t7 = *(int *)(((0x8C287AE0 + (t5 << 2)) + 0x0));
        if (t7 != 0) {
            *(unsigned int *)(((0x8C334424 + (t5 << 2)) + 0x0)) = 0x4;
        } else {
            *(unsigned int *)(((0x8C334424 + (t5 << 2)) + 0x0)) = t5;
        }
        t5 = (t5 + 0x1);
    } while ((int)t5 < (int)0x4);
}

int FUN_8c090b7c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)0x8C1016DC;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)0x8C1016D8;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)0x8C1016D4;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c090af0(0x8C337C50, 0x0);
    return t3;
}

int FUN_8c090b98(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)(((((int)stk + 16) + 0x4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c08e944(0x8C337C50);
    return t3;
}

int FUN_8c090bb8(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        FUN_8c08e7a4((((((t0 << 2) + t0) << 2) << 2) + 0x8C337CA0), 0x5F, 0x8C10E674, 0x80, 0x80, t0, 0x5);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x2);
    t2 = 0x2;
    do {
        t3 = FUN_8c08e7a4((((((t2 << 2) + t2) << 2) << 2) + 0x8C337CA0), 0x60, 0x8C10E674, 0x80, 0x80, t2, 0x5);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0x4);
    return t3;
}

int FUN_8c090cec(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e7a4((((((t0 << 2) + t0) << 2) << 2) + 0x8C337DE0), 0x5D, 0x8C10E6B4, 0x100, 0x100, t0, 0xA);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xE);
    return t1;
}

int FUN_8c090d3c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C337DE0));
    return t4;
}

int FUN_8c090dd8(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e7a4((((((t0 << 2) + t0) << 2) << 2) + 0x8C338240), 0x5E, 0x8C10E7BC, 0x100, 0x100, t0, 0xA);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xC);
    return t1;
}

int FUN_8c090e28(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C338240));
    return t4;
}

int FUN_8c090e58(void)
{
    int t1;
    int t2;
    int t3;
    int stk[103];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C338600), 0x1D, ((int)stk + 12), 0x100, 0x100, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C338600);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0x17);
    return t2;
}

int FUN_8c091b54(void)
{
    int t1;
    int t2;
    int t3;
    int stk[39];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C3398C0), 0x23, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C3398C0);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0x7);
    return t2;
}

int FUN_8c091c1e(void)
{
    int t1;
    int t2;
    int t3;
    int stk[35];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C339AF0), 0x7A, ((int)stk + 12), 0x100, 0x100, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C339AF0);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x1005;
    } while ((int)t1 < (int)0x6);
    return t2;
}

int FUN_8c092680(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C339CD0), 0x1C, 0x8C10ED0C, 0x100, 0x100, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C339CD0);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x5;
    } while ((int)t0 < (int)0x15);
    return t1;
}

int FUN_8c092e2c(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C), 0x1F, 0x8C184930, 0x100, 0x100, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33506C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x100D;
    } while ((int)t0 < (int)0x71);
    return t1;
}

int FUN_8c0950de(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C33A360), 0x65, 0x8C10EF54, 0x40, 0x40, t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xB);
    return t1;
}

int FUN_8c0954cc(void)
{
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int stk[63];

    FUN_8c0f7cf0();
    FUN_8c0f7cf0();
    t2 = 0x0;
    do {
        FUN_8c08e718((((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30), 0x18, (((int)stk + 28) + 0x60), 0x40, 0x40, t2);
        FUN_8c08e718((0x1E0 + (((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30)), 0x19, ((int)stk + 28), 0x40, 0x40, t2);
        t5 = FUN_8c08e718((0x3C0 + (((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30)), 0x1A, ((int)stk + 28), 0x40, 0x40, t2);
        t6 = (((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30);
        t7 = (0x1E0 + (((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30));
        t8 = (0x3C0 + (((((t2 << 2) + t2) << 2) << 2) + 0x8C33AB30));
        t2 = (t2 + 0x1);
        *(unsigned int *)((t6 + 0x34)) = 0x5;
        *(unsigned int *)((t7 + 0x34)) = 0x5;
        *(unsigned int *)((t8 + 0x34)) = 0x5;
    } while ((int)t2 < (int)0x6);
    return t5;
}

int FUN_8c0959e8(void)
{
    int t1;
    int t2;
    int stk[57];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C33B0D0), 0x5, ((int)stk + 12), 0x80, 0x80, t1);
        t1 = (t1 + 0x1);
    } while ((int)t1 < (int)0xC);
    return t2;
}

void FUN_8c095a44(void)
{
    int t1;
    int stk[69];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C33B490), 0x4, ((int)stk + 12), 0x80, 0x80, t1);
        t1 = (t1 + 0x1);
    } while ((int)t1 < (int)0xF);
    *(unsigned int *)0x8C33B918 = 0xFFFFC000;
    *(unsigned int *)0x8C33B828 = 0xFFFFC000;
    *(unsigned int *)0x8C33B878 = 0x4000;
}

int FUN_8c0962fe(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C33B940), 0x6A, 0x8C10F2F8, 0x40, 0x40, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33B940);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x5;
    } while ((int)t0 < (int)0xE);
    return t1;
}

int FUN_8c096350(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C33BDA0), 0x64, 0x8C10F3D8, 0x40, 0x40, t0);
        t2 = (((((t0 << 2) + t0) << 2) << 2) + 0x8C33BDA0);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x34)) = 0x1005;
    } while ((int)t0 < (int)0x11);
    return t1;
}

int FUN_8c0982f6(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[9];

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C1016DC;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
        t2 = *(int *)0x8C1016D8;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t3 = *(int *)0x8C1016D4;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
        t4 = FUN_8c098262((((((t0 << 2) + t0) << 2) << 2) + 0x8C33D120), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x14);
    return t4;
}

int FUN_8c09871a(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)(((((int)stk + 16) + 0x4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c098538(1.0f);
    return t3;
}

int FUN_8c098736(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t18;
    int t13;
    int t8;
    int stk[7];

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    t0 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
                    t1 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
                    t2 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
                    t3 = FUN_8c08e840(0x8C33BD50);
                    t8 = t3;
                } else {
                    t4 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t4;
                    t5 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t5;
                    t6 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t6;
                    t7 = FUN_8c098384(0x28, 1.0f);
                    t8 = t7;
                }
                t13 = t8;
            } else {
                t9 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t9;
                t10 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
                t11 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
                t12 = FUN_8c098384(0x1E, 1.0f);
                t13 = t12;
            }
            t18 = t13;
        } else {
            t14 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t14;
            t15 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t15;
            t16 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t16;
            t17 = FUN_8c098384(0xF, 1.0f);
            t18 = t17;
        }
        t23 = t18;
    } else {
        t19 = *(int *)(((((int)stk + 16) + 0xC) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t19;
        t20 = *(int *)(((((int)stk + 16) + 0xC) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t20;
        t21 = *(int *)(((((int)stk + 16) + 0xC) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t21;
        t22 = FUN_8c098384(0x0, 1.0f);
        t23 = t22;
    }
    return t23;
}

int FUN_8c0991d2(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)(((((int)stk + 16) + 0x4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c08e944(0x8C33D7E0);
    return t3;
}

int FUN_8c099230(void)
{
    int t1;
    int t2;
    int t3;
    int stk[67];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C33A6D0), 0x66, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C33A6D0);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x5;
    } while ((int)t1 < (int)0xE);
    return t2;
}

int FUN_8c09929a(void)
{
    int t1;
    int t2;
    int t3;
    int stk[43];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C33D830), 0x67, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C33D830);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0xD;
    } while ((int)t1 < (int)0x8);
    return t2;
}

void FUN_8c099302(void)
{
    int t1;
    int t3;
    int stk[55];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C33DAB0), 0x68, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C33DAB0);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0xD;
    } while ((int)t1 < (int)0xB);
    *(unsigned int *)0x8C33DCC4 = 0x5;
    *(unsigned int *)0x8C33DD14 = 0x5;
    *(unsigned int *)0x8C33DD64 = 0x5;
    *(unsigned int *)0x8C33DDB4 = 0x5;
    *(unsigned int *)0x8C33DE04 = 0x5;
}

int FUN_8c09a7b6(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[9];

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C1016DC;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
        t2 = *(int *)0x8C1016D8;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t3 = *(int *)0x8C1016D4;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
        t4 = FUN_8c09a720((((((t0 << 2) + t0) << 2) << 2) + 0x8C33E000), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
    return t4;
}

int FUN_8c09ac9e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[9];

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C1016DC;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
        t2 = *(int *)0x8C1016D8;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t3 = *(int *)0x8C1016D4;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
        t4 = FUN_8c09ac08((((((t0 << 2) + t0) << 2) << 2) + 0x8C33E820), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
    return t4;
}

int FUN_8c09b040(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c08e718((((((t0 << 2) + t0) << 2) << 2) + 0x8C33ECD0), 0x1, 0x8C10FE30, 0x100, 0x100, t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x10);
    return t1;
}

int FUN_8c09b088(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = *(int *)(((t3 << 2) + 0x8C10FF30));
    t5 = FUN_8c08e944((((((t4 << 2) + t4) << 2) << 2) + 0x8C33ECD0));
    return t5;
}

int FUN_8c09b47e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[9];

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C1016DC;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
        t2 = *(int *)0x8C1016D8;
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t3 = *(int *)0x8C1016D4;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
        t4 = FUN_8c09b3ec((((((t0 << 2) + t0) << 2) << 2) + 0x8C33F3B0), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x19);
    return t4;
}

int FUN_8c09b4c2(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)(((((int)stk + 16) + 0x4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c08e944(0x8C33FA90);
    return t3;
}

int FUN_8c09ba24(void)
{
    int t0;
    int t2;
    int t3;

    t0 = 0x0;
    do {
        FUN_8c08e7a4((((((t0 << 2) + t0) << 2) << 2) + 0x8C33FB80), 0x61, 0x8C110148, 0x80, 0x80, t0, 0x5);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xC);
    t2 = 0x0;
    do {
        t3 = FUN_8c08e7a4((((((t2 << 2) + t2) << 2) << 2) + 0x8C33FF40), 0x62, 0x8C110208, 0x80, 0x80, t2, 0x5);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0xF);
    return t3;
}

int FUN_8c09c3d2(void)
{
    int t1;
    int t2;
    int t3;
    int stk[43];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C340494), 0x7E, ((int)stk + 12), 0x100, 0x100, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C340494);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x1005;
    } while ((int)t1 < (int)0x8);
    return t2;
}

void FUN_8c09e55a(void)
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
    int stk[14];

    t0 = *(int *)0x8C1103C4;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0xC)) = t0;
    t1 = *(int *)0x8C1103C0;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t1;
    t2 = *(int *)0x8C1103BC;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t2;
    t3 = *(int *)0x8C1103B8;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t3;
    t4 = *(int *)0x8C1103D4;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = t4;
    t5 = *(int *)0x8C1103D0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t5;
    t6 = *(int *)0x8C1103CC;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t6;
    t7 = *(int *)0x8C1103C8;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t7;
    t8 = *(int *)0x8C1103E4;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t8;
    t9 = *(int *)0x8C1103E0;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t9;
    t10 = *(int *)0x8C1103DC;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t10;
    t11 = *(int *)0x8C1103D8;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t11;
}

int FUN_8c09fd38(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[5];

    t0 = *(int *)(((((int)stk + 16) + 0x4) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x4) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = FUN_8c09f1d2();
    return t3;
}

int FUN_8c0a3d04(void)
{
    int t0;
    int t1;

    t0 = 0x8C33F1D0;
    do {
        t1 = thunk_FUN_8c0f41f0();
        t0 = (t0 + 0x50);
    } while ((unsigned int)t0 < (unsigned int)0x8C33F3B0);
    return t1;
}

int FUN_8c0a56a4(void)
{
    int t1;
    int t2;
    int t3;
    int stk[39];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C341808), 0x26, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C341808);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t3 + 0x34)) = 0x1005;
        *(unsigned int *)((t3 + 0x28)) = 0x300;
    } while ((int)t1 < (int)0x7);
    return t2;
}

void FUN_8c0a58a4(void)
{
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int stk[119];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        FUN_8c08e718((((((t1 << 2) + t1) << 2) << 2) + 0x8C341A38), 0x25, ((int)stk + 12), 0x80, 0x80, t1);
        t3 = *(int *)(((((((t1 << 2) + t1) << 2) << 2) + 0x8C341A38) + 0x34));
        t4 = (((((t1 << 2) + t1) << 2) << 2) + 0x8C341A38);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t4 + 0x34)) = (t3 | 0x5);
    } while ((int)t1 < (int)0x1B);
    t5 = *(int *)0x8C34223C;
    *(unsigned int *)0x8C34223C = (t5 | 0x1005);
    t6 = *(int *)0x8C34228C;
    *(unsigned int *)0x8C34228C = (t6 | 0x1005);
}

int FUN_8c0a5924(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t6;
    int stk[6];

    if (a4 == 0) {
        t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
        t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
        t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
        t6 = 0x7D0;
    } else {
        t3 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t3;
        t4 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t4;
        t5 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t5;
        t6 = 0x820;
    }
    t7 = FUN_8c08e944((t6 + 0x8C341A38));
    return t7;
}

void FUN_8c0a5c6e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    if ((int)a4 <= (int)0x1C) {
        t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
        t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
        t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
        t3 = *(int *)(((int)stk + 16));
        FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C341A38));
    }
}

int FUN_8c0a604a(int a4, int a5, int a6)
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
    int stk[9];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = *(int *)(((int)stk + 20));
    if ((int)t0 < 0) {
        t1 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
        t2 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t3 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
        t4 = *(int *)(((int)stk + 24));
        t5 = *(int *)(((int)stk + 16));
        t6 = FUN_8c08eac6((((((t4 << 2) + t4) << 2) << 2) + 0x8C3422A8), t5, 0x40);
        t13 = t6;
    } else {
        t7 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t7;
        t8 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t8;
        t9 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t9;
        t10 = *(int *)(((int)stk + 20));
        t11 = *(int *)(((int)stk + 16));
        t12 = FUN_8c08eac6(((((((t10 << 2) + t10) << 2) << 2) + 0x8C3422A8) + 0x5A0), t11, 0x40);
        t13 = t12;
    }
    return t13;
}

int FUN_8c0a65e6(int a4, int a5)
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
    int stk[8];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    if ((int)a5 < 0) {
        t0 = *(int *)(((((int)stk + 16) + 0x10) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
        t1 = *(int *)(((((int)stk + 16) + 0x10) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
        t2 = *(int *)(((((int)stk + 16) + 0x10) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
        t3 = *(int *)(((int)stk + 20));
        t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C3422A8));
        t10 = t4;
    } else {
        t5 = *(int *)(((((int)stk + 16) + 0x10) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t5;
        t6 = *(int *)(((((int)stk + 16) + 0x10) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t6;
        t7 = *(int *)(((((int)stk + 16) + 0x10) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 16));
        t9 = FUN_8c08e944(((((((t8 << 2) + t8) << 2) << 2) + 0x8C3422A8) + 0x5A0));
        t10 = t9;
    }
    return t10;
}

int FUN_8c0a67f4(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;

    t0 = 0x0;
    do {
        FUN_8c0be222(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    t2 = 0x8C3438D8;
    do {
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    } while ((unsigned int)t2 < (unsigned int)0x8C3438E8);
    t3 = FUN_8c0b0bbc();
    if (t3 != 1) {
        t4 = *(int *)0x8C287D5C;
        if (t4 == 1) {
            FUN_8c0b1e36();
        }
    } else {
        FUN_8c0b1e36();
    }
    FUN_8c0c4de8();
    *(unsigned int *)0x8C343908 = 0x0;
    FUN_8c0165ec();
    t11 = 0x0;
    t12 = 0x0;
    t13 = 0x8C185298;
    do {
        t14 = *(short *)((t13 + 0x0));
        t15 = *(short *)0x8C343262;
        if (((unsigned short)t15 & (unsigned short)t14) != 0) {
            t16 = *(int *)(((0x8C3437C4 + t11) + 0x0));
            t17 = *(short *)((((t16 * 0x38) + 0x8C343264) + 0x14));
            if (t17 != 0) {
                t18 = *(int *)(((0x8C3437C4 + t12) + 0x0));
                FUN_8c0a94fc(t18, 0x1);
                *(unsigned int *)((0x8C343878 + t12)) = 0x2;
            }
        }
        t13 = (t13 + 0x2);
        t12 = (t12 + 0x4);
        t11 = (t11 + 0x4);
    } while ((unsigned int)t13 < (unsigned int)0x8C1852A0);
    FUN_8c0cbf88(0x8500, 0x9200, 0x64, 0x45);
    return FUN_8c084c26(0x2, 0x1, 0xA);
}

int FUN_8c0a7e40(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t10;
    int t9;

    t0 = 0x8C185298;
    t1 = 0x0;
    t2 = 0x8C185298;
    do {
        t3 = *(short *)((t0 + 0x0));
        t4 = *(short *)0x8C343262;
        if (((unsigned short)t4 & (unsigned short)t3) != 0) {
            t2 = 0x56C;
            t2 = (t2 + 0x8C343258);
            t2 = (t2 + t1);
            t5 = *(int *)((t2 + 0x0));
            t2 = t5;
            t2 = (t2 * 0x38);
            t2 = (t2 + 0x8C343264);
            t7 = *(int *)((t2 + 0x4));
            t2 = t7;
        }
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    if (t2 != 0) {
        if (t2 == 2) {
            return 0x1;
        }
        t10 = 0x0;
        if (t2 != 1) {
            t9 = t2;
            if (t2 == 3) {
                t9 = 0x0;
            }
            t10 = t9;
        }
        return t10;
    }
    return 0x1;
}

int FUN_8c0a7eaa(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)0x8C343262;
        t2 = *(short *)((((t0 << 1) + 0x8C185298) + 0x0));
        if (((unsigned short)t1 & (unsigned short)t2) != 0) break;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return (unsigned short)t1;
        }
    }
    return t0;
}

void FUN_8c0a8ada(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C181638;
    if (t0 != 0) {
        t1 = *(short *)0x8C343262;
        if ((unsigned short)t1 == 1) {
            t2 = *(int *)0x8C343724;
            if ((int)t2 < (int)0x5) {
                return;
            }
            return;
        }
        if ((unsigned short)t1 == 16) {
            t3 = *(int *)0x8C343728;
            if ((int)t3 >= (int)0x5) {
                return;
            }
            return;
        }
        return;
    }
}

void FUN_8c0a8b3c(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;

    t0 = *(int *)0x8C20D14C;
    t1 = *(int *)0x8C343848;
    if (t0 != t1) {
        *(unsigned int *)0x8C343844 = t1;
        t2 = *(int *)0x8C20D14C;
        *(unsigned int *)0x8C343848 = t2;
    }
    t4 = *(int *)0x8C343850;
    t5 = *(int *)0x8C20D150;
    if (t5 != t4) {
        *(unsigned int *)0x8C34384C = t4;
        t6 = *(int *)0x8C20D150;
        *(unsigned int *)0x8C343850 = t6;
    }
    t8 = *(int *)0x8C287D5C;
    t9 = *(int *)0x8C343858;
    if (t8 != t9) {
        *(unsigned int *)0x8C343854 = t9;
        t10 = *(int *)0x8C20D14C;
        *(unsigned int *)0x8C343858 = t10;
    }
}

int FUN_8c0a99f8(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C343ADC + t0)) = 0x0;
        *(unsigned int *)((0x8C185438 + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C185448 + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C343B0C + t0)) = 0xFFFFFFFF;
        *(unsigned int *)((0x8C185428 + t0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x10);
    return t0;
}

void FUN_8c0a9a9e(int a4)
{
    int t5;
    int t6;
    int t2;
    int t3;
    int t0;

    if ((int)a4 >= 0) {
        t5 = 0x0;
        t6 = 0x8;
        if (a4 != 16) {
            t2 = 0x1;
            t3 = 0x8;
            if (a4 != 17) {
                t0 = (int)((int)a4 / (int)0x8);
                t2 = t0;
                t3 = (a4 - ((t0 << 2) << 1));
            }
            t5 = t2;
            t6 = t3;
        }
        *(unsigned int *)((((t6 << 2) + (0x8C1853C0 + ((((t5 << 2) << 1) + t5) << 2))) + 0x0)) = 0x2;
    }
}

void FUN_8c0a9aec(int a4)
{
    int t3;
    int t4;
    int t1;
    int t2;
    int t0;

    if ((int)a4 >= 0) {
        t3 = 0x0;
        t4 = 0x8;
        if (a4 != 16) {
            t1 = 0x1;
            t2 = 0x8;
            if (a4 != 17) {
                t0 = a4;
                if ((int)a4 < 0) {
                    t0 = (a4 + 0x7);
                }
                t1 = (((t0 >> 1) >> 1) >> 1);
                t2 = (a4 - (((((t0 >> 1) >> 1) >> 1) << 2) << 1));
            }
            t3 = t1;
            t4 = t2;
        }
        *(unsigned int *)((((t4 << 2) + (0x8C1853C0 + ((((t3 << 2) << 1) + t3) << 2))) + 0x0)) = 0x0;
    }
}

int FUN_8c0a9b38(void)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x0;
    do {
        t1 = 0x8C1853C0;
        do {
            *(unsigned int *)((t1 + (t0 << 2))) = 0x0;
            t1 = (t1 + 0x24);
        } while ((unsigned int)t1 < (unsigned int)0x8C185408);
        t3 = (t0 << 2);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x9);
    return t3;
}

int FUN_8c0a9b66(void)
{
    int t0;
    int t4;
    int t5;
    int t2;
    int t3;
    int t1;

    t0 = *(int *)0x8C343248;
    t4 = 0x0;
    t5 = 0x7;
    if (t0 != 16) {
        t2 = 0x1;
        t3 = 0x7;
        if (t0 != 17) {
            t1 = t0;
            if ((int)t0 < 0) {
                t1 = (t0 + 0x7);
            }
            t2 = (((t1 >> 1) >> 1) >> 1);
            t3 = (t0 - (((((t1 >> 1) >> 1) >> 1) << 2) << 1));
        }
        t4 = t2;
        t5 = t3;
    }
    *(unsigned int *)((((t5 << 2) + (0x8C1853C0 + ((((t4 << 2) << 1) + t4) << 2))) + 0x0)) = 0x0;
    return ((((t4 << 2) << 1) + t4) << 2);
}

int FUN_8c0ab04c(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287D5C;
    t10 = t0;
    if (t0 != 1) {
        t1 = 0x0;
        t2 = 0x8C185298;
        do {
            t3 = *(short *)((t2 + 0x0));
            t4 = *(short *)0x8C343262;
            t8 = (unsigned short)t4;
            if (((unsigned short)t4 & (unsigned short)t3) != 0) {
                t5 = *(int *)(((0x8C343724 + t1) + 0x0));
                *(unsigned int *)(((0x8C343724 + t1) + 0x0)) = (t5 + 0x1);
                t6 = *(int *)((t1 + 0x8C3437C4));
                t7 = *(int *)(((0x8C343724 + t1) + 0x0));
                *(unsigned int *)(((t7 << 2) + ((((t6 << 2) << 2) << 1) + 0x8C343424))) = a4;
                t8 = ((((t6 << 2) << 2) << 1) + 0x8C343424);
            }
            t2 = (t2 + 0x2);
            t1 = (t1 + 0x4);
        } while ((unsigned int)t2 < (unsigned int)0x8C1852A0);
        t10 = t8;
    }
    return t10;
}

int FUN_8c0ab0a4(int a4)
{
    int t0;
    int t9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t6;

    t0 = *(int *)0x8C287ADC;
    t9 = t0;
    if (t0 == 2) {
        t1 = 0x8C185298;
        t2 = 0x0;
        t3 = 0x0;
        do {
            t4 = *(short *)((t1 + 0x0));
            t5 = *(short *)0x8C343262;
            t7 = (unsigned short)t5;
            if (((unsigned short)t5 & (unsigned short)t4) != 0) {
                t6 = *(int *)(((0x8C343724 + t2) + 0x0));
                *(unsigned int *)(((t6 << 2) + (0x8C343424 + t3))) = a4;
                t7 = (0x8C343424 + t3);
            }
            t1 = (t1 + 0x2);
            t2 = (t2 + 0x4);
            t3 = (t3 + 0x20);
        } while ((unsigned int)t1 < (unsigned int)0x8C1852A0);
        t9 = t7;
    }
    return t9;
}

int FUN_8c0ab104(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t27;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t17;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x8C287D84;
    t4 = 0x0;
    do {
        t5 = *(short *)0x8C343262;
        t6 = *(short *)((((t1 << 1) + 0x8C185298) + 0x0));
        t27 = (unsigned short)t5;
        if (((unsigned short)t5 & (unsigned short)t6) != 0) {
            t3 = 0x8C343258;
            t3 = (t3 + 0xC);
            t7 = *(int *)((t3 + 0x8));
            if (t7 == 1) {
                t8 = *(int *)((t3 + 0x78));
                if (t8 == 1) {
                    t3 = t1;
                    t3 = (t3 << 2);
                    t9 = *(int *)(((0x8C343724 + t2) + 0x0));
                    t3 = (t3 << 2);
                    t3 = (t3 << 1);
                    t10 = *(int *)0x8C2889DC;
                    *(unsigned int *)(((t9 << 2) + (0x8C343524 + t3))) = t10;
                    t11 = *(int *)(((0x8C343724 + t2) + 0x0));
                    t12 = *(int *)0x8C28A4CC;
                    *(unsigned int *)(((t11 << 2) + (0x8C343624 + t3))) = t12;
                    t17 = (0x8C343624 + t3);
                } else {
                    t13 = *(int *)(((0x8C343724 + t4) + 0x0));
                    t14 = *(int *)0x8C289754;
                    *(unsigned int *)(((t13 << 2) + (0x8C343524 + t0))) = t14;
                    t15 = *(int *)(((0x8C343724 + t4) + 0x0));
                    t16 = *(int *)0x8C28B244;
                    *(unsigned int *)(((t15 << 2) + (0x8C343624 + t0))) = t16;
                    t17 = (0x8C343624 + t0);
                }
                t24 = t17;
            } else {
                t20 = *(int *)(((0x8C343724 + t4) + 0x0));
                t21 = *(int *)0x8C289754;
                *(unsigned int *)(((t20 << 2) + (0x8C343524 + t0))) = t21;
                t22 = *(int *)(((0x8C343724 + t4) + 0x0));
                t23 = *(int *)0x8C28B244;
                *(unsigned int *)(((t22 << 2) + (0x8C343624 + t0))) = t23;
                t24 = (0x8C343624 + t0);
            }
            t27 = t24;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x20);
        t4 = (t4 + 0x4);
        t2 = (t2 + 0x4);
    } while ((int)t1 < (int)0x4);
    return t27;
}

int FUN_8c0ab1ea(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if ((unsigned int)0x8C185298 < (unsigned int)0x8C1852A0) {
        t0 = 0x8C185298;
        t1 = 0x8C185298;
        for (;;) {
            t2 = *(short *)((t0 + 0x0));
            t3 = *(short *)0x8C343262;
            if (((unsigned short)t3 & (unsigned short)t2) != 0) break;
            t0 = (t0 + 0x2);
            t1 = (t1 + 0x2);
            if ((unsigned int)t0 >= (unsigned int)0x8C1852A0) {
                return 0x0;
            }
        }
        t4 = *(short *)((t1 + 0x0));
        return (unsigned short)t4;
    }
    return 0x0;
}

void FUN_8c0ab266(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)0x8C343262;
        t2 = *(short *)((((t0 << 1) + 0x8C185298) + 0x0));
        if (((unsigned short)t1 & (unsigned short)t2) != 0) {
            t3 = FUN_8c0ab234(t0);
            if (t3 != 0) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return;
            }
            continue;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return;
        }
    }
}

int FUN_8c0ab2aa(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if ((unsigned int)0x8C181628 < (unsigned int)0x8C181638) {
        t0 = 0x8C181628;
        t1 = 0x8C181628;
        for (;;) {
            t2 = *(int *)((t0 + 0x0));
            if (t2 != 0) break;
            t0 = (t0 + 0x4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8C181638) {
                return 0x0;
            }
        }
        t3 = *(int *)((t1 + 0x0));
        return t3;
    }
    return 0x0;
}

void FUN_8c0ab35c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = FUN_8c0b0152();
    if (t0 == 0) {
        if ((unsigned int)0x8C185298 < (unsigned int)0x8C1852A0) {
            t1 = 0x8C185298;
            t2 = 0x0;
            for (;;) {
                t3 = *(short *)((t1 + 0x0));
                t4 = *(short *)0x8C343262;
                if (((unsigned short)t4 & (unsigned short)t3) != 0) {
                    t5 = *(int *)((t2 + 0x8C343724));
                    if (t5 == 5) break;
                    t1 = (t1 + 0x2);
                    t2 = (t2 + 0x4);
                    if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
                        return;
                    }
                    continue;
                }
                t1 = (t1 + 0x2);
                t2 = (t2 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x8C1852A0) {
                    return;
                }
            }
            return;
        }
        return;
    }
}

int FUN_8c0ac676(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = 0x8C185298;
    t1 = 0x8C343AEC;
    t2 = 0x0;
    do {
        t3 = *(short *)((t0 + 0x0));
        t4 = *(short *)0x8C343262;
        if (((unsigned short)t4 & (unsigned short)t3) != 0) {
            t5 = *(int *)((t1 + 0x0));
            if (t5 == a4) {
                t2 = (t2 + 0x1);
            }
        }
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    return t2;
}

void FUN_8c0b003c(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = a5;
    for (;;) {
        t2 = *(int *)0x8C287ADC;
        if ((int)t0 >= (int)t2) break;
        t1 = (t0 * 0x38);
        t1 = (t1 + 0x8C343264);
        t3 = *(int *)((t1 + 0x0));
        t0 = (t0 + 0x1);
        if (t3 == -1) {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
        }
    }
}

int FUN_8c0b00b6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    t0 = *(int *)0x8C110F8C;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t0;
    t1 = *(int *)0x8C110F88;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
    t2 = *(int *)0x8C110F84;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
    t3 = *(int *)0x8C110F80;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
    t4 = *(int *)((((int)stk + 4) + (a4 << 2)));
    return t4;
}

int FUN_8c0b0a74(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t8;
    int t11;
    int t12;
    int t14;

    t0 = 0x0;
    do {
        *(unsigned int *)(((0x8C343724 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343744 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343764 + (t0 << 2)) + 0x0)) = 0x0;
        *(unsigned int *)((((t0 << 2) + 0x8C343784) + 0x0)) = 0x0;
        t1 = 0x0;
        do {
            *(unsigned int *)((t1 + (0x8C343424 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + (0x8C343524 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + (0x8C343624 + (((t0 << 2) << 2) << 1)))) = 0xFFFFFFFF;
            t1 = (t1 + 0x4);
        } while ((unsigned int)t1 < (unsigned int)0x18);
        t4 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((0x8C181628 + (t4 << 2))) = 0x0;
    } while ((int)t0 < (int)0x4);
    t5 = 0x0;
    t6 = 0x0;
    do {
        *(unsigned int *)(((0x8C343264 + t5) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0xC)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x10)) = 0x0;
        *(unsigned short *)(((0x8C343264 + t5) + 0x14)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x18)) = 0x0;
        *(unsigned int *)(((0x8C343264 + t5) + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x8)) = 0x1;
        *(unsigned int *)(((0x8C343264 + t5) + 0x2C)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x30)) = 0xFFFFFFFF;
        *(unsigned int *)(((0x8C343264 + t5) + 0x34)) = 0xFFFFFFFF;
        t8 = (0x8C343264 + t5);
        t5 = (t5 + 0x38);
        *(unsigned int *)((t8 + 0x28)) = 0x0;
        *(unsigned int *)(((0x8C3437C4 + t6) + 0x0)) = 0x0;
        *(unsigned int *)(((0x8C343824 + t6) + 0x0)) = 0x1;
        t6 = (t6 + 0x4);
    } while ((unsigned int)t5 < (unsigned int)0xE0);
    t11 = 0x0;
    do {
        t12 = 0x8C1853C0;
        do {
            *(unsigned int *)((t12 + (t11 << 2))) = 0x0;
            t12 = (t12 + 0x24);
        } while ((unsigned int)t12 < (unsigned int)0x8C185408);
        t14 = (t11 << 2);
        t11 = (t11 + 0x1);
    } while ((int)t11 < (int)0x8);
    return t14;
}

int FUN_8c0b0bbc(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C185298;
    t1 = 0x0;
    do {
        t2 = *(short *)((t0 + 0x0));
        t3 = *(short *)0x8C343262;
        t0 = (t0 + 0x2);
        if (((unsigned short)t3 & (unsigned short)t2) != 0) {
            t1 = (t1 + 0x1);
        }
    } while ((unsigned int)t0 < (unsigned int)0x8C1852A0);
    return t1;
}

int FUN_8c0b12b0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t13;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int stk[14];

    t0 = 0x0;
    t1 = 0x8;
    do {
        t2 = *(int *)((((0x8C185330 + t0) + 0x24) + 0x0));
        *(unsigned int *)((((int)stk + 4) + t0)) = t2;
        t3 = *(int *)((((0x8C185330 + t0) + 0x24) + 0x0));
        t0 = (t0 + 0x4);
        if (t3 != 0) {
            t1 = (t1 + 0x1);
        }
    } while ((unsigned int)t0 < (unsigned int)0x20);
    t6 = nlRand();
    t7 = (int)((int)t6 % (int)t1);
    t13 = t7;
    if ((int)t7 >= (int)0x8) {
        t8 = t7;
        t9 = 0x8C0F7BAC;
        t10 = (t7 - 7);
        t11 = 0x0;
        while (t10 != 0) {
            t11 = 0x0;
            for (;;) {
                t8 = t11;
                t8 = (t8 << 2);
                t12 = *(int *)((((int)stk + 4) + t8));
                t9 = t12;
                if (t9 != 0) break;
                t11 = (t11 + 0x1);
            }
            t8 = t11;
            t8 = (t8 << 2);
            t10 = (t10 - 1);
            *(unsigned int *)((((int)stk + 4) + t8)) = 0x0;
        }
        t13 = (t11 + 0x8);
    }
    return t13;
}

void FUN_8c0b1f14(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188E84;
    if (t0 == 0) {
        FUN_8c0ea2a0(0x1800);
        t2 = 0x0;
        t3 = 0x8C188C84;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C132D0C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x19);
        *(unsigned int *)0x8C188E84 = 0x1;
    }
}

int FUN_8c0b1f5a(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188E84;
    t6 = t0;
    if (t0 == 1) {
        FUN_8c0ea2a0(0x1800);
        t2 = 0x0;
        t3 = 0x8C188C84;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f2160();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x19);
        *(unsigned int *)0x8C188E84 = 0x0;
        t6 = t5;
    }
    return t6;
}

int FUN_8c0b22fe(void)
{
    int t1;
    int t2;
    int t3;
    int t4;

    FUN_8c0ea2a0(0x320);
    t1 = 0x0;
    t2 = 0x8C185648;
    do {
        t3 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t4 = FUN_8c0f1ff0();
        t1 = (t1 + 0x1);
    } while ((unsigned int)t1 < (unsigned int)0x280);
    return t4;
}

void FUN_8c0b2ab6(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188EB0;
    if (t0 == 0) {
        FUN_8c0ea2a0(0x1B00);
        t2 = 0x0;
        t3 = 0x8C188D14;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C132F8C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x1B);
        *(unsigned int *)0x8C188EB0 = 0x1;
    }
}

int FUN_8c0b2b54(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188EB0;
    t6 = t0;
    if (t0 == 1) {
        FUN_8c0ea2a0(0x1B00);
        t2 = 0x0;
        t3 = 0x8C188D14;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f2160();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x1B);
        *(unsigned int *)0x8C188EB0 = 0x0;
        t6 = t5;
    }
    return t6;
}

int FUN_8c0b2cee(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188EB4;
    t6 = t0;
    if (t0 == 1) {
        FUN_8c0ea2a0(0x1C00);
        t2 = 0x0;
        t3 = 0x8C188D80;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f2160();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x40);
        *(unsigned int *)0x8C188EB4 = 0x0;
        t6 = t5;
    }
    return t6;
}

int FUN_8c0b2e20(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t16;
    int t17;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t33;
    int t34;
    int t37;
    int t38;
    int t42;
    int t44;
    int t57;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = *(int *)0x8C343FF4;
        *(unsigned int *)0x8C343FF4 = (t2 + 0x1);
        FUN_8c0d2ba6(0x0);
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            t5 = FUN_8c0d2ba6(0x1);
            if (t5 == 99) {
                t6 = *(int *)0x8C343FF4;
                *(unsigned int *)0x8C343FF4 = (t6 + 0x1);
                FUN_8c0d28b4();
            }
        } else {
            if (t4 == 2) {
                t9 = FUN_8c0b5a92();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t10 + 0x1);
                }
            } else {
                if (t4 == 3) {
                    t11 = FUN_8c0b5ab4();
                    if (t11 == 1) {
                        t12 = *(int *)0x8C343FF4;
                        *(unsigned int *)0x8C343FF4 = (t12 + 0x1);
                        stageTexLoad();
                    }
                } else {
                    t15 = *(int *)0x8C344014;
                    if (t4 == 4) {
                        if (t15 != 3) {
                            t16 = FUN_8c0b5ad6();
                            if (t16 == 1) {
                                t17 = *(int *)0x8C343FF4;
                                *(unsigned int *)0x8C343FF4 = (t17 + 0x1);
                                FUN_8c0c64dc();
                            }
                        } else {
                            t20 = *(int *)0x8C343FF4;
                            *(unsigned int *)0x8C343FF4 = (t20 + 0x1);
                            FUN_8c0c64dc();
                        }
                    } else {
                        if (t4 == 5) {
                            t23 = FUN_8c0c6530();
                            if (t23 != 0) {
                                t24 = *(int *)0x8C343FF4;
                                *(unsigned int *)0x8C343FF4 = (t24 + 0x1);
                            }
                        } else {
                            if (t4 == 6) {
                                if (t15 == 3) {
                                    t25 = FUN_8c0b5b26();
                                    if (t25 == 1) {
                                        t26 = *(int *)0x8C343FF4;
                                        *(unsigned int *)0x8C343FF4 = (t26 + 0x1);
                                    }
                                } else {
                                    t27 = *(int *)0x8C343FF4;
                                    *(unsigned int *)0x8C343FF4 = (t27 + 0x2);
                                }
                            } else {
                                if (t4 == 7) {
                                    t29 = FUN_8c0b5b40();
                                    if (t29 == 1) {
                                        t30 = *(int *)0x8C343FF4;
                                        *(unsigned int *)0x8C343FF4 = (t30 + 0x1);
                                        FUN_8c0b2ca8();
                                    }
                                } else {
                                    if (t4 == 8) {
                                        if (t15 == 3) {
                                            t33 = FUN_8c0b5b66();
                                            if (t33 == 1) {
                                                t34 = *(int *)0x8C343FF4;
                                                *(unsigned int *)0x8C343FF4 = (t34 + 0x1);
                                                FUN_8c0c50c4();
                                            }
                                        } else {
                                            t37 = FUN_8c0b5b8c();
                                            if (t37 == 1) {
                                                t38 = *(int *)0x8C343FF4;
                                                *(unsigned int *)0x8C343FF4 = (t38 + 0x1);
                                                FUN_8c0c4f38();
                                            }
                                        }
                                    } else {
                                        if (t4 == 9) {
                                            t42 = *(int *)0x8C343FF4;
                                            *(unsigned int *)0x8C343FF4 = (t42 + 0x1);
                                            *(unsigned int *)0x8C287C50 = 0x1;
                                            *(unsigned int *)0x8C343FE8 = 0x1;
                                            FUN_8c0b1c54();
                                            t44 = *(int *)0x8C1891E8;
                                            FUN_8c0baa88();
                                            *(unsigned int *)0x8C301970 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t57 = *(int *)0x8C343FE8;
    return t57;
}

void FUN_8c0b304a(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C188EC0;
    if (t0 == 0) {
        FUN_8c0ea2a0(0x1D00);
        t2 = 0x0;
        t3 = 0x8C188EB8;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlObjPutLoadTexture(t4, 0x8C1336CC);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x2);
        *(unsigned int *)0x8C188EC0 = 0x1;
    }
}

int FUN_8c0b3090(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C188EC0;
    t6 = 0x8C188EC0;
    if (t0 != 0) {
        FUN_8c0ea2a0(0x1D00);
        t2 = 0x0;
        t3 = 0x8C188EB8;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f2160();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x2);
        *(unsigned int *)0x8C188EC0 = 0x0;
        t6 = t5;
    }
    return t6;
}

int FUN_8c0b3128(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t9;
    int t10;
    int t14;
    int t15;
    int t16;
    int t17;
    int t22;

    t0 = *(int *)0x8C343FEC;
    if (t0 == 0) {
        t1 = FUN_8c0b5ab4();
        if (t1 == 1) {
            t2 = *(int *)0x8C343FEC;
            *(unsigned int *)0x8C343FEC = (t2 + 0x1);
            stageTexLoad();
        }
    } else {
        if (t0 == 1) {
            t5 = FUN_8c0b5ad6();
            if (t5 == 1) {
                t6 = *(int *)0x8C343FEC;
                *(unsigned int *)0x8C343FEC = (t6 + 0x1);
                FUN_8c0b1c54();
            }
        } else {
            if (t0 == 2) {
                t9 = FUN_8c0b5b8c();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FEC;
                    *(unsigned int *)0x8C343FEC = (t10 + 0x1);
                    FUN_8c0c4f38();
                    FUN_8c0c64dc();
                }
            } else {
                if (t0 == 3) {
                    t14 = FUN_8c0c6530();
                    if (t14 != 0) {
                        t15 = *(int *)0x8C343FEC;
                        *(unsigned int *)0x8C343FEC = (t15 + 0x1);
                    }
                } else {
                    if (t0 != 4) {
                        if (t0 == 5) {
                            t16 = *(int *)0x8C343FEC;
                            *(unsigned int *)0x8C343FEC = (t16 + 0x1);
                        } else if (t0 == 6) {
                            *(unsigned int *)0x8C343FE8 = 0x1;
                        }
                    } else {
                        t17 = *(int *)0x8C343FEC;
                        *(unsigned int *)0x8C343FEC = (t17 + 0x1);
                    }
                }
            }
        }
    }
    t22 = *(int *)0x8C343FE8;
    return t22;
}

int FUN_8c0b3244(void)
{
    int t0;
    int t1;
    int t5;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;
    int t14;
    int t12;
    int t13;
    int t18;
    int t17;
    int t16;

    t0 = *(int *)0x8C343FEC;
    if (t0 == 0) {
        t1 = FUN_8c0b5ab4();
        t5 = t1;
        if (t1 == 1) {
            stageTexLoad();
            t3 = FUN_8c0c64dc();
            t4 = *(int *)0x8C343FEC;
            *(unsigned int *)0x8C343FEC = (t4 + 0x1);
            t5 = t3;
        }
        t18 = t5;
    } else {
        if (t0 == 1) {
            t6 = FUN_8c0c6530();
            if (t6 != 0) {
                t7 = *(int *)0x8C343FEC;
                *(unsigned int *)0x8C343FEC = (t7 + 0x1);
            }
            t17 = t6;
        } else {
            if (t0 == 2) {
                t8 = FUN_8c0b5b8c();
                t11 = t8;
                if (t8 == 1) {
                    t9 = *(int *)0x8C343FEC;
                    *(unsigned int *)0x8C343FEC = (t9 + 0x1);
                    t10 = FUN_8c0c4f38();
                    t11 = t10;
                }
                t16 = t11;
            } else {
                t14 = t0;
                if (t0 == 3) {
                    t12 = *(int *)0x8C1891E8;
                    t13 = FUN_8c0baa88();
                    *(unsigned int *)0x8C287C50 = 0x1;
                    *(unsigned int *)0x8C343FE8 = 0x1;
                    t14 = t13;
                }
                t16 = t14;
            }
            t17 = t16;
        }
        t18 = t17;
    }
    return t18;
}

int FUN_8c0b3364(void)
{
    FUN_8c0c4ef2();
    FUN_8c0b1968();
    FUN_8c0c5ddc();
    FUN_8c0c4f72();
    FUN_8c0c4de8();
    FUN_8c0b3090();
    FUN_8c0c52e2();
    FUN_8c0c4e70();
    FUN_8c0c5b00();
    FUN_8c0c5516();
    FUN_8c0c4fe6();
    FUN_8c0b1f5a();
    FUN_8c0c50fa();
    FUN_8c0b2b54();
    FUN_8c0b2cee();
    FUN_8c0c508e();
    FUN_8c0c5750();
    FUN_8c0c57e8();
    FUN_8c0c591a();
    FUN_8c0c58b4();
    FUN_8c0c6cb0();
    FUN_8c0e62e0();
    FUN_8c0e90bc();
    FUN_8c0d129c(0x2, 0x0, 0.0f);
    FUN_8c0e8aba();
    FUN_8c0e8b74();
    FUN_8c0e8bf4();
    FUN_8c0e8d46();
    FUN_8c0e8d9a();
    FUN_8c0d677a();
    FUN_8c0d684c();
    FUN_8c0d6890();
    return FUN_8c0e412a();
}

void FUN_8c0b38d0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287C60;
    if (t0 == 0) {
        t1 = 0x8C344A08;
        do {
            t2 = *(int *)((t1 + 0x1E8));
            *(unsigned int *)((t1 + 0x1E8)) = (t2 + 0x1);
            t3 = *(int *)(((0x1EC + t1) + 0x0));
            t4 = *(int *)((((((t3 << 1) + t3) << 2) + 0x8C11F830) + 0x4));
            t5 = *(int *)(((0x1E8 + t1) + 0x0));
            t6 = (int)((int)t5 % (int)t4);
            *(unsigned int *)(((0x1E8 + t1) + 0x0)) = t6;
            t7 = *(int *)((t1 + 0x1E8));
            FUN_8c015b7e(t1, (float)t7);
            t1 = (t1 + 0x1F4);
        } while ((unsigned int)t1 < (unsigned int)0x8C3484A0);
    }
}

void FUN_8c0b393e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0x8C287C60;
    if (t0 == 0) {
        t1 = 0x8C344A08;
        do {
            t2 = *(int *)((t1 + 0x1E8));
            *(unsigned int *)((t1 + 0x1E8)) = (t2 + 0x1);
            t3 = *(int *)(((0x1EC + t1) + 0x0));
            t4 = *(int *)(((((t3 << 2) << 2) + 0x8C188EC4) + 0x4));
            t5 = *(int *)(((0x1E8 + t1) + 0x0));
            t6 = (int)((int)t5 % (int)t4);
            *(unsigned int *)(((0x1E8 + t1) + 0x0)) = t6;
            t7 = *(int *)((t1 + 0x1E8));
            FUN_8c015b7e(t1, (float)t7);
            t1 = (t1 + 0x1F4);
        } while ((unsigned int)t1 < (unsigned int)0x8C34A1EC);
    }
}

int FUN_8c0b5662(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t12;
    int t14;
    int t21;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_Open(a5, 0x0);
        t2 = *(int *)0x8C34B134;
        *(unsigned int *)0x8C34B134 = (t2 + 0x1);
        if (t1 == 0) {
            if ((int)t0 < (int)0xA) {
                t0 = (t0 + 0x1);
                continue;
            }
            break;
        }
        if (a6 == 0) {
            t3 = ADXF_GetFsizeSct(t1);
            t0 = t3;
            ADXF_ReadNw32(t1, t0, a4);
            for (;;) {
                t5 = ADXF_GetStat(t1);
                if (t5 == 3) break;
                nlLocate(0x14, 0x14);
                FUN_8c0d0c68();
                FUN_8c0d1744();
                FUN_8c01b250();
                FUN_8c0eaba0();
            }
            ADXF_Close(t1);
            t12 = *(int *)0x8C34B138;
            *(unsigned int *)0x8C34B138 = (t12 + 0x1);
            return t0;
        }
        t0 = a6;
        t0 = ((unsigned int)t0 >> 8);
        t0 = ((unsigned int)t0 >> 2);
        t0 = ((unsigned int)t0 >> 1);
        ADXF_ReadNw32(t1, t0, a4);
        for (;;) {
            t14 = ADXF_GetStat(t1);
            if (t14 == 3) break;
            nlLocate(0x14, 0x14);
            FUN_8c0d0c68();
            FUN_8c0d1744();
            FUN_8c01b250();
            FUN_8c0eaba0();
        }
        ADXF_Close(t1);
        t21 = *(int *)0x8C34B138;
        *(unsigned int *)0x8C34B138 = (t21 + 0x1);
        return t0;
    }
    *(unsigned int *)0x8C34A1EC = 0x0;
    *(unsigned int *)0x8C34A1F4 = 0x0;
    *(unsigned int *)0x8C34A1F0 = 0x1;
    return 0x0;
}

int fileLoadStartOfs(int a4, int a5, int a6, int a7)
{
    return fileLoadStart((a4 + a7));
}

void fileLoadClose(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C34A1F8;
    if (t0 != 0) {
        t1 = 0x0;
        do {
            t2 = (0x8C34A204 + t1);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = 0x0;
        } while ((int)t1 < (int)0x32);
        t3 = *(int *)0x8C34A1F8;
        ADXF_Close(t3);
        *(unsigned int *)0x8C34A1EC = 0x0;
        *(unsigned int *)0x8C34A1F4 = 0x0;
        *(unsigned int *)0x8C34A1F0 = 0x1;
        *(unsigned int *)0x8C34A1F8 = 0x0;
    }
}

int FUN_8c0b6c4a(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18A7D8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18A800));
    return nlObjPut(t4);
}

int FUN_8c0b749a(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18B170));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18B198));
    return nlObjPut(t4);
}

int FUN_8c0b834e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18BB74));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18BB9C));
    return nlObjPut(t4);
}

int FUN_8c0b8b74(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18C2E8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18C310));
    return nlObjPut(t4);
}

int FUN_8c0b8f76(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        nlObjPut(0xC9377A8);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            t3 = *(int *)0x8C18C33C;
            nlObjPut(t3);
            t5 = *(int *)0x8C18C344;
            t10 = t5;
        } else {
            t6 = *(int *)0x8C18C338;
            nlObjPut(t6);
            t8 = *(int *)0x8C18C340;
            t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
    } else {
        nlObjPut(0xC9541F0);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t14 = *(int *)0x8C18C34C;
            t16 = t14;
        } else {
            t15 = *(int *)0x8C18C348;
            t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
    }
    return t18;
}

int FUN_8c0b9370(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C18D234));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C18D25C));
    return nlObjPut(t4);
}

int FUN_8c0baa88(void)
{
    int t0;
    int t3;
    int t7;

    *(unsigned int *)0x8C18D2B8 = 0x0;
    t0 = *(int *)0x8C1891E8;
    if (t0 == 2) {
        FUN_8c0cb8de();
    }
    t3 = *(int *)0x8C1891E8;
    if (t3 == 4) {
        FUN_8c088a16();
    }
    FUN_8c0855b6();
    t7 = *(int *)0x8C1891E8;
    FUN_8c08cdec();
    FUN_8c0b34a4();
    FUN_8c0b6230();
    return FUN_8c087d02();
}

void FUN_8c0baacc(void)
{
    int t0;

    t0 = *(int *)0x8C1891F0;
    if (t0 != 2) {
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
}

void FUN_8c0bab88(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int stk[9];

    u0 = *(float *)(((((int)stk + 4) + 0x24) + 0x0));
    *(float *)((((int)stk + 4) + 0x0)) = u0;
    u1 = *(float *)(((((int)stk + 4) + 0x24) + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = u1;
    u2 = *(float *)(((((int)stk + 4) + 0x24) + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = u2;
    *(float *)((((int)stk + 4) + 0xC)) = f4;
    *(float *)((((int)stk + 4) + 0x10)) = f5;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = a4;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = a5;
    t3 = *(int *)((((int)stk + 4) + 0x18));
    *(unsigned int *)((a8 + 0x18)) = t3;
    t4 = *(int *)((((int)stk + 4) + 0x14));
    *(unsigned int *)((a8 + 0x14)) = t4;
    t5 = *(int *)((((int)stk + 4) + 0x10));
    *(unsigned int *)((a8 + 0x10)) = t5;
    t6 = *(int *)((((int)stk + 4) + 0xC));
    *(unsigned int *)((a8 + 0xC)) = t6;
    t7 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t7;
    t8 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t8;
    t9 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t9;
}

void FUN_8c0babc0(int a4, int a5, int a6, int a7, int a8)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int stk[6];

    u0 = *(float *)(((((int)stk + 4) + 0x18) + 0x0));
    *(float *)((((int)stk + 4) + 0x0)) = u0;
    u1 = *(float *)(((((int)stk + 4) + 0x18) + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = u1;
    u2 = *(float *)(((((int)stk + 4) + 0x18) + 0x8));
    *(float *)((((int)stk + 4) + 0x8)) = u2;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = a4;
    t3 = *(int *)((((int)stk + 4) + 0xC));
    *(unsigned int *)((a8 + 0xC)) = t3;
    t4 = *(int *)((((int)stk + 4) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)((((int)stk + 4) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void FUN_8c0bcf76(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)((a4 + 0x264));
    *(unsigned int *)((((((t0 << 1) + t0) << 2) + a4) + 0x0)) = a5;
    t1 = *(int *)((a4 + 0x264));
    *(float *)((((((t1 << 1) + t1) << 2) + a4) + 0x8)) = 0.0f;
    t2 = *(int *)((a4 + 0x264));
    *(unsigned int *)((((((t2 << 1) + t2) << 2) + a4) + 0x4)) = 0x0;
    t3 = *(int *)((a4 + 0x264));
    *(unsigned int *)((a4 + 0x264)) = (t3 + 0x1);
    FUN_8c0bced0(a4);
    t5 = *(int *)((a4 + 0x268));
    *(unsigned int *)((a4 + 0x268)) = (t5 + 0x1);
}

int FUN_8c0c2696(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AC9D8));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1ACA00));
    return nlObjPut(t4);
}

int FUN_8c0c2cd0(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        nlObjPut(0xC8D0380);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            t3 = *(int *)0x8C1AD26C;
            nlObjPut(t3);
            t5 = *(int *)0x8C1AD274;
            t10 = t5;
        } else {
            t6 = *(int *)0x8C1AD268;
            nlObjPut(t6);
            t8 = *(int *)0x8C1AD270;
            t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
    } else {
        nlObjPut(0xC8F4E68);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t14 = *(int *)0x8C1AD27C;
            t16 = t14;
        } else {
            t15 = *(int *)0x8C1AD278;
            t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
    }
    return t18;
}

int FUN_8c0c2d3e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AD350));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AD378));
    return nlObjPut(t4);
}

int FUN_8c0c338e(int a4)
{
    int t0;
    int t3;
    int t5;
    int t6;
    int t8;
    int t11;
    int t14;
    int t15;
    int t17;
    int t18;
    int t10;
    int t16;

    t0 = *(int *)0x8C287ADC;
    if (t0 == 2) {
        nlObjPut(0xC8E12E0);
        nlObjPut(0xC5189E0);
        if (a4 != 0) {
            t3 = *(int *)0x8C1ADC74;
            nlObjPut(t3);
            t5 = *(int *)0x8C1ADC7C;
            t10 = t5;
        } else {
            t6 = *(int *)0x8C1ADC70;
            nlObjPut(t6);
            t8 = *(int *)0x8C1ADC78;
            t10 = t8;
        }
        t11 = nlObjPut(t10);
        t18 = t11;
    } else {
        nlObjPut(0xC9034C0);
        nlObjPut(0xC51E510);
        if (a4 != 0) {
            t14 = *(int *)0x8C1ADC84;
            t16 = t14;
        } else {
            t15 = *(int *)0x8C1ADC80;
            t16 = t15;
        }
        t17 = nlObjPut(t16);
        t18 = t17;
    }
    return t18;
}

int FUN_8c0c33fc(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1ADD58));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1ADD80));
    return nlObjPut(t4);
}

int FUN_8c0c3a7a(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AE340));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AE368));
    return nlObjPut(t4);
}

int FUN_8c0c40ca(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = (int)((int)a4 % (int)0xA);
    t1 = (int)((int)a4 / (int)0xA);
    t2 = *(int *)(((t0 << 2) + 0x8C1AEC58));
    nlObjPut(t2);
    t4 = *(int *)(((t1 << 2) + 0x8C1AEC80));
    return nlObjPut(t4);
}

int FUN_8c0c4d3a(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AECF4;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12461C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t5 = *(int *)0x8C1AECF8;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AECF8 = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t6 = *(int *)0x8C1AECF4;
        *(unsigned int *)0x8C1AECF4 = (t6 + 0x1);
    }
    return FUN_8c0c4d08();
}

int FUN_8c0c4e2e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AECFC;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12486C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x6);
        *(unsigned int *)0x8C1AECFC = 0x1;
        return FUN_8c0c4cf4();
    }
    return 0;
}

int FUN_8c0c4eac(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AED00;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12465C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t5 = *(int *)0x8C1AED04;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AED04 = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x38);
        t6 = *(int *)0x8C1AED00;
        *(unsigned int *)0x8C1AED00 = (t6 + 0x1);
    }
    return FUN_8c0c4bbe();
}

int FUN_8c0c4f38(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;

    t0 = *(int *)0x8C1AED08;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12473C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
        t5 = *(int *)0x8C1AED08;
        *(unsigned int *)0x8C1AED08 = (t5 + 0x1);
    }
    return FUN_8c0c4b18();
}

int FUN_8c0c5058(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED10;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
        *(unsigned int *)0x8C1AED10 = 0x1;
    }
    return thunk_FUN_8c09e55a();
}

int FUN_8c0c508e(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1AED10;
    t5 = 0x8C1AED10;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = FUN_8c08e694(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
        *(unsigned int *)0x8C1AED10 = 0x0;
        t5 = t4;
    }
    return t5;
}

int FUN_8c0c50c4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED14;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C1AED14 = 0x1;
    }
    return FUN_8c0c4cf0();
}

int FUN_8c0c50fa(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1AED14;
    t5 = 0x8C1AED14;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = FUN_8c08e694(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C1AED14 = 0x0;
        t5 = t4;
    }
    return t5;
}

int FUN_8c0c5130(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(int *)0x8C1AED18;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C12477C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t5 = *(int *)0x8C1AED1C;
            t1 = (t1 + 0x1);
            *(unsigned int *)0x8C1AED1C = (t5 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
        t6 = *(int *)0x8C1AED18;
        *(unsigned int *)0x8C1AED18 = (t6 + 0x1);
    }
    return FUN_8c0c4b62();
}

int FUN_8c0c52e2(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0c52ba(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xA);
    return t1;
}

int FUN_8c0c533c(int a4)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int stk[21];

    *(unsigned int *)(((int)stk + 20)) = a4;
    t0 = *(int *)0x8C124930;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x1C)) = t0;
    t1 = *(int *)0x8C12492C;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x18)) = t1;
    t2 = *(int *)0x8C124928;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x14)) = t2;
    t3 = *(int *)0x8C124924;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x10)) = t3;
    t4 = *(int *)0x8C124920;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0xC)) = t4;
    t5 = *(int *)0x8C12491C;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x8)) = t5;
    t6 = *(int *)0x8C124918;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x4)) = t6;
    t7 = *(int *)0x8C124914;
    *(unsigned int *)(((((int)stk + 20) + 0x10) + 0x0)) = t7;
    t8 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 24)) = ((t8 << 2) + 0x8C1248CC);
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)((((t8 << 2) + 0x8C1248CC) + 0x0));
    *(unsigned int *)(((int)stk + 28)) = ((((t9 << 2) + t9) << 2) << 2);
    *(unsigned int *)(((int)stk + 32)) = (((((t9 << 2) + t9) << 2) << 2) + 0x8C37C2BC);
    FUN_8c08e718((((((t9 << 2) + t9) << 2) << 2) + 0x8C37C2BC), t10, (((int)stk + 20) + 0x10), 0x80, 0x80, 0x0);
    t12 = *(int *)(((int)stk + 24));
    t13 = *(int *)(((int)stk + 28));
    t14 = *(int *)((t12 + 0x0));
    t15 = FUN_8c08e718((t13 + 0x8C37C85C), t14, (((int)stk + 20) + 0x10), 0x80, 0x80, 0x1);
    t16 = *(int *)(((int)stk + 32));
    t17 = *(int *)((t16 + 0x34));
    *(unsigned int *)((t16 + 0x34)) = (t17 | 0x5);
    t18 = *(int *)(((t13 + 0x8C37C85C) + 0x34));
    *(unsigned int *)(((t13 + 0x8C37C85C) + 0x34)) = (t18 | 0x5);
    *(unsigned int *)(((t13 + 0x8C37C85C) + 0x28)) = 0xFFFFC000;
    return t15;
}

int FUN_8c0c53c2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C37C2BC));
    return t4;
}

int FUN_8c0c5516(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0c5460(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    return t1;
}

void FUN_8c0c5570(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C1248CC;
    t1 = 0x8C1AED70;
    do {
        t2 = *(int *)((t1 + 0x0));
        if (t2 != 0) {
            t3 = *(int *)((t0 + 0x0));
            FUN_8c0c5532(t3);
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
    } while ((unsigned int)t1 < (unsigned int)0x8C1AEDB8);
}

void FUN_8c0c559e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED18;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12477C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
    }
}

void FUN_8c0c55f0(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED08;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12473C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x23);
    }
}

void FUN_8c0c561a(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED00;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12465C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x38);
    }
}

void FUN_8c0c5644(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AECF4;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C12461C;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x10);
    }
}

void FUN_8c0c566e(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED10;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124824;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xD);
    }
}

void FUN_8c0c5698(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C1AED14;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124858;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
    }
}

int FUN_8c0c5750(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0c572c(t0);
        t0 = (t0 + 0x1);
    } while ((unsigned int)t0 < (unsigned int)0x3C);
    return t1;
}

void FUN_8c0c576c(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = 0x8C37CDFC;
    t2 = 0x8C37CDFC;
    do {
        t3 = *(int *)((t1 + 0x0));
        if (t3 != 0) {
            t4 = *(int *)((t2 + 0x0));
            FUN_8c0c5532(t4);
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x33);
}

int FUN_8c0c57e8(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0c57c4(t0);
        t0 = (t0 + 0x1);
    } while ((unsigned int)t0 < (unsigned int)0x8);
    return t1;
}

void FUN_8c0c5864(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = 0x8C37CEEC;
    t2 = 0x8C124A40;
    do {
        t3 = *(int *)((t1 + 0x0));
        if (t3 != 0) {
            t4 = *(int *)((t2 + 0x0));
            FUN_8c0c5532(t4);
        }
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x8);
}

void FUN_8c0c58e4(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C37CF0C;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C37CF0C = 0x1;
    }
}

int FUN_8c0c591a(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37CF0C;
    t5 = 0x8C37CF0C;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = FUN_8c08e694(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        *(unsigned int *)0x8C37CF0C = 0x0;
        t5 = t4;
    }
    return t5;
}

int FUN_8c0c5950(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37CF0C;
    t5 = 0x8C37CF0C;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A64;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = FUN_8c0c5532(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x5);
        t5 = t4;
    }
    return t5;
}

int FUN_8c0c5a28(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    *(unsigned int *)(((int)stk + 16)) = a4;
    t0 = *(int *)(((((int)stk + 16) + 0x8) + 0x8));
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)(((((int)stk + 16) + 0x8) + 0x4));
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)(((((int)stk + 16) + 0x8) + 0x0));
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)(((int)stk + 16));
    t4 = FUN_8c08e944((((((t3 << 2) + t3) << 2) << 2) + 0x8C37CF10));
    return t4;
}

void FUN_8c0c5a92(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)0x8C37DA54 = 0x12;
    t0 = *(int *)0x8C37DA50;
    if (t0 == 0) {
        t1 = 0x0;
        t2 = 0x8C124A78;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            FUN_8c08e654(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x12);
        FUN_8c0c599c();
        *(unsigned int *)0x8C37DA50 = 0x1;
    }
}

int FUN_8c0c5b00(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C37DA50;
    t5 = 0x8C37DA50;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x8C124A78;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = FUN_8c08e694(t3);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0x12);
        *(unsigned int *)0x8C37DA50 = 0x0;
        t5 = t4;
    }
    return t5;
}

int FUN_8c0c5ddc(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t6;

    t0 = 0x0;
    do {
        FUN_8c0c5d80(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x12);
    t2 = 0x0;
    do {
        t3 = 0x8C1AF8A4;
        do {
            *(unsigned int *)((t3 + (t2 << 2))) = 0x0;
            t3 = (t3 + 0x70);
        } while ((unsigned int)t3 < (unsigned int)0x8C1AFA64);
        t4 = (t2 << 2);
        t2 = (t2 + 0x1);
    } while ((int)t2 < (int)0x1C);
    t6 = 0x8C37DA58;
    do {
        *(unsigned int *)((t6 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x4)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x8)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0xC)) = 0x0;
        *(unsigned int *)((t6 + 0x10)) = 0x1;
        t6 = (t6 + 0x14);
    } while ((unsigned int)t6 < (unsigned int)0x8C37DAA8);
    return t4;
}

void FUN_8c0c6476(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;

    t0 = 0x8C1B05DC;
    t1 = 0x8C1B054C;
    t2 = 0x8C1AFA64;
    do {
        t3 = *(int *)((t2 + 0x0));
        if (t3 != 0) {
            t4 = *(int *)((t0 + 0x0));
            FUN_8c0ea2a0(t4);
            t6 = 0x0;
            for (;;) {
                t7 = FUN_8c0c5c32(t6);
                if ((int)t6 >= (int)t7) break;
                t8 = *(int *)((t1 + 0x0));
                t9 = *(int *)((t8 + (t6 << 2)));
                FUN_8c0f1ff0();
                t6 = (t6 + 0x1);
            }
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        t0 = (t0 + 0x4);
    } while ((unsigned int)t2 < (unsigned int)0x8C1AFAAC);
}

int FUN_8c0c6e18(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0c6d7a(((((((t0 << 2) + t0) << 2) << 2) + 0x8C37DBCC) + 0x50), t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x13);
    return t1;
}

void FUN_8c0c7050(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)(((((t0 << 2) << 2) + 0x8C1B2004) + 0xC));
            if ((int)t1 >= (int)t2) break;
            FUN_8c0c6e4a((((((t1 << 2) + t1) << 2) << 2) + ((t0 * 0x1E0) + 0x8C37E20C)), t1, t0);
            t1 = (t1 + 0x1);
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x4);
}

int FUN_8c0ca164(void)
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
    int t12;
    int t13;
    int t16;
    int t17;
    int t20;
    int t21;
    int t24;
    int t25;
    int t28;
    int t29;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t41;
    int t44;
    int t45;
    int t48;
    int t49;
    int t52;
    int t53;
    int t56;
    int t57;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t68;
    int t69;
    int t72;
    int t73;
    int t76;
    int t77;
    int t80;
    int t81;
    int t84;
    int t85;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t96;
    int t97;
    int t100;
    int t101;
    int t104;
    int t105;
    int t108;
    int t109;
    int t112;
    int t113;

    t0 = *(int *)0x8C421F60;
    if (t0 != 0) {
        t1 = *(int *)0x8C29B27C;
        if (t1 != 1) {
            t2 = *(int *)0x8C29B27C;
            if (t2 != 0) {
                t3 = *(int *)0x8C29B27C;
                if (t3 == 3) {
                    t4 = *(int *)0x8C37EA80;
                    if ((t4 & 2) == 0) {
                        t5 = *(int *)0x8C287D5C;
                        if (t5 != 3) {
                            if (t0 != 0) {
                                t6 = *(int *)0x8C29B27C;
                                if (t6 == 0) {
                                    t7 = *(int *)0x8C295DF4;
                                    if (t7 != 0) {
                                        if (t7 != 6) {
                                            if (t7 != 12) {
                                                if (t7 == 14) {
                                                    t8 = *(int *)0x8C20D14C;
                                                    if (t8 == 0) {
                                                        t9 = *(int *)0x8C20D150;
                                                        if (t9 != 3) {
                                                            FUN_8c0c968c();
                                                            return FUN_8c0c926c();
                                                        }
                                                        return t9;
                                                    }
                                                    FUN_8c0c968c();
                                                    return FUN_8c0c926c();
                                                }
                                                return t7;
                                            }
                                            t12 = *(int *)0x8C20D14C;
                                            if (t12 == 0) {
                                                t13 = *(int *)0x8C20D150;
                                                if (t13 != 3) {
                                                    FUN_8c0c968c();
                                                    return FUN_8c0c926c();
                                                }
                                                return t13;
                                            }
                                            FUN_8c0c968c();
                                            return FUN_8c0c926c();
                                        }
                                        t16 = *(int *)0x8C20D14C;
                                        if (t16 == 0) {
                                            t17 = *(int *)0x8C20D150;
                                            if (t17 != 3) {
                                                FUN_8c0c968c();
                                                return FUN_8c0c926c();
                                            }
                                            return t17;
                                        }
                                        FUN_8c0c968c();
                                        return FUN_8c0c926c();
                                    }
                                    t20 = *(int *)0x8C20D14C;
                                    if (t20 == 0) {
                                        t21 = *(int *)0x8C20D150;
                                        if (t21 != 3) {
                                            FUN_8c0c968c();
                                            return FUN_8c0c926c();
                                        }
                                        return t21;
                                    }
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                t24 = *(int *)0x8C20D14C;
                                if (t24 == 0) {
                                    t25 = *(int *)0x8C20D150;
                                    if (t25 != 3) {
                                        FUN_8c0c968c();
                                        return FUN_8c0c926c();
                                    }
                                    return t25;
                                }
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            t28 = *(int *)0x8C20D14C;
                            if (t28 == 0) {
                                t29 = *(int *)0x8C20D150;
                                if (t29 != 3) {
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                return t29;
                            }
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        return t5;
                    }
                    return t4;
                }
                return t3;
            }
            t32 = *(int *)0x8C37EA80;
            if ((t32 & 2) == 0) {
                t33 = *(int *)0x8C287D5C;
                if (t33 != 3) {
                    if (t0 != 0) {
                        t34 = *(int *)0x8C29B27C;
                        if (t34 == 0) {
                            t35 = *(int *)0x8C295DF4;
                            if (t35 != 0) {
                                if (t35 != 6) {
                                    if (t35 != 12) {
                                        if (t35 == 14) {
                                            t36 = *(int *)0x8C20D14C;
                                            if (t36 == 0) {
                                                t37 = *(int *)0x8C20D150;
                                                if (t37 != 3) {
                                                    FUN_8c0c968c();
                                                    return FUN_8c0c926c();
                                                }
                                                return t37;
                                            }
                                            FUN_8c0c968c();
                                            return FUN_8c0c926c();
                                        }
                                        return t35;
                                    }
                                    t40 = *(int *)0x8C20D14C;
                                    if (t40 == 0) {
                                        t41 = *(int *)0x8C20D150;
                                        if (t41 != 3) {
                                            FUN_8c0c968c();
                                            return FUN_8c0c926c();
                                        }
                                        return t41;
                                    }
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                t44 = *(int *)0x8C20D14C;
                                if (t44 == 0) {
                                    t45 = *(int *)0x8C20D150;
                                    if (t45 != 3) {
                                        FUN_8c0c968c();
                                        return FUN_8c0c926c();
                                    }
                                    return t45;
                                }
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            t48 = *(int *)0x8C20D14C;
                            if (t48 == 0) {
                                t49 = *(int *)0x8C20D150;
                                if (t49 != 3) {
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                return t49;
                            }
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        t52 = *(int *)0x8C20D14C;
                        if (t52 == 0) {
                            t53 = *(int *)0x8C20D150;
                            if (t53 != 3) {
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            return t53;
                        }
                        FUN_8c0c968c();
                        return FUN_8c0c926c();
                    }
                    t56 = *(int *)0x8C20D14C;
                    if (t56 == 0) {
                        t57 = *(int *)0x8C20D150;
                        if (t57 != 3) {
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        return t57;
                    }
                    FUN_8c0c968c();
                    return FUN_8c0c926c();
                }
                return t33;
            }
            return t32;
        }
        t60 = *(int *)0x8C37EA80;
        if ((t60 & 2) == 0) {
            t61 = *(int *)0x8C287D5C;
            if (t61 != 3) {
                if (t0 != 0) {
                    t62 = *(int *)0x8C29B27C;
                    if (t62 == 0) {
                        t63 = *(int *)0x8C295DF4;
                        if (t63 != 0) {
                            if (t63 != 6) {
                                if (t63 != 12) {
                                    if (t63 == 14) {
                                        t64 = *(int *)0x8C20D14C;
                                        if (t64 == 0) {
                                            t65 = *(int *)0x8C20D150;
                                            if (t65 != 3) {
                                                FUN_8c0c968c();
                                                return FUN_8c0c926c();
                                            }
                                            return t65;
                                        }
                                        FUN_8c0c968c();
                                        return FUN_8c0c926c();
                                    }
                                    return t63;
                                }
                                t68 = *(int *)0x8C20D14C;
                                if (t68 == 0) {
                                    t69 = *(int *)0x8C20D150;
                                    if (t69 != 3) {
                                        FUN_8c0c968c();
                                        return FUN_8c0c926c();
                                    }
                                    return t69;
                                }
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            t72 = *(int *)0x8C20D14C;
                            if (t72 == 0) {
                                t73 = *(int *)0x8C20D150;
                                if (t73 != 3) {
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                return t73;
                            }
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        t76 = *(int *)0x8C20D14C;
                        if (t76 == 0) {
                            t77 = *(int *)0x8C20D150;
                            if (t77 != 3) {
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            return t77;
                        }
                        FUN_8c0c968c();
                        return FUN_8c0c926c();
                    }
                    t80 = *(int *)0x8C20D14C;
                    if (t80 == 0) {
                        t81 = *(int *)0x8C20D150;
                        if (t81 != 3) {
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        return t81;
                    }
                    FUN_8c0c968c();
                    return FUN_8c0c926c();
                }
                t84 = *(int *)0x8C20D14C;
                if (t84 == 0) {
                    t85 = *(int *)0x8C20D150;
                    if (t85 != 3) {
                        FUN_8c0c968c();
                        return FUN_8c0c926c();
                    }
                    return t85;
                }
                FUN_8c0c968c();
                return FUN_8c0c926c();
            }
            return t61;
        }
        return t60;
    }
    t88 = *(int *)0x8C37EA80;
    if ((t88 & 2) == 0) {
        t89 = *(int *)0x8C287D5C;
        if (t89 != 3) {
            if (t0 != 0) {
                t90 = *(int *)0x8C29B27C;
                if (t90 == 0) {
                    t91 = *(int *)0x8C295DF4;
                    if (t91 != 0) {
                        if (t91 != 6) {
                            if (t91 != 12) {
                                if (t91 == 14) {
                                    t92 = *(int *)0x8C20D14C;
                                    if (t92 == 0) {
                                        t93 = *(int *)0x8C20D150;
                                        if (t93 != 3) {
                                            FUN_8c0c968c();
                                            return FUN_8c0c926c();
                                        }
                                        return t93;
                                    }
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                return t91;
                            }
                            t96 = *(int *)0x8C20D14C;
                            if (t96 == 0) {
                                t97 = *(int *)0x8C20D150;
                                if (t97 != 3) {
                                    FUN_8c0c968c();
                                    return FUN_8c0c926c();
                                }
                                return t97;
                            }
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        t100 = *(int *)0x8C20D14C;
                        if (t100 == 0) {
                            t101 = *(int *)0x8C20D150;
                            if (t101 != 3) {
                                FUN_8c0c968c();
                                return FUN_8c0c926c();
                            }
                            return t101;
                        }
                        FUN_8c0c968c();
                        return FUN_8c0c926c();
                    }
                    t104 = *(int *)0x8C20D14C;
                    if (t104 == 0) {
                        t105 = *(int *)0x8C20D150;
                        if (t105 != 3) {
                            FUN_8c0c968c();
                            return FUN_8c0c926c();
                        }
                        return t105;
                    }
                    FUN_8c0c968c();
                    return FUN_8c0c926c();
                }
                t108 = *(int *)0x8C20D14C;
                if (t108 == 0) {
                    t109 = *(int *)0x8C20D150;
                    if (t109 != 3) {
                        FUN_8c0c968c();
                        return FUN_8c0c926c();
                    }
                    return t109;
                }
                FUN_8c0c968c();
                return FUN_8c0c926c();
            }
            t112 = *(int *)0x8C20D14C;
            if (t112 == 0) {
                t113 = *(int *)0x8C20D150;
                if (t113 != 3) {
                    FUN_8c0c968c();
                    return FUN_8c0c926c();
                }
                return t113;
            }
            FUN_8c0c968c();
            return FUN_8c0c926c();
        }
        return t89;
    }
    return t88;
}

void FUN_8c0ca530(void)
{
    int t0;
    int t1;
    int t3;
    int t4;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t1 = *(int *)(((t0 << 2) + 0x8C1D0DF0));
        if (t1 != 0) {
            FUN_8c014c34();
            t3 = *(int *)0x8C124E54;
            t4 = *(int *)0x8C2873D4;
            motionSwitch(0x8C38A25C, t3, 0x0, t4, 1.0f);
            *(unsigned int *)0x8C38A814 = 0x4;
            *(unsigned int *)0x8C38A80C = 0x0;
        }
    }
}

int FUN_8c0ca740(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t3;
    int t5;
    float u8;
    float u9;
    float u10;
    int t12;

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        t1 = *(int *)(((t0 << 2) + 0x8C1D0DF0));
        if (t1 != 0) {
            t2 = *(int *)0x8C287C60;
            t4 = 0x8C1D0DF0;
            if (t2 == 0) {
                t3 = motionAdvanceSimple(0x8C38A25C);
                t4 = t3;
            }
            t5 = *(int *)0x8C287ADC;
            if ((int)t5 <= (int)0x2) {
                colliObjEntry(0x8C38A81C);
                nlPushMatrix(0x0);
                u8 = *(float *)0x8C38A804;
                u9 = *(float *)0x8C38A800;
                u10 = *(float *)0x8C38A7FC;
                nlTranslate(u10, u9, u8);
                t12 = *(short *)0x8C38A808;
                nlRotateAY(t12);
                FUN_8c0ca2c0(0x8C38A258);
                return nlPopMatrix(0x1);
            }
            return t4;
        }
        return 0x8C1D0DF0;
    }
    return 0;
}

int FUN_8c0ca7f0(void)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t18;
    int t19;
    int t20;
    int t21;
    int t24;
    int t25;
    int t26;
    int t27;
    int t30;
    int t31;
    int t32;
    int t33;
    int t36;
    int t37;
    int t38;
    int t39;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t50;
    int t51;
    int t52;
    int t53;
    int t56;
    int t57;
    int t58;
    int t59;
    int t62;
    int t63;
    int t64;
    int t65;
    int t68;
    int t69;
    int t70;
    int t71;
    int t74;
    int t75;
    int t76;
    int t77;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t88;
    int t89;
    int t90;
    int t91;
    int t94;
    int t95;
    int t96;
    int t97;
    int t100;
    int t101;
    int t102;
    int t103;
    int t106;
    int t107;
    int t108;
    int t109;
    int t112;
    int t113;
    int t114;
    int t115;
    int t118;
    int t119;
    int t120;
    int t121;

    t0 = *(int *)0x8C421F60;
    if (t0 != 0) {
        t1 = *(int *)0x8C29B27C;
        if (t1 != 1) {
            t2 = *(int *)0x8C29B27C;
            if (t2 != 0) {
                t3 = *(int *)0x8C29B27C;
                if (t3 == 3) {
                    if (t0 != 0) {
                        t4 = *(int *)0x8C29B27C;
                        if (t4 == 0) {
                            t5 = *(int *)0x8C295DF4;
                            if (t5 != 0) {
                                if (t5 != 6) {
                                    if (t5 != 12) {
                                        if (t5 == 14) {
                                            t6 = *(int *)0x8C287D5C;
                                            if (t6 != 3) {
                                                t7 = *(int *)0x8C37EA80;
                                                if ((t7 & 4) == 0) {
                                                    t8 = *(int *)0x8C20D14C;
                                                    if (t8 == 0) {
                                                        t9 = *(int *)0x8C20D150;
                                                        if (t9 != 3) {
                                                            FUN_8c0ca5a8();
                                                            return FUN_8c0ca740();
                                                        }
                                                        return t9;
                                                    }
                                                    FUN_8c0ca5a8();
                                                    return FUN_8c0ca740();
                                                }
                                                return t7;
                                            }
                                            return t6;
                                        }
                                        return t5;
                                    }
                                    t12 = *(int *)0x8C287D5C;
                                    if (t12 != 3) {
                                        t13 = *(int *)0x8C37EA80;
                                        if ((t13 & 4) == 0) {
                                            t14 = *(int *)0x8C20D14C;
                                            if (t14 == 0) {
                                                t15 = *(int *)0x8C20D150;
                                                if (t15 != 3) {
                                                    FUN_8c0ca5a8();
                                                    return FUN_8c0ca740();
                                                }
                                                return t15;
                                            }
                                            FUN_8c0ca5a8();
                                            return FUN_8c0ca740();
                                        }
                                        return t13;
                                    }
                                    return t12;
                                }
                                t18 = *(int *)0x8C287D5C;
                                if (t18 != 3) {
                                    t19 = *(int *)0x8C37EA80;
                                    if ((t19 & 4) == 0) {
                                        t20 = *(int *)0x8C20D14C;
                                        if (t20 == 0) {
                                            t21 = *(int *)0x8C20D150;
                                            if (t21 != 3) {
                                                FUN_8c0ca5a8();
                                                return FUN_8c0ca740();
                                            }
                                            return t21;
                                        }
                                        FUN_8c0ca5a8();
                                        return FUN_8c0ca740();
                                    }
                                    return t19;
                                }
                                return t18;
                            }
                            t24 = *(int *)0x8C287D5C;
                            if (t24 != 3) {
                                t25 = *(int *)0x8C37EA80;
                                if ((t25 & 4) == 0) {
                                    t26 = *(int *)0x8C20D14C;
                                    if (t26 == 0) {
                                        t27 = *(int *)0x8C20D150;
                                        if (t27 != 3) {
                                            FUN_8c0ca5a8();
                                            return FUN_8c0ca740();
                                        }
                                        return t27;
                                    }
                                    FUN_8c0ca5a8();
                                    return FUN_8c0ca740();
                                }
                                return t25;
                            }
                            return t24;
                        }
                        t30 = *(int *)0x8C287D5C;
                        if (t30 != 3) {
                            t31 = *(int *)0x8C37EA80;
                            if ((t31 & 4) == 0) {
                                t32 = *(int *)0x8C20D14C;
                                if (t32 == 0) {
                                    t33 = *(int *)0x8C20D150;
                                    if (t33 != 3) {
                                        FUN_8c0ca5a8();
                                        return FUN_8c0ca740();
                                    }
                                    return t33;
                                }
                                FUN_8c0ca5a8();
                                return FUN_8c0ca740();
                            }
                            return t31;
                        }
                        return t30;
                    }
                    t36 = *(int *)0x8C287D5C;
                    if (t36 != 3) {
                        t37 = *(int *)0x8C37EA80;
                        if ((t37 & 4) == 0) {
                            t38 = *(int *)0x8C20D14C;
                            if (t38 == 0) {
                                t39 = *(int *)0x8C20D150;
                                if (t39 != 3) {
                                    FUN_8c0ca5a8();
                                    return FUN_8c0ca740();
                                }
                                return t39;
                            }
                            FUN_8c0ca5a8();
                            return FUN_8c0ca740();
                        }
                        return t37;
                    }
                    return t36;
                }
                return t3;
            }
            if (t0 != 0) {
                t42 = *(int *)0x8C29B27C;
                if (t42 == 0) {
                    t43 = *(int *)0x8C295DF4;
                    if (t43 != 0) {
                        if (t43 != 6) {
                            if (t43 != 12) {
                                if (t43 == 14) {
                                    t44 = *(int *)0x8C287D5C;
                                    if (t44 != 3) {
                                        t45 = *(int *)0x8C37EA80;
                                        if ((t45 & 4) == 0) {
                                            t46 = *(int *)0x8C20D14C;
                                            if (t46 == 0) {
                                                t47 = *(int *)0x8C20D150;
                                                if (t47 != 3) {
                                                    FUN_8c0ca5a8();
                                                    return FUN_8c0ca740();
                                                }
                                                return t47;
                                            }
                                            FUN_8c0ca5a8();
                                            return FUN_8c0ca740();
                                        }
                                        return t45;
                                    }
                                    return t44;
                                }
                                return t43;
                            }
                            t50 = *(int *)0x8C287D5C;
                            if (t50 != 3) {
                                t51 = *(int *)0x8C37EA80;
                                if ((t51 & 4) == 0) {
                                    t52 = *(int *)0x8C20D14C;
                                    if (t52 == 0) {
                                        t53 = *(int *)0x8C20D150;
                                        if (t53 != 3) {
                                            FUN_8c0ca5a8();
                                            return FUN_8c0ca740();
                                        }
                                        return t53;
                                    }
                                    FUN_8c0ca5a8();
                                    return FUN_8c0ca740();
                                }
                                return t51;
                            }
                            return t50;
                        }
                        t56 = *(int *)0x8C287D5C;
                        if (t56 != 3) {
                            t57 = *(int *)0x8C37EA80;
                            if ((t57 & 4) == 0) {
                                t58 = *(int *)0x8C20D14C;
                                if (t58 == 0) {
                                    t59 = *(int *)0x8C20D150;
                                    if (t59 != 3) {
                                        FUN_8c0ca5a8();
                                        return FUN_8c0ca740();
                                    }
                                    return t59;
                                }
                                FUN_8c0ca5a8();
                                return FUN_8c0ca740();
                            }
                            return t57;
                        }
                        return t56;
                    }
                    t62 = *(int *)0x8C287D5C;
                    if (t62 != 3) {
                        t63 = *(int *)0x8C37EA80;
                        if ((t63 & 4) == 0) {
                            t64 = *(int *)0x8C20D14C;
                            if (t64 == 0) {
                                t65 = *(int *)0x8C20D150;
                                if (t65 != 3) {
                                    FUN_8c0ca5a8();
                                    return FUN_8c0ca740();
                                }
                                return t65;
                            }
                            FUN_8c0ca5a8();
                            return FUN_8c0ca740();
                        }
                        return t63;
                    }
                    return t62;
                }
                t68 = *(int *)0x8C287D5C;
                if (t68 != 3) {
                    t69 = *(int *)0x8C37EA80;
                    if ((t69 & 4) == 0) {
                        t70 = *(int *)0x8C20D14C;
                        if (t70 == 0) {
                            t71 = *(int *)0x8C20D150;
                            if (t71 != 3) {
                                FUN_8c0ca5a8();
                                return FUN_8c0ca740();
                            }
                            return t71;
                        }
                        FUN_8c0ca5a8();
                        return FUN_8c0ca740();
                    }
                    return t69;
                }
                return t68;
            }
            t74 = *(int *)0x8C287D5C;
            if (t74 != 3) {
                t75 = *(int *)0x8C37EA80;
                if ((t75 & 4) == 0) {
                    t76 = *(int *)0x8C20D14C;
                    if (t76 == 0) {
                        t77 = *(int *)0x8C20D150;
                        if (t77 != 3) {
                            FUN_8c0ca5a8();
                            return FUN_8c0ca740();
                        }
                        return t77;
                    }
                    FUN_8c0ca5a8();
                    return FUN_8c0ca740();
                }
                return t75;
            }
            return t74;
        }
        if (t0 != 0) {
            t80 = *(int *)0x8C29B27C;
            if (t80 == 0) {
                t81 = *(int *)0x8C295DF4;
                if (t81 != 0) {
                    if (t81 != 6) {
                        if (t81 != 12) {
                            if (t81 == 14) {
                                t82 = *(int *)0x8C287D5C;
                                if (t82 != 3) {
                                    t83 = *(int *)0x8C37EA80;
                                    if ((t83 & 4) == 0) {
                                        t84 = *(int *)0x8C20D14C;
                                        if (t84 == 0) {
                                            t85 = *(int *)0x8C20D150;
                                            if (t85 != 3) {
                                                FUN_8c0ca5a8();
                                                return FUN_8c0ca740();
                                            }
                                            return t85;
                                        }
                                        FUN_8c0ca5a8();
                                        return FUN_8c0ca740();
                                    }
                                    return t83;
                                }
                                return t82;
                            }
                            return t81;
                        }
                        t88 = *(int *)0x8C287D5C;
                        if (t88 != 3) {
                            t89 = *(int *)0x8C37EA80;
                            if ((t89 & 4) == 0) {
                                t90 = *(int *)0x8C20D14C;
                                if (t90 == 0) {
                                    t91 = *(int *)0x8C20D150;
                                    if (t91 != 3) {
                                        FUN_8c0ca5a8();
                                        return FUN_8c0ca740();
                                    }
                                    return t91;
                                }
                                FUN_8c0ca5a8();
                                return FUN_8c0ca740();
                            }
                            return t89;
                        }
                        return t88;
                    }
                    t94 = *(int *)0x8C287D5C;
                    if (t94 != 3) {
                        t95 = *(int *)0x8C37EA80;
                        if ((t95 & 4) == 0) {
                            t96 = *(int *)0x8C20D14C;
                            if (t96 == 0) {
                                t97 = *(int *)0x8C20D150;
                                if (t97 != 3) {
                                    FUN_8c0ca5a8();
                                    return FUN_8c0ca740();
                                }
                                return t97;
                            }
                            FUN_8c0ca5a8();
                            return FUN_8c0ca740();
                        }
                        return t95;
                    }
                    return t94;
                }
                t100 = *(int *)0x8C287D5C;
                if (t100 != 3) {
                    t101 = *(int *)0x8C37EA80;
                    if ((t101 & 4) == 0) {
                        t102 = *(int *)0x8C20D14C;
                        if (t102 == 0) {
                            t103 = *(int *)0x8C20D150;
                            if (t103 != 3) {
                                FUN_8c0ca5a8();
                                return FUN_8c0ca740();
                            }
                            return t103;
                        }
                        FUN_8c0ca5a8();
                        return FUN_8c0ca740();
                    }
                    return t101;
                }
                return t100;
            }
            t106 = *(int *)0x8C287D5C;
            if (t106 != 3) {
                t107 = *(int *)0x8C37EA80;
                if ((t107 & 4) == 0) {
                    t108 = *(int *)0x8C20D14C;
                    if (t108 == 0) {
                        t109 = *(int *)0x8C20D150;
                        if (t109 != 3) {
                            FUN_8c0ca5a8();
                            return FUN_8c0ca740();
                        }
                        return t109;
                    }
                    FUN_8c0ca5a8();
                    return FUN_8c0ca740();
                }
                return t107;
            }
            return t106;
        }
        t112 = *(int *)0x8C287D5C;
        if (t112 != 3) {
            t113 = *(int *)0x8C37EA80;
            if ((t113 & 4) == 0) {
                t114 = *(int *)0x8C20D14C;
                if (t114 == 0) {
                    t115 = *(int *)0x8C20D150;
                    if (t115 != 3) {
                        FUN_8c0ca5a8();
                        return FUN_8c0ca740();
                    }
                    return t115;
                }
                FUN_8c0ca5a8();
                return FUN_8c0ca740();
            }
            return t113;
        }
        return t112;
    }
    t118 = *(int *)0x8C287D5C;
    if (t118 != 3) {
        t119 = *(int *)0x8C37EA80;
        if ((t119 & 4) == 0) {
            t120 = *(int *)0x8C20D14C;
            if (t120 == 0) {
                t121 = *(int *)0x8C20D150;
                if (t121 != 3) {
                    FUN_8c0ca5a8();
                    return FUN_8c0ca740();
                }
                return t121;
            }
            FUN_8c0ca5a8();
            return FUN_8c0ca740();
        }
        return t119;
    }
    return t118;
}

int FUN_8c0cae5e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int stk[6];

    t0 = *(int *)0x8C1891E8;
    if ((int)t0 <= (int)0x9) {
        if (t0 != 1) {
            if (t0 != 4) {
                if (t0 != 8) {
                    if (t0 != 7) {
                        t1 = *(int *)(((0x5A4 + a4) + 0x8));
                        *(unsigned int *)((((int)stk + 4) + 0x8)) = t1;
                        t2 = *(int *)(((0x5A4 + a4) + 0x4));
                        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
                        t3 = *(int *)(((0x5A4 + a4) + 0x0));
                        *(unsigned int *)((((int)stk + 4) + 0x0)) = t3;
                        t4 = FUN_8c0caed4();
                        return t4;
                    }
                    return FUN_8c0cb0e0(a4);
                }
                return FUN_8c0cb0e0(a4);
            }
            return FUN_8c0cb0e0(a4);
        }
        return FUN_8c0cb0e0(a4);
    }
    return 0;
}

int FUN_8c0cb8de(void)
{
    int t0;
    int t4;
    int t1;
    int t3;

    t0 = *(int *)0x8C1891E8;
    t4 = t0;
    if (t0 == 2) {
        t1 = FUN_8c0cec24(0xC880640, 0x0);
        *(unsigned int *)0x8C1D0194 = t1;
        FUN_8c0cec24(0xC880640, 0x8C38AED0);
        t3 = FUN_8c0cec24(0xC880960, 0x8C38B308);
        t4 = t3;
    }
    return t4;
}

int FUN_8c0cb90c(void)
{
    int t16;
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
    int t15;

    t16 = 0x8C38AED0;
    if (0x8C38AED0 != 0) {
        t0 = 0x8C38AED0;
        t1 = 0x8C38AED0;
        t2 = 0x0;
        for (;;) {
            t3 = *(int *)0x8C1D0194;
            if ((int)t2 >= (int)t3) break;
            t4 = *(int *)((t1 + 0x30));
            t2 = (t2 + 0x1);
            t5 = *(int *)((t1 + 0x0));
            t0 = t5;
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880000 + t0)) = (t4 | 0x1);
            t6 = *(int *)((t1 + 0x0));
            t0 = t6;
            t7 = *(int *)((t1 + 0x34));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880004 + t0)) = t7;
            t8 = *(int *)((t1 + 0x0));
            t0 = t8;
            t9 = *(int *)((t1 + 0x38));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880008 + t0)) = t9;
            t10 = *(int *)((t1 + 0x30));
            t11 = *(int *)((t1 + 0x0));
            t0 = t11;
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880320 + t0)) = (t10 | 0x1);
            t12 = *(int *)((t1 + 0x0));
            t0 = t12;
            t13 = *(int *)((t1 + 0x34));
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880324 + t0)) = t13;
            t14 = *(int *)((t1 + 0x0));
            t0 = t14;
            t15 = *(int *)((t1 + 0x38));
            t1 = (t1 + 0x3C);
            t0 = (t0 << 2);
            *(unsigned int *)((0xC880328 + t0)) = t15;
        }
        t16 = t0;
    }
    return t16;
}

int FUN_8c0cba8c(int a4, int a5)
{
    int t0;
    int t1;
    int t12;
    int t11;
    int t22;
    int t33;
    int t44;
    int t55;
    int t56;
    int t45;
    int t34;
    int t23;

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C38B768;
        if (t1 == 0) {
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 4) {
                        t12 = t0;
                        if (t0 == 5) {
                            nlPushMatrix(0x0);
                            nlScale(1.0f, (-1.0f), 1.0f);
                            nlMultiMatrix(0x8C287978);
                            nlMultiMatrix(((a4 + 0x1E4) + (((t0 << 2) << 2) << 2)));
                            nlGetMatrix((a5 + (((t0 << 2) << 2) << 2)));
                            nlPopMatrix(0x1);
                            nlPushMatrix(0x0);
                            nlLoadMatrix((a5 + (((t0 << 2) << 2) << 2)));
                            FUN_8c0cbb38(t0);
                            t11 = nlPopMatrix(0x1);
                            t12 = t11;
                        }
                        t23 = t12;
                    } else {
                        nlPushMatrix(0x0);
                        nlScale(1.0f, (-1.0f), 1.0f);
                        nlMultiMatrix(0x8C287978);
                        nlMultiMatrix(((a4 + 0x1E4) + (((t0 << 2) << 2) << 2)));
                        nlGetMatrix((a5 + (((t0 << 2) << 2) << 2)));
                        nlPopMatrix(0x1);
                        nlPushMatrix(0x0);
                        nlLoadMatrix((a5 + (((t0 << 2) << 2) << 2)));
                        FUN_8c0cbb38(t0);
                        t22 = nlPopMatrix(0x1);
                        t23 = t22;
                    }
                    t34 = t23;
                } else {
                    nlPushMatrix(0x0);
                    nlScale(1.0f, (-1.0f), 1.0f);
                    nlMultiMatrix(0x8C287978);
                    nlMultiMatrix(((a4 + 0x1E4) + (((t0 << 2) << 2) << 2)));
                    nlGetMatrix((a5 + (((t0 << 2) << 2) << 2)));
                    nlPopMatrix(0x1);
                    nlPushMatrix(0x0);
                    nlLoadMatrix((a5 + (((t0 << 2) << 2) << 2)));
                    FUN_8c0cbb38(t0);
                    t33 = nlPopMatrix(0x1);
                    t34 = t33;
                }
                t45 = t34;
            } else {
                nlPushMatrix(0x0);
                nlScale(1.0f, (-1.0f), 1.0f);
                nlMultiMatrix(0x8C287978);
                nlMultiMatrix(((a4 + 0x1E4) + (((t0 << 2) << 2) << 2)));
                nlGetMatrix((a5 + (((t0 << 2) << 2) << 2)));
                nlPopMatrix(0x1);
                nlPushMatrix(0x0);
                nlLoadMatrix((a5 + (((t0 << 2) << 2) << 2)));
                FUN_8c0cbb38(t0);
                t44 = nlPopMatrix(0x1);
                t45 = t44;
            }
            t56 = t45;
        } else {
            nlPushMatrix(0x0);
            nlScale(1.0f, (-1.0f), 1.0f);
            nlMultiMatrix(0x8C287978);
            nlMultiMatrix(((a4 + 0x1E4) + (((t0 << 2) << 2) << 2)));
            nlGetMatrix((a5 + (((t0 << 2) << 2) << 2)));
            nlPopMatrix(0x1);
            nlPushMatrix(0x0);
            nlLoadMatrix((a5 + (((t0 << 2) << 2) << 2)));
            FUN_8c0cbb38(t0);
            t55 = nlPopMatrix(0x1);
            t56 = t55;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
    return t56;
}

int FUN_8c0cc4ec(void)
{
    int t0;
    int t9;
    float u1;
    float u2;
    float u3;
    int t7;
    int t8;
    float u11;
    float u12;
    float u13;
    int t17;
    int t18;
    float u21;
    float u22;
    float u23;
    int t27;
    int t28;
    float u31;
    float u32;
    float u33;
    int t37;
    int t38;
    float u41;
    float u42;
    float u43;
    int t47;
    int t48;
    float u51;
    float u52;
    float u53;
    int t57;
    int t58;
    int t59;
    int t49;
    int t39;
    int t29;
    int t19;
    int stk[13];

    t0 = *(int *)0x8C1891E8;
    if (t0 != 4) {
        if (t0 != 1) {
            if (t0 != 8) {
                if (t0 != 7) {
                    if (t0 != 10) {
                        t9 = t0;
                        if (t0 == 14) {
                            u1 = *(float *)0x8C287920;
                            u2 = *(float *)0x8C28791C;
                            u3 = *(float *)0x8C287918;
                            FUN_8c015eea(u3, u2, u1);
                            FUN_8c015eea(0.0f, 0.0f, 0.0f);
                            FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
                            t7 = *(short *)(((int)stk + 36));
                            *(unsigned short *)(((int)stk + 36)) = (-t7);
                            t8 = *(short *)(((int)stk + 32));
                            *(unsigned short *)(((int)stk + 32)) = (-t8);
                            *(unsigned int *)0x8C38B828 = (unsigned short)(-t8);
                            t9 = (-t7);
                        }
                        t19 = t9;
                    } else {
                        u11 = *(float *)0x8C287920;
                        u12 = *(float *)0x8C28791C;
                        u13 = *(float *)0x8C287918;
                        FUN_8c015eea(u13, u12, u11);
                        FUN_8c015eea(0.0f, 0.0f, 0.0f);
                        FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
                        t17 = *(short *)(((int)stk + 36));
                        *(unsigned short *)(((int)stk + 36)) = (-t17);
                        t18 = *(short *)(((int)stk + 32));
                        *(unsigned short *)(((int)stk + 32)) = (-t18);
                        *(unsigned int *)0x8C38B828 = (unsigned short)(-t18);
                        t19 = (-t17);
                    }
                    t29 = t19;
                } else {
                    u21 = *(float *)0x8C287920;
                    u22 = *(float *)0x8C28791C;
                    u23 = *(float *)0x8C287918;
                    FUN_8c015eea(u23, u22, u21);
                    FUN_8c015eea(0.0f, 0.0f, 0.0f);
                    FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
                    t27 = *(short *)(((int)stk + 36));
                    *(unsigned short *)(((int)stk + 36)) = (-t27);
                    t28 = *(short *)(((int)stk + 32));
                    *(unsigned short *)(((int)stk + 32)) = (-t28);
                    *(unsigned int *)0x8C38B828 = (unsigned short)(-t28);
                    t29 = (-t27);
                }
                t39 = t29;
            } else {
                u31 = *(float *)0x8C287920;
                u32 = *(float *)0x8C28791C;
                u33 = *(float *)0x8C287918;
                FUN_8c015eea(u33, u32, u31);
                FUN_8c015eea(0.0f, 0.0f, 0.0f);
                FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
                t37 = *(short *)(((int)stk + 36));
                *(unsigned short *)(((int)stk + 36)) = (-t37);
                t38 = *(short *)(((int)stk + 32));
                *(unsigned short *)(((int)stk + 32)) = (-t38);
                *(unsigned int *)0x8C38B828 = (unsigned short)(-t38);
                t39 = (-t37);
            }
            t49 = t39;
        } else {
            u41 = *(float *)0x8C287920;
            u42 = *(float *)0x8C28791C;
            u43 = *(float *)0x8C287918;
            FUN_8c015eea(u43, u42, u41);
            FUN_8c015eea(0.0f, 0.0f, 0.0f);
            FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
            t47 = *(short *)(((int)stk + 36));
            *(unsigned short *)(((int)stk + 36)) = (-t47);
            t48 = *(short *)(((int)stk + 32));
            *(unsigned short *)(((int)stk + 32)) = (-t48);
            *(unsigned int *)0x8C38B828 = (unsigned short)(-t48);
            t49 = (-t47);
        }
        t59 = t49;
    } else {
        u51 = *(float *)0x8C287920;
        u52 = *(float *)0x8C28791C;
        u53 = *(float *)0x8C287918;
        FUN_8c015eea(u53, u52, u51);
        FUN_8c015eea(0.0f, 0.0f, 0.0f);
        FUN_8c0161e8((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x18));
        t57 = *(short *)(((int)stk + 36));
        *(unsigned short *)(((int)stk + 36)) = (-t57);
        t58 = *(short *)(((int)stk + 32));
        *(unsigned short *)(((int)stk + 32)) = (-t58);
        *(unsigned int *)0x8C38B828 = (unsigned short)(-t58);
        t59 = (-t57);
    }
    return t59;
}

void FUN_8c0cc56e(void)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    int stk[1];

    u0 = *(float *)((((int)stk + 4) + 0x0));
    u1 = *(float *)(((((int)stk + 4) + 0xC) + 0x0));
    if (u0 == u1) {
        u2 = *(float *)((((int)stk + 4) + 0x4));
        u3 = *(float *)(((((int)stk + 4) + 0xC) + 0x4));
        if (u2 == u3) {
            u4 = *(float *)((((int)stk + 4) + 0x8));
            u5 = *(float *)(((((int)stk + 4) + 0xC) + 0x8));
            if (u4 == u5) {
                return;
            }
            return;
        }
        return;
    }
}

int FUN_8c0cdf64(int a4)
{
    float u1;
    float u2;
    int t3;
    int t4;
    int stk[20];

    *(unsigned int *)(((int)stk + 4)) = a4;
    nlGetMatrix((((int)stk + 4) + 0x4));
    u1 = *(float *)(((int)stk + 40));
    u2 = *(float *)(((int)stk + 48));
    t3 = *(int *)(((int)stk + 4));
    t4 = nlArcTan2(u1, u2);
    *(unsigned int *)((t3 + 0x0)) = t4;
    return t4;
}

int FUN_8c0ce564(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t4;
    int t6;

    t0 = *(int *)0x8C287B3C;
    *(unsigned int *)0x8C287B3C = (t0 | 0x20);
    if ((unsigned int)0x8C181628 < (unsigned int)0x8C181638) {
        t1 = 0x8C181628;
        for (;;) {
            t2 = *(int *)((t1 + 0x0));
            if (t2 == 0) {
                t1 = (t1 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x8C181638) break;
                continue;
            }
            return (t0 | 0x20);
        }
        t3 = *(int *)((a4 + 0x24));
        if (t3 != 0) {
            if (t3 == 2) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
                *(unsigned int *)((a4 + 0x20)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                *(unsigned int *)((a4 + 0x1C)) = 0x1;
            }
            t4 = t3;
        } else {
            *(unsigned int *)((a4 + 0x18)) = 0x1;
            *(unsigned int *)((a4 + 0x20)) = 0x1;
            t4 = (t0 | 0x20);
        }
        t7 = t4;
    } else {
        t5 = *(int *)((a4 + 0x24));
        if (t5 != 0) {
            if (t5 == 2) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
                *(unsigned int *)((a4 + 0x20)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x14)) = 0x1;
                *(unsigned int *)((a4 + 0x1C)) = 0x1;
            }
            t6 = t5;
        } else {
            *(unsigned int *)((a4 + 0x18)) = 0x1;
            *(unsigned int *)((a4 + 0x20)) = 0x1;
            t6 = (t0 | 0x20);
        }
        t7 = t6;
    }
    return t7;
}

int FUN_8c0cf7b0(void)
{
    int t1;
    int t5;

    *(unsigned int *)0x8C421F64 = 0x0;
    *(unsigned int *)0x8C1D1278 = 0x1;
    FUN_8c0d0a98(0x0, 0x2);
    for (;;) {
        t1 = FUN_8c0e8cec();
        if (t1 == 1) break;
        FUN_8c0d1744();
        FUN_8c01b250();
        FUN_8c0eaba0();
    }
    t5 = FUN_8c0e628c();
    *(unsigned int *)0x8C38BA14 = 0x1;
    return t5;
}

void FUN_8c0d0fca(int a4, int a5, int a6, int a7, int a8, float f4, float f5)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    int t5;
    int t6;
    int stk[8];

    u0 = *(float *)(((((int)stk + 4) + 0x20) + 0x0));
    *(float *)((((int)stk + 4) + 0x0)) = (u0 - (f4 / (1.0f + 1.0f)));
    u1 = *(float *)(((((int)stk + 4) + 0x20) + 0x4));
    *(float *)((((int)stk + 4) + 0x4)) = (u1 - (f5 / (1.0f + 1.0f)));
    u2 = *(float *)((((int)stk + 4) + 0x0));
    *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (float)(int)u2;
    *(float *)(((((int)stk + 4) + 0xC) + 0x4)) = (float)(int)(u1 - (f5 / (1.0f + 1.0f)));
    u3 = *(float *)(((((int)stk + 4) + 0x20) + 0x8));
    *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = u3;
    t4 = *(int *)(((((int)stk + 4) + 0xC) + 0x8));
    *(unsigned int *)((a8 + 0x8)) = t4;
    t5 = *(int *)(((((int)stk + 4) + 0xC) + 0x4));
    *(unsigned int *)((a8 + 0x4)) = t5;
    t6 = *(int *)(((((int)stk + 4) + 0xC) + 0x0));
    *(unsigned int *)((a8 + 0x0)) = t6;
}

void FUN_8c0d17e4(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int stk[2];

    *(unsigned int *)0x8C1D175C = a4;
    *(unsigned int *)0x8C1D1760 = a5;
    t0 = *(int *)(((((int)stk + 4) + 0x4) + 0x8));
    *(unsigned int *)0x8C38BA5C = t0;
    t1 = *(int *)(((((int)stk + 4) + 0x4) + 0x4));
    *(unsigned int *)0x8C38BA58 = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    *(unsigned int *)0x8C38BA54 = t2;
}

int FUN_8c0d1854(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t11;
    int t12;
    int t13;
    int t14;
    int stk[9];

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((t0 << 2) + 0x8C287AE0) + 0x0));
        if (t1 == 0) {
            t2 = *(int *)0x8C287ADC;
            if (t2 == 2) {
                if ((int)t0 > (int)0x1) {
                    *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = 0xFFFFFFFF;
                } else {
                    t3 = *(int *)(((0xB64 + ((t0 * 0xD78) + 0x8C287D84)) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = t3;
                }
            } else {
                t6 = *(int *)(((0xB64 + ((t0 * 0xD78) + 0x8C287D84)) + 0x0));
                *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = t6;
            }
        } else {
            *(unsigned int *)((((int)stk + 4) + (t0 << 2))) = 0xFFFFFFFF;
        }
        t11 = *(int *)((((int)stk + 4) + (t0 << 2)));
        if (t11 != -1) {
            t12 = *(int *)(((t11 << 2) + 0x8C29B898));
            t13 = *(int *)((t12 + 0x0));
            if (t13 == 0) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                return 0x0;
            }
            continue;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    t14 = 0x1;
    if (t0 == 0) {
        t14 = 0x2;
    }
    return t14;
}

int FUN_8c0d2408(int a4, int a5)
{
    int t0;
    int t13;
    int t1;
    int t12;
    int t2;
    int t11;
    int t3;
    int t10;
    int t6;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;

    t0 = *(int *)0x8C421F60;
    t13 = t0;
    if (t0 == 0) {
        t1 = *(int *)0x8C38BA70;
        t12 = t1;
        if (t1 != 0) {
            t2 = *(int *)0x8C38BA74;
            t11 = t2;
            if (t2 != 0) {
                t3 = *(int *)0x8C287B44;
                t10 = t3;
                if (t3 != 7) {
                    if (a4 != 0) {
                        t6 = a4;
                        if (a4 == 1) {
                            t4 = 0x206A9;
                            if (a5 != 0) {
                                t4 = 0x806A9;
                            }
                            t5 = nlsndSeqRequest(t4);
                            t6 = t5;
                        }
                        t9 = t6;
                    } else {
                        t7 = 0x106A9;
                        if (a5 != 0) {
                            t7 = 0x706A9;
                        }
                        t8 = nlsndSeqRequest(t7);
                        t9 = t8;
                    }
                    t10 = t9;
                }
                t11 = t10;
            }
            t12 = t11;
        }
        t13 = t12;
    }
    return t13;
}

int FUN_8c0d28be(void)
{
    int t1;

    nlsndSystemControl(0x0, 0x300A0, 0x0);
    t1 = 0x0;
    do {
        *(unsigned int *)((0x8C40C288 + t1)) = 0x0;
        *(unsigned int *)((0x8C40C2A8 + t1)) = 0x0;
        t1 = (t1 + 0x4);
    } while ((unsigned int)t1 < (unsigned int)0x20);
    return t1;
}

void FUN_8c0d292c(int a4)
{
    int t0;

    t0 = 0x0;
    do {
        if (t0 != a4) {
            nlsndSystemControl(t0, 0x1300A0, 0x0);
            *(unsigned int *)((0x8C40C288 + (t0 << 2))) = 0x0;
            *(unsigned int *)((0x8C40C2A8 + (t0 << 2))) = 0x0;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
}

int FUN_8c0d297a(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)((0x8C40C288 + t0)) = 0x0;
        *(unsigned int *)((0x8C40C2A8 + t0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((unsigned int)t0 < (unsigned int)0x20);
    return t0;
}

int FUN_8c0d2b44(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C38BA70;
    if (t0 != 0) {
        t1 = *(int *)0x8C38BA74;
        if (t1 != 0) {
            t2 = *(int *)0x8C402C04;
            t3 = *(int *)(((t2 * 0x54) + 0x8C1D2B7C));
            return nlsndSeqRequest(t3);
        }
        return 0;
    }
    return 0;
}

int FUN_8c0d3206(void)
{
    int t0;
    int t4;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        FUN_8c0d6cc0();
        FUN_8c0d28be();
        nlsndSeqRequest(0x10AA9);
        t4 = *(int *)0x8C38BA64;
        return nlsndSystemControl(0x5, 0x10A0, t4);
    }
    return 0;
}

int FUN_8c0d3314(int a4)
{
    int t3;
    int t8;
    int t7;
    int t10;
    int t9;

    if (a4 == 1) {
        nlsndSeqRequest(0x803A9);
    }
    if (a4 == 2) {
        nlsndSystemControl(0x1, 0x1300A0, 0x0);
        t3 = *(int *)0x8C38BA64;
        nlsndSystemControl(0x1, 0x10A0, t3);
        nlsndSeqRequest(0x903A9);
    }
    t8 = a4;
    if (a4 == 3) {
        t7 = nlsndSeqRequest(0x203A9);
        t8 = t7;
    }
    t10 = t8;
    if (a4 == 0) {
        t9 = nlsndSeqRequest(0x303A9);
        t10 = t9;
    }
    return t10;
}

int FUN_8c0d365c(void)
{
    int t2;
    int t8;
    int t7;

    FUN_8c0d28be();
    FUN_8c0d74a8(0x2, 0x3);
    t2 = *(int *)0x8C1D2BDC;
    t8 = t2;
    if (t2 != 99) {
        if (t2 == 0) {
            nlsndPackFree();
        }
        FUN_8c0ea094(0x8C880000, 0x100000);
        FUN_8c0b5662(0x8C880000, 0x8C125C9C, 0x0);
        t7 = nlsndPackLoad(0x8C880000, 0x5);
        *(unsigned int *)0x8C38BAB0 = t7;
        *(unsigned int *)0x8C1D2BDC = 0x63;
        t8 = t7;
    }
    return t8;
}

void FUN_8c0d5600(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    do {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)(((((t0 << 2) << 2) + 0x8C1D2BE8) + 0xC));
            if ((int)t1 >= (int)t2) break;
            FUN_8c0d5344((((((t1 << 2) + t1) << 2) << 2) + ((t0 * 0x960) + 0x8C407FDC)), t1, t0);
            t1 = (t1 + 0x1);
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x7);
}

int FUN_8c0d677a(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0d6746(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
    return t1;
}

int FUN_8c0d684c(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = FUN_8c0d6818(t0);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
    return t1;
}

int FUN_8c0d6868(void)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C1D3758;
    if (t0 != 1) {
        *(unsigned int *)0x8C1D3758 = 0x1;
        FUN_8c0ea2a0(0x0);
        t2 = *(int *)0x8C125E04;
        return FUN_8c0f3dc0();
    }
    return t0;
}

int FUN_8c0d6890(void)
{
    int t0;
    int t2;

    t0 = *(int *)0x8C1D3758;
    if (t0 != 0) {
        *(unsigned int *)0x8C1D3758 = 0x0;
        FUN_8c0ea2a0(0x0);
        t2 = *(int *)0x8C125E04;
        return nlSpriteFreeTextureOnce();
    }
    return 0;
}

int FUN_8c0d68b8(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[4];

    t0 = *(int *)0x8C125E68;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t0;
    t1 = *(int *)0x8C125E64;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t1;
    t2 = *(int *)0x8C1891E8;
    if (t2 == 7) {
        t3 = *(int *)((((int)stk + 4) + 0x4));
        *(unsigned int *)0xCB40130 = t3;
        t5 = t3;
    } else {
        t4 = *(int *)((((int)stk + 4) + 0x0));
        *(unsigned int *)0xCB40130 = t4;
        t5 = t2;
    }
    return t5;
}

void FUN_8c0d6a30(void)
{
    int t0;
    int t1;

    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C220 = 0x0;
    *(float *)0x8C40C238 = 0.0f;
    *(float *)0x8C40C234 = 0.0f;
    *(float *)0x8C40C228 = 0.0f;
    *(float *)0x8C40C224 = 0.0f;
    *(unsigned int *)0x8C40C22C = 0x0;
    t0 = 0x0;
    do {
        t1 = (0x8C40C240 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x24);
}

int FUN_8c0d6c12(int a4)
{
    int t6;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t6 = a4;
    if (a4 != -1) {
        t0 = *(int *)0x8C40C230;
        if (t0 != 3) {
            *(unsigned int *)0x8C40C230 = 0x3;
            *(unsigned int *)0x8C40C23C = 0xFFFFFFFF;
            *(unsigned int *)0x8C40C240 = a4;
            t4 = t0;
        } else {
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)((t1 + 0x8C40C240));
                if (t3 == -1) break;
                t1 = (t1 + 0x4);
                t2 = (t2 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x20) {
                    return t3;
                }
            }
            *(unsigned int *)(((t2 + 0x8C40C240) + 0x0)) = a4;
            t4 = t3;
        }
        t6 = t4;
    }
    return t6;
}

int FUN_8c0d6ca0(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = (0x8C40C240 + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    } while ((unsigned int)t0 < (unsigned int)0x24);
    *(unsigned int *)0x8C40C230 = 0x0;
    *(unsigned int *)0x8C40C23C = 0x0;
    return FUN_8c0d7e98();
}

void FUN_8c0d6cde(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C38BA60;
    if ((int)a4 > (int)t0) {
        *(unsigned int *)0x8C40C220 = 0x5;
        *(unsigned int *)0x8C40C268 = a4;
    }
    t1 = *(int *)0x8C38BA60;
    if ((int)a4 < (int)t1) {
        *(unsigned int *)0x8C40C220 = 0x4;
        *(unsigned int *)0x8C40C268 = a4;
    }
}

int FUN_8c0d75da(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1891E8;
    t1 = *(int *)(((t0 << 2) + 0x8C1D48C0));
    return FUN_8c0d6f40(t1);
}

int FUN_8c0d7a9c(int a4)
{
    int t0;
    int t1;
    int t2;

    if ((int)a4 >= (int)0x1) {
        if ((int)a4 <= (int)0x2) {
            t0 = *(int *)0x8C1891E8;
            t1 = *(int *)((0x8C1D4770 + (t0 << 2)));
            t2 = *(int *)(((((a4 - 1) << 2) + (0x8C1D4A44 + ((t1 << 2) << 1))) + 0x0));
            if (t2 != -1) {
                return FUN_8c0d6e16(0x9, t2);
            }
            return t2;
        }
        return 0;
    }
    return 0;
}

int FUN_8c0d7ad2(void)
{
    int t0;
    int t1;
    int t2;
    int t10;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t7;

    t0 = *(int *)0x8C1891E8;
    t1 = *(int *)(((t0 << 2) + 0x8C1D4770));
    t2 = *(int *)(((t1 << 2) + 0x8C1D4A5C));
    t10 = t2;
    if (t2 != -1) {
        t3 = *(int *)0x8C38BA98;
        t4 = ADXT_GetStat(t3);
        if (t4 != 5) {
            if (t4 == 0) {
                t5 = FUN_8c0d6e16(0x9, t2);
                t7 = t5;
            } else {
                t6 = FUN_8c0d6c12(t2);
                t7 = t6;
            }
            t9 = t7;
        } else {
            t8 = FUN_8c0d6e16(0x9, t2);
            t9 = t8;
        }
        *(unsigned int *)0x8C1D4A40 = 0x0;
        t10 = t9;
    }
    return t10;
}

int FUN_8c0d7b34(void)
{
    int t0;
    int t171;
    int t1;
    int t170;
    int t2;
    int t169;
    int t3;
    int t4;
    int t86;
    int t5;
    int t84;
    int t81;
    int t6;
    int t78;
    int t7;
    int t8;
    int t9;
    int t10;
    int t29;
    int t11;
    int t26;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t22;
    int t23;
    int t32;
    int t47;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t39;
    int t40;
    int t43;
    int t44;
    int t53;
    int t72;
    int t54;
    int t69;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t61;
    int t62;
    int t65;
    int t66;
    int t87;
    int t166;
    int t163;
    int t88;
    int t160;
    int t89;
    int t90;
    int t91;
    int t92;
    int t111;
    int t93;
    int t108;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t100;
    int t101;
    int t104;
    int t105;
    int t114;
    int t129;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t121;
    int t122;
    int t125;
    int t126;
    int t135;
    int t154;
    int t136;
    int t151;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t143;
    int t144;
    int t147;
    int t148;
    int t168;
    int t75;
    int t50;
    int t157;
    int t132;

    *(unsigned int *)0x8C1D476C = 0x0;
    t0 = *(int *)0x8C38BA70;
    t171 = 0x8C1D476C;
    if (t0 != 0) {
        t1 = *(int *)0x8C38BA74;
        t170 = 0x8C1D476C;
        if (t1 != 0) {
            t2 = *(int *)0x8C421F60;
            t169 = 0x8C1D476C;
            if (t2 == 0) {
                t3 = *(int *)0x8C20D14C;
                if (t3 == 6) {
                    t4 = *(int *)0x8C287D5C;
                    t86 = t4;
                    if (t4 != 3) {
                        t5 = FUN_8c01a5d6();
                        t84 = t5;
                        if ((int)t5 >= 0) {
                            t81 = t5;
                            if ((int)t5 < (int)0x4) {
                                t6 = *(int *)(((t5 << 2) + 0x8C38BA84));
                                t78 = 0x8C38BA84;
                                if (t6 == 0) {
                                    t7 = *(int *)0x8C287B00;
                                    t8 = *(int *)0x8C287C64;
                                    if (t7 != t8) {
                                        t9 = *(int *)0x8C287B04;
                                        if (t9 == t8) {
                                            t10 = *(int *)0x8C287B3C;
                                            t29 = 0x70;
                                            if ((t10 & 0x4000) != 0) {
                                                t11 = *(int *)(((t5 * 0xD78) + 0x8C2889DC));
                                                t26 = 0x8C2889DC;
                                                if ((int)t11 <= (int)0x11) {
                                                    t12 = *(int *)0x8C38BA98;
                                                    t13 = ADXT_GetStat(t12);
                                                    t14 = *(int *)0x8C1891E8;
                                                    if (t13 != 5) {
                                                        if (t13 == 0) {
                                                            t15 = *(int *)((((t14 << 2) + 0x8C1D4770) + 0x0));
                                                            t16 = *(int *)(((t11 << 2) + ((((((t15 << 2) << 1) + t15) << 2) << 1) + 0x8C1D4A68)));
                                                            FUN_8c0d6e16(0x9, t16);
                                                        } else {
                                                            t18 = *(int *)((((t14 << 2) + 0x8C1D4770) + 0x0));
                                                            t19 = *(int *)(((t11 << 2) + ((((((t18 << 2) << 1) + t18) << 2) << 1) + 0x8C1D4A68)));
                                                            FUN_8c0d6c12(t19);
                                                        }
                                                    } else {
                                                        t22 = *(int *)((((t14 << 2) + 0x8C1D4770) + 0x0));
                                                        t23 = *(int *)(((t11 << 2) + ((((((t22 << 2) << 1) + t22) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6e16(0x9, t23);
                                                    }
                                                    *(unsigned int *)(((t5 << 2) + 0x8C38BA84)) = 0x1;
                                                    t26 = 0x8C38BA84;
                                                }
                                                t29 = t26;
                                            }
                                            t50 = t29;
                                        } else {
                                            t32 = *(int *)(((t5 * 0xD78) + 0x8C2889DC));
                                            t47 = 0x8C2889DC;
                                            if ((int)t32 <= (int)0x11) {
                                                t33 = *(int *)0x8C38BA98;
                                                t34 = ADXT_GetStat(t33);
                                                t35 = *(int *)0x8C1891E8;
                                                if (t34 != 5) {
                                                    if (t34 == 0) {
                                                        t36 = *(int *)((((t35 << 2) + 0x8C1D4770) + 0x0));
                                                        t37 = *(int *)(((t32 << 2) + ((((((t36 << 2) << 1) + t36) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6e16(0x9, t37);
                                                    } else {
                                                        t39 = *(int *)((((t35 << 2) + 0x8C1D4770) + 0x0));
                                                        t40 = *(int *)(((t32 << 2) + ((((((t39 << 2) << 1) + t39) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6c12(t40);
                                                    }
                                                } else {
                                                    t43 = *(int *)((((t35 << 2) + 0x8C1D4770) + 0x0));
                                                    t44 = *(int *)(((t32 << 2) + ((((((t43 << 2) << 1) + t43) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6e16(0x9, t44);
                                                }
                                                *(unsigned int *)(((t5 << 2) + 0x8C38BA84)) = 0x1;
                                                t47 = 0x8C38BA84;
                                            }
                                            t50 = t47;
                                        }
                                        t75 = t50;
                                    } else {
                                        t53 = *(int *)0x8C287B3C;
                                        t72 = 0x70;
                                        if ((t53 & 0x4000) != 0) {
                                            t54 = *(int *)(((t5 * 0xD78) + 0x8C2889DC));
                                            t69 = 0x8C2889DC;
                                            if ((int)t54 <= (int)0x11) {
                                                t55 = *(int *)0x8C38BA98;
                                                t56 = ADXT_GetStat(t55);
                                                t57 = *(int *)0x8C1891E8;
                                                if (t56 != 5) {
                                                    if (t56 == 0) {
                                                        t58 = *(int *)((((t57 << 2) + 0x8C1D4770) + 0x0));
                                                        t59 = *(int *)(((t54 << 2) + ((((((t58 << 2) << 1) + t58) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6e16(0x9, t59);
                                                    } else {
                                                        t61 = *(int *)((((t57 << 2) + 0x8C1D4770) + 0x0));
                                                        t62 = *(int *)(((t54 << 2) + ((((((t61 << 2) << 1) + t61) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6c12(t62);
                                                    }
                                                } else {
                                                    t65 = *(int *)((((t57 << 2) + 0x8C1D4770) + 0x0));
                                                    t66 = *(int *)(((t54 << 2) + ((((((t65 << 2) << 1) + t65) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6e16(0x9, t66);
                                                }
                                                *(unsigned int *)(((t5 << 2) + 0x8C38BA84)) = 0x1;
                                                t69 = 0x8C38BA84;
                                            }
                                            t72 = t69;
                                        }
                                        t75 = t72;
                                    }
                                    t78 = t75;
                                }
                                t81 = t78;
                            }
                            t84 = t81;
                        }
                        t86 = t84;
                    }
                    t168 = t86;
                } else {
                    t87 = FUN_8c01a5d6();
                    t166 = t87;
                    if ((int)t87 >= 0) {
                        t163 = t87;
                        if ((int)t87 < (int)0x4) {
                            t88 = *(int *)(((t87 << 2) + 0x8C38BA84));
                            t160 = 0x8C38BA84;
                            if (t88 == 0) {
                                t89 = *(int *)0x8C287B00;
                                t90 = *(int *)0x8C287C64;
                                if (t89 != t90) {
                                    t91 = *(int *)0x8C287B04;
                                    if (t91 == t90) {
                                        t92 = *(int *)0x8C287B3C;
                                        t111 = 0x70;
                                        if ((t92 & 0x4000) != 0) {
                                            t93 = *(int *)(((t87 * 0xD78) + 0x8C2889DC));
                                            t108 = 0x8C2889DC;
                                            if ((int)t93 <= (int)0x11) {
                                                t94 = *(int *)0x8C38BA98;
                                                t95 = ADXT_GetStat(t94);
                                                t96 = *(int *)0x8C1891E8;
                                                if (t95 != 5) {
                                                    if (t95 == 0) {
                                                        t97 = *(int *)((((t96 << 2) + 0x8C1D4770) + 0x0));
                                                        t98 = *(int *)(((t93 << 2) + ((((((t97 << 2) << 1) + t97) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6e16(0x9, t98);
                                                    } else {
                                                        t100 = *(int *)((((t96 << 2) + 0x8C1D4770) + 0x0));
                                                        t101 = *(int *)(((t93 << 2) + ((((((t100 << 2) << 1) + t100) << 2) << 1) + 0x8C1D4A68)));
                                                        FUN_8c0d6c12(t101);
                                                    }
                                                } else {
                                                    t104 = *(int *)((((t96 << 2) + 0x8C1D4770) + 0x0));
                                                    t105 = *(int *)(((t93 << 2) + ((((((t104 << 2) << 1) + t104) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6e16(0x9, t105);
                                                }
                                                *(unsigned int *)(((t87 << 2) + 0x8C38BA84)) = 0x1;
                                                t108 = 0x8C38BA84;
                                            }
                                            t111 = t108;
                                        }
                                        t132 = t111;
                                    } else {
                                        t114 = *(int *)(((t87 * 0xD78) + 0x8C2889DC));
                                        t129 = 0x8C2889DC;
                                        if ((int)t114 <= (int)0x11) {
                                            t115 = *(int *)0x8C38BA98;
                                            t116 = ADXT_GetStat(t115);
                                            t117 = *(int *)0x8C1891E8;
                                            if (t116 != 5) {
                                                if (t116 == 0) {
                                                    t118 = *(int *)((((t117 << 2) + 0x8C1D4770) + 0x0));
                                                    t119 = *(int *)(((t114 << 2) + ((((((t118 << 2) << 1) + t118) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6e16(0x9, t119);
                                                } else {
                                                    t121 = *(int *)((((t117 << 2) + 0x8C1D4770) + 0x0));
                                                    t122 = *(int *)(((t114 << 2) + ((((((t121 << 2) << 1) + t121) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6c12(t122);
                                                }
                                            } else {
                                                t125 = *(int *)((((t117 << 2) + 0x8C1D4770) + 0x0));
                                                t126 = *(int *)(((t114 << 2) + ((((((t125 << 2) << 1) + t125) << 2) << 1) + 0x8C1D4A68)));
                                                FUN_8c0d6e16(0x9, t126);
                                            }
                                            *(unsigned int *)(((t87 << 2) + 0x8C38BA84)) = 0x1;
                                            t129 = 0x8C38BA84;
                                        }
                                        t132 = t129;
                                    }
                                    t157 = t132;
                                } else {
                                    t135 = *(int *)0x8C287B3C;
                                    t154 = 0x70;
                                    if ((t135 & 0x4000) != 0) {
                                        t136 = *(int *)(((t87 * 0xD78) + 0x8C2889DC));
                                        t151 = 0x8C2889DC;
                                        if ((int)t136 <= (int)0x11) {
                                            t137 = *(int *)0x8C38BA98;
                                            t138 = ADXT_GetStat(t137);
                                            t139 = *(int *)0x8C1891E8;
                                            if (t138 != 5) {
                                                if (t138 == 0) {
                                                    t140 = *(int *)((((t139 << 2) + 0x8C1D4770) + 0x0));
                                                    t141 = *(int *)(((t136 << 2) + ((((((t140 << 2) << 1) + t140) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6e16(0x9, t141);
                                                } else {
                                                    t143 = *(int *)((((t139 << 2) + 0x8C1D4770) + 0x0));
                                                    t144 = *(int *)(((t136 << 2) + ((((((t143 << 2) << 1) + t143) << 2) << 1) + 0x8C1D4A68)));
                                                    FUN_8c0d6c12(t144);
                                                }
                                            } else {
                                                t147 = *(int *)((((t139 << 2) + 0x8C1D4770) + 0x0));
                                                t148 = *(int *)(((t136 << 2) + ((((((t147 << 2) << 1) + t147) << 2) << 1) + 0x8C1D4A68)));
                                                FUN_8c0d6e16(0x9, t148);
                                            }
                                            *(unsigned int *)(((t87 << 2) + 0x8C38BA84)) = 0x1;
                                            t151 = 0x8C38BA84;
                                        }
                                        t154 = t151;
                                    }
                                    t157 = t154;
                                }
                                t160 = t157;
                            }
                            t163 = t160;
                        }
                        t166 = t163;
                    }
                    t168 = t166;
                }
                t169 = t168;
            }
            t170 = t169;
        }
        t171 = t170;
    }
    return t171;
}

int FUN_8c0d7f96(void)
{
    int t0;

    t0 = *(int *)0x8C40C28C;
    if (t0 != 1) {
        return FUN_8c0d9682(0x1, 0x5A, 0x0);
    }
    return t0;
}

void FUN_8c0d9298(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    float u11;
    int t12;
    int t17;
    int t19;
    int t22;
    int t23;
    int t24;
    int t25;
    float u26;
    int t27;

    if ((int)a4 >= (int)0x96) {
        t0 = *(int *)0x8C20D14C;
        if (t0 == 6) {
            t1 = *(int *)0x8C287D5C;
            if (t1 != 3) {
                t2 = *(int *)0x8C40C28C;
                if (t2 == 1) {
                    FUN_8c0d3308();
                    t4 = *(int *)0x8C38BA64;
                    nlsndSystemControl(0x1, 0x10A0, t4);
                }
                t7 = set_event(0x20, 0x8C0D9072);
                *(unsigned int *)0x8C40C278 = t7;
                *(unsigned int *)0x8C40C280 = 0x1;
                t8 = *(int *)0x8C287AFC;
                t9 = *(int *)0x8C40C278;
                *(unsigned int *)((t9 + 0x14)) = t8;
                t10 = *(int *)0x8C40C278;
                u11 = *(float *)0x8C23D204;
                *(unsigned int *)((t10 + 0x18)) = (int)((float)a4 / u11);
                t12 = *(int *)0x8C40C278;
                *(unsigned int *)((t12 + 0x1C)) = a4;
            }
        } else {
            t17 = *(int *)0x8C40C28C;
            if (t17 == 1) {
                FUN_8c0d3308();
                t19 = *(int *)0x8C38BA64;
                nlsndSystemControl(0x1, 0x10A0, t19);
            }
            t22 = set_event(0x20, 0x8C0D9072);
            *(unsigned int *)0x8C40C278 = t22;
            *(unsigned int *)0x8C40C280 = 0x1;
            t23 = *(int *)0x8C287AFC;
            t24 = *(int *)0x8C40C278;
            *(unsigned int *)((t24 + 0x14)) = t23;
            t25 = *(int *)0x8C40C278;
            u26 = *(float *)0x8C23D204;
            *(unsigned int *)((t25 + 0x18)) = (int)((float)a4 / u26);
            t27 = *(int *)0x8C40C278;
            *(unsigned int *)((t27 + 0x1C)) = a4;
        }
    }
}

int FUN_8c0d948a(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    float u1;

    t0 = set_event(0x28, 0x8C0D9420);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((float)a4 / u1);
    *(unsigned int *)((t0 + 0x18)) = a6;
    *(unsigned int *)((t0 + 0x14)) = a5;
    *(unsigned int *)((t0 + 0x20)) = a8;
    *(unsigned int *)((t0 + 0x24)) = a7;
    return t0;
}

int FUN_8c0d9532(int a4, int a5)
{
    int t0;
    float u1;

    t0 = set_event(0x20, 0x8C0D9504);
    u1 = *(float *)0x8C23D204;
    *(unsigned int *)((t0 + 0x1C)) = (int)((float)a4 / u1);
    *(unsigned int *)((t0 + 0x18)) = a5;
    return t0;
}

int FUN_8c0d98c6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = FUN_8c01a5d6();
    t1 = *(int *)0x8C185410;
    if (t1 == 0) {
        if ((int)t0 >= 0) {
            if ((int)t0 < (int)0x4) {
                t2 = *(int *)((0x8C38BA84 + (t0 << 2)));
                if (t2 == 0) {
                    t3 = *(int *)((a4 + 0x14));
                    *(unsigned int *)((a4 + 0x14)) = (t3 - 1);
                    if ((int)(t3 - 1) <= 0) {
                        FUN_8c0d7b34();
                        *(unsigned int *)0x8C1D476C = 0x0;
                        return FUN_8c010afa(a4);
                    }
                    return (t0 << 2);
                }
                *(unsigned int *)0x8C1D476C = 0x0;
                return FUN_8c010afa(a4);
            }
            *(unsigned int *)0x8C1D476C = 0x0;
            return FUN_8c010afa(a4);
        }
        *(unsigned int *)0x8C1D476C = 0x0;
        return FUN_8c010afa(a4);
    }
    *(unsigned int *)0x8C1D476C = 0x0;
    return FUN_8c010afa(a4);
}

void FUN_8c0d991a(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u8;

    t0 = *(int *)0x8C421F60;
    if (t0 == 0) {
        t1 = *(int *)0x8C1D1274;
        if (t1 == 0) {
            t2 = *(int *)0x8C287B00;
            t3 = *(int *)0x8C287C64;
            if (t2 != t3) {
                t4 = *(int *)0x8C287B04;
                if (t4 != t3) {
                    t5 = *(int *)0x8C287B10;
                    if (t5 == 0) {
                        t6 = *(int *)0x8C287B14;
                        if (t6 == 0) {
                            t7 = FUN_8c010976(0x18, 0x8C0D98C6);
                            u8 = *(float *)0x8C23D204;
                            *(unsigned int *)((t7 + 0x14)) = (int)((float)a4 / u8);
                        }
                    }
                }
            }
        }
    }
}

void FUN_8c0da18e(float f4)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C1D565C;
    if (t0 == 0) {
        *(unsigned int *)0x8C1D565C = 0x1;
        t1 = set_event(0x1C, 0x8C0DA11C);
        *(unsigned int *)((t1 + 0x14)) = 0x5;
        *(float *)((t1 + 0x18)) = f4;
    }
}

int FUN_8c0da8fc(int a4, int a5, int a6, float f4)
{
    int t16;
    int t13;
    int t0;
    int t9;
    int t1;
    float u3;
    int t4;
    int t5;
    int t6;
    int t18;
    int t27;
    int t19;
    float u21;
    int t22;
    int t23;
    int t24;
    int t31;

    if (a4 == 0) {
        t16 = 0x0;
        if ((int)a5 >= (int)0x15) {
            t13 = 0x0;
            if ((int)a5 < (int)0x20) {
                t0 = *(int *)0x8C40C308;
                t9 = 0x0;
                if (((((int)(a5 - 1) >= 0) ? (0x1 << ((a5 - 1) & 31)) : ((-(int)(a5 - 1) & 31) ? ((int)0x1 >> (-(int)(a5 - 1) & 31)) : ((int)0x1 >> 31))) & t0) == 0) {
                    t1 = set_event(0x28, 0x8C0DA8AA);
                    FUN_8c0d129c(0x2, 0x0, 0.0f);
                    *(unsigned int *)((t1 + 0x14)) = a4;
                    *(float *)((t1 + 0x18)) = f4;
                    *(unsigned int *)((t1 + 0x1C)) = a5;
                    u3 = *(float *)0x8C23D204;
                    *(unsigned int *)((t1 + 0x24)) = (int)((float)a6 / u3);
                    *(unsigned int *)((t1 + 0x20)) = (int)((float)a6 / u3);
                    t4 = *(int *)((t1 + 0x14));
                    if (t4 == 0) {
                        t5 = *(int *)((t1 + 0x1C));
                        t6 = *(int *)0x8C40C308;
                        *(unsigned int *)0x8C40C308 = ((((int)(t5 - 1) >= 0) ? (0x1 << ((t5 - 1) & 31)) : ((-(int)(t5 - 1) & 31) ? ((int)0x1 >> (-(int)(t5 - 1) & 31)) : ((int)0x1 >> 31))) | t6);
                    }
                    t9 = 0x1;
                }
                t13 = t9;
            }
            t16 = t13;
        }
        t31 = t16;
    } else {
        t18 = *(int *)0x8C40C308;
        t27 = 0x0;
        if (((((int)(a5 - 1) >= 0) ? (0x1 << ((a5 - 1) & 31)) : ((-(int)(a5 - 1) & 31) ? ((int)0x1 >> (-(int)(a5 - 1) & 31)) : ((int)0x1 >> 31))) & t18) == 0) {
            t19 = set_event(0x28, 0x8C0DA8AA);
            FUN_8c0d129c(0x2, 0x0, 0.0f);
            *(unsigned int *)((t19 + 0x14)) = a4;
            *(float *)((t19 + 0x18)) = f4;
            *(unsigned int *)((t19 + 0x1C)) = a5;
            u21 = *(float *)0x8C23D204;
            *(unsigned int *)((t19 + 0x24)) = (int)((float)a6 / u21);
            *(unsigned int *)((t19 + 0x20)) = (int)((float)a6 / u21);
            t22 = *(int *)((t19 + 0x14));
            if (t22 == 0) {
                t23 = *(int *)((t19 + 0x1C));
                t24 = *(int *)0x8C40C308;
                *(unsigned int *)0x8C40C308 = ((((int)(t23 - 1) >= 0) ? (0x1 << ((t23 - 1) & 31)) : ((-(int)(t23 - 1) & 31) ? ((int)0x1 >> (-(int)(t23 - 1) & 31)) : ((int)0x1 >> 31))) | t24);
            }
            t27 = 0x1;
        }
        t31 = t27;
    }
    return t31;
}

int FUN_8c0dee2c(int a4, float f4)
{
    int t1;
    int t2;
    int t5;
    int stk[27];

    FUN_8c0f7cf0();
    t1 = 0x0;
    do {
        t2 = *(int *)((a4 + (t1 << 2)));
        *(unsigned int *)(((((t1 << 2) << 2) + ((int)stk + 4)) + 0xC)) = t2;
        if (t1 != 2) {
            if (t1 == 3) {
                *(float *)(((((t1 << 2) << 2) + ((int)stk + 4)) + 0x0)) = f4;
            }
        } else {
            *(float *)(((((t1 << 2) << 2) + ((int)stk + 4)) + 0x0)) = f4;
        }
        t1 = (t1 + 0x1);
    } while ((int)t1 < (int)0x6);
    t5 = FUN_8c0f70a0(0x6);
    return t5;
}

int FUN_8c0df458(int a4)
{
    int t0;
    int t1;
    int t11;
    int t2;
    int t3;
    int t9;
    int t4;
    int t5;
    int stk[29];

    t0 = buGetFileSize(a4, 0x8C126AB0);
    *(unsigned int *)(((int)stk + 4)) = t0;
    t1 = buLoadFile(a4, 0x8C126AB0, 0x8C41BE14, t0);
    t11 = t1;
    if (t1 == 0) {
        do {
            t2 = buStat();
        } while (t2 == -1);
        t3 = buGetLastError();
        t9 = t3;
        if (t3 == 0) {
            t4 = buAnalyzeBackupFileImage((((int)stk + 4) + 0x4), 0x8C41BE14);
            if (t4 == 0) {
                t5 = *(int *)(((int)stk + 96));
                memmove(0x8C40C2F4, t5, 0x128);
            }
            t9 = t4;
        }
        t11 = t9;
    }
    return t11;
}

int FUN_8c0df92a(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 2) {
        t1 = *(int *)0x8C2FBE28;
        return t1;
    }
    if (t0 != 1) {
        return FUN_8c0df91e();
    }
    return FUN_8c0df924();
}

void FUN_8c0df948(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C287D5C;
    if (t0 == 0) {
        t1 = *(signed char *)0x8C40C2F6;
        if (((unsigned char)t1 + 0x1) != 7) {
            return;
        }
        return;
    }
    t2 = *(signed char *)0x8C40C2F7;
    if (((unsigned char)t2 + 0x1) == 7) {
        return;
    }
}

int FUN_8c0e0518(void)
{
    int t0;
    int t1;
    int t2;
    int t19;
    int t17;
    int t15;
    int t13;
    int t11;
    int t6;
    int t7;
    int t8;
    int t10;
    int t9;
    int t32;
    int t30;
    int t28;
    int t26;
    int t21;
    int t22;
    int t23;
    int t25;
    int t24;
    int t34;

    *(unsigned int *)0x8C40C628 = 0x0;
    t0 = buGetDiskInfo(0x0, 0x8C40C6C4);
    t1 = *(int *)0x8C1D78B0;
    if (t0 != t1) {
        t2 = *(int *)0x8C1D78B4;
        *(unsigned int *)0x8C1D78B4 = (t2 + 0x1);
        t19 = 0xFFFFFFFD;
        if ((int)(t2 + 0x1) > (int)0x5) {
            if ((int)t0 >= 0) {
                FUN_8c0e0710(0x0, 0x8C126AB0, 0x8C40C2F4, 0x128);
            }
            *(unsigned int *)0x8C1D78B0 = t0;
            *(unsigned int *)0x8C1D78B4 = 0x0;
            FUN_8c0e8f3c(0x0);
            t17 = 0xFFFFFFFE;
            if (t0 != 0xFFFFFF03) {
                t15 = 0xFFFFFFFE;
                if (t0 != 0xFFFFFF01) {
                    t13 = 0xFFFFFFFD;
                    if (t0 != -1) {
                        t11 = t0;
                        if (t0 == 0) {
                            t6 = thunk_FUN_8c1e0150();
                            t7 = 0x0;
                            if (t6 == 0) {
                                t7 = 0x1;
                            }
                            t8 = *(short *)0x8C40C6EA;
                            t10 = 0x0;
                            if (t7 == 0) {
                                t9 = 0xFFFFFFFC;
                                if ((int)(unsigned short)t8 >= (int)0x2) {
                                    t9 = 0x1;
                                }
                                t10 = t9;
                            }
                            t11 = t10;
                        }
                        t13 = t11;
                    }
                    t15 = t13;
                }
                t17 = t15;
            }
            t19 = t17;
        }
        t34 = t19;
    } else {
        *(unsigned int *)0x8C1D78B4 = 0x0;
        t32 = 0xFFFFFFFE;
        if (t0 != 0xFFFFFF03) {
            t30 = 0xFFFFFFFE;
            if (t0 != 0xFFFFFF01) {
                t28 = 0xFFFFFFFD;
                if (t0 != -1) {
                    t26 = t0;
                    if (t0 == 0) {
                        t21 = thunk_FUN_8c1e0150();
                        t22 = 0x0;
                        if (t21 == 0) {
                            t22 = 0x1;
                        }
                        t23 = *(short *)0x8C40C6EA;
                        t25 = 0x0;
                        if (t22 == 0) {
                            t24 = 0xFFFFFFFC;
                            if ((int)(unsigned short)t23 >= (int)0x2) {
                                t24 = 0x1;
                            }
                            t25 = t24;
                        }
                        t26 = t25;
                    }
                    t28 = t26;
                }
                t30 = t28;
            }
            t32 = t30;
        }
        t34 = t32;
    }
    return t34;
}

int FUN_8c0e0710(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = thunk_FUN_8c1e0150();
    if (t0 == 0) {
        t1 = *(int *)0x8C40C6A4;
        if (t1 == 0) {
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0x0));
                if (t3 == 0) break;
                t2 = (t2 + 0x1);
            }
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0x0)) = 0x2;
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0x4)) = a4;
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0x8)) = a5;
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0xC)) = a6;
            *(unsigned int *)((((((t2 << 2) + t2) << 2) + 0x8C40C634) + 0x10)) = a7;
            return FUN_8c02f59e(0xB);
        }
        return t0;
    }
    return t0;
}

void FUN_8c0e0786(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t3;
    int t4;

    FUN_8c0e0876();
    t1 = *(int *)0x8C40C698;
    if (t1 != 0) {
        t2 = *(int *)0x8C40C6A4;
        if (t2 == 0) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x0));
                if (t4 == 0) break;
                t3 = (t3 + 0x1);
            }
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x0)) = 0x1;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x4)) = a4;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x8)) = a5;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0xC)) = a6;
            *(unsigned int *)((((((t3 << 2) + t3) << 2) + 0x8C40C634) + 0x10)) = a7;
            FUN_8c02f59e(0xC);
        }
    }
}

void FUN_8c0e40e6(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1D824C;
    if (t0 == 0) {
        *(unsigned int *)0x8C1D824C = 0x1;
        FUN_8c0ea2a0(0x0);
        t2 = 0x0;
        t3 = 0x8C1D7900;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            FUN_8c0f3dc0();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0xA);
    }
}

void FUN_8c0e41fc(int a4, int a5, int a6, int a7)
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

    t0 = a4;
    t1 = a5;
    t2 = 0x3;
    t3 = a7;
    for (;;) {
        t4 = (t2 == 0);
        t2 = (t2 - 1);
        if (!t4) {
            t5 = *(signed char *)((t1 + 0x0));
            if (t5 == 0) break;
            t6 = *(signed char *)((t1 + 0x0));
            t3 = t6;
            if (t6 != 95) {
                t7 = *(signed char *)((t0 + 0x0));
                if (t7 == t3) {
                    t1 = (t1 + 0x1);
                    t0 = (t0 + 0x1);
                    continue;
                }
                return;
            }
            t1 = (t1 + 0x1);
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    if ((int)t2 >= 0) {
        t8 = *(signed char *)((t1 + 0x0));
        t9 = *(signed char *)((t0 + 0x0));
        if (t9 != t8) {
            return;
        }
        return;
    }
}

void FUN_8c0e4234(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = a4;
    t1 = a5;
    t2 = 0x3;
    for (;;) {
        t3 = (t2 == 0);
        t2 = (t2 - 1);
        if (!t3) {
            t4 = *(signed char *)((t1 + 0x0));
            if (t4 == 0) break;
            t5 = *(signed char *)((t1 + 0x0));
            t1 = (t1 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = t5;
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    if ((int)t2 >= 0) {
        *(unsigned char *)((t0 + 0x0)) = 0x0;
    }
}

int FUN_8c0e628c(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C422044;
    if (t0 == 0) {
        *(unsigned int *)0x8C422044 = 0x1;
        FUN_8c0ea2a0(0x0);
        t2 = 0x0;
        t3 = 0x8C1D8250;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            FUN_8c0f3dc0();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0xA);
        return FUN_8c0c6e18();
    }
    return 0;
}

void FUN_8c0e6324(void)
{
    int t0;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C422044;
    if (t0 != 0) {
        FUN_8c0ea2a0(0x0);
        t2 = 0x0;
        t3 = 0x8C1D8250;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            nlSpriteSetGarbagedTextureOnce();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0xA);
    }
}

int FUN_8c0e7440(int a4, int a5)
{
    int t4;
    int t0;
    int t1;

    t4 = 0x1;
    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = 0x1;
        do {
            t0 = (t0 + 0x1);
            t1 = (t1 * a4);
        } while ((int)t0 < (int)a5);
        t4 = t1;
    }
    return t4;
}

int FUN_8c0e84c0(int a4, float f4)
{
    int t4;
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t24;
    int t19;
    int t14;
    int t9;
    int stk[9];

    if (a4 != 1) {
        if (a4 != 6) {
            if (a4 != 2) {
                if (a4 != 0) {
                    if (a4 != 4) {
                        t4 = a4;
                        if (a4 == 5) {
                            t0 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                            *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
                            t1 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                            *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
                            t2 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                            *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
                            t3 = FUN_8c0de088(0x8C1DAA64, 0x1, 0x0, 1.0f, 1.0f, f4);
                            t4 = t3;
                        }
                        t9 = t4;
                    } else {
                        t5 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                        *(unsigned int *)((((int)stk + 4) + 0x8)) = t5;
                        t6 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                        *(unsigned int *)((((int)stk + 4) + 0x4)) = t6;
                        t7 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                        *(unsigned int *)((((int)stk + 4) + 0x0)) = t7;
                        t8 = FUN_8c0de088(0x8C1DA9F8, 0x1, 0x0, 1.0f, 1.0f, f4);
                        t9 = t8;
                    }
                    t14 = t9;
                } else {
                    t10 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                    *(unsigned int *)((((int)stk + 4) + 0x8)) = t10;
                    t11 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                    *(unsigned int *)((((int)stk + 4) + 0x4)) = t11;
                    t12 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                    *(unsigned int *)((((int)stk + 4) + 0x0)) = t12;
                    t13 = FUN_8c0de088(0x8C1DA98C, 0x1, 0x0, 1.0f, 1.0f, f4);
                    t14 = t13;
                }
                t19 = t14;
            } else {
                t15 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
                *(unsigned int *)((((int)stk + 4) + 0x8)) = t15;
                t16 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
                *(unsigned int *)((((int)stk + 4) + 0x4)) = t16;
                t17 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
                *(unsigned int *)((((int)stk + 4) + 0x0)) = t17;
                t18 = FUN_8c0de088(0x8C1DAAD0, 0x1, 0x0, 1.0f, 1.0f, f4);
                t19 = t18;
            }
            t24 = t19;
        } else {
            t20 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t20;
            t21 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t21;
            t22 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t22;
            t23 = FUN_8c0de088(0x8C1DA920, 0x1, 0x0, 1.0f, 1.0f, f4);
            t24 = t23;
        }
        t29 = t24;
    } else {
        t25 = *(int *)(((((int)stk + 16) + 0x14) + 0x8));
        *(unsigned int *)((((int)stk + 4) + 0x8)) = t25;
        t26 = *(int *)(((((int)stk + 16) + 0x14) + 0x4));
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t26;
        t27 = *(int *)(((((int)stk + 16) + 0x14) + 0x0));
        *(unsigned int *)((((int)stk + 4) + 0x0)) = t27;
        t28 = FUN_8c0de088(0x8C1DA8B4, 0x1, 0x0, 1.0f, 1.0f, f4);
        t29 = t28;
    }
    return t29;
}

int FUN_8c0e8744(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;

    t0 = 0x8;
    t1 = 0x0;
    do {
        t2 = *(int *)0x8C40C30C;
        t4 = (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t2) == 0);
        t0 = (t0 + 0x1);
        if (!t4) {
            t1 = (t1 + 0x1);
        }
    } while ((int)t0 < (int)0x1E);
    t5 = *(int *)0x8C40C30C;
    t6 = t1;
    if ((t5 & 0x10000) != 0) {
        t6 = (t1 - 1);
    }
    return t6;
}

int FUN_8c0e876e(void)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x5;
    t1 = 0x0;
    do {
        t2 = *(int *)0x8C40C310;
        t4 = (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t2) == 0);
        t0 = (t0 + 0x1);
        if (!t4) {
            t1 = (t1 + 0x1);
        }
    } while ((int)t0 < (int)0x20);
    return t1;
}

int FUN_8c0e878e(void)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = 0x0;
    t1 = 0x0;
    do {
        t2 = *(int *)0x8C40C308;
        t4 = (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t2) == 0);
        t0 = (t0 + 0x1);
        if (!t4) {
            t1 = (t1 + 0x1);
        }
    } while ((int)t0 < (int)0x20);
    return t1;
}

void FUN_8c0e87ae(int a4)
{
    int t0;

    if ((int)a4 >= 0) {
        t0 = *(int *)0x8C40C308;
        if (((((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))) & t0) != 0) {
            return;
        }
        return;
    }
}

void FUN_8c0e87c8(int a4)
{
    int t0;

    t0 = *(int *)0x8C40C30C;
    if (((((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))) & t0) != 0) {
        return;
    }
}

void FUN_8c0e87de(int a4)
{
    int t0;

    if ((int)a4 >= (int)0x5) {
        t0 = *(int *)0x8C40C310;
        if (((((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))) & t0) != 0) {
            return;
        }
        return;
    }
}

int FUN_8c0e87fa(void)
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
    int t14;
    int stk[28];

    t0 = FUN_8c0f7cf0();
    *(unsigned int *)(((int)stk + 4)) = 0x8C185378;
    t1 = t0;
    t2 = 0x8C185330;
    t3 = 0x0;
    t4 = 0x8C185330;
    do {
        t5 = t2;
        t6 = t4;
        t7 = t3;
        t8 = 0x0;
        do {
            t9 = *(int *)((t5 + 0x0));
            if (t9 == 0) {
                t1 = t7;
                t1 = (t1 << 2);
                t10 = *(int *)(((((int)stk + 4) + 0x4) + t1));
                t11 = *(int *)0x8C40C30C;
                if (((((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))) & t11) != 0) {
                    *(unsigned int *)((t6 + 0x0)) = 0x1;
                }
            }
            t8 = (t8 + 0x1);
            t6 = (t6 + 0x4);
            t5 = (t5 + 0x4);
            t7 = (t7 + 0x1);
        } while ((int)t8 < (int)0x9);
        t14 = *(int *)(((int)stk + 4));
        t4 = (t4 + 0x24);
        t3 = (t3 + 0x9);
        t2 = (t2 + 0x24);
    } while ((unsigned int)t4 < (unsigned int)t14);
    return t1;
}

int FUN_8c0e8948(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t10;
    int t11;
    int t13;
    int t19;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = FUN_8c0e89c0();
        if (t2 == 1) {
            t3 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t3 + 0x1);
        }
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            t5 = FUN_8c0e8a1c();
            if (t5 == 1) {
                FUN_8c0e8a76();
                t7 = *(int *)0x8C343FF4;
                *(unsigned int *)0x8C343FF4 = (t7 + 0x1);
            }
        } else {
            if (t4 == 2) {
                t9 = FUN_8c0e8a58();
                if (t9 == 1) {
                    t10 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t10 + 0x1);
                }
            } else {
                if (t4 == 3) {
                    t11 = FUN_8c0e8a3a();
                    if (t11 == 1) {
                        FUN_8c0e8bb0();
                        t13 = *(int *)0x8C343FF4;
                        *(unsigned int *)0x8C343FF4 = (t13 + 0x1);
                        *(unsigned int *)0x8C287C50 = 0x1;
                        *(unsigned int *)0x8C343FE8 = 0x1;
                        *(unsigned int *)0x8C301970 = 0x0;
                    }
                }
            }
        }
    }
    t19 = *(int *)0x8C343FE8;
    return t19;
}

int FUN_8c0e8a76(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC508;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC508 = 0x1;
        FUN_8c0ea2a0(0x3000);
        t2 = 0x0;
        t3 = 0x8C1DC4F8;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutLoadTexture(t4, 0x8C13364C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x4);
        t6 = t5;
    }
    return t6;
}

int FUN_8c0e8b30(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC518;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC518 = 0x1;
        FUN_8c0ea2a0(0x3100);
        t2 = 0x0;
        t3 = 0x8C1DC50C;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = nlObjPutLoadTexture(t4, 0x8C132F2C);
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x3);
        t6 = t5;
    }
    return t6;
}

int FUN_8c0e8bb0(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC530;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC530 = 0x1;
        FUN_8c0ea2a0(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC51C;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f3dc0();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x5);
        t6 = t5;
    }
    return t6;
}

int FUN_8c0e8d0a(void)
{
    int t0;
    int t5;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C1DC56C;
    t5 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC56C = 0x1;
        t1 = 0x0;
        t2 = 0x8C1DC534;
        do {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t4 = nlObjPutLoadTexture(t3, 0x8C1DC570);
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)0xE);
        t5 = t4;
    }
    return t5;
}

int FUN_8c0e8d56(void)
{
    int t0;
    int t6;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = *(int *)0x8C1DC58C;
    t6 = t0;
    if (t0 != 1) {
        *(unsigned int *)0x8C1DC58C = 0x1;
        FUN_8c0ea2a0(0x0);
        t2 = 0x0;
        t3 = 0x8C1DC580;
        do {
            t4 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t5 = FUN_8c0f3dc0();
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)0x3);
        t6 = t5;
    }
    return t6;
}

int FUN_8c0e8e98(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t9;
    int t14;

    t0 = *(int *)0x8C343FF8;
    *(unsigned int *)0x8C343FF8 = (t0 + 0x1);
    t1 = *(int *)0x8C343FF4;
    if (t1 == 0) {
        t2 = FUN_8c0e8dde();
        if (t2 == 1) {
            t3 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t3 + 0x1);
            *(unsigned int *)0x8C34A1EC = 0x0;
        }
    } else {
        t4 = *(int *)0x8C343FF4;
        if (t4 == 1) {
            FUN_8c0e8d0a();
            t6 = *(int *)0x8C343FF4;
            *(unsigned int *)0x8C343FF4 = (t6 + 0x1);
        } else {
            if (t4 == 2) {
                t7 = FUN_8c0e8dfc();
                if (t7 == 1) {
                    FUN_8c0e8d56();
                    t9 = *(int *)0x8C343FF4;
                    *(unsigned int *)0x8C343FF4 = (t9 + 0x1);
                    *(unsigned int *)0x8C34A1EC = 0x0;
                    *(unsigned int *)0x8C287C50 = 0x1;
                    *(unsigned int *)0x8C343FE8 = 0x1;
                    *(unsigned int *)0x8C301970 = 0x0;
                }
            }
        }
    }
    t14 = *(int *)0x8C343FE8;
    return t14;
}

int FUN_8c0e902c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    FUN_8c0ea2a0(0x0);
    t1 = 0x0;
    t2 = 0x8C1DC590;
    t3 = 0x8C1DC608;
    for (;;) {
        t4 = *(int *)((0x8C1DC608 + (t1 << 2)));
        if (t4 == 0x154) break;
        t5 = *(int *)((t2 + 0x0));
        if (t5 != 0) {
            t6 = *(int *)((t3 + 0x0));
            nlSpriteSetGarbagedTextureOnce();
        }
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4);
        t1 = (t1 + 0x1);
    }
    return (t1 << 2);
}

int FUN_8c0e90bc(void)
{
    int t0;
    int t6;
    int t1;
    int t5;
    int t2;
    int t4;
    int t3;

    t0 = 0x0;
    do {
        t6 = t0;
        if (t0 != 1) {
            t1 = *(int *)((0x8C1DC590 + (t0 << 2)));
            t5 = (t0 << 2);
            if (t1 != 0) {
                t2 = *(int *)0x8C1D175C;
                t4 = (t0 << 2);
                if (t0 != t2) {
                    t3 = FUN_8c0e8ffe(t0);
                    t4 = t3;
                }
                t5 = t4;
            }
            t6 = t5;
        }
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0xF);
    return t6;
}

int FUN_8c0ea00c(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t5;
    int t7;
    int t8;

    t0 = *(int *)0x8C20D15C;
    t1 = *(int *)0x8C1DC714;
    if (t0 == t1) {
        FUN_8c0d339a();
    }
    t3 = *(int *)0x8C20D15C;
    t4 = *(int *)0x8C1DC6AC;
    t6 = 0x8C1DC6AC;
    if (t3 == (t4 + 0x1)) {
        t5 = FUN_8c0d33ba();
        t6 = t5;
    }
    t7 = *(int *)0x8C20D15C;
    t8 = *(int *)0x8C1DC6B4;
    if (t7 == (t8 - 9)) {
        return FUN_8c0d33d0();
    }
    return t6;
}

int nlCommonTextureDummyFree(int a4)
{
    if (a4 != 0) {
        return kmyFreeArea(a4);
    }
    return 0;
}

int FUN_8c0eadc0(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x0;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x3;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState();
    return kmSetVertexRenderState(0x8C454FC0, a4);
}

int FUN_8c0eae60(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x44)) = 0x0;
    *(unsigned int *)((a4 + 0x48)) = 0x1;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    *(unsigned int *)((a4 + 0x50)) = 0x0;
    *(unsigned int *)((a4 + 0x54)) = 0x0;
    *(unsigned int *)((a4 + 0x58)) = 0x0;
    *(unsigned int *)((a4 + 0x5C)) = 0x4;
    *(unsigned int *)((a4 + 0x60)) = 0x1;
    *(unsigned int *)((a4 + 0x6C)) = 0x0;
    *(unsigned int *)((a4 + 0x64)) = 0x0;
    *(unsigned int *)((a4 + 0x68)) = 0x0;
    *(float *)((a4 + 0x70)) = 1.0f;
    *(float *)((a4 + 0x74)) = 1.0f;
    *(float *)((a4 + 0x78)) = 1.0f;
    *(float *)((a4 + 0x7C)) = 1.0f;
    *(float *)((a4 + 0x80)) = 1.0f;
    *(float *)((a4 + 0x84)) = 1.0f;
    *(float *)((a4 + 0x88)) = 1.0f;
    *(float *)((a4 + 0x8C)) = 1.0f;
    kmProcessVertexRenderState();
    return kmSetBackGroundRenderState(a4);
}

void FUN_8c0eb220(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C42445C;
    t1 = 0x5;
    t2 = 0x8C424498;
    t3 = t0;
    do {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t1 = (t1 - 1);
        *(unsigned int *)((t2 + 0x0)) = t4;
        t2 = (t2 + 0x4);
    } while (t1 != 0);
}

float nlCeil(float f4)
{
    float t0;

    t0 = nlFloor((-f4));
    return (-t0);
}

int nlRand(void)
{
    int t0;

    t0 = *(int *)0x8C1DC8C8;
    *(unsigned int *)0x8C1DC8C8 = ((t0 * 0x41C64E6D) + 0x3039);
    return (((unsigned int)((t0 * 0x41C64E6D) + 0x3039) >> 16) & 0x7FFF);
}

int nlPrintSetOpaqueMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    *(unsigned int *)0x8C44F9C0 = a4;
    t0 = *(int *)0x8C44F9AC;
    *(unsigned int *)0x8C44F9AC = (t0 & 0xF8FFFFFF);
    t1 = *(int *)0x8C44F9B4;
    *(unsigned int *)0x8C44F9B4 = (t1 & 0x3FFFFFF);
    if (a4 != 0) {
        t2 = *(int *)0x8C44F9B4;
        t5 = (t2 | 0x20000000);
    } else {
        t3 = *(int *)0x8C44F9AC;
        *(unsigned int *)0x8C44F9AC = (t3 | 0x2000000);
        t4 = *(int *)0x8C44F9B4;
        t5 = (t4 | 0x94000000);
    }
    *(unsigned int *)0x8C44F9B4 = t5;
    return t5;
}

void nlRenderTextureFreeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)0x8C44FBF0;
        if ((int)t0 >= (int)t1) break;
        nlRenderTextureFree(t0);
        t0 = (t0 + 0x1);
    }
}

int FUN_8c0ef0a0(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;

    FUN_8c0ef060(0x8C450874, 0x8C45088C, 0x3);
    FUN_8c0ef060(0x8C450880, 0x8C45094C, 0x3);
    t2 = FUN_8c0ef060(0x8C450868, a4, (a5 + 0x1));
    *(unsigned char *)0x8C450858 = 0x1;
    t3 = *(int *)0x8C450870;
    *(unsigned int *)0x8C450864 = t3;
    t4 = *(int *)0x8C45086C;
    *(unsigned int *)0x8C450860 = t4;
    t5 = *(int *)0x8C450868;
    *(unsigned int *)0x8C45085C = t5;
    return t2;
}

int FUN_8c0f2610(int a4, float f4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    if ((t0 & 2) == 0) {
        nlInvLightVector();
    }
    nlPushMatrix(0x0);
    FUN_8c0ef9b0(0x8C450B38);
    return nlobjput_sub_trnsl(a4);
}

void FUN_8c0f27f0(float f4, float f5)
{
    *(float *)0x8C1DCA90 = f5;
    *(float *)0x8C1DCA94 = (-f4);
    if (f5 > 0.0f) {
        if (!(0.0f > (-(-f4)))) {
            *(unsigned int *)0x8C0F2C78 = 0x8C0F9A30;
            *(unsigned int *)0x8C0F2C7C = 0x8C0F9A30;
            *(unsigned int *)0x8C0F2CE8 = 0x8C0F9A32;
            *(unsigned int *)0x8C0F2CEC = 0x8C0F9A32;
            return;
        }
        *(unsigned int *)0x8C0F2C78 = 0x8C0F8940;
        *(unsigned int *)0x8C0F2C7C = 0x8C0F8940;
        *(unsigned int *)0x8C0F2CE8 = 0x8C0F8942;
        *(unsigned int *)0x8C0F2CEC = 0x8C0F8942;
        return;
    }
    *(unsigned int *)0x8C0F2C78 = 0x8C0F8940;
    *(unsigned int *)0x8C0F2C7C = 0x8C0F8940;
    *(unsigned int *)0x8C0F2CE8 = 0x8C0F8942;
    *(unsigned int *)0x8C0F2CEC = 0x8C0F8942;
}

void nlSpriteSetVtxContext(int a4)
{
    int t1;
    int t6;
    float u7;
    int t8;
    float u9;

    *(unsigned int *)((a4 + 0x0)) = 0xA0000009;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x4C0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    nlSetTextureParameter(a4);
    t1 = *(int *)((a4 + 0xC));
    *(unsigned short *)((a4 + 0x14)) = 0x0;
    if ((((unsigned int)t1 >> 27) & 0x7) != 0) {
        if ((((unsigned int)t1 >> 27) & 0x7) != 2) {
            if ((((unsigned int)t1 >> 27) & 0x7) != 5) {
                if ((((unsigned int)t1 >> 27) & 0x7) == 6) {
                    *(unsigned short *)((a4 + 0x14)) = 0x1;
                }
            } else {
                *(unsigned short *)((a4 + 0x14)) = 0x1;
            }
        } else {
            *(unsigned short *)((a4 + 0x14)) = 0x1;
        }
    } else {
        *(unsigned short *)((a4 + 0x14)) = 0x1;
    }
    t6 = *(int *)((a4 + 0x8));
    u7 = *(float *)((0x8C127E64 + ((((unsigned int)((unsigned int)t6 >> 2) >> 1) & 0x7) << 2)));
    *(float *)((a4 + 0x18)) = u7;
    t8 = *(int *)((a4 + 0x8));
    u9 = *(float *)((0x8C127E64 + ((t8 & 0x7) << 2)));
    *(float *)((a4 + 0x1C)) = u9;
}

void nlsndG2Write(int a4, int a5)
{
    int t0;

    do {
        t0 = *(int *)0xA05F688C;
    } while ((t0 & 0x31) != 0);
    *(unsigned int *)((a5 + 0x0)) = a4;
}

int nlsndControlChange(int a4, int a5, int a6, int a7)
{
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x7B0) {
                if (a6 != 0x27B0) {
                    if (a6 != 0x40B0) {
                        if (a6 != 0x41B0) {
                            if (a6 != 0xAB0) {
                                if (a6 != 0x2AB0) {
                                    if (a6 != 0xCB0) {
                                        if (a6 != 0x2CB0) {
                                            if (a6 != 0xDB0) {
                                                if (a6 != 0x2DB0) {
                                                    if (a6 != 0x78B0) {
                                                        if (a6 != 0x7BB0) {
                                                            return 0xFFFFFFFE;
                                                        }
                                                        return nlsndSeqRequest((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6));
                                                    }
                                                    return nlsndSeqRequest((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6));
                                                }
                                                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                            }
                                            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                        }
                                        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                    }
                                    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0xF) << 16)));
                                }
                                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
                            }
                            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + (((a7 + 0x40) & 0x7F) << 16)));
                        }
                        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
                    }
                    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
                }
                return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
            }
            return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
    }
    return nlsndSeqRequest(((((((a4 & 0xF) << 16) << 8) + ((a5 - 1) & 0xF)) + a6) + ((a7 & 0x7F) << 16)));
}

int nlsndGdControl(int a4, int a5)
{
    int t0;

    if (a4 == 0xA3) {
        t0 = nlsndSeqRequest((a4 + ((a5 & 0xF) << 16)));
        if (t0 != 0) {
            return t0;
        }
        return nlsndSeqRequest(((a4 + ((a5 & 0xF) << 16)) + 0x100));
    }
    return 0xFFFFFFFE;
}

int nlsndGetMidiChInfo(int a4, int a5, int a6)
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

    if ((unsigned int)a4 >= (unsigned int)0x8) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < 0) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) >= (int)0x10) {
        return 0xFFFFFF80;
    }
    t0 = *(int *)0x8C454CAC;
    t1 = nlsndG2Read((t0 + 0x4));
    t2 = nlsndG2Read(((0xA0800000 + t1) + ((((a4 << 2) << 2) + (a5 - 1)) << 2)));
    if ((unsigned char)t2 == 0xFF) {
        return 0xFFFFFF7F;
    }
    t3 = *(int *)0x8C454CAC;
    t4 = nlsndG2Read((t3 + 0x8));
    if (a6 != 0x1B0) {
        if (a6 != 0x2B0) {
            if (a6 != 0x27B0) {
                if (a6 != 0x2AB0) {
                    return 0xFFFFFF80;
                }
                t5 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8));
                t6 = *(signed char *)(((signed char)((unsigned int)((unsigned int)(t5 & 0x1F000000) >> 16) >> 8) + 0x8C127EFD));
                return t6;
            }
            t7 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x8));
            return (short)((unsigned int)(t7 & 0x7F0000) >> 16);
        }
        t8 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14));
        return ((int)(t8 & 0x7F00) >> 8);
    }
    t9 = nlsndG2Read((((0xA0800000 + t4) + (((((unsigned char)t2 & 0x3F) << 2) << 2) << 2)) + 0x14));
    return (t9 & 0x7F);
}

int nlsndDriverSongStatus(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0x8C454CAC;
    t1 = nlsndG2Read((t0 + 0xC));
    t2 = 0x0;
    t3 = (0xA0800000 + t1);
    for (;;) {
        t4 = nlsndG2Read(t3);
        if (((unsigned char)t4 & 0x80) != 0) {
            t5 = nlsndG2Read(t3);
            if ((short)((unsigned int)(t5 & 0xFF0000) >> 16) == a4) break;
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x30);
            if ((int)t2 >= (int)0x10) {
                return 0x0;
            }
            continue;
        }
        t2 = (t2 + 0x1);
        t3 = (t3 + 0x30);
        if ((int)t2 >= (int)0x10) {
            return 0x0;
        }
    }
    t6 = 0x100;
    if (((unsigned char)t4 & 0x1) != 0) {
        t6 = 0x101;
    }
    return t6;
}

void nlsndG2DmaInit(void)
{
    int t0;
    int t1;

    t0 = 0x10;
    t1 = 0x8C454E34;
    do {
        t0 = (t0 - 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x10);
    } while (t0 != 0);
    *(unsigned int *)0x8C454CEC = 0x0;
}

int nlDispStripTexOfs(int a4, int a5, int a6)
{
    int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB5C, a6);
    if (t0 == 0) {
        return nldispstripTexSub(a4, a5);
    }
    return t0;
}

int FUN_8c0f7200(int a4, int a5, int a6)
{
    int t0;

    t0 = nlstripSetVertexContextTex(0x8C1DCB84, a6);
    if (t0 == 0) {
        return nldispstripTexOfsSub(a4, a5);
    }
    return t0;
}

int nlstripSetVertexContext(int a4)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = *(int *)0x8C458C10;
    *(unsigned int *)((t0 + 0x0)) = 0x600608;
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0x8C458C10;
    *(unsigned int *)((t2 + 0x8)) = t1;
    t3 = *(int *)(((a4 + 0x4) + 0x0));
    t4 = *(int *)0x8C458C10;
    *(unsigned int *)((t4 + 0xC)) = t3;
    t5 = *(int *)((((a4 + 0x4) + 0x4) + 0x0));
    t6 = *(int *)0x8C458C10;
    *(unsigned int *)((t6 + 0x20)) = t5;
    t7 = *(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
    t8 = *(int *)0x8C458C10;
    *(unsigned int *)((t8 + 0x44)) = t7;
    t9 = *(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
    t10 = *(int *)0x8C458C10;
    *(unsigned int *)((t10 + 0x40)) = t9;
    t11 = *(int *)0x8C458C10;
    kmProcessVertexRenderState();
    t13 = *(int *)0x8C458C10;
    t14 = *(int *)((t13 + 0x90));
    *(unsigned int *)((t13 + 0x90)) = (t14 & 0xFFFCFF3F);
    t15 = *(int *)0x8C458C10;
    t16 = *(int *)0x8C458E04;
    t17 = *(int *)((t15 + 0x90));
    *(unsigned int *)((t15 + 0x90)) = (t17 | t16);
    t18 = *(int *)0x8C458C10;
    t19 = *(int *)((t18 + 0x98));
    *(unsigned int *)((t18 + 0x98)) = (t19 & 0x31FF0FF);
    t20 = *(int *)0x8C458C10;
    t21 = *(int *)0x8C458E08;
    t22 = *(int *)0x8C424418;
    t23 = *(int *)(((t20 + 0x98) + 0x0));
    *(unsigned int *)(((t20 + 0x98) + 0x0)) = (t23 | ((((t22 ^ 0xFC) << 16) << 8) | t21));
    t24 = *(int *)0x8C458C10;
    return kmSetVertexRenderState(0x8C454FC0, t24);
}

void FUN_0c14ab98(void)
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
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;

    t0 = *(int *)0x8C100E84;
    t1 = t0;
    for (;;) {
        t2 = *(int *)0x8C100E90;
        if ((unsigned int)t1 >= (unsigned int)t2) break;
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    t3 = *(int *)0x8C100E74;
    t4 = *(int *)0x8C100E6C;
    t5 = 0x8C100E74;
    t6 = t3;
    t7 = t4;
    for (;;) {
        t8 = *(int *)0x8C100E80;
        if ((unsigned int)t6 >= (unsigned int)t8) break;
        t9 = *(signed char *)((t7 + 0x0));
        t5 = t9;
        t7 = (t7 + 0x1);
        *(unsigned char *)((t6 + 0x0)) = t5;
        t6 = (t6 + 0x1);
    }
    t10 = *(int *)0x8C20935C;
    t11 = t10;
    for (;;) {
        t12 = *(int *)0x8C209368;
        if ((unsigned int)t11 >= (unsigned int)t12) break;
        *(unsigned char *)((t11 + 0x0)) = 0x0;
        t11 = (t11 + 0x1);
    }
    t13 = *(int *)0x8C20934C;
    t14 = *(int *)0x8C209344;
    t15 = 0x8C20934C;
    t16 = t13;
    t17 = t14;
    for (;;) {
        t18 = *(int *)0x8C209358;
        if ((unsigned int)t16 >= (unsigned int)t18) break;
        t19 = *(signed char *)((t17 + 0x0));
        t15 = t19;
        t17 = (t17 + 0x1);
        *(unsigned char *)((t16 + 0x0)) = t15;
        t16 = (t16 + 0x1);
    }
}

int FUN_8c1dd2ae(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = strncmp((a4 + 0x30), 0x8C209544, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = strncmp((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0x8C209554, 0x10);
            if (t2 != 0) {
                ovLibEntryTbl(((((t1 << 2) << 2) << 1) + (a4 + 0x20)));
                t1 = (t1 + 0x1);
                continue;
            }
            break;
        }
        t5 = 0x0;
    }
    return t5;
}

int FUN_8c1dd306(int a4)
{
    int t0;
    int t5;
    int t1;
    int t2;

    t0 = strncmp((a4 + 0x30), 0x8C209544, 0x10);
    t5 = 0xFFFFFFFF;
    if (t0 == 0) {
        t1 = 0x1;
        for (;;) {
            t2 = strncmp((((((t1 << 2) << 2) << 1) + (a4 + 0x20)) + 0x10), 0x8C209554, 0x10);
            if (t2 != 0) {
                ovLibDeleteTbl(((((t1 << 2) << 2) << 1) + (a4 + 0x20)));
                t1 = (t1 + 0x1);
                continue;
            }
            break;
        }
        t5 = 0x0;
    }
    return t5;
}

void FUN_0c14cfe2(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = (a4 + 0x1);
    t2 = 0x8C209614;
    for (;;) {
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = *(signed char *)((t2 + 0x0));
        t2 = (t2 + 0x1);
        if (t4 != t3) break;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            return;
        }
    }
}

int gdFsLoadDirG(int a4, int a5)
{
    int t0;
    int t2;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t25;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t28;
    int t29;
    int t50;
    int t30;
    int t31;
    int t32;
    int t47;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t76;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t79;
    int t53;
    int t12;
    int t63;

    t0 = *(int *)0x8C20C204;
    t2 = a5;
    if (a5 == 0) {
        t1 = *(int *)((t0 + 0x10));
        t2 = t1;
    }
    t3 = *(signed char *)((a4 + 0x0));
    t4 = *(int *)0x8C45A138;
    if (t3 != 47) {
        if (t3 == 92) {
            t5 = *(short *)((t4 + 0x0));
            if (t5 == 1) {
                t6 = *(int *)((t0 + 0x4));
                t7 = *(int *)((t0 + 0x8));
                t8 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t6, t7, a4, (0x8 + t4));
                t12 = t8;
            } else {
                t9 = *(int *)((t0 + 0x4));
                t10 = *(int *)((t0 + 0x8));
                t11 = gdFsSearchPath(((t0 + 0x40) + 0x40), t9, t10, a4);
                t12 = t11;
            }
            t25 = 0xFFFFFFF8;
            if (t12 != 0) {
                t13 = *(int *)0x8C20C204;
                t14 = gdFsGetDirEnt((t13 + 0x40), (0x96 + t12), t2, 0x800);
                t15 = *(int *)0x8C45A138;
                t16 = *(short *)((t15 + 0x0));
                if (t16 == 1) {
                    t17 = *(int *)0x8C45A138;
                    t18 = *(int *)((t17 + 0x4));
                    if (t18 == (0x96 + t12)) {
                        if (t14 != 0) {
                            if (t14 == -12) {
                                FUN_0c14d2fa(t2);
                            }
                        } else {
                            FUN_0c14d2fa(t2);
                        }
                    }
                }
                t25 = t14;
            }
            t53 = t25;
        } else {
            t28 = *(int *)((t0 + 0x10));
            t29 = gdFsSearchName(a4, t28, 0x0);
            t50 = 0xFFFFFFF8;
            if (t29 != 0) {
                t30 = *(int *)0x8C20C204;
                t31 = *(int *)((t30 + 0x10));
                t32 = *(signed char *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x8));
                t47 = 0xFFFFFFF5;
                if (((unsigned char)t32 & 2) != 0) {
                    t33 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x0));
                    t34 = *(int *)((((t31 + 0x10) + ((t29 - 1) * 0x2C)) + 0x4));
                    t35 = *(int *)0x8C20C204;
                    t36 = gdFsGetDirEnt((t35 + 0x40), (t33 + 0x96), t2, t34);
                    t37 = *(int *)0x8C45A138;
                    t38 = *(short *)((t37 + 0x0));
                    if (t38 == 1) {
                        t39 = *(int *)0x8C45A138;
                        t40 = *(int *)((t39 + 0x4));
                        if (t40 == (t33 + 0x96)) {
                            if (t36 != 0) {
                                if (t36 == -12) {
                                    FUN_0c14d2fa(t2);
                                }
                            } else {
                                FUN_0c14d2fa(t2);
                            }
                        }
                    }
                    t47 = t36;
                }
                t50 = t47;
            }
            t53 = t50;
        }
        t79 = t53;
    } else {
        t56 = *(short *)((t4 + 0x0));
        if (t56 == 1) {
            t57 = *(int *)((t0 + 0x4));
            t58 = *(int *)((t0 + 0x8));
            t59 = gdFsSearchPath_dds(((t0 + 0x40) + 0x40), t57, t58, a4, (0x8 + t4));
            t63 = t59;
        } else {
            t60 = *(int *)((t0 + 0x4));
            t61 = *(int *)((t0 + 0x8));
            t62 = gdFsSearchPath(((t0 + 0x40) + 0x40), t60, t61, a4);
            t63 = t62;
        }
        t76 = 0xFFFFFFF8;
        if (t63 != 0) {
            t64 = *(int *)0x8C20C204;
            t65 = gdFsGetDirEnt((t64 + 0x40), (0x96 + t63), t2, 0x800);
            t66 = *(int *)0x8C45A138;
            t67 = *(short *)((t66 + 0x0));
            if (t67 == 1) {
                t68 = *(int *)0x8C45A138;
                t69 = *(int *)((t68 + 0x4));
                if (t69 == (0x96 + t63)) {
                    if (t65 != 0) {
                        if (t65 == -12) {
                            FUN_0c14d2fa(t2);
                        }
                    } else {
                        FUN_0c14d2fa(t2);
                    }
                }
            }
            t76 = t65;
        }
        t79 = t76;
    }
    return t79;
}

int buExit(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = vmsfs_c_getstate(t0);
        if (t1 != 0) break;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return buExitForce();
        }
    }
    return 0xFFFFFFFF;
}

void syCfgSetSoundMode(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C20C240;
    if (t0 != 0) {
        if (a4 != 0) {
            if (a4 == 1) {
                *(unsigned char *)0x8C00007E = a4;
                t1 = *(int *)0x8C20C240;
                t2 = syBtCfgSet(0x2);
                if (t2 == -1) {
                    return;
                }
                return;
            }
            return;
        }
        *(unsigned char *)0x8C00007E = a4;
        t3 = *(int *)0x8C20C240;
        t4 = syBtCfgSet(0x2);
        if (t4 == -1) {
            return;
        }
        return;
    }
}

void syCfgGetSoundMode(int a4)
{
    int t0;
    int t1;
    int t2;

    if (a4 != 0) {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t0 = *(int *)0x8C20C240;
        if (t0 != 0) {
            t1 = syBtCfgSet(0x0);
            if (t1 != -1) {
                t2 = *(signed char *)0x8C00007E;
                if ((signed char)t2 == 0) {
                    *(unsigned int *)((a4 + 0x0)) = 0x0;
                    return;
                }
                if ((signed char)t2 == 1) {
                    *(unsigned int *)((a4 + 0x0)) = 0x1;
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
}

int ADXT_GetNumSmpl(int a4)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x1));
    if ((int)t0 >= (int)0x2) {
        t1 = *(int *)((a4 + 0x4));
        return FUN_8c1f09be(t1);
    }
    return 0x0;
}

int ADXT_GetSfreq(int a4)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x1));
    if ((int)t0 >= (int)0x2) {
        t1 = *(int *)((a4 + 0x4));
        return FUN_8c1f0982(t1);
    }
    return 0x0;
}

int ADXT_GetNumChan(int a4)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x1));
    if ((int)t0 >= (int)0x2) {
        t1 = *(int *)((a4 + 0x4));
        return FUN_8c1f098e(t1);
    }
    return 0x0;
}

int FUN_0c152340(void)
{
    int t4;
    int t5;
    int t7;
    int t6;

    ADXSJD_ExecServer();
    *(unsigned int *)0x8C20C6C0 = 0x0;
    ADXRNA_ExecServer();
    *(unsigned int *)0x8C20C6C4 = 0x0;
    ADXF_ExecServer();
    *(unsigned int *)0x8C20C6C8 = 0x0;
    ADXSTM_ExecServer();
    *(unsigned int *)0x8C20C6CC = 0x0;
    t4 = 0x8C20C258;
    do {
        t5 = *(signed char *)((t4 + 0x0));
        t7 = t5;
        if (t5 == 1) {
            t6 = FUN_8c1f1808(t4);
            t7 = t6;
        }
        t4 = (t4 + 0x8C);
    } while ((unsigned int)t4 < (unsigned int)0x8C20C6B8);
    *(unsigned int *)0x8C20C6D0 = 0x0;
    *(unsigned int *)0x8C20C6BC = 0x0;
    return t7;
}

void adxf_ChkPrmPt(int a4, int a5)
{
    if ((int)a4 >= 0) {
        if ((int)a4 >= (int)0x100) {
            ADXERR_CallErrFunc();
            return;
        }
        if (a5 == 0) {
            ADXERR_CallErrFunc();
            return;
        }
        return;
    }
    ADXERR_CallErrFunc();
}

int adxf_AllocAdxFs(void)
{
    int t6;
    int t0;
    int t1;
    int t2;

    t6 = 0x0;
    if ((unsigned int)0x8C46BF64 < (unsigned int)0x8C46C264) {
        t0 = 0x8C46BF64;
        t1 = 0x8C46BF64;
        for (;;) {
            t2 = *(signed char *)((t0 + 0x0));
            if (t2 == 0) break;
            t0 = (t0 + 0x30);
            t1 = (t1 + 0x30);
            if ((unsigned int)t0 >= (unsigned int)0x8C46C264) {
                return 0x0;
            }
        }
        t6 = t1;
    }
    return t6;
}

int ADXF_ExecServer(void)
{
    int t1;
    int t2;

    ADXCRS_Lock();
    t1 = 0x8C46BF64;
    do {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 1) {
            adxf_ExecOne(t1);
        }
        t1 = (t1 + 0x30);
    } while ((unsigned int)t1 < (unsigned int)0x8C46C264);
    return ADXCRS_Unlock();
}

int ADXF_Seek(int a4, int a5, int a6)
{
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t39;
    int t38;
    int t37;
    int t36;

    adxf_SetCmdHstry(0x6, 0x0, a4, a5, a6);
    if (a4 == 0) {
        ADXERR_CallErrFunc();
        t39 = 0xFFFFFFFD;
    } else {
        t2 = *(signed char *)((a4 + 0x1));
        if (t2 == 2) {
            ADXF_Stop(a4);
        }
        if (a6 == 0) {
            *(unsigned int *)((a4 + 0x18)) = a5;
            t5 = *(int *)((a4 + 0x18));
            if ((int)t5 < 0) {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            } else {
                t6 = *(int *)((a4 + 0x18));
                t7 = *(int *)((a4 + 0x10));
                if ((int)t6 > (int)t7) {
                    t8 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = t8;
                }
            }
            adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
            t13 = *(int *)((a4 + 0x18));
            t38 = t13;
        } else {
            if (a6 == 1) {
                t14 = *(int *)((a4 + 0x18));
                *(unsigned int *)((a4 + 0x18)) = (t14 + a5);
                t15 = *(int *)((a4 + 0x18));
                if ((int)t15 < 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                } else {
                    t16 = *(int *)((a4 + 0x18));
                    t17 = *(int *)((a4 + 0x10));
                    if ((int)t16 > (int)t17) {
                        t18 = *(int *)((a4 + 0x10));
                        *(unsigned int *)((a4 + 0x18)) = t18;
                    }
                }
                adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                t23 = *(int *)((a4 + 0x18));
                t37 = t23;
            } else {
                if (a6 == 2) {
                    t24 = *(int *)((a4 + 0x10));
                    *(unsigned int *)((a4 + 0x18)) = (t24 + a5);
                    t25 = *(int *)((a4 + 0x18));
                    if ((int)t25 < 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                    } else {
                        t26 = *(int *)((a4 + 0x18));
                        t27 = *(int *)((a4 + 0x10));
                        if ((int)t26 > (int)t27) {
                            t28 = *(int *)((a4 + 0x10));
                            *(unsigned int *)((a4 + 0x18)) = t28;
                        }
                    }
                    adxf_SetCmdHstry(0x6, 0x1, a4, a5, a6);
                    t34 = *(int *)((a4 + 0x18));
                    t36 = t34;
                } else {
                    ADXERR_CallErrFunc();
                    t36 = 0xFFFFFFFD;
                }
                t37 = t36;
            }
            t38 = t37;
        }
        t39 = t38;
    }
    return t39;
}

void kmSetFogTableColor(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    *(unsigned int *)0x8C4709F4 = a8;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = (t0 | 0x1);
}

void kmSetFogVertexColor(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    *(unsigned int *)0x8C4709F0 = a8;
    t0 = *(int *)0x8C4709EC;
    *(unsigned int *)0x8C4709EC = t0;
}

void kmSetPaletteBankData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t17;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = a5;
    if ((int)(a5 + (0x3FF & a4)) > (int)0x400) {
        t1 = (0x400 - (0x3FF & a4));
    }
    FUN_8c1e28e0((0x8C470E08 + ((0x3FF & a4) << 2)), (a6 + ((0x3FF & a4) << 2)), (t1 << 2));
    if ((int)((((int)((t1 + (0x3FF & a4)) - 1) >> 4) - ((int)(0x3FF & a4) >> 4)) + 0x1) > 0) {
        t3 = ((int)(0x3FF & a4) >> 4);
        t4 = ((int)(0x3FF & a4) >> 4);
        t5 = (((int)(0x3FF & a4) >> 4) - 32);
        t6 = 0x0;
        do {
            t6 = (t6 + 0x1);
            if ((int)t3 >= (int)0x20) {
                t7 = *(int *)0x8C471E10;
                *(unsigned int *)0x8C471E10 = (t7 | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
            } else {
                t8 = *(int *)0x8C471E0C;
                *(unsigned int *)0x8C471E0C = (t8 | (((int)t4 >= 0) ? (0x1 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x1 >> (-(int)t4 & 31)) : ((int)0x1 >> 31))));
            }
            t5 = (t5 + 0x1);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x1);
        } while ((int)t6 < (int)((((int)((t1 + (0x3FF & a4)) - 1) >> 4) - ((int)(0x3FF & a4) >> 4)) + 0x1));
    }
    t17 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t17 | 0x4);
}

void kmSetPaletteBank(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t18;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = 0x3F;
    if (a5 == 0x100) {
        t1 = 0x30;
    }
    FUN_8c1e28e0((((((t1 & a4) << 2) << 2) << 2) + 0x8C470E08), a6, (a5 << 2));
    t3 = a5;
    if ((int)a5 < 0) {
        t3 = (a5 + 0xF);
    }
    if ((int)((int)t3 >> 4) > 0) {
        t4 = 0x0;
        t5 = ((t1 & a4) - 32);
        t6 = (t1 & a4);
        t7 = (t1 & a4);
        do {
            t4 = (t4 + 0x1);
            if ((int)t7 >= (int)0x20) {
                t8 = *(int *)0x8C471E10;
                *(unsigned int *)0x8C471E10 = (t8 | (((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))));
            } else {
                t9 = *(int *)0x8C471E0C;
                *(unsigned int *)0x8C471E0C = (t9 | (((int)t6 >= 0) ? (0x1 << (t6 & 31)) : ((-(int)t6 & 31) ? ((int)0x1 >> (-(int)t6 & 31)) : ((int)0x1 >> 31))));
            }
            t5 = (t5 + 0x1);
            t6 = (t6 + 0x1);
            t7 = (t7 + 0x1);
        } while ((int)t4 < (int)((int)t3 >> 4));
    }
    t18 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t18 | 0x4);
}

void kmSetPaletteEntry4bppMode(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t0 & 0xFFFFFFFB);
    t1 = 0x0;
    t2 = a6;
    do {
        FUN_8c1e28e0(0x8C470E08, t2, 0x40);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x40);
    } while ((int)t1 < (int)0x20);
    t4 = *(int *)0x8C471E08;
    *(unsigned int *)0x8C471E08 = (t4 | 0x4);
}

int kmRenderRect(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t3;

    t0 = *(int *)0x8C45F010;
    t10 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        if (a4 == 1) {
            *(unsigned int *)0x8C45F91C = 0x1;
            t3 = 0x0;
        } else {
            *(unsigned int *)0x8C45F91C = 0x0;
            t3 = 0x1;
        }
        t4 = *(int *)0x8C45EFD4;
        t5 = kmiFLWCTRLLaunchPacket(0x2, t3, t4, 0x0);
        t6 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t6 + 0x1);
        t7 = *(int *)0x8C45EFF4;
        t8 = (int)((unsigned int)(t6 + 0x1) % (unsigned int)t7);
        *(unsigned int *)0x8C45F004 = t8;
        t10 = t5;
    }
    return t10;
}

int kmRenderTexture(int a4, int a5)
{
    int t0;
    int t8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = *(int *)0x8C45F010;
    t8 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        t3 = kmiFLWCTRLLaunchPacket(0x0, 0x0, a5, a4);
        t4 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t4 + 0x1);
        t5 = *(int *)0x8C45EFF4;
        t6 = (int)((unsigned int)(t4 + 0x1) % (unsigned int)t5);
        *(unsigned int *)0x8C45F004 = t6;
        t8 = t3;
    }
    *(unsigned int *)0x8C45F91C = 0x1;
    return t8;
}

int FUN_8c1e3660(int a4)
{
    int t0;
    int t10;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t3;

    t0 = *(int *)0x8C45F010;
    t10 = 0xFFFFFFFF;
    if ((t0 & 0x3) == 1) {
        t1 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t1 & 0xFFFFFFFC);
        t2 = *(int *)0x8C45F010;
        *(unsigned int *)0x8C45F010 = (t2 | 0x2);
        if (a4 == 1) {
            *(unsigned int *)0x8C45F91C = 0x1;
            t3 = 0x0;
        } else {
            *(unsigned int *)0x8C45F91C = 0x0;
            t3 = 0x1;
        }
        t4 = *(int *)0x8C45EFD4;
        t5 = kmiFLWCTRLLaunchPacket(0x1, t3, t4, 0x0);
        t6 = *(int *)0x8C45F004;
        *(unsigned int *)0x8C45F004 = (t6 + 0x1);
        t7 = *(int *)0x8C45EFF4;
        t8 = (int)((unsigned int)(t6 + 0x1) % (unsigned int)t7);
        *(unsigned int *)0x8C45F004 = t8;
        t10 = t5;
    }
    return t10;
}

void kmEndScene(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = *(int *)0x8C45F010;
    *(unsigned int *)0x8C45F010 = (t0 & 0xFFFFFFFC);
    if (a4 != 0) {
        t1 = *(int *)((a4 + 0x4));
        if ((t1 & 32) == 0) {
            t2 = *(int *)0x8C45F91C;
            if (t2 == 0) {
                kmWaitVBlank();
                t4 = kmiFLWCTRLCheckFreeNBuf();
                if (t4 == 0) {
                    kmWaitVBlank();
                }
            }
        }
    }
}

void kmLoadTexture(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t15;
    int t16;
    int t20;
    int t21;
    int t25;
    int t26;
    int t28;
    int t29;
    int t23;
    int t24;
    int t18;
    int t19;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = *(int *)((a4 + 0xC));
        t2 = *(int *)((a4 + 0x18));
        t3 = *(int *)((a4 + 0x1C));
        FUN_8c1e4b74(t3, a5, t1, t2);
    } else {
        t5 = *(int *)((a4 + 0x18));
        if ((0x4000000 & t5) == 0) {
            if ((0x80000000 & t5) != 0) {
                if ((0x40000000 & t5) == 0) {
                    if ((0x8000 & t5) == 0) {
                        t6 = *(int *)((a4 + 0xC));
                        t7 = kmtex_GetTextureLevel(t6, t6);
                        t8 = *(int *)((a4 + 0x1C));
                        t9 = *(int *)(((t7 << 2) + 0x8C20AEDC));
                        t13 = (t8 + 0x4);
                        t14 = (t9 + 0x4);
                    } else {
                        t10 = *(int *)((a4 + 0x1C));
                        t11 = *(int *)((a4 + 0x14));
                        t13 = t10;
                        t14 = t11;
                    }
                    t18 = t13;
                    t19 = t14;
                } else {
                    t15 = *(int *)((a4 + 0x1C));
                    t16 = *(int *)((a4 + 0x14));
                    t18 = t15;
                    t19 = t16;
                }
                t23 = t18;
                t24 = t19;
            } else {
                t20 = *(int *)((a4 + 0x1C));
                t21 = *(int *)((a4 + 0x14));
                t23 = t20;
                t24 = t21;
            }
            t28 = t23;
            t29 = t24;
        } else {
            t25 = *(int *)((a4 + 0x1C));
            t26 = *(int *)((a4 + 0x14));
            t28 = t25;
            t29 = t26;
        }
        kmyCopyToTexture(t28, a5, t29, 0x0);
    }
}

void kmSetWaitVsyncCount(int a4)
{
    int t0;

    t0 = a4;
    if ((int)a4 <= 0) {
        *(unsigned int *)0x8C45F7F0 = ((-a4) + 0x1);
        t0 = (-a4);
    }
    *(unsigned int *)0x8C45F7B8 = (t0 - 1);
}

void kmGetSystemMetrics(int a4)
{
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t31;
    int t32;
    int t33;

    t0 = *(int *)((a4 + 0x0));
    if ((t0 & 1) != 0) {
        FUN_8c1e28e0((a4 + 0x68), 0x8C45F6F4, 0xA0);
        FUN_8c1e28e0((0x108 + a4), 0x8C45F818, 0xA0);
    }
    t4 = *(int *)((a4 + 0x0));
    if ((t4 & 2) != 0) {
        t5 = *(int *)0x8C45F8FC;
        t6 = (a4 + 0x4);
        t7 = (t5 - 1);
        do {
            t7 = (t7 & 0x7);
            t8 = *(int *)((((t7 << 2) + 0x8C45F8D8) + 0x0));
            t7 = (t7 - 1);
            t9 = (int)((unsigned int)((((t8 << 2) << 2) << 2) << 1) / (unsigned int)0x64);
            *(unsigned int *)((t6 + 0x0)) = t9;
            t6 = (t6 + 0x4);
        } while ((unsigned int)t6 < (unsigned int)(a4 + 0x24));
        t10 = 0x0;
        do {
            t11 = *(int *)(((0x8C45F8B8 + t10) + 0x0));
            t13 = ((a4 + 0x24) + t10);
            t10 = (t10 + 0x4);
            *(unsigned int *)((t13 + 0x0)) = t11;
        } while ((unsigned int)t10 < (unsigned int)0x20);
    }
    t15 = *(int *)((a4 + 0x0));
    if ((t15 & 4) != 0) {
        t16 = *(int *)0x8C45F7F8;
        *(unsigned int *)((a4 + 0x50)) = t16;
        t17 = *(int *)0x8C45F7FC;
        *(unsigned int *)((a4 + 0x54)) = t17;
        t18 = *(int *)0x8C45F7F0;
        *(unsigned int *)((a4 + 0x44)) = t18;
        *(unsigned int *)((a4 + 0x48)) = 0x0;
        t19 = *(int *)0x8C45F7F4;
        *(unsigned int *)((a4 + 0x4C)) = t19;
    }
    t21 = *(int *)((a4 + 0x0));
    if ((t21 & 16) != 0) {
        t22 = *(int *)0x8C45F810;
        t23 = *(int *)0x8C45F800;
        *(unsigned int *)((a4 + 0x58)) = (t22 - t23);
        t24 = *(int *)0x8C45F814;
        t25 = *(int *)0x8C45F800;
        *(unsigned int *)((a4 + 0x5C)) = (((t24 - t25) & 0xFFFFF) << 2);
        t26 = *(int *)0x8C45F808;
        t27 = *(int *)0x8C45F800;
        *(unsigned int *)((a4 + 0x64)) = (t26 - t27);
        t28 = *(int *)0x8C45F80C;
        t29 = *(int *)0x8C45F800;
        *(unsigned int *)((a4 + 0x60)) = (t28 - t29);
    }
    t31 = *(int *)((a4 + 0x0));
    if ((t31 & 8) != 0) {
        t32 = *(int *)0x8C4607C4;
        *(unsigned int *)((a4 + 0x1A8)) = t32;
        t33 = *(int *)0x8C4607CC;
        *(unsigned int *)((a4 + 0x1AC)) = t33;
    }
}

int FUN_8c1e61d2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float u5;
    int t6;
    float u7;
    int t8;
    float u9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float u15;
    int t16;
    float u17;
    int t18;
    float u19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    int t26;
    float u27;
    int t28;
    float u29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int stk[30];

    *(unsigned int *)((((int)stk + 4) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = a6;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = a7;
    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((int)stk + 20)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)(((int)stk + 24)) = t2;
    t3 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 28)) = t3;
    t4 = *(int *)((((int)stk + 4) + 0x0));
    u5 = *(float *)((t4 + 0x4));
    *(float *)(((int)stk + 32)) = u5;
    t6 = *(int *)((((int)stk + 4) + 0x0));
    u7 = *(float *)((t6 + 0x8));
    *(float *)(((int)stk + 36)) = u7;
    t8 = *(int *)((((int)stk + 4) + 0x0));
    u9 = *(float *)((t8 + 0xC));
    *(float *)(((int)stk + 40)) = u9;
    t10 = *(int *)((((int)stk + 4) + 0x0));
    t11 = *(int *)((t10 + 0x34));
    *(unsigned int *)(((int)stk + 44)) = t11;
    t12 = *(int *)0x8C4607FC;
    *(unsigned int *)(((int)stk + 52)) = t12;
    t13 = *(int *)0x8C460800;
    *(unsigned int *)(((int)stk + 56)) = t13;
    t14 = *(int *)((((int)stk + 4) + 0x0));
    u15 = *(float *)((t14 + 0x10));
    *(float *)(((int)stk + 60)) = u15;
    t16 = *(int *)((((int)stk + 4) + 0x0));
    u17 = *(float *)((t16 + 0x14));
    *(float *)(((int)stk + 64)) = u17;
    t18 = *(int *)((((int)stk + 4) + 0x0));
    u19 = *(float *)((t18 + 0x18));
    *(float *)(((int)stk + 68)) = u19;
    t20 = *(int *)((((int)stk + 4) + 0x0));
    t21 = *(int *)((t20 + 0x38));
    *(unsigned int *)(((int)stk + 72)) = t21;
    t22 = *(int *)0x8C4607FC;
    *(unsigned int *)(((int)stk + 80)) = t22;
    t23 = *(int *)0x8C460800;
    *(unsigned int *)(((int)stk + 84)) = t23;
    t24 = *(int *)((((int)stk + 4) + 0x0));
    u25 = *(float *)((t24 + 0x1C));
    *(float *)(((int)stk + 88)) = u25;
    t26 = *(int *)((((int)stk + 4) + 0x0));
    u27 = *(float *)((t26 + 0x20));
    *(float *)(((int)stk + 92)) = u27;
    t28 = *(int *)((((int)stk + 4) + 0x0));
    u29 = *(float *)((t28 + 0x24));
    *(float *)(((int)stk + 96)) = u29;
    t30 = *(int *)((((int)stk + 4) + 0x0));
    t31 = *(int *)((t30 + 0x3C));
    *(unsigned int *)(((int)stk + 100)) = t31;
    t32 = *(int *)0x8C4607FC;
    *(unsigned int *)(((int)stk + 108)) = t32;
    t33 = *(int *)0x8C460800;
    *(unsigned int *)(((int)stk + 112)) = t33;
    t34 = kmyRegisterBGPlane((((int)stk + 4) + 0xC));
    return t34;
}

void kmSetBorderColor(int a4, int a5, int a6, int a7, int a8)
{
    kmySetBorderColor(a8);
}

int FUN_0c15f460(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = a4;
    t1 = a6;
    t2 = a7;
    t3 = a5;
    for (;;) {
        t4 = ((int)t1 > 0);
        t1 = (t1 - 1);
        if (!t4) break;
        t2 = (unsigned short)t0;
        t5 = *(signed char *)((t3 + 0x0));
        t3 = (t3 + 0x1);
        t6 = *(short *)((0x8C20A4B0 + (((unsigned char)((int)t2 >> 8) ^ (unsigned char)t5) << 1)));
        t0 = ((t2 << 8) & 0xFF00);
        t0 = (t0 ^ t6);
    }
    return t0;
}

int FUN_8c1e6ac4(int a4, int a5, int a6)
{
    int t10;
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

    t10 = 0x1;
    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            if (t3 != 0) {
                t4 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = FUN_0c15f998(t4);
                t6 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t7 = FUN_0c15f998(t6);
                if ((signed char)t5 == (signed char)t7) {
                    t2 = (t2 - 1);
                    if ((int)t2 <= 0) {
                        return 0x1;
                    }
                    continue;
                }
                return 0x0;
            }
            break;
        }
        t8 = *(signed char *)((t0 + 0x0));
        t9 = 0x1;
        if (t8 != 0) {
            t9 = 0x0;
        }
        t10 = t9;
    }
    return t10;
}

int FUN_8c1e6b32(int a4, int a5)
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

    t0 = a5;
    t1 = a4;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 0) break;
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = FUN_0c15f998(t3);
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t6 = FUN_0c15f998(t5);
        if ((signed char)t4 == (signed char)t6) continue;
        return 0x0;
    }
    t7 = *(signed char *)((t0 + 0x0));
    t8 = 0x1;
    if (t7 != 0) {
        t8 = 0x0;
    }
    return t8;
}

int syMmuDeleteAllEntries(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t7;

    t0 = 0x8C461B18;
    while ((unsigned int)t0 < (unsigned int)0x8C461B58) {
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        syMmuDeleteEntry(t1);
    }
    t3 = 0x8C461B58;
    while ((unsigned int)t3 < (unsigned int)0x8C461B78) {
        t4 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        syMmuDeleteEntry(t4);
    }
    t6 = *(int *)0x8C461B78;
    t7 = syMmuDeleteEntry(t6);
    return t7;
}

int kdVbOverHandler(void)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x8C461E74;
    *(unsigned int *)0x8C461E74 = (t0 + 0x1);
    t1 = *(int *)0x8C4620E0;
    t2 = *(short *)((((t1 << 1) + 0x8C461E90) + 0x0));
    *(unsigned short *)((((t1 << 1) + 0x8C461E90) + 0x0)) = (t2 + 0x1);
    *(unsigned int *)0xA05F6900 = 0x2000;
    return (t2 + 0x1);
}

int copy_device(void)
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

    t0 = *(int *)0x8C47317C;
    t1 = (t0 + 0x28);
    t2 = 0x8C461C1C;
    t3 = 0x0;
    do {
        t4 = *(signed char *)((t1 + 0x0));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t4;
        t5 = *(signed char *)((t1 + 0x1));
        *(unsigned char *)((t2 + 0x1)) = t5;
        t6 = *(signed char *)((t1 + 0x2));
        *(unsigned char *)((t2 + 0x2)) = t6;
        t7 = *(signed char *)((t1 + 0x3));
        *(unsigned char *)((t2 + 0x3)) = t7;
        t8 = *(int *)((t1 + 0x10));
        *(unsigned int *)((t2 + 0x8)) = t8;
        t9 = *(signed char *)((t1 + 0x8));
        *(unsigned char *)((t2 + 0x4)) = t9;
        t10 = *(signed char *)((t1 + 0x9));
        *(unsigned char *)((t2 + 0x5)) = t10;
        t11 = *(signed char *)((t1 + 0xA));
        *(unsigned char *)((t2 + 0x6)) = t11;
        t12 = *(signed char *)((t1 + 0xB));
        *(unsigned char *)((t2 + 0x7)) = t12;
        t13 = *(int *)((t1 + 0x14));
        *(unsigned int *)((t2 + 0xC)) = t13;
        t2 = (t2 + 0x18);
        t1 = (t1 + 0x2C);
    } while ((int)t3 < (int)0x18);
    return t12;
}

int init_sub(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t11;

    t0 = *(int *)0x8C20A808;
    t1 = syChainAddHandler(0x900, 0x8C1E931C, t0, 0x0);
    *(unsigned int *)0x8C461B8C = t1;
    t2 = *(int *)0x8C20A80C;
    t3 = syChainAddHandler(0xA00, 0x8C1E9328, t2, 0x0);
    *(unsigned int *)0x8C461B90 = t3;
    t4 = *(int *)0x8C20A810;
    t5 = syChainAddHandler(0xA00, 0x8C1E9402, t4, 0x0);
    *(unsigned int *)0x8C461B94 = t5;
    t6 = *(int *)0x8C20A814;
    t7 = syChainAddHandler(0xA20, 0x8C1E940A, t6, 0x0);
    *(unsigned int *)0x8C461B98 = t7;
    *(unsigned int *)0x8C461E94 = 0x0;
    *(unsigned int *)0x8C4620E0 = 0x0;
    *(unsigned int *)0x8C4620E4 = 0x0;
    *(unsigned int *)0x8C4620E8 = 0x0;
    *(unsigned int *)0x8C4620EC = 0x0;
    *(unsigned int *)0x8C4620F4 = 0x0;
    *(unsigned int *)0x8C4620F0 = 0xFFFFFFFF;
    *(unsigned int *)0x8C462108 = 0x0;
    *(unsigned int *)0x8C46210C = 0x0;
    *(unsigned int *)0x8C462110 = 0x0;
    memset(0x8C461E5C, 0x0, 0x38);
    memset(0x8C461C1C, 0x0, 0x240);
    memset(0x8C461E9C, 0x0, 0x240);
    t11 = memset(0x8C461B9C, 0x0, 0x80);
    return t11;
}

int open_file_handle(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x8C469258;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0x8C469498;
        if ((int)t1 >= (int)t2) {
            *(unsigned int *)0x8C46949C = 0xFFFFFF07;
            return 0x0;
        }
        t3 = *(signed char *)((t0 + 0x0));
        if (t3 == 0) break;
        t0 = (t0 + 0x48);
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned int *)((t0 + 0xC)) = t1;
    return t0;
}

int pdVibGetDirection(int a4)
{
    int t0;
    int t1;
    int t2;
    int t6;
    int t5;
    int t4;
    int t3;
    int t7;
    int t8;
    int t9;

    t0 = *(signed char *)((a4 + 0x8C20A9DC));
    t1 = kdGetDeviceInfo();
    t2 = kdGetDeviceInfo();
    t6 = 0x1;
    if (a4 != 2) {
        t5 = 0x1;
        if (a4 != 8) {
            t4 = 0x1;
            if (a4 != 14) {
                t3 = 0x1;
                if (a4 != 20) {
                    t3 = 0x0;
                }
                t4 = t3;
            }
            t5 = t4;
        }
        t6 = t5;
    }
    t7 = *(signed char *)(((t2 + 0x12) + 0x0));
    t8 = *(signed char *)((t6 + (t1 + 0x12)));
    t9 = *(signed char *)((0x8C20A9F4 + (((unsigned char)t8 << 2) + (unsigned char)t7)));
    return (unsigned char)t9;
}

void ADXAMP_Start(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a4 + 0x2));
        if ((int)t0 >= (int)t1) break;
        t2 = ((t0 << 2) + (a4 + 0x14));
        t0 = (t0 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    }
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned char *)((a4 + 0x1)) = 0x2;
}

int ADXSJD_Create(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t23;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t21;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)((a6 + 0x0));
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t1 * 0x98) + 0x8C46AE24) + 0x0));
        if (t2 != 0) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t23 = 0x0;
    if (t1 != 8) {
        t5 = SJRBF_GetBufPtr(t0);
        t6 = SJRBF_GetBufSize(t0);
        t7 = SJRBF_GetXtrSize(t0);
        t8 = ADXB_Create(a5, t5, ((unsigned int)t6 >> 1), (((unsigned int)t6 >> 1) + ((unsigned int)t7 >> 1)));
        *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4)) = t8;
        ADXB_EntryGetWrFunc(t8, 0x8C1F05A4, ((t1 * 0x98) + 0x8C46AE24));
        t10 = *(int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4));
        t21 = 0x0;
        if (t10 != 0) {
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x8)) = a4;
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x2)) = a5;
            if ((int)a5 > 0) {
                t11 = 0x0;
                t12 = 0x0;
                do {
                    t13 = *(int *)((a6 + t11));
                    t12 = (t12 + 0x1);
                    *(unsigned int *)((((((t1 * 0x98) + 0x8C46AE24) + 0xC) + t11) + 0x0)) = t13;
                    t11 = (t11 + 0x4);
                } while ((int)t12 < (int)a5);
            }
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x1)) = 0x0;
            adxsjd_clear(((t1 * 0x98) + 0x8C46AE24));
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x48)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x4C)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x50)) = 0x0;
            *(unsigned int *)((((t1 * 0x98) + 0x8C46AE24) + 0x54)) = 0x0;
            *(unsigned char *)((((t1 * 0x98) + 0x8C46AE24) + 0x0)) = 0x1;
            t21 = ((t1 * 0x98) + 0x8C46AE24);
        }
        t23 = t21;
    }
    return t23;
}

int ADXSJD_ExecServer(void)
{
    int t0;
    int t1;
    int t3;
    int t2;

    t0 = 0x8C46AE24;
    do {
        t1 = *(signed char *)((t0 + 0x0));
        t3 = t1;
        if (t1 == 1) {
            t2 = ADXSJD_ExecHndl(t0);
            t3 = t2;
        }
        t0 = (t0 + 0x98);
    } while ((unsigned int)t0 < (unsigned int)0x8C46B2E4);
    return t3;
}

void ADXSTM_Stop(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        if (t1 != 0) {
            t2 = FUN_0c1614de();
            t3 = *(int *)((a4 + 0x8));
            gdFsStopRd(t3);
            t5 = FUN_0c1614de();
            t6 = FUN_8c1e8fa0(t2, t5);
            *(unsigned int *)0x8C20C8A4 = t6;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
        }
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
}

int ADXSTMF_ExecHndl(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 2) {
        return adxstmf_stat_exec(a4);
    }
    return t0;
}

int mwlRnaAlloc(void)
{
    int t5;
    int t0;
    int t1;
    int t2;

    t5 = 0x0;
    if ((unsigned int)0x8C46D68C < (unsigned int)0x8C46DB0C) {
        t0 = 0x8C46D68C;
        t1 = 0x8C46D68C;
        for (;;) {
            t2 = *(signed char *)((t0 + 0x0));
            if (t2 == 0) break;
            t0 = (t0 + 0x90);
            t1 = (t1 + 0x90);
            if ((unsigned int)t0 >= (unsigned int)0x8C46DB0C) {
                return 0x0;
            }
        }
        t5 = t1;
    }
    return t5;
}

int SJMEM_Init(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C8F0;
    if ((int)t0 <= 0) {
        t1 = *(int *)0x8C20C8F0;
        *(unsigned int *)0x8C20C8F0 = (t1 + 0x1);
        return memset(0x8C46EB54, 0x0, 0x480);
    }
    return 0;
}

void SJMEM_Finish(void)
{
    int t0;

    t0 = *(int *)0x8C20C8F0;
    *(unsigned int *)0x8C20C8F0 = (t0 - 1);
}

int SJMEM_Create(int a4, int a5)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x4));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x20) break;
            continue;
        }
        break;
    }
    if (t0 == 32) {
        return 0x0;
    }
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x4)) = 0x1;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x0)) = 0x8C20C8C0;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x14)) = a4;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x18)) = a5;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x8)) = 0x8C20AD60;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x1C)) = 0x8C1F3142;
    *(unsigned int *)(((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54) + 0x20)) = (((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54);
    SJMEM_Reset((((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54));
    return (((((t0 << 2) << 1) + t0) << 2) + 0x8C46EB54);
}

void SJRBF_Finish(void)
{
    int t0;

    t0 = *(int *)0x8C20C928;
    *(unsigned int *)0x8C20C928 = (t0 - 1);
}

int SJRBF_Create(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46EFD4) + 0x4));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x40) break;
            continue;
        }
        break;
    }
    if (t0 == 64) {
        return 0x0;
    }
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x0)) = 0x8C20C8F8;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x1C)) = a4;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x20)) = a5;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x24)) = a6;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x8)) = 0x8C20AD70;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x28)) = 0x8C1F3416;
    *(unsigned int *)(((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x2C)) = (0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2));
    SJRBF_Reset((0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2)));
    return (0x8C46EFD4 + ((((t0 << 1) + t0) << 2) << 2));
}

int SJUNI_Init(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C20C95C;
    if ((int)t0 <= 0) {
        t1 = *(int *)0x8C20C95C;
        *(unsigned int *)0x8C20C95C = (t1 + 0x1);
        return memset(0x8C46FBD4, 0x0, 0xC00);
    }
    return 0;
}

void SJUNI_Finish(void)
{
    int t0;

    t0 = *(int *)0x8C20C95C;
    *(unsigned int *)0x8C20C95C = (t0 - 1);
}

int SJUNI_Create(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0x8C46FBD4) + 0x4));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x40) break;
            continue;
        }
        break;
    }
    if (t0 == 64) {
        return 0x0;
    }
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x4)) = 0x1;
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x5)) = a4;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x0)) = 0x8C20C92C;
    *(unsigned char *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x5)) = a4;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x8)) = 0x8C20ADAC;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0xC)) = a5;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x10)) = ((unsigned int)((unsigned int)a6 >> 2) >> 2);
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x28)) = 0x8C1F383A;
    *(unsigned int *)(((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)) + 0x2C)) = (0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2));
    SJUNI_Reset((0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2)));
    return (0x8C46FBD4 + ((((t0 << 1) + t0) << 2) << 2));
}

int FUN_8c1f3f0a(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;

    t0 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)0x8C20CA10;
            t3 = *(short *)((((t1 * 0x4C) + t2) + 0x0));
            if (((unsigned short)t3 & 0x1) == 0) break;
            t1 = (t1 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)t0) {
                return 0x0;
            }
        }
        t6 = *(int *)0x8C20CA10;
        *(unsigned short *)(((t6 + (t1 * 0x4C)) + 0x0)) = 0x1;
        t7 = *(int *)0x8C20CA10;
        return (t7 + (t1 * 0x4C));
    }
    return 0x0;
}

void kmyEnableHolizontalScaler(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    if (a5 != 0) {
        t2 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t2 | 0x10000);
    } else {
        t3 = *(int *)((t1 + 0x24));
        *(unsigned int *)((t1 + 0x24)) = (t3 & 0xFFFEFFFF);
    }
}

void kmyGetFrameBufferAddress(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a5 != 0) {
        t0 = 0x8C45EEF4;
        t1 = 0x0;
        do {
            t2 = (t0 == a4);
            t0 = (t0 + 0x34);
            if (t2) {
                t1 = 0x1;
            }
        } while ((unsigned int)t0 < (unsigned int)0x8C45EFC4);
        if (t1 != 0) {
            t3 = *(int *)((a4 + 0x28));
            if (t3 != 0) {
                t4 = *(int *)((a4 + 0x1C));
                *(unsigned int *)((a5 + 0x0)) = t4;
            }
        }
        return;
    }
}

void kmyReleaseFrameBufferHandle(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    if (a4 != 0) {
        t0 = 0x8C45EEF4;
        t1 = 0x0;
        do {
            t2 = (t0 == a4);
            t0 = (t0 + 0x34);
            if (t2) {
                t1 = 0x1;
            }
        } while ((unsigned int)t0 < (unsigned int)0x8C45EFC4);
        if (t1 != 0) {
            t3 = *(int *)((a4 + 0x28));
            if (t3 != 0) {
                *(unsigned int *)((a4 + 0x28)) = 0x0;
            }
        }
    }
}

int FUN_8c1f4f74(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)0x8C20CA0C;
    t1 = t0;
    t2 = 0x0;
    do {
        t3 = *(int *)((t1 + 0x8));
        if (t3 == a4) {
            t2 = t1;
            t1 = 0x0;
        }
        if (t2 == 0) {
            t4 = *(int *)((t1 + 0x4));
            t1 = t4;
        }
    } while (t1 != 0);
    return t2;
}

void kmyGetDisplayRegionSize(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    if (a7 != 0) {
        t0 = 0x14;
        if ((0x10 & a4) != 0) {
            t0 = 0x28;
        }
        t3 = 0xF;
        t4 = t0;
    } else {
        t1 = 0xA;
        if ((0x10 & a4) != 0) {
            t1 = 0x14;
        }
        t2 = 0x8;
        if ((a4 & 0x20) != 0) {
            t2 = 0xF;
        }
        t3 = t2;
        t4 = t1;
    }
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = t4;
    }
    if (a6 != 0) {
        *(unsigned int *)((a6 + 0x0)) = t3;
    }
}

void FUN_8c1f5912(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        do {
            t2 = *(int *)0x8C20C9E8;
            t4 = ((((t1 << 1) + t1) << 2) << 1);
            t1 = (t1 + 0x1);
            *(unsigned short *)(((t4 + t2) + 0x0)) = 0x0;
            t5 = *(int *)0x8C20C9D0;
        } while ((unsigned int)t1 < (unsigned int)t5);
    }
    *(unsigned int *)0x8C20C9EC = 0x0;
    *(unsigned int *)0x8C20C9F0 = 0x0;
    *(unsigned int *)0x8C20C9F4 = 0x0;
    *(unsigned int *)0x8C20C9F8 = 0x0;
    *(unsigned int *)0x8C20C9FC = 0x0;
    *(unsigned int *)0x8C20CA00 = 0x0;
    *(unsigned int *)0x8C20CA04 = 0x0;
    *(unsigned int *)0x8C20CA08 = 0x0;
    t9 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t9) {
        t10 = 0x0;
        do {
            t11 = *(int *)0x8C20CA10;
            t12 = (t10 * 0x4C);
            t10 = (t10 + 0x1);
            *(unsigned short *)(((t12 + t11) + 0x0)) = 0x0;
            t13 = *(int *)0x8C20C9D4;
        } while ((unsigned int)t10 < (unsigned int)t13);
    }
    *(unsigned int *)0x8C20CA0C = 0x0;
}

void kmyiUnloadCallback(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)((a4 + 0x8));
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x4));
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = t2;
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x80);
}

void kmyiInitializeCallback(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    *(unsigned int *)((a4 + 0x14)) = 0x8C1F5AA4;
    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x0)) = 0x10;
    *(unsigned int *)((t0 + 0x4)) = 0x8C1F5AA0;
    t1 = 0x0;
    do {
        t2 = *(int *)((t0 + 0x4));
        *(unsigned int *)((((t0 + 0x8) + t1) + 0x0)) = t2;
        t3 = ((t0 + 0x8) + t1);
        t1 = (t1 + 0x8);
        *(unsigned int *)((t3 + 0x4)) = 0x0;
    } while ((unsigned int)t1 < (unsigned int)0x80);
}

void kmyiInitializeInterrupt(int a4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t9;
    int t10;

    *(unsigned int *)((a4 + 0x14)) = 0x8C1F5D3C;
    t0 = *(int *)((a4 + 0x8));
    memset(t0, 0x0, 0x238);
    *(unsigned int *)((t0 + 0x24)) = 0x8C1F5D38;
    *(unsigned int *)((t0 + 0x0)) = 0x20;
    if ((int)0x20 > 0) {
        t2 = 0x0;
        do {
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x0)) = 0x8C1F5D38;
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x4)) = 0x0;
            *(unsigned int *)((((t0 + 0x30) + ((t2 << 2) << 2)) + 0x8)) = 0x0;
            t4 = ((t2 << 2) << 2);
            t2 = (t2 + 0x1);
            *(unsigned int *)(((t4 + (t0 + 0x30)) + 0xC)) = 0x0;
            t5 = *(int *)((t0 + 0x0));
        } while ((int)t2 < (int)t5);
    }
    t9 = *(int *)0x8C470D1C;
    t10 = 0x8C1F5B60;
    if (t9 == 0x10000) {
        t10 = 0x8C1F5C40;
    }
    FUN_8c1f5e60(t10);
    *(unsigned int *)((t0 + 0x230)) = 0xE;
    *(unsigned int *)((t0 + 0x234)) = 0x0;
}

void kmySeparatePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a5 + 0x0)) = (a4 & 0x3);
    *(unsigned int *)((a6 + 0x0)) = (((unsigned int)((unsigned int)a4 >> 2) >> 2) & 0x3);
    *(unsigned int *)((a7 + 0x0)) = (((unsigned int)a4 >> 8) & 0x3);
    *(unsigned int *)((a8 + 0x0)) = (((unsigned int)((unsigned int)((unsigned int)a4 >> 8) >> 2) >> 2) & 0x3);
    *(unsigned int *)((a9 + 0x0)) = (((unsigned int)a4 >> 16) & 0x3);
}

void kmySetPassDepth(int a4, int a5, int a6, int a7)
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a4 + 0xC)) = a7;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a6;
    *(unsigned int *)((a4 + 0x38)) = (((a6 - 1) << 16) | (a5 - 1));
    t2 = *(int *)(((a4 + 0x18) + 0x0));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = t2;
    t3 = *(int *)(((a4 + 0x18) + 0x4));
    t4 = *(int *)(((a4 + 0x18) + 0x0));
    t5 = *(int *)((a4 + 0x4));
    t6 = *(int *)((a4 + 0x8));
    t7 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((a4 + 0x18) + 0xC)) = ((t4 + t3) - ((((((t5 * t6) * t7) << 1) + ((t5 * t6) * t7)) << 2) << 1));
    t8 = *(int *)0x8C470D10;
    if ((t8 & 128) != 0) {
        t9 = *(int *)(((a4 + 0x18) + 0xC));
        *(unsigned int *)(((a4 + 0x18) + 0xC)) = (t9 - 24);
    }
    t11 = *(int *)(((a4 + 0x18) + 0xC));
    *(unsigned int *)(((a4 + 0x18) + 0x24)) = (t11 - 256);
    t12 = *(int *)0x8C45EE38;
    *(unsigned int *)((t1 + 0x14)) = t12;
    t13 = *(int *)0x8C45EE3C;
    *(unsigned int *)((t1 + 0x18)) = t13;
    t14 = *(int *)0x8C45EE48;
    *(unsigned int *)((t1 + 0x10)) = t14;
    t15 = *(int *)0x8C45EE50;
    *(unsigned int *)((t1 + 0x4)) = t15;
}

int kmiInitializeDisplayModule(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((t0 + 0x8)) = 0x8C1F8120;
    *(unsigned int *)((t0 + 0xB8)) = 0x0;
    *(unsigned int *)((t0 + 0xC4)) = 0x8C1F78A0;
    return kmiInitFBControl();
}

void kmyInitializeFogTable(void)
{
    int t0;

    t0 = 0x80;
    do {
        t0 = (t0 - 1);
        *(unsigned int *)(((t0 << 2) + 0x8C4707EC)) = 0x0;
        kmiWriteRegister(((t0 << 2) + 0x200), 0x0);
    } while (t0 != 0);
}

int kmyUpdateFogParameter(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;
    int t13;
    int t10;
    int t11;
    int t12;

    t0 = *(int *)0x8C4709EC;
    if ((t0 & 4) != 0) {
        kmyWriteFogTable();
    }
    t3 = *(int *)0x8C4709EC;
    t4 = *(int *)0x8C4709EC;
    if ((t4 & 1) != 0) {
        t5 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t5 & 0xFFFFFFFE);
        t6 = *(int *)0x8C4709F4;
        kmiWriteRegister(0xB0, t6);
    }
    t9 = *(int *)0x8C4709EC;
    t13 = t9;
    if ((t9 & 2) != 0) {
        t10 = *(int *)0x8C4709EC;
        *(unsigned int *)0x8C4709EC = (t10 & 0xFFFFFFFD);
        t11 = *(int *)0x8C4709F8;
        t12 = kmiWriteRegister(0xB8, t11);
        t13 = t12;
    }
    return t13;
}

void kmyiUnloadPVR2Hardware(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    }
}

void kmyiInitializePVR2Hardware(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = 0x0;
    }
}

int kmyRegisterNativeBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t16;
    int t1;
    int t2;
    int t13;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t15;

    *(unsigned int *)((a5 + 0x0)) = 0x0;
    t0 = FUN_8c1f8a40();
    t16 = 0xEEEE;
    if (t0 != 0) {
        t1 = *(int *)0x8C474404;
        t2 = *(int *)0x8C474408;
        t13 = 0x0;
        if ((unsigned int)t1 < (unsigned int)t2) {
            t3 = 0x0;
            for (;;) {
                t4 = *(int *)0x8C474400;
                if (((((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))) & t4) == 0) break;
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)0x4) {
                    if (0x0 != 1) {
                        return 0xEEEE;
                    }
                    return 0x0;
                }
            }
            t6 = *(int *)0x8C474400;
            *(unsigned int *)0x8C474400 = (t6 | (((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))));
            t7 = *(int *)0x8C474404;
            *(unsigned int *)0x8C474404 = (t7 + 0x1);
            t8 = kmyGetRenderPacket(0x8C4743FC, (0x88 + ((t3 * 0x8C) + 0x8C474414)));
            t11 = 0x0;
            if (t8 == 0) {
                kmyiInitializeNativeBuffer(((t3 * 0x8C) + 0x8C474414), a6, a7, a8);
                *(unsigned int *)((a5 + 0x0)) = ((t3 * 0x8C) + 0x8C474414);
                t11 = 0x1;
            }
            t13 = t11;
        }
        t15 = 0x0;
        if (t13 != 1) {
            t15 = 0xEEEE;
        }
        t16 = t15;
    }
    return t16;
}

void kmytex_FBFreeEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;

    t0 = *(int *)0x8C20C9D0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        do {
            t2 = *(int *)0x8C20C9E8;
            if ((((((t1 << 1) + t1) << 2) << 1) + t2) == a4) {
                t3 = *(int *)0x8C20C9E8;
                t4 = *(short *)(((((((t1 << 1) + t1) << 2) << 1) + t3) + 0x0));
                *(unsigned short *)(((((((t1 << 1) + t1) << 2) << 1) + t3) + 0x0)) = (t4 & 0xFFFE);
            }
            t8 = *(int *)0x8C20C9D0;
            t1 = (t1 + 0x1);
        } while ((unsigned int)t1 < (unsigned int)t8);
    }
}

void kmytex_FBDeQueueEntry(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)((a6 + 0x4));
    t1 = *(int *)((a6 + 0x8));
    if (t0 == 0) {
        t2 = *(int *)((a6 + 0x8));
        *(unsigned int *)((a4 + 0x0)) = t2;
    } else {
        t3 = *(int *)((a6 + 0x8));
        *(unsigned int *)((t0 + 0x8)) = t3;
    }
    t5 = *(int *)((a6 + 0x8));
    if (t5 == 0) {
        t6 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a5 + 0x0)) = t6;
    } else {
        t7 = *(int *)((a6 + 0x4));
        *(unsigned int *)((t1 + 0x4)) = t7;
    }
}

void kmytex_VQFreeEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;

    t0 = *(int *)0x8C20C9D4;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        t2 = 0x0;
        do {
            t3 = *(int *)0x8C20CA10;
            if (((t2 * 0x4C) + t3) == a4) {
                t4 = *(int *)0x8C20CA10;
                t1 = t4;
                t5 = *(short *)((((t2 * 0x4C) + t1) + 0x0));
                *(unsigned short *)((((t2 * 0x4C) + t1) + 0x0)) = (t5 & 0xFFFE);
            }
            t8 = *(int *)0x8C20C9D4;
            t2 = (t2 + 0x1);
        } while ((unsigned int)t2 < (unsigned int)t8);
    }
}

int kmWaitVBlank(void)
{
    int t0;
    int t21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
    int t19;
    int stk[7];

    t0 = FUN_8c1f56c0();
    t21 = 0x0;
    if (t0 == 0) {
        t1 = *(int *)0x8C45F904;
        *(unsigned int *)(((int)stk + 8)) = 0x8C45F904;
        *(unsigned int *)(((int)stk + 12)) = 0x100000;
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
        t2 = *(int *)(((int)stk + 8));
        t3 = *(int *)((t2 + 0x0));
        if (t3 == t1) {
            t4 = *(int *)(((int)stk + 4));
            t5 = *(int *)((t4 + 0x0));
            if (t5 != 0) {
                for (;;) {
                    kmyRequestCallback(0x7);
                    t7 = *(int *)(((int)stk + 4));
                    t8 = *(int *)((t7 + 0x0));
                    *(unsigned int *)((t7 + 0x0)) = (t8 - 1);
                    t9 = *(int *)(((int)stk + 8));
                    t10 = *(int *)((t9 + 0x0));
                    if (t10 == t1) {
                        t11 = *(int *)(((int)stk + 4));
                        t12 = *(int *)((t11 + 0x0));
                        if (t12 == 0) break;
                        continue;
                    }
                    break;
                }
            }
        }
        t17 = *(int *)(((int)stk + 4));
        t18 = *(int *)((t17 + 0x0));
        t19 = 0x0;
        if (t18 == 0) {
            t19 = 0xEEEE;
        }
        t21 = t19;
    }
    return t21;
}

int kmiFLWCTRLOBJOverflowCallback(void)
{
    int t0;
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t9;

    t0 = kmiFLWCTRLFindTopQueue();
    t7 = t0;
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x14));
            if (t2 == 3) break;
            t3 = *(int *)((t1 + 0x10));
            t1 = t3;
            if (t1 == 0) {
                t4 = *(int *)0x8C45F7F8;
                *(unsigned int *)0x8C45F7F8 = (t4 + 0x1);
                return t2;
            }
        }
        t5 = *(int *)((t1 + 0x3C));
        t6 = kmyMoveParameterBoundary(t5, 0x0, 0x2000);
        t7 = t6;
    }
    t9 = *(int *)0x8C45F7F8;
    *(unsigned int *)0x8C45F7F8 = (t9 + 0x1);
    return t7;
}

int kmiFLWCTRLITPOverflowCallback(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t2 = *(int *)((t1 + 0x14));
            if (t2 == 3) break;
            t3 = *(int *)((t1 + 0x10));
            t1 = t3;
            if (t1 == 0) {
                t4 = *(int *)0x8C45F7FC;
                *(unsigned int *)0x8C45F7FC = (t4 + 0x1);
                *(unsigned int *)0x8C45F920 = 0x3;
                return kmyRequestCallback(0x8);
            }
        }
        t5 = *(int *)((t1 + 0x3C));
        kmyMoveParameterBoundary(t5, 0x1, 0x8000);
    }
    t9 = *(int *)0x8C45F7FC;
    *(unsigned int *)0x8C45F7FC = (t9 + 0x1);
    *(unsigned int *)0x8C45F920 = 0x3;
    return kmyRequestCallback(0x8);
}

int kmiFLWCTRLFindVacantQueue(void)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x8C45F964));
        if (t2 == 0) break;
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0x8C45F964 + t1);
}

int kmiFLWCTRLFindTopQueue(void)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x8C45F964));
        if (t2 == 1) {
            t3 = *(int *)((t0 + 0x8C45F970));
            if (t3 == 0) break;
            t0 = (t0 + 0x1C4);
            t1 = (t1 + 0x1C4);
            if ((unsigned int)t0 >= (unsigned int)0xE20) {
                return 0x0;
            }
            continue;
        }
        t0 = (t0 + 0x1C4);
        t1 = (t1 + 0x1C4);
        if ((unsigned int)t0 >= (unsigned int)0xE20) {
            return 0x0;
        }
    }
    return (0x8C45F964 + t1);
}

int kmiFLWCTRLGetNBufLockStatus(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C45F950;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F950 = 0x0;
        *(unsigned int *)0x8C45F95C = 0x1;
        t1 = *(int *)0x8C45F944;
        *(unsigned int *)0x8C45F944 = (t1 & (~t0));
        *(unsigned int *)0x8C45F95C = 0x0;
    }
    t4 = *(int *)0x8C45F944;
    return ((((int)(-a4) >= 0) ? (t4 << ((-a4) & 31)) : ((-(int)(-a4) & 31) ? ((unsigned int)t4 >> (-(int)(-a4) & 31)) : 0)) & 0x1);
}

int kmiFLWCTRLGetFBLockStatus(int a4)
{
    int t0;
    int t1;
    int t4;

    t0 = *(int *)0x8C45F954;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F954 = 0x0;
        *(unsigned int *)0x8C45F960 = 0x1;
        t1 = *(int *)0x8C45F948;
        *(unsigned int *)0x8C45F948 = (t1 & (~t0));
        *(unsigned int *)0x8C45F960 = 0x0;
    }
    t4 = *(int *)0x8C45F948;
    return ((((int)(-a4) >= 0) ? (t4 << ((-a4) & 31)) : ((-(int)(-a4) & 31) ? ((unsigned int)t4 >> (-(int)(-a4) & 31)) : 0)) & 0x1);
}

void kmiFLWCTRLLockVBuf(int a4)
{
    int t0;

    *(unsigned int *)0x8C45F958 = 0x1;
    t0 = *(int *)0x8C45F940;
    *(unsigned int *)0x8C45F940 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F958 = 0x0;
}

void kmiFLWCTRLLockFB(int a4)
{
    int t0;

    *(unsigned int *)0x8C45F960 = 0x1;
    t0 = *(int *)0x8C45F948;
    *(unsigned int *)0x8C45F948 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F960 = 0x0;
}

int kmiFLWCTRLLockNBuf(int a4)
{
    int t0;
    int t1;
    int t3;
    int t2;

    *(unsigned int *)0x8C45F95C = 0x1;
    t0 = *(int *)0x8C45F944;
    *(unsigned int *)0x8C45F944 = (t0 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
    *(unsigned int *)0x8C45F95C = 0x0;
    t1 = *(int *)0x8C4607E8;
    t3 = 0x8C45F95C;
    if (t1 != 0) {
        t2 = *(int *)0x8C4607E4;
        *(unsigned int *)0x8C4607E4 = ((t2 + 0x1) & 0x1);
        t3 = ((t2 + 0x1) & 0x1);
    }
    return t3;
}

void kmiFLWCTRLUnLockVBuf(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F934;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F958;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F94C;
            *(unsigned int *)0x8C45F94C = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F940;
            *(unsigned int *)0x8C45F940 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

void kmiFLWCTRLUnLockNBuf(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F938;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F95C;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F950;
            *(unsigned int *)0x8C45F950 = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F944;
            *(unsigned int *)0x8C45F944 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

void kmiFLWCTRLUnLockFB(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C45F93C;
    if ((unsigned int)a4 < (unsigned int)t0) {
        t1 = *(int *)0x8C45F960;
        if (t1 != 0) {
            t2 = *(int *)0x8C45F954;
            *(unsigned int *)0x8C45F954 = (t2 | (((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31))));
        } else {
            t3 = *(int *)0x8C45F948;
            *(unsigned int *)0x8C45F948 = (t3 & (~(((int)a4 >= 0) ? (0x1 << (a4 & 31)) : ((-(int)a4 & 31) ? ((int)0x1 >> (-(int)a4 & 31)) : ((int)0x1 >> 31)))));
        }
    }
}

int kmiFLWCTRLFindFreeNBuf(void)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;

    t0 = *(int *)0x8C45F950;
    if (t0 != 0) {
        *(unsigned int *)0x8C45F950 = 0x0;
        *(unsigned int *)0x8C45F95C = 0x1;
        t1 = *(int *)0x8C45F944;
        *(unsigned int *)0x8C45F944 = (t1 & (~t0));
        *(unsigned int *)0x8C45F95C = 0x0;
    }
    t4 = *(int *)0x8C4607E8;
    if (t4 != 0) {
        t5 = *(int *)0x8C4607E4;
        t6 = *(int *)0x8C45F944;
        if (((((int)t5 >= 0) ? (0x1 << (t5 & 31)) : ((-(int)t5 & 31) ? ((int)0x1 >> (-(int)t5 & 31)) : ((int)0x1 >> 31))) & t6) == 0) {
            t7 = *(int *)0x8C4607E4;
            return t7;
        }
        return 0xFFFFFFFF;
    }
    t8 = *(int *)0x8C45F938;
    if ((unsigned int)0x0 < (unsigned int)t8) {
        t9 = 0x0;
        for (;;) {
            t10 = *(int *)0x8C45F944;
            if (((((int)t9 >= 0) ? (0x1 << (t9 & 31)) : ((-(int)t9 & 31) ? ((int)0x1 >> (-(int)t9 & 31)) : ((int)0x1 >> 31))) & t10) == 0) break;
            t9 = (t9 + 0x1);
            t12 = *(int *)0x8C45F938;
            if ((unsigned int)t9 >= (unsigned int)t12) {
                return 0xFFFFFFFF;
            }
        }
        return t9;
    }
    return 0xFFFFFFFF;
}

void kmiFLWCTRLCheckTimeOut(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t11;

    t0 = *(int *)0x8C4607B4;
    if (t0 != 0) {
        t1 = *(int *)0x8C4607DC;
        *(unsigned int *)0x8C4607DC = (t1 - 1);
        t2 = *(int *)0x8C4607DC;
        if (t2 == 0) {
            t3 = *(int *)0x8C45F7F4;
            *(unsigned int *)0x8C45F7F4 = (t3 + 0x1);
            kmiFLWCTRLEORCallBackFunc();
            kmyResetRenderer();
            t6 = *(int *)0x8C45F7F0;
            if (t6 != 1) {
                t7 = 0x0;
                do {
                    t8 = *(int *)(((0x8C45F79C + t7) + 0x0));
                    kmyCreateRegionArray();
                    t7 = (t7 + 0x4);
                } while ((unsigned int)t7 < (unsigned int)0x8);
            }
            t11 = *(int *)0x8C45F7F0;
            *(unsigned int *)0x8C4607DC = t11;
        }
    }
}

void kmiFLWCTRLEOVCallBackFunc(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;

    t0 = kmiFLWCTRLFindTopQueue();
    if (t0 != 0) {
        t1 = kmyGetDMAValue(a4);
        t2 = *(int *)0xFFD8000C;
        t3 = *(int *)0x8C45F8F8;
        *(unsigned int *)((((t1 << 2) + 0x8C45F8B8) + 0x0)) = (t3 - t2);
        t4 = *(int *)((t0 + 0x3C));
        kmyGetNativeBufferStatus(t4);
        t6 = t0;
        for (;;) {
            t7 = *(int *)((t6 + 0x14));
            if (t7 == 3) break;
            t8 = *(int *)((t6 + 0x10));
            t6 = t8;
            if (t6 == 0) {
                kmiFLWCTRLRotateReadyQueue();
                kmyRequestCallback(0x5);
                return;
            }
        }
        t11 = *(int *)((t6 + 0x1C));
        t12 = *(int *)0x8C45F934;
        if ((unsigned int)t11 < (unsigned int)t12) {
            t13 = *(int *)0x8C45F958;
            if (t13 != 0) {
                t14 = *(int *)0x8C45F94C;
                *(unsigned int *)0x8C45F94C = (t14 | (((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31))));
            } else {
                t15 = *(int *)0x8C45F940;
                *(unsigned int *)0x8C45F940 = (t15 & (~(((int)t11 >= 0) ? (0x1 << (t11 & 31)) : ((-(int)t11 & 31) ? ((int)0x1 >> (-(int)t11 & 31)) : ((int)0x1 >> 31)))));
            }
        }
        *(unsigned int *)((t6 + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)((t6 + 0x14)) = 0x4;
        kmiFLWCTRLRotateReadyQueue();
        kmyRequestCallback(0x5);
    }
}

void kmiFLWCTRLCheckFinishPacket(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t44;
    int t45;

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x18));
    if (t0 == t1) {
        t2 = *(int *)((a4 + 0x1C));
        if (t2 != -1) {
            t3 = *(int *)((a4 + 0x1C));
            t4 = *(int *)0x8C45F934;
            if ((unsigned int)t3 < (unsigned int)t4) {
                t5 = *(int *)0x8C45F958;
                if (t5 != 0) {
                    t6 = *(int *)0x8C45F94C;
                    *(unsigned int *)0x8C45F94C = (t6 | (((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31))));
                } else {
                    t7 = *(int *)0x8C45F940;
                    *(unsigned int *)0x8C45F940 = (t7 & (~(((int)t3 >= 0) ? (0x1 << (t3 & 31)) : ((-(int)t3 & 31) ? ((int)0x1 >> (-(int)t3 & 31)) : ((int)0x1 >> 31)))));
                }
            }
        }
        t16 = *(int *)((a4 + 0x20));
        if (t16 != -1) {
            t17 = *(int *)((a4 + 0x20));
            t18 = *(int *)0x8C45F938;
            if ((unsigned int)t17 < (unsigned int)t18) {
                t19 = *(int *)0x8C45F95C;
                if (t19 != 0) {
                    t20 = *(int *)0x8C45F950;
                    *(unsigned int *)0x8C45F950 = (t20 | (((int)t17 >= 0) ? (0x1 << (t17 & 31)) : ((-(int)t17 & 31) ? ((int)0x1 >> (-(int)t17 & 31)) : ((int)0x1 >> 31))));
                } else {
                    t21 = *(int *)0x8C45F944;
                    *(unsigned int *)0x8C45F944 = (t21 & (~(((int)t17 >= 0) ? (0x1 << (t17 & 31)) : ((-(int)t17 & 31) ? ((int)0x1 >> (-(int)t17 & 31)) : ((int)0x1 >> 31)))));
                }
            }
        }
        t30 = *(int *)((a4 + 0x24));
        if (t30 != -1) {
            t31 = *(int *)((a4 + 0x24));
            t32 = *(int *)0x8C45F93C;
            if ((unsigned int)t31 < (unsigned int)t32) {
                t33 = *(int *)0x8C45F960;
                if (t33 != 0) {
                    t34 = *(int *)0x8C45F954;
                    *(unsigned int *)0x8C45F954 = (t34 | (((int)t31 >= 0) ? (0x1 << (t31 & 31)) : ((-(int)t31 & 31) ? ((int)0x1 >> (-(int)t31 & 31)) : ((int)0x1 >> 31))));
                } else {
                    t35 = *(int *)0x8C45F948;
                    *(unsigned int *)0x8C45F948 = (t35 & (~(((int)t31 >= 0) ? (0x1 << (t31 & 31)) : ((-(int)t31 & 31) ? ((int)0x1 >> (-(int)t31 & 31)) : ((int)0x1 >> 31)))));
                }
            }
        }
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        t44 = *(int *)((a4 + 0xC));
        t45 = *(int *)((a4 + 0x10));
        if (t44 != 0) {
            if (t45 != 0) {
                *(unsigned int *)((t44 + 0x10)) = t45;
                *(unsigned int *)((t45 + 0xC)) = t44;
            } else {
                *(unsigned int *)((t44 + 0x10)) = 0x0;
            }
        } else if (t45 != 0) {
            *(unsigned int *)((t45 + 0xC)) = 0x0;
        }
        return;
    }
}

void kmiFLWCTRLStartDisplayEntry(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t10;

    *(unsigned int *)0x8C4607C0 = 0x1;
    t0 = *(int *)((a4 + 0x2C));
    *(unsigned int *)0x8C4607CC = t0;
    *(unsigned int *)0x8C4607C8 = a4;
    t1 = *(int *)((a4 + 0x28));
    *(unsigned int *)0x8C4607C4 = t1;
    *(unsigned int *)((a4 + 0x14)) = 0x7;
    t2 = *(int *)0x8C45EFEC;
    if (t2 != 0) {
        t3 = *(int *)((a4 + 0x40));
        kmySetDisplayFrameBuffer(t3, t3);
    } else {
        t5 = *(int *)0x8C45EFF0;
        if (t5 == 0) {
            t6 = *(int *)((a4 + 0x40));
            kmySetDisplayFrameBuffer(t6, 0x0);
        }
    }
    t10 = *(int *)0x8C45F900;
    if (t10 != 0) {
        *(unsigned int *)0x8C45F900 = 0x0;
        kmBlankScreen(0x0);
    }
}

void kmiInitVertexBufferDesc(int a4)
{
    int t0;

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
}

int FUN_8c1fc2ac(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t10;
    int t11;
    int t8;
    int t9;
    int t7;

    t0 = *(int *)((a4 + 0x0));
    if ((unsigned short)t0 == 3) {
        t1 = FUN_8c1fc49c(a4);
        t10 = t1;
        t11 = t1;
    } else {
        t2 = *(int *)((a4 + 0x18));
        if ((t2 & 0x40000000) != 0) {
            t3 = FUN_8c1fc374(a4);
            t8 = t3;
            t9 = t3;
        } else {
            t4 = *(int *)((a4 + 0x18));
            if ((t4 & 0x8000) != 0) {
                t5 = FUN_8c1fc3f6(a4);
                t7 = t5;
            } else {
                t6 = FUN_8c1fc2f0(a4);
                t7 = t6;
            }
            t8 = t7;
            t9 = t7;
        }
        t10 = t8;
        t11 = t9;
    }
    *(unsigned int *)((a4 + 0x14)) = t11;
    return t10;
}

int FUN_8c1fc49c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t10;
    int t11;
    int t12;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t15;
    int t17;
    int t18;
    int t20;

    t0 = *(int *)((a4 + 0xC));
    t1 = *(int *)((a4 + 0x10));
    t2 = kmtex_GetTextureLevel(t0, t1);
    t3 = *(int *)((a4 + 0x18));
    if ((t3 & 0x80000000) != 0) {
        t4 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)((unsigned int)((unsigned int)t0 >> 1) >> 1) < (unsigned int)((unsigned int)((unsigned int)t1 >> 1) >> 1)) {
            t4 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        }
        t10 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
        t11 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
        t12 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
        if ((unsigned int)t4 > (unsigned int)0x1) {
            t5 = t4;
            t6 = (((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1));
            t7 = ((unsigned int)((unsigned int)t0 >> 1) >> 1);
            t8 = ((unsigned int)((unsigned int)t1 >> 1) >> 1);
            do {
                t9 = (t7 * t8);
                t7 = ((unsigned int)t7 >> 1);
                t8 = ((unsigned int)t8 >> 1);
                t5 = ((unsigned int)t5 >> 1);
                t6 = (t6 + t9);
            } while ((unsigned int)t5 > (unsigned int)0x1);
            t10 = t6;
            t11 = t7;
            t12 = t8;
        }
        t15 = (t10 + (t11 * t12));
        if (t11 == t12) {
            t15 = (t10 + 0x2);
        }
        t17 = *(int *)(((t2 << 2) + 0x8C20AEC0));
        t20 = ((t15 + 0xA) + t17);
    } else {
        t18 = *(int *)(((t2 << 2) + 0x8C20AEA4));
        t20 = ((((unsigned int)t0 >> 1) * ((unsigned int)t1 >> 1)) + t18);
    }
    return t20;
}

void syG2DmaResumeAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C20CA24;
        syG2DmaResume(((t1 + 0x4) + t0));
        t0 = (t0 + 0x34);
    } while ((unsigned int)t0 < (unsigned int)0xD0);
    *(unsigned int *)0x8C471F7C = 0x0;
}

void syG2DmaSuspendAll(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = *(int *)0x8C20CA24;
        syG2DmaSuspend(((t1 + 0x4) + t0));
        t0 = (t0 + 0x34);
    } while ((unsigned int)t0 < (unsigned int)0xD0);
    *(unsigned int *)0x8C471F7C = 0x1;
}

void mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;

    make_header(a6, a7);
    get_data(a6);
    t2 = *(signed char *)((a6 + 0x1));
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = ((t2 ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    t5 = *(signed char *)((a6 + 0x1));
    *(unsigned char *)((a6 + 0x3)) = ((t5 ^ t4) & (~t4));
    t6 = *(int *)0x8C47317C;
    t7 = *(int *)((0x10C4 + t6));
    if (t7 == 1) {
        t8 = *(signed char *)((a6 + 0x8));
        if ((unsigned char)t8 != 0xFF) {
            if ((unsigned char)t8 != 0) {
                t9 = *(int *)((a7 + 0x0));
                mpdrv_swaplong(a7, ((unsigned char)t9 + 0x1));
            }
        }
    }
    t14 = *(signed char *)((a6 + 0x0));
    t15 = 0x1;
    if (t14 != 0) {
        t15 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t15;
    t16 = *(signed char *)((a6 + 0x3));
    t17 = *(signed char *)((a6 + 0x2));
    if (t17 != 0) {
        *(unsigned char *)((a5 + 0x10)) = 0x1;
        mpdrv_make_deviceinfo(a5, a6, a7);
    }
    t20 = *(signed char *)((a6 + 0x3));
    if (t20 != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
}

void mpdrv_init_memory(void)
{
    int t0;

    t0 = *(int *)0x8C47317C;
    *(unsigned int *)((t0 + 0x10F4)) = 0xA05F6C00;
}

int FUN_0c170b48(int a4)
{
    int t0;
    int t28;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t27;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t25;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = *(short *)((a4 + 0x2));
    t28 = 0xFFFFFFFA;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x28));
        *(unsigned short *)(((a4 + 0x34) + 0x0)) = t1;
        t2 = *(int *)((a4 + 0x30));
        thunk_FUN_8c1ff1ee();
        t4 = fmcalccrc(0x3E, (a4 + 0x34));
        *(unsigned short *)(((a4 + 0x34) + 0x3E)) = t4;
        t5 = *(int *)((a4 + 0x28));
        t6 = *(int *)((a4 + 0xC));
        FUN_0c17088c((a4 + 0x34), (t6 + ((((t5 + 0x1) << 2) << 2) << 2)), 0x40);
        t8 = *(int *)((a4 + 0x10));
        t9 = *(int *)((a4 + 0x14));
        t27 = 0xFFFFFFF6;
        if ((int)t8 < (int)t9) {
            t10 = *(int *)((a4 + 0x14));
            t11 = *(int *)((a4 + 0xC));
            t12 = *(int *)((a4 + 0x10));
            t13 = *(int *)((a4 + 0x18));
            FUN_0c170908((t12 + 0x1), (t11 + ((((t10 + 0x1) << 2) << 2) << 2)), t13);
            t15 = *(int *)((a4 + 0x18));
            t16 = *(int *)((a4 + 0xC));
            t17 = *(int *)((a4 + 0x4));
            t18 = FUN_8c2072b8();
            t19 = *(int *)((a4 + 0x18));
            t25 = 0xFFFFFFFE;
            if (t18 == (((t19 << 2) << 2) << 2)) {
                t20 = *(int *)((a4 + 0x10));
                t21 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = (t21 + 0x1);
                t22 = *(int *)((a4 + 0x4));
                t23 = FUN_8c2072b8();
                t24 = 0x0;
                if (t23 != 64) {
                    t24 = 0xFFFFFFFE;
                }
                t25 = t24;
            }
            t27 = t25;
        }
        t28 = t27;
    }
    return t28;
}

int FUN_0c170c10(int a4)
{
    int t0;
    int t11;
    int t1;
    int t2;
    int t3;
    int t5;
    int t9;
    int t6;
    int t7;
    int t8;

    t0 = *(short *)((a4 + 0x2));
    t11 = 0xFFFFFFFA;
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x28));
        t2 = *(int *)((a4 + 0xC));
        t3 = *(int *)((a4 + 0x30));
        thunk_FUN_8c1ff1ee();
        t5 = *(short *)(((((((t1 + 0x1) << 2) << 2) << 2) + t2) + 0x0));
        t9 = 0x0;
        if ((unsigned short)t5 != 0xFFFF) {
            t6 = fmcalccrc(0x3E, (((((t1 + 0x1) << 2) << 2) << 2) + t2));
            t7 = *(short *)(((((((t1 + 0x1) << 2) << 2) << 2) + t2) + 0x3E));
            t8 = 0x0;
            if ((unsigned short)t7 != (unsigned short)t6) {
                t8 = 0xFFFFFFFC;
            }
            t9 = t8;
        }
        t11 = t9;
    }
    return t11;
}

int ADXB_Create(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t8;
    int t5;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0xAC) + 0x8C4731F8) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t8 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0xAC) + 0x8C4731F8), 0x0, 0xAC);
        *(unsigned short *)((((t0 * 0xAC) + 0x8C4731F8) + 0x0)) = 0x1;
        t5 = ADXPD_Create();
        *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x8)) = t5;
        if (t5 == 0) {
            ADXB_Destroy(((t0 * 0xAC) + 0x8C4731F8));
            t7 = 0x0;
        } else {
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x38)) = a4;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x3C)) = a5;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x40)) = a6;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x44)) = a7;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x88)) = 0x8C1FF920;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x8C)) = ((t0 * 0xAC) + 0x8C4731F8);
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x90)) = 0x8C1FF93E;
            *(unsigned int *)((((t0 * 0xAC) + 0x8C4731F8) + 0x94)) = ((t0 * 0xAC) + 0x8C4731F8);
            t7 = ((t0 * 0xAC) + 0x8C4731F8);
        }
        t8 = t7;
    }
    return t8;
}

int ADXB_DecodeHeader(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a5 + 0x0));
    if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) == 0x8000) {
        return ADXB_DecodeHeaderAdx(a4, a5, a6);
    }
    t1 = ADXB_CheckSpsd();
    if (t1 != 0) {
        return ADXB_DecodeHeaderSpsd(a4, a5, a6);
    }
    t2 = ADXB_CheckWav(a5);
    if (t2 != 0) {
        return ADXB_DecodeHeaderWav(a4, a5, a6);
    }
    t3 = FUN_8c2075fe(a5);
    if (t3 != 0) {
        return ADXB_DecodeHeaderAiff(a4, a5, a6);
    }
    t4 = ADXB_CheckAu(a5);
    if (t4 != 0) {
        return ADXB_DecodeHeaderAu(a4, a5, a6);
    }
    return 0x0;
}

int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}

int ADXB_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(short *)((a4 + 0xA8));
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0xA8));
        if (t1 == 2) {
            return ADXB_ExecOneSpsd(a4);
        }
        t2 = *(short *)((a4 + 0xA8));
        if (t2 == 3) {
            return ADXB_ExecOneAiff(a4);
        }
        t3 = *(short *)((a4 + 0xA8));
        if (t3 == 4) {
            return ADXB_ExecOneAu(a4);
        }
        t4 = *(short *)((a4 + 0xA8));
        if (t4 == 1) {
            return ADXB_ExecOneWav(a4);
        }
        return t4;
    }
    return ADXB_ExecOneAdx(a4);
}

int FUN_0c1718c4(int a4)
{
    int t5;
    int t0;
    int t1;
    int t2;
    int t3;

    if ((int)(short)a4 < 0) {
        return 0x0;
    }
    t5 = 0x0;
    if ((unsigned int)0x8C474398 < (unsigned int)0x8C4743D8) {
        t0 = 0x8C474398;
        t1 = 0x8C474398;
        t2 = 0x8C473B98;
        for (;;) {
            t3 = *(int *)((t0 + 0x0));
            if (t3 == 0) break;
            t0 = (t0 + 0x8);
            t2 = (t2 + 0x100);
            t1 = (t1 + 0x8);
            if ((unsigned int)t0 >= (unsigned int)0x8C4743D8) {
                return 0x0;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = t2;
        *(unsigned int *)((t1 + 0x0)) = 0x1;
        t5 = t1;
    }
    return t5;
}

int mwlSbAlloc(void)
{
    int t5;
    int t0;
    int t1;
    int t2;

    t5 = 0x0;
    if ((unsigned int)0x8C473858 < (unsigned int)0x8C473B98) {
        t0 = 0x8C473858;
        t1 = 0x8C473858;
        for (;;) {
            t2 = *(signed char *)((t0 + 0x4));
            if (t2 == 0) break;
            t0 = (t0 + 0x68);
            t1 = (t1 + 0x68);
            if ((unsigned int)t0 >= (unsigned int)0x8C473B98) {
                return 0x0;
            }
        }
        t5 = t1;
    }
    return t5;
}

int FUN_0c171d48(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (int)((int)0xAC44 / (int)(a5 + 0x1));
    t1 = *(signed char *)((0x8C20B0AC + t0));
    t2 = (int)((int)(((a5 - (((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31)))) << 8) << 2) / (int)(((int)(-t1) >= 0) ? (0xAC44 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0xAC44 >> (-(int)(-t1) & 31)) : ((int)0xAC44 >> 31))));
    t3 = *(int *)((a4 + 0x1C));
    t4 = *(int *)((t3 + 0x4));
    t5 = nlsndStreamSetHdOctFns(t4, (0xF & (-t1)), (0x3FF & t2));
    *(unsigned int *)((a4 + 0x14)) = a5;
    return t5;
}

int FUN_0c171db0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    t2 = nlsndStreamSetHdBitSize(t1, a5);
    *(unsigned int *)((a4 + 0x10)) = a5;
    return t2;
}

int kmyContinueTA(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return 0xEEEE;
    }
    t1 = *(int *)((a4 + 0x10));
    *(unsigned int *)((a4 + 0x10)) = (t1 + 0x1);
    t2 = *(int *)((((((t1 + 0x1) << 2) << 1) + ((a4 + 0x18) + 0x30)) + 0x0));
    kmiWriteRegister(0x140, t2);
    t4 = *(int *)(((((a4 + 0x18) + 0x30) + (((t1 + 0x1) << 2) << 1)) + 0x4));
    kmiWriteRegister(0x124, t4);
    kmiWriteRegister(0x160, 0x80000000);
    return kmiReadRegister(0x144);
}

void kmyGeneratePassInfo(int a4, int a5, int a6, int a7, int a8, int a9)
{
    *(unsigned int *)((a4 + 0x0)) = (0x100000 | (((((((a6 & 0x3) << 2) << 2) | ((a7 & 0x3) << 8)) | ((((a8 & 0x3) << 8) << 2) << 2)) | ((a9 & 0x3) << 16)) | (a5 & 0x3)));
}

int kmySetSkipCount(int a4, int a5)
{
    int t0;
    int t7;
    int t3;
    int t1;
    int t2;
    int t5;
    int t6;

    t0 = kmyiCheckNativeHandle(a4);
    t7 = 0xEEEE;
    if (t0 != 0) {
        t3 = 0x1;
        if ((0x2000000 & a5) != 0) {
            t1 = 0x2;
            if ((0x1000000 & a5) != 0) {
                t1 = 0x3;
            }
            t2 = t1;
            if ((a5 & 0x400000) == 0) {
                t2 = (t1 + 0x1);
            }
            t3 = t2;
        }
        t5 = *(int *)((a4 + 0x88));
        t6 = *(int *)((t5 + 0x8));
        *(unsigned int *)((t5 + 0x8)) = ((t6 & 0xFFFFFF) | (((t3 & 0x7) << 16) << 8));
        t7 = 0x0;
    }
    return t7;
}

int FUN_8c205a58(int a4, int a5, int a6)
{
    int t0;
    int t6;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x4));
    t6 = 0x0;
    if (t0 != 0) {
        t1 = t0;
        t2 = 0x0;
        do {
            if (t1 == a5) {
                if (t1 != 0) {
                    t3 = *(int *)((t1 + 0x8));
                    if (t3 == a6) {
                        t2 = 0x1;
                    }
                }
            }
            t4 = *(int *)((t1 + 0x4));
            t1 = t4;
        } while (t1 != 0);
        t6 = t2;
    }
    return t6;
}

int FUN_8c205b00(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x0;
    t1 = 0x8C474650;
    do {
        t2 = (t1 == a4);
        t1 = (t1 + 0x2C);
        if (t2) {
            t0 = 0x1;
        }
    } while ((unsigned int)t1 < (unsigned int)0x8C4747B0);
    return t0;
}

int kmyGetRenderPacket(int a4, int a5)
{
    int t5;
    int t0;
    int t1;
    int t3;
    int t4;

    t5 = 0xEEEE;
    if (a4 != 0) {
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((a4 + 0x248));
            if (((((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))) & t1) == 0) break;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                return 0x0;
            }
        }
        t3 = *(int *)((a4 + 0x248));
        *(unsigned int *)((a4 + 0x248)) = (t3 | (((int)t0 >= 0) ? (0x1 << (t0 & 31)) : ((-(int)t0 & 31) ? ((int)0x1 >> (-(int)t0 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)((((0x254 + a4) + (t0 * 0x2C)) + 0x0)) = t0;
        t4 = *(int *)((a4 + 0x24C));
        *(unsigned int *)((a4 + 0x24C)) = (t4 + 0x1);
        *(unsigned int *)((a5 + 0x0)) = ((t0 * 0x2C) + (0x254 + a4));
        t5 = 0x0;
    }
    return t5;
}

void kmyInitializeAllRenderPackets(void)
{
    int t0;

    t0 = 0x0;
    do {
        *(unsigned int *)(((t0 * 0x2C) + 0x8C474650)) = t0;
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x8);
}

void kmyReleaseRenderPacket(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = FUN_8c205b00(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)0x8C474644;
    *(unsigned int *)0x8C474644 = (t2 & (~(((int)t1 >= 0) ? (0x1 << (t1 & 31)) : ((-(int)t1 & 31) ? ((int)0x1 >> (-(int)t1 & 31)) : ((int)0x1 >> 31)))));
    t3 = *(int *)0x8C474648;
    *(unsigned int *)0x8C474648 = (t3 - 1);
}

void kmySetDMAErrorCallback(int a4, int a5)
{
    if (a4 != 0) {
        if (a4 != 1) {
            return;
        }
        *(unsigned int *)0x8C203434 = a5;
        return;
    }
    *(unsigned int *)0x8C203430 = a5;
}

void kmySetRegionArrayCallback(int a4, int a5)
{
    int t0;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 != 0) {
        if (a5 == 0) {
            return;
        }
        *(unsigned int *)((a4 + 0x14)) = a5;
        return;
    }
}

void kmySetStrideWidth(int a4)
{
    kmiWriteRegister(0xE4, ((int)(0x3E0 & a4) >> 5));
}

int kmyStartRenderTexture(int a4, int a5, int a6)
{
    int t0;
    int t28;
    int t1;
    int t27;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;

    t0 = kmyiCheckNativeHandle(a4);
    t28 = 0xEEEE;
    if (t0 != 0) {
        t1 = *(int *)0x8C45EEE4;
        t27 = 0xEEEE;
        if (t1 == 0) {
            t2 = *(int *)((a4 + 0x88));
            t3 = *(int *)((t2 + 0x24));
            t4 = *(int *)0x8C4747B0;
            *(unsigned int *)0x8C4747B0 = (unsigned short)t3;
            t5 = *(int *)0x8C4747B0;
            if (t4 != t5) {
                kmyResetRenderer();
            }
            t8 = *(int *)(((a4 + 0x18) + 0xC));
            kmiWriteRegister(0x2C, t8);
            t10 = *(int *)(((a4 + 0x18) + 0x8));
            kmiWriteRegister(0x20, t10);
            t12 = *(int *)((t2 + 0x24));
            kmiWriteRegister(0xF4, t12);
            t14 = *(int *)((t2 + 0x4));
            kmiWriteRegister(0x48, t14);
            t16 = *(int *)((t2 + 0x8));
            kmiWriteRegister(0x8C, t16);
            t18 = *(int *)((t2 + 0xC));
            kmiWriteRegister(0x88, (t18 & 0xFFFFFFF0));
            t20 = *(int *)((t2 + 0x14));
            kmiWriteRegister(0x68, t20);
            t22 = *(int *)((t2 + 0x18));
            kmiWriteRegister(0x6C, t22);
            kmiWriteRegister(0x4C, ((unsigned int)((unsigned int)((unsigned int)((a6 << 2) << 2) >> 2) >> 2) >> 2));
            kmiWriteRegister(0x60, (a5 + 0x1000000));
            kmiWriteRegister(0x14, 0x1);
            t27 = 0x0;
        }
        t28 = t27;
    }
    return t28;
}

int kmyStartRender(int a4, int a5)
{
    int t0;
    int t31;
    int t30;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t23;
    int t25;
    int t26;

    t0 = kmyiCheckNativeHandle(a4);
    t31 = 0xEEEE;
    if (t0 != 0) {
        t30 = 0xEEEE;
        if (a5 != 0) {
            t1 = *(int *)((a4 + 0x88));
            t2 = *(int *)((t1 + 0x24));
            t3 = *(int *)0x8C4747B0;
            *(unsigned int *)0x8C4747B0 = (unsigned short)t2;
            t4 = *(int *)0x8C4747B0;
            if (t3 != t4) {
                kmyResetRenderer();
            }
            t7 = *(int *)(((a4 + 0x18) + 0xC));
            kmiWriteRegister(0x2C, t7);
            t9 = *(int *)(((a4 + 0x18) + 0x8));
            kmiWriteRegister(0x20, t9);
            t11 = *(int *)((t1 + 0x24));
            kmiWriteRegister(0xF4, t11);
            t13 = *(int *)((t1 + 0x4));
            kmiWriteRegister(0x48, t13);
            t15 = *(int *)((t1 + 0x8));
            kmiWriteRegister(0x8C, t15);
            t17 = *(int *)((t1 + 0xC));
            kmiWriteRegister(0x88, (t17 & 0xFFFFFFF0));
            t19 = *(int *)((t1 + 0x14));
            kmiWriteRegister(0x68, t19);
            t21 = *(int *)((t1 + 0x18));
            kmiWriteRegister(0x6C, t21);
            t23 = *(int *)((a5 + 0x2C));
            kmiWriteRegister(0x4C, t23);
            t25 = *(int *)0x8C45EEE4;
            if (t25 == 0) {
                t26 = *(int *)((a5 + 0x1C));
                kmiWriteRegister(0x60, t26);
            }
            kmiWriteRegister(0x14, 0x1);
            t30 = 0x0;
        }
        t31 = t30;
    }
    return t31;
}

void kmySetPixelClippingX(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x14)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
}

void kmySetPixelClippingY(int a4, int a5, int a6)
{
    int t0;
    int t1;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    *(unsigned int *)((t1 + 0x18)) = (((a6 & 0x7FF) << 16) | (a5 & 0x7FF));
}

int kmyiCheckNativeHandle(int a4)
{
    int t0;
    int t6;
    int t1;
    int t2;
    int t3;

    t0 = *(int *)0x8C474408;
    t6 = 0x0;
    if ((unsigned int)0x0 < (unsigned int)t0) {
        t1 = 0x0;
        t2 = 0x0;
        while (a4 != ((t2 * 0x8C) + 0x8C474414)) {
            t3 = *(int *)0x8C474408;
            t1 = t3;
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)t1) {
                return 0x0;
            }
        }
        t6 = 0x1;
    }
    return t6;
}

int kmyCopyPaletteData(int a4, int a5, int a6)
{
    int t10;
    int t9;
    int t8;
    int t0;
    int t1;
    int t2;
    int t3;

    t10 = 0x12;
    if ((int)a6 > 0) {
        t9 = 0x12;
        if ((int)(a4 + a6) <= (int)0x400) {
            t8 = 0x12;
            if ((int)a4 >= 0) {
                if ((int)a6 > 0) {
                    t0 = 0x0;
                    t1 = (0x0 + a5);
                    t2 = ((a4 << 2) + 0x1000);
                    do {
                        t3 = *(int *)((t1 + 0x0));
                        t1 = (t1 + 0x4);
                        kmiWriteRegister(t2, t3);
                        t0 = (t0 + 0x1);
                        t2 = (t2 + 0x4);
                    } while ((int)t0 < (int)a6);
                }
                t8 = 0x0;
            }
            t9 = t8;
        }
        t10 = t9;
    }
    return t10;
}

void kmySetRenderBpp(int a4, int a5)
{
    int t0;
    int t1;
    int t7;
    int t6;
    int t5;
    int t4;
    int t3;
    int t2;
    int t8;

    t0 = kmyiCheckNativeHandle(a4);
    if (t0 == 0) {
        return;
    }
    t1 = *(int *)((a4 + 0x88));
    t7 = 0x3;
    if (a5 != 3) {
        t6 = 0x1;
        if (a5 != 0) {
            t5 = 0x0;
            if (a5 != 1) {
                t4 = 0x2;
                if (a5 != 2) {
                    t3 = 0x4;
                    if (a5 != 4) {
                        t2 = 0x6;
                        if (a5 != 5) {
                            t2 = 0x1;
                        }
                        t3 = t2;
                    }
                    t4 = t3;
                }
                t5 = t4;
            }
            t6 = t5;
        }
        t7 = t6;
    }
    t8 = *(int *)((t1 + 0x4));
    *(unsigned int *)((t1 + 0x4)) = ((t8 & 0xFFFFFFF8) | (t7 & 0x7));
}

void kmResetRenderer(void)
{
    int t0;

    do {
        t0 = kmiQueryFinishAllPacket();
    } while (t0 != 0);
    kmyResetRenderer();
    kmyResetTA();
}

void ADX_DecodeInfoAiff(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
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
    int stk[10];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 32)) = a7;
    if ((int)a5 < (int)0x1000) {
        t0 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        return;
    }
    t1 = *(int *)(((int)stk + 24));
    t2 = FUN_8c20731c(t1, (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), (((int)stk + 8) + 0xC));
    if (t2 != 0) {
        t3 = *(int *)(((int)stk + 24));
        t4 = *(int *)(((int)stk + 28));
        *(unsigned short *)((t4 + 0x0)) = (t2 - t3);
        if ((int)(short)(t2 - t3) <= 0) {
            return;
        }
        t5 = *(int *)(((int)stk + 8));
        *(unsigned int *)((a11 + 0x0)) = t5;
        t6 = *(int *)(((int)stk + 12));
        *(unsigned char *)((a10 + 0x0)) = t6;
        t7 = *(int *)(((int)stk + 16));
        *(unsigned char *)((a8 + 0x0)) = t7;
        t8 = *(int *)(((int)stk + 20));
        *(unsigned int *)((a12 + 0x0)) = t8;
        t9 = *(int *)(((int)stk + 32));
        *(unsigned char *)((t9 + 0x0)) = 0xFFFFFFFF;
        t10 = *(signed char *)((a10 + 0x0));
        t11 = *(signed char *)((a8 + 0x0));
        t12 = ((short)t10 * (short)t11);
        if ((int)((short)t10 * (short)t11) < 0) {
            t12 = (((short)t10 * (short)t11) + 0x7);
        }
        *(unsigned char *)((a9 + 0x0)) = (((t12 >> 1) >> 1) >> 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        return;
    }
}

int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t3;
    int t0;
    int t1;
    int t2;
    int t66;
    int t4;
    int t64;
    int t5;
    int t62;
    int t10;
    int t6;
    int t7;
    int t8;
    int t60;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t41;
    int t56;
    int t42;
    int t52;
    int t43;
    int t49;
    int t46;
    int t44;
    int t45;

    t3 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)0x8C20CCC4;
            t2 = strncmp((t0 + a4), t1, 0x4);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)a5) break;
                continue;
            }
            break;
        }
        t3 = t0;
    }
    t66 = 0xFFFFFFFF;
    if (t3 != a5) {
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t64 = 0xFFFFFFFF;
        if (t4 == 0) {
            t5 = *(short *)((((t3 + 0x8) + a4) + 0x0));
            t62 = 0xFFFFFFFF;
            if ((int)(unsigned short)t5 <= (int)0x1) {
                t10 = 0x0;
                if ((int)a5 > 0) {
                    t6 = 0x0;
                    for (;;) {
                        t7 = *(int *)0x8C20CCCC;
                        t8 = strncmp((t6 + a4), t7, 0x4);
                        if (t8 != 0) {
                            t6 = (t6 + 0x1);
                            if ((int)t6 >= (int)a5) break;
                            continue;
                        }
                        break;
                    }
                    t10 = t6;
                }
                t60 = 0xFFFFFFFF;
                if (t10 != a5) {
                    t11 = *(signed char *)((((t10 + 0x4) + a4) + 0x1));
                    t12 = *(signed char *)((((t10 + 0x4) + a4) + 0x0));
                    t13 = *(signed char *)((((t10 + 0x4) + a4) + 0x2));
                    t14 = *(signed char *)((((t10 + 0x4) + a4) + 0x3));
                    *(unsigned short *)((a6 + 0x0)) = (t10 + 0x8);
                    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
                    t15 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x1));
                    t16 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x2));
                    t17 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x0));
                    t18 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x3));
                    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)t15 << 8) | ((unsigned char)t16 << 16)) | (((unsigned char)t18 << 16) << 8)) | (unsigned char)t17);
                    t19 = *(short *)((((t3 + 0x8) + a4) + 0x2));
                    *(unsigned char *)((a10 + 0x0)) = t19;
                    t20 = *(short *)((((t3 + 0x8) + a4) + 0xE));
                    *(unsigned char *)((a8 + 0x0)) = t20;
                    t21 = *(short *)((((t3 + 0x8) + a4) + 0xC));
                    *(unsigned char *)((a9 + 0x0)) = t21;
                    t22 = *(signed char *)((a9 + 0x0));
                    t23 = (int)((int)(((((unsigned char)t11 << 8) | ((unsigned char)t13 << 16)) | (((unsigned char)t14 << 16) << 8)) | (unsigned char)t12) / (int)t22);
                    *(unsigned int *)((a12 + 0x0)) = t23;
                    *(unsigned int *)((a13 + 0x0)) = 0x1;
                    t24 = *(signed char *)((a8 + 0x0));
                    if (t24 == 16) {
                        *(unsigned short *)((a14 + 0x0)) = 0x0;
                    } else {
                        if (t24 == 8) {
                            *(unsigned short *)((a14 + 0x0)) = 0x1;
                        } else {
                            t25 = *(signed char *)((a8 + 0x0));
                            if (t25 == 4) {
                                t26 = *(signed char *)((a10 + 0x0));
                                *(unsigned char *)((a9 + 0x0)) = (t26 << 1);
                                *(unsigned int *)((a13 + 0x0)) = 0x4;
                                t27 = *(signed char *)((a10 + 0x0));
                                t28 = (int)((unsigned int)((unsigned int)(((((unsigned char)t11 << 8) | ((unsigned char)t13 << 16)) | (((unsigned char)t14 << 16) << 8)) | (unsigned char)t12) >> 1) / (unsigned int)t27);
                                *(unsigned int *)((a12 + 0x0)) = t28;
                                *(unsigned char *)((a8 + 0x0)) = 0x10;
                                *(unsigned short *)((a14 + 0x0)) = 0x2;
                            }
                        }
                    }
                    t41 = *(signed char *)((a8 + 0x0));
                    t56 = 0xFFFFFFFF;
                    if (t41 != 0) {
                        t42 = *(signed char *)((a9 + 0x0));
                        t52 = 0xFFFFFFFF;
                        if (t42 != 0) {
                            t43 = *(signed char *)((a10 + 0x0));
                            t49 = 0xFFFFFFFF;
                            if ((int)t43 > 0) {
                                t46 = 0xFFFFFFFF;
                                if ((int)t43 <= (int)0x2) {
                                    t44 = *(int *)((a11 + 0x0));
                                    t45 = 0x0;
                                    if (t44 == 0) {
                                        t45 = 0xFFFFFFFF;
                                    }
                                    t46 = t45;
                                }
                                t49 = t46;
                            }
                            t52 = t49;
                        }
                        t56 = t52;
                    }
                    t60 = t56;
                }
                t62 = t60;
            }
            t64 = t62;
        }
        t66 = t64;
    }
    return t66;
}

int ADXPD_Create(void)
{
    int t0;
    int t1;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((t0 * 0x34) + 0x8C4762D4) + 0x0));
        if (t1 != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) break;
            continue;
        }
        break;
    }
    t7 = 0x0;
    if (t0 != 8) {
        memset(((t0 * 0x34) + 0x8C4762D4), 0x0, 0x34);
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x0)) = 0x1;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x4)) = t0;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0x8)) = 0x0;
        *(unsigned int *)((((t0 * 0x34) + 0x8C4762D4) + 0xC)) = 0x0;
        ADX_GetCoefficient(0x1F4, 0xAC44, (((t0 * 0x34) + 0x8C4762D4) + 0x30), ((((t0 * 0x34) + 0x8C4762D4) + 0x30) + 0x2));
        memset((((t0 * 0x34) + 0x8C4762D4) + 0x28), 0x0, 0x8);
        t7 = ((t0 * 0x34) + 0x8C4762D4);
    }
    return t7;
}

int ADXPD_ExecHndl(int a4)
{
    int t0;
    int t1;
    int t20;
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
    int t15;
    int t16;
    int t18;
    int t17;
    int t19;

    t0 = *(int *)((a4 + 0xC));
    if (t0 == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t1 = *(int *)((a4 + 0xC));
    t20 = t1;
    if (t1 == 2) {
        t2 = *(int *)((a4 + 0x14));
        if (t2 == 1) {
            t3 = *(short *)(((a4 + 0x30) + 0x2));
            t4 = *(short *)(((a4 + 0x30) + 0x0));
            t5 = *(int *)((a4 + 0x20));
            t6 = *(int *)((a4 + 0x1C));
            t7 = *(int *)((a4 + 0x18));
            t8 = ADX_DecodeMonoFloat(t7, t6, t5, (a4 + 0x28), t4, t3);
            *(unsigned int *)((a4 + 0x10)) = t8;
            t19 = t8;
        } else {
            t9 = *(short *)(((a4 + 0x30) + 0x2));
            t10 = *(short *)(((a4 + 0x30) + 0x0));
            t11 = *(int *)((a4 + 0x24));
            t12 = *(int *)((a4 + 0x1C));
            t13 = *(int *)((a4 + 0x20));
            t14 = *(int *)((a4 + 0x18));
            t15 = ADX_DecodeSteFloat(t14, t12, t13, (a4 + 0x28), t11, ((a4 + 0x28) + 0x4), t10, t9);
            *(unsigned int *)((a4 + 0x10)) = t15;
            t16 = ((~(((~t15) + 0x1) & 0x1)) + 0x1);
            if ((int)t15 >= 0) {
                t16 = (t15 & 0x1);
            }
            t18 = t16;
            if (t16 == 1) {
                t17 = adxpd_error();
                t18 = t17;
            }
            t19 = t18;
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
        t20 = t19;
    }
    return t20;
}

int FUN_0c174768(void)
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

    t0 = *(int *)0x8C47647C;
    if (t0 == 0) {
        t1 = *(int *)0x8C476478;
        *(unsigned short *)(((t1 + 0x8) + 0x0)) = 0x0;
        t2 = *(int *)0x8C476478;
        *(unsigned short *)(((t2 + 0x18) + 0x0)) = 0x6;
        t3 = *(int *)0x8C476478;
        *(unsigned short *)((t3 + 0x0)) = 0x0;
        t4 = *(int *)0x8C476478;
        *(unsigned char *)(((t4 + 0x4) + 0x0)) = 0xFF;
        t5 = *(int *)0x8C476478;
        *(unsigned short *)(((t5 + 0x8) + 0x0)) = 0x0;
        t6 = *(int *)0x8C476478;
        *(unsigned short *)(((t6 + 0x10) + 0x0)) = 0x0;
        t7 = *(int *)0x8C476478;
        *(unsigned short *)(((t7 + 0x18) + 0x0)) = 0x0;
        t8 = *(int *)0x8C476478;
        *(unsigned short *)(((t8 + 0x20) + 0x0)) = 0x0;
        t9 = *(int *)0x8C476478;
        *(unsigned short *)(((t9 + 0x24) + 0x0)) = 0x0;
    }
    t10 = *(signed char *)0xFFC00004;
    *(unsigned char *)0xFFC00004 = (t10 | 0x1);
    return (t10 | 0x1);
}

int FUN_0c1747f4(int a4)
{
    int t0;
    int t1;
    int t2;

    t0 = 0x1C;
    do {
        t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x30);
        if ((int)(unsigned char)(0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) >= (int)0xA) {
            t1 = ((0xF & (((int)(-t0) >= 0) ? (a4 << ((-t0) & 31)) : ((-(int)(-t0) & 31) ? ((unsigned int)a4 >> (-(int)(-t0) & 31)) : 0))) + 0x37);
        }
        t2 = FUN_8c208e6c(t1);
        t0 = (t0 - 4);
    } while ((int)t0 >= 0);
    return t2;
}
