/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int check_cache(int);
int check_caps(int);
int gdDecSubcode(int, int, int, int);
int gdFsGetDrvStatG(int, int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmSetStrideWidth(int);
int kmiGetITPCurrent(int);
int kmiStartupDMA(void);
int kmiWriteRegister(int, int);
int kmtex_TextureSize(int);
int kmyContinueTA(int);
int kmySetupTA(int, int, int, int);
int kmyiSetScreenSize(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int memset(int, int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
float nlInnerProduct(int, int);
float nlPow(float, float);
int nlRand(void);
float nlScalor(int);
int nlkmCreateTextureSurface_stride(int, int, int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndSeqRequest(int);
int set_fat(int, int, int);
int set_vmstime(int, int);
int vecLineCrossXZ(int, ...);
extern int vecMake();
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);
int cpuDblAimArc(int a4, int a5, int a6, int a7);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int kmiCallbackEndOf(int a4, int a5, int a6);
int kmyInitializeJAMMA15KHz(int a4);
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int kmiLaunchQ(int a4);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7);
int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4);
int kmyInitializeNTSC(int a4);
int nlsndStreamInit(int a4, int a5, int a6);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7, int a8);




int kmiCallbackEndOf(int a4, int a5, int a6)
{
    register int t6;
    register int t25;
    register int t38;
    int stk[5];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C202FA0:;
    R13 = (0x8C203420);
    if (((*(int *)((R4 + 0x0))) != 17)) goto L_8C202FB4;
    goto L_8C202FB0;
    L_8C202FB0:;
    R14 = ((*(int *)((R13 + 0x18))));
    goto L_8C202FB6;
    L_8C202FB6:;
    if ((R14 != 0)) goto L_8C202FBE;
    goto L_8C202FBA;
    L_8C202FBA:;
    goto L_8C20323C;
    L_8C20323C:;
    return 0x1;
    L_8C202FBE:;
    t6 = *(int *)((R4 + 0x0));
    R0 = (t6);
    R12 = (0x8C208CA0);
    if ((t6 == 17)) goto L_8C202FE6;
    goto L_8C202FC6;
    L_8C202FC6:;
    if ((R0 == 18)) goto L_8C203020;
    goto L_8C202FCA;
    L_8C202FCA:;
    if ((R0 == 19)) goto L_8C203026;
    goto L_8C202FCE;
    L_8C202FCE:;
    if ((R0 == 25)) goto L_8C203030;
    goto L_8C202FD2;
    L_8C202FD2:;
    if ((R0 == 24)) goto L_8C203036;
    goto L_8C202FD6;
    L_8C202FD6:;
    if ((R0 == 23)) goto L_8C20303C;
    goto L_8C202FDA;
    L_8C202FDA:;
    if ((R0 == 22)) goto L_8C203042;
    goto L_8C202FDE;
    L_8C202FDE:;
    if ((R0 == 21)) goto L_8C203080;
    goto L_8C202FE2;
    L_8C202FE2:;
    goto L_8C20308A;
    L_8C20308A:;
    if (((unsigned short)((*(short *)((R14 + 0x1C))) & (*(short *)((R14 + 0x1E)))) == (unsigned short)(*(short *)((R14 + 0x1C))))) goto L_8C2030A4;
    goto L_8C2030A0;
    L_8C2030A0:;
    goto L_8C20323C;
    L_8C2030A4:;
    R4 = (0x0);
    R6 = (0x8);
    if (((*(int *)((R14 + 0x8))) == 4)) goto L_8C2030B2;
    goto L_8C2030AE;
    L_8C2030AE:;
    goto L_8C2031A0;
    L_8C2031A0:;
    t25 = *(int *)((R14 + 0x20));
    R0 = (t25);
    if ((t25 == 0)) goto L_8C2031B2;
    goto L_8C2031A6;
    L_8C2031A6:;
    if ((R0 == 1)) goto L_8C2031CE;
    goto L_8C2031AA;
    L_8C2031AA:;
    if ((R0 == 2)) goto L_8C2031EA;
    goto L_8C2031AE;
    L_8C2031AE:;
    goto L_8C203204;
    L_8C203204:;
    if (((R6 & (*(int *)((R14 + 0x4)))) == 0)) goto L_8C20320E;
    goto L_8C20320A;
    L_8C20320A:;
    *(unsigned int *)((R13 + 0x1C)) = R4;
    goto L_8C203210;
    L_8C203210:;
    *(unsigned int *)((R14 + 0x24)) = ((int)((unsigned int)((((((*(int *)((R14 + 0x24))) - (*(int *)0xFFD8000C)) << 2) << 2) << 2) << 1) / (unsigned int)0x64));
    *(unsigned int *)((R14 + 0x28)) = R4;
    if (((*(int *)((R14 + 0x18))) == 0)) goto L_8C203236;
    goto L_8C203230;
    L_8C203230:;
    t38 = ((int (*)(int, int, int))((*(int *)((R14 + 0x18)))))(R14, R5, R6);
    goto L_8C203236;
    L_8C203236:;
    kmiStartupDMA();
    goto L_8C20323C;
    L_8C20320E:;
    *(unsigned int *)((R13 + 0x18)) = R4;
    goto L_8C203210;
    L_8C2031EA:;
    *(unsigned short *)((R13 + 0x3C)) = ((*(short *)((R13 + 0x3C))) - 1);
    *(unsigned short *)((R13 + 0x3A)) = ((*(short *)((R13 + 0x3A))) + 0x1);
    *(unsigned short *)((R13 + 0x3A)) = ((*(short *)((R13 + 0x3A))) & 0x1F);
    *(unsigned int *)((R13 + 0x28)) = R4;
    R0 = (0x3A);
    goto L_8C203204;
    L_8C2031CE:;
    *(unsigned short *)((R13 + 0x36)) = ((*(short *)((R13 + 0x36))) - 1);
    *(unsigned short *)((R13 + 0x34)) = ((*(short *)((R13 + 0x34))) + 0x1);
    *(unsigned short *)((R13 + 0x34)) = ((*(short *)((R13 + 0x34))) & 0x1F);
    *(unsigned int *)((R13 + 0x24)) = R4;
    R0 = (0x34);
    goto L_8C203204;
    L_8C2031B2:;
    *(unsigned short *)((R13 + 0x30)) = ((*(short *)((R13 + 0x30))) - 1);
    *(unsigned short *)((R13 + 0x2E)) = ((*(short *)((R13 + 0x2E))) + 0x1);
    *(unsigned short *)((R13 + 0x2E)) = ((*(short *)((R13 + 0x2E))) & 0x1F);
    *(unsigned int *)((R13 + 0x20)) = R4;
    R0 = (0x2E);
    goto L_8C203204;
    L_8C2030B2:;
    if (((unsigned int)(*(int *)((R14 + 0x30))) > (unsigned int)0x0)) goto L_8C2030BE;
    goto L_8C2030BA;
    L_8C2030BA:;
    goto L_8C2031A0;
    L_8C2030BE:;
    R5 = (0x1);
    if (((R6 & (*(int *)((R14 + 0x4)))) == 0)) goto L_8C203112;
    goto L_8C2030C6;
    L_8C2030C6:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) - 1);
    *(unsigned int *)((R14 + 0x10)) = ((*(int *)((R14 + 0x10))) + (*(int *)((R14 + 0x34))));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x38))));
    *(unsigned short *)((R14 + 0x1E)) = R4;
    *(volatile int *)0xFFA0002C;
    *(unsigned int *)0xFFA0002C = R4;
    *(unsigned int *)0xFFA00020 = (*(int *)((R14 + 0x10)));
    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((R14 + 0xC))) >> 2) >> 2) >> 1);
    *(unsigned int *)0xFFA0002C = 0x12C1;
    *(unsigned int *)0xFFA00040 = 0x8201;
    *(unsigned int *)0xA05F6800 = (*(int *)((R14 + 0x14)));
    *(unsigned int *)0xA05F6804 = (*(int *)((R14 + 0xC)));
    R2 = (0xA05F6808);
    goto L_8C203154;
    L_8C203154:;
    *(unsigned int *)((R2 + 0x0)) = R5;
    goto L_8C20323C;
    L_8C203112:;
    *(unsigned int *)((R14 + 0x30)) = ((*(int *)((R14 + 0x30))) - 1);
    *(unsigned int *)((R14 + 0x10)) = ((*(int *)((R14 + 0x10))) + (*(int *)((R14 + 0x34))));
    *(unsigned int *)((R14 + 0x14)) = ((*(int *)((R14 + 0x14))) + (*(int *)((R14 + 0x38))));
    *(unsigned short *)((R14 + 0x1E)) = R4;
    *(unsigned int *)0xA05F7C80 = 0x6702007F;
    *(unsigned int *)0xA05F7C00 = (*(int *)((R14 + 0x14)));
    *(unsigned int *)0xA05F7C04 = (*(int *)((R14 + 0x10)));
    *(unsigned int *)0xA05F7C08 = (*(int *)((R14 + 0xC)));
    *(unsigned int *)0xA05F7C0C = (*(int *)((R14 + 0x3C)));
    *(unsigned int *)0xA05F7C10 = R4;
    *(unsigned int *)0xA05F7C14 = R5;
    R2 = (0xA05F7C18);
    goto L_8C203154;
    L_8C203080:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x10));
    goto L_8C203084;
    L_8C203084:;
    *(unsigned short *)((R14 + 0x1E)) = R0;
    kmiGetITPCurrent((*(int *)((R14 + 0x30))));
    goto L_8C20308A;
    L_8C203042:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x8));
    goto L_8C203084;
    L_8C20303C:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x4));
    goto L_8C203084;
    L_8C203036:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x2));
    goto L_8C203084;
    L_8C203030:;
    R0 = (((*(short *)((R14 + 0x1E))) | 0x1));
    goto L_8C203084;
    L_8C203026:;
    R3 = (0x100);
    goto L_8C203028;
    L_8C203028:;
    *(unsigned short *)((R14 + 0x1E)) = ((*(short *)((R14 + 0x1E))) | R3);
    goto L_8C20308A;
    L_8C203020:;
    R3 = (0x8000);
    goto L_8C203028;
    L_8C202FE6:;
    R3 = (0x4000);
    goto L_8C203028;
    L_8C202FB4:;
    R14 = ((*(int *)((R13 + 0x1C))));
    goto L_8C202FB6;
}

