/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_CheckAu(int);
int ADXB_CheckSpsd(int, int, int);
int ADXB_CheckWav(int);
int ADXB_DecodeHeaderAdx(int, int, int);
int ADXB_DecodeHeaderAiff(int, int, int);
int ADXB_DecodeHeaderAu(int, int, int);
int ADXB_DecodeHeaderSpsd(int, int, int);
int ADXB_DecodeHeaderWav(int, int, int);
int ADXB_Destroy(int);
int ADXB_ExecHndl(int);
int ADXB_ExecOneAiff16(int);
int ADXB_ExecOneAiff8(int);
int ADXB_ExecOneAu16(int);
int ADXB_ExecOneAu8(int);
int ADXB_ExecOneAuUlaw(int);
int ADXB_GetStat(int);
int ADXF_GetFsizeSct(int);
int ADXF_OpenAfs(int, int, int, int);
int ADXF_ReadNw32(int, int, int);
int ADXPD_Create(void);
int ADXRNA_SetOutPan(int, int, int);
int ADXSTM_Tell(int);
int ADXT_SetOutVol(int, int);
int nlSetPaletteData(int, int, int);
int memcmp(int, int, int);
int prefetch(int, int, int, int, float);
int ADXSJD_GetNumChan(int);
int syBtFlWrite(int, int, int);
int syBtFlDeleteSct(int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmMngChkEmptyData(int, int);
int fmMngSctRefresh(int);
int fmMngAddData(int);
int GetMenuMode(int);
int GetRotVec4Ang(float);
int KillColliObj(int);
int LightEffect(int, float);
int Psg_Init(int, int, int);
int Put_Max_Combo(void);
int ResetFadeColor(void);
int ResetSpark(void);
int Sound_Request(int, int);
int StopingCarInit(int, int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int adxStartAfs1(int, int);
int adxsjd_decexec_end(int);
int adxsjd_decexec_start(int);
int buExitForce(void);
int callGoBackAdvertise(void);
int courseCarType(int, int);
int fmcalccrc(int, int);
int gdFsInit(int, int, int, int);
int gdFsSeek(int, int, int);
int gdc_StopStreamSongAll(void);
int kmChangeLatencyModel(int, int);
int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int);
int kmfSetVertexBufferBaseAddress(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitializeHardware(void);
int kmiRegisterPhIntHandler(int);
int kmiWriteRegister(int, int, int);
int kmtex_GetTextureLevel(int, int);
int kmyConvertAddress64to32(int);
int longjmp(int, int);
int memset(int, int, int, int);
int nlCloseEvent(int);
int nlGetMatrix(int, int);
int nlLoadMatrix(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintColor(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetScaleFactor(float);
int nlSetTextureParameter(int);
int nlSprPut(int);
int nlTranslateV(int);
int nlsndStreamSetHdChs(int, int);
int ovLibDeleteTbl(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(int, int, int, float, float, float);
int pfSize(float, float);
int psgSetState(int, int, int, int);
int replay(int);
int set_event(int, int, int, int);
int setjmp(int);
int syBtCfgSet(int, int);
int syCfgSetSoundMode(int);
int vmsfs_c_getstate(int);


void p2_cache_set(void)
{
    int t0;

    *(unsigned int *)0xFF00001C = 0x0;
    t0 = 0xF4000000;
    do {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x20);
    } while ((int)t0 < (int)0xF4004000);
    *(unsigned int *)0xFF00001C = 0x800;
    *(unsigned int *)0xFF00001C = 0x0;
}


int gdFsGetTokenSize(int a4, int a5, int a6)
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
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((t0 + 0x0));
        if (t3 == 0) break;
        t1 = a5;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            if (t4 == 0) break;
            t5 = *(signed char *)((t1 + 0x0));
            t6 = *(signed char *)((t0 + 0x0));
            if (t6 != t5) {
                t1 = (t1 + 0x1);
                continue;
            }
            return t2;
        }
        t2 = (t2 + 0x1);
        t0 = (t0 + 0x1);
    }
    return t2;
}


int pdVmsLcdBltAsmFlipV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xBA);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x80;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = ((unsigned int)t4 >> 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 + 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 - 12);
    } while (t0 != 0);
    return t7;
}


int pdVmsLcdBltAsmFlipH(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0x5);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t4 = (t4 << 1);
                t6 = (t6 - 0x1);
            } while (t6 != 0);
            *(unsigned char *)((t1 + 0x0)) = t5;
            t1 = (t1 - 1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
        t1 = (t1 + 0xC);
    } while (t0 != 0);
    return t7;
}


int pdVmsLcdBltAsmFlipHV(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    t0 = 0x20;
    t1 = (a4 + 0xC0);
    t2 = a5;
    do {
        t3 = 0x6;
        do {
            t4 = 0x1;
            t5 = 0x0;
            t6 = 0x8;
            do {
                t7 = *(signed char *)((t2 + 0x0));
                t2 = (t2 + 0x1);
                if ((t7 & 8) != 0) {
                    t5 = (t5 | t4);
                }
                t6 = (t6 - 0x1);
                t4 = (t4 << 1);
            } while (t6 != 0);
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = t5;
            t1 = (t1 - 0x1);
            t3 = (t3 - 0x1);
        } while (t3 != 0);
        t0 = (t0 - 0x1);
    } while (t0 != 0);
    return t7;
}


void check_caps(int a4)
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

    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x0));
    if ((int)t1 >= (int)0x1) {
        if ((int)t1 <= (int)0x7FF) {
            t2 = *(int *)((t0 + 0x0));
            t3 = *(int *)((t0 + 0x8));
            if (t2 == t3) {
                t4 = *(int *)((t0 + 0xC));
                if ((int)t4 >= 0) {
                    t5 = *(int *)((t0 + 0x0));
                    if ((int)t4 < (int)t5) {
                        t6 = *(int *)((t0 + 0x14));
                        if ((int)t6 >= 0) {
                            t7 = *(int *)((t0 + 0x0));
                            if ((int)t6 < (int)t7) {
                                t8 = *(int *)((t0 + 0x34));
                                if ((int)t8 >= 0) {
                                    t9 = *(int *)((t0 + 0x0));
                                    if ((int)t8 <= (int)t9) {
                                        t10 = *(int *)((t0 + 0x38));
                                        if ((int)t10 >= 0) {
                                            t11 = *(int *)((t0 + 0x0));
                                            if ((int)t10 <= (int)t11) {
                                                t12 = *(int *)0xC2EE98C;
                                                t13 = *(int *)((t12 + 0x8));
                                                if (t13 == 0) {
                                                    t14 = *(int *)((t0 + 0x10));
                                                    t15 = *(short *)((a4 + 0x10));
                                                    if ((int)t15 >= (int)t14) {
                                                        t16 = *(int *)((t0 + 0x18));
                                                        t17 = *(short *)((a4 + 0x12));
                                                        if ((int)t17 >= (int)t16) {
                                                            t18 = *(int *)((t0 + 0x0));
                                                            if (t18 != 0xFF) {
                                                                if (t18 != 0x1FF) {
                                                                    if (t18 != 0x3FF) {
                                                                        if (t18 != 0x7FF) {
                                                                            return;
                                                                        }
                                                                        *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                                        return;
                                                                    }
                                                                    *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                                    return;
                                                                }
                                                                *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                                return;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x0;
                                                            return;
                                                        }
                                                        return;
                                                    }
                                                    return;
                                                }
                                                t19 = *(int *)((t0 + 0x0));
                                                if (t19 != 0xFF) {
                                                    if (t19 != 0x1FF) {
                                                        if (t19 != 0x3FF) {
                                                            if (t19 != 0x7FF) {
                                                                return;
                                                            }
                                                            *(unsigned int *)((a4 + 0x4)) = 0x3;
                                                            return;
                                                        }
                                                        *(unsigned int *)((a4 + 0x4)) = 0x2;
                                                        return;
                                                    }
                                                    *(unsigned int *)((a4 + 0x4)) = 0x1;
                                                    return;
                                                }
                                                *(unsigned int *)((a4 + 0x4)) = 0x0;
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
        return;
    }
}


void ADX_DecodeInfoExADPCM2(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    if ((int)a5 >= (int)0x12) {
        t0 = *(short *)((a4 + 0x0));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | (((unsigned short)t0 << 8) & 0xFF00)) != 0x8000) {
            return;
        }
        t1 = *(short *)((a4 + 0x2));
        if ((int)((unsigned char)((int)t1 >> 8) | ((t1 << 8) & 0xFF00)) < (int)0xE) {
            return;
        }
        t2 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a6 + 0x0)) = ((unsigned char)((int)(unsigned short)t2 >> 8) | (((unsigned short)t2 << 8) & 0xFFFFFF00));
        return;
    }
}


int adxsjd_decode_exec(int a4)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXB_GetStat(t0);
    if (t1 == 0) {
        adxsjd_decexec_start(a4);
    }
    ADXB_ExecHndl(t0);
    t5 = ADXB_GetStat(t0);
    if (t5 == 3) {
        return adxsjd_decexec_end(a4);
    }
    return t5;
}


int ADXSTM_Seek(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = *(int *)((a4 + 0x14));
    t1 = (t0 + 0x7FF);
    if ((int)(t0 + 0x7FF) < 0) {
        t1 = ((t0 + 0x7FF) + 0x7FF);
    }
    t2 = ((int)t1 >> 11);
    if ((int)a5 <= (int)((int)t1 >> 11)) {
        t2 = a5;
    }
    t3 = *(int *)((a4 + 0x10));
    t4 = *(int *)((a4 + 0x8));
    gdFsSeek(t4, (t3 + t2), 0x0);
    return ADXSTM_Tell(a4);
}


void ADXSTM_SetEos(int a4, int a5)
{
    int t0;
    int t1;

    if ((int)a5 >= 0) {
        *(unsigned int *)((a4 + 0x30)) = a5;
    } else {
        t0 = *(int *)((a4 + 0x14));
        t1 = (t0 + 0x7FF);
        if ((int)(t0 + 0x7FF) < 0) {
            t1 = ((t0 + 0x7FF) + 0x7FF);
        }
        *(unsigned int *)((a4 + 0x30)) = ((int)t1 >> 11);
    }
}


int fmMngBit2Num(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = a4;
    t1 = a5;
    t2 = a6;
    t3 = 0x0;
    t4 = (((a5 << 2) << 2) << 2);
    while ((int)t4 > 0) {
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t2 = t5;
        t1 = 0x8;
        for (;;) {
            if (((signed char)t2 & 0x80) == 0) {
                t1 = (t1 - 1);
                t2 = (t2 << 1);
                t3 = (t3 + 0x1);
                if ((int)t1 <= 0) break;
                continue;
            }
            return t3;
        }
        t4 = (t4 - 1);
    }
    return t3;
}


int fmMngChkEmptyData(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    int t5;
    int t6;

    t0 = 0x3C;
    t1 = (a5 + 0x2);
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        if ((unsigned char)t2 == 0xFF) {
            t0 = (t0 - 1);
            if ((int)t0 <= 0) break;
            continue;
        }
        return 0x0;
    }
    t3 = fmcalccrc(0x3E, a5);
    t4 = *(short *)((a5 + 0x3E));
    t7 = 0x0;
    if ((unsigned short)t4 == (unsigned short)t3) {
        t5 = 0x40;
        t6 = a5;
        while (t5 != 0) {
            *(unsigned char *)((t6 + 0x0)) = 0xFF;
            t5 = (t5 - 1);
            t6 = (t6 + 0x1);
        }
        t7 = 0x1;
    }
    return t7;
}


int fmMngSctRefresh(int a4)
{
    int t0;
    int t1;
    int t39;
    int t2;
    int t3;
    int t35;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;

    t0 = *(short *)((a4 + 0x2));
    t1 = *(int *)((a4 + 0x4));
    t39 = 0xFFFFFFFA;
    if (t0 == 0) {
        t2 = *(int *)((a4 + 0xC));
        t3 = syBtFlWrite(t1, t2, 0x40);
        t35 = 0xFFFFFFFE;
        if (t3 == 64) {
            t4 = *(int *)((a4 + 0x14));
            if ((int)t4 > 0) {
                t5 = t3;
                t6 = t4;
                t7 = 0x0;
                t8 = (t1 + 0x40);
                t9 = (t2 + 0x40);
                for (;;) {
                    t10 = *(short *)((t9 + 0x0));
                    if ((unsigned short)t10 != 0xFFFF) {
                        t11 = fmMngChkEmptyData(a4, t9);
                        t5 = t11;
                        if (t5 == 0) {
                            t12 = syBtFlWrite(t8, t9, 0x40);
                            t5 = t12;
                            if (t5 == 64) {
                                t7 = (t7 + 0x1);
                                t8 = (t8 + 0x40);
                                t6 = (t6 - 1);
                                t9 = (t9 + 0x40);
                                if ((int)t6 <= 0) break;
                                continue;
                            }
                            t5 = 0xFFFFFFFE;
                            return t5;
                        }
                        t6 = (t6 - 1);
                        t9 = (t9 + 0x40);
                        if ((int)t6 <= 0) break;
                        continue;
                    }
                    t6 = (t6 - 1);
                    t9 = (t9 + 0x40);
                    if ((int)t6 <= 0) break;
                }
                t14 = *(int *)((a4 + 0x14));
                t15 = *(int *)((a4 + 0x18));
                fmMngNum2Bit(t7, t9, t15);
                t17 = *(int *)((a4 + 0x18));
                t18 = syBtFlWrite((((((t14 + 0x1) << 2) << 2) << 2) + t1), t9, (((t17 << 2) << 2) << 2));
                t19 = *(int *)((a4 + 0x18));
                t20 = 0xFFFFFFFE;
                if (t18 == (((t19 << 2) << 2) << 2)) {
                    *(unsigned int *)((a4 + 0x10)) = t7;
                    t20 = 0x0;
                }
                t28 = t20;
            } else {
                t21 = *(int *)((a4 + 0x14));
                t22 = *(int *)((a4 + 0x18));
                fmMngNum2Bit(0x0, (t2 + 0x40), t22);
                t24 = *(int *)((a4 + 0x18));
                t25 = syBtFlWrite((((((t21 + 0x1) << 2) << 2) << 2) + t1), (t2 + 0x40), (((t24 << 2) << 2) << 2));
                t26 = *(int *)((a4 + 0x18));
                t27 = 0xFFFFFFFE;
                if (t25 == (((t26 << 2) << 2) << 2)) {
                    *(unsigned int *)((a4 + 0x10)) = 0x0;
                    t27 = 0x0;
                }
                t28 = t27;
            }
            t35 = t28;
        }
        t39 = t35;
    }
    return t39;
}


int mwSbSetNumChan(int a4, int a5)
{
    int t0;
    int t1;

    *(unsigned int *)((a4 + 0xC)) = a5;
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((t0 + 0x4));
    return nlsndStreamSetHdChs(t1, a5);
}


int ADXB_ExecOneAiff(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0xAA));
    if (t0 == 1) {
        return ADXB_ExecOneAiff8(a4);
    }
    return ADXB_ExecOneAiff16(a4);
}