int kmyInitializeJAMMA15KHz(int a4)
{
    int t14;
    int t55;
    int t62;
    int t2;
    int t8;
    int t17;
    int t23;
    int t29;
    int stk[65];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x353;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t2 = *(int *)0x8C45EE2C, (t2 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 24)) = 0x218;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x10C;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x8C;
    *(unsigned int *)(((int)stk + 8)) = 0x334;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t8 = *(int *)0x8C45EE2C, (t8 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 16)) = 0x24;
        *(unsigned int *)(((int)stk + 20)) = 0x214;
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x12;
        *(unsigned int *)(((int)stk + 20)) = 0x10A;
    }
    *(unsigned int *)(((int)stk + 28)) = 0x57;
    t14 = 0x102;
    if (((*(int *)0x8C45EE2C) & 32) != 0) {
        t14 = 0x104;
    }
    *(unsigned int *)(((int)stk + 120)) = t14;
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t17 = *(int *)0x8C45EE2C, (t17 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 32)) = 0xC;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x6;
    }
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t23 = *(int *)0x8C45EE2C, (t23 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 36)) = 0x16C;
    } else {
        *(unsigned int *)(((int)stk + 36)) = 0x319;
    }
    if ((((*(int *)0x8C45EE2C) & 0x1) != 1) && ((t29 = *(int *)0x8C45EE2C, (t29 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 40)) = 0x1F;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x1;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    if (((*(int *)0x8C45EE2C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 52)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 52)) = 0x0;
        }
    } else {
        if (((*(int *)0x8C45EE2C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if (((*(int *)0x8C45EE2C) & 16) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 252)) = 0xA0;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    if (((*(int *)0x8C45EE2C) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 244)) = 0x17;
        } else {
            *(unsigned int *)(((int)stk + 244)) = 0x16;
        }
    } else {
        if (((*(int *)0x8C45EE2C) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x17;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x16;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x17;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x16;
            }
        }
    }
    *(unsigned int *)(((int)stk + 248)) = 0x17;
    *(unsigned int *)0x8C45EEE0 = 0xF0;
    t55 = *(int *)(((int)stk + 16));
    *(unsigned int *)0x8C45EED8 = ((((int)((unsigned int)((int)((unsigned int)t55 + (unsigned int)0x0)) + ((((int)0x0 > (int)t55)) ? 1u : 0u))) >> 1) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t62 = ((int (*)(int, int, int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), 0x0, 0x17, 0x16);
    return 0x0;
}

int gdFsGetStatG(int a4, int a5, int a6, int a7)
{
    int currentActiveHandleAddress;
    int transferQueryResult;
    int driveStatusQueryResult;
    int errorCode;
    int globalStateAddress;
    int globalErrorCallbackResult;
    int handleErrorCallbackResult;
    int completedRequestKind;
    int readCompletionCallbackResult;
    int subcodeDecoded;
    int followupCommandRequestId;
    int statusWorkspace[18];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int transferCompleteStatus;
    int driverStatusInfoAddress;
    int commandStatus;
    int zeroValue;
    int globalStatePointerAddress;
    int activeHandleAddress;
    int T_;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1DD3CE:;
    *(unsigned int *)(((*(int *)0x8C20C204) + 0x20)) = 0x1;
    currentActiveHandleAddress = *(int *)(((*(int *)0x8C20C204) + 0x1C));
    zeroValue = (0x0);
    globalStatePointerAddress = (0x8C20C204);
    activeHandleAddress = (currentActiveHandleAddress);
    if ((currentActiveHandleAddress != 0)) goto L_8C1DD3F4;
    goto L_8C1DD3F0;
    L_8C1DD3F0:;
    R4 = (0x0);
    goto L_8C1DD3F6;
    L_8C1DD3F6:;
    driverStatusInfoAddress = ((((int)statusWorkspace + 4) + 0x1C));
    commandStatus = ((((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0xC))) + 0x10)))))(R4, (((int)statusWorkspace + 4) + 0x1C), R6, R7)));
    if ((activeHandleAddress != 0)) goto L_8C1DD40E;
    goto L_8C1DD40A;
    L_8C1DD40A:;
    goto L_8C1DD63C;
    L_8C1DD63C:;
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x20)) = zeroValue;
    return commandStatus;
    L_8C1DD40E:;
    R0 = (commandStatus);
    transferCompleteStatus = (0x2);
    if ((commandStatus == 0)) goto L_8C1DD446;
    goto L_8C1DD416;
    L_8C1DD416:;
    if ((R0 == 1)) goto L_8C1DD446;
    goto L_8C1DD41A;
    L_8C1DD41A:;
    if ((R0 != 65)) goto L_8C1DD422;
    goto L_8C1DD41E;
    L_8C1DD41E:;
    goto L_8C1DD540;
    L_8C1DD540:;
    transferQueryResult = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0xC))) + 0x24)))))((*(int *)((activeHandleAddress + 0x3C))), ((int)statusWorkspace + 4), R6, R7);
    R4 = (transferQueryResult);
    if ((transferQueryResult != 0)) goto L_8C1DD568;
    goto L_8C1DD552;
    L_8C1DD552:;
    if (((int)(*(int *)(((int)statusWorkspace + 4))) <= 0)) goto L_8C1DD55E;
    goto L_8C1DD558;
    L_8C1DD558:;
    *(unsigned short *)((activeHandleAddress + 0x4A)) = zeroValue;
    goto L_8C1DD562;
    L_8C1DD562:;
    *(unsigned int *)((activeHandleAddress + 0x18)) = (*(int *)((activeHandleAddress + 0x20)));
    goto L_8C1DD63C;
    L_8C1DD55E:;
    *(unsigned short *)((activeHandleAddress + 0x4A)) = transferCompleteStatus;
    goto L_8C1DD562;
    L_8C1DD568:;
    if ((R4 != 1)) goto L_8C1DD63C;
    goto L_8C1DD56E;
    L_8C1DD56E:;
    *(unsigned int *)((activeHandleAddress + 0x18)) = (*(int *)(((int)statusWorkspace + 4)));
    goto L_8C1DD63C;
    L_8C1DD422:;
    if ((R0 != 4)) goto L_8C1DD42A;
    goto L_8C1DD426;
    L_8C1DD426:;
    goto L_8C1DD574;
    L_8C1DD574:;
    *(unsigned int *)((activeHandleAddress + 0x40)) = (*(int *)((driverStatusInfoAddress + 0x8)));
    if (((*(short *)((activeHandleAddress + 0x48))) != 1)) goto L_8C1DD63C;
    goto L_8C1DD582;
    L_8C1DD582:;
    *(unsigned int *)((activeHandleAddress + 0x18)) = (*(int *)((driverStatusInfoAddress + 0x0)));
    goto L_8C1DD63C;
    L_8C1DD42A:;
    if ((R0 != 67)) goto L_8C1DD432;
    goto L_8C1DD42E;
    L_8C1DD42E:;
    goto L_8C1DD63C;
    L_8C1DD432:;
    if ((R0 != 5)) goto L_8C1DD43A;
    goto L_8C1DD436;
    L_8C1DD436:;
    goto L_8C1DD588;
    L_8C1DD588:;
    *(unsigned short *)((activeHandleAddress + 0x50)) = commandStatus;
    *(unsigned short *)((activeHandleAddress + 0x52)) = (*(int *)((driverStatusInfoAddress + 0x0)));
    *(unsigned int *)((activeHandleAddress + 0x44)) = (*(int *)((driverStatusInfoAddress + 0x4)));
    *(unsigned int *)((activeHandleAddress + 0x3C)) = zeroValue;
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x1C)) = zeroValue;
    if (((*(short *)((activeHandleAddress + 0x52))) != -29)) goto L_8C1DD5F0;
    goto L_8C1DD5A6;
    L_8C1DD5A6:;
    if (((*(int *)((activeHandleAddress + 0x44))) != 58)) goto L_8C1DD5E0;
    goto L_8C1DD5AE;
    L_8C1DD5AE:;
    driveStatusQueryResult = gdFsGetDrvStatG(R4, R5, R6, R7);
    R4 = (driveStatusQueryResult);
    if ((driveStatusQueryResult == 6)) goto L_8C1DD5BC;
    goto L_8C1DD5B8;
    L_8C1DD5B8:;
    if ((R4 != 0)) goto L_8C1DD5F0;
    goto L_8C1DD5BC;
    L_8C1DD5BC:;
    *(unsigned short *)((activeHandleAddress + 0x52)) = 0xFFFFFFE9;
    goto L_8C1DD5F0;
    L_8C1DD5F0:;
    errorCode = *(short *)((activeHandleAddress + 0x52));
    R4 = (errorCode);
    if ((errorCode == -23)) goto L_8C1DD600;
    goto L_8C1DD5FA;
    L_8C1DD5FA:;
    if ((R4 != -33)) goto L_8C1DD606;
    goto L_8C1DD600;
    L_8C1DD600:;
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x34)) = 0x1;
    goto L_8C1DD606;
    L_8C1DD606:;
    if (((*(int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x24))) == 0)) goto L_8C1DD61C;
    goto L_8C1DD60E;
    L_8C1DD60E:;
    globalStateAddress = *(int *)((globalStatePointerAddress + 0x0));
    globalErrorCallbackResult = ((int (*)(int, int, int, int))((*(int *)((globalStateAddress + 0x24)))))((*(int *)((globalStateAddress + 0x28))), (*(short *)((activeHandleAddress + 0x52))), R6, R7);
    goto L_8C1DD61C;
    L_8C1DD61C:;
    if (((*(int *)((activeHandleAddress + 0x34))) == 0)) goto L_8C1DD63C;
    goto L_8C1DD622;
    L_8C1DD622:;
    handleErrorCallbackResult = ((int (*)(int, int, int, int))((*(int *)((activeHandleAddress + 0x34)))))((*(int *)((activeHandleAddress + 0x38))), (*(short *)((activeHandleAddress + 0x52))), R6, R7);
    goto L_8C1DD63C;
    L_8C1DD5E0:;
    if (((*(int *)((activeHandleAddress + 0x44))) != 0x104)) goto L_8C1DD5F0;
    goto L_8C1DD5EA;
    L_8C1DD5EA:;
    *(unsigned short *)((activeHandleAddress + 0x52)) = 0xFFFFFFDB;
    goto L_8C1DD5F0;
    L_8C1DD43A:;
    if ((R0 != 64)) goto L_8C1DD442;
    goto L_8C1DD43E;
    L_8C1DD43E:;
    goto L_8C1DD588;
    L_8C1DD442:;
    goto L_8C1DD630;
    L_8C1DD630:;
    *(unsigned short *)((activeHandleAddress + 0x50)) = (unsigned char)commandStatus;
    *(unsigned int *)((activeHandleAddress + 0x3C)) = zeroValue;
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x1C)) = zeroValue;
    goto L_8C1DD63C;
    L_8C1DD446:;
    completedRequestKind = *(short *)((activeHandleAddress + 0x48));
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x1C)) = zeroValue;
    *(unsigned short *)((activeHandleAddress + 0x50)) = commandStatus;
    *(unsigned int *)((activeHandleAddress + 0x3C)) = zeroValue;
    *(unsigned short *)((activeHandleAddress + 0x48)) = zeroValue;
    R4 = (completedRequestKind);
    if ((commandStatus == 1)) goto L_8C1DD462;
    goto L_8C1DD45E;
    L_8C1DD45E:;
    goto L_8C1DD63C;
    L_8C1DD462:;
    R0 = (R4);
    if ((R4 != 1)) goto L_8C1DD48C;
    goto L_8C1DD468;
    L_8C1DD468:;
    *(unsigned int *)((activeHandleAddress + 0x18)) = (*(int *)((driverStatusInfoAddress + 0x0)));
    *(unsigned int *)((activeHandleAddress + 0x14)) = ((*(int *)((activeHandleAddress + 0x14))) + (*(int *)((activeHandleAddress + 0x1C))));
    *(unsigned short *)((activeHandleAddress + 0x4A)) = transferCompleteStatus;
    if (((*(int *)((activeHandleAddress + 0x24))) != 0)) goto L_8C1DD482;
    goto L_8C1DD47E;
    L_8C1DD47E:;
    goto L_8C1DD63C;
    L_8C1DD482:;
    readCompletionCallbackResult = ((int (*)(int, int, int, int))((*(int *)((activeHandleAddress + 0x24)))))((*(int *)((activeHandleAddress + 0x28))), R5, R6, R7);
    goto L_8C1DD63C;
    L_8C1DD48C:;
    if ((R0 == 3)) goto L_8C1DD4A2;
    goto L_8C1DD490;
    L_8C1DD490:;
    R0 = (R4);
    if ((R4 != 4)) goto L_8C1DD4A8;
    goto L_8C1DD496;
    L_8C1DD496:;
    *(unsigned int *)((activeHandleAddress + 0x18)) = (*(int *)((activeHandleAddress + 0x20)));
    *(unsigned int *)((activeHandleAddress + 0x14)) = ((*(int *)((activeHandleAddress + 0x14))) + (*(int *)((activeHandleAddress + 0x1C))));
    goto L_8C1DD4A2;
    L_8C1DD4A2:;
    *(unsigned short *)((activeHandleAddress + 0x4A)) = transferCompleteStatus;
    goto L_8C1DD63C;
    L_8C1DD4A8:;
    if ((R0 != 7)) goto L_8C1DD4F4;
    goto L_8C1DD4AC;
    L_8C1DD4AC:;
    subcodeDecoded = (gdDecSubcode(((*(int *)((globalStatePointerAddress + 0x0))) + 0x40), (((int)statusWorkspace + 4) + 0x4), R6, R7)) == 0;
    if (subcodeDecoded) goto L_8C1DD4D0;
    goto L_8C1DD4BE;
    L_8C1DD4BE:;
    *(unsigned short *)((activeHandleAddress + 0x50)) = 0x5;
    *(unsigned short *)((activeHandleAddress + 0x52)) = 0xFFFFFFED;
    *(unsigned int *)((activeHandleAddress + 0x44)) = zeroValue;
    goto L_8C1DD5F0;
    L_8C1DD4D0:;
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x8))) + 0x0)) = (*(int *)(((int)statusWorkspace + 8)));
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x8))) + 0x4)) = (*(int *)(((int)statusWorkspace + 12)));
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x8))) + 0x8)) = (*(int *)(((int)statusWorkspace + 16)));
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x8))) + 0xC)) = (*(int *)(((int)statusWorkspace + 20)));
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x8))) + 0x10)) = ((*(int *)(((int)statusWorkspace + 24))) & 0xFFFFFF);
    goto L_8C1DD63C;
    L_8C1DD4F4:;
    if ((R4 == 8)) goto L_8C1DD4FE;
    goto L_8C1DD4FA;
    L_8C1DD4FA:;
    goto L_8C1DD63C;
    L_8C1DD4FE:;
    followupCommandRequestId = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0xC))) + 0x48)))))(0x8C45A13C, 0x8C45A140, (*(int *)((activeHandleAddress + 0x4))), 0x8C45A144);
    R4 = (followupCommandRequestId);
    if ((followupCommandRequestId == 0)) goto L_8C1DD52A;
    goto L_8C1DD516;
    L_8C1DD516:;
    *(unsigned int *)((activeHandleAddress + 0x3C)) = R4;
    *(unsigned short *)((activeHandleAddress + 0x50)) = 0x4;
    *(unsigned short *)((activeHandleAddress + 0x48)) = 0x6;
    *(unsigned int *)(((*(int *)((globalStatePointerAddress + 0x0))) + 0x1C)) = activeHandleAddress;
    goto L_8C1DD63C;
    L_8C1DD52A:;
    *(unsigned short *)((activeHandleAddress + 0x50)) = 0x5;
    *(unsigned short *)((activeHandleAddress + 0x52)) = 0xFFFFFFE4;
    *(unsigned int *)((activeHandleAddress + 0x44)) = zeroValue;
    *(unsigned int *)(((*(int *)((activeHandleAddress + 0x4))) + 0x0)) = zeroValue;
    goto L_8C1DD5F0;
    L_8C1DD3F4:;
    R4 = ((*(int *)((activeHandleAddress + 0x3C))));
    goto L_8C1DD3F6;
}



int kmSetBackGround(int a4, int a5, int a6, int a7, int a8, float f4)
{
    float u68;
    int t31;
    float u11;
    float u13;
    float u15;
    float u17;
    float u19;
    float u21;
    float u23;
    float u25;
    float u34;
    float u36;
    float u38;
    float u40;
    float u42;
    float u44;
    float u46;
    float u48;
    int t76;
    int t77;
    int t78;
    int t79;
    float u58;

    *(unsigned int *)0x8C4607EC = ((*(int *)((a4 + 0x0))) & 0xFFFFFF3F);
    *(unsigned int *)0x8C4607F0 = (*(int *)((a4 + 0x4)));
    *(unsigned int *)0x8C4607F4 = (*(int *)((a4 + 0x8)));
    *(unsigned int *)0x8C4607F8 = (*(int *)((a4 + 0xC)));
    u68 = f4;
    if ((a5 == 7) || ((a5 == 8) || ((a5 == 2) || ((a5 == 10) || ((a5 == 13) || (a5 == 14)))))) {
        if (((*(int *)0x8C4607EC) & 0x30) != 32) {
            *(unsigned int *)0x8C4607FC = 0xFFFFFFFF;
            *(unsigned int *)0x8C460800 = 0xFFFFFFFF;
            u58 = f4;
        } else {
            t31 = (a4 + 0x10);
            if ((((*(int *)0x8C4607EC) & 4) != 0) || (a5 == 10)) {
                u11 = *(float *)(((a4 + 0x20) + 0x10));
                u13 = (u11 * 255.0f);
                if (!(2.14748365e+09f > (u11 * 255.0f))) {
                    u13 = ((u11 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u15 = *(float *)(((a4 + 0x20) + 0x14));
                u17 = (u15 * 255.0f);
                if (!(2.14748365e+09f > (u15 * 255.0f))) {
                    u17 = ((u15 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u19 = *(float *)(((a4 + 0x20) + 0x18));
                u21 = (u19 * 255.0f);
                if (!(2.14748365e+09f > (u19 * 255.0f))) {
                    u21 = ((u19 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                u23 = *(float *)(((a4 + 0x20) + 0x1C));
                u25 = (u23 * 255.0f);
                if (!(2.14748365e+09f > (u23 * 255.0f))) {
                    u25 = ((u23 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
                }
                *(unsigned int *)0x8C460800 = (((((((int)u13 & 0xFF) << 16) << 8) | (((int)u17 & 0xFF) << 16)) | (((int)u21 & 0xFF) << 8)) | ((int)u25 & 0xFF));
                t31 = (a4 + 0x20);
            }
            u34 = *(float *)((t31 + 0x4));
            u36 = (u34 * 255.0f);
            if (!(2.14748365e+09f > (u34 * 255.0f))) {
                u36 = ((u34 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u38 = *(float *)((t31 + 0x8));
            u40 = (u38 * 255.0f);
            if (!(2.14748365e+09f > (u38 * 255.0f))) {
                u40 = ((u38 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u42 = *(float *)((t31 + 0x0));
            u44 = (u42 * 255.0f);
            if (!(2.14748365e+09f > (u42 * 255.0f))) {
                u44 = ((u42 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            u46 = *(float *)((t31 + 0xC));
            u48 = (u46 * 255.0f);
            if (!(2.14748365e+09f > (u46 * 255.0f))) {
                u48 = ((u46 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
            }
            *(unsigned int *)0x8C4607FC = ((((((int)u36 & 0xFF) << 16) | (((int)u40 & 0xFF) << 8)) | ((((int)u44 & 0xFF) << 16) << 8)) | ((int)u48 & 0xFF));
            u58 = 255.0f;
        }
        u68 = u58;
    }
    if ((a5 == 15) || (a5 == 16)) {
        *(unsigned int *)0x8C4607FC = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0x8C460800 = (*(int *)((a4 + 0x14)));
    }
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) | 0x1);
    *(float *)0x8C471E28 = (*(float *)((a6 + 0xC)));
    t76 = ((int (*)(int, int, int, int, float))((*(int *)(((a5 << 2) + 0x8C20C6D8)))))(a4, a6, a7, a8, u68);
    t77 = 0x0;
    for (;;) {
        t78 = *(int *)(((0x8C471E20 + t77) + 0x0));
        t79 = (0x8C471E20 + t77);
        t77 = (t77 + 0x4);
        *(unsigned int *)((t79 + 0x0)) = (t78 | 0x1);
        if ((unsigned int)t77 >= (unsigned int)0x8) {
            break;
        }
    }
    *(unsigned int *)0x8C471E18 = ((*(int *)0x8C471E18) & 0xFFFFFFFE);
    return t76;
}

int kmyInitializeNTSC(int a4)
{
    int t35;
    int t42;
    int stk[66];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    *(unsigned int *)(((int)stk + 12)) = 0x359;
    if (((a4 & 0x1) != 1) && (((0x2C & a4) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 24)) = 0x20C;
    } else {
        *(unsigned int *)(((int)stk + 24)) = 0x106;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x7E;
    *(unsigned int *)(((int)stk + 8)) = 0x345;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 16)) = 0x24;
        *(unsigned int *)(((int)stk + 20)) = 0x204;
    } else {
        *(unsigned int *)(((int)stk + 16)) = 0x12;
        *(unsigned int *)(((int)stk + 20)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 28)) = 0x3F;
    if ((0x20 & a4) != 0) {
        *(unsigned int *)(((int)stk + 120)) = 0x104;
    } else {
        *(unsigned int *)(((int)stk + 120)) = 0x102;
    }
    *(unsigned int *)(((int)stk + 124)) = 0x15;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 32)) = 0x6;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x3;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 36)) = 0x16C;
    } else {
        *(unsigned int *)(((int)stk + 36)) = 0x319;
    }
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 40)) = 0x1F;
    } else {
        *(unsigned int *)(((int)stk + 40)) = 0xF;
    }
    *(unsigned int *)(((int)stk + 44)) = 0x1;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 52)) = 0x1;
        } else {
            *(unsigned int *)(((int)stk + 52)) = 0x0;
        }
    } else {
        if ((0x2C & a4) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 52)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 52)) = 0x0;
            }
        }
    }
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x16;
    if ((0x10 & a4) != 0) {
        *(unsigned int *)(((int)stk + 112)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 112)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 76)) = 0x1;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 252)) = 0xA4;
    *(unsigned int *)(((int)stk + 104)) = 0x1E0;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 244)) = 0x12;
        } else {
            *(unsigned int *)(((int)stk + 244)) = 0x11;
        }
    } else {
        if ((a4 & 0x2C) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)(((int)stk + 244)) = 0x12;
            } else {
                *(unsigned int *)(((int)stk + 244)) = 0x11;
            }
        }
    }
    *(unsigned int *)(((int)stk + 248)) = 0x12;
    *(unsigned int *)0x8C45EEE0 = 0xF0;
    t35 = *(int *)(((int)stk + 16));
    *(unsigned int *)0x8C45EED8 = ((((int)((unsigned int)((int)((unsigned int)t35 + (unsigned int)0x0)) + ((((int)0x0 > (int)t35)) ? 1u : 0u))) >> 1) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 16)));
    t42 = ((int (*)(int, int, int, int))((*(int *)0x8C45EE34)))(((int)stk + 4), (a4 & 0x1), 0x1, 0x12);
    return 0x0;
}

int nlsndStreamInit(int a4, int a5, int a6)
{
    int t2;
    int t3;
    int t14;
    int t17;
    int t19;
    int t25;
    int t30;
    int t48;
    int t51;
    int t55;
    int t56;
    int t59;
    int t61;
    int t63;
    int t70;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C0F6160:;
    *(unsigned short *)(((int)stk + 12)) = R4;
    *(unsigned short *)(((int)stk + 4)) = R5;
    if (((short)R6 == 0)) goto L_8C0F61B0;
    goto L_8C0F6180;
    L_8C0F6180:;
    R0 = (0xFFFFFFFE);
    goto L_8C0F6384;
    L_8C0F6384:;
    return R0;
    L_8C0F61B0:;
    t2 = *(short *)(((int)stk + 4));
    t3 = *(short *)(((int)stk + 12));
    R14 = (((t2 << 1) + t3));
    R9 = (0x8);
    if (((int)(short)((t2 << 1) + t3) <= (int)0x8)) goto L_8C0F61D0;
    goto L_8C0F61C0;
    L_8C0F61C0:;
    R0 = (0xFFFFFFFF);
    goto L_8C0F6384;
    L_8C0F61D0:;
    R11 = (0x0);
    R4 = (0x8C454CF4);
    R5 = (0x0);
    goto L_8C0F61D6;
    L_8C0F61D6:;
    if (((*(signed char *)((R4 + 0x0))) != 1)) goto L_8C0F61E0;
    goto L_8C0F61DC;
    L_8C0F61DC:;
    R0 = (0xFFFFFFFD);
    goto L_8C0F6384;
    L_8C0F61E0:;
    t14 = (int)(short)(R5 + 0x1) < (int)R9;
    R4 = ((R4 + 0x1C));
    R5 = ((R5 + 0x1));
    if (t14) goto L_8C0F61D6;
    goto L_8C0F61EA;
    L_8C0F61EA:;
    t17 = *(short *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = t17;
    nlsndG2Write(t17, 0xA08000A0);
    t19 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 12)) = t19;
    nlsndG2Write(t19, 0xA08000A4);
    R4 = (0x8C454CC0);
    R5 = ((nlsndG2Read(0xA080008C)));
    if (((short)R14 == 0)) goto L_8C0F6290;
    goto L_8C0F6212;
    L_8C0F6212:;
    t25 = (int)((unsigned int)(R5 - ((((short)R14 << 2) << 2) << 2)) / (unsigned int)(short)R14);
    *(unsigned int *)((R4 + 0x0)) = (t25 & 0x7FFFFFE0);
    R6 = (0x4000);
    if (((int)(t25 & 0x7FFFFFE0) <= (int)0x4000)) goto L_8C0F6232;
    goto L_8C0F6230;
    L_8C0F6230:;
    *(unsigned int *)((R4 + 0x0)) = R6;
    goto L_8C0F6232;
    L_8C0F6232:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)((R4 + 0x0))) + 0x40);
    t30 = nlsndG2Read((*(int *)0x8C454CB4));
    R4 = (t30);
    if (((0x1F & t30) == 0)) goto L_8C0F6250;
    goto L_8C0F6248;
    L_8C0F6248:;
    R4 = (((0xFFFFFFE0 & R4) + 0x20));
    goto L_8C0F6250;
    L_8C0F6250:;
    R12 = ((((*(int *)0x8C454CB8) - (*(int *)(((int)stk + 4)))) - R4));
    R14 = (0xA0800100);
    goto L_8C0F6294;
    L_8C0F6294:;
    nlsndG2Write((*(int *)(((int)stk + 4))), 0xA08000A8);
    R8 = (0xA0800000);
    T_ = ((((int)(*(int *)(((int)stk + 8))) > 0)));
    goto L_8C0F62A2;
    L_8C0F62A2:;
    R13 = (R11);
    if ((!T_)) goto L_8C0F62F2;
    goto L_8C0F62A6;
    L_8C0F62A6:;
    R10 = (0x1C);
    R3 = (0x8C454CF4);
    goto L_8C0F62AA;
    L_8C0F62AA:;
    *(unsigned char *)(((((short)R13 * (short)R10) + R3) + 0x1)) = R11;
    *(unsigned char *)(((((short)R13 * (short)R10) + R3) + 0x0)) = R11;
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x18)) = R14;
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x4)) = (R12 + R8);
    nlsndG2Write(R12, (R14 + 0xC));
    t48 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x8)) = 0x0;
    nlsndG2Write(0x0, (R14 + 0x10));
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x10)) = (R14 + 0x14);
    *(unsigned int *)(((((short)R13 * (short)R10) + R3) + 0x14)) = (R14 + 0x4);
    t51 = (int)(short)(R13 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R12 = ((R12 - t48));
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x60));
    if (t51) goto L_8C0F62A6;
    goto L_8C0F62F2;
    L_8C0F62F2:;
    t55 = *(int *)(((int)stk + 8));
    t56 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (t55 + t56);
    if (((int)(short)R13 >= (int)(t55 + t56))) goto L_8C0F6352;
    goto L_8C0F6300;
    L_8C0F6300:;
    *(unsigned char *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x1)) = R11;
    *(unsigned char *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x0)) = R11;
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x18)) = R14;
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x8)) = (R12 + R8);
    nlsndG2Write(R12, (R14 + 0x10));
    t59 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x4)) = ((R12 - t59) + R8);
    nlsndG2Write((R12 - t59), (R14 + 0xC));
    t61 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x10)) = (R14 + 0x14);
    *(unsigned int *)(((((short)R13 * (short)0x1C) + 0x8C454CF4) + 0x14)) = (R14 + 0x4);
    t63 = (int)(short)(R13 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R12 = (((R12 - t59) - t61));
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x60));
    if (t63) goto L_8C0F6300;
    goto L_8C0F6352;
    L_8C0F6352:;
    R4 = ((((short)R13 * (short)0x1C) + 0x8C454CF4));
    R5 = (0xFFFFFFFF);
    if (((int)(short)R13 >= (int)R9)) goto L_8C0F637C;
    goto L_8C0F6364;
    L_8C0F6364:;
    *(unsigned char *)((R4 + 0x0)) = R5;
    *(unsigned char *)((R4 + 0x1)) = R11;
    *(unsigned int *)(((R4 + 0x4) + 0x4)) = R5;
    *(unsigned int *)(((R4 + 0x4) + 0x0)) = R5;
    t70 = (int)(short)(R13 + 0x1) < (int)R9;
    R13 = ((R13 + 0x1));
    R4 = ((R4 + 0x1C));
    if (t70) goto L_8C0F6364;
    goto L_8C0F637C;
    L_8C0F637C:;
    nlsndSeqRequest(0xA1);
    R0 = (0x0);
    goto L_8C0F6384;
    L_8C0F6290:;
    *(unsigned int *)(((int)stk + 4)) = R11;
    *(unsigned int *)((R4 + 0x0)) = R11;
    goto L_8C0F6294;
}

int kmiLaunchQ(int a4)
{
    int t0;
    int t9;
    int t16;
    int t40;
    int t90;
    int t114;
    int t115;
    int t100;
    int t75;
    int t65;
    int t55;
    int t50;
    int t45;
    int t95;

    t0 = *(int *)((a4 + 0x8));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 == 1) {
                kmySetupTA((*(int *)((a4 + 0x30))), 0xA05F7C10, 0xA05F7C14, 0xA05F7C18);
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t9 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t9;
                *(unsigned int *)0xA05F6808 = 0x1;
                t75 = t9;
            } else {
                if (t0 == 2) {
                    kmyContinueTA((*(int *)((a4 + 0x30))));
                    *(volatile int *)0xFFA0002C;
                    *(unsigned int *)0xFFA0002C = 0x0;
                    *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                    *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                    *(unsigned int *)0xFFA0002C = 0x12C1;
                    *(unsigned int *)0xFFA00040 = 0x8201;
                    *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                    t16 = *(int *)((a4 + 0xC));
                    *(unsigned int *)0xA05F6804 = t16;
                    *(unsigned int *)0xA05F6808 = 0x1;
                    t65 = t16;
                } else {
                    if (t0 == 3) {
                        kmiWriteRegister(0x8, 0x1);
                        kmiWriteRegister(0x8, 0x0);
                        kmiWriteRegister(0x14C, (*(int *)((a4 + 0x34))));
                        kmiWriteRegister(0x148, (*(int *)((a4 + 0x30))));
                        *(volatile int *)0xFFA0002C;
                        *(unsigned int *)0xFFA0002C = 0x0;
                        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                        *(unsigned int *)0xFFA0002C = 0x12C1;
                        *(unsigned int *)0xFFA00040 = 0x8201;
                        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)0xA05F6804 = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)0xA05F6808 = 0x1;
                        t55 = 0xA05F6808;
                    } else {
                        if (t0 == 5) {
                            *(unsigned int *)0xA05F7C80 = 0x6702007F;
                            *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                            *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                            *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                            *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                            *(unsigned int *)0xA05F7C10 = 0x0;
                            *(unsigned int *)0xA05F7C14 = 0x1;
                            *(unsigned int *)0xA05F7C18 = 0x1;
                            t50 = 0xA05F7C04;
                        } else {
                            if (t0 == 7) {
                                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                *(unsigned int *)0xA05F7C10 = 0x0;
                                *(unsigned int *)0xA05F7C14 = 0x1;
                                *(unsigned int *)0xA05F7C18 = 0x1;
                                t45 = 0xA05F7C04;
                            } else {
                                t40 = t0;
                                if (t0 == 6) {
                                    *(unsigned int *)0xA05F7C80 = 0x6702007F;
                                    *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                                    *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                                    *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                                    *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x30)));
                                    *(unsigned int *)0xA05F7C10 = 0x0;
                                    *(unsigned int *)0xA05F7C14 = 0x1;
                                    *(unsigned int *)0xA05F7C18 = 0x1;
                                    t40 = 0xA05F7C04;
                                }
                                t45 = t40;
                            }
                            t50 = t45;
                        }
                        t55 = t50;
                    }
                    t65 = t55;
                }
                t75 = t65;
            }
            t100 = t75;
        } else {
            if (((*(int *)((a4 + 0x4))) & 8) != 0) {
                *(volatile int *)0xFFA0002C;
                *(unsigned int *)0xFFA0002C = 0x0;
                *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
                *(unsigned int *)0xFFA0002C = 0x12C1;
                *(unsigned int *)0xFFA00040 = 0x8201;
                *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
                t90 = *(int *)((a4 + 0xC));
                *(unsigned int *)0xA05F6804 = t90;
                *(unsigned int *)0xA05F6808 = 0x1;
                t95 = t90;
            } else {
                *(unsigned int *)0xA05F7C80 = 0x6702007F;
                *(unsigned int *)0xA05F7C00 = (*(int *)((a4 + 0x14)));
                *(unsigned int *)0xA05F7C04 = (*(int *)((a4 + 0x10)));
                *(unsigned int *)0xA05F7C08 = (*(int *)((a4 + 0xC)));
                *(unsigned int *)0xA05F7C0C = (*(int *)((a4 + 0x3C)));
                *(unsigned int *)0xA05F7C10 = 0x0;
                *(unsigned int *)0xA05F7C14 = 0x1;
                *(unsigned int *)0xA05F7C18 = 0x1;
                t95 = 0xA05F7C04;
            }
            t100 = t95;
        }
        t115 = t100;
    } else {
        *(volatile int *)0xFFA0002C;
        *(unsigned int *)0xFFA0002C = 0x0;
        *(unsigned int *)0xFFA00020 = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0xFFA00028 = ((unsigned int)((unsigned int)((unsigned int)(*(int *)((a4 + 0xC))) >> 2) >> 2) >> 1);
        *(unsigned int *)0xFFA0002C = 0x12C1;
        *(unsigned int *)0xFFA00040 = 0x8201;
        *(unsigned int *)0xA05F6800 = (*(int *)((a4 + 0x14)));
        t114 = *(int *)((a4 + 0xC));
        *(unsigned int *)0xA05F6804 = t114;
        *(unsigned int *)0xA05F6808 = 0x1;
        t115 = t114;
    }
    *(unsigned int *)((a4 + 0x24)) = (*(int *)0xFFD8000C);
    *(unsigned int *)((a4 + 0x28)) = 0x3;
    return t115;
}

